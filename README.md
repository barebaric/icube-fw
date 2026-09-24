# SculpFun iCube (QV3 board, 2024) firmware reverse engineering

This repo documents the extraction and analysis of the firmware from a
**SculpFun iCube** laser engraver, 2024 hardware revision (**QV3** mainboard).

![Mainboard MCU: STM32F4-class Cortex-M4 with BOOT/TDE silkscreen](docs/photos/PXL_20260923_224828329.jpg)

The 2024 iCube is **not** based on an ESP32 (unlike the 2023 MV/QV revisions).
It uses an **STM32F4-class Cortex-M4** MCU (marked `STM32F402RG T6`, bootloader
PID `0x423`), an external **Feasycom FSC-BT836** Bluetooth module, and a CH340
USB-serial bridge wired to the MCU's USART1.

## Repo layout

| Path | Contents |
|---|---|
| `firmware/stm32_flash.bin` | full 256 KB flash dump read from the device |
| `firmware/stm32_flash_noflame.bin` | recommended image: stock firmware + **only** the flame auto-shutdown fix (4-byte NOP); Bluetooth and everything else untouched |
| `firmware/stm32_flash_bt_disabled.bin` | dump + BT input channel disabled (1-byte poller patch) |
| `firmware/stm32_flash_noflame_watchdog.bin` | hardened variant: BT disabled, flame fix, IWDG + stall watchdogs added (see `NOTES.md`) |
| `decomp/all_stm32_qv3.c` | Ghidra decompilation (711 functions) |
| `scripts/raw_dump.py` | STM32 UART-bootloader flash dumper (worked on this device) |
| `scripts/flash_wait.py` | waits for the bootloader, then flashes + verifies an image |
| `scripts/flash_writer.py` | selective-sector writer (erase command NACKs on this board; kept for record) |
| `scripts/usbmon_sniff.py` | Linux usbmon packet sniffer for the CH340 link |
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
