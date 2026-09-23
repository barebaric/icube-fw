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

## Legal

`firmware/stm32_flash.bin` contains SculpFun's copyrighted firmware, dumped
from a personally owned device for interoperability and research. Do not
redistribute without considering the vendor's rights.
