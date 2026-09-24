#!/usr/bin/env python3
"""usbmon sniffer - accumulates reads until a full record is consumed."""
import datetime, struct, sys

BUS, DEV = int(sys.argv[1]), int(sys.argv[2])
OUT = open(sys.argv[3], "w", buffering=1)
XFER = {0: "iso", 1: "intr", 2: "ctrl", 3: "bulk"}
HDR = struct.Struct("=QBBB BH bb q i i I I 8s i i I I".replace(" ", ""))

fd = open(f"/dev/usbmon{BUS}", "rb", buffering=0)
print(f"sniffing bus {BUS} dev {DEV} -> {sys.argv[3]}", file=sys.stderr)

buf = b""
def read_more():
    global buf
    chunk = fd.read(1 << 16)
    if chunk:
        buf += chunk
    return bool(chunk)

while True:
    while len(buf) < HDR.size:
        read_more()
    pkt_id, ptype, xfer, epnum, devnum, busnum, _fs, _fd_, ts_sec, \
        ts_usec, status, length, len_cap, _setup, _interval, \
        _start_frame, _xfer_flags, _ndesc = HDR.unpack_from(buf, 0)
    total = HDR.size + len_cap
    while len(buf) < total:
        read_more()
    record, buf = buf[:total], buf[total:]
    if devnum != DEV or busnum != BUS:
        continue
    payload = record[HDR.size:]
    ts = datetime.datetime.fromtimestamp(
        ts_sec + ts_usec / 1e6, tz=datetime.timezone.utc
    ).strftime("%H:%M:%S.%f")[:-3]
    hexd = payload[:96].hex()
    OUT.write(f"{ts} {pkt_id:016x} {chr(ptype)} {XFER.get(xfer, xfer)} "
              f"ep{epnum & 0x7F}{'IN' if epnum & 0x80 else 'OUT'} "
              f"status={status} len={length} cap={len_cap} {hexd}\n")
