"""GC 11.0.0 register name lookup: byte address -> name, using kernel gc_11_0_0_offset.h (+ segment bases)."""
import json, os, collections
GC_BASES = (0x1260, 0xA000, 0x1C000, 0x2402C00)
_db = None
def db():
    global _db
    if _db is None:
        regs = json.load(open(os.path.join(os.path.dirname(__file__), '..', 'ghidra', 'data', 'gc11_regs.json')))
        _db = collections.defaultdict(list)
        for n, r in regs.items():
            if r['base'] < len(GC_BASES):
                _db[(GC_BASES[r['base']] + r['off']) * 4].append(n[3:])   # strip 'reg'
    return _db
def name(byte_addr):
    return db().get(byte_addr)
