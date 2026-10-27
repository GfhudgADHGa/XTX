#!/bin/bash
# usage: run_image.sh <name:pfp|me|mec> <project_dir> [extra analyzeHeadless args...]
set -e
G=${GHIDRA:?set GHIDRA to the install dir}
R=$(cd "$(dirname "$0")/.." && pwd)
N=$1; P=$2; shift 2
declare -A LANG=( [pfp]=RS64PFP [me]=RS64ME [mec]=RS64MEC )
declare -A WIN=(
  [pfp]="tp=0x2000000000000,s7=0x3000000008000,s8=0x73000100000000,s9=0x100000000c800,s10=0x1000000030800,s11=0x10002000287e8"
  [me]="tp=0x2000000000000,s7=0xf1000000000000,s8=0x1000000000000,s9=0x100000000c000,s10=0x1000000030800,s11=0x1000000028800"
  [mec]="tp=0x2000000000000,s9=0x10001000308c0,s10=0x1000100009124,s11=0x100020000c000" )
mkdir -p "$P"
"$G/support/analyzeHeadless" "$P" RS64 -overwrite \
  -import "$R/fw/out/gc_11_0_0_$N.image.bin" -loader BinaryLoader -loader-baseAddr 0x0 \
  -processor "RISCV:LE:64:${LANG[$N]}" -cspec gcc -noanalysis \
  -scriptPath "$R/ghidra/scripts" \
  -postScript Build.java "$R/ghidra/data/entries_$N.tsv" "$R/fw/out/gc_11_0_0_$N.data.bin" "${WIN[$N]}" "" "$R/ghidra/data/stubtables_$N.tsv" "$R/ghidra/data/regs_$N.tsv" \
  -postScript Report.java "$@"
