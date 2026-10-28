#!/bin/bash
# Full pipeline: firmware blobs -> raw images -> seeds -> Ghidra decompile -> readable C.
# usage: GHIDRA=/path/to/ghidra tools/build_all.sh [core ...]
set -e
cd "$(dirname "$0")/.."
G=${GHIDRA:?set GHIDRA to the Ghidra install dir (11.3.x)}
PROJ=${PROJ:-/tmp/rs64_ghidra}
CORES=${@:-pfp me mec mes mes1 mes_2}
python3 -I ghidra/install_langs.py "$G" >/dev/null
for f in fw/gc_11_0_0_*.bin; do python3 -I tools/fwextract.py "$f" fw/out >/dev/null; done
mkdir -p decomp/raw
declare -A TBL=( [pfp]="ac 8fcc" [me]="98 394c" [mec]="5f8 268ec" )   # tp offset of the dispatch-table port, one store inside the table
for c in $CORES; do
  # entry points: PM4-table cores are discovered by evaluating the table-install code; MES uses hand-written entries
  if [ -n "${TBL[$c]}" ]; then
    python3 -I tools/mkentries.py fw/out/gc_11_0_0_$c.image.bin ${TBL[$c]} ghidra/data/pm4_opcodes.json > ghidra/data/entries_$c.base.tsv 2>/dev/null
  fi
  python3 -I tools/mkseeds.py $c fw/out/gc_11_0_0_$c.image.bin ghidra/data/entries_$c.base.tsv ghidra/data/entries_$c.tsv ghidra/data/stubtables_$c.tsv
  ghidra/run_image.sh $c "$PROJ/$c" -postScript ExportC.java "$PWD/decomp/raw/$c.c" 40 2>&1 | grep -E "ExportC:|ERROR " || true
  case $c in mes*) python3 -I tools/mesnames.py decomp/raw/$c.c > ghidra/data/annot_$c.gen.tsv 2>/dev/null || true ;; esac
  python3 -I tools/postproc.py $c decomp/raw/$c.c decomp/$c.c
done
