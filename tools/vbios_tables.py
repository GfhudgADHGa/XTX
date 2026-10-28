#!/usr/bin/env python3
"""Decode every populated AtomBIOS data table of a VBIOS image using atomfirmware.h definitions.

usage: vbios_tables.py <vbios.rom> <atomfirmware.h> <out_dir>
"""
import struct, sys, os, re, subprocess
sys.path.insert(0, __file__.rsplit('/', 1)[0])
from cstruct import Header, fmt

rom = open(sys.argv[1], 'rb').read()
H = Header(sys.argv[2])
out = sys.argv[3]; os.makedirs(out, exist_ok=True)
u16 = lambda o: struct.unpack_from('<H', rom, o)[0]

SLOTS = ('utilitypipeline multimedia_info smc_dpm_info sw_datatable3 firmwareinfo sw_datatable5 lcd_info sw_datatable7 '
         'smu_info sw_datatable9 sw_datatable10 vram_usagebyfirmware gpio_pin_lut sw_datatable13 gfx_info powerplayinfo '
         'sw_datatable16 sw_datatable17 sw_datatable18 sw_datatable19 sw_datatable20 sw_datatable21 displayobjectinfo '
         'indirectioaccess umc_info sw_datatable25 sw_datatable26 dce_info vram_info sw_datatable29 integratedsysteminfo '
         'asic_profiling_info voltageobject_info sw_datatable33 sw_datatable34').split()
STRUCT = {  # (slot, format.content) -> struct in atomfirmware.h
    ('firmwareinfo', '3.4'): 'atom_firmware_info_v3_4', ('smu_info', '4.0'): 'atom_smu_info_v4_0',
    ('gfx_info', '3.0'): 'atom_gfx_info_v3_0', ('umc_info', '3.3'): 'atom_umc_info_v3_3',
    ('dce_info', '4.5'): 'atom_display_controller_info_v4_5', ('gpio_pin_lut', '2.1'): 'atom_gpio_pin_lut_v2_1',
    ('vram_usagebyfirmware', '2.1'): 'vram_usagebyfirmware_v2_1', ('vram_info', '3.0'): 'atom_vram_info_header_v3_0',
    ('displayobjectinfo', '1.5'): 'display_object_info_table_v1_5',
}
ASCII = re.compile(rb'[\x20-\x7e]{5,}')

def annotate(k, v):
    if isinstance(v, int):
        if k.endswith('_10khz') and v: return f'{v/100:g} MHz'
        if k.endswith('_in10khz') and v: return f'{v/100:g} MHz'
        if k.endswith(('_mv',)) and v: return f'{v} mV'
        if k.endswith('_mw') and v: return f'{v/1000:g} W'
    return ''

def pretty(d, ind=0):
    pad = '  ' * ind; ls = []
    for k, v in d.items():
        if isinstance(v, dict):
            ls.append(f'{pad}{k}:'); ls += pretty(v, ind + 1)
        elif isinstance(v, list) and v and isinstance(v[0], dict):
            for i, x in enumerate(v):
                ls.append(f'{pad}{k}[{i}]:'); ls += pretty(x, ind + 1)
        else:
            a = annotate(k, v)
            ls.append(f'{pad}{k}: {fmt(v)}' + (f'   # {a}' if a else ''))
    return ls

def raw_dump(off, size):
    b = rom[off:off + size]; ls = []
    for i in range(0, len(b), 16):
        row = b[i:i + 16]
        ls.append(f'{off+i:06x}  {row.hex(" "):47}  {"".join(chr(c) if 32 <= c < 127 else "." for c in row)}')
    return ls

atom = u16(0x48); md = u16(atom + 0x20)
offs = struct.unpack_from('<35H', rom, md + 4)
summary = ['| slot | offset | size | rev | decoded as |', '|---|---|---|---|---|']
for name, o in zip(SLOTS, offs):
    if not o: continue
    size, fr, cr = struct.unpack_from('<HBB', rom, o); rev = f'{fr}.{cr}'
    sn = STRUCT.get((name, rev)); lines = [f'# {name}  @ {o:#06x}  size {size:#x}  rev {rev}']
    if (name, rev) == ('smc_dpm_info', '5.0'):      # BoardTable_t of SMU 13.0.x: dedicated decoder
        sn = 'BoardTable_t (smu13_driver_if_v13_0_0.h)'
        lines = subprocess.run([sys.executable, '-I', os.path.join(os.path.dirname(os.path.abspath(__file__)), 'smc_dpm_decode.py'),
                                sys.argv[1], f'{o:x}'], capture_output=True, text=True, check=True).stdout.rstrip('\n').split('\n')
    elif sn:
        d = H.decode(sn, rom, o)
        if 'display_path' in d:   # variable-length array of paths
            psz = H.struct_size('atom_display_object_path_v3'); base = o + 8
            d['display_path'] = [H.decode('atom_display_object_path_v3', rom, base + i * psz) for i in range(d['number_of_path'])]
            sn_size = 8 + psz * d['number_of_path']
        if 'vram_module' in d: d['vram_module'] = d['vram_module'][:d['vram_module_num']]
        lines += [f'# struct {sn} (kernel atomfirmware.h), struct size {H.struct_size(sn):#x}', ''] + pretty(d)
        lines += ['', '# trailing/variable data after fixed struct:'] + raw_dump(o + (sn_size if 'display_path' in d else H.struct_size(sn)), max(0, size - (sn_size if 'display_path' in d else H.struct_size(sn))))[:200]
    else:
        lines += ['# no matching struct in the kernel header; raw dump', ''] + raw_dump(o, size)[:400]
        st = [s.decode() for s in ASCII.findall(rom[o:o + size])]
        if st: lines += ['', '# strings: ' + repr(st)]
    open(f'{out}/{o:04x}_{name}_v{fr}_{cr}.txt', 'w').write('\n'.join(lines) + '\n')
    summary.append(f'| {name} | {o:#06x} | {size:#x} | {rev} | {sn or "(raw)"} |')
open(f'{out}/INDEX.md', 'w').write('\n'.join(summary) + '\n')
print('\n'.join(summary))
