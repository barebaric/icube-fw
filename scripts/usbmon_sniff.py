#!/usr/bin/env python3
"""usbmon sniffer - accumulates reads until a full record is consumed.

Event layout (verified empirically against this kernel, 48-byte
header): id(u64) type(u8) xfer(u8) epnum(u8) devnum(u8) busnum(u16)
flag_setup(s8) flag_data(s8) ts_sec(s64) ts_usec(s32) status(s32)
length(u32) len_cap(u32) setup[8], followed by len_cap data bytes.
"""
import datetime, struct, sys

BUS, DEV = int(sys.argv[1]), int(sys.argv[2])
OUT = open(sys.argv[3], "w", buffering=1)
XFER = {0: "iso", 1: "intr", 2: "ctrl", 3: "bulk"}
HDR = struct.Struct("=QBBB BH bb q i i I I 8s")
TYPES = {0x53, 0x43, 0x45}  # 'S', 'C', 'E'

fd = open(f"/dev/usbmon{BUS}", "rb", buffering=0)
print(f"sniffing bus {BUS} dev {DEV} -> {sys.argv[3]}", file=sys.stderr)

buf = b""
resyncs = 0
while True:
    while len(buf) < HDR.size:
        chunk = fd.read(1 << 16)
        if chunk:
            buf += chunk
    if buf[8] not in TYPES or buf[12] | (buf[13] << 8) != BUS:
        # Lost sync (dropped record boundary): scan for the next
        # plausible event start instead of trusting the offset.
        resyncs += 1
        if resyncs % 100 == 1:
            print(f"resync #{resyncs}", file=sys.stderr)
        buf = buf[1:]
        continue
    pkt_id, ptype, xfer, epnum, devnum, busnum, _fs, _fd_, ts_sec, \
        ts_usec, status, length, len_cap, _setup = HDR.unpack_from(buf, 0)
    total = HDR.size + len_cap
    while len(buf) < total:
        chunk = fd.read(1 << 16)
        if chunk:
            buf += chunk
    record, buf = buf[:total], buf[total:]
    if devnum != DEV:
        continue
    payload = record[HDR.size:]
    ts = datetime.datetime.fromtimestamp(
        ts_sec + ts_usec / 1e6, tz=datetime.timezone.utc
    ).strftime("%H:%M:%S.%f")[:-3]
    hexd = payload[:96].hex()
    OUT.write(f"{ts} {pkt_id:016x} {chr(ptype)} {XFER.get(xfer, xfer)} "
              f"ep{epnum & 0x7F}{'IN' if epnum & 0x80 else 'OUT'} "
              f"status={status} len={length} cap={len_cap} {hexd}\n")
