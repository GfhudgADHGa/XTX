# Third-party material

* `fw/gc_11_0_0_*.bin`: AMD GPU microcode as distributed in linux-firmware (`amdgpu/`), redistributable under the
  AMD firmware license (`LICENSE.amdgpu` in linux-firmware). Used unmodified; `fw/out/` and `decomp/` are derived from it.
* `ghidra/data/atomfirmware.h`, `ghidra/data/ipregs/*.h`: AMD register/structure headers from the Linux kernel tree
  (`drivers/gpu/drm/amd/`), MIT licensed (see the notices at the top of each file). Used as reference data.
* `prior/vbios.rom`: a dump of the owner's own card; `prior/` is otherwise the earlier session's work, unchanged.
* Decompilation is performed with Ghidra (Apache-2.0, NSA) and capstone (BSD); neither is bundled.
