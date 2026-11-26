#!/usr/bin/env python3
"""Raw STM32 UART-bootloader flash dumper - one session, incremental save.

Usage: python3 scripts/raw_dump.py [output.bin]   (default: firmware/stm32_flash.bin)
"""
import serial, sys, time

PORT = '/dev/ttyUSB0'
OUT = sys.argv[1] if len(sys.argv) > 1 else 'firmware/stm32_flash.bin'
MAX_SIZE = 1024 * 1024          # try up to 1 MB, stop earlier on NACK
BLOCK = 256

def s_open():
    return serial.Serial(PORT, 115200, parity=serial.PARITY_EVEN,
                         bytesize=8, stopbits=1, timeout=1.0)

def cmd(s, b, nretries=3):
    """send command byte with checksum, expect ACK"""
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

def read_mem(s, addr, n):
    # read memory command
    if not cmd(s, 0x11):
        return None
    a = bytes([(addr >> 24) & 0xFF, (addr >> 16) & 0xFF, (addr >> 8) & 0xFF, addr & 0xFF])
    cs = a[0] ^ a[1] ^ a[2] ^ a[3]
    s.reset_input_buffer()
    s.write(a + bytes([cs]))
    r = s.read(1)
    if r != b'\x79':
        return None
    s.reset_input_buffer()
    s.write(bytes([n - 1, (n - 1) ^ 0xFF]))
    r = s.read(1)
    if r != b'\x79':
        return None
    data = bytearray()
    while len(data) < n:
        chunk = s.read(n - len(data))
        if not chunk:
            return None
        data += chunk
    return bytes(data)

def handshake():
    s = s_open()
    t0 = time.time()
    print("probing — do the BOOT+RESET dance now if not already in bootloader...", flush=True)
    while time.time() - t0 < 120:
        s.reset_input_buffer()
        s.write(b'\x7f')
        r = s.read(2)
        if r == b'\x79':
            return s
        if r:
            print("  reply:", r.hex(), flush=True)
        time.sleep(1.0)
    s.close()
    return None

def main():
    s = handshake()
    if not s:
        print("no bootloader. Redo: hold BOOT, tap RESET, release BOOT.")
        sys.exit(1)
    print("bootloader ACKed")

    # Get ID: 0x02 (cmd() sends 0x02 + checksum 0xFD, waits for ACK)
    if cmd(s, 0x02):
        r = s.read(8)   # [count, pid_hi, pid_lo, ack]
        if len(r) >= 4:
            pid = (r[1] << 8) | r[2]
            print(f"PID: 0x{pid:04x}")
        else:
            print("Get ID reply short:", r.hex())
    else:
        print("Get ID command failed (continuing anyway)")

    total = 0
    data = bytearray()
    t0 = time.time()
    addr = 0x08000000
    with open(OUT, 'wb') as f:
        while total < MAX_SIZE:
            blk = read_mem(s, addr, BLOCK)
            if blk is None:
                print(f"\nNACK/timeout at 0x{addr:08x} after {total} bytes - stopping here.", flush=True)
                break
            f.write(blk)
            f.flush()
            data += blk
            total += BLOCK
            addr += BLOCK
            if total % 16384 == 0:
                print(f"  {total} bytes ({100.0*total/MAX_SIZE:.0f}%) {time.time()-t0:.0f}s", flush=True)

    print(f"saved {total} bytes -> {OUT}", flush=True)
    # trim trailing all-FF pages for convenience, keep original too
    s.close()
    print("done. Now power-cycle the machine normally (no BOOT).")

if __name__ == '__main__':
    main()
