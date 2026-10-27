// In-wave timing of VALU ops on RDNA3 (gfx1100): dependent-chain latency and
// independent-chain throughput for v_pk_fma_f16 vs. neighbouring ops.
//
// One workgroup, one wave32. Timestamps come from inside the wave:
//   s_getreg HW_REG_SHADER_CYCLES   -> shader-clock cycle counter
//   s_sendmsg_rtn MSG_RTN_GET_REALTIME -> constant-rate wall clock (used to derive the effective clock)
//   s_getreg HW_REG_HW_ID1          -> where the wave landed (SE/SA/WGP/SIMD)
// A closing v_readfirstlane consumes every accumulator, so the end timestamp
// cannot be taken before the VALU chain has actually produced its results.
//
// Per-instruction cost = slope between two unroll depths, which cancels the fixed
// cost of the timestamp reads and the readfirstlane join.
#include <hip/hip_runtime.h>
#include <algorithm>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <vector>

#define HIP_CHECK(x) do { hipError_t e = (x); if (e != hipSuccess) { \
  fprintf(stderr, "%s:%d %s\n", __FILE__, __LINE__, hipGetErrorString(e)); exit(1);} } while (0)

struct PkFmaF16 { static constexpr const char* name = "v_pk_fma_f16";
  __device__ static void op(uint32_t& x, uint32_t b, uint32_t c) { asm volatile("v_pk_fma_f16 %0, %0, %1, %2" : "+v"(x) : "v"(b), "v"(c)); } };
struct FmaF16   { static constexpr const char* name = "v_fma_f16";
  __device__ static void op(uint32_t& x, uint32_t b, uint32_t c) { asm volatile("v_fma_f16 %0, %0, %1, %2" : "+v"(x) : "v"(b), "v"(c)); } };
struct FmaF32   { static constexpr const char* name = "v_fma_f32";
  __device__ static void op(uint32_t& x, uint32_t b, uint32_t c) { asm volatile("v_fma_f32 %0, %0, %1, %2" : "+v"(x) : "v"(b), "v"(c)); } };
struct PkAddF16 { static constexpr const char* name = "v_pk_add_f16";
  __device__ static void op(uint32_t& x, uint32_t b, uint32_t c) { asm volatile("v_pk_add_f16 %0, %0, %1" : "+v"(x) : "v"(b)); } };
struct PkMulF16 { static constexpr const char* name = "v_pk_mul_f16";
  __device__ static void op(uint32_t& x, uint32_t b, uint32_t c) { asm volatile("v_pk_mul_f16 %0, %0, %1" : "+v"(x) : "v"(b)); } };
struct AddF32   { static constexpr const char* name = "v_add_f32 (VOP2,4B)";
  __device__ static void op(uint32_t& x, uint32_t b, uint32_t c) { asm volatile("v_add_f32 %0, %0, %1" : "+v"(x) : "v"(b)); } };
struct FmacF32  { static constexpr const char* name = "v_fmac_f32(VOP2,4B)";
  __device__ static void op(uint32_t& x, uint32_t b, uint32_t c) { asm volatile("v_fmac_f32 %0, %1, %2" : "+v"(x) : "v"(b), "v"(c)); } };
struct Dot2F16  { static constexpr const char* name = "v_dot2_f32_f16";
  __device__ static void op(uint32_t& x, uint32_t b, uint32_t c) { asm volatile("v_dot2_f32_f16 %0, %1, %2, %0" : "+v"(x) : "v"(b), "v"(c)); } };

template <class Op, int ILP, int N>
__global__ __launch_bounds__(32) void bench(uint32_t* out, uint32_t b, uint32_t c, uint32_t seed) {
  uint32_t x[ILP];
#pragma unroll
  for (int i = 0; i < ILP; i++) x[i] = seed + i * 0x01010101u + threadIdx.x;
  uint32_t t0, t1, r0, r1, hw;
  asm volatile("s_getreg_b32 %0, hwreg(HW_REG_HW_ID1)" : "=s"(hw));
  asm volatile("s_sendmsg_rtn_b32 %0, sendmsg(MSG_RTN_GET_REALTIME)\n s_waitcnt lgkmcnt(0)" : "=s"(r0) :: "memory");
  asm volatile("s_getreg_b32 %0, hwreg(HW_REG_SHADER_CYCLES)" : "=s"(t0));
#pragma unroll
  for (int n = 0; n < N; n++) {
#pragma unroll
    for (int i = 0; i < ILP; i++) Op::op(x[i], b, c);
  }
  uint32_t sink = 0;
#pragma unroll
  for (int i = 0; i < ILP; i++) {
    uint32_t t;
    asm volatile("v_readfirstlane_b32 %0, %1" : "=s"(t) : "v"(x[i]));
    sink ^= t;
  }
  asm volatile("s_getreg_b32 %0, hwreg(HW_REG_SHADER_CYCLES)" : "=s"(t1));
  asm volatile("s_sendmsg_rtn_b32 %0, sendmsg(MSG_RTN_GET_REALTIME)\n s_waitcnt lgkmcnt(0)" : "=s"(r1) :: "memory");
  if (threadIdx.x == 0) { out[0] = (t1 - t0) & 0xFFFFF; out[1] = r1 - r0; out[2] = hw; out[3] = sink; }
}

// Warm variant: the loop body is executed once untimed (pulls the code into the
// instruction cache), then L times between the timestamps.
template <class Op, int ILP, int K>
__global__ __launch_bounds__(32) void bench_warm(uint32_t* out, uint32_t b, uint32_t c, uint32_t seed, int L) {
  uint32_t x[ILP];
#pragma unroll
  for (int i = 0; i < ILP; i++) x[i] = seed + i * 0x01010101u + threadIdx.x;
  uint32_t t0 = 0, t1 = 0;
#pragma nounroll
  for (int pass = 0; pass < 2; pass++) {
    int Lp = pass ? L : 1;
    if (pass) asm volatile("s_getreg_b32 %0, hwreg(HW_REG_SHADER_CYCLES)" : "=s"(t0));
#pragma nounroll
    for (int it = 0; it < Lp; it++) {
#pragma unroll
      for (int n = 0; n < K; n++) {
#pragma unroll
        for (int i = 0; i < ILP; i++) Op::op(x[i], b, c);
      }
    }
    uint32_t sink = 0;
#pragma unroll
    for (int i = 0; i < ILP; i++) {
      uint32_t t;
      asm volatile("v_readfirstlane_b32 %0, %1" : "=s"(t) : "v"(x[i]));
      sink ^= t;
    }
    if (pass) { asm volatile("s_getreg_b32 %0, hwreg(HW_REG_SHADER_CYCLES)" : "=s"(t1)); if (threadIdx.x == 0) out[3] = sink; }
  }
  if (threadIdx.x == 0) { out[0] = (t1 - t0) & 0xFFFFF; }
}

// Keeps the whole chip busy long enough for clocks to ramp before measuring.
__global__ void ramp(float* p, int iters) {
  float a = threadIdx.x * 1e-3f, b = 1.0001f;
  for (int i = 0; i < iters; i++) a = fmaf(a, b, 0.5f);
  if (a == 12345.f) p[0] = a;
}

struct Sample { uint32_t cyc, rt, hw; };

template <class Op, int ILP, int N>
Sample run(uint32_t* d_out) {
  std::vector<uint32_t> best_cyc;
  Sample s{0xFFFFFFFF, 0, 0};
  for (int rep = 0; rep < 9; rep++) {
    hipLaunchKernelGGL((bench<Op, ILP, N>), dim3(1), dim3(32), 0, 0, d_out, 0x3c003c00u, 0x3c003c00u, 0x3c013c02u + rep);
    HIP_CHECK(hipDeviceSynchronize());
    uint32_t h[4];
    HIP_CHECK(hipMemcpy(h, d_out, sizeof h, hipMemcpyDeviceToHost));
    if (h[0] < s.cyc) s = {h[0], h[1], h[2]};
  }
  return s;
}

template <class Op, int ILP, int K>
uint32_t run_warm(uint32_t* d_out, int L) {
  uint32_t best = 0xFFFFFFFF;
  for (int rep = 0; rep < 9; rep++) {
    hipLaunchKernelGGL((bench_warm<Op, ILP, K>), dim3(1), dim3(32), 0, 0, d_out, 0x3c003c00u, 0x3c003c00u, 0x3c013c02u + rep, L);
    HIP_CHECK(hipDeviceSynchronize());
    uint32_t h[4];
    HIP_CHECK(hipMemcpy(h, d_out, sizeof h, hipMemcpyDeviceToHost));
    best = std::min(best, h[0]);
  }
  return best;
}

template <class Op, int ILP>
void row_warm() {
  uint32_t* d_out; HIP_CHECK(hipMalloc(&d_out, 16));
  const int L = 64;
  uint32_t lo = run_warm<Op, ILP, 16>(d_out, L), hi = run_warm<Op, ILP, 64>(d_out, L);
  double insts = double(L) * (64 - 16) * ILP;
  printf("WARM %-20s ILP=%d  cyc/inst=%7.3f  cyc/step=%7.3f  (K16=%u K64=%u)\n", Op::name, ILP,
         (double(hi) - lo) / insts, (double(hi) - lo) / (double(L) * (64 - 16)), lo, hi);
  HIP_CHECK(hipFree(d_out));
}
template <class Op> void sweep_warm() { row_warm<Op, 1>(); row_warm<Op, 2>(); row_warm<Op, 4>(); row_warm<Op, 8>(); }

template <class Op, int ILP>
void row() {
  uint32_t* d_out; HIP_CHECK(hipMalloc(&d_out, 16));
  Sample lo = run<Op, ILP, 32>(d_out), hi = run<Op, ILP, 256>(d_out);
  double insts = double(256 - 32) * ILP;
  double cpi = (double(hi.cyc) - lo.cyc) / insts;                 // cycles per instruction (throughput view)
  double cpg = (double(hi.cyc) - lo.cyc) / double(256 - 32);      // cycles per dependent step (ILP chains in lockstep)
  double mhz = hi.rt ? double(hi.cyc) / (double(hi.rt) / 100.0) : 0;  // realtime ticks are 100 MHz => 10 ns
  uint32_t hw = hi.hw;
  printf("COLD %-20s ILP=%d  cyc/inst=%6.3f  cyc/step=%6.3f  (lo=%u hi=%u cyc)  eff.clk~%.0f MHz  HW_ID1=%#010x\n",
         Op::name, ILP, cpi, cpg, lo.cyc, hi.cyc, mhz, hw);
  HIP_CHECK(hipFree(d_out));
}

template <class Op> void sweep() { row<Op, 1>(); row<Op, 2>(); row<Op, 4>(); row<Op, 8>(); }

int main() {
  hipDeviceProp_t p; HIP_CHECK(hipGetDeviceProperties(&p, 0));
  printf("device: %s  arch=%s  CUs=%d  wavefront=%d  clk(max)=%d kHz\n", p.name, p.gcnArchName, p.multiProcessorCount, p.warpSize, p.clockRate);
  float* d; HIP_CHECK(hipMalloc(&d, 64));
  hipLaunchKernelGGL(ramp, dim3(4096), dim3(256), 0, 0, d, 1 << 22);
  HIP_CHECK(hipDeviceSynchronize());
  // 1) i-fetch test: cold straight-line code, 4-byte vs 8-byte encodings
  row<AddF32, 1>(); row<FmacF32, 1>(); row<FmaF32, 1>(); row<PkFmaF16, 1>();
  // 2) real ALU numbers: warm loops
  sweep_warm<PkFmaF16>(); sweep_warm<FmaF16>(); sweep_warm<FmaF32>(); sweep_warm<FmacF32>();
  sweep_warm<AddF32>(); sweep_warm<PkAddF16>(); sweep_warm<PkMulF16>(); sweep_warm<Dot2F16>();
  return 0;
}
