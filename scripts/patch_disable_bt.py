#!/usr/bin/env python3
"""Create firmware image with the Bluetooth input channel disabled.

Patch (1 byte): in the main-loop serial poller (FUN_0800b538), the channel
loop bound `cmp r0, #4` at 0x0800b668 becomes `cmp r0, #2`, so the dispatcher
no longer reads channels 2 (BT module UART6) and 3 (nonexistent - the die has
only 3 UARTs, confirmed via vector table: USART1/2/6 handlers only).

USB (channel 0) and the remaining UART (channel 1) keep working.
Restore at any time by flashing the original firmware/stm32_flash.bin.
"""
import sys, hashlib

SRC = 'firmware/stm32_flash.bin'
DST = 'firmware/stm32_flash_bt_disabled.bin'
PATCH_OFFSET = 0xb668          # immediate byte of `cmp r0, #4` (04 28 -> 02 28)

data = bytearray(open(SRC, 'rb').read())
assert data[PATCH_OFFSET:PATCH_OFFSET + 2] == bytes([0x04, 0x28]), \
    f"unexpected bytes at {PATCH_OFFSET:#x}: {data[PATCH_OFFSET-1:PATCH_OFFSET+1].hex()}"
data[PATCH_OFFSET] = 0x02
open(DST, 'wb').write(data)

def md5(p):
    return hashlib.md5(open(p, 'rb').read()).hexdigest()

diff = sum(1 for a, b in zip(open(SRC, 'rb').read(), data) if a != b)
print(f"patched {diff} byte(s) -> {DST}")
print(f"  original: {md5(SRC)}")
print(f"  patched : {md5(DST)}")
