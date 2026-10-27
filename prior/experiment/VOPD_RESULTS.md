# VOPD (RDNA3 dual-issue) on gfx1100

Sources (generated, all asm validated by the assembler first): `vopd_gen.py` (first, flawed register plan), `vopd_gen5.py` (final plan), `vopd_gen2/3/4.py` (register/bank sweeps).
Raw output: `vopd_run1.txt` (flawed plan), `vopd_banks_run1.txt`, `vopd_banks_full_run1.txt`, `vopd_run2.txt` (final).
Single wave32, warm loop, cost = slope between two unroll depths, timer = SHADER_CYCLES.

## Result (final register plan, unroll 8/40, 6 independent slots)

| Pairing in one VOPD | Cycles per VOPD | Arithmetic ops per cycle |
|---|---|---|
| fmac_f32 + fmac_f32 | 1.000 | **2.00** |
| fmac_f32 + mul_f32 | 1.000 | 2.00 |
| fmac_f32 + **add_nc_u32** (FP + INT) | 1.000 | **2.00** |
| fmac_f32 + **lshlrev_b32** (FP + INT) | 1.000 | **2.00** |
| dot2acc_f32_f16 + fmac_f32 | 1.000 | 2.00 |
| same ops as two separate instructions | 2.000 (1 instr/cycle) | 1.00 |

- A floating-point op and an integer op co-issue in one VOPD at the same rate as two FP ops. So FP and INT *do* run in the same cycle, but only through VOPD in wave32. The pairing restrictions are in the ISA: X-side ops are FP-type (plus dot2acc), Y-side also allows add_nc_u32 / lshlrev_b32 / and_b32.
- VOPD cannot carry packed (`v_pk_*`) or f16 ops, so `__hfma2` cannot be dual-issued.
- With only 4 slots the rate is 1.25 cycles per VOPD: that is the 5-cycle dependent latency (4 VOPDs per 5 cycles), not a hardware limit. It takes at least 5 independent VOPDs in flight to hit 1.0.

## Register-file observations (this is where the first run went wrong)

| Operand pattern (6 slots) | Cycles per VOPD |
|---|---|
| X0 and X1 are *different* registers of the *same* bank (v16, v20), reused every VOPD | **1.25** |
| X0 and X1 in different banks, or the very same register (v16, v17 / v16, v16) | 1.00 |
| Fresh source registers in every slot (nothing reused across VOPDs) | **2.00** |
| All 144 legal bank assignments drawn from v16..v19 (shared banks there always mean the same register) | 1.00 |

Reading: operand supply, not the ALU, is the practical limit. VOPD needs up to 6 register reads per cycle (3 per op including the accumulator) against 4 banks, and reuse of the same registers across consecutive instructions is what keeps it at 1 cycle. Two different registers in one bank for the same op costs a quarter cycle on average. I did not pin down the exact read-port or operand-cache model.

## Measurement caveat

With the unroll pair 16/48, the same bank-permutation sweep showed spurious spreads of 0.95 to 1.05 cycles per VOPD. They reproduced on rerun, but vanished with the pair 8/40, where all 24 permutations are exactly 1.000. Values below 1.0 are therefore an artifact of that unroll pair (cause not isolated, probably front-end related). Treat anything within a few percent of the quoted figures with that in mind.
