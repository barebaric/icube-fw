#!/bin/bash
# Poll until the machine answers a status request with IDLE, then flag.
for i in $(seq 1 720); do
  OUT=$(timeout 8 /home/sam/Documents/projects/code/raydriver/.venv/bin/raydriver status --port /dev/ttyUSB0 --seconds 2 2>&1 | tail -1)
  if echo "$OUT" | grep -q IDLE; then
    echo "$(date -u +%H:%M:%S) BACK: $OUT" > /home/sam/Documents/projects/code/icube-fw/logs/machine_back.flag
    exit 0
  fi
  sleep 5
done
