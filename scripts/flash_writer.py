#!/usr/bin/env python3
"""Flash a patched image onto the iCube QV3 board via the STM32 UART
bootloader (same protocol as raw_dump.py).

Erases only the sectors that actually change (0, 3, 4) so the GRBL
settings page is preserved, writes the patched image back, and reads
it all back for verification.

NOTE: on this board the selective-erase (0x44) command NACKs, so this
script cannot complete. `stm32loader -e -w -v` (full chip erase) is the
reliable path and is what scripts/flash_wait.py uses. Kept for record.

Usage:
    1. hold BOOT, tap RESET, release BOOT  (bootloader beeps ACK)
    2. python3 flash_writer.py firmware/stm32_flash_noflame_watchdog.bin
    3. power-cycle the machine normally (no BOOT)
"""
import sys, time
import serial

PORT = '/dev/ttyUSB0'
BLOCK = 256
SECTORS = {                    # sector code -> (start, length)
    0x00: (0x08000000, 0x04000),
    0x03: (0x0800C000, 0x04000),
    0x04: (0x08010000, 0x10000),
}

def s_open():
    return serial.Serial(PORT, 115200, parity=serial.PARITY_EVEN,
                         bytesize=8, stopbits=1, timeout=1.0)

def cmd(s, b, nretries=3):
    for _ in range(nretries):
        s.reset_input_buffer()
        s.write(bytes([b, b ^ 0xFF]))
        r = s.read(1)
        if r == b'\x79':
            return True
        if r == b'\x1f':
            continue
        time.sleep(0.2)
    return False

def handshake():
    s = s_open()
    t0 = time.time()
    print("probing - do the BOOT+RESET dance now...", flush=True)
    while time.time() - t0 < 120:
        s.reset_input_buffer()
        s.write(b'\x7f')
        if s.read(1) == b'\x79':
            return s
        time.sleep(1.0)
    s.close()
    return None

def read_mem(s, addr, n):
    if not cmd(s, 0x11):
        return None
    a = bytes([(addr >> 24) & 0xFF, (addr >> 16) & 0xFF,
               (addr >> 8) & 0xFF, addr & 0xFF])
    s.reset_input_buffer()
    s.write(a + bytes([a[0] ^ a[1] ^ a[2] ^ a[3]]))
    if s.read(1) != b'\x79':
        return None
    s.reset_input_buffer()
    s.write(bytes([n - 1, (n - 1) ^ 0xFF]))
    if s.read(1) != b'\x79':
        return None
    out = bytearray()
    while len(out) < n:
        chunk = s.read(n - len(out))
        if not chunk:
            return None
        out += chunk
    return bytes(out)

def erase_sectors(s, codes):
    """ERASE MEMORY (0x44), selective: [N-1][code1..codeN][xor]"""
    if not cmd(s, 0x44):
        return False
    payload = bytes([len(codes) - 1]) + bytes(codes)
    cs = 0
    for b in payload:
        cs ^= b
    s.reset_input_buffer()
    s.write(payload + bytes([cs]))
    return s.read(1) == b'\x79'

def write_mem(s, addr, data):
    if not cmd(s, 0x31):
        return False
    a = bytes([(addr >> 24) & 0xFF, (addr >> 16) & 0xFF,
               (addr >> 8) & 0xFF, addr & 0xFF])
    s.reset_input_buffer()
    s.write(a + bytes([a[0] ^ a[1] ^ a[2] ^ a[3]]))
    if s.read(1) != b'\x79':
        return False
    assert len(data) <= 256 and len(data) % 4 == 0
    cs = len(data) - 1
    for b in data:
        cs ^= b
    s.reset_input_buffer()
    s.write(bytes([len(data) - 1]) + data + bytes([cs]))
    return s.read(1) == b'\x79'

def main():
    image = open(sys.argv[1], 'rb').read()
    s = handshake()
    if not s:
        print("no bootloader. Redo: hold BOOT, tap RESET, release BOOT.")
        sys.exit(1)
    print("bootloader ACKed")

    print("erasing sectors 0, 3, 4 ...", flush=True)
    if not erase_sectors(s, [0x00, 0x03, 0x04]):
        print("selective erase failed - try global erase manually.")
        sys.exit(1)

    for code, (start, length) in SECTORS.items():
        chunk = image[start - 0x08000000: start - 0x08000000 + length]
        print(f"writing 0x{start:08x} ({length} bytes)...", flush=True)
        for off in range(0, length, BLOCK):
            blk = chunk[off:off + BLOCK]
            if blk == b'\xff' * len(blk) and off == 0:
                pass  # first block of a sector: write anyway (erase state == ff, but be safe)
            if write_mem(s, start + off, blk) is False:
                print(f"\nwrite failed at 0x{start + off:08x}")
                sys.exit(1)
            print(f"\r  {off + len(blk)}/{length}", end="", flush=True)
        print()

    print("verifying ...", flush=True)
    ok = True
    for code, (start, length) in SECTORS.items():
        back = read_mem(s, start, length)
        want = image[start - 0x08000000: start - 0x08000000 + length]
        if back != want:
            print(f"  VERIFY FAIL at 0x{start:08x}")
            ok = False
        else:
            print(f"  0x{start:08x} OK")
    s.close()
    print("done. Power-cycle normally (no BOOT) and check `raydriver status`." if ok
          else "FAILED - power-cycle and re-flash the original dump.")
    sys.exit(0 if ok else 1)

if __name__ == '__main__':
    main()
