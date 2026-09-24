# SculpFun iCube QV3 — firmware reverse engineering notes

Target: SculpFun iCube laser engraver, 2024 hardware, mainboard revision **QV3**
(internal firmware name `SC_iCube_QV3`).

## TL;DR

- MCU: **STM32F4-class Cortex-M4**, LQFP-64, marked `STM32F402RG T6`
  (not an official ST part number; bootloader reports **PID 0x423**).
- 8.000 MHz HSE crystal, 256 KB flash, external **Feasycom FSC-BT836 V2.1**
  Bluetooth module (firmware reports `[BT_VER:8.1.2,FSC-BT836B]`).
- CH340 USB-serial bridge wired to the MCU's USART1 — the same port used by
  grbl, the vendor's flash tool, and the ROM bootloader.
- Firmware: grbl 1.1h derived, reports `[VER:1.0.15,20240923:]` and
  `[MSG:mechine:Sculpfun iCube]` (sic).
- Full flash dumped via the silkscreened **BOOT**/`RESET` buttons and the STM32
  ROM UART bootloader; decompiled with Ghidra.

## Board notes (from photos in `docs/photos/`)

- `PXL_20260923_224828329.jpg` — MCU close-up: `STM32F402RG T6`, silkscreen
  **BOOT** and **TDE** next to an 8.000 MHz crystal, X-stepper connector (red
  JST) and the 24 V rail.
- `PXL_20260923_223526115.jpg` / `PXL_20260923_224430427.jpg` — board overview:
  stepper drivers under heatsinks, "Sculpfun iCube" + 24 V silkscreen.
- `PXL_20260923_224422523.jpg` — Feasycom **FSC-BT836 V2.1** module with PCB
  antenna, GND/S/LED pads nearby.

Important hardware quirk: **the CH340 is powered from the switched 24 V rail** —
with the power switch OFF the USB device does not enumerate at all (open port
dies with `errno 5`). The machine is *not* powered over USB, unlike the older
ESP32-based revisions.

## Firmware identification

Live session over USB (`$I` command):

```
[VER:1.0.15,20240923:]
[OPT:VMP,31,511]
[MSG:mechine:Sculpfun iCube]
[MSG:Mode=BT]
[BT_VER:8.1.2,FSC-BT836B]
```

Strings found in the dump:

| Address | String |
|---|---|
| 0x0800_3e58 | `1:/SC_iCube_QV3.bin` (internal OTA file name → QV3 revision) |
| 0x0800_d0fc | `[VER:1.0.15,20240923:` |
| 0x0800_d11c | `[MSG:mechine:Sculpfun iCube]` |
| 0x0800_d14c | `[BT_VER:` |
| 0x0800_ec90 | `*[ESP504]baud -- set bt baud` |
| 0x0801_96e0 | `*[ESP501..503]baud -- debug/lcd/bt baud` |

The `ESPxxx` command namespace and `TDE` silkscreen point at an MKS-lineage
firmware ported from the ESP32 grbl builds to STM32.

## Dump procedure

1. Machine power **ON** (the CH340 needs the switched rail; USB alone is not enough).
2. **Hold BOOT**, tap **RESET**, release BOOT. The MCU now runs its ROM
   bootloader on USART1 (the CH340 port), 115200 8N1 with even parity.
3. Handshake: send `0x7F` → expect `0x79` (ACK).
4. `scripts/raw_dump.py` reads flash at `0x08000000` in 256-byte blocks and
   stops when the bootloader NACKs past the end of flash.

Result: **262144 bytes** (`firmware/stm32_flash.bin`); reads past `0x08040000`
are NACKed — the flash is 256 KB.

Note: the vendor's "Sculpfun LaserTool" is a PyInstaller bundle of plain
esptool and only applies to the older ESP32 boards; it cannot talk to the QV3.

## What did NOT work (for the record)

- esptool (default reset, all 16 DTR/RTS line-state transitions, multi-pulse
  EN sequences) — wrong chip family, and DTR/RTS auto-reset is not wired.
- `ESP444 RESTART` — plain software reboot, no download-mode hook.
- Power-off "hold the lines" tricks — the CH340 loses power with the machine.

## Decompile

Ghidra 12.1.4, native ARM processor, base address `0x08000000`:

```bash
analyzeHeadless <proj> ICubeSTM -processor ARM:LE:32:v7 \
  -loader BinaryLoader -loader-baseAddr 0x08000000 \
  -import firmware/stm32_flash.bin \
  -postScript DecompileAll.java
```

Output: `decomp/all_stm32_qv3.c` — 711 functions, no failed decompilations.

Example: the `$I` report function (`FUN_0800cb86`) prints the version string,
builds `[OPT:V,M,P,31,511]` byte-by-byte, then machine name, BT mode, and
queries the BT module.

## Device settings (live `$$` output, excerpt)

```
$0=10 $1=25 $2=0 $3=4 $4=0 $5=1 $6=0 $10=1 $11=0.010 $12=0.002 $13=0
$20=0 $21=1 $22=1 $23=7 $24=1500.000 $25=3000.000 $26=250 $27=3.000 $28=1000.000
$30=1000 $31=0 $32=1 $41=1 $42=0 $43=0 $44=1 $45=0
$90=80.000 $91=100.000
$100=80.000 $101=80.000 $102=100.000
$110=10000.000 $111=10000.000 $112=6000.000
$120=300.000 $121=300.000 $122=500.000
$130=130.000
```

Compared to the 2023 ESP32 builds: the WiFi group ($50–$54) is gone (external
BT module instead), $40/$46/$47 are gone, and $90/$91 are new (80/100 — likely
rotary-related).

## History / context

The 2023 iCube revisions (MV/QV mainboards) were ESP32-based
`Grbl_ESP32` + ESP3D-WEBUI builds. They were analyzed first and turned out to
be irrelevant to the QV3 (different CPU family), so those artifacts were
removed from this repo. Official 2023 images, should anyone need them:
[sculpfun.com download center](https://www.sculpfun.com/pages/download-center)
and [diode-laser-wiki firmware page](https://diode-laser-wiki.com/documentation/firmware-update/).
The v1.0.15 (2024-09-23) firmware on QV3 hardware has never been published by
the vendor; this dump is currently the only public copy.

## Disabling the Bluetooth channel (software patch)

The BT module hangs off UART6/stream "channel 2" (`AT+VER`/`AT+BAUD=%d` are
written to stream 2; ESP503/ESP504). The main-loop serial poller
(`FUN_0800b538`) round-robins channels 0..3 via `getc`/dispatch. The vector
table shows only three real UART ISRs (USART1 = USB/CH340, USART2, USART6) —
channel 3 never receives data.

Patch (`scripts/patch_disable_bt.py`): one byte at `0x0800b668`,
`cmp r0, #4` → `cmp r0, #2`, so the dispatcher only polls channels 0 (USB)
and 1 — the BT channel (2) and the phantom channel (3) are never read.
Everything else, including USB grbl, is untouched.

```
original: 50fa80787b7a0a1205015f94a06bb4ca  firmware/stm32_flash.bin
patched : 81178c7620bffb14208e015f26cc0ee4  firmware/stm32_flash_bt_disabled.bin
```

Flash the patched image (BOOT+RESET dance first):

```bash
stm32loader -p /dev/ttyUSB0 -b 115200 -e -w -v firmware/stm32_flash_bt_disabled.bin
```

Restore the original at any time the same way with `firmware/stm32_flash.bin`.
Note the radio itself still powers up and advertises; only the MCU-side input
channel is severed. For a fully silent device, remove the FSC-BT836 module.

**Live test (verified)**: after flashing, `$I` returns `[BT_VER:]` (empty —
the module response no longer reaches the dispatcher, vs.
`[BT_VER:8.1.2,FSC-BT836B]` before the patch), grbl responds normally over
USB, and the machine operates as usual.

## The job-wedge bug (root cause: flame-check auto-shutdown)

Long G-code jobs died at seemingly random times (40 s to 3 h into a run): the
machine stopped acknowledging lines, soft resets sometimes helped, sometimes
only a power cycle brought it back. Systematic elimination ruled out the host,
the driver, the G-code content, and the Bluetooth module (crashes continued
with the BT input channel patched out).

The actual cause is a vendor safety feature: a **flame-detection monitor task**
(the `FlCk` seen in status reports). Its logic, fully reverse engineered:

- `FUN_08016a0c` calls `xTaskCreate` for the monitor at `FUN_0801696c` —
  **unconditionally, on every boot**. No `$` setting gates it.
- The monitor reads a sensor every 10 ms (`FUN_08015bee`); after **10
  consecutive "hot" readings** it broadcasts
  `Flame sensor triggered, please check!The machine has stopped working, it
  can only resume normal operation afterbeing powered up again.`
  (string at `0x0801996c`), stops motion, and sets a global shutdown flag at
  `0x2000c1e8`.
- That flag is checked in **28 places** (protocol loop, `$` handler, report
  builder, …) — the machine refuses all work until power-cycled, exactly as
  the message says.

With the optional flame-sensor module not installed, the sensor input floats
and false-triggers — explaining the random timing. Run 7's host log caught the
trigger in the act: a fragmented `[MSG:` (start of the flame message) escaped
onto the wire right at the wedge moment.

**Fix**: NOP the 4-byte `bl 0x8016a0c` task-creation call at `0x08012d12`.

## The minimal image (`stm32_flash_noflame.bin`)

Stock firmware + exactly one change: the 4-byte NOP over the flame-task
creation call (root-cause fix above). Bluetooth enabled, ROLLER/FlCk status
fields intact, stock UART timing, no watchdogs. Built directly from
`firmware/stm32_flash.bin`; verified to differ from it in exactly 4 bytes.

```
original : (firmware/stm32_flash.bin)
minimal  : 1257742c0f9cc102f5315d0ea6ff82cdd63db8c94ddb8fe16d56cf71d2ab28a9  firmware/stm32_flash_noflame.bin
hardened : d1fa73db5edc6f6c8d3aab8be8e6d1461e0761fac99557226c7ffd596c5f3286  firmware/stm32_flash_noflame_watchdog.bin
```

Flash either with `python3 scripts/flash_wait.py <image>` (BOOT+RESET dance,
then power-cycle normally).

## The hardened image (`stm32_flash_noflame_watchdog.bin`)

Built on top of `stm32_flash_bt_disabled.bin` (BT channel already severed,
see above). This variant additionally removes the BT channel, adds the
watchdog hardening described below, and strips the ROLLER/FlCk report
fields. Contains:

| Change | Location | Purpose |
|---|---|---|
| flame task creation NOPed | `0x08012d12` | root-cause fix: no monitor, no false shutdown |
| ROLLER/FlCk status fields removed | branch retarget `0x0800d055` | dead feature, shrinks reports |
| TXE busy-wait spins NOPed | `0x0800dfda`, `0x0800dff2`, `0x0800e00a` | no infinite spin if a channel's TX FIFO stalls |
| HardFault-class vectors → recorder stub | vector table → `0x0801A000` | prints `HF:<PC> <LR>` then self-resets |
| SysTick stall watchdog | vector[15] → `0x0801AC00` | if the RX ring holds unacked bytes for 30 000 consecutive ticks: emits `WD:<pending bytes>` (the lines the machine choked on) then self-resets |
| IWDG (independent watchdog) | boot stub at vector[1] → `0x0801AE00` | started before anything else (PR=6, RLR=0xFFF ≈ 33 s); fed only from the serial poller's `getc` call site (patched `bl` at `0x0800b6ac` → feed stub `0x0801AE80`) — any main-loop wedge, even one that masks interrupts, causes a hardware reset |

All stubs live in previously-erased flash (`0x0801A000`–`0x0801AE98`) and were
validated in Unicorn emulation before flashing; the IWDG was additionally
verified live (a feed-less canary build produced a boot banner every ~33 s).

The watchdogs are *defense in depth*: with the flame monitor gone they should
never fire, but if anything else ever wedges the machine it now self-recovers
in ≈33 s instead of bricking until a power cycle.

```
original : (firmware/stm32_flash.bin)
bt-disab.: 81178c7620bffb14208e015f26cc0ee4  firmware/stm32_flash_bt_disabled.bin
final    : d1fa73db5edc6f6c8d3aab8be8e6d1461e0761fac99557226c7ffd596c5f3286  firmware/stm32_flash_noflame_watchdog.bin
```

Flash it (BOOT+RESET dance first — `scripts/flash_wait.py` watches for the
bootloader and flashes as soon as the chip ACKs, then power-cycle normally):

```bash
python3 scripts/flash_wait.py
# or explicitly:
stm32loader -p /dev/ttyUSB0 -b 115200 -P even -e -w -v \
  firmware/stm32_flash_noflame_watchdog.bin
```

**Live verification**: with this image the machine ran a 28 290-line,
~3.5-hour G-code job (`long.gcode`, F960) well past every point where the
stock/BT-patched firmware had previously died (40 s, 2:42, 16:19, 20:48,
58:43, 103:31) with zero stalls and zero warnings.

## Legal

`firmware/stm32_flash.bin` contains SculpFun's copyrighted firmware, dumped
from a personally owned device for interoperability and research. Do not
redistribute without considering the vendor's rights.
