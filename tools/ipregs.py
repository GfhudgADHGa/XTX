#!/usr/bin/env python3
"""Multi-IP register-name resolver for Navi 31 (GC 11.0.0 / SOC21).

Absolute dword address = IP segment base + register offset (kernel *_offset.h headers).
Segment bases are *calibrated*, not guessed: each was verified against addresses that the VBIOS or the
CP firmware itself uses (see docs/REGISTER_MAP.md).
"""
import os, re, json, collections
HERE = os.path.dirname(os.path.abspath(__file__))
HDR = os.path.join(HERE, '..', 'ghidra', 'data', 'ipregs')
# ip name -> (header file, [segment bases in dwords by BASE_IDX], how verified)
IPS = {
    'GC':    ('gc_11_0_0_offset.h',    [0x1260, 0xA000, 0x1C000, 0x2402C00], 'CP firmware: SCRATCH_REG0=0x30100, CP_HQD_ACTIVE=0xc82c, GRBM_STATUS=0x8010'),
    'LSDMA': ('lsdma_6_0_0_offset.h',  [0x11400],                             'VBIOS gfx_info regaddr_lsdma_queue0_rb_rptr/wptr(_hi)/command/status = 0x11483..0x1146f/0x11432'),
    'MP0':   ('mp_13_0_0_offset.h',    [0x16000, 0xDC0000, 0xE00000, 0xE40000, 0x243FC00], 'asic_init polls SMN 0x58184 = C2PMSG_33'),
    'MMHUB': ('mmhub_3_0_0_offset.h',  [0x1A000, 0x2408800],                  'VBIOS cmd 0x16 reads 0x6a3b0/4 = MMMC_VM_FB_LOCATION_BASE/TOP'),
    'NBIO':  ('nbio_4_3_0_offset.h',   [0x0, 0x14, 0xD20, 0x10400, 0x241B000, 0x4040000], 'VBIOS asic_init reads REG[0xde3] = RCC_CONFIG_MEMSIZE (seg 2)'),
}
_db = None
def db():
    global _db
    if _db: return _db
    _db = collections.defaultdict(list)
    for ip, (fn, bases, _) in IPS.items():
        p = os.path.join(HDR, fn)
        if not os.path.exists(p): continue
        t = open(p, errors='replace').read()
        for m in re.finditer(r'#define\s+reg(\w+)\s+(0x[0-9a-fA-F]+)\s*\n#define\s+reg\1_BASE_IDX\s+(\d+)', t):
            off, bi = int(m.group(2), 16), int(m.group(3))
            if bi < len(bases):
                _db[bases[bi] + off].append((ip, m.group(1)))
    return _db
def name_dw(dw):
    """absolute dword index -> list of (ip, name)"""
    return db().get(dw, [])
def name_byte(b):
    return name_dw(b >> 2) if b % 4 == 0 else []
def best(dw):
    r = name_dw(dw)
    if not r: return None
    # prefer the shortest/most specific name, GC first
    r = sorted(r, key=lambda x: (x[0] != 'GC', len(x[1])))
    return f'{r[0][0]}.{r[0][1]}'
