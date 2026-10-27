#!/bin/bash
# usage: run_image.sh <name:pfp|me|mec|mes|mes1|mes_2> <project_dir> [extra analyzeHeadless args...]
set -e
G=${GHIDRA:?set GHIDRA to the install dir}
R=$(cd "$(dirname "$0")/.." && pwd)
N=$1; P=$2; shift 2
declare -A LANG=( [pfp]=RS64PFP [me]=RS64ME [mec]=RS64MEC [mes]=RS64MES [mes1]=RS64MES [mes_2]=RS64MES )
declare -A BASE=( [pfp]=0x0 [me]=0x0 [mec]=0x0 [mes]=0xfffffffff0000000 [mes1]=0xfffffffff0000000 [mes_2]=0xfffffffff0000000 )
declare -A DATA=( [pfp]=0x100000 [me]=0x100000 [mec]=0x100000 [mes]=0xfffffffff0100000 [mes1]=0xfffffffff0100000 [mes_2]=0xfffffffff0100000 )
declare -A DLEN=( [pfp]=0x22000 [me]=0x22000 [mec]=0x22000 [mes]=0x20000 [mes1]=0x20000 [mes_2]=0x20000 )
declare -A WIN=(
  [pfp]="tp=0x2000000000000,s7=0x3000000008000,s8=0x73000100000000,s9=0x100000000c800,s10=0x1000000030800,s11=0x10002000287e8"
  [me]="tp=0x2000000000000,s7=0xf1000000000000,s8=0x1000000000000,s9=0x100000000c000,s10=0x1000000030800,s11=0x1000000028800"
  [mec]="tp=0x2000000000000,s9=0x10001000308c0,s10=0x1000100009124,s11=0x100020000c000"
  [mes]="" [mes1]="" [mes_2]="" )
mkdir -p "$P"
"$G/support/analyzeHeadless" "$P" RS64 -overwrite \
  -import "$R/fw/out/gc_11_0_0_$N.image.bin" -loader BinaryLoader -loader-baseAddr ${BASE[$N]} \
  -processor "RISCV:LE:64:${LANG[$N]}" -cspec gcc -noanalysis \
  -scriptPath "$R/ghidra/scripts" \
  -postScript Build.java "$R/ghidra/data/entries_$N.tsv" "$R/fw/out/gc_11_0_0_$N.data.bin" "${WIN[$N]}" "" "$R/ghidra/data/stubtables_$N.tsv" "$R/ghidra/data/regs_$N.tsv" ${DATA[$N]} ${DLEN[$N]} \
  -postScript Report.java "$@"
