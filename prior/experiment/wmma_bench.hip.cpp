// WMMA throughput / concurrency probe on RDNA3 (gfx1100), single wave32.
//
// Questions:
//  1. cycles per v_wmma for f16 / bf16 / f16-out / iu8 / iu4 (all are 16x16x16)
//  2. does interleaving *different* WMMA types (e.g. f16 + iu8) finish faster than the
//     same number of instructions of one type?  (=> separate hardware, or one shared pipe)
//  3. does a WMMA hide independent plain VALU work, or does the VALU work add on top?
//
// Method as in fma_bench: warm loop (one untimed pass fills the i-cache, then L timed
// iterations), cost = slope between two unroll depths, timer = s_getreg SHADER_CYCLES.
#include <hip/hip_runtime.h>
#include <algorithm>
#include <cstdint>
#include <cstdio>
#include <cstdlib>

#define HIP_CHECK(x) do { hipError_t e = (x); if (e != hipSuccess) { \
  fprintf(stderr, "%s:%d %s\n", __FILE__, __LINE__, hipGetErrorString(e)); exit(1);} } while (0)

typedef uint32_t u2 __attribute__((ext_vector_type(2)));
typedef uint32_t u4 __attribute__((ext_vector_type(4)));
typedef uint32_t u8 __attribute__((ext_vector_type(8)));

#define WMMA_OP(STRUCT, LABEL, MNEMONIC, ABT, MACS)                                          \
  struct STRUCT { static constexpr const char* name = LABEL; static constexpr int macs = MACS; \
    using C = u8; using AB = ABT;                                                            \
    __device__ static void op(C& c, const AB& a, const AB& b) {                              \
      asm volatile(MNEMONIC " %0, %1, %2, %0" : "+v"(c) : "v"(a), "v"(b)); } };

WMMA_OP(WmmaF16,   "wmma_f32_f16",   "v_wmma_f32_16x16x16_f16",   u8, 4096)
WMMA_OP(WmmaBF16,  "wmma_f32_bf16",  "v_wmma_f32_16x16x16_bf16",  u8, 4096)
WMMA_OP(WmmaF16F16,"wmma_f16_f16",   "v_wmma_f16_16x16x16_f16",   u8, 4096)
WMMA_OP(WmmaBF16BF16,"wmma_bf16_bf16","v_wmma_bf16_16x16x16_bf16",u8, 4096)
WMMA_OP(WmmaIU8,   "wmma_i32_iu8",   "v_wmma_i32_16x16x16_iu8",   u4, 4096)
WMMA_OP(WmmaIU4,   "wmma_i32_iu4",   "v_wmma_i32_16x16x16_iu4",   u2, 4096)

struct FmaF32V { static constexpr const char* name = "v_fma_f32"; static constexpr int macs = 32;
  using C = uint32_t; using AB = uint32_t;
  __device__ static void op(C& c, const AB& a, const AB& b) { asm volatile("v_fma_f32 %0, %0, %1, %2" : "+v"(c) : "v"(a), "v"(b)); } };
struct PkFmaV  { static constexpr const char* name = "v_pk_fma_f16"; static constexpr int macs = 64;
  using C = uint32_t; using AB = uint32_t;
  __device__ static void op(C& c, const AB& a, const AB& b) { asm volatile("v_pk_fma_f16 %0, %0, %1, %2" : "+v"(c) : "v"(a), "v"(b)); } };
struct NoOp    { static constexpr const char* name = "-"; static constexpr int macs = 0;
  using C = uint32_t; using AB = uint32_t;
  __device__ static void op(C&, const AB&, const AB&) {} };

template <class T> __device__ T fill(uint32_t s) {
  T v; constexpr int n = sizeof(T) / 4;
#pragma unroll
  for (int i = 0; i < n; i++) v[i] = 0x3c003c00u ^ ((s * 2654435761u + i * 40503u + threadIdx.x * 97u) & 0x00ff00ffu);
  return v;
}
template <> __device__ uint32_t fill<uint32_t>(uint32_t s) { return 0x3c003c00u ^ ((s * 2654435761u + threadIdx.x * 97u) & 0x00ff00ffu); }
template <class T> __device__ uint32_t first(const T& v) { return v[0]; }
template <> __device__ uint32_t first<uint32_t>(const uint32_t& v) { return v; }

// NA ops of OA and NB ops of OB per step, interleaved A,B,A,B,... ; K steps per loop iteration.
template <class OA, int NA, class OB, int NB, int K>
__global__ __launch_bounds__(32) void mix(uint32_t* out, uint32_t seed, int L) {
  typename OA::C ca[NA > 0 ? NA : 1]; typename OB::C cb[NB > 0 ? NB : 1];
#pragma unroll
  for (int i = 0; i < NA; i++) ca[i] = fill<typename OA::C>(seed + i);
#pragma unroll
  for (int i = 0; i < NB; i++) cb[i] = fill<typename OB::C>(seed + 100 + i);
  const typename OA::AB a1 = fill<typename OA::AB>(seed + 7), a2 = fill<typename OA::AB>(seed + 9);
  const typename OB::AB b1 = fill<typename OB::AB>(seed + 11), b2 = fill<typename OB::AB>(seed + 13);
  uint32_t t0 = 0, t1 = 0;
#pragma nounroll
  for (int pass = 0; pass < 2; pass++) {
    int Lp = pass ? L : 1;
    if (pass) asm volatile("s_getreg_b32 %0, hwreg(HW_REG_SHADER_CYCLES)" : "=s"(t0));
#pragma nounroll
    for (int it = 0; it < Lp; it++) {
#pragma unroll
      for (int k = 0; k < K; k++) {
#pragma unroll
        for (int j = 0; j < (NA > NB ? NA : NB); j++) {
          if (j < NA) OA::op(ca[j], a1, a2);
          if (j < NB) OB::op(cb[j], b1, b2);
        }
      }
    }
    uint32_t sink = 0;
#pragma unroll
    for (int i = 0; i < NA; i++) { uint32_t t; asm volatile("v_readfirstlane_b32 %0, %1" : "=s"(t) : "v"(first(ca[i]))); sink ^= t; }
#pragma unroll
    for (int i = 0; i < NB; i++) { uint32_t t; asm volatile("v_readfirstlane_b32 %0, %1" : "=s"(t) : "v"(first(cb[i]))); sink ^= t; }
    if (pass) { asm volatile("s_getreg_b32 %0, hwreg(HW_REG_SHADER_CYCLES)" : "=s"(t1)); if (threadIdx.x == 0) out[1] = sink; }
  }
  if (threadIdx.x == 0) out[0] = (t1 - t0) & 0xFFFFF;
}

__global__ void ramp(float* p, int iters) {
  float a = threadIdx.x * 1e-3f, b = 1.0001f;
  for (int i = 0; i < iters; i++) a = fmaf(a, b, 0.5f);
  if (a == 12345.f) p[0] = a;
}

template <class OA, int NA, class OB, int NB, int K>
uint32_t timeit(uint32_t* d, int L) {
  uint32_t best = 0xFFFFFFFF;
  for (int rep = 0; rep < 9; rep++) {
    hipLaunchKernelGGL((mix<OA, NA, OB, NB, K>), dim3(1), dim3(32), 0, 0, d, 0x1234u + rep, L);
    HIP_CHECK(hipDeviceSynchronize());
    uint32_t h[2]; HIP_CHECK(hipMemcpy(h, d, sizeof h, hipMemcpyDeviceToHost));
    best = std::min(best, h[0]);
  }
  return best;
}

// Returns cycles per *instruction* (all instructions in a step counted).
template <class OA, int NA, class OB, int NB>
double row(const char* tag) {
  uint32_t* d; HIP_CHECK(hipMalloc(&d, 8));
  const int L = 32, K1 = 4, K2 = 12;
  uint32_t lo = timeit<OA, NA, OB, NB, K1>(d, L), hi = timeit<OA, NA, OB, NB, K2>(d, L);
  double step = (double(hi) - lo) / (double(L) * (K2 - K1));
  double per_inst = step / (NA + NB);
  double macs = (NA * OA::macs + NB * OB::macs) / step;  // MAC per cycle per SIMD (wave32)
  printf("%-34s %dx%-14s + %dx%-14s  cyc/step=%8.3f  cyc/inst=%7.3f  MAC/cyc=%8.1f  (lo=%u hi=%u)\n",
         tag, NA, OA::name, NB, OB::name, step, per_inst, macs, lo, hi);
  HIP_CHECK(hipFree(d));
  return step;
}

template <class O> void single() { row<O, 1, NoOp, 0>("single, dependent"); row<O, 2, NoOp, 0>("single, ILP2"); row<O, 4, NoOp, 0>("single, ILP4"); }

int main() {
  hipDeviceProp_t p; HIP_CHECK(hipGetDeviceProperties(&p, 0));
  printf("device: %s  arch=%s\n", p.name, p.gcnArchName);
  float* r; HIP_CHECK(hipMalloc(&r, 64));
  hipLaunchKernelGGL(ramp, dim3(4096), dim3(256), 0, 0, r, 1 << 22); HIP_CHECK(hipDeviceSynchronize());

  puts("\n== 1. each WMMA type alone ==");
  single<WmmaF16>(); single<WmmaBF16>(); single<WmmaF16F16>(); single<WmmaBF16BF16>(); single<WmmaIU8>(); single<WmmaIU4>();

  puts("\n== 2. mixed types vs pure (4 independent chains, same total instruction count) ==");
  row<WmmaF16, 4, NoOp, 0>("pure f16");
  row<WmmaIU8, 4, NoOp, 0>("pure iu8");
  row<WmmaIU4, 4, NoOp, 0>("pure iu4");
  row<WmmaF16, 2, WmmaIU8, 2>("mixed f16+iu8");
  row<WmmaF16, 2, WmmaBF16, 2>("mixed f16+bf16");
  row<WmmaF16, 2, WmmaIU4, 2>("mixed f16+iu4");
  row<WmmaIU8, 2, WmmaIU4, 2>("mixed iu8+iu4");

  puts("\n== 3. WMMA + independent VALU in the same wave ==");
  row<NoOp, 0, FmaF32V, 4>("VALU alone");
  row<WmmaF16, 4, NoOp, 0>("WMMA alone");
  row<WmmaF16, 4, FmaF32V, 4>("f16 WMMA x4 + v_fma_f32 x4");
  row<WmmaF16, 4, FmaF32V, 16>("f16 WMMA x4 + v_fma_f32 x16");
  row<WmmaIU8, 4, FmaF32V, 4>("iu8 WMMA x4 + v_fma_f32 x4");
  row<WmmaIU8, 4, PkFmaV, 4>("iu8 WMMA x4 + v_pk_fma_f16 x4");
  row<WmmaF16, 4, PkFmaV, 4>("f16 WMMA x4 + v_pk_fma_f16 x4");
  return 0;
}
