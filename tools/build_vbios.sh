#!/bin/bash
# VBIOS pipeline: data tables, command tables, 16-bit option ROM.
# usage: GHIDRA=/path/to/ghidra tools/build_vbios.sh [vbios.rom]
set -e
cd "$(dirname "$0")/.."
ROM=${1:-prior/vbios.rom}
python3 -I tools/vbios_tables.py "$ROM" ghidra/data/atomfirmware.h vbios/tables > /dev/null
python3 -I tools/atomdec.py "$ROM" > vbios/atom_command_tables.c
if [ -n "$GHIDRA" ]; then
  PROJ=${PROJ:-/tmp/rs64_ghidra}/x86; mkdir -p "$PROJ"
  "$GHIDRA/support/analyzeHeadless" "$PROJ" X86 -overwrite -import "$ROM" -loader BinaryLoader -loader-baseAddr c000:0000 \
    -processor "x86:LE:16:Real Mode" -cspec default -scriptPath ghidra/scripts \
    -postScript SeedX86.java -postScript ExportC.java "$PWD/vbios/x86_legacy_raw.c" 60 2>&1 | grep -E "SeedX86:|ExportC:|ERROR " || true
fi
