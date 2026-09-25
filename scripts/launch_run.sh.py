#!/usr/bin/env python3
"""Launch an instrumented long-job run: usbmon sniffer + strace + driver."""
import subprocess, sys

base = "/home/sam/Documents/projects/code/icube-fw/logs"
devnum = sys.argv[1]
tag = sys.argv[2] if len(sys.argv) > 2 else "run"

subprocess.Popen(
    ["/home/sam/Documents/projects/code/raydriver/.venv/bin/python",
     "/home/sam/Documents/projects/code/icube-fw/scripts/usbmon_sniff.py",
     "1", devnum, f"{base}/usbmon_{tag}.log"],
    start_new_session=True, stdout=subprocess.DEVNULL,
    stderr=subprocess.DEVNULL, stdin=subprocess.DEVNULL)

cmd = ("RUST_LOG=debug strace -f -tt -T -y -s 96 -e trace=read,write -o "
       + f"{base}/strace_{tag}.log "
       "/home/sam/Documents/projects/code/raydriver/.venv/bin/raydriver run "
       "/home/sam/Documents/projects/code/rayforge/long.gcode --port /dev/ttyUSB0 "
       f"--log-file {base}/real_{tag}.log")
subprocess.Popen(["bash", "-c", cmd], start_new_session=True,
                 stdout=open(f"{base}/real_{tag}.out", "w"),
                 stderr=subprocess.STDOUT, stdin=subprocess.DEVNULL)
print(f"instrumented {tag} launched (sniffer on dev {devnum})")
