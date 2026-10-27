# In-wave VALU timing on gfx1100 (RX 7900 XTX)

Source: `fma_bench.hip.cpp`. Raw output: `run1.txt` (first, flawed design), `run2.txt` (final).
Build: `ROCM_PATH=/opt/rocm HIP_PATH=/opt/rocm hipcc --offload-arch=gfx1100 -O2 -o fma_bench fma_bench.hip.cpp`

Method: one workgroup, one wave32. Timestamps are taken inside the wave with
`s_getreg HW_REG_SHADER_CYCLES` (shader-clock counter; `s_memtime` does not exist on gfx11).
`v_readfirstlane` consumes every accumulator before the end timestamp.
Per-instruction cost is the slope between two unroll depths, which cancels the fixed overhead of the timestamp reads.

## Finding 1: the first design measured instruction fetch, not the ALU

Straight-line code executed once cost 13-20 cycles per instruction at every ILP, for every op (`run1.txt`).
Switching to 4-byte VOP2 encodings roughly halved the per-instruction cost (10.5 vs 19.8 cycles, ratio 1.9), so the cost follows bytes of code, not instruction count.
That is consistent with waiting on instruction-cache line fills: about 100-170 shader cycles per 64-byte line, varying from run to run.
Cold, straight-line shader code is front-end bound on this chip.

## Finding 2: warm-loop ALU numbers (code in the i-cache after an untimed first pass)

| Quantity | Result |
|---|---|
| Dependent-chain step (issue to dependent issue) | **5.000 cycles**, identical for v_pk_fma_f16, v_fma_f16, v_fma_f32, v_fmac_f32, v_add_f32, v_pk_add_f16, v_pk_mul_f16, v_dot2_f32_f16 |
| ILP 2 / 4 | 2.5 / 1.25 cycles per instruction (latency-bound: N chains per 5-cycle step) |
| ILP 8 | **1.000 cycle per instruction**: the single-wave ceiling is one VALU instruction per cycle |

So `v_pk_fma_f16` (the instruction behind `__hfma2`) has the same issue and latency behaviour as a scalar fp32 FMA.
A packed op does two fp16 FMAs per lane per instruction, so it delivers twice the flops per issued instruction.

## What this does not show

- Only one wave on one SIMD. Co-resident waves, VOPD dual-issue and WMMA are untested.
- Latency here is issue-to-dependent-issue as seen by the wave, not a pipeline depth.
- Whether `SHADER_CYCLES` runs at exactly the shader clock is inferred, not confirmed: against the realtime clock it works out to about 2.35-2.43 GHz at load, close to the 2.48 GHz max.
- Wave placement (`HW_ID1`) was recorded but not analysed.

## Open items

- `umr` (wave halting and single-stepping): AUR build blocked pending approval.
- SQTT / `rocprofv3 --att`: needs AMD's separate, closed-source `rocprof-trace-decoder` library, which is not installed. The tool aborts with "library path not found".
