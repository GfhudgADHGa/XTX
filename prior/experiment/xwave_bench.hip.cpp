// Cross-wave contention probe (gfx1100): do two waves on the SAME SIMD overlap their WMMA / VALU work?
//
// One workgroup of 8 wave32 waves. Each wave runs a warm timed loop of independent WMMA (or VALU) chains,
// all waves start together (s_barrier), and each records its cycles + HW_ID1 (so the host can group
// waves by the SIMD the hardware actually put them on).
//
// If two waves on one SIMD each still take ~34 cycles per WMMA, the work overlaps.
// If each takes ~68, they share one pipe and time-slice it.
#include <hip/hip_runtime.h>
#include <algorithm>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <map>
#include <string>
#include <vector>

#define HIP_CHECK(x) do { hipError_t e = (x); if (e != hipSuccess) { \
  fprintf(stderr, "%s:%d %s\n", __FILE__, __LINE__, hipGetErrorString(e)); exit(1);} } while (0)

typedef uint32_t u2 __attribute__((ext_vector_type(2)));
typedef uint32_t u4 __attribute__((ext_vector_type(4)));
typedef uint32_t u8 __attribute__((ext_vector_type(8)));

#define WMMA_OP(STRUCT, LABEL, MNEMONIC, ABT)                                                \
  struct STRUCT { static constexpr const char* name = LABEL; using C = u8; using AB = ABT;  \
    __device__ static void op(C& c, const AB& a, const AB& b) {                              \
      asm volatile(MNEMONIC " %0, %1, %2, %0" : "+v"(c) : "v"(a), "v"(b)); } };
WMMA_OP(WmmaF16, "wmma_f16", "v_wmma_f32_16x16x16_f16", u8)
WMMA_OP(WmmaIU8, "wmma_iu8", "v_wmma_i32_16x16x16_iu8", u4)
WMMA_OP(WmmaIU4, "wmma_iu4", "v_wmma_i32_16x16x16_iu4", u2)
struct PkFmaV { static constexpr const char* name = "pk_fma"; using C = uint32_t; using AB = uint32_t;
  __device__ static void op(C& c, const AB& a, const AB& b) { asm volatile("v_pk_fma_f16 %0, %0, %1, %2" : "+v"(c) : "v"(a), "v"(b)); } };

template <class T> __device__ T fill(uint32_t s) {
  T v; constexpr int n = sizeof(T) / 4;
#pragma unroll
  for (int i = 0; i < n; i++) v[i] = 0x3c003c00u ^ ((s * 2654435761u + i * 40503u + threadIdx.x * 97u) & 0x00ff00ffu);
  return v;
}
template <> __device__ uint32_t fill<uint32_t>(uint32_t s) { return 0x3c003c00u ^ ((s * 2654435761u + threadIdx.x * 97u) & 0x00ff00ffu); }
template <class T> __device__ uint32_t first(const T& v) { return v[0]; }
template <> __device__ uint32_t first<uint32_t>(const uint32_t& v) { return v; }

constexpr int ILP = 4, K = 8;

template <class Op>
__device__ void timed(uint32_t seed, int L, uint32_t& cycles, uint32_t& sink_out) {
  typename Op::C c[ILP];
#pragma unroll
  for (int i = 0; i < ILP; i++) c[i] = fill<typename Op::C>(seed + i);
  const typename Op::AB a = fill<typename Op::AB>(seed + 7), b = fill<typename Op::AB>(seed + 9);
  uint32_t t0 = 0, t1 = 0, sink = 0;
#pragma nounroll
  for (int pass = 0; pass < 2; pass++) {
    int Lp = pass ? L : 1;
    if (pass) {
      __builtin_amdgcn_s_barrier();  // all waves leave the untimed warm-up together
      asm volatile("s_getreg_b32 %0, hwreg(HW_REG_SHADER_CYCLES)" : "=s"(t0));
    }
#pragma nounroll
    for (int it = 0; it < Lp; it++) {
#pragma unroll
      for (int k = 0; k < K; k++) {
#pragma unroll
        for (int i = 0; i < ILP; i++) Op::op(c[i], a, b);
      }
    }
    sink = 0;
#pragma unroll
    for (int i = 0; i < ILP; i++) { uint32_t t; asm volatile("v_readfirstlane_b32 %0, %1" : "=s"(t) : "v"(first(c[i]))); sink ^= t; }
    if (pass) asm volatile("s_getreg_b32 %0, hwreg(HW_REG_SHADER_CYCLES)" : "=s"(t1));
  }
  cycles = (t1 - t0) & 0xFFFFF; sink_out = sink;
}

// kind per wave: 0 = idle (waits at barrier only), 1 = OpA, 2 = OpB.  Idle waves still hit both barriers.
template <class OpA, class OpB>
__global__ __launch_bounds__(256) void xwave(uint32_t* out, const uint32_t* kind, int L) {
  const int w = threadIdx.x / 32;
  uint32_t cyc = 0, sink = 0, hw;
  asm volatile("s_getreg_b32 %0, hwreg(HW_REG_HW_ID1)" : "=s"(hw));
  const uint32_t k = kind[w];
  if (k == 1) timed<OpA>(0x100 + w, L, cyc, sink);
  else if (k == 2) timed<OpB>(0x200 + w, L, cyc, sink);
  else { __builtin_amdgcn_s_barrier(); }  // idle wave: matches the barrier inside timed()
  if (threadIdx.x % 32 == 0) { out[w * 4 + 0] = cyc; out[w * 4 + 1] = hw; out[w * 4 + 2] = k; out[w * 4 + 3] = sink; }
}

__global__ void ramp(float* p, int iters) {
  float a = threadIdx.x * 1e-3f, b = 1.0001f;
  for (int i = 0; i < iters; i++) a = fmaf(a, b, 0.5f);
  if (a == 12345.f) p[0] = a;
}

struct R { uint32_t cyc, hw, kind; };

// Run one configuration; print results grouped by the SIMD the hardware chose.
template <class OpA, class OpB>
void config(const char* title, std::vector<uint32_t> kinds, int L = 32) {
  uint32_t *d_out, *d_kind;
  HIP_CHECK(hipMalloc(&d_out, 8 * 16)); HIP_CHECK(hipMalloc(&d_kind, 8 * 4));
  kinds.resize(8, 0);
  HIP_CHECK(hipMemcpy(d_kind, kinds.data(), 8 * 4, hipMemcpyHostToDevice));
  std::vector<R> best(8, R{0xFFFFFFFF, 0, 0});
  for (int rep = 0; rep < 7; rep++) {
    HIP_CHECK(hipMemset(d_out, 0, 8 * 16));
    hipLaunchKernelGGL((xwave<OpA, OpB>), dim3(1), dim3(256), 0, 0, d_out, d_kind, L);
    HIP_CHECK(hipDeviceSynchronize());
    uint32_t h[32]; HIP_CHECK(hipMemcpy(h, d_out, sizeof h, hipMemcpyDeviceToHost));
    // keep the repetition in which the slowest active wave finished fastest (least disturbed)
    uint32_t cur = 0, prev = 0; bool have = best[0].cyc != 0xFFFFFFFF || best[1].cyc != 0xFFFFFFFF || best[2].cyc != 0xFFFFFFFF;
    for (int w = 0; w < 8; w++) if (kinds[w]) { cur = std::max(cur, h[w * 4]); if (best[w].cyc != 0xFFFFFFFF) prev = std::max(prev, best[w].cyc); }
    if (!have || cur < prev) for (int w = 0; w < 8; w++) best[w] = R{h[w * 4], h[w * 4 + 1], h[w * 4 + 2]};
  }
  printf("\n-- %s\n", title);
  const double insts = double(L) * K * ILP;  // instructions per wave in the timed region
  std::map<uint32_t, std::vector<int>> by_simd;
  for (int w = 0; w < 8; w++) if (best[w].kind) {
    uint32_t hw = best[w].hw;
    uint32_t key = (((hw >> 18) & 7) << 12) | (((hw >> 16) & 1) << 8) | (((hw >> 10) & 0xf) << 4) | ((hw >> 8) & 3);  // se,sa,wgp,simd
    by_simd[key].push_back(w);
  }
  for (auto& [key, ws] : by_simd) {
    printf("  SE%u SA%u WGP%2u SIMD%u : ", (key >> 12) & 7, (key >> 8) & 1, (key >> 4) & 0xf, key & 3);
    for (int w : ws) printf("[w%d %s %6.2f cyc/inst] ", w, best[w].kind == 1 ? OpA::name : OpB::name, best[w].cyc / insts);
    puts("");
  }
  HIP_CHECK(hipFree(d_out)); HIP_CHECK(hipFree(d_kind));
}

int main() {
  hipDeviceProp_t p; HIP_CHECK(hipGetDeviceProperties(&p, 0));
  printf("device: %s  arch=%s   (8 waves in one workgroup; ILP=%d chains per wave)\n", p.name, p.gcnArchName, ILP);
  float* r; HIP_CHECK(hipMalloc(&r, 64));
  hipLaunchKernelGGL(ramp, dim3(4096), dim3(256), 0, 0, r, 1 << 22); HIP_CHECK(hipDeviceSynchronize());

  // Waves w and w+4 share a SIMD, so {a,a,a,a,b,b,b,b} puts one 'a' and one 'b' wave on every SIMD.
  // The lower-numbered (older) wave is the first listed type.
  config<WmmaF16, WmmaIU4>("baseline: ONE f16 wave alone", {1});
  config<WmmaF16, WmmaIU4>("baseline: ONE iu4 wave alone", {2});
  config<PkFmaV, WmmaIU4>("baseline: ONE v_pk_fma wave alone", {1});
  config<WmmaF16, WmmaIU4>("f16 (older) + iu4 (younger) on each SIMD", {1, 1, 1, 1, 2, 2, 2, 2});
  config<WmmaIU4, WmmaF16>("iu4 (older) + f16 (younger) on each SIMD", {1, 1, 1, 1, 2, 2, 2, 2});
  config<WmmaF16, PkFmaV>("f16 WMMA (older) + v_pk_fma VALU (younger)", {1, 1, 1, 1, 2, 2, 2, 2});
  config<PkFmaV, WmmaF16>("v_pk_fma VALU (older) + f16 WMMA (younger)", {1, 1, 1, 1, 2, 2, 2, 2});
  config<PkFmaV, PkFmaV>("v_pk_fma (older) + v_pk_fma (younger)", {1, 1, 1, 1, 2, 2, 2, 2});
  return 0;
}
