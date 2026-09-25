"""Wait for the STM32 ROM bootloader, then flash+verify a firmware image.

Usage: python3 scripts/flash_wait.py [firmware/image.bin]

Defaults to the recommended patched image. Watches /dev/ttyUSB0 for the
bootloader handshake (0x7F -> 0x79) so the operator can do the BOOT+RESET
dance whenever ready; flashes as soon as the chip ACKs.
"""

import subprocess, sys, time
import serial

IMAGE = sys.argv[1] if len(sys.argv) > 1 else \
    "firmware/stm32_flash_noflame_watchdog_bt.bin"

s = serial.Serial("/dev/ttyUSB0", 115200, parity=serial.PARITY_EVEN,
                  bytesize=8, stopbits=1, timeout=1.0)
print("waiting for bootloader (do the BOOT+RESET dance)...", flush=True)
t0 = time.time()
ok = False
while time.time() - t0 < 1800:
    s.reset_input_buffer()
    s.write(b"\x7f")
    if s.read(1) == b"\x79":
        ok = True
        print("bootloader ACKed - flashing...", flush=True)
        break
    time.sleep(1.0)
s.close()
if not ok:
    print("TIMEOUT waiting for bootloader"); sys.exit(1)
time.sleep(0.5)
r = subprocess.run(["/home/sam/Documents/projects/code/raydriver/.venv/bin/stm32loader",
                    "-p", "/dev/ttyUSB0", "-b", "115200", "-P", "even",
                    "-e", "-w", "-v", IMAGE])
print("FLASH_OK" if r.returncode == 0 else "FLASH_FAILED", flush=True)
