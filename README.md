# SculpFun iCube (QV3 board, 2024) firmware reverse engineering

This repo documents the extraction and analysis of the firmware from a
**SculpFun iCube** laser engraver, 2024 hardware revision (**QV3** mainboard),
and provides patched firmware images that fix the flame-sensor false-shutdown
bug. **If you just want to fix your machine, start with the quick start below.**

![Mainboard MCU: STM32F4-class Cortex-M4 with BOOT/TDE silkscreen](docs/photos/PXL_20260923_224828329.jpg)

## Quick start — flash the flame fix

The stock firmware runs a flame-detection safety task that false-triggers on
machines **without the optional flame sensor installed**: the sensor input
floats, the task reads "flame", and the machine stops mid-job and refuses all
work until you power-cycle it. The patched images disable that task.

Flashing rewrites only the MCU's 256 KB firmware flash. Your `$` settings and
calibration are **not** stored there (they live on an external storage chip),
so they stay unchanged — as do Bluetooth pairing and everything else outside
the firmware image itself.

### What you need

- The machine powered from its own supply. **USB alone does not power the
  board** — the USB-serial chip (CH340) needs the machine's switched 24 V rail,
  so the power switch must be ON for the port to even appear.
- A USB cable to the machine's USB port.
- Linux: the port appears as `/dev/ttyUSB0`. On Windows it is a `COMx` port,
  on macOS `/dev/cu.usbserial-*`. The helper scripts assume Linux; on other
  systems use `stm32loader` directly (command below).
- Python 3 with two packages: `pip install pyserial stm32loader`
- This repo (you need the `firmware/` images and `scripts/`).

### Which image?

| You want | Flash this file |
|---|---|
| Smallest possible change (**recommended**): stock firmware + the 4-byte flame fix only, Bluetooth kept | `firmware/stm32_flash_noflame.bin` |
| Flame fix + Bluetooth + watchdogs that self-recover the machine from any future hang | `firmware/stm32_flash_noflame_watchdog_bt.bin` |
| Exact factory state (recovery baseline) | `firmware/stm32_flash.bin` |

All five images and their differences: [comparison table below](#firmware-images).

### Flashing, step by step

1. Connect USB and switch the machine **ON**.
2. Start the flasher in a terminal:

   ```bash
   python3 scripts/flash_wait.py firmware/stm32_flash_noflame_watchdog_bt.bin
   ```

   It prints `waiting for bootloader...` and keeps probing the port — you can
   take your time with the next step.
3. On the mainboard, **hold BOOT**, tap **RESET**, then release BOOT. Both are
   small silkscreened buttons next to the MCU (the reset button is labelled
   `TDE` on the board photos). The chip now runs its ROM bootloader on the
   same USB-serial port; the script detects it and flashes + verifies
   automatically (about a minute).
4. When it prints `FLASH_OK`, power-cycle the machine normally (switch off/on,
   no buttons held). It now boots the new firmware.
5. Sanity check: send `$I` from your G-code sender (115200 baud) — you should
   get the usual version report, and jobs no longer die at random.

Manual alternative (any OS; do the BOOT+RESET dance first, then):

```bash
stm32loader -p /dev/ttyUSB0 -b 115200 -P even -e -w -v firmware/stm32_flash_noflame_watchdog_bt.bin
```

Replace `/dev/ttyUSB0` with your port (e.g. `COM3` on Windows). `-e -w -v`
means erase, write, verify.

### Back up your current firmware / restore factory state

Yes — the same bootloader can **read** the whole flash, so you can keep a
fallback copy of whatever is on your machine right now:

1. Machine ON, then hold **BOOT**, tap **RESET**, release **BOOT**.
2. Dump the flash to a file of your choice:

   ```bash
   python3 scripts/raw_dump.py my_backup.bin
   ```

   (Reads 256 KB from `0x08000000`; takes a few minutes.)
3. Restore it any time by flashing that file exactly like any other image:

   ```bash
   python3 scripts/flash_wait.py my_backup.bin
   ```

Note that `firmware/stm32_flash.bin` in this repo is already a complete factory
dump (v1.0.15, 2024-09-23) from a QV3 board — if your machine runs that
version, you can restore factory state with it directly, no dumping needed.

> **Safety note:** the flame monitor is a fire-safety feature. These patches
> are intended for machines where the optional sensor is *not* installed and
> the floating input false-triggers. If you disable flame detection, never
> leave a running laser unattended.

## Can I disable the flame sensor in hardware instead?

Yes — it is a plain logic-level input, not a communication protocol:

- The sensor signal goes to MCU pin **PC4** (GPIOC, pin 4). The firmware
  configures it as an input **with no pull-up or pull-down** and samples it
  every 10 ms.
- It is **active-low**: 10 consecutive LOW readings (~100 ms) trigger the
  shutdown (`ALARM:11`, the "Flame sensor triggered…" message, and the machine
  refuses work until power-cycled). With no sensor plugged in, the floating
  pin drifts low and false-triggers — that is the entire bug.
- The "inactive" level is therefore **HIGH (3.3 V)**. Holding PC4 high
  disables the feature in hardware, e.g. with a 4.7–10 kΩ resistor from the
  flame-sensor signal line to 3.3 V. If a sensor module is fitted and actively
  drives the line low, disconnect its signal first — a weak pull-up cannot
  override a driven output.

Caveats: the exact connector and pinout of the optional flame module are not
documented in this repo (see board photos in `docs/photos/`). Locate the flame
connector, verify the signal pin with a multimeter, and keep clear of the 24 V
rail. The firmware fix above is the cleaner, fully reversible option.

Firmware-level detail: the monitor task (`0x0801696c`) is created
unconditionally on every boot by `0x08016a0c` — no `$` setting gates it. The
pin read is `FUN_08015bee` (`GPIOC_IDR & 0x10`), and the shutdown flag lives at
`0x2000c1e8`. The patch NOPs the 4-byte task-creation call at `0x08012d12`.
Full analysis in `NOTES.md`.

---

## Hardware summary

The 2024 iCube is **not** based on an ESP32 (unlike the 2023 MV/QV revisions).
It uses an **STM32F4-class Cortex-M4** MCU (marked `STM32F402RG T6`, bootloader
PID `0x423`), an external **Feasycom FSC-BT836** Bluetooth module, and a CH340
USB-serial bridge wired to the MCU's USART1.

## Firmware images

| Image | Bluetooth | Flame auto-off | ROLLER/FlCk fields | Watchdogs | Use when |
|---|---|---|---|---|---|
| `stm32_flash.bin` | ✔ | ✔ | ✔ | — | you want the device exactly as shipped (recovery baseline) |
| `stm32_flash_noflame.bin` | ✔ | ✘ fixed | ✔ | — | **recommended** — only the root-cause fix (4-byte NOP); maximum stock fidelity |
| `stm32_flash_bt_disabled.bin` | ✘ severed | ✔ | ✔ | — | you want the radio's serial input muted but no other changes |
| `stm32_flash_noflame_watchdog.bin` | ✘ severed | ✘ fixed | ✘ removed | IWDG + stall + HardFault | you want self-recovery from any future hang; radios off, minimal reports |
| `stm32_flash_noflame_watchdog_bt.bin` | ✔ | ✘ fixed | ✘ removed | IWDG + stall + HardFault | the hardened variant with Bluetooth re-enabled |

"Flame auto-off" is the vendor safety task that false-triggers on machines
without the optional flame sensor and bricks the board until a power cycle —
see `NOTES.md` for the full analysis. All images flash the same way:
`python3 scripts/flash_wait.py <image>` (BOOT+RESET dance, then power-cycle).

## Repo layout

| Path | Contents |
|---|---|
| `firmware/` | the five flash images compared in the table above |
| `decomp/all_stm32_qv3.c` | Ghidra decompilation (711 functions) |
| `scripts/raw_dump.py` | STM32 UART-bootloader flash dumper (worked on this device); optional output-file argument |
| `scripts/flash_wait.py` | waits for the bootloader, then flashes + verifies an image (uses `stm32loader` from PATH or `python -m stm32loader`) |
| `scripts/flash_writer.py` | selective-sector writer (erase command NACKs on this board; kept for record) |
| `scripts/usbmon_sniff.py` | Linux usbmon packet sniffer for the CH340 link |
| `scripts/launch_run.sh.py` | launches an instrumented job (usbmon sniffer + strace + `raydriver run`) |
| `scripts/wait_machine_back.sh` | polls until the machine answers IDLE again (post-wedge recovery watcher) |
| `scripts/ghidra/DecompileAll.java` | Ghidra headless script used for the decompile |
| `docs/photos/` | mainboard photos taken during the process |
| `NOTES.md` | full reverse-engineering write-up |

## How the dump was made

The board exposes two silkscreened buttons, **BOOT** and **RESET**. Holding
**BOOT** while tapping **RESET** boots the STM32 into its ROM UART bootloader
on the same CH340 port (`/dev/ttyUSB0`, 115200 8E1):

```bash
python3 scripts/raw_dump.py        # 0x7F handshake → 256 KB read from 0x08000000
```

See `NOTES.md` for the full story, firmware contents, the job-wedge root
cause (vendor flame auto-shutdown false-triggering), and reproduction steps.