"""Static control-flow graph for an RS64 image (4-byte instructions only)."""
import sys, collections
sys.path.insert(0, __file__.rsplit('/', 1)[0])
from rvsym import *
TERM_NOFALL = {'j', 'jr', 'ret', 'mret', 'sret', 'uret'}
def target(x, pc):
    return pc + x.operands[-1].imm
def build(L):
    """returns succ: dict pc->[(kind, tgt)], with kind in fall/jump/branch/call"""
    succ = {}
    n = len(L) * 4
    for i, x in enumerate(L):
        pc = i * 4
        if not x: continue
        m = x.mnemonic; e = []
        if m == 'j': e.append(('jump', target(x, pc)))
        elif m == 'jal':
            if len(x.operands) == 1 or md.reg_name(x.operands[0].reg) == 'ra': e.append(('call', target(x, pc))); e.append(('fall', pc + 4))
            else: e.append(('jump', target(x, pc)))
        elif m in ('jr', 'ret', 'mret', 'sret', 'unimp', 'ebreak'): pass
        elif m == 'jalr': e.append(('fall', pc + 4))  # indirect call; returns
        elif m.startswith('b') and m not in ('bset',) and len(x.operands) >= 1 and x.operands[-1].type == RISCV_OP_IMM:
            e.append(('branch', target(x, pc))); e.append(('fall', pc + 4))
        else: e.append(('fall', pc + 4))
        succ[pc] = [(k, t) for k, t in e if 0 <= t < n]
    return succ
def reach(succ, roots, L):
    seen = set(); st = list(roots)
    while st:
        p = st.pop()
        if p in seen or p not in succ: continue
        seen.add(p)
        for k, t in succ[p]: st.append(t)
    return seen
