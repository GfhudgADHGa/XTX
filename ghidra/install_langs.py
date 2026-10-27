#!/usr/bin/env python3
"""Add RS64 language variants to a Ghidra install.

usage: install_langs.py <GHIDRA_INSTALL_DIR>

Each variant reuses the stock RV64G sleigh (no compressed insns) but ships a processor spec whose
<tracked_set> tells the decompiler the values of the registers the firmware reserves as constants
(tp = RS64 register window, gp, and a few s-registers used as MMIO window bases).
"""
import os, re, sys

# Values established from the reset code of each image (see docs/RS64_CORE.md).
VARIANTS = {
    'PFP': dict(tp=0x2000000000000, gp=0x101800, s7=0x3000000008000, s8=0x73000100000000,
                s9=0x100000000c800, s10=0x1000000030800, s11=0x10002000287e8),
    'ME':  dict(tp=0x2000000000000, gp=0x101800, s7=0xf1000000000000, s8=0x1000000000000,
                s9=0x100000000c000, s10=0x1000000030800, s11=0x1000000028800),
    'MEC': dict(tp=0x2000000000000, gp=0x101800,
                s9=0x10001000308c0, s10=0x1000100009124, s11=0x100020000c000),
    'MES': dict(),   # MES cores have no reserved registers (plain gcc ABI)
}

PSPEC = '''<?xml version="1.0" encoding="UTF-8"?>
<processor_spec>
  <programcounter register="pc"/>
  <context_data>
    <context_set space="ram">
      <set name="MXL" val="2"/>
      <set name="RVA" val="1"/>
      <set name="RVD" val="1"/>
      <set name="RVF" val="1"/>
      <set name="RVH" val="1"/>
      <set name="RVI" val="1"/>
      <set name="RVM" val="1"/>
      <set name="RVQ" val="1"/>
      <set name="RVS" val="1"/>
      <set name="RVU" val="1"/>
    </context_set>
%s  </context_data>
</processor_spec>
'''

LDEF = '''  <language processor="RISCV"
            endian="little"
            size="64"
            variant="RS64%(n)s"
            version="1.0"
            slafile="riscv.lp64d.sla"
            processorspec="RS64_%(n)s.pspec"
            id="RISCV:LE:64:RS64%(n)s">
    <description>AMD RS64 (RV64G) %(n)s</description>
    <compiler name="gcc" spec="riscv64-fp.cspec" id="gcc"/>
  </language>
'''

def main(g):
    d = os.path.join(g, 'Ghidra/Processors/RISCV/data/languages')
    ld = open(os.path.join(d, 'riscv.ldefs')).read()
    ld = re.sub(r'  <language processor="RISCV"\s+endian="little"\s+size="64"\s+variant="RS64.*?</language>\n', '', ld, flags=re.S)
    add = ''
    for n, regs in VARIANTS.items():
        tr = ''
        if regs:
            tr = '    <tracked_set space="ram">\n' + ''.join(
                f'      <set name="{r}" val="{v:#x}"/>\n' for r, v in regs.items()) + '    </tracked_set>\n'
        open(os.path.join(d, f'RS64_{n}.pspec'), 'w').write(PSPEC % tr)
        add += LDEF % dict(n=n)
    ld = ld.replace('</language_definitions>', add + '</language_definitions>')
    open(os.path.join(d, 'riscv.ldefs'), 'w').write(ld)
    print('installed', list(VARIANTS))

main(sys.argv[1])
