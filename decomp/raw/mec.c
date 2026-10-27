/* Decompiled by Ghidra RISCV:LE:64:RS64MEC - gc_11_0_0_mec.image.bin */

/* ---- trap_handler @ 00001000 size=296 ---- */

/* WARNING: Removing unreachable block (ram,0x000010c0) */

undefined8 trap_handler(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long in_dscratch0;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram00020000000007c0 = param_1;
  Ram00020000000007c8 = param_2;
  Ram00020000000007d0 = param_3;
  uVar3 = Ram00020000000007b8;
  do {
    uVar2 = Ram0002000000000008;
    if (uVar3 >> 0x30 == (uVar2 & uVar3)) {
      if (in_dscratch0 != 0) {
        uVar3 = Ram0002000000000730;
        lVar4 = Ram00020000000007b0;
        Ram0001000100030118 = (int)*(undefined8 *)(((uVar3 >> 6) - 1 & 0xf) * 8 + lVar4);
      }
      uVar1 = TP_R008;
      uVar5 = Ram00020000000007c8;
      uVar5 = Ram00020000000007d0;
      TP_R020 = uVar1;
      uVar5 = Ram00020000000007c0;
      return uVar5;
    }
  } while ((uVar2 & uVar3) >> 0xf == 0);
  uVar3 = Ram0002000000000008;
  uVar5 = (*(code *)(*(ulong *)(&DAT_00100048 + (uVar3 & 0x1f) * 8) & 0xfffffffffffffffe))();
  lVar4 = Ram00020000000006f0;
  if (lVar4 == 0x905a) {
    return uVar5;
  }
  return uVar5;
}


/* ---- sub_01128 @ 00001128 size=4 ---- */

/* WARNING: Removing unreachable block (ram,0x000010c0) */

undefined8 sub_01128(void)

{
  undefined1 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long in_dscratch0;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  if (in_dscratch0 != 0) {
    uVar2 = Ram0002000000000730;
    lVar3 = Ram00020000000007b0;
    Ram0001000100030118 = (int)*(undefined8 *)(((uVar2 >> 6) - 1 & 0xf) * 8 + lVar3);
  }
  uVar1 = TP_R008;
  uVar4 = Ram00020000000007c8;
  uVar4 = Ram00020000000007d0;
  TP_R020 = uVar1;
  uVar4 = Ram00020000000007c0;
  return uVar4;
}


/* ---- reset_entry @ 00003000 size=476 ---- */

/* WARNING: Removing unreachable block (ram,0x000031ac) */
/* WARNING: Removing unreachable block (ram,0x00003090) */
/* WARNING: Removing unreachable block (ram,0x00003094) */
/* WARNING: Removing unreachable block (ram,0x000030a0) */
/* WARNING: Removing unreachable block (ram,0x000031d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void reset_entry(void)

{
  undefined8 *puVar1;
  ulong in_mhartid;
  
  _DAT_1000800000c10 = 0;
  tp = 0x2000000000000;
  Ram0002000000000610 = 0xa78;
  Ram00020000000004b0 = 0xf8000000;
  Ram00020000000006e0 = 8;
  if (in_mhartid == 0) {
    _DAT_10008000324ac = 7;
    _DAT_100080003249c = 0x100000;
    _DAT_10008000324a0 = 0x21fff00100000;
    _DAT_10008000324a8 = 0;
  }
  do {
  } while (_DAT_10008000324a8 != 0);
  _DAT_1000800000c14 = 0x400;
  uRam0001000800000c18 = 0;
  _DAT_100080003243c = 0;
  _DAT_100010000c4d4 = 0x10001 << (in_mhartid & 0x1f);
  gp = 0x101800;
  puVar1 = (undefined8 *)&DAT_00101080;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (puVar1 < &DAT_001013f8);
  FUN_000240c8(in_mhartid);
  _DAT_1000800000c10 = 0x12c1ec6;
  _DAT_1000800000c14 = 0;
  FUN_00024188(in_mhartid);
  return;
}


/* ---- sub_031dc @ 000031dc size=4 ---- */

void sub_031dc(void)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  return;
}


/* ---- FUN_000031e0 @ 000031e0 size=16 ---- */

void FUN_000031e0(void)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram00020000000007b8 = DAT_00101018;
  return;
}


/* ---- sub_031f8 @ 000031f8 size=164 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_031f8(uint param_1,uint param_2,undefined4 param_3,long param_4)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  lVar3 = param_4 << 0x24;
  *(uint *)(lVar3 + 0x108080000c8f0) = *(uint *)(lVar3 + 0x108080000c8f0) | param_1;
  uVar1 = (uint)((ulong)((long)*(int *)(lVar3 + 0x108080000c860) << 0x21) >> 0x20);
  *(uint *)(lVar3 + 0x108080000c860) = uVar1 >> 1;
  uVar2 = Ram0002000000000020;
  Ram0002000000000040 = 1;
  do {
  } while (_DAT_100010000c2d4 != 0);
  _DAT_100010000c2dc = uVar1 >> 1 & 0x8ffffffc;
  _DAT_100010000c0dc = param_2 & 0x8fffffff | ((uint)param_4 >> 4 & 7) << 0x1c;
  _DAT_100010000c0e4 = param_3;
  _DAT_100010000c0e8 = 0x10000;
  _DAT_100010000c2d4 = 0x10000;
  Ram0002000000000040 = uVar2;
  return;
}


/* ---- sub_032a0 @ 000032a0 size=24 ---- */

void sub_032a0(void)

{
  uint uVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0002000000000198 = 4;
  do {
    uVar1 = Ram0002000000000048;
  } while ((uVar1 & 0x10) == 0);
  return;
}


/* ---- sub_032b8 @ 000032b8 size=12 ---- */

void sub_032b8(void)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram00020000000001a0 = 4;
  return;
}


/* ---- sub_032c8 @ 000032c8 size=152 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_032c8(uint param_1)

{
  long lVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0002000000000080 = 4;
  Ram00020000000003c0 = 0;
  do {
  } while ((param_1 | 0x80000000) >> 0x1e != 3);
  fence();
  Ram0002000000000518 = 0x1c3f1;
  do {
    lVar1 = Ram00020000000004b8;
  } while (lVar1 != 0);
  lVar1 = (long)(int)(param_1 | 0x80000000) << 0x21;
  _DAT_10001000062f8 = (uint)((ulong)lVar1 >> 0x21);
  _DAT_1000100004af8 = _DAT_10001000062f8;
  do {
  } while (lVar1 < 0);
  return;
}


/* ---- sub_03360 @ 00003360 size=240 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_03360(long param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar5 = Ram0002000000000020;
  Ram0002000000000040 = 1;
  uVar4 = Ram0001000100008924;
  uVar8 = (ulong)(long)(int)(_DAT_100010003ee48 | uVar4) >> 8 & 0xffff;
  iVar9 = 0;
  iVar7 = 0;
  do {
    if ((uVar8 & 3) != 3) {
      Ram0001000100030800 = iVar7;
      iVar9 = iVar9 + *(int *)((long)(int)(((uint)param_1 >> 4 & 7) + 0x24dc) * 4 + 0x1000100000000)
      ;
    }
    iVar7 = iVar7 + 0x10000;
    uVar8 = uVar8 >> 2;
  } while (iVar7 != 0x60000);
  param_1 = param_1 << 0x24;
  Ram0001000100030800 = 0xe0000000;
  uVar1 = *(undefined4 *)(param_1 + 0x108080000c8fc);
  uVar2 = *(undefined4 *)(param_1 + 0x108080000c874);
  *(undefined4 *)(param_1 + 0x108080000c890) = 0;
  Ram0002000000000120 = param_3;
  uVar6 = Ram00020000000000f8;
  *(undefined8 *)(param_2 + 0x158) = uVar6;
  uVar3 = *(undefined4 *)(param_1 + 0x108080000c84c);
  *(int *)(param_2 + 0x170) = iVar9;
  *(undefined4 *)(param_2 + 0x174) = uVar3;
  *(undefined4 *)(param_2 + 0x178) = uVar1;
  *(undefined4 *)(param_2 + 0x17c) = uVar2;
  Ram0002000000000040 = uVar5;
  return;
}


/* ---- FUN_00003450 @ 00003450 size=63420 ---- */
/* DECOMPILE FAILED: Exception while decompiling 00003450: Decompiler process died
 */

/* ---- pm4_OP_0E_handler @ 00012c10 size=63424 ---- */
/* DECOMPILE FAILED: Exception while decompiling 00012c10: Decompiler process died
 */

/* ---- sub_223d0 @ 000223d0 size=76 ---- */

void sub_223d0(long param_1,undefined4 param_2)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  param_1 = param_1 << 0x24;
  *(undefined4 *)(param_1 + 0x108080000c87c) = param_2;
  *(uint *)(param_1 + 0x108080000c884) =
       *(uint *)(param_1 + 0x108080000c884) & 0xffff0000 |
       *(uint *)(param_1 + 0x108080000c884) & 0xfdef | 0x200;
  Ram00020000000005e8 = 0;
  return;
}


/* ---- FUN_00022420 @ 00022420 size=512 ---- */

void FUN_00022420(long param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar3 = param_2 & 0x7fffffff;
  lVar5 = param_1 << 0x24;
  if ((param_2 & 0x8000000) != 0) {
    *(int *)(lVar5 + 0x108080000c87c) = (int)uVar3;
    *(uint *)(lVar5 + 0x108080000c884) =
         *(uint *)(lVar5 + 0x108080000c884) & 0xffff0000 |
         *(uint *)(lVar5 + 0x108080000c884) & 0xfdef | 0x200;
    Ram00020000000005e8 = 0;
    return;
  }
  if (((ulong)(long)(int)*(uint *)(lVar5 + 0x108080000c8cc) >> 0x10 & 1) == 0) {
    *(int *)(lVar5 + 0x108080000c87c) = (int)uVar3;
  }
  else {
    uVar1 = Ram00020000000000c8;
    uVar4 = (uint)((param_2 << 0x21) >> 0x20);
    if ((uVar1 >> ((long)(int)((uint)param_1 >> 4) & 7U) & 1) == 0) {
      *(uint *)(lVar5 + 0x108080000c8cc) = *(uint *)(lVar5 + 0x108080000c8cc) & 0xfffeffff;
      uVar1 = Ram0002000000000188;
      iVar2 = Ram0002000000000068;
      if ((((ulong)uVar1 & 3) == (long)iVar2) && (uVar1 = Ram00020000000004f0, (uVar1 & 8) != 0)) {
        Ram0002000000000150 = 0;
      }
      Ram00020000000005e8 = 0;
      uVar4 = uVar4 >> 0x11 & 0x3f;
      if ((param_2 & 0x3000) != 0) {
        *(uint *)(lVar5 + 0x108080000c874) =
             *(uint *)(lVar5 + 0x108080000c874) & 0xfff00000 |
             (*(uint *)(lVar5 + 0x108080000c874) & 0xfffff) + uVar4 & 0xfffff;
        *(uint *)(lVar5 + 0x108080000c878) =
             *(uint *)(lVar5 + 0x108080000c878) & 0xfff00000 |
             (*(uint *)(lVar5 + 0x108080000c878) & 0xfffff) - uVar4 & 0xfffff;
        *(undefined4 *)(lVar5 + 0x108080000c884) = 0x200;
        *(uint *)(lVar5 + 0x108080000c87c) = (uint)((uVar3 << 0x22) >> 0x22);
        return;
      }
      uVar1 = 2 << ((long)*(int *)(lVar5 + 0x108080000c868) & 0x1fU);
      uVar4 = uVar4 + *(int *)(lVar5 + 0x108080000c84c);
      if (uVar1 <= uVar4) {
        uVar4 = uVar4 - uVar1;
      }
      *(uint *)(lVar5 + 0x108080000c84c) = uVar4;
      *(undefined4 *)(lVar5 + 0x108080000c884) = 0x200;
      *(uint *)(lVar5 + 0x108080000c87c) = (uint)((uVar3 << 0x22) >> 0x22);
      return;
    }
    uVar1 = Ram00020000000000f0;
    *(uint *)(lVar5 + 0x108080000c87c) = uVar4 >> 1 & 0xffffff00 | uVar1 & 0xff | 0x80000000;
  }
  *(uint *)(lVar5 + 0x108080000c884) =
       *(uint *)(lVar5 + 0x108080000c884) & 0xffff0000 |
       *(uint *)(lVar5 + 0x108080000c884) & 0xfdef | 0x200;
  Ram00020000000005e8 = 0;
  return;
}


/* ---- sub_22620 @ 00022620 size=56 ---- */

void sub_22620(uint param_1,undefined4 param_2,uint param_3,long param_4,long param_5,ulong param_6)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0002000000000040 = param_2;
  Ram0002000000000058 = param_6 | 0x10000;
  Ram0002000000000010 = param_4 + param_5;
  Ram0002000000000010 = param_3 | (param_1 >> 4 & 7) << 0x10 | 0xc000;
  return;
}


/* ---- sub_22658 @ 00022658 size=68 ---- */

void sub_22658(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0002000000000080 = param_2;
  Ram00020000000003c0 = 0;
  Ram00020000000004b0 = param_3;
  *(undefined4 *)((param_1 << 0x24) + 0x108080000c87c) = 0x20000000;
  Ram0002000000000448 = 0x800;
  uVar1 = Ram00020000000000e8;
  return;
}


/* ---- sub_226a0 @ 000226a0 size=164 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sub_226a0(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar2 = Ram0002000000000020;
  Ram0002000000000040 = 1;
  uVar1 = Ram0001000100008924;
  uVar5 = (ulong)(long)(int)(_DAT_100010003ee48 | uVar1) >> 8 & 0xffff;
  iVar4 = 0;
  iVar3 = 0;
  do {
    if ((uVar5 & 3) != 3) {
      Ram0001000100030800 = iVar4;
      iVar3 = (*(uint *)((long)(int)((param_1 >> 4 & 7) + 0x24dc) * 4 + 0x1000100000000) >> 0x10 &
              0x7ff) + iVar3;
    }
    iVar4 = iVar4 + 0x10000;
    uVar5 = uVar5 >> 2;
  } while (iVar4 != 0x60000);
  Ram0001000100030800 = 0xe0000000;
  Ram0002000000000040 = uVar2;
  return iVar3;
}


/* ---- sub_22748 @ 00022748 size=96 ---- */

void sub_22748(long param_1)

{
  uint uVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  param_1 = param_1 << 0x24;
  *(uint *)(param_1 + 0x108080000c884) =
       *(uint *)(param_1 + 0x108080000c884) & 0xffff0000 |
       *(uint *)(param_1 + 0x108080000c884) & 0xfdef | 0x200;
  uVar1 = Ram00020000000000f0;
  *(uint *)(param_1 + 0x108080000c87c) = uVar1 >> 0x18 | 0x80000200;
  return;
}


/* ---- sub_227a8 @ 000227a8 size=124 ---- */

void sub_227a8(long param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  uint uVar6;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar2 = *(uint *)((param_1 << 0x24) + 0x108080000c8ec);
  lVar4 = *(long *)((param_1 << 0x24) + 0x108080000c824);
  uVar3 = uVar2 >> 0xc;
  Ram0002000000000120 = param_2;
  uVar6 = uVar3 & 0x3f;
  do {
    Ram0001000100031068 = uVar6;
    uVar5 = Ram000100010003106c;
    *(undefined4 *)(lVar4 + 0x700) = uVar5;
    bVar1 = uVar6 != (uVar2 >> 4 & 0x3f) + (uVar3 & 0x3f);
    uVar6 = uVar6 + 1;
  } while (bVar1);
  return;
}


/* ---- sub_22828 @ 00022828 size=84 ---- */

void sub_22828(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  param_1 = param_1 << 0x24;
  *(undefined4 *)(param_1 + 0x108080000c82c) = 2;
  *(undefined4 *)(param_1 + 0x108080000c884) = 0;
  iVar2 = Ram0002000000000788;
  if (iVar2 == 0) {
    uVar1 = Ram0002000000000020;
    Ram0002000000000040 = 1;
    *(undefined4 *)(param_1 + 0x108080000c2e0) = 4;
    Ram0002000000000040 = uVar1;
  }
  return;
}


/* ---- sub_22880 @ 00022880 size=80 ---- */

bool sub_22880(long param_1)

{
  uint uVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  param_1 = param_1 << 0x24;
  uVar1 = *(uint *)(param_1 + 0x108080000c8c4) & 0x40000000;
  if ((uVar1 != 0) && (uVar1 = *(uint *)(param_1 + 0x108080000c8c4) & 0x40000000, uVar1 != 0)) {
    uVar1 = *(uint *)(param_1 + 0x108080000c8c4) & 0x40000000;
  }
  return uVar1 == 0;
}


/* ---- sub_228d0 @ 000228d0 size=256 ---- */

/* WARNING: Removing unreachable block (ram,0x000228fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_228d0(long param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  param_1 = param_1 << 0x24;
  if ((*(uint *)(param_1 + 0x108080000c8ec) & 1) != 0) {
    iVar2 = Ram0002000000000058;
    _DAT_100010000cd28 = (iVar2 * 4 + in_mhartid) * 0x100;
    *(undefined4 *)(param_1 + 0x108080000c8ac) = 0x3000;
    uVar5 = _DAT_100010000cd44;
    uVar4 = _DAT_100010000cd40;
    uVar3 = _DAT_100010000cd3c;
    lVar1 = *(long *)(param_1 + 0x108080000c824);
    do {
    } while ((_DAT_100010000cd34 & 1) == 0);
    Ram0002000000000120 = *(uint *)(param_1 + 0x108080000c8ac) >> 0x18 & 3;
    *(undefined4 *)(lVar1 + 0x1b0) = _DAT_100010000cd38;
    *(undefined4 *)(lVar1 + 0x1b4) = uVar3;
    *(undefined4 *)(lVar1 + 0x1b8) = uVar4;
    *(undefined4 *)(lVar1 + 0x1bc) = uVar5;
    *(undefined4 *)(param_1 + 0x108080000c8ac) = 0x2000;
  }
  return;
}


/* ---- sub_229d0 @ 000229d0 size=80 ---- */

void sub_229d0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0001000100030800 =
       param_3 & 0xff | (param_2 & 0xff) << 8 | (param_1 & 0xff) << 0x10 | (param_4 & 1) << 0x1d |
       (param_4 & 1) << 0x1e | param_4 << 0x1f;
  return;
}


/* ---- sub_22a20 @ 00022a20 size=48 ---- */

undefined8 sub_22a20(int param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar3 = param_2 & 0xffff | (ulong)(uint)(param_1 << 0x10);
  Ram0001000100008de0 = uVar3;
  uVar2 = Ram0001000100008de4;
  do {
    uVar1 = Ram0001000100008de0;
  } while (uVar3 != uVar1);
  return uVar2;
}


/* ---- sub_22a50 @ 00022a50 size=76 ---- */

void sub_22a50(int param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0001000100008de0 = (ulong)(uint)(param_1 << 0x10) | param_3 & 0xffff;
  Ram0001000100008de4 = param_2;
  uVar3 = param_3 & 0xffff | 0x1020000;
  do {
    Ram0001000100008de0 = uVar3;
    uVar2 = Ram0001000100008de4;
    do {
      uVar1 = Ram0001000100008de0;
    } while (uVar3 != uVar1);
  } while ((uVar2 & 0x10000000) == 0);
  return;
}


/* ---- sub_22aa0 @ 00022aa0 size=184 ---- */

void sub_22aa0(uint param_1,uint param_2,uint param_3,ulong param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar3 = param_1 & 0xffff0000 | (param_5 & 0xf) << 8 | 7 | param_1 & 0xf080;
  if (param_4 != 0) {
    uVar2 = (param_3 & 0x3f) * 4;
    uVar1 = uVar2 + 4;
    do {
      param_2 = param_2 & 0xffffff00 | uVar2;
      Ram0001000100030800 = param_2;
      uVar4 = 0;
      do {
        uVar6 = uVar3 & 0xffe0ffff | (uVar4 & 0x1f) << 0x10;
        uVar5 = param_4 & 1;
        param_4 = param_4 >> 1;
        if (uVar5 != 0) {
          Ram0001000100008dec = uVar6;
          uVar3 = uVar6;
        }
        uVar4 = uVar4 + 1;
        if (param_4 == 0) {
          gp = 0x101800;
          tp = 0x2000000000000;
          return;
        }
      } while (uVar4 != 0x10);
      uVar2 = uVar2 + 1 & 0xff;
    } while ((uVar1 & 0xff) != uVar2);
  }
  return;
}


/* ---- sub_22b58 @ 00022b58 size=600 ---- */

/* WARNING: Removing unreachable block (ram,0x00022d18) */
/* WARNING: Removing unreachable block (ram,0x00022d0c) */
/* WARNING: Removing unreachable block (ram,0x00022d24) */
/* WARNING: Removing unreachable block (ram,0x00022d40) */
/* WARNING: Removing unreachable block (ram,0x00022d48) */

void sub_22b58(int param_1,ulong param_2,ulong param_3,ulong param_4,ulong *param_5,char *param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar4 = 1L << ((long)(param_1 * 0x10 + (int)param_2) & 0x3fU);
  uVar9 = param_2 & 0xffff;
  if ((*param_6 == '\0') && ((param_3 & 0x1000) != 0)) {
    do {
    } while( true );
  }
  Ram0001000100008de0 = uVar9 | 0x1030000;
  uVar5 = Ram0001000100008de4;
  do {
    uVar7 = Ram0001000100008de0;
  } while ((uVar9 | 0x1030000) != uVar7);
  uVar7 = param_5[1];
  if ((param_3 & 0x1000) == 0) {
    param_5[1] = ~uVar4 & uVar7;
    if ((uVar5 & 0x10000000) != 0) {
      Ram0001000100008dec = (uint)((param_2 & 0x1f) << 0x10) | 3;
      return;
    }
    if ((param_3 & 0x10000000) != 0) {
      uVar5 = uVar4 & ~uVar4 & uVar7;
      goto LAB_00022bcc;
    }
    do {
      Ram0001000100008de0 = uVar9 | 0x1020000;
      uVar5 = Ram0001000100008de4;
      do {
        uVar7 = Ram0001000100008de0;
      } while (uVar7 != (uVar9 | 0x1020000));
    } while ((uVar5 & 0x10000000) == 0);
    uVar5 = param_5[1];
  }
  else {
    if ((uVar5 & 0x100) == 0) {
      param_5[1] = uVar4 | uVar7;
      return;
    }
    param_5[1] = ~uVar4 & uVar7;
    uVar5 = ~uVar4 & uVar7 & uVar4;
    if ((param_3 & 0x10000000) != 0) goto LAB_00022bcc;
    do {
      Ram0001000100008de0 = uVar9 | 0x1020000;
      uVar5 = Ram0001000100008de4;
      do {
        uVar7 = Ram0001000100008de0;
      } while (uVar7 != (uVar9 | 0x1020000));
    } while ((uVar5 & 0x10000000) == 0);
    uVar5 = param_5[1];
  }
  uVar5 = uVar4 & uVar5;
LAB_00022bcc:
  if (uVar5 == 0) {
    uVar5 = uVar9 | 0x1080000;
    Ram0001000100008de0 = uVar5;
    uVar2 = Ram0001000100008de4;
    do {
      uVar7 = Ram0001000100008de0;
    } while (uVar5 != uVar7);
    uVar8 = uVar9 | 0x1090000;
    Ram0001000100008de0 = uVar8;
    uVar7 = Ram0001000100008de4;
    do {
      uVar6 = Ram0001000100008de0;
    } while (uVar8 != uVar6);
    Ram0001000100008de0 = uVar9 | 0x26c0000;
    Ram0001000100008de4 = uVar2;
    uVar6 = uVar9 | 0x1020000;
    do {
      Ram0001000100008de0 = uVar6;
      uVar3 = Ram0001000100008de4;
      do {
        uVar1 = Ram0001000100008de0;
      } while (uVar6 != uVar1);
    } while ((uVar3 & 0x10000000) == 0);
    Ram0001000100008de0 = uVar9 | 0x26d0000;
    Ram0001000100008de4 = uVar7 | 0xc0000000;
    do {
      Ram0001000100008de0 = uVar6;
      uVar9 = Ram0001000100008de4;
      do {
        uVar7 = Ram0001000100008de0;
      } while (uVar6 != uVar7);
    } while ((uVar9 & 0x10000000) == 0);
    Ram0001000100008de0 = uVar5;
    Ram0001000100008de4 = param_4;
    do {
      Ram0001000100008de0 = uVar6;
      uVar9 = Ram0001000100008de4;
      do {
        uVar5 = Ram0001000100008de0;
      } while (uVar5 != uVar6);
    } while ((uVar9 & 0x10000000) == 0);
    Ram0001000100008de0 = uVar8;
    Ram0001000100008de4 = param_4 >> 0x20;
    do {
      Ram0001000100008de0 = uVar6;
      uVar9 = Ram0001000100008de4;
      do {
        uVar5 = Ram0001000100008de0;
      } while (uVar5 != uVar6);
    } while ((uVar9 & 0x10000000) == 0);
    *param_5 = *param_5 | uVar4;
  }
  return;
}


/* ---- sub_22db0 @ 00022db0 size=432 ---- */

/* WARNING: Removing unreachable block (ram,0x00022df4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_22db0(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulong uVar9;
  int in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar4 = Ram0002000000000020;
  Ram0002000000000040 = 1;
  param_1 = param_1 << 0x24;
  uVar1 = *(uint *)(param_1 + 0x108080000c8ec);
  iVar2 = Ram0002000000000058;
  uVar8 = uVar1 >> 4 & 0x3f;
  if ((uVar1 & 1) == 0) {
    if (((ulong)(long)*(int *)(param_1 + 0x108080000c8a4) >> 0xd & 1) == 0) goto LAB_00022f28;
LAB_00022e28:
    uVar9 = (long)(int)(uVar1 >> 0xc) & 0x3f;
    iVar2 = uVar8 + (int)uVar9;
    uVar9 = uVar9 << 8 | 1;
    do {
      uVar8 = uVar8 - 1;
      _DAT_100010000cd18 = (undefined4)uVar9;
      uVar9 = uVar9 & 0xffffffffffff00ff | (long)(int)((iVar2 - uVar8 & 0xff) << 8);
    } while (uVar8 != 0);
    if ((uVar1 & 1) == 0) goto LAB_00022f28;
  }
  else {
    _DAT_100010000cd28 = (iVar2 * 4 + in_mhartid) * 0x100 | 1;
    if (((ulong)(long)*(int *)(param_1 + 0x108080000c8a4) >> 0xd & 1) != 0) goto LAB_00022e28;
  }
  *(undefined4 *)(param_1 + 0x108080000c8ac) = 0x3000;
  uVar7 = _DAT_100010000cd44;
  uVar6 = _DAT_100010000cd40;
  uVar5 = _DAT_100010000cd3c;
  lVar3 = *(long *)(param_1 + 0x108080000c824);
  do {
  } while ((_DAT_100010000cd34 & 1) == 0);
  Ram0002000000000120 = *(uint *)(param_1 + 0x108080000c8ac) >> 0x18 & 3;
  *(undefined4 *)(lVar3 + 0x1b0) = _DAT_100010000cd38;
  *(undefined4 *)(lVar3 + 0x1b4) = uVar5;
  *(undefined4 *)(lVar3 + 0x1b8) = uVar6;
  *(undefined4 *)(lVar3 + 0x1bc) = uVar7;
  *(undefined4 *)(param_1 + 0x108080000c8ac) = 0x2000;
LAB_00022f28:
  *(undefined4 *)(param_1 + 0x108080000c890) = 0x32;
  Ram0002000000000340 = 2;
  Ram0002000000000040 = uVar4;
  Ram0002000000000448 = 0x4000;
  return;
}


/* ---- sub_22f60 @ 00022f60 size=292 ---- */

/* WARNING: Removing unreachable block (ram,0x00022fd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_22f60(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000020;
  Ram0002000000000040 = 1;
  _DAT_1000100009c80 = _DAT_1000100009c80 | 0xff0000;
  DAT_00101184 = 0;
  param_1 = param_1 << 0x24;
  uVar4 = *(uint *)(param_1 + 0x108080000c8ec);
  if ((uVar4 & 1) != 0) {
    uVar4 = uVar4 & 0xfffffffd;
    *(uint *)(param_1 + 0x108080000c8ec) = uVar4;
    iVar2 = Ram0002000000000058;
    _DAT_100010000cd28 = (iVar2 * 4 + in_mhartid) * 0x100;
  }
  if ((uVar4 & 0x3f0) != 0) {
    _DAT_100010000cd10 = 0;
    _DAT_100010000cd14 = 0;
  }
  iVar2 = Ram0002000000000280;
  uVar3 = Ram0002000000000290;
  if ((*(uint *)(param_1 + 0x108080000c834) & 0x80) == 0) {
    *(int *)(param_1 + 0x108080000c8dc) = iVar2;
    *(undefined4 *)(param_1 + 0x108080000c8e4) = uVar3;
  }
  else {
    *(uint *)(param_1 + 0x108080000c908) = (uint)(*(int *)(param_1 + 0x108080000c30c) - iVar2) >> 2;
    *(int *)(param_1 + 0x108080000c904) = iVar2;
    *(undefined4 *)(param_1 + 0x108080000c90c) = uVar3;
    *(int *)(param_1 + 0x108080000c30c) = iVar2;
    *(undefined4 *)(param_1 + 0x108080000c314) = uVar3;
  }
  *(undefined4 *)(param_1 + 0x108080000c890) = 0x42;
  Ram0002000000000340 = 4;
  Ram0002000000000338 = 1;
  Ram0002000000000040 = uVar1;
  Ram0002000000000448 = 0x4000;
  return;
}


/* ---- sub_23088 @ 00023088 size=28 ---- */

void sub_23088(void)

{
  long lVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  fence();
  Ram0002000000000518 = 0x10040;
  do {
    lVar1 = Ram00020000000004b8;
  } while (lVar1 != 0);
  return;
}


/* ---- sub_230a8 @ 000230a8 size=96 ---- */

void sub_230a8(long param_1)

{
  undefined4 uVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000020;
  Ram0002000000000040 = 1;
  param_1 = param_1 << 0x24;
  *(undefined4 *)(param_1 + 0x108080000c87c) = 0;
  *(uint *)(param_1 + 0x108080000c884) =
       *(uint *)(param_1 + 0x108080000c884) & 0xffff0000 |
       *(uint *)(param_1 + 0x108080000c884) & 0xfdef | 0x200;
  Ram0002000000000040 = uVar1;
  Ram0002000000000448 = 0x4000;
  return;
}


/* ---- sub_23108 @ 00023108 size=88 ---- */

void sub_23108(long param_1)

{
  undefined4 uVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000020;
  Ram0002000000000040 = 1;
  Ram0002000000000470 = 1;
  Ram0002000000000470 = 0;
  Ram0002000000000040 = uVar1;
  if (-1 < *(int *)((param_1 << 0x24 | 0x1080100000000U) + 0xc6c8)) {
    return;
  }
  FUN_00022420();
  return;
}


/* ---- sub_23160 @ 00023160 size=72 ---- */

void sub_23160(long param_1)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  param_1 = param_1 << 0x24;
  *(undefined4 *)(param_1 + 0x108080000c87c) = 0;
  *(uint *)(param_1 + 0x108080000c884) =
       *(uint *)(param_1 + 0x108080000c884) & 0xffff0000 |
       *(uint *)(param_1 + 0x108080000c884) & 0xfdef | 0x200;
  return;
}


/* ---- sub_231a8 @ 000231a8 size=200 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 sub_231a8(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar4 = Ram0002000000000038;
  uVar3 = Ram0002000000000020;
  Ram0002000000000080 = 4;
  Ram00020000000003c0 = 0;
  Ram0002000000000040 = 1;
  uVar2 = Ram0001000100008924;
  uVar7 = (ulong)(long)(int)(_DAT_100010003ee48 | uVar2) >> 8 & 0xffff;
  iVar6 = 0;
  while( true ) {
    uVar5 = uVar7 & 3;
    uVar7 = uVar7 >> 2;
    iVar1 = iVar6 + 0x10000;
    if ((uVar5 != 3) &&
       (Ram0001000100030800 = iVar6, uVar2 = Ram000100010000936c,
       (1 << (long)(int)((param_1 & 0xc) + (param_1 >> 4 & 7)) & uVar2) != 0)) break;
    iVar6 = iVar1;
    if (iVar1 == 0x60000) {
      Ram0001000100030800 = 0xe0000000;
      Ram0002000000000080 = uVar4;
      Ram00020000000003c0 = 0;
      Ram0002000000000040 = uVar3;
      return 0;
    }
  }
  Ram0001000100030800 = 0xe0000000;
  Ram0002000000000080 = uVar4;
  Ram00020000000003c0 = 0;
  Ram0002000000000040 = uVar3;
  return 1;
}


/* ---- FUN_00023270 @ 00023270 size=188 ---- */

void FUN_00023270(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar2 = Ram0002000000000020;
  Ram0002000000000040 = 1;
  lVar3 = param_1 << 0x24;
  Ram0001000100008dec = ((uint)param_1 >> 4 & 7) << 0x18 | 0x126;
  *(undefined4 *)(lVar3 + 0x108080000c890) = 2;
  Ram0002000000000040 = uVar2;
  uVar1 = Ram00020000000000f0;
  uVar1 = uVar1 >> 8;
  if ((*(uint *)(lVar3 + 0x108080000c320) & 1) != 0) {
    uVar1 = *(uint *)(lVar3 + 0x108080000c328);
  }
  *(uint *)(lVar3 + 0x108080000c87c) =
       (uint)((uVar1 & 0xff) == 0) << 0xb | 0x80000200 | uVar1 & 0xff;
  return;
}


/* ---- sub_23330 @ 00023330 size=124 ---- */

void sub_23330(long param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  param_1 = param_1 << 0x24;
  *(undefined4 *)(param_1 + 0x108080000c87c) = 0;
  *(uint *)(param_1 + 0x108080000c884) =
       *(uint *)(param_1 + 0x108080000c884) & 0xffff0000 |
       *(uint *)(param_1 + 0x108080000c884) & 0xfdef | 0x200;
  if ((param_2 == 0 && param_3 == 0) && (param_4 != 0)) {
    FUN_00023270();
    return;
  }
  uVar1 = Ram00020000000000f0;
  *(uint *)(param_1 + 0x108080000c87c) = uVar1 >> 0x18 | 0x80000400;
  return;
}


/* ---- sub_233b0 @ 000233b0 size=236 ---- */

void sub_233b0(ulong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar2 = (uint)param_1 >> 2 & 3 ^ 3;
  do {
    param_1 = param_1 & 0xfffffffffffffff0 | 1 | (long)(int)(uVar2 << 2);
    uVar1 = *(uint *)((param_1 << 0x24) + 0x108080002e080);
  } while ((uVar1 & 0xc0000000) != 0);
  *(uint *)((param_1 << 0x24) + 0x108080002e080) = uVar1 & 0xffffff00 | param_2 | 2 | 0x80000000;
  do {
    param_1 = param_1 & 0xfffffffffffffff0 | 1 | (long)(int)(uVar2 << 2);
    uVar1 = *(uint *)((param_1 << 0x24) + 0x108080002e080);
  } while ((uVar1 & 0xc0000000) != 0xc0000000);
  *(uint *)((param_1 << 0x24) + 0x108080002e080) = (uint)((ulong)((long)(int)uVar1 << 0x21) >> 0x21)
  ;
  do {
    param_1 = param_1 & 0xfffffffffffffff0 | 1 | (long)(int)(uVar2 << 2);
  } while (*(int *)((param_1 << 0x24) + 0x108080002e080) != 0);
  return;
}


/* ---- sub_234a0 @ 000234a0 size=64 ---- */

void sub_234a0(long param_1)

{
  uint uVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  *(undefined4 *)((param_1 << 0x24) + 0x108080000c890) = 2;
  uVar1 = Ram00020000000000f0;
  *(uint *)((param_1 << 0x24) + 0x108080000c87c) = uVar1 >> 0x18 | 0x80000200;
  return;
}


/* ---- sub_234e0 @ 000234e0 size=76 ---- */

void sub_234e0(long param_1)

{
  uint uVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  param_1 = param_1 << 0x24;
  *(uint *)(param_1 + 0x108080000c8a4) = *(uint *)(param_1 + 0x108080000c8a4) | 0x80;
  uVar1 = Ram00020000000000f0;
  *(undefined4 *)(param_1 + 0x108080000c890) = 0;
  *(uint *)(param_1 + 0x108080000c87c) = uVar1 >> 8 & 0xff | 0x80000400;
  return;
}


/* ---- sub_23530 @ 00023530 size=296 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_23530(uint param_1)

{
  uint uVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar3 = (ulong)param_1 << 0x24;
  uVar4 = uVar3 | 0x1080100000000;
  uVar1 = *(uint *)(uVar4 + 0xc6c8);
  if ((-1 < (int)uVar1) && ((uVar1 & 1) != 0)) {
    if (((uVar1 >> 1 & 2) != 0) && ((uVar1 >> 8 & 2) != 0)) {
      _DAT_100010000c164 = DAT_001010a8._4_4_;
      *(undefined4 *)(uVar4 + 0xc6c8) = 0;
      DAT_001010a8 = 0;
      return;
    }
    if (((uVar1 >> 8 & 1) != 0) &&
       (*(undefined4 *)(uVar4 + 0xc6c8) = 0x8000000d, cVar2 = DAT_00101084,
       (*(uint *)(uVar4 + 0xc6c8) & 0x8000000d) == 0x8000000d)) {
      DAT_001010a8 = CONCAT44(1,(undefined4)DAT_001010a8);
      uVar1 = Ram00020000000000f0;
      *(uint *)(uVar3 + 0x108080000c87c) = uVar1 & 0xff | 0x80000500;
      if ((cVar2 != '\0') &&
         ((uVar1 = Ram0002000000000068, (param_1 >> 4 & 7) == uVar1 &&
          ((*(uint *)(uVar3 + 0x108080002e088) & 0x1f) < 10)))) {
        Ram00020000000001b0 = 7;
        FUN_00024960();
        return;
      }
    }
  }
  return;
}


/* ---- sub_23658 @ 00023658 size=28 ---- */

void sub_23658(void)

{
  long lVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  fence();
  Ram0002000000000518 = 0x103c0;
  do {
    lVar1 = Ram00020000000004b8;
  } while (lVar1 != 0);
  return;
}


/* ---- sub_23678 @ 00023678 size=68 ---- */

void sub_23678(long param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_2;
  tp = 0x2000000000000;
  gp = 0x101800;
  if (param_1 == 0) {
    if (((param_2 >> 0xd & 1) != 0) && ((param_2 & 1) == 0)) {
      uVar1 = uVar1 & 0xffffdfff;
    }
    Ram00020000000007f8 = 0;
    Ram00020000000000a8 = 2;
    Ram000100020000b800 = uVar1;
    Ram00020000000000a8 = 0;
  }
  return;
}


/* ---- sub_236c0 @ 000236c0 size=2564 ---- */

/* WARNING: Removing unreachable block (ram,0x00023930) */
/* WARNING: Removing unreachable block (ram,0x0002393c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sub_236c0(ulong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  int iVar21;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  lVar14 = param_1 << 0x24;
  uVar12 = (uint)param_1 >> 4;
  *(undefined4 *)(lVar14 + 0x108080000c8ac) = 0x3000;
  lVar18 = *(long *)(lVar14 + 0x108080000c824);
  if ((*(uint *)(lVar14 + 0x108080000c8ec) & 1) != 0) {
    Ram00020000000000d8 = *(uint *)(lVar14 + 0x108080000c8ac) >> 0x11 & 0x180;
    _DAT_100010000cd38 = *(undefined4 *)(lVar18 + 0x1b0);
    _DAT_100010000cd3c = *(undefined4 *)(lVar18 + 0x1b4);
    _DAT_100010000cd40 = *(undefined4 *)(lVar18 + 0x1b8);
    _DAT_100010000cd44 = *(undefined4 *)(lVar18 + 0x1bc);
    _DAT_100010000cd34 = 2;
  }
  iVar21 = Ram00020000000004d8;
  if (iVar21 == 0) {
    iVar21 = *(int *)(lVar14 + 0x108080000c8dc);
    uVar16 = *(uint *)(lVar14 + 0x108080000c8e4);
    uVar1 = *(undefined4 *)(lVar14 + 0x108080000c8d4);
    uVar2 = *(undefined4 *)(lVar14 + 0x108080000c8d0);
    uVar15 = *(int *)(lVar14 + 0x108080000c8e0) - iVar21;
  }
  else {
    iVar21 = *(int *)(lVar14 + 0x108080000c904);
    uVar16 = *(uint *)(lVar14 + 0x108080000c90c);
    uVar1 = *(undefined4 *)(lVar14 + 0x108080000c304);
    uVar2 = *(undefined4 *)(lVar14 + 0x108080000c300);
    uVar15 = *(int *)(lVar14 + 0x108080000c908) << 2;
  }
  lVar18 = CONCAT44(uVar1,uVar2) + (ulong)uVar16;
  Ram0002000000000350 = iVar21 + 8;
  Ram0002000000000358 = uVar16;
  Ram00020000000000a8 = 2;
  Ram000100020000b8c4 = (int)lVar18;
  Ram000100020000b8c8 = (int)((ulong)lVar18 >> 0x20);
  Ram00020000000000a8 = 0;
  lVar18 = *(long *)(lVar14 + 0x108080000c824);
  uVar3 = Ram00020000000000f8;
  Ram0002000000000120 = *(uint *)(lVar14 + 0x108080000c8ac) >> 0x11 & 0x180;
  *(undefined8 *)(lVar18 + 0x198) = uVar3;
  Ram0002000000000068 = uVar15 >> 2;
  Ram0002000000000050 = uVar15 >> 2;
  *(uint *)(lVar14 + 0x108080000c834) = *(uint *)(lVar14 + 0x108080000c834) | 0x10000000;
  *(undefined4 *)(lVar14 + 0x108080000c8ac) = 0x2000;
  iVar21 = *(int *)(lVar14 + 0x108080000c8e0);
  iVar17 = Ram00020000000004d8;
  if (iVar17 != 0) {
    iVar21 = *(int *)(lVar14 + 0x108080000c908) * 4 + *(int *)(lVar14 + 0x108080000c904);
  }
  Ram00020000000001b0 = 0;
  uVar3 = Ram00020000000006f8;
  uVar3 = Ram00020000000006f8;
  iVar17 = Ram00020000000004d8;
  if (iVar17 != 0) {
    Ram0002000000000198 = 4;
    do {
      uVar16 = Ram0002000000000048;
    } while ((uVar16 & 0x10) == 0);
  }
  iVar17 = Ram0002000000000068;
  uVar11 = (ulong)iVar17;
  if (2 < uVar15 >> 2) {
    fence();
    Ram0002000000000518 = 0x103c0;
    do {
      lVar14 = Ram00020000000004b8;
    } while (lVar14 != 0);
    uVar16 = Ram00020000000000c8;
    iVar17 = Ram00020000000004d8;
    if (iVar17 == 0) {
      Ram00020000000003e0 = 1;
      Ram00020000000003a0 = 1;
      Ram0002000000000348 = 1;
      do {
      } while( true );
    }
    Ram0002000000000780 = 0x7fffffe0;
    Ram00020000000000a8 = 2;
    uVar4 = Ram0002000000000300;
    if ((uVar4 >> (uVar11 & 0x3f) & 1) == 0) {
      uVar15 = Ram00020000000003a8;
      uVar20 = Ram0002000000000780;
      uVar13 = (uVar15 & 0x1f) << 5;
      for (uVar20 = uVar20 & uVar15; uVar20 != 0; uVar20 = uVar20 - 0x20 & uVar10) {
        lVar14 = 100;
        do {
          while( true ) {
            uVar4 = Ram00020000000002f8;
            lVar19 = Ram00020000000000a0;
            if ((uVar4 & 0x10000) != 0) break;
LAB_000239e0:
            if (lVar19 != 0) goto LAB_000239e4;
          }
          if (lVar14 != 0) {
LAB_000239dc:
            lVar14 = lVar14 + -1;
            goto LAB_000239e0;
          }
          uVar4 = Ram0002000000000780;
          if ((uVar4 & 0x80000000) != 0) {
            if (lVar19 == 0) {
              uVar4 = Ram00020000000002f8;
              lVar19 = Ram00020000000000a0;
              lVar14 = -1;
              if ((uVar4 & 0x10000) == 0) goto LAB_000239e0;
              goto LAB_000239dc;
            }
            break;
          }
          Ram0002000000000780 = uVar4 | 0x80000000;
          iVar17 = Ram0002000000000068;
          Ram00020000000001b0 = 7;
          do {
            uVar4 = Ram0002000000000300;
          } while ((uVar4 >> ((long)iVar17 & 0x3fU) & 1) == 0);
          lVar14 = -1;
        } while (lVar19 == 0);
LAB_000239e4:
        uVar1 = Ram00020000000006f8;
        uVar2 = Ram00020000000006f8;
        uVar5 = Ram00020000000006f8;
        uVar6 = Ram00020000000006f8;
        uVar7 = Ram00020000000006f8;
        uVar8 = Ram00020000000006f8;
        uVar9 = Ram00020000000006f8;
        Ram000100020000b8c0 = uVar1;
        Ram000100020000b8c0 = uVar2;
        Ram000100020000b8c0 = uVar5;
        Ram000100020000b8c0 = uVar6;
        Ram000100020000b8c0 = uVar7;
        Ram000100020000b8c0 = uVar8;
        Ram000100020000b8c0 = uVar9;
        lVar14 = 100;
        do {
          while( true ) {
            uVar4 = Ram00020000000002f8;
            lVar19 = Ram00020000000000a0;
            if ((uVar4 & 0x10000) != 0) break;
LAB_00023a5c:
            if (lVar19 != 0) goto LAB_00023a60;
          }
          if (lVar14 != 0) {
LAB_00023a58:
            lVar14 = lVar14 + -1;
            goto LAB_00023a5c;
          }
          uVar4 = Ram0002000000000780;
          if ((uVar4 & 0x80000000) != 0) {
            if (lVar19 == 0) {
              uVar4 = Ram00020000000002f8;
              lVar19 = Ram00020000000000a0;
              lVar14 = -1;
              if ((uVar4 & 0x10000) == 0) goto LAB_00023a5c;
              goto LAB_00023a58;
            }
            break;
          }
          Ram0002000000000780 = uVar4 | 0x80000000;
          iVar17 = Ram0002000000000068;
          Ram00020000000001b0 = 7;
          do {
            uVar4 = Ram0002000000000300;
          } while ((uVar4 >> ((long)iVar17 & 0x3fU) & 1) == 0);
          lVar14 = -1;
        } while (lVar19 == 0);
LAB_00023a60:
        uVar1 = Ram00020000000006f8;
        uVar2 = Ram00020000000006f8;
        uVar5 = Ram00020000000006f8;
        uVar6 = Ram00020000000006f8;
        uVar7 = Ram00020000000006f8;
        uVar8 = Ram00020000000006f8;
        uVar9 = Ram00020000000006f8;
        Ram000100020000b8c0 = uVar1;
        Ram000100020000b8c0 = uVar2;
        Ram000100020000b8c0 = uVar5;
        Ram000100020000b8c0 = uVar6;
        Ram000100020000b8c0 = uVar7;
        Ram000100020000b8c0 = uVar8;
        Ram000100020000b8c0 = uVar9;
        lVar14 = 100;
        do {
          while( true ) {
            uVar4 = Ram00020000000002f8;
            lVar19 = Ram00020000000000a0;
            if ((uVar4 & 0x10000) != 0) break;
LAB_00023ad8:
            if (lVar19 != 0) goto LAB_00023adc;
          }
          if (lVar14 != 0) {
LAB_00023ad4:
            lVar14 = lVar14 + -1;
            goto LAB_00023ad8;
          }
          uVar4 = Ram0002000000000780;
          if ((uVar4 & 0x80000000) != 0) {
            if (lVar19 == 0) {
              uVar4 = Ram00020000000002f8;
              lVar19 = Ram00020000000000a0;
              lVar14 = -1;
              if ((uVar4 & 0x10000) == 0) goto LAB_00023ad8;
              goto LAB_00023ad4;
            }
            break;
          }
          Ram0002000000000780 = uVar4 | 0x80000000;
          iVar17 = Ram0002000000000068;
          Ram00020000000001b0 = 7;
          do {
            uVar4 = Ram0002000000000300;
          } while ((uVar4 >> ((long)iVar17 & 0x3fU) & 1) == 0);
          lVar14 = -1;
        } while (lVar19 == 0);
LAB_00023adc:
        uVar1 = Ram00020000000006f8;
        uVar2 = Ram00020000000006f8;
        uVar5 = Ram00020000000006f8;
        uVar6 = Ram00020000000006f8;
        uVar7 = Ram00020000000006f8;
        uVar8 = Ram00020000000006f8;
        uVar9 = Ram00020000000006f8;
        Ram000100020000b8c0 = uVar1;
        Ram000100020000b8c0 = uVar2;
        Ram000100020000b8c0 = uVar5;
        Ram000100020000b8c0 = uVar6;
        Ram000100020000b8c0 = uVar7;
        Ram000100020000b8c0 = uVar8;
        Ram000100020000b8c0 = uVar9;
        lVar14 = 100;
        do {
          while( true ) {
            uVar4 = Ram00020000000002f8;
            lVar19 = Ram00020000000000a0;
            if ((uVar4 & 0x10000) != 0) break;
LAB_00023b54:
            if (lVar19 != 0) goto LAB_00023b58;
          }
          if (lVar14 != 0) {
LAB_00023b50:
            lVar14 = lVar14 + -1;
            goto LAB_00023b54;
          }
          uVar4 = Ram0002000000000780;
          if ((uVar4 & 0x80000000) != 0) {
            if (lVar19 == 0) {
              uVar4 = Ram00020000000002f8;
              lVar19 = Ram00020000000000a0;
              lVar14 = -1;
              if ((uVar4 & 0x10000) == 0) goto LAB_00023b54;
              goto LAB_00023b50;
            }
            break;
          }
          Ram0002000000000780 = uVar4 | 0x80000000;
          iVar17 = Ram0002000000000068;
          Ram00020000000001b0 = 7;
          do {
            uVar4 = Ram0002000000000300;
          } while ((uVar4 >> ((long)iVar17 & 0x3fU) & 1) == 0);
          lVar14 = -1;
        } while (lVar19 == 0);
LAB_00023b58:
        uVar1 = Ram00020000000006f8;
        uVar2 = Ram00020000000006f8;
        uVar5 = Ram00020000000006f8;
        uVar6 = Ram00020000000006f8;
        uVar7 = Ram00020000000006f8;
        uVar8 = Ram00020000000006f8;
        uVar9 = Ram00020000000006f8;
        Ram000100020000b8c0 = uVar1;
        Ram000100020000b8c0 = uVar2;
        Ram000100020000b8c0 = uVar5;
        Ram000100020000b8c0 = uVar6;
        Ram000100020000b8c0 = uVar7;
        Ram000100020000b8c0 = uVar8;
        Ram000100020000b8c0 = uVar9;
        lVar14 = 100;
        do {
          while( true ) {
            uVar4 = Ram00020000000002f8;
            lVar19 = Ram00020000000000a0;
            if ((uVar4 & 0x10000) != 0) break;
LAB_00023bd0:
            if (lVar19 != 0) goto LAB_00023bd4;
          }
          if (lVar14 != 0) {
LAB_00023bcc:
            lVar14 = lVar14 + -1;
            goto LAB_00023bd0;
          }
          uVar4 = Ram0002000000000780;
          if ((uVar4 & 0x80000000) != 0) {
            if (lVar19 == 0) {
              uVar4 = Ram00020000000002f8;
              lVar19 = Ram00020000000000a0;
              lVar14 = -1;
              if ((uVar4 & 0x10000) == 0) goto LAB_00023bd0;
              goto LAB_00023bcc;
            }
            break;
          }
          Ram0002000000000780 = uVar4 | 0x80000000;
          iVar17 = Ram0002000000000068;
          Ram00020000000001b0 = 7;
          do {
            uVar4 = Ram0002000000000300;
          } while ((uVar4 >> ((long)iVar17 & 0x3fU) & 1) == 0);
          lVar14 = -1;
        } while (lVar19 == 0);
LAB_00023bd4:
        uVar1 = Ram00020000000006f8;
        uVar2 = Ram00020000000006f8;
        uVar5 = Ram00020000000006f8;
        uVar6 = Ram00020000000006f8;
        Ram000100020000b8c0 = uVar1;
        Ram000100020000b8c0 = uVar2;
        Ram000100020000b8c0 = uVar5;
        Ram000100020000b8c0 = uVar6;
        uVar10 = Ram0002000000000780;
      }
      iVar17 = 3;
      if ((uVar15 & 0x1f) != 0) {
        do {
          uVar15 = Ram0002000000000780;
          uVar13 = uVar13 - 0x20 & uVar15;
          uVar1 = Ram00020000000006f8;
          Ram000100020000b8c0 = uVar1;
          iVar17 = iVar17 + -1;
          while( true ) {
            if (uVar13 == 0) goto LAB_00023cac;
            if (iVar17 != 0) break;
            lVar14 = 100;
            do {
              while( true ) {
                uVar4 = Ram00020000000002f8;
                lVar19 = Ram00020000000000a0;
                if ((uVar4 & 0x10000) != 0) break;
LAB_00023c84:
                if (lVar19 != 0) goto LAB_00023c88;
              }
              if (lVar14 != 0) {
LAB_00023c80:
                lVar14 = lVar14 + -1;
                goto LAB_00023c84;
              }
              uVar4 = Ram0002000000000780;
              if ((uVar4 & 0x80000000) != 0) {
                if (lVar19 == 0) {
                  uVar4 = Ram00020000000002f8;
                  lVar19 = Ram00020000000000a0;
                  lVar14 = -1;
                  if ((uVar4 & 0x10000) == 0) goto LAB_00023c84;
                  goto LAB_00023c80;
                }
                break;
              }
              Ram0002000000000780 = uVar4 | 0x80000000;
              iVar17 = Ram0002000000000068;
              Ram00020000000001b0 = 7;
              do {
                uVar4 = Ram0002000000000300;
              } while ((uVar4 >> ((long)iVar17 & 0x3fU) & 1) == 0);
              lVar14 = -1;
            } while (lVar19 == 0);
LAB_00023c88:
            uVar15 = Ram0002000000000780;
            uVar13 = uVar13 - 0x20 & uVar15;
            uVar1 = Ram00020000000006f8;
            Ram000100020000b8c0 = uVar1;
            iVar17 = 6;
          }
        } while( true );
      }
    }
LAB_00023cac:
    uVar15 = Ram0002000000000780;
    Ram0002000000000780 = uVar15 & 0x80000000;
    uVar4 = Ram0002000000000300;
    if ((uVar4 >> (uVar11 & 0x3f) & 1) != 0) {
      Ram0002000000000348 = 0;
      do {
        iVar17 = Ram00020000000002b0;
      } while (iVar17 != 0);
    }
    Ram00020000000006f8 = 0;
    Ram00020000000003e0 = 0;
    if ((uVar16 >> (uVar11 & 0x1f) & 1) == 0) {
      do {
        iVar17 = Ram00020000000002b8;
        if (iVar21 == iVar17) goto LAB_00024024;
        uVar4 = Ram00020000000002f8;
        if (((uVar4 & 0x10000) != 0) && (uVar4 = Ram0002000000000780, (uVar4 & 0x80000000) == 0)) {
          Ram0002000000000780 = uVar4 | 0x80000000;
          iVar17 = Ram0002000000000068;
          Ram00020000000001b0 = 7;
          do {
            uVar4 = Ram0002000000000300;
          } while ((uVar4 >> ((long)iVar17 & 0x3fU) & 1) == 0);
        }
        uVar4 = Ram0002000000000300;
      } while ((uVar4 >> (uVar11 & 0x3f) & 1) == 0);
      Ram00020000000000a8 = 0;
    }
    else {
      do {
        uVar16 = Ram00020000000000c8;
        if ((1 << (uVar11 & 0x1f) & uVar16) == 0) goto LAB_00024024;
        uVar4 = Ram00020000000002f8;
        if (((uVar4 & 0x10000) != 0) && (uVar4 = Ram0002000000000780, (uVar4 & 0x80000000) == 0)) {
          Ram0002000000000780 = uVar4 | 0x80000000;
          iVar17 = Ram0002000000000068;
          Ram00020000000001b0 = 7;
          do {
            uVar4 = Ram0002000000000300;
          } while ((uVar4 >> ((long)iVar17 & 0x3fU) & 1) == 0);
        }
        uVar4 = Ram0002000000000300;
      } while ((uVar4 >> (uVar11 & 0x3f) & 1) == 0);
      Ram00020000000000a8 = 0;
    }
  }
LAB_00023d54:
  uVar4 = Ram0002000000000300;
  uVar16 = uVar12 & 7;
  if ((uVar4 >> (uVar11 & 0x3f) & 1) == 0) {
    Ram0002000000000348 = 0;
    iVar17 = Ram00020000000004d8;
    if (iVar17 == 0) {
      param_1 = param_1 & 0xffffffffffffff8f | (long)(int)(uVar16 << 4);
      lVar14 = param_1 << 0x24;
      *(uint *)(lVar14 + 0x108080000c8cc) = *(uint *)(lVar14 + 0x108080000c8cc) & 0xfffeffff;
      *(int *)(lVar14 + 0x108080000c8dc) = iVar21;
      *(int *)(lVar14 + 0x108080000c8e4) = iVar21;
    }
  }
  Ram00020000000003a0 = 0;
  iVar21 = Ram00020000000004d8;
  lVar14 = (long)(int)(uVar12 & 7);
  if (iVar21 == 0) {
    param_1 = param_1 & 0xffffffffffffff8f | (long)(int)(uVar16 << 4);
    uVar12 = *(uint *)((param_1 << 0x24) + 0x108080000c834);
    *(uint *)((param_1 << 0x24) + 0x108080000c834) =
         (uint)((ulong)((long)(int)uVar12 << 0x28) >> 0x28) | uVar12 & 0xcf000000;
    uVar11 = Ram0002000000000300;
    if ((uVar11 >> lVar14 & 1) != 0) {
      uVar12 = Ram00020000000003b8;
      if (uVar12 < 2) {
        uVar1 = Ram00020000000006f8;
        uVar1 = Ram00020000000006f8;
        if (uVar12 != 0) {
          uVar1 = Ram00020000000006f8;
          Ram0002000000000068 = 0;
          goto LAB_00023de8;
        }
      }
      Ram0002000000000068 = 0;
      goto LAB_00023de8;
    }
  }
  uVar3 = Ram00020000000006f8;
  uVar3 = Ram00020000000006f8;
LAB_00023de8:
  lVar19 = (param_1 & 0xffffffffffffff8f | (long)(int)(uVar16 << 4)) << 0x24;
  *(undefined4 *)(lVar19 + 0x108080000c8ac) = 0x3000;
  uVar3 = Ram00020000000000f8;
  *(undefined8 *)(lVar18 + 0x1a0) = uVar3;
  *(undefined4 *)(lVar19 + 0x108080000c8ac) = 0x2000;
  uVar12 = Ram0002000000000050;
  uVar11 = Ram0002000000000300;
  uVar12 = uVar12 >> 0x1f;
  if ((uVar11 >> lVar14 & 1) != 0) {
    Ram00020000000001b0 = 0;
    uVar12 = 0;
  }
  return uVar12;
LAB_00024024:
  Ram000100020000b9f8 = 0;
  Ram00020000000000a8 = 0;
  goto LAB_00023d54;
}


/* ---- FUN_000240c8 @ 000240c8 size=156 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000240c8(long param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  if (param_1 == 0) {
    _DAT_3000000000020 = 0xffffffff;
  }
  uVar3 = 0x10;
  uVar2 = 0;
  puVar1 = DAT_00101068;
  do {
    uVar3 = uVar3 & 0xfffffffffffffff0 | uVar2 & 0xf;
    *puVar1 = (int)uVar3;
    puVar1[-1] = 0xffffffff;
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 3;
  } while (uVar2 != 0x10);
  puVar4 = (undefined8 *)&DAT_00101080;
  do {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  } while (puVar4 != &DAT_00101188);
  FUN_000031e0();
  Ram00020000000007b0 = 0x3000000000100;
  Ram0002000000000400 = 0x33;
  FUN_00026578();
  return;
}


/* ---- FUN_00024168 @ 00024168 size=28 ---- */

void FUN_00024168(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  do {
    uVar2 = Ram0002000000000020;
    custom0();
    uVar3 = Ram00020000000006f8;
    uVar1 = Ram0002000000000010;
    (*(code *)(uVar1 & 0xfffffffffffffffe))(uVar3);
  } while( true );
}


/* ---- FUN_00024188 @ 00024188 size=20 ---- */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00024188(void)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0002000000000060 = 0;
  Ram0002000000000068 = 0;
  Ram0002000000000070 = 0;
  Ram0002000000000078 = 0;
  FUN_00024168();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ---- FUN_000241a0 @ 000241a0 size=316 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000241a0(undefined4 param_1)

{
  uint uVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0001000100030800 = param_1;
  uVar1 = _DAT_100010002f040 & 1;
  if (uVar1 != 0) {
    _DAT_100010002f040 = _DAT_100010002f040 & 0xfffffffe;
  }
  if ((_DAT_100010002f044 & 1) != 0) {
    _DAT_100010002f044 = _DAT_100010002f044 & 0xfffffffe;
    uVar1 = uVar1 + 2;
  }
  if ((_DAT_100010002f048 & 1) != 0) {
    _DAT_100010002f048 = _DAT_100010002f048 & 0xfffffffe;
    uVar1 = uVar1 + 4;
  }
  if ((_DAT_100010002f04c & 1) != 0) {
    _DAT_100010002f04c = _DAT_100010002f04c & 0xfffffffe;
    uVar1 = uVar1 + 8;
  }
  if ((_DAT_100010002f050 & 1) != 0) {
    _DAT_100010002f050 = _DAT_100010002f050 & 0xfffffffe;
    uVar1 = uVar1 + 0x10;
  }
  if ((_DAT_100010002f054 & 1) != 0) {
    _DAT_100010002f054 = _DAT_100010002f054 & 0xfffffffe;
    uVar1 = uVar1 + 0x20;
  }
  if ((_DAT_100010002f058 & 1) != 0) {
    _DAT_100010002f058 = _DAT_100010002f058 & 0xfffffffe;
    uVar1 = uVar1 + 0x40;
  }
  if ((_DAT_100010002f05c & 1) != 0) {
    _DAT_100010002f05c = _DAT_100010002f05c & 0xfffffffe;
    uVar1 = uVar1 + 0x80;
  }
  Ram0001000100030800 = 0xe0000000;
  return uVar1;
}


/* ---- FUN_000242e0 @ 000242e0 size=252 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000242e0(ulong param_1,undefined4 param_2)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0001000100030800 = param_2;
  if ((param_1 & 1) != 0) {
    _DAT_100010002f040 = _DAT_100010002f040 | 1;
  }
  if ((param_1 & 2) != 0) {
    _DAT_100010002f044 = _DAT_100010002f044 | 1;
  }
  if ((param_1 & 4) != 0) {
    _DAT_100010002f048 = _DAT_100010002f048 | 1;
  }
  if ((param_1 & 8) != 0) {
    _DAT_100010002f04c = _DAT_100010002f04c | 1;
  }
  if ((param_1 & 0x10) != 0) {
    _DAT_100010002f050 = _DAT_100010002f050 | 1;
  }
  if ((param_1 & 0x20) != 0) {
    _DAT_100010002f054 = _DAT_100010002f054 | 1;
  }
  if ((param_1 & 0x40) != 0) {
    _DAT_100010002f058 = _DAT_100010002f058 | 1;
  }
  if ((param_1 & 0x80) != 0) {
    _DAT_100010002f05c = _DAT_100010002f05c | 1;
  }
  Ram0001000100030800 = 0xe0000000;
  return;
}


/* ---- FUN_000243e0 @ 000243e0 size=400 ---- */

undefined8 FUN_000243e0(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar2 = Ram0002000000000148;
  Ram00020000000001d8 = uVar2;
  uVar5 = Ram0002000000000070;
  uVar1 = (uVar2 >> 5 & 7) << 9;
  uVar6 = (ulong)(int)(uVar5 >> 4);
  uVar5 = uVar2 >> 5 & 7;
  if ((uVar2 & 8) != 0) {
    uVar6 = uVar6 & 0xffffffffffffff8f | (long)(int)(uVar5 << 4);
    *(uint *)((uVar6 << 0x24) + 0x108080000c8c0) = uVar1 | 0x6000;
  }
  *(uint *)(((uVar6 & 0xffffffffffffff8f | (long)(int)(uVar5 << 4)) << 0x24) + 0x108080000c8c0) =
       (uVar1 >> 8 | 0x11) << 8;
  uVar1 = Ram0002000000000150;
  iVar3 = Ram0002000000000158;
  uVar2 = (uVar1 >> 0xe) << 8;
  uVar1 = uVar1 >> 8 & 0x30 | uVar2;
  if ((uVar1 != 0) && ((uVar2 & 0x1000) == 0 && iVar3 == 0)) {
    fence();
    Ram0002000000000518 = uVar1;
    do {
      lVar4 = Ram00020000000004b8;
    } while (lVar4 != 0);
    Ram0002000000000110 = 1;
    *(undefined4 *)
     (((uVar6 & 0xffffffffffffff8f | (long)(int)(uVar5 << 4)) << 0x24) + 0x108080000c8c0) = 0x1000;
    uVar1 = Ram0002000000000170;
    Ram0002000000000080 = (ulong)uVar1 & 1;
    Ram00020000000003c0 = 0;
    return 0;
  }
  Ram0002000000000080 = 3;
  Ram00020000000003c0 = 0;
  Ram0002000000000110 = 0;
  iVar3 = Ram0002000000000170;
  if (iVar3 - 0x10U < 2) {
    lVar4 = FUN_00024168(1);
    uVar1 = Ram00020000000002d0;
    if ((uVar1 & 1) != 0) {
      Ram0002000000000488 = 0x100;
      *(uint *)((lVar4 << 0x24) + 0x108080000c8f8) =
           *(uint *)((lVar4 << 0x24) + 0x108080000c8f8) | 0x8004;
    }
    return 1;
  }
  return 1;
}


/* ---- FUN_00024570 @ 00024570 size=76 ---- */

undefined8 FUN_00024570(long param_1)

{
  uint uVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram00020000000002d0;
  if ((uVar1 & 1) != 0) {
    Ram0002000000000488 = 0x100;
    *(uint *)((param_1 << 0x24) + 0x108080000c8f8) =
         *(uint *)((param_1 << 0x24) + 0x108080000c8f8) | 0x8004;
  }
  return 1;
}


/* ---- FUN_000245c0 @ 000245c0 size=752 ---- */

undefined8 FUN_000245c0(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar2 = Ram0002000000000070;
  lVar9 = (long)(int)(uVar2 >> 4) << 0x24;
  uVar1 = *(uint *)(lVar9 + 0x108080000c834);
  lVar6 = (long)(int)(uVar2 >> 4);
  *(uint *)(lVar9 + 0x108080000c834) = uVar1 | 0x80000000;
LAB_00024628:
  iVar8 = Ram00020000000000d0;
  iVar3 = Ram00020000000007f8;
  if (iVar3 != 0) {
    if (iVar8 == 0) goto LAB_00024628;
  }
  uVar2 = Ram0002000000000108;
  iVar3 = Ram0002000000000140;
  if (iVar8 != 0) {
    lVar9 = lVar6 << 0x24;
    *(uint *)(lVar9 + 0x108080000c834) = (uint)((ulong)((long)(int)uVar1 << 0x21) >> 0x21);
    Ram00020000000000a8 = 2;
    Ram000100020000b9f8 = 0;
    Ram00020000000000a8 = 0;
    uVar1 = Ram00020000000002d0;
    if ((uVar1 & 1) == 0) {
      gp = 0x101800;
      tp = 0x2000000000000;
      return 1;
    }
    Ram0002000000000488 = 0x100;
    *(uint *)(lVar9 + 0x108080000c8f8) = *(uint *)(lVar9 + 0x108080000c8f8) & 0xfffffffb | 0x8000;
    FUN_000346b8(lVar6,(long)DAT_00101100,0,0);
    gp = 0x101800;
    tp = 0x2000000000000;
    return 1;
  }
  iVar8 = Ram0002000000000180;
  lVar9 = Ram0002000000000038;
  if (uVar2 >> 0x10 == 0) {
    if (iVar3 == 0) {
      if (iVar8 != 0) {
        if (lVar9 == 0) {
          Ram0002000000000200 = 2;
        }
        else {
          Ram0002000000000200 = 3;
        }
        Ram0002000000000220 = 4;
        Ram0002000000000080 = 2;
        Ram00020000000003c0 = 0;
        uVar1 = Ram0002000000000190;
        Ram0002000000000220 = 0;
        uVar7 = uVar1 >> 8 & 7;
        Ram00020000000004d0 = uVar7;
        uVar2 = Ram00020000000004a0;
        if ((uVar2 & 4) == 0) {
          *(undefined4 *)(((long)(int)(uVar1 >> 4) << 0x24) + 0x108080000c87c) = 0x60000000;
        }
        else {
          Ram00020000000004d8 = uVar7;
          lVar6 = (long)(int)(uVar1 >> 4) << 0x24;
          do {
          } while ((*(uint *)(lVar6 + 0x108080002e088) & 0x40000) != 0);
          iVar8 = 0x10;
          do {
            Ram00020000000003c0 = 0;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          uVar1 = Ram0002000000000498;
          uVar10 = (ulong)uVar1 & 0x3f;
          Ram00020000000004e8 = (int)uVar10;
          Ram0002000000000070 = (int)uVar10;
          do {
            uVar4 = Ram00020000000006f8;
            Ram00020000000003c0 = uVar4;
            uVar10 = (ulong)((int)uVar10 + -1);
          } while (uVar10 != 0);
          *(uint *)(lVar6 + 0x108080000c87c) = *(uint *)(lVar6 + 0x108080000c87c) | 0x10000000;
          *(undefined4 *)(lVar6 + 0x108080000c884) = 0x200;
        }
        return 1;
      }
    }
    else {
      if (lVar9 == 0) {
        Ram00020000000001f8 = 2;
      }
      else {
        Ram00020000000001f8 = 3;
      }
      lVar9 = FUN_000243e0();
      if (lVar9 != 0) {
        gp = 0x101800;
        tp = 0x2000000000000;
        return 1;
      }
    }
  }
  else {
    Ram00020000000001b8 = uVar2;
    FUN_00003450((long)(int)uVar2);
    cVar5 = DAT_00101086;
    DAT_00101086 = '\0';
    if (cVar5 != '\0') {
      uVar1 = Ram00020000000002d0;
      if ((uVar1 & 1) == 0) {
        gp = 0x101800;
        tp = 0x2000000000000;
        DAT_00101086 = 0;
        return 1;
      }
      Ram0002000000000488 = 0x100;
      *(uint *)((lVar6 << 0x24) + 0x108080000c8f8) =
           *(uint *)((lVar6 << 0x24) + 0x108080000c8f8) | 0x8004;
      gp = 0x101800;
      tp = 0x2000000000000;
      return 1;
    }
    uVar2 = Ram0002000000000070;
    lVar9 = (long)(int)(uVar2 >> 4) << 0x24;
    lVar6 = (long)(int)(uVar2 >> 4);
    *(uint *)(lVar9 + 0x108080000c834) = *(uint *)(lVar9 + 0x108080000c834) | 0x80000000;
  }
  goto LAB_00024628;
}


/* ---- sub_248b0 @ 000248b0 size=24 ---- */

void sub_248b0(long param_1,undefined4 param_2)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  if (param_1 != 0) {
    Ram00020000000003a0 = 0;
  }
  Ram00020000000001b8 = param_2;
  Ram00020000000001b0 = 2;
  return;
}


/* ---- FUN_000248c8 @ 000248c8 size=152 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_000248c8(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar2 = Ram0002000000000020;
  Ram0002000000000040 = 1;
  uVar1 = Ram0001000100008924;
  uVar5 = (ulong)(long)(int)(_DAT_100010003ee48 | uVar1) >> 8 & 0xffff;
  iVar4 = 0;
  lVar3 = 0;
  do {
    if ((uVar5 & 3) != 3) {
      Ram0001000100030800 = iVar4;
      lVar3 = lVar3 + ((long)*(int *)((long)(int)((param_1 >> 4 & 7) + 0x24dc) * 4 + 0x1000100000000
                                     ) & 0x7ffU);
    }
    iVar4 = iVar4 + 0x10000;
    uVar5 = uVar5 >> 2;
  } while (iVar4 != 0x60000);
  Ram0001000100030800 = 0xe0000000;
  Ram0002000000000040 = uVar2;
  return lVar3;
}


/* ---- FUN_00024960 @ 00024960 size=476 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00024960(long param_1)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  lVar7 = param_1 << 0x24;
LAB_000249a0:
  do {
    do {
      uVar5 = Ram0002000000000108;
      lVar6 = (long)(int)uVar5;
    } while (uVar5 >> 0x11 == 0);
    if ((uVar5 & 0xff) != 1) {
      Ram00020000000001b8 = uVar5;
      FUN_00003450(lVar6);
      Ram0002000000000490 = 0x8000;
      Ram0002000000000140 = 0;
      Ram0002000000000158 = 0;
      DAT_00101086 = 0;
      return;
    }
    uVar3 = Ram0002000000000020;
    Ram0002000000000040 = 1;
    _DAT_100010000c2e0 = 4;
    uVar1 = *(uint *)(lVar7 + 0x108080000c834);
    if (((ulong)(long)(int)uVar1 >> 0x1e & 1) == 0) {
      Ram00020000000001b0 = 7;
      Ram00020000000001b8 = uVar5;
    }
    else {
      if ((*(uint *)(lVar7 + 0x108080000c8a4) & 1) != 0) {
        Ram00020000000003a0 = 1;
        bVar4 = false;
        bVar2 = false;
        do {
          uVar5 = (uint)lVar6;
          lVar6 = FUN_000248c8(param_1);
          if ((lVar6 == 0) && ((*(uint *)(lVar7 + 0x108080000c840) & 0x80000001) != 0x80000001)) {
            Ram00020000000003a0 = 0;
            Ram00020000000001b0 = 7;
            if (!bVar4) goto LAB_00024a10;
            Ram0002000000000040 = uVar3;
            goto LAB_000249a0;
          }
          if (!bVar2) {
            Ram00020000000001b0 = 1;
          }
          uVar5 = Ram0002000000000108;
          lVar6 = (long)(int)uVar5;
          if (uVar5 >> 0x11 != 0) {
            if ((uVar5 & 0xff) == 2) {
              if ((uVar1 >> 0x1e & 1) != 0) {
                Ram00020000000003a0 = 0;
              }
              Ram00020000000001b8 = uVar5;
              Ram00020000000001b0 = 2;
              gp = 0x101800;
              tp = 0x2000000000000;
              return;
            }
            if ((uVar5 & 0xff) != 1) goto LAB_00024abc;
            Ram00020000000001b8 = uVar5;
            bVar4 = true;
          }
          bVar2 = true;
        } while( true );
      }
      Ram00020000000003a0 = 0;
      Ram00020000000001b0 = 7;
LAB_00024a10:
      Ram00020000000001b8 = uVar5;
    }
    Ram0002000000000040 = uVar3;
  } while( true );
LAB_00024abc:
  Ram00020000000003a0 = 0;
  Ram0002000000000040 = uVar3;
  goto LAB_000249a0;
}


/* ---- FUN_00024b40 @ 00024b40 size=200 ---- */

void FUN_00024b40(ulong param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  lVar2 = param_2 << 0x24;
  if (((ulong)(long)*(int *)(lVar2 + 0x108080000c834) >> 0x1e & 1) == 0) {
    uVar1 = Ram0002000000000070;
    Ram0002000000000048 = uVar1 >> 8;
    Ram00020000000001e0 = 1;
  }
  if ((param_1 & 1) == 0) {
    uVar1 = Ram00020000000002d0;
    if ((uVar1 & 2) == 0) {
      uVar1 = Ram0002000000000240;
      if (0xf < uVar1) {
        gp = 0x101800;
        tp = 0x2000000000000;
        return;
      }
      *(undefined4 *)(lVar2 + 0x108080000c888) = 0x30;
    }
    else {
      Ram0002000000000488 = 0x200;
      *(undefined4 *)(lVar2 + 0x108080000c888) = 0x30;
    }
  }
  if ((((ulong)(long)(int)*(uint *)(lVar2 + 0x108080002e088) >> 8 & 0xff) == 0) &&
     ((*(uint *)(lVar2 + 0x108080002e088) >> 0x1c & 1) != 0)) {
    Ram00020000000005e8 = 3;
    return;
  }
  FUN_00024960(param_2);
  return;
}


/* ---- FUN_00024c08 @ 00024c08 size=1548 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00024c08(long param_1,ulong param_2,undefined8 param_3)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  lVar7 = param_1 << 0x24;
  uVar14 = param_2 >> 0x17;
  uVar2 = DAT_00101098;
  while( true ) {
    DAT_00101098 = uVar2;
    if ((uVar14 & 1) != 0) {
      uVar6 = Ram0002000000000070;
      uVar10 = uVar6 | 8;
      Ram0002000000000150 = 0;
      uVar2 = *(uint *)(lVar7 + 0x108080000c868);
      uVar11 = *(uint *)(lVar7 + 0x108080000c878);
      if ((int)uVar2 < 0) {
        if ((param_2 >> 0x14 & 1) == 0) {
          bVar1 = (param_2 >> 0x1e & 1) == 0;
          uVar9 = *(uint *)(lVar7 + 0x108080000c830);
          if (bVar1) {
            uVar9 = (uint)param_2 >> 0x18;
          }
          *(uint *)(lVar7 + 0x108080000c8a4) =
               (uint)!bVar1 << 9 | *(uint *)(lVar7 + 0x108080000c8a4) & 0xfffffdff;
          *(uint *)(lVar7 + 0x108080000c830) =
               (uint)(((long)(int)uVar9 & 0xfU) << 8) |
               *(uint *)(lVar7 + 0x108080000c830) & 0xfffff0ff;
        }
        *(uint *)(lVar7 + 0x108080000c878) = uVar11 & 0x7ff00000 | 0x80000000;
      }
      Ram0002000000000080 = 1;
      Ram00020000000003c0 = 0;
      Ram0002000000000148 = 1;
      if ((int)uVar2 < 0) {
        uVar10 = (uVar2 >> 0x1c) << 0x1f | (uVar2 >> 0x1d & 1) << 0x12 | (uVar6 >> 8) << 0x15 |
                 0x40000000;
        uVar6 = (uint)param_2 >> 0x1f;
        uVar9 = (uint)(*(int *)(lVar7 + 0x108080000c860) << 4) >> 6;
        Ram0002000000000040 = uVar6;
        uVar15 = param_2 & 0xfffffffff0ffffff |
                 (long)(int)((*(uint *)(lVar7 + 0x108080000c830) >> 8 & 0xf) << 0x18);
        uVar14 = param_2 & 0x100000;
        param_2 = uVar15;
        if (uVar14 != 0) {
          uVar6 = (uVar11 & 0x40000000) >> 0x1e;
          Ram0002000000000040 = uVar6;
        }
      }
      else {
        uVar6 = uVar2 >> 0x1e & 1;
        Ram0002000000000040 = uVar6;
        uVar9 = 0;
      }
      param_2 = param_2 & 0xffffffffff5fffff;
      uVar12 = (uint)param_2;
      Ram0002000000000050 = uVar12;
      Ram0002000000000008 = param_3;
      Ram0002000000000540 = param_3;
      Ram0002000000000008 = uVar12 | 0x800000;
      Ram0002000000000150 = 0;
      *(uint *)(lVar7 + 0x108080000c878) =
           (uint)(ushort)param_2 |
           ((uVar11 & 0x300000) >> 0x10 | 0xffff8000 | (uVar11 & 0x800000) >> 0x10 |
            (uVar12 & 0x30000000) >> 0x14 | uVar6 << 0xe | (uint)((param_2 << 0x2c) >> 0x3c)) <<
           0x10;
      *(int *)(lVar7 + 0x108080000c86c) = (int)param_3;
      *(int *)(lVar7 + 0x108080000c870) = (int)((ulong)param_3 >> 0x20);
      if (((ulong)(long)(int)(uVar12 | 0x800000) >> 0x14 & 1) != 0) {
        uVar3 = Ram00020000000006f8;
        uVar3 = Ram00020000000006f8;
      }
      if ((int)uVar2 < 0) {
        _DAT_2000000000800 = uVar9 >> 1 & 0xffff | uVar10;
        uVar3 = Ram0002000000000038;
        Ram0002000000000080 = 4;
        Ram00020000000003c0 = 0;
        fence();
        Ram0002000000000518 = 0x1c3f1;
        do {
          lVar7 = Ram00020000000004b8;
        } while (lVar7 != 0);
        Ram0002000000000080 = uVar3;
        Ram00020000000003c0 = 0;
        _DAT_2000000000808 = uVar9;
      }
      return;
    }
    uVar11 = *(int *)(lVar7 + 0x108080000c84c) + 3;
    uVar10 = 2 << ((long)(int)*(uint *)(lVar7 + 0x108080000c868) & 0x1fU);
    if (uVar10 <= uVar11) {
      uVar11 = (uVar11 - uVar10) - 1;
    }
    Ram00020000000000d8 = *(uint *)(lVar7 + 0x108080000c868) >> 0x11 & 0x180;
    DAT_00101098 = *(uint *)((ulong)(uVar11 << 2) + *(long *)(lVar7 + 0x108080000c844) * 0x100);
    param_2 = (ulong)(int)DAT_00101098;
    if ((DAT_00101098 & 0x200000) != 0) break;
    uVar11 = Ram0002000000000108;
    iVar13 = Ram0002000000000140;
    iVar4 = Ram0002000000000180;
    uVar2 = Ram0002000000000070;
    DAT_0010109c = uVar2 >> 4;
    DAT_00101090 = param_3;
    if (uVar11 >> 0x10 == 0) {
      if (iVar13 == 0) {
        if (iVar4 != 0) {
          lVar7 = Ram0002000000000038;
          if (lVar7 == 0) {
            Ram0002000000000200 = 4;
          }
          else {
            Ram0002000000000200 = 5;
          }
          Ram0002000000000220 = 4;
          Ram0002000000000080 = 2;
          Ram00020000000003c0 = 0;
          uVar2 = Ram0002000000000190;
          Ram0002000000000220 = 0;
          uVar10 = uVar2 >> 8 & 7;
          Ram00020000000004d0 = uVar10;
          uVar11 = Ram00020000000004a0;
          if ((uVar11 & 4) != 0) {
            Ram00020000000004d8 = uVar10;
            lVar7 = (long)(int)(uVar2 >> 4) << 0x24;
            do {
            } while ((*(uint *)(lVar7 + 0x108080002e088) & 0x40000) != 0);
            iVar13 = 0x10;
            do {
              Ram00020000000003c0 = 0;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
            uVar2 = Ram0002000000000498;
            uVar14 = (ulong)uVar2 & 0x3f;
            Ram00020000000004e8 = (int)uVar14;
            Ram0002000000000070 = (int)uVar14;
            do {
              uVar5 = Ram00020000000006f8;
              Ram00020000000003c0 = uVar5;
              uVar14 = (ulong)((int)uVar14 + -1);
            } while (uVar14 != 0);
            *(uint *)(lVar7 + 0x108080000c87c) = *(uint *)(lVar7 + 0x108080000c87c) | 0x10000000;
            *(undefined4 *)(lVar7 + 0x108080000c884) = 0x200;
            gp = 0x101800;
            tp = 0x2000000000000;
            return;
          }
          *(undefined4 *)(((long)(int)(uVar2 >> 4) << 0x24) + 0x108080000c87c) = 0x60000000;
          gp = 0x101800;
          tp = 0x2000000000000;
          return;
        }
      }
      else {
        lVar8 = Ram0002000000000038;
        if (lVar8 == 0) {
          Ram00020000000001f8 = 4;
        }
        else {
          Ram00020000000001f8 = 5;
        }
        lVar8 = FUN_000243e0((long)(int)uVar11);
        if (lVar8 != 0) {
          gp = 0x101800;
          tp = 0x2000000000000;
          return;
        }
      }
    }
    else {
      if (uVar11 >> 0x11 != 0) {
        Ram0002000000000140 = 0;
        Ram0002000000000158 = 0;
        gp = 0x101800;
        tp = 0x2000000000000;
        return;
      }
      Ram00020000000001b8 = uVar11;
      FUN_00003450();
      DAT_00101086 = 0;
    }
    uVar14 = param_2 >> 0x17;
    uVar2 = DAT_00101098;
  }
  uVar11 = Ram00020000000000e8;
  DAT_00101098 = uVar2;
  *(uint *)(lVar7 + 0x108080000c87c) =
       (*(uint *)(lVar7 + 0x108080000c868) >> 0x17 & 1) << 0x17 | 0x80040100 |
       (*(uint *)(lVar7 + 0x108080000c868) >> 0x18 & 3) << 0x18 | uVar11 & 0xff;
  if ((((ulong)(long)(int)*(uint *)(lVar7 + 0x108080002e088) >> 8 & 0xff) == 0) &&
     ((*(uint *)(lVar7 + 0x108080002e088) >> 0x1c & 1) != 0)) {
    Ram00020000000005e8 = 3;
    gp = 0x101800;
    tp = 0x2000000000000;
    return;
  }
  FUN_00024960((long)(int)param_1);
  return;
}


/* ---- FUN_00025218 @ 00025218 size=1656 ---- */

/* WARNING: Removing unreachable block (ram,0x00025364) */
/* WARNING: Removing unreachable block (ram,0x00025330) */
/* WARNING: Removing unreachable block (ram,0x00025354) */
/* WARNING: Removing unreachable block (ram,0x000253b4) */

long FUN_00025218(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong in_dscratch0;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000170;
  Ram0002000000000080 = (ulong)uVar1 & 1;
  Ram00020000000003c0 = 0;
  Ram0002000000000448 = 0x800;
  uVar2 = Ram00020000000000e8;
  switch(uVar1) {
  case 0:
  case 1:
    goto switchD_0002527c_caseD_0;
  case 2:
  case 3:
    lVar6 = FUN_000245c0();
    param_1 = lVar6;
    break;
  case 4:
  case 5:
    lVar6 = 1;
    param_1 = FUN_00024c08((long)DAT_0010109c,(long)DAT_00101098,DAT_00101090);
    break;
  case 6:
  case 7:
    lVar6 = (long)DAT_001010a0;
    lVar10 = Ram0002000000000038;
    lVar14 = lVar6 << 0x24;
    if (lVar10 == 1) {
      lVar10 = *(long *)(lVar14 + 0x108080000c86c);
      uVar13 = (ulong)*(uint *)(lVar14 + 0x108080000c874) + 1;
    }
    else {
      lVar10 = *(long *)(lVar14 + 0x108080000c844) << 8;
      uVar13 = (ulong)((2 << ((long)*(int *)(lVar14 + 0x108080000c868) & 0x1fU)) - 1) &
               (ulong)*(uint *)(lVar14 + 0x108080000c84c) + 1;
    }
    iVar11 = *(int *)(uVar13 * 4 + lVar10);
    while (-1 < iVar11) {
      uVar1 = Ram0002000000000108;
      param_1 = (long)(int)uVar1;
      lVar10 = Ram0002000000000038;
      if ((uVar1 & 0x30000) == 0) {
        uVar1 = Ram0002000000000140;
        if ((uVar1 & 1) == 0) {
          uVar1 = Ram0002000000000180;
          if ((uVar1 & 1) != 0) {
            Ram0002000000000200 = (lVar10 != 0) + 6;
            Ram0002000000000220 = 4;
            Ram0002000000000080 = 2;
            Ram00020000000003c0 = 0;
            uVar1 = Ram0002000000000190;
            Ram0002000000000220 = 0;
            uVar9 = uVar1 >> 8 & 7;
            Ram00020000000004d0 = uVar9;
            uVar3 = Ram00020000000004a0;
            if ((uVar3 & 4) == 0) {
              *(undefined4 *)(((long)(int)(uVar1 >> 4) << 0x24) + 0x108080000c87c) = 0x60000000;
            }
            else {
              Ram00020000000004d8 = uVar9;
              lVar6 = (long)(int)(uVar1 >> 4) << 0x24;
              do {
              } while ((*(uint *)(lVar6 + 0x108080002e088) & 0x40000) != 0);
              iVar11 = 0x10;
              do {
                Ram00020000000003c0 = 0;
                iVar11 = iVar11 + -1;
              } while (iVar11 != 0);
              uVar1 = Ram0002000000000498;
              uVar13 = (ulong)uVar1 & 0x3f;
              Ram00020000000004e8 = (int)uVar13;
              Ram0002000000000070 = (int)uVar13;
              do {
                uVar5 = Ram00020000000006f8;
                Ram00020000000003c0 = uVar5;
                uVar13 = (ulong)((int)uVar13 + -1);
              } while (uVar13 != 0);
              *(uint *)(lVar6 + 0x108080000c87c) = *(uint *)(lVar6 + 0x108080000c87c) | 0x10000000;
              *(undefined4 *)(lVar6 + 0x108080000c884) = 0x200;
            }
            goto switchD_0002527c_caseD_0;
          }
        }
        else {
          Ram00020000000001f8 = (lVar10 != 0) + 6;
          param_1 = FUN_000243e0(param_1);
          if (param_1 != 0) goto switchD_0002527c_caseD_0;
        }
      }
      else {
        if ((uVar1 & 0x20000) != 0) {
          Ram0002000000000150 = 0;
          Ram0002000000000158 = 0;
          goto switchD_0002527c_caseD_0;
        }
        Ram00020000000001b8 = uVar1;
        FUN_00003450();
        DAT_00101086 = 0;
      }
      lVar10 = Ram0002000000000038;
      if (lVar10 == 1) {
        lVar10 = *(long *)(lVar14 + 0x108080000c86c);
        uVar13 = (ulong)*(uint *)(lVar14 + 0x108080000c874) + 1;
      }
      else {
        lVar10 = *(long *)(lVar14 + 0x108080000c844) << 8;
        uVar13 = (ulong)((2 << ((long)*(int *)(lVar14 + 0x108080000c868) & 0x1fU)) - 1) &
                 (ulong)*(uint *)(lVar14 + 0x108080000c84c) + 1;
      }
      iVar11 = *(int *)(uVar13 * 4 + lVar10);
    }
    Ram0002000000000150 = 0;
    Ram00020000000001b0 = 6;
    goto LAB_000252c8;
  case 8:
  case 9:
    *(undefined4 *)((param_1 << 0x24) + 0x108080000c888) = 0x30;
    uVar1 = *(uint *)((param_1 << 0x24) + 0x108080002e088);
    lVar6 = param_1;
    if ((((ulong)(long)(int)uVar1 >> 8 & 0xff) == 0) && ((uVar1 >> 0x1c & 1) != 0))
    goto LAB_000257e4;
LAB_000252c8:
    param_1 = FUN_00024960(lVar6);
    goto switchD_0002527c_caseD_0;
  default:
    lVar6 = 0;
    break;
  case 0xe:
  case 0xf:
    iVar11 = Ram00020000000007d8;
    if (iVar11 == 2) {
      Ram00020000000007d8 = 0;
      lVar6 = 1;
      param_1 = FUN_000352b8((long)DAT_00101108,(long)DAT_00101100,(long)DAT_00101104);
    }
    else {
      lVar6 = 1;
      if (iVar11 == 1) {
        Ram00020000000007d8 = 0;
        param_1 = FUN_00034dc8((long)DAT_00101108,(long)DAT_0010110c,(long)DAT_00101110,DAT_00101118
                               ,DAT_00101120,DAT_00101128,DAT_00101130,DAT_00101138);
        lVar6 = 1;
      }
    }
    break;
  case 0x10:
  case 0x11:
    param_1 = FUN_00030470(&DAT_00101388,1);
LAB_000257e4:
    Ram00020000000005e8 = 3;
switchD_0002527c_caseD_0:
    lVar6 = 1;
  }
  uVar1 = DAT_00101180;
  iVar11 = Ram00020000000007d8;
  if (iVar11 == 3) {
    Ram00020000000007d8 = 0;
    FUN_0002e108((long)DAT_00101150,(long)DAT_00101154,DAT_00101158,DAT_00101160,DAT_00101168,
                 DAT_00101170,(long)DAT_00101178,1);
  }
  else {
    iVar11 = Ram00020000000007d8;
    if (iVar11 == 4) {
      Ram00020000000007d8 = 0;
      uVar3 = Ram0002000000000408;
      uVar13 = (long)(int)(uVar3 >> 3) & 0xf;
      if (in_dscratch0 == 0) {
        do {
          iVar4 = Ram0002000000000408;
          iVar11 = Ram0002000000000128;
          if (iVar4 == iVar11) {
LAB_00025458:
            Ram00020000000006e0 = 0xc;
            uVar3 = Ram00020000000004f0;
            Ram0002000000000220 = uVar3 | 2;
            goto LAB_000253d0;
          }
          while (iVar11 = Ram0002000000000140, iVar11 == 0) {
            iVar4 = Ram0002000000000408;
            iVar11 = Ram0002000000000128;
            if (iVar4 == iVar11) goto LAB_00025458;
          }
          param_1 = FUN_000243e0(param_1);
        } while (param_1 == 0);
        lVar10 = Ram0002000000000038;
        if (lVar10 == 0) {
          Ram00020000000001f8 = 2;
        }
        else {
          Ram00020000000001f8 = 3;
        }
        Ram00020000000007d8 = 4;
        DAT_00101180 = uVar1;
      }
      else {
        uVar7 = (long)((int)uVar13 + 1) & 0xf;
        while (uVar7 == (in_dscratch0 >> 0x30 & 0xff)) {
          while( true ) {
            uVar8 = in_dscratch0 >> 0x30 & 0xff;
            uVar12 = in_dscratch0 >> 0x28 & 0xff;
            if (uVar8 == uVar12) break;
            uVar8 = in_dscratch0 &
                    ~((ulong)((1L << ((ulong)(uVar12 < uVar8) * 0x10 + (uVar12 - uVar8) & 0x3f)) +
                              -1 << (in_dscratch0 >> 0x30 & 0x3f)) >> 0x10 | 0xff000000000000);
            in_dscratch0 = uVar8 | uVar12 << 0x30;
            if (uVar7 != (uVar8 & 0xff000000000000 | uVar12 << 0x30) >> 0x30) goto LAB_000253d0;
          }
        }
LAB_000253d0:
        *(ulong *)((uVar13 + 0x20) * 8 + 0x3000000000000) = (ulong)uVar1;
        Ram00020000000001d0 = 8;
        *DAT_00101070 = 0x28;
      }
      do {
        iVar11 = Ram00020000000000d0;
      } while (iVar11 == 0);
      Ram000100020000b9f8 = 0;
    }
  }
  return lVar6;
}


/* ---- FUN_00025890 @ 00025890 size=112 ---- */

void FUN_00025890(long param_1)

{
  int iVar1;
  long lVar2;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  *(undefined4 *)((param_1 << 0x24) + 0x108080000c8c0) = 0x1000;
  *(undefined4 *)((param_1 << 0x24) + 0x108080000c8c0) = 0x4000;
  iVar1 = Ram0002000000000140;
  if ((iVar1 != 0) && (lVar2 = FUN_000243e0(), lVar2 != 0)) {
    return;
  }
  FUN_00025218(param_1);
  return;
}


/* ---- FUN_00025900 @ 00025900 size=376 ---- */

void FUN_00025900(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000070;
  uVar4 = Ram0002000000000248;
  lVar6 = (long)(int)(uVar1 >> 4) << 0x24;
  if ((((*(uint *)(lVar6 + 0x108080000c888) & 0x10) == 0) && (DAT_00101084 != '\0')) &&
     ((uVar1 >> 8 & 7) == uVar4)) {
    iVar2 = Ram0002000000000128;
    Ram00020000000001f0 = 8;
    do {
      iVar3 = Ram0002000000000128;
    } while (iVar2 == iVar3);
    uVar5 = Ram0002000000000240;
    uVar7 = uVar5 >> 0x20;
  }
  else {
    *(uint *)(lVar6 + 0x108080000c8c4) =
         *(uint *)(lVar6 + 0x108080000c8c4) & 0xffffe000 |
         (*(uint *)(lVar6 + 0x108080000c8c4) & 0x1fff) + 8 & 0x1fff;
    uVar5 = (ulong)(int)(*(uint *)(lVar6 + 0x108080000c8c8) >> 0x10);
    uVar7 = (ulong)(int)(*(uint *)(lVar6 + 0x108080000c8c8) >> 0xf);
  }
  if ((uVar7 & 1) != 0) {
    *(uint *)(lVar6 + 0x108080000c8f8) = *(uint *)(lVar6 + 0x108080000c8f8) & 0xfffffff7 | 0x8000;
    *(undefined4 *)(lVar6 + 0x108080000c888) = 8;
  }
  if (0xf < (uVar5 & 0x1fff)) {
    *(undefined4 *)(lVar6 + 0x108080000c888) = 0x20;
  }
  *(undefined4 *)(lVar6 + 0x108080000c8c0) = 0x1000;
  *(undefined4 *)(lVar6 + 0x108080000c8c0) = 0x4000;
  iVar2 = Ram0002000000000140;
  if ((iVar2 != 0) && (lVar6 = FUN_000243e0(), lVar6 != 0)) {
    return;
  }
  FUN_00025218((long)(int)(uVar1 >> 4));
  return;
}


/* ---- FUN_00025a78 @ 00025a78 size=984 ---- */

/* WARNING: Removing unreachable block (ram,0x00025bf4) */
/* WARNING: Removing unreachable block (ram,0x00025b88) */
/* WARNING: Removing unreachable block (ram,0x00025ba4) */
/* WARNING: Removing unreachable block (ram,0x00025c0c) */

void FUN_00025a78(ulong param_1,uint param_2,ulong param_3,ulong param_4,undefined8 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  ulong in_dscratch0;
  char in_stack_00000000;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar3 = Ram0002000000000070;
  lVar2 = Ram0002000000000430;
  lVar13 = (long)(int)(uVar3 >> 4) << 0x24;
  if (((ulong)(long)*(int *)(lVar13 + 0x108080000c834) >> 0x1e & 1) == 0) {
    if (lVar2 < 0) {
LAB_00025ad4:
      Ram00020000000001b0 = 7;
      uVar7 = Ram0002000000000050;
      Ram0002000000000148 = 1;
      if (((uVar7 >> 0x1f != 0) &&
          (((ulong)(long)(int)*(uint *)(lVar13 + 0x108080002e088) >> 8 & 0xff) == 0)) &&
         ((*(uint *)(lVar13 + 0x108080002e088) >> 0x1c & 1) != 0)) {
        Ram00020000000005e8 = 3;
        return;
      }
      FUN_00024960();
      return;
    }
  }
  else if ((lVar2 < 0) || (uVar8 = Ram0002000000000240, uVar8 < 0x1a)) goto LAB_00025ad4;
  iVar1 = Ram0002000000000020;
  uVar8 = 8;
  if (((in_stack_00000000 == '\0') && (param_3 != 3)) && (uVar8 = DAT_00101080, DAT_00101080 != 0))
  {
    lVar2 = Ram0002000000000038;
    uVar8 = (uint)(lVar2 == 1) << 3;
  }
  uVar4 = Ram0002000000000070;
  if (in_dscratch0 != 0) {
    do {
      uVar11 = in_dscratch0 >> 0x30 & 0xff;
      uVar9 = in_dscratch0 >> 0x28 & 0xff;
      uVar7 = (1L << ((ulong)(uVar9 < uVar11) * 0x10 + (uVar9 - uVar11) & 0x3f)) + -1 <<
              (in_dscratch0 >> 0x30 & 0x3f);
      if (uVar11 != uVar9) {
        in_dscratch0 = in_dscratch0 & ~(uVar7 & 0xffff | uVar7 >> 0x10 | 0xff000000000000) |
                       uVar9 << 0x30;
      }
    } while ((in_dscratch0 & 0xffffffff) != 0);
    uVar4 = Ram0002000000000128;
    Ram00020000000002d0 = uVar4;
    Ram00020000000003b8 = uVar4;
    Ram00020000000006e0 = 8;
    uVar5 = Ram00020000000004f0;
    Ram0002000000000220 = uVar5 & 0xfffffffd;
  }
  uVar5 = Ram0002000000000408;
  lVar2 = Ram0002000000000118;
  puVar10 = (undefined4 *)((((ulong)uVar5 << 0x20) >> 0x1e) + lVar2);
  Ram0002000000000148 = 1;
  uVar7 = (long)(int)(*(uint *)(lVar13 + 0x108080000c830) >> 8) & 0xf;
  if (param_3 == 0) {
    if (in_stack_00000000 == '\0') {
      if (uVar8 != 0) {
        param_4 = uVar7 | param_4;
        Ram00020000000000b0 = 0;
        goto LAB_00025c68;
      }
    }
    else {
      param_4 = param_4 & 0xfffffffffffffff0;
    }
    Ram00020000000000b0 = 0;
  }
  else {
    param_4 = 0;
  }
LAB_00025c68:
  Ram00020000000000b0 = 1;
  uVar4 = Ram0002000000000138;
  Ram0002000000000120 = uVar4;
  iVar12 = 0xd;
  if ((param_3 == 0) && (3 < ((uint)param_4 >> 0x18 & 7))) {
    iVar12 = 5;
  }
  uVar9 = param_1 & 0xf | 0xffffffffc0060000 | (long)(iVar1 << 4) & 0xffffffffffff00ffU |
          (long)(iVar12 << 8);
  if ((((long)(int)*(uint *)(lVar13 + 0x108080000c830) & 0xfU) == uVar7) &&
     (in_stack_00000000 == '\0')) {
    uVar7 = (ulong)(int)(uint)uVar9;
  }
  else {
    uVar7 = (ulong)(int)((uint)uVar9 | uVar8);
    uVar9 = uVar7;
  }
  *puVar10 = (int)uVar7;
  puVar10[1] = param_2;
  uVar6 = DAT_001010d0;
  if ((param_3 & 4) == 0) {
    puVar10[2] = (uint)param_4;
    if (param_3 == 0) {
      puVar10[3] = (int)param_5;
      puVar10[4] = (int)((ulong)param_5 >> 0x20);
      puVar10[5] = param_6;
      if ((param_4 & 0xffffffffe0000000) == 0xffffffffa0000000) {
        uVar6 = Ram00020000000004b0;
        puVar10[6] = (int)uVar6;
        puVar10[7] = (int)((ulong)uVar6 >> 0x20);
      }
      else {
        puVar10[6] = param_7;
        puVar10[7] = param_8;
      }
    }
    else {
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      puVar10[6] = 0;
      puVar10[7] = 0;
    }
    do {
      iVar1 = Ram0002000000000090;
    } while (iVar1 != 0);
    Ram0002000000000150 = 0;
    Ram00020000000000b0 = 0;
    Ram00020000000001d0 = 8;
    Ram00020000000000a8 = 2;
    *DAT_00101070 = param_2 & 0xfffff0ff;
    Ram00020000000000a8 = 0;
    FUN_00024b40(uVar9,(long)(int)(uVar3 >> 4));
    return;
  }
  puVar10[2] = (undefined4)DAT_001010d8;
  puVar10[3] = DAT_001010c8;
  puVar10[4] = 0;
  puVar10[5] = (int)uVar6;
  puVar10[6] = (int)((ulong)uVar6 >> 0x20);
  puVar10[7] = 0;
  Ram00020000000000b0 = 0;
  FUN_00034510(uVar7,(long)(int)param_2,param_3);
  return;
}


/* ---- FUN_00025e50 @ 00025e50 size=140 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00025e50(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar3 = Ram0002000000000038;
  Ram0002000000000080 = 4;
  Ram00020000000003c0 = 0;
  uVar1 = Ram0001000100008924;
  iVar4 = 0;
  uVar5 = (ulong)(long)(int)(_DAT_100010003ee48 | uVar1) >> 8 & 0xffff;
  do {
    while ((uVar5 & 3) != 3) {
      Ram0001000100030800 = iVar4;
      do {
        iVar2 = Ram000100010000936c;
      } while (iVar2 != 0);
      iVar4 = iVar4 + 0x10000;
      uVar5 = uVar5 >> 2;
      if (iVar4 == 0x60000) goto LAB_00025ec8;
    }
    iVar4 = iVar4 + 0x10000;
    uVar5 = uVar5 >> 2;
  } while (iVar4 != 0x60000);
LAB_00025ec8:
  Ram0001000100030800 = 0xe0000000;
  Ram0002000000000080 = uVar3;
  Ram00020000000003c0 = 0;
  return;
}


/* ---- FUN_00025ee0 @ 00025ee0 size=1356 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00025ee0(uint param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  
  iVar5 = _DAT_100010003ece4;
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar12 = param_1 >> 4 & 7;
  if (_DAT_100010003ece4 < 0) {
    uVar10 = 0;
    uVar11 = 0;
    uVar13 = 0;
    uVar6 = 0;
  }
  else {
    uVar2 = Ram0001000100008924;
    uVar6 = 0;
    uVar1 = (int)(int3)((uint3)((uint)_DAT_100010003ee48 >> 8) | (uint3)((uint)uVar2 >> 8)) & 0xffff
    ;
    if ((uVar1 >> 8 & 1) == 0) {
      uVar6 = FUN_000241a0(0x60000000);
    }
    if ((uVar1 >> 9 & 1) == 0) {
      lVar7 = FUN_000241a0(0x60000100);
      uVar6 = uVar6 | lVar7 << 0x10;
    }
    uVar13 = 0;
    if ((uVar1 >> 10 & 1) == 0) {
      uVar13 = FUN_000241a0(0x60010000);
    }
    if ((uVar1 >> 0xb & 1) == 0) {
      lVar7 = FUN_000241a0(0x60010100);
      uVar13 = uVar13 | lVar7 << 0x10;
    }
    uVar11 = 0;
    if ((uVar1 >> 0xc & 1) == 0) {
      uVar11 = FUN_000241a0(0x60020000);
    }
    if ((uVar1 >> 0xd & 1) == 0) {
      lVar7 = FUN_000241a0(0x60020100);
      uVar11 = uVar11 | lVar7 << 0x10;
    }
    uVar10 = 0;
    if ((uVar1 >> 0xe & 1) == 0) {
      uVar10 = FUN_000241a0(0x60030000);
    }
    if (uVar1 >> 0xf == 0) {
      lVar7 = FUN_000241a0(0x60030100);
      uVar10 = uVar10 | lVar7 << 0x10;
    }
    lVar7 = FUN_000241a0(0x60040000);
    lVar8 = FUN_000241a0(0x60040100);
    lVar9 = FUN_000241a0(0x60050000);
    uVar6 = lVar7 << 0x20 | lVar8 << 0x30 | uVar6;
    lVar7 = FUN_000241a0(0x60050100);
    uVar13 = lVar9 << 0x20 | lVar7 << 0x30 | uVar13;
  }
  Ram0002000000000080 = param_2;
  Ram00020000000003c0 = 0;
  Ram0002000000000448 = (_DAT_100010003e138 & 0xf) << 0x14 | 0xc10;
  uVar4 = Ram00020000000000e8;
  _DAT_2000000000800 = uVar12 << 0x15 | 0x80000000;
  Ram0002000000000448 = 0x800;
  uVar4 = Ram00020000000000e8;
  if (iVar5 < 0) {
    Ram00020000000000a8 = 2;
    Ram000100020000b830 = (int)_DAT_3000000000028;
    Ram000100020000b834 = (int)((ulong)_DAT_3000000000028 >> 0x20);
  }
  else {
    lVar7 = (((ulong)((long)_DAT_100010000a360 << 0x20) >> 8) + 0x41000 + _DAT_100010003e130) -
            ((ulong)((long)_DAT_100010000a01c << 0x20) >> 8);
    Ram00020000000000a8 = 2;
    Ram000100020000b830 = (int)((ulong)lVar7 >> 8);
    Ram000100020000b834 = (uint)((ulong)lVar7 >> 0x28);
  }
  Ram00020000000000a8 = 2;
  Ram000100020000b804 = 0x60;
  Ram000100020000b808 = 1;
  Ram000100020000b80c = 1;
  Ram000100020000b810 = 0;
  Ram000100020000b814 = 0;
  Ram000100020000b818 = 0;
  Ram000100020000b81c = 0x20;
  Ram000100020000b820 = 0x20;
  Ram000100020000b824 = 1;
  Ram000100020000b828 = 0;
  Ram000100020000b82c = 0;
  Ram000100020000b848 = 0x10000b;
  Ram000100020000b84c = 0x400400;
  Ram000100020000b8a0 = 0;
  Ram000100020000b8a8 = 0;
  Ram000100020000b850 = 0;
  Ram000100020000b854 = 0;
  Ram000100020000b858 = 0xffffffff;
  Ram000100020000b85c = 0xffffffff;
  Ram000100020000b860 = 0;
  Ram000100020000b864 = 0xffffffff;
  Ram000100020000b868 = 0xffffffff;
  Ram000100020000b8ac = 0xffffffff;
  Ram000100020000b8b0 = 0xffffffff;
  Ram000100020000b8b4 = 0xffffffff;
  Ram000100020000b8b8 = 0xffffffff;
  Ram000100020000b86c = 0;
  Ram000100020000b870 = 0;
  Ram000100020000b874 = 0;
  Ram000100020000b878 = 0;
  Ram000100020000b87c = 0;
  Ram000100020000b880 = 0;
  Ram000100020000b884 = 0;
  Ram000100020000b888 = 0;
  Ram000100020000b890 = 0;
  Ram000100020000b894 = 0;
  Ram000100020000b898 = 0;
  Ram000100020000b89c = 0;
  Ram000100020000b800 = 0x8045;
  do {
    iVar3 = Ram00020000000000d0;
  } while (iVar3 == 0);
  uVar12 = 1 << (long)(int)uVar12;
  Ram00020000000001a8 = uVar12;
  *DAT_00101070 = 7;
  Ram00020000000000a8 = 0;
  do {
    uVar1 = Ram00020000000000c8;
  } while ((uVar12 & uVar1) != 0);
  Ram0002000000000178 = 1;
  do {
    iVar3 = Ram00020000000000a8;
  } while (iVar3 == 0);
  Ram0002000000000180 = 1;
  do {
    iVar3 = Ram00020000000000b0;
  } while (iVar3 == 0);
  Ram0002000000000180 = 0;
  do {
    iVar3 = Ram00020000000000b0;
  } while (iVar3 != 0);
  Ram0002000000000178 = 0;
  do {
    iVar3 = Ram00020000000000a8;
  } while (iVar3 != 0);
  Ram0002000000000080 = 4;
  Ram00020000000003c0 = 0;
  if (-1 < iVar5) {
    if ((uVar6 & 0xffff) != 0) {
      FUN_000242e0(uVar6,0x60000000);
    }
    if ((uint)uVar6 >> 0x10 != 0) {
      FUN_000242e0(uVar6 >> 0x10,0x60000100);
    }
    if ((uVar13 & 0xffff) != 0) {
      FUN_000242e0(uVar13,0x60010000);
    }
    if ((uint)uVar13 >> 0x10 != 0) {
      FUN_000242e0(uVar13 >> 0x10,0x60010100);
    }
    if ((uVar11 & 0xffff) != 0) {
      FUN_000242e0(uVar11,0x60020000);
    }
    if (uVar11 >> 0x10 != 0) {
      FUN_000242e0(0x60020100);
    }
    if ((uVar10 & 0xffff) != 0) {
      FUN_000242e0(uVar10,0x60030000);
    }
    if (uVar10 >> 0x10 != 0) {
      FUN_000242e0(0x60030100);
    }
    if (uVar6 >> 0x30 != 0) {
      FUN_000242e0(0x60040100);
    }
    if (uVar13 >> 0x30 != 0) {
      FUN_000242e0(0x60050100);
      return;
    }
  }
  return;
}


/* ---- sub_26430 @ 00026430 size=24 ---- */

undefined8 sub_26430(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  if ((param_1 & 1) == 0) {
    uVar1 = FUN_000241a0(param_2);
    return uVar1;
  }
  return 0;
}


/* ---- sub_26448 @ 00026448 size=20 ---- */

void sub_26448(short param_1)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  if (param_1 != 0) {
    FUN_000242e0();
    return;
  }
  return;
}


/* ---- pm4_OP_0F_MEM_SEMAPHORE_handler @ 00026460 size=276 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pm4_OP_0F_MEM_SEMAPHORE_handler(void)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0002000000000040 = 1;
  if ((_DAT_100010002e000 & 1) != 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  do {
  } while (_DAT_100010000c2d4 != 0);
  uVar4 = Ram0002000000000070;
  lVar3 = (long)(int)(uVar4 >> 4) << 0x24;
  _DAT_100010000c2dc = *(uint *)(lVar3 + 0x108080000c860) >> 3 & 0x3ff | 0x5000;
  _DAT_100010000c0dc = (undefined4)(((long)(int)(uVar4 >> 8) & 7U) << 0x1c);
  _DAT_100010000c0e8 = 0x10000;
  _DAT_100010000c2d4 = 0x1000000;
  *(uint *)(lVar3 + 0x108080000c860) =
       (uint)((ulong)((long)*(int *)(lVar3 + 0x108080000c860) << 0x22) >> 0x22);
  uVar1 = Ram0002000000000038;
  Ram0002000000000150 = 0;
  *(undefined4 *)((ulong)((int)uVar1 + 0x60) + 0x2000000000000) = 0;
  Ram00020000000004c0 = (int)uVar1;
  Ram0002000000000558 = 3;
  do {
    iVar2 = Ram00020000000004c8;
  } while (iVar2 != 0);
  *(undefined4 *)(lVar3 + 0x108080000c8fc) = 0;
  *(undefined4 *)(lVar3 + 0x108080000c900) = 0;
  *(undefined4 *)(lVar3 + 0x108080000c84c) = 0;
  *(undefined4 *)(lVar3 + 0x108080000c878) = 0;
  if (*(int *)(lVar3 + 0x108080000c82c) != 0) {
    do {
      do {
        uVar4 = *(uint *)(lVar3 + 0x108080000c884) & 0xf;
      } while (uVar4 == 0);
    } while (uVar4 == 4);
    return;
  }
  return;
}


/* ---- FUN_00026578 @ 00026578 size=1560 ---- */

void FUN_00026578(void)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram00020000000005f8 = 0x42b758;
  Ram00020000000005f8 = 0x72fec0;
  Ram00020000000005f8 = 0x92b790;
  Ram00020000000005f8 = 0xa2b878;
  Ram00020000000005f8 = 0xb2b970;
  Ram00020000000005f8 = 0x52d5c0;
  Ram00020000000005f8 = 0xd2ca98;
  Ram00020000000005f8 = 0xe12c10;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0x102b0e8;
  Ram00020000000005f8 = 0x1528ae8;
  Ram00020000000005f8 = 0x172a3c0;
  Ram00020000000005f8 = 0x1d27e08;
  Ram00020000000005f8 = 0x1e284b0;
  Ram00020000000005f8 = 0x222b158;
  Ram00020000000005f8 = 0x3726b98;
  Ram00020000000005f8 = 0x3926460;
  Ram00020000000005f8 = 0x3c2e8a8;
  Ram00020000000005f8 = 0x3f2a9e8;
  Ram00020000000005f8 = 0x4026dc0;
  Ram00020000000005f8 = 0x50275f8;
  Ram00020000000005f8 = 0x462d9d8;
  Ram00020000000005f8 = 0x492d8b8;
  Ram00020000000005f8 = 0x582c9e8;
  Ram00020000000005f8 = 0x682c7e0;
  Ram00020000000005f8 = 0x762be78;
  Ram00020000000005f8 = 0x782be68;
  Ram00020000000005f8 = 0x792c780;
  Ram00020000000005f8 = 0x7d28730;
  Ram00020000000005f8 = 0x7e28738;
  Ram00020000000005f8 = 0x592b1b8;
  Ram00020000000005f8 = 0x3d2be50;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0x5d28740;
  Ram00020000000005f8 = 0x622ae50;
  Ram00020000000005f8 = 0x5c2a9e8;
  Ram00020000000005f8 = 0x1628dc0;
  Ram00020000000005f8 = 0x45287e0;
  Ram00020000000005f8 = 0x9828940;
  Ram00020000000005f8 = 0x932f208;
  Ram00020000000005f8 = 0x9a27d00;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0xb72b888;
  Ram00020000000005f8 = 0x972ae58;
  Ram00020000000005f8 = 0x9627400;
  Ram00020000000005f8 = 0x9528a88;
  Ram00020000000005f8 = 0x9b2c5f0;
  Ram00020000000005f8 = 0x22b150;
  Ram00020000000005f8 = 0xa9290b8;
  Ram00020000000005f8 = 0xaa29d70;
  Ram00020000000005f8 = 0xad29130;
  Ram00020000000005f8 = 0x542b898;
  Ram00020000000005f8 = 0xff37820;
  Ram00020000000005f8 = 0x632c8d0;
  Ram00020000000005f8 = 0xb22b040;
  Ram00020000000005f8 = 0xbb2bf40;
  Ram00020000000005f8 = 0xbd2c0a0;
  Ram00020000000005f8 = 0xb033ca8;
  Ram00020000000005f8 = 0xd02d768;
  Ram00020000000005f8 = 0xd12fb78;
  Ram00020000000005f8 = 0xd22be08;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0xf26460;
  Ram00020000000005f8 = 0xf26460;
  return;
}


/* ---- pm4_WRITE_DATA_handler @ 00026b98 size=64 ---- */

void pm4_WRITE_DATA_handler(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  undefined4 *puVar7;
  long lVar8;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram00020000000006f8;
  uVar4 = ((long)((int)uVar1 >> 0x10) ^ 1U) & 1;
  lVar8 = (long)(int)((uint)((ulong)(param_1 << 0x22) >> 0x32) - 2);
  uVar3 = Ram00020000000006f8;
  uVar2 = Ram00020000000006f8;
  iVar6 = (int)uVar4;
  switch(uVar1 >> 6 & 0x3c) {
  case 0:
    uVar4 = (ulong)uVar3 & 0x3ffff;
    if (0 < lVar8) {
      lVar5 = 0;
      do {
        uVar2 = Ram00020000000006f8;
        *(undefined4 *)(((uVar4 << 0x20) >> 0x1e) + 0x1000100000000) = uVar2;
        lVar5 = lVar5 + 1;
        uVar4 = (ulong)((int)uVar4 + iVar6);
      } while (lVar5 < lVar8);
    }
    if ((uVar1 & 0x100000) == 0) {
      gp = 0x101800;
      tp = 0x2000000000000;
      return;
    }
    return;
  case 4:
    goto code_r0x00026d40;
  case 8:
    goto code_r0x00026cdc;
  case 0xc:
    Ram0001000100031014 = (uVar3 & 0xffff) >> 2;
    if (0 < lVar8) {
      lVar5 = 0;
      do {
        uVar2 = Ram00020000000006f8;
        Ram0001000100031018 = uVar2;
        lVar5 = lVar5 + 1;
      } while (lVar5 < lVar8);
    }
    if ((uVar1 & 0x100000) == 0) {
      gp = 0x101800;
      tp = 0x2000000000000;
      return;
    }
    uVar2 = Ram0001000100031024;
    return;
  case 0x10:
code_r0x00026d40:
    lVar5 = 0;
    if (0 < lVar8) {
      do {
        uVar2 = Ram00020000000006f8;
        lVar5 = lVar5 + 1;
      } while (lVar5 < lVar8);
      gp = 0x101800;
      tp = 0x2000000000000;
      return;
    }
    return;
  case 0x14:
code_r0x00026cdc:
    Ram0002000000000390 = CONCAT44(uVar2,uVar3);
    puVar7 = (undefined4 *)Ram0002000000000390;
    Ram00020000000000b0 = 0;
    Ram0002000000000148 = 1;
    Ram0002000000000120 = uVar1 >> 0x19 & 3;
    if (0 < lVar8) {
      lVar5 = 0;
      do {
        uVar2 = Ram00020000000006f8;
        *puVar7 = uVar2;
        lVar5 = lVar5 + 1;
        puVar7 = puVar7 + uVar4;
      } while (lVar5 < lVar8);
    }
    uVar1 = uVar1 & 0x100000;
    while ((uVar1 != 0 && (iVar6 = Ram0002000000000090, iVar6 != 0))) {
      uVar1 = Ram0002000000000090;
    }
    Ram0002000000000150 = 0;
    return;
  case 0x18:
    uVar4 = (ulong)uVar3 & 0x3ffff;
    Ram00020000000000a8 = 2;
    if (0 < lVar8) {
      lVar5 = 0;
      do {
        uVar2 = Ram00020000000006f8;
        *(undefined4 *)(((uVar4 << 0x20) >> 0x1e) + 0x1000200000000) = uVar2;
        lVar5 = lVar5 + 1;
        uVar4 = (ulong)(iVar6 + (int)uVar4);
      } while (lVar5 < lVar8);
    }
    Ram00020000000000a8 = 0;
    if ((uVar1 & 0x100000) == 0) {
      return;
    }
    uVar2 = Ram0001000100030100;
    return;
  case 0x1c:
    break;
  case 0x20:
    break;
  case 0x24:
    break;
  case 0x28:
    break;
  case 0x2c:
    break;
  case 0x30:
    break;
  case 0x34:
    break;
  case 0x38:
    break;
  case 0x3c:
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- pm4_COPY_DATA_handler @ 00026dc0 size=184 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pm4_COPY_DATA_handler(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong *puVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  undefined4 uVar12;
  ulong uVar13;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar3 = Ram00020000000006f8;
  uVar9 = uVar3 >> 0x10 & 1;
  if ((uVar3 & 0x20000000) != 0) {
    uVar1 = Ram0002000000000070;
    lVar10 = (long)(int)(uVar1 >> 4) << 0x24;
    *(undefined4 *)(lVar10 + 0x108080000c8ac) = 0x3000;
    Ram0002000000000120 = *(uint *)(lVar10 + 0x108080000c8ac) >> 0x18 & 3;
    *(undefined4 *)(*(long *)(lVar10 + 0x108080000c824) + 0x1c8) = 1;
    *(undefined4 *)(lVar10 + 0x108080000c8ac) = 0x2000;
  }
  uVar1 = Ram00020000000006f8;
  uVar11 = (ulong)uVar1;
  uVar2 = Ram00020000000006f8;
  switch(uVar3 & 0xf) {
  case 0:
    uVar13 = (uVar11 << 0x2e) >> 0x2c;
    if ((uint)((uVar11 << 0x2e) >> 0x2e) - 0x3225 < 4) {
      uVar1 = Ram0002000000000070;
      lVar10 = ((long)(int)(uVar1 >> 4) << 0x24) + 0x1080800000000;
      uVar1 = *(uint *)(lVar10 + uVar13);
      uVar13 = (ulong)uVar1;
      if (uVar9 != 0) {
        uVar13 = CONCAT44(*(undefined4 *)(lVar10 + ((uVar11 & 0x3ffff) + 1) * 4),uVar1);
      }
    }
    else {
      uVar1 = *(uint *)(uVar13 + 0x1000100000000);
      uVar13 = (ulong)uVar1;
      if (uVar9 != 0) {
        uVar13 = CONCAT44(*(undefined4 *)(((uVar11 & 0x3ffff) + 1) * 4 + 0x1000100000000),uVar1);
      }
    }
    break;
  case 1:
    goto code_r0x00027008;
  case 2:
code_r0x00027008:
    Ram00020000000000d8 = uVar3 & 0x180;
    Ram0002000000000390 = CONCAT44(uVar2,uVar1);
    puVar8 = (ulong *)Ram0002000000000390;
    uVar13 = *puVar8;
    break;
  case 3:
    Ram0001000100031000 = (uint)((uVar11 << 0x30) >> 0x32);
    uVar1 = Ram0001000100031004;
    if (uVar9 == 0) goto code_r0x00026f48;
    uVar2 = Ram0001000100031004;
    uVar13 = CONCAT44(uVar2,uVar1);
    break;
  case 4:
    uVar2 = Ram0002000000000020;
    if (0x11 < (uint)((uVar11 << 0x2e) >> 0x2e) - 0xd9e8) {
      uVar5 = Ram0002000000000020;
      Ram0002000000000040 = 1;
    }
    uVar1 = *(uint *)((uVar11 & 0x3ffff) * 4 + 0x1000100000000);
    uVar13 = (ulong)uVar1;
    if (uVar9 == 0) {
      Ram0002000000000040 = uVar2;
    }
    else {
      uVar13 = CONCAT44(*(undefined4 *)(((uVar11 & 0x3ffff) + 1) * 4 + 0x1000100000000),uVar1);
      Ram0002000000000040 = uVar2;
    }
    break;
  case 5:
    uVar13 = CONCAT44(uVar2,uVar1);
    break;
  case 6:
    goto code_r0x000270c8;
  case 7:
code_r0x000270c8:
    uVar1 = Ram0002000000000070;
    uVar13 = *(ulong *)(((long)(int)(uVar1 >> 4) << 0x24) + 0x108080000c894);
    break;
  case 8:
    uVar1 = Ram0002000000000070;
    uVar13 = *(ulong *)(((long)(int)(uVar1 >> 4) << 0x24) + 0x108080000c89c);
    break;
  case 9:
    uVar13 = Ram00020000000000f8;
    break;
  case 10:
    uVar13 = Ram0002000000000100;
    break;
  case 0xb:
    uVar2 = Ram0002000000000020;
    Ram0002000000000040 = 1;
    Ram0002000000000198 = 3;
    do {
      uVar7 = Ram0002000000000048;
    } while ((uVar7 & 8) == 0);
    Ram0001000100030104 = uVar1;
    Ram000100010003010c = 0;
    do {
    } while (_DAT_100010000c2d4 != 0);
    _DAT_100010000c2d4 = -0x80000000;
    do {
      iVar4 = Ram000100010003010c;
    } while (-1 < iVar4);
    uVar1 = Ram0001000100030108;
    _DAT_100010000c360 = 0;
    Ram00020000000001a0 = 3;
    Ram0002000000000040 = uVar2;
code_r0x00026f48:
    uVar13 = (ulong)uVar1;
    break;
  case 0xc:
    goto code_r0x00027030;
  case 0xd:
    goto code_r0x00027030;
  case 0xe:
    goto code_r0x00027030;
  case 0xf:
code_r0x00027030:
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar1 = Ram00020000000006f8;
  uVar11 = (ulong)uVar1;
  uVar5 = Ram00020000000006f8;
  uVar2 = (undefined4)uVar13;
  uVar12 = (undefined4)(uVar13 >> 0x20);
  switch(uVar3 >> 6 & 0x3c) {
  case 0:
    *(undefined4 *)(((uVar11 << 0x2e) >> 0x2c) + 0x1000100000000) = uVar2;
    if (uVar9 != 0) {
      *(undefined4 *)(((uVar11 & 0x3ffff) + 1) * 4 + 0x1000100000000) = uVar12;
    }
    goto LAB_000272a4;
  case 4:
    break;
  case 8:
    goto LAB_000272ac;
  case 0xc:
    Ram0001000100031014 = (uint)((uVar11 << 0x30) >> 0x32);
    Ram0001000100031018 = uVar2;
    if (uVar9 != 0) {
      Ram0001000100031018 = uVar12;
    }
    if ((uVar3 & 0x100000) != 0) {
      uVar2 = Ram0001000100031024;
    }
    goto LAB_000272a4;
  case 0x10:
    uVar5 = Ram0002000000000020;
    if (0x11 < (uint)((uVar11 << 0x2e) >> 0x2e) - 0xd9e8) {
      uVar6 = Ram0002000000000020;
      Ram0002000000000040 = 1;
    }
    *(undefined4 *)((uVar11 & 0x3ffff) * 4 + 0x1000100000000) = uVar2;
    if (uVar9 != 0) {
      *(undefined4 *)(((uVar11 & 0x3ffff) + 1) * 4 + 0x1000100000000) = uVar12;
    }
    if ((uVar3 & 0x100000) == 0) {
      Ram0002000000000040 = uVar5;
    }
    else {
      Ram0002000000000040 = uVar5;
    }
    goto LAB_000272a4;
  case 0x14:
LAB_000272ac:
    Ram0002000000000120 = uVar3 >> 0x19 & 3;
    Ram0002000000000390 = CONCAT44(uVar5,uVar1);
    puVar8 = (ulong *)Ram0002000000000390;
    if (uVar9 == 0) {
      *(undefined4 *)puVar8 = uVar2;
    }
    else {
      *puVar8 = uVar13;
    }
    uVar3 = uVar3 & 0x100000;
    while (uVar3 != 0) {
      uVar3 = Ram0002000000000090;
    }
    goto LAB_000272a4;
  case 0x18:
    Ram00020000000000a8 = 2;
    *(undefined4 *)(((uVar11 << 0x2e) >> 0x2c) + 0x1000200000000) = uVar2;
    if (uVar9 == 0) {
      Ram00020000000000a8 = 0;
    }
    else {
      *(undefined4 *)(((uVar11 & 0x3ffff) + 1) * 4 + 0x1000200000000) = uVar12;
      Ram00020000000000a8 = 0;
    }
    goto LAB_000272a4;
  case 0x1c:
    break;
  case 0x20:
    break;
  case 0x24:
    break;
  case 0x28:
    break;
  case 0x2c:
    uVar5 = Ram0002000000000020;
    Ram0002000000000040 = 1;
    Ram0002000000000198 = 3;
    do {
      uVar3 = Ram0002000000000048;
    } while ((uVar3 & 8) == 0);
    Ram0001000100030104 = uVar1;
    Ram0001000100030108 = uVar2;
    Ram000100010003010c = 1;
    do {
    } while (_DAT_100010000c2d4 != 0);
    _DAT_100010000c2d4 = -0x80000000;
    do {
      iVar4 = Ram000100010003010c;
    } while (-1 < iVar4);
    _DAT_100010000c360 = 0;
    Ram00020000000001a0 = 3;
    Ram0002000000000040 = uVar5;
LAB_000272a4:
    FUN_00024168();
    return;
  case 0x30:
    break;
  case 0x34:
    break;
  case 0x38:
    break;
  case 0x3c:
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- pm4_COPY_DATA_RB_handler @ 00027400 size=496 ---- */

void pm4_COPY_DATA_RB_handler(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar10 = Ram00020000000006f8;
  lVar16 = Ram00020000000006f8;
  uVar11 = Ram00020000000006f8;
  lVar6 = Ram00020000000006f8;
  uVar8 = Ram00020000000006f8;
  uVar9 = Ram00020000000006f8;
  uVar12 = Ram00020000000006f8;
  lVar13 = Ram00020000000006f8;
  Ram0002000000000390 = lVar16 << 0x20 | uVar10;
  lVar16 = Ram0002000000000390;
  Ram0002000000000390 = lVar6 << 0x20 | uVar11;
  puVar5 = (uint *)Ram0002000000000390;
  Ram0002000000000390 = lVar13 << 0x20 | uVar12;
  lVar6 = Ram0002000000000390;
  uVar2 = (uint)((ulong)puVar5 >> 0x20);
  Ram00020000000000e0 = uVar2 >> 0x13 & 0xe00;
  Ram0002000000000380 = 0x200000001;
  uVar1 = *puVar5;
  do {
    iVar3 = Ram0002000000000030;
  } while (iVar3 != 0);
  uVar4 = Ram0002000000000070;
  Ram00020000000000d0 = uVar4 | 1;
  uVar15 = (uint)((ulong)*puVar5 + lVar6 >> 0x20);
  uVar14 = uVar15 >> 6 & 0x1c00000 | (uint)((ulong)lVar16 >> 0x32) & 0x1c00;
  Ram00010001000301e0 = uVar14;
  Ram0001000100030200 = (int)lVar16;
  Ram0001000100030204 = (uint)(ushort)((ulong)lVar16 >> 0x20);
  Ram0001000100030208 = (int)((ulong)*puVar5 + lVar6);
  Ram000100010003020c = uVar15;
  uVar7 = Ram00020000000004b0;
  Ram0001000100030270 = (int)uVar7;
  Ram0001000100030274 = (int)((ulong)uVar7 >> 0x20);
  uVar15 = uVar8 + uVar1;
  if (uVar9 < uVar15) {
    Ram0001000100030210 = uVar9 - uVar1 | 0x40000000;
    do {
      iVar3 = Ram0002000000000030;
    } while (iVar3 != 0);
    Ram00020000000000d0 = uVar4 | 1;
    lVar16 = (ulong)(uVar9 - uVar1) + lVar16;
    Ram00010001000301e0 = uVar14;
    Ram0001000100030200 = (int)lVar16;
    Ram0001000100030204 = (uint)((ulong)lVar16 >> 0x20) & 0xffff;
    uVar15 = (uVar8 - uVar9) + uVar1;
    Ram0001000100030208 = (int)lVar6;
    Ram000100010003020c = (uint)((ulong)lVar6 >> 0x20) & 0xffff;
    Ram0001000100030210 = uVar15 | 0x40000000;
  }
  else {
    Ram0001000100030210 = uVar8 | 0x40000000;
  }
  do {
    iVar3 = Ram0002000000000030;
  } while (iVar3 != 0);
  Ram0002000000000120 = uVar2 >> 0x1a & 0x1c;
  Ram0002000000000380 = 0x400000001;
  *puVar5 = uVar15;
  do {
    iVar3 = Ram0002000000000090;
  } while (iVar3 != 0);
  FUN_00024168();
  return;
}


/* ---- pm4_DMA_DATA_handler @ 000275f8 size=1800 ---- */

/* WARNING: Removing unreachable block (ram,0x00027a54) */
/* WARNING: Removing unreachable block (ram,0x0002763c) */
/* WARNING: Removing unreachable block (ram,0x00027634) */
/* WARNING: Removing unreachable block (ram,0x00027c00) */
/* WARNING: Removing unreachable block (ram,0x00027c14) */
/* WARNING: Removing unreachable block (ram,0x00027bec) */
/* WARNING: Removing unreachable block (ram,0x00027898) */
/* WARNING: Removing unreachable block (ram,0x00027648) */
/* WARNING: Removing unreachable block (ram,0x000278a0) */
/* WARNING: Removing unreachable block (ram,0x00027bf4) */
/* WARNING: Removing unreachable block (ram,0x00027a4c) */
/* WARNING: Removing unreachable block (ram,0x00027a60) */
/* WARNING: Removing unreachable block (ram,0x00027a74) */
/* WARNING: Removing unreachable block (ram,0x000277d4) */
/* WARNING: Removing unreachable block (ram,0x000277cc) */
/* WARNING: Removing unreachable block (ram,0x00027c94) */
/* WARNING: Removing unreachable block (ram,0x00027c98) */
/* WARNING: Removing unreachable block (ram,0x00027770) */
/* WARNING: Removing unreachable block (ram,0x00027760) */
/* WARNING: Removing unreachable block (ram,0x00027768) */
/* WARNING: Removing unreachable block (ram,0x0002777c) */
/* WARNING: Removing unreachable block (ram,0x0002776c) */
/* WARNING: Removing unreachable block (ram,0x00027774) */
/* WARNING: Removing unreachable block (ram,0x0002778c) */
/* WARNING: Removing unreachable block (ram,0x000278ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pm4_DMA_DATA_handler(void)

{
  undefined4 uVar1;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  undefined4 uVar11;
  ulong uVar12;
  undefined4 uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar2;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar2 = Ram0002000000000020;
  Ram0002000000000040 = 1;
  iVar4 = Ram0002000000000030;
  if ((_DAT_100010000c6c0 >> 0xc & 3) != 0 || iVar4 != 0) {
    do {
    } while( true );
  }
  if ((_DAT_100010000c6c0 & 1) != 0) {
    _DAT_100010000c6c0 = 0;
  }
  Ram0002000000000040 = uVar2;
  uVar6 = Ram00020000000006f8;
  uVar7 = Ram00020000000006f8;
  lVar8 = Ram00020000000006f8;
  uVar12 = lVar8 << 0x20 | uVar7;
  uVar9 = Ram00020000000006f8;
  lVar8 = Ram00020000000006f8;
  uVar14 = lVar8 << 0x20 | uVar9;
  uVar10 = Ram00020000000006f8;
  uVar16 = Ram0002000000000070;
  *(undefined4 *)(((long)(int)(uVar16 >> 4) << 0x24) + 0x108080000c888) = 3;
  uVar1 = (undefined4)uVar7;
  uVar2 = (undefined4)uVar9;
  uVar11 = (undefined4)(uVar12 >> 0x20);
  uVar13 = (undefined4)(uVar14 >> 0x20);
  if ((uVar10 & 0x3ffffff) < 0x8000) {
    uVar16 = Ram0002000000000070;
    Ram00020000000000d0 = uVar16 | 1;
    uVar5 = Ram00020000000004b0;
    Ram0001000100030270 = (int)uVar5;
    Ram0001000100030274 = (int)((ulong)uVar5 >> 0x20);
    uVar16 = 0;
    if (((uVar6 & 0x60000000) == 0x60000000) || ((uVar6 & 0x60000000) == 0)) {
      Ram0002000000000390 = uVar12;
      uVar5 = Ram0002000000000390;
      Ram0001000100030200 = (int)uVar5;
      Ram0001000100030204 = (uint)(ushort)((ulong)uVar5 >> 0x20);
      uVar16 = (uVar6 >> 0xd & 3) << 0xd;
    }
    else {
      Ram0001000100030200 = uVar1;
      Ram0001000100030204 = uVar11;
    }
    if (((uVar6 & 0x300000) == 0x300000) || ((uVar6 & 0x300000) == 0)) {
      Ram0002000000000390 = uVar14;
      uVar5 = Ram0002000000000390;
      Ram0001000100030208 = (int)uVar5;
      Ram000100010003020c = (uint)(ushort)((ulong)uVar5 >> 0x20);
      uVar16 = uVar16 | (uVar6 >> 0x19 & 3) << 0x19;
    }
    else {
      Ram0001000100030208 = uVar2;
      Ram000100010003020c = uVar13;
    }
    Ram00010001000301e0 = uVar16 & 0xffff | (uVar16 >> 0x10 | uVar6 >> 0x10 & 0x6030) << 0x10;
    Ram0001000100030210 = uVar10;
    uVar10 = Ram0002000000000070;
    uVar16 = *(uint *)(((long)(int)(uVar10 >> 4) << 0x24) + 0x108080002e088);
    uVar10 = uVar10 >> 4;
    if ((((ulong)(long)(int)uVar16 >> 8 & 0xff) == 0) && ((uVar16 & 0x30000000) != 0)) {
      uVar2 = Ram0002000000000020;
      Ram0002000000000040 = 1;
      Ram0002000000000040 = uVar2;
      iVar4 = Ram0002000000000030;
      if ((_DAT_100010000c6c0 >> 0xc & 3) != 0 || iVar4 != 0) {
        do {
        } while( true );
      }
LAB_00027c18:
      if ((_DAT_100010000c6c0 & 1) != 0) {
        uVar2 = Ram0002000000000020;
        Ram0002000000000040 = 1;
        _DAT_100010000c6c0 = 0;
        _DAT_100010002a404 = 0;
        Ram0002000000000040 = uVar2;
        return;
      }
      return;
    }
  }
  else {
    uVar15 = uVar6 & 0x60000000;
    uVar16 = uVar6 & 0x300000;
    if (((uVar15 == 0x60000000) || ((uVar10 & 0x10000000) == 0 && uVar15 == 0)) &&
       ((uVar16 == 0x300000 || ((uVar10 & 0x20000000) == 0 && uVar16 == 0)))) {
      uVar3 = Ram0002000000000020;
      Ram0002000000000040 = 1;
      _DAT_100010000c6c0 = 1;
      _DAT_100010002a404 = 0;
      _DAT_10001000049d4 = uVar10 & 0x43ffffff;
      uVar5 = Ram00020000000004b0;
      Ram0001000100030270 = (int)uVar5;
      Ram0001000100030274 = (int)((ulong)uVar5 >> 0x20);
      _DAT_10001000049d0 = uVar13;
      _DAT_10001000049cc = uVar2;
      _DAT_10001000049c8 = uVar11;
      _DAT_10001000049c4 = uVar1;
      _DAT_10001000049b0 = uVar6;
      Ram0002000000000040 = uVar3;
      uVar10 = Ram0002000000000070;
      uVar16 = *(uint *)(((long)(int)(uVar10 >> 4) << 0x24) + 0x108080002e088);
      uVar10 = uVar10 >> 4;
      if ((((ulong)(long)(int)uVar16 >> 8 & 0xff) == 0) && ((uVar16 & 0x30000000) != 0)) {
        uVar2 = Ram0002000000000020;
        Ram0002000000000040 = 1;
        Ram0002000000000040 = uVar2;
        iVar4 = Ram0002000000000030;
        if (iVar4 == 0) {
          uVar2 = Ram0002000000000020;
          Ram0002000000000040 = 1;
          _DAT_100010000c6c0 = 0;
          _DAT_100010002a404 = 0;
          Ram0002000000000040 = uVar2;
          return;
        }
        do {
        } while( true );
      }
    }
    else {
      uVar17 = Ram0002000000000070;
      Ram00020000000000d0 = uVar17 | 1;
      uVar5 = Ram00020000000004b0;
      Ram0001000100030270 = (int)uVar5;
      Ram0001000100030274 = (int)((ulong)uVar5 >> 0x20);
      uVar17 = 0;
      if ((uVar15 == 0x60000000) || ((uVar6 & 0x60000000) == 0)) {
        Ram0002000000000390 = uVar12;
        uVar5 = Ram0002000000000390;
        Ram0001000100030200 = (int)uVar5;
        Ram0001000100030204 = (uint)(ushort)((ulong)uVar5 >> 0x20);
        uVar17 = (uVar6 >> 0xd & 3) << 0xd;
      }
      else {
        Ram0001000100030200 = uVar1;
        Ram0001000100030204 = uVar11;
      }
      if ((uVar16 == 0x300000) || ((uVar6 & 0x300000) == 0)) {
        Ram0002000000000390 = uVar14;
        uVar5 = Ram0002000000000390;
        Ram0001000100030208 = (int)uVar5;
        Ram000100010003020c = (uint)(ushort)((ulong)uVar5 >> 0x20);
        uVar17 = uVar17 | (uVar6 >> 0x19 & 3) << 0x19;
      }
      else {
        Ram0001000100030208 = uVar2;
        Ram000100010003020c = uVar13;
      }
      Ram00010001000301e0 = uVar17 & 0xffff | (uVar17 >> 0x10 | uVar6 >> 0x10 & 0x6030) << 0x10;
      Ram0001000100030210 = uVar10;
      uVar10 = Ram0002000000000070;
      uVar16 = *(uint *)(((long)(int)(uVar10 >> 4) << 0x24) + 0x108080002e088);
      uVar10 = uVar10 >> 4;
      if ((((ulong)(long)(int)uVar16 >> 8 & 0xff) == 0) && ((uVar16 & 0x30000000) != 0)) {
        uVar2 = Ram0002000000000020;
        Ram0002000000000040 = 1;
        Ram0002000000000040 = uVar2;
        iVar4 = Ram0002000000000030;
        if ((_DAT_100010000c6c0 >> 0xc & 3) != 0 || iVar4 != 0) {
          do {
          } while( true );
        }
        goto LAB_00027c18;
      }
    }
  }
  FUN_00024960(uVar10);
  return;
}


/* ---- pm4_DMA_DATA_FILL_MULTI_handler @ 00027d00 size=260 ---- */

void pm4_DMA_DATA_FILL_MULTI_handler(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  do {
    iVar9 = Ram0002000000000030;
  } while (iVar9 != 0);
  uVar4 = Ram00020000000006f8;
  uVar2 = Ram00020000000006f8;
  uVar8 = (ulong)uVar2;
  iVar5 = Ram00020000000006f8;
  uVar7 = Ram00020000000006f8;
  lVar11 = Ram00020000000006f8;
  uVar6 = Ram00020000000006f8;
  uVar2 = Ram0002000000000070;
  Ram00020000000000d0 = uVar2 | 1;
  uVar3 = Ram00020000000004b0;
  Ram0001000100030270 = (int)uVar3;
  Ram0001000100030274 = (int)((ulong)uVar3 >> 0x20);
  iVar9 = iVar5 + -1;
  Ram0002000000000390 = lVar11 << 0x20 | uVar7;
  lVar11 = Ram0002000000000390;
  if (iVar9 != 0) {
    lVar10 = lVar11;
    do {
      Ram0001000100030200 = 0;
      Ram0001000100030204 = 0;
      Ram0001000100030208 = (int)lVar10;
      Ram000100010003020c = (int)((ulong)lVar10 >> 0x20);
      Ram00010001000301e0 = uVar4;
      iVar9 = iVar9 + -1;
      Ram0001000100030210 = uVar6 | 0x80000000;
      do {
        iVar1 = Ram0002000000000030;
      } while (iVar1 != 0);
      Ram00020000000000d0 = uVar2 | 1;
      lVar10 = lVar10 + uVar8;
    } while (iVar9 != 0);
    lVar11 = (iVar5 - 2) * uVar8 + lVar11 + uVar8;
  }
  Ram0001000100030200 = 0;
  Ram0001000100030204 = 0;
  Ram0001000100030208 = (int)lVar11;
  Ram000100010003020c = (int)((ulong)lVar11 >> 0x20);
  Ram00010001000301e0 = uVar4;
  Ram0001000100030210 = uVar6;
  do {
    iVar9 = Ram0002000000000030;
  } while (iVar9 != 0);
  FUN_00024168();
  return;
}


/* ---- pm4_ATOMIC_GDS_handler @ 00027e08 size=1420 ---- */

void pm4_ATOMIC_GDS_handler(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000070;
  uVar10 = Ram0002000000000038;
  uVar10 = uVar10 >> 1;
  uVar14 = Ram00020000000006f8;
  if (uVar10 == 0) {
    Ram0002000000000148 = 1;
  }
  uVar9 = Ram00020000000006f8;
  Ram0001000100031028 = uVar9;
  uVar9 = Ram00020000000006f8;
  Ram0001000100031030 = uVar9;
  uVar9 = Ram00020000000006f8;
  Ram0001000100031034 = uVar9;
  uVar15 = Ram00020000000006f8;
  Ram0001000100031044 = uVar14 & 0xff;
  Ram000100010003103c = uVar15 >> 0x10 & 0xff;
  Ram0001000100031038 = uVar15 & 0xff;
  uVar9 = Ram00020000000006f8;
  Ram0001000100031040 = uVar9;
  iVar8 = Ram00020000000006f8;
  uVar9 = Ram00020000000006f8;
  uVar16 = uVar14 >> 0x13 & 1;
  uVar15 = uVar14 >> 0x14 & 1;
  if ((uVar14 & 0x9e) == 0x10) {
    iVar17 = Ram00020000000006f8;
    Ram0001000100031050 = iVar8;
    Ram0001000100031054 = uVar9;
    uVar2 = Ram00020000000006f8;
    Ram000100010003104c = uVar2;
  }
  else {
    uVar2 = Ram00020000000006f8;
    Ram0001000100031050 = uVar2;
    uVar2 = Ram00020000000006f8;
    Ram0001000100031054 = uVar2;
    Ram000100010003104c = uVar9;
    iVar17 = iVar8;
  }
  Ram0001000100031048 = iVar17;
  if ((uVar14 & 0x40000) != 0) {
    lVar11 = (long)(int)(uVar1 >> 4) << 0x24;
    bVar12 = false;
    bVar13 = bVar12;
    if (uVar15 == 0) goto LAB_00027f58;
    do {
      uVar4 = Ram000100010003105c;
      uVar2 = Ram0001000100031058;
      if (uVar16 == 0) {
        *(undefined4 *)(lVar11 + 0x108080000c894) = uVar2;
        *(undefined4 *)(lVar11 + 0x108080000c898) = uVar4;
      }
      else {
        uVar6 = Ram0001000100031064;
        uVar5 = Ram0001000100031060;
        *(undefined4 *)(lVar11 + 0x108080000c894) = uVar2;
        *(undefined4 *)(lVar11 + 0x108080000c898) = uVar4;
        *(undefined4 *)(lVar11 + 0x108080000c89c) = uVar5;
        *(undefined4 *)(lVar11 + 0x108080000c8a0) = uVar6;
      }
      if ((uVar14 & 0x10000) == 0) goto LAB_0002802c;
      if (uVar10 != 0) {
        uVar1 = Ram0002000000000190;
        lVar11 = (long)(int)(uVar1 >> 4) << 0x24;
        uVar1 = *(uint *)(lVar11 + 0x108080000c87c);
        uVar10 = (ulong)(int)uVar1;
        if (CONCAT44(uVar4,uVar2) == CONCAT44(uVar9,iVar8)) {
          uVar14 = Ram0002000000000188;
          iVar8 = Ram0002000000000068;
          if ((((ulong)uVar14 & 3) == (long)iVar8) &&
             (uVar14 = Ram00020000000004f0, (uVar14 & 8) != 0)) {
            Ram0002000000000150 = 0;
          }
          Ram00020000000005e8 = 0;
          uVar14 = uVar1 >> 0x10 & 0x3f;
          if ((uVar10 & 0x3000) == 0) {
            uVar15 = 2 << ((long)*(int *)(lVar11 + 0x108080000c868) & 0x1fU);
            uVar14 = uVar14 + *(int *)(lVar11 + 0x108080000c84c);
            if (uVar15 <= uVar14) {
              uVar14 = uVar14 - uVar15;
            }
            *(uint *)(lVar11 + 0x108080000c84c) = uVar14;
          }
          else {
            *(uint *)(lVar11 + 0x108080000c874) =
                 *(uint *)(lVar11 + 0x108080000c874) & 0xfff00000 |
                 (*(uint *)(lVar11 + 0x108080000c874) & 0xfffff) + uVar14 & 0xfffff;
            *(uint *)(lVar11 + 0x108080000c878) =
                 *(uint *)(lVar11 + 0x108080000c878) & 0xfff00000 |
                 (*(uint *)(lVar11 + 0x108080000c878) & 0xfffff) - uVar14 & 0xfffff;
          }
LAB_00028230:
          *(undefined4 *)(lVar11 + 0x108080000c884) = 0x200;
          *(uint *)(lVar11 + 0x108080000c87c) =
               (uint)((uVar10 << 0x28) >> 0x28) | uVar1 & 0x3f000000;
        }
        else {
          uVar14 = Ram00020000000000e8;
LAB_00028150:
          *(uint *)(lVar11 + 0x108080000c87c) = uVar1 & 0xffffff00 | uVar14 >> 0x10 & 0xff;
          *(undefined4 *)(lVar11 + 0x108080000c884) = 0x200;
        }
        goto LAB_00028030;
      }
      if (CONCAT44(uVar4,uVar2) == CONCAT44(uVar9,iVar8)) goto LAB_0002802c;
      if (bVar12) goto LAB_00028084;
      while( true ) {
        Ram0001000100031048 = iVar17;
        bVar12 = true;
        bVar13 = true;
        if (uVar15 != 0) break;
LAB_00027f58:
        iVar3 = Ram0001000100031058;
        if (uVar16 == 0) {
          *(int *)(lVar11 + 0x108080000c894) = iVar3;
        }
        else {
          uVar2 = Ram0001000100031060;
          *(int *)(lVar11 + 0x108080000c894) = iVar3;
          *(undefined4 *)(lVar11 + 0x108080000c89c) = uVar2;
        }
        if ((uVar14 & 0x10000) == 0) goto LAB_0002802c;
        if (uVar10 != 0) {
          uVar1 = Ram0002000000000190;
          lVar11 = (long)(int)(uVar1 >> 4) << 0x24;
          uVar1 = *(uint *)(lVar11 + 0x108080000c87c);
          uVar10 = (ulong)(int)uVar1;
          if (iVar8 != iVar3) {
            uVar14 = Ram00020000000000e8;
            goto LAB_00028150;
          }
          uVar14 = Ram0002000000000188;
          iVar8 = Ram0002000000000068;
          if ((((ulong)uVar14 & 3) == (long)iVar8) &&
             (uVar14 = Ram00020000000004f0, (uVar14 & 8) != 0)) {
            Ram0002000000000150 = 0;
          }
          Ram00020000000005e8 = 0;
          uVar14 = uVar1 >> 0x10 & 0x3f;
          if ((uVar10 & 0x3000) == 0) {
            uVar15 = 2 << ((long)*(int *)(lVar11 + 0x108080000c868) & 0x1fU);
            uVar14 = uVar14 + *(int *)(lVar11 + 0x108080000c84c);
            if (uVar15 <= uVar14) {
              uVar14 = uVar14 - uVar15;
            }
            *(uint *)(lVar11 + 0x108080000c84c) = uVar14;
          }
          else {
            *(uint *)(lVar11 + 0x108080000c874) =
                 *(uint *)(lVar11 + 0x108080000c874) & 0xfff00000 |
                 (*(uint *)(lVar11 + 0x108080000c874) & 0xfffff) + uVar14 & 0xfffff;
            *(uint *)(lVar11 + 0x108080000c878) =
                 *(uint *)(lVar11 + 0x108080000c878) & 0xfff00000 |
                 (*(uint *)(lVar11 + 0x108080000c878) & 0xfffff) - uVar14 & 0xfffff;
          }
          goto LAB_00028230;
        }
        if (iVar8 == iVar3) goto LAB_0002802c;
        if (bVar13) {
          lVar7 = Ram0002000000000038;
          uVar1 = Ram00020000000000e8;
          if (lVar7 == 0) {
            uVar14 = *(uint *)(lVar11 + 0x108080000c868);
          }
          else {
            uVar14 = *(uint *)(lVar11 + 0x108080000c878);
          }
          *(uint *)(lVar11 + 0x108080000c87c) =
               ((uint)lVar7 & 3) << 0xc | 0x800b0100 | uVar14 & 0x3800000 | uVar1 >> 8 & 0xff;
          uVar1 = *(uint *)(lVar11 + 0x108080002e088);
          goto joined_r0x00028108;
        }
      }
    } while( true );
  }
  if ((uVar14 & 0x20000) != 0) {
    do {
      uVar1 = Ram000100010003102c;
    } while ((uVar1 & 1) == 0);
  }
LAB_0002802c:
  Ram0002000000000150 = 0;
LAB_00028030:
  FUN_00024168();
  return;
LAB_00028084:
  lVar7 = Ram0002000000000038;
  uVar1 = Ram00020000000000e8;
  if (lVar7 == 0) {
    uVar14 = *(uint *)(lVar11 + 0x108080000c868);
  }
  else {
    uVar14 = *(uint *)(lVar11 + 0x108080000c878);
  }
  *(uint *)(lVar11 + 0x108080000c87c) =
       ((uint)lVar7 & 3) << 0xc | 0x800b0100 | uVar14 & 0x3800000 | uVar1 >> 8 & 0xff;
  uVar1 = *(uint *)(lVar11 + 0x108080002e088);
joined_r0x00028108:
  if ((((ulong)(long)(int)uVar1 >> 8 & 0xff) == 0) && ((uVar1 >> 0x1c & 1) != 0)) {
    Ram00020000000005e8 = 3;
  }
  else {
    FUN_00024960();
  }
  goto LAB_00028030;
}


/* ---- pm4_ATOMIC_MEM_handler @ 000284b0 size=912 ---- */

void pm4_ATOMIC_MEM_handler(void)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000070;
  uVar2 = Ram0002000000000038;
  uVar10 = Ram00020000000006f8;
  if (uVar2 >> 1 == 0) {
    Ram0002000000000148 = 1;
  }
  uVar3 = Ram00020000000006f8;
  lVar13 = Ram00020000000006f8;
  uVar9 = Ram00020000000006f8;
  lVar12 = Ram00020000000006f8;
  uVar14 = Ram00020000000006f8;
  lVar7 = Ram00020000000006f8;
  uVar14 = lVar7 << 0x20 | uVar14;
  Ram0002000000000390 = lVar13 << 0x20 | uVar3;
  uVar5 = Ram0002000000000390;
  uVar11 = uVar10 & 0x7f;
  if ((uVar10 & 0x7f) == 0) {
    uVar11 = 0x6f;
    uVar9 = 0;
  }
  else {
    uVar9 = lVar12 << 0x20 | uVar9;
  }
  uVar6 = Ram00020000000006f8;
  uVar8 = uVar10 >> 8 & 0xf;
  Ram00020000000000d8 = uVar11 | uVar10 >> 0x12 & 0x180;
  Ram00020000000000e8 = uVar5;
  Ram00020000000000f8 = uVar9;
  Ram0002000000000100 = uVar14;
  Ram0002000000000380 = 0x600000001;
  Ram0002000000000108 = 1;
  if (uVar8 == 2) {
    do {
      lVar13 = Ram0002000000000320;
    } while (lVar13 != 0);
  }
  else if (uVar8 == 1) {
    lVar13 = (long)(int)((uint)(((ulong)uVar6 << 0x33) >> 0x33) << 6) + 2;
    while( true ) {
      do {
        lVar12 = Ram0002000000000078;
      } while (lVar12 != 0);
      uVar3 = Ram0002000000000080;
      if (uVar3 == uVar14) break;
      uVar3 = Ram0002000000000038;
      if (uVar3 >> 1 != 0) {
        uVar1 = Ram0002000000000190;
        lVar13 = (long)(int)(uVar1 >> 4) << 0x24;
        uVar1 = Ram00020000000000e8;
        *(uint *)(lVar13 + 0x108080000c87c) =
             *(uint *)(lVar13 + 0x108080000c87c) & 0xffffff00 | uVar1 >> 8 & 0x7f;
        *(undefined4 *)(lVar13 + 0x108080000c884) = 0x200;
        return;
      }
      if (lVar13 == 0) {
        uVar1 = Ram0002000000000070;
        lVar13 = Ram0002000000000038;
        uVar10 = Ram00020000000000e8;
        lVar12 = (long)(int)(uVar1 >> 4) << 0x24;
        if (lVar13 == 0) {
          uVar1 = *(uint *)(lVar12 + 0x108080000c868);
        }
        else {
          uVar1 = *(uint *)(lVar12 + 0x108080000c878);
        }
        *(uint *)(lVar12 + 0x108080000c87c) =
             ((uint)lVar13 & 3) << 0xc | 0x80090100 | uVar1 & 0x3800000 | uVar10 >> 8 & 0x7f;
        if ((((ulong)(long)(int)*(uint *)(lVar12 + 0x108080002e088) >> 8 & 0xff) == 0) &&
           ((*(uint *)(lVar12 + 0x108080002e088) >> 0x1c & 1) != 0)) {
          Ram00020000000005e8 = 3;
          return;
        }
        FUN_00024960();
        return;
      }
      do {
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      Ram0002000000000108 = 1;
    }
  }
  else {
    do {
      lVar13 = Ram0002000000000078;
    } while (lVar13 != 0);
  }
  Ram0002000000000150 = 0;
  if ((uVar10 & 0xe00) == 0) {
    uVar5 = Ram0002000000000080;
    lVar13 = (long)(int)(uVar1 >> 4) << 0x24;
    *(int *)(lVar13 + 0x108080000c894) = (int)uVar5;
    *(int *)(lVar13 + 0x108080000c898) = (int)((ulong)uVar5 >> 0x20);
    if ((uVar2 >> 1 != 0) && ((uVar10 & 0xf00) == 0x100)) {
      uVar1 = *(uint *)(lVar13 + 0x108080000c87c);
      uVar10 = Ram0002000000000188;
      iVar4 = Ram0002000000000068;
      if ((((ulong)uVar10 & 3) == (long)iVar4) && (uVar10 = Ram00020000000004f0, (uVar10 & 8) != 0))
      {
        Ram0002000000000150 = 0;
      }
      Ram00020000000005e8 = 0;
      uVar10 = uVar1 >> 0x10 & 0x3f;
      if (((long)(int)uVar1 & 0x3000U) == 0) {
        uVar11 = 2 << ((long)*(int *)(lVar13 + 0x108080000c868) & 0x1fU);
        uVar10 = uVar10 + *(int *)(lVar13 + 0x108080000c84c);
        if (uVar11 <= uVar10) {
          uVar10 = uVar10 - uVar11;
        }
        *(uint *)(lVar13 + 0x108080000c84c) = uVar10;
      }
      else {
        *(uint *)(lVar13 + 0x108080000c874) =
             *(uint *)(lVar13 + 0x108080000c874) & 0xfff00000 |
             (*(uint *)(lVar13 + 0x108080000c874) & 0xfffff) + uVar10 & 0xfffff;
        *(uint *)(lVar13 + 0x108080000c878) =
             *(uint *)(lVar13 + 0x108080000c878) & 0xfff00000 |
             (*(uint *)(lVar13 + 0x108080000c878) & 0xfffff) - uVar10 & 0xfffff;
      }
      *(undefined4 *)(lVar13 + 0x108080000c884) = 0x200;
      *(uint *)(lVar13 + 0x108080000c87c) =
           (uint)((ulong)((long)(int)uVar1 << 0x28) >> 0x28) | uVar1 & 0x3f000000;
    }
  }
  return;
}


/* ---- pm4_SCRATCH_RAM_WRITE_handler @ 00028730 size=4 ---- */

void pm4_SCRATCH_RAM_WRITE_handler(void)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  return;
}


/* ---- pm4_SCRATCH_RAM_READ_handler @ 00028738 size=4 ---- */

void pm4_SCRATCH_RAM_READ_handler(void)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  return;
}


/* ---- pm4_PRIME_UTCL2_handler @ 00028740 size=144 ---- */

void pm4_PRIME_UTCL2_handler(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0002000000000388 = 0;
  lVar6 = 1;
  do {
    uVar1 = Ram00020000000006f8;
    uVar4 = Ram00020000000006f8;
    lVar5 = Ram00020000000006f8;
    Ram0002000000000390 = lVar5 << 0x20 | uVar4;
    uVar2 = Ram0002000000000390;
    Ram0002000000000120 = 0;
    Ram0002000000000128 = uVar2;
    iVar3 = Ram00020000000006f8;
    Ram00020000000006c0 = ((long)(int)(uVar1 << 1) | 1U) << 0x20 | (ulong)(uint)(iVar3 << 10);
    uVar1 = uVar1 & 8;
    while ((uVar1 != 0 && (iVar3 = Ram00020000000006c0, iVar3 != 0))) {
      uVar1 = Ram00020000000006c0;
    }
    lVar6 = lVar6 + 4;
  } while (lVar6 < (int)((uint)((ulong)(param_1 << 0x22) >> 0x32) + 2));
  FUN_00024168();
  return;
}


/* ---- sub_287d8 @ 000287d8 size=4 ---- */

void sub_287d8(void)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  return;
}


/* ---- pm4_COND_WRITE_handler @ 000287e0 size=348 ---- */

void pm4_COND_WRITE_handler(void)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  int *piVar11;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar4 = Ram00020000000006f8;
  uVar10 = Ram00020000000006f8;
  uVar1 = Ram00020000000006f8;
  uVar5 = Ram00020000000006f8;
  uVar6 = Ram00020000000006f8;
  if ((uVar4 & 0x10) == 0) {
    uVar1 = Ram0002000000000020;
    Ram0002000000000040 = 1;
    uVar10 = *(uint *)((((ulong)uVar10 << 0x20) >> 0x1e) + 0x1000100000000);
    Ram0002000000000040 = uVar1;
  }
  else {
    Ram0002000000000390 = CONCAT44(uVar1,uVar10);
    puVar3 = (uint *)Ram0002000000000390;
    uVar10 = *puVar3;
  }
  uVar10 = uVar10 & uVar6;
  switch(uVar4 & 7) {
  case 1:
    if (uVar5 <= uVar10) {
LAB_000288e4:
      uVar9 = Ram00020000000006f8;
      uVar9 = Ram00020000000006f8;
      uVar1 = Ram00020000000006f8;
      return;
    }
    break;
  case 2:
    if (uVar5 < uVar10) goto LAB_000288e4;
    break;
  case 3:
    if (uVar10 != uVar5) goto LAB_000288e4;
    break;
  case 4:
    if (uVar10 == uVar5) goto LAB_000288e4;
    break;
  case 5:
    if (uVar10 < uVar5) goto LAB_000288e4;
    break;
  case 6:
    if (uVar10 <= uVar5) goto LAB_000288e4;
  }
  uVar7 = Ram00020000000006f8;
  lVar8 = Ram00020000000006f8;
  iVar2 = Ram00020000000006f8;
  if ((uVar4 & 0x300) == 0) {
    piVar11 = (int *)(((uVar7 << 0x20) >> 0x1e) + 0x1000100000000);
    *piVar11 = iVar2;
    if ((uVar4 & 0x100000) != 0) {
      do {
      } while (iVar2 != *piVar11);
      return;
    }
  }
  else if ((uVar4 & 0x300) == 0x100) {
    Ram0002000000000390 = lVar8 << 0x20 | uVar7;
    piVar11 = (int *)Ram0002000000000390;
    *piVar11 = iVar2;
    if ((uVar4 & 0x100000) != 0) {
      do {
        iVar2 = Ram0002000000000090;
      } while (iVar2 != 0);
      return;
    }
  }
  return;
}


/* ---- pm4_INVALIDATE_TLBS_handler @ 00028940 size=328 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pm4_INVALIDATE_TLBS_handler(void)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar4 = Ram00020000000006f8;
  if ((uVar4 & 7) != 0) {
    return;
  }
  uVar1 = Ram0002000000000070;
  uVar1 = *(uint *)(((long)(int)(uVar1 >> 4) << 0x24) + 0x108080000c830);
  lVar2 = Ram0002000000000038;
  if (lVar2 == 0) {
    Ram0002000000000198 = 5;
    do {
      uVar3 = Ram0002000000000048;
    } while ((uVar3 & 0x20) == 0);
    uVar1 = 1 << ((long)(int)uVar1 & 0xfU);
    _DAT_100010000a438 = _DAT_100010000a438 & 0xffff0000 | (uVar4 >> 0x1d) << 0x10 | uVar1;
    do {
    } while ((uVar1 & _DAT_100010000a480 & 0xffff) == 0);
    Ram00020000000001a0 = 5;
    Ram00020000000002a8 = 0;
  }
  else {
    Ram0002000000000198 = 5;
    do {
      uVar3 = Ram0002000000000048;
    } while ((uVar3 & 0x20) == 0);
    uVar1 = 1 << ((long)(int)(uVar1 >> 8) & 0xfU);
    _DAT_100010000a438 = _DAT_100010000a438 & 0xffff0000 | (uVar4 >> 0x1d) << 0x10 | uVar1;
    do {
    } while ((uVar1 & _DAT_100010000a480 & 0xffff) == 0);
    Ram00020000000001a0 = 5;
    Ram00020000000002a8 = 0;
  }
  _DAT_100010000a4d8 = 0x1f;
  _DAT_100010000a4d4 = 0xffffffff;
  return;
}


/* ---- pm4_HDP_FLUSH_handler @ 00028a88 size=92 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pm4_HDP_FLUSH_handler(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram00020000000006f8;
  uVar1 = Ram0002000000000020;
  Ram0002000000000040 = 1;
  uVar2 = Ram0002000000000070;
  _DAT_1000100003898 = 4 << ((long)(int)(uVar2 >> 6) & 3U | (long)(int)(uVar2 >> 3) & 4U);
  do {
  } while ((_DAT_1000100003898 & _DAT_100010000389c) == 0);
  _DAT_100010000389c = _DAT_1000100003898;
  Ram0002000000000040 = uVar1;
  Ram00020000000002a8 = 0;
  return;
}


/* ---- pm4_DISPATCH_DIRECT_handler @ 00028ae8 size=716 ---- */

void pm4_DISPATCH_DIRECT_handler(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000070;
  lVar6 = (long)(int)(uVar1 >> 4);
  Ram0002000000000148 = 1;
  Ram00020000000000a8 = 2;
  uVar4 = Ram00020000000006f8;
  Ram000100020000b804 = uVar4;
  uVar4 = Ram00020000000006f8;
  Ram000100020000b808 = uVar4;
  uVar4 = Ram00020000000006f8;
  Ram000100020000b80c = uVar4;
  uVar2 = Ram00020000000006f8;
  Ram000100020000b800 = uVar2 | 0x40;
  Ram00020000000000a8 = 0;
  lVar9 = (long)(int)(uVar1 >> 4) << 0x24;
  uVar1 = *(uint *)(lVar9 + 0x108080000c834);
  Ram00020000000007f8 = (uint)((uVar1 >> 0x1e & 1) == 0) & uVar2 >> 0x11;
  *(uint *)(lVar9 + 0x108080000c834) = uVar1 | 0x80000000;
  Ram0002000000000150 = 0;
LAB_00028b8c:
  iVar8 = Ram00020000000000d0;
  iVar3 = Ram00020000000007f8;
  if (iVar3 != 0) {
    if (iVar8 == 0) goto LAB_00028b8c;
  }
  uVar2 = Ram0002000000000108;
  iVar3 = Ram0002000000000140;
  if (iVar8 != 0) {
    lVar9 = lVar6 << 0x24;
    *(uint *)(lVar9 + 0x108080000c834) = (uint)((ulong)((long)(int)uVar1 << 0x21) >> 0x21);
    Ram00020000000000a8 = 2;
    Ram000100020000b9f8 = 0;
    Ram00020000000000a8 = 0;
    uVar1 = Ram00020000000002d0;
    if ((uVar1 & 1) != 0) {
      Ram0002000000000488 = 0x100;
      *(uint *)(lVar9 + 0x108080000c8f8) = *(uint *)(lVar9 + 0x108080000c8f8) & 0xfffffffb | 0x8000;
      FUN_000346b8(lVar6,(long)DAT_00101100,0,0);
    }
    goto LAB_00028be0;
  }
  iVar8 = Ram0002000000000180;
  lVar9 = Ram0002000000000038;
  if (uVar2 >> 0x10 == 0) {
    if (iVar3 == 0) {
      if (iVar8 != 0) {
        if (lVar9 == 0) {
          Ram0002000000000200 = 2;
        }
        else {
          Ram0002000000000200 = 3;
        }
        Ram0002000000000220 = 4;
        Ram0002000000000080 = 2;
        Ram00020000000003c0 = 0;
        uVar1 = Ram0002000000000190;
        Ram0002000000000220 = 0;
        uVar7 = uVar1 >> 8 & 7;
        Ram00020000000004d0 = uVar7;
        uVar2 = Ram00020000000004a0;
        if ((uVar2 & 4) == 0) {
          *(undefined4 *)(((long)(int)(uVar1 >> 4) << 0x24) + 0x108080000c87c) = 0x60000000;
        }
        else {
          Ram00020000000004d8 = uVar7;
          lVar6 = (long)(int)(uVar1 >> 4) << 0x24;
          do {
          } while ((*(uint *)(lVar6 + 0x108080002e088) & 0x40000) != 0);
          iVar8 = 0x10;
          do {
            Ram00020000000003c0 = 0;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          uVar1 = Ram0002000000000498;
          uVar10 = (ulong)uVar1 & 0x3f;
          Ram00020000000004e8 = (int)uVar10;
          Ram0002000000000070 = (int)uVar10;
          do {
            uVar4 = Ram00020000000006f8;
            Ram00020000000003c0 = uVar4;
            uVar10 = (ulong)((int)uVar10 + -1);
          } while (uVar10 != 0);
          *(uint *)(lVar6 + 0x108080000c87c) = *(uint *)(lVar6 + 0x108080000c87c) | 0x10000000;
          *(undefined4 *)(lVar6 + 0x108080000c884) = 0x200;
        }
LAB_00028be0:
        FUN_00024168();
        return;
      }
    }
    else {
      if (lVar9 == 0) {
        Ram00020000000001f8 = 2;
      }
      else {
        Ram00020000000001f8 = 3;
      }
      lVar9 = FUN_000243e0();
      if (lVar9 != 0) goto LAB_00028be0;
    }
  }
  else {
    Ram00020000000001b8 = uVar2;
    FUN_00003450((long)(int)uVar2);
    cVar5 = DAT_00101086;
    DAT_00101086 = '\0';
    if (cVar5 != '\0') {
      FUN_00024570(lVar6);
      FUN_00024168();
      return;
    }
    uVar2 = Ram0002000000000070;
    lVar9 = (long)(int)(uVar2 >> 4) << 0x24;
    lVar6 = (long)(int)(uVar2 >> 4);
    *(uint *)(lVar9 + 0x108080000c834) = *(uint *)(lVar9 + 0x108080000c834) | 0x80000000;
  }
  goto LAB_00028b8c;
}


/* ---- pm4_DISPATCH_INDIRECT_handler @ 00028dc0 size=748 ---- */

void pm4_DISPATCH_INDIRECT_handler(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  char cVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000070;
  lVar7 = (long)(int)(uVar1 >> 4);
  Ram0002000000000148 = 1;
  uVar11 = Ram00020000000006f8;
  lVar10 = Ram00020000000006f8;
  Ram0002000000000390 = lVar10 << 0x20 | uVar11;
  puVar4 = (undefined8 *)Ram0002000000000390;
  uVar2 = Ram00020000000006f8;
  Ram00020000000000a8 = 2;
  Ram000100020000b804 = (int)*puVar4;
  Ram000100020000b808 = (int)((ulong)*puVar4 >> 0x20);
  Ram000100020000b80c = *(undefined4 *)(puVar4 + 1);
  Ram000100020000b800 = uVar2 | 0x40;
  Ram00020000000000a8 = 0;
  lVar10 = (long)(int)(uVar1 >> 4) << 0x24;
  uVar1 = *(uint *)(lVar10 + 0x108080000c834);
  Ram00020000000007f8 = (uint)((uVar1 >> 0x1e & 1) == 0) & uVar2 >> 0x11;
  *(uint *)(lVar10 + 0x108080000c834) = uVar1 | 0x80000000;
  Ram0002000000000150 = 0;
LAB_00028e84:
  iVar9 = Ram00020000000000d0;
  iVar3 = Ram00020000000007f8;
  if (iVar3 != 0) {
    if (iVar9 == 0) goto LAB_00028e84;
  }
  uVar2 = Ram0002000000000108;
  iVar3 = Ram0002000000000140;
  if (iVar9 != 0) {
    lVar10 = lVar7 << 0x24;
    *(uint *)(lVar10 + 0x108080000c834) = (uint)((ulong)((long)(int)uVar1 << 0x21) >> 0x21);
    Ram00020000000000a8 = 2;
    Ram000100020000b9f8 = 0;
    Ram00020000000000a8 = 0;
    uVar1 = Ram00020000000002d0;
    if ((uVar1 & 1) != 0) {
      Ram0002000000000488 = 0x100;
      *(uint *)(lVar10 + 0x108080000c8f8) =
           *(uint *)(lVar10 + 0x108080000c8f8) & 0xfffffffb | 0x8000;
      FUN_000346b8(lVar7,(long)DAT_00101100,0,0);
    }
    goto LAB_00028ed8;
  }
  iVar9 = Ram0002000000000180;
  lVar10 = Ram0002000000000038;
  if (uVar2 >> 0x10 == 0) {
    if (iVar3 == 0) {
      if (iVar9 != 0) {
        if (lVar10 == 0) {
          Ram0002000000000200 = 2;
        }
        else {
          Ram0002000000000200 = 3;
        }
        Ram0002000000000220 = 4;
        Ram0002000000000080 = 2;
        Ram00020000000003c0 = 0;
        uVar1 = Ram0002000000000190;
        Ram0002000000000220 = 0;
        uVar8 = uVar1 >> 8 & 7;
        Ram00020000000004d0 = uVar8;
        uVar2 = Ram00020000000004a0;
        if ((uVar2 & 4) == 0) {
          *(undefined4 *)(((long)(int)(uVar1 >> 4) << 0x24) + 0x108080000c87c) = 0x60000000;
        }
        else {
          Ram00020000000004d8 = uVar8;
          lVar10 = (long)(int)(uVar1 >> 4) << 0x24;
          do {
          } while ((*(uint *)(lVar10 + 0x108080002e088) & 0x40000) != 0);
          iVar9 = 0x10;
          do {
            Ram00020000000003c0 = 0;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
          uVar1 = Ram0002000000000498;
          uVar11 = (ulong)uVar1 & 0x3f;
          Ram00020000000004e8 = (int)uVar11;
          Ram0002000000000070 = (int)uVar11;
          do {
            uVar5 = Ram00020000000006f8;
            Ram00020000000003c0 = uVar5;
            uVar11 = (ulong)((int)uVar11 + -1);
          } while (uVar11 != 0);
          *(uint *)(lVar10 + 0x108080000c87c) = *(uint *)(lVar10 + 0x108080000c87c) | 0x10000000;
          *(undefined4 *)(lVar10 + 0x108080000c884) = 0x200;
        }
LAB_00028ed8:
        FUN_00024168();
        return;
      }
    }
    else {
      if (lVar10 == 0) {
        Ram00020000000001f8 = 2;
      }
      else {
        Ram00020000000001f8 = 3;
      }
      lVar10 = FUN_000243e0();
      if (lVar10 != 0) goto LAB_00028ed8;
    }
  }
  else {
    Ram00020000000001b8 = uVar2;
    FUN_00003450((long)(int)uVar2);
    cVar6 = DAT_00101086;
    DAT_00101086 = '\0';
    if (cVar6 != '\0') {
      FUN_00024570(lVar7);
      FUN_00024168();
      return;
    }
    uVar2 = Ram0002000000000070;
    lVar10 = (long)(int)(uVar2 >> 4) << 0x24;
    lVar7 = (long)(int)(uVar2 >> 4);
    *(uint *)(lVar10 + 0x108080000c834) = *(uint *)(lVar10 + 0x108080000c834) | 0x80000000;
  }
  goto LAB_00028e84;
}


/* ---- pm4_OP_A9_handler @ 000290b8 size=112 ---- */

void pm4_OP_A9_handler(void)

{
  uint *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar3 = Ram00020000000006f8;
  lVar4 = Ram00020000000006f8;
  Ram0002000000000390 = lVar4 << 0x20 | uVar3;
  puVar1 = (uint *)Ram0002000000000390;
  Ram0002000000000390 = *(undefined8 *)(puVar1 + 7);
  uVar2 = Ram0002000000000390;
  Ram0002000000000788 = puVar1;
  Ram0002000000000790 = (ulong)*puVar1;
  Ram0002000000000798 = (ulong)puVar1[6];
  Ram00020000000007a0 = uVar2;
  Ram00020000000007a8 = 0;
  FUN_00024168();
  return;
}


/* ---- pm4_OP_AD_handler @ 00029130 size=3136 ---- */

/* WARNING: Removing unreachable block (ram,0x000294e8) */
/* WARNING: Removing unreachable block (ram,0x000294b4) */
/* WARNING: Removing unreachable block (ram,0x000294d8) */
/* WARNING: Removing unreachable block (ram,0x00029538) */

void pm4_OP_AD_handler(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  uint *puVar21;
  long lVar22;
  ulong uVar23;
  undefined4 uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  ulong uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  ulong in_dscratch0;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  iVar14 = Ram0002000000000790;
  uVar28 = (ulong)iVar14;
  if (0xfffffffff000ffff < uVar28) {
    uVar28 = (ulong)(iVar14 + 0x10000000);
  }
  uVar23 = Ram00020000000006f8;
  lVar13 = Ram00020000000006f8;
  uVar23 = lVar13 << 0x20 | uVar23;
  uVar29 = Ram00020000000006f8;
  uVar19 = Ram00020000000006f8;
  uVar25 = Ram00020000000006f8;
  uVar5 = Ram00020000000006f8;
  uVar17 = Ram00020000000006f8;
  lVar13 = Ram00020000000006f8;
  if ((uVar19 & 2) != 0) {
    Ram0002000000000390 = lVar13 << 0x20 | uVar17;
    puVar20 = (uint *)Ram0002000000000390;
    if (*puVar20 < uVar5) {
      uVar5 = *puVar20;
    }
  }
  uVar6 = Ram00020000000006f8;
  uVar1 = Ram00020000000006f8;
  Ram00020000000000a8 = 2;
  if (uVar5 != 0) {
    uVar25 = uVar25 & 0xffff;
    uVar1 = uVar1 | 0x40;
    puVar20 = (uint *)(((ulong)((long)(int)((uVar19 >> 0x10) + 0x2c00) << 0x20) >> 0x1e) +
                      0x1000200000000);
    uVar17 = (ulong)((long)(int)((uVar29 & 0xffff) + 0x2c00) << 0x20) >> 0x1e;
    puVar21 = (uint *)(((ulong)((long)(int)(uVar25 + 0x2c01) << 0x20) >> 0x1e) + 0x1000200000000);
    uVar29 = 0;
    bVar11 = false;
LAB_0002927c:
    do {
      Ram0002000000000390 = uVar23;
      puVar4 = (uint *)Ram0002000000000390;
      uVar9 = *puVar4;
      uVar18 = puVar4[1];
      uVar10 = puVar4[2];
      uVar16 = (ulong)(int)uVar9;
      if (uVar10 != 0) {
        uVar32 = uVar19 & 4;
        uVar31 = uVar19 & 8;
        uVar24 = (undefined4)uVar28;
        if ((uVar19 & 1) == 0) {
          iVar14 = (uint)(uVar16 == 0 || uVar18 == 0) * 2 + (uint)((uVar18 | uVar10) == 1);
          if (iVar14 == 1) {
            *(undefined4 *)(uVar17 + 0x1000200000000) = uVar24;
            if (uVar32 != 0) {
              *puVar20 = uVar29;
            }
            if (uVar31 != 0) {
              *(uint *)(((ulong)((long)(int)(uVar25 + 0x2c00) << 0x20) >> 0x1e) + 0x1000200000000) =
                   uVar9;
              *puVar21 = uVar18;
              *(uint *)(((ulong)((long)(int)(uVar25 + 0x2c02) << 0x20) >> 0x1e) + 0x1000200000000) =
                   uVar10;
            }
            iVar2 = Ram0002000000000798;
            lVar13 = Ram00020000000007a0;
            uVar16 = uVar16 & 0xffff;
            iVar14 = 0;
            bVar11 = true;
            iVar26 = Ram0002000000000488;
            if (iVar26 == 0) goto LAB_00029784;
            do {
              uVar18 = Ram0002000000000070;
              do {
              } while ((*(uint *)(((long)(int)(uVar18 >> 4) << 0x24) + 0x108080000c884) & 0xf) == 0)
              ;
              uVar12 = 0;
              if (bVar11) goto LAB_000297ac;
              while( true ) {
                do {
                  iVar26 = Ram00020000000000d0;
                } while (iVar26 == 0);
                Ram000100020000b810 = iVar14;
                Ram000100020000b814 = 0;
                Ram000100020000b818 = 0;
                Ram000100020000b808 = 1;
                Ram000100020000b80c = 1;
                iVar26 = (int)uVar28;
                if (iVar14 == 0) {
                  if (uVar16 <= uVar12) {
                    Ram000100020000b804 = uVar9 & 0xffff;
                    uVar28 = (ulong)(int)((uVar9 & 0xffff) + iVar26);
                    Ram000100020000b800 = uVar1;
                    goto joined_r0x00029c74;
                  }
                }
                else {
                  iVar3 = (uVar9 & 0xffff) - iVar14;
                  if ((ulong)(long)iVar3 <= uVar12) {
                    Ram000100020000b804 = uVar9 & 0xffff;
                    Ram000100020000b800 = uVar1;
                    uVar28 = (ulong)(iVar3 + iVar26);
                    bVar11 = true;
                    goto joined_r0x00029a60;
                  }
                }
                iVar14 = iVar14 + (int)uVar12;
                Ram000100020000b804 = iVar14;
                Ram000100020000b800 = uVar1;
                uVar28 = (ulong)((int)uVar12 + iVar26);
                bVar11 = false;
                iVar26 = Ram0002000000000488;
                if (iVar26 != 0) break;
LAB_00029784:
                lVar22 = Ram0002000000000788;
                do {
                  uVar18 = *(uint *)(lVar22 + 0x10);
                  if ((int)uVar28 + 0x10000U < uVar18) {
                    uVar18 = uVar18 + 0x10000000;
                  }
                  uVar12 = (ulong)(int)((iVar2 - (int)uVar28) + uVar18);
                } while (uVar12 == 0);
                if (bVar11) {
LAB_000297ac:
                  lVar22 = lVar13 + (((uVar28 & (long)(iVar2 + -1)) << 0x20) >> 0x1c);
                  *(char *)(lVar22 + 0xd) = (char)(uVar16 << 1);
                  *(short *)(lVar22 + 0xe) = (short)(uVar16 >> 7);
                  do {
                    iVar26 = Ram0002000000000090;
                  } while (iVar26 != 0);
                }
              }
            } while( true );
          }
          if (1 < iVar14 - 2U) {
            *(undefined4 *)(uVar17 + 0x1000200000000) = uVar24;
            if (uVar32 != 0) {
              *puVar20 = uVar29;
            }
            if (uVar31 != 0) {
              *(uint *)(((ulong)((long)(int)(uVar25 + 0x2c00) << 0x20) >> 0x1e) + 0x1000200000000) =
                   uVar9;
              *puVar21 = uVar18;
              *(uint *)(((ulong)((long)(int)(uVar25 + 0x2c02) << 0x20) >> 0x1e) + 0x1000200000000) =
                   uVar10;
            }
            iVar3 = Ram0002000000000798;
            lVar13 = Ram00020000000007a0;
            uVar18 = uVar18 & 0xffff;
            iVar15 = (int)(uVar16 & 0xffff);
            uVar10 = uVar10 & 0xffff;
            uVar7 = 0;
            uVar32 = 0;
            iVar14 = 0;
            bVar11 = true;
            iVar26 = iVar15 * uVar18 * uVar10 * 2;
            iVar2 = Ram0002000000000488;
            uVar9 = 1;
            uVar31 = 1;
            do {
              iVar27 = (int)uVar28;
              if (iVar2 == 0) {
                lVar22 = Ram0002000000000788;
                do {
                  uVar30 = *(uint *)(lVar22 + 0x10);
                  if (iVar27 + 0x10000U < uVar30) {
                    uVar30 = uVar30 + 0x10000000;
                  }
                  uVar12 = (ulong)(int)((iVar3 - iVar27) + uVar30);
                } while (uVar12 == 0);
              }
              else {
                uVar30 = Ram0002000000000070;
                do {
                } while ((*(uint *)(((long)(int)(uVar30 >> 4) << 0x24) + 0x108080000c884) & 0xf) ==
                         0);
                uVar12 = 0;
              }
              if (bVar11) {
                lVar22 = lVar13 + (((uVar28 & (long)(iVar3 + -1)) << 0x20) >> 0x1c);
                *(char *)(lVar22 + 0xd) = (char)iVar26;
                *(short *)(lVar22 + 0xe) = (short)((uint)iVar26 >> 8);
                do {
                  iVar2 = Ram0002000000000090;
                } while (iVar2 != 0);
              }
              do {
                iVar2 = Ram00020000000000d0;
              } while (iVar2 == 0);
              Ram000100020000b810 = iVar14;
              Ram000100020000b814 = uVar32;
              Ram000100020000b818 = uVar7;
              Ram000100020000b808 = uVar9;
              Ram000100020000b80c = uVar31;
              uVar30 = uVar31;
              if (iVar14 == 0) {
                if ((uVar16 & 0xffff) <= uVar12) {
                  Ram000100020000b804 = iVar15;
                  Ram000100020000b800 = uVar1;
                  iVar2 = iVar15;
                  goto LAB_000299f0;
                }
LAB_0002992c:
                iVar14 = iVar14 + (int)uVar12;
                Ram000100020000b804 = iVar14;
                Ram000100020000b800 = uVar1;
                uVar28 = (ulong)((int)uVar12 + iVar27);
                uVar8 = uVar9;
                if ((uVar18 <= uVar32) && (uVar10 <= uVar7)) goto joined_r0x00029c74;
              }
              else {
                iVar2 = iVar15 - iVar14;
                if (uVar12 < (ulong)(long)iVar2) goto LAB_0002992c;
                Ram000100020000b804 = iVar15;
                Ram000100020000b800 = uVar1;
LAB_000299f0:
                uVar28 = (ulong)(iVar2 + iVar27);
                if (uVar9 < uVar18) {
                  iVar14 = 0;
                  uVar8 = uVar9 + 1;
                  uVar32 = uVar9;
                }
                else {
                  if (uVar10 <= uVar31) goto joined_r0x00029c74;
                  iVar14 = 0;
                  uVar8 = 1;
                  uVar30 = uVar31 + 1;
                  uVar32 = 0;
                  uVar7 = uVar31;
                }
              }
              bVar11 = false;
              iVar2 = Ram0002000000000488;
              uVar9 = uVar8;
              uVar31 = uVar30;
            } while( true );
          }
        }
        else if (uVar16 != 0 && uVar18 != 0) {
          *(undefined4 *)(uVar17 + 0x1000200000000) = uVar24;
          if (uVar32 != 0) {
            *puVar20 = uVar29;
          }
          if (uVar31 != 0) {
            *(uint *)(((ulong)((long)(int)(uVar25 + 0x2c00) << 0x20) >> 0x1e) + 0x1000200000000) =
                 uVar9;
            *puVar21 = uVar18;
            *(uint *)(((ulong)((long)(int)(uVar25 + 0x2c02) << 0x20) >> 0x1e) + 0x1000200000000) =
                 uVar10;
          }
          uVar16 = uVar16 & 0xffff;
          iVar14 = (int)uVar16;
          if ((uVar18 | uVar10) != 1) {
            iVar15 = Ram0002000000000798;
            lVar13 = Ram00020000000007a0;
            uVar18 = uVar18 & 0xffff;
            uVar10 = uVar10 & 0xffff;
            bVar11 = true;
            uVar7 = 0;
            uVar32 = 0;
            iVar26 = 0;
            iVar2 = uVar18 * iVar14 * uVar10 * 2;
            iVar3 = Ram0002000000000488;
            uVar9 = 1;
            uVar31 = 1;
            if (iVar3 == 0) goto LAB_00029b6c;
            do {
              uVar30 = Ram0002000000000070;
              do {
              } while ((*(uint *)(((long)(int)(uVar30 >> 4) << 0x24) + 0x108080000c884) & 0xf) == 0)
              ;
              uVar12 = 0;
              if (bVar11) goto LAB_00029b94;
LAB_00029b14:
              do {
                iVar3 = Ram00020000000000d0;
              } while (iVar3 == 0);
              Ram000100020000b810 = iVar26;
              Ram000100020000b814 = uVar32;
              Ram000100020000b818 = uVar7;
              Ram000100020000b808 = uVar9;
              Ram000100020000b80c = uVar31;
              uVar30 = uVar31;
              if (iVar26 == 0) {
                if (uVar16 <= uVar12) {
                  Ram000100020000b804 = iVar14;
                  Ram000100020000b800 = uVar1;
                  iVar3 = iVar14;
                  goto LAB_00029c0c;
                }
LAB_00029b44:
                iVar26 = iVar26 + (int)uVar12;
                Ram000100020000b804 = iVar26;
                Ram000100020000b800 = uVar1;
                uVar28 = (ulong)((int)uVar12 + (int)uVar28);
                uVar8 = uVar9;
                if ((uVar18 <= uVar32) && (uVar10 <= uVar7)) goto LAB_00029bcc;
              }
              else {
                iVar3 = iVar14 - iVar26;
                if (uVar12 < (ulong)(long)iVar3) goto LAB_00029b44;
                Ram000100020000b804 = iVar14;
                Ram000100020000b800 = uVar1;
LAB_00029c0c:
                uVar28 = (ulong)((int)uVar28 + iVar3);
                if (uVar9 < uVar18) {
                  iVar26 = 0;
                  uVar8 = uVar9 + 1;
                  uVar32 = uVar9;
                }
                else {
                  if (uVar10 <= uVar31) goto LAB_00029bcc;
                  iVar26 = 0;
                  uVar8 = 1;
                  uVar30 = uVar31 + 1;
                  uVar32 = 0;
                  uVar7 = uVar31;
                }
              }
              bVar11 = false;
              iVar3 = Ram0002000000000488;
              uVar9 = uVar8;
              uVar31 = uVar30;
            } while (iVar3 != 0);
LAB_00029b6c:
            lVar22 = Ram0002000000000788;
            do {
              uVar30 = *(uint *)(lVar22 + 0x10);
              if ((int)uVar28 + 0x10000U < uVar30) {
                uVar30 = uVar30 + 0x10000000;
              }
              uVar12 = (ulong)(int)((iVar15 - (int)uVar28) + uVar30);
            } while (uVar12 == 0);
            if (bVar11) {
LAB_00029b94:
              lVar22 = lVar13 + (((uVar28 & (long)(iVar15 + -1)) << 0x20) >> 0x1c);
              *(char *)(lVar22 + 0xd) = (char)iVar2;
              *(short *)(lVar22 + 0xe) = (short)((uint)iVar2 >> 8);
              do {
                iVar3 = Ram0002000000000090;
              } while (iVar3 != 0);
            }
            goto LAB_00029b14;
          }
          iVar3 = Ram0002000000000798;
          lVar13 = Ram00020000000007a0;
          bVar11 = true;
          iVar26 = 0;
          iVar2 = Ram0002000000000488;
joined_r0x00029388:
          iVar15 = (int)uVar28;
          if (iVar2 == 0) {
            lVar22 = Ram0002000000000788;
            do {
              uVar9 = *(uint *)(lVar22 + 0x10);
              if (iVar15 + 0x10000U < uVar9) {
                uVar9 = uVar9 + 0x10000000;
              }
              uVar12 = (ulong)(int)((iVar3 - iVar15) + uVar9);
            } while (uVar12 == 0);
          }
          else {
            uVar9 = Ram0002000000000070;
            do {
            } while ((*(uint *)(((long)(int)(uVar9 >> 4) << 0x24) + 0x108080000c884) & 0xf) == 0);
            uVar12 = 0;
          }
          if (bVar11) {
            lVar22 = lVar13 + (((uVar28 & (long)(iVar3 + -1)) << 0x20) >> 0x1c);
            *(char *)(lVar22 + 0xd) = (char)(iVar14 << 1);
            *(short *)(lVar22 + 0xe) = (short)((uint)(iVar14 << 1) >> 8);
            do {
              iVar2 = Ram0002000000000090;
            } while (iVar2 != 0);
          }
          do {
            iVar2 = Ram00020000000000d0;
          } while (iVar2 == 0);
          Ram000100020000b810 = iVar26;
          Ram000100020000b814 = 0;
          Ram000100020000b818 = 0;
          Ram000100020000b808 = 1;
          Ram000100020000b80c = 1;
          if (iVar26 == 0) {
            if (uVar12 < uVar16) goto LAB_00029c80;
            Ram000100020000b804 = iVar14;
            Ram000100020000b800 = uVar1;
            uVar28 = (ulong)(iVar15 + iVar14);
LAB_00029bcc:
            *DAT_00101070 = 0x35;
            bVar11 = true;
          }
          else {
            if (uVar12 < (ulong)(long)(iVar14 - iVar26)) goto LAB_00029c80;
            Ram000100020000b804 = iVar14;
            Ram000100020000b800 = uVar1;
            uVar28 = (ulong)((iVar14 - iVar26) + iVar15);
            *DAT_00101070 = 0x35;
            bVar11 = true;
          }
        }
      }
joined_r0x00029a60:
      uVar23 = uVar23 + uVar6;
      uVar29 = uVar29 + 1;
    } while (uVar5 != uVar29);
    goto LAB_00029414;
  }
  bVar11 = false;
LAB_00029414:
  Ram00020000000000a8 = 0;
  uVar29 = Ram0002000000000798;
  lVar13 = Ram00020000000007a0;
  iVar14 = Ram0002000000000488;
  uVar25 = (uint)uVar28;
  if (iVar14 == 0) {
    lVar22 = Ram0002000000000788;
    do {
      uVar19 = *(uint *)(lVar22 + 0x10);
      if (uVar25 + 0x10000 < uVar19) {
        uVar19 = uVar19 + 0x10000000;
      }
    } while ((uVar29 - uVar25) + uVar19 == 0);
  }
  else {
    uVar19 = Ram0002000000000070;
    do {
    } while ((*(uint *)(((long)(int)(uVar19 >> 4) << 0x24) + 0x108080000c884) & 0xf) == 0);
  }
  *(uint *)(lVar13 + (((uVar28 & (long)(int)(uVar29 - 1)) << 0x20) >> 0x1c) + 0xc) =
       ((uVar25 & uVar29) != 0) + 2;
  uVar25 = uVar25 + 1;
  Ram0002000000000790 = uVar25;
  puVar20 = (uint *)Ram0002000000000788;
  *puVar20 = uVar25;
  if (bVar11) {
    do {
      iVar14 = Ram00020000000000d0;
    } while (iVar14 == 0);
    Ram00020000000000a8 = 2;
    uVar29 = Ram0002000000000408;
    uVar28 = (long)(int)(uVar29 >> 3) & 0xf;
    if (in_dscratch0 == 0) {
      do {
        iVar26 = Ram0002000000000408;
        iVar14 = Ram0002000000000128;
        if (iVar26 == iVar14) {
LAB_00029614:
          Ram00020000000006e0 = 0xc;
          uVar29 = Ram00020000000004f0;
          Ram0002000000000220 = uVar29 | 2;
          goto LAB_00029554;
        }
        while (iVar14 = Ram0002000000000140, iVar14 == 0) {
          iVar26 = Ram0002000000000408;
          iVar14 = Ram0002000000000128;
          if (iVar26 == iVar14) goto LAB_00029614;
        }
        lVar13 = FUN_000243e0();
      } while (lVar13 == 0);
      lVar13 = Ram0002000000000038;
      if (lVar13 == 0) {
        Ram00020000000001f8 = 2;
      }
      else {
        Ram00020000000001f8 = 3;
      }
      Ram00020000000007d8 = 4;
      Ram00020000000000a8 = 0;
      DAT_00101180 = uVar25;
    }
    else {
      uVar23 = (long)((int)uVar28 + 1) & 0xf;
      while (uVar23 == (in_dscratch0 >> 0x30 & 0xff)) {
        while( true ) {
          uVar17 = in_dscratch0 >> 0x30 & 0xff;
          uVar16 = in_dscratch0 >> 0x28 & 0xff;
          if (uVar17 == uVar16) break;
          uVar17 = in_dscratch0 &
                   ~((ulong)((1L << ((ulong)(uVar16 < uVar17) * 0x10 + (uVar16 - uVar17) & 0x3f)) +
                             -1 << (in_dscratch0 >> 0x30 & 0x3f)) >> 0x10 | 0xff000000000000);
          in_dscratch0 = uVar17 | uVar16 << 0x30;
          if (uVar23 != (uVar17 & 0xff000000000000 | uVar16 << 0x30) >> 0x30) goto LAB_00029554;
        }
      }
LAB_00029554:
      *(ulong *)((uVar28 + 0x20) * 8 + 0x3000000000000) = (ulong)uVar25;
      Ram00020000000001d0 = 8;
      *DAT_00101070 = 0x28;
      Ram00020000000000a8 = 0;
    }
  }
  do {
    iVar14 = Ram00020000000000d0;
  } while (iVar14 == 0);
  return;
LAB_00029c80:
  iVar26 = iVar26 + (int)uVar12;
  Ram000100020000b804 = iVar26;
  Ram000100020000b800 = uVar1;
  uVar28 = (ulong)((int)uVar12 + iVar15);
  bVar11 = false;
  iVar2 = Ram0002000000000488;
  goto joined_r0x00029388;
joined_r0x00029c74:
  bVar11 = true;
  uVar23 = uVar23 + uVar6;
  uVar29 = uVar29 + 1;
  if (uVar5 == uVar29) goto LAB_00029414;
  goto LAB_0002927c;
}


/* ---- pm4_OP_AA_handler @ 00029d70 size=1608 ---- */

/* WARNING: Removing unreachable block (ram,0x00029ed8) */
/* WARNING: Removing unreachable block (ram,0x00029ea4) */
/* WARNING: Removing unreachable block (ram,0x00029ec8) */
/* WARNING: Removing unreachable block (ram,0x00029f28) */

void pm4_OP_AA_handler(void)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulong in_dscratch0;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  iVar13 = Ram0002000000000790;
  uVar12 = (ulong)iVar13;
  if (0xfffffffff000ffff < uVar12) {
    uVar12 = (ulong)(iVar13 + 0x10000000);
  }
  uVar16 = Ram00020000000006f8;
  uVar7 = Ram00020000000006f8;
  uVar20 = Ram00020000000006f8;
  uVar5 = Ram00020000000006f8;
  uVar9 = Ram00020000000006f8;
  Ram00020000000000a8 = 2;
  iVar13 = (uint)((uVar16 == 0 || uVar7 == 0) || uVar20 == 0) * 2 + (uint)((uVar20 | uVar7) == 1);
  if (iVar13 == 1) {
    *(int *)(((ulong)((long)(int)((uVar9 & 0xffff) + 0x2c00) << 0x20) >> 0x1e) + 0x1000200000000) =
         (int)uVar12;
    iVar1 = Ram0002000000000798;
    lVar10 = Ram00020000000007a0;
    uVar16 = uVar16 & 0xffff;
    bVar3 = true;
    iVar13 = 0;
    do {
      iVar4 = Ram0002000000000488;
      iVar11 = (int)uVar12;
      if (iVar4 == 0) {
        lVar17 = Ram0002000000000788;
        do {
          uVar7 = *(uint *)(lVar17 + 0x10);
          if (iVar11 + 0x10000U < uVar7) {
            uVar7 = uVar7 + 0x10000000;
          }
          uVar7 = uVar7 + (iVar1 - iVar11);
        } while (uVar7 == 0);
      }
      else {
        uVar7 = Ram0002000000000070;
        do {
        } while ((*(uint *)(((long)(int)(uVar7 >> 4) << 0x24) + 0x108080000c884) & 0xf) == 0);
        uVar7 = 0;
      }
      if (bVar3) {
        lVar17 = lVar10 + (((uVar12 & (long)(iVar1 + -1)) << 0x20) >> 0x1c);
        *(byte *)(lVar17 + 0xd) = (byte)(uVar16 << 1) | 1;
        *(short *)(lVar17 + 0xe) = (short)((uVar16 << 1) >> 8);
        do {
          iVar4 = Ram0002000000000090;
        } while (iVar4 != 0);
      }
      do {
        iVar4 = Ram00020000000000d0;
      } while (iVar4 == 0);
      Ram000100020000b810 = iVar13;
      Ram000100020000b814 = 0;
      Ram000100020000b818 = 0;
      Ram000100020000b808 = 1;
      Ram000100020000b80c = 1;
      if (iVar13 == 0) {
        if (uVar16 <= uVar7) goto LAB_0002a328;
      }
      else if (uVar16 - iVar13 <= uVar7) {
        Ram000100020000b804 = uVar16;
        Ram000100020000b800 = uVar5;
        uVar12 = (ulong)(int)((uVar16 - iVar13) + iVar11);
        bVar3 = true;
        goto LAB_00029e04;
      }
      iVar13 = iVar13 + uVar7;
      Ram000100020000b804 = iVar13;
      Ram000100020000b800 = uVar5;
      uVar12 = (ulong)(int)(uVar7 + iVar11);
      bVar3 = false;
    } while( true );
  }
  if (1 < iVar13 - 2U) {
    *(int *)(((ulong)((long)(int)((uVar9 & 0xffff) + 0x2c00) << 0x20) >> 0x1e) + 0x1000200000000) =
         (int)uVar12;
    iVar11 = Ram0002000000000798;
    lVar10 = Ram00020000000007a0;
    uVar16 = uVar16 & 0xffff;
    uVar7 = uVar7 & 0xffff;
    uVar20 = uVar20 & 0xffff;
    bVar3 = true;
    uVar8 = 0;
    uVar23 = 0;
    iVar13 = 0;
    iVar1 = uVar7 * uVar16 * uVar20 * 2;
    iVar4 = Ram0002000000000488;
    uVar9 = 1;
    uVar21 = 1;
    if (iVar4 == 0) goto LAB_0002a168;
    do {
      uVar18 = Ram0002000000000070;
      do {
      } while ((*(uint *)(((long)(int)(uVar18 >> 4) << 0x24) + 0x108080000c884) & 0xf) == 0);
      uVar18 = 0;
      if (bVar3) goto LAB_0002a190;
LAB_0002a110:
      do {
        iVar4 = Ram00020000000000d0;
      } while (iVar4 == 0);
      Ram000100020000b810 = iVar13;
      Ram000100020000b814 = uVar23;
      Ram000100020000b818 = uVar8;
      Ram000100020000b808 = uVar9;
      Ram000100020000b80c = uVar21;
      uVar22 = uVar21;
      if (iVar13 == 0) {
        if (uVar16 <= uVar18) {
          Ram000100020000b804 = uVar16;
          Ram000100020000b800 = uVar5;
          uVar2 = uVar16;
          goto LAB_0002a1d8;
        }
LAB_0002a140:
        iVar13 = iVar13 + uVar18;
        Ram000100020000b804 = iVar13;
        Ram000100020000b800 = uVar5;
        uVar12 = (ulong)(int)(uVar18 + (int)uVar12);
        uVar18 = uVar9;
        if ((uVar7 <= uVar23) && (uVar20 <= uVar8)) goto LAB_0002a1bc;
      }
      else {
        uVar2 = uVar16 - iVar13;
        if (uVar18 < uVar2) goto LAB_0002a140;
        Ram000100020000b804 = uVar16;
        Ram000100020000b800 = uVar5;
LAB_0002a1d8:
        uVar12 = (ulong)(int)(uVar2 + (int)uVar12);
        if (uVar9 < uVar7) {
          iVar13 = 0;
          uVar18 = uVar9 + 1;
          uVar23 = uVar9;
        }
        else {
          if (uVar20 <= uVar21) {
LAB_0002a1bc:
            bVar3 = true;
            goto LAB_00029e04;
          }
          iVar13 = 0;
          uVar18 = 1;
          uVar22 = uVar21 + 1;
          uVar23 = 0;
          uVar8 = uVar21;
        }
      }
      bVar3 = false;
      iVar4 = Ram0002000000000488;
      uVar9 = uVar18;
      uVar21 = uVar22;
    } while (iVar4 != 0);
LAB_0002a168:
    lVar17 = Ram0002000000000788;
    do {
      uVar18 = *(uint *)(lVar17 + 0x10);
      if ((int)uVar12 + 0x10000U < uVar18) {
        uVar18 = uVar18 + 0x10000000;
      }
      uVar18 = (iVar11 - (int)uVar12) + uVar18;
    } while (uVar18 == 0);
    if (bVar3) {
LAB_0002a190:
      lVar17 = lVar10 + (((uVar12 & (long)(iVar11 + -1)) << 0x20) >> 0x1c);
      *(byte *)(lVar17 + 0xd) = (byte)iVar1 | 1;
      *(short *)(lVar17 + 0xe) = (short)((uint)iVar1 >> 8);
      do {
        iVar4 = Ram0002000000000090;
      } while (iVar4 != 0);
    }
    goto LAB_0002a110;
  }
  bVar3 = false;
LAB_00029e04:
  Ram00020000000000a8 = 0;
  uVar7 = Ram0002000000000798;
  lVar10 = Ram00020000000007a0;
  iVar13 = Ram0002000000000488;
  uVar16 = (uint)uVar12;
  if (iVar13 == 0) {
    lVar17 = Ram0002000000000788;
    do {
      uVar20 = *(uint *)(lVar17 + 0x10);
      if (uVar16 + 0x10000 < uVar20) {
        uVar20 = uVar20 + 0x10000000;
      }
    } while ((uVar7 - uVar16) + uVar20 == 0);
  }
  else {
    uVar20 = Ram0002000000000070;
    do {
    } while ((*(uint *)(((long)(int)(uVar20 >> 4) << 0x24) + 0x108080000c884) & 0xf) == 0);
  }
  *(uint *)(lVar10 + (((uVar12 & (long)(int)(uVar7 - 1)) << 0x20) >> 0x1c) + 0xc) =
       ((uVar16 & uVar7) != 0) + 2;
  uVar16 = uVar16 + 1;
  Ram0002000000000790 = uVar16;
  puVar6 = (uint *)Ram0002000000000788;
  *puVar6 = uVar16;
  if (bVar3) {
    do {
      iVar13 = Ram00020000000000d0;
    } while (iVar13 == 0);
    Ram00020000000000a8 = 2;
    uVar7 = Ram0002000000000408;
    uVar12 = (long)(int)(uVar7 >> 3) & 0xf;
    if (in_dscratch0 == 0) {
      do {
        iVar1 = Ram0002000000000408;
        iVar13 = Ram0002000000000128;
        if (iVar1 == iVar13) {
LAB_00029fd0:
          Ram00020000000006e0 = 0xc;
          uVar7 = Ram00020000000004f0;
          Ram0002000000000220 = uVar7 | 2;
          goto LAB_00029f44;
        }
        while (iVar13 = Ram0002000000000140, iVar13 == 0) {
          iVar1 = Ram0002000000000408;
          iVar13 = Ram0002000000000128;
          if (iVar1 == iVar13) goto LAB_00029fd0;
        }
        lVar10 = FUN_000243e0();
      } while (lVar10 == 0);
      lVar10 = Ram0002000000000038;
      if (lVar10 == 0) {
        Ram00020000000001f8 = 2;
      }
      else {
        Ram00020000000001f8 = 3;
      }
      Ram00020000000007d8 = 4;
      Ram00020000000000a8 = 0;
      DAT_00101180 = uVar16;
    }
    else {
      uVar14 = (long)((int)uVar12 + 1) & 0xf;
      while (uVar14 == (in_dscratch0 >> 0x30 & 0xff)) {
        while( true ) {
          uVar15 = in_dscratch0 >> 0x30 & 0xff;
          uVar19 = in_dscratch0 >> 0x28 & 0xff;
          if (uVar15 == uVar19) break;
          uVar15 = in_dscratch0 &
                   ~((ulong)((1L << ((ulong)(uVar19 < uVar15) * 0x10 + (uVar19 - uVar15) & 0x3f)) +
                             -1 << (in_dscratch0 >> 0x30 & 0x3f)) >> 0x10 | 0xff000000000000);
          in_dscratch0 = uVar15 | uVar19 << 0x30;
          if (uVar14 != (uVar15 & 0xff000000000000 | uVar19 << 0x30) >> 0x30) goto LAB_00029f44;
        }
      }
LAB_00029f44:
      *(ulong *)((uVar12 + 0x20) * 8 + 0x3000000000000) = (ulong)uVar16;
      Ram00020000000001d0 = 8;
      *DAT_00101070 = 0x28;
      Ram00020000000000a8 = 0;
    }
  }
  do {
    iVar13 = Ram00020000000000d0;
  } while (iVar13 == 0);
  FUN_00024168();
  return;
LAB_0002a328:
  Ram000100020000b804 = uVar16;
  Ram000100020000b800 = uVar5;
  uVar12 = (ulong)(int)(uVar16 + iVar11);
  bVar3 = true;
  goto LAB_00029e04;
}


/* ---- pm4_OP_17_handler @ 0002a3c0 size=412 ---- */

/* WARNING: Removing unreachable block (ram,0x0002a434) */
/* WARNING: Removing unreachable block (ram,0x0002a3c8) */
/* WARNING: Removing unreachable block (ram,0x0002a3e4) */
/* WARNING: Removing unreachable block (ram,0x0002a44c) */

void pm4_OP_17_handler(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong in_dscratch0;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000070;
  if (in_dscratch0 != 0) {
    do {
      uVar5 = in_dscratch0 >> 0x30 & 0xff;
      uVar7 = in_dscratch0 >> 0x28 & 0xff;
      uVar9 = (1L << ((ulong)(uVar7 < uVar5) * 0x10 + (uVar7 - uVar5) & 0x3f)) + -1 <<
              (in_dscratch0 >> 0x30 & 0x3f);
      if (uVar5 != uVar7) {
        in_dscratch0 = in_dscratch0 & ~(uVar9 & 0xffff | uVar9 >> 0x10 | 0xff000000000000) |
                       uVar7 << 0x30;
      }
    } while ((in_dscratch0 & 0xffffffff) != 0);
    uVar2 = Ram0002000000000128;
    Ram00020000000002d0 = uVar2;
    Ram00020000000003b8 = uVar2;
    Ram00020000000006e0 = 8;
    uVar4 = Ram00020000000004f0;
    Ram0002000000000220 = uVar4 & 0xfffffffd;
  }
  lVar8 = (long)(int)(uVar1 >> 4) << 0x24;
  if ((*(uint *)(lVar8 + 0x108080000c8a4) & 0x1c00) == 0) {
    uVar1 = Ram0002000000000070;
    lVar6 = (long)(int)(uVar1 >> 4) << 0x24;
    *(undefined4 *)(lVar6 + 0x108080000c8ac) = 0x3000;
    Ram0002000000000120 = *(uint *)(lVar6 + 0x108080000c8ac) >> 0x18 & 3;
    *(undefined4 *)(*(long *)(lVar6 + 0x108080000c824) + 0x1c8) = 3;
    *(undefined4 *)(lVar6 + 0x108080000c8ac) = 0x2000;
  }
  lVar6 = Ram0002000000000038;
  iVar3 = Ram00020000000003b8;
  uVar2 = Ram00020000000006f8;
  if ((lVar6 != 0) && (iVar3 == 0)) {
    Ram0002000000000080 = lVar6 + -1;
    Ram00020000000003c0 = 0;
    if (lVar6 + -1 == 0) {
      Ram00020000000004a8 = *(uint *)(lVar8 + 0x108080000c8f8) >> 8 & 1;
      *(uint *)(lVar8 + 0x108080000c878) =
           (uint)((ulong)((long)*(int *)(lVar8 + 0x108080000c878) << 0x21) >> 0x21);
    }
  }
  return;
}


/* ---- FUN_0002a560 @ 0002a560 size=524 ---- */

void FUN_0002a560(uint param_1)

{
  long lVar1;
  uint uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  lVar1 = Ram0002000000000038;
  if (lVar1 == 0) {
    iVar13 = Ram00020000000003a8;
    Ram0002000000000150 = 0;
    iVar12 = 0;
    if (iVar13 == 0) {
      gp = 0x101800;
      tp = 0x2000000000000;
      return;
    }
    do {
      uVar5 = Ram00020000000006f8;
      iVar12 = iVar12 + 1;
    } while (iVar12 != iVar13);
    return;
  }
  uVar11 = Ram00020000000006f8;
  lVar1 = Ram00020000000006f8;
  uVar6 = Ram00020000000006f8;
  lVar7 = Ram00020000000006f8;
  uVar10 = Ram00020000000006f8;
  lVar8 = Ram00020000000006f8;
  uVar10 = lVar8 << 0x20 | uVar10;
  Ram0002000000000390 = lVar1 << 0x20 | uVar11;
  puVar3 = (ulong *)Ram0002000000000390;
  uVar11 = (lVar7 << 0x20 | uVar6) & *puVar3;
  switch(param_1 >> 8 & 7) {
  case 1:
    if (uVar10 <= uVar11) {
LAB_0002a704:
      if ((param_1 & 3) != 2) {
        iVar12 = Ram00020000000003a8;
        Ram0002000000000150 = 0;
        if (iVar12 == 0) {
          return;
        }
        iVar13 = 0;
        do {
          uVar5 = Ram00020000000006f8;
          iVar13 = iVar13 + 1;
        } while (iVar13 != iVar12);
        return;
      }
      uVar4 = Ram00020000000006f8;
      uVar4 = Ram00020000000006f8;
      uVar5 = Ram00020000000006f8;
      uVar11 = Ram00020000000006f8;
      lVar1 = Ram00020000000006f8;
      uVar11 = lVar1 << 0x20 | uVar11;
      uVar2 = Ram00020000000006f8;
      uVar9 = param_1 & 0xfff00000 | uVar2 | 0x800000;
      uVar2 = Ram0002000000000070;
      iVar12 = Ram00020000000003b8;
      if (iVar12 == 0) goto LAB_0002a6e8;
      Ram0002000000000558 = 2;
      do {
        iVar12 = Ram00020000000004c8;
      } while (iVar12 != 0);
      goto LAB_0002a658;
    }
    break;
  case 2:
    if (uVar10 < uVar11) goto LAB_0002a704;
    break;
  case 3:
    if (uVar11 != uVar10) goto LAB_0002a704;
    break;
  case 4:
    if (uVar11 == uVar10) goto LAB_0002a704;
    break;
  case 5:
    if (uVar11 < uVar10) goto LAB_0002a704;
    break;
  case 6:
    if (uVar11 <= uVar10) goto LAB_0002a704;
  }
  uVar11 = Ram00020000000006f8;
  lVar1 = Ram00020000000006f8;
  uVar11 = lVar1 << 0x20 | uVar11;
  uVar2 = Ram00020000000006f8;
  uVar4 = Ram00020000000006f8;
  uVar4 = Ram00020000000006f8;
  uVar5 = Ram00020000000006f8;
  uVar9 = param_1 & 0xfff00000 | uVar2 | 0x800000;
  uVar2 = Ram0002000000000070;
  iVar12 = Ram00020000000003b8;
  if (iVar12 == 0) {
LAB_0002a6e8:
    Ram0002000000000390 = uVar11;
    uVar4 = Ram0002000000000390;
    FUN_00024c08((long)(int)(uVar9 | 0x100000),uVar4);
    return;
  }
  Ram0002000000000558 = 2;
  do {
    iVar12 = Ram00020000000004c8;
  } while (iVar12 != 0);
LAB_0002a658:
  Ram0002000000000390 = uVar11;
  uVar4 = Ram0002000000000390;
  FUN_00024c08((long)(int)(uVar9 & 0xf0ffffff |
                          (*(uint *)(((long)(int)(uVar2 >> 4) << 0x24) + 0x108080000c830) >> 8 & 0xf
                          ) << 0x18),uVar4);
  return;
}


/* ---- FUN_0002a770 @ 0002a770 size=628 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002a770(uint param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  uint uVar9;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar2 = Ram0002000000000070;
  uVar1 = Ram0002000000000038;
  if ((uint)uVar1 >> 1 != 0) {
    lVar8 = (long)(int)(uVar2 >> 4) << 0x24;
    uVar1 = Ram00020000000006f8;
    uVar1 = Ram00020000000006f8;
    uVar2 = Ram00020000000006f8;
    *(undefined4 *)(lVar8 + 0x108080000c884) = 0x200;
    if ((uVar2 & 0x800000) != 0) {
      *(uint *)(lVar8 + 0x108080000c87c) =
           (uint)((ulong)((long)(int)*(uint *)(lVar8 + 0x108080000c87c) << 0x21) >> 0x21);
      return;
    }
    uVar2 = Ram00020000000000e8;
    *(uint *)(lVar8 + 0x108080000c87c) = uVar2 & 0xff | *(uint *)(lVar8 + 0x108080000c87c);
    return;
  }
  Ram0002000000000080 = 4;
  Ram00020000000003c0 = 0;
  uVar3 = Ram0002000000000070;
  lVar8 = (long)(int)(uVar3 >> 4) << 0x24;
  *(undefined4 *)(lVar8 + 0x108080000c8ac) = 0x3000;
  Ram0002000000000120 = *(uint *)(lVar8 + 0x108080000c8ac) >> 0x18 & 3;
  *(undefined4 *)(*(long *)(lVar8 + 0x108080000c824) + 0x1c8) = 2;
  *(undefined4 *)(lVar8 + 0x108080000c8ac) = 0x2000;
  Ram0002000000000080 = uVar1;
  Ram00020000000003c0 = 0;
  Ram0002000000000148 = 1;
  uVar3 = Ram00020000000006f8;
  if ((uVar3 & 3) == 0) {
    uVar5 = Ram00020000000006f8;
    iVar6 = Ram00020000000006f8;
    if ((param_1 >> 8 & 0xff) == 0x5c) {
      uVar7 = Ram00020000000006f8;
      Ram0002000000000040 = 1;
      if ((_DAT_100010002e000 & 1) != 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      do {
      } while (_DAT_100010000c2d4 != 0);
      uVar9 = Ram0002000000000070;
      lVar8 = (long)(int)(uVar9 >> 4) << 0x24;
      _DAT_100010000c2dc = *(uint *)(lVar8 + 0x108080000c860) >> 3 & 0x3ff | 0x5000;
      _DAT_100010000c0dc = (undefined4)(((long)(int)(uVar9 >> 8) & 7U) << 0x1c);
      _DAT_100010000c0e8 = 0x10000;
      _DAT_100010000c2d4 = 0x1000000;
      *(uint *)(lVar8 + 0x108080000c860) =
           (uint)((ulong)((long)*(int *)(lVar8 + 0x108080000c860) << 0x22) >> 0x22);
      uVar1 = Ram0002000000000038;
      Ram0002000000000150 = 0;
      *(undefined4 *)((ulong)((int)uVar1 + 0x60) + 0x2000000000000) = 0;
      Ram00020000000004c0 = (int)uVar1;
      Ram0002000000000558 = 3;
      do {
        iVar4 = Ram00020000000004c8;
      } while (iVar4 != 0);
      *(undefined4 *)(lVar8 + 0x108080000c8fc) = 0;
      *(undefined4 *)(lVar8 + 0x108080000c900) = 0;
      *(undefined4 *)(lVar8 + 0x108080000c84c) = 0;
      *(undefined4 *)(lVar8 + 0x108080000c878) = 0;
      if (*(int *)(lVar8 + 0x108080000c82c) != 0) {
        do {
          do {
            uVar9 = *(uint *)(lVar8 + 0x108080000c884) & 0xf;
          } while (uVar9 == 0);
        } while (uVar9 == 4);
      }
    }
    Ram0002000000000390 = CONCAT44(uVar5,uVar3);
    uVar1 = Ram0002000000000390;
    FUN_00024c08((long)(int)(uVar2 >> 4),(long)iVar6,uVar1);
    return;
  }
  FUN_0002a560((long)(int)uVar3);
  return;
}


/* ---- pm4_INDIRECT_BUFFER_INDIRECT_BUFFER_PASID_handler @ 0002a9e8 size=1120 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pm4_INDIRECT_BUFFER_INDIRECT_BUFFER_PASID_handler(uint param_1)

{
  undefined8 uVar1;
  uint uVar2;
  ulong *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar2 = Ram0002000000000070;
  uVar1 = Ram0002000000000038;
  if ((uint)uVar1 >> 1 != 0) {
    lVar14 = (long)(int)(uVar2 >> 4) << 0x24;
    uVar1 = Ram00020000000006f8;
    uVar1 = Ram00020000000006f8;
    uVar2 = Ram00020000000006f8;
    *(undefined4 *)(lVar14 + 0x108080000c884) = 0x200;
    if ((uVar2 & 0x800000) == 0) {
      uVar2 = Ram00020000000000e8;
      *(uint *)(lVar14 + 0x108080000c87c) = uVar2 & 0xff | *(uint *)(lVar14 + 0x108080000c87c);
    }
    else {
      *(uint *)(lVar14 + 0x108080000c87c) =
           (uint)((ulong)((long)(int)*(uint *)(lVar14 + 0x108080000c87c) << 0x21) >> 0x21);
    }
    goto LAB_0002aae0;
  }
  Ram0002000000000080 = 4;
  Ram00020000000003c0 = 0;
  uVar2 = Ram0002000000000070;
  lVar14 = (long)(int)(uVar2 >> 4) << 0x24;
  *(undefined4 *)(lVar14 + 0x108080000c8ac) = 0x3000;
  Ram0002000000000120 = *(uint *)(lVar14 + 0x108080000c8ac) >> 0x18 & 3;
  *(undefined4 *)(*(long *)(lVar14 + 0x108080000c824) + 0x1c8) = 2;
  *(undefined4 *)(lVar14 + 0x108080000c8ac) = 0x2000;
  Ram0002000000000080 = uVar1;
  Ram00020000000003c0 = 0;
  Ram0002000000000148 = 1;
  uVar2 = Ram00020000000006f8;
  if ((uVar2 & 3) == 0) {
    uVar5 = Ram00020000000006f8;
    iVar12 = Ram00020000000006f8;
    if ((param_1 >> 8 & 0xff) == 0x5c) {
      uVar6 = Ram00020000000006f8;
      Ram0002000000000040 = 1;
      if ((_DAT_100010002e000 & 1) != 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      do {
      } while (_DAT_100010000c2d4 != 0);
      uVar10 = Ram0002000000000070;
      lVar14 = (long)(int)(uVar10 >> 4) << 0x24;
      _DAT_100010000c2dc = *(uint *)(lVar14 + 0x108080000c860) >> 3 & 0x3ff | 0x5000;
      _DAT_100010000c0dc = (undefined4)(((long)(int)(uVar10 >> 8) & 7U) << 0x1c);
      _DAT_100010000c0e8 = 0x10000;
      _DAT_100010000c2d4 = 0x1000000;
      *(uint *)(lVar14 + 0x108080000c860) =
           (uint)((ulong)((long)*(int *)(lVar14 + 0x108080000c860) << 0x22) >> 0x22);
      uVar1 = Ram0002000000000038;
      Ram0002000000000150 = 0;
      *(undefined4 *)((ulong)((int)uVar1 + 0x60) + 0x2000000000000) = 0;
      Ram00020000000004c0 = (int)uVar1;
      Ram0002000000000558 = 3;
      do {
        iVar4 = Ram00020000000004c8;
      } while (iVar4 != 0);
      *(undefined4 *)(lVar14 + 0x108080000c8fc) = 0;
      *(undefined4 *)(lVar14 + 0x108080000c900) = 0;
      *(undefined4 *)(lVar14 + 0x108080000c84c) = 0;
      *(undefined4 *)(lVar14 + 0x108080000c878) = 0;
      if (*(int *)(lVar14 + 0x108080000c82c) != 0) {
        do {
          do {
            uVar10 = *(uint *)(lVar14 + 0x108080000c884) & 0xf;
          } while (uVar10 == 0);
        } while (uVar10 == 4);
      }
    }
    Ram0002000000000390 = CONCAT44(uVar5,uVar2);
    uVar1 = Ram0002000000000390;
    FUN_00024c08((long)iVar12,uVar1);
    goto LAB_0002aae0;
  }
  lVar14 = Ram0002000000000038;
  if (lVar14 == 0) {
    iVar4 = Ram00020000000003a8;
    Ram0002000000000150 = 0;
    for (iVar12 = 0; iVar4 != iVar12; iVar12 = iVar12 + 1) {
      uVar5 = Ram00020000000006f8;
    }
    goto LAB_0002aae0;
  }
  uVar13 = Ram00020000000006f8;
  lVar14 = Ram00020000000006f8;
  uVar7 = Ram00020000000006f8;
  lVar8 = Ram00020000000006f8;
  uVar11 = Ram00020000000006f8;
  lVar9 = Ram00020000000006f8;
  uVar11 = lVar9 << 0x20 | uVar11;
  Ram0002000000000390 = lVar14 << 0x20 | uVar13;
  puVar3 = (ulong *)Ram0002000000000390;
  uVar13 = (lVar8 << 0x20 | uVar7) & *puVar3;
  switch((long)(int)(uVar2 >> 8) + 7U & 7) {
  case 0:
    break;
  case 1:
    goto joined_r0x0002adbc;
  case 2:
    goto joined_r0x0002acf8;
  case 3:
joined_r0x0002acf8:
    if (uVar11 != uVar13) goto switchD_0002abd4_default;
    goto LAB_0002acd4;
  case 4:
    break;
  case 5:
joined_r0x0002adbc:
    if (uVar11 < uVar13) goto switchD_0002abd4_default;
    goto LAB_0002acd4;
  default:
    goto switchD_0002abd4_default;
  }
  if (uVar13 < uVar11) {
LAB_0002acd4:
    if ((uVar2 & 3) != 2) {
      iVar4 = Ram00020000000003a8;
      Ram0002000000000150 = 0;
      for (iVar12 = 0; iVar4 != iVar12; iVar12 = iVar12 + 1) {
        uVar5 = Ram00020000000006f8;
      }
      goto LAB_0002aae0;
    }
    uVar1 = Ram00020000000006f8;
    uVar1 = Ram00020000000006f8;
    uVar5 = Ram00020000000006f8;
    uVar13 = Ram00020000000006f8;
    lVar14 = Ram00020000000006f8;
    uVar13 = lVar14 << 0x20 | uVar13;
    uVar10 = Ram00020000000006f8;
    uVar10 = uVar2 & 0xfff00000 | uVar10 | 0x800000;
    uVar2 = Ram0002000000000070;
    iVar12 = Ram00020000000003b8;
    if (iVar12 != 0) {
      Ram0002000000000558 = 2;
      do {
        iVar12 = Ram00020000000004c8;
      } while (iVar12 != 0);
      goto LAB_0002ad58;
    }
LAB_0002ade0:
    uVar10 = uVar10 | 0x100000;
  }
  else {
switchD_0002abd4_default:
    uVar13 = Ram00020000000006f8;
    lVar14 = Ram00020000000006f8;
    uVar13 = lVar14 << 0x20 | uVar13;
    uVar10 = Ram00020000000006f8;
    uVar1 = Ram00020000000006f8;
    uVar1 = Ram00020000000006f8;
    uVar5 = Ram00020000000006f8;
    uVar10 = uVar2 & 0xfff00000 | uVar10 | 0x800000;
    uVar2 = Ram0002000000000070;
    iVar12 = Ram00020000000003b8;
    if (iVar12 == 0) goto LAB_0002ade0;
    Ram0002000000000558 = 2;
    do {
      iVar12 = Ram00020000000004c8;
    } while (iVar12 != 0);
LAB_0002ad58:
    uVar10 = uVar10 & 0xf0ffffff |
             (*(uint *)(((long)(int)(uVar2 >> 4) << 0x24) + 0x108080000c830) >> 8 & 0xf) << 0x18;
  }
  Ram0002000000000390 = uVar13;
  uVar1 = Ram0002000000000390;
  FUN_00024c08((long)(int)uVar10,uVar1);
LAB_0002aae0:
  FUN_00024168();
  return;
}


/* ---- pm4_LOAD_COMPUTE_STATE_handler @ 0002ae50 size=4 ---- */

void pm4_LOAD_COMPUTE_STATE_handler(void)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  return;
}


/* ---- pm4_OP_97_handler @ 0002ae58 size=476 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pm4_OP_97_handler(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  undefined4 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  iVar4 = Ram00020000000006f8;
  if (iVar4 == 0) {
    Ram0002000000000278 = 1;
    do {
      iVar4 = Ram0002000000000480;
    } while (iVar4 != 0);
    lVar7 = Ram0002000000000470;
    uVar14 = lVar7 * 0x10000;
    uVar8 = Ram0002000000000478;
    do {
      iVar4 = Ram0002000000000030;
    } while (iVar4 != 0);
    uVar5 = Ram0002000000000070;
    Ram00020000000000d0 = uVar5 | 9;
    Ram0002000000000448 = 0xc10;
    uVar6 = Ram00020000000000e8;
    uVar1 = (uint)((uVar14 >> 0x3c & 7) << 0x16);
    Ram00010001000301e0 = uVar1 | 0x40000000;
    Ram0001000100030200 = 0;
    Ram0001000100030204 = 0;
    Ram0001000100030208 = (int)uVar14;
    uVar2 = (uint)(uVar14 >> 0x20);
    Ram000100010003020c = uVar2 & 0xffff;
    uVar9 = Ram00020000000004b0;
    Ram0001000100030270 = uVar9;
    Ram0001000100030274 = 0;
    if (uVar8 < 0x8001) {
      Ram0001000100030210 = uVar8 & 0x3ffffff | 0x40000000;
    }
    else {
      Ram0001000100030210 = 0x40008000;
      uVar10 = 0x8000;
      uVar11 = 0x8000;
      while( true ) {
        do {
          iVar4 = Ram0002000000000030;
        } while (iVar4 != 0);
        Ram00020000000000d0 = uVar5 | 9;
        Ram00010001000301e0 = ((uint)((ulong)lVar7 >> 0x10) >> 0x1c & 7) << 10 | uVar1;
        lVar12 = (uVar10 & 0xffffffff) + uVar14;
        Ram0001000100030200 = (int)uVar14;
        Ram0001000100030204 = uVar2;
        Ram0001000100030208 = (int)lVar12;
        Ram000100010003020c = (uint)((ulong)lVar12 >> 0x20) & 0xffff;
        uVar13 = (ulong)(int)(uVar8 - (int)uVar10);
        if (uVar13 <= uVar11) break;
        uVar3 = (uint)uVar11;
        Ram0001000100030210 = uVar3 | 0x40000000;
        uVar10 = (ulong)(int)((int)uVar10 + uVar3);
        uVar11 = 0x1fffff;
        if (uVar10 < 0x200000) {
          uVar11 = (long)(int)(uVar3 << 1);
        }
      }
      Ram0001000100030210 = (uint)((uVar13 << 0x26) >> 0x26) | 0x40000000;
    }
    do {
      iVar4 = Ram0002000000000030;
    } while (iVar4 != 0);
    Ram0002000000000470 = 1;
    _DAT_100010003e09c = 0;
    Ram0002000000000470 = 0;
    do {
      iVar4 = Ram0002000000000480;
    } while (iVar4 != 0);
    Ram0002000000000448 = 0x800;
    uVar6 = Ram00020000000000e8;
    Ram0002000000000278 = 0;
  }
  FUN_00024168();
  return;
}


/* ---- pm4_OP_B2_handler @ 0002b040 size=160 ---- */

void pm4_OP_B2_handler(void)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar2 = Ram00020000000006f8;
  uVar3 = Ram00020000000006f8;
  lVar4 = Ram00020000000006f8;
  Ram0002000000000390 = lVar4 << 0x20 | uVar3;
  uVar5 = Ram0002000000000390;
  uVar3 = Ram00020000000006f8;
  lVar4 = Ram00020000000006f8;
  Ram0002000000000390 = lVar4 << 0x20 | uVar3;
  puVar1 = (undefined8 *)Ram0002000000000390;
  if ((uVar2 & 1) != 0) {
    Ram0002000000000148 = 1;
    FUN_00025a78(0x220514,0,(long)(int)((((uVar2 & 4) != 0) + 3) * 0x20000000),uVar5,0,0,0);
  }
  if ((uVar2 & 2) != 0) {
    if ((uVar2 & 4) == 0) {
      uVar5 = Ram00020000000000f8;
    }
    else {
      uVar5 = Ram0002000000000100;
    }
    Ram0002000000000120 = 0;
    *puVar1 = uVar5;
  }
  FUN_00024168();
  return;
}


/* ---- pm4_NOP_handler @ 0002b0e8 size=96 ---- */

void pm4_NOP_handler(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  lVar1 = Ram0002000000000038;
  if ((param_1 & 0x3fff0000) == 0x3fff0000) {
    Ram0002000000000150 = 0;
    *(undefined8 *)(&TP_R060 + lVar1 * 8) = 0;
    Ram00020000000004c0 = lVar1;
    uVar2 = Ram00020000000000e8;
  }
  else {
    uVar4 = 0;
    do {
      uVar3 = Ram00020000000006f8;
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (uVar4 <= (param_1 << 0x22) >> 0x32);
    if (lVar1 == 3) {
      FUN_00025900(uVar3);
    }
  }
  FUN_00024168();
  return;
}


/* ---- pm4_OP_02_handler @ 0002b150 size=4 ---- */

void pm4_OP_02_handler(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  do {
    uVar2 = Ram0002000000000020;
    custom0();
    uVar3 = Ram00020000000006f8;
    uVar1 = Ram0002000000000010;
    (*(code *)(uVar1 & 0xfffffffffffffffe))(uVar3);
  } while( true );
}


/* ---- pm4_COND_EXEC_handler @ 0002b158 size=92 ---- */

void pm4_COND_EXEC_handler(undefined8 param_1)

{
  int *piVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0002000000000148 = 1;
  uVar2 = Ram00020000000006f8;
  lVar3 = Ram00020000000006f8;
  Ram0002000000000390 = lVar3 << 0x20 | uVar2;
  piVar1 = (int *)Ram0002000000000390;
  uVar4 = Ram00020000000006f8;
  lVar3 = Ram00020000000006f8;
  if (*piVar1 == 0) {
    lVar5 = Ram0002000000000038;
    *(long *)(&TP_R060 + lVar5 * 8) = lVar3;
    if (lVar3 != 0) {
      lVar5 = 0;
      do {
        param_1 = Ram00020000000006f8;
        lVar5 = lVar5 + 1;
      } while (lVar3 != lVar5);
    }
  }
  Ram0002000000000150 = 0;
  FUN_00024168(param_1);
  return;
}


/* ---- pm4_REWIND_handler @ 0002b1b8 size=1424 ---- */

void pm4_REWIND_handler(void)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  lVar8 = Ram0002000000000038;
  if (lVar8 == 2) {
    iVar9 = Ram00020000000006f8;
    uVar1 = Ram0002000000000190;
    lVar8 = (long)(int)(uVar1 >> 4) << 0x24;
    uVar1 = *(uint *)(lVar8 + 0x108080000c87c);
    if (iVar9 < 0) {
      uVar4 = Ram0002000000000188;
      iVar9 = Ram0002000000000068;
      if ((((ulong)uVar4 & 3) == (long)iVar9) && (uVar4 = Ram00020000000004f0, (uVar4 & 8) != 0)) {
        Ram0002000000000150 = 0;
      }
      Ram00020000000005e8 = 0;
      uVar4 = uVar1 >> 0x10 & 0x3f;
      if (((long)(int)uVar1 & 0x3000U) == 0) {
        uVar6 = 2 << ((long)*(int *)(lVar8 + 0x108080000c868) & 0x1fU);
        uVar4 = uVar4 + *(int *)(lVar8 + 0x108080000c84c);
        if (uVar6 <= uVar4) {
          uVar4 = uVar4 - uVar6;
        }
        *(uint *)(lVar8 + 0x108080000c84c) = uVar4;
      }
      else {
        *(uint *)(lVar8 + 0x108080000c874) =
             *(uint *)(lVar8 + 0x108080000c874) & 0xfff00000 |
             (*(uint *)(lVar8 + 0x108080000c874) & 0xfffff) + uVar4 & 0xfffff;
        *(uint *)(lVar8 + 0x108080000c878) =
             *(uint *)(lVar8 + 0x108080000c878) & 0xfff00000 |
             (*(uint *)(lVar8 + 0x108080000c878) & 0xfffff) - uVar4 & 0xfffff;
      }
      *(undefined4 *)(lVar8 + 0x108080000c884) = 0x200;
      *(uint *)(lVar8 + 0x108080000c87c) =
           (uint)((ulong)((long)(int)uVar1 << 0x28) >> 0x28) | uVar1 & 0x3f000000;
    }
    else {
      uVar4 = Ram00020000000000e8;
      *(uint *)(lVar8 + 0x108080000c87c) = uVar4 & 0xff | uVar1;
      *(undefined4 *)(lVar8 + 0x108080000c884) = 0x200;
    }
    goto LAB_0002b318;
  }
  Ram0002000000000148 = 1;
  iVar9 = Ram00020000000006f8;
  uVar1 = Ram0002000000000070;
  uVar1 = uVar1 >> 4;
  if (iVar9 < 0) {
LAB_0002b304:
    Ram0002000000000150 = 0;
    Ram00020000000001b0 = 6;
  }
  else {
    lVar3 = Ram0002000000000038;
    lVar5 = (long)(int)uVar1 << 0x24;
    if (lVar3 == 1) {
      lVar3 = *(long *)(lVar5 + 0x108080000c86c);
      uVar7 = (ulong)*(uint *)(lVar5 + 0x108080000c874) + 1;
    }
    else {
      lVar3 = *(long *)(lVar5 + 0x108080000c844) << 8;
      uVar7 = (ulong)((2 << ((long)*(int *)(lVar5 + 0x108080000c868) & 0x1fU)) - 1) &
              (ulong)*(uint *)(lVar5 + 0x108080000c84c) + 1;
    }
    uVar7 = (ulong)*(int *)(uVar7 * 4 + lVar3);
    if ((long)uVar7 < 0) goto LAB_0002b304;
    DAT_001010a0 = uVar1;
    if ((uVar7 >> 0x18 & 1) == 0) {
      lVar8 = Ram0002000000000038;
      if (lVar8 == 1) {
        lVar8 = *(long *)(lVar5 + 0x108080000c86c);
        uVar7 = (ulong)*(uint *)(lVar5 + 0x108080000c874) + 1;
      }
      else {
        lVar8 = *(long *)(lVar5 + 0x108080000c844) << 8;
        uVar7 = (ulong)((2 << ((long)*(int *)(lVar5 + 0x108080000c868) & 0x1fU)) - 1) &
                (ulong)*(uint *)(lVar5 + 0x108080000c84c) + 1;
      }
      iVar9 = *(int *)(uVar7 * 4 + lVar8);
      while (-1 < iVar9) {
        uVar4 = Ram0002000000000108;
        lVar8 = Ram0002000000000038;
        if ((uVar4 & 0x30000) == 0) {
          uVar6 = Ram0002000000000140;
          if ((uVar6 & 1) == 0) {
            uVar4 = Ram0002000000000180;
            if ((uVar4 & 1) != 0) {
              Ram0002000000000200 = (lVar8 != 0) + 6;
              Ram0002000000000220 = 4;
              Ram0002000000000080 = 2;
              Ram00020000000003c0 = 0;
              uVar1 = Ram0002000000000190;
              Ram0002000000000220 = 0;
              uVar6 = uVar1 >> 8 & 7;
              Ram00020000000004d0 = uVar6;
              uVar4 = Ram00020000000004a0;
              if ((uVar4 & 4) == 0) {
                *(undefined4 *)(((long)(int)(uVar1 >> 4) << 0x24) + 0x108080000c87c) = 0x60000000;
              }
              else {
                Ram00020000000004d8 = uVar6;
                lVar8 = (long)(int)(uVar1 >> 4) << 0x24;
                do {
                } while ((*(uint *)(lVar8 + 0x108080002e088) & 0x40000) != 0);
                iVar9 = 0x10;
                do {
                  Ram00020000000003c0 = 0;
                  iVar9 = iVar9 + -1;
                } while (iVar9 != 0);
                uVar1 = Ram0002000000000498;
                uVar7 = (ulong)uVar1 & 0x3f;
                Ram00020000000004e8 = (int)uVar7;
                Ram0002000000000070 = (int)uVar7;
                do {
                  uVar2 = Ram00020000000006f8;
                  Ram00020000000003c0 = uVar2;
                  uVar7 = (ulong)((int)uVar7 + -1);
                } while (uVar7 != 0);
                *(uint *)(lVar8 + 0x108080000c87c) = *(uint *)(lVar8 + 0x108080000c87c) | 0x10000000
                ;
                *(undefined4 *)(lVar8 + 0x108080000c884) = 0x200;
              }
              goto LAB_0002b318;
            }
          }
          else {
            Ram00020000000001f8 = (lVar8 != 0) + 6;
            lVar8 = FUN_000243e0((long)(int)uVar4);
            if (lVar8 != 0) goto LAB_0002b318;
          }
        }
        else {
          if ((uVar4 & 0x20000) != 0) {
            Ram0002000000000150 = 0;
            Ram0002000000000158 = 0;
            goto LAB_0002b318;
          }
          Ram00020000000001b8 = uVar4;
          FUN_00003450();
          DAT_00101086 = 0;
        }
        lVar8 = Ram0002000000000038;
        if (lVar8 == 1) {
          lVar8 = *(long *)(lVar5 + 0x108080000c86c);
          uVar7 = (ulong)*(uint *)(lVar5 + 0x108080000c874) + 1;
        }
        else {
          lVar8 = *(long *)(lVar5 + 0x108080000c844) << 8;
          uVar7 = (ulong)((2 << ((long)*(int *)(lVar5 + 0x108080000c868) & 0x1fU)) - 1) &
                  (ulong)*(uint *)(lVar5 + 0x108080000c84c) + 1;
        }
        iVar9 = *(int *)(uVar7 * 4 + lVar8);
      }
      goto LAB_0002b304;
    }
    if (lVar8 == 1) {
      uVar4 = *(uint *)(lVar5 + 0x108080000c878);
    }
    else {
      uVar4 = *(uint *)(lVar5 + 0x108080000c868);
    }
    uVar6 = Ram00020000000000e8;
    *(uint *)(lVar5 + 0x108080000c87c) =
         ((uint)lVar8 & 3) << 0xc | 0x80020100 | uVar4 & 0x800000 | uVar6 & 0xff;
    if ((((ulong)(long)(int)*(uint *)(lVar5 + 0x108080002e088) >> 8 & 0xff) == 0) &&
       ((*(uint *)(lVar5 + 0x108080002e088) >> 0x1c & 1) != 0)) {
      Ram00020000000005e8 = 3;
      goto LAB_0002b318;
    }
  }
  FUN_00024960((long)(int)uVar1);
LAB_0002b318:
  FUN_00024168();
  return;
}


/* ---- thunk_FUN_00024168 @ 0002b750 size=4 ---- */

void thunk_FUN_00024168(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  do {
    uVar2 = Ram0002000000000020;
    custom0();
    uVar3 = Ram00020000000006f8;
    uVar1 = Ram0002000000000010;
    (*(code *)(uVar1 & 0xfffffffffffffffe))(uVar3);
  } while( true );
}


/* ---- pm4_OP_04_handler @ 0002b758 size=52 ---- */

void pm4_OP_04_handler(void)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  iVar1 = Ram00020000000006f8;
  if (iVar1 == 1) {
    uVar3 = Ram00020000000006f8;
    lVar4 = Ram00020000000006f8;
    uVar2 = Ram00020000000006f8;
    Ram0002000000000210 = uVar2;
    Ram0002000000000218 = *(undefined8 *)(lVar4 << 0x20 | uVar3);
  }
  FUN_00024168();
  return;
}


/* ---- pm4_OP_09_handler @ 0002b790 size=232 ---- */

void pm4_OP_09_handler(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar3 = Ram00020000000006f8;
  Ram0002000000000200 = uVar3;
  Ram0002000000000220 = 4;
  Ram0002000000000080 = 2;
  Ram00020000000003c0 = 0;
  uVar1 = Ram0002000000000190;
  Ram0002000000000220 = 0;
  uVar4 = uVar1 >> 8 & 7;
  Ram00020000000004d0 = uVar4;
  uVar2 = Ram00020000000004a0;
  if ((uVar2 & 4) != 0) {
    Ram00020000000004d8 = uVar4;
    lVar6 = (long)(int)(uVar1 >> 4) << 0x24;
    do {
    } while ((*(uint *)(lVar6 + 0x108080002e088) & 0x40000) != 0);
    iVar5 = 0x10;
    do {
      Ram00020000000003c0 = 0;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    uVar1 = Ram0002000000000498;
    uVar7 = (ulong)uVar1 & 0x3f;
    Ram00020000000004e8 = (int)uVar7;
    Ram0002000000000070 = (int)uVar7;
    do {
      uVar3 = Ram00020000000006f8;
      Ram00020000000003c0 = uVar3;
      uVar7 = (ulong)((int)uVar7 + -1);
    } while (uVar7 != 0);
    *(uint *)(lVar6 + 0x108080000c87c) = *(uint *)(lVar6 + 0x108080000c87c) | 0x10000000;
    *(undefined4 *)(lVar6 + 0x108080000c884) = 0x200;
    return;
  }
  *(undefined4 *)(((long)(int)(uVar1 >> 4) << 0x24) + 0x108080000c87c) = 0x60000000;
  return;
}


/* ---- pm4_OP_0A_handler @ 0002b878 size=16 ---- */

void pm4_OP_0A_handler(void)

{
  undefined4 uVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram00020000000006f8;
  Ram00020000000001f8 = uVar1;
  Ram00020000000005e8 = 0;
  FUN_000243e0();
  return;
}


/* ---- pm4_OP_B7_handler @ 0002b888 size=8 ---- */

void pm4_OP_B7_handler(void)

{
  undefined4 uVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram00020000000006f8;
  FUN_00024168(uVar1);
  return;
}


/* ---- pm4_OP_54_handler @ 0002b898 size=212 ---- */

void pm4_OP_54_handler(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  ulong uVar7;
  uint *puVar8;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar2 = Ram0002000000000020;
  Ram0002000000000040 = 1;
  uVar3 = Ram00020000000006f8;
  uVar1 = Ram00020000000006f8;
  uVar7 = (ulong)uVar3 & 7;
  iVar5 = (int)(uVar7 << 2);
  if (3 < uVar7) {
    iVar5 = (int)uVar7 * 2 + 0x108;
  }
  puVar6 = (uint *)(((ulong)((long)(iVar5 + 0x7511) << 0x20) >> 0x1e) + 0x1000100000000);
  puVar8 = (uint *)((ulong)(iVar5 + 0x7510) * 4 + 0x1000100000000);
  if ((uVar3 & 0x8000) == 0) {
    *puVar8 = 0;
    *puVar6 = 0;
  }
  else {
    uVar1 = (uint)(((ulong)uVar1 << 0x32) >> 0x20);
    uVar4 = uVar1 >> 0x12;
    *puVar8 = ((int)(short)(uVar3 >> 0x10) & 0xffU) << 8 | uVar1 >> 0x12 & 0xff | 0x400000;
    *puVar6 = (int)uVar4 >> 8 & 0xfU | ((int)uVar4 >> 0xc) << 0x1d;
  }
  Ram0002000000000040 = uVar2;
  FUN_00024168();
  return;
}


/* ---- pm4_OP_0B_handler @ 0002b970 size=1176 ---- */

void pm4_OP_0B_handler(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000190;
  uVar10 = Ram00020000000006f8;
  if ((int)uVar10 < 0) {
    lVar8 = Ram0002000000000038;
    Ram0002000000000080 = lVar8 + -1;
    Ram00020000000003c0 = 0;
    return;
  }
  Ram0002000000000080 = uVar10 & 1;
  Ram00020000000003c0 = 0;
  *(undefined4 *)(((long)(int)(uVar1 >> 4) << 0x24) + 0x108080000c87c) = 0x20000000;
  uVar7 = uVar10 >> 1 & 0xf;
  if (uVar7 == 3) {
    lVar4 = (long)DAT_001010a0;
    lVar8 = Ram0002000000000038;
    lVar5 = lVar4 << 0x24;
    if (lVar8 == 1) {
      lVar8 = *(long *)(lVar5 + 0x108080000c86c);
      uVar10 = (ulong)*(uint *)(lVar5 + 0x108080000c874) + 1;
    }
    else {
      lVar8 = *(long *)(lVar5 + 0x108080000c844) << 8;
      uVar10 = (ulong)((2 << ((long)*(int *)(lVar5 + 0x108080000c868) & 0x1fU)) - 1) &
               (ulong)*(uint *)(lVar5 + 0x108080000c84c) + 1;
    }
    iVar9 = *(int *)(uVar10 * 4 + lVar8);
    while (-1 < iVar9) {
      uVar1 = Ram0002000000000108;
      lVar8 = Ram0002000000000038;
      if ((uVar1 & 0x30000) == 0) {
        uVar2 = Ram0002000000000140;
        if ((uVar2 & 1) == 0) {
          uVar1 = Ram0002000000000180;
          if ((uVar1 & 1) != 0) {
            Ram0002000000000200 = (lVar8 != 0) + 6;
            Ram0002000000000220 = 4;
            Ram0002000000000080 = 2;
            Ram00020000000003c0 = 0;
            uVar1 = Ram0002000000000190;
            Ram0002000000000220 = 0;
            uVar6 = uVar1 >> 8 & 7;
            Ram00020000000004d0 = uVar6;
            uVar2 = Ram00020000000004a0;
            if ((uVar2 & 4) == 0) {
              *(undefined4 *)(((long)(int)(uVar1 >> 4) << 0x24) + 0x108080000c87c) = 0x60000000;
            }
            else {
              Ram00020000000004d8 = uVar6;
              lVar8 = (long)(int)(uVar1 >> 4) << 0x24;
              do {
              } while ((*(uint *)(lVar8 + 0x108080002e088) & 0x40000) != 0);
              iVar9 = 0x10;
              do {
                Ram00020000000003c0 = 0;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
              uVar1 = Ram0002000000000498;
              uVar10 = (ulong)uVar1 & 0x3f;
              Ram00020000000004e8 = (int)uVar10;
              Ram0002000000000070 = (int)uVar10;
              do {
                uVar3 = Ram00020000000006f8;
                Ram00020000000003c0 = uVar3;
                uVar10 = (ulong)((int)uVar10 + -1);
              } while (uVar10 != 0);
              *(uint *)(lVar8 + 0x108080000c87c) = *(uint *)(lVar8 + 0x108080000c87c) | 0x10000000;
              *(undefined4 *)(lVar8 + 0x108080000c884) = 0x200;
            }
            goto LAB_0002ba24;
          }
        }
        else {
          Ram00020000000001f8 = (lVar8 != 0) + 6;
          lVar8 = FUN_000243e0((long)(int)uVar1);
          if (lVar8 != 0) goto LAB_0002ba24;
        }
      }
      else {
        if ((uVar1 & 0x20000) != 0) {
          Ram0002000000000150 = 0;
          Ram0002000000000158 = 0;
          goto LAB_0002ba24;
        }
        Ram00020000000001b8 = uVar1;
        FUN_00003450();
        DAT_00101086 = 0;
      }
      lVar8 = Ram0002000000000038;
      if (lVar8 == 1) {
        lVar8 = *(long *)(lVar5 + 0x108080000c86c);
        uVar10 = (ulong)*(uint *)(lVar5 + 0x108080000c874) + 1;
      }
      else {
        lVar8 = *(long *)(lVar5 + 0x108080000c844) << 8;
        uVar10 = (ulong)((2 << ((long)*(int *)(lVar5 + 0x108080000c868) & 0x1fU)) - 1) &
                 (ulong)*(uint *)(lVar5 + 0x108080000c84c) + 1;
      }
      iVar9 = *(int *)(uVar10 * 4 + lVar8);
    }
    Ram0002000000000150 = 0;
    Ram00020000000001b0 = 6;
    FUN_00024960(lVar4);
  }
  else if ((uVar10 >> 1 & 0xc) == 0) {
    if (uVar7 == 1) {
      FUN_000245c0();
    }
    else if (uVar7 == 2) {
      FUN_00024c08((long)DAT_0010109c,(long)DAT_00101098,DAT_00101090);
    }
  }
  else if (uVar7 == 7) {
    iVar9 = Ram00020000000007d8;
    if (iVar9 == 2) {
      Ram00020000000007d8 = 0;
      FUN_000352b8((long)DAT_00101108,(long)DAT_00101100,(long)DAT_00101104);
    }
    else if (iVar9 == 1) {
      Ram00020000000007d8 = 0;
      FUN_00034dc8((long)DAT_00101108,(long)DAT_0010110c,(long)DAT_00101110,DAT_00101118,
                   DAT_00101120,DAT_00101128,DAT_00101130,DAT_00101138);
    }
  }
LAB_0002ba24:
  iVar9 = Ram00020000000007d8;
  if (iVar9 == 3) {
    Ram00020000000007d8 = 0;
    FUN_0002e108((long)DAT_00101150,(long)DAT_00101154,DAT_00101158,DAT_00101160,DAT_00101168,
                 DAT_00101170,(long)DAT_00101178,1);
    return;
  }
  return;
}


/* ---- pm4_RUN_CLEANER_SHADER_handler @ 0002be08 size=68 ---- */

void pm4_RUN_CLEANER_SHADER_handler(void)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar3 = Ram00020000000006f8;
  uVar2 = Ram0002000000000070;
  uVar1 = Ram0002000000000038;
  Ram0002000000000080 = 4;
  Ram00020000000003c0 = 0;
  FUN_00025e50();
  Ram0002000000000470 = 1;
  FUN_00025ee0(uVar2 >> 4,uVar1);
  Ram0002000000000470 = 0;
  Ram0002000000000080 = uVar1;
  Ram00020000000003c0 = 0;
  FUN_00024168();
  return;
}


/* ---- pm4_OP_3D_handler @ 0002be50 size=16 ---- */

void pm4_OP_3D_handler(void)

{
  uint uVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram00020000000006f8;
  Ram0002000000000220 = uVar1 & 7;
  FUN_00024168();
  return;
}


/* ---- pm4_SET_QUEUE_REG_handler @ 0002be68 size=16 ---- */

void pm4_SET_QUEUE_REG_handler(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- pm4_SET_SH_REG_handler @ 0002be78 size=196 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pm4_SET_SH_REG_handler(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar2 = Ram00020000000006f8;
  uVar4 = (ulong)(param_1 << 0x22) >> 0x32;
  Ram00020000000000a8 = 2;
  puVar6 = &DAT_00002c00 + uVar2;
  if ((uVar2 & 0x10000000) != 0) {
    puVar6 = (undefined *)((uVar2 & 0xffff) + 0x2c01);
    uVar8 = uVar2 >> 0x17 & 0x1f;
    uVar3 = Ram00020000000006f8;
    *(uint *)((long)(&DAT_00002c00 + (uVar2 & 0xffff)) * 4 + 0x1000200000000) =
         (uint)(_DAT_2000000000ab8 << uVar8) | ~(uint)(0xfL << uVar8) & (uint)uVar3;
    uVar4 = uVar4 - 1;
  }
  puVar5 = puVar6 + uVar4;
  if (puVar6 < puVar5) {
    puVar7 = (undefined4 *)((long)puVar6 * 4 + 0x1000200000000);
    do {
      puVar6 = puVar6 + 1;
      uVar1 = Ram00020000000006f8;
      *puVar7 = uVar1;
      puVar7 = puVar7 + 1;
    } while (puVar5 != puVar6);
  }
  Ram00020000000000a8 = 0;
  return;
}


/* ---- pm4_OP_BB_handler @ 0002bf40 size=352 ---- */

void pm4_OP_BB_handler(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar8 = Ram00020000000006f8;
  Ram00020000000000a8 = 2;
  uVar7 = uVar8;
  if (7 < uVar8) {
    do {
      uVar7 = uVar7 - 8;
      uVar5 = Ram00020000000006f8;
      uVar1 = Ram00020000000006f8;
      uVar2 = Ram00020000000006f8;
      uVar6 = Ram00020000000006f8;
      uVar3 = Ram00020000000006f8;
      uVar4 = Ram00020000000006f8;
      *(undefined4 *)((long)(&DAT_00002c00 + (uVar5 & 0x7ff)) * 4 + 0x1000200000000) = uVar1;
      *(undefined4 *)((long)(&DAT_00002c00 + (uVar5 >> 0x10)) * 4 + 0x1000200000000) = uVar2;
      uVar5 = Ram00020000000006f8;
      uVar1 = Ram00020000000006f8;
      uVar2 = Ram00020000000006f8;
      *(undefined4 *)((long)(&DAT_00002c00 + (uVar6 & 0x7ff)) * 4 + 0x1000200000000) = uVar3;
      *(undefined4 *)((long)(&DAT_00002c00 + (uVar6 >> 0x10)) * 4 + 0x1000200000000) = uVar4;
      uVar6 = Ram00020000000006f8;
      uVar3 = Ram00020000000006f8;
      uVar4 = Ram00020000000006f8;
      *(undefined4 *)((long)(&DAT_00002c00 + (uVar5 & 0x7ff)) * 4 + 0x1000200000000) = uVar1;
      *(undefined4 *)((long)(&DAT_00002c00 + (uVar5 >> 0x10)) * 4 + 0x1000200000000) = uVar2;
      *(undefined4 *)((long)(&DAT_00002c00 + (uVar6 & 0x7ff)) * 4 + 0x1000200000000) = uVar3;
      *(undefined4 *)((long)(&DAT_00002c00 + (uVar6 >> 0x10)) * 4 + 0x1000200000000) = uVar4;
    } while (7 < uVar7);
    uVar8 = uVar8 & 7;
  }
  while (uVar8 != 0) {
    uVar8 = uVar8 - 2;
    uVar7 = Ram00020000000006f8;
    uVar1 = Ram00020000000006f8;
    uVar2 = Ram00020000000006f8;
    *(undefined4 *)((long)(&DAT_00002c00 + (uVar7 & 0x7ff)) * 4 + 0x1000200000000) = uVar1;
    *(undefined4 *)((long)(&DAT_00002c00 + (uVar7 >> 0x10)) * 4 + 0x1000200000000) = uVar2;
  }
  Ram00020000000000a8 = 0;
  return;
}


/* ---- pm4_OP_BD_handler @ 0002c0a0 size=52 ---- */

void pm4_OP_BD_handler(void)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar5 = Ram00020000000006f8;
  Ram00020000000000a8 = 2;
  uVar4 = Ram00020000000006f8;
  uVar8 = Ram00020000000006f8;
  uVar7 = Ram00020000000006f8;
  uVar6 = uVar4 & 0x7ff;
  uVar4 = uVar4 >> 0x10;
  switch(uVar5 & 0xe) {
  case 0:
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  case 2:
    *(undefined4 *)((long)(&DAT_00002c00 + uVar6) * 4 + 0x1000200000000) = uVar8;
    *(undefined4 *)((long)(&DAT_00002c00 + uVar4) * 4 + 0x1000200000000) = uVar7;
    Ram00020000000000a8 = 0;
    return;
  case 4:
    uVar5 = Ram00020000000006f8;
    uVar10 = Ram00020000000006f8;
    uVar9 = Ram00020000000006f8;
    *(undefined4 *)((long)(&DAT_00002c00 + uVar6) * 4 + 0x1000200000000) = uVar8;
    *(undefined4 *)((long)(&DAT_00002c00 + uVar4) * 4 + 0x1000200000000) = uVar7;
    *(undefined4 *)((long)(&DAT_00002c00 + (uVar5 & 0x7ff)) * 4 + 0x1000200000000) = uVar10;
    *(undefined4 *)((long)(&DAT_00002c00 + (uVar5 >> 0x10)) * 4 + 0x1000200000000) = uVar9;
    Ram00020000000000a8 = 0;
    return;
  case 6:
    uVar5 = Ram00020000000006f8;
    uVar10 = Ram00020000000006f8;
    uVar9 = Ram00020000000006f8;
    *(undefined4 *)((long)(&DAT_00002c00 + uVar6) * 4 + 0x1000200000000) = uVar8;
    *(undefined4 *)((long)(&DAT_00002c00 + uVar4) * 4 + 0x1000200000000) = uVar7;
    uVar4 = Ram00020000000006f8;
    uVar8 = Ram00020000000006f8;
    uVar7 = Ram00020000000006f8;
    *(undefined4 *)((long)(&DAT_00002c00 + (uVar5 & 0x7ff)) * 4 + 0x1000200000000) = uVar10;
    *(undefined4 *)((long)(&DAT_00002c00 + (uVar5 >> 0x10)) * 4 + 0x1000200000000) = uVar9;
    *(undefined4 *)((long)(&DAT_00002c00 + (uVar4 & 0x7ff)) * 4 + 0x1000200000000) = uVar8;
    *(undefined4 *)((long)(&DAT_00002c00 + (uVar4 >> 0x10)) * 4 + 0x1000200000000) = uVar7;
    Ram00020000000000a8 = 0;
    return;
  case 8:
    uVar1 = Ram00020000000006f8;
    uVar10 = Ram00020000000006f8;
    uVar9 = Ram00020000000006f8;
    *(undefined4 *)((long)(&DAT_00002c00 + uVar6) * 4 + 0x1000200000000) = uVar8;
    *(undefined4 *)((long)(&DAT_00002c00 + uVar4) * 4 + 0x1000200000000) = uVar7;
    uVar5 = Ram00020000000006f8;
    uVar8 = Ram00020000000006f8;
    uVar7 = Ram00020000000006f8;
    break;
  case 10:
    uVar5 = Ram00020000000006f8;
    uVar2 = Ram00020000000006f8;
    uVar3 = Ram00020000000006f8;
    *(undefined4 *)((long)(&DAT_00002c00 + uVar6) * 4 + 0x1000200000000) = uVar8;
    *(undefined4 *)((long)(&DAT_00002c00 + uVar4) * 4 + 0x1000200000000) = uVar7;
    uVar1 = Ram00020000000006f8;
    uVar10 = Ram00020000000006f8;
    uVar9 = Ram00020000000006f8;
    *(undefined4 *)((long)(&DAT_00002c00 + (uVar5 & 0x7ff)) * 4 + 0x1000200000000) = uVar2;
    *(undefined4 *)((long)(&DAT_00002c00 + (uVar5 >> 0x10)) * 4 + 0x1000200000000) = uVar3;
    uVar5 = Ram00020000000006f8;
    uVar8 = Ram00020000000006f8;
    uVar7 = Ram00020000000006f8;
    break;
  case 0xc:
    uVar5 = Ram00020000000006f8;
    uVar10 = Ram00020000000006f8;
    uVar9 = Ram00020000000006f8;
    *(undefined4 *)((long)(&DAT_00002c00 + uVar6) * 4 + 0x1000200000000) = uVar8;
    *(undefined4 *)((long)(&DAT_00002c00 + uVar4) * 4 + 0x1000200000000) = uVar7;
    uVar4 = Ram00020000000006f8;
    uVar8 = Ram00020000000006f8;
    uVar7 = Ram00020000000006f8;
    *(undefined4 *)((long)(&DAT_00002c00 + (uVar5 & 0x7ff)) * 4 + 0x1000200000000) = uVar10;
    *(undefined4 *)((long)(&DAT_00002c00 + (uVar5 >> 0x10)) * 4 + 0x1000200000000) = uVar9;
    uVar6 = Ram00020000000006f8;
    uVar10 = Ram00020000000006f8;
    uVar9 = Ram00020000000006f8;
    *(undefined4 *)((long)(&DAT_00002c00 + (uVar4 & 0x7ff)) * 4 + 0x1000200000000) = uVar8;
    *(undefined4 *)((long)(&DAT_00002c00 + (uVar4 >> 0x10)) * 4 + 0x1000200000000) = uVar7;
    uVar5 = Ram00020000000006f8;
    uVar8 = Ram00020000000006f8;
    uVar7 = Ram00020000000006f8;
    *(undefined4 *)((long)(&DAT_00002c00 + (uVar6 & 0x7ff)) * 4 + 0x1000200000000) = uVar10;
    *(undefined4 *)((long)(&DAT_00002c00 + (uVar6 >> 0x10)) * 4 + 0x1000200000000) = uVar9;
    goto code_r0x0002c2b0;
  case 0xe:
    uVar5 = Ram00020000000006f8;
    uVar10 = Ram00020000000006f8;
    uVar9 = Ram00020000000006f8;
    *(undefined4 *)((long)(&DAT_00002c00 + uVar6) * 4 + 0x1000200000000) = uVar8;
    *(undefined4 *)((long)(&DAT_00002c00 + uVar4) * 4 + 0x1000200000000) = uVar7;
    uVar4 = Ram00020000000006f8;
    uVar8 = Ram00020000000006f8;
    uVar7 = Ram00020000000006f8;
    *(undefined4 *)((long)(&DAT_00002c00 + (uVar5 & 0x7ff)) * 4 + 0x1000200000000) = uVar10;
    *(undefined4 *)((long)(&DAT_00002c00 + (uVar5 >> 0x10)) * 4 + 0x1000200000000) = uVar9;
    uVar5 = Ram00020000000006f8;
    uVar10 = Ram00020000000006f8;
    uVar9 = Ram00020000000006f8;
    *(undefined4 *)((long)(&DAT_00002c00 + (uVar4 & 0x7ff)) * 4 + 0x1000200000000) = uVar8;
    *(undefined4 *)((long)(&DAT_00002c00 + (uVar4 >> 0x10)) * 4 + 0x1000200000000) = uVar7;
    uVar4 = Ram00020000000006f8;
    uVar8 = Ram00020000000006f8;
    uVar7 = Ram00020000000006f8;
    *(undefined4 *)((long)(&DAT_00002c00 + (uVar5 & 0x7ff)) * 4 + 0x1000200000000) = uVar10;
    *(undefined4 *)((long)(&DAT_00002c00 + (uVar5 >> 0x10)) * 4 + 0x1000200000000) = uVar9;
    uVar5 = Ram00020000000006f8;
    uVar10 = Ram00020000000006f8;
    uVar9 = Ram00020000000006f8;
    *(undefined4 *)((long)(&DAT_00002c00 + (uVar4 & 0x7ff)) * 4 + 0x1000200000000) = uVar8;
    *(undefined4 *)((long)(&DAT_00002c00 + (uVar4 >> 0x10)) * 4 + 0x1000200000000) = uVar7;
    uVar4 = Ram00020000000006f8;
    uVar8 = Ram00020000000006f8;
    uVar7 = Ram00020000000006f8;
    *(undefined4 *)((long)(&DAT_00002c00 + (uVar5 & 0x7ff)) * 4 + 0x1000200000000) = uVar10;
    *(undefined4 *)((long)(&DAT_00002c00 + (uVar5 >> 0x10)) * 4 + 0x1000200000000) = uVar9;
    *(undefined4 *)((long)(&DAT_00002c00 + (uVar4 & 0x7ff)) * 4 + 0x1000200000000) = uVar8;
    *(undefined4 *)((long)(&DAT_00002c00 + (uVar4 >> 0x10)) * 4 + 0x1000200000000) = uVar7;
    Ram00020000000000a8 = 0;
    return;
  }
  *(undefined4 *)((long)(&DAT_00002c00 + (uVar1 & 0x7ff)) * 4 + 0x1000200000000) = uVar10;
  *(undefined4 *)((long)(&DAT_00002c00 + (uVar1 >> 0x10)) * 4 + 0x1000200000000) = uVar9;
code_r0x0002c2b0:
  uVar4 = Ram00020000000006f8;
  uVar10 = Ram00020000000006f8;
  uVar9 = Ram00020000000006f8;
  *(undefined4 *)((long)(&DAT_00002c00 + (uVar5 & 0x7ff)) * 4 + 0x1000200000000) = uVar8;
  *(undefined4 *)((long)(&DAT_00002c00 + (uVar5 >> 0x10)) * 4 + 0x1000200000000) = uVar7;
  *(undefined4 *)((long)(&DAT_00002c00 + (uVar4 & 0x7ff)) * 4 + 0x1000200000000) = uVar10;
  *(undefined4 *)((long)(&DAT_00002c00 + (uVar4 >> 0x10)) * 4 + 0x1000200000000) = uVar9;
  Ram00020000000000a8 = 0;
  return;
}


/* ---- pm4_SET_SH_REG_INDEX_handler @ 0002c5f0 size=380 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pm4_SET_SH_REG_INDEX_handler(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  ulong uVar9;
  undefined4 *puVar10;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar6 = (ulong)(param_1 << 0x22) >> 0x32;
  uVar3 = Ram00020000000006f8;
  uVar7 = (ulong)(int)((uVar3 & 0xffff) + 0x2c00);
  Ram00020000000000a8 = 2;
  uVar1 = uVar3 >> 0x1c;
  uVar2 = (uint)((ulong)(param_1 << 0x22) >> 0x20);
  if (uVar1 == 1) {
    uVar6 = (long)(int)(uVar3 >> 0x17) & 0x1f;
    uVar5 = Ram00020000000006f8;
    uVar9 = (ulong)((uVar3 & 0xffff) + 0x2c01);
    *(uint *)(uVar7 * 4 + 0x1000200000000) =
         (uint)(_DAT_2000000000ab8 << uVar6) | ~(uint)(0xfL << uVar6) & (uint)uVar5;
    uVar6 = (long)(int)((uVar2 >> 0x12) - 1) + uVar9;
    if (uVar9 < uVar6) {
      puVar10 = (undefined4 *)(uVar9 * 4 + 0x1000200000000);
      do {
        uVar4 = Ram00020000000006f8;
        *puVar10 = uVar4;
        puVar10 = puVar10 + 1;
      } while (puVar10 != (undefined4 *)((uVar6 + 0x400080000000) * 4));
    }
  }
  else if (uVar1 == 3) {
    uVar1 = (uint)_DAT_3000000000020;
    if (uVar6 != 0) {
      puVar8 = (uint *)(uVar7 * 4 + 0x1000200000000);
      do {
        uVar3 = Ram00020000000006f8;
        *puVar8 = uVar1 & uVar3;
        puVar8 = puVar8 + 1;
      } while (puVar8 != (uint *)(((ulong)((uVar2 >> 0x12) - 1) + 0x400080000001 + uVar7) * 4));
      Ram00020000000000a8 = 0;
      return;
    }
  }
  else {
    if (uVar1 != 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    uVar6 = uVar6 + uVar7;
    if (uVar7 < uVar6) {
      puVar10 = (undefined4 *)(uVar7 * 4 + 0x1000200000000);
      do {
        uVar4 = Ram00020000000006f8;
        *puVar10 = uVar4;
        puVar10 = puVar10 + 1;
      } while ((undefined4 *)((uVar6 + 0x400080000000) * 4) != puVar10);
      Ram00020000000000a8 = 0;
      return;
    }
  }
  Ram00020000000000a8 = 0;
  return;
}


/* ---- sub_2c770 @ 0002c770 size=4 ---- */

void sub_2c770(void)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  return;
}


/* ---- sub_2c778 @ 0002c778 size=4 ---- */

void sub_2c778(void)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  return;
}


/* ---- pm4_SET_UCONFIG_REG_handler @ 0002c780 size=96 ---- */

void pm4_SET_UCONFIG_REG_handler(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram00020000000000a8 = 2;
  uVar1 = Ram00020000000006f8;
  uVar4 = (ulong)(int)((uVar1 & 0xffff) + 0xc000);
  uVar3 = ((ulong)(param_1 << 0x22) >> 0x32) + uVar4;
  if (uVar4 < uVar3) {
    puVar5 = (undefined4 *)(uVar4 * 4 + 0x1000300000000);
    do {
      uVar2 = Ram00020000000006f8;
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
    } while (puVar5 != (undefined4 *)((uVar3 + 0x4000c0000000) * 4));
  }
  Ram00020000000000a8 = 0;
  return;
}


/* ---- pm4_SET_CONFIG_REG_handler @ 0002c7e0 size=236 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pm4_SET_CONFIG_REG_handler(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram00020000000006f8;
  uVar6 = (ulong)(param_1 << 0x22) >> 0x32;
  uVar4 = (ulong)(int)((uVar1 & 0xffff) + 0x2000);
  Ram00020000000000a8 = 2;
  if (uVar1 >> 0x1c != 0) {
    if (uVar1 >> 0x1c != 1) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    uVar6 = (long)(int)(uVar1 >> 0x17) & 0x1f;
    uVar3 = Ram00020000000006f8;
    *(uint *)(uVar4 * 4 + 0x1000300000000) =
         (uint)(_DAT_2000000000ab8 << uVar6) | ~(uint)(0xfL << uVar6) & (uint)uVar3;
    uVar6 = (ulong)(int)((uint)((ulong)(param_1 << 0x22) >> 0x32) - 1);
    uVar4 = (long)(int)((uVar1 & 0xffff) + 0x2001);
  }
  uVar6 = (uVar6 & 0xffffffff) + uVar4;
  if (uVar4 < uVar6) {
    puVar5 = (undefined4 *)(uVar4 * 4 + 0x1000300000000);
    do {
      uVar2 = Ram00020000000006f8;
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
    } while (puVar5 != (undefined4 *)((uVar6 + 0x4000c0000000) * 4));
  }
  Ram00020000000000a8 = 0;
  return;
}


/* ---- pm4_LOAD_SH_REG_INDEX_handler @ 0002c8d0 size=276 ---- */

void pm4_LOAD_SH_REG_INDEX_handler(void)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar3 = Ram00020000000006f8;
  uVar4 = Ram00020000000006f8;
  uVar5 = Ram00020000000006f8;
  uVar6 = Ram00020000000006f8;
  if (uVar6 == 0) {
    return;
  }
  uVar9 = (ulong)uVar6 & 0x3fff;
  uVar7 = (ulong)uVar3 & 0xfffffffffffffffc | (ulong)uVar4 << 0x20;
  if (((ulong)uVar3 & 3) == 2) {
    Ram0002000000000390 = uVar7;
    puVar2 = (undefined8 *)Ram0002000000000390;
    Ram0002000000000390 = *puVar2;
    piVar8 = (int *)Ram0002000000000390;
    Ram00020000000000a8 = 2;
  }
  else {
    Ram0002000000000390 = uVar7;
    piVar8 = (int *)Ram0002000000000390;
    Ram00020000000000a8 = 2;
  }
  if (-1 < (int)uVar5) {
    iVar1 = (uVar5 & 0xffff) + 0x2c00;
    do {
      *(int *)(((ulong)((long)iVar1 << 0x20) >> 0x1e) + 0x1000200000000) = *piVar8;
      uVar9 = uVar9 - 1;
      piVar8 = piVar8 + 1;
      iVar1 = iVar1 + 1;
    } while (uVar9 != 0);
    Ram00020000000000a8 = 0;
    return;
  }
  do {
    uVar9 = uVar9 - 1;
    *(int *)(((ulong)((long)(*piVar8 + 0x2c00) << 0x20) >> 0x1e) + 0x1000200000000) = piVar8[1];
    piVar8 = piVar8 + 2;
  } while (uVar9 != 0);
  Ram00020000000000a8 = 0;
  return;
}


/* ---- pm4_ACQUIRE_MEM_handler @ 0002c9e8 size=168 ---- */

void pm4_ACQUIRE_MEM_handler(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar2 = Ram00020000000006f8;
  uVar5 = Ram00020000000006f8;
  lVar4 = Ram00020000000006f8;
  uVar6 = Ram00020000000006f8;
  lVar7 = Ram00020000000006f8;
  uVar2 = Ram00020000000006f8;
  uVar3 = Ram00020000000006f8;
  if ((ulong)uVar3 << 0x2d == 0) goto LAB_0002ca44;
  uVar6 = lVar7 << 0x20 | uVar6;
  lVar7 = uVar6 << 1;
  uVar5 = lVar4 << 0x20 | uVar5;
  uVar1 = (uint)(((ulong)uVar3 << 0x2d) >> 0x20);
  lVar4 = lVar7;
  if (uVar5 != 0) {
    lVar4 = (uVar6 + uVar5) * 2;
    if ((uVar3 & 0xe400) == 0) {
LAB_0002ca74:
      if ((uVar3 & 0x200) != 0) {
        if ((uVar1 >> 0xf & 3) == 2) goto LAB_0002ca8c;
      }
    }
    else {
      if ((uVar1 >> 0x18 & 3) != 2) goto LAB_0002ca74;
LAB_0002ca8c:
      lVar4 = lVar4 + -1;
    }
  }
  fence();
  Ram0002000000000508 = lVar7;
  Ram0002000000000510 = lVar4;
  Ram0002000000000518 = uVar1 >> 0xd;
  do {
    lVar4 = Ram00020000000004b8;
  } while (lVar4 != 0);
LAB_0002ca44:
  FUN_00024168();
  return;
}


/* ---- pm4_OP_0D_handler @ 0002ca98 size=880 ---- */

/* WARNING: Removing unreachable block (ram,0x0002cba0) */
/* WARNING: Removing unreachable block (ram,0x0002cb8c) */
/* WARNING: Removing unreachable block (ram,0x0002cb94) */
/* WARNING: Removing unreachable block (ram,0x0002cd68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pm4_OP_0D_handler(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram00020000000001d8 = param_1;
  uVar3 = Ram0002000000000070;
  uVar11 = (long)(int)(uVar3 >> 4) & 0xfU | (long)(int)(param_1 >> 1) & 0x70U;
  lVar10 = uVar11 << 0x24;
  if (((ulong)(long)*(int *)(lVar10 + 0x108080000c8c0) >> 0x15 & 1) != 0) {
    do {
      uVar1 = Ram00020000000006f8;
      iVar2 = Ram00020000000003a8;
    } while (iVar2 != 0);
    FUN_00025890(uVar11);
    return;
  }
  Ram0002000000000488 = *(uint *)(lVar10 + 0x108080000c834) >> 0x1b & 8 | 0x800;
  if ((param_1 & 4) != 0) {
    FUN_00036f68((long)(int)param_1);
    return;
  }
  *(uint *)(lVar10 + 0x108080000c8c0) = (param_1 & 8) << 10 | 0x4000;
  uVar3 = Ram00020000000006f8;
  uVar6 = Ram00020000000006f8;
  if ((uVar3 & 0x80) != 0) {
    uVar1 = Ram0002000000000020;
    Ram0002000000000040 = 1;
    iVar2 = Ram0002000000000030;
    if ((_DAT_100010000c6c0 >> 0xc & 3) != 0 || iVar2 != 0) {
      do {
      } while( true );
    }
    if ((_DAT_100010000c6c0 & 1) != 0) {
      _DAT_100010000c6c0 = 0;
    }
    Ram0002000000000040 = uVar1;
  }
  if ((param_1 & 8) != 0) {
    Ram0002000000000448 = uVar6 & 0xf | 0xc10;
    uVar4 = Ram00020000000000e8;
  }
  uVar12 = Ram00020000000006f8;
  lVar10 = Ram00020000000006f8;
  uVar12 = lVar10 << 0x20 | uVar12;
  uVar5 = Ram00020000000006f8;
  uVar1 = Ram00020000000006f8;
  uVar7 = Ram00020000000006f8;
  if ((uVar6 & 0xc00000) != 0) {
    uVar9 = uVar6 >> 0x16 & 3;
    if (uVar9 == 2) {
      uVar8 = (long)(int)(uVar6 >> 0x14) << 0x3e;
      do {
        uVar3 = Ram00020000000004e0;
      } while ((uVar3 & 0x10) != 0);
      Ram00020000000005c8 =
           (ulong)((long)*(int *)((uVar11 << 0x24) + 0x108080000c860) << 0x24) >> 0x26 |
           ((ulong)uVar5 << 0x20) >> 6 | uVar8 | 0x800000000000000;
    }
    else {
      if (uVar9 != 3) {
        if (uVar9 == 0) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        do {
          uVar5 = Ram00020000000004e0;
        } while ((uVar5 & 0x10) != 0);
        Ram00020000000005c8 = (long)(int)(uVar6 >> 0x14) << 0x3e | 0x400000000000000;
        goto LAB_0002cc60;
      }
      uVar8 = (long)(int)(uVar6 >> 0x14) << 0x3e;
    }
    uVar3 = Ram0002000000000068;
    do {
      uVar6 = Ram00020000000004e0;
    } while ((uVar6 & 0x10) != 0);
    Ram00020000000005c8 =
         ((long)*(int *)((uVar11 << 0x24) + 0x108080000c830) & 0xfU) << 0x30 | (ulong)uVar3 << 0x36
         | uVar12 & 0xffffffffffff | uVar8 | in_mhartid << 0x34 | 0xc00000000000000;
    uVar3 = Ram00020000000002d0;
    if ((uVar3 & 8) == 0) {
      Ram00020000000001e8 = 1;
    }
    FUN_00025900();
    Ram0002000000000448 = 0x800;
    uVar4 = Ram00020000000000e8;
    return;
  }
LAB_0002cc60:
  if ((uVar3 >> 0x12 & 1) != 0) {
    fence();
    Ram0002000000000508 = uVar12 >> 7;
    Ram0002000000000510 = CONCAT44(uVar7,uVar1) >> 7;
    Ram0002000000000518 = uVar3 >> 8 & 0x30 | (uVar3 >> 0xe) << 8;
    do {
      lVar10 = Ram00020000000004b8;
    } while (lVar10 != 0);
  }
  Ram0002000000000040 = param_1 >> 4 & 1;
                    /* WARNING: Could not recover jumptable at 0x0002ccd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_0002ccd4 + (int)((uVar6 >> 0x1d) << 2)))();
  return;
}


/* ---- FUN_0002d0b8 @ 0002d0b8 size=44 ---- */

void FUN_0002d0b8(void)

{
  undefined8 uVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram00020000000001e8 = 1;
  FUN_00025900();
  Ram0002000000000448 = 0x800;
  uVar1 = Ram00020000000000e8;
  return;
}


/* ---- sub_2d214 @ 0002d214 size=100 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_2d214(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  do {
    iVar3 = Ram0002000000000090;
  } while (iVar3 != 0);
  uVar1 = Ram0002000000000020;
  Ram0002000000000040 = 1;
  uVar2 = Ram0002000000000070;
  do {
  } while (_DAT_100010000c2d4 != 0);
  _DAT_100010000c0dc = (undefined4)(((long)(int)(uVar2 >> 8) & 7U) << 0x1c);
  _DAT_100010000c0e8 = 0x10000;
  _DAT_100010000c2d4 = 0x4000000;
  Ram0002000000000040 = uVar1;
  uVar2 = Ram00020000000002d0;
  _DAT_100010000c2dc = param_1;
  if ((uVar2 & 8) != 0) {
    FUN_00025900();
    Ram0002000000000448 = 0x800;
    uVar4 = Ram00020000000000e8;
    return;
  }
  FUN_0002d0b8();
  return;
}


/* ---- sub_2d278 @ 0002d278 size=56 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_2d278(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  do {
    iVar3 = Ram0002000000000090;
  } while (iVar3 != 0);
  uVar1 = Ram0002000000000020;
  Ram0002000000000040 = 1;
  uVar2 = Ram0002000000000070;
  do {
  } while (_DAT_100010000c2d4 != 0);
  _DAT_100010000c0dc = (undefined4)(((long)(int)(uVar2 >> 8) & 7U) << 0x1c);
  _DAT_100010000c0e8 = 0x10000;
  _DAT_100010000c2d4 = 0x4000000;
  Ram0002000000000040 = uVar1;
  uVar2 = Ram00020000000002d0;
  _DAT_100010000c2dc = param_1;
  if ((uVar2 & 8) != 0) {
    FUN_00025900();
    Ram0002000000000448 = 0x800;
    uVar4 = Ram00020000000000e8;
    return;
  }
  FUN_0002d0b8();
  return;
}


/* ---- sub_2d2b0 @ 0002d2b0 size=16 ---- */

void sub_2d2b0(void)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  do {
    iVar1 = Ram0002000000000090;
  } while (iVar1 != 0);
  uVar3 = Ram00020000000002d0;
  if ((uVar3 & 8) != 0) {
    FUN_00025900();
    Ram0002000000000448 = 0x800;
    uVar2 = Ram00020000000000e8;
    return;
  }
  FUN_0002d0b8();
  return;
}


/* ---- sub_2d2c0 @ 0002d2c0 size=56 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_2d2c0(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  do {
    iVar3 = Ram0002000000000090;
  } while (iVar3 != 0);
  uVar1 = Ram0002000000000020;
  Ram0002000000000040 = 1;
  uVar2 = Ram0002000000000070;
  do {
  } while (_DAT_100010000c2d4 != 0);
  _DAT_100010000c0dc = (undefined4)(((long)(int)(uVar2 >> 8) & 7U) << 0x1c);
  _DAT_100010000c0e8 = 0x10000;
  _DAT_100010000c2d4 = 0x4000000;
  Ram0002000000000040 = uVar1;
  uVar2 = Ram00020000000002d0;
  _DAT_100010000c2dc = param_1;
  if ((uVar2 & 8) != 0) {
    FUN_00025900();
    Ram0002000000000448 = 0x800;
    uVar4 = Ram00020000000000e8;
    return;
  }
  FUN_0002d0b8();
  return;
}


/* ---- sub_2d2f8 @ 0002d2f8 size=56 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_2d2f8(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  do {
    iVar3 = Ram0002000000000090;
  } while (iVar3 != 0);
  uVar1 = Ram0002000000000020;
  Ram0002000000000040 = 1;
  uVar2 = Ram0002000000000070;
  do {
  } while (_DAT_100010000c2d4 != 0);
  _DAT_100010000c0dc = (undefined4)(((long)(int)(uVar2 >> 8) & 7U) << 0x1c);
  _DAT_100010000c0e8 = 0x10000;
  _DAT_100010000c2d4 = 0x4000000;
  Ram0002000000000040 = uVar1;
  uVar2 = Ram00020000000002d0;
  _DAT_100010000c2dc = param_1;
  if ((uVar2 & 8) != 0) {
    FUN_00025900();
    Ram0002000000000448 = 0x800;
    uVar4 = Ram00020000000000e8;
    return;
  }
  FUN_0002d0b8();
  return;
}


/* ---- sub_2d330 @ 0002d330 size=56 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_2d330(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  do {
    iVar3 = Ram0002000000000090;
  } while (iVar3 != 0);
  uVar1 = Ram0002000000000020;
  Ram0002000000000040 = 1;
  uVar2 = Ram0002000000000070;
  do {
  } while (_DAT_100010000c2d4 != 0);
  _DAT_100010000c0dc = (undefined4)(((long)(int)(uVar2 >> 8) & 7U) << 0x1c);
  _DAT_100010000c0e8 = 0x10000;
  _DAT_100010000c2d4 = 0x4000000;
  Ram0002000000000040 = uVar1;
  uVar2 = Ram00020000000002d0;
  _DAT_100010000c2dc = param_1;
  if ((uVar2 & 8) != 0) {
    FUN_00025900();
    Ram0002000000000448 = 0x800;
    uVar4 = Ram00020000000000e8;
    return;
  }
  FUN_0002d0b8();
  return;
}


/* ---- sub_2d368 @ 0002d368 size=56 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_2d368(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  do {
    iVar3 = Ram0002000000000090;
  } while (iVar3 != 0);
  uVar1 = Ram0002000000000020;
  Ram0002000000000040 = 1;
  uVar2 = Ram0002000000000070;
  do {
  } while (_DAT_100010000c2d4 != 0);
  _DAT_100010000c0dc = (undefined4)(((long)(int)(uVar2 >> 8) & 7U) << 0x1c);
  _DAT_100010000c0e8 = 0x10000;
  _DAT_100010000c2d4 = 0x4000000;
  Ram0002000000000040 = uVar1;
  uVar2 = Ram00020000000002d0;
  _DAT_100010000c2dc = param_1;
  if ((uVar2 & 8) != 0) {
    FUN_00025900();
    Ram0002000000000448 = 0x800;
    uVar4 = Ram00020000000000e8;
    return;
  }
  FUN_0002d0b8();
  return;
}


/* ---- sub_2d3a0 @ 0002d3a0 size=16 ---- */

void sub_2d3a0(void)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  do {
    iVar1 = Ram0002000000000090;
  } while (iVar1 != 0);
  uVar3 = Ram00020000000002d0;
  if ((uVar3 & 8) != 0) {
    FUN_00025900();
    Ram0002000000000448 = 0x800;
    uVar2 = Ram00020000000000e8;
    return;
  }
  FUN_0002d0b8();
  return;
}


/* ---- sub_2d3b0 @ 0002d3b0 size=16 ---- */

void sub_2d3b0(void)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  do {
    iVar1 = Ram0002000000000090;
  } while (iVar1 != 0);
  uVar3 = Ram00020000000002d0;
  if ((uVar3 & 8) != 0) {
    FUN_00025900();
    Ram0002000000000448 = 0x800;
    uVar2 = Ram00020000000000e8;
    return;
  }
  FUN_0002d0b8();
  return;
}


/* ---- sub_2d3c0 @ 0002d3c0 size=16 ---- */

void sub_2d3c0(void)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  do {
    iVar1 = Ram0002000000000090;
  } while (iVar1 != 0);
  uVar3 = Ram00020000000002d0;
  if ((uVar3 & 8) != 0) {
    FUN_00025900();
    Ram0002000000000448 = 0x800;
    uVar2 = Ram00020000000000e8;
    return;
  }
  FUN_0002d0b8();
  return;
}


/* ---- sub_2d3d0 @ 0002d3d0 size=16 ---- */

void sub_2d3d0(void)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  do {
    iVar1 = Ram0002000000000090;
  } while (iVar1 != 0);
  uVar3 = Ram00020000000002d0;
  if ((uVar3 & 8) != 0) {
    FUN_00025900();
    Ram0002000000000448 = 0x800;
    uVar2 = Ram00020000000000e8;
    return;
  }
  FUN_0002d0b8();
  return;
}


/* ---- sub_2d3e0 @ 0002d3e0 size=16 ---- */

void sub_2d3e0(void)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  do {
    iVar1 = Ram0002000000000090;
  } while (iVar1 != 0);
  uVar3 = Ram00020000000002d0;
  if ((uVar3 & 8) != 0) {
    FUN_00025900();
    Ram0002000000000448 = 0x800;
    uVar2 = Ram00020000000000e8;
    return;
  }
  FUN_0002d0b8();
  return;
}


/* ---- sub_2d3f0 @ 0002d3f0 size=16 ---- */

void sub_2d3f0(void)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  do {
    iVar1 = Ram0002000000000090;
  } while (iVar1 != 0);
  uVar3 = Ram00020000000002d0;
  if ((uVar3 & 8) != 0) {
    FUN_00025900();
    Ram0002000000000448 = 0x800;
    uVar2 = Ram00020000000000e8;
    return;
  }
  FUN_0002d0b8();
  return;
}


/* ---- sub_2d400 @ 0002d400 size=56 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_2d400(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  do {
    iVar3 = Ram0002000000000090;
  } while (iVar3 != 0);
  uVar1 = Ram0002000000000020;
  Ram0002000000000040 = 1;
  uVar2 = Ram0002000000000070;
  do {
  } while (_DAT_100010000c2d4 != 0);
  _DAT_100010000c0dc = (undefined4)(((long)(int)(uVar2 >> 8) & 7U) << 0x1c);
  _DAT_100010000c0e8 = 0x10000;
  _DAT_100010000c2d4 = 0x4000000;
  Ram0002000000000040 = uVar1;
  uVar2 = Ram00020000000002d0;
  _DAT_100010000c2dc = param_1;
  if ((uVar2 & 8) != 0) {
    FUN_00025900();
    Ram0002000000000448 = 0x800;
    uVar4 = Ram00020000000000e8;
    return;
  }
  FUN_0002d0b8();
  return;
}


/* ---- sub_2d438 @ 0002d438 size=12 ---- */

void sub_2d438(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- sub_2d444 @ 0002d444 size=12 ---- */

void sub_2d444(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- sub_2d450 @ 0002d450 size=12 ---- */

void sub_2d450(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- sub_2d45c @ 0002d45c size=12 ---- */

void sub_2d45c(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- sub_2d468 @ 0002d468 size=12 ---- */

void sub_2d468(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- sub_2d474 @ 0002d474 size=12 ---- */

void sub_2d474(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- sub_2d480 @ 0002d480 size=12 ---- */

void sub_2d480(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- sub_2d48c @ 0002d48c size=44 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_2d48c(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000020;
  Ram0002000000000040 = 1;
  uVar2 = Ram0002000000000070;
  do {
  } while (_DAT_100010000c2d4 != 0);
  _DAT_100010000c0dc = (undefined4)(((long)(int)(uVar2 >> 8) & 7U) << 0x1c);
  _DAT_100010000c0e8 = 0x10000;
  _DAT_100010000c2d4 = 0x4000000;
  Ram0002000000000040 = uVar1;
  uVar2 = Ram00020000000002d0;
  _DAT_100010000c2dc = param_1;
  if ((uVar2 & 8) != 0) {
    FUN_00025900();
    Ram0002000000000448 = 0x800;
    uVar3 = Ram00020000000000e8;
    return;
  }
  FUN_0002d0b8();
  return;
}


/* ---- sub_2d4b8 @ 0002d4b8 size=44 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_2d4b8(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000020;
  Ram0002000000000040 = 1;
  uVar2 = Ram0002000000000070;
  do {
  } while (_DAT_100010000c2d4 != 0);
  _DAT_100010000c0dc = (undefined4)(((long)(int)(uVar2 >> 8) & 7U) << 0x1c);
  _DAT_100010000c0e8 = 0x10000;
  _DAT_100010000c2d4 = 0x4000000;
  Ram0002000000000040 = uVar1;
  uVar2 = Ram00020000000002d0;
  _DAT_100010000c2dc = param_1;
  if ((uVar2 & 8) != 0) {
    FUN_00025900();
    Ram0002000000000448 = 0x800;
    uVar3 = Ram00020000000000e8;
    return;
  }
  FUN_0002d0b8();
  return;
}


/* ---- sub_2d4e4 @ 0002d4e4 size=44 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_2d4e4(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000020;
  Ram0002000000000040 = 1;
  uVar2 = Ram0002000000000070;
  do {
  } while (_DAT_100010000c2d4 != 0);
  _DAT_100010000c0dc = (undefined4)(((long)(int)(uVar2 >> 8) & 7U) << 0x1c);
  _DAT_100010000c0e8 = 0x10000;
  _DAT_100010000c2d4 = 0x4000000;
  Ram0002000000000040 = uVar1;
  uVar2 = Ram00020000000002d0;
  _DAT_100010000c2dc = param_1;
  if ((uVar2 & 8) != 0) {
    FUN_00025900();
    Ram0002000000000448 = 0x800;
    uVar3 = Ram00020000000000e8;
    return;
  }
  FUN_0002d0b8();
  return;
}


/* ---- sub_2d510 @ 0002d510 size=44 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_2d510(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000020;
  Ram0002000000000040 = 1;
  uVar2 = Ram0002000000000070;
  do {
  } while (_DAT_100010000c2d4 != 0);
  _DAT_100010000c0dc = (undefined4)(((long)(int)(uVar2 >> 8) & 7U) << 0x1c);
  _DAT_100010000c0e8 = 0x10000;
  _DAT_100010000c2d4 = 0x4000000;
  Ram0002000000000040 = uVar1;
  uVar2 = Ram00020000000002d0;
  _DAT_100010000c2dc = param_1;
  if ((uVar2 & 8) != 0) {
    FUN_00025900();
    Ram0002000000000448 = 0x800;
    uVar3 = Ram00020000000000e8;
    return;
  }
  FUN_0002d0b8();
  return;
}


/* ---- sub_2d53c @ 0002d53c size=44 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_2d53c(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000020;
  Ram0002000000000040 = 1;
  uVar2 = Ram0002000000000070;
  do {
  } while (_DAT_100010000c2d4 != 0);
  _DAT_100010000c0dc = (undefined4)(((long)(int)(uVar2 >> 8) & 7U) << 0x1c);
  _DAT_100010000c0e8 = 0x10000;
  _DAT_100010000c2d4 = 0x4000000;
  Ram0002000000000040 = uVar1;
  uVar2 = Ram00020000000002d0;
  _DAT_100010000c2dc = param_1;
  if ((uVar2 & 8) != 0) {
    FUN_00025900();
    Ram0002000000000448 = 0x800;
    uVar3 = Ram00020000000000e8;
    return;
  }
  FUN_0002d0b8();
  return;
}


/* ---- sub_2d568 @ 0002d568 size=44 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_2d568(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000020;
  Ram0002000000000040 = 1;
  uVar2 = Ram0002000000000070;
  do {
  } while (_DAT_100010000c2d4 != 0);
  _DAT_100010000c0dc = (undefined4)(((long)(int)(uVar2 >> 8) & 7U) << 0x1c);
  _DAT_100010000c0e8 = 0x10000;
  _DAT_100010000c2d4 = 0x4000000;
  Ram0002000000000040 = uVar1;
  uVar2 = Ram00020000000002d0;
  _DAT_100010000c2dc = param_1;
  if ((uVar2 & 8) != 0) {
    FUN_00025900();
    Ram0002000000000448 = 0x800;
    uVar3 = Ram00020000000000e8;
    return;
  }
  FUN_0002d0b8();
  return;
}


/* ---- sub_2d594 @ 0002d594 size=44 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_2d594(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000020;
  Ram0002000000000040 = 1;
  uVar2 = Ram0002000000000070;
  do {
  } while (_DAT_100010000c2d4 != 0);
  _DAT_100010000c0dc = (undefined4)(((long)(int)(uVar2 >> 8) & 7U) << 0x1c);
  _DAT_100010000c0e8 = 0x10000;
  _DAT_100010000c2d4 = 0x4000000;
  Ram0002000000000040 = uVar1;
  uVar2 = Ram00020000000002d0;
  _DAT_100010000c2dc = param_1;
  if ((uVar2 & 8) != 0) {
    FUN_00025900();
    Ram0002000000000448 = 0x800;
    uVar3 = Ram00020000000000e8;
    return;
  }
  FUN_0002d0b8();
  return;
}


/* ---- pm4_OP_05_handler @ 0002d5c0 size=420 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pm4_OP_05_handler(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar7 = (uint)param_1;
  Ram00020000000001d8 = uVar7;
  uVar2 = Ram0002000000000070;
  lVar8 = ((long)(int)(uVar2 >> 4) & 0xfU | (long)(int)((uVar7 >> 5 & 7) << 4)) << 0x24;
  if (((ulong)(long)*(int *)(lVar8 + 0x108080000c8c0) >> 0x15 & 1) != 0) {
    uVar9 = 0;
    do {
      uVar1 = Ram00020000000006f8;
      uVar9 = (ulong)((int)uVar9 + 1);
    } while (uVar9 <= (ulong)(param_1 << 0x22) >> 0x32);
    FUN_00025890(uVar1);
    return;
  }
  if (((ulong)(long)*(int *)(lVar8 + 0x108080000c834) >> 0x1e & 1) == 0) {
    Ram00020000000001e8 = 1;
  }
  *(uint *)(lVar8 + 0x108080000c8c0) = (uVar7 & 8) << 10 | 0x4000;
  uVar1 = Ram00020000000006f8;
  uVar2 = Ram00020000000006f8;
  uVar1 = Ram00020000000006f8;
  uVar3 = Ram00020000000006f8;
  uVar4 = Ram00020000000006f8;
  uVar5 = Ram00020000000006f8;
  uVar6 = Ram00020000000006f8;
  Ram0002000000000040 = uVar7 >> 4 & 1;
  uVar10 = uVar2 >> 0x18 & 7;
  if (uVar10 != 4) {
    if (uVar10 < 5) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (uVar10 == 7) goto LAB_0002d734;
    uVar10 = Ram00020000000003a0;
    if ((uVar10 >> 0x1a & 1) != 0) {
      Ram0002000000000388 = 0;
    }
    if ((uVar2 & 0x7000000) == 0x5000000) {
      if (uVar4 < (uint)*(ulong *)CONCAT44(uVar3,uVar1)) goto LAB_0002d734;
    }
    else if (CONCAT44(uVar5,uVar4) < *(ulong *)CONCAT44(uVar3,uVar1)) goto LAB_0002d734;
  }
  uVar1 = Ram0002000000000020;
  Ram0002000000000040 = 1;
  do {
  } while (_DAT_100010000c2d4 != 0);
  _DAT_100010000c0dc = (undefined4)(((long)(int)(uVar7 >> 5) & 7U) << 0x1c);
  _DAT_100010000c0e8 = 0x10000;
  _DAT_100010000c2d4 = 0x4000000;
  Ram0002000000000040 = uVar1;
  _DAT_100010000c2dc = uVar6;
LAB_0002d734:
  FUN_00025900();
  return;
}


/* ---- pm4_OP_D0_handler @ 0002d768 size=332 ---- */

void pm4_OP_D0_handler(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 uStack0000000000000000;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram00020000000006f8;
  Ram0002000000000148 = 1;
  uVar6 = Ram0002000000000070;
  lVar4 = (long)(int)(uVar6 >> 4) << 0x24;
  *(undefined4 *)(lVar4 + 0x108080000c8ac) = 0x3000;
  Ram00020000000000d8 = *(uint *)(lVar4 + 0x108080000c8ac) >> 0x11 & 0x180;
  uVar2 = *(undefined8 *)(*(long *)(lVar4 + 0x108080000c824) + 0x6f8);
  *(undefined4 *)(lVar4 + 0x108080000c8ac) = 0x2000;
  uVar6 = 0x100;
  uVar3 = *(uint *)(lVar4 + 0x108080000c868) & 0x3f;
  if (6 < uVar3) {
    if (0x1d < uVar3) {
      uVar3 = 0x1d;
    }
    uVar6 = 1 << ((long)(int)(uVar3 + 1) & 0x1fU);
  }
  uVar5 = (ulong)*(uint *)(lVar4 + 0x108080000c8fc) & (long)(int)-uVar6 |
          (ulong)*(uint *)(lVar4 + 0x108080000c84c);
  if (*(ulong *)(lVar4 + 0x108080000c8fc) < uVar5) {
    uVar5 = uVar5 - uVar6;
  }
  uStack0000000000000000 = 1;
  FUN_00025a78(0xffffffffc0064900,0x6e03514,0,0x42000000,uVar2,(long)(int)uVar5,(long)uVar5 >> 0x20,
               (ulong)((long)*(int *)(lVar4 + 0x108080000c860) << 0x24) >> 0x26);
  FUN_00024168();
  return;
}


/* ---- pm4_RELEASE_MEM_handler @ 0002d8b8 size=284 ---- */

void pm4_RELEASE_MEM_handler(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uStack0000000000000000;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0002000000000148 = 1;
  uVar2 = Ram00020000000006f8;
  if ((uVar2 & 0x10000000) != 0) {
    uVar2 = Ram0002000000000070;
    lVar8 = (long)(int)(uVar2 >> 4) << 0x24;
    *(undefined4 *)(lVar8 + 0x108080000c8ac) = 0x3000;
    Ram0002000000000120 = *(uint *)(lVar8 + 0x108080000c8ac) >> 0x18 & 3;
    *(undefined4 *)(*(long *)(lVar8 + 0x108080000c824) + 0x1c8) = 0;
    *(undefined4 *)(lVar8 + 0x108080000c8ac) = 0x2000;
  }
  uVar2 = Ram00020000000006f8;
  uVar7 = Ram00020000000006f8;
  lVar8 = Ram00020000000006f8;
  iVar5 = Ram00020000000006f8;
  iVar6 = Ram00020000000006f8;
  iVar1 = Ram00020000000006f8;
  Ram0002000000000390 = lVar8 << 0x20 | uVar7;
  uVar4 = Ram0002000000000390;
  if ((uVar2 & 0x10000000) != 0) {
    uVar3 = Ram0002000000000070;
    iVar1 = iVar1 + (uint)((ulong)((long)*(int *)(((long)(int)(uVar3 >> 4) << 0x24) +
                                                 0x108080000c860) << 0x24) >> 0x26);
  }
  uStack0000000000000000 = 0;
  FUN_00025a78(0,(long)(int)uVar2,uVar4,(long)iVar5,(long)iVar6,(long)iVar1);
  FUN_00024168();
  return;
}


/* ---- pm4_EVENT_WRITE_handler @ 0002d9d8 size=1328 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pm4_EVENT_WRITE_handler(void)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0002000000000148 = 1;
  uVar6 = Ram00020000000006f8;
  if ((uVar6 & 0x10000000) != 0) {
    uVar8 = Ram0002000000000070;
    lVar7 = (long)(int)(uVar8 >> 4) << 0x24;
    *(undefined4 *)(lVar7 + 0x108080000c8ac) = 0x3000;
    Ram0002000000000120 = *(uint *)(lVar7 + 0x108080000c8ac) >> 0x18 & 3;
    *(undefined4 *)(*(long *)(lVar7 + 0x108080000c824) + 0x1c8) = 0;
    *(undefined4 *)(lVar7 + 0x108080000c8ac) = 0x2000;
  }
  uVar8 = uVar6 >> 8 & 0xf;
  if (uVar8 < 0xc) {
    if (uVar8 < 8) {
      if (uVar8 != 2) {
        if (uVar8 == 4) {
          uVar8 = Ram0002000000000068;
          uVar3 = Ram0002000000000070;
          lVar7 = Ram0002000000000430;
          if (lVar7 < 0) {
            Ram00020000000001b0 = 7;
            FUN_00024960();
          }
          else {
            iVar1 = 1 << ((long)(int)uVar8 & 0x1fU);
            Ram00020000000001a8 = iVar1;
            Ram00020000000000a8 = 2;
            *DAT_00101070 = uVar6 & 0x3f;
            Ram00020000000000a8 = 0;
            lVar7 = (long)(int)(uVar3 >> 4 & 0xf | (uVar8 & 7) << 4);
            if ((-1 < (long)((ulong)uVar6 << 0x20)) ||
               (((ulong)(long)*(int *)((lVar7 << 0x24) + 0x108080002e088) >> 8 & ~(long)iVar1 & 0xff
                ) == 0)) {
              lVar9 = lVar7 << 0x24;
              uVar6 = *(uint *)(lVar9 + 0x108080000c834) & 0x40000000;
              if ((uVar6 != 0) && ((*(uint *)(lVar9 + 0x108080000c8a4) & 1) == 0)) {
                Ram00020000000003a0 = 1;
              }
              do {
                uVar3 = Ram00020000000000c8;
                if ((1 << ((long)(int)uVar8 & 0x1fU) & uVar3) == 0) {
                  *(uint *)(lVar9 + 0x108080000c8cc) =
                       *(uint *)(lVar9 + 0x108080000c8cc) & 0xfffeffff;
                  Ram00020000000003a0 = 0;
                  Ram0002000000000150 = 0;
                  goto LAB_0002dbc0;
                }
              } while (((uVar6 == 0) || (uVar3 = Ram0002000000000108, uVar3 >> 0x11 == 0)) ||
                      ((uVar3 & 0xfd) != 1));
              Ram00020000000003a0 = 0;
            }
            lVar7 = lVar7 << 0x24;
            if ((*(uint *)(lVar7 + 0x108080000c8a4) & 1) == 0) {
              uVar6 = Ram00020000000000f0;
              uVar2 = Ram0002000000000038;
              *(uint *)(lVar7 + 0x108080000c87c) = uVar6 & 0xff | (int)uVar2 << 0xc | 0x80020000;
              *(uint *)(lVar7 + 0x108080000c8cc) = *(uint *)(lVar7 + 0x108080000c8cc) | 0x10000;
            }
            FUN_00024960();
          }
          goto LAB_0002dbc0;
        }
        if (uVar8 == 0) {
          Ram00020000000000a8 = 2;
          Ram000100020000b828 = (uint)((uVar6 & 0x3f) == 0x19);
          *DAT_00101070 = uVar6 & 0x3f;
          Ram00020000000000a8 = 0;
          Ram0002000000000150 = 0;
          goto LAB_0002dbc0;
        }
        goto LAB_0002dac4;
      }
      uVar5 = Ram00020000000006f8;
      lVar7 = Ram00020000000006f8;
      Ram0002000000000390 = lVar7 << 0x20 | uVar5;
      puVar4 = (undefined8 *)Ram0002000000000390;
      Ram0002000000000120 = uVar6 >> 0x19 & 3;
      uVar6 = uVar6 >> 0x1d & 3;
      if (uVar6 == 2) {
        uVar2 = Ram0002000000000328;
        *puVar4 = uVar2;
      }
      else if ((uVar6 == 3) || (uVar6 != 0)) {
        uVar2 = Ram00020000000000c0;
        *puVar4 = uVar2;
        uVar2 = Ram0002000000000328;
        puVar4[1] = uVar2;
      }
      else {
        uVar2 = Ram00020000000000c0;
        *puVar4 = uVar2;
      }
    }
    else {
      Ram0002000000000040 = 1;
      if ((_DAT_100010002e000 & 1) != 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      do {
      } while (_DAT_100010000c2d4 != 0);
      uVar6 = Ram0002000000000070;
      lVar7 = (long)(int)(uVar6 >> 4) << 0x24;
      _DAT_100010000c2dc = *(uint *)(lVar7 + 0x108080000c860) >> 3 & 0x3ff | 0x5000;
      _DAT_100010000c0dc = (undefined4)(((long)(int)(uVar6 >> 8) & 7U) << 0x1c);
      _DAT_100010000c0e8 = 0x10000;
      _DAT_100010000c2d4 = 0x1000000;
      *(uint *)(lVar7 + 0x108080000c860) =
           (uint)((ulong)((long)*(int *)(lVar7 + 0x108080000c860) << 0x22) >> 0x22);
      uVar2 = Ram0002000000000038;
      Ram0002000000000150 = 0;
      *(undefined4 *)((ulong)((int)uVar2 + 0x60) + 0x2000000000000) = 0;
      Ram00020000000004c0 = (int)uVar2;
      Ram0002000000000558 = 3;
      do {
        iVar1 = Ram00020000000004c8;
      } while (iVar1 != 0);
      *(undefined4 *)(lVar7 + 0x108080000c8fc) = 0;
      *(undefined4 *)(lVar7 + 0x108080000c900) = 0;
      *(undefined4 *)(lVar7 + 0x108080000c84c) = 0;
      *(undefined4 *)(lVar7 + 0x108080000c878) = 0;
      if (*(int *)(lVar7 + 0x108080000c82c) != 0) {
        do {
          do {
            uVar6 = *(uint *)(lVar7 + 0x108080000c884) & 0xf;
          } while (uVar6 == 0);
        } while (uVar6 == 4);
      }
    }
  }
  else {
LAB_0002dac4:
    Ram0002000000000040 = 1;
    if ((_DAT_100010002e000 & 1) != 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    do {
    } while (_DAT_100010000c2d4 != 0);
    uVar6 = Ram0002000000000070;
    lVar7 = (long)(int)(uVar6 >> 4) << 0x24;
    _DAT_100010000c2dc = *(uint *)(lVar7 + 0x108080000c860) >> 3 & 0x3ff | 0x5000;
    _DAT_100010000c0dc = (undefined4)(((long)(int)(uVar6 >> 8) & 7U) << 0x1c);
    _DAT_100010000c0e8 = 0x10000;
    _DAT_100010000c2d4 = 0x1000000;
    *(uint *)(lVar7 + 0x108080000c860) =
         (uint)((ulong)((long)*(int *)(lVar7 + 0x108080000c860) << 0x22) >> 0x22);
    uVar2 = Ram0002000000000038;
    Ram0002000000000150 = 0;
    *(undefined4 *)((ulong)((int)uVar2 + 0x60) + 0x2000000000000) = 0;
    Ram00020000000004c0 = (int)uVar2;
    Ram0002000000000558 = 3;
    do {
      iVar1 = Ram00020000000004c8;
    } while (iVar1 != 0);
    *(undefined4 *)(lVar7 + 0x108080000c8fc) = 0;
    *(undefined4 *)(lVar7 + 0x108080000c900) = 0;
    *(undefined4 *)(lVar7 + 0x108080000c84c) = 0;
    *(undefined4 *)(lVar7 + 0x108080000c878) = 0;
    if (*(int *)(lVar7 + 0x108080000c82c) != 0) {
      do {
        do {
          uVar6 = *(uint *)(lVar7 + 0x108080000c884) & 0xf;
        } while (uVar6 == 0);
      } while (uVar6 == 4);
    }
  }
  Ram0002000000000150 = 0;
LAB_0002dbc0:
  FUN_00024168();
  return;
}


/* ---- thunk_FUN_00024168 @ 0002df10 size=4 ---- */

void thunk_FUN_00024168(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  do {
    uVar2 = Ram0002000000000020;
    custom0();
    uVar3 = Ram00020000000006f8;
    uVar1 = Ram0002000000000010;
    (*(code *)(uVar1 & 0xfffffffffffffffe))(uVar3);
  } while( true );
}


/* ---- FUN_0002e108 @ 0002e108 size=2444 ---- */

/* WARNING: Removing unreachable block (ram,0x0002e6a4) */
/* WARNING: Removing unreachable block (ram,0x0002e1dc) */
/* WARNING: Removing unreachable block (ram,0x0002e1ec) */
/* WARNING: Removing unreachable block (ram,0x0002e0d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002e108(uint param_1,uint param_2,long param_3,ulong param_4,ulong param_5,ulong *param_6,
                 long param_7,long param_8)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  long in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  iVar10 = 7;
  if (param_3 == 0) {
    iVar10 = 9;
  }
  uVar11 = 1;
  uVar6 = (long)(int)(param_1 >> 0x16) << 0x3e;
  do {
    do {
    } while (uVar11 != 0);
    if ((param_1 & 0x30) == 0) {
      uVar2 = Ram0002000000000020;
      Ram0002000000000040 = 1;
      uVar5 = (ulong)*(uint *)(((ulong)((long)param_6 << 0x20) >> 0x1e) + 0x1000100000000);
      Ram0002000000000040 = uVar2;
    }
    else {
      Ram00020000000000d8 = param_1 >> 0x12 & 0x180;
      if (param_3 == 0) {
        uVar5 = *param_6;
      }
      else {
        uVar5 = (ulong)(uint)*param_6;
      }
    }
    uVar5 = uVar5 & param_4;
    switch(param_1 & 7) {
    case 0:
      goto switchD_0002e238_caseD_0;
    case 1:
      if (uVar5 < param_5) goto switchD_0002e238_caseD_0;
      goto LAB_0002e2b0;
    case 2:
      bVar1 = uVar5 <= param_5;
      break;
    case 3:
      bVar1 = uVar5 == param_5;
      break;
    case 4:
      bVar1 = uVar5 != param_5;
      break;
    case 5:
      bVar1 = param_5 <= uVar5;
      break;
    case 6:
      bVar1 = param_5 < uVar5;
      break;
    default:
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (bVar1) {
switchD_0002e238_caseD_0:
      if ((param_1 & 0xc0) == 0x40) {
        uVar2 = Ram0002000000000020;
        Ram0002000000000040 = 1;
        *(int *)(((ulong)((long)(int)param_6 << 0x20) >> 0x1e) + 0x1000100000000) = (int)param_5;
        Ram0002000000000040 = uVar2;
      }
      if (param_7 == 0) {
        if ((param_8 != 0) && ((param_1 & 0x1000000) != 0)) {
          uVar8 = Ram0002000000000070;
          uVar11 = Ram0002000000000068;
          do {
            uVar9 = Ram00020000000004e0;
          } while ((uVar9 & 0x10) != 0);
          Ram00020000000005c8 =
               (ulong)((long)*(int *)(((long)(int)(uVar8 >> 4) << 0x24) + 0x108080000c860) << 0x24)
               >> 0x26 | (ulong)uVar11 << 0x36 | (long)(int)(param_1 >> 0x16) << 0x3e |
               in_mhartid << 0x34 | 0x2000000000000000;
        }
        Ram0002000000000150 = 0;
        return;
      }
      uVar11 = Ram0002000000000190;
      lVar7 = (long)(int)(uVar11 >> 4) << 0x24;
      uVar11 = *(uint *)(lVar7 + 0x108080000c87c);
      uVar8 = Ram0002000000000188;
      iVar10 = Ram0002000000000068;
      if ((((ulong)uVar8 & 3) == (long)iVar10) && (uVar8 = Ram00020000000004f0, (uVar8 & 8) != 0)) {
        Ram0002000000000150 = 0;
        Ram00020000000005e8 = 0;
      }
      else {
        Ram00020000000005e8 = 0;
      }
      uVar8 = uVar11 >> 0x10 & 0x3f;
      if (((long)(int)uVar11 & 0x3000U) == 0) {
        uVar9 = 2 << ((long)*(int *)(lVar7 + 0x108080000c868) & 0x1fU);
        uVar8 = uVar8 + *(int *)(lVar7 + 0x108080000c84c);
        if (uVar9 <= uVar8) {
          uVar8 = uVar8 - uVar9;
        }
        *(uint *)(lVar7 + 0x108080000c84c) = uVar8;
      }
      else {
        *(uint *)(lVar7 + 0x108080000c874) =
             *(uint *)(lVar7 + 0x108080000c874) & 0xfff00000 |
             (*(uint *)(lVar7 + 0x108080000c874) & 0xfffff) + uVar8 & 0xfffff;
        *(uint *)(lVar7 + 0x108080000c878) =
             *(uint *)(lVar7 + 0x108080000c878) & 0xfff00000 |
             (*(uint *)(lVar7 + 0x108080000c878) & 0xfffff) - uVar8 & 0xfffff;
      }
      *(undefined4 *)(lVar7 + 0x108080000c884) = 0x200;
      *(uint *)(lVar7 + 0x108080000c87c) =
           (uint)((ulong)((long)(int)uVar11 << 0x28) >> 0x28) | uVar11 & 0x3f000000;
      return;
    }
LAB_0002e2b0:
    if ((param_1 & 0xc0) == 0x40) {
      if ((param_1 & 0x1000000) != 0) {
        if (param_8 != 0) {
LAB_0002e5f8:
          if ((int)param_2 < 0) goto LAB_0002e600;
        }
LAB_0002e620:
        uVar11 = Ram0002000000000070;
        lVar7 = (long)(int)(uVar11 >> 4) << 0x24;
        do {
          uVar11 = Ram00020000000004e0;
        } while ((uVar11 & 0x10) != 0);
        Ram00020000000005c8 =
             (ulong)((long)*(int *)(lVar7 + 0x108080000c860) << 0x24) >> 0x26 | param_5 << 0x1a |
             uVar6 | 0x1800000000000000;
        uVar11 = Ram0002000000000068;
        do {
          uVar8 = Ram00020000000004e0;
        } while ((uVar8 & 0x10) != 0);
        Ram00020000000005c8 =
             ((long)*(int *)(lVar7 + 0x108080000c830) & 0xfU) << 0x30 | uVar6 |
             (ulong)uVar11 << 0x36 | (ulong)param_6 & 0xffffffffffff | in_mhartid << 0x34 |
             0x1c00000000000000;
      }
    }
    else {
      if (param_7 != 0) {
        uVar8 = Ram0002000000000190;
        uVar11 = Ram00020000000000e8;
        lVar7 = (long)(int)(uVar8 >> 4) << 0x24;
        *(uint *)(lVar7 + 0x108080000c87c) =
             uVar11 >> 0x10 & 0xff | *(uint *)(lVar7 + 0x108080000c87c);
        *(undefined4 *)(lVar7 + 0x108080000c884) = 0x200;
        gp = 0x101800;
        tp = 0x2000000000000;
        return;
      }
      uVar11 = Ram0002000000000070;
      if (param_8 == 0) {
        if ((param_1 & 0x1000000) != 0) goto LAB_0002e620;
      }
      else {
        lVar7 = (long)(int)(uVar11 >> 4) << 0x24;
        if ((-1 < (int)param_2) ||
           (uVar8 = Ram0002000000000068,
           ((ulong)(long)*(int *)(lVar7 + 0x108080002e088) >> 8 &
            ~(long)(1 << ((ulong)uVar8 & 0x1f)) & 0xff) != 0)) {
          if (((ulong)(long)(int)param_1 >> 0x18 & 1) != 0) {
            do {
              uVar8 = Ram00020000000004e0;
            } while ((uVar8 & 0x10) != 0);
            Ram00020000000005c8 =
                 (ulong)((long)*(int *)(lVar7 + 0x108080000c860) << 0x24) >> 0x26 |
                 (long)(int)(param_1 >> 0x16) << 0x3e | 0x2400000000000000;
          }
          uVar8 = Ram00020000000000e8;
          lVar3 = Ram0002000000000038;
          if (lVar3 == 0) {
            uVar9 = *(uint *)(lVar7 + 0x108080000c868);
          }
          else {
            uVar9 = *(uint *)(lVar7 + 0x108080000c878);
          }
          *(uint *)(lVar7 + 0x108080000c87c) =
               ((iVar10 << 0x10 | 0x80000000U) >> 0x10 | uVar9 >> 0x10 & 0x380) << 0x10 |
               (*(uint *)(lVar7 + 0x108080000c87c) >> 8 & 0xc0 | 1 | (((uint)lVar3 & 3) << 0xc) >> 8
               ) << 8 | uVar8 >> 0x10 & 0xff;
          uVar2 = Ram0002000000000020;
          Ram0002000000000040 = 1;
          do {
          } while (_DAT_100010000c2d4 != 0);
          uVar8 = Ram0002000000000070;
          _DAT_100010000c0dc = (undefined4)(((long)(int)(uVar8 >> 8) & 3U) << 0x1c);
          _DAT_100010000c2d4 = 0x20000;
          Ram0002000000000040 = uVar2;
          if ((((ulong)(long)(int)*(uint *)(lVar7 + 0x108080002e088) >> 8 & 0xff) == 0) &&
             ((*(uint *)(lVar7 + 0x108080002e088) >> 0x1c & 1) != 0)) {
            Ram00020000000005e8 = 3;
          }
          else {
            FUN_00024960(uVar11 >> 4);
          }
          goto LAB_0002e59c;
        }
        uVar11 = Ram0002000000000108;
        if (uVar11 >> 0x10 == 0) {
          iVar4 = Ram0002000000000140;
          if (iVar4 == 0) {
            iVar4 = Ram0002000000000180;
            if (iVar4 != 0) {
              Ram0002000000000060 = 0;
              lVar7 = Ram0002000000000038;
              if (lVar7 == 0) {
                Ram0002000000000200 = 0xe;
              }
              else {
                Ram0002000000000200 = 0xf;
              }
              Ram0002000000000220 = 4;
              Ram0002000000000080 = 2;
              Ram00020000000003c0 = 0;
              uVar11 = Ram0002000000000190;
              Ram0002000000000220 = 0;
              uVar9 = uVar11 >> 8 & 7;
              Ram00020000000004d0 = uVar9;
              uVar8 = Ram00020000000004a0;
              if ((uVar8 & 4) == 0) {
                *(undefined4 *)(((long)(int)(uVar11 >> 4) << 0x24) + 0x108080000c87c) = 0x60000000;
              }
              else {
                Ram00020000000004d8 = uVar9;
                lVar7 = (long)(int)(uVar11 >> 4) << 0x24;
                do {
                } while ((*(uint *)(lVar7 + 0x108080002e088) & 0x40000) != 0);
                iVar10 = 0x10;
                do {
                  Ram00020000000003c0 = 0;
                  iVar10 = iVar10 + -1;
                } while (iVar10 != 0);
                uVar11 = Ram0002000000000498;
                uVar6 = (ulong)uVar11 & 0x3f;
                Ram00020000000004e8 = (int)uVar6;
                Ram0002000000000070 = (int)uVar6;
                do {
                  uVar2 = Ram00020000000006f8;
                  Ram00020000000003c0 = uVar2;
                  uVar6 = (ulong)((int)uVar6 + -1);
                } while (uVar6 != 0);
                *(uint *)(lVar7 + 0x108080000c87c) = *(uint *)(lVar7 + 0x108080000c87c) | 0x10000000
                ;
                *(undefined4 *)(lVar7 + 0x108080000c884) = 0x200;
              }
LAB_0002e778:
              Ram00020000000007d8 = 3;
LAB_0002e59c:
              DAT_00101178 = 0;
              DAT_00101170 = param_6;
              DAT_00101168 = param_5;
              DAT_00101160 = param_4;
              DAT_00101158 = (char)param_3;
              DAT_00101154 = param_2;
              DAT_00101150 = param_1;
              return;
            }
          }
          else {
            Ram0002000000000060 = 0;
            lVar7 = Ram0002000000000038;
            if (lVar7 == 0) {
              Ram00020000000001f8 = 0xe;
            }
            else {
              Ram00020000000001f8 = 0xf;
            }
            lVar7 = FUN_000243e0();
            if (lVar7 != 0) goto LAB_0002e778;
          }
        }
        else {
          Ram00020000000001b8 = uVar11;
          FUN_00003450((long)(int)uVar11);
          if (DAT_00101086 != '\0') {
            DAT_00101086 = '\0';
            goto LAB_0002e59c;
          }
        }
        if ((param_1 & 0x1000000) != 0) goto LAB_0002e5f8;
      }
    }
LAB_0002e600:
    uVar11 = ((param_2 & 0xffff) + 1) * 0xc & 0xfffff;
    param_8 = 1;
  } while( true );
}


/* ---- pm4_WAIT_REG_MEM_handler @ 0002e8a8 size=2400 ---- */

/* WARNING: Removing unreachable block (ram,0x0002eeec) */
/* WARNING: Removing unreachable block (ram,0x0002e9a8) */
/* WARNING: Removing unreachable block (ram,0x0002e9b8) */
/* WARNING: Removing unreachable block (ram,0x0002ef88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pm4_WAIT_REG_MEM_handler(void)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  long in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar5 = Ram0002000000000038;
  uVar2 = (uint)uVar5 >> 1;
  if (uVar2 == 0) {
    Ram0002000000000148 = 1;
  }
  uVar13 = Ram00020000000006f8;
  uVar18 = Ram00020000000006f8;
  uVar11 = Ram00020000000006f8;
  puVar15 = (uint *)(ulong)uVar11;
  uVar17 = Ram00020000000006f8;
  uVar8 = Ram00020000000006f8;
  uVar7 = Ram00020000000006f8;
  uVar10 = uVar13 & 0xc0;
  puVar16 = (uint *)(ulong)uVar18;
  if ((uVar13 & 0x30) != 0) {
    Ram0002000000000390 = CONCAT44(uVar11,uVar18);
    puVar16 = (uint *)Ram0002000000000390;
  }
  if (uVar10 == 0x40) {
    puVar16 = puVar15;
    if (uVar2 == 0) {
      uVar4 = Ram0002000000000020;
      Ram0002000000000040 = 1;
      *(int *)(((ulong)((long)(ulong)uVar18 << 0x2e) >> 0x2c) + 0x1000100000000) = (int)uVar17;
      Ram0002000000000040 = uVar4;
      uVar17 = uVar17 & uVar8;
    }
  }
  else {
    puVar15 = (uint *)((ulong)puVar16 & 0xffffffff);
  }
  puVar15 = (uint *)((long)puVar15 * 4 + 0x1000100000000);
  uVar18 = 1;
  bVar3 = false;
  uVar9 = (long)(int)(uVar13 >> 0x16) << 0x3e;
  do {
    do {
    } while (uVar18 != 0);
    if ((uVar13 & 0x30) == 0) {
      uVar4 = Ram0002000000000020;
      Ram0002000000000040 = 1;
      uVar18 = *puVar15;
      Ram0002000000000040 = uVar4;
    }
    else {
      Ram00020000000000d8 = uVar13 >> 0x12 & 0x180;
      uVar18 = *puVar16;
    }
    uVar14 = uVar8 & uVar18;
    switch(uVar13 & 7) {
    case 0:
      goto switchD_0002ea04_caseD_0;
    case 1:
      bVar1 = uVar14 < uVar17;
      break;
    case 2:
      bVar1 = uVar14 <= uVar17;
      break;
    case 3:
      bVar1 = uVar17 == uVar14;
      break;
    case 4:
      bVar1 = uVar17 != uVar14;
      break;
    case 5:
      bVar1 = uVar17 <= uVar14;
      break;
    case 6:
      bVar1 = uVar17 < uVar14;
      break;
    default:
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (bVar1) {
switchD_0002ea04_caseD_0:
      if (uVar10 == 0x40) {
        uVar4 = Ram0002000000000020;
        Ram0002000000000040 = 1;
        *puVar15 = (uint)uVar17;
        Ram0002000000000040 = uVar4;
      }
      if (uVar2 == 0) {
        if ((bVar3) && (((ulong)(long)(int)uVar13 >> 0x18 & 1) != 0)) {
          uVar18 = Ram0002000000000070;
          uVar2 = Ram0002000000000068;
          do {
            uVar11 = Ram00020000000004e0;
          } while ((uVar11 & 0x10) != 0);
          Ram00020000000005c8 =
               (ulong)((long)*(int *)(((long)(int)(uVar18 >> 4) << 0x24) + 0x108080000c860) << 0x24)
               >> 0x26 | (ulong)uVar2 << 0x36 | (long)(int)(uVar13 >> 0x16) << 0x3e |
               in_mhartid << 0x34 | 0x2000000000000000;
        }
        Ram0002000000000150 = 0;
        gp = 0x101800;
        tp = 0x2000000000000;
        return;
      }
      uVar2 = Ram0002000000000190;
      lVar19 = (long)(int)(uVar2 >> 4) << 0x24;
      uVar2 = *(uint *)(lVar19 + 0x108080000c87c);
      uVar13 = Ram0002000000000188;
      iVar12 = Ram0002000000000068;
      if ((((ulong)uVar13 & 3) == (long)iVar12) && (uVar13 = Ram00020000000004f0, (uVar13 & 8) != 0)
         ) {
        Ram0002000000000150 = 0;
      }
      Ram00020000000005e8 = 0;
      uVar13 = uVar2 >> 0x10 & 0x3f;
      if (((long)(int)uVar2 & 0x3000U) == 0) {
        uVar18 = 2 << ((long)*(int *)(lVar19 + 0x108080000c868) & 0x1fU);
        uVar13 = uVar13 + *(int *)(lVar19 + 0x108080000c84c);
        if (uVar18 <= uVar13) {
          uVar13 = uVar13 - uVar18;
        }
        *(uint *)(lVar19 + 0x108080000c84c) = uVar13;
      }
      else {
        *(uint *)(lVar19 + 0x108080000c874) =
             *(uint *)(lVar19 + 0x108080000c874) & 0xfff00000 |
             (*(uint *)(lVar19 + 0x108080000c874) & 0xfffff) + uVar13 & 0xfffff;
        *(uint *)(lVar19 + 0x108080000c878) =
             *(uint *)(lVar19 + 0x108080000c878) & 0xfff00000 |
             (*(uint *)(lVar19 + 0x108080000c878) & 0xfffff) - uVar13 & 0xfffff;
      }
      *(undefined4 *)(lVar19 + 0x108080000c884) = 0x200;
      *(uint *)(lVar19 + 0x108080000c87c) =
           (uint)((ulong)((long)(int)uVar2 << 0x28) >> 0x28) | uVar2 & 0x3f000000;
      gp = 0x101800;
      tp = 0x2000000000000;
      return;
    }
    if (uVar10 == 0x40) {
      if ((uVar13 & 0x1000000) != 0) {
        if (bVar3) goto LAB_0002ee44;
LAB_0002ee68:
        uVar18 = Ram0002000000000070;
        lVar19 = (long)(int)(uVar18 >> 4) << 0x24;
        do {
          uVar18 = Ram00020000000004e0;
        } while ((uVar18 & 0x10) != 0);
        Ram00020000000005c8 =
             (ulong)((long)*(int *)(lVar19 + 0x108080000c860) << 0x24) >> 0x26 | uVar17 << 0x1a |
             uVar9 | 0x1800000000000000;
        uVar18 = Ram0002000000000068;
        do {
          uVar11 = Ram00020000000004e0;
        } while ((uVar11 & 0x10) != 0);
        Ram00020000000005c8 =
             ((long)*(int *)(lVar19 + 0x108080000c830) & 0xfU) << 0x30 | uVar9 |
             (ulong)uVar18 << 0x36 | (ulong)puVar16 & 0xffffffffffff | in_mhartid << 0x34 |
             0x1c00000000000000;
      }
    }
    else {
      if (uVar2 != 0) {
        uVar13 = Ram0002000000000190;
        uVar2 = Ram00020000000000e8;
        lVar19 = (long)(int)(uVar13 >> 4) << 0x24;
        *(uint *)(lVar19 + 0x108080000c87c) =
             uVar2 >> 0x10 & 0xff | *(uint *)(lVar19 + 0x108080000c87c);
        *(undefined4 *)(lVar19 + 0x108080000c884) = 0x200;
        gp = 0x101800;
        tp = 0x2000000000000;
        return;
      }
      uVar18 = Ram0002000000000070;
      if (bVar3) {
        lVar19 = (long)(int)(uVar18 >> 4) << 0x24;
        if ((-1 < (int)uVar7) ||
           (uVar11 = Ram0002000000000068,
           ((ulong)(long)*(int *)(lVar19 + 0x108080002e088) >> 8 &
            ~(long)(1 << ((ulong)uVar11 & 0x1f)) & 0xff) != 0)) {
          if (((ulong)(long)(int)uVar13 >> 0x18 & 1) != 0) {
            do {
              uVar2 = Ram00020000000004e0;
            } while ((uVar2 & 0x10) != 0);
            Ram00020000000005c8 =
                 (ulong)((long)*(int *)(lVar19 + 0x108080000c860) << 0x24) >> 0x26 |
                 (long)(int)(uVar13 >> 0x16) << 0x3e | 0x2400000000000000;
          }
          uVar2 = Ram00020000000000e8;
          lVar6 = Ram0002000000000038;
          if (lVar6 == 0) {
            uVar11 = *(uint *)(lVar19 + 0x108080000c868);
          }
          else {
            uVar11 = *(uint *)(lVar19 + 0x108080000c878);
          }
          *(uint *)(lVar19 + 0x108080000c87c) =
               (uVar11 >> 0x10 & 0x380 | 0x8007) << 0x10 |
               (*(uint *)(lVar19 + 0x108080000c87c) >> 8 & 0xc0 | 1 |
               (((uint)lVar6 & 3) << 0xc) >> 8) << 8 | uVar2 >> 0x10 & 0xff;
          uVar4 = Ram0002000000000020;
          Ram0002000000000040 = 1;
          do {
          } while (_DAT_100010000c2d4 != 0);
          uVar2 = Ram0002000000000070;
          _DAT_100010000c0dc = (undefined4)(((long)(int)(uVar2 >> 8) & 3U) << 0x1c);
          _DAT_100010000c2d4 = 0x20000;
          Ram0002000000000040 = uVar4;
          if ((((ulong)(long)(int)*(uint *)(lVar19 + 0x108080002e088) >> 8 & 0xff) == 0) &&
             ((*(uint *)(lVar19 + 0x108080002e088) >> 0x1c & 1) != 0)) {
            Ram00020000000005e8 = 3;
            gp = 0x101800;
            tp = 0x2000000000000;
            DAT_00101150 = uVar13;
            DAT_00101154 = uVar7;
            DAT_00101158 = 1;
            DAT_00101160 = uVar8;
            DAT_00101168 = uVar17;
            DAT_00101170 = puVar16;
            DAT_00101178 = 0;
            _DAT_100010000c2d4 = 0x20000;
            return;
          }
          FUN_00024960(uVar18 >> 4);
          gp = 0x101800;
          tp = 0x2000000000000;
          DAT_00101150 = uVar13;
          DAT_00101154 = uVar7;
          DAT_00101158 = 1;
          DAT_00101160 = uVar8;
          DAT_00101168 = uVar17;
          DAT_00101170 = puVar16;
          DAT_00101178 = 0;
          return;
        }
        uVar18 = Ram0002000000000108;
        if (uVar18 >> 0x10 == 0) {
          iVar12 = Ram0002000000000140;
          if (iVar12 == 0) {
            iVar12 = Ram0002000000000180;
            if (iVar12 != 0) {
              Ram0002000000000060 = 0;
              lVar19 = Ram0002000000000038;
              if (lVar19 == 0) {
                Ram0002000000000200 = 0xe;
              }
              else {
                Ram0002000000000200 = 0xf;
              }
              Ram0002000000000220 = 4;
              Ram0002000000000080 = 2;
              Ram00020000000003c0 = 0;
              uVar2 = Ram0002000000000190;
              Ram0002000000000220 = 0;
              uVar11 = uVar2 >> 8 & 7;
              Ram00020000000004d0 = uVar11;
              uVar18 = Ram00020000000004a0;
              if ((uVar18 & 4) == 0) {
                *(undefined4 *)(((long)(int)(uVar2 >> 4) << 0x24) + 0x108080000c87c) = 0x60000000;
              }
              else {
                Ram00020000000004d8 = uVar11;
                lVar19 = (long)(int)(uVar2 >> 4) << 0x24;
                do {
                } while ((*(uint *)(lVar19 + 0x108080002e088) & 0x40000) != 0);
                iVar12 = 0x10;
                do {
                  Ram00020000000003c0 = 0;
                  iVar12 = iVar12 + -1;
                } while (iVar12 != 0);
                uVar2 = Ram0002000000000498;
                uVar9 = (ulong)uVar2 & 0x3f;
                Ram00020000000004e8 = (int)uVar9;
                Ram0002000000000070 = (int)uVar9;
                do {
                  uVar4 = Ram00020000000006f8;
                  Ram00020000000003c0 = uVar4;
                  uVar9 = (ulong)((int)uVar9 + -1);
                } while (uVar9 != 0);
                *(uint *)(lVar19 + 0x108080000c87c) =
                     *(uint *)(lVar19 + 0x108080000c87c) | 0x10000000;
                *(undefined4 *)(lVar19 + 0x108080000c884) = 0x200;
              }
LAB_0002f0ec:
              Ram00020000000007d8 = 3;
              DAT_00101178 = 0;
              DAT_00101170 = puVar16;
              DAT_00101168 = uVar17;
              DAT_00101160 = uVar8;
              DAT_00101158 = 1;
              DAT_00101154 = uVar7;
              DAT_00101150 = uVar13;
              return;
            }
          }
          else {
            Ram0002000000000060 = 0;
            lVar19 = Ram0002000000000038;
            if (lVar19 == 0) {
              Ram00020000000001f8 = 0xe;
            }
            else {
              Ram00020000000001f8 = 0xf;
            }
            lVar19 = FUN_000243e0();
            if (lVar19 != 0) goto LAB_0002f0ec;
          }
        }
        else {
          Ram00020000000001b8 = uVar18;
          FUN_00003450((long)(int)uVar18);
          if (DAT_00101086 != '\0') {
            gp = 0x101800;
            tp = 0x2000000000000;
            DAT_00101086 = 0;
            DAT_00101150 = uVar13;
            DAT_00101154 = uVar7;
            DAT_00101158 = 1;
            DAT_00101160 = uVar8;
            DAT_00101168 = uVar17;
            DAT_00101170 = puVar16;
            DAT_00101178 = 0;
            return;
          }
        }
        if ((uVar13 & 0x1000000) != 0) {
LAB_0002ee44:
          if (-1 < (int)uVar7) goto LAB_0002ee68;
        }
      }
      else if ((uVar13 & 0x1000000) != 0) goto LAB_0002ee68;
    }
    uVar18 = ((uVar7 & 0xffff) + 1) * 0xc & 0xfffff;
    bVar3 = true;
  } while( true );
}


/* ---- pm4_WAIT_REG_MEM64_handler @ 0002f208 size=2412 ---- */

/* WARNING: Removing unreachable block (ram,0x0002f858) */
/* WARNING: Removing unreachable block (ram,0x0002f320) */
/* WARNING: Removing unreachable block (ram,0x0002f330) */
/* WARNING: Removing unreachable block (ram,0x0002f8f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pm4_WAIT_REG_MEM64_handler(void)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulong *puVar12;
  uint uVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong uVar17;
  uint *puVar18;
  uint uVar19;
  long lVar20;
  long in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar5 = Ram0002000000000038;
  uVar2 = (uint)uVar5 >> 1;
  if (uVar2 == 0) {
    Ram0002000000000148 = 1;
  }
  uVar13 = Ram00020000000006f8;
  uVar19 = Ram00020000000006f8;
  uVar10 = Ram00020000000006f8;
  puVar15 = (ulong *)(ulong)uVar10;
  uVar17 = Ram00020000000006f8;
  lVar20 = Ram00020000000006f8;
  uVar8 = lVar20 << 0x20 | uVar17;
  uVar16 = Ram00020000000006f8;
  lVar20 = Ram00020000000006f8;
  uVar16 = lVar20 << 0x20 | uVar16;
  uVar7 = Ram00020000000006f8;
  uVar9 = uVar13 & 0xc0;
  puVar12 = (ulong *)(ulong)uVar19;
  if ((uVar13 & 0x30) != 0) {
    Ram0002000000000390 = CONCAT44(uVar10,uVar19);
    puVar12 = (ulong *)Ram0002000000000390;
  }
  if (uVar9 == 0x40) {
    puVar12 = puVar15;
    if (uVar2 == 0) {
      uVar4 = Ram0002000000000020;
      Ram0002000000000040 = 1;
      *(int *)(((ulong)((long)(ulong)uVar19 << 0x2e) >> 0x2c) + 0x1000100000000) = (int)uVar17;
      Ram0002000000000040 = uVar4;
      uVar8 = uVar8 & uVar16;
    }
  }
  else {
    puVar15 = puVar12;
    puVar12 = (ulong *)((ulong)puVar12 & 0xffffffff);
  }
  puVar18 = (uint *)((long)puVar12 * 4 + 0x1000100000000);
  uVar19 = 1;
  bVar3 = false;
  uVar17 = (long)(int)(uVar13 >> 0x16) << 0x3e;
  do {
    do {
    } while (uVar19 != 0);
    if ((uVar13 & 0x30) == 0) {
      uVar4 = Ram0002000000000020;
      Ram0002000000000040 = 1;
      uVar14 = (ulong)*puVar18;
      Ram0002000000000040 = uVar4;
    }
    else {
      Ram00020000000000d8 = uVar13 >> 0x12 & 0x180;
      uVar14 = *puVar15;
    }
    uVar14 = uVar16 & uVar14;
    switch(uVar13 & 7) {
    case 0:
      goto switchD_0002f37c_caseD_0;
    case 1:
      bVar1 = uVar14 < uVar8;
      break;
    case 2:
      bVar1 = uVar14 <= uVar8;
      break;
    case 3:
      bVar1 = uVar8 == uVar14;
      break;
    case 4:
      bVar1 = uVar8 != uVar14;
      break;
    case 5:
      bVar1 = uVar8 <= uVar14;
      break;
    case 6:
      bVar1 = uVar8 < uVar14;
      break;
    default:
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (bVar1) {
switchD_0002f37c_caseD_0:
      if (uVar9 == 0x40) {
        uVar4 = Ram0002000000000020;
        Ram0002000000000040 = 1;
        *puVar18 = (uint)uVar8;
        Ram0002000000000040 = uVar4;
      }
      if (uVar2 == 0) {
        if ((bVar3) && (((ulong)(long)(int)uVar13 >> 0x18 & 1) != 0)) {
          uVar19 = Ram0002000000000070;
          uVar2 = Ram0002000000000068;
          do {
            uVar10 = Ram00020000000004e0;
          } while ((uVar10 & 0x10) != 0);
          Ram00020000000005c8 =
               (ulong)((long)*(int *)(((long)(int)(uVar19 >> 4) << 0x24) + 0x108080000c860) << 0x24)
               >> 0x26 | (ulong)uVar2 << 0x36 | (long)(int)(uVar13 >> 0x16) << 0x3e |
               in_mhartid << 0x34 | 0x2000000000000000;
        }
        Ram0002000000000150 = 0;
        gp = 0x101800;
        tp = 0x2000000000000;
        return;
      }
      uVar2 = Ram0002000000000190;
      lVar20 = (long)(int)(uVar2 >> 4) << 0x24;
      uVar2 = *(uint *)(lVar20 + 0x108080000c87c);
      uVar13 = Ram0002000000000188;
      iVar11 = Ram0002000000000068;
      if ((((ulong)uVar13 & 3) == (long)iVar11) && (uVar13 = Ram00020000000004f0, (uVar13 & 8) != 0)
         ) {
        Ram0002000000000150 = 0;
      }
      Ram00020000000005e8 = 0;
      uVar13 = uVar2 >> 0x10 & 0x3f;
      if (((long)(int)uVar2 & 0x3000U) == 0) {
        uVar19 = 2 << ((long)*(int *)(lVar20 + 0x108080000c868) & 0x1fU);
        uVar13 = uVar13 + *(int *)(lVar20 + 0x108080000c84c);
        if (uVar19 <= uVar13) {
          uVar13 = uVar13 - uVar19;
        }
        *(uint *)(lVar20 + 0x108080000c84c) = uVar13;
      }
      else {
        *(uint *)(lVar20 + 0x108080000c874) =
             *(uint *)(lVar20 + 0x108080000c874) & 0xfff00000 |
             (*(uint *)(lVar20 + 0x108080000c874) & 0xfffff) + uVar13 & 0xfffff;
        *(uint *)(lVar20 + 0x108080000c878) =
             *(uint *)(lVar20 + 0x108080000c878) & 0xfff00000 |
             (*(uint *)(lVar20 + 0x108080000c878) & 0xfffff) - uVar13 & 0xfffff;
      }
      *(undefined4 *)(lVar20 + 0x108080000c884) = 0x200;
      *(uint *)(lVar20 + 0x108080000c87c) =
           (uint)((ulong)((long)(int)uVar2 << 0x28) >> 0x28) | uVar2 & 0x3f000000;
      gp = 0x101800;
      tp = 0x2000000000000;
      return;
    }
    if (uVar9 == 0x40) {
      if ((uVar13 & 0x1000000) != 0) {
        if (bVar3) goto LAB_0002f7b0;
LAB_0002f7d4:
        uVar19 = Ram0002000000000070;
        lVar20 = (long)(int)(uVar19 >> 4) << 0x24;
        do {
          uVar19 = Ram00020000000004e0;
        } while ((uVar19 & 0x10) != 0);
        Ram00020000000005c8 =
             (ulong)((long)*(int *)(lVar20 + 0x108080000c860) << 0x24) >> 0x26 | uVar8 << 0x1a |
             uVar17 | 0x1800000000000000;
        uVar19 = Ram0002000000000068;
        do {
          uVar10 = Ram00020000000004e0;
        } while ((uVar10 & 0x10) != 0);
        Ram00020000000005c8 =
             ((long)*(int *)(lVar20 + 0x108080000c830) & 0xfU) << 0x30 | uVar17 |
             (ulong)uVar19 << 0x36 | (ulong)puVar15 & 0xffffffffffff | in_mhartid << 0x34 |
             0x1c00000000000000;
      }
    }
    else {
      if (uVar2 != 0) {
        uVar13 = Ram0002000000000190;
        uVar2 = Ram00020000000000e8;
        lVar20 = (long)(int)(uVar13 >> 4) << 0x24;
        *(uint *)(lVar20 + 0x108080000c87c) =
             uVar2 >> 0x10 & 0xff | *(uint *)(lVar20 + 0x108080000c87c);
        *(undefined4 *)(lVar20 + 0x108080000c884) = 0x200;
        gp = 0x101800;
        tp = 0x2000000000000;
        return;
      }
      uVar19 = Ram0002000000000070;
      if (bVar3) {
        lVar20 = (long)(int)(uVar19 >> 4) << 0x24;
        if ((-1 < (int)uVar7) ||
           (uVar10 = Ram0002000000000068,
           ((ulong)(long)*(int *)(lVar20 + 0x108080002e088) >> 8 &
            ~(long)(1 << ((ulong)uVar10 & 0x1f)) & 0xff) != 0)) {
          if (((ulong)(long)(int)uVar13 >> 0x18 & 1) != 0) {
            do {
              uVar2 = Ram00020000000004e0;
            } while ((uVar2 & 0x10) != 0);
            Ram00020000000005c8 =
                 (ulong)((long)*(int *)(lVar20 + 0x108080000c860) << 0x24) >> 0x26 |
                 (long)(int)(uVar13 >> 0x16) << 0x3e | 0x2400000000000000;
          }
          uVar2 = Ram00020000000000e8;
          lVar6 = Ram0002000000000038;
          if (lVar6 == 0) {
            uVar10 = *(uint *)(lVar20 + 0x108080000c868);
          }
          else {
            uVar10 = *(uint *)(lVar20 + 0x108080000c878);
          }
          *(uint *)(lVar20 + 0x108080000c87c) =
               (uVar10 >> 0x10 & 0x380 | 0x8009) << 0x10 |
               (*(uint *)(lVar20 + 0x108080000c87c) >> 8 & 0xc0 | 1 |
               (((uint)lVar6 & 3) << 0xc) >> 8) << 8 | uVar2 >> 0x10 & 0xff;
          uVar4 = Ram0002000000000020;
          Ram0002000000000040 = 1;
          do {
          } while (_DAT_100010000c2d4 != 0);
          uVar2 = Ram0002000000000070;
          _DAT_100010000c0dc = (undefined4)(((long)(int)(uVar2 >> 8) & 3U) << 0x1c);
          _DAT_100010000c2d4 = 0x20000;
          Ram0002000000000040 = uVar4;
          if ((((ulong)(long)(int)*(uint *)(lVar20 + 0x108080002e088) >> 8 & 0xff) == 0) &&
             ((*(uint *)(lVar20 + 0x108080002e088) >> 0x1c & 1) != 0)) {
            Ram00020000000005e8 = 3;
            gp = 0x101800;
            tp = 0x2000000000000;
            DAT_00101150 = uVar13;
            DAT_00101154 = uVar7;
            DAT_00101158 = 0;
            DAT_00101160 = uVar16;
            DAT_00101168 = uVar8;
            DAT_00101170 = puVar15;
            DAT_00101178 = 0;
            _DAT_100010000c2d4 = 0x20000;
            return;
          }
          FUN_00024960(uVar19 >> 4);
          gp = 0x101800;
          tp = 0x2000000000000;
          DAT_00101150 = uVar13;
          DAT_00101154 = uVar7;
          DAT_00101158 = 0;
          DAT_00101160 = uVar16;
          DAT_00101168 = uVar8;
          DAT_00101170 = puVar15;
          DAT_00101178 = 0;
          return;
        }
        uVar19 = Ram0002000000000108;
        if (uVar19 >> 0x10 == 0) {
          iVar11 = Ram0002000000000140;
          if (iVar11 == 0) {
            iVar11 = Ram0002000000000180;
            if (iVar11 != 0) {
              Ram0002000000000060 = 0;
              lVar20 = Ram0002000000000038;
              if (lVar20 == 0) {
                Ram0002000000000200 = 0xe;
              }
              else {
                Ram0002000000000200 = 0xf;
              }
              Ram0002000000000220 = 4;
              Ram0002000000000080 = 2;
              Ram00020000000003c0 = 0;
              uVar2 = Ram0002000000000190;
              Ram0002000000000220 = 0;
              uVar10 = uVar2 >> 8 & 7;
              Ram00020000000004d0 = uVar10;
              uVar19 = Ram00020000000004a0;
              if ((uVar19 & 4) == 0) {
                *(undefined4 *)(((long)(int)(uVar2 >> 4) << 0x24) + 0x108080000c87c) = 0x60000000;
              }
              else {
                Ram00020000000004d8 = uVar10;
                lVar20 = (long)(int)(uVar2 >> 4) << 0x24;
                do {
                } while ((*(uint *)(lVar20 + 0x108080002e088) & 0x40000) != 0);
                iVar11 = 0x10;
                do {
                  Ram00020000000003c0 = 0;
                  iVar11 = iVar11 + -1;
                } while (iVar11 != 0);
                uVar2 = Ram0002000000000498;
                uVar17 = (ulong)uVar2 & 0x3f;
                Ram00020000000004e8 = (int)uVar17;
                Ram0002000000000070 = (int)uVar17;
                do {
                  uVar4 = Ram00020000000006f8;
                  Ram00020000000003c0 = uVar4;
                  uVar17 = (ulong)((int)uVar17 + -1);
                } while (uVar17 != 0);
                *(uint *)(lVar20 + 0x108080000c87c) =
                     *(uint *)(lVar20 + 0x108080000c87c) | 0x10000000;
                *(undefined4 *)(lVar20 + 0x108080000c884) = 0x200;
              }
LAB_0002fa58:
              Ram00020000000007d8 = 3;
              DAT_00101178 = 0;
              DAT_00101170 = puVar15;
              DAT_00101168 = uVar8;
              DAT_00101160 = uVar16;
              DAT_00101158 = 0;
              DAT_00101154 = uVar7;
              DAT_00101150 = uVar13;
              return;
            }
          }
          else {
            Ram0002000000000060 = 0;
            lVar20 = Ram0002000000000038;
            if (lVar20 == 0) {
              Ram00020000000001f8 = 0xe;
            }
            else {
              Ram00020000000001f8 = 0xf;
            }
            lVar20 = FUN_000243e0();
            if (lVar20 != 0) goto LAB_0002fa58;
          }
        }
        else {
          Ram00020000000001b8 = uVar19;
          FUN_00003450((long)(int)uVar19);
          if (DAT_00101086 != '\0') {
            gp = 0x101800;
            tp = 0x2000000000000;
            DAT_00101086 = 0;
            DAT_00101150 = uVar13;
            DAT_00101154 = uVar7;
            DAT_00101158 = 0;
            DAT_00101160 = uVar16;
            DAT_00101168 = uVar8;
            DAT_00101170 = puVar15;
            DAT_00101178 = 0;
            return;
          }
        }
        if ((uVar13 & 0x1000000) != 0) {
LAB_0002f7b0:
          if (-1 < (int)uVar7) goto LAB_0002f7d4;
        }
      }
      else if ((uVar13 & 0x1000000) != 0) goto LAB_0002f7d4;
    }
    uVar19 = ((uVar7 & 0xffff) + 1) * 0xc & 0xfffff;
    bVar3 = true;
  } while( true );
}


/* ---- pm4_OP_D1_handler @ 0002fb78 size=828 ---- */

void pm4_OP_D1_handler(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0002000000000148 = 1;
  uVar2 = Ram00020000000006f8;
  uVar4 = (ulong)(param_1 << 0x22) >> 0x34;
  uVar15 = uVar4;
  if (0x20 < uVar4) {
    uVar15 = 0x20;
  }
  puVar6 = &DAT_00101188;
  puVar8 = &DAT_00101288;
  uVar9 = 0;
  if (uVar4 != 0) {
    do {
      uVar3 = Ram00020000000006f8;
      lVar10 = Ram00020000000006f8;
      Ram0002000000000390 = lVar10 << 0x20 | uVar3;
      uVar1 = Ram0002000000000390;
      *puVar6 = uVar1;
      uVar3 = Ram00020000000006f8;
      lVar10 = Ram00020000000006f8;
      *puVar8 = lVar10 << 0x20 | uVar3;
      uVar9 = uVar9 + 1;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar9 < uVar15);
  }
  lVar10 = (long)(int)(uVar2 >> 0x10) << 1;
  if ((ulong)(long)(int)(uVar2 >> 0x10) < 4) {
    lVar10 = 8;
  }
  uVar14 = uVar2 >> 2 & 3;
  uVar9 = 0;
  uVar3 = 0;
  Ram00020000000000d8 = uVar14;
  if (uVar4 < 4) goto LAB_0002fd94;
  do {
    if ((uVar9 & 0xf) == 0xf) {
      uVar13 = 2;
      uVar12 = 0;
    }
    else {
      puVar6 = &DAT_00101188;
      puVar8 = &DAT_00101288;
      uVar7 = 7;
      uVar5 = 0xf;
      uVar12 = 0;
      do {
        uVar13 = uVar12;
        if ((((*(ulong *)*puVar6 < *puVar8) || (*(ulong *)puVar6[1] < puVar8[1])) ||
            (*(ulong *)puVar6[2] < puVar8[2])) || (*(ulong *)puVar6[3] < puVar8[3])) {
          if (((uVar2 & 2) != 0) && (uVar12 = Ram00020000000002f8, (uVar12 & 0x10000) != 0))
          goto LAB_0002fea8;
          lVar11 = 0;
          do {
            Ram00020000000003c0 = 0;
            lVar11 = (long)((int)lVar11 + 1);
          } while (lVar10 != lVar11);
        }
        else {
          uVar9 = uVar9 | uVar5;
          uVar3 = uVar3 + 4;
        }
        if (uVar15 <= uVar7) {
          uVar12 = uVar13 + 4;
          if (uVar7 != uVar15) goto LAB_0002fda0;
          goto LAB_0002fcf8;
        }
        uVar12 = uVar13 + 4;
        uVar5 = 0xfL << (uVar12 & 0x3f);
        uVar7 = uVar7 + 4;
        puVar6 = puVar6 + 4;
        puVar8 = puVar8 + 4;
      } while (uVar5 != (uVar5 & uVar9));
      uVar13 = uVar13 + 6;
    }
joined_r0x0002fd60:
    uVar5 = uVar12 + 1;
    if (uVar15 == uVar13) {
      uVar13 = 3L << (uVar12 & 0x3f);
      if (uVar13 == (uVar13 & uVar9)) {
LAB_0002fea8:
        FUN_00024168();
        return;
      }
      if ((*(ulong *)(&DAT_00101188)[uVar12] < (ulong)(&DAT_00101288)[uVar12]) ||
         (*(ulong *)(&DAT_00101188)[uVar5] < (ulong)(&DAT_00101288)[uVar5])) {
        if (((uVar2 & 2) != 0) && (uVar13 = Ram00020000000002f8, (uVar13 & 0x10000) != 0))
        goto LAB_0002fea8;
        lVar11 = 0;
        do {
          Ram00020000000003c0 = 0;
          lVar11 = (long)((int)lVar11 + 1);
        } while (lVar10 != lVar11);
      }
      else {
        uVar9 = uVar9 | uVar13;
        uVar3 = uVar3 + 2;
      }
    }
    if (uVar15 == uVar5) {
      uVar13 = 1L << (uVar12 & 0x3f);
      if (uVar13 == (uVar13 & uVar9)) goto LAB_0002fea8;
      if (*(ulong *)(&DAT_00101188)[uVar12] < (ulong)(&DAT_00101288)[uVar12]) {
        if (((uVar2 & 2) != 0) && (uVar13 = Ram00020000000002f8, (uVar13 & 0x10000) != 0))
        goto LAB_0002fea8;
        lVar11 = 0;
        do {
          Ram00020000000003c0 = 0;
          lVar11 = (long)((int)lVar11 + 1);
        } while (lVar10 != lVar11);
      }
      else {
        uVar9 = uVar9 | uVar13;
        uVar3 = uVar3 + 1;
      }
    }
    if (((uVar2 & 2) != 0) && (uVar13 = Ram00020000000002f8, (uVar13 & 0x10000) != 0))
    goto LAB_0002fea8;
    if (uVar3 == uVar15) {
      Ram0002000000000150 = 0;
      FUN_00024168();
      return;
    }
    lVar11 = 0;
    do {
      Ram00020000000003c0 = 0;
      lVar11 = (long)((int)lVar11 + 1);
    } while (lVar10 != lVar11);
    Ram00020000000000d8 = uVar14;
  } while (3 < uVar4);
LAB_0002fd94:
  uVar12 = 0;
  if (uVar15 == 3) {
LAB_0002fcf8:
    uVar5 = 7L << (uVar12 & 0x3f);
    if (uVar5 == (uVar5 & uVar9)) goto LAB_0002fea8;
    uVar13 = uVar12 + 2;
    if (((*(ulong *)(&DAT_00101188)[uVar12] < (ulong)(&DAT_00101288)[uVar12]) ||
        (*(ulong *)(&DAT_00101188)[uVar12 + 1] < (ulong)(&DAT_00101288)[uVar12 + 1])) ||
       (*(ulong *)(&DAT_00101188)[uVar13] < (ulong)(&DAT_00101288)[uVar13])) {
      if (((uVar2 & 2) != 0) && (uVar5 = Ram00020000000002f8, (uVar5 & 0x10000) != 0))
      goto LAB_0002fea8;
      lVar11 = 0;
      do {
        Ram00020000000003c0 = 0;
        lVar11 = (long)((int)lVar11 + 1);
      } while (lVar10 != lVar11);
    }
    else {
      uVar9 = uVar9 | uVar5;
      uVar3 = uVar3 + 3;
    }
  }
  else {
LAB_0002fda0:
    uVar13 = uVar12 + 2;
  }
  goto joined_r0x0002fd60;
}


/* ---- pm4_OP_07_handler @ 0002fec0 size=4 ---- */

void pm4_OP_07_handler(void)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  return;
}


/* ---- FUN_0002fec8 @ 0002fec8 size=556 ---- */

/* WARNING: Removing unreachable block (ram,0x00030050) */
/* WARNING: Removing unreachable block (ram,0x0002fec8) */
/* WARNING: Removing unreachable block (ram,0x000300d0) */

void FUN_0002fec8(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram00020000000006f8;
  lVar10 = Ram00020000000006f8;
  uVar8 = Ram00020000000006f8;
  lVar2 = Ram00020000000006f8;
  uVar11 = Ram00020000000006f8;
  lVar3 = Ram00020000000006f8;
  uVar9 = Ram00020000000006f8;
  lVar4 = Ram00020000000006f8;
  uVar9 = lVar4 << 0x20 | uVar9;
  uVar13 = Ram00020000000006f8;
  lVar4 = Ram00020000000006f8;
  uVar13 = lVar4 << 0x20 | uVar13;
  uVar14 = Ram00020000000006f8;
  lVar4 = Ram00020000000006f8;
  uVar14 = lVar4 << 0x20 | uVar14;
  uVar5 = Ram00020000000006f8;
  lVar4 = Ram00020000000006f8;
  uVar6 = Ram00020000000006f8;
  lVar7 = Ram00020000000006f8;
  lVar12 = (in_mhartid + 3) * 0x100;
  *(ulong *)(lVar12 + 0x3000000000000) = lVar10 << 0x20 | uVar1;
  *(ulong *)(lVar12 + 0x3000000000008) = lVar2 << 0x20 | uVar8;
  *(ulong *)(lVar12 + 0x3000000000010) = lVar3 << 0x20 | uVar11;
  *(ulong *)(lVar12 + 0x3000000000018) = uVar9;
  *(ulong *)(&DAT_3000000000020 + lVar12) = uVar13;
  *(ulong *)(&DAT_3000000000028 + lVar12) = uVar14;
  *(ulong *)(lVar12 + 0x3000000000030) = lVar4 << 0x20 | uVar5;
  lVar10 = in_mhartid * 8;
  *(ulong *)(lVar12 + 0x3000000000038) = lVar7 << 0x20 | uVar6;
  *(ulong *)(lVar10 + 0x3000000000200) =
       *(ulong *)(lVar10 + 0x3000000000200) & 0xffffffff00000000 |
       *(ulong *)(lVar10 + 0x3000000000200) & 0xffff7fff |
       (long)(int)((uint)(ushort)(uVar9 >> 0x30) << 0xf);
  uVar9 = *(ulong *)(lVar10 + 0x3000000000260);
  uVar8 = uVar9 >> 0x25 & 0x1f;
  uVar11 = param_2;
  if (param_2 == 0) {
    uVar11 = (ulong)((uVar9 & 0x1f00000000) == 0);
  }
  lVar10 = (long)uVar13 >> 0x20;
  uVar11 = (long)(int)((uint)((uint)uVar1 >> 0x10 == 1) << 2 | (int)uVar11 << 1) & 6;
  if (lVar10 == 0) {
    uVar11 = uVar11 | 8;
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    if (lVar10 == 1) {
      uVar13 = (ulong)((uVar14 & 0xffffffffffff) == 0x100000001);
    }
  }
  *(ulong *)(in_mhartid * 8 + 0x3000000000280) = uVar11 | uVar13 << 4 | param_1 << 0x20;
  if (param_2 == 0) {
    return;
  }
  if ((uVar1 & 0xffff) < uVar8) {
    uVar8 = uVar1 & 0x1f;
  }
  *(ulong *)(in_mhartid * 8 + 0x3000000000260) =
       uVar9 & 0xffff0000000000f7 | (ulong)(param_1 << 0x28) >> 0x20 |
       ((uVar9 >> 0x20 & 0xfffffffffffffc00 | uVar8 << 5) << 0x30) >> 0x10;
  return;
}


/* ---- FUN_000300f8 @ 000300f8 size=320 ---- */

undefined8
FUN_000300f8(long param_1,long param_2,int param_3,int *param_4,int *param_5,int *param_6,
            uint *param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = *param_7;
  if ((*param_4 == 1) && (*param_5 == 1)) {
    uVar5 = *param_6 - param_3;
    if (uVar1 < uVar5) {
      *param_6 = uVar1 + param_3;
      return 1;
    }
  }
  else {
    uVar5 = *param_4 - (int)param_1;
    iVar4 = (int)param_2;
    if (uVar1 < uVar5) {
      *param_4 = uVar1 + (int)param_1;
      *param_5 = iVar4 + 1;
      *param_6 = param_3 + 1;
      return 1;
    }
    if (param_1 != 0) {
      *param_5 = iVar4 + 1;
      *param_6 = param_3 + 1;
      *param_7 = uVar5;
      return 0;
    }
    if ((uVar1 < (uint)(*param_5 - iVar4)) || (uVar2 = uVar5 * (*param_5 - iVar4), uVar1 < uVar2)) {
      iVar3 = 1;
      for (uVar5 = uVar5 * 2; uVar5 <= uVar1; uVar5 = uVar5 << 1) {
        iVar3 = iVar3 << 1;
      }
      *param_7 = uVar5 >> 1;
      *param_5 = iVar4 + iVar3;
      *param_6 = param_3 + 1;
      return 1;
    }
    if (param_2 != 0) {
      *param_6 = param_3 + 1;
      *param_7 = uVar2;
      return 0;
    }
    if ((uVar1 < (uint)(*param_6 - param_3)) ||
       (uVar5 = uVar2 * (*param_6 - param_3), uVar1 < uVar5)) {
      iVar4 = 1;
      for (uVar2 = uVar2 * 2; uVar2 <= uVar1; uVar2 = uVar2 << 1) {
        iVar4 = iVar4 << 1;
      }
      *param_7 = uVar2 >> 1;
      *param_6 = param_3 + iVar4;
      return 1;
    }
  }
  *param_7 = uVar5;
  return 0;
}


/* ---- FUN_00030238 @ 00030238 size=144 ---- */

uint * FUN_00030238(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  lVar5 = Ram0002000000000790;
  if ((int)((uint)lVar5 & (uint)param_1) == param_1) {
    lVar4 = Ram0002000000000788;
    uVar3 = Ram0002000000000780;
    if ((uVar3 >> 0x20 == 0) ||
       (iVar1 = (int)(uVar3 >> 0x20), (ulong)(lVar5 >> 0x20) <= (ulong)(long)iVar1)) {
      uVar8 = 0x200000000;
      uVar7 = 0x40;
    }
    else {
      uVar7 = (ulong)(uint)(iVar1 << 6);
      uVar8 = (long)(iVar1 + 1) << 0x20;
    }
    Ram0002000000000780 = (int)uVar3 + 1 | uVar8;
    puVar6 = (uint *)(lVar4 + uVar7);
    uVar2 = Ram00020000000000f8;
    *puVar6 = (uint)param_1;
    puVar6[1] = (uint)uVar2;
    puVar6[2] = (uint)((ulong)uVar2 >> 0x20);
    return puVar6;
  }
  return (uint *)0x0;
}


/* ---- FUN_000302c8 @ 000302c8 size=420 ---- */

/* WARNING: Removing unreachable block (ram,0x000303cc) */

void FUN_000302c8(uint param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined4 *puVar10;
  long in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0002000000000390 = param_2;
  uVar5 = Ram0002000000000390;
  uVar2 = Ram0002000000000038;
  iVar7 = (int)uVar2;
  if (iVar7 == 2) {
    iVar7 = Ram0002000000000178;
  }
  uVar1 = Ram0002000000000070;
  lVar9 = (long)(int)(uVar1 >> 4) << 0x24;
  uVar1 = *(uint *)(lVar9 + 0x108080000c830);
  if ((DAT_00101080 == 0) || (iVar7 != 1)) {
    uVar8 = (param_1 & 7) << 0x1d | 0x10000;
    uVar6 = 0xc0060d00;
  }
  else {
    uVar8 = uVar1 >> 8 & 0xf;
    if ((uVar1 & 0xf) == uVar8) {
      uVar6 = 0xc0060d00;
    }
    else {
      uVar6 = 0xc0060d08;
    }
    uVar8 = uVar8 | (param_1 & 7) << 0x1d | 0x10000;
  }
  lVar3 = Ram0002000000000118;
  iVar7 = Ram0002000000000408;
  puVar10 = (undefined4 *)((ulong)(uint)(iVar7 << 2) + lVar3);
  Ram00020000000000b0 = 1;
  uVar4 = Ram0002000000000138;
  Ram0002000000000120 = uVar4;
  *puVar10 = uVar6;
  puVar10[1] = 0x62f;
  puVar10[2] = uVar8;
  puVar10[3] = (int)uVar5;
  puVar10[4] = (int)((ulong)uVar5 >> 0x20);
  puVar10[5] = param_3;
  puVar10[6] = 0;
  puVar10[7] = 0;
  puVar10 = DAT_00101070;
  do {
    iVar7 = Ram0002000000000090;
  } while (iVar7 != 0);
  Ram00020000000000b0 = 0;
  Ram00020000000001d0 = 8;
  Ram00020000000000a8 = 2;
  *DAT_00101070 = 0x2f;
  if (*(long *)(in_mhartid * 8 + 0x3000000000200) << 0xf < 0) {
    *puVar10 = 0x16;
  }
  Ram00020000000000a8 = 0;
  if (((ulong)(long)*(int *)(lVar9 + 0x108080000c834) >> 0x1e & 1) != 0) {
    return;
  }
  uVar1 = Ram0002000000000070;
  Ram0002000000000048 = uVar1 >> 8;
  Ram00020000000001e0 = 1;
  return;
}


/* ---- FUN_00030470 @ 00030470 size=68 ---- */

long FUN_00030470(long param_1)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  return (ulong)(param_1 == 0) + param_1;
}


/* ---- sub_304b4 @ 000304b4 size=4 ---- */

void sub_304b4(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_000304b8 @ 000304b8 size=64 ---- */

undefined8 FUN_000304b8(undefined8 *param_1)

{
  undefined8 unaff_retaddr;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  *param_1 = unaff_retaddr;
  param_1[1] = unaff_s0;
  param_1[2] = unaff_s1;
  param_1[3] = unaff_s2;
  param_1[4] = unaff_s3;
  param_1[5] = unaff_s4;
  param_1[6] = unaff_s5;
  param_1[7] = unaff_s6;
  param_1[8] = unaff_s7;
  param_1[9] = unaff_s8;
  param_1[10] = &DAT_10001000308c0;
  param_1[0xb] = &DAT_1000100009124;
  param_1[0xc] = &DAT_100020000c000;
  param_1[0xd] = register0x00002010;
  return 0;
}


/* ---- FUN_000304f8 @ 000304f8 size=184 ---- */

void FUN_000304f8(void)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  iVar1 = Ram0002000000000140;
  if (iVar1 != 0) {
    iVar1 = Ram0002000000000038;
    if (iVar1 != 2) {
      Ram00020000000001f8 = (iVar1 != 0) + 0x10;
      lVar3 = Ram0002000000000790;
      if ((lVar3 != 0) && (lVar3 = FUN_00030238(&DAT_00002002), lVar3 != 0)) {
        uVar2 = Ram0002000000000240;
        *(undefined4 *)(lVar3 + 0xc) = uVar2;
        *(undefined4 *)(lVar3 + 0x10) = 2;
      }
      uVar2 = Ram0002000000000240;
      lVar3 = FUN_000304b8(&DAT_00101388,uVar2);
      if (lVar3 == 0) {
        FUN_000243e0();
      }
      uVar2 = Ram0002000000000240;
      lVar3 = Ram0002000000000790;
      if ((lVar3 != 0) && (lVar3 = FUN_00030238(&DAT_00002004), lVar3 != 0)) {
        uVar2 = Ram0002000000000240;
        *(undefined4 *)(lVar3 + 0xc) = uVar2;
        *(undefined4 *)(lVar3 + 0x10) = 2;
      }
    }
    return;
  }
  return;
}


/* ---- FUN_000305b0 @ 000305b0 size=196 ---- */

/* WARNING: Removing unreachable block (ram,0x000305dc) */

void FUN_000305b0(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  while (iVar2 = Ram00020000000000d0, iVar2 == 0) {
    if (param_1 != 0) {
      FUN_000304f8();
    }
  }
  lVar4 = in_mhartid * 8;
  if ((*(ulong *)(lVar4 + 0x3000000000260) & 2) != 0) {
    *(ulong *)(lVar4 + 0x3000000000260) = *(ulong *)(lVar4 + 0x3000000000260) & 0xfffffffffffffffd;
    uVar1 = Ram0002000000000070;
    lVar3 = (long)(int)(uVar1 >> 4) << 0x24;
    *(uint *)(lVar3 + 0x108080000c834) =
         (uint)((ulong)((long)*(int *)(lVar3 + 0x108080000c834) << 0x21) >> 0x21);
    Ram00020000000000a8 = 2;
    Ram000100020000b9f8 = 0;
    if (*(long *)(lVar4 + 0x3000000000200) << 0xf < 0) {
      *DAT_00101070 = 0x35;
    }
    Ram00020000000000a8 = 0;
  }
  return;
}


/* ---- FUN_00030678 @ 00030678 size=1176 ---- */

/* WARNING: Removing unreachable block (ram,0x00030858) */
/* WARNING: Removing unreachable block (ram,0x00030734) */
/* WARNING: Removing unreachable block (ram,0x00030994) */
/* WARNING: Removing unreachable block (ram,0x000306e8) */
/* WARNING: Removing unreachable block (ram,0x000307e8) */
/* WARNING: Removing unreachable block (ram,0x00030a1c) */

void FUN_00030678(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  ushort uVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long in_mhartid;
  undefined4 in_stack_00000000;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  lVar3 = Ram0002000000000790;
  if (lVar3 != 0) {
    uVar9 = *(undefined8 *)(in_mhartid * 8 + 0x3000000000280);
    uVar4 = (uint)((ulong)*(undefined8 *)(in_mhartid * 8 + 0x3000000000260) >> 0x20);
    lVar3 = FUN_00030238(0x102);
    if (lVar3 != 0) {
      *(int *)(lVar3 + 0xc) = (int)((ulong)uVar9 >> 0x20);
      *(undefined4 *)(lVar3 + 0x10) = param_4;
      *(undefined4 *)(lVar3 + 0x14) = param_5;
      *(undefined4 *)(lVar3 + 0x18) = param_6;
      *(undefined4 *)(lVar3 + 0x1c) = param_7;
      *(undefined4 *)(lVar3 + 0x20) = param_8;
      *(undefined4 *)(lVar3 + 0x24) = in_stack_00000000;
      *(undefined8 *)(lVar3 + 0x28) = param_1;
      *(undefined4 *)(lVar3 + 0x30) = param_3;
      *(undefined4 *)(lVar3 + 0x34) = param_2;
      *(uint *)(lVar3 + 0x38) = uVar4 & 0x1f;
      *(uint *)(lVar3 + 0x3c) = uVar4 >> 5 & 0x1f;
    }
  }
  uVar7 = *(ulong *)(in_mhartid * 8 + 0x3000000000280);
  if ((uVar7 & 1) == 0) {
    *(ulong *)(in_mhartid * 8 + 0x3000000000280) = uVar7 | 1;
    FUN_000305b0(0);
    uVar7 = Ram00020000000006f8;
    lVar3 = Ram00020000000006f8;
    uVar7 = lVar3 << 0x20 | uVar7;
    uVar8 = uVar7;
    if (0xf < uVar7) {
      uVar8 = 0xf;
    }
    Ram00020000000000a8 = 2;
    *(int *)(((ulong)((long)(int)(((uint)((ulong)*(undefined8 *)(in_mhartid * 8 + 0x3000000000200)
                                         >> 0x20) & 0xff) + 0x2e40) << 0x20) >> 0x1e) +
            0x1000200000000) =
         (int)((ulong)*(undefined8 *)(in_mhartid * 8 + 0x3000000000280) >> 0x20);
    uVar5 = 0;
    if (uVar7 != 0) {
      do {
        uVar4 = Ram00020000000006f8;
        uVar2 = Ram00020000000006f8;
        *(undefined4 *)
         (((ulong)((long)(int)((uVar4 & 0x7ff) + 0x2c00) << 0x20) >> 0x1e) + 0x1000200000000) =
             uVar2;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar8);
    }
    do {
      uVar9 = Ram00020000000006f8;
      uVar9 = Ram00020000000006f8;
      uVar8 = uVar8 + 1;
    } while (uVar8 != 0x10);
    Ram00020000000000a8 = 0;
    uVar4 = Ram0002000000000178;
    Ram0002000000000080 = (ulong)uVar4;
    Ram00020000000003c0 = 0;
  }
  else {
    FUN_000305b0(1);
  }
  uVar7 = *(ulong *)(in_mhartid * 8 + 0x3000000000200);
  uVar4 = (uint)(uVar7 >> 0x20) & 0xff;
  if ((uVar7 >> 0x20 & 0x10000) != 0) {
    Ram0001000100030d1c =
         (int)((ulong)*(undefined8 *)(in_mhartid * 8 + 0x3000000000280) >> 0x20) << 7 | 0x80000000;
    Ram0001000100030d1c = (int)param_1;
    Ram0001000100030d1c = param_3;
    Ram0001000100030d1c = param_7;
    Ram0001000100030d1c = param_8;
    Ram0001000100030d1c = in_stack_00000000;
    Ram0001000100030d1c = param_4;
    Ram0001000100030d1c = param_5;
    Ram0001000100030d1c = param_6;
  }
  lVar6 = in_mhartid * 8;
  uVar1 = (ushort)(*(ulong *)(lVar6 + 0x3000000000260) >> 0x30);
  *(ulong *)(lVar6 + 0x3000000000260) =
       *(ulong *)(lVar6 + 0x3000000000260) & 0xffffffffffff | 6 | (long)(int)(uVar1 + 1) << 0x30;
  Ram00020000000000a8 = 2;
  *(int *)(((ulong)((long)(int)(uVar4 + 0x2e41) << 0x20) >> 0x1e) + 0x1000200000000) = (int)param_1;
  *(uint *)(((ulong)((long)(int)(uVar4 + 0x2e42) << 0x20) >> 0x1e) + 0x1000200000000) =
       (uVar1 & 0x7fff) << 0x10 | (uint)((ulong)param_1 >> 0x20);
  *(undefined4 *)(((ulong)((long)(int)(uVar4 + 0x2e43) << 0x20) >> 0x1e) + 0x1000200000000) =
       param_2;
  *(undefined4 *)(((ulong)((long)(int)(uVar4 + 0x2e44) << 0x20) >> 0x1e) + 0x1000200000000) =
       param_3;
  Ram000100020000b810 = param_4;
  Ram000100020000b814 = param_5;
  Ram000100020000b818 = param_6;
  Ram000100020000b804 = param_7;
  Ram000100020000b808 = param_8;
  Ram000100020000b80c = in_stack_00000000;
  Ram000100020000b800 = (int)uVar7;
  Ram00020000000000a8 = 0;
  lVar3 = Ram0002000000000790;
  if (lVar3 != 0) {
    uVar9 = *(undefined8 *)(lVar6 + 0x3000000000280);
    uVar4 = (uint)((ulong)*(undefined8 *)(lVar6 + 0x3000000000260) >> 0x20);
    lVar3 = FUN_00030238(0x101);
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x10) = param_4;
      *(int *)(lVar3 + 0xc) = (int)((ulong)uVar9 >> 0x20);
      *(undefined4 *)(lVar3 + 0x14) = param_5;
      *(undefined4 *)(lVar3 + 0x18) = param_6;
      *(undefined4 *)(lVar3 + 0x1c) = param_7;
      *(undefined4 *)(lVar3 + 0x20) = param_8;
      *(undefined4 *)(lVar3 + 0x24) = in_stack_00000000;
      *(undefined8 *)(lVar3 + 0x28) = param_1;
      *(undefined4 *)(lVar3 + 0x30) = param_3;
      *(undefined4 *)(lVar3 + 0x34) = param_2;
      *(uint *)(lVar3 + 0x38) = uVar4 & 0x1f;
      *(uint *)(lVar3 + 0x3c) = uVar4 >> 5 & 0x1f;
    }
  }
  lVar3 = Ram0002000000000790;
  if (lVar3 != 0) {
    uVar9 = *(undefined8 *)(in_mhartid * 8 + 0x3000000000280);
    uVar4 = (uint)((ulong)*(undefined8 *)(in_mhartid * 8 + 0x3000000000260) >> 0x20);
    lVar3 = FUN_00030238(0x104);
    if (lVar3 != 0) {
      *(int *)(lVar3 + 0xc) = (int)((ulong)uVar9 >> 0x20);
      *(undefined4 *)(lVar3 + 0x10) = param_4;
      *(undefined4 *)(lVar3 + 0x14) = param_5;
      *(undefined4 *)(lVar3 + 0x18) = param_6;
      *(undefined4 *)(lVar3 + 0x1c) = param_7;
      *(undefined4 *)(lVar3 + 0x20) = param_8;
      *(undefined4 *)(lVar3 + 0x24) = in_stack_00000000;
      *(undefined8 *)(lVar3 + 0x28) = param_1;
      *(undefined4 *)(lVar3 + 0x30) = param_3;
      *(undefined4 *)(lVar3 + 0x34) = param_2;
      *(uint *)(lVar3 + 0x38) = uVar4 & 0x1f;
      *(uint *)(lVar3 + 0x3c) = uVar4 >> 5 & 0x1f;
    }
  }
  return;
}


/* ---- FUN_00030b10 @ 00030b10 size=236 ---- */

/* WARNING: Removing unreachable block (ram,0x00030b3c) */

void FUN_00030b10(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar2 = Ram0002000000000070;
  uVar6 = *(ulong *)(in_mhartid * 8 + 0x3000000000240);
  uVar3 = (long)(int)(uVar2 >> 8) & 7;
  lVar5 = Ram0002000000000790;
  uVar4 = uVar6 & 0xffffffffffff;
  if (lVar5 != 0) {
    if ((*(uint *)(uVar4 - 0x40) <= (uint)param_1) && (lVar5 = FUN_00030238(0x804), lVar5 != 0)) {
      *(uint *)(lVar5 + 0xc) = (uint)param_1;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined4 *)(lVar5 + 0x18) = 0;
    }
  }
  uVar1 = Ram0002000000000038;
  Ram0002000000000200 = (int)uVar1;
  Ram0002000000000080 = 2;
  Ram00020000000003c0 = 0;
  Ram0002000000000070 = 0x32;
  Ram0002000000000058 = uVar3 << 10 | 0x10030;
  Ram0002000000000010 = (uVar6 >> 0x30) * param_1 + uVar4;
  Ram0002000000000010 = (int)uVar3 << 0x10 | 0x30;
  return;
}


/* ---- FUN_00030c00 @ 00030c00 size=476 ---- */

/* WARNING: Removing unreachable block (ram,0x00030c04) */

ulong FUN_00030c00(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  ulong uVar15;
  ulong uVar16;
  long in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  lVar11 = (in_mhartid + 3) * 0x100;
  piVar13 = *(int **)(lVar11 + 0x3000000000008);
  iVar4 = (int)*(undefined8 *)(lVar11 + 0x3000000000018);
  uVar16 = 0xffffffffffffffff;
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      iVar9 = (int)piVar13;
      uVar15 = (ulong)piVar13 >> 0x30;
      uVar8 = (ulong)piVar13 >> 0x20 & 0xffff;
      piVar13 = (int *)0x0;
    }
    else {
      iVar9 = *piVar13;
      uVar8 = (ulong)*(ushort *)(piVar13 + 1);
      uVar15 = (ulong)*(ushort *)((long)piVar13 + 6);
    }
    uVar16 = 0xffffffffffffffff;
    piVar14 = piVar13;
    while( true ) {
      piVar12 = (int *)(param_1 + 0xa60 + ((ulong)((long)iVar9 << 0x20) >> 0x1c));
      iVar1 = *piVar12;
      iVar2 = piVar12[2];
      iVar3 = piVar12[1];
      uVar7 = (ulong)((iVar1 + iVar2) - iVar3);
      uVar7 = uVar7 & (long)~uVar7 >> 0x3f;
      lVar11 = Ram0002000000000790;
      uVar6 = (uint)uVar7;
      if ((lVar11 != 0) && (lVar11 = FUN_00030238(&DAT_00002001), lVar11 != 0)) {
        *(short *)(lVar11 + 0x10) = (short)uVar8;
        *(int *)(lVar11 + 0xc) = iVar9;
        *(short *)(lVar11 + 0x12) = (short)uVar15;
        *(uint *)(lVar11 + 0x14) = uVar6;
        *(int *)(lVar11 + 0x18) = iVar1;
        *(int *)(lVar11 + 0x1c) = iVar3 - iVar2;
      }
      uVar10 = (uint)uVar8;
      if ((uVar8 & (long)(int)(uVar10 - 1)) == 0) {
        if (1 < uVar10) {
          do {
            uVar10 = uVar10 >> 1;
            uVar7 = (ulong)(int)((uint)uVar7 >> 1);
          } while (uVar10 != 1);
        }
      }
      else if (uVar6 >> 0x10 == 0) {
        uVar5 = (int)uVar15 * uVar6 >> 0x10;
        uVar7 = (ulong)(int)((uVar6 - uVar10 * uVar5 < uVar10 ^ 1) + uVar5);
      }
      else {
        uVar7 = (ulong)(int)(uVar6 / uVar10);
      }
      iVar9 = (int)uVar7;
      if (uVar16 < uVar7) {
        iVar9 = (int)uVar16;
      }
      uVar16 = (ulong)iVar9;
      if ((int *)((long)piVar13 + ((ulong)((long)(iVar4 + -1) << 0x20) >> 0x1d)) == piVar14) break;
      iVar9 = piVar14[2];
      uVar8 = (ulong)*(ushort *)(piVar14 + 3);
      uVar15 = (ulong)*(ushort *)((long)piVar14 + 0xe);
      piVar14 = piVar14 + 2;
    }
  }
  return uVar16;
}


/* ---- FUN_00030de0 @ 00030de0 size=11972 ---- */

/* WARNING: Removing unreachable block (ram,0x00033be8) */
/* WARNING: Removing unreachable block (ram,0x00033364) */
/* WARNING: Removing unreachable block (ram,0x000316b4) */
/* WARNING: Removing unreachable block (ram,0x000339d4) */
/* WARNING: Removing unreachable block (ram,0x00031534) */
/* WARNING: Removing unreachable block (ram,0x00032600) */
/* WARNING: Removing unreachable block (ram,0x00032bf8) */
/* WARNING: Removing unreachable block (ram,0x0003237c) */
/* WARNING: Removing unreachable block (ram,0x0003191c) */
/* WARNING: Removing unreachable block (ram,0x000329c8) */
/* WARNING: Removing unreachable block (ram,0x000317b8) */
/* WARNING: Removing unreachable block (ram,0x00030fe4) */
/* WARNING: Removing unreachable block (ram,0x00030df4) */
/* WARNING: Removing unreachable block (ram,0x00030f0c) */
/* WARNING: Removing unreachable block (ram,0x00032488) */
/* WARNING: Removing unreachable block (ram,0x00031888) */
/* WARNING: Removing unreachable block (ram,0x00032eb4) */
/* WARNING: Removing unreachable block (ram,0x000314cc) */
/* WARNING: Removing unreachable block (ram,0x00033274) */
/* WARNING: Removing unreachable block (ram,0x000325bc) */
/* WARNING: Removing unreachable block (ram,0x00032efc) */
/* WARNING: Removing unreachable block (ram,0x0003157c) */
/* WARNING: Removing unreachable block (ram,0x00032dc4) */
/* WARNING: Removing unreachable block (ram,0x000336f8) */
/* WARNING: Removing unreachable block (ram,0x000333ac) */
/* WARNING: Removing unreachable block (ram,0x00032b18) */
/* WARNING: Removing unreachable block (ram,0x000338e4) */
/* WARNING: Removing unreachable block (ram,0x00031658) */
/* WARNING: Removing unreachable block (ram,0x00032708) */
/* WARNING: Removing unreachable block (ram,0x00032748) */
/* WARNING: Removing unreachable block (ram,0x00032f58) */
/* WARNING: Removing unreachable block (ram,0x000316ec) */
/* WARNING: Removing unreachable block (ram,0x000322d0) */
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_00030de0(int *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,long param_6,
            ulong param_7)

{
  bool bVar1;
  ushort *puVar2;
  uint *puVar3;
  int *piVar4;
  uint *puVar5;
  ushort uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  bool bVar20;
  long lVar21;
  uint *puVar22;
  long *plVar23;
  long lVar24;
  ulong uVar25;
  int *piVar26;
  int iVar27;
  ulong uVar28;
  int *piVar29;
  undefined4 uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong *puVar33;
  int iVar34;
  undefined4 uVar35;
  uint uVar36;
  uint uVar37;
  int iVar38;
  ulong uVar39;
  uint uVar40;
  ulong uVar41;
  ulong uVar42;
  long lVar43;
  ulong uVar44;
  undefined4 uVar45;
  long lVar46;
  ulong *puVar47;
  ulong uVar48;
  long in_mhartid;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_e0;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long *plStack_80;
  int iStack_60;
  int iStack_5c;
  uint uStack_58;
  int iStack_54;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uStack_b0 = (ulong)*(int *)((long)param_1 +
                             (*(ulong *)(in_mhartid * 8 + 0x3000000000220) >> 0x20) +
                             (param_2 & 0xffffffff) * 0x20 + 0x14);
  uStack_a0 = param_7;
  if (param_6 == 0) {
    lVar19 = in_mhartid;
    FUN_00030b10(param_2 & 0xffffffff);
    FUN_0002fec8(param_2,1);
    if (param_7 != 0) {
      uStack_a0 = (ulong)((int)*(undefined8 *)((in_mhartid + 3) * 0x100 + 0x3000000000038) == 0);
    }
    uVar12 = 0;
    uVar31 = 0;
    uVar42 = 0;
    uStack_88 = 0;
    uStack_a8 = 0;
    uStack_d0 = 0;
    plStack_80 = (long *)0x0;
    uStack_c8 = 0;
    in_mhartid = lVar19;
    uStack_120 = param_5;
    uStack_110 = param_3;
    uStack_e0 = param_2;
    goto LAB_000314cc;
  }
  uVar31 = *(ulong *)(in_mhartid * 8 + 0x3000000000260);
  uStack_88 = 0;
  uStack_a8 = 0;
  uStack_98 = uVar31 >> 0x20 & 0x1f;
  uStack_118 = uVar31 >> 0x2a & 0x1f;
  uStack_90 = uVar31 >> 0x25 & 0x1f;
  uVar12 = uVar31 & 1;
  uVar42 = uVar31 >> 0x20 & 0x1f;
LAB_00030e9c:
  if (uVar42 != 0) goto LAB_00031030;
LAB_00030ea0:
  uVar42 = uStack_90;
  if ((uVar31 & 8) == 0) {
    uVar42 = (ulong)((int)uStack_90 + 1);
    goto LAB_0003103c;
  }
joined_r0x00030eac:
  if (uVar42 != 0) goto LAB_0003103c;
  uStack_d0 = 0;
  uVar39 = 0;
  bVar20 = false;
  uVar48 = uStack_90;
LAB_00030ec0:
  bVar1 = uVar42 == uVar48;
  uVar48 = uStack_90;
  if (bVar1) goto LAB_00031bf8;
LAB_00030ec4:
  uVar16 = uStack_118 << 0x2a;
  uVar42 = uVar48 & 0x1f;
LAB_00030ecc:
  uVar37 = (uint)uVar48;
  *(ulong *)(in_mhartid * 8 + 0x3000000000260) =
       uVar39 << 0x20 | uVar12 | uVar42 << 0x25 | uVar16 | uVar31 & 0xffff8000fffffffe;
  lVar19 = Ram0002000000000790;
  iVar18 = (int)uStack_a8;
  iVar34 = (int)uStack_88;
  if (lVar19 != 0) {
    if (uVar12 != 0) {
      uVar37 = uVar37 - 1 | 0x80000000;
    }
    lVar19 = FUN_00030238(0x1001);
    if (lVar19 != 0) {
      *(uint *)(lVar19 + 0x14) = uVar37;
      *(int *)(lVar19 + 0x10) = (int)uStack_118 + 1;
      *(undefined8 *)(lVar19 + 0x18) = 0xffffffffffffffff;
      *(int *)(lVar19 + 0xc) = (int)uStack_d0;
      *(int *)(lVar19 + 0x20) = iVar18;
      *(int *)(lVar19 + 0x24) = iVar34;
    }
  }
  if (uStack_d0 == 0xffffffffffffffff) {
    return 1;
  }
  uStack_c8 = uStack_d0 & 0xffffffff;
  plStack_80 = (long *)(param_1 + (uStack_c8 + 9) * 0x10);
  lVar19 = Ram0002000000000790;
  if ((((lVar19 != 0) && (uStack_d0 != 0)) &&
      (uVar37 = *(uint *)(plStack_80 + 1), uVar37 < (uint)(iVar34 - iVar18))) &&
     (lVar19 = FUN_00030238(0x880), lVar19 != 0)) {
    *(uint *)(lVar19 + 0x18) = uVar37;
    *(int *)(lVar19 + 0xc) = iVar34;
    *(int *)(lVar19 + 0x10) = iVar18;
    *(int *)(lVar19 + 0x14) = (int)uStack_d0;
  }
LAB_00030fb8:
  uStack_e0 = (ulong)param_1[uStack_c8 * 4 + 0x10];
  uVar12 = uStack_88;
  if (param_1[uStack_c8 * 4 + 0x11] != 0) {
    if (uStack_e0 == *(long *)(in_mhartid * 8 + 0x3000000000280) >> 0x20) {
      uStack_110 = plStack_80[2];
      param_4 = (ulong)(int)plStack_80[3];
      uVar42 = (ulong)(int)plStack_80[4];
      uVar12 = (ulong)*(int *)((long)plStack_80 + 0x24);
      uVar31 = (ulong)(int)plStack_80[5];
      uStack_120 = (ulong)*(int *)((long)plStack_80 + 0x1c);
      uStack_b0 = (ulong)*(int *)((long)plStack_80 + 0x2c);
      goto LAB_00032a8c;
    }
    FUN_00030b10(param_1[uStack_c8 * 4 + 0x10]);
    uStack_110 = plStack_80[2];
    param_4 = (ulong)(int)plStack_80[3];
    uVar42 = (ulong)(int)plStack_80[4];
    uVar12 = (ulong)*(int *)((long)plStack_80 + 0x24);
    uVar31 = (ulong)(int)plStack_80[5];
    uStack_120 = (ulong)*(int *)((long)plStack_80 + 0x1c);
    uStack_b0 = (ulong)*(int *)((long)plStack_80 + 0x2c);
    FUN_0002fec8(uStack_e0,0);
    goto LAB_00032a8c;
  }
LAB_000326c4:
  uStack_88 = uVar12;
  do {
    uVar37 = *(uint *)((((uStack_a8 & (long)((int)plStack_80[1] + -1)) << 0x20) >> 0x1e) +
                      *plStack_80);
  } while (uVar37 >> 0x1f != (uint)(((long)(int)plStack_80[1] & uStack_a8) == 0));
  uStack_e0 = (long)(int)uVar37 & 0x7fffffff;
  uVar48 = *(long *)(in_mhartid * 8 + 0x3000000000280) >> 0x20;
  if (uVar48 != uStack_e0) {
    FUN_00030b10(uStack_e0);
  }
  puVar14 = (ulong *)((long)param_1 +
                     uStack_e0 * 0x20 + (*(ulong *)(in_mhartid * 8 + 0x3000000000220) >> 0x20));
  puVar47 = (ulong *)((long)param_1 +
                     uStack_e0 * 8 + (*(ulong *)(in_mhartid * 8 + 0x3000000000220) & 0xffffffff));
  uStack_110 = *puVar14;
  uVar39 = puVar14[1];
  uVar16 = puVar14[2];
  uVar31 = *puVar47;
  uStack_b0 = (long)uVar16 >> 0x20;
  uVar37 = (uint)uVar31;
  uVar12 = (ulong)(int)uVar37;
  uVar42 = (long)uVar31 >> 0x20;
  uStack_120 = 0;
  param_4 = (ulong)(int)uVar39;
  if (uVar12 != uVar42) {
    uVar36 = (uint)(uVar39 >> 0x20);
    uVar9 = uVar37 & uVar36 - 1;
    iVar34 = (int)(uVar31 >> 0x20);
    uVar40 = iVar34 - uVar37;
    uVar31 = uVar31 & 0xffffffff;
    if ((uStack_b0 & 0xc0000) == 0) {
      uStack_110 = uVar31 | 0x8000000000000000;
      param_4 = 1;
    }
    else {
      iVar18 = (int)uVar16;
      uVar32 = (ulong)iVar18;
      lVar19 = Ram0002000000000790;
      if (lVar19 == 0) {
LAB_00032840:
        if (uVar42 != uVar32) goto LAB_00032844;
      }
      else {
        if (uVar12 <= uVar42) {
          if (((uVar42 < uVar32) || (uVar32 < uVar12)) &&
             (lVar19 = FUN_00030238(0x820), lVar19 != 0)) {
            *(uint *)(lVar19 + 0xc) = uVar37;
            *(int *)(lVar19 + 0x10) = iVar34;
            *(int *)(lVar19 + 0x14) = iVar18;
            *(undefined4 *)(lVar19 + 0x18) = 0;
          }
          goto LAB_00032840;
        }
        if (uVar32 <= uVar42) goto LAB_00032840;
        if ((uVar32 < uVar12) && (lVar19 = FUN_00030238(0x820), lVar19 != 0)) {
          *(uint *)(lVar19 + 0xc) = uVar37;
          *(int *)(lVar19 + 0x10) = iVar34;
          *(int *)(lVar19 + 0x14) = iVar18;
          *(undefined4 *)(lVar19 + 0x18) = 0;
        }
LAB_00032844:
        uVar32 = (long)uVar39 >> 0x20 & 0xffffffff;
        uVar12 = uVar16 & 0xffffffff;
        do {
          while( true ) {
            puVar33 = (ulong *)(((uVar12 & uVar36 - 1) >> 6) * 8 + uStack_110);
            uVar16 = uVar42 & 0xffffffff;
            if (((uVar12 ^ uVar42 & 0xffffffff) & uVar32) != 0) {
              uVar16 = uVar12 + uVar32 & (ulong)-uVar36;
            }
            uVar25 = -(ulong)((uVar12 & uVar32) == 0);
            uVar28 = ((uVar25 ^ *puVar33) >> (uVar12 & 0x3f)) << (uVar12 & 0x3f);
            uVar12 = uVar12 & 0xffffffc0;
            if (uVar28 == 0) {
              do {
                puVar33 = puVar33 + 1;
                if (uVar16 <= uVar12) goto LAB_000328f8;
                uVar12 = uVar12 + 0x40;
              } while (uVar25 == *puVar33);
              uVar28 = uVar25 ^ *puVar33;
            }
            if (uVar12 < uVar16) break;
LAB_000328f8:
            iVar34 = (int)uVar16;
            uVar12 = uVar16;
            if (uVar42 == (long)iVar34) goto LAB_0003290c;
          }
          for (; (uVar28 & 0xffff) == 0; uVar28 = uVar28 >> 0x10) {
            uVar12 = uVar12 + 0x10;
          }
          for (; (uVar28 & 0xf) == 0; uVar28 = uVar28 >> 4) {
            uVar12 = uVar12 + 4;
          }
          for (; (uVar28 & 1) == 0; uVar28 = uVar28 >> 1) {
            uVar12 = uVar12 + 1;
          }
          if (uVar12 < uVar16) {
            uVar16 = uVar12;
          }
          uVar12 = uVar31;
        } while (uVar31 == uVar16);
        iVar34 = (int)uVar16;
LAB_0003290c:
        *(int *)(puVar14 + 2) = iVar34;
        uVar40 = iVar34 - uVar37;
      }
      lVar19 = (long)(int)(uVar36 >> 3);
      if (uVar36 >> 3 < 0x80) {
        lVar19 = 0x80;
      }
      uStack_110 = lVar19 + uStack_110 + (uVar39 & 0xffffffff) * (ulong)uVar9;
    }
    uVar36 = uVar36 - uVar9;
    if (uVar40 < uVar36) {
      uVar36 = uVar40;
    }
    uStack_120 = (ulong)(int)uVar36;
    Ram0002000000000390 = puVar47;
    uVar15 = Ram0002000000000390;
    Ram00020000000000d8 = 0x2f;
    Ram00020000000000e8 = uVar15;
    Ram00020000000000f8 = (uVar37 + uVar36) - uVar31;
    Ram0002000000000100 = 0;
    Ram0002000000000380 = 0x600000001;
    Ram0002000000000108 = 1;
    do {
      lVar19 = Ram0002000000000078;
    } while (lVar19 != 0);
    lVar19 = Ram0002000000000080;
    if ((long)(int)(uVar37 + uVar36) != lVar19 >> 0x20) {
      uVar12 = *(ulong *)(in_mhartid * 8 + 0x3000000000260) >> 0x20 & 0x1f;
      Ram0002000000000390 = param_1 + uVar12 * 4 + 0x13;
      uVar15 = Ram0002000000000390;
      Ram00020000000000d8 = 0xf;
      Ram00020000000000e8 = uVar15;
      Ram00020000000000f8 = 1;
      Ram0002000000000100 = 0;
      Ram0002000000000380 = 0x600000001;
      Ram0002000000000108 = 1;
      do {
        lVar19 = Ram0002000000000078;
      } while (lVar19 != 0);
      uVar37 = Ram0002000000000080;
      *(uint *)(((((long)(int)(param_1[uVar12 * 0x10 + 0x92] - 1) & (ulong)uVar37) << 0x20) >> 0x1e)
               + *(long *)(param_1 + uVar12 * 0x10 + 0x90)) =
           (uint)uStack_e0 | (uint)((param_1[uVar12 * 0x10 + 0x92] & uVar37) == 0) << 0x1f;
    }
  }
  uVar42 = 0;
  uVar12 = 0;
  uVar31 = 0;
  if (uVar48 != uStack_e0) {
    FUN_0002fec8(uStack_e0,0);
  }
LAB_00032a8c:
  if (uStack_120 != 0) {
LAB_000314cc:
    lVar19 = in_mhartid * 8;
    uVar45 = (undefined4)uVar42;
    iVar34 = (int)uStack_120;
    uVar30 = (undefined4)uStack_110;
    uVar35 = (undefined4)(uStack_110 >> 0x20);
    if ((*(ulong *)(lVar19 + 0x3000000000280) & 8) == 0) {
      if ((*(ulong *)(lVar19 + 0x3000000000280) & 0x10) == 0) {
        lVar21 = Ram0002000000000790;
        if (lVar21 != 0) {
          uVar15 = *(undefined8 *)(lVar19 + 0x3000000000280);
          uVar7 = Ram0002000000000240;
          lVar19 = FUN_00030238(0x201);
          if (lVar19 != 0) {
            *(int *)(lVar19 + 0xc) = (int)((ulong)uVar15 >> 0x20);
            *(undefined4 *)(lVar19 + 0x20) = uVar35;
            *(undefined4 *)(lVar19 + 0x10) = uVar45;
            *(int *)(lVar19 + 0x14) = (int)uVar12;
            *(int *)(lVar19 + 0x18) = (int)uVar31;
            *(undefined4 *)(lVar19 + 0x1c) = uVar30;
            *(int *)(lVar19 + 0x24) = iVar34;
            *(undefined4 *)(lVar19 + 0x28) = uVar7;
          }
        }
        lVar21 = 0;
        iVar18 = FUN_00030c00(param_1);
        lVar19 = (in_mhartid + 3) * 0x100;
        iVar34 = 0;
LAB_00032c28:
        if (uStack_120 != 0) {
          lVar24 = *(long *)(&DAT_3000000000020 + lVar19);
          uVar15 = *(undefined8 *)(&DAT_3000000000028 + lVar19);
          uVar48 = *(ulong *)(lVar19 + 0x3000000000030);
          if (uStack_120 < (ulong)(long)(int)*(ulong *)(lVar19 + 0x3000000000030)) {
            uVar48 = uStack_120;
          }
          iVar27 = (int)uVar48;
          uVar37 = (uint)((ulong)uVar15 >> 0x20);
          uVar48 = (ulong)(int)(uVar37 & 0xffff);
          iVar11 = (int)uVar15;
          uVar37 = uVar37 & 0xffff;
          if (uVar48 < 2) {
            uStack_118 = (long)iVar27;
            if (uVar48 != 1) {
              uStack_118 = 0;
            }
          }
          else {
            uStack_118 = (ulong)(int)(iVar27 * uVar37);
          }
          do {
            iVar38 = (int)lVar21;
            iStack_54 = iVar18 - iVar38;
            iVar10 = (int)((ulong)lVar24 >> 0x20);
            iStack_60 = iVar10;
            iStack_5c = iVar11;
            uStack_58 = (uint)uStack_118;
            lVar43 = FUN_000300f8(uVar42,uVar12,uVar31,&iStack_60,&iStack_5c,&uStack_58,&iStack_54);
            if ((lVar43 != 0) && (iVar34 != 0)) {
              iVar18 = FUN_00030c00(param_1);
              iStack_54 = iVar18 - iVar38;
              iStack_60 = iVar10;
              iStack_5c = iVar11;
              uStack_58 = (uint)uStack_118;
              lVar43 = FUN_000300f8(uVar42,uVar12,uVar31,&iStack_60,&iStack_5c,&uStack_58,&iStack_54
                                   );
            }
            iVar8 = iStack_54;
            uVar40 = uStack_58;
            iVar10 = iStack_5c;
            if (iStack_54 == 0) break;
            uStack_c0 = (ulong)(int)uStack_58;
            uVar39 = (ulong)iStack_60;
            uVar16 = (ulong)iStack_5c;
            FUN_00030678(uStack_110,param_4,uStack_120,uVar42,uVar12,uVar31);
            lVar21 = (long)(iVar38 + iVar8);
            if (lVar24 >> 0x20 == uVar39) {
              if ((long)iVar11 == uVar16) {
                if (uVar48 <= uStack_c0) goto LAB_00033620;
                uVar12 = 0;
                uVar31 = uStack_c0;
                uVar42 = 0;
              }
              else {
                uVar12 = uVar16;
                uVar31 = (long)(int)(uVar40 - 1);
                uVar42 = 0;
              }
            }
            else {
              uVar12 = (ulong)(iVar10 + -1);
              uVar31 = (ulong)(int)(uVar40 - 1);
              uVar42 = uVar39;
            }
            if (lVar43 != 0) break;
          } while( true );
        }
        goto LAB_00032dbc;
      }
      lVar21 = Ram0002000000000790;
      if (lVar21 != 0) {
        uVar15 = *(undefined8 *)(lVar19 + 0x3000000000280);
        uVar45 = Ram0002000000000240;
        lVar19 = FUN_00030238(0x201);
        if (lVar19 != 0) {
          *(int *)(lVar19 + 0xc) = (int)((ulong)uVar15 >> 0x20);
          *(undefined4 *)(lVar19 + 0x20) = uVar35;
          *(undefined8 *)(lVar19 + 0x10) = 0;
          *(undefined4 *)(lVar19 + 0x18) = 0;
          *(undefined4 *)(lVar19 + 0x1c) = uVar30;
          *(int *)(lVar19 + 0x24) = iVar34;
          *(undefined4 *)(lVar19 + 0x28) = uVar45;
        }
      }
      lVar21 = in_mhartid + 3;
      iVar18 = FUN_00030c00(param_1);
      lVar21 = lVar21 * 0x100;
      iVar34 = 0;
      lVar19 = 0;
LAB_000323bc:
      do {
        if (uStack_120 == 0) break;
        uVar31 = *(ulong *)(&DAT_3000000000020 + lVar21);
        uVar42 = uVar31 & 0xffff;
        iVar27 = (int)*(undefined8 *)(lVar21 + 0x3000000000030);
        uVar40 = (uint)uVar42;
        uVar37 = (uint)uStack_120;
        uVar12 = uStack_120;
        if (uVar42 != 1) {
          uVar36 = (uVar37 - 1) + uVar40;
          uVar12 = (ulong)(int)uVar36;
          if ((uVar42 & (long)(int)((ushort)uVar31 - 1)) == 0) {
            uVar31 = uVar42;
            if (1 < uVar42) {
              do {
                uVar31 = uVar31 >> 1;
                uVar12 = (ulong)(int)((uint)uVar12 >> 1);
              } while (uVar31 != 1);
            }
          }
          else if (uVar36 >> 0x10 == 0) {
            uVar9 = ((uint)uVar31 >> 0x10) * uVar36 >> 0x10;
            uVar12 = (ulong)(int)(uVar9 + ((ulong)(long)(int)(uVar36 - uVar9 * uVar40) < uVar42 ^ 1)
                                 );
          }
          else {
            uVar12 = (ulong)(int)(uVar36 / uVar40);
          }
        }
        if (uVar12 < (ulong)(long)iVar27) {
          iVar27 = (int)uVar12;
        }
        uVar12 = (ulong)iVar27;
        bVar20 = false;
        iVar27 = (int)lVar19;
        uVar31 = (ulong)(iVar18 - iVar27);
        if (uVar31 < uVar12) {
          if (iVar34 != 0) {
            iVar18 = FUN_00030c00(param_1);
            uVar31 = (ulong)(iVar18 - iVar27);
            if (uVar12 <= uVar31) goto LAB_0003242c;
          }
          bVar20 = true;
          uVar12 = uVar31;
        }
LAB_0003242c:
        if (uVar12 == 0) break;
        FUN_00030678(uStack_110,param_4,uStack_120,0,0,0,1,1);
        uVar36 = (uint)uVar12;
        lVar19 = (long)(int)(iVar27 + uVar36);
        if (uVar42 < 2) {
          uVar9 = 0;
          if (uVar42 == 1) {
            uVar9 = uVar36;
            if (uStack_120 < uVar12) {
              uVar9 = uVar37;
            }
            uStack_120 = (ulong)(int)(uVar37 - uVar9);
            iVar34 = uVar9 + iVar34;
          }
        }
        else {
          uVar9 = uVar36 * uVar40;
          if (uStack_120 < (ulong)(long)(int)(uVar36 * uVar40)) {
            uVar9 = uVar37;
          }
          uStack_120 = (ulong)(int)(uVar37 - uVar9);
          iVar34 = uVar9 + iVar34;
        }
        if (1 < param_4) {
          uVar9 = uVar9 * (int)param_4;
LAB_00032578:
          uStack_110 = uStack_110 + uVar9;
          if (bVar20) break;
          goto LAB_000323bc;
        }
        if (param_4 == 1) goto LAB_00032578;
      } while (!bVar20);
      if (lVar19 != 0) {
        lVar21 = (in_mhartid + 3) * 0x100;
        puVar22 = *(uint **)(lVar21 + 0x3000000000008);
        uVar37 = (uint)*(undefined8 *)(lVar21 + 0x3000000000018);
        if (uVar37 != 0) {
          if (uVar37 == 1) {
            uVar40 = (uint)puVar22;
            uVar6 = (ushort)((ulong)puVar22 >> 0x20);
            puVar22 = (uint *)0x0;
          }
          else {
            uVar40 = *puVar22;
            uVar6 = (ushort)puVar22[1];
          }
          uVar9 = (uint)uVar6;
          uVar36 = 0;
          uVar12 = (ulong)uVar40;
LAB_000324f4:
          piVar29 = param_1 + uVar12 * 4 + 0x298;
          if (1 < uVar9) goto LAB_0003256c;
          do {
            lVar21 = lVar19;
            if (uVar9 != 1) {
              lVar21 = 0;
            }
            while( true ) {
              Ram0002000000000390 = piVar29 + 1;
              uVar15 = Ram0002000000000390;
              Ram00020000000000d8 = 0x4f;
              Ram00020000000000e8 = uVar15;
              Ram00020000000000f8 = lVar21;
              Ram0002000000000100 = 0;
              Ram0002000000000380 = 0x600000001;
              Ram0002000000000108 = 1;
              do {
                lVar21 = Ram0002000000000078;
              } while (lVar21 != 0);
              uVar36 = uVar36 + 1;
              if (uVar37 <= uVar36) {
                if (uVar37 != uVar36) goto LAB_000324f4;
                goto code_r0x000325c0;
              }
              puVar5 = puVar22 + 2;
              puVar3 = puVar22 + 3;
              puVar22 = puVar22 + 2;
              uVar12 = (ulong)*puVar5;
              uVar9 = (uint)(ushort)*puVar3;
              piVar29 = param_1 + uVar12 * 4 + 0x298;
              if (uVar9 < 2) break;
LAB_0003256c:
              lVar21 = (long)(int)((int)lVar19 * uVar9);
            }
          } while( true );
        }
      }
code_r0x000325c0:
      if ((iVar34 != 0) && ((*(ulong *)(in_mhartid * 8 + 0x3000000000280) & 6) == 0)) {
        uVar37 = Ram0002000000000240;
        while (uVar37 < 0x10) {
          FUN_000304f8();
          uVar37 = Ram0002000000000240;
        }
        FUN_000302c8(7,param_1 + (*(ulong *)((in_mhartid + 3) * 0x100 + 0x3000000000000) >> 0x20) *
                                 4 + 0x299,(long)-iVar34);
      }
      lVar19 = Ram0002000000000790;
      if (lVar19 != 0) {
        uVar15 = *(undefined8 *)(in_mhartid * 8 + 0x3000000000280);
        uVar30 = Ram0002000000000240;
        lVar19 = FUN_00030238(0x202);
        if (lVar19 != 0) {
          *(int *)(lVar19 + 0xc) = (int)((ulong)uVar15 >> 0x20);
          *(int *)(lVar19 + 0x20) = (int)(uStack_110 >> 0x20);
          *(undefined8 *)(lVar19 + 0x10) = 0;
          *(undefined4 *)(lVar19 + 0x18) = 0;
          *(int *)(lVar19 + 0x1c) = (int)uStack_110;
          *(int *)(lVar19 + 0x24) = (int)uStack_120;
          *(undefined4 *)(lVar19 + 0x28) = uVar30;
          uVar31 = 0;
          uVar12 = 0;
          uVar42 = 0;
          goto LAB_000316e4;
        }
      }
      uVar31 = 0;
      uVar12 = 0;
      uVar42 = 0;
      goto LAB_000316e4;
    }
    if (1 < (uint)*(undefined8 *)((in_mhartid + 3) * 0x100 + 0x3000000000030)) {
      lVar21 = Ram0002000000000790;
      if (lVar21 != 0) {
        uVar15 = *(undefined8 *)(lVar19 + 0x3000000000280);
        uVar7 = Ram0002000000000240;
        lVar19 = FUN_00030238(0x201);
        if (lVar19 != 0) {
          *(int *)(lVar19 + 0xc) = (int)((ulong)uVar15 >> 0x20);
          *(undefined4 *)(lVar19 + 0x20) = uVar35;
          *(undefined4 *)(lVar19 + 0x10) = uVar45;
          *(undefined4 *)(lVar19 + 0x14) = 0;
          *(undefined4 *)(lVar19 + 0x18) = 0;
          *(undefined4 *)(lVar19 + 0x1c) = uVar30;
          *(int *)(lVar19 + 0x24) = iVar34;
          *(undefined4 *)(lVar19 + 0x28) = uVar7;
        }
      }
      iVar18 = FUN_00030c00(param_1);
      lVar19 = in_mhartid + 3;
      iVar34 = 0;
      uVar48 = 0;
      uVar39 = (long)iVar18;
      while (uStack_120 != 0) {
        iVar27 = (int)*(undefined8 *)((in_mhartid + 3) * 0x100 + 0x3000000000030);
        iVar11 = (int)uStack_120;
        if (uStack_120 < (ulong)(long)iVar27) {
          iVar27 = iVar11;
        }
        uVar16 = (ulong)iVar27;
        if (uVar16 == 0) break;
        uVar25 = 0;
        uVar17 = 0;
        uVar37 = (uint)uStack_b0 >> 0x12 & 3;
        uVar44 = uStack_b0 & 0xc0000;
        uVar32 = uStack_110;
        uVar28 = 0;
        do {
          iVar27 = (int)uVar25;
          uVar25 = (uStack_b0 & 0xffff) + uVar32;
          piVar29 = (int *)(uVar25 & 0xfffffffffffffffc);
          if ((uStack_b0 & 0x30000) == 0x10000) {
            uVar36 = 1;
            uVar40 = 1;
            uVar13 = (ulong)*piVar29;
          }
          else if ((uStack_b0 & 0x30000) == 0x20000) {
            uVar40 = piVar29[1];
            uVar36 = 1;
            uVar13 = (ulong)*piVar29;
          }
          else {
            uVar40 = piVar29[1];
            uVar36 = piVar29[2];
            uVar13 = (ulong)*piVar29;
          }
          uVar9 = uVar40;
          if ((uStack_b0 & 0x100000) == 0) {
LAB_0003163c:
            if (uVar44 != 0x40000) {
              if (uVar44 != 0x80000) goto LAB_0003164c;
              uVar13 = (ulong)(int)((int)uVar13 * uVar9);
            }
          }
          else {
            uVar9 = (uint)uVar13;
            if ((uVar25 & 2) != 0) {
              uVar13 = (ulong)(int)(uVar9 >> 0x10);
              if (uVar37 < 2) {
                uVar36 = 1;
                uVar9 = 1;
              }
              else {
                uVar9 = uVar40 & 0xffff;
                if (uVar44 == 0xc0000) {
                  uVar36 = uVar40 >> 0x10;
                  goto LAB_0003164c;
                }
                uVar36 = 1;
              }
              goto LAB_0003163c;
            }
            uVar13 = uVar13 & 0xffff;
            if (uVar37 < 2) {
              uVar36 = 1;
              uVar9 = 1;
              goto LAB_0003163c;
            }
            uVar9 = uVar9 >> 0x10;
            if (uVar44 != 0xc0000) {
              uVar36 = 1;
              goto LAB_0003163c;
            }
            uVar36 = uVar40 & 0xffff;
LAB_0003164c:
            uVar13 = (ulong)(int)(uVar36 * (int)uVar13 * uVar9);
          }
          iVar10 = (int)uVar48;
          if (uVar17 != 0) {
            uVar41 = (uVar13 & 0xffffffff) + uVar28;
            if (uVar41 < 0x100000000) {
              iVar38 = iVar27 + (int)uVar13;
              uVar25 = (ulong)iVar38;
              if (((*(ulong *)(lVar19 * 0x100 + 0x3000000000018) & 0xffffffff) == 0) ||
                 (uVar25 <= uVar39)) {
                uVar17 = (ulong)((int)uVar17 + 1);
                uVar32 = uVar32 + (param_4 & 0xffffffff);
                iVar27 = iVar38;
                if (uVar16 <= uVar17) goto LAB_00031aac;
                goto LAB_00031a1c;
              }
            }
            bVar20 = true;
            if (uVar28 == 0) goto LAB_000318e8;
            goto LAB_00031a2c;
          }
          uVar41 = uVar13 & 0xffffffff;
          iVar27 = (int)uVar13 - (int)uVar42;
          uVar25 = (ulong)iVar27;
          if (((*(ulong *)((in_mhartid + 3) * 0x100 + 0x3000000000018) & 0xffffffff) != 0) &&
             (uVar39 < uVar25)) {
            if (uVar48 == 0) {
              if (uVar39 == 0) goto LAB_000316ac;
              uVar32 = uVar32 + (param_4 & 0xffffffff);
LAB_000337d4:
              iVar18 = (int)uVar42 + (int)uVar39;
              if (iVar18 != 0) {
                FUN_00030678(uStack_110,param_4,1,uVar42,0,0,(long)iVar18,1);
                uVar48 = (long)(iVar10 + (int)uVar39);
                uVar42 = (long)iVar18;
                goto LAB_00031914;
              }
            }
            else {
              uVar39 = (ulong)(iVar18 - iVar10);
              FUN_00030c00(param_1);
              if (uVar39 == 0) goto LAB_00031918;
              uVar32 = uVar32 + (param_4 & 0xffffffff);
              if (uVar39 < uVar25) goto LAB_000337d4;
              if (uVar25 != uVar39) goto LAB_00031a14;
              if (uVar41 != 0) {
                FUN_00030678(uStack_110,param_4,1,uVar42,0,0,uVar13,1);
                uStack_120 = (ulong)(iVar11 + -1);
                uVar42 = 0;
                iVar34 = iVar34 + 1;
                uVar48 = (long)iVar18;
                uStack_110 = uVar32;
                goto LAB_00031914;
              }
            }
            uStack_120 = (ulong)(iVar11 + -1);
            iVar34 = iVar34 + 1;
            uVar42 = 0;
            uStack_110 = uVar32;
            goto LAB_00031914;
          }
          uVar32 = uVar32 + (param_4 & 0xffffffff);
LAB_00031a14:
          uVar17 = 1;
          if (uVar16 < 2) {
LAB_00031aac:
            if (uVar41 == 0) {
              bVar20 = false;
              goto LAB_000318e8;
            }
            break;
          }
LAB_00031a1c:
          iVar27 = (int)uVar25;
          uVar28 = uVar41;
        } while (uVar41 != 0xffffffff);
        bVar20 = false;
        uVar28 = uVar41;
LAB_00031a2c:
        FUN_00030678(uStack_110,uVar17,0,0,(long)(int)uVar28,1);
        uVar48 = (ulong)(iVar10 + iVar27);
        uVar39 = (ulong)((int)uVar39 - iVar27);
LAB_000318e8:
        uStack_110 = uVar32;
        uStack_120 = (ulong)(iVar11 - (int)uVar17);
        uVar42 = 0;
        iVar34 = iVar34 + (int)uVar17;
        if (bVar20) break;
      }
LAB_00031914:
      if (uVar48 != 0) {
LAB_00031918:
        lVar19 = (in_mhartid + 3) * 0x100;
        piVar29 = *(int **)(lVar19 + 0x3000000000008);
        iVar18 = (int)*(undefined8 *)(lVar19 + 0x3000000000018);
        if (iVar18 != 0) {
          if (iVar18 == 1) {
            iVar27 = (int)piVar29;
            uVar39 = (ulong)piVar29 >> 0x20 & 0xffff;
            piVar29 = (int *)0x0;
          }
          else {
            iVar27 = *piVar29;
            uVar39 = (ulong)*(ushort *)(piVar29 + 1);
          }
          piVar26 = (int *)((long)piVar29 + ((ulong)((long)(iVar18 + -1) << 0x20) >> 0x1d));
          uVar37 = (uint)uVar39;
          lVar19 = (long)param_1 + ((ulong)((long)iVar27 << 0x20) >> 0x1c) + 0xa60;
          if (1 < uVar39) goto LAB_00031a00;
          do {
            uVar39 = 0;
            if (uVar37 == 1) {
              uVar39 = uVar48;
            }
            while( true ) {
              Ram0002000000000390 = lVar19 + 4;
              uVar15 = Ram0002000000000390;
              Ram00020000000000d8 = 0x4f;
              Ram00020000000000e8 = uVar15;
              Ram00020000000000f8 = uVar39;
              Ram0002000000000100 = 0;
              Ram0002000000000380 = 0x600000001;
              Ram0002000000000108 = 1;
              do {
                lVar19 = Ram0002000000000078;
              } while (lVar19 != 0);
              if (piVar26 == piVar29) goto LAB_000316ac;
              piVar4 = piVar29 + 2;
              puVar2 = (ushort *)(piVar29 + 3);
              piVar29 = piVar29 + 2;
              lVar19 = (long)param_1 + ((ulong)((long)*piVar4 << 0x20) >> 0x1c) + 0xa60;
              uVar37 = (uint)*puVar2;
              if (*puVar2 < 2) break;
LAB_00031a00:
              uVar39 = (ulong)(int)(uVar37 * (int)uVar48);
            }
          } while( true );
        }
      }
LAB_000316ac:
      if ((iVar34 != 0) && ((*(ulong *)(in_mhartid * 8 + 0x3000000000280) & 6) == 0)) {
        uVar37 = Ram0002000000000240;
        while (uVar37 < 0x10) {
          FUN_000304f8();
          uVar37 = Ram0002000000000240;
        }
        FUN_000302c8(7,param_1 + (*(ulong *)((in_mhartid + 3) * 0x100 + 0x3000000000000) >> 0x20) *
                                 4 + 0x299,(long)-iVar34);
      }
      lVar19 = Ram0002000000000790;
      if (lVar19 != 0) {
        uVar15 = *(undefined8 *)(in_mhartid * 8 + 0x3000000000280);
        uVar30 = Ram0002000000000240;
        lVar19 = FUN_00030238(0x202);
        if (lVar19 != 0) {
          *(int *)(lVar19 + 0xc) = (int)((ulong)uVar15 >> 0x20);
          *(int *)(lVar19 + 0x20) = (int)(uStack_110 >> 0x20);
          *(int *)(lVar19 + 0x10) = (int)uVar42;
          *(undefined4 *)(lVar19 + 0x14) = 0;
          *(undefined4 *)(lVar19 + 0x18) = 0;
          *(int *)(lVar19 + 0x1c) = (int)uStack_110;
          *(int *)(lVar19 + 0x24) = (int)uStack_120;
          *(undefined4 *)(lVar19 + 0x28) = uVar30;
        }
      }
      goto LAB_000316e4;
    }
    lVar21 = Ram0002000000000790;
    if (lVar21 != 0) {
      uVar15 = *(undefined8 *)(lVar19 + 0x3000000000280);
      uVar7 = Ram0002000000000240;
      lVar19 = FUN_00030238(0x201);
      if (lVar19 != 0) {
        *(int *)(lVar19 + 0xc) = (int)((ulong)uVar15 >> 0x20);
        *(undefined4 *)(lVar19 + 0x20) = uVar35;
        *(undefined4 *)(lVar19 + 0x10) = uVar45;
        *(int *)(lVar19 + 0x14) = (int)uVar12;
        *(int *)(lVar19 + 0x18) = (int)uVar31;
        *(undefined4 *)(lVar19 + 0x1c) = uVar30;
        *(int *)(lVar19 + 0x24) = iVar34;
        *(undefined4 *)(lVar19 + 0x28) = uVar7;
      }
    }
    iVar18 = FUN_00030c00(param_1);
    if (uStack_120 != 0) {
      uVar37 = (uint)uStack_b0 >> 0x12 & 3;
      iVar27 = 0;
      lVar19 = 0;
LAB_0003308c:
      uStack_120 = (ulong)(iVar34 + -1);
      uVar48 = (uStack_b0 & 0xffff) + uStack_110;
      piVar29 = (int *)(uVar48 & 0xfffffffffffffffc);
      if ((uStack_b0 & 0x30000) == 0x10000) {
        uVar39 = 1;
        uStack_118 = 1;
        uVar16 = (ulong)*piVar29;
      }
      else if ((uStack_b0 & 0x30000) == 0x20000) {
        uVar39 = 1;
        uVar16 = (ulong)*piVar29;
        uStack_118 = (ulong)piVar29[1];
      }
      else {
        uVar16 = (ulong)*piVar29;
        uStack_118 = (ulong)piVar29[1];
        uVar39 = (ulong)piVar29[2];
      }
      if ((uStack_b0 & 0x100000) == 0) {
LAB_00033404:
        if (((uVar16 != 0) && (uStack_118 != 0)) && (uVar39 != 0)) goto LAB_00033120;
      }
      else {
        uVar36 = (uint)uVar16;
        uVar40 = (uint)uStack_118;
        if ((uVar48 & 2) == 0) {
          uVar16 = (ulong)(int)(uVar36 & 0xffff);
          if (1 < uVar37) {
            uStack_118 = (ulong)(int)(uVar36 >> 0x10);
            if ((uStack_b0 & 0xc0000) == 0xc0000) {
              uVar39 = (ulong)(int)(uVar40 & 0xffff);
              goto LAB_00033404;
            }
joined_r0x000334b8:
            if ((uVar16 != 0) && (uStack_118 != 0)) {
              uVar39 = 1;
              goto LAB_00033120;
            }
            goto LAB_00033424;
          }
        }
        else {
          uVar16 = (ulong)(int)(uVar36 >> 0x10);
          if (1 < uVar37) {
            uStack_118 = uStack_118 & 0xffff;
            if ((uStack_b0 & 0xc0000) != 0xc0000) goto joined_r0x000334b8;
            uVar39 = (ulong)(int)(uVar40 >> 0x10);
            goto LAB_00033404;
          }
        }
        if (uVar16 != 0) {
          uVar39 = 1;
          uStack_118 = 1;
LAB_00033120:
          do {
            iVar11 = (int)lVar19;
            iStack_54 = iVar18 - iVar11;
            iStack_60 = (int)uVar16;
            iStack_5c = (int)uStack_118;
            uStack_58 = (uint)uVar39;
            lVar21 = FUN_000300f8(uVar42,uVar12,uVar31,&iStack_60,&iStack_5c,&uStack_58,&iStack_54);
            if ((lVar21 != 0) && (iVar27 != 0)) {
              iVar18 = FUN_00030c00(param_1);
              iStack_54 = iVar18 - iVar11;
              iStack_60 = (int)uVar16;
              iStack_5c = (int)uStack_118;
              uStack_58 = (uint)uVar39;
              lVar21 = FUN_000300f8(uVar42,uVar12,uVar31,&iStack_60,&iStack_5c,&uStack_58,&iStack_54
                                   );
            }
            iVar38 = iStack_54;
            uVar40 = uStack_58;
            iVar10 = iStack_5c;
            uVar48 = (long)iVar34;
            if (iStack_54 == 0) goto joined_r0x00033520;
            uVar25 = (ulong)(int)uStack_58;
            uVar32 = (ulong)iStack_60;
            uVar28 = (ulong)iStack_5c;
            FUN_00030678(uStack_110,param_4,1,uVar42,uVar12,uVar31);
            lVar19 = (long)(iVar11 + iVar38);
            if (uVar32 == uVar16) {
              if (uVar28 == uStack_118) {
                if (uVar25 == uVar39) goto LAB_000334f0;
                uVar12 = 0;
                uVar31 = uVar25;
                uVar42 = 0;
              }
              else {
                uVar12 = uVar28;
                uVar31 = (long)(int)(uVar40 - 1);
                uVar42 = 0;
              }
            }
            else {
              uVar12 = (ulong)(iVar10 + -1);
              uVar31 = (ulong)(int)(uVar40 - 1);
              uVar42 = uVar32;
            }
            if (lVar21 != 0) goto joined_r0x00033520;
          } while( true );
        }
      }
      goto LAB_00033424;
    }
    goto LAB_00032f44;
  }
  goto LAB_000316e4;
LAB_00033620:
  uVar31 = 0;
  uVar12 = (long)iVar27;
  if ((uStack_118 != uStack_c0) && (uVar12 = uStack_c0, uVar48 != 1)) {
    if ((uVar37 - 1 & uVar37) == 0) {
      if (uVar48 < 2) {
        uVar12 = 0;
      }
      else {
        iVar27 = 0;
        do {
          uVar48 = uVar48 >> 1;
          uStack_c0 = (ulong)(int)((uint)uStack_c0 >> 1);
          iVar27 = iVar27 + 1;
        } while (uVar48 != 1);
        uVar12 = (ulong)(0x20 - iVar27);
      }
      uVar31 = (ulong)(int)((uVar40 << (uVar12 & 0x1f)) >> (uVar12 & 0x1f));
      uVar12 = uStack_c0;
    }
    else if (uVar40 >> 0x10 == 0) {
      uVar36 = (ushort)((ulong)uVar15 >> 0x30) * uVar40 >> 0x10;
      iVar27 = uVar40 - uVar37 * uVar36;
      uVar31 = (ulong)iVar27;
      uVar12 = (ulong)(int)((uVar31 < uVar48 ^ 1) + uVar36);
      if (uVar48 <= uVar31) {
        uVar31 = (ulong)(int)(iVar27 - uVar37);
      }
    }
    else {
      uVar31 = (ulong)(int)(uVar40 % uVar37);
      uVar12 = (long)(int)(uVar40 / uVar37);
    }
  }
  uStack_c0 = uVar12;
  iVar27 = (int)uStack_c0;
  uStack_120 = (ulong)((int)uStack_120 - iVar27);
  if (param_4 < 2) {
    if (param_4 == 1) {
      uStack_110 = uStack_110 + (uStack_c0 & 0xffffffff);
    }
  }
  else {
    uStack_110 = uStack_110 + (uint)(iVar27 * (int)param_4);
  }
  iVar34 = iVar34 + iVar27;
  if (lVar43 == 0) {
    uVar12 = 0;
    uVar42 = 0;
    goto LAB_00032c28;
  }
  uVar12 = 0;
  uVar42 = 0;
LAB_00032dbc:
  if (lVar21 != 0) {
    lVar19 = (in_mhartid + 3) * 0x100;
    piVar29 = *(int **)(lVar19 + 0x3000000000008);
    iVar18 = (int)*(undefined8 *)(lVar19 + 0x3000000000018);
    if (iVar18 != 0) {
      if (iVar18 == 1) {
        iVar27 = (int)piVar29;
        uVar48 = (ulong)piVar29 >> 0x20 & 0xffff;
        piVar29 = (int *)0x0;
      }
      else {
        iVar27 = *piVar29;
        uVar48 = (ulong)*(ushort *)(piVar29 + 1);
      }
      piVar26 = (int *)((long)piVar29 + ((ulong)((long)(iVar18 + -1) << 0x20) >> 0x1d));
      uVar37 = (uint)uVar48;
      lVar19 = (long)param_1 + ((ulong)((long)iVar27 << 0x20) >> 0x1c) + 0xa60;
      if (1 < uVar48) goto LAB_00032ea4;
      do {
        lVar24 = 0;
        if (uVar37 == 1) {
          lVar24 = lVar21;
        }
        while( true ) {
          Ram0002000000000390 = lVar19 + 4;
          uVar15 = Ram0002000000000390;
          Ram00020000000000d8 = 0x4f;
          Ram00020000000000e8 = uVar15;
          Ram00020000000000f8 = lVar24;
          Ram0002000000000100 = 0;
          Ram0002000000000380 = 0x600000001;
          Ram0002000000000108 = 1;
          do {
            lVar19 = Ram0002000000000078;
          } while (lVar19 != 0);
          if (piVar26 == piVar29) goto code_r0x00032eb8;
          piVar4 = piVar29 + 2;
          puVar2 = (ushort *)(piVar29 + 3);
          piVar29 = piVar29 + 2;
          lVar19 = (long)param_1 + ((ulong)((long)*piVar4 << 0x20) >> 0x1c) + 0xa60;
          uVar37 = (uint)*puVar2;
          if (*puVar2 < 2) break;
LAB_00032ea4:
          lVar24 = (long)(int)((int)lVar21 * uVar37);
        }
      } while( true );
    }
  }
code_r0x00032eb8:
  if ((iVar34 != 0) && ((*(ulong *)(in_mhartid * 8 + 0x3000000000280) & 6) == 0)) {
    uVar37 = Ram0002000000000240;
    while (uVar37 < 0x10) {
      FUN_000304f8();
      uVar37 = Ram0002000000000240;
    }
    FUN_000302c8(7,param_1 + (*(ulong *)((in_mhartid + 3) * 0x100 + 0x3000000000000) >> 0x20) * 4 +
                             0x299,(long)-iVar34);
  }
  goto LAB_00032f44;
LAB_000334f0:
  if (lVar21 != 0) {
    uVar31 = 0;
    uVar12 = 0;
    uVar42 = 0;
    uStack_110 = uStack_110 + (param_4 & 0xffffffff);
    iVar27 = iVar27 + 1;
    uVar48 = uStack_120;
    goto joined_r0x00033520;
  }
LAB_00033424:
  iVar27 = iVar27 + 1;
  uStack_110 = uStack_110 + (param_4 & 0xffffffff);
  uVar42 = 0;
  uVar12 = 0;
  uVar31 = 0;
  iVar34 = iVar34 + -1;
  if (uStack_120 == 0) goto LAB_00033560;
  goto LAB_0003308c;
LAB_00033560:
  uVar12 = 0;
  uVar31 = uVar42;
  uVar42 = 0;
  uVar48 = uStack_120;
joined_r0x00033520:
  uStack_120 = uVar48;
  if (lVar19 != 0) {
    lVar21 = (in_mhartid + 3) * 0x100;
    piVar29 = *(int **)(lVar21 + 0x3000000000008);
    iVar34 = (int)*(undefined8 *)(lVar21 + 0x3000000000018);
    if (iVar34 != 0) {
      if (iVar34 == 1) {
        iVar18 = (int)piVar29;
        uVar48 = (ulong)piVar29 >> 0x20 & 0xffff;
        piVar29 = (int *)0x0;
      }
      else {
        iVar18 = *piVar29;
        uVar48 = (ulong)*(ushort *)(piVar29 + 1);
      }
      piVar26 = (int *)((long)piVar29 + ((ulong)((long)(iVar34 + -1) << 0x20) >> 0x1d));
      uVar37 = (uint)uVar48;
      lVar21 = (long)param_1 + ((ulong)((long)iVar18 << 0x20) >> 0x1c) + 0xa60;
      if (1 < uVar48) goto LAB_00033354;
      do {
        lVar24 = 0;
        if (uVar37 == 1) {
          lVar24 = lVar19;
        }
        while( true ) {
          Ram0002000000000390 = lVar21 + 4;
          uVar15 = Ram0002000000000390;
          Ram00020000000000d8 = 0x4f;
          Ram00020000000000e8 = uVar15;
          Ram00020000000000f8 = lVar24;
          Ram0002000000000100 = 0;
          Ram0002000000000380 = 0x600000001;
          Ram0002000000000108 = 1;
          do {
            lVar21 = Ram0002000000000078;
          } while (lVar21 != 0);
          if (piVar26 == piVar29) goto code_r0x00033368;
          piVar4 = piVar29 + 2;
          puVar2 = (ushort *)(piVar29 + 3);
          piVar29 = piVar29 + 2;
          lVar21 = (long)param_1 + ((ulong)((long)*piVar4 << 0x20) >> 0x1c) + 0xa60;
          uVar37 = (uint)*puVar2;
          if (*puVar2 < 2) break;
LAB_00033354:
          lVar24 = (long)(int)((int)lVar19 * uVar37);
        }
      } while( true );
    }
  }
code_r0x00033368:
  if ((iVar27 != 0) && ((*(ulong *)(in_mhartid * 8 + 0x3000000000280) & 6) == 0)) {
    uVar37 = Ram0002000000000240;
    while (uVar37 < 0x10) {
      FUN_000304f8();
      uVar37 = Ram0002000000000240;
    }
    FUN_000302c8(7,param_1 + (*(ulong *)((in_mhartid + 3) * 0x100 + 0x3000000000000) >> 0x20) * 4 +
                             0x299,(long)-iVar27);
  }
LAB_00032f44:
  lVar19 = Ram0002000000000790;
  if (lVar19 != 0) {
    uVar15 = *(undefined8 *)(in_mhartid * 8 + 0x3000000000280);
    uVar30 = Ram0002000000000240;
    lVar19 = FUN_00030238(0x202);
    if (lVar19 != 0) {
      *(int *)(lVar19 + 0xc) = (int)((ulong)uVar15 >> 0x20);
      *(int *)(lVar19 + 0x20) = (int)(uStack_110 >> 0x20);
      *(int *)(lVar19 + 0x10) = (int)uVar42;
      *(int *)(lVar19 + 0x14) = (int)uVar12;
      *(int *)(lVar19 + 0x18) = (int)uVar31;
      *(int *)(lVar19 + 0x1c) = (int)uStack_110;
      *(int *)(lVar19 + 0x24) = (int)uStack_120;
      *(undefined4 *)(lVar19 + 0x28) = uVar30;
    }
  }
LAB_000316e4:
  uVar48 = *(ulong *)(in_mhartid * 8 + 0x3000000000280);
  if ((uVar48 & 1) == 0) {
    *(ulong *)(in_mhartid * 8 + 0x3000000000280) = uVar48 | 0xffffffff00000000;
    lVar19 = 0x11;
    do {
      uVar15 = Ram00020000000006f8;
      uVar15 = Ram00020000000006f8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    uVar37 = Ram0002000000000178;
    Ram0002000000000080 = (ulong)uVar37;
    Ram00020000000003c0 = 0;
  }
  if (uStack_120 != 0) {
    param_1[uStack_c8 * 4 + 0x10] = (int)uStack_e0;
    param_1[uStack_c8 * 4 + 0x11] = 1;
    if (uStack_d0 != 0) {
      param_1[uStack_c8 * 4 + 0x12] = (int)uStack_a8;
    }
    bVar20 = true;
    param_1[uStack_c8 * 0x10 + 0x96] = (int)param_4;
    param_1[uStack_c8 * 0x10 + 0x98] = (int)uVar42;
    *(ulong *)(param_1 + uStack_c8 * 0x10 + 0x94) = uStack_110;
    param_1[uStack_c8 * 0x10 + 0x99] = (int)uVar12;
    param_1[uStack_c8 * 0x10 + 0x9a] = (int)uVar31;
    param_1[uStack_c8 * 0x10 + 0x97] = (int)uStack_120;
    param_1[uStack_c8 * 0x10 + 0x9b] = (uint)uStack_b0;
    goto LAB_000317b0;
  }
  param_1[uStack_c8 * 4 + 0x11] = 0;
  if (uStack_d0 == 0) {
    if (uStack_a0 == 0) {
      gp = 0x101800;
      tp = 0x2000000000000;
      return 1;
    }
    lVar19 = in_mhartid * 8;
    uVar31 = *(ulong *)(lVar19 + 0x3000000000260);
    uVar12 = uVar31 >> 0x25 & 0x1f;
    if ((uVar31 >> 0x2a & 0x1f) == uVar12) {
      *(ulong *)(lVar19 + 0x3000000000260) = uVar31 | 8;
      gp = 0x101800;
      tp = 0x2000000000000;
      return 1;
    }
    uVar12 = uVar12 + 1;
    uVar42 = uVar12 & 0x1f;
    *(ulong *)(lVar19 + 0x3000000000260) =
         uVar42 << 0x20 | 9 | uVar42 << 0x25 | uVar31 & 0xfffffc00fffffff6;
    uVar37 = Ram0002000000000240;
    while (uVar37 < 0x10) {
      FUN_000304f8();
      uVar37 = Ram0002000000000240;
    }
    FUN_000302c8(1,param_1,uVar12);
    bVar20 = false;
  }
  else {
    iVar34 = (int)uStack_a8 + 1;
    uStack_a8 = (ulong)iVar34;
    uVar12 = uStack_88;
    if ((uStack_a8 != uStack_88) ||
       (uVar12 = (long)param_1[uStack_c8 * 4 + 0x13],
       (long)param_1[uStack_c8 * 4 + 0x13] != uStack_a8)) goto LAB_000326c4;
    param_1[uStack_c8 * 4 + 0x12] = iVar34;
    bVar20 = false;
  }
LAB_000317b0:
  uVar31 = *(ulong *)(in_mhartid * 8 + 0x3000000000260);
  uStack_98 = uVar31 >> 0x20 & 0x1f;
  uStack_118 = uVar31 >> 0x2a & 0x1f;
  uStack_90 = uVar31 >> 0x25 & 0x1f;
  uVar12 = uVar31 & 1;
  uVar42 = uVar31 >> 0x20 & 0x1f;
  if ((bVar20) || (uStack_90 != uVar42)) goto LAB_00030e9c;
  if (uStack_90 != 0) {
    if ((uVar12 != 0) && ((long)*param_1 == uStack_90)) {
      uVar12 = 0;
    }
    goto joined_r0x00030eac;
  }
  uStack_98 = 0;
  if (uVar42 == 0) goto LAB_00030ea0;
LAB_00031030:
  if (uStack_118 != uVar42) goto code_r0x00031038;
  uVar42 = uStack_90;
  if ((uVar31 & 8) != 0) goto joined_r0x00030eac;
  plStack_80 = (long *)(param_1 + 0x90);
  *(ulong *)(in_mhartid * 8 + 0x3000000000260) = uVar31 & 0xffffffe0ffffffff;
  uVar15 = Ram0002000000000790;
  uStack_d0 = 0;
  uStack_c8 = 0;
  goto LAB_00030fb8;
code_r0x00031038:
  uVar42 = (ulong)((int)uVar42 + 1);
LAB_0003103c:
  iVar34 = (int)uStack_118 + 1;
  bVar1 = false;
  bVar20 = false;
  uVar48 = uStack_90;
  do {
    uVar39 = (uVar42 << 0x20) >> 0x1c;
    iVar27 = (int)uVar42;
    uVar37 = iVar34 - iVar27;
    plVar23 = (long *)((long)param_1 + uVar39 + 0x48);
    iVar18 = (int)uVar48;
    uStack_d0 = uVar42;
    if (uVar37 < 4) {
      if (uVar37 == 3) {
        lVar24 = *plVar23;
        lVar21 = *(long *)((long)param_1 + uVar39 + 0x58);
        lVar43 = *(long *)((long)param_1 + uVar39 + 0x68);
        uVar28 = (ulong)(int)lVar24;
        uVar25 = lVar24 >> 0x20;
        uStack_110 = (ulong)(int)lVar43;
        uStack_108 = lVar43 >> 0x20;
        uVar16 = (ulong)(int)lVar21;
        uVar32 = lVar21 >> 0x20;
        lVar19 = Ram0002000000000790;
        if (lVar19 != 0) {
          uVar31 = uVar31 & 0xffff8000fffffffe;
          uVar39 = uVar48;
          if (uVar12 != 0) {
            uVar39 = (ulong)(int)(iVar18 - 1U | 0x80000000);
          }
          lVar19 = FUN_00030238(0x1002);
          if (lVar19 != 0) {
            *(int *)(lVar19 + 0xc) = iVar27;
            *(int *)(lVar19 + 0x14) = (int)uVar39;
            *(int *)(lVar19 + 0x10) = iVar34;
            *(undefined8 *)(lVar19 + 0x18) = 0xffffffffffffffff;
            *(long *)(lVar19 + 0x20) = lVar24;
          }
        }
        if (uVar28 != uVar25) goto LAB_0003353c;
        lVar19 = Ram0002000000000790;
        if (lVar19 != 0) {
          uVar31 = uVar31 & 0xffff8000fffffffe;
          uVar39 = uVar48;
          if (uVar12 != 0) {
            uVar39 = (ulong)(int)(iVar18 - 1U | 0x80000000);
          }
          lVar19 = FUN_00030238(0x1002);
          if (lVar19 != 0) {
            *(int *)(lVar19 + 0xc) = iVar27 + 1;
            *(int *)(lVar19 + 0x10) = iVar34;
            *(int *)(lVar19 + 0x14) = (int)uVar39;
            *(undefined8 *)(lVar19 + 0x18) = 0xffffffffffffffff;
            *(long *)(lVar19 + 0x20) = lVar21;
          }
        }
        if (uVar16 != uVar32) goto LAB_000335a4;
        lVar19 = Ram0002000000000790;
        if (lVar19 != 0) {
          uVar31 = uVar31 & 0xffff8000fffffffe;
          uVar39 = uVar48;
          if (uVar12 != 0) {
            uVar39 = (ulong)(int)(iVar18 - 1U | 0x80000000);
          }
          lVar19 = FUN_00030238(0x1002);
          if (lVar19 != 0) {
            *(int *)(lVar19 + 0xc) = iVar27 + 2;
            *(int *)(lVar19 + 0x10) = iVar34;
            *(int *)(lVar19 + 0x14) = (int)uVar39;
            *(undefined8 *)(lVar19 + 0x18) = 0xffffffffffffffff;
            *(long *)(lVar19 + 0x20) = lVar43;
          }
        }
        if (uStack_110 != uStack_108) goto LAB_00031fe4;
      }
      else if (uVar37 == 2) {
        lVar21 = *plVar23;
        lVar24 = *(long *)((long)param_1 + uVar39 + 0x58);
        lVar19 = Ram0002000000000790;
        if (lVar19 != 0) {
          uVar31 = uVar31 & 0xffff8000fffffffe;
          uVar39 = uVar48;
          if (uVar12 != 0) {
            uVar39 = (ulong)(int)(iVar18 - 1U | 0x80000000);
          }
          lVar19 = FUN_00030238(0x1002);
          if (lVar19 != 0) {
            *(int *)(lVar19 + 0x14) = (int)uVar39;
            *(int *)(lVar19 + 0xc) = iVar27;
            *(int *)(lVar19 + 0x10) = iVar34;
            *(undefined8 *)(lVar19 + 0x18) = 0xffffffffffffffff;
            *(long *)(lVar19 + 0x20) = lVar21;
          }
        }
        if ((long)(int)lVar21 != lVar21 >> 0x20) {
          uVar39 = uVar42 & 0x1f;
          uStack_90 = uVar48;
          uStack_a8 = (long)(int)lVar21;
          uStack_88 = lVar21 >> 0x20;
          goto LAB_00030ec0;
        }
        lVar19 = Ram0002000000000790;
        if (lVar19 != 0) {
          uVar31 = uVar31 & 0xffff8000fffffffe;
          uVar39 = uVar48;
          if (uVar12 != 0) {
            uVar39 = (ulong)(int)(iVar18 - 1U | 0x80000000);
          }
          lVar19 = FUN_00030238(0x1002);
          if (lVar19 != 0) {
            *(int *)(lVar19 + 0xc) = iVar27 + 1;
            *(int *)(lVar19 + 0x10) = iVar34;
            *(undefined8 *)(lVar19 + 0x18) = 0xffffffffffffffff;
            *(int *)(lVar19 + 0x14) = (int)uVar39;
            *(long *)(lVar19 + 0x20) = lVar24;
          }
        }
        if ((long)(int)lVar24 != lVar24 >> 0x20) {
          uStack_d0 = (ulong)(iVar27 + 1);
          uVar39 = uStack_d0 & 0x1f;
          uStack_90 = uVar48;
          uStack_a8 = (long)(int)lVar24;
          uStack_88 = lVar24 >> 0x20;
          goto LAB_00030ec0;
        }
      }
      else {
        lVar21 = *plVar23;
        uVar32 = (ulong)(int)lVar21;
        uVar16 = lVar21 >> 0x20;
        lVar19 = Ram0002000000000790;
        if (lVar19 != 0) {
          uVar31 = uVar31 & 0xffff8000fffffffe;
          uVar39 = uVar48;
          if (uVar12 != 0) {
            uVar39 = (ulong)(int)(iVar18 - 1U | 0x80000000);
          }
          lVar19 = FUN_00030238(0x1002);
          if (lVar19 != 0) {
            *(int *)(lVar19 + 0xc) = iVar27;
            *(int *)(lVar19 + 0x10) = iVar34;
            *(undefined8 *)(lVar19 + 0x18) = 0xffffffffffffffff;
            *(long *)(lVar19 + 0x20) = lVar21;
            *(int *)(lVar19 + 0x14) = (int)uVar39;
          }
        }
        if (uVar32 != uVar16) break;
      }
    }
    else {
      lVar24 = *plVar23;
      lVar21 = *(long *)((long)param_1 + uVar39 + 0x58);
      lVar43 = *(long *)((long)param_1 + uVar39 + 0x68);
      lVar46 = *(long *)((long)param_1 + uVar39 + 0x78);
      uVar28 = (ulong)(int)lVar24;
      uStack_110 = (ulong)(int)lVar43;
      uStack_108 = lVar43 >> 0x20;
      uVar25 = lVar24 >> 0x20;
      uVar16 = (ulong)(int)lVar21;
      uVar32 = lVar21 >> 0x20;
      lVar19 = Ram0002000000000790;
      if (lVar19 != 0) {
        uVar31 = uVar31 & 0xffff8000fffffffe;
        uVar39 = uVar48;
        if (uVar12 != 0) {
          uVar39 = (ulong)(int)(iVar18 - 1U | 0x80000000);
        }
        lVar19 = FUN_00030238(0x1002);
        if (lVar19 != 0) {
          *(int *)(lVar19 + 0x14) = (int)uVar39;
          *(int *)(lVar19 + 0xc) = iVar27;
          *(int *)(lVar19 + 0x10) = iVar34;
          *(undefined8 *)(lVar19 + 0x18) = 0xffffffffffffffff;
          *(long *)(lVar19 + 0x20) = lVar24;
        }
      }
      if (uVar28 != uVar25) {
LAB_0003353c:
        uVar39 = uVar42 & 0x1f;
        uStack_90 = uVar48;
        uStack_a8 = uVar28;
        uStack_88 = uVar25;
        goto LAB_00030ec0;
      }
      lVar19 = Ram0002000000000790;
      if (lVar19 != 0) {
        uVar31 = uVar31 & 0xffff8000fffffffe;
        uVar39 = uVar48;
        if (uVar12 != 0) {
          uVar39 = (ulong)(int)(iVar18 - 1U | 0x80000000);
        }
        lVar19 = FUN_00030238(0x1002);
        if (lVar19 != 0) {
          *(int *)(lVar19 + 0x14) = (int)uVar39;
          *(int *)(lVar19 + 0xc) = iVar27 + 1;
          *(int *)(lVar19 + 0x10) = iVar34;
          *(undefined8 *)(lVar19 + 0x18) = 0xffffffffffffffff;
          *(long *)(lVar19 + 0x20) = lVar21;
        }
      }
      if (uVar16 != uVar32) {
LAB_000335a4:
        uVar39 = (long)(iVar27 + 1) & 0x1f;
        uStack_90 = uVar48;
        uStack_d0 = (long)(iVar27 + 1);
        uStack_a8 = uVar16;
        uStack_88 = uVar32;
        goto LAB_00030ec0;
      }
      lVar19 = Ram0002000000000790;
      if (lVar19 != 0) {
        uVar31 = uVar31 & 0xffff8000fffffffe;
        uVar39 = uVar48;
        if (uVar12 != 0) {
          uVar39 = (ulong)(int)(iVar18 - 1U | 0x80000000);
        }
        lVar19 = FUN_00030238(0x1002);
        if (lVar19 != 0) {
          *(int *)(lVar19 + 0xc) = iVar27 + 2;
          *(int *)(lVar19 + 0x10) = iVar34;
          *(int *)(lVar19 + 0x14) = (int)uVar39;
          *(undefined8 *)(lVar19 + 0x18) = 0xffffffffffffffff;
          *(long *)(lVar19 + 0x20) = lVar43;
        }
      }
      if (uStack_110 != uStack_108) {
LAB_00031fe4:
        uVar39 = (long)(iVar27 + 2) & 0x1f;
        uStack_a8 = uStack_110;
        uStack_90 = uVar48;
        uStack_d0 = (long)(iVar27 + 2);
        uStack_88 = uStack_108;
        goto LAB_00030ec0;
      }
      lVar19 = Ram0002000000000790;
      if (lVar19 != 0) {
        uVar31 = uVar31 & 0xffff8000fffffffe;
        uVar39 = uVar48;
        if (uVar12 != 0) {
          uVar39 = (ulong)(int)(iVar18 - 1U | 0x80000000);
        }
        lVar19 = FUN_00030238(0x1002);
        if (lVar19 != 0) {
          *(int *)(lVar19 + 0xc) = iVar27 + 3;
          *(int *)(lVar19 + 0x10) = iVar34;
          *(int *)(lVar19 + 0x14) = (int)uVar39;
          *(undefined8 *)(lVar19 + 0x18) = 0xffffffffffffffff;
          *(long *)(lVar19 + 0x20) = lVar46;
        }
      }
      if ((long)(int)lVar46 != lVar46 >> 0x20) {
        uVar39 = (long)(iVar27 + 3) & 0x1f;
        uStack_90 = uVar48;
        uStack_d0 = (long)(iVar27 + 3);
        uStack_a8 = (long)(int)lVar46;
        uStack_88 = lVar46 >> 0x20;
        goto LAB_00030ec0;
      }
      uVar37 = 4;
    }
    uVar39 = uVar31;
    uVar16 = uVar48;
    if (((uVar42 == uVar48) && (!bVar20)) && (uVar39 = uVar31 & 0xffff8000fffffffe, uVar12 == 0)) {
      if (uStack_118 == uVar42) {
        gp = 0x101800;
        tp = 0x2000000000000;
        return 1;
      }
      uVar16 = (ulong)(iVar27 + 1);
      uVar40 = Ram0002000000000240;
      while (uVar40 < 0x10) {
        FUN_000304f8();
        uVar40 = Ram0002000000000240;
      }
      FUN_000302c8(1,param_1,uVar16);
      uVar12 = 1;
      bVar20 = true;
    }
    uVar32 = (long)(int)(iVar27 + uVar37);
    uVar31 = uVar39;
    if (uStack_118 < (ulong)(long)(int)(iVar27 + uVar37)) {
      if (bVar1) {
        *(ulong *)(in_mhartid * 8 + 0x3000000000260) =
             uVar39 & 0xffff8000fffffffe | uVar12 | uStack_98 << 0x20 | uStack_90 << 0x25 |
             uStack_118 << 0x2a;
        gp = 0x101800;
        tp = 0x2000000000000;
        return 1;
      }
      FUN_000304f8();
      if ((uVar12 != 0) && ((long)*param_1 == uVar16)) {
        uVar12 = 0;
        bVar1 = bVar20;
      }
      uVar31 = uVar39 & 0xffff8000fffffffe;
      uVar32 = uVar16;
      if ((uVar39 & 8) == 0) {
        uVar39 = 0;
        uStack_d0 = 0;
        uStack_90 = uVar16;
        goto LAB_00030ec0;
      }
    }
    uVar42 = uVar32;
    uVar48 = uVar16;
    if (uVar42 == 0) {
      uStack_d0 = 0;
      uVar39 = 0;
      uStack_90 = uVar16;
      goto LAB_00030ec0;
    }
  } while( true );
  uVar39 = uVar42 & 0x1f;
  uStack_a8 = uVar32;
  uStack_88 = uVar16;
  if (uVar42 == uVar48) {
LAB_00031bf8:
    if (uVar48 == uStack_d0) {
      uVar16 = uStack_118 << 0x2a;
      uVar42 = uVar39;
    }
    else {
      if (bVar20) goto LAB_00030ec4;
      uVar16 = uStack_118 << 0x2a;
      uVar31 = uVar31 & 0xffff8000fffffffe;
      if (uVar12 == 0) {
        uVar48 = (ulong)((int)uVar48 + 1);
        uVar37 = Ram0002000000000240;
        while (uVar37 < 0x10) {
          FUN_000304f8();
          uVar37 = Ram0002000000000240;
        }
        FUN_000302c8(1,param_1,uVar48);
        uVar12 = 1;
      }
      uVar42 = uVar48 & 0x1f;
    }
    goto LAB_00030ecc;
  }
  goto LAB_00030ec4;
}


/* ---- pm4_OP_B0_handler @ 00033ca8 size=1460 ---- */

/* WARNING: Removing unreachable block (ram,0x00033ed0) */
/* WARNING: Removing unreachable block (ram,0x00033e50) */
/* WARNING: Removing unreachable block (ram,0x00033f0c) */

void pm4_OP_B0_handler(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint3 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  char cVar13;
  int *piVar14;
  long lVar15;
  int *piVar16;
  uint *puVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  uint *puVar22;
  long in_mhartid;
  long lStack_88;
  char cStack_55;
  uint uStack_54;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0002000000000148 = 1;
  uVar11 = Ram00020000000006f8;
  uVar5 = Ram00020000000006f8;
  piVar14 = (int *)(((ulong)uVar5 << 0x30) >> 0x10 | (ulong)uVar11);
  uVar12 = Ram00020000000006f8;
  lVar9 = Ram00020000000006f8;
  piVar16 = (int *)((lVar9 << 0x20 | uVar12) & 0xffffffffffff);
  uVar11 = Ram00020000000006f8;
  uVar1 = Ram00020000000006f8;
  iVar3 = Ram00020000000006f8;
  uVar18 = (ulong)iVar3;
  uVar12 = Ram00020000000006f8;
  lVar9 = Ram00020000000006f8;
  puVar17 = (uint *)((lVar9 << 0x20 | uVar12) & 0xffffffffffff);
  iVar3 = Ram00020000000006f8;
  lVar19 = (long)iVar3;
  iVar3 = Ram00020000000006f8;
  lVar9 = (long)iVar3;
  if ((uVar5 & 0x10000) != 0) {
    iVar3 = Ram0002000000000240;
    Ram0001000100030d1c = iVar3 << 4 | 1;
  }
  uVar4 = *(uint3 *)((long)piVar16 + 0x1f) >> 1;
  if (((ulong)*(ushort *)((long)piVar16 + 0x22) == 0) || (uVar4 == 0)) {
    Ram0002000000000780 = 0;
    Ram0002000000000788 = 0;
    Ram0002000000000790 = 0;
    lVar20 = Ram0002000000000790;
  }
  else {
    Ram0002000000000780 = *(undefined8 *)(piVar16 + ((long)piVar16[7] & 0xffffffU) * 0x10);
    Ram0002000000000788 = piVar16 + ((long)piVar16[7] & 0xffffffU) * 0x10;
    Ram0002000000000790 = (ulong)uVar4 << 0x20 | (ulong)*(ushort *)((long)piVar16 + 0x22);
    lVar20 = Ram0002000000000790;
  }
  if (lVar20 != 0) {
    FUN_00030238(0x401);
  }
  FUN_0003bf00(piVar16,piVar14,uVar11 & 0xffff,(long)(int)(uVar1 | 0x40),(ulong)uVar5,&cStack_55,
               &uStack_54);
  uVar11 = uVar5 >> 0x11 & 3;
  if (uVar11 == 0) {
    if (uStack_54 == 0) {
      uVar1 = 1;
      lStack_88 = 0;
      puVar22 = (uint *)0x0;
      goto LAB_00033e48;
    }
    puVar22 = (uint *)0x0;
    uVar1 = 1;
    lStack_88 = 0;
  }
  else {
    if (uVar11 == 1) {
      puVar22 = puVar17;
      if (uStack_54 == 0) {
        lVar9 = 0;
        lVar19 = 0;
        uVar1 = 1;
        lStack_88 = 0;
        puVar17 = (uint *)0x0;
        goto LAB_00033e48;
      }
      uVar1 = 1;
      lStack_88 = 0;
    }
    else {
      uVar1 = *puVar17;
      puVar22 = *(uint **)(puVar17 + 2);
      lStack_88 = *(long *)(puVar17 + 4);
      if (uStack_54 == 0) {
        lVar9 = 0;
        lVar19 = 0;
        puVar17 = (uint *)0x0;
        goto LAB_00034028;
      }
    }
    lVar9 = 0;
    lVar19 = 0;
    puVar17 = (uint *)0x0;
    puVar22 = (uint *)((long)puVar22 + (ulong)uStack_54 * lStack_88);
  }
LAB_00034028:
  if (uVar1 <= uStack_54) {
LAB_00033f04:
    if (*(long *)(in_mhartid * 8 + 0x3000000000200) << 0xe < 0) {
      iVar3 = ((uint)((ulong)*(undefined8 *)(in_mhartid * 8 + 0x3000000000260) >> 0x2a) & 0x1f) + 1;
      *piVar16 = iVar3;
      FUN_000305b0(1);
      FUN_000302c8(1,piVar16,0x22);
      do {
        while (iVar3 == *piVar16) {
          FUN_000304f8();
        }
      } while (*piVar16 != 0);
    }
    else {
      *piVar16 = 0;
      FUN_000305b0(1);
    }
    lVar15 = 1;
LAB_00033f64:
    lVar9 = Ram0002000000000790;
    if (lVar9 != 0) {
      FUN_00030238(0x402);
      puVar7 = (undefined8 *)Ram0002000000000788;
      if (puVar7 != (undefined8 *)0x0) {
        uVar6 = Ram0002000000000780;
        *puVar7 = uVar6;
      }
    }
    if (lVar15 != 0) {
      Ram0002000000000150 = 0;
    }
    if ((uVar5 & 0x10000) != 0) {
      iVar3 = Ram0002000000000240;
      Ram0001000100030d1c = iVar3 << 4 | 2;
    }
    return;
  }
LAB_00033e48:
  lVar20 = in_mhartid * 8;
LAB_00033e60:
  while( true ) {
    uVar8 = uStack_54;
    if (uVar11 != 0) {
      uVar18 = (ulong)(int)*puVar22;
      lVar9 = (long)(int)puVar22[1];
      puVar17 = *(uint **)(puVar22 + 2);
      lVar19 = (long)(int)puVar22[4];
      if (piVar14[2] != 0) {
        uVar18 = (ulong)*(int *)((long)piVar14 +
                                ((uVar18 << 0x20) >> 0x1e) + (ulong)(uint)piVar14[2]);
      }
    }
    uVar2 = uStack_54 + 1;
    if ((lVar9 != 0) && (uVar18 < (ulong)(long)*piVar14)) goto LAB_00034114;
    if (uVar1 <= uVar2) break;
    cStack_55 = '\0';
    puVar22 = (uint *)((long)puVar22 + lStack_88);
    uStack_54 = uVar2;
  }
  lVar20 = in_mhartid * 8;
  uVar12 = *(ulong *)(lVar20 + 0x3000000000260);
  uVar21 = uVar12 >> 0x25 & 0x1f;
  if (uVar21 == (uVar12 >> 0x2a & 0x1f)) {
    *(ulong *)(lVar20 + 0x3000000000260) = uVar12 | 8;
  }
  else {
    uVar21 = uVar21 + 1;
    uVar10 = uVar21 & 0x1f;
    *(ulong *)(lVar20 + 0x3000000000260) =
         uVar10 << 0x20 | 9 | uVar10 << 0x25 | uVar12 & 0xfffffc00fffffff6;
    uVar11 = Ram0002000000000240;
    while (uVar11 < 0x10) {
      FUN_000304f8();
      uVar11 = Ram0002000000000240;
    }
    FUN_000302c8(1,piVar16,uVar21);
    lVar15 = FUN_00030de0(piVar16,uVar18,puVar17,lVar19,lVar9,1,1);
    if (lVar15 == 0) {
LAB_00034108:
      piVar16[0xc] = uVar8;
      goto LAB_00033f64;
    }
  }
  cStack_55 = '\0';
  uStack_54 = uVar2;
  goto LAB_00033f04;
LAB_00034114:
  cVar13 = cStack_55;
  if (cStack_55 != '\0') {
    uVar18 = (ulong)(int)((uint)*(undefined8 *)(lVar20 + 0x3000000000260) >> 8);
  }
  while( true ) {
    lVar15 = FUN_00030de0(piVar16,uVar18,puVar17,lVar19,lVar9,cVar13,uVar1 <= uVar2);
    if (lVar15 == 0) goto LAB_00034108;
    cStack_55 = '\0';
    uVar12 = *(ulong *)(lVar20 + 0x3000000000240);
    lVar15 = Ram0002000000000790;
    if (((lVar15 == 0) || (uVar18 < (ulong)(long)*(int *)((uVar12 & 0xffffffffffff) - 0x40))) ||
       (lVar15 = FUN_00030238(0x804), lVar15 == 0)) {
      iVar3 = *(int *)((uVar12 >> 0x30) * (uVar18 & 0xffffffff) + (uVar12 & 0xffffffffffff) + 0x38);
    }
    else {
      *(int *)(lVar15 + 0xc) = (int)uVar18;
      *(undefined8 *)(lVar15 + 0x10) = 0;
      *(undefined4 *)(lVar15 + 0x18) = 0;
      iVar3 = *(int *)((uVar12 >> 0x30) * (uVar18 & 0xffffffff) + (uVar12 & 0xffffffffffff) + 0x38);
    }
    if (iVar3 == 0) break;
    cVar13 = '\0';
    uVar18 = (ulong)(iVar3 + -1);
  }
  cStack_55 = '\0';
  puVar22 = (uint *)((long)puVar22 + lStack_88);
  uStack_54 = uVar2;
  if (uVar1 <= uVar2) goto LAB_00033f04;
  goto LAB_00033e60;
}


/* ---- sub_34260 @ 00034260 size=32 ---- */

void sub_34260(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  iVar1 = Ram00020000000003a8;
  if (iVar1 != param_1) {
    iVar3 = 0;
    do {
      uVar2 = Ram00020000000006f8;
      iVar3 = iVar3 + 1;
    } while (iVar1 - param_1 != iVar3);
  }
  return;
}


/* ---- sub_34280 @ 00034280 size=64 ---- */

void sub_34280(long param_1,long param_2)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  *(undefined4 *)((param_1 << 0x24) + 0x108080000c884) = 0x200;
  *(uint *)((param_1 << 0x24) + 0x108080000c87c) =
       (uint)((ulong)(param_2 << 0x28) >> 0x28) | (uint)param_2 & 0x3f000000;
  return;
}


/* ---- sub_342c0 @ 000342c0 size=244 ---- */

void sub_342c0(long param_1,uint param_2)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  iVar2 = Ram00020000000003a8;
  if (iVar2 != 0) {
    iVar5 = 0;
    do {
      uVar3 = Ram00020000000006f8;
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  param_1 = param_1 << 0x24;
  if ((param_2 & 0x20) != 0) {
    Ram0002000000000120 = 0;
    lVar4 = *(long *)(*(long *)(param_1 + 0x108080000c850) + 0x40U & 0xffffffffffff);
    if (lVar4 != 0) {
      Ram0002000000000390 = lVar4 + 8;
      plVar1 = (long *)Ram0002000000000390;
      Ram0002000000000120 = 0;
      if (*plVar1 == 0) {
        *(uint *)(param_1 + 0x108080000c8f8) = param_2 & 0xffdf | 0x8000;
        *(undefined4 *)(param_1 + 0x108080000c884) = 0x200;
        *(uint *)(param_1 + 0x108080000c87c) =
             (uint)((ulong)((long)(int)*(uint *)(param_1 + 0x108080000c87c) << 0x28) >> 0x28) |
             *(uint *)(param_1 + 0x108080000c87c) & 0x3f000000;
        return;
      }
    }
  }
  *(uint *)(param_1 + 0x108080000c87c) = *(uint *)(param_1 + 0x108080000c87c) | 0xff;
  *(undefined4 *)(param_1 + 0x108080000c884) = 0x200;
  return;
}


/* ---- sub_343b8 @ 000343b8 size=76 ---- */

void sub_343b8(long param_1,undefined8 param_2,long param_3,uint param_4)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  *(uint *)((param_1 << 0x24) + 0x108080000c8f8) = param_4 & 0xf8bf | 0x8000;
  if (param_3 == 0) {
    Ram0002000000000150 = 0;
  }
  FUN_00024b40(param_2,param_1);
  return;
}


/* ---- sub_34408 @ 00034408 size=84 ---- */

void sub_34408(long param_1,undefined8 param_2,long param_3,uint param_4)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0002000000000488 = 0x202;
  *(uint *)((param_1 << 0x24) + 0x108080000c8f8) = param_4 & 0xf8bf | 0x8000;
  if (param_3 == 0) {
    Ram0002000000000150 = 0;
  }
  FUN_00024b40(param_2,param_1);
  return;
}


/* ---- FUN_00034460 @ 00034460 size=172 ---- */

void FUN_00034460(long param_1,undefined8 param_2,long param_3,uint param_4)

{
  long lVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  lVar1 = param_1 << 0x24;
  if ((DAT_001010c8 & 0x601) == 0) {
    *(uint *)(lVar1 + 0x108080000c8f0) = *(uint *)(lVar1 + 0x108080000c8f0) | 0x20;
  }
  else {
    *(uint *)(lVar1 + 0x108080000c87c) = *(uint *)(lVar1 + 0x108080000c87c) | 0x80000000;
  }
  *(uint *)(lVar1 + 0x108080000c8f8) = param_4 & 0x7c0ffff | 0x80000000;
  Ram0002000000000488 = 0x202;
  *(uint *)(lVar1 + 0x108080000c8f8) = param_4 & 0xf8bf | 0x8000;
  if (param_3 == 0) {
    Ram0002000000000150 = 0;
  }
  FUN_00024b40(param_2,param_1);
  return;
}


/* ---- FUN_00034510 @ 00034510 size=204 ---- */

void FUN_00034510(long param_1,undefined8 param_2,uint param_3,long param_4)

{
  uint uVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram00020000000001d0 = 8;
  Ram00020000000000a8 = 2;
  *DAT_00101070 = 0x28;
  Ram00020000000000a8 = 0;
  uVar1 = *(uint *)((param_1 << 0x24) + 0x108080000c8f8);
  if (DAT_001010c8 == 0) {
    if ((param_3 >> 2 & 1) != 0) {
      uVar1 = uVar1 | 0x800;
    }
    if ((param_3 >> 6 & 1) != 0) {
      uVar1 = uVar1 | 8;
    }
    *(uint *)((param_1 << 0x24) + 0x108080000c8f8) = uVar1 & 0xf8bf | 0x8000;
    if (param_4 != 0xc) {
      Ram0002000000000150 = 0;
    }
    FUN_00024b40(param_2,param_1);
    return;
  }
  FUN_00034460(param_4 == 0xc,(long)(int)uVar1);
  return;
}


/* ---- sub_345e0 @ 000345e0 size=100 ---- */

void sub_345e0(long param_1,undefined4 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  *(undefined4 *)((param_1 << 0x24) + 0x108080000c87c) = param_2;
  if (param_3 != 0) {
    FUN_00025a78(param_4,param_5,0xc,0,0,0,0,0);
    return;
  }
  FUN_00024960();
  return;
}


/* ---- sub_34648 @ 00034648 size=112 ---- */

void sub_34648(long param_1,uint param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  *(uint *)((param_1 << 0x24) + 0x108080000c87c) = param_2 | 0x80000000;
  if (param_3 != 0) {
    FUN_00025a78(param_4,param_5,0xc,0,0,0,0,0);
    return;
  }
  FUN_00024960();
  return;
}


/* ---- FUN_000346b8 @ 000346b8 size=432 ---- */

void FUN_000346b8(long param_1,uint param_2,long param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = param_2 & 0x4e;
  DAT_001010c8 = (int)param_4;
  if (param_3 == 0) {
    if (param_4 != 0) {
      DAT_001010d8 = DAT_001010f8;
      goto LAB_00034770;
    }
    DAT_001010d8 = DAT_001010f8;
    DAT_001010f8 = DAT_001010f8 + 1;
  }
  else {
    DAT_001010d8 = DAT_001010f8 + -1;
  }
  uVar2 = uVar1;
  if ((DAT_001010c8 == 0 && (param_2 >> 0xb & 3) != 2) || (uVar2 = uVar1 | 0x200000, param_4 == 0))
  {
    *(uint *)((param_1 << 0x24) + 0x108080000c8f8) =
         *(uint *)((param_1 << 0x24) + 0x108080000c8f8) | 0x8040;
    FUN_00025a78(0xffffffffc0050004,uVar2,4,0,0,0,0,0);
    return;
  }
LAB_00034770:
  param_1 = param_1 << 0x24;
  *(uint *)(param_1 + 0x108080000c8f8) = *(uint *)(param_1 + 0x108080000c8f8) & 0xffffffbf | 0x8000;
  if ((param_4 & 0x601) == 0) {
    FUN_00025a78(0xffffffffc0050004,uVar1 | 0x200000,0xc,0,0,0,0);
    return;
  }
  *(uint *)(param_1 + 0x108080000c87c) =
       *(uint *)(param_1 + 0x108080000c868) & 0x800000 | 0x81001ff |
       *(uint *)(param_1 + 0x108080000c868) & 0x3000000;
  FUN_00025a78(0xffffffffc0050004,uVar1 | 0x200000,0xc,0,0,0,0,0);
  return;
}


/* ---- sub_34868 @ 00034868 size=60 ---- */

void sub_34868(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  if (param_1 != 0) {
    lVar3 = 0;
    do {
      uVar1 = Ram00020000000006f8;
      param_4 = (ulong)uVar1;
      lVar3 = (long)((int)lVar3 + 1);
    } while (param_1 != lVar3);
  }
  uVar2 = Ram00020000000006f8;
  lVar3 = Ram00020000000006f8;
  DAT_001010d0 = lVar3 << 0x20 | uVar2;
  FUN_000346b8(param_2,param_3,0,param_4);
  return;
}


/* ---- sub_348a8 @ 000348a8 size=96 ---- */

void sub_348a8(int param_1,uint param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0002000000000060 = param_1;
  if (param_1 != 2) {
    iVar4 = 0;
    do {
      uVar1 = Ram00020000000006f8;
      iVar4 = iVar4 + 1;
    } while (param_1 + -2 != iVar4);
  }
  uVar2 = Ram00020000000006f8;
  lVar3 = Ram00020000000006f8;
  DAT_001010d0 = lVar3 << 0x20 | uVar2;
  FUN_000346b8((uint)DAT_001010b8._7_1_ | (param_2 & 0x600) << 2,param_2 & 0x40,0);
  return;
}


/* ---- sub_34908 @ 00034908 size=52 ---- */

void sub_34908(long param_1)

{
  uint uVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram00020000000000f0;
  *(uint *)((param_1 << 0x24) + 0x108080000c87c) = uVar1 & 0xff | 0x80000000;
  FUN_00024960();
  return;
}


/* ---- sub_34940 @ 00034940 size=76 ---- */

void sub_34940(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  iVar2 = Ram00020000000003a8;
  if (iVar2 != 0) {
    iVar4 = 0;
    do {
      uVar3 = Ram00020000000006f8;
      iVar4 = iVar4 + 1;
    } while (iVar2 != iVar4);
  }
  uVar1 = Ram00020000000000f0;
  *(uint *)((param_1 << 0x24) + 0x108080000c87c) = uVar1 & 0xff | 0x80000000;
  FUN_00024960();
  return;
}


/* ---- sub_34990 @ 00034990 size=240 ---- */

void sub_34990(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  param_1 = param_1 << 0x24;
  *(uint *)(param_1 + 0x108080000c8f8) = *(uint *)(param_1 + 0x108080000c8f8) & 0xffffffbf | 0x8000;
  uVar1 = *(uint *)(param_1 + 0x108080000c868) & 0x800000 | 0x81001ff |
          *(uint *)(param_1 + 0x108080000c868) & 0x3000000;
  if (param_3 == 0) {
    *(uint *)(param_1 + 0x108080000c87c) = uVar1 | 0x80000000;
    FUN_00024960();
    return;
  }
  if ((param_3 & 0x601) != 0) {
    *(uint *)(param_1 + 0x108080000c87c) = uVar1;
    FUN_00025a78(param_2,param_4,0xc,0,0,0,0,0);
    return;
  }
  FUN_00025a78(param_2,param_4,4,0,0,0,0,0);
  return;
}


/* ---- FUN_00034a80 @ 00034a80 size=120 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00034a80(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar3 = 0x3c0;
  if (param_1 != 0) {
    uVar3 = 0xc3c0;
  }
  fence();
  Ram0002000000000518 = uVar3;
  uVar3 = Ram0002000000000020;
  Ram0002000000000040 = 1;
  uVar1 = Ram0002000000000070;
  _DAT_1000100003898 = 4 << ((long)(int)(uVar1 >> 6) & 3U | (long)(int)(uVar1 >> 3) & 4U);
  do {
  } while ((_DAT_1000100003898 & _DAT_100010000389c) == 0);
  _DAT_100010000389c = _DAT_1000100003898;
  Ram0002000000000040 = uVar3;
  Ram00020000000002a8 = 0;
  do {
    lVar2 = Ram00020000000004b8;
  } while (lVar2 != 0);
  return;
}


/* ---- sub_34af8 @ 00034af8 size=64 ---- */

void sub_34af8(long param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  *(undefined4 *)((param_1 << 0x24) + 0x108080000c888) = 0xc;
  iVar1 = Ram00020000000003a8;
  if (iVar1 != 0) {
    iVar3 = 0;
    do {
      uVar2 = Ram00020000000006f8;
      param_2 = (ulong)uVar2;
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  FUN_00024960(param_2);
  return;
}


/* ---- sub_34b38 @ 00034b38 size=12 ---- */

void sub_34b38(undefined8 *param_1)

{
  undefined8 uVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram00020000000000f8;
  *param_1 = uVar1;
  return;
}


/* ---- FUN_00034b48 @ 00034b48 size=244 ---- */

void FUN_00034b48(long param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  iVar4 = Ram00020000000003a8;
  if (iVar4 != 2) {
    iVar7 = 0;
    do {
      uVar5 = Ram00020000000006f8;
      iVar7 = iVar7 + 1;
    } while (iVar4 + -2 != iVar7);
  }
  uVar8 = Ram00020000000006f8;
  lVar6 = Ram00020000000006f8;
  param_1 = param_1 << 0x24;
  uVar1 = *(uint *)(param_1 + 0x108080000c8f8);
  uVar8 = lVar6 << 0x20 | uVar8;
  DAT_001010d0 = uVar8;
  if ((uVar8 == 0) || ((param_2 & 8) == 0)) {
    *(uint *)(param_1 + 0x108080000c8f8) = uVar1 & 0xffffff7f | 0x8000;
    if (param_3 == 0) {
      Ram0002000000000488 = 0x101;
      DAT_00101100 = param_2;
      FUN_000245c0();
      return;
    }
  }
  else {
    if (param_3 == 0) {
      *(uint *)(param_1 + 0x108080000c8f8) = uVar1 | 0x8010;
      Ram0002000000000390 = uVar8 + 0x20;
      puVar3 = (undefined8 *)Ram0002000000000390;
      uVar2 = Ram00020000000000f8;
      *puVar3 = uVar2;
      *(uint *)(param_1 + 0x108080000c8f8) = uVar1 & 0xffffff6f | 0x8000;
      Ram0002000000000488 = 0x101;
      DAT_00101100 = param_2;
      FUN_000245c0();
      return;
    }
    *(uint *)(param_1 + 0x108080000c8f8) = uVar1 & 0xffffff7f | 0x8000;
  }
  FUN_000346b8(0);
  return;
}


/* ---- sub_34c40 @ 00034c40 size=96 ---- */

void sub_34c40(long param_1,uint param_2,uint param_3)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  *(uint *)((param_1 << 0x24) + 0x108080000c8f8) =
       param_3 & 0xffff | (param_2 & 0x3f | 0xffff8000 | param_3 >> 0x10 & 0x7fc0) << 0x10;
  FUN_00034b48((long)(1 << ((long)(int)(param_2 - 1) & 0x1fU)));
  return;
}


/* ---- FUN_00034ca0 @ 00034ca0 size=100 ---- */

void FUN_00034ca0(long param_1,uint param_2)

{
  uint uVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = *(uint *)((param_1 << 0x24) + 0x108080000c8f8);
  *(uint *)((param_1 << 0x24) + 0x108080000c8f8) =
       uVar1 & 0xffff | (param_2 & 0x3f | 0xffff8000 | uVar1 >> 0x10 & 0x7fc0) << 0x10;
  FUN_00034b48((long)(1 << ((long)(int)(param_2 - 1) & 0x1fU)));
  return;
}


/* ---- sub_34d08 @ 00034d08 size=88 ---- */

void sub_34d08(long param_1)

{
  uint uVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = *(uint *)((param_1 << 0x24) + 0x108080000c8f8);
  *(uint *)((param_1 << 0x24) + 0x108080000c8f8) =
       uVar1 & 0xffff | (uVar1 >> 0x10 & 0x7fc0 | 0xffff8006) << 0x10;
  FUN_00034b48(0x20);
  return;
}


/* ---- FUN_00034d60 @ 00034d60 size=104 ---- */

void FUN_00034d60(long param_1,uint param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0002000000000488 = 0x100;
  *(uint *)((param_1 << 0x24) + 0x108080000c8f8) = param_2 & 0xfffffffb | 0x8000;
  iVar4 = 0xd;
  do {
    uVar1 = Ram00020000000006f8;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uVar2 = Ram00020000000006f8;
  lVar3 = Ram00020000000006f8;
  DAT_001010d0 = lVar3 << 0x20 | uVar2;
  FUN_000346b8(param_2 & 0x40,0);
  return;
}


/* ---- FUN_00034dc8 @ 00034dc8 size=1260 ---- */

void FUN_00034dc8(long param_1,undefined4 param_2,uint param_3,long param_4,long param_5,
                 long param_6,long param_7,long param_8)

{
  ulong *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  ulong in_stack_00000000;
  int in_stack_00000008;
  uint in_stack_00000010;
  undefined4 in_stack_00000018;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  lVar9 = param_1 << 0x24;
LAB_00034e4c:
  do {
    iVar7 = 0;
    uVar4 = 1;
    iVar10 = 0;
    do {
      if ((param_3 & uVar4 << 0x18) == 0) {
        lVar5 = param_7;
        if ((((iVar7 != 3) && (lVar5 = param_8, iVar7 != 4)) && (lVar5 = param_5, iVar7 != 1)) &&
           (lVar5 = param_6, iVar7 != 2)) {
          lVar5 = param_4;
        }
        if (lVar5 != 0) {
          Ram0002000000000390 = lVar5 + 8;
          puVar1 = (ulong *)Ram0002000000000390;
          Ram0002000000000120 = 0;
          param_3 = param_3 | uVar4;
          if (in_stack_00000008 == 0) {
            if ((in_stack_00000000 & *puVar1) == 0) {
              param_3 = param_3 | uVar4 << 0x18 | 0x80000000;
              *(uint *)(lVar9 + 0x108080000c8f8) = param_3;
              goto LAB_00034e9c;
            }
          }
          else if ((in_stack_00000000 & *puVar1) == 0) {
            uVar4 = in_stack_00000010 >> 9 & 3;
            *(uint *)(lVar9 + 0x108080000c8f8) = *(uint *)(lVar9 + 0x108080000c8f8) & 0xfffd;
            if (uVar4 - 1 < 2) {
              FUN_00034a80(uVar4 == 2);
            }
            goto LAB_00034f08;
          }
          iVar10 = iVar10 + 1;
        }
      }
LAB_00034e9c:
      iVar7 = iVar7 + 1;
      uVar4 = uVar4 << 1;
    } while (iVar7 != 5);
    if (iVar10 == 0) {
      uVar4 = in_stack_00000010 >> 9 & 3;
      *(uint *)(lVar9 + 0x108080000c8f8) = *(uint *)(lVar9 + 0x108080000c8f8) & 0xfffd;
      if (uVar4 - 1 < 2) {
        FUN_00034a80(uVar4 == 2);
      }
LAB_00034f08:
      FUN_000346b8(param_1,(long)(int)in_stack_00000010,0,0);
      return;
    }
    uVar4 = Ram0002000000000068;
    if (((ulong)(long)*(int *)(lVar9 + 0x108080002e088) >> 8 & ~(long)(1 << ((ulong)uVar4 & 0x1f)) &
        0xff) != 0) {
      uVar4 = Ram00020000000000f0;
      *(uint *)(lVar9 + 0x108080000c87c) = uVar4 & 0xff | 0x80000000;
      FUN_00024960(param_1);
      return;
    }
    uVar4 = Ram0002000000000108;
    if (uVar4 >> 0x10 == 0) {
      iVar7 = Ram0002000000000140;
      if (iVar7 == 0) {
        iVar7 = Ram0002000000000180;
        if (iVar7 != 0) {
          Ram0002000000000060 = 0;
          lVar9 = Ram0002000000000038;
          if (lVar9 == 0) {
            Ram0002000000000200 = 0xe;
          }
          else {
            Ram0002000000000200 = 0xf;
          }
          Ram0002000000000220 = 4;
          Ram0002000000000080 = 2;
          Ram00020000000003c0 = 0;
          uVar4 = Ram0002000000000190;
          Ram0002000000000220 = 0;
          uVar6 = uVar4 >> 8 & 7;
          Ram00020000000004d0 = uVar6;
          uVar2 = Ram00020000000004a0;
          if ((uVar2 & 4) == 0) {
            *(undefined4 *)(((long)(int)(uVar4 >> 4) << 0x24) + 0x108080000c87c) = 0x60000000;
          }
          else {
            Ram00020000000004d8 = uVar6;
            lVar9 = (long)(int)(uVar4 >> 4) << 0x24;
            do {
            } while ((*(uint *)(lVar9 + 0x108080002e088) & 0x40000) != 0);
            iVar7 = 0x10;
            do {
              Ram00020000000003c0 = 0;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            uVar4 = Ram0002000000000498;
            uVar8 = (ulong)uVar4 & 0x3f;
            Ram00020000000004e8 = (int)uVar8;
            Ram0002000000000070 = (int)uVar8;
            do {
              uVar3 = Ram00020000000006f8;
              Ram00020000000003c0 = uVar3;
              uVar8 = (ulong)((int)uVar8 + -1);
            } while (uVar8 != 0);
            *(uint *)(lVar9 + 0x108080000c87c) = *(uint *)(lVar9 + 0x108080000c87c) | 0x10000000;
            *(undefined4 *)(lVar9 + 0x108080000c884) = 0x200;
          }
          Ram00020000000007d8 = 1;
          goto LAB_00034fec;
        }
      }
      else {
        Ram0002000000000060 = 0;
        lVar5 = Ram0002000000000038;
        if (lVar5 == 0) {
          Ram00020000000001f8 = 0xe;
        }
        else {
          Ram00020000000001f8 = 0xf;
        }
        lVar5 = FUN_000243e0();
        if (lVar5 != 0) {
          Ram00020000000007d8 = 1;
          goto LAB_00034fec;
        }
      }
      goto LAB_00034e4c;
    }
    Ram00020000000001b8 = uVar4;
    FUN_00003450((long)(int)uVar4);
    if (DAT_00101086 != '\0') {
      DAT_00101086 = '\0';
LAB_00034fec:
      DAT_00101110 = param_3;
      DAT_0010110c = param_2;
      DAT_00101108 = (int)param_1;
      DAT_00101118 = param_4;
      DAT_00101120 = param_5;
      DAT_00101128 = param_6;
      DAT_00101130 = param_7;
      DAT_00101138 = param_8;
      DAT_00101140 = in_stack_00000000;
      DAT_00101148 = in_stack_00000008;
      DAT_00101100 = in_stack_00000010;
      DAT_00101104 = in_stack_00000018;
      return;
    }
  } while( true );
}


/* ---- FUN_000352b8 @ 000352b8 size=3312 ---- */

void FUN_000352b8(long param_1,ulong param_2,long param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined8 uVar19;
  uint uVar20;
  undefined4 uVar21;
  int iVar22;
  int iVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0002000000000060 = 0xf;
  iVar23 = Ram0002000000000408;
  iVar22 = Ram0002000000000128;
  lVar12 = param_1 << 0x24;
  uVar13 = (uint)param_2;
  if (iVar22 != iVar23) {
    do {
      uVar25 = Ram0002000000000068;
      if (((ulong)(long)*(int *)(lVar12 + 0x108080002e088) >> 8 &
           ~(long)(1 << ((ulong)uVar25 & 0x1f)) & 0xff) != 0) {
        *(undefined4 *)(lVar12 + 0x108080000c888) = 0xc;
        iVar22 = Ram00020000000003a8;
        if (iVar22 != 0) {
          iVar23 = 0;
          do {
            uVar17 = Ram00020000000006f8;
            iVar23 = iVar23 + 1;
          } while (iVar22 != iVar23);
        }
        FUN_00024960(param_1);
        return;
      }
      uVar25 = Ram0002000000000108;
      if (uVar25 >> 0x10 == 0) {
        iVar22 = Ram0002000000000140;
        if (iVar22 == 0) {
          iVar22 = Ram0002000000000180;
          if (iVar22 != 0) {
            Ram0002000000000060 = 0;
            lVar12 = Ram0002000000000038;
            if (lVar12 == 0) {
              Ram0002000000000200 = 0xe;
            }
            else {
              Ram0002000000000200 = 0xf;
            }
            Ram0002000000000220 = 4;
            Ram0002000000000080 = 2;
            Ram00020000000003c0 = 0;
            uVar25 = Ram0002000000000190;
            Ram0002000000000220 = 0;
            uVar20 = uVar25 >> 8 & 7;
            Ram00020000000004d0 = uVar20;
            uVar18 = Ram00020000000004a0;
            if ((uVar18 & 4) == 0) {
              *(undefined4 *)(((long)(int)(uVar25 >> 4) << 0x24) + 0x108080000c87c) = 0x60000000;
            }
            else {
              Ram00020000000004d8 = uVar20;
              lVar12 = (long)(int)(uVar25 >> 4) << 0x24;
              do {
              } while ((*(uint *)(lVar12 + 0x108080002e088) & 0x40000) != 0);
              iVar22 = 0x10;
              do {
                Ram00020000000003c0 = 0;
                iVar22 = iVar22 + -1;
              } while (iVar22 != 0);
              uVar25 = Ram0002000000000498;
              uVar24 = (ulong)uVar25 & 0x3f;
              Ram00020000000004e8 = (int)uVar24;
              Ram0002000000000070 = (int)uVar24;
              do {
                uVar17 = Ram00020000000006f8;
                Ram00020000000003c0 = uVar17;
                uVar24 = (ulong)((int)uVar24 + -1);
              } while (uVar24 != 0);
              *(uint *)(lVar12 + 0x108080000c87c) = *(uint *)(lVar12 + 0x108080000c87c) | 0x10000000
              ;
              *(undefined4 *)(lVar12 + 0x108080000c884) = 0x200;
            }
LAB_00035390:
            Ram00020000000007d8 = 2;
LAB_000353a0:
            gp = 0x101800;
            tp = 0x2000000000000;
            DAT_00101100 = uVar13;
            DAT_00101104 = (int)param_3;
            DAT_00101108 = (int)param_1;
            return;
          }
        }
        else {
          Ram0002000000000060 = 0;
          lVar15 = Ram0002000000000038;
          if (lVar15 == 0) {
            Ram00020000000001f8 = 0xe;
          }
          else {
            Ram00020000000001f8 = 0xf;
          }
          lVar15 = FUN_000243e0();
          if (lVar15 != 0) goto LAB_00035390;
        }
      }
      else {
        Ram00020000000001b8 = uVar25;
        FUN_00003450((long)(int)uVar25);
        if (DAT_00101086 != '\0') {
          DAT_00101086 = '\0';
          goto LAB_000353a0;
        }
      }
      Ram0002000000000060 = 0xf;
      iVar23 = Ram0002000000000408;
      iVar22 = Ram0002000000000128;
    } while (iVar22 != iVar23);
  }
  uVar25 = *(uint *)(lVar12 + 0x108080000c8f8);
  if (param_3 == 0) {
    uVar25 = uVar13 >> 9 & 3;
    if (uVar25 - 1 < 2) {
      FUN_00034a80(uVar25 == 2);
    }
    if ((uVar13 >> 0x10 & 0xff) == 1) {
      iVar22 = Ram00020000000006f8;
      if (iVar22 == -0x3ffdc100) {
        Ram0002000000000150 = 0;
        *(uint *)(lVar12 + 0x108080000c8f8) =
             uVar13 >> 2 & 0x600 | *(uint *)(lVar12 + 0x108080000c8f8) & 0xfffff9ff | 0x8100;
        Ram0002000000000060 = 3;
        Ram00020000000004a8 = 0;
        FUN_0002a770();
        return;
      }
    }
    *(uint *)(lVar12 + 0x108080000c8f8) =
         *(uint *)(lVar12 + 0x108080000c8f8) & 0xffff |
         (*(uint *)(lVar12 + 0x108080000c8f8) >> 0x10 & 0x7fc0 | 0xffff8009) << 0x10;
    uVar13 = 0x100;
    goto LAB_00035cd0;
  }
  if (param_3 != 2) {
    uVar24 = param_2 | 0x40;
    if ((uVar25 & 0x40) == 0) {
      uVar13 = *(uint *)(lVar12 + 0x108080000c8f8);
      uVar17 = Ram00020000000006f8;
      uVar24 = Ram00020000000006f8;
      lVar15 = Ram00020000000006f8;
      uVar16 = Ram00020000000006f8;
      lVar4 = Ram00020000000006f8;
      uVar27 = Ram00020000000006f8;
      lVar5 = Ram00020000000006f8;
      uVar6 = Ram00020000000006f8;
      lVar7 = Ram00020000000006f8;
      uVar8 = Ram00020000000006f8;
      lVar9 = Ram00020000000006f8;
      uVar19 = Ram00020000000006f8;
      uVar19 = Ram00020000000006f8;
      uVar10 = Ram00020000000006f8;
      lVar11 = Ram00020000000006f8;
      DAT_001010d0 = lVar11 << 0x20 | uVar10;
      if ((((param_2 & 8) != 0) && (DAT_001010d0 != 0)) && ((uVar13 & 2) == 0)) {
        Ram00020000000000b0 = 0;
        Ram0002000000000390 = DAT_001010d0 + 0x20;
        puVar2 = (undefined8 *)Ram0002000000000390;
        uVar19 = Ram00020000000000f8;
        *puVar2 = uVar19;
      }
      *(uint *)(lVar12 + 0x108080000c8f8) = uVar13 | 0x8002;
      DAT_00101100 = (uint)(param_2 | 0x40);
      DAT_00101104 = (int)param_3;
      FUN_00034dc8(param_1,uVar13 & 0x1f000000,lVar15 << 0x20 | uVar24,lVar4 << 0x20 | uVar16,
                   lVar5 << 0x20 | uVar27,lVar7 << 0x20 | uVar6,lVar9 << 0x20 | uVar8);
      return;
    }
LAB_00035d58:
    FUN_00034d60(param_1,uVar24);
    return;
  }
  uVar18 = *(uint *)(lVar12 + 0x108080000c8f8);
  if ((uVar18 & 0x10) != 0) {
    uVar13 = uVar25 >> 0x10 & 0x3f;
    goto LAB_00035cd0;
  }
  uVar20 = uVar13 >> 9 & 3;
  uVar24 = param_2;
  if ((uVar25 & 0x44) != 0) goto LAB_00035d58;
  if ((uVar20 - 1 < 2) && ((uVar18 & 0x80) == 0)) {
    FUN_00034a80(uVar20 == 2);
    *(uint *)(lVar12 + 0x108080000c8f8) = uVar18 | 0x8080;
  }
  uVar20 = Ram00020000000006f8;
  uVar18 = uVar20 & 0xffff;
  uVar25 = uVar20 >> 0x10;
  uVar14 = uVar13 >> 0x10 & 3;
  iVar22 = Ram00020000000006f8;
  Ram00020000000000a8 = 2;
  uVar17 = Ram00020000000006f8;
  Ram000100020000b804 = uVar17;
  uVar17 = Ram00020000000006f8;
  uVar21 = Ram00020000000006f8;
  if (uVar14 == 1) {
    uVar21 = 1;
    uVar17 = 1;
    uVar25 = 1;
    iVar22 = 1;
    uVar20 = uVar18;
    uVar14 = uVar18;
  }
  else if (uVar14 == 2) {
    uVar20 = (uVar20 >> 0x10) * uVar18;
    uVar21 = 1;
    iVar22 = 1;
    uVar14 = uVar20;
  }
  else {
    if (uVar14 == 0) {
      Ram00020000000000a8 = 0;
      *(uint *)(lVar12 + 0x108080000c8f8) =
           *(uint *)(lVar12 + 0x108080000c8f8) & 0xffff |
           (*(uint *)(lVar12 + 0x108080000c8f8) >> 0x10 & 0x7fc0 | 0xffff8002) << 0x10;
      uVar13 = 2;
      goto LAB_00035cd0;
    }
    uVar20 = uVar18 * (uVar20 >> 0x10);
    uVar14 = iVar22 * uVar20;
  }
  Ram000100020000b808 = uVar17;
  Ram000100020000b80c = uVar21;
  if ((0x400 < uVar14) || (0x400 < uVar20)) {
    Ram00020000000000a8 = 0;
    *(uint *)(lVar12 + 0x108080000c8f8) =
         *(uint *)(lVar12 + 0x108080000c8f8) & 0xffff |
         (*(uint *)(lVar12 + 0x108080000c8f8) >> 0x10 & 0x7fc0 | 0xffff8007) << 0x10;
    uVar13 = 0x40;
    goto LAB_00035cd0;
  }
  iVar23 = Ram00020000000006f8;
  uVar20 = Ram00020000000006f8;
  uVar24 = Ram00020000000006f8;
  lVar15 = Ram00020000000006f8;
  uVar24 = lVar15 << 0x20 | uVar24;
  if (uVar24 == 0) {
    Ram00020000000000a8 = 0;
    uVar19 = 4;
    goto LAB_000359cc;
  }
  Ram0002000000000390 = uVar24 + 0x10;
  plVar3 = (long *)Ram0002000000000390;
  uVar26 = Ram00020000000002d0;
  Ram000100020000b81c = uVar18;
  Ram000100020000b820 = uVar25;
  Ram000100020000b824 = iVar22;
  if ((uVar26 & 0x40) != 0) {
    Ram00020000000000a8 = 0;
    Ram00020000000000a8 = 2;
    Ram000100020000b838 = *(uint *)(lVar12 + 0x108080000c84c) >> 4;
  }
  Ram000100020000b830 = (int)(uVar24 + *plVar3 >> 8);
  Ram000100020000b834 = (uint)(uVar24 + *plVar3 >> 0x28) | 0x100;
  uVar25 = (uint)((uVar20 & 0x1ff) != 0) + (uVar20 >> 9);
  Ram000100020000b8a0 = *(undefined4 *)((long)plVar3 + 0x1c);
  uVar24 = plVar3[4];
  uVar26 = (uint)uVar24 & (uint)DAT_00101078;
  uVar18 = Ram00020000000002d8;
  uVar20 = 1;
  if ((uVar18 & 4) == 0) {
    uVar20 = uVar26 >> 0x14 & 1;
  }
  uVar18 = uVar26 & 0xffefffff | uVar20 << 0x14;
  Ram000100020000b848 = uVar18;
  Ram000100020000b84c = uVar25 * 0x8000 | (uVar13 & 1) << 6 | (uint)(uVar24 >> 0x20) & 0x1fbf;
  uVar16 = plVar3[5];
  uVar27 = uVar16 >> 10 & 1;
  if (0x80 < uVar25) {
    Ram00020000000000a8 = 0;
    uVar19 = 3;
    goto LAB_000359cc;
  }
  iVar22 = (uVar26 & 0x3f) + 1;
  if (uVar27 == 0) {
    uVar13 = iVar22 * 4;
  }
  else {
    uVar13 = iVar22 * 8;
  }
  uVar25 = (uint)uVar16;
  if (((ulong)(long)(int)uVar18 >> 0x1d & 1) == 0) {
    if (uVar14 < 0x101) goto LAB_00035e84;
    if (uVar27 == 0) {
      if (uVar14 < 0x181) {
LAB_00035f0c:
        bVar1 = 0xfc < uVar13;
        goto LAB_00035eb8;
      }
      if (uVar14 < 0x201) goto LAB_00035ef8;
LAB_00035f18:
      if (uVar14 < 0x281) {
        bVar1 = 0x90 < uVar13;
      }
      else if (uVar14 < 0x301) {
        bVar1 = 0x78 < uVar13;
      }
      else if ((uVar27 == 0) && (uVar14 < 0x381)) {
        bVar1 = 0x6c < uVar13;
      }
      else {
        bVar1 = 0x60 < uVar13;
      }
      goto LAB_00035eb8;
    }
    if (0x140 < uVar14) {
      if (uVar14 < 0x181) {
        if (0xf0 < uVar13) goto LAB_00035ebc;
      }
      else {
        if (0x1c0 < uVar14) {
          if (uVar14 < 0x201) goto LAB_00035ef8;
          if (uVar14 < 0x241) {
            bVar1 = 0xa8 < uVar13;
            goto LAB_00035eb8;
          }
          goto LAB_00035f18;
        }
        if (0xd8 < uVar13) goto LAB_00035ebc;
      }
    }
LAB_00035990:
    if ((uVar24 & 0x100000000) != 0) {
LAB_00035998:
      uVar13 = DAT_001010c0 << 1;
      goto LAB_0003599c;
    }
  }
  else {
    if (0x200 < uVar14) {
      if (uVar27 == 0) {
        if (uVar14 < 0x301) goto LAB_00035f0c;
LAB_00035ef8:
        bVar1 = 0xc0 < uVar13;
      }
      else {
        if (uVar14 < 0x281) goto LAB_00035990;
        if (uVar14 < 0x301) {
          bVar1 = 0xf0 < uVar13;
        }
        else {
          if (0x380 < uVar14) goto LAB_00035ef8;
          bVar1 = 0xd8 < uVar13;
        }
      }
LAB_00035eb8:
      if (bVar1) {
LAB_00035ebc:
        Ram00020000000000a8 = 0;
        uVar19 = 8;
        goto LAB_000359cc;
      }
    }
LAB_00035e84:
    if ((uVar24 & 0x100000000) != 0) {
      uVar13 = DAT_001010c0;
      if (uVar27 != 0) goto LAB_00035998;
LAB_0003599c:
      if (uVar13 < (iVar23 + 3U & 0xfffffffc) || (param_2 & 0x80) != 0) {
        Ram00020000000000a8 = 0;
        uVar19 = 1;
        if (uVar27 != 0) {
          uVar19 = 0xb;
        }
LAB_000359cc:
        FUN_00034ca0(param_1,param_2,uVar19);
        return;
      }
    }
  }
  uVar13 = uVar25 & 1;
  if ((uVar16 & 1) != 0) {
    Ram000100020000b900 = (int)DAT_001010e8;
    Ram000100020000b904 = (int)((ulong)DAT_001010e8 >> 0x20);
    Ram000100020000b908 = (int)DAT_001010f0;
    Ram000100020000b90c = (uVar25 & 0x400) << 0xb ^ 0x600000 | (uint)((ulong)DAT_001010f0 >> 0x20);
    uVar13 = 4;
  }
  if ((uVar25 >> 1 & 1) != 0) {
    Ram00020000000000a8 = 0;
    lVar15 = *(long *)(lVar12 + 0x108080000c844) * 0x100 +
             (ulong)(uint)(*(int *)(lVar12 + 0x108080000c84c) << 2);
    Ram00020000000000a8 = 2;
    *(int *)(((ulong)((long)(int)(uVar13 + 0x2e40) << 0x20) >> 0x1e) + 0x1000200000000) =
         (int)lVar15;
    *(int *)(((ulong)((long)(int)(uVar13 + 0x2e41) << 0x20) >> 0x1e) + 0x1000200000000) =
         (int)((ulong)lVar15 >> 0x20);
    uVar13 = uVar13 + 2;
  }
  if ((uVar25 >> 2 & 1) != 0) {
    Ram00020000000000a8 = 0;
    uVar17 = *(undefined4 *)(lVar12 + 0x108080000c854);
    Ram00020000000000a8 = 2;
    *(uint *)(((ulong)((long)(int)(uVar13 + 0x2e40) << 0x20) >> 0x1e) + 0x1000200000000) =
         *(int *)(lVar12 + 0x108080000c850) - ((uint)((ulong)DAT_001010b8 >> 0x18) >> 8);
    *(undefined4 *)(((ulong)((long)(int)(uVar13 + 0x2e41) << 0x20) >> 0x1e) + 0x1000200000000) =
         uVar17;
    uVar13 = uVar13 + 2;
  }
  uVar18 = uVar13;
  if ((uVar25 >> 3 & 1) != 0) {
    uVar17 = Ram00020000000006f8;
    *(undefined4 *)(((ulong)((long)(int)(uVar13 + 0x2e40) << 0x20) >> 0x1e) + 0x1000200000000) =
         uVar17;
    uVar18 = uVar13 + 2;
    uVar17 = Ram00020000000006f8;
    *(undefined4 *)(((ulong)((long)(int)(uVar13 + 0x2e41) << 0x20) >> 0x1e) + 0x1000200000000) =
         uVar17;
  }
  uVar19 = DAT_001010f8;
  if ((uVar25 >> 4 & 1) != 0) {
    *(int *)(((ulong)((long)(int)(uVar18 + 0x2e40) << 0x20) >> 0x1e) + 0x1000200000000) =
         (int)DAT_001010f8;
    *(int *)(((ulong)((long)(int)(uVar18 + 0x2e41) << 0x20) >> 0x1e) + 0x1000200000000) =
         (int)((ulong)uVar19 >> 0x20);
    uVar18 = uVar18 + 2;
  }
  uVar19 = DAT_001010e0;
  if ((uVar25 >> 5 & 1) != 0) {
    *(int *)(((ulong)((long)(int)(uVar18 + 0x2e40) << 0x20) >> 0x1e) + 0x1000200000000) =
         (int)DAT_001010e0;
    *(int *)(((ulong)((long)(int)(uVar18 + 0x2e41) << 0x20) >> 0x1e) + 0x1000200000000) =
         (int)((ulong)uVar19 >> 0x20);
    uVar18 = uVar18 + 2;
  }
  if ((uVar25 >> 6 & 1) != 0) {
    *(uint *)(((ulong)((long)(int)(uVar18 + 0x2e40) << 0x20) >> 0x1e) + 0x1000200000000) =
         DAT_001010c0;
  }
  Ram000100020000b800 = (uint)(uVar27 << 0xf) | (uint)(uVar16 >> 0xd) & 8 | 0x1065;
  Ram00020000000000a8 = 0;
  uVar13 = 0;
LAB_00035cd0:
  FUN_00034b48(param_1,param_2,uVar13);
  return;
}


/* ---- FUN_00035fa8 @ 00035fa8 size=3616 ---- */

void FUN_00035fa8(long param_1,ulong param_2,long param_3,ulong param_4)

{
  bool bVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined4 uVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined4 uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  ulong uVar27;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  iVar26 = (int)param_1;
  iVar5 = Ram0002000000000408;
  iVar17 = Ram0002000000000128;
  uVar23 = (uint)param_2;
  uVar22 = (undefined4)param_3;
  if (iVar17 == iVar5) {
    uVar19 = 0;
  }
  else {
    lVar13 = param_1 << 0x24;
    DAT_00101100 = uVar23;
    DAT_00101104 = uVar22;
    DAT_00101108 = iVar26;
    do {
      uVar19 = Ram0002000000000068;
      if (((ulong)(long)*(int *)(lVar13 + 0x108080002e088) >> 8 &
           ~(long)(1 << ((ulong)uVar19 & 0x1f)) & 0xff) != 0) {
        *(undefined4 *)(lVar13 + 0x108080000c888) = 0xc;
        iVar26 = Ram00020000000003a8;
        if (iVar26 != 0) {
          iVar17 = 0;
          do {
            uVar22 = Ram00020000000006f8;
            iVar17 = iVar17 + 1;
          } while (iVar26 != iVar17);
        }
        FUN_00024960(param_1);
        return;
      }
      uVar19 = Ram0002000000000108;
      if (uVar19 >> 0x10 == 0) {
        iVar17 = Ram0002000000000140;
        if (iVar17 == 0) {
          iVar17 = Ram0002000000000180;
          if (iVar17 != 0) {
            Ram0002000000000060 = 0;
            lVar13 = Ram0002000000000038;
            if (lVar13 == 0) {
              Ram0002000000000200 = 0xe;
            }
            else {
              Ram0002000000000200 = 0xf;
            }
            Ram0002000000000220 = 4;
            Ram0002000000000080 = 2;
            Ram00020000000003c0 = 0;
            uVar19 = Ram0002000000000190;
            Ram0002000000000220 = 0;
            uVar16 = uVar19 >> 8 & 7;
            Ram00020000000004d0 = uVar16;
            uVar24 = Ram00020000000004a0;
            if ((uVar24 & 4) == 0) {
              *(undefined4 *)(((long)(int)(uVar19 >> 4) << 0x24) + 0x108080000c87c) = 0x60000000;
            }
            else {
              Ram00020000000004d8 = uVar16;
              lVar13 = (long)(int)(uVar19 >> 4) << 0x24;
              do {
              } while ((*(uint *)(lVar13 + 0x108080002e088) & 0x40000) != 0);
              iVar17 = 0x10;
              do {
                Ram00020000000003c0 = 0;
                iVar17 = iVar17 + -1;
              } while (iVar17 != 0);
              uVar19 = Ram0002000000000498;
              uVar20 = (ulong)uVar19 & 0x3f;
              Ram00020000000004e8 = (int)uVar20;
              Ram0002000000000070 = (int)uVar20;
              do {
                uVar18 = Ram00020000000006f8;
                Ram00020000000003c0 = uVar18;
                uVar20 = (ulong)((int)uVar20 + -1);
              } while (uVar20 != 0);
              *(uint *)(lVar13 + 0x108080000c87c) = *(uint *)(lVar13 + 0x108080000c87c) | 0x10000000
              ;
              *(undefined4 *)(lVar13 + 0x108080000c884) = 0x200;
            }
LAB_00036088:
            Ram00020000000007d8 = 2;
            gp = 0x101800;
            tp = 0x2000000000000;
            DAT_00101100 = uVar23;
            DAT_00101104 = uVar22;
            DAT_00101108 = iVar26;
            return;
          }
        }
        else {
          Ram0002000000000060 = 0;
          lVar14 = Ram0002000000000038;
          if (lVar14 == 0) {
            Ram00020000000001f8 = 0xe;
          }
          else {
            Ram00020000000001f8 = 0xf;
          }
          lVar14 = FUN_000243e0();
          if (lVar14 != 0) goto LAB_00036088;
        }
      }
      else {
        Ram00020000000001b8 = uVar19;
        FUN_00003450((long)(int)uVar19);
        if (DAT_00101086 != '\0') {
          gp = 0x101800;
          tp = 0x2000000000000;
          DAT_00101086 = 0;
          DAT_00101100 = uVar23;
          DAT_00101104 = uVar22;
          DAT_00101108 = iVar26;
          return;
        }
      }
      Ram0002000000000060 = 0xf;
      iVar5 = Ram0002000000000408;
      iVar17 = Ram0002000000000128;
    } while (iVar17 != iVar5);
    uVar19 = *(uint *)(lVar13 + 0x108080000c8f8) >> 0x10 & 0x3f;
    param_4 = (ulong)(int)*(uint *)(lVar13 + 0x108080000c8f8);
  }
  if (param_3 == 0) {
    uVar24 = uVar23 >> 9 & 3;
    if (uVar24 - 1 < 2) {
      FUN_00034a80(uVar24 == 2,uVar19);
    }
    lVar13 = param_1 << 0x24;
    if ((uVar23 >> 0x10 & 0xff) == 1) {
      iVar26 = Ram00020000000006f8;
      if (iVar26 == -0x3ffdc100) {
        Ram0002000000000150 = 0;
        *(uint *)(lVar13 + 0x108080000c8f8) =
             uVar23 >> 2 & 0x600 | *(uint *)(lVar13 + 0x108080000c8f8) & 0xfffff9ff | 0x8100;
        Ram0002000000000060 = 3;
        Ram00020000000004a8 = 0;
        FUN_0002a770();
        return;
      }
    }
    *(uint *)(lVar13 + 0x108080000c8f8) =
         *(uint *)(lVar13 + 0x108080000c8f8) & 0xffff |
         (*(uint *)(lVar13 + 0x108080000c8f8) >> 0x10 & 0x7fc0 | 0xffff8009) << 0x10;
    uVar19 = 0x100;
    goto LAB_00036700;
  }
  if (param_3 != 2) {
    uVar20 = param_2 | 0x40;
    if ((param_4 & 0x40) == 0) {
      uVar23 = *(uint *)((param_1 << 0x24) + 0x108080000c8f8);
      uVar18 = Ram00020000000006f8;
      uVar20 = Ram00020000000006f8;
      lVar13 = Ram00020000000006f8;
      uVar21 = Ram00020000000006f8;
      lVar14 = Ram00020000000006f8;
      uVar27 = Ram00020000000006f8;
      lVar6 = Ram00020000000006f8;
      uVar7 = Ram00020000000006f8;
      lVar8 = Ram00020000000006f8;
      uVar9 = Ram00020000000006f8;
      lVar10 = Ram00020000000006f8;
      uVar2 = Ram00020000000006f8;
      uVar2 = Ram00020000000006f8;
      uVar11 = Ram00020000000006f8;
      lVar12 = Ram00020000000006f8;
      DAT_001010d0 = lVar12 << 0x20 | uVar11;
      if ((((param_2 & 8) != 0) && (DAT_001010d0 != 0)) && ((uVar23 & 2) == 0)) {
        Ram00020000000000b0 = 0;
        Ram0002000000000390 = DAT_001010d0 + 0x20;
        puVar4 = (undefined8 *)Ram0002000000000390;
        uVar2 = Ram00020000000000f8;
        *puVar4 = uVar2;
      }
      *(uint *)((param_1 << 0x24) + 0x108080000c8f8) = uVar23 | 0x8002;
      DAT_00101100 = (uint)(param_2 | 0x40);
      DAT_00101104 = uVar22;
      FUN_00034dc8((long)iVar26,uVar23 & 0x1f000000,lVar13 << 0x20 | uVar20,lVar14 << 0x20 | uVar21,
                   lVar6 << 0x20 | uVar27,lVar8 << 0x20 | uVar7,lVar10 << 0x20 | uVar9);
      return;
    }
LAB_00036ae8:
    FUN_00034d60(param_1,uVar20,param_4);
    return;
  }
  lVar13 = param_1 << 0x24;
  uVar24 = *(uint *)(lVar13 + 0x108080000c8f8);
  if ((uVar24 & 0x10) != 0) goto LAB_00036700;
  uVar19 = uVar23 >> 9 & 3;
  uVar20 = param_2;
  if ((param_4 & 0x44) != 0) goto LAB_00036ae8;
  if ((uVar19 - 1 < 2) && ((uVar24 & 0x80) == 0)) {
    FUN_00034a80(uVar19 == 2);
    *(uint *)(lVar13 + 0x108080000c8f8) = uVar24 | 0x8080;
  }
  uVar16 = Ram00020000000006f8;
  uVar19 = uVar16 & 0xffff;
  uVar24 = uVar16 >> 0x10;
  uVar25 = uVar23 >> 0x10 & 3;
  iVar26 = Ram00020000000006f8;
  Ram00020000000000a8 = 2;
  uVar22 = Ram00020000000006f8;
  Ram000100020000b804 = uVar22;
  uVar22 = Ram00020000000006f8;
  uVar18 = Ram00020000000006f8;
  if (uVar25 == 1) {
    uVar18 = 1;
    uVar22 = 1;
    uVar24 = 1;
    iVar26 = 1;
    uVar16 = uVar19;
    uVar25 = uVar19;
  }
  else if (uVar25 == 2) {
    uVar16 = (uVar16 >> 0x10) * uVar19;
    uVar18 = 1;
    iVar26 = 1;
    uVar25 = uVar16;
  }
  else {
    if (uVar25 == 0) {
      Ram00020000000000a8 = 0;
      *(uint *)(lVar13 + 0x108080000c8f8) =
           *(uint *)(lVar13 + 0x108080000c8f8) & 0xffff |
           (*(uint *)(lVar13 + 0x108080000c8f8) >> 0x10 & 0x7fc0 | 0xffff8002) << 0x10;
      uVar19 = 2;
      goto LAB_00036700;
    }
    uVar16 = uVar19 * (uVar16 >> 0x10);
    uVar25 = iVar26 * uVar16;
  }
  Ram000100020000b808 = uVar22;
  Ram000100020000b80c = uVar18;
  if ((0x400 < uVar25) || (0x400 < uVar16)) {
    Ram00020000000000a8 = 0;
    *(uint *)(lVar13 + 0x108080000c8f8) =
         *(uint *)(lVar13 + 0x108080000c8f8) & 0xffff |
         (*(uint *)(lVar13 + 0x108080000c8f8) >> 0x10 & 0x7fc0 | 0xffff8007) << 0x10;
    uVar19 = 0x40;
    goto LAB_00036700;
  }
  iVar17 = Ram00020000000006f8;
  uVar16 = Ram00020000000006f8;
  uVar20 = Ram00020000000006f8;
  lVar14 = Ram00020000000006f8;
  uVar20 = lVar14 << 0x20 | uVar20;
  if (uVar20 == 0) {
    Ram00020000000000a8 = 0;
    *(uint *)(lVar13 + 0x108080000c8f8) =
         *(uint *)(lVar13 + 0x108080000c8f8) & 0xffff |
         (*(uint *)(lVar13 + 0x108080000c8f8) >> 0x10 & 0x7fc0 | 0xffff8004) << 0x10;
    uVar19 = 8;
    goto LAB_00036700;
  }
  Ram0002000000000390 = uVar20 + 0x10;
  plVar3 = (long *)Ram0002000000000390;
  uVar15 = Ram00020000000002d0;
  Ram000100020000b81c = uVar19;
  Ram000100020000b820 = uVar24;
  Ram000100020000b824 = iVar26;
  if ((uVar15 & 0x40) != 0) {
    Ram00020000000000a8 = 0;
    Ram00020000000000a8 = 2;
    Ram000100020000b838 = *(uint *)(lVar13 + 0x108080000c84c) >> 4;
  }
  Ram000100020000b830 = (int)(uVar20 + *plVar3 >> 8);
  Ram000100020000b834 = (uint)(uVar20 + *plVar3 >> 0x28) | 0x100;
  uVar19 = (uint)((uVar16 & 0x1ff) != 0) + (uVar16 >> 9);
  Ram000100020000b8a0 = *(undefined4 *)((long)plVar3 + 0x1c);
  uVar20 = plVar3[4];
  uVar15 = (uint)uVar20 & (uint)DAT_00101078;
  uVar24 = Ram00020000000002d8;
  uVar16 = 1;
  if ((uVar24 & 4) == 0) {
    uVar16 = uVar15 >> 0x14 & 1;
  }
  uVar24 = uVar15 & 0xffefffff | uVar16 << 0x14;
  Ram000100020000b848 = uVar24;
  Ram000100020000b84c = uVar19 * 0x8000 | (uVar23 & 1) << 6 | (uint)(uVar20 >> 0x20) & 0x1fbf;
  uVar21 = plVar3[5];
  uVar27 = uVar21 >> 10 & 1;
  if (0x80 < uVar19) {
    Ram00020000000000a8 = 0;
    *(uint *)(lVar13 + 0x108080000c8f8) =
         *(uint *)(lVar13 + 0x108080000c8f8) & 0xffff |
         (*(uint *)(lVar13 + 0x108080000c8f8) >> 0x10 & 0x7fc0 | 0xffff8003) << 0x10;
    uVar19 = 4;
    goto LAB_00036700;
  }
  iVar26 = (uVar15 & 0x3f) + 1;
  if (uVar27 == 0) {
    uVar23 = iVar26 * 4;
  }
  else {
    uVar23 = iVar26 * 8;
  }
  uVar19 = (uint)uVar21;
  if (((ulong)(long)(int)uVar24 >> 0x1d & 1) == 0) {
    if (uVar25 < 0x101) goto LAB_00036a54;
    if (uVar27 == 0) {
      if (uVar25 < 0x181) {
LAB_00036d24:
        bVar1 = 0xfc < uVar23;
        goto LAB_00036bfc;
      }
      if (uVar25 < 0x201) goto LAB_00036cf4;
LAB_00036d10:
      if (uVar25 < 0x281) {
        bVar1 = 0x90 < uVar23;
      }
      else if (uVar25 < 0x301) {
        bVar1 = 0x78 < uVar23;
      }
      else if ((uVar27 == 0) && (uVar25 < 0x381)) {
        bVar1 = 0x6c < uVar23;
      }
      else {
        bVar1 = 0x60 < uVar23;
      }
      goto LAB_00036bfc;
    }
    if (0x140 < uVar25) {
      if (0x180 < uVar25) {
        if (uVar25 < 0x1c1) {
LAB_00036d60:
          bVar1 = 0xd8 < uVar23;
          goto LAB_00036bfc;
        }
        if (uVar25 < 0x201) goto LAB_00036cf4;
        if (uVar25 < 0x241) {
          bVar1 = 0xa8 < uVar23;
          goto LAB_00036bfc;
        }
        goto LAB_00036d10;
      }
      if (uVar23 < 0xf1) goto LAB_00036430;
      goto LAB_00036c00;
    }
LAB_00036430:
    if ((uVar20 & 0x100000000) != 0) goto LAB_00036a60;
  }
  else {
    if (0x200 < uVar25) {
      if (uVar27 == 0) {
        if (uVar25 < 0x301) goto LAB_00036d24;
      }
      else {
        if (uVar25 < 0x281) goto LAB_00036430;
        if (uVar25 < 0x301) {
          bVar1 = 0xf0 < uVar23;
          goto LAB_00036bfc;
        }
        if (uVar25 < 0x381) goto LAB_00036d60;
      }
LAB_00036cf4:
      bVar1 = 0xc0 < uVar23;
LAB_00036bfc:
      if (bVar1) {
LAB_00036c00:
        Ram00020000000000a8 = 0;
        *(uint *)(lVar13 + 0x108080000c8f8) =
             *(uint *)(lVar13 + 0x108080000c8f8) & 0xffff |
             (*(uint *)(lVar13 + 0x108080000c8f8) >> 0x10 & 0x7fc0 | 0xffff8008) << 0x10;
        uVar19 = 0x80;
        goto LAB_00036700;
      }
    }
LAB_00036a54:
    if ((uVar20 & 0x100000000) != 0) {
      uVar23 = DAT_001010c0;
      if (uVar27 != 0) {
LAB_00036a60:
        uVar23 = DAT_001010c0 << 1;
      }
      if (uVar23 < (iVar17 + 3U & 0xfffffffc) || (param_2 & 0x80) != 0) {
        Ram00020000000000a8 = 0;
        uVar23 = *(uint *)(lVar13 + 0x108080000c8f8);
        uVar19 = uVar23 >> 0x10 & 0x7fc0;
        if (uVar27 == 0) {
          *(uint *)(lVar13 + 0x108080000c8f8) = uVar23 & 0xffff | (uVar19 | 0xffff8001) << 0x10;
          uVar19 = 1;
        }
        else {
          *(uint *)(lVar13 + 0x108080000c8f8) = uVar23 & 0xffff | (uVar19 | 0xffff800b) << 0x10;
          uVar19 = 0x400;
        }
        goto LAB_00036700;
      }
    }
  }
  uVar23 = uVar19 & 1;
  if ((uVar21 & 1) != 0) {
    Ram000100020000b900 = (int)DAT_001010e8;
    Ram000100020000b904 = (int)((ulong)DAT_001010e8 >> 0x20);
    Ram000100020000b908 = (int)DAT_001010f0;
    Ram000100020000b90c = (uVar19 & 0x400) << 0xb ^ 0x600000 | (uint)((ulong)DAT_001010f0 >> 0x20);
    uVar23 = 4;
  }
  if ((uVar19 >> 1 & 1) != 0) {
    Ram00020000000000a8 = 0;
    lVar14 = *(long *)(lVar13 + 0x108080000c844) * 0x100 +
             (ulong)(uint)(*(int *)(lVar13 + 0x108080000c84c) << 2);
    Ram00020000000000a8 = 2;
    *(int *)(((ulong)((long)(int)(uVar23 + 0x2e40) << 0x20) >> 0x1e) + 0x1000200000000) =
         (int)lVar14;
    *(int *)(((ulong)((long)(int)(uVar23 + 0x2e41) << 0x20) >> 0x1e) + 0x1000200000000) =
         (int)((ulong)lVar14 >> 0x20);
    uVar23 = uVar23 + 2;
  }
  if ((uVar19 >> 2 & 1) != 0) {
    Ram00020000000000a8 = 0;
    uVar22 = *(undefined4 *)(lVar13 + 0x108080000c854);
    Ram00020000000000a8 = 2;
    *(uint *)(((ulong)((long)(int)(uVar23 + 0x2e40) << 0x20) >> 0x1e) + 0x1000200000000) =
         *(int *)(lVar13 + 0x108080000c850) - ((uint)((ulong)DAT_001010b8 >> 0x18) >> 8);
    *(undefined4 *)(((ulong)((long)(int)(uVar23 + 0x2e41) << 0x20) >> 0x1e) + 0x1000200000000) =
         uVar22;
    uVar23 = uVar23 + 2;
  }
  uVar24 = uVar23;
  if ((uVar19 >> 3 & 1) != 0) {
    uVar22 = Ram00020000000006f8;
    *(undefined4 *)(((ulong)((long)(int)(uVar23 + 0x2e40) << 0x20) >> 0x1e) + 0x1000200000000) =
         uVar22;
    uVar24 = uVar23 + 2;
    uVar22 = Ram00020000000006f8;
    *(undefined4 *)(((ulong)((long)(int)(uVar23 + 0x2e41) << 0x20) >> 0x1e) + 0x1000200000000) =
         uVar22;
  }
  uVar2 = DAT_001010f8;
  if ((uVar19 >> 4 & 1) != 0) {
    *(int *)(((ulong)((long)(int)(uVar24 + 0x2e40) << 0x20) >> 0x1e) + 0x1000200000000) =
         (int)DAT_001010f8;
    *(int *)(((ulong)((long)(int)(uVar24 + 0x2e41) << 0x20) >> 0x1e) + 0x1000200000000) =
         (int)((ulong)uVar2 >> 0x20);
    uVar24 = uVar24 + 2;
  }
  uVar2 = DAT_001010e0;
  if ((uVar19 >> 5 & 1) != 0) {
    *(int *)(((ulong)((long)(int)(uVar24 + 0x2e40) << 0x20) >> 0x1e) + 0x1000200000000) =
         (int)DAT_001010e0;
    *(int *)(((ulong)((long)(int)(uVar24 + 0x2e41) << 0x20) >> 0x1e) + 0x1000200000000) =
         (int)((ulong)uVar2 >> 0x20);
    uVar24 = uVar24 + 2;
  }
  if ((uVar19 >> 6 & 1) != 0) {
    *(uint *)(((ulong)((long)(int)(uVar24 + 0x2e40) << 0x20) >> 0x1e) + 0x1000200000000) =
         DAT_001010c0;
  }
  Ram000100020000b800 = (uint)(uVar27 << 0xf) | (uint)(uVar21 >> 0xd) & 8 | 0x1065;
  Ram00020000000000a8 = 0;
  uVar19 = 0;
LAB_00036700:
  FUN_00034b48(param_1,param_2,uVar19);
  return;
}


/* ---- FUN_00036dc8 @ 00036dc8 size=216 ---- */

void FUN_00036dc8(long *param_1,ulong param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000070;
  if (((ulong)(long)*(int *)(((long)(int)(uVar1 >> 4) << 0x24) + 0x108080000c8a4) >> 0x1d & 1) != 0)
  {
    if (param_2 == 0) {
      param_3 = 0;
      param_2 = 0x6f;
    }
    Ram00020000000000d8 = (int)param_2;
    Ram00020000000000e8 = param_1;
    Ram00020000000000f8 = param_3;
    Ram0002000000000100 = param_4;
    Ram0002000000000380 = 0x600000001;
    Ram0002000000000108 = 1;
    do {
      lVar2 = Ram0002000000000078;
    } while (lVar2 != 0);
    return;
  }
  param_2 = param_2 & 0x7f;
  if (param_2 == 0x27) {
    *param_1 = param_3;
    return;
  }
  if (param_2 < 0x28) {
    if (param_2 == 7) {
      *(int *)param_1 = (int)param_3;
      return;
    }
    if (param_2 == 0xf) {
      *(int *)param_1 = (int)param_3 + (int)*param_1;
      return;
    }
  }
  else if (param_2 == 0x2f) {
    *param_1 = param_3 + *param_1;
    return;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_00036ea0 @ 00036ea0 size=196 ---- */

long FUN_00036ea0(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0002000000000120 = (uint)param_4 >> 7 & 3;
  lVar5 = *(long *)(param_2 + 0x10);
  iVar1 = *(int *)(param_2 + 0x18);
  if (param_1 < 0x3000) {
    FUN_00036dc8(param_3,param_4,param_5,param_6);
    uVar2 = Ram0002000000000070;
    lVar6 = (long)(int)(uVar2 >> 4) << 0x24;
    *(uint *)(lVar6 + 0x108080000c8f8) = *(uint *)(lVar6 + 0x108080000c8f8) & 0x8fff | 0xb000;
  }
  if (lVar5 != 0) {
    Ram0002000000000390 = lVar5;
    piVar4 = (int *)Ram0002000000000390;
    Ram0002000000000120 = 0;
    *piVar4 = iVar1;
  }
  do {
    iVar3 = Ram0002000000000090;
  } while (iVar3 != 0);
  Ram0002000000000120 = 0;
  return (long)iVar1;
}


/* ---- FUN_00036f68 @ 00036f68 size=1616 ---- */

/* WARNING: Removing unreachable block (ram,0x00037558) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00036f68(uint param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  uint uVar20;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar8 = Ram0002000000000070;
  uVar5 = Ram00020000000006f8;
  Ram0002000000000488 = (uVar5 & 4) << 3 | 0x2000;
  iVar19 = Ram00020000000006f8;
  iVar13 = Ram00020000000006f8;
  uVar18 = (ulong)iVar13;
  uVar4 = Ram00020000000006f8;
  uVar12 = Ram00020000000006f8;
  lVar16 = Ram00020000000006f8;
  uVar12 = lVar16 << 0x20 | uVar12;
  uVar4 = Ram00020000000006f8;
  lVar16 = (long)(int)(uVar8 >> 4) << 0x24;
  uVar8 = *(uint *)(lVar16 + 0x108080000c8f8);
  uVar20 = (uVar5 & 2) << 4;
  uVar11 = uVar18;
  if ((uVar5 & 4) != 0) {
    uVar11 = (ulong)(int)((uint)(((ulong)(long)(int)uVar8 >> 0x10 & 0x3f) != 0) << 9);
  }
  uVar2 = *(uint *)(lVar16 + 0x108080000c868) >> 0x18;
  uVar7 = uVar2 & 3;
  uVar10 = (long)(int)uVar8 & 0x7000;
  uVar15 = 0;
  bVar3 = false;
  uVar9 = 0;
  uVar17 = 0;
  if (uVar11 != 0) {
    if (uVar10 != 0) goto LAB_000370e8;
    uVar4 = Ram0002000000000020;
    Ram0002000000000040 = 1;
    uVar8 = Ram0002000000000070;
    _DAT_1000100003898 = 4 << ((long)(int)(uVar8 >> 6) & 3U | (long)(int)(uVar8 >> 3) & 4U);
    do {
    } while ((_DAT_1000100003898 & _DAT_100010000389c) == 0);
    Ram0002000000000040 = uVar4;
    Ram00020000000002a8 = 0;
    _DAT_100010000389c = _DAT_1000100003898;
    *(uint *)(lVar16 + 0x108080000c8f8) = *(uint *)(lVar16 + 0x108080000c8f8) & 0x8fff | 0x9000;
    goto LAB_000370e8;
  }
  if (uVar10 == 0) {
    Ram0002000000000040 = param_1 >> 4 & 1;
    Ram00020000000000b0 = 0;
    Ram0002000000000120 = uVar7;
    *(undefined4 *)
     (((ulong)((2 << ((long)(int)*(uint *)(lVar16 + 0x108080000c868) & 0x1fU)) - 1U & iVar19 << 4) +
      *(long *)(lVar16 + 0x108080000c844) * 0x40) * 4) = 1;
    *(uint *)(lVar16 + 0x108080000c8f8) = *(uint *)(lVar16 + 0x108080000c8f8) & 0x8fff | 0x9000;
    uVar15 = uVar5 & 0x200;
    if (uVar15 != 0) {
      uVar4 = Ram0002000000000020;
      Ram0002000000000040 = 1;
      uVar17 = Ram0002000000000070;
      _DAT_1000100003898 = 4 << ((long)(int)(uVar17 >> 6) & 3U | (long)(int)(uVar17 >> 3) & 4U);
      do {
      } while ((_DAT_1000100003898 & _DAT_100010000389c) == 0);
      Ram0002000000000040 = uVar4;
      Ram00020000000002a8 = 0;
      _DAT_100010000389c = _DAT_1000100003898;
    }
    if (uVar12 == 0) {
      uVar12 = (ulong)*(int *)(lVar16 + 0x108080000c854);
      uVar11 = (ulong)*(int *)(lVar16 + 0x108080000c850);
      goto LAB_0003716c;
    }
LAB_0003732c:
    Ram0002000000000390 = uVar12;
    lVar14 = Ram0002000000000390;
    if (uVar10 < 0x4000) {
      if (((uVar5 & 8) != 0) && (uVar10 < 0x2000)) {
        Ram0002000000000120 = uVar7;
        uVar6 = Ram00020000000000f8;
        *(undefined8 *)(lVar14 + 0x28) = uVar6;
        *(uint *)(lVar16 + 0x108080000c8f8) = *(uint *)(lVar16 + 0x108080000c8f8) & 0x8fff | 0xa000;
      }
      uVar9 = FUN_00036ea0(lVar14 + 8,uVar20,uVar20 | (uVar2 & 3) << 7 | 0xf,0xffffffffffffffff,
                           uVar15);
      *(uint *)(lVar16 + 0x108080000c8f8) = *(uint *)(lVar16 + 0x108080000c8f8) & 0x8fff | 0xc000;
      uVar12 = (ulong)*(int *)(lVar16 + 0x108080000c854);
      uVar11 = (ulong)*(int *)(lVar16 + 0x108080000c850);
      if (uVar9 != 0) goto LAB_00037218;
      goto LAB_0003716c;
    }
    iVar13 = *(int *)(lVar16 + 0x108080000c854);
    iVar1 = *(int *)(lVar16 + 0x108080000c850);
  }
  else {
    if (uVar12 != 0) goto LAB_0003732c;
    iVar13 = *(int *)(lVar16 + 0x108080000c854);
    iVar1 = *(int *)(lVar16 + 0x108080000c850);
  }
  uVar11 = (ulong)iVar1;
  uVar12 = (ulong)iVar13;
  if (0x4fff < uVar10) goto LAB_00037194;
LAB_0003716c:
  if (uVar18 == 0) goto LAB_00037170;
  do {
    bVar3 = true;
    while( true ) {
      *(uint *)(lVar16 + 0x108080000c8f8) = *(uint *)(lVar16 + 0x108080000c8f8) & 0x8fff | 0x8000;
      uVar5 = Ram00020000000002d0;
      uVar17 = uVar5 & 0x20;
      if ((uVar5 & 0x20) == 0) {
        uVar8 = Ram00020000000002d0;
        if ((uVar8 & 8) == 0) {
          Ram00020000000001e8 = 1;
        }
        FUN_00025900();
        return;
      }
      *(uint *)(lVar16 + 0x108080000c8f8) = uVar8 & 0xffff7fff | 0xa1000;
      uVar10 = 0x1000;
      uVar18 = 0x200;
LAB_000370e8:
      Ram0002000000000120 = 0;
      lVar14 = *(long *)(*(long *)(lVar16 + 0x108080000c850) + 0x40U & 0xffffffffffff);
      if (lVar14 != 0) {
        Ram0002000000000390 = lVar14;
        lVar14 = Ram0002000000000390;
        if ((uVar10 < 0x4000) &&
           (uVar9 = FUN_00036ea0(lVar14 + 8,uVar20,uVar20 | uVar7 << 7 | 0x607,uVar18 & 0xffffffff,0
                                ), (uVar18 & 0x601) == 0)) {
          iVar13 = 0xe;
          uVar12 = uVar18;
          do {
            uVar12 = (ulong)(int)((uint)uVar12 >> 1);
            iVar13 = iVar13 + 1;
          } while (uVar12 != 0);
          _DAT_100010000c2dc = *(uint *)(lVar16 + 0x108080000c860) >> 3 & 0x3ff | iVar13 * 0x400;
          uVar4 = Ram0002000000000020;
          Ram0002000000000040 = 1;
          do {
            iVar13 = Ram0002000000000090;
          } while (iVar13 != 0);
          do {
          } while (_DAT_100010000c2d4 != 0);
          uVar8 = Ram0002000000000070;
          _DAT_100010000c0dc = (undefined4)(((long)(int)(uVar8 >> 8) & 7U) << 0x1c);
          _DAT_100010000c0e8 = 0x10000;
          _DAT_100010000c2d4 = 0x1000000;
          Ram0002000000000040 = uVar4;
        }
      }
      if (uVar17 == 0) {
        uVar8 = *(uint *)(lVar16 + 0x108080000c8f8) | 0x8020;
        *(uint *)(lVar16 + 0x108080000c8f8) = uVar8;
      }
      else {
        uVar8 = *(uint *)(lVar16 + 0x108080000c8f8) & 0x7c0ffff | 0x80000000;
        *(uint *)(lVar16 + 0x108080000c8f8) = uVar8;
        Ram0002000000000488 = 0x2000;
      }
      uVar12 = 0;
      uVar11 = 0;
      if (uVar9 == 0) goto LAB_0003716c;
LAB_00037218:
      uVar4 = Ram0002000000000020;
      Ram0002000000000040 = 1;
      do {
        iVar13 = Ram0002000000000090;
      } while (iVar13 != 0);
      do {
      } while (_DAT_100010000c2d4 != 0);
      uVar5 = Ram0002000000000070;
      _DAT_100010000c0dc = (undefined4)(((long)(int)(uVar5 >> 8) & 7U) << 0x1c);
      _DAT_100010000c0e8 = 0x10000;
      _DAT_100010000c2d4 = 0x4000000;
      Ram0002000000000040 = uVar4;
      _DAT_100010000c2dc = uVar9;
      if (uVar18 != 0) break;
LAB_00037170:
      *(uint *)(lVar16 + 0x108080000c8f8) = *(uint *)(lVar16 + 0x108080000c8f8) & 0x8fff | 0xd000;
LAB_00037194:
      if (!bVar3) {
        iVar19 = iVar19 + 1;
        Ram0002000000000120 = 0;
        if (iVar19 == 0) {
          FUN_00036dc8(uVar7 << 7 | 0x62f,1);
        }
        else {
          *(int *)((uVar12 & 0xffff) << 0x20 | uVar11 & 0xffffffff) = iVar19;
        }
      }
    }
  } while( true );
}


/* ---- sub_375b8 @ 000375b8 size=84 ---- */

ulong sub_375b8(long param_1)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0002000000000120 = 0;
  Ram0002000000000488 = 0x1000;
  return *(long *)((param_1 << 0x24) + 0x108080000c850) + 8U & 0xffffffffffff;
}


/* ---- FUN_00037610 @ 00037610 size=524 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00037610(long param_1,undefined4 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;
  ulong *puVar4;
  ulong uVar5;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0002000000000488 = 0x100;
  Ram0002000000000278 = 1;
  param_1 = param_1 << 0x24;
  *(undefined4 *)(param_1 + 0x108080000c8ac) = 0x3000;
  Ram00020000000000d8 = *(uint *)(param_1 + 0x108080000c8ac) >> 0x11 & 0x180;
  uVar3 = 0x4000;
  if (((ulong)(long)*(int *)(param_1 + 0x108080000c8a4) >> 0xe & 1) != 0) {
    uVar3 = 0x4040;
  }
  Ram0002000000000488 = uVar3;
  DAT_001010f8 = *(undefined8 *)(*(long *)(param_1 + 0x108080000c824) + 0x180);
  *(undefined4 *)(param_1 + 0x108080000c8ac) = 0x2000;
  puVar4 = (ulong *)(*(long *)(param_1 + 0x108080000c850) + 8U & 0xffffffffffff);
  Ram0002000000000120 = 0;
  Ram0002000000000488 = 0x1000;
  uVar5 = *puVar4;
  Ram00020000000000a8 = 2;
  Ram000100020000b860 = (int)(uVar5 >> 0x20);
  if (((long)uVar5 >> 0x20 & 0xfffU) == 0) {
    uVar5 = uVar5 | 0x80000000;
  }
  DAT_001010e8 = puVar4[1];
  Ram000100020000b840 = (int)(DAT_001010e8 >> 8);
  Ram000100020000b844 = (uint)(DAT_001010e8 >> 0x28) & 0xff;
  Ram000100020000b800 = param_2;
  DAT_001010f0 = puVar4[2];
  DAT_001010e0 = puVar4[3];
  uVar2 = puVar4[5];
  Ram00020000000000a8 = 0;
  uVar1 = uVar2 >> 0x22 & 4;
  DAT_001010b8 = uVar2 & 0xffffffff |
                 ((long)(int)(((uint)(uVar2 >> 0x20) & 0xb | (uint)uVar1) << 0x18) | 0x1000000U |
                 uVar5) << 0x20;
  DAT_001010c0 = (undefined4)uVar2;
  if ((((ulong)(long)(int)*(uint *)(param_1 + 0x108080000c8f8) >> 0xb & 1) != 0) && (uVar1 == 0)) {
    *(uint *)(param_1 + 0x108080000c8f8) = *(uint *)(param_1 + 0x108080000c8f8) & 0xf7ff | 0x8000;
  }
  uVar3 = Ram0002000000000020;
  Ram0002000000000040 = 1;
  Ram0002000000000040 = uVar3;
  if (_DAT_100010002a79c < 0) {
    Ram0002000000000490 = 0x400;
    Ram0002000000000278 = 0;
    return;
  }
  Ram0002000000000490 = 0x404;
  Ram0002000000000278 = 0;
  return;
}


/* ---- pm4_OP_FF_handler @ 00037820 size=13120 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pm4_OP_FF_handler(uint param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong *puVar5;
  byte bVar6;
  long lVar7;
  undefined4 uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined4 uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uStack_80;
  
  bVar6 = DAT_001010b8._7_1_;
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar20 = Ram0002000000000070;
  uVar20 = uVar20 >> 4;
  lVar10 = Ram0002000000000038;
  lVar7 = (long)(int)uVar20 << 0x24;
  uVar21 = *(uint *)(lVar7 + 0x108080000c8f8);
  if (lVar10 == 2) {
    iVar17 = Ram00020000000003a8;
    if (iVar17 != 0) {
      iVar18 = 0;
      do {
        uVar8 = Ram00020000000006f8;
        iVar18 = iVar18 + 1;
      } while (iVar17 != iVar18);
    }
    if ((uVar21 & 0x20) != 0) {
      Ram0002000000000120 = 0;
      lVar10 = *(long *)(*(long *)(lVar7 + 0x108080000c850) + 0x40U & 0xffffffffffff);
      if (lVar10 != 0) {
        Ram0002000000000390 = lVar10 + 8;
        plVar4 = (long *)Ram0002000000000390;
        Ram0002000000000120 = 0;
        if (*plVar4 == 0) {
          *(uint *)(lVar7 + 0x108080000c8f8) = uVar21 & 0xffdf | 0x8000;
          *(undefined4 *)(lVar7 + 0x108080000c884) = 0x200;
          *(uint *)(lVar7 + 0x108080000c87c) =
               (uint)((ulong)((long)(int)*(uint *)(lVar7 + 0x108080000c87c) << 0x28) >> 0x28) |
               *(uint *)(lVar7 + 0x108080000c87c) & 0x3f000000;
          gp = 0x101800;
          tp = 0x2000000000000;
          return;
        }
      }
    }
    *(uint *)(lVar7 + 0x108080000c87c) = *(uint *)(lVar7 + 0x108080000c87c) | 0xff;
    *(undefined4 *)(lVar7 + 0x108080000c884) = 0x200;
    gp = 0x101800;
    tp = 0x2000000000000;
    return;
  }
  Ram0002000000000148 = 1;
  if ((uVar21 & 0x100) != 0) {
    Ram0002000000000060 = param_1;
    if (param_1 != 2) {
      iVar17 = 0;
      do {
        uVar8 = Ram00020000000006f8;
        iVar17 = iVar17 + 1;
      } while (param_1 - 2 != iVar17);
    }
    uVar22 = Ram00020000000006f8;
    lVar10 = Ram00020000000006f8;
    DAT_001010d0 = lVar10 << 0x20 | uVar22;
    if ((uVar21 & 0x40) == 0) {
      DAT_001010d8 = DAT_001010f8;
      DAT_001010f8 = DAT_001010f8 + 1;
    }
    else {
      DAT_001010d8 = DAT_001010f8 + -1;
    }
    uVar11 = DAT_001010b8._7_1_ & 0x4e;
    if ((uVar21 & 0x600) != 0x400) goto LAB_00037b7c;
LAB_00037b74:
    uVar11 = uVar11 | 0x200000;
    goto LAB_00037b7c;
  }
  uVar12 = param_1 & 0xff;
  if ((uVar12 == 1) || ((uVar21 & 0x800) != 0)) {
    iVar18 = Ram00020000000003a8;
    iVar17 = 0;
    if (iVar18 != 0) {
      do {
        uVar8 = Ram00020000000006f8;
        iVar17 = iVar17 + 1;
      } while (iVar18 != iVar17);
    }
LAB_00037a9c:
    uVar21 = Ram00020000000000f0;
    uVar21 = uVar21 & 0xff;
LAB_00037ab4:
    uVar22 = lVar7 + 0x108080000d000;
    *(uint *)(lVar7 + 0x108080000c87c) = uVar21 | 0x80000000;
LAB_00037ab8:
    FUN_00024960((long)(int)uVar20,uVar22);
    return;
  }
  if ((uVar21 & 0x20) != 0) {
    iVar18 = Ram00020000000003a8;
    iVar17 = 0;
    if (iVar18 != 0) {
      do {
        uVar8 = Ram00020000000006f8;
        iVar17 = iVar17 + 1;
      } while (iVar18 != iVar17);
    }
    uVar21 = *(uint *)(lVar7 + 0x108080000c868) & 0x800000 | 0x81001ff |
             *(uint *)(lVar7 + 0x108080000c868) & 0x3000000;
    *(uint *)(lVar7 + 0x108080000c8f8) = *(uint *)(lVar7 + 0x108080000c8f8) & 0xffffffbf | 0x8000;
    goto LAB_00037ab4;
  }
  uVar11 = (uint)DAT_001010b8._7_1_;
  uVar19 = param_1 & 0xffffff00 | uVar11;
  uVar9 = uVar21 >> 0x10 & 0x3f;
  if (uVar9 != 0) {
    uVar20 = 1 << ((long)(int)(uVar9 - 1) & 0x1fU);
    *(uint *)(lVar7 + 0x108080000c8f8) =
         uVar21 & 0xffff | (uVar9 | 0xffff8000 | uVar21 >> 0x10 & 0x7fc0) << 0x10;
    iVar18 = Ram00020000000003a8;
    iVar17 = 0;
    if (iVar18 != 2) {
      do {
        uVar8 = Ram00020000000006f8;
        iVar17 = iVar17 + 1;
      } while (iVar18 + -2 != iVar17);
    }
    uVar22 = Ram00020000000006f8;
    lVar10 = Ram00020000000006f8;
    uVar21 = *(uint *)(lVar7 + 0x108080000c8f8);
    uVar22 = lVar10 << 0x20 | uVar22;
    DAT_001010d0 = uVar22;
    if ((uVar22 == 0) || ((bVar6 & 8) == 0)) {
      *(uint *)(lVar7 + 0x108080000c8f8) = uVar21 & 0xffffff7f | 0x8000;
      if (uVar20 == 0) goto LAB_00037ecc;
    }
    else {
      if (uVar20 == 0) {
        *(uint *)(lVar7 + 0x108080000c8f8) = uVar21 | 0x8010;
        Ram0002000000000390 = uVar22 + 0x20;
        puVar3 = (undefined8 *)Ram0002000000000390;
        uVar2 = Ram00020000000000f8;
        *puVar3 = uVar2;
        *(uint *)(lVar7 + 0x108080000c8f8) = uVar21 & 0xffffff6f | 0x8000;
        goto LAB_00037ecc;
      }
      *(uint *)(lVar7 + 0x108080000c8f8) = uVar21 & 0xffffff7f | 0x8000;
    }
    DAT_001010d8 = DAT_001010f8;
    *(uint *)(lVar7 + 0x108080000c8f8) = *(uint *)(lVar7 + 0x108080000c8f8) & 0xffffffbf | 0x8000;
    uVar21 = uVar11 & 0x4e | 0x200000;
    DAT_001010c8 = uVar20;
    if ((uVar20 & 0x601) != 0) {
      *(uint *)(lVar7 + 0x108080000c87c) =
           *(uint *)(lVar7 + 0x108080000c868) & 0x800000 | 0x81001ff |
           *(uint *)(lVar7 + 0x108080000c868) & 0x3000000;
    }
    goto LAB_00038080;
  }
  if ((5 < uVar12) || (uVar12 == 4)) {
    *(uint *)(lVar7 + 0x108080000c8f8) =
         *(uint *)(lVar7 + 0x108080000c8f8) & 0xffff |
         (*(uint *)(lVar7 + 0x108080000c8f8) >> 0x10 & 0x7fc0 | 0xffff8006) << 0x10;
    DAT_001010d8 = DAT_001010f8;
    iVar18 = Ram00020000000003a8;
    iVar17 = 0;
    if (iVar18 != 2) {
      do {
        uVar8 = Ram00020000000006f8;
        iVar17 = iVar17 + 1;
      } while (iVar18 + -2 != iVar17);
    }
    uVar22 = Ram00020000000006f8;
    lVar10 = Ram00020000000006f8;
    *(uint *)(lVar7 + 0x108080000c8f8) = *(uint *)(lVar7 + 0x108080000c8f8) & 0xffffff7f | 0x8000;
    *(uint *)(lVar7 + 0x108080000c8f8) = *(uint *)(lVar7 + 0x108080000c8f8) & 0xffffffbf | 0x8000;
    DAT_001010d0 = lVar10 << 0x20 | uVar22;
    DAT_001010c8 = 0x20;
    FUN_00025a78(0xffffffffc0050004,uVar11 & 0x4e | 0x200000,0xc,0,0,0,0,0);
    gp = 0x101800;
    tp = 0x2000000000000;
    return;
  }
  if ((uVar21 & 8) != 0 || (param_1 & 0x100) != 0) {
    iVar18 = Ram0002000000000408;
    iVar17 = Ram0002000000000128;
    uVar9 = uVar19;
    uVar13 = uVar12;
    uVar15 = uVar20;
    if (iVar18 == iVar17) {
      uVar9 = 0;
    }
    else {
      do {
        DAT_00101108 = uVar15;
        DAT_00101104 = uVar13;
        DAT_00101100 = uVar9;
        uVar21 = Ram0002000000000068;
        if (((ulong)(long)*(int *)(lVar7 + 0x108080002e088) >> 8 &
             ~(long)(1 << ((ulong)uVar21 & 0x1f)) & 0xff) != 0) {
          uVar22 = 0xc;
          *(undefined4 *)(lVar7 + 0x108080000c888) = 0xc;
          iVar18 = Ram00020000000003a8;
          iVar17 = 0;
          if (iVar18 != 0) {
            do {
              uVar21 = Ram00020000000006f8;
              uVar22 = (ulong)uVar21;
              iVar17 = iVar17 + 1;
            } while (iVar18 != iVar17);
          }
          goto LAB_00037ab8;
        }
        uVar21 = Ram0002000000000108;
        if (uVar21 >> 0x10 == 0) {
          iVar17 = Ram0002000000000140;
          if (iVar17 == 0) {
            iVar17 = Ram0002000000000180;
            if (iVar17 != 0) {
              Ram0002000000000060 = 0;
              lVar10 = Ram0002000000000038;
              if (lVar10 == 0) {
                Ram0002000000000200 = 0xe;
              }
              else {
                Ram0002000000000200 = 0xf;
              }
              Ram0002000000000220 = 4;
              Ram0002000000000080 = 2;
              Ram00020000000003c0 = 0;
              uVar21 = Ram0002000000000190;
              Ram0002000000000220 = 0;
              uVar9 = uVar21 >> 8 & 7;
              Ram00020000000004d0 = uVar9;
              uVar11 = Ram00020000000004a0;
              if ((uVar11 & 4) == 0) {
                *(undefined4 *)(((long)(int)(uVar21 >> 4) << 0x24) + 0x108080000c87c) = 0x60000000;
              }
              else {
                Ram00020000000004d8 = uVar9;
                lVar10 = (long)(int)(uVar21 >> 4) << 0x24;
                do {
                } while ((*(uint *)(lVar10 + 0x108080002e088) & 0x40000) != 0);
                iVar17 = 0x10;
                do {
                  Ram00020000000003c0 = 0;
                  iVar17 = iVar17 + -1;
                } while (iVar17 != 0);
                uVar21 = Ram0002000000000498;
                uVar22 = (ulong)uVar21 & 0x3f;
                Ram00020000000004e8 = (int)uVar22;
                Ram0002000000000070 = (int)uVar22;
                do {
                  uVar8 = Ram00020000000006f8;
                  Ram00020000000003c0 = uVar8;
                  uVar22 = (ulong)((int)uVar22 + -1);
                } while (uVar22 != 0);
                *(uint *)(lVar10 + 0x108080000c87c) =
                     *(uint *)(lVar10 + 0x108080000c87c) | 0x10000000;
                *(undefined4 *)(lVar10 + 0x108080000c884) = 0x200;
              }
LAB_00037f98:
              Ram00020000000007d8 = 2;
              gp = 0x101800;
              tp = 0x2000000000000;
              DAT_00101100 = uVar19;
              DAT_00101104 = uVar12;
              DAT_00101108 = uVar20;
              return;
            }
          }
          else {
            Ram0002000000000060 = 0;
            lVar10 = Ram0002000000000038;
            if (lVar10 == 0) {
              Ram00020000000001f8 = 0xe;
            }
            else {
              Ram00020000000001f8 = 0xf;
            }
            lVar10 = FUN_000243e0();
            if (lVar10 != 0) goto LAB_00037f98;
          }
        }
        else {
          Ram00020000000001b8 = uVar21;
          FUN_00003450((long)(int)uVar21);
          if (DAT_00101086 != '\0') {
            gp = 0x101800;
            tp = 0x2000000000000;
            DAT_00101086 = 0;
            DAT_00101100 = uVar19;
            DAT_00101104 = uVar12;
            DAT_00101108 = uVar20;
            return;
          }
        }
        Ram0002000000000060 = 0xf;
        iVar18 = Ram0002000000000408;
        iVar17 = Ram0002000000000128;
        uVar9 = DAT_00101100;
        uVar13 = DAT_00101104;
        uVar15 = DAT_00101108;
      } while (iVar18 != iVar17);
      uVar21 = *(uint *)(lVar7 + 0x108080000c8f8);
      uVar9 = uVar21 >> 0x10 & 0x3f;
    }
    if (uVar12 == 0) {
      uVar21 = param_1 >> 9 & 3;
      if (uVar21 - 1 < 2) {
        if (uVar21 == 2) {
          uVar8 = 0xc3c0;
        }
        else {
          uVar8 = 0x3c0;
        }
        fence();
        Ram0002000000000518 = uVar8;
        uVar8 = Ram0002000000000020;
        Ram0002000000000040 = 1;
        uVar21 = Ram0002000000000070;
        _DAT_1000100003898 = 4 << ((long)(int)(uVar21 >> 6) & 3U | (long)(int)(uVar21 >> 3) & 4U);
        do {
        } while ((_DAT_1000100003898 & _DAT_100010000389c) == 0);
        Ram0002000000000040 = uVar8;
        Ram00020000000002a8 = 0;
        do {
          lVar10 = Ram00020000000004b8;
          _DAT_100010000389c = _DAT_1000100003898;
        } while (lVar10 != 0);
      }
      if ((param_1 >> 0x10 & 0xff) == 1) {
        iVar17 = Ram00020000000006f8;
        if (iVar17 == -0x3ffdc100) {
          Ram0002000000000150 = 0;
          uVar20 = (param_1 & 0x1800) >> 2;
          uVar21 = *(uint *)(lVar7 + 0x108080000c8f8) & 0xfffff9ff;
          goto LAB_00038cc8;
        }
        *(uint *)(lVar7 + 0x108080000c8f8) =
             *(uint *)(lVar7 + 0x108080000c8f8) & 0xffff |
             (*(uint *)(lVar7 + 0x108080000c8f8) >> 0x10 & 0x7fc0 | 0xffff8009) << 0x10;
        iVar18 = Ram00020000000003a8;
        iVar17 = 0;
        if (iVar18 != 2) {
          do {
            uVar8 = Ram00020000000006f8;
            iVar17 = iVar17 + 1;
          } while (iVar18 + -2 != iVar17);
        }
      }
      else {
        *(uint *)(lVar7 + 0x108080000c8f8) =
             *(uint *)(lVar7 + 0x108080000c8f8) & 0xffff |
             (*(uint *)(lVar7 + 0x108080000c8f8) >> 0x10 & 0x7fc0 | 0xffff8009) << 0x10;
        iVar18 = Ram00020000000003a8;
        iVar17 = 0;
        if (iVar18 != 2) {
          do {
            uVar8 = Ram00020000000006f8;
            iVar17 = iVar17 + 1;
          } while (iVar18 + -2 != iVar17);
        }
      }
      goto LAB_00038420;
    }
    if (uVar12 != 2) {
      uVar19 = uVar19 | 0x40;
      if ((uVar21 & 0x40) == 0) {
        uVar22 = 0xffffffffffffffff;
        if ((bVar6 & 2) == 0) {
          uVar22 = 0xffffffff;
        }
        uVar21 = *(uint *)(lVar7 + 0x108080000c8f8);
        uVar8 = Ram00020000000006f8;
        uVar27 = Ram00020000000006f8;
        lVar10 = Ram00020000000006f8;
        uVar27 = lVar10 << 0x20 | uVar27;
        uVar26 = Ram00020000000006f8;
        lVar10 = Ram00020000000006f8;
        uVar26 = lVar10 << 0x20 | uVar26;
        uVar23 = Ram00020000000006f8;
        lVar10 = Ram00020000000006f8;
        uVar23 = lVar10 << 0x20 | uVar23;
        uVar25 = Ram00020000000006f8;
        lVar10 = Ram00020000000006f8;
        uVar25 = lVar10 << 0x20 | uVar25;
        uVar16 = Ram00020000000006f8;
        lVar10 = Ram00020000000006f8;
        uVar16 = lVar10 << 0x20 | uVar16;
        uVar2 = Ram00020000000006f8;
        uVar2 = Ram00020000000006f8;
        uVar14 = Ram00020000000006f8;
        lVar10 = Ram00020000000006f8;
        DAT_001010d0 = lVar10 << 0x20 | uVar14;
        if ((((bVar6 & 8) != 0) && (DAT_001010d0 != 0)) && ((uVar21 & 2) == 0)) {
          Ram00020000000000b0 = 0;
          Ram0002000000000390 = DAT_001010d0 + 0x20;
          puVar3 = (undefined8 *)Ram0002000000000390;
          uVar2 = Ram00020000000000f8;
          *puVar3 = uVar2;
        }
        uVar9 = uVar21 & 0x1f000000;
        *(uint *)(lVar7 + 0x108080000c8f8) = uVar21 | 0x8002;
        DAT_00101100 = uVar19;
        DAT_00101104 = uVar12;
        do {
          iVar18 = 0;
          iVar17 = 0;
          uVar13 = 1;
          do {
            if ((uVar9 & uVar13 << 0x18) == 0) {
              uVar14 = uVar25;
              if (((iVar17 != 3) && (uVar14 = uVar16, iVar17 != 4)) &&
                 ((uVar14 = uVar26, iVar17 != 1 && (uVar14 = uVar23, iVar17 != 2)))) {
                uVar14 = uVar27;
              }
              if (uVar14 != 0) {
                Ram0002000000000390 = uVar14 + 8;
                puVar5 = (ulong *)Ram0002000000000390;
                Ram0002000000000120 = 0;
                uVar9 = uVar9 | uVar13;
                if (uVar12 == 5) {
                  if ((uVar22 & *puVar5) == 0) {
                    uVar21 = (param_1 & 0x600) >> 9;
                    *(uint *)(lVar7 + 0x108080000c8f8) = *(uint *)(lVar7 + 0x108080000c8f8) & 0xfffd
                    ;
                    if (uVar21 - 1 < 2) {
                      if (uVar21 == 2) {
                        uVar8 = 0xc3c0;
                      }
                      else {
                        uVar8 = 0x3c0;
                      }
                      fence();
                      Ram0002000000000518 = uVar8;
                      uVar8 = Ram0002000000000020;
                      Ram0002000000000040 = 1;
                      uVar21 = Ram0002000000000070;
                      _DAT_1000100003898 =
                           4 << ((long)(int)(uVar21 >> 6) & 3U | (long)(int)(uVar21 >> 3) & 4U);
                      do {
                      } while ((_DAT_1000100003898 & _DAT_100010000389c) == 0);
                      Ram0002000000000040 = uVar8;
                      Ram00020000000002a8 = 0;
                      do {
                        lVar10 = Ram00020000000004b8;
                        _DAT_100010000389c = _DAT_1000100003898;
                      } while (lVar10 != 0);
                    }
                    goto LAB_0003810c;
                  }
                }
                else if ((uVar22 & *puVar5) == 0) {
                  uVar9 = uVar9 | uVar13 << 0x18 | 0x80000000;
                  *(uint *)(lVar7 + 0x108080000c8f8) = uVar9;
                  goto LAB_00038370;
                }
                iVar18 = iVar18 + 1;
              }
            }
LAB_00038370:
            iVar17 = iVar17 + 1;
            uVar13 = uVar13 << 1;
          } while (iVar17 != 5);
          if (iVar18 == 0) {
            uVar21 = (param_1 & 0x600) >> 9;
            *(uint *)(lVar7 + 0x108080000c8f8) = *(uint *)(lVar7 + 0x108080000c8f8) & 0xfffd;
            if (uVar21 - 1 < 2) {
              if (uVar21 == 2) {
                uVar8 = 0xc3c0;
              }
              else {
                uVar8 = 0x3c0;
              }
              fence();
              Ram0002000000000518 = uVar8;
              uVar8 = Ram0002000000000020;
              Ram0002000000000040 = 1;
              uVar21 = Ram0002000000000070;
              _DAT_1000100003898 =
                   4 << ((long)(int)(uVar21 >> 6) & 3U | (long)(int)(uVar21 >> 3) & 4U);
              do {
              } while ((_DAT_1000100003898 & _DAT_100010000389c) == 0);
              Ram0002000000000040 = uVar8;
              Ram00020000000002a8 = 0;
              do {
                lVar10 = Ram00020000000004b8;
                _DAT_100010000389c = _DAT_1000100003898;
              } while (lVar10 != 0);
            }
            goto LAB_0003810c;
          }
          uVar13 = Ram0002000000000068;
          if (((ulong)(long)*(int *)(lVar7 + 0x108080002e088) >> 8 &
               ~(long)(1 << ((ulong)uVar13 & 0x1f)) & 0xff) != 0) goto LAB_00037a9c;
          uVar13 = Ram0002000000000108;
          if (uVar13 >> 0x10 == 0) {
            iVar17 = Ram0002000000000140;
            if (iVar17 == 0) {
              iVar17 = Ram0002000000000180;
              if (iVar17 != 0) {
                Ram0002000000000060 = 0;
                lVar10 = Ram0002000000000038;
                if (lVar10 == 0) {
                  Ram0002000000000200 = 0xe;
                }
                else {
                  Ram0002000000000200 = 0xf;
                }
                Ram0002000000000220 = 4;
                Ram0002000000000080 = 2;
                Ram00020000000003c0 = 0;
                uVar11 = Ram0002000000000190;
                Ram0002000000000220 = 0;
                uVar15 = uVar11 >> 8 & 7;
                Ram00020000000004d0 = uVar15;
                uVar13 = Ram00020000000004a0;
                if ((uVar13 & 4) == 0) {
                  *(undefined4 *)(((long)(int)(uVar11 >> 4) << 0x24) + 0x108080000c87c) = 0x60000000
                  ;
                }
                else {
                  Ram00020000000004d8 = uVar15;
                  lVar10 = (long)(int)(uVar11 >> 4) << 0x24;
                  do {
                  } while ((*(uint *)(lVar10 + 0x108080002e088) & 0x40000) != 0);
                  iVar17 = 0x10;
                  do {
                    Ram00020000000003c0 = 0;
                    iVar17 = iVar17 + -1;
                  } while (iVar17 != 0);
                  uVar11 = Ram0002000000000498;
                  uVar14 = (ulong)uVar11 & 0x3f;
                  Ram00020000000004e8 = (int)uVar14;
                  Ram0002000000000070 = (int)uVar14;
                  do {
                    uVar8 = Ram00020000000006f8;
                    Ram00020000000003c0 = uVar8;
                    uVar14 = (ulong)((int)uVar14 + -1);
                  } while (uVar14 != 0);
                  *(uint *)(lVar10 + 0x108080000c87c) =
                       *(uint *)(lVar10 + 0x108080000c87c) | 0x10000000;
                  *(undefined4 *)(lVar10 + 0x108080000c884) = 0x200;
                }
                Ram00020000000007d8 = 1;
                goto LAB_000396d4;
              }
            }
            else {
              Ram0002000000000060 = 0;
              lVar10 = Ram0002000000000038;
              if (lVar10 == 0) {
                Ram00020000000001f8 = 0xe;
              }
              else {
                Ram00020000000001f8 = 0xf;
              }
              lVar10 = FUN_000243e0();
              if (lVar10 != 0) {
                Ram00020000000007d8 = 1;
                goto LAB_000396d4;
              }
            }
          }
          else {
            Ram00020000000001b8 = uVar13;
            FUN_00003450((long)(int)uVar13);
            if (DAT_00101086 != '\0') {
              DAT_00101086 = '\0';
LAB_000396d4:
              gp = 0x101800;
              tp = 0x2000000000000;
              DAT_00101100 = uVar19;
              DAT_00101104 = uVar12;
              DAT_00101108 = uVar20;
              DAT_0010110c = uVar21;
              DAT_00101110 = uVar9;
              DAT_00101118 = uVar27;
              DAT_00101120 = uVar26;
              DAT_00101128 = uVar23;
              DAT_00101130 = uVar25;
              DAT_00101138 = uVar16;
              DAT_00101140 = uVar22;
              DAT_00101148 = (uint)(uVar12 == 5);
              return;
            }
          }
        } while( true );
      }
      Ram0002000000000488 = 0x100;
      *(uint *)(lVar7 + 0x108080000c8f8) = uVar21 & 0xfffffffb | 0x8000;
      iVar17 = 0xd;
      do {
        uVar8 = Ram00020000000006f8;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
      uVar22 = Ram00020000000006f8;
      lVar10 = Ram00020000000006f8;
      DAT_001010d0 = lVar10 << 0x20 | uVar22;
      DAT_001010d8 = DAT_001010f8 + -1;
      if ((param_1 & 0x1800) != 0x1000) goto LAB_000381b4;
      goto LAB_00038134;
    }
    uVar20 = *(uint *)(lVar7 + 0x108080000c8f8);
    if ((uVar20 & 0x10) == 0) {
      uVar12 = param_1 >> 9 & 3;
      if ((uVar21 & 0x44) != 0) {
        Ram0002000000000488 = 0x100;
        *(uint *)(lVar7 + 0x108080000c8f8) = uVar21 & 0xfffffffb | 0x8000;
        iVar17 = 0xd;
        do {
          uVar8 = Ram00020000000006f8;
          iVar17 = iVar17 + -1;
        } while (iVar17 != 0);
        goto LAB_000394c0;
      }
      if ((uVar12 - 1 < 2) && ((uVar20 & 0x80) == 0)) {
        uVar8 = 0x3c0;
        if (uVar12 == 2) {
          uVar8 = 0xc3c0;
        }
        fence();
        Ram0002000000000518 = uVar8;
        uVar8 = Ram0002000000000020;
        Ram0002000000000040 = 1;
        uVar21 = Ram0002000000000070;
        _DAT_1000100003898 = 4 << ((long)(int)(uVar21 >> 6) & 3U | (long)(int)(uVar21 >> 3) & 4U);
        do {
        } while ((_DAT_1000100003898 & _DAT_100010000389c) == 0);
        Ram0002000000000040 = uVar8;
        Ram00020000000002a8 = 0;
        do {
          lVar10 = Ram00020000000004b8;
        } while (lVar10 != 0);
        _DAT_100010000389c = _DAT_1000100003898;
        *(uint *)(lVar7 + 0x108080000c8f8) = uVar20 | 0x8080;
      }
      uVar20 = Ram00020000000006f8;
      uVar21 = uVar20 >> 0x10;
      uVar12 = param_1 >> 0x10 & 3;
      iVar17 = Ram00020000000006f8;
      Ram00020000000000a8 = 2;
      uVar8 = Ram00020000000006f8;
      Ram000100020000b804 = uVar8;
      uVar24 = Ram00020000000006f8;
      uVar8 = Ram00020000000006f8;
      if (uVar12 == 1) {
        uVar8 = 1;
        uVar24 = 1;
        iVar17 = 1;
        uVar21 = 1;
      }
      else if (uVar12 == 2) {
        uVar8 = 1;
        iVar17 = 1;
      }
      else if (uVar12 == 0) {
        Ram00020000000000a8 = 0;
        *(uint *)(lVar7 + 0x108080000c8f8) =
             *(uint *)(lVar7 + 0x108080000c8f8) & 0xffff |
             (*(uint *)(lVar7 + 0x108080000c8f8) >> 0x10 & 0x7fc0 | 0xffff8002) << 0x10;
        iVar18 = Ram00020000000003a8;
        iVar17 = 0;
        if (iVar18 != 2) {
          do {
            uVar8 = Ram00020000000006f8;
            iVar17 = iVar17 + 1;
          } while (iVar18 + -2 != iVar17);
        }
        goto LAB_00039564;
      }
      uVar12 = (uVar20 & 0xffff) * uVar21;
      Ram000100020000b808 = uVar24;
      Ram000100020000b80c = uVar8;
      uVar9 = uVar12 * iVar17;
      if ((0x400 < uVar9) || (0x400 < uVar12)) {
        Ram00020000000000a8 = 0;
        *(uint *)(lVar7 + 0x108080000c8f8) =
             *(uint *)(lVar7 + 0x108080000c8f8) & 0xffff |
             (*(uint *)(lVar7 + 0x108080000c8f8) >> 0x10 & 0x7fc0 | 0xffff8007) << 0x10;
        iVar18 = Ram00020000000003a8;
        iVar17 = 0;
        if (iVar18 != 2) {
          do {
            uVar8 = Ram00020000000006f8;
            iVar17 = iVar17 + 1;
          } while (iVar18 + -2 != iVar17);
        }
        goto LAB_00039354;
      }
      iVar18 = Ram00020000000006f8;
      uVar12 = Ram00020000000006f8;
      uVar22 = Ram00020000000006f8;
      lVar10 = Ram00020000000006f8;
      uVar22 = lVar10 << 0x20 | uVar22;
      if (uVar22 == 0) {
        Ram00020000000000a8 = 0;
        *(uint *)(lVar7 + 0x108080000c8f8) =
             *(uint *)(lVar7 + 0x108080000c8f8) & 0xffff |
             (*(uint *)(lVar7 + 0x108080000c8f8) >> 0x10 & 0x7fc0 | 0xffff8004) << 0x10;
        iVar17 = Ram00020000000003a8;
        for (uVar21 = 0; uVar21 < iVar17 - 2U; uVar21 = uVar21 + 1) {
          uVar8 = Ram00020000000006f8;
        }
        goto LAB_00039db0;
      }
      Ram0002000000000390 = uVar22 + 0x10;
      plVar4 = (long *)Ram0002000000000390;
      uVar13 = Ram00020000000002d0;
      Ram000100020000b81c = uVar20 & 0xffff;
      Ram000100020000b820 = uVar21;
      Ram000100020000b824 = iVar17;
      if ((uVar13 & 0x40) != 0) {
        Ram00020000000000a8 = 0;
        Ram00020000000000a8 = 2;
        Ram000100020000b838 = *(uint *)(lVar7 + 0x108080000c84c) >> 4;
      }
      Ram000100020000b830 = (int)(uVar22 + *plVar4 >> 8);
      Ram000100020000b834 = (uint)(uVar22 + *plVar4 >> 0x28) | 0x100;
      uVar21 = (uint)((uVar12 & 0x1ff) != 0) + (uVar12 >> 9);
      Ram000100020000b8a0 = *(undefined4 *)((long)plVar4 + 0x1c);
      uVar22 = plVar4[4];
      uVar12 = (uint)uVar22 & (uint)DAT_00101078;
      uVar20 = Ram00020000000002d8;
      uVar13 = 1;
      if ((uVar20 & 4) == 0) {
        uVar13 = uVar12 >> 0x14 & 1;
      }
      uVar20 = uVar12 & 0xffefffff | uVar13 << 0x14;
      Ram000100020000b848 = uVar20;
      Ram000100020000b84c = uVar21 * 0x8000 | (uVar11 & 1) << 6 | (uint)(uVar22 >> 0x20) & 0x1fbf;
      uVar27 = plVar4[5];
      uVar26 = uVar27 >> 10 & 1;
      if (0x80 < uVar21) {
        Ram00020000000000a8 = 0;
        *(uint *)(lVar7 + 0x108080000c8f8) =
             *(uint *)(lVar7 + 0x108080000c8f8) & 0xffff |
             (*(uint *)(lVar7 + 0x108080000c8f8) >> 0x10 & 0x7fc0 | 0xffff8003) << 0x10;
        iVar17 = Ram00020000000003a8;
        for (uVar21 = 0; uVar21 < iVar17 - 2U; uVar21 = uVar21 + 1) {
          uVar8 = Ram00020000000006f8;
        }
        goto LAB_00039fe8;
      }
      iVar17 = (uVar12 & 0x3f) + 1;
      if (uVar26 == 0) {
        uVar21 = iVar17 * 4;
      }
      else {
        uVar21 = iVar17 * 8;
      }
      uVar12 = (uint)uVar27;
      if (((ulong)(long)(int)uVar20 >> 0x1d & 1) == 0) {
        if (uVar9 < 0x101) goto LAB_00039790;
        if (uVar26 == 0) {
          if (uVar9 < 0x181) goto LAB_0003a804;
          if (0x200 < uVar9) {
LAB_0003a7e8:
            if (uVar9 < 0x281) {
              bVar1 = 0x90 < uVar21;
            }
            else if (uVar9 < 0x301) {
              bVar1 = 0x78 < uVar21;
            }
            else if ((uVar26 == 0) && (uVar9 < 0x381)) {
              bVar1 = 0x6c < uVar21;
            }
            else {
              bVar1 = 0x60 < uVar21;
            }
            goto LAB_0003a6c8;
          }
LAB_0003a7d4:
          bVar1 = 0xc0 < uVar21;
          goto LAB_0003a6c8;
        }
        if (0x140 < uVar9) {
          if (0x180 < uVar9) {
            if (uVar9 < 0x1c1) goto LAB_0003aac8;
            if (0x200 < uVar9) {
              if (uVar9 < 0x241) {
                bVar1 = 0xa8 < uVar21;
                goto LAB_0003a6c8;
              }
              goto LAB_0003a7e8;
            }
            goto LAB_0003a7d4;
          }
          if (uVar21 < 0xf1) goto LAB_00039248;
          goto LAB_0003a6cc;
        }
LAB_00039248:
        if ((uVar22 & 0x100000000) != 0) goto LAB_00039254;
      }
      else {
        if (0x200 < uVar9) {
          if (uVar26 == 0) {
            if (0x300 < uVar9) goto LAB_0003a7d4;
LAB_0003a804:
            bVar1 = 0xfc < uVar21;
          }
          else {
            if (uVar9 < 0x281) goto LAB_00039248;
            if (uVar9 < 0x301) {
              bVar1 = 0xf0 < uVar21;
            }
            else {
              if (0x380 < uVar9) goto LAB_0003a7d4;
LAB_0003aac8:
              bVar1 = 0xd8 < uVar21;
            }
          }
LAB_0003a6c8:
          if (bVar1) {
LAB_0003a6cc:
            Ram00020000000000a8 = 0;
            *(uint *)(lVar7 + 0x108080000c8f8) =
                 *(uint *)(lVar7 + 0x108080000c8f8) & 0xffff |
                 (*(uint *)(lVar7 + 0x108080000c8f8) >> 0x10 & 0x7fc0 | 0xffff8008) << 0x10;
            iVar17 = Ram00020000000003a8;
            for (uVar21 = 0; uVar21 < iVar17 - 2U; uVar21 = uVar21 + 1) {
              uVar8 = Ram00020000000006f8;
            }
            goto LAB_0003a5f8;
          }
        }
LAB_00039790:
        if ((uVar22 & 0x100000000) != 0) {
          uVar21 = DAT_001010c0;
          if (uVar26 != 0) {
LAB_00039254:
            uVar21 = DAT_001010c0 << 1;
          }
          if (uVar21 < (iVar18 + 3U & 0xfffffffc) || (bVar6 & 0x80) != 0) {
            Ram00020000000000a8 = 0;
            if (uVar26 != 0) {
              *(uint *)(lVar7 + 0x108080000c8f8) =
                   *(uint *)(lVar7 + 0x108080000c8f8) & 0xffff |
                   (*(uint *)(lVar7 + 0x108080000c8f8) >> 0x10 & 0x7fc0 | 0xffff800b) << 0x10;
              iVar17 = Ram00020000000003a8;
              for (uVar21 = 0; uVar21 < iVar17 - 2U; uVar21 = uVar21 + 1) {
                uVar8 = Ram00020000000006f8;
              }
              goto LAB_0003a4d8;
            }
            *(uint *)(lVar7 + 0x108080000c8f8) =
                 *(uint *)(lVar7 + 0x108080000c8f8) & 0xffff |
                 (*(uint *)(lVar7 + 0x108080000c8f8) >> 0x10 & 0x7fc0 | 0xffff8001) << 0x10;
            iVar17 = Ram00020000000003a8;
            for (uVar21 = 0; uVar21 < iVar17 - 2U; uVar21 = uVar21 + 1) {
              uVar8 = Ram00020000000006f8;
            }
            goto LAB_0003a3bc;
          }
        }
      }
      uVar21 = uVar12 & 1;
      if ((uVar27 & 1) != 0) {
        Ram000100020000b900 = (int)DAT_001010e8;
        Ram000100020000b904 = (int)((ulong)DAT_001010e8 >> 0x20);
        Ram000100020000b908 = (int)DAT_001010f0;
        Ram000100020000b90c =
             (uVar12 & 0x400) << 0xb ^ 0x600000 | (uint)((ulong)DAT_001010f0 >> 0x20);
        uVar21 = 4;
      }
      if ((uVar12 >> 1 & 1) != 0) {
        Ram00020000000000a8 = 0;
        lVar10 = *(long *)(lVar7 + 0x108080000c844) * 0x100 +
                 (ulong)(uint)(*(int *)(lVar7 + 0x108080000c84c) << 2);
        Ram00020000000000a8 = 2;
        *(int *)(((ulong)((long)(int)(uVar21 + 0x2e40) << 0x20) >> 0x1e) + 0x1000200000000) =
             (int)lVar10;
        *(int *)(((ulong)((long)(int)(uVar21 + 0x2e41) << 0x20) >> 0x1e) + 0x1000200000000) =
             (int)((ulong)lVar10 >> 0x20);
        uVar21 = uVar21 + 2;
      }
      if ((uVar12 >> 2 & 1) != 0) {
        Ram00020000000000a8 = 0;
        uVar8 = *(undefined4 *)(lVar7 + 0x108080000c854);
        Ram00020000000000a8 = 2;
        *(uint *)(((ulong)((long)(int)(uVar21 + 0x2e40) << 0x20) >> 0x1e) + 0x1000200000000) =
             *(int *)(lVar7 + 0x108080000c850) - (uint)((uint7)(undefined7)DAT_001010b8 >> 0x20);
        *(undefined4 *)(((ulong)((long)(int)(uVar21 + 0x2e41) << 0x20) >> 0x1e) + 0x1000200000000) =
             uVar8;
        uVar21 = uVar21 + 2;
      }
      uVar20 = uVar21;
      if ((uVar12 >> 3 & 1) != 0) {
        uVar8 = Ram00020000000006f8;
        *(undefined4 *)(((ulong)((long)(int)(uVar21 + 0x2e40) << 0x20) >> 0x1e) + 0x1000200000000) =
             uVar8;
        uVar20 = uVar21 + 2;
        uVar8 = Ram00020000000006f8;
        *(undefined4 *)(((ulong)((long)(int)(uVar21 + 0x2e41) << 0x20) >> 0x1e) + 0x1000200000000) =
             uVar8;
      }
      lVar10 = DAT_001010f8;
      if ((uVar12 >> 4 & 1) != 0) {
        *(int *)(((ulong)((long)(int)(uVar20 + 0x2e40) << 0x20) >> 0x1e) + 0x1000200000000) =
             (int)DAT_001010f8;
        *(int *)(((ulong)((long)(int)(uVar20 + 0x2e41) << 0x20) >> 0x1e) + 0x1000200000000) =
             (int)((ulong)lVar10 >> 0x20);
        uVar20 = uVar20 + 2;
      }
      uVar2 = DAT_001010e0;
      if ((uVar12 >> 5 & 1) != 0) {
        *(int *)(((ulong)((long)(int)(uVar20 + 0x2e40) << 0x20) >> 0x1e) + 0x1000200000000) =
             (int)DAT_001010e0;
        *(int *)(((ulong)((long)(int)(uVar20 + 0x2e41) << 0x20) >> 0x1e) + 0x1000200000000) =
             (int)((ulong)uVar2 >> 0x20);
        uVar20 = uVar20 + 2;
      }
      if ((uVar12 >> 6 & 1) != 0) {
        *(uint *)(((ulong)((long)(int)(uVar20 + 0x2e40) << 0x20) >> 0x1e) + 0x1000200000000) =
             DAT_001010c0;
      }
      Ram000100020000b800 = (uint)(uVar26 << 0xf) | (uint)(uVar27 >> 0xd) & 8 | 0x1065;
      Ram00020000000000a8 = 0;
      uVar9 = 0;
    }
    iVar18 = Ram00020000000003a8;
    iVar17 = 0;
    if (iVar18 != 2) {
      do {
        uVar8 = Ram00020000000006f8;
        iVar17 = iVar17 + 1;
      } while (iVar18 + -2 != iVar17);
    }
    uVar22 = Ram00020000000006f8;
    lVar10 = Ram00020000000006f8;
    uVar21 = *(uint *)(lVar7 + 0x108080000c8f8);
    uVar22 = lVar10 << 0x20 | uVar22;
    DAT_001010d0 = uVar22;
    if ((uVar22 == 0) || ((bVar6 & 8) == 0)) {
      *(uint *)(lVar7 + 0x108080000c8f8) = uVar21 & 0xffffff7f | 0x8000;
      if (uVar9 == 0) goto LAB_00037ecc;
    }
    else {
      if (uVar9 == 0) {
        *(uint *)(lVar7 + 0x108080000c8f8) = uVar21 | 0x8010;
        Ram0002000000000390 = uVar22 + 0x20;
        puVar3 = (undefined8 *)Ram0002000000000390;
        uVar2 = Ram00020000000000f8;
        *puVar3 = uVar2;
        *(uint *)(lVar7 + 0x108080000c8f8) = uVar21 & 0xffffff6f | 0x8000;
        goto LAB_00037ecc;
      }
      *(uint *)(lVar7 + 0x108080000c8f8) = uVar21 & 0xffffff7f | 0x8000;
    }
    DAT_001010d8 = DAT_001010f8;
    *(uint *)(lVar7 + 0x108080000c8f8) = *(uint *)(lVar7 + 0x108080000c8f8) & 0xffffffbf | 0x8000;
    uVar21 = uVar11 & 0x4e | 0x200000;
    DAT_001010c8 = uVar9;
    if ((uVar9 & 0x601) == 0) {
      FUN_00025a78(0xffffffffc0050004,uVar21,0xc,0,0,0,0);
      gp = 0x101800;
      tp = 0x2000000000000;
      return;
    }
    *(uint *)(lVar7 + 0x108080000c87c) =
         *(uint *)(lVar7 + 0x108080000c868) & 0x800000 | 0x81001ff |
         *(uint *)(lVar7 + 0x108080000c868) & 0x3000000;
LAB_00038080:
    FUN_00025a78(0xffffffffc0050004,uVar21,0xc,0,0,0,0,0);
    return;
  }
  if (uVar12 == 0) {
    uVar21 = param_1 >> 9 & 3;
    if (uVar21 - 1 < 2) {
      if (uVar21 == 2) {
        uVar8 = 0xc3c0;
      }
      else {
        uVar8 = 0x3c0;
      }
      fence();
      Ram0002000000000518 = uVar8;
      uVar8 = Ram0002000000000020;
      Ram0002000000000040 = 1;
      uVar21 = Ram0002000000000070;
      _DAT_1000100003898 = 4 << ((long)(int)(uVar21 >> 6) & 3U | (long)(int)(uVar21 >> 3) & 4U);
      do {
      } while ((_DAT_1000100003898 & _DAT_100010000389c) == 0);
      Ram0002000000000040 = uVar8;
      Ram00020000000002a8 = 0;
      do {
        lVar10 = Ram00020000000004b8;
        _DAT_100010000389c = _DAT_1000100003898;
      } while (lVar10 != 0);
    }
    if ((param_1 >> 0x10 & 0xff) == 1) {
      iVar17 = Ram00020000000006f8;
      if (iVar17 == -0x3ffdc100) {
        Ram0002000000000150 = 0;
        uVar21 = (param_1 & 0x1800) >> 2;
        uVar20 = *(uint *)(lVar7 + 0x108080000c8f8) & 0xfffff9ff;
        DAT_00101100 = uVar19;
        DAT_00101104 = uVar12;
LAB_00038cc8:
        *(uint *)(lVar7 + 0x108080000c8f8) = uVar21 | uVar20 | 0x8100;
        Ram0002000000000060 = 3;
        Ram00020000000004a8 = 0;
        FUN_0002a770();
        return;
      }
      DAT_00101100 = uVar19;
      DAT_00101104 = uVar12;
      *(uint *)(lVar7 + 0x108080000c8f8) =
           *(uint *)(lVar7 + 0x108080000c8f8) & 0xffff |
           (*(uint *)(lVar7 + 0x108080000c8f8) >> 0x10 & 0x7fc0 | 0xffff8009) << 0x10;
      iVar18 = Ram00020000000003a8;
      iVar17 = 0;
      if (iVar18 != 2) {
        do {
          uVar8 = Ram00020000000006f8;
          iVar17 = iVar17 + 1;
        } while (iVar18 + -2 != iVar17);
      }
    }
    else {
      DAT_00101100 = uVar19;
      DAT_00101104 = uVar12;
      *(uint *)(lVar7 + 0x108080000c8f8) =
           *(uint *)(lVar7 + 0x108080000c8f8) & 0xffff |
           (*(uint *)(lVar7 + 0x108080000c8f8) >> 0x10 & 0x7fc0 | 0xffff8009) << 0x10;
      iVar18 = Ram00020000000003a8;
      iVar17 = 0;
      if (iVar18 != 2) {
        do {
          uVar8 = Ram00020000000006f8;
          iVar17 = iVar17 + 1;
        } while (iVar18 + -2 != iVar17);
      }
    }
LAB_00038420:
    DAT_001010d8 = DAT_001010f8;
    uVar22 = Ram00020000000006f8;
    lVar10 = Ram00020000000006f8;
    *(uint *)(lVar7 + 0x108080000c8f8) = *(uint *)(lVar7 + 0x108080000c8f8) & 0xffffff7f | 0x8000;
    *(uint *)(lVar7 + 0x108080000c8f8) = *(uint *)(lVar7 + 0x108080000c8f8) & 0xffffffbf | 0x8000;
    DAT_001010d0 = lVar10 << 0x20 | uVar22;
    DAT_001010c8 = 0x100;
    FUN_00025a78(0xffffffffc0050004,uVar11 & 0x4e | 0x200000,0xc,0,0,0,0,0);
    gp = 0x101800;
    tp = 0x2000000000000;
    return;
  }
  if (uVar12 != 2) {
    if ((uVar21 & 0x40) == 0) {
      if ((DAT_001010b8._7_1_ & 2) == 0) {
        uStack_80 = 0xffffffff;
      }
      else {
        uStack_80 = 0xffffffffffffffff;
      }
      uVar21 = *(uint *)(lVar7 + 0x108080000c8f8);
      uVar8 = Ram00020000000006f8;
      uVar22 = Ram00020000000006f8;
      lVar10 = Ram00020000000006f8;
      uVar22 = lVar10 << 0x20 | uVar22;
      uVar27 = Ram00020000000006f8;
      lVar10 = Ram00020000000006f8;
      uVar27 = lVar10 << 0x20 | uVar27;
      uVar26 = Ram00020000000006f8;
      lVar10 = Ram00020000000006f8;
      uVar26 = lVar10 << 0x20 | uVar26;
      uVar23 = Ram00020000000006f8;
      lVar10 = Ram00020000000006f8;
      uVar23 = lVar10 << 0x20 | uVar23;
      uVar25 = Ram00020000000006f8;
      lVar10 = Ram00020000000006f8;
      uVar25 = lVar10 << 0x20 | uVar25;
      uVar2 = Ram00020000000006f8;
      uVar2 = Ram00020000000006f8;
      uVar16 = Ram00020000000006f8;
      lVar10 = Ram00020000000006f8;
      DAT_001010d0 = lVar10 << 0x20 | uVar16;
      if ((((DAT_001010b8._7_1_ & 8) != 0) && (DAT_001010d0 != 0)) && ((uVar21 & 2) == 0)) {
        Ram00020000000000b0 = 0;
        Ram0002000000000390 = DAT_001010d0 + 0x20;
        puVar3 = (undefined8 *)Ram0002000000000390;
        uVar2 = Ram00020000000000f8;
        *puVar3 = uVar2;
      }
      uVar9 = uVar21 & 0x1f000000;
      *(uint *)(lVar7 + 0x108080000c8f8) = uVar21 | 0x8002;
      DAT_00101100 = uVar19 | 0x40;
      DAT_00101104 = uVar12;
LAB_00037a18:
      do {
        iVar18 = 0;
        iVar17 = 0;
        uVar13 = 1;
        do {
          if ((uVar9 & uVar13 << 0x18) == 0) {
            uVar16 = uVar23;
            if (((iVar17 != 3) && (uVar16 = uVar25, iVar17 != 4)) &&
               ((uVar16 = uVar27, iVar17 != 1 && (uVar16 = uVar26, iVar17 != 2)))) {
              uVar16 = uVar22;
            }
            if (uVar16 != 0) {
              Ram0002000000000390 = uVar16 + 8;
              puVar5 = (ulong *)Ram0002000000000390;
              Ram0002000000000120 = 0;
              uVar9 = uVar9 | uVar13;
              if (uVar12 == 5) {
                if ((uStack_80 & *puVar5) == 0) {
                  uVar21 = param_1 >> 9 & 3;
                  *(uint *)(lVar7 + 0x108080000c8f8) = *(uint *)(lVar7 + 0x108080000c8f8) & 0xfffd;
                  if (uVar21 - 1 < 2) {
                    if (uVar21 == 2) {
                      uVar8 = 0xc3c0;
                    }
                    else {
                      uVar8 = 0x3c0;
                    }
                    fence();
                    Ram0002000000000518 = uVar8;
                    uVar8 = Ram0002000000000020;
                    Ram0002000000000040 = 1;
                    uVar21 = Ram0002000000000070;
                    _DAT_1000100003898 =
                         4 << ((long)(int)(uVar21 >> 6) & 3U | (long)(int)(uVar21 >> 3) & 4U);
                    do {
                    } while ((_DAT_1000100003898 & _DAT_100010000389c) == 0);
                    Ram0002000000000040 = uVar8;
                    Ram00020000000002a8 = 0;
                    do {
                      lVar10 = Ram00020000000004b8;
                      _DAT_100010000389c = _DAT_1000100003898;
                    } while (lVar10 != 0);
                  }
                  goto LAB_0003810c;
                }
              }
              else if ((uStack_80 & *puVar5) == 0) {
                uVar9 = uVar9 | uVar13 << 0x18 | 0x80000000;
                *(uint *)(lVar7 + 0x108080000c8f8) = uVar9;
                goto LAB_00037a6c;
              }
              iVar18 = iVar18 + 1;
            }
          }
LAB_00037a6c:
          iVar17 = iVar17 + 1;
          uVar13 = uVar13 << 1;
        } while (iVar17 != 5);
        if (iVar18 == 0) goto LAB_0003a1e4;
        uVar13 = Ram0002000000000068;
        if (((ulong)(long)*(int *)(lVar7 + 0x108080002e088) >> 8 &
             ~(long)(1 << ((ulong)uVar13 & 0x1f)) & 0xff) != 0) goto LAB_00037a9c;
        uVar13 = Ram0002000000000108;
        if (uVar13 >> 0x10 != 0) {
          Ram00020000000001b8 = uVar13;
          FUN_00003450((long)(int)uVar13);
          if (DAT_00101086 != '\0') {
            DAT_00101086 = '\0';
            goto LAB_00038c20;
          }
          goto LAB_00037a18;
        }
        iVar17 = Ram0002000000000140;
        if (iVar17 == 0) {
          iVar17 = Ram0002000000000180;
          if (iVar17 != 0) {
            Ram0002000000000060 = 0;
            lVar10 = Ram0002000000000038;
            if (lVar10 == 0) {
              Ram0002000000000200 = 0xe;
            }
            else {
              Ram0002000000000200 = 0xf;
            }
            Ram0002000000000220 = 4;
            Ram0002000000000080 = 2;
            Ram00020000000003c0 = 0;
            uVar11 = Ram0002000000000190;
            Ram0002000000000220 = 0;
            uVar15 = uVar11 >> 8 & 7;
            Ram00020000000004d0 = uVar15;
            uVar13 = Ram00020000000004a0;
            if ((uVar13 & 4) == 0) {
              *(undefined4 *)(((long)(int)(uVar11 >> 4) << 0x24) + 0x108080000c87c) = 0x60000000;
            }
            else {
              Ram00020000000004d8 = uVar15;
              lVar10 = (long)(int)(uVar11 >> 4) << 0x24;
              do {
              } while ((*(uint *)(lVar10 + 0x108080002e088) & 0x40000) != 0);
              iVar17 = 0x10;
              do {
                Ram00020000000003c0 = 0;
                iVar17 = iVar17 + -1;
              } while (iVar17 != 0);
              uVar11 = Ram0002000000000498;
              uVar16 = (ulong)uVar11 & 0x3f;
              Ram00020000000004e8 = (int)uVar16;
              Ram0002000000000070 = (int)uVar16;
              do {
                uVar8 = Ram00020000000006f8;
                Ram00020000000003c0 = uVar8;
                uVar16 = (ulong)((int)uVar16 + -1);
              } while (uVar16 != 0);
              *(uint *)(lVar10 + 0x108080000c87c) = *(uint *)(lVar10 + 0x108080000c87c) | 0x10000000
              ;
              *(undefined4 *)(lVar10 + 0x108080000c884) = 0x200;
            }
LAB_00038c18:
            Ram00020000000007d8 = 1;
LAB_00038c20:
            gp = 0x101800;
            tp = 0x2000000000000;
            DAT_00101100 = uVar19 | 0x40;
            DAT_00101104 = uVar12;
            DAT_00101108 = uVar20;
            DAT_0010110c = uVar21;
            DAT_00101110 = uVar9;
            DAT_00101118 = uVar22;
            DAT_00101120 = uVar27;
            DAT_00101128 = uVar26;
            DAT_00101130 = uVar23;
            DAT_00101138 = uVar25;
            DAT_00101140 = uStack_80;
            DAT_00101148 = (uint)(uVar12 == 5);
            return;
          }
        }
        else {
          Ram0002000000000060 = 0;
          lVar10 = Ram0002000000000038;
          if (lVar10 == 0) {
            Ram00020000000001f8 = 0xe;
          }
          else {
            Ram00020000000001f8 = 0xf;
          }
          lVar10 = FUN_000243e0();
          if (lVar10 != 0) goto LAB_00038c18;
        }
      } while( true );
    }
    Ram0002000000000488 = 0x100;
    DAT_00101100 = uVar19;
    DAT_00101104 = uVar12;
    *(uint *)(lVar7 + 0x108080000c8f8) = uVar21 & 0xfffffffb | 0x8000;
    iVar17 = 0xd;
    do {
      uVar8 = Ram00020000000006f8;
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
    uVar22 = Ram00020000000006f8;
    lVar10 = Ram00020000000006f8;
    DAT_001010d0 = lVar10 << 0x20 | uVar22;
    DAT_001010d8 = DAT_001010f8 + -1;
    uVar19 = param_1;
    goto joined_r0x000381b0;
  }
  uVar20 = *(uint *)(lVar7 + 0x108080000c8f8);
  DAT_00101104 = uVar12;
  if ((uVar20 & 0x10) == 0) {
    uVar9 = param_1 >> 9 & 3;
    if ((uVar21 & 0x44) != 0) {
      Ram0002000000000488 = 0x100;
      DAT_00101100 = uVar19;
      *(uint *)(lVar7 + 0x108080000c8f8) = uVar21 & 0xfffffffb | 0x8000;
      iVar17 = 0xd;
      do {
        uVar8 = Ram00020000000006f8;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
LAB_000394c0:
      uVar22 = Ram00020000000006f8;
      lVar10 = Ram00020000000006f8;
      DAT_001010d0 = lVar10 << 0x20 | uVar22;
      if ((uVar21 & 0x40) == 0) {
        DAT_001010d8 = DAT_001010f8;
        DAT_001010f8 = DAT_001010f8 + 1;
      }
      else {
        DAT_001010d8 = DAT_001010f8 + -1;
      }
      uVar11 = uVar11 & 0x4e;
      if ((param_1 >> 0xb & 3) != 2) goto LAB_00037b7c;
      goto LAB_00037b74;
    }
    DAT_00101100 = uVar19;
    if ((uVar9 - 1 < 2) && ((uVar20 & 0x80) == 0)) {
      if (uVar9 == 2) {
        uVar8 = 0xc3c0;
      }
      else {
        uVar8 = 0x3c0;
      }
      fence();
      Ram0002000000000518 = uVar8;
      uVar8 = Ram0002000000000020;
      Ram0002000000000040 = 1;
      uVar21 = Ram0002000000000070;
      _DAT_1000100003898 = 4 << ((long)(int)(uVar21 >> 6) & 3U | (long)(int)(uVar21 >> 3) & 4U);
      do {
      } while ((_DAT_1000100003898 & _DAT_100010000389c) == 0);
      Ram0002000000000040 = uVar8;
      Ram00020000000002a8 = 0;
      do {
        lVar10 = Ram00020000000004b8;
      } while (lVar10 != 0);
      _DAT_100010000389c = _DAT_1000100003898;
      *(uint *)(lVar7 + 0x108080000c8f8) = uVar20 | 0x8080;
    }
    uVar12 = Ram00020000000006f8;
    uVar20 = uVar12 & 0xffff;
    uVar21 = uVar12 >> 0x10;
    uVar9 = param_1 >> 0x10 & 3;
    iVar17 = Ram00020000000006f8;
    Ram00020000000000a8 = 2;
    uVar8 = Ram00020000000006f8;
    Ram000100020000b804 = uVar8;
    uVar24 = Ram00020000000006f8;
    uVar8 = Ram00020000000006f8;
    if (uVar9 == 1) {
      uVar8 = 1;
      uVar24 = 1;
      uVar21 = 1;
      iVar17 = 1;
      uVar9 = uVar20;
      uVar12 = uVar20;
    }
    else if (uVar9 == 2) {
      uVar9 = (uVar12 >> 0x10) * uVar20;
      uVar8 = 1;
      iVar17 = 1;
      uVar12 = uVar9;
    }
    else {
      if (uVar9 == 0) {
        Ram00020000000000a8 = 0;
        *(uint *)(lVar7 + 0x108080000c8f8) =
             *(uint *)(lVar7 + 0x108080000c8f8) & 0xffff |
             (*(uint *)(lVar7 + 0x108080000c8f8) >> 0x10 & 0x7fc0 | 0xffff8002) << 0x10;
        iVar18 = Ram00020000000003a8;
        iVar17 = 0;
        if (iVar18 != 2) {
          do {
            uVar8 = Ram00020000000006f8;
            iVar17 = iVar17 + 1;
          } while (iVar18 + -2 != iVar17);
        }
LAB_00039564:
        DAT_001010d8 = DAT_001010f8;
        uVar22 = Ram00020000000006f8;
        lVar10 = Ram00020000000006f8;
        *(uint *)(lVar7 + 0x108080000c8f8) =
             *(uint *)(lVar7 + 0x108080000c8f8) & 0xffffff7f | 0x8000;
        *(uint *)(lVar7 + 0x108080000c8f8) =
             *(uint *)(lVar7 + 0x108080000c8f8) & 0xffffffbf | 0x8000;
        DAT_001010d0 = lVar10 << 0x20 | uVar22;
        DAT_001010c8 = 2;
        FUN_00025a78(0xffffffffc0050004,uVar11 & 0x4e | 0x200000,0xc,0,0,0,0,0);
        gp = 0x101800;
        tp = 0x2000000000000;
        return;
      }
      uVar9 = uVar20 * (uVar12 >> 0x10);
      uVar12 = iVar17 * uVar9;
    }
    Ram000100020000b808 = uVar24;
    Ram000100020000b80c = uVar8;
    if ((0x400 < uVar12) || (0x400 < uVar9)) {
      Ram00020000000000a8 = 0;
      *(uint *)(lVar7 + 0x108080000c8f8) =
           *(uint *)(lVar7 + 0x108080000c8f8) & 0xffff |
           (*(uint *)(lVar7 + 0x108080000c8f8) >> 0x10 & 0x7fc0 | 0xffff8007) << 0x10;
      iVar18 = Ram00020000000003a8;
      iVar17 = 0;
      if (iVar18 != 2) {
        do {
          uVar8 = Ram00020000000006f8;
          iVar17 = iVar17 + 1;
        } while (iVar18 + -2 != iVar17);
      }
LAB_00039354:
      DAT_001010d8 = DAT_001010f8;
      uVar22 = Ram00020000000006f8;
      lVar10 = Ram00020000000006f8;
      *(uint *)(lVar7 + 0x108080000c8f8) = *(uint *)(lVar7 + 0x108080000c8f8) & 0xffffff7f | 0x8000;
      *(uint *)(lVar7 + 0x108080000c8f8) = *(uint *)(lVar7 + 0x108080000c8f8) & 0xffffffbf | 0x8000;
      DAT_001010d0 = lVar10 << 0x20 | uVar22;
      DAT_001010c8 = 0x40;
      FUN_00025a78(0xffffffffc0050004,uVar11 & 0x4e | 0x200000,0xc,0,0,0,0,0);
      gp = 0x101800;
      tp = 0x2000000000000;
      return;
    }
    iVar18 = Ram00020000000006f8;
    uVar9 = Ram00020000000006f8;
    uVar22 = Ram00020000000006f8;
    lVar10 = Ram00020000000006f8;
    uVar22 = lVar10 << 0x20 | uVar22;
    if (uVar22 == 0) {
      Ram00020000000000a8 = 0;
      *(uint *)(lVar7 + 0x108080000c8f8) =
           *(uint *)(lVar7 + 0x108080000c8f8) & 0xffff |
           (*(uint *)(lVar7 + 0x108080000c8f8) >> 0x10 & 0x7fc0 | 0xffff8004) << 0x10;
      iVar18 = Ram00020000000003a8;
      iVar17 = 0;
      if (iVar18 != 2) {
        do {
          uVar8 = Ram00020000000006f8;
          iVar17 = iVar17 + 1;
        } while (iVar18 + -2 != iVar17);
      }
LAB_00039db0:
      DAT_001010d8 = DAT_001010f8;
      uVar22 = Ram00020000000006f8;
      lVar10 = Ram00020000000006f8;
      *(uint *)(lVar7 + 0x108080000c8f8) = *(uint *)(lVar7 + 0x108080000c8f8) & 0xffffff7f | 0x8000;
      *(uint *)(lVar7 + 0x108080000c8f8) = *(uint *)(lVar7 + 0x108080000c8f8) & 0xffffffbf | 0x8000;
      DAT_001010d0 = lVar10 << 0x20 | uVar22;
      DAT_001010c8 = 8;
      FUN_00025a78(0xffffffffc0050004,uVar11 & 0x4e | 0x200000,0xc,0,0,0,0,0);
      gp = 0x101800;
      tp = 0x2000000000000;
      return;
    }
    Ram0002000000000390 = uVar22 + 0x10;
    plVar4 = (long *)Ram0002000000000390;
    uVar13 = Ram00020000000002d0;
    Ram000100020000b81c = uVar20;
    Ram000100020000b820 = uVar21;
    Ram000100020000b824 = iVar17;
    if ((uVar13 & 0x40) != 0) {
      Ram00020000000000a8 = 0;
      Ram00020000000000a8 = 2;
      Ram000100020000b838 = *(uint *)(lVar7 + 0x108080000c84c) >> 4;
    }
    Ram000100020000b830 = (int)(uVar22 + *plVar4 >> 8);
    Ram000100020000b834 = (uint)(uVar22 + *plVar4 >> 0x28) | 0x100;
    uVar21 = (uint)((uVar9 & 0x1ff) != 0) + (uVar9 >> 9);
    Ram000100020000b8a0 = *(undefined4 *)((long)plVar4 + 0x1c);
    uVar22 = plVar4[4];
    uVar9 = (uint)uVar22 & (uint)DAT_00101078;
    uVar20 = Ram00020000000002d8;
    uVar13 = 1;
    if ((uVar20 & 4) == 0) {
      uVar13 = uVar9 >> 0x14 & 1;
    }
    uVar20 = uVar9 & 0xffefffff | uVar13 << 0x14;
    Ram000100020000b848 = uVar20;
    Ram000100020000b84c = uVar21 * 0x8000 | (uVar11 & 1) << 6 | (uint)(uVar22 >> 0x20) & 0x1fbf;
    uVar27 = plVar4[5];
    uVar26 = uVar27 >> 10 & 1;
    if (0x80 < uVar21) {
      Ram00020000000000a8 = 0;
      *(uint *)(lVar7 + 0x108080000c8f8) =
           *(uint *)(lVar7 + 0x108080000c8f8) & 0xffff |
           (*(uint *)(lVar7 + 0x108080000c8f8) >> 0x10 & 0x7fc0 | 0xffff8003) << 0x10;
      iVar18 = Ram00020000000003a8;
      iVar17 = 0;
      if (iVar18 != 2) {
        do {
          uVar8 = Ram00020000000006f8;
          iVar17 = iVar17 + 1;
        } while (iVar18 + -2 != iVar17);
      }
LAB_00039fe8:
      DAT_001010d8 = DAT_001010f8;
      uVar22 = Ram00020000000006f8;
      lVar10 = Ram00020000000006f8;
      *(uint *)(lVar7 + 0x108080000c8f8) = *(uint *)(lVar7 + 0x108080000c8f8) & 0xffffff7f | 0x8000;
      *(uint *)(lVar7 + 0x108080000c8f8) = *(uint *)(lVar7 + 0x108080000c8f8) & 0xffffffbf | 0x8000;
      DAT_001010d0 = lVar10 << 0x20 | uVar22;
      DAT_001010c8 = 4;
      FUN_00025a78(0xffffffffc0050004,uVar11 & 0x4e | 0x200000,0xc,0,0,0,0,0);
      gp = 0x101800;
      tp = 0x2000000000000;
      return;
    }
    iVar17 = (uVar9 & 0x3f) + 1;
    if (uVar26 == 0) {
      uVar21 = iVar17 * 4;
    }
    else {
      uVar21 = iVar17 * 8;
    }
    uVar9 = (uint)uVar27;
    if (((ulong)(long)(int)uVar20 >> 0x1d & 1) == 0) {
      if (0x100 < uVar12) {
        if (uVar26 == 0) {
          if (uVar12 < 0x181) goto LAB_0003a32c;
          if (0x200 < uVar12) {
LAB_0003a348:
            if (uVar12 < 0x281) {
              bVar1 = 0x90 < uVar21;
            }
            else if (uVar12 < 0x301) {
              bVar1 = 0x78 < uVar21;
            }
            else if ((uVar26 == 0) && (uVar12 < 0x381)) {
              bVar1 = 0x6c < uVar21;
            }
            else {
              bVar1 = 0x60 < uVar21;
            }
            goto LAB_000386fc;
          }
        }
        else {
          if (uVar12 < 0x141) goto LAB_00039b18;
          if (uVar12 < 0x181) goto LAB_000386f4;
          if (uVar12 < 0x1c1) goto LAB_0003975c;
          if (0x200 < uVar12) {
            if (uVar12 < 0x241) {
              bVar1 = 0xa8 < uVar21;
              goto LAB_000386fc;
            }
            goto LAB_0003a348;
          }
        }
LAB_0003a318:
        bVar1 = 0xc0 < uVar21;
        goto LAB_000386fc;
      }
LAB_00038704:
      if ((uVar22 & 0x100000000) != 0) {
        uVar21 = DAT_001010c0;
        if (uVar26 != 0) {
LAB_00039f84:
          uVar21 = DAT_001010c0 << 1;
        }
        if (uVar21 < (iVar18 + 3U & 0xfffffffc) || (bVar6 & 0x80) != 0) {
          Ram00020000000000a8 = 0;
          if (uVar26 != 0) {
            *(uint *)(lVar7 + 0x108080000c8f8) =
                 *(uint *)(lVar7 + 0x108080000c8f8) & 0xffff |
                 (*(uint *)(lVar7 + 0x108080000c8f8) >> 0x10 & 0x7fc0 | 0xffff800b) << 0x10;
            iVar18 = Ram00020000000003a8;
            iVar17 = 0;
            if (iVar18 != 2) {
              do {
                uVar8 = Ram00020000000006f8;
                iVar17 = iVar17 + 1;
              } while (iVar18 + -2 != iVar17);
            }
LAB_0003a4d8:
            DAT_001010d8 = DAT_001010f8;
            uVar22 = Ram00020000000006f8;
            lVar10 = Ram00020000000006f8;
            *(uint *)(lVar7 + 0x108080000c8f8) =
                 *(uint *)(lVar7 + 0x108080000c8f8) & 0xffffff7f | 0x8000;
            *(uint *)(lVar7 + 0x108080000c8f8) =
                 *(uint *)(lVar7 + 0x108080000c8f8) & 0xffffffbf | 0x8000;
            *(uint *)(lVar7 + 0x108080000c87c) =
                 *(uint *)(lVar7 + 0x108080000c868) & 0x800000 | 0x81001ff |
                 *(uint *)(lVar7 + 0x108080000c868) & 0x3000000;
            DAT_001010d0 = lVar10 << 0x20 | uVar22;
            DAT_001010c8 = 0x400;
            FUN_00025a78(0xffffffffc0050004,uVar11 & 0x4e | 0x200000,0xc,0,0,0,0,0);
            gp = 0x101800;
            tp = 0x2000000000000;
            return;
          }
          *(uint *)(lVar7 + 0x108080000c8f8) =
               *(uint *)(lVar7 + 0x108080000c8f8) & 0xffff |
               (*(uint *)(lVar7 + 0x108080000c8f8) >> 0x10 & 0x7fc0 | 0xffff8001) << 0x10;
          iVar18 = Ram00020000000003a8;
          iVar17 = 0;
          if (iVar18 != 2) {
            do {
              uVar8 = Ram00020000000006f8;
              iVar17 = iVar17 + 1;
            } while (iVar18 + -2 != iVar17);
          }
LAB_0003a3bc:
          DAT_001010d8 = DAT_001010f8;
          uVar22 = Ram00020000000006f8;
          lVar10 = Ram00020000000006f8;
          *(uint *)(lVar7 + 0x108080000c8f8) =
               *(uint *)(lVar7 + 0x108080000c8f8) & 0xffffff7f | 0x8000;
          *(uint *)(lVar7 + 0x108080000c8f8) =
               *(uint *)(lVar7 + 0x108080000c8f8) & 0xffffffbf | 0x8000;
          *(uint *)(lVar7 + 0x108080000c87c) =
               *(uint *)(lVar7 + 0x108080000c868) & 0x800000 | 0x81001ff |
               *(uint *)(lVar7 + 0x108080000c868) & 0x3000000;
          DAT_001010d0 = lVar10 << 0x20 | uVar22;
          DAT_001010c8 = 1;
          FUN_00025a78(0xffffffffc0050004,uVar11 & 0x4e | 0x200000,0xc,0,0,0,0,0);
          gp = 0x101800;
          tp = 0x2000000000000;
          return;
        }
      }
    }
    else {
      if (uVar12 < 0x201) goto LAB_00038704;
      if (uVar26 == 0) {
        if (0x300 < uVar12) goto LAB_0003a318;
LAB_0003a32c:
        bVar1 = 0xfc < uVar21;
LAB_000386fc:
        if (bVar1) {
          Ram00020000000000a8 = 0;
          *(uint *)(lVar7 + 0x108080000c8f8) =
               *(uint *)(lVar7 + 0x108080000c8f8) & 0xffff |
               (*(uint *)(lVar7 + 0x108080000c8f8) >> 0x10 & 0x7fc0 | 0xffff8008) << 0x10;
          iVar18 = Ram00020000000003a8;
          iVar17 = 0;
          if (iVar18 != 2) {
            do {
              uVar8 = Ram00020000000006f8;
              iVar17 = iVar17 + 1;
            } while (iVar18 + -2 != iVar17);
          }
LAB_0003a5f8:
          DAT_001010d8 = DAT_001010f8;
          uVar22 = Ram00020000000006f8;
          lVar10 = Ram00020000000006f8;
          *(uint *)(lVar7 + 0x108080000c8f8) =
               *(uint *)(lVar7 + 0x108080000c8f8) & 0xffffff7f | 0x8000;
          *(uint *)(lVar7 + 0x108080000c8f8) =
               *(uint *)(lVar7 + 0x108080000c8f8) & 0xffffffbf | 0x8000;
          DAT_001010d0 = lVar10 << 0x20 | uVar22;
          DAT_001010c8 = 0x80;
          FUN_00025a78(0xffffffffc0050004,uVar11 & 0x4e | 0x200000,0xc,0,0,0,0,0);
          gp = 0x101800;
          tp = 0x2000000000000;
          return;
        }
        goto LAB_00038704;
      }
      if (0x280 < uVar12) {
        if (uVar12 < 0x301) {
LAB_000386f4:
          bVar1 = 0xf0 < uVar21;
        }
        else {
          if (0x380 < uVar12) goto LAB_0003a318;
LAB_0003975c:
          bVar1 = 0xd8 < uVar21;
        }
        goto LAB_000386fc;
      }
LAB_00039b18:
      if ((uVar22 & 0x100000000) != 0) goto LAB_00039f84;
    }
    uVar21 = uVar9 & 1;
    if ((uVar27 & 1) != 0) {
      Ram000100020000b900 = (int)DAT_001010e8;
      Ram000100020000b904 = (int)((ulong)DAT_001010e8 >> 0x20);
      Ram000100020000b908 = (int)DAT_001010f0;
      Ram000100020000b90c = (uVar9 & 0x400) << 0xb ^ 0x600000 | (uint)((ulong)DAT_001010f0 >> 0x20);
      uVar21 = 4;
    }
    if ((uVar9 >> 1 & 1) != 0) {
      Ram00020000000000a8 = 0;
      lVar10 = *(long *)(lVar7 + 0x108080000c844) * 0x100 +
               (ulong)(uint)(*(int *)(lVar7 + 0x108080000c84c) << 2);
      Ram00020000000000a8 = 2;
      *(int *)(((ulong)((long)(int)(uVar21 + 0x2e40) << 0x20) >> 0x1e) + 0x1000200000000) =
           (int)lVar10;
      *(int *)(((ulong)((long)(int)(uVar21 + 0x2e41) << 0x20) >> 0x1e) + 0x1000200000000) =
           (int)((ulong)lVar10 >> 0x20);
      uVar21 = uVar21 + 2;
    }
    if ((uVar9 >> 2 & 1) != 0) {
      Ram00020000000000a8 = 0;
      uVar8 = *(undefined4 *)(lVar7 + 0x108080000c854);
      Ram00020000000000a8 = 2;
      *(uint *)(((ulong)((long)(int)(uVar21 + 0x2e40) << 0x20) >> 0x1e) + 0x1000200000000) =
           *(int *)(lVar7 + 0x108080000c850) - (uint)((uint7)(undefined7)DAT_001010b8 >> 0x20);
      *(undefined4 *)(((ulong)((long)(int)(uVar21 + 0x2e41) << 0x20) >> 0x1e) + 0x1000200000000) =
           uVar8;
      uVar21 = uVar21 + 2;
    }
    uVar20 = uVar21;
    if ((uVar9 >> 3 & 1) != 0) {
      uVar8 = Ram00020000000006f8;
      *(undefined4 *)(((ulong)((long)(int)(uVar21 + 0x2e40) << 0x20) >> 0x1e) + 0x1000200000000) =
           uVar8;
      uVar20 = uVar21 + 2;
      uVar8 = Ram00020000000006f8;
      *(undefined4 *)(((ulong)((long)(int)(uVar21 + 0x2e41) << 0x20) >> 0x1e) + 0x1000200000000) =
           uVar8;
    }
    lVar10 = DAT_001010f8;
    if ((uVar9 >> 4 & 1) != 0) {
      *(int *)(((ulong)((long)(int)(uVar20 + 0x2e40) << 0x20) >> 0x1e) + 0x1000200000000) =
           (int)DAT_001010f8;
      *(int *)(((ulong)((long)(int)(uVar20 + 0x2e41) << 0x20) >> 0x1e) + 0x1000200000000) =
           (int)((ulong)lVar10 >> 0x20);
      uVar20 = uVar20 + 2;
    }
    uVar2 = DAT_001010e0;
    if ((uVar9 >> 5 & 1) != 0) {
      *(int *)(((ulong)((long)(int)(uVar20 + 0x2e40) << 0x20) >> 0x1e) + 0x1000200000000) =
           (int)DAT_001010e0;
      *(int *)(((ulong)((long)(int)(uVar20 + 0x2e41) << 0x20) >> 0x1e) + 0x1000200000000) =
           (int)((ulong)uVar2 >> 0x20);
      uVar20 = uVar20 + 2;
    }
    if ((uVar9 >> 6 & 1) != 0) {
      *(uint *)(((ulong)((long)(int)(uVar20 + 0x2e40) << 0x20) >> 0x1e) + 0x1000200000000) =
           DAT_001010c0;
    }
    Ram000100020000b800 = (uint)(uVar26 << 0xf) | (uint)(uVar27 >> 0xd) & 8 | 0x1065;
    Ram00020000000000a8 = 0;
  }
  iVar18 = Ram00020000000003a8;
  iVar17 = 0;
  if (iVar18 != 2) {
    do {
      uVar8 = Ram00020000000006f8;
      iVar17 = iVar17 + 1;
    } while (iVar18 + -2 != iVar17);
  }
  uVar22 = Ram00020000000006f8;
  lVar10 = Ram00020000000006f8;
  uVar21 = *(uint *)(lVar7 + 0x108080000c8f8);
  uVar22 = lVar10 << 0x20 | uVar22;
  DAT_001010d0 = uVar22;
  if ((uVar22 != 0) && ((bVar6 & 8) != 0)) {
    *(uint *)(lVar7 + 0x108080000c8f8) = uVar21 | 0x8010;
    Ram0002000000000390 = uVar22 + 0x20;
    puVar3 = (undefined8 *)Ram0002000000000390;
    uVar2 = Ram00020000000000f8;
    *puVar3 = uVar2;
    uVar21 = uVar21 & 0xffffffef;
  }
  *(uint *)(lVar7 + 0x108080000c8f8) = uVar21 & 0xffffff7f | 0x8000;
LAB_00037ecc:
  Ram0002000000000488 = 0x101;
  DAT_00101100 = uVar19;
  FUN_000245c0();
  return;
LAB_0003a1e4:
  uVar21 = param_1 >> 9 & 3;
  *(uint *)(lVar7 + 0x108080000c8f8) = *(uint *)(lVar7 + 0x108080000c8f8) & 0xfffd;
  if (uVar21 - 1 < 2) {
    if (uVar21 == 2) {
      uVar8 = 0xc3c0;
    }
    else {
      uVar8 = 0x3c0;
    }
    fence();
    Ram0002000000000518 = uVar8;
    uVar8 = Ram0002000000000020;
    Ram0002000000000040 = 1;
    uVar21 = Ram0002000000000070;
    _DAT_1000100003898 = 4 << ((long)(int)(uVar21 >> 6) & 3U | (long)(int)(uVar21 >> 3) & 4U);
    do {
    } while ((_DAT_1000100003898 & _DAT_100010000389c) == 0);
    Ram0002000000000040 = uVar8;
    Ram00020000000002a8 = 0;
    do {
      lVar10 = Ram00020000000004b8;
      _DAT_100010000389c = _DAT_1000100003898;
    } while (lVar10 != 0);
  }
LAB_0003810c:
  DAT_001010d8 = DAT_001010f8;
  DAT_001010f8 = DAT_001010f8 + 1;
joined_r0x000381b0:
  if ((uVar19 >> 0xb & 3) != 2) {
LAB_000381b4:
    uVar11 = uVar11 & 0x4e | 0x40;
    goto LAB_00037b7c;
  }
LAB_00038134:
  uVar11 = uVar11 & 0x4e | 0x200040;
LAB_00037b7c:
  DAT_001010c8 = 0;
  *(uint *)(lVar7 + 0x108080000c8f8) = *(uint *)(lVar7 + 0x108080000c8f8) | 0x8040;
  FUN_00025a78(0xffffffffc0050004,uVar11,4,0,0,0,0,0);
  gp = 0x101800;
  tp = 0x2000000000000;
  return;
}


/* ---- sub_3ab60 @ 0003ab60 size=24 ---- */

void sub_3ab60(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = Ram0002000000000028;
  Ram00020000000000a8 = 0;
  uVar1 = Ram0002000000000008;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- sub_3ab80 @ 0003ab80 size=24 ---- */

void sub_3ab80(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = Ram0002000000000028;
  Ram00020000000000a8 = 0;
  uVar1 = Ram0002000000000008;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- sub_3aba0 @ 0003aba0 size=132 ---- */

undefined8 sub_3aba0(void)

{
  undefined1 uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar2 = Ram0002000000000028;
  Ram00020000000000a8 = 0;
  uVar3 = Ram0002000000000780;
  if ((uVar3 & 0x40000000) == 0) {
    Ram0002000000000348 = 0;
  }
  else {
    Ram00020000000006f8 = 1;
    Ram0002000000000780 = uVar3 & 0xc0000000;
  }
  uVar3 = Ram0002000000000068;
  Ram00020000000003c8 = 1 << ((ulong)uVar3 & 0x1f);
  do {
    uVar4 = Ram0002000000000300;
  } while ((uVar4 >> ((long)(int)uVar3 & 0x3fU) & 1) == 0);
  Ram0002000000000378 = 0;
  if ((uVar2 & 2) != 0) {
    Ram00020000000000a8 = 2;
  }
  uVar1 = TP_R008;
  uVar5 = Ram00020000000007c8;
  uVar5 = Ram00020000000007d0;
  TP_R020 = uVar1;
  uVar5 = Ram00020000000007c0;
  return uVar5;
}


/* ---- sub_3ac28 @ 0003ac28 size=92 ---- */

/* WARNING: Removing unreachable block (ram,0x0003ac28) */

undefined8 sub_3ac28(void)

{
  undefined1 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long in_dscratch0;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  if (in_dscratch0 != 0) {
    uVar2 = Ram0002000000000730;
    lVar3 = Ram00020000000007b0;
    Ram0001000100030118 = (int)*(undefined8 *)(((uVar2 >> 6) - 1 & 0xf) * 8 + lVar3);
  }
  uVar1 = TP_R008;
  uVar4 = Ram00020000000007c8;
  uVar4 = Ram00020000000007d0;
  TP_R020 = uVar1;
  uVar4 = Ram00020000000007c0;
  return uVar4;
}


/* ---- sub_3ac88 @ 0003ac88 size=220 ---- */

/* WARNING: Removing unreachable block (ram,0x0003ac9c) */
/* WARNING: Removing unreachable block (ram,0x0003ace4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 sub_3ac88(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  uint in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar3 = Ram0002000000000028;
  Ram00020000000000a8 = 0;
  Ram0002000000000040 = 1;
  if (in_mhartid == 0) {
    *DAT_00101000 = 0x1000000;
    *DAT_00101008 = 0x1000000;
  }
  _DAT_1000100032414 = 0;
  _DAT_1000100032418 = 0;
  Ram0002000000000020 = 0x18;
  Ram0002000000000710 = 0x1000000;
  uVar4 = in_mhartid & 0xf;
  if (uVar4 == 2) {
    _DAT_1000100032478 = 1;
  }
  else if (uVar4 < 3) {
    if (uVar4 == 0) {
      _DAT_1000100032470 = 1;
    }
    else if (uVar4 == 1) {
      _DAT_1000100032474 = 1;
    }
  }
  else if (uVar4 == 3) {
    _DAT_100010003247c = 1;
  }
  uVar2 = Ram0002000000000020;
  custom0();
  if ((uVar3 & 2) != 0) {
    Ram00020000000000a8 = 2;
  }
  uVar1 = TP_R008;
  uVar2 = Ram00020000000007c8;
  uVar2 = Ram00020000000007d0;
  TP_R020 = uVar1;
  uVar2 = Ram00020000000007c0;
  return uVar2;
}


/* ---- sub_3ad68 @ 0003ad68 size=32 ---- */
/* DECOMPILE FAILED: Exception while decompiling 0003ad68: process: timeout
 */

/* ---- sub_3ad90 @ 0003ad90 size=1064 ---- */

/* WARNING: Removing unreachable block (ram,0x0003b110) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 sub_3ad90(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  int in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar5 = Ram0002000000000028;
  Ram00020000000000a8 = 0;
  uVar10 = Ram0002000000000020;
  Ram0002000000000040 = 1;
  if ((_DAT_100010002e000 & 1) != 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar14 = Ram0002000000000448;
  lVar12 = ((long)(int)(uVar14 >> 4) & 0xfU | (long)(int)((uVar14 >> 8 & 7) << 4)) << 0x24;
  uVar15 = *(uint *)(lVar12 + 0x108080000c830) & 0xf;
  uVar9 = uVar14 >> 8 & 7;
  uVar11 = uVar15;
  if (*(int *)(lVar12 + 0x108080000c868) < 0) {
    uVar11 = *(uint *)(lVar12 + 0x108080000c830) >> 8 & 0xf;
  }
  Ram0002000000000448 = uVar11 | 0x400;
  Ram0002000000000448 = 0x4001;
  Ram0002000000000448 = uVar14 & 7 | 0x20;
  uVar11 = *(uint *)(lVar12 + 0x108080000c8f0);
  uVar7 = Ram0002000000000450;
  _DAT_100010000c0e4 = (uint)uVar7 & 0xfffff000;
  if ((uVar14 & 7) == 0) {
    uVar11 = uVar11 | 0x80000;
  }
  else if ((uVar14 & 7) == 1) {
    uVar11 = uVar11 | 0x40000;
  }
  else {
    uVar11 = uVar11 | 0x20000;
  }
  *(uint *)(lVar12 + 0x108080000c8f0) = uVar11;
  *(undefined4 *)(lVar12 + 0x108080000c8ac) = 0x2000;
  *(undefined4 *)(lVar12 + 0x108080000c84c) = *(undefined4 *)(lVar12 + 0x108080000c8fc);
  *(uint *)(lVar12 + 0x108080000c87c) =
       (uint)((ulong)((long)(int)*(uint *)(lVar12 + 0x108080000c87c) << 0x28) >> 0x28) |
       *(uint *)(lVar12 + 0x108080000c87c) & 0x1f000000;
  *(undefined4 *)(lVar12 + 0x108080000c884) = 0x200;
  *(undefined4 *)(lVar12 + 0x108080000c878) = 0;
  uVar11 = (uint)((ulong)((long)*(int *)(lVar12 + 0x108080000c860) << 0x21) >> 0x20);
  *(uint *)(lVar12 + 0x108080000c860) = uVar11 >> 1;
  do {
  } while (_DAT_100010000c2d4 != 0);
  _DAT_100010000c2dc = uVar11 >> 1 & 0x8ffffffc;
  _DAT_100010000c0dc = (uint)((ulong)uVar7 >> 0x20) & 0x8f0fffff | uVar15 << 0x14 | uVar9 << 0x1c;
  _DAT_100010000c0e8 = 0x10000;
  Ram0002000000000448 = 0x810;
  _DAT_100010000c2d4 = 0x10000;
  Ram0002000000000448 = 0x800;
  iVar6 = Ram0002000000000208;
  if (iVar6 == 0) {
    uVar11 = Ram00020000000002d8;
    if ((uVar11 & 0x80) != 0) {
      uVar11 = (uint)*(undefined8 *)
                      (((ulong)((long)((in_mhartid + 0xc) * 4) << 0x20) >> 0x1d) + 0x3000000000000);
      goto LAB_0003afb4;
    }
    bVar3 = false;
    bVar2 = false;
    bVar1 = false;
  }
  else {
    uVar11 = Ram0002000000000108;
LAB_0003afb4:
    bVar1 = ((uVar11 >> 0xc ^ uVar14 >> 8) & 7) == 0;
    bVar2 = (uVar11 & 0xf8) == 0;
    bVar3 = true;
  }
  uVar14 = Ram0002000000000070;
  lVar13 = (long)(int)(uVar14 >> 4) << 0x24;
  if (((uVar9 == (*(uint *)(lVar13 + 0x108080002e088) >> 5 & 7)) &&
      (uVar14 = *(uint *)(lVar13 + 0x108080002e088) & 0x1f, uVar14 != 0)) && (uVar14 < 0x10)) {
    Ram0002000000000150 = 0;
    Ram0002000000000060 = 0;
    Ram00020000000004c0 = 0;
    Ram0002000000000068 = 0;
    Ram00020000000004c0 = 1;
    *(undefined4 *)(lVar13 + 0x108080002e088) = 0x40000000;
    Ram0002000000000558 = 3;
    do {
      iVar8 = Ram00020000000004c8;
    } while (iVar8 != 0);
    *(undefined4 *)(lVar13 + 0x108080002e088) = 0x81500000;
    Ram0002000000000448 = 0;
    Ram0002000000000448 = 0x4000;
  }
  else {
    Ram0002000000000448 = 0;
    Ram0002000000000448 = 0x4000;
    if (((!bVar3) || (!bVar1)) || (!bVar2)) goto LAB_0003b060;
  }
  if (iVar6 != 0) {
    uVar10 = Ram00020000000006f8;
    Ram00020000000003c0 = uVar10;
  }
  Ram0002000000000490 = 0x8000;
  Ram0002000000000080 = 0;
  Ram00020000000003c0 = 0;
  Ram0002000000000278 = 0;
  Ram0002000000000180 = 0;
  Ram0002000000000178 = 0;
  Ram0002000000000140 = 0;
  Ram0002000000000150 = 0;
  Ram00020000000006f0 = 0x905a;
  uVar10 = 0;
LAB_0003b060:
  if (*(int *)(lVar12 + 0x108080000c82c) != 0) {
    do {
      do {
        uVar14 = *(uint *)(lVar12 + 0x108080000c884) & 0xf;
      } while (uVar14 == 0);
    } while (uVar14 == 4);
  }
  Ram0002000000000040 = uVar10;
  if ((uVar5 & 2) != 0) {
    Ram00020000000000a8 = 2;
  }
  uVar4 = TP_R008;
  uVar7 = Ram00020000000007c8;
  uVar7 = Ram00020000000007d0;
  TP_R020 = uVar4;
  uVar7 = Ram00020000000007c0;
  return uVar7;
}


/* ---- sub_3b1c0 @ 0003b1c0 size=1064 ---- */

/* WARNING: Removing unreachable block (ram,0x0003b4f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 sub_3b1c0(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  int in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar5 = Ram0002000000000028;
  Ram00020000000000a8 = 0;
  uVar10 = Ram0002000000000020;
  Ram0002000000000040 = 1;
  if ((_DAT_100010002e000 & 1) != 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar15 = Ram0002000000000448;
  lVar13 = ((long)(int)(uVar15 >> 4) & 0xfU | (long)(int)((uVar15 >> 8 & 7) << 4)) << 0x24;
  uVar16 = *(uint *)(lVar13 + 0x108080000c830) & 0xf;
  uVar9 = uVar15 >> 8 & 7;
  uVar11 = uVar16;
  if (*(int *)(lVar13 + 0x108080000c868) < 0) {
    uVar11 = *(uint *)(lVar13 + 0x108080000c830) >> 8 & 0xf;
  }
  Ram0002000000000448 = uVar11 | 0x400;
  Ram0002000000000448 = 0x4001;
  Ram0002000000000448 = 0x20;
  uVar11 = Ram0001000100030228;
  Ram0001000100030228 = uVar11 | 1;
  if ((uVar15 & 1) == 0) {
    uVar11 = Ram000100010003020c;
    _DAT_100010000c0e4 = Ram0001000100030208;
    uVar12 = *(uint *)(lVar13 + 0x108080000c8f0) | 0x10000;
  }
  else {
    uVar11 = Ram0001000100030204;
    _DAT_100010000c0e4 = Ram0001000100030200;
    uVar12 = *(uint *)(lVar13 + 0x108080000c8f0) | 0x8000;
  }
  *(uint *)(lVar13 + 0x108080000c8f0) = uVar12;
  *(undefined4 *)(lVar13 + 0x108080000c8ac) = 0x2000;
  *(undefined4 *)(lVar13 + 0x108080000c84c) = *(undefined4 *)(lVar13 + 0x108080000c8fc);
  *(uint *)(lVar13 + 0x108080000c87c) =
       (uint)((ulong)((long)(int)*(uint *)(lVar13 + 0x108080000c87c) << 0x28) >> 0x28) |
       *(uint *)(lVar13 + 0x108080000c87c) & 0x1f000000;
  *(undefined4 *)(lVar13 + 0x108080000c884) = 0x200;
  *(undefined4 *)(lVar13 + 0x108080000c878) = 0;
  uVar12 = (uint)((ulong)((long)*(int *)(lVar13 + 0x108080000c860) << 0x21) >> 0x20);
  *(uint *)(lVar13 + 0x108080000c860) = uVar12 >> 1;
  do {
  } while (_DAT_100010000c2d4 != 0);
  _DAT_100010000c2dc = uVar12 >> 1 & 0x8ffffffc;
  _DAT_100010000c0dc = uVar11 & 0x8f0fffff | uVar16 << 0x14 | uVar9 << 0x1c;
  _DAT_100010000c0e8 = 0x10000;
  Ram0002000000000448 = 0x810;
  _DAT_100010000c2d4 = 0x10000;
  Ram0002000000000448 = 0x800;
  iVar6 = Ram0002000000000208;
  if (iVar6 == 0) {
    uVar11 = Ram00020000000002d8;
    if ((uVar11 & 0x80) != 0) {
      uVar11 = (uint)*(undefined8 *)
                      (((ulong)((long)((in_mhartid + 0xc) * 4) << 0x20) >> 0x1d) + 0x3000000000000);
      goto LAB_0003b3e0;
    }
    bVar3 = false;
    bVar2 = false;
    bVar1 = false;
  }
  else {
    uVar11 = Ram0002000000000108;
LAB_0003b3e0:
    bVar1 = ((uVar11 >> 0xc ^ uVar15 >> 8) & 7) == 0;
    bVar2 = (uVar11 & 0xf8) == 0;
    bVar3 = true;
  }
  uVar15 = Ram0002000000000070;
  lVar14 = (long)(int)(uVar15 >> 4) << 0x24;
  if (((uVar9 == (*(uint *)(lVar14 + 0x108080002e088) >> 5 & 7)) &&
      (uVar15 = *(uint *)(lVar14 + 0x108080002e088) & 0x1f, uVar15 != 0)) && (uVar15 < 0x10)) {
    Ram0002000000000150 = 0;
    Ram0002000000000060 = 0;
    Ram00020000000004c0 = 0;
    Ram0002000000000068 = 0;
    Ram00020000000004c0 = 1;
    *(undefined4 *)(lVar14 + 0x108080002e088) = 0x40000000;
    Ram0002000000000558 = 3;
    do {
      iVar7 = Ram00020000000004c8;
    } while (iVar7 != 0);
    *(undefined4 *)(lVar14 + 0x108080002e088) = 0x81500000;
    Ram0002000000000448 = 0;
    Ram0002000000000448 = 0x4000;
  }
  else {
    Ram0002000000000448 = 0;
    Ram0002000000000448 = 0x4000;
    if (((!bVar3) || (!bVar1)) || (!bVar2)) goto LAB_0003b444;
  }
  if (iVar6 != 0) {
    uVar10 = Ram00020000000006f8;
    Ram00020000000003c0 = uVar10;
  }
  Ram0002000000000490 = 0x8000;
  Ram0002000000000080 = 0;
  Ram00020000000003c0 = 0;
  Ram0002000000000278 = 0;
  Ram0002000000000180 = 0;
  Ram0002000000000178 = 0;
  Ram0002000000000140 = 0;
  Ram0002000000000150 = 0;
  Ram00020000000006f0 = 0x905a;
  uVar10 = 0;
LAB_0003b444:
  if (*(int *)(lVar13 + 0x108080000c82c) != 0) {
    do {
      do {
        uVar15 = *(uint *)(lVar13 + 0x108080000c884) & 0xf;
      } while (uVar15 == 0);
    } while (uVar15 == 4);
  }
  Ram0002000000000040 = uVar10;
  if ((uVar5 & 2) != 0) {
    Ram00020000000000a8 = 2;
  }
  uVar4 = TP_R008;
  uVar8 = Ram00020000000007c8;
  uVar8 = Ram00020000000007d0;
  TP_R020 = uVar4;
  uVar8 = Ram00020000000007c0;
  return uVar8;
}


/* ---- sub_3b5f0 @ 0003b5f0 size=324 ---- */

/* WARNING: Removing unreachable block (ram,0x0003b90c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 sub_3b5f0(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  int in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar5 = Ram0002000000000028;
  Ram00020000000000a8 = 0;
  uVar11 = Ram0002000000000020;
  Ram0002000000000040 = 1;
  if ((_DAT_100010002e000 & 1) != 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar7 = Ram0002000000000448;
  lVar13 = ((long)(int)(uVar7 >> 0xf) & 0xfU | (long)(int)((uVar7 >> 0x13 & 7) << 4)) << 0x24;
  uVar12 = *(uint *)(lVar13 + 0x108080000c830);
  uVar10 = uVar7 >> 0x13 & 7;
  if (*(int *)(lVar13 + 0x108080000c868) < 0) {
    uVar12 = uVar12 >> 8;
  }
  Ram0002000000000448 = uVar12 & 0xf | 0x400;
  uVar14 = uVar7 >> 0xb & 7;
  Ram0002000000000448 = 0x4001;
  Ram0002000000000448 = uVar14 | 8;
  uVar12 = *(uint *)(lVar13 + 0x108080000c8f0);
  *(uint *)(lVar13 + 0x108080000c80c) = uVar14;
  _DAT_100010000c0e4 = *(undefined4 *)(lVar13 + 0x108080000c820);
  switch(uVar14) {
  case 0:
    uVar12 = uVar12 | 0x100;
    break;
  case 1:
    uVar12 = uVar12 | 0x200;
    break;
  case 2:
    uVar12 = uVar12 | 0x400;
    break;
  case 3:
    uVar12 = uVar12 | 0x800;
    break;
  case 4:
    uVar12 = uVar12 | 0x1000;
    break;
  case 5:
    uVar12 = uVar12 | 0x2000;
  }
  *(uint *)(lVar13 + 0x108080000c8f0) = uVar12;
  *(undefined4 *)(lVar13 + 0x108080000c8ac) = 0x2000;
  *(undefined4 *)(lVar13 + 0x108080000c84c) = *(undefined4 *)(lVar13 + 0x108080000c8fc);
  *(uint *)(lVar13 + 0x108080000c87c) =
       (uint)((ulong)((long)(int)*(uint *)(lVar13 + 0x108080000c87c) << 0x28) >> 0x28) |
       *(uint *)(lVar13 + 0x108080000c87c) & 0x1f000000;
  *(undefined4 *)(lVar13 + 0x108080000c884) = 0x200;
  *(undefined4 *)(lVar13 + 0x108080000c878) = 0;
  uVar12 = (uint)((ulong)((long)*(int *)(lVar13 + 0x108080000c860) << 0x21) >> 0x20);
  *(uint *)(lVar13 + 0x108080000c860) = uVar12 >> 1;
  do {
  } while (_DAT_100010000c2d4 != 0);
  _DAT_100010000c2dc = uVar12 >> 1 & 0x8ffffffc;
  _DAT_100010000c0dc = *(uint *)(lVar13 + 0x108080000c81c) & 0x8fffffff | uVar10 << 0x1c;
  _DAT_100010000c0e8 = 0x10000;
  Ram0002000000000448 = 0x810;
  _DAT_100010000c2d4 = 0x10000;
  Ram0002000000000448 = 0x800;
  iVar6 = Ram0002000000000208;
  if (iVar6 == 0) {
    uVar12 = Ram00020000000002d8;
    if ((uVar12 & 0x80) != 0) {
      uVar12 = (uint)*(undefined8 *)
                      (((ulong)((long)((in_mhartid + 0xc) * 4) << 0x20) >> 0x1d) + 0x3000000000000);
      goto LAB_0003b81c;
    }
    bVar3 = false;
    bVar2 = false;
    bVar1 = false;
  }
  else {
    uVar12 = Ram0002000000000108;
LAB_0003b81c:
    bVar1 = ((uVar12 >> 0xc ^ uVar7 >> 0x13) & 7) == 0;
    bVar2 = (uVar12 & 0xf8) == 0;
    bVar3 = true;
  }
  uVar12 = Ram0002000000000070;
  lVar15 = (long)(int)(uVar12 >> 4) << 0x24;
  if (((uVar10 == (*(uint *)(lVar15 + 0x108080002e088) >> 5 & 7)) &&
      (uVar12 = *(uint *)(lVar15 + 0x108080002e088) & 0x1f, uVar12 != 0)) && (uVar12 < 0x10)) {
    Ram0002000000000150 = 0;
    Ram0002000000000060 = 0;
    Ram00020000000004c0 = 0;
    Ram0002000000000068 = 0;
    Ram00020000000004c0 = 1;
    *(undefined4 *)(lVar15 + 0x108080002e088) = 0x40000000;
    Ram0002000000000558 = 3;
    do {
      iVar8 = Ram00020000000004c8;
    } while (iVar8 != 0);
    *(undefined4 *)(lVar15 + 0x108080002e088) = 0x81500000;
    Ram0002000000000448 = 0;
    Ram0002000000000448 = 0x4000;
  }
  else {
    Ram0002000000000448 = 0;
    Ram0002000000000448 = 0x4000;
    if (((!bVar3) || (!bVar1)) || (!bVar2)) goto LAB_0003b880;
  }
  if (iVar6 != 0) {
    uVar11 = Ram00020000000006f8;
    Ram00020000000003c0 = uVar11;
  }
  Ram0002000000000490 = 0x8000;
  Ram0002000000000080 = 0;
  Ram00020000000003c0 = 0;
  Ram0002000000000278 = 0;
  Ram0002000000000180 = 0;
  Ram0002000000000178 = 0;
  Ram0002000000000140 = 0;
  Ram0002000000000150 = 0;
  Ram00020000000006f0 = 0x905a;
  uVar11 = 0;
LAB_0003b880:
  if (*(int *)(lVar13 + 0x108080000c82c) != 0) {
    do {
      do {
        uVar12 = *(uint *)(lVar13 + 0x108080000c884) & 0xf;
      } while (uVar12 == 0);
    } while (uVar12 == 4);
  }
  Ram0002000000000040 = uVar11;
  if ((uVar5 & 2) != 0) {
    Ram00020000000000a8 = 2;
  }
  uVar4 = TP_R008;
  uVar9 = Ram00020000000007c8;
  uVar9 = Ram00020000000007d0;
  TP_R020 = uVar4;
  uVar9 = Ram00020000000007c0;
  return uVar9;
}


/* ---- sub_3b728 @ 0003b728 size=544 ---- */

/* WARNING: Removing unreachable block (ram,0x0003b90c) */

undefined8 sub_3b728(ulong param_1,undefined4 param_2,long param_3,uint param_4,long param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int in_t1;
  undefined4 in_register_00002034;
  long lVar9;
  uint uVar10;
  ulong in_t3;
  undefined4 in_t4;
  uint in_t5;
  int in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  *(uint *)(param_3 + 0xc8f0) = in_t5 | 0x100;
  *(undefined4 *)(param_3 + 0xc8ac) = 0x2000;
  *(undefined4 *)(param_3 + 0xc84c) = *(undefined4 *)(param_3 + 0xc8fc);
  *(uint *)(param_3 + 0xc87c) =
       (uint)((ulong)((long)(int)*(uint *)(param_3 + 0xc87c) << 0x28) >> 0x28) |
       *(uint *)(param_3 + 0xc87c) & 0x1f000000;
  *(undefined4 *)(param_3 + 0xc884) = 0x200;
  *(undefined4 *)(param_3 + 0xc878) = 0;
  uVar10 = (uint)((ulong)((long)*(int *)(param_3 + 0xc860) << 0x21) >> 0x20);
  *(uint *)(param_3 + 0xc860) = uVar10 >> 1;
  do {
  } while (*(int *)(param_5 + 0x31b0) != 0);
  *(uint *)(param_5 + 0x31b8) = uVar10 >> 1 & 0x8ffffffc;
  *(uint *)(&DAT_00002fb8 + param_5) = param_4 & 0x8fffffff | in_t1 << 0x1c;
  *(undefined4 *)(&DAT_00002fc0 + param_5) = in_t4;
  *(undefined4 *)(&DAT_00002fc4 + param_5) = 0x10000;
  Ram0002000000000448 = 0x810;
  *(undefined4 *)(param_5 + 0x31b0) = 0x10000;
  Ram0002000000000448 = 0x800;
  iVar5 = Ram0002000000000208;
  if (iVar5 == 0) {
    uVar10 = Ram00020000000002d8;
    if ((uVar10 & 0x80) != 0) {
      uVar10 = (uint)*(undefined8 *)
                      (((ulong)((long)((in_mhartid + 0xc) * 4) << 0x20) >> 0x1d) + 0x3000000000000);
      goto LAB_0003b81c;
    }
    bVar3 = false;
    bVar2 = false;
    bVar1 = false;
  }
  else {
    uVar10 = Ram0002000000000108;
LAB_0003b81c:
    bVar1 = (((long)(int)(uVar10 >> 0xc) ^ in_t3) & 7) == 0;
    bVar2 = (uVar10 & 0xf8) == 0;
    bVar3 = true;
  }
  uVar10 = Ram0002000000000070;
  lVar9 = (long)(int)(uVar10 >> 4) << 0x24;
  if (((CONCAT44(in_register_00002034,in_t1) ==
        ((long)(int)(*(uint *)(lVar9 + 0x108080002e088) >> 5) & 7U)) &&
      (uVar10 = *(uint *)(lVar9 + 0x108080002e088) & 0x1f, uVar10 != 0)) && (uVar10 < 0x10)) {
    Ram0002000000000150 = 0;
    Ram0002000000000060 = 0;
    Ram00020000000004c0 = 0;
    Ram0002000000000068 = 0;
    Ram00020000000004c0 = 1;
    *(undefined4 *)(lVar9 + 0x108080002e088) = 0x40000000;
    Ram0002000000000558 = 3;
    do {
      iVar6 = Ram00020000000004c8;
    } while (iVar6 != 0);
    *(undefined4 *)(lVar9 + 0x108080002e088) = 0x81500000;
    Ram0002000000000448 = 0;
    Ram0002000000000448 = 0x4000;
  }
  else {
    Ram0002000000000448 = 0;
    Ram0002000000000448 = 0x4000;
    if (((!bVar3) || (!bVar1)) || (!bVar2)) goto LAB_0003b880;
  }
  if (iVar5 != 0) {
    uVar7 = Ram00020000000006f8;
    Ram00020000000003c0 = uVar7;
  }
  Ram0002000000000490 = 0x8000;
  Ram0002000000000080 = 0;
  Ram00020000000003c0 = 0;
  Ram0002000000000278 = 0;
  Ram0002000000000180 = 0;
  Ram0002000000000178 = 0;
  Ram0002000000000140 = 0;
  Ram0002000000000150 = 0;
  Ram00020000000006f0 = 0x905a;
  param_2 = 0;
LAB_0003b880:
  if (*(int *)(param_3 + 0xc82c) != 0) {
    do {
      do {
        uVar10 = *(uint *)(param_3 + 0xc884) & 0xf;
      } while (uVar10 == 0);
    } while (uVar10 == 4);
  }
  Ram0002000000000040 = param_2;
  if ((param_1 & 2) != 0) {
    Ram00020000000000a8 = 2;
  }
  uVar4 = TP_R008;
  uVar8 = Ram00020000000007c8;
  uVar8 = Ram00020000000007d0;
  TP_R020 = uVar4;
  uVar8 = Ram00020000000007c0;
  return uVar8;
}


/* ---- sub_3b954 @ 0003b954 size=16 ---- */

/* WARNING: Removing unreachable block (ram,0x0003b90c) */

undefined8 sub_3b954(ulong param_1,undefined4 param_2,long param_3,uint param_4,long param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int in_t1;
  undefined4 in_register_00002034;
  long lVar9;
  uint uVar10;
  ulong in_t3;
  undefined4 in_t4;
  uint in_t5;
  int in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  *(uint *)(param_3 + 0xc8f0) = in_t5 | 0x2000;
  *(undefined4 *)(param_3 + 0xc8ac) = 0x2000;
  *(undefined4 *)(param_3 + 0xc84c) = *(undefined4 *)(param_3 + 0xc8fc);
  *(uint *)(param_3 + 0xc87c) =
       (uint)((ulong)((long)(int)*(uint *)(param_3 + 0xc87c) << 0x28) >> 0x28) |
       *(uint *)(param_3 + 0xc87c) & 0x1f000000;
  *(undefined4 *)(param_3 + 0xc884) = 0x200;
  *(undefined4 *)(param_3 + 0xc878) = 0;
  uVar10 = (uint)((ulong)((long)*(int *)(param_3 + 0xc860) << 0x21) >> 0x20);
  *(uint *)(param_3 + 0xc860) = uVar10 >> 1;
  do {
  } while (*(int *)(param_5 + 0x31b0) != 0);
  *(uint *)(param_5 + 0x31b8) = uVar10 >> 1 & 0x8ffffffc;
  *(uint *)(&DAT_00002fb8 + param_5) = param_4 & 0x8fffffff | in_t1 << 0x1c;
  *(undefined4 *)(&DAT_00002fc0 + param_5) = in_t4;
  *(undefined4 *)(&DAT_00002fc4 + param_5) = 0x10000;
  Ram0002000000000448 = 0x810;
  *(undefined4 *)(param_5 + 0x31b0) = 0x10000;
  Ram0002000000000448 = 0x800;
  iVar5 = Ram0002000000000208;
  if (iVar5 == 0) {
    uVar10 = Ram00020000000002d8;
    if ((uVar10 & 0x80) != 0) {
      uVar10 = (uint)*(undefined8 *)
                      (((ulong)((long)((in_mhartid + 0xc) * 4) << 0x20) >> 0x1d) + 0x3000000000000);
      goto LAB_0003b81c;
    }
    bVar3 = false;
    bVar2 = false;
    bVar1 = false;
  }
  else {
    uVar10 = Ram0002000000000108;
LAB_0003b81c:
    bVar1 = (((long)(int)(uVar10 >> 0xc) ^ in_t3) & 7) == 0;
    bVar2 = (uVar10 & 0xf8) == 0;
    bVar3 = true;
  }
  uVar10 = Ram0002000000000070;
  lVar9 = (long)(int)(uVar10 >> 4) << 0x24;
  if (((CONCAT44(in_register_00002034,in_t1) ==
        ((long)(int)(*(uint *)(lVar9 + 0x108080002e088) >> 5) & 7U)) &&
      (uVar10 = *(uint *)(lVar9 + 0x108080002e088) & 0x1f, uVar10 != 0)) && (uVar10 < 0x10)) {
    Ram0002000000000150 = 0;
    Ram0002000000000060 = 0;
    Ram00020000000004c0 = 0;
    Ram0002000000000068 = 0;
    Ram00020000000004c0 = 1;
    *(undefined4 *)(lVar9 + 0x108080002e088) = 0x40000000;
    Ram0002000000000558 = 3;
    do {
      iVar6 = Ram00020000000004c8;
    } while (iVar6 != 0);
    *(undefined4 *)(lVar9 + 0x108080002e088) = 0x81500000;
    Ram0002000000000448 = 0;
    Ram0002000000000448 = 0x4000;
  }
  else {
    Ram0002000000000448 = 0;
    Ram0002000000000448 = 0x4000;
    if (((!bVar3) || (!bVar1)) || (!bVar2)) goto LAB_0003b880;
  }
  if (iVar5 != 0) {
    uVar7 = Ram00020000000006f8;
    Ram00020000000003c0 = uVar7;
  }
  Ram0002000000000490 = 0x8000;
  Ram0002000000000080 = 0;
  Ram00020000000003c0 = 0;
  Ram0002000000000278 = 0;
  Ram0002000000000180 = 0;
  Ram0002000000000178 = 0;
  Ram0002000000000140 = 0;
  Ram0002000000000150 = 0;
  Ram00020000000006f0 = 0x905a;
  param_2 = 0;
LAB_0003b880:
  if (*(int *)(param_3 + 0xc82c) != 0) {
    do {
      do {
        uVar10 = *(uint *)(param_3 + 0xc884) & 0xf;
      } while (uVar10 == 0);
    } while (uVar10 == 4);
  }
  Ram0002000000000040 = param_2;
  if ((param_1 & 2) != 0) {
    Ram00020000000000a8 = 2;
  }
  uVar4 = TP_R008;
  uVar8 = Ram00020000000007c8;
  uVar8 = Ram00020000000007d0;
  TP_R020 = uVar4;
  uVar8 = Ram00020000000007c0;
  return uVar8;
}


/* ---- sub_3b964 @ 0003b964 size=12 ---- */

/* WARNING: Removing unreachable block (ram,0x0003b90c) */

undefined8 sub_3b964(ulong param_1,undefined4 param_2,long param_3,uint param_4,long param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int in_t1;
  undefined4 in_register_00002034;
  long lVar9;
  uint uVar10;
  ulong in_t3;
  undefined4 in_t4;
  uint in_t5;
  int in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  *(uint *)(param_3 + 0xc8f0) = in_t5 | 0x200;
  *(undefined4 *)(param_3 + 0xc8ac) = 0x2000;
  *(undefined4 *)(param_3 + 0xc84c) = *(undefined4 *)(param_3 + 0xc8fc);
  *(uint *)(param_3 + 0xc87c) =
       (uint)((ulong)((long)(int)*(uint *)(param_3 + 0xc87c) << 0x28) >> 0x28) |
       *(uint *)(param_3 + 0xc87c) & 0x1f000000;
  *(undefined4 *)(param_3 + 0xc884) = 0x200;
  *(undefined4 *)(param_3 + 0xc878) = 0;
  uVar10 = (uint)((ulong)((long)*(int *)(param_3 + 0xc860) << 0x21) >> 0x20);
  *(uint *)(param_3 + 0xc860) = uVar10 >> 1;
  do {
  } while (*(int *)(param_5 + 0x31b0) != 0);
  *(uint *)(param_5 + 0x31b8) = uVar10 >> 1 & 0x8ffffffc;
  *(uint *)(&DAT_00002fb8 + param_5) = param_4 & 0x8fffffff | in_t1 << 0x1c;
  *(undefined4 *)(&DAT_00002fc0 + param_5) = in_t4;
  *(undefined4 *)(&DAT_00002fc4 + param_5) = 0x10000;
  Ram0002000000000448 = 0x810;
  *(undefined4 *)(param_5 + 0x31b0) = 0x10000;
  Ram0002000000000448 = 0x800;
  iVar5 = Ram0002000000000208;
  if (iVar5 == 0) {
    uVar10 = Ram00020000000002d8;
    if ((uVar10 & 0x80) != 0) {
      uVar10 = (uint)*(undefined8 *)
                      (((ulong)((long)((in_mhartid + 0xc) * 4) << 0x20) >> 0x1d) + 0x3000000000000);
      goto LAB_0003b81c;
    }
    bVar3 = false;
    bVar2 = false;
    bVar1 = false;
  }
  else {
    uVar10 = Ram0002000000000108;
LAB_0003b81c:
    bVar1 = (((long)(int)(uVar10 >> 0xc) ^ in_t3) & 7) == 0;
    bVar2 = (uVar10 & 0xf8) == 0;
    bVar3 = true;
  }
  uVar10 = Ram0002000000000070;
  lVar9 = (long)(int)(uVar10 >> 4) << 0x24;
  if (((CONCAT44(in_register_00002034,in_t1) ==
        ((long)(int)(*(uint *)(lVar9 + 0x108080002e088) >> 5) & 7U)) &&
      (uVar10 = *(uint *)(lVar9 + 0x108080002e088) & 0x1f, uVar10 != 0)) && (uVar10 < 0x10)) {
    Ram0002000000000150 = 0;
    Ram0002000000000060 = 0;
    Ram00020000000004c0 = 0;
    Ram0002000000000068 = 0;
    Ram00020000000004c0 = 1;
    *(undefined4 *)(lVar9 + 0x108080002e088) = 0x40000000;
    Ram0002000000000558 = 3;
    do {
      iVar6 = Ram00020000000004c8;
    } while (iVar6 != 0);
    *(undefined4 *)(lVar9 + 0x108080002e088) = 0x81500000;
    Ram0002000000000448 = 0;
    Ram0002000000000448 = 0x4000;
  }
  else {
    Ram0002000000000448 = 0;
    Ram0002000000000448 = 0x4000;
    if (((!bVar3) || (!bVar1)) || (!bVar2)) goto LAB_0003b880;
  }
  if (iVar5 != 0) {
    uVar7 = Ram00020000000006f8;
    Ram00020000000003c0 = uVar7;
  }
  Ram0002000000000490 = 0x8000;
  Ram0002000000000080 = 0;
  Ram00020000000003c0 = 0;
  Ram0002000000000278 = 0;
  Ram0002000000000180 = 0;
  Ram0002000000000178 = 0;
  Ram0002000000000140 = 0;
  Ram0002000000000150 = 0;
  Ram00020000000006f0 = 0x905a;
  param_2 = 0;
LAB_0003b880:
  if (*(int *)(param_3 + 0xc82c) != 0) {
    do {
      do {
        uVar10 = *(uint *)(param_3 + 0xc884) & 0xf;
      } while (uVar10 == 0);
    } while (uVar10 == 4);
  }
  Ram0002000000000040 = param_2;
  if ((param_1 & 2) != 0) {
    Ram00020000000000a8 = 2;
  }
  uVar4 = TP_R008;
  uVar8 = Ram00020000000007c8;
  uVar8 = Ram00020000000007d0;
  TP_R020 = uVar4;
  uVar8 = Ram00020000000007c0;
  return uVar8;
}


/* ---- sub_3b970 @ 0003b970 size=12 ---- */

/* WARNING: Removing unreachable block (ram,0x0003b90c) */

undefined8 sub_3b970(ulong param_1,undefined4 param_2,long param_3,uint param_4,long param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int in_t1;
  undefined4 in_register_00002034;
  long lVar9;
  uint uVar10;
  ulong in_t3;
  undefined4 in_t4;
  uint in_t5;
  int in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  *(uint *)(param_3 + 0xc8f0) = in_t5 | 0x400;
  *(undefined4 *)(param_3 + 0xc8ac) = 0x2000;
  *(undefined4 *)(param_3 + 0xc84c) = *(undefined4 *)(param_3 + 0xc8fc);
  *(uint *)(param_3 + 0xc87c) =
       (uint)((ulong)((long)(int)*(uint *)(param_3 + 0xc87c) << 0x28) >> 0x28) |
       *(uint *)(param_3 + 0xc87c) & 0x1f000000;
  *(undefined4 *)(param_3 + 0xc884) = 0x200;
  *(undefined4 *)(param_3 + 0xc878) = 0;
  uVar10 = (uint)((ulong)((long)*(int *)(param_3 + 0xc860) << 0x21) >> 0x20);
  *(uint *)(param_3 + 0xc860) = uVar10 >> 1;
  do {
  } while (*(int *)(param_5 + 0x31b0) != 0);
  *(uint *)(param_5 + 0x31b8) = uVar10 >> 1 & 0x8ffffffc;
  *(uint *)(&DAT_00002fb8 + param_5) = param_4 & 0x8fffffff | in_t1 << 0x1c;
  *(undefined4 *)(&DAT_00002fc0 + param_5) = in_t4;
  *(undefined4 *)(&DAT_00002fc4 + param_5) = 0x10000;
  Ram0002000000000448 = 0x810;
  *(undefined4 *)(param_5 + 0x31b0) = 0x10000;
  Ram0002000000000448 = 0x800;
  iVar5 = Ram0002000000000208;
  if (iVar5 == 0) {
    uVar10 = Ram00020000000002d8;
    if ((uVar10 & 0x80) != 0) {
      uVar10 = (uint)*(undefined8 *)
                      (((ulong)((long)((in_mhartid + 0xc) * 4) << 0x20) >> 0x1d) + 0x3000000000000);
      goto LAB_0003b81c;
    }
    bVar3 = false;
    bVar2 = false;
    bVar1 = false;
  }
  else {
    uVar10 = Ram0002000000000108;
LAB_0003b81c:
    bVar1 = (((long)(int)(uVar10 >> 0xc) ^ in_t3) & 7) == 0;
    bVar2 = (uVar10 & 0xf8) == 0;
    bVar3 = true;
  }
  uVar10 = Ram0002000000000070;
  lVar9 = (long)(int)(uVar10 >> 4) << 0x24;
  if (((CONCAT44(in_register_00002034,in_t1) ==
        ((long)(int)(*(uint *)(lVar9 + 0x108080002e088) >> 5) & 7U)) &&
      (uVar10 = *(uint *)(lVar9 + 0x108080002e088) & 0x1f, uVar10 != 0)) && (uVar10 < 0x10)) {
    Ram0002000000000150 = 0;
    Ram0002000000000060 = 0;
    Ram00020000000004c0 = 0;
    Ram0002000000000068 = 0;
    Ram00020000000004c0 = 1;
    *(undefined4 *)(lVar9 + 0x108080002e088) = 0x40000000;
    Ram0002000000000558 = 3;
    do {
      iVar6 = Ram00020000000004c8;
    } while (iVar6 != 0);
    *(undefined4 *)(lVar9 + 0x108080002e088) = 0x81500000;
    Ram0002000000000448 = 0;
    Ram0002000000000448 = 0x4000;
  }
  else {
    Ram0002000000000448 = 0;
    Ram0002000000000448 = 0x4000;
    if (((!bVar3) || (!bVar1)) || (!bVar2)) goto LAB_0003b880;
  }
  if (iVar5 != 0) {
    uVar7 = Ram00020000000006f8;
    Ram00020000000003c0 = uVar7;
  }
  Ram0002000000000490 = 0x8000;
  Ram0002000000000080 = 0;
  Ram00020000000003c0 = 0;
  Ram0002000000000278 = 0;
  Ram0002000000000180 = 0;
  Ram0002000000000178 = 0;
  Ram0002000000000140 = 0;
  Ram0002000000000150 = 0;
  Ram00020000000006f0 = 0x905a;
  param_2 = 0;
LAB_0003b880:
  if (*(int *)(param_3 + 0xc82c) != 0) {
    do {
      do {
        uVar10 = *(uint *)(param_3 + 0xc884) & 0xf;
      } while (uVar10 == 0);
    } while (uVar10 == 4);
  }
  Ram0002000000000040 = param_2;
  if ((param_1 & 2) != 0) {
    Ram00020000000000a8 = 2;
  }
  uVar4 = TP_R008;
  uVar8 = Ram00020000000007c8;
  uVar8 = Ram00020000000007d0;
  TP_R020 = uVar4;
  uVar8 = Ram00020000000007c0;
  return uVar8;
}


/* ---- sub_3b97c @ 0003b97c size=20 ---- */

/* WARNING: Removing unreachable block (ram,0x0003b90c) */

undefined8 sub_3b97c(ulong param_1,undefined4 param_2,long param_3,uint param_4,long param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int in_t1;
  undefined4 in_register_00002034;
  long lVar9;
  uint uVar10;
  ulong in_t3;
  undefined4 in_t4;
  uint in_t5;
  int in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  *(uint *)(param_3 + 0xc8f0) = in_t5 | 0x800;
  *(undefined4 *)(param_3 + 0xc8ac) = 0x2000;
  *(undefined4 *)(param_3 + 0xc84c) = *(undefined4 *)(param_3 + 0xc8fc);
  *(uint *)(param_3 + 0xc87c) =
       (uint)((ulong)((long)(int)*(uint *)(param_3 + 0xc87c) << 0x28) >> 0x28) |
       *(uint *)(param_3 + 0xc87c) & 0x1f000000;
  *(undefined4 *)(param_3 + 0xc884) = 0x200;
  *(undefined4 *)(param_3 + 0xc878) = 0;
  uVar10 = (uint)((ulong)((long)*(int *)(param_3 + 0xc860) << 0x21) >> 0x20);
  *(uint *)(param_3 + 0xc860) = uVar10 >> 1;
  do {
  } while (*(int *)(param_5 + 0x31b0) != 0);
  *(uint *)(param_5 + 0x31b8) = uVar10 >> 1 & 0x8ffffffc;
  *(uint *)(&DAT_00002fb8 + param_5) = param_4 & 0x8fffffff | in_t1 << 0x1c;
  *(undefined4 *)(&DAT_00002fc0 + param_5) = in_t4;
  *(undefined4 *)(&DAT_00002fc4 + param_5) = 0x10000;
  Ram0002000000000448 = 0x810;
  *(undefined4 *)(param_5 + 0x31b0) = 0x10000;
  Ram0002000000000448 = 0x800;
  iVar5 = Ram0002000000000208;
  if (iVar5 == 0) {
    uVar10 = Ram00020000000002d8;
    if ((uVar10 & 0x80) != 0) {
      uVar10 = (uint)*(undefined8 *)
                      (((ulong)((long)((in_mhartid + 0xc) * 4) << 0x20) >> 0x1d) + 0x3000000000000);
      goto LAB_0003b81c;
    }
    bVar3 = false;
    bVar2 = false;
    bVar1 = false;
  }
  else {
    uVar10 = Ram0002000000000108;
LAB_0003b81c:
    bVar1 = (((long)(int)(uVar10 >> 0xc) ^ in_t3) & 7) == 0;
    bVar2 = (uVar10 & 0xf8) == 0;
    bVar3 = true;
  }
  uVar10 = Ram0002000000000070;
  lVar9 = (long)(int)(uVar10 >> 4) << 0x24;
  if (((CONCAT44(in_register_00002034,in_t1) ==
        ((long)(int)(*(uint *)(lVar9 + 0x108080002e088) >> 5) & 7U)) &&
      (uVar10 = *(uint *)(lVar9 + 0x108080002e088) & 0x1f, uVar10 != 0)) && (uVar10 < 0x10)) {
    Ram0002000000000150 = 0;
    Ram0002000000000060 = 0;
    Ram00020000000004c0 = 0;
    Ram0002000000000068 = 0;
    Ram00020000000004c0 = 1;
    *(undefined4 *)(lVar9 + 0x108080002e088) = 0x40000000;
    Ram0002000000000558 = 3;
    do {
      iVar6 = Ram00020000000004c8;
    } while (iVar6 != 0);
    *(undefined4 *)(lVar9 + 0x108080002e088) = 0x81500000;
    Ram0002000000000448 = 0;
    Ram0002000000000448 = 0x4000;
  }
  else {
    Ram0002000000000448 = 0;
    Ram0002000000000448 = 0x4000;
    if (((!bVar3) || (!bVar1)) || (!bVar2)) goto LAB_0003b880;
  }
  if (iVar5 != 0) {
    uVar7 = Ram00020000000006f8;
    Ram00020000000003c0 = uVar7;
  }
  Ram0002000000000490 = 0x8000;
  Ram0002000000000080 = 0;
  Ram00020000000003c0 = 0;
  Ram0002000000000278 = 0;
  Ram0002000000000180 = 0;
  Ram0002000000000178 = 0;
  Ram0002000000000140 = 0;
  Ram0002000000000150 = 0;
  Ram00020000000006f0 = 0x905a;
  param_2 = 0;
LAB_0003b880:
  if (*(int *)(param_3 + 0xc82c) != 0) {
    do {
      do {
        uVar10 = *(uint *)(param_3 + 0xc884) & 0xf;
      } while (uVar10 == 0);
    } while (uVar10 == 4);
  }
  Ram0002000000000040 = param_2;
  if ((param_1 & 2) != 0) {
    Ram00020000000000a8 = 2;
  }
  uVar4 = TP_R008;
  uVar8 = Ram00020000000007c8;
  uVar8 = Ram00020000000007d0;
  TP_R020 = uVar4;
  uVar8 = Ram00020000000007c0;
  return uVar8;
}


/* ---- sub_3b990 @ 0003b990 size=200 ---- */

/* WARNING: Removing unreachable block (ram,0x0003b90c) */

undefined8 sub_3b990(ulong param_1,undefined4 param_2,long param_3,uint param_4,long param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int in_t1;
  undefined4 in_register_00002034;
  long lVar9;
  uint uVar10;
  ulong in_t3;
  undefined4 in_t4;
  uint in_t5;
  int in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  *(uint *)(param_3 + 0xc8f0) = in_t5 | 0x1000;
  *(undefined4 *)(param_3 + 0xc8ac) = 0x2000;
  *(undefined4 *)(param_3 + 0xc84c) = *(undefined4 *)(param_3 + 0xc8fc);
  *(uint *)(param_3 + 0xc87c) =
       (uint)((ulong)((long)(int)*(uint *)(param_3 + 0xc87c) << 0x28) >> 0x28) |
       *(uint *)(param_3 + 0xc87c) & 0x1f000000;
  *(undefined4 *)(param_3 + 0xc884) = 0x200;
  *(undefined4 *)(param_3 + 0xc878) = 0;
  uVar10 = (uint)((ulong)((long)*(int *)(param_3 + 0xc860) << 0x21) >> 0x20);
  *(uint *)(param_3 + 0xc860) = uVar10 >> 1;
  do {
  } while (*(int *)(param_5 + 0x31b0) != 0);
  *(uint *)(param_5 + 0x31b8) = uVar10 >> 1 & 0x8ffffffc;
  *(uint *)(&DAT_00002fb8 + param_5) = param_4 & 0x8fffffff | in_t1 << 0x1c;
  *(undefined4 *)(&DAT_00002fc0 + param_5) = in_t4;
  *(undefined4 *)(&DAT_00002fc4 + param_5) = 0x10000;
  Ram0002000000000448 = 0x810;
  *(undefined4 *)(param_5 + 0x31b0) = 0x10000;
  Ram0002000000000448 = 0x800;
  iVar5 = Ram0002000000000208;
  if (iVar5 == 0) {
    uVar10 = Ram00020000000002d8;
    if ((uVar10 & 0x80) != 0) {
      uVar10 = (uint)*(undefined8 *)
                      (((ulong)((long)((in_mhartid + 0xc) * 4) << 0x20) >> 0x1d) + 0x3000000000000);
      goto LAB_0003b81c;
    }
    bVar3 = false;
    bVar2 = false;
    bVar1 = false;
  }
  else {
    uVar10 = Ram0002000000000108;
LAB_0003b81c:
    bVar1 = (((long)(int)(uVar10 >> 0xc) ^ in_t3) & 7) == 0;
    bVar2 = (uVar10 & 0xf8) == 0;
    bVar3 = true;
  }
  uVar10 = Ram0002000000000070;
  lVar9 = (long)(int)(uVar10 >> 4) << 0x24;
  if (((CONCAT44(in_register_00002034,in_t1) ==
        ((long)(int)(*(uint *)(lVar9 + 0x108080002e088) >> 5) & 7U)) &&
      (uVar10 = *(uint *)(lVar9 + 0x108080002e088) & 0x1f, uVar10 != 0)) && (uVar10 < 0x10)) {
    Ram0002000000000150 = 0;
    Ram0002000000000060 = 0;
    Ram00020000000004c0 = 0;
    Ram0002000000000068 = 0;
    Ram00020000000004c0 = 1;
    *(undefined4 *)(lVar9 + 0x108080002e088) = 0x40000000;
    Ram0002000000000558 = 3;
    do {
      iVar6 = Ram00020000000004c8;
    } while (iVar6 != 0);
    *(undefined4 *)(lVar9 + 0x108080002e088) = 0x81500000;
    Ram0002000000000448 = 0;
    Ram0002000000000448 = 0x4000;
  }
  else {
    Ram0002000000000448 = 0;
    Ram0002000000000448 = 0x4000;
    if (((!bVar3) || (!bVar1)) || (!bVar2)) goto LAB_0003b880;
  }
  if (iVar5 != 0) {
    uVar7 = Ram00020000000006f8;
    Ram00020000000003c0 = uVar7;
  }
  Ram0002000000000490 = 0x8000;
  Ram0002000000000080 = 0;
  Ram00020000000003c0 = 0;
  Ram0002000000000278 = 0;
  Ram0002000000000180 = 0;
  Ram0002000000000178 = 0;
  Ram0002000000000140 = 0;
  Ram0002000000000150 = 0;
  Ram00020000000006f0 = 0x905a;
  param_2 = 0;
LAB_0003b880:
  if (*(int *)(param_3 + 0xc82c) != 0) {
    do {
      do {
        uVar10 = *(uint *)(param_3 + 0xc884) & 0xf;
      } while (uVar10 == 0);
    } while (uVar10 == 4);
  }
  Ram0002000000000040 = param_2;
  if ((param_1 & 2) != 0) {
    Ram00020000000000a8 = 2;
  }
  uVar4 = TP_R008;
  uVar8 = Ram00020000000007c8;
  uVar8 = Ram00020000000007d0;
  TP_R020 = uVar4;
  uVar8 = Ram00020000000007c0;
  return uVar8;
}


/* ---- sub_3ba60 @ 0003ba60 size=968 ---- */

/* WARNING: Removing unreachable block (ram,0x0003bd28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 sub_3ba60(void)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  undefined4 uVar13;
  long lVar14;
  int in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar7 = Ram0002000000000028;
  Ram00020000000000a8 = 0;
  uVar13 = Ram0002000000000020;
  Ram0002000000000040 = 1;
  if ((_DAT_100010002e000 & 1) != 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar3 = Ram0002000000000070;
  lVar14 = (long)(int)(uVar3 >> 4) << 0x24;
  uVar11 = *(uint *)(lVar14 + 0x108080000c830);
  if (*(int *)(lVar14 + 0x108080000c868) < 0) {
    uVar11 = uVar11 >> 8;
  }
  Ram0002000000000448 = uVar11 & 0xf | 0x400;
  uVar9 = Ram0002000000000390;
  uVar6 = Ram0002000000000008;
  *(uint *)(lVar14 + 0x108080000c8f0) = *(uint *)(lVar14 + 0x108080000c8f0) | 0x10;
  *(undefined4 *)(lVar14 + 0x108080000c8ac) = 0x2000;
  _DAT_100010000c0e4 = (undefined4)uVar9;
  *(undefined4 *)(lVar14 + 0x108080000c84c) = *(undefined4 *)(lVar14 + 0x108080000c8fc);
  *(uint *)(lVar14 + 0x108080000c87c) =
       (uint)((ulong)((long)(int)*(uint *)(lVar14 + 0x108080000c87c) << 0x28) >> 0x28) |
       *(uint *)(lVar14 + 0x108080000c87c) & 0x1f000000;
  *(undefined4 *)(lVar14 + 0x108080000c884) = 0x200;
  *(undefined4 *)(lVar14 + 0x108080000c878) = 0;
  uVar11 = (uint)((ulong)((long)*(int *)(lVar14 + 0x108080000c860) << 0x21) >> 0x20);
  *(uint *)(lVar14 + 0x108080000c860) = uVar11 >> 1;
  do {
  } while (_DAT_100010000c2d4 != 0);
  _DAT_100010000c2dc = uVar11 >> 1 & 0x8ffffffc;
  _DAT_100010000c0dc =
       (uint)((ulong)uVar9 >> 0x20) & 0x8f0fffff | (uVar6 >> 0x1a & 0xf) << 0x14 |
       (uVar3 >> 8 & 7) << 0x1c;
  uVar11 = uVar3 >> 8 & 7;
  _DAT_100010000c0e8 = 0x10000;
  Ram0002000000000448 = 0x810;
  _DAT_100010000c2d4 = 0x10000;
  Ram0002000000000448 = 0x800;
  iVar8 = Ram0002000000000208;
  if (iVar8 == 0) {
    uVar3 = Ram00020000000002d8;
    if ((uVar3 & 0x80) != 0) {
      uVar3 = (uint)*(undefined8 *)
                     (((ulong)((long)((in_mhartid + 0xc) * 4) << 0x20) >> 0x1d) + 0x3000000000000);
      goto LAB_0003bc38;
    }
    bVar4 = false;
    bVar2 = false;
    bVar1 = false;
  }
  else {
    uVar3 = Ram0002000000000108;
LAB_0003bc38:
    bVar1 = (uVar3 >> 0xc & 7) == uVar11;
    bVar2 = (uVar3 & 0xf8) == 0;
    bVar4 = true;
  }
  uVar3 = Ram0002000000000070;
  lVar12 = (long)(int)(uVar3 >> 4) << 0x24;
  if (((uVar11 == (*(uint *)(lVar12 + 0x108080002e088) >> 5 & 7)) &&
      (uVar11 = *(uint *)(lVar12 + 0x108080002e088) & 0x1f, uVar11 != 0)) && (uVar11 < 0x10)) {
    Ram0002000000000150 = 0;
    Ram0002000000000060 = 0;
    Ram00020000000004c0 = 0;
    Ram0002000000000068 = 0;
    Ram00020000000004c0 = 1;
    *(undefined4 *)(lVar12 + 0x108080002e088) = 0x40000000;
    Ram0002000000000558 = 3;
    do {
      iVar10 = Ram00020000000004c8;
    } while (iVar10 != 0);
    *(undefined4 *)(lVar12 + 0x108080002e088) = 0x81500000;
    Ram0002000000000448 = 0;
    Ram0002000000000448 = 0x4000;
  }
  else {
    Ram0002000000000448 = 0;
    Ram0002000000000448 = 0x4000;
    if (((!bVar4) || (!bVar1)) || (!bVar2)) goto LAB_0003bc9c;
  }
  if (iVar8 != 0) {
    uVar13 = Ram00020000000006f8;
    Ram00020000000003c0 = uVar13;
  }
  Ram0002000000000490 = 0x8000;
  Ram0002000000000080 = 0;
  Ram00020000000003c0 = 0;
  Ram0002000000000278 = 0;
  Ram0002000000000180 = 0;
  Ram0002000000000178 = 0;
  Ram0002000000000140 = 0;
  Ram0002000000000150 = 0;
  Ram00020000000006f0 = 0x905a;
  uVar13 = 0;
LAB_0003bc9c:
  if (*(int *)(lVar14 + 0x108080000c82c) != 0) {
    do {
      do {
        uVar11 = *(uint *)(lVar14 + 0x108080000c884) & 0xf;
      } while (uVar11 == 0);
    } while (uVar11 == 4);
  }
  Ram0002000000000040 = uVar13;
  if ((uVar7 & 2) != 0) {
    Ram00020000000000a8 = 2;
  }
  uVar5 = TP_R008;
  uVar9 = Ram00020000000007c8;
  uVar9 = Ram00020000000007d0;
  TP_R020 = uVar5;
  uVar9 = Ram00020000000007c0;
  return uVar9;
}


/* ---- sub_3be30 @ 0003be30 size=208 ---- */

undefined8 sub_3be30(void)

{
  undefined1 uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar2 = Ram0002000000000028;
  Ram00020000000000a8 = 0;
  uVar3 = Ram00020000000002f8;
  Ram00020000000001b8 = uVar3;
  if ((uVar3 & 0xff) == 9) {
    FUN_00003450((long)(int)uVar3);
    if ((uVar2 & 2) != 0) {
      Ram00020000000000a8 = 2;
    }
    uVar1 = TP_R008;
    uVar4 = Ram00020000000007c8;
    uVar4 = Ram00020000000007d0;
    TP_R020 = uVar1;
    uVar4 = Ram00020000000007c0;
    return uVar4;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_0003bf00 @ 0003bf00 size=396 ---- */

/* WARNING: Removing unreachable block (ram,0x0003bf80) */
/* WARNING: Removing unreachable block (ram,0x0003bfe0) */

void FUN_0003bf00(long *param_1,ulong param_2,ulong param_3,ulong param_4,uint param_5,
                 undefined8 param_6,undefined4 *param_7)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  lVar7 = *param_1;
  lVar9 = param_1[2];
  lVar8 = param_1[4];
  iVar1 = *(int *)(param_2 + 4);
  lVar5 = in_mhartid * 8;
  *(ulong *)(lVar5 + 0x3000000000200) =
       param_4 & 0xffffffff | (param_3 & 0xff) << 0x20 | (lVar7 >> 0x20 & 0xffU) << 0x28 |
       ((long)(int)(param_5 >> 0x12) & 2U | (long)(int)(param_5 >> 0x10) & 1U | 4) << 0x30;
  *(long *)(lVar5 + 0x3000000000220) = lVar9;
  *(ulong *)(lVar5 + 0x3000000000240) =
       (param_2 & 0xffffffffffff) + 0x40 & 0xffffffffffff | (long)iVar1 << 0x30;
  *(bool *)param_6 = lVar8 >> 0x20 != 0;
  if (lVar8 >> 0x20 == 0) {
    uVar3 = lVar7 >> 0x20 & 0x1f;
    *(ulong *)(lVar5 + 0x3000000000260) = uVar3 << 0x2a | uVar3 << 0x25 | uVar3 << 0x20;
    *param_7 = 0;
  }
  else {
    lVar7 = param_1[6];
    *(undefined4 *)((long)param_1 + 0x24) = 0;
    *(long *)(lVar5 + 0x3000000000260) = param_1[5];
    *param_7 = (int)lVar7;
  }
  lVar5 = Ram0002000000000790;
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(in_mhartid * 8 + 0x3000000000240);
    uVar6 = *(ulong *)(in_mhartid * 8 + 0x3000000000200);
    uVar4 = uVar3 >> 0x30;
    uVar2 = (uint)(ushort)(uVar3 >> 0x30);
    if ((uVar4 == 0) || ((uVar4 & 0x3f) != 0)) {
      lVar5 = FUN_00030238(0x802);
    }
    else {
      uVar2 = (uint)(uVar6 >> 0x20) & 0xff;
      if ((uVar6 >> 0x20 & 0xff) < 0x16) {
        gp = 0x101800;
        tp = 0x2000000000000;
        return;
      }
      lVar5 = FUN_00030238(0x808);
    }
    if (lVar5 != 0) {
      *(uint *)(lVar5 + 0xc) = uVar2;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined4 *)(lVar5 + 0x18) = 0;
    }
    return;
  }
  return;
}


/* ---- sub_41100 @ 00041100 size=48 ---- */

/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Control flow encountered bad instruction data */

void sub_41100(long param_1,undefined4 param_2,long param_3)

{
  long unaff_s1;
  long unaff_s8;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  if (unaff_s8 <= param_3) {
    *(undefined4 *)(unaff_s1 + 0x7c) = param_2;
    custom2();
    *(long *)(param_1 + 0x48) = unaff_s1;
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ---- sub_41150 @ 00041150 size=4 ---- */

/* WARNING: Control flow encountered bad instruction data */

void sub_41150(void)

{
  tp = 0x2000000000000;
  gp = 0x101800;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


