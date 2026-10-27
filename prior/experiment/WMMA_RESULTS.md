# WMMA / matrix-pipe probe on gfx1100 (RX 7900 XTX)

Sources: `wmma_bench.hip.cpp` (single wave, in-wave mixing), `xwave_bench.hip.cpp` (8 waves, two per SIMD).
Raw output: `wmma_run1.txt`, `xwave_run1.txt` (first run, some pairings accidentally same-type), `xwave_run2.txt` (final).
Timer: `s_getreg HW_REG_SHADER_CYCLES`. Warm loops (code already in the i-cache), 4 independent accumulator chains unless noted.
All WMMA shapes are 16x16x16 (4096 MACs per instruction per wave32).

## 1. Rate per instruction, one wave alone

| Instruction | Cycles per WMMA (throughput) | Dependent chain | MAC/cycle/SIMD |
|---|---|---|---|
| f32 += f16 x f16 | **34.0** | 35.0 | 120.5 |
| f32 += bf16 x bf16 | **34.0** | 35.0 | 120.5 |
| f16 += f16 x f16 | **34.0** | 35.0 | 120.5 |
| bf16 += bf16 x bf16 | **34.0** | 35.0 | 120.5 |
| i32 += iu8 x iu8 | **34.0** | 35.0 | 120.5 |
| i32 += iu4 x iu4 | **17.0** | 18.0 | **241** |

- FP16, BF16 (either accumulator width) and INT8 run at an identical rate, to three decimals.
- INT4 retires the same 16x16x16 shape in half the cycles, i.e. 2x the MAC rate. This matches the 2x INT4 figure AMD advertises.
- A dependent accumulator chain costs only about 1 cycle more than independent ones, so accumulate forwarding hides almost all the latency.
- For scale: 128 MAC/cycle/SIMD is what the advertised 123 TFLOPS FP16 rate implies at about 2.5 GHz (my arithmetic). Measured is 120.5, about 94% of that for a single wave.

## 2. Mixing types inside one wave (4 chains, same instruction count)

| Mix | Cycles per step of 4 | Sum of pure costs |
|---|---|---|
| pure f16 | 136.0 | |
| pure iu8 | 136.0 | |
| pure iu4 | 68.0 | |
| 2 f16 + 2 iu8 | 136.0 | 136.0 |
| 2 f16 + 2 bf16 | 136.0 | 136.0 |
| 2 f16 + 2 iu4 | 102.0 | 2x34 + 2x17 = 102 |
| 2 iu8 + 2 iu4 | 102.0 | 102 |

Perfectly additive: no overlap between any two WMMA types in a wave.

WMMA with plain VALU in the same wave: 4 WMMA + 4 `v_fma_f32` took 145.8 cycles versus 136.0 for the WMMA alone, and 4 WMMA + 16 `v_fma_f32` took 157.1. Each VALU instruction adds about 0.94 cycles plus roughly 6 cycles per step of fixed overhead. VALU work is not hidden behind a WMMA.

## 3. Two waves on the same SIMD (xwave_run2)

The hardware puts wave w and wave w+4 on the same SIMD, so `{a,a,a,a,b,b,b,b}` makes one `a` wave and one `b` wave per SIMD.
Numbers are cycles per instruction measured from the common start to each wave's finish.

| Older wave | Younger wave | Older | Younger | What it shows |
|---|---|---|---|---|
| f16 | iu4 | 35.3 | 51.1 | 34 + 17 = 51: fully serialised |
| iu4 | f16 | 20.5 | 51.1 | same total, other order |
| f16 | f16 | 36.5 | 68.1 | 2 x 34 (run 1): no gain from a second wave |
| f16 | iu8 | 36.5 | 68.1 | identical to f16+f16 (run 1) |
| f16 WMMA | v_pk_fma | 34.2 | 36.0 | VALU wave blocked until the WMMA wave is done |
| v_pk_fma | f16 WMMA | 11.4 | 35.2 | WMMA finishes ~1k cycles later than alone, i.e. 1024 VALU instructions x ~1 cycle |

Reading: one shared per-SIMD resource. WMMA occupies it for 34 cycles (FP16/BF16/INT8) or 17 (INT4), VALU for about 1 cycle, and total busy time is conserved in every pairing.
Arbitration favours the older wave, with one exception: a younger WMMA can still grab the pipe during an older VALU wave's dependency bubbles (the 11.4 row).
Different SIMDs run in parallel: every SIMD in the workgroup showed the same timings simultaneously.

## What this does and does not establish

- INT8 = FP16/BF16 rate, INT4 = 2x, mixing and VALU never overlap on one SIMD: **measured**.
- "They share one ALU" is the simplest reading, but timing alone cannot separate a single datapath from separate datapaths that share an issue port or operand read path. Both predict these numbers.
- Only one WGP and one workgroup were examined, with random-ish operand data. Data-dependent power or clock effects were not tested.
- VOPD dual-issue was not tested. No configuration here exceeded one VALU instruction per cycle per SIMD.
- A single wave's loop-back branch appears to cost roughly 20 cycles (pk_fma solo is 1.96 cycles/inst at ILP4 against 1.25 ideal). This is an inference and was not isolated.
