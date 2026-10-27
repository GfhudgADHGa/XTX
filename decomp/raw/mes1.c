/* Decompiled by Ghidra RISCV:LE:64:RS64MES - gc_11_0_0_mes1.image.bin */

/* ---- trap_handler @ fffffffff0002000 size=1812 ---- */

/* WARNING: Removing unreachable block (ram,0xfffffffff0002a04) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0002a38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined8 trap_handler(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint *puVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  
  uVar14 = _DAT_2000000000008;
  lVar5 = _DAT_100000000c824;
  _DAT_2000000000098 = CONCAT44(uRam0002000000000074,_DAT_2000000000070) | 0x2001;
  do {
  } while ((_DAT_2000000000008 & 0x8000) == 0);
  if ((_DAT_2000000000008 & 0x1f) != 7) {
    if ((_DAT_2000000000008 & 0x1f) != 0xb) {
      FUN_fffffffff0012f98(_DAT_2000000000008,_DAT_20000000004c8);
      return param_1;
    }
    _DAT_2000000000098 = CONCAT44(uRam0002000000000074,_DAT_2000000000070) | 0x2008;
    _DAT_1000000000c10 = _DAT_1000000000c10 & 0xfffffffffff0ffff;
    if (_DAT_2000000000428 != 0x800) {
      _DAT_2000000000530 = 0;
      _DAT_2000000000528 = 0x3ffffffffc0009c6;
      _DAT_2000000000020 = 0xb;
      return param_1;
    }
    uVar14 = (ulong)(_DAT_100000002a628 >> 3) & 3;
    if ((((ulong)_DAT_2000000000060 & 3) != uVar14) &&
       (_DAT_2000000000098 =
             CONCAT44(uRam0002000000000074,
                      (uint)(uVar14 << 6) | 0x2008 | (uint)(((ulong)_DAT_100000002a628 & 7) << 8) |
                      (uint)(((ulong)(_DAT_100000002a628 >> 5) & 3) << 4)),
       (_DAT_100000000c8b4 & 0x40000000) == 0)) {
      FUN_fffffffff0013e2c();
    }
    do {
    } while (_DAT_2000000000090 != 0);
    do {
    } while (_DAT_20000000004b8 != 0);
    do {
    } while( true );
  }
  uVar12 = _DAT_20000000002f8 >> 0x10;
  if (uVar12 < 2) {
    if (uVar12 == 0) goto LAB_fffffffff00020f4;
    _DAT_20000000001b8 = 8;
    uVar12 = _DAT_20000000002f8 & 0xff;
    if ((uVar12 == 0xc) || (uVar12 == 0x12)) goto LAB_fffffffff0002280;
    if (uVar12 != 0xe) {
      if (uVar12 != 8) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      _DAT_2000000000098 =
           CONCAT44(uRam0002000000000074,_DAT_20000000002f8 >> 4) & 0xffffffff000007f0 | 0x2008;
      if ((_DAT_100000000c884 & 7) == 0) {
        uVar2 = FUN_fffffffff0002a3c();
        return uVar2;
      }
      goto LAB_fffffffff00023e8;
    }
  }
  else {
    _DAT_20000000001b8 = 2;
LAB_fffffffff00020f4:
    uVar13 = _DAT_100000002e088 & 0x1f;
    if (uVar13 == 2) {
      _DAT_2000000000048 = _DAT_100000002e088 >> 5 & 3;
      lVar5 = 1000;
      do {
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      _DAT_20000000001b0 = 0;
      uVar2 = FUN_fffffffff0002a3c();
      return uVar2;
    }
    if ((uVar13 == 5) || (uVar13 == 6)) {
      _DAT_20000000001b0 = 0;
      _DAT_2000000000048 = _DAT_100000002e088 >> 5 & 3;
      uVar2 = FUN_fffffffff0002a3c();
      return uVar2;
    }
    if (uVar13 == 0xc) {
      _DAT_20000000001b0 = 7;
      _DAT_100000000c2e0 = 2;
      uVar2 = FUN_fffffffff0002a3c();
      return uVar2;
    }
    if (uVar13 == 0xf) {
      _DAT_20000000001b0 = 2;
      uVar2 = FUN_fffffffff0002a3c();
      return uVar2;
    }
    if (uVar13 == 0x11) {
      _DAT_20000000001b0 = 3;
      do {
        lVar5 = 200;
        do {
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      } while ((_DAT_100000002e088 & 0x1f) != 0x14);
      if ((_DAT_20000000002f8 & 0x20000) != 0) {
        _DAT_20000000001b8 = 7;
      }
      FUN_fffffffff0002ac4();
      do {
      } while (_DAT_2000000000090 != 0);
      _DAT_2000000000028 = 0xc0;
      _DAT_20000000001b0 = 4;
      return param_1;
    }
    if (1 < uVar12) goto code_r0xfffffffff0002a3c;
    puVar4 = (uint *)&DAT_10000000320f0;
    uVar12 = 0;
    do {
      uVar12 = uVar12 | *puVar4 >> 0x1f;
      puVar4 = puVar4 + 1;
    } while ((long)puVar4 < 0x1000000032104);
    if (uVar12 == 0) {
      _DAT_2000000000098 =
           CONCAT44(uRam0002000000000074,_DAT_20000000002f8 >> 4) & 0xffffffff000007f0 | 0x2008;
      if ((_DAT_100000000c884 & 7) != 0) {
LAB_fffffffff00023e8:
        if ((_DAT_100000000c82c & 7) == 0) {
          _DAT_100000000c884 = 0;
          uVar2 = FUN_fffffffff0002a3c();
          return uVar2;
        }
        uVar12 = (uint)((ulong)_DAT_2000000000028 >> 0x20);
        _DAT_2000000000398 = uVar12 >> 6 & 0xf;
        *(long *)(_DAT_100000000c824 + 0x200) = _DAT_100000000c824;
        *(undefined4 *)(lVar5 + 0x208) = 0;
        puVar10 = (undefined4 *)(lVar5 + 0x20c);
        puVar6 = (undefined4 *)&DAT_100000000c830;
        lVar8 = 0xd;
        do {
          *puVar10 = *puVar6;
          puVar10 = puVar10 + 1;
          puVar6 = puVar6 + 1;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
        *(undefined4 *)(lVar5 + 0x244) = _DAT_100000000c868;
        lVar8 = 6;
        puVar6 = (undefined4 *)&DAT_100000000c894;
        puVar10 = (undefined4 *)(lVar5 + 0x270);
        do {
          puVar11 = puVar10;
          puVar7 = puVar6;
          *puVar11 = *puVar7;
          lVar8 = lVar8 + -1;
          puVar6 = puVar7 + 1;
          puVar10 = puVar11 + 1;
        } while (lVar8 != 0);
        puVar11[1] = 0x2000;
        puVar11[2] = puVar7[2];
        *(undefined4 *)(lVar5 + 0x2cc) = _DAT_100000000c8f0;
        *(undefined4 *)(lVar5 + 0x2d8) = _DAT_100000000c8fc;
        *(undefined4 *)(lVar5 + 0x2dc) = _DAT_100000000c900;
        *(undefined4 *)(lVar5 + 0x2e0) = _DAT_100000000c3fc;
        _DAT_2000000000470 = 0;
        do {
        } while (_DAT_2000000000090 != 0);
        _DAT_100000000c87c = 0;
        if ((_DAT_100000000c860 & 0x40000000) != 0) {
          _DAT_100000000c860 = 2;
        }
        _DAT_100000000c8ac = 0x2000;
        _DAT_2000000000120 = uVar12 & 3;
        _DAT_20000000000d8 = uVar12 >> 0x11 & 0xc0;
        _DAT_100000000c82c = 0;
        _DAT_100000000c8fc = 0;
        _DAT_100000000c900 = 0;
        _DAT_100000000c84c = 0;
        _DAT_100000000c884 = 0;
        _DAT_100000000c920 = 0;
        _DAT_100000000c2e0 = 2;
        uVar2 = FUN_fffffffff0002a3c();
        return uVar2;
      }
      if (_DAT_100000000c8b4 == 0) {
        uVar2 = FUN_fffffffff0002a3c();
        return uVar2;
      }
LAB_fffffffff0002280:
      FUN_fffffffff0012f98(_DAT_2000000000008,_DAT_20000000002f8);
      return param_1;
    }
  }
  uVar3 = 0;
LAB_fffffffff0002204:
  do {
    puVar4 = (uint *)&DAT_10000000320f0;
    bVar1 = false;
    uVar9 = 1;
    do {
      if ((int)*puVar4 < 0) {
        uVar3 = uVar3 | uVar9;
        *puVar4 = *puVar4 & 0x7fffffff;
        bVar1 = true;
        if ((int)*puVar4 < 0) goto LAB_fffffffff0002204;
      }
      uVar9 = uVar9 << 1;
      puVar4 = puVar4 + 1;
    } while ((long)puVar4 < 0x1000000032105);
  } while (bVar1);
  if (uVar3 != 0) {
    _DAT_100000000c2e0 = 2;
    uVar2 = FUN_fffffffff0002a3c(0x1f);
    return uVar2;
  }
code_r0xfffffffff0002a3c:
  _DAT_2000000000020 = uVar14 & 0x1f;
  return param_1;
}


/* ---- sub_02688 @ fffffffff0002688 size=4 ---- */

void sub_02688(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- sub_02718 @ fffffffff0002718 size=804 ---- */

void sub_02718(uint param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long in_t0;
  undefined8 in_t1;
  int iVar3;
  long unaff_s1;
  ulong in_t4;
  int iVar4;
  ulong uVar5;
  
  do {
  } while (*(int *)(unaff_s1 + 0x428) != 0);
  *(uint *)(unaff_s1 + 0x98) = param_1 | 0x2001;
  uVar1 = *(uint *)(in_t0 + 0x2a628);
  uVar5 = (ulong)(uVar1 >> 3) & 3;
  if (((in_t4 & 3) != uVar5) &&
     (*(uint *)(unaff_s1 + 0x98) =
           (uint)(uVar5 << 6) | 0x2008 | (uint)(((ulong)uVar1 & 7) << 8) |
           (uint)(((ulong)(uVar1 >> 5) & 3) << 4), (*(ulong *)(in_t0 + 0xc8b4) >> 0x1e & 1) == 0)) {
    FUN_fffffffff0013e2c();
  }
  *(uint *)(unaff_s1 + 0x98) = param_1 | 0x2008;
  *(undefined8 *)(in_t0 + 0xc10) = 0;
  *(uint *)(unaff_s1 + 0x98) = param_1 | 0x2008;
  if (in_t4 == 0) {
    iVar4 = -0x4000000;
  }
  else {
    iVar4 = -0x8000000;
  }
  *(undefined8 *)(in_t0 + 0x1f10) = param_2;
  *(undefined8 *)(in_t0 + 0x1f14) = in_t1;
  *(BADSPACEBASE **)(in_t0 + 0x1f18) = register0x00002010;
  *(undefined4 *)(unaff_s1 + 0x470) = 1;
  *(undefined4 *)(in_t0 + 0x1f28) = *(undefined4 *)(in_t0 + 0x3f050);
  *(undefined4 *)(unaff_s1 + 0x470) = 0;
  *(uint *)(unaff_s1 + 0x98) = param_1 | 0x2001;
  iVar3 = *(int *)(in_t0 + 0x320e0);
  if (iVar3 != 0) {
    iVar2 = (int)*(long *)(unaff_s1 + 0xf8);
    if (*(long *)(unaff_s1 + 0xf8) < CONCAT44(*(undefined4 *)(in_t0 + 0x320e4),iVar3)) {
      iVar3 = iVar3 - iVar2;
    }
    else {
      iVar3 = iVar2 - iVar3;
    }
    *(int *)(in_t0 + 0x3212c) = iVar3 + 1;
  }
  do {
  } while (*(int *)(unaff_s1 + 0x90) != 0);
  *(undefined8 *)(unaff_s1 + 0x510) = 0x1c3f1;
  do {
  } while (*(long *)(unaff_s1 + 0x4b8) != 0);
  *(uint *)(unaff_s1 + 0x98) = param_1 | 0x2001;
  *(uint *)(in_t0 + 0x320dc) = 1;
  do {
  } while ((*(uint *)(in_t0 + 0x320dc) & 2) == 0);
  uVar1 = *(uint *)(in_t0 + 0x3201c);
  *(undefined8 *)(unaff_s1 + 0x20) = 0xb;
  *(undefined8 *)(unaff_s1 + 0x5a0) = 0x800;
  *(uint *)(in_t0 + 0x3201c) = uVar1 & iVar4 - 1U;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_fffffffff0002a3c @ fffffffff0002a3c size=132 ---- */

undefined8 FUN_fffffffff0002a3c(void)

{
  long unaff_s1;
  ulong in_t6;
  undefined8 in_stack_00000080;
  
  *(ulong *)(unaff_s1 + 0x20) = in_t6 & 0x1f;
  return in_stack_00000080;
}


/* ---- sub_02ac0 @ fffffffff0002ac0 size=4 ---- */

void sub_02ac0(void)

{
  return;
}


/* ---- FUN_fffffffff0002ac4 @ fffffffff0002ac4 size=44 ---- */

void FUN_fffffffff0002ac4(void)

{
  ulong uVar1;
  long unaff_s1;
  
  *(undefined4 *)(unaff_s1 + 0x140) = 1;
  *(undefined4 *)(unaff_s1 + 0x148) = 1;
  for (uVar1 = (ulong)*(uint *)(unaff_s1 + 0x198); uVar1 != 0; uVar1 = uVar1 - 1) {
  }
  *(undefined4 *)(unaff_s1 + 0x140) = 0;
  *(undefined4 *)(unaff_s1 + 0x148) = 0;
  return;
}


/* ---- FUN_fffffffff0002af0 @ fffffffff0002af0 size=40 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0002af0(long param_1)

{
  if (param_1 < 6) {
    _DAT_2000000000518 = 1;
  }
  _DAT_2000000000020 = param_1;
  return;
}


/* ---- FUN_fffffffff0002b18 @ fffffffff0002b18 size=68 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0002b18(ulong param_1,long param_2)

{
  if (param_2 == 0x45) {
    if ((long)param_1 < 6) {
      _DAT_2000000000518 = 1;
    }
    _DAT_20000000005a0 = 1L << (param_1 & 0x3f);
    return;
  }
  if ((long)param_1 < 6) {
    _DAT_2000000000518 = 1;
  }
  _DAT_2000000000020 = param_1;
  return;
}


/* ---- reset_entry @ fffffffff0005000 size=1356 ---- */

/* WARNING: Removing unreachable block (ram,0xfffffffff0005490) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0005514) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void reset_entry(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  uint *puVar17;
  long lVar18;
  long lVar19;
  
  uVar4 = _DAT_2000000000070;
  lVar18 = 0x2000000000000;
  lVar19 = 0x1000000000000;
  uVar13 = _DAT_2000000000070 | 0x2008;
  uVar14 = _DAT_2000000000070 | 0x2001;
  _DAT_1000000000c10 = 0;
  gp = 0xfffffffff0111758;
  if ((((ulong)(long)_DAT_100000003201c >> 0x1a & 3) != 3) || ((_DAT_2000000000060 & 1) == 0)) {
    _DAT_100000003221c = 7;
    _DAT_100000003220c = 0xf0100000;
    _DAT_1000000032210 = 0x7fffff0100000;
    _DAT_1000000032218 = 0;
    _DAT_1000000032230 = 7;
    _DAT_1000000032220 = 0xf0000000;
    _DAT_1000000032224 = 0x3fffff0000000;
    _DAT_100000003222c = 0;
  }
  _DAT_1000000000c14 = 0xfc000800;
  uRam0001000000000c18 = 0x3fffffff;
  lVar15 = 0;
  lVar16 = 0;
  do {
    *(undefined8 *)(lVar15 + 0x10000000322c0) = 0xffffffff;
    *(undefined8 *)(lVar15 + 0x10000000322c4) = 0x10;
    uVar3 = _DAT_1000000001f18;
    uVar2 = _DAT_1000000001f14;
    lVar15 = lVar15 + 0xc;
    lVar16 = lVar16 + 1;
  } while (lVar16 < 0x10);
  _DAT_1000000032108 = 0xfc000000;
  _DAT_1000000032278 = 0x3fffffff;
  tp = 0;
  if ((_DAT_1000000001f10 & 1) == 0) {
    _DAT_fffffffff017fff8 = sub_05660;
    _DAT_2000000000098 = uVar13;
    FUN_fffffffff00055b8(0,0,0,0,0,0,0);
    FUN_fffffffff00055e0();
    FUN_fffffffff000554c();
    FUN_fffffffff0005630();
    FUN_fffffffff00159d0((long)_DAT_fffffffff017ffb0,0xfffffffff017ffb1,0);
    return;
  }
  _DAT_2000000000528 = CONCAT44(_DAT_1000000001f14,_DAT_1000000001f10) >> 1;
  tp = _DAT_2000000000528 << 2;
  lVar15 = CONCAT44(uRam0001000000001f1c,_DAT_1000000001f18);
  _DAT_100000003f050 = _DAT_1000000001f28;
  _DAT_100000003f058 = _DAT_1000000001f30;
  _DAT_2000000000470 = 0;
  _DAT_2000000000398 = _DAT_1000000001f18 >> 6 & 0xf;
  _DAT_2000000000120 = _DAT_1000000001f18 & 3;
  _DAT_20000000000d8 = _DAT_1000000001f18 >> 0x10 & 0x180;
  _DAT_2000000000098 = CONCAT44((int)(uVar4 >> 0x20),_DAT_1000000001f14);
  _DAT_2000000000530 = 1;
  FUN_fffffffff0005630();
  *(ulong *)(lVar18 + 0x98) = uVar13;
  *(undefined8 *)(lVar19 + 0x1f24) = 1;
  *(ulong *)(lVar18 + 0x98) = uVar14;
  if ((*(ulong *)(lVar18 + 0x60) & 1) != ((ulong)(*(uint *)(lVar19 + 0x2a628) >> 3) & 1)) {
    do {
      *(ulong *)(lVar18 + 0x98) = uVar13;
      puVar17 = (uint *)(lVar19 + 0x1f2c);
    } while ((*puVar17 & 1) == 0);
    puVar17[0] = 0;
    puVar17[1] = 0;
  }
  *(ulong *)(lVar18 + 0x98) = *(ulong *)(lVar18 + 0x60) | uVar14;
  uVar1 = *(uint *)(lVar19 + 0x3212c);
  if (uVar1 != 0) {
    uVar4 = (ulong)(uVar1 >> 3);
    if (uVar4 == 0) {
      uVar4 = 1;
    }
    *(ulong *)(lVar19 + 0x320e0) = *(long *)(lVar18 + 0xf8) + uVar4 * 8;
    *(undefined4 *)(lVar19 + 0x2a404) = 0;
    *(uint *)(lVar19 + 0x3212c) = 0;
  }
  *(undefined4 *)(lVar18 + 0x98) = uVar2;
  *(undefined4 *)(lVar18 + 0x580) = 1;
  *(undefined4 *)(lVar18 + 0x40) = 1;
  if ((int)uVar3 < 0) {
                    /* WARNING: Could not recover jumptable at 0xfffffffff0005494. Too many branches
                        */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(tp & 0xfffffffffffffffe))
              (*(undefined8 *)(lVar15 + 0x80),*(undefined8 *)(lVar15 + 0x78),
               *(undefined8 *)(lVar15 + 0x70),*(undefined8 *)(lVar15 + 0x68),
               *(undefined8 *)(lVar15 + 0x60),*(undefined8 *)(lVar15 + 0x58),
               *(undefined8 *)(lVar15 + 0x50),*(undefined8 *)(lVar15 + 0x48));
    return;
  }
  uVar5 = *(undefined8 *)(lVar15 + 0x80);
  uVar6 = *(undefined8 *)(lVar15 + 0x78);
  uVar7 = *(undefined8 *)(lVar15 + 0x70);
  uVar8 = *(undefined8 *)(lVar15 + 0x68);
  uVar9 = *(undefined8 *)(lVar15 + 0x60);
  uVar10 = *(undefined8 *)(lVar15 + 0x58);
  uVar11 = *(undefined8 *)(lVar15 + 0x50);
  uVar12 = *(undefined8 *)(lVar15 + 0x48);
  *(undefined4 *)(lVar18 + 0x530) = 0;
                    /* WARNING: Could not recover jumptable at 0xfffffffff0005518. Too many branches
                        */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(tp & 0xfffffffffffffffe))(uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
  return;
}


/* ---- FUN_fffffffff000554c @ fffffffff000554c size=108 ---- */

void FUN_fffffffff000554c(void)

{
  undefined **ppuVar1;
  
  for (ppuVar1 = &PTR_FUN_fffffffff0100200; ppuVar1 < &PTR_FUN_fffffffff0100200;
      ppuVar1 = ppuVar1 + 1) {
    (*(code *)((ulong)*ppuVar1 & 0xfffffffffffffffe))();
  }
  for (ppuVar1 = &PTR_FUN_fffffffff0100200; ppuVar1 < (undefined **)0xfffffffff0100208;
      ppuVar1 = ppuVar1 + 1) {
    (*(code *)((ulong)*ppuVar1 & 0xfffffffffffffffe))();
  }
  return;
}


/* ---- FUN_fffffffff00055b8 @ fffffffff00055b8 size=40 ---- */

void FUN_fffffffff00055b8(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = (undefined8 *)(gp + -0x7d8); puVar1 < (undefined8 *)(gp + -0x1d8);
      puVar1 = puVar1 + 4) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
  }
  return;
}


/* ---- FUN_fffffffff00055e0 @ fffffffff00055e0 size=80 ---- */

/* WARNING: Removing unreachable block (ram,0xfffffffff00055fc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0005600) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000562c) */

void FUN_fffffffff00055e0(void)

{
  return;
}


/* ---- FUN_fffffffff0005630 @ fffffffff0005630 size=48 ---- */

void FUN_fffffffff0005630(long param_1)

{
  int iVar1;
  undefined8 unaff_s2;
  long in_t5;
  long in_t6;
  
  if (param_1 == 0) {
    iVar1 = -0x42;
  }
  else {
    iVar1 = -2;
  }
  *(undefined8 *)(in_t5 + 0x98) = unaff_s2;
  *(long *)(in_t6 + 0xc10) = (long)(iVar1 + 0x2000);
  return;
}


/* ---- sub_05660 @ fffffffff0005660 size=4 ---- */

void sub_05660(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_fffffffff0005674 @ fffffffff0005674 size=19156 ---- */

/* WARNING: Removing unreachable block (ram,0xfffffffff0007270) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0009364) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000935c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000999c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00099a4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00099f0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0009370) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000937c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0009388) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0009394) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0009940) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000995c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0009960) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0009964) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0009970) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0009978) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000997c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0009988) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00093d0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00093e4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00093e8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00093f0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00093dc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00093e0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00093f8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0009990) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0009994) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000998c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008c18) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008c20) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008c04) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008c0c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0007e00) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008e88) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008adc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0009078) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0007d94) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0007d9c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0007d80) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0007d88) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0009070) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008ad4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008e80) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0007df8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0006430) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0006428) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000643c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0006440) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00065d4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00065ec) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0006600) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0006614) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000678c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0006798) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0006808) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0006824) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00068a8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00068b4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00068b8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00068a4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008d4c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00068c0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00068f8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0006954) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00069a4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00069ac) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000761c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0007614) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0007628) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0007634) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0007688) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000769c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00076a0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00076a8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00076e0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0007700) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0007718) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0007738) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0007764) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0007784) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0007798) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00077b8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0007898) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00078a0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000833c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0009534) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000952c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0009540) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0009544) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000967c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0009684) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00096f4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00096fc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00097a0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00097a8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0005b54) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0005b5c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0009b14) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0009b0c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a0f0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a0f8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a020) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a02c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a030) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a038) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008228) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008220) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008234) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008240) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008244) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008254) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008264) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008268) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008270) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a0f4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a0fc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a104) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a110) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a114) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a11c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008274) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000827c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008278) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0009b20) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0009b2c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0009b30) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0009b10) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0009b18) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0009b38) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008660) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008658) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000866c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008674) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00086a8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008f1c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00086c0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00086cc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0007268) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000727c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0007280) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0007328) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0007388) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00074e8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00074f0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0005920) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0005904) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000590c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00058f0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00058a8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0005864) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0005870) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0005850) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008e94) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0009084) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0009090) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00090e4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0009108) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0009124) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0009148) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000917c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00091a0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00091bc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00091e0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0009318) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0009324) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008ae8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008af0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008b4c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008b58) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008af4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0009a00) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008af8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008344) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0005b68) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a00c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a014) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0005858) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00058a0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00058b4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00058a4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00058ac) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00058c4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00058f8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00058fc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00058f4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0005918) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000592c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000591c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0005924) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0005938) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0007e0c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0007e18) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0007e6c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0007e90) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0007eac) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0007ed0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0007f04) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0007f28) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0007f44) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0007f68) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00080a0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00080ac) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008350) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000835c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00083b0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00083c4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00083c8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00083d0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008408) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008428) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008440) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008460) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008490) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00084b0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00084c4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00084e4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00085cc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0007900) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0005674(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined4 *puVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  ulong uVar24;
  uint *puVar25;
  uint uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  int aiStack_58 [2];
  
  FUN_fffffffff00120f4();
  lVar17 = 0x2000000000000;
  tp = 0x2000000000000;
  aiStack_58[0] = 0;
  FUN_fffffffff001205c(aiStack_58);
  FUN_fffffffff0012040(0);
  lVar7 = gp + -0x7d8;
  FUN_fffffffff0013310(gp + -0x67c);
  uVar20 = *(uint *)(gp + -0x67c);
  uVar23 = uVar20 >> 8 & 0xff;
  *(uint *)(gp + -0x46c) = uVar23;
  uVar8 = 0;
  if ((uVar20 >> 0x1e == 3) &&
     ((uVar4 = uVar20 >> 0x10 & 0x3fff, uVar23 != 0x10 || (uVar8 = 1, uVar4 != 0x3fff)))) {
    *(uint *)(gp + -0x470) = uVar4 + 2;
    uVar4 = _DAT_2000000000308;
  }
  else {
    *(undefined4 *)(gp + -0x470) = uVar8;
    uVar4 = _DAT_2000000000308;
  }
  _DAT_2000000000308 = uVar4;
  if (uVar23 == 0xa0) {
    *(undefined4 *)(gp + -0x6d0) = 0xa0;
    lVar17 = _DAT_2000000000070;
    lVar19 = _DAT_2000000000070 << 0x20;
    lVar7 = *(long *)(lVar19 + 0x108080000c824);
    uVar20 = *(uint *)(lVar19 + 0x108080000c8ac);
    *(undefined4 *)(lVar19 + 0x108080000c8ac) = 0x3000;
    *(int *)(gp + -0x2b4) = (int)lVar17;
    *(long *)(gp + -0x2b0) = lVar7;
    _DAT_20000000000d8 = ((long)(int)(uVar20 >> 0x18) & 3U) << 7;
    _DAT_2000000000120 = 0;
    *(undefined4 *)(lVar7 + 0x390) = *(undefined4 *)(gp + -0x67c);
    *(undefined4 *)(lVar7 + 0x394) = *(undefined4 *)(gp + -0x678);
    *(undefined4 *)(lVar7 + 0x398) = *(undefined4 *)(gp + -0x674);
    *(undefined4 *)(lVar7 + 0x39c) = *(undefined4 *)(gp + -0x670);
    *(undefined4 *)(lVar7 + 0x3a0) = *(undefined4 *)(gp + -0x66c);
    *(undefined4 *)(lVar7 + 0x3a4) = *(undefined4 *)(gp + -0x668);
    *(undefined4 *)(lVar7 + 0x3a8) = *(undefined4 *)(gp + -0x664);
    *(undefined4 *)(lVar7 + 0x3ac) = *(undefined4 *)(gp + -0x660);
    *(undefined4 *)(((ulong)*(uint *)(gp + -0x2b4) << 0x20) + 0x108080000c8ac) = 0x2000;
    uVar20 = *(uint *)(gp + -0x678);
    if (uVar20 >> 0x1d == 0) {
      uVar23 = uVar20 >> 0x10 & 0xff;
      if (uVar23 != 0) {
        *(uint *)(gp + -0x2b8) = uVar23;
      }
      lVar7 = (ulong)*(uint *)(gp + -0x2b4) << 0x20;
      uVar10 = *(undefined8 *)(gp + -0x674);
      *(undefined4 *)(lVar7 + 0x108080000c8a4) = *(undefined4 *)(lVar7 + 0x108080000c8a4);
      *(undefined4 *)(lVar7 + 0x108080000c8ac) = 0x3000;
      *(uint *)(gp + -0x450) = uVar20 & 0xffff;
      *(undefined8 *)(gp + -0x460) = uVar10;
      *(undefined8 *)(gp + -0x458) = 0;
      _DAT_2000000000120 = 0;
      _DAT_20000000000d8 = 0;
      uVar10 = *(undefined8 *)(*(long *)(gp + -0x2b0) + 0x1f8);
      _DAT_2000000000098 = _DAT_2000000000308;
      _DAT_100010000c0c8 = (undefined4)uVar10;
      _DAT_100010000c0cc = (undefined4)((ulong)uVar10 >> 0x20);
      _DAT_1000100008244 = *(undefined4 *)(gp + -0x668);
      _DAT_1000100008240 = 0x80000005;
      *(undefined4 *)(((ulong)*(uint *)(gp + -0x2b4) << 0x20) + 0x108080000c8ac) = 0x2000;
    }
    goto LAB_fffffffff00057b4;
  }
  if (0xa0 < uVar23) {
    if (uVar23 != 0xa4) {
      if (0xa4 < uVar23) {
        if (uVar23 == 0xd2) {
          do {
          } while( true );
        }
        goto LAB_fffffffff00057b4;
      }
      if (uVar23 == 0xa2) {
        uVar23 = *(uint *)(gp + -0x678);
        uVar4 = uVar23 >> 2 & 3;
        *(uint *)(gp + -0x684) = uVar4;
        uVar20 = uVar23 >> 0x1a & 7;
        if ((uVar4 == 0) && (uVar20 != 3)) {
          if ((uVar23 >> 0x1a & 4) == 0) {
            if (uVar20 == 0) {
              *(undefined4 *)(gp + -0x6d8) = 1;
              uVar20 = 1;
            }
            else {
              if (uVar20 != 2) goto LAB_fffffffff0008d5c;
              *(undefined4 *)(gp + -0x6d8) = 2;
            }
          }
          else if (uVar20 == 4) {
            *(undefined4 *)(gp + -0x6d8) = 0;
            uVar20 = 0;
          }
          else if (uVar20 == 5) {
            *(undefined4 *)(gp + -0x6d8) = 4;
            uVar20 = 4;
          }
          else {
LAB_fffffffff0008d5c:
            uVar20 = *(uint *)(gp + -0x6d8);
          }
        }
        else {
          *(uint *)(gp + -0x6d8) = uVar20;
        }
        uVar14 = *(undefined8 *)(gp + -0x670);
        uVar10 = *(undefined8 *)(gp + -0x668);
        uVar8 = *(undefined4 *)(gp + -0x674);
        uVar5 = uVar23 >> 0xd;
        uVar21 = uVar23 >> 8 & 0xf;
        uVar26 = uVar23 >> 0x10 & 3;
        uVar6 = uVar23 >> 0x15 & 7;
        uVar23 = uVar23 >> 0x18 & 3;
        *(undefined4 *)(gp + -0x6d0) = 0xa2;
        *(uint *)(gp + -0x6c8) = uVar21;
        *(uint *)(gp + -0x6c4) = uVar5 & 7;
        *(uint *)(gp + -0x6c0) = uVar26;
        *(uint *)(gp + -0x6bc) = uVar6;
        *(uint *)(gp + -0x6b8) = uVar23;
        *(undefined4 *)(gp + -0x6b4) = uVar8;
        *(undefined8 *)(gp + -0x6b0) = uVar14;
        *(undefined8 *)(gp + -0x6a8) = uVar10;
        lVar17 = _DAT_2000000000070 << 0x20;
        lVar7 = *(long *)(lVar17 + 0x108080000c824);
        iVar12 = (int)_DAT_2000000000070;
        *(int *)(gp + -0x2b4) = iVar12;
        *(long *)(gp + -0x2b0) = lVar7;
        if (uVar4 != 0) {
          iVar12 = 0;
          if (uVar20 == 1) {
            iVar12 = 0x600;
          }
          iVar12 = (uVar5 & 0xff) * 0x58 + iVar12;
          puVar25 = (uint *)(((ulong)((long)(iVar12 + 0x12e0) << 0x20) >> 0x1e) + 0x1000100000000);
          *puVar25 = *puVar25 & 0xfffffffe;
          *(undefined4 *)((long)(iVar12 + 0x12f2) * 4 + 0x1000100000000) = 0;
          *(undefined4 *)((long)(iVar12 + 0x130b) * 4 + 0x1000100000000) =
               *(undefined4 *)(gp + -0x6b4);
          puVar25 = (uint *)((long)(iVar12 + 0x1316) * 4 + 0x1000100000000);
          *puVar25 = *puVar25 | 1;
          do {
          } while( true );
        }
        if (uVar20 < 4) {
          if (1 < uVar20) {
            iVar12 = uVar20 - 2;
            *(int *)(gp + -0x6d8) = iVar12;
            if (iVar12 == 1) {
              iVar12 = 0x600;
            }
            iVar12 = (uVar5 & 0xff) * 0x58 + iVar12;
            puVar25 = (uint *)(((ulong)((long)(iVar12 + 0x12e0) << 0x20) >> 0x1e) + 0x1000100000000)
            ;
            *puVar25 = *puVar25 & 0xfffffffe;
            *(undefined4 *)(((ulong)((long)(iVar12 + 0x12f2) << 0x20) >> 0x1e) + 0x1000100000000) =
                 0;
            *(undefined4 *)(((ulong)((long)(iVar12 + 0x130b) << 0x20) >> 0x1e) + 0x1000100000000) =
                 *(undefined4 *)(gp + -0x6b4);
            puVar25 = (uint *)(((ulong)((long)(iVar12 + 0x1316) << 0x20) >> 0x1e) + 0x1000100000000)
            ;
            *puVar25 = *puVar25 | 1;
            do {
            } while( true );
          }
          if (uVar20 == 0) {
            *(undefined4 *)(lVar17 + 0x108080000c8ac) = 0x3000;
            iVar12 = *(int *)(gp + -0x6c0);
            iVar13 = *(int *)(gp + -0x6c4);
            iVar1 = *(int *)(gp + -0x6c8);
            puVar18 = (undefined4 *)((ulong)(uint)((iVar12 * 2 + iVar13) * 0x1c) + 0x470 + lVar7);
            uVar8 = *(undefined4 *)(gp + -0x6b4);
            uVar14 = *(undefined8 *)(gp + -0x6b0);
            uVar10 = *(undefined8 *)(gp + -0x6a8);
            *puVar18 = 0xc005a200;
            puVar18[1] = iVar1 << 8 | iVar12 << 0x10 | iVar13 << 0xd | 0x30000000;
            puVar18[2] = uVar8;
            uVar28 = (undefined4)uVar14;
            puVar18[3] = uVar28;
            uVar27 = (undefined4)((ulong)uVar14 >> 0x20);
            puVar18[4] = uVar27;
            uVar8 = (undefined4)uVar10;
            puVar18[5] = uVar8;
            uVar22 = (undefined4)((ulong)uVar10 >> 0x20);
            puVar18[6] = uVar22;
            *(undefined4 *)(((ulong)*(uint *)(gp + -0x2b4) << 0x20) + 0x108080000c8ac) = 0x2000;
            uVar15 = (long)(*(int *)(gp + -0x6c4) << 8 | *(int *)(gp + -0x6c0) << 6) << 0x20 |
                     0x1080800000000;
            iVar12 = *(int *)(gp + -0x2b4);
            *(undefined4 *)(uVar15 + 0xc378) = uVar28;
            *(undefined4 *)(uVar15 + 0xc37c) = uVar27;
            *(undefined4 *)(uVar15 + 0xc3ac) = uVar8;
            *(undefined4 *)(uVar15 + 0xc3b0) = uVar22;
            *(undefined4 *)(((long)iVar12 << 0x20 | 0x1080800000000U) + 0xc8ac) = 0x3000;
            do {
            } while (_DAT_2000000000030 != 0);
            do {
            } while( true );
          }
LAB_fffffffff0006180:
          uVar23 = uVar21 << 8 | uVar26 << 0x10 | (uVar5 & 7) << 0xd | uVar6 << 0x15 |
                   uVar23 << 0x18;
          if (uVar20 == 4) {
            uVar23 = uVar23 | 0x34080000;
          }
          else {
            uVar23 = uVar23 | 0x20000000;
          }
          uVar15 = (long)iVar12 << 0x20 | 0x1080800000000;
          uVar4 = uVar23 >> 0x12 & 2;
          uVar20 = uVar23 >> 0xd;
          if (uVar4 == 0) {
            puVar18 = (undefined4 *)
                      ((ulong)(((uVar23 >> 0x10 & 3) * 4 + (uVar20 & 7)) * 0x1c) + lVar7 + 0x4e0);
          }
          else {
            puVar18 = (undefined4 *)
                      ((ulong)(((uVar23 >> 0x10 & 3) * 2 + (uVar20 & 3)) * 0x1c) + lVar7 + 0x400);
          }
          *(undefined4 *)(lVar17 + 0x108080000c8ac) = 0x3000;
          *puVar18 = 0xc005a200;
          puVar18[1] = uVar23;
          puVar18[2] = uVar8;
          uVar8 = (undefined4)uVar14;
          puVar18[3] = uVar8;
          uVar22 = (undefined4)((ulong)uVar14 >> 0x20);
          puVar18[4] = uVar22;
          puVar18[5] = (int)uVar10;
          puVar18[6] = (int)((ulong)uVar10 >> 0x20);
          *(undefined4 *)(((ulong)*(uint *)(gp + -0x2b4) << 0x20) + 0x108080000c8ac) = 0x2000;
          uVar20 = (uVar20 & 0x18) << 3 | (uVar20 & 7) << 8 | (uVar20 & 0x40) + 0x20 >> 1;
          *(undefined4 *)(((ulong)uVar20 << 0x20) + 0x108080000c868) = 0x80000000;
          uVar16 = (long)(int)uVar20 << 0x20 | 0x1080800000000;
          if (uVar4 == 0) {
            *(undefined4 *)(uVar16 + 0xc824) = uVar8;
            *(undefined4 *)(uVar16 + 0xc828) = uVar22;
            *(undefined4 *)(uVar15 + 0xc8ac) = 0x3000;
            do {
            } while (_DAT_2000000000030 != 0);
            do {
            } while( true );
          }
          *(undefined4 *)(uVar16 + 0xc824) = uVar8;
          *(undefined4 *)(uVar16 + 0xc828) = uVar22;
          *(undefined4 *)(uVar15 + 0xc8ac) = 0x3000;
          do {
          } while (_DAT_2000000000030 != 0);
          do {
          } while( true );
        }
        if (uVar20 == 4) goto LAB_fffffffff0006180;
        goto LAB_fffffffff00057b4;
      }
      if (uVar23 != 0xa3) goto LAB_fffffffff00057b4;
      uVar23 = *(uint *)(gp + -0x678);
      uVar4 = uVar23 >> 2 & 3;
      *(uint *)(gp + -0x684) = uVar4;
      uVar20 = uVar23 >> 0x1a & 7;
      if ((uVar4 == 0) && (uVar20 != 3)) {
        if ((uVar23 >> 0x1a & 4) == 0) {
          if (uVar20 == 0) {
            *(undefined4 *)(gp + -0x6d8) = 1;
          }
          else if (uVar20 == 2) goto LAB_fffffffff0005974;
        }
        else if (uVar20 == 4) {
          *(undefined4 *)(gp + -0x6d8) = 0;
        }
        else if (uVar20 == 5) {
          uVar20 = 4;
          goto LAB_fffffffff0005974;
        }
      }
      else {
LAB_fffffffff0005974:
        *(uint *)(gp + -0x6d8) = uVar20;
      }
      uVar20 = uVar23 & 3;
      *(undefined4 *)(gp + -0x6d0) = 0xa3;
      *(uint *)(gp + -0x6d4) = uVar20;
      if (uVar20 == 3) {
        uVar20 = *(uint *)(gp + -0x674);
        *(uint *)(gp + -0x6b4) = uVar20;
        *(undefined8 *)(gp + -0x690) = *(undefined8 *)(gp + -0x670);
        *(undefined4 *)(gp + -0x688) = *(undefined4 *)(gp + -0x668);
        if (*(int *)(gp + -0x6d8) == 0) {
          iVar12 = 0;
          if ((_DAT_108080000c380 == 0) || (uVar20 != (_DAT_108080000c3b4 & 0xffffffc))) {
            if ((_DAT_109080000c380 == 0) || (uVar20 != (_DAT_109080000c3b4 & 0xffffffc))) {
              if ((_DAT_108480000c380 == 0) || (uVar20 != (_DAT_108480000c3b4 & 0xffffffc))) {
                if ((_DAT_109480000c380 == 0) || (uVar20 != (_DAT_109480000c3b4 & 0xffffffc)))
                goto LAB_fffffffff00057b4;
                iVar13 = 1;
                iVar12 = 1;
              }
              else {
                iVar13 = 1;
              }
            }
            else {
              iVar13 = 0;
              iVar12 = 1;
            }
          }
          else {
            iVar13 = 0;
          }
          lVar7 = (long)(iVar12 << 8 | iVar13 << 6) << 0x20;
          *(undefined4 *)(lVar7 + 0x108080000c3e4) = 0x18;
          *(undefined4 *)(lVar7 + 0x108080000c3e4) = 0x19;
          do {
          } while( true );
        }
      }
      else {
        uVar5 = uVar23 >> 4 & 3;
        if (uVar5 != 1) {
          if (uVar5 - 2 < 2) {
            lVar7 = *(long *)((_DAT_2000000000070 << 0x20) + 0x108080000c824);
            iVar12 = (int)_DAT_2000000000070;
            *(int *)(gp + -0x2b4) = iVar12;
            *(long *)(gp + -0x2b0) = lVar7;
            uVar15 = 0;
            do {
              uVar16 = 0;
              do {
                lVar17 = (uVar15 | uVar16 | 0x10) << 0x20;
                if ((*(uint *)(lVar17 + 0x108080000c82c) & 1) != 0) {
                  uVar8 = 0x502;
                  if ((uVar20 != 1) &&
                     (uVar8 = 0x501, (*(uint *)(lVar17 + 0x108080000c834) & 0x40000000) != 0)) {
                    uVar8 = 0x503;
                  }
                  *(undefined4 *)(lVar17 + 0x108080000c884) = uVar8;
                }
                uVar16 = (ulong)((int)uVar16 + 0x100);
              } while (uVar16 != 0x400);
              uVar15 = (ulong)((int)uVar15 + 0x40);
            } while (uVar15 != 0x100);
            iVar13 = 0;
            lVar17 = 0;
            while( true ) {
              uVar15 = 0;
              lVar19 = lVar17;
              while( true ) {
                lVar9 = _DAT_20000000000f8;
                uVar16 = (long)(iVar13 << 4) | uVar15;
                uVar24 = uVar16 | 0x10;
                uVar20 = *(uint *)(((long)iVar12 << 0x20) + 0x108080000c8ac);
                *(undefined4 *)(((long)iVar12 << 0x20) + 0x108080000c8ac) = 0x3000;
                _DAT_20000000000d8 = ((long)(int)(uVar20 >> 0x18) & 3U) << 7;
                _DAT_2000000000120 = 0;
                *(undefined4 *)(lVar7 + 0x4e0 + lVar19) = 0;
                *(undefined4 *)(((ulong)*(uint *)(gp + -0x2b4) << 0x20) + 0x108080000c8ac) = 0x2000;
                lVar7 = uVar24 << 0x20;
                if ((ulong)(_DAT_20000000000f8 - lVar9) <= (ulong)*(uint *)(gp + -0x2b8) * 10000000)
                {
                  do {
                  } while( true );
                }
                *(undefined4 *)(lVar7 + 0x108080000c884) = 0;
                *(uint *)(lVar7 + 0x108080000c87c) = *(uint *)(lVar7 + 0x108080000c87c) & 0x7fffffff
                ;
                if ((*(uint *)(lVar7 + 0x108080000c82c) & 1) != 0) {
                  _DAT_20000000000d8 =
                       ((long)(int)(*(uint *)(lVar7 + 0x108080000c8ac) >> 0x18) & 3U) << 7;
                  _DAT_2000000000120 = 0;
                  *(uint *)(*(long *)(lVar7 + 0x108080000c824) + 0x3c0) =
                       *(uint *)(lVar7 + 0x108080000c860) & 0xffffffc | 0x80000000;
                }
                uVar16 = (uVar16 | 0x2018) << 0x20 | 0x1080800000000;
                uVar20 = *(uint *)(uVar16 + 0x3f050);
                if (uVar20 != 0) {
                  uVar23 = (uint)uVar24;
                  *(uint *)(uVar16 + 0x3f050) =
                       ~(1 << ((long)(int)(uVar23 >> 3) & 0x18U | (long)(int)(uVar23 >> 8) & 0x1fU))
                       & uVar20;
                }
                _DAT_2000000000470 = 0;
                uVar15 = (ulong)((int)uVar15 + 0x100);
                lVar19 = lVar19 + 0x1c;
                if (uVar15 == 0x400) break;
                lVar7 = *(long *)(gp + -0x2b0);
                iVar12 = *(int *)(gp + -0x2b4);
              }
              iVar13 = iVar13 + 4;
              lVar17 = lVar17 + 0x70;
              if (iVar13 == 0x10) break;
              lVar7 = *(long *)(gp + -0x2b0);
              iVar12 = *(int *)(gp + -0x2b4);
            }
          }
          else if (uVar23 >> 0x1d != 0) {
            lVar17 = gp + -0x6d8;
            lVar7 = ((ulong)((long)(int)((uVar23 >> 0x1d) - 1) << 0x20) >> 0x1e) + lVar17;
            do {
              uVar20 = *(uint *)(lVar17 + 100);
              *(uint *)(gp + -0x6b4) = uVar20;
              lVar9 = _DAT_2000000000070 << 0x20;
              lVar19 = *(long *)(lVar9 + 0x108080000c824);
              *(int *)(gp + -0x2b4) = (int)_DAT_2000000000070;
              *(long *)(gp + -0x2b0) = lVar19;
              uVar23 = *(uint *)(gp + -0x6d8);
              if (uVar4 == 0) {
                if (uVar23 < 4) {
                  if (uVar23 < 2) {
                    if (uVar23 == 0) {
                      iVar12 = 0;
                      if ((_DAT_108080000c380 != 0) && (uVar20 == (_DAT_108080000c3b4 & 0xffffffc)))
                      {
                        iVar13 = 0;
LAB_fffffffff0008a00:
                        *(undefined4 *)
                         (((long)(iVar12 << 8 | iVar13 << 6) << 0x20) + 0x108080000c3cc) = 1;
                        *(undefined4 *)(((ulong)*(uint *)(gp + -0x2b4) << 0x20) + 0x108080000c8ac) =
                             0x3000;
                        do {
                        } while( true );
                      }
                      if ((_DAT_109080000c380 != 0) && (uVar20 == (_DAT_109080000c3b4 & 0xffffffc)))
                      {
                        iVar13 = 0;
                        iVar12 = 1;
                        goto LAB_fffffffff0008a00;
                      }
                      if ((_DAT_108480000c380 != 0) && (uVar20 == (_DAT_108480000c3b4 & 0xffffffc)))
                      {
                        iVar13 = 1;
                        goto LAB_fffffffff0008a00;
                      }
                      if (_DAT_109480000c380 != 0) {
                        iVar13 = 1;
                        iVar12 = 1;
                        if (uVar20 == (_DAT_109480000c3b4 & 0xffffffc)) goto LAB_fffffffff0008a00;
                      }
                    }
                    else {
                      iVar12 = 0;
                      do {
                        iVar13 = 0;
                        do {
                          uVar23 = iVar12 << 6 | iVar13 << 8;
                          lVar11 = (ulong)(uVar23 | 0x10) << 0x20;
                          if ((((*(uint *)(lVar11 + 0x108080000c82c) & 1) != 0) &&
                              ((*(uint *)(lVar11 + 0x108080000c860) & 0x40000000) != 0)) &&
                             (uVar20 == (*(uint *)(lVar11 + 0x108080000c860) & 0xffffffc))) {
                            uVar20 = 2;
                            if ((*(int *)(gp + -0x6d4) != 1) &&
                               (uVar20 = 1, (*(uint *)(lVar11 + 0x108080000c834) & 0x40000000) != 0)
                               ) {
                              uVar20 = 3;
                            }
                            if ((*(uint *)(lVar11 + 0x108080000c82c) & 1) != 0) {
                              *(uint *)(lVar11 + 0x108080000c884) = uVar20 | 0x500;
                            }
                            lVar3 = _DAT_20000000000f8;
                            uVar20 = *(uint *)(lVar9 + 0x108080000c8ac);
                            *(undefined4 *)(lVar9 + 0x108080000c8ac) = 0x3000;
                            _DAT_20000000000d8 = ((long)(int)(uVar20 >> 0x18) & 3U) << 7;
                            _DAT_2000000000120 = 0;
                            *(undefined4 *)
                             ((ulong)(uint)((iVar12 * 4 + iVar13) * 0x1c) + lVar19 + 0x4e0) = 0;
                            *(undefined4 *)
                             (((ulong)*(uint *)(gp + -0x2b4) << 0x20) + 0x108080000c8ac) = 0x2000;
                            if ((ulong)(_DAT_20000000000f8 - lVar3) <=
                                (ulong)*(uint *)(gp + -0x2b8) * 10000000) {
                              do {
                              } while( true );
                            }
                            *(undefined4 *)(lVar11 + 0x108080000c884) = 0;
                            *(uint *)(lVar11 + 0x108080000c87c) =
                                 (uint)((ulong)((long)*(int *)(lVar11 + 0x108080000c87c) << 0x21) >>
                                       0x21);
                            if ((*(uint *)(lVar11 + 0x108080000c82c) & 1) != 0) {
                              _DAT_20000000000d8 =
                                   ((long)(int)(*(uint *)(lVar11 + 0x108080000c8ac) >> 0x18) & 3U)
                                   << 7;
                              _DAT_2000000000120 = 0;
                              *(uint *)(*(long *)(lVar11 + 0x108080000c824) + 0x3c0) =
                                   *(uint *)(lVar11 + 0x108080000c860) & 0xffffffc | 0x80000000;
                            }
                            uVar15 = (ulong)(uVar23 | 0x2018) << 0x20 | 0x1080800000000;
                            uVar20 = *(uint *)(uVar15 + 0x3f050);
                            if (uVar20 != 0) {
                              *(uint *)(uVar15 + 0x3f050) =
                                   ~(1 << ((long)(int)((uVar23 | 0x10) >> 3) & 0x18U |
                                          (long)(int)(uVar23 >> 8) & 0x1fU)) & uVar20;
                            }
                            _DAT_2000000000470 = 0;
                            goto LAB_fffffffff0007a48;
                          }
                          iVar13 = iVar13 + 1;
                        } while (iVar13 != 4);
                        iVar12 = iVar12 + 1;
                      } while (iVar12 != 4);
                    }
                  }
                  else {
                    iVar12 = uVar23 - 2;
                    if (iVar12 == 1) {
                      iVar12 = 0x600;
                    }
                    iVar13 = 0;
                    do {
                      uVar15 = (ulong)((long)(iVar12 + 0x12e0) << 0x20) >> 0x1e;
                      if (((*(uint *)(uVar15 + 0x1000100000000) & 1) != 0) &&
                         (uVar20 == (*(uint *)(((ulong)((long)(iVar12 + 0x130b) << 0x20) >> 0x1e) +
                                              0x1000100000000) & 0xfffffff))) {
                        uVar16 = (ulong)((long)(iVar12 + 0x12f2) << 0x20) >> 0x1e;
                        if (*(int *)(uVar16 + 0x1000100000000) != 0) {
                          puVar25 = (uint *)(uVar15 + 0x1000100000000);
                          *puVar25 = *puVar25 & 0xfffffffe;
                          puVar25 = (uint *)(((ulong)((long)(iVar12 + 0x1316) << 0x20) >> 0x1e) +
                                            0x1000100000000);
                          *(undefined4 *)(uVar16 + 0x1000100000000) = 0;
                          *puVar25 = *puVar25 | 1;
                          do {
                          } while( true );
                        }
                        break;
                      }
                      iVar13 = iVar13 + 1;
                      iVar12 = iVar12 + 0x58;
                    } while (iVar13 != 8);
                  }
                }
                else if ((uVar23 == 4) && (_DAT_108380000c82c != 0)) {
                  do {
                  } while( true );
                }
              }
              else {
                iVar12 = 0;
                if (uVar23 == 1) {
                  iVar12 = 0x600;
                }
                iVar13 = 0;
                do {
                  uVar15 = (ulong)((long)(iVar12 + 0x12e0) << 0x20) >> 0x1e;
                  if (((*(uint *)(uVar15 + 0x1000100000000) & 1) != 0) &&
                     (uVar20 == (*(uint *)(((ulong)((long)(iVar12 + 0x130b) << 0x20) >> 0x1e) +
                                          0x1000100000000) & 0xfffffff))) {
                    uVar16 = (ulong)((long)(iVar12 + 0x12f2) << 0x20) >> 0x1e;
                    if (*(int *)(uVar16 + 0x1000100000000) != 0) {
                      puVar25 = (uint *)(uVar15 + 0x1000100000000);
                      *puVar25 = *puVar25 & 0xfffffffe;
                      *(undefined4 *)(uVar16 + 0x1000100000000) = 0;
                      puVar25 = (uint *)(((ulong)((long)(iVar12 + 0x1316) << 0x20) >> 0x1e) +
                                        0x1000100000000);
                      *puVar25 = *puVar25 | 1;
                      do {
                      } while( true );
                    }
                    break;
                  }
                  iVar13 = iVar13 + 1;
                  iVar12 = iVar12 + 0x58;
                } while (iVar13 != 8);
              }
LAB_fffffffff0007a48:
              if (lVar7 == lVar17) break;
              uVar4 = *(uint *)(gp + -0x684);
              lVar17 = lVar17 + 4;
            } while( true );
          }
        }
      }
      goto LAB_fffffffff00057b4;
    }
    *(undefined4 *)(gp + -0x6d0) = 0xa4;
    *(uint *)(gp + -0x6cc) = *(uint *)(gp + -0x678);
    *(undefined8 **)(gp + -0x6a0) = *(undefined8 **)(gp + -0x670);
    *(undefined8 *)(gp + -0x698) = *(undefined8 *)(gp + -0x668);
    uVar20 = *(uint *)(gp + -0x674) >> 0x1c & 7;
    if (uVar20 == 0) {
      *(undefined4 *)(gp + -0x6d8) = 1;
    }
    else if (uVar20 == 4) {
      *(undefined4 *)(gp + -0x6d8) = 0;
    }
    uVar20 = *(uint *)(gp + -0x674) & 0xfffffff;
    *(uint *)(gp + -0x6b4) = uVar20;
    uVar15 = *(ulong *)(gp + -0x6d0) >> 0x3c & 3;
    if (uVar15 == 0) {
      uVar20 = *(uint *)(gp + -0x678) & 0xc0000000;
      if (uVar20 == 0) {
        do {
        } while( true );
      }
      _DAT_2000000000120 = uVar15;
      **(undefined8 **)(gp + -0x670) = *(undefined8 *)(gp + -0x668);
      if (uVar20 != 0x40000000) {
        do {
        } while ((int)_DAT_2000000000090 != 0);
        if (uVar20 != 0x80000000) {
          do {
          } while( true );
        }
      }
      goto LAB_fffffffff00057b4;
    }
    if (uVar15 != 2) goto LAB_fffffffff00057b4;
    if (*(int *)(gp + -0x6d8) == 1) {
      uVar15 = 0;
      do {
        uVar16 = 0;
        do {
          lVar7 = (uVar15 | uVar16 | 0x10) << 0x20;
          if ((((*(uint *)(lVar7 + 0x108080000c82c) & 1) != 0) &&
              ((*(uint *)(lVar7 + 0x108080000c860) & 0x40000000) != 0)) &&
             (uVar20 == (*(uint *)(lVar7 + 0x108080000c860) & 0xffffffc))) {
            *(undefined4 *)(lVar7 + 0x108080000c884) = 0x404;
            do {
            } while( true );
          }
          uVar16 = (ulong)((int)uVar16 + 0x100);
        } while (uVar16 != 0x400);
        uVar15 = (ulong)((int)uVar15 + 0x40);
      } while (uVar15 != 0x100);
      goto LAB_fffffffff00057b4;
    }
    if (*(int *)(gp + -0x6d8) != 0) goto LAB_fffffffff00057b4;
    *(undefined4 *)(((ulong)*(uint *)(gp + -0x2b4) << 0x20) + 0x108080000c8ac) = 0x3000;
    uVar20 = *(uint *)(gp + -0x6b4);
    iVar12 = 0;
    if ((_DAT_108080000c380 == 0) || (uVar20 != (_DAT_108080000c3b4 & 0xffffffc))) {
      if ((_DAT_109080000c380 != 0) && (uVar20 == (_DAT_109080000c3b4 & 0xffffffc))) {
        iVar13 = 0;
        iVar12 = 1;
        goto LAB_fffffffff0009b5c;
      }
      if ((_DAT_108480000c380 != 0) && (uVar20 == (_DAT_108480000c3b4 & 0xffffffc))) {
        iVar13 = 1;
        goto LAB_fffffffff0009b5c;
      }
      if ((_DAT_109480000c380 != 0) && (uVar20 == (_DAT_109480000c3b4 & 0xffffffc))) {
        iVar13 = 1;
        iVar12 = 1;
        goto LAB_fffffffff0009b5c;
      }
    }
    else {
      iVar13 = 0;
LAB_fffffffff0009b5c:
      lVar19 = (long)(iVar12 << 8 | iVar13 << 6) << 0x20;
      lVar7 = *(long *)(lVar19 + 0x108080000c378);
      uVar23 = _DAT_1000100009118 & 0x3ff;
      uVar6 = _DAT_1000100009118 & 0x3ff;
      uVar8 = *(undefined4 *)(lVar19 + 0x108080000c3b8);
      uVar22 = *(undefined4 *)(lVar19 + 0x108080000c3c0);
      uVar4 = _DAT_1000100009118 & 0x3ff;
      iVar12 = *(int *)(lVar19 + 0x108080000c3c4);
      uVar5 = _DAT_1000100009118 & 0x3ff;
      uVar20 = _DAT_1000100009118 & 0x3ff;
      lVar19 = (long)iVar12;
      _DAT_2000000000120 = 0;
      *(long *)(lVar7 + 0x158) = _DAT_20000000000f8;
      do {
      } while ((int)_DAT_2000000000090 != 0);
      *(uint *)(lVar7 + 0x170) = uVar23 + uVar6 + uVar4 + uVar5 + uVar20;
      *(undefined4 *)(lVar7 + 0x174) = uVar22;
      *(int *)(lVar7 + 0x178) = iVar12;
      *(undefined4 *)(lVar7 + 0x17c) = uVar8;
      do {
      } while ((int)_DAT_2000000000090 != 0);
      _DAT_1000100030800 = 0;
      iVar12 = (int)_DAT_20000000002f0;
      if (iVar12 == 0) {
LAB_fffffffff0009f4c:
        uVar23 = 0x31000;
        lVar7 = FUN_fffffffff0012f60(0x11c2,lVar19);
        uVar20 = *(uint *)(lVar17 + 0x100010000068c);
        lVar7 = lVar7 + 0x1080800000000 + lVar17;
        *(uint *)(lVar17 + 0x100010000068c) = uVar20 | 1;
        uVar4 = *(uint *)(lVar7 + 0x3c4) & (2 << ((long)*(int *)(lVar7 + 0x3bc) & 0x1fU)) - 1U;
        *(uint *)(lVar7 + 0x3b8) = uVar4;
        uVar8 = *(undefined4 *)(gp + -0x690);
        *(uint *)(lVar7 + 0x3c0) = uVar4;
        iVar12 = *(int *)(gp + -0x6b4);
        uVar22 = *(undefined4 *)(gp + -0x68c);
        uVar27 = *(undefined4 *)(gp + -0x688);
        *(undefined4 *)(lVar17 + 0x1000100000350) = uVar8;
        *(undefined4 *)(lVar17 + 0x1000100000354) = uVar22;
        *(undefined4 *)(lVar17 + 0x1000100000358) = uVar27;
        *(uint *)(lVar17 + 0x100010000035c) = iVar12 << 1 | uVar23 >> 8;
        *(undefined4 *)(lVar7 + 0x3e4) = 0;
        *(uint *)(lVar17 + 0x100010000068c) = uVar20;
        do {
        } while( true );
      }
      lVar19 = 0x100;
      lVar17 = (long)_DAT_100010000ce08;
      _DAT_1000100030800 = 0x100;
      if ((iVar12 == 0) || (_DAT_1000100030800 = 0, iVar12 == 0)) goto LAB_fffffffff0009f4c;
      lVar17 = (long)_DAT_100010000ce2c;
      _DAT_1000100030800 = 1;
      if (iVar12 == 0) goto LAB_fffffffff0009f4c;
      lVar17 = (long)_DAT_100010000ce2c;
      _DAT_1000100030800 = 0x100;
      if (iVar12 == 0) goto LAB_fffffffff0009f4c;
      lVar17 = 0x101;
      _DAT_1000100030800 = 0x101;
      if ((iVar12 == 0) || (_DAT_1000100030800 = 0, iVar12 == 0)) goto LAB_fffffffff0009f4c;
      lVar17 = (long)_DAT_100010000ce74;
      _DAT_1000100030800 = 1;
      if ((iVar12 == 0) || (_DAT_1000100030800 = 0x100, iVar12 == 0)) goto LAB_fffffffff0009f4c;
      lVar19 = (long)_DAT_100010000ce74;
      _DAT_1000100030800 = 0x101;
      if ((iVar12 == 0) || (_DAT_1000100030800 = 0, iVar12 == 0)) goto LAB_fffffffff0009f4c;
      lVar19 = 1;
      _DAT_1000100030800 = 1;
      if (iVar12 == 0) goto LAB_fffffffff0009f4c;
      lVar19 = 0x100;
      lVar17 = (long)_DAT_100010000ce3c;
      _DAT_1000100030800 = 0x100;
      if (iVar12 == 0) goto LAB_fffffffff0009f4c;
      lVar17 = (long)_DAT_100010000ce3c;
      _DAT_1000100030800 = 0x101;
      if (((((iVar12 == 0) || (_DAT_1000100030800 = 0, iVar12 == 0)) ||
           (_DAT_1000100030800 = 0x100, iVar12 == 0)) ||
          ((_DAT_1000100030800 = 0, iVar12 == 0 || (_DAT_1000100030800 = 0x100, iVar12 == 0)))) ||
         ((_DAT_1000100030800 = 0, iVar12 == 0 || (_DAT_1000100030800 = 0, iVar12 == 0))))
      goto LAB_fffffffff0009f4c;
      lVar19 = 0x10000;
      _DAT_1000100030800 = 0x10000;
      if (iVar12 == 0) goto LAB_fffffffff0009f4c;
      _DAT_1000100030800 = 0xe0000000;
      _DAT_2000000000120 = 0;
      *(undefined4 *)(lVar7 + 0x160) = 0xd7870f42;
      *(undefined4 *)(lVar7 + 0x164) = 0xc96c5795;
      do {
      } while ((int)_DAT_2000000000090 != 0);
    }
    *(undefined4 *)(((ulong)*(uint *)(gp + -0x2b4) << 0x20) + 0x108080000c8ac) = 0x2000;
    goto LAB_fffffffff00057b4;
  }
  if (uVar23 != 0x40) {
    if (0x40 < uVar23) {
      if (uVar23 == 0x98) {
        uVar20 = *(uint *)(gp + -0x678);
        if ((uVar20 & 7) == 0) {
          uVar15 = (long)*(int *)(((ulong)*(uint *)(gp + -0x2b4) << 0x20) + 0x108080000c830) & 0xf;
          _DAT_2000000000198 = 5;
          do {
          } while ((_DAT_2000000000048 & 0x20) == 0);
          _DAT_100010000a4d4 = 0xffffffff;
          _DAT_100010000a4d8 = 0x1f;
          _DAT_100010000a438 =
               _DAT_100010000a438 & 0xfff80000 | (uVar20 >> 0x1d) << 0x10 | 1 << uVar15;
          do {
          } while ((_DAT_100010000a480 & 1L << uVar15) == 0);
          _DAT_20000000001a0 = 5;
          _DAT_2000000000098 = uVar4;
        }
        else {
          iVar12 = 0x10;
          uVar15 = 0;
          do {
            if ((*(int *)(lVar7 + (uVar15 + 0x5c) * 4 + 0x370) < 0) &&
               (((*(uint *)(lVar7 + (uVar15 + 0x4c) * 4 + 0x370) ^ uVar20 >> 5) & 0xffff) == 0)) {
              _DAT_2000000000198 = 5;
              do {
              } while ((_DAT_2000000000048 & 0x20) == 0);
              _DAT_100010000a4d4 = 0xffffffff;
              _DAT_100010000a4d8 = 0x1f;
              _DAT_100010000a438 =
                   _DAT_100010000a438 & 0xfff80000 | (uVar20 >> 0x1d) << 0x10 | 1 << uVar15;
              do {
              } while ((_DAT_100010000a480 & 1L << uVar15) == 0);
              _DAT_20000000001a0 = 5;
              _DAT_2000000000098 = uVar4;
              break;
            }
            iVar12 = iVar12 + -1;
            uVar15 = (long)((int)uVar15 + 1) & 0xf;
          } while (iVar12 != 0);
        }
      }
      goto LAB_fffffffff00057b4;
    }
    if (uVar23 == 0x37) {
      uVar23 = *(uint *)(gp + -0x678);
      uVar21 = uVar23 >> 8 & 0xf;
      uVar6 = uVar23 >> 0x10 & 1;
      uVar26 = uVar23 >> 0x14 & 1;
      uVar5 = (uint)((ulong)((long)(int)uVar20 << 0x22) >> 0x32);
      iVar12 = uVar5 - 2;
      if (uVar21 == 3) {
        if (uVar6 == 0) {
          lVar17 = 4;
          uVar23 = *(uint *)(gp + -0x674) >> 2;
          if (uVar5 != 2) {
            do {
              _DAT_1000100031014 = uVar23;
              uVar15 = lVar17 << 0x20;
              lVar17 = (long)((int)lVar17 + 1);
              uVar23 = _DAT_1000100031014 + 4;
              _DAT_1000100031018 = *(undefined4 *)(lVar7 + (uVar15 >> 0x1e) + 0x15c);
            } while (((ulong)((long)(int)uVar20 << 0x22) >> 0x32) + 2 != lVar17);
          }
        }
        else {
          _DAT_1000100031014 = *(uint *)(gp + -0x674) >> 2;
          _DAT_1000100031018 = *(undefined4 *)(gp + -0x66c);
        }
        goto LAB_fffffffff00057b4;
      }
      if ((uVar23 >> 8 & 0xc) != 0) {
        if (uVar21 == 5) {
          _DAT_2000000000120 = (long)(int)(uVar23 >> 0x19) & 3;
          puVar18 = *(undefined4 **)(gp + -0x674);
          if (uVar6 == 0) {
            iVar13 = 0;
            if (uVar5 != 2) {
              do {
                *(undefined4 *)((ulong)(uint)(iVar13 << 2) + (long)puVar18) =
                     *(undefined4 *)(lVar7 + ((ulong)((long)(iVar13 + 4) << 0x20) >> 0x1e) + 0x15c);
                iVar13 = iVar13 + 1;
              } while (iVar12 != iVar13);
            }
          }
          else {
            *puVar18 = *(undefined4 *)(gp + -0x66c);
          }
          if (uVar26 != 0) {
            do {
            } while (_DAT_2000000000090 != 0);
          }
        }
        goto LAB_fffffffff00057b4;
      }
      if (uVar21 != 0) {
        if (uVar21 == 2) {
          _DAT_2000000000120 = (long)(int)(uVar23 >> 0x19) & 3;
          puVar18 = *(undefined4 **)(gp + -0x674);
          if (uVar6 == 0) {
            iVar13 = 0;
            if (uVar5 != 2) {
              do {
                *(undefined4 *)((ulong)(uint)(iVar13 << 2) + (long)puVar18) =
                     *(undefined4 *)(lVar7 + ((ulong)((long)(iVar13 + 4) << 0x20) >> 0x1e) + 0x15c);
                iVar13 = iVar13 + 1;
              } while (iVar12 != iVar13);
            }
          }
          else {
            *puVar18 = *(undefined4 *)(gp + -0x66c);
          }
          if (uVar26 != 0) {
            do {
            } while (_DAT_2000000000090 != 0);
          }
        }
        goto LAB_fffffffff00057b4;
      }
      uVar15 = (ulong)*(int *)(gp + -0x674);
      if (uVar15 == 0xbcc) {
LAB_fffffffff0008848:
        if (uVar6 == 0) {
          iVar13 = 0;
          _DAT_2000000000098 = uVar4;
          if (uVar5 != 2) {
            do {
              *(undefined4 *)
               (((ulong)((long)(*(int *)(gp + -0x674) + iVar13) << 0x20) >> 0x1e) + 0x1000100000000)
                   = *(undefined4 *)(lVar7 + ((ulong)((long)(iVar13 + 4) << 0x20) >> 0x1e) + 0x15c);
              iVar13 = iVar13 + 1;
            } while (iVar12 != iVar13);
          }
        }
        else {
          *(undefined4 *)((ulong)*(uint *)(gp + -0x674) * 4 + 0x1000100000000) =
               *(undefined4 *)(gp + -0x66c);
          _DAT_2000000000098 = uVar4;
        }
      }
      else {
        if (uVar15 < 0x520) {
          if (0x50d < uVar15) goto LAB_fffffffff0008848;
        }
        else if (*(int *)(gp + -0x674) - 0x1537U < 2) goto LAB_fffffffff0008848;
        if (uVar6 == 0) {
          iVar13 = 0;
          if (uVar5 != 2) {
            while( true ) {
              *(undefined4 *)
               (((ulong)((long)(iVar13 + (int)uVar15) << 0x20) >> 0x1e) + 0x1000100000000) =
                   *(undefined4 *)(lVar7 + ((ulong)((long)(iVar13 + 4) << 0x20) >> 0x1e) + 0x15c);
              iVar13 = iVar13 + 1;
              if (iVar12 == iVar13) break;
              uVar15 = (ulong)*(int *)(gp + -0x674);
            }
          }
        }
        else {
          *(undefined4 *)(((uVar15 << 0x20) >> 0x1e) + 0x1000100000000) =
               *(undefined4 *)(gp + -0x66c);
        }
      }
      goto LAB_fffffffff00057b4;
    }
    if (uVar23 != 0x3c) goto LAB_fffffffff00057b4;
    uVar20 = *(uint *)(gp + -0x678);
    uVar23 = *(uint *)(gp + -0x674);
    puVar25 = *(uint **)(gp + -0x674);
    uVar5 = uVar20 >> 6 & 3;
    uVar6 = uVar20 & 7;
    uVar21 = uVar20 >> 4 & 3;
    uVar15 = (ulong)uVar23;
    if (uVar5 == 1) {
      if (uVar23 != 0xbcc) {
        if (uVar23 < 0x520) {
          if (uVar23 < 0x50e) {
LAB_fffffffff0006ff8:
            *(undefined4 *)(uVar15 * 4 + 0x1000100000000) = *(undefined4 *)(gp + -0x66c);
            uVar15 = (ulong)*(uint *)(gp + -0x670);
            goto LAB_fffffffff0005c50;
          }
        }
        else if (1 < uVar23 - 0x1537) goto LAB_fffffffff0006ff8;
      }
      *(undefined4 *)((ulong)*(uint *)(gp + -0x674) * 4 + 0x1000100000000) =
           *(undefined4 *)(gp + -0x66c);
      uVar15 = (ulong)*(uint *)(gp + -0x670);
      _DAT_2000000000098 = uVar4;
    }
LAB_fffffffff0005c50:
    lVar7 = 0xfa000;
    if (*(ushort *)(gp + -0x662) != 0) {
      lVar7 = (ulong)*(ushort *)(gp + -0x662) * 0x19000;
    }
    do {
      if (uVar21 == 0) {
        uVar23 = *(uint *)(uVar15 * 4 + 0x1000100000000);
      }
      else {
        _DAT_2000000000120 = 0;
        _DAT_20000000000d8 = 0;
        uVar23 = *puVar25;
        do {
        } while (_DAT_2000000000090 != 0);
        _DAT_2000000000098 = (uRam000200000000002c >> 6 & 0xf) << 0x14 | 8;
      }
      uVar4 = *(uint *)(gp + -0x66c);
      uVar23 = *(uint *)(gp + -0x668) & uVar23;
      if (uVar6 == 3) {
        if (uVar4 == uVar23) goto LAB_fffffffff0005ce0;
      }
      else if ((uVar20 & 4) == 0) {
        if (uVar6 == 1) {
          if (uVar23 < uVar4) goto LAB_fffffffff0005ce0;
        }
        else if (uVar6 == 2) {
          if (uVar23 <= uVar4) {
LAB_fffffffff0005ce0:
            if (uVar5 == 1) {
              if (uVar21 == 0) {
                *(uint *)(uVar15 * 4 + 0x1000100000000) = uVar4;
              }
              else {
                *puVar25 = uVar4;
              }
            }
            break;
          }
        }
        else if (uVar6 == 0) goto LAB_fffffffff0005ce0;
      }
      else if (uVar6 == 5) {
        if (uVar4 <= uVar23) goto LAB_fffffffff0005ce0;
      }
      else if (uVar6 == 6) {
        if (uVar4 < uVar23) goto LAB_fffffffff0005ce0;
      }
      else if ((uVar6 == 4) && (uVar4 != uVar23)) goto LAB_fffffffff0005ce0;
    } while (lVar7 != 0);
    goto LAB_fffffffff00057b4;
  }
  uVar20 = *(uint *)(gp + -0x678);
  uVar23 = uVar20 >> 8;
  uVar21 = uVar20 & 0xf;
  uVar5 = uVar23 & 0xf;
  uVar4 = uVar20 >> 0x10 & 1;
  uVar6 = uVar20 >> 0x14 & 1;
  if (uVar21 == 5) {
    uVar22 = 0;
    lVar7 = *(long *)(gp + -0x674);
LAB_fffffffff0006dc4:
    if (uVar5 == 3) {
      _DAT_1000100031014 = *(uint *)(gp + -0x66c) >> 2;
      if (uVar4 != 0) {
        _DAT_1000100031018 = 0;
      }
      goto LAB_fffffffff00057b4;
    }
    if ((uVar23 & 0xc) != 0) {
      if (uVar5 != 4) {
        if (uVar5 != 5) goto LAB_fffffffff00057b4;
        puVar18 = *(undefined4 **)(gp + -0x66c);
        if (uVar4 == 0) {
          *puVar18 = uVar22;
        }
        else {
          uVar8 = 0;
LAB_fffffffff0008730:
          *puVar18 = uVar22;
          puVar18[1] = uVar8;
        }
        goto LAB_fffffffff0006e08;
      }
      goto LAB_fffffffff000751c;
    }
    uVar8 = 0;
    if (uVar5 != 0) {
LAB_fffffffff0006e24:
      if (uVar5 != 2) goto LAB_fffffffff00057b4;
      puVar18 = *(undefined4 **)(gp + -0x66c);
      if (uVar4 == 0) {
        *puVar18 = uVar22;
      }
      else {
LAB_fffffffff0007c10:
        *puVar18 = uVar22;
        puVar18[1] = uVar8;
      }
LAB_fffffffff0006e4c:
      if (uVar6 != 0) {
        do {
        } while (_DAT_2000000000090 != 0);
      }
      goto LAB_fffffffff00057b4;
    }
    if (uVar4 == 0) {
LAB_fffffffff0006a70:
      *(undefined4 *)((ulong)*(uint *)(gp + -0x66c) * 4 + 0x1000100000000) = uVar22;
      goto LAB_fffffffff00057b4;
    }
LAB_fffffffff0007554:
    *(int *)((ulong)*(uint *)(gp + -0x66c) * 4 + 0x1000100000000) = (int)lVar7;
  }
  else {
    if (5 < uVar21) {
      if (uVar21 == 9) {
        uVar22 = 0;
        lVar7 = _DAT_20000000000f8;
      }
      else if (uVar21 < 10) {
        if ((uVar20 & 8) == 0) {
          lVar7 = (ulong)*(uint *)(gp + -0x2b4) << 0x20;
          uVar8 = *(undefined4 *)(lVar7 + 0x108080000c898);
          uVar22 = *(undefined4 *)(lVar7 + 0x108080000c894);
        }
        else {
          if (uVar21 != 8) goto LAB_fffffffff0006fac;
          lVar7 = (ulong)*(uint *)(gp + -0x2b4) << 0x20;
          uVar8 = *(undefined4 *)(lVar7 + 0x108080000c8a0);
          uVar22 = *(undefined4 *)(lVar7 + 0x108080000c89c);
        }
        lVar7 = CONCAT44(uVar8,uVar22);
      }
      else if (uVar21 == 10) {
        uVar22 = 0;
        lVar7 = _DAT_2000000000100;
      }
      else {
LAB_fffffffff0006fac:
        uVar22 = 0;
        lVar7 = 0;
      }
      goto LAB_fffffffff0006dc4;
    }
    if (uVar21 == 3) {
      _DAT_1000100031000 = *(uint *)(gp + -0x674) >> 2;
      uVar22 = _DAT_1000100031004;
      if (uVar4 != 0) {
        lVar7 = CONCAT44(_DAT_1000100031004,_DAT_1000100031004);
        uVar8 = _DAT_1000100031004;
        goto LAB_fffffffff0007b1c;
      }
LAB_fffffffff0006a54:
      if (uVar5 == 3) {
LAB_fffffffff0008fc4:
        _DAT_1000100031014 = *(uint *)(gp + -0x66c) >> 2;
        goto LAB_fffffffff00057b4;
      }
      if ((uVar23 & 0xc) == 0) {
        uVar8 = 0;
        if (uVar5 != 0) goto LAB_fffffffff0006e24;
        goto LAB_fffffffff0006a70;
      }
LAB_fffffffff0008908:
      if (uVar5 == 4) {
        lVar7 = 0;
        goto LAB_fffffffff000751c;
      }
      if (uVar5 != 5) goto LAB_fffffffff00057b4;
      **(undefined4 **)(gp + -0x66c) = uVar22;
LAB_fffffffff0006e08:
      if (uVar6 != 0) {
        do {
        } while (_DAT_2000000000090 != 0);
      }
      goto LAB_fffffffff00057b4;
    }
    if ((uVar20 & 0xc) == 0) {
      if (uVar21 != 0) {
        if (uVar21 == 3) {
          uVar22 = 0;
          lVar7 = 0;
          goto LAB_fffffffff0006dc4;
        }
        plVar2 = *(long **)(gp + -0x674);
        _DAT_2000000000120 = (long)(int)(uVar20 >> 0xd) & 3;
        _DAT_20000000000d8 = _DAT_2000000000120 << 7;
        if (uVar4 == 0) {
          do {
          } while (_DAT_2000000000090 != 0);
          _DAT_2000000000098 = (uRam000200000000002c >> 6 & 0xf) << 0x14 | 8;
          uVar22 = (int)*plVar2;
          goto LAB_fffffffff0006a54;
        }
        uVar22 = (undefined4)*plVar2;
        lVar7 = *plVar2;
        do {
        } while (_DAT_2000000000090 != 0);
        _DAT_2000000000098 = (uRam000200000000002c >> 6 & 0xf) << 0x14 | 8;
        uVar8 = (undefined4)((ulong)lVar7 >> 0x20);
        goto LAB_fffffffff0007b1c;
      }
      uVar15 = (ulong)((long)*(int *)(gp + -0x674) << 0x20) >> 0x1e;
      if (uVar4 != 0) {
        uVar8 = *(undefined4 *)
                 (((ulong)((long)(*(int *)(gp + -0x674) + 1) << 0x20) >> 0x1e) + 0x1000100000000);
        uVar22 = *(undefined4 *)(uVar15 + 0x1000100000000);
        lVar7 = CONCAT44(uVar8,uVar22);
        if (uVar5 == 3) goto LAB_fffffffff0009914;
        if ((uVar23 & 0xc) != 0) goto LAB_fffffffff0008708;
        if (uVar5 == 0) goto LAB_fffffffff0007554;
        if (uVar5 != 2) goto LAB_fffffffff00057b4;
        puVar18 = *(undefined4 **)(gp + -0x66c);
        goto LAB_fffffffff0007c10;
      }
      uVar22 = *(undefined4 *)(uVar15 + 0x1000100000000);
      if (uVar5 == 3) goto LAB_fffffffff0008fc4;
      if ((uVar23 & 0xc) != 0) goto LAB_fffffffff0008908;
      if (uVar5 == 0) goto LAB_fffffffff0006a70;
      if (uVar5 != 2) goto LAB_fffffffff00057b4;
      **(undefined4 **)(gp + -0x66c) = uVar22;
      goto LAB_fffffffff0006e4c;
    }
    if (uVar21 != 4) goto LAB_fffffffff0006fac;
    uVar15 = (ulong)((long)*(int *)(gp + -0x674) << 0x20) >> 0x1e;
    if (uVar4 == 0) {
      uVar22 = *(undefined4 *)(uVar15 + 0x1000100000000);
      goto LAB_fffffffff0006a54;
    }
    uVar22 = *(undefined4 *)(uVar15 + 0x1000100000000);
    uVar8 = 0;
    lVar7 = CONCAT44(*(undefined4 *)
                      (((ulong)((long)(*(int *)(gp + -0x674) + 1) << 0x20) >> 0x1e) +
                      0x1000100000000),uVar22);
LAB_fffffffff0007b1c:
    if (uVar5 == 3) {
LAB_fffffffff0009914:
      _DAT_1000100031014 = *(uint *)(gp + -0x66c) >> 2;
      _DAT_1000100031018 = uVar8;
      goto LAB_fffffffff00057b4;
    }
    if ((uVar23 & 0xc) == 0) {
      if (uVar5 == 0) goto LAB_fffffffff0007554;
      goto LAB_fffffffff0006e24;
    }
LAB_fffffffff0008708:
    if (uVar5 != 4) {
      if (uVar5 != 5) goto LAB_fffffffff00057b4;
      puVar18 = *(undefined4 **)(gp + -0x66c);
      goto LAB_fffffffff0008730;
    }
LAB_fffffffff000751c:
    *(undefined4 *)((ulong)*(uint *)(gp + -0x66c) * 4 + 0x1000100000000) = uVar22;
    if (uVar4 == 0) goto LAB_fffffffff00057b4;
  }
  *(int *)(((ulong)((long)(*(int *)(gp + -0x66c) + 1) << 0x20) >> 0x1e) + 0x1000100000000) =
       (int)((ulong)lVar7 >> 0x20);
LAB_fffffffff00057b4:
  _DAT_100010000c2e0 = 4;
  FUN_fffffffff0012040((long)aiStack_58[0]);
  FUN_fffffffff0013358(6);
  FUN_fffffffff0012198();
  return;
}


/* ---- FUN_fffffffff000a148 @ fffffffff000a148 size=32156 ---- */

/* WARNING: Removing unreachable block (ram,0xfffffffff000ada8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ad64) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ad70) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ad50) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ad30) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000acec) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000acfc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000acd8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ac90) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a9f8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00107ac) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f9bc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f870) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f7d0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f7dc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f7bc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f4f0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000aa0c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000aa18) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f4e8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f630) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f644) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f64c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f69c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f6ac) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f878) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00107a4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000aa00) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ab78) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000aa70) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000aa98) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000aaa0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000aac8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000aad4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000aac4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e3c8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e3c4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000cfec) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000cff8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010424) */
/* WARNING: Removing unreachable block (ram,0xfffffffff001041c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ceac) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ceb4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000cfd8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000cfe0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000aa64) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000aa5c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e3f8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e3fc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e404) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e3f0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e3f4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e414) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000aafc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ab04) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ab08) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ab10) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ab00) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ab20) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ab50) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e44c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e454) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e524) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e458) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e470) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e474) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e460) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e46c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e478) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e48c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e490) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e494) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e498) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e51c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ab54) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ab70) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ab84) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ab74) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ab7c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000d83c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000d29c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000d2a0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000d44c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000d458) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000d5ec) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000d600) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000d6c0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000d6d8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000d6dc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000d6e4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000d720) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000d72c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000d730) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000d80c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000d288) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000d290) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000d834) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000d838) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000d840) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000d848) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000d864) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000dd8c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a33c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a2c4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a288) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a294) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a2c8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a2cc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a2d0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a2d8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a2e8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a274) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a27c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a314) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a318) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a31c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a320) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a328) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a330) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a350) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a340) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a344) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a348) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a35c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00106d0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f138) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00111b0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ec58) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ec50) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00111a8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f130) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00106c8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ecc8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ded4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000decc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000b190) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000b188) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000b19c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000b1a0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000b334) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000b34c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000b360) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000b374) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000b4ec) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000b4f8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000b568) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000b584) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000b608) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000b614) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000b618) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000b604) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010eb0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000b620) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000b658) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000b6b4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000b704) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000b70c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff001012c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010124) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010138) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010144) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010198) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00101ac) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00101b0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00101b8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00101ec) */
/* WARNING: Removing unreachable block (ram,0xfffffffff001020c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010224) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010244) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010270) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010290) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00102a4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00102c4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00103a0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00103a8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000fdd4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000fdcc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000fde0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000fde4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000fe8c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000feec) */
/* WARNING: Removing unreachable block (ram,0xfffffffff001004c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010054) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010b78) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010b70) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010b84) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010b88) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010cc0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010cc8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010d38) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010d40) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010de4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010dec) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a740) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a748) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011548) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011540) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011a54) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011a5c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e358) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e350) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e364) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e370) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e374) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e384) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e398) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e3a4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e3ac) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e3a8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e3a0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011620) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011624) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011628) */
/* WARNING: Removing unreachable block (ram,0xfffffffff001162c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011634) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011640) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011644) */
/* WARNING: Removing unreachable block (ram,0xfffffffff001164c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e394) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011a58) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011a60) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011a68) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011a74) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011a78) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011a80) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011554) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011560) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011564) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011544) */
/* WARNING: Removing unreachable block (ram,0xfffffffff001154c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff001156c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00110ac) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00110a4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010ff8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011000) */
/* WARNING: Removing unreachable block (ram,0xfffffffff001104c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010fe4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010f74) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010f6c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010f80) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010f8c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010f98) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010fa0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff001105c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff001107c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011080) */
/* WARNING: Removing unreachable block (ram,0xfffffffff001108c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011098) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00110a8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00110b0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00110b8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00110c0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011094) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011078) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010fd8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010fec) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010ff0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010fe8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000fb5c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e7a0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c610) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c62c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c5fc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000da4c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c858) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e7b4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e7b8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e848) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e8a0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e9e4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e9ec) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011be0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c2b0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c2a8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c2bc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c2c0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c320) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011be8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011bec) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011bf4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011bf8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011d20) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011d28) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011d90) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011d98) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011e2c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011e34) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c680) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c690) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c3d0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c3d8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c3f8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c410) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c428) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c430) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c434) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c484) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c4a4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c4b0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e6e8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e6f0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e744) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e74c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e798) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e7a4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e7a8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e7ac) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c4b4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c4c4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c4d4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c3d4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c3c0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c630) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c68c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c664) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c66c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010f2c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c670) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c67c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011b38) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011b40) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011b8c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011b94) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011bd8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011be4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010f30) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000da54) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c86c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c870) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c9f8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ca10) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ca24) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ca38) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000cba8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000cbb8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000cc18) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000cc34) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000cc7c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000cca8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ccd0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000cd30) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000cd80) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000cd88) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000da60) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000da64) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000db90) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000db98) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000dc08) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000dc10) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000dcb4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000dcbc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c558) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c560) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c518) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c54c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c698) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c778) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c7b4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c7bc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c808) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c810) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c850) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c774) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000d9ac) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000d9b4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000d9fc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000da04) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000da44) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000da50) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000da58) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c56c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c604) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c860) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c864) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000c85c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ac1c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ac14) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ac28) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ac44) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ac88) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ac9c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000aca8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ace0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ace4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000acdc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ad28) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ad3c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ad2c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ad34) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ad44) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ad58) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ad5c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ad54) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ada0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000adb4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ada4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000adac) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000add0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000aba0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000fb64) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ecd0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ec64) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ec6c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00111bc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00111c8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff001121c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011240) */
/* WARNING: Removing unreachable block (ram,0xfffffffff001125c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011280) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00112b4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00112d8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00112f4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011318) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011450) */
/* WARNING: Removing unreachable block (ram,0xfffffffff001145c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f144) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f14c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f1ac) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f1b8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f150) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f154) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f158) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00106dc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f638) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f9a8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f4fc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f528) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f544) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f564) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f568) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f540) */
/* WARNING: Removing unreachable block (ram,0xfffffffff001113c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011100) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011120) */
/* WARNING: Removing unreachable block (ram,0xfffffffff001111c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011138) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f570) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f5dc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f5e8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f608) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f610) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f624) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f634) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f63c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f6c0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f76c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f7c0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f7c4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f7c8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f800) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f814) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f850) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f874) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f884) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f898) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f8c0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f918) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f920) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f93c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f948) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f90c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f968) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f980) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f9ac) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f9b0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f9b4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff001077c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00107a8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00107b8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000f9d8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000a754) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000dda0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000dd94) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000dee0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000deec) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000df40) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000df54) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000df58) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000df60) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000df94) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000dfb4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000dfcc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000dfec) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e018) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e038) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e04c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e06c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e150) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000e158) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010430) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0010438) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000fb70) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000dda8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ddf4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ddf8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000de04) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ecdc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ece8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ed3c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ed60) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ed7c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000eda0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000edd4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000edf8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ee14) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ee38) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ef70) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ef7c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000cec0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000ced8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000cef0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000cefc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000cf1c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000cf24) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000cf54) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000cf60) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000cf68) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000cf70) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000cf7c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000cf8c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000cfac) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000cfb8) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000cfdc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000cfa0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000aa1c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000aa60) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000cffc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000cee0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff000a148(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  int *piVar11;
  uint uVar12;
  undefined4 uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined4 *puVar17;
  long lVar18;
  int iVar19;
  int *piVar20;
  int *piVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  uint uVar24;
  undefined8 uVar25;
  uint uVar26;
  undefined4 uVar27;
  ulong uVar28;
  undefined4 *puVar29;
  uint *puVar30;
  ulong local_b0;
  
  FUN_fffffffff00120f4();
  lVar15 = _DAT_2000000000070;
  uVar7 = _DAT_100010000c618;
  puVar17 = _DAT_100010000c610;
  piVar20 = (int *)&DAT_2000000000000;
  local_b0 = 0x1000100000000;
  lVar18 = 0x1080800000000;
  tp = 0x2000000000000;
  if ((param_1 & 0xff) == 0xc) {
    uVar14 = (long)(int)(param_1 >> 4) & 0x7f0;
    lVar8 = uVar14 << 0x20;
    lVar18 = *(long *)((_DAT_2000000000070 << 0x20) + 0x108080000c824);
    uVar7 = *(uint *)(lVar8 + 0x108080000c8b4);
    uVar26 = *(uint *)(lVar8 + 0x108080000c8b4);
    *(ulong *)(gp + -0x2a8) = uVar14;
    *(int *)(gp + -0x2b4) = (int)lVar15;
    *(long *)(gp + -0x2b0) = lVar18;
    *(uint *)(lVar8 + 0x108080000c8b0) = uVar26 & 0x3f;
    if ((uVar7 >> 0x10 & 3) == 0) {
      uVar7 = uVar26 & 0xf;
      if (uVar7 == 3) {
        *(undefined4 *)(lVar8 + 0x108080000c8ac) = 0x3000;
        lVar15 = *(long *)(gp + -0x2a8) << 0x20;
        lVar18 = lVar15 + 0x1080800000000;
        if ((*(long *)(*(long *)(lVar15 + 0x108080000c824) + 0x1e0) != 0) &&
           (uVar14 = *(ulong *)(*(long *)(lVar15 + 0x108080000c824) + 0x1e8), uVar14 != 0)) {
          iVar6 = (*(uint *)(lVar15 + 0x108080000c8ac) & 0xf) * 2;
          puVar17 = (undefined4 *)((long)(iVar6 + 0x3301) * 4 + 0x1000100000000);
          puVar29 = (undefined4 *)((long)(iVar6 + 0x3300) * 4 + 0x1000100000000);
          uVar3 = *puVar29;
          uVar13 = *puVar17;
          *puVar29 = 0;
          *puVar17 = 0x10000;
          lVar15 = *(long *)(gp + -0x2a8);
          do {
            if ((uVar14 & 1) == 0) {
              uVar14 = uVar14 >> 1;
            }
            else {
              do {
              } while (_DAT_2000000000030 != 0);
              do {
                uVar14 = uVar14 >> 1;
              } while ((uVar14 & 1) != 0);
            }
          } while (uVar14 != 0);
          do {
          } while (_DAT_2000000000030 != 0);
          *puVar29 = uVar3;
          *puVar17 = uVar13;
          lVar18 = (lVar15 << 0x20) + 0x1080800000000;
        }
        *(undefined4 *)(lVar18 + 0xc8ac) = 0x2000;
        *(undefined4 *)((*(long *)(gp + -0x2a8) << 0x20) + 0x108080000c8ac) = 0x3000;
        do {
        } while (_DAT_2000000000030 != 0);
        do {
        } while( true );
      }
      if ((uVar26 & 0xc) == 0) {
        if (uVar7 == 1) {
          lVar15 = 0;
          do {
            if ((_DAT_100010003201c >> ((long)((int)lVar15 + 0x1a) & 0x1fU) & 1) != 0) {
              uVar14 = 0;
              do {
                uVar16 = uVar14 & 0xffffffff | lVar15 << 6 | 0x30;
                if (((*(ulong *)(gp + -0x2a8) & 0x7f0) != uVar16) &&
                   (lVar18 = uVar16 << 0x20, *(int *)(lVar18 + 0x108080000c82c) != 0)) {
                  *(undefined4 *)(lVar18 + 0x108080000c884) = 1;
                  do {
                  } while( true );
                }
                uVar14 = (ulong)((int)uVar14 + 0x100);
              } while (uVar14 != 0x200);
            }
            if (lVar15 == 1) {
              uVar7 = 0;
              lVar15 = 2;
              while( true ) {
                if (*(int *)(&DAT_108080000c380 + ((ulong)uVar7 << 0x20)) != 0) {
                  *(undefined4 *)(((ulong)uVar7 << 0x20) + 0x108080000c3cc) = 1;
                }
                lVar18 = (ulong)(uVar7 + 0x100) << 0x20;
                if (*(int *)(&DAT_108080000c380 + lVar18) != 0) {
                  *(undefined4 *)(lVar18 + 0x108080000c3cc) = 1;
                }
                uVar7 = (uVar7 + 0x100 & 0xff) + 0x40;
                if (lVar15 == 1) break;
                lVar15 = 1;
              }
              do {
              } while( true );
            }
            lVar15 = 1;
          } while( true );
        }
        if (uVar7 == 2) {
          uVar7 = *(uint *)(lVar8 + 0x108080000c8b4) >> 0x10 & 3;
          if (((uVar7 != 2) && (uVar7 != 3)) && (uVar7 == 0)) {
            uVar7 = *(uint *)(lVar8 + 0x108080000c8ac);
            *(undefined4 *)(lVar8 + 0x108080000c8ac) = 0x3000;
            lVar15 = *(long *)(lVar18 + 0x1e0);
            if (lVar15 == 0) {
              uVar14 = *(ulong *)(gp + -0x2a8);
            }
            else {
              uVar16 = *(ulong *)(lVar18 + 0x1e8);
              uVar14 = *(ulong *)(gp + -0x2a8);
              if (uVar16 != 0) {
                iVar6 = (uVar7 & 0xf) * 2;
                puVar29 = (undefined4 *)((long)(iVar6 + 0x3300) * 4 + 0x1000100000000);
                puVar17 = (undefined4 *)((long)(iVar6 + 0x3301) * 4 + 0x1000100000000);
                uVar3 = *puVar29;
                uVar13 = *puVar17;
                *puVar29 = 0;
                *puVar17 = 0x10000;
                uVar7 = 0;
                do {
                  if ((uVar16 & 1) == 0) {
                    uVar16 = uVar16 >> 1;
                    uVar26 = 0x400;
                  }
                  else {
                    do {
                    } while (_DAT_2000000000030 != 0);
                    uVar26 = 0;
                    do {
                      uVar16 = uVar16 >> 1;
                      uVar26 = uVar26 + 0x400;
                    } while ((uVar16 & 1) != 0);
                    _DAT_10001000301e0 = 0x20c00000;
                    _DAT_1000100030200 = (ulong)uVar7;
                    _DAT_1000100030208 = (undefined4)lVar15;
                    _DAT_100010003020c = (undefined4)((ulong)lVar15 >> 0x20);
                    _DAT_1000100030270 = 0;
                    _DAT_1000100030210 = uVar26 | 0x4000000;
                    _DAT_1000100030274 = 0;
                    lVar15 = lVar15 + (ulong)uVar26;
                    _DAT_20000000000d0 = uVar14 | 1;
                  }
                  uVar7 = uVar7 + uVar26;
                } while (uVar16 != 0);
                do {
                } while ((int)_DAT_2000000000030 != 0);
                *puVar29 = uVar3;
                *puVar17 = uVar13;
              }
            }
            *(undefined4 *)((uVar14 << 0x20) + 0x108080000c8ac) = 0x2000;
            uVar14 = *(ulong *)(gp + -0x458);
            if (uVar14 != 0) {
              lVar15 = *(long *)(gp + -0x2a8);
              uVar7 = 0x400;
              iVar6 = 0;
              uVar16 = uVar14;
              do {
                if ((uVar16 & 1) != 0) {
                  uVar7 = uVar7 & 0xfffffff0 |
                          ((*(uint *)((lVar15 << 0x20) + 0x108080000c8b4) & 0x3f) == 0x22) + 6;
                  *(uint *)((((long)(iVar6 << 3) & 0xc0U | (long)(iVar6 << 8) & 0x700U | 0x10) <<
                            0x20) + 0x108080000c884) = uVar7;
                }
                iVar6 = iVar6 + 1;
                uVar16 = uVar16 >> 1;
              } while (iVar6 != 0x20);
              iVar6 = 0;
              do {
                if ((uVar14 & 1) != 0) {
                  do {
                  } while( true );
                }
                iVar6 = iVar6 + 1;
                uVar14 = uVar14 >> 1;
              } while (iVar6 != 0x20);
              *(undefined8 *)(gp + -0x458) = 0;
            }
            _DAT_20000000005b8 = 0;
            *(undefined4 *)((*(long *)(gp + -0x2a8) << 0x20) + 0x108080000c8ac) = 0x3000;
            uVar14 = _DAT_2000000000250;
            lVar15 = *(long *)(gp + -0x2a8) << 0x20;
            if ((*(uint *)(lVar15 + 0x108080000c8a4) & 0x8040) != 0) {
              *(int *)(lVar15 + 0x108080000c8c8) = (int)_DAT_2000000000260;
              if ((*(uint *)(lVar15 + 0x108080000c8a4) & 2) == 0) {
                *(uint *)(lVar15 + 0x108080000c8cc) =
                     *(uint *)(lVar15 + 0x108080000c8cc) & 0xf000 | (uint)_DAT_20000000002f8;
              }
              _DAT_20000000002f0 = uVar14 & 0xffffffff;
            }
            uVar7 = *(uint *)(lVar15 + 0x108080000c8a4);
            *(uint *)(lVar15 + 0x108080000c8a4) = uVar7 & 0xffff7fff;
            if (((ulong)(long)(int)uVar7 >> 0xd & 1) != 0) {
              lVar18 = *(long *)(lVar15 + 0x108080000c824);
              uVar14 = (long)(int)(*(uint *)(lVar15 + 0x108080000c8ec) >> 0xc) & 0x3f;
              lVar8 = ((long)(int)(*(uint *)(lVar15 + 0x108080000c8ec) >> 4) & 0x3fU) + uVar14;
              do {
                _DAT_1000100031068 = (int)uVar14;
                lVar4 = (long)_DAT_1000100031068;
                uVar14 = (ulong)(_DAT_1000100031068 + 1);
                *(undefined4 *)(lVar18 + 0x700) = _DAT_100010003106c;
              } while (lVar8 != lVar4);
            }
            lVar18 = *(long *)(lVar15 + 0x108080000c824);
            _DAT_20000000000d8 =
                 ((long)(int)(*(uint *)(lVar15 + 0x108080000c8ac) >> 0x18) & 3U) << 7;
            _DAT_2000000000120 = 0;
            *(long *)(lVar18 + 0x200) = lVar18 + 0x200;
            puVar30 = (uint *)(lVar18 + 0x204);
            iVar6 = 0x320b;
            do {
              while( true ) {
                if ((0x401404000U >> ((long)(iVar6 + -0x320b) & 0x3fU) & 1) == 0) {
                  uVar7 = *(uint *)((long)puVar30 + lVar15 + (0x108080000c628 - lVar18));
                }
                else {
                  uVar7 = 0;
                }
                if (iVar6 != 0x322b) break;
                puVar30 = puVar30 + 1;
                *puVar30 = uVar7 & 0xffffefff;
                iVar6 = 0x322c;
              }
              puVar30[1] = uVar7;
              iVar6 = iVar6 + 1;
              puVar30 = puVar30 + 1;
            } while (iVar6 != 0x3243);
            _DAT_2000000000138 = 1;
            FUN_fffffffff0012a90();
            lVar15 = *(long *)(gp + -0x2a8) << 0x20;
            *(undefined4 *)(lVar15 + 0x108080000c87c) = 0;
            *(uint *)(lVar15 + 0x108080000c878) = *(uint *)(lVar15 + 0x108080000c878) & 0x7ff00000;
            *(uint *)(lVar15 + 0x108080000c834) = *(uint *)(lVar15 + 0x108080000c834) & 0x3ff00;
            do {
            } while( true );
          }
        }
        else if (uVar7 == 0) {
          *(undefined4 *)(lVar8 + 0x108080000c8b0) = 0x80000000;
          do {
          } while( true );
        }
      }
      else {
        if (uVar7 == 4) {
          if ((*(uint *)(lVar8 + 0x108080000c8b4) & 0x1f) != 0x14) {
            *(undefined4 *)(lVar8 + 0x108080000c8ac) = 0x3000;
            do {
            } while (_DAT_2000000000030 != 0);
            do {
            } while( true );
          }
          lVar15 = *(long *)(gp + -0x2a8) << 0x20;
          *(uint *)(lVar15 + 0x108080000c834) = *(uint *)(lVar15 + 0x108080000c834) | 0xc0000;
          lVar15 = *(long *)(gp + -0x2a8) << 0x20;
          if ((*(uint *)(lVar15 + 0x108080000c82c) & 1) == 0) {
            *(undefined4 *)(lVar15 + 0x108080000c82c) = 1;
          }
          *(undefined4 *)(lVar15 + 0x108080000c8b0) = 0x80000000;
          do {
          } while( true );
        }
        if (uVar7 == 5) {
          do {
          } while( true );
        }
      }
    }
    FUN_fffffffff0013358(7);
    goto LAB_fffffffff000a370;
  }
  if ((param_1 & 0xff) != 0x12) goto LAB_fffffffff000a370;
  if ((_DAT_100010000c60c >> 4 & 0xff) == 1) {
    uVar26 = _DAT_100010000c618 >> 8 & 0xff;
    *(uint *)(gp + -0x46c) = uVar26;
    if (uVar7 >> 0x1e == 3) {
      uVar7 = uVar7 >> 0x10 & 0x3fff;
      if ((uVar26 == 0x10) && ((long)(int)uVar7 == 0x3fff)) {
        *(undefined4 *)(gp + -0x470) = 1;
        _DAT_20000000000d8 = 0;
        *(undefined4 *)(gp + -0x67c) = *puVar17;
      }
      else {
        *(uint *)(gp + -0x470) = uVar7 + 2;
        _DAT_20000000000d8 = 0;
        lVar15 = gp + -0x6d8;
        do {
          lVar8 = lVar15 + 4;
          *(undefined4 *)(lVar15 + 0x5c) = *(undefined4 *)((long)puVar17 + (lVar15 - (gp + -0x6d8)))
          ;
          lVar15 = lVar8;
        } while (gp + -0x6d0 + (long)(int)uVar7 * 4 != lVar8);
      }
    }
    else {
      *(undefined4 *)(gp + -0x470) = 0;
      _DAT_20000000000d8 = 0;
    }
  }
  uVar26 = _DAT_2000000000308;
  lVar15 = gp + -0x7d8;
  _DAT_100010000c60c = 0x40000000;
  _DAT_2000000000470 = 0;
  uVar7 = *(uint *)(gp + -0x46c);
  piVar21 = piVar20;
  if (uVar7 == 0xa0) {
    *(undefined4 *)(gp + -0x6d0) = 0xa0;
    lVar18 = _DAT_2000000000070;
    lVar8 = _DAT_2000000000070 << 0x20;
    lVar15 = *(long *)(lVar8 + 0x108080000c824);
    uVar7 = *(uint *)(lVar8 + 0x108080000c8ac);
    *(undefined4 *)(lVar8 + 0x108080000c8ac) = 0x3000;
    *(int *)(gp + -0x2b4) = (int)lVar18;
    *(long *)(gp + -0x2b0) = lVar15;
    _DAT_20000000000d8 = ((long)(int)(uVar7 >> 0x18) & 3U) << 7;
    _DAT_2000000000120 = 0;
    *(undefined4 *)(lVar15 + 0x390) = *(undefined4 *)(gp + -0x67c);
    *(undefined4 *)(lVar15 + 0x394) = *(undefined4 *)(gp + -0x678);
    *(undefined4 *)(lVar15 + 0x398) = *(undefined4 *)(gp + -0x674);
    *(undefined4 *)(lVar15 + 0x39c) = *(undefined4 *)(gp + -0x670);
    *(undefined4 *)(lVar15 + 0x3a0) = *(undefined4 *)(gp + -0x66c);
    *(undefined4 *)(lVar15 + 0x3a4) = *(undefined4 *)(gp + -0x668);
    *(undefined4 *)(lVar15 + 0x3a8) = *(undefined4 *)(gp + -0x664);
    *(undefined4 *)(lVar15 + 0x3ac) = *(undefined4 *)(gp + -0x660);
    *(undefined4 *)(((ulong)*(uint *)(gp + -0x2b4) << 0x20) + 0x108080000c8ac) = 0x2000;
    uVar7 = *(uint *)(gp + -0x678);
    if (uVar7 >> 0x1d == 0) {
      uVar26 = uVar7 >> 0x10 & 0xff;
      if (uVar26 != 0) {
        *(uint *)(gp + -0x2b8) = uVar26;
      }
      lVar15 = (ulong)*(uint *)(gp + -0x2b4) << 0x20;
      uVar22 = *(undefined8 *)(gp + -0x674);
      *(undefined4 *)(lVar15 + 0x108080000c8a4) = *(undefined4 *)(lVar15 + 0x108080000c8a4);
      *(undefined4 *)(lVar15 + 0x108080000c8ac) = 0x3000;
      *(undefined8 *)(gp + -0x460) = uVar22;
      *(uint *)(gp + -0x450) = uVar7 & 0xffff;
      *(undefined8 *)(gp + -0x458) = 0;
      _DAT_2000000000120 = 0;
      _DAT_20000000000d8 = 0;
      uVar22 = *(undefined8 *)(*(long *)(gp + -0x2b0) + 0x1f8);
      _DAT_2000000000098 = _DAT_2000000000308;
      _DAT_100010000c0c8 = (undefined4)uVar22;
      _DAT_100010000c0cc = (undefined4)((ulong)uVar22 >> 0x20);
      _DAT_1000100008244 = *(undefined4 *)(gp + -0x668);
      _DAT_1000100008240 = 0x80000005;
      lVar15 = (ulong)*(uint *)(gp + -0x2b4) << 0x20;
      local_b0 = 0x2000;
      *(undefined4 *)(lVar15 + 0x108080000c8ac) = 0x2000;
      piVar21 = (int *)(long)*(int *)(lVar15 + 0x108080000c8ac);
    }
  }
  else if (uVar7 < 0xa1) {
    if (uVar7 == 0x40) {
      uVar7 = *(uint *)(gp + -0x678);
      uVar26 = uVar7 >> 8;
      uVar5 = uVar7 & 0xf;
      uVar24 = uVar26 & 0xf;
      uVar2 = uVar7 >> 0x10 & 1;
      uVar12 = uVar7 >> 0x14 & 1;
      if (uVar5 == 5) {
        iVar6 = 0;
        piVar11 = *(int **)(gp + -0x674);
LAB_fffffffff000be00:
        if (uVar24 != 3) {
          if ((uVar26 & 0xc) == 0) {
            iVar19 = 0;
            if (uVar24 == 0) {
              if (uVar2 != 0) {
LAB_fffffffff000be24:
                iVar19 = (int)((ulong)piVar11 >> 0x20);
                *(int *)((ulong)*(uint *)(gp + -0x66c) * 4 + 0x1000100000000) = (int)piVar11;
                iVar6 = *(int *)(gp + -0x66c);
                goto LAB_fffffffff000be40;
              }
LAB_fffffffff00104b4:
              piVar21 = (int *)((ulong)*(uint *)(gp + -0x66c) * 4 + 0x1000100000000);
              *piVar21 = iVar6;
              goto LAB_fffffffff000be54;
            }
LAB_fffffffff000bcec:
            piVar21 = (int *)0x2;
            if (uVar24 == 2) {
              piVar21 = *(int **)(gp + -0x66c);
              local_b0 = (ulong)*(uint *)(gp + -0x66c);
              *piVar21 = iVar6;
              if (uVar2 != 0) {
                piVar21[1] = iVar19;
              }
              if (uVar12 != 0) {
                do {
                } while (_DAT_2000000000090 != 0);
                local_b0 = 0;
                piVar21 = piVar20;
              }
            }
          }
          else if (uVar24 == 4) {
LAB_fffffffff000f230:
            piVar21 = (int *)((ulong)*(uint *)(gp + -0x66c) * 4 + 0x1000100000000);
            *piVar21 = iVar6;
            if (uVar2 != 0) {
              iVar6 = *(int *)(gp + -0x66c);
              iVar19 = (int)((ulong)piVar11 >> 0x20);
LAB_fffffffff000be40:
              piVar21 = (int *)(((ulong)((long)(iVar6 + 1) << 0x20) >> 0x1e) + 0x1000100000000);
              *piVar21 = iVar19;
            }
LAB_fffffffff000be54:
            if (uVar12 != 0) {
              piVar21 = (int *)(long)*(int *)((ulong)*(uint *)(gp + -0x66c) * 4 + 0x1000100000000);
            }
          }
          else {
            piVar21 = (int *)0x5;
            if (uVar24 == 5) {
              piVar21 = *(int **)(gp + -0x66c);
              local_b0 = (ulong)*(uint *)(gp + -0x66c);
              if (uVar2 == 0) {
LAB_fffffffff00104f0:
                *piVar21 = iVar6;
              }
              else {
                iVar19 = 0;
LAB_fffffffff000d930:
                *piVar21 = iVar6;
                piVar21[1] = iVar19;
              }
              if (uVar12 != 0) {
                do {
                } while (_DAT_2000000000090 != 0);
                local_b0 = 0;
                piVar21 = piVar20;
              }
            }
          }
          goto LAB_fffffffff000a368;
        }
        _DAT_1000100031014 = *(uint *)(gp + -0x66c) >> 2;
        if (uVar2 == 0) goto LAB_fffffffff001099c;
        iVar19 = 0;
LAB_fffffffff00107f4:
        piVar21 = (int *)&DAT_1000100031000;
        _DAT_1000100031018 = iVar19;
      }
      else {
        if (5 < uVar5) {
          if (uVar5 == 9) {
            iVar6 = 0;
            piVar11 = _DAT_20000000000f8;
          }
          else if (uVar5 < 10) {
            if ((uVar7 & 8) == 0) {
              lVar15 = (ulong)*(uint *)(gp + -0x2b4) << 0x20;
              uVar3 = *(undefined4 *)(lVar15 + 0x108080000c898);
              iVar6 = *(int *)(lVar15 + 0x108080000c894);
            }
            else {
              if (uVar5 != 8) goto LAB_fffffffff000dd64;
              lVar15 = (ulong)*(uint *)(gp + -0x2b4) << 0x20;
              uVar3 = *(undefined4 *)(lVar15 + 0x108080000c8a0);
              iVar6 = *(int *)(lVar15 + 0x108080000c89c);
            }
            piVar11 = (int *)CONCAT44(uVar3,iVar6);
          }
          else if (uVar5 == 10) {
            iVar6 = 0;
            piVar11 = _DAT_2000000000100;
          }
          else {
LAB_fffffffff000dd64:
            iVar6 = 0;
            piVar11 = (int *)0x0;
          }
          goto LAB_fffffffff000be00;
        }
        if (uVar5 != 3) {
          if ((uVar7 & 0xc) == 0) {
            if (uVar5 == 0) {
              uVar14 = (ulong)((long)*(int *)(gp + -0x674) << 0x20) >> 0x1e;
              if (uVar2 == 0) goto LAB_fffffffff0010490;
              iVar19 = *(int *)(((ulong)((long)(*(int *)(gp + -0x674) + 1) << 0x20) >> 0x1e) +
                               0x1000100000000);
              iVar6 = *(int *)(uVar14 + 0x1000100000000);
              piVar11 = (int *)CONCAT44(iVar19,iVar6);
            }
            else {
              if (uVar5 == 3) {
                iVar6 = 0;
                piVar11 = (int *)0x0;
                goto LAB_fffffffff000be00;
              }
              piVar11 = *(int **)(gp + -0x674);
              _DAT_2000000000120 = (long)(int)(uVar7 >> 0xd) & 3;
              _DAT_20000000000d8 = _DAT_2000000000120 << 7;
              if (uVar2 == 0) {
                do {
                } while (_DAT_2000000000090 != 0);
                _DAT_2000000000098 = (uRam000200000000002c >> 6 & 0xf) << 0x14 | 8;
                iVar6 = *piVar11;
                goto LAB_fffffffff001049c;
              }
              iVar6 = *piVar11;
              piVar11 = *(int **)piVar11;
              do {
              } while (_DAT_2000000000090 != 0);
              _DAT_2000000000098 = (uRam000200000000002c >> 6 & 0xf) << 0x14 | 8;
              iVar19 = (int)((ulong)piVar11 >> 0x20);
            }
          }
          else {
            if (uVar5 != 4) goto LAB_fffffffff000dd64;
            uVar14 = (ulong)((long)*(int *)(gp + -0x674) << 0x20) >> 0x1e;
            if (uVar2 == 0) {
LAB_fffffffff0010490:
              iVar6 = *(int *)(uVar14 + 0x1000100000000);
              goto LAB_fffffffff001049c;
            }
            iVar6 = *(int *)(uVar14 + 0x1000100000000);
            iVar19 = 0;
            piVar11 = (int *)CONCAT44(*(undefined4 *)
                                       (((ulong)((long)(*(int *)(gp + -0x674) + 1) << 0x20) >> 0x1e)
                                       + 0x1000100000000),iVar6);
          }
LAB_fffffffff000bcd0:
          if (uVar24 != 3) {
            if ((uVar26 & 0xc) == 0) {
              if (uVar24 == 0) goto LAB_fffffffff000be24;
              goto LAB_fffffffff000bcec;
            }
            if (uVar24 != 4) {
              piVar21 = (int *)0x5;
              if (uVar24 != 5) goto LAB_fffffffff000a368;
              piVar21 = *(int **)(gp + -0x66c);
              local_b0 = (ulong)*(uint *)(gp + -0x66c);
              goto LAB_fffffffff000d930;
            }
            goto LAB_fffffffff000f230;
          }
          _DAT_1000100031014 = *(uint *)(gp + -0x66c) >> 2;
          goto LAB_fffffffff00107f4;
        }
        _DAT_1000100031000 = *(uint *)(gp + -0x674) >> 2;
        iVar6 = _DAT_1000100031004;
        if (uVar2 != 0) {
          piVar11 = (int *)CONCAT44(_DAT_1000100031004,_DAT_1000100031004);
          iVar19 = _DAT_1000100031004;
          goto LAB_fffffffff000bcd0;
        }
LAB_fffffffff001049c:
        if (uVar24 != 3) {
          if ((uVar26 & 0xc) != 0) {
            if (uVar24 == 4) {
              piVar11 = (int *)0x0;
              goto LAB_fffffffff000f230;
            }
            piVar21 = (int *)0x5;
            if (uVar24 != 5) goto LAB_fffffffff000a368;
            piVar21 = *(int **)(gp + -0x66c);
            local_b0 = (ulong)*(uint *)(gp + -0x66c);
            goto LAB_fffffffff00104f0;
          }
          if (uVar24 != 0) {
            iVar19 = 0;
            goto LAB_fffffffff000bcec;
          }
          goto LAB_fffffffff00104b4;
        }
        _DAT_1000100031014 = *(uint *)(gp + -0x66c) >> 2;
LAB_fffffffff001099c:
        piVar21 = (int *)(long)_DAT_1000100031018;
      }
      if (uVar12 != 0) {
LAB_fffffffff000ea54:
        piVar21 = (int *)(long)_DAT_1000100031024;
      }
    }
    else if (uVar7 < 0x41) {
      if (uVar7 == 0x37) {
        uVar7 = *(uint *)(gp + -0x678);
        uVar5 = uVar7 >> 8 & 0xf;
        uVar24 = uVar7 >> 0x10 & 1;
        uVar2 = uVar7 >> 0x14 & 1;
        uVar12 = (uint)(((ulong)*(ushort *)(gp + -0x67a) << 0x32) >> 0x32);
        iVar6 = uVar12 - 2;
        if (uVar5 != 3) {
          if ((uVar7 >> 8 & 0xc) == 0) {
            if (uVar5 == 0) {
              uVar14 = (ulong)*(int *)(gp + -0x674);
              if (uVar14 == 0xbcc) {
LAB_fffffffff000e5e4:
                if (uVar24 == 0) {
                  iVar19 = 0;
                  if (uVar12 != 2) {
                    do {
                      *(undefined4 *)
                       (((ulong)((long)(*(int *)(gp + -0x674) + iVar19) << 0x20) >> 0x1e) +
                       0x1000100000000) =
                           *(undefined4 *)
                            (lVar15 + ((ulong)((long)(iVar19 + 4) << 0x20) >> 0x1e) + 0x15c);
                      iVar19 = iVar19 + 1;
                    } while (iVar6 != iVar19);
                  }
                }
                else {
                  *(undefined4 *)((ulong)*(uint *)(gp + -0x674) * 4 + 0x1000100000000) =
                       *(undefined4 *)(gp + -0x66c);
                }
                if (uVar2 != 0) {
                  local_b0 = (ulong)*(int *)((ulong)*(uint *)(gp + -0x674) * 4 + 0x1000100000000);
                }
LAB_fffffffff000e63c:
                _DAT_2000000000098 = uVar26;
                piVar21 = (int *)(ulong)_DAT_2000000000028;
              }
              else {
                if (uVar14 < 0x520) {
                  if (0x50d < uVar14) goto LAB_fffffffff000e5e4;
                }
                else if (*(int *)(gp + -0x674) - 0x1537U < 2) goto LAB_fffffffff000e5e4;
                if (uVar24 == 0) {
                  iVar19 = 0;
                  if (uVar12 != 2) {
                    while( true ) {
                      piVar20 = (int *)(((ulong)((long)(iVar19 + (int)uVar14) << 0x20) >> 0x1e) +
                                       0x1000100000000);
                      *piVar20 = *(int *)(lVar15 + ((ulong)((long)(iVar19 + 4) << 0x20) >> 0x1e) +
                                         0x15c);
                      iVar19 = iVar19 + 1;
                      if (iVar6 == iVar19) break;
                      uVar14 = (ulong)*(int *)(gp + -0x674);
                    }
                  }
                }
                else {
                  piVar20 = (int *)(((uVar14 << 0x20) >> 0x1e) + 0x1000100000000);
                  *piVar20 = *(int *)(gp + -0x66c);
                }
                piVar21 = piVar20;
                if (uVar2 != 0) {
                  piVar21 = (int *)(long)*(int *)((ulong)*(uint *)(gp + -0x674) * 4 +
                                                 0x1000100000000);
                }
              }
            }
            else {
              local_b0 = 2;
              if (uVar5 == 2) {
                local_b0 = (long)(int)(uVar7 >> 0x19) & 3;
                piVar20 = *(int **)(gp + -0x674);
                piVar21 = (int *)((ulong)*(uint *)(gp + -0x670) << 0x20);
                _DAT_2000000000120 = local_b0;
                if (uVar24 == 0) {
                  iVar19 = 0;
                  if (uVar12 != 2) {
                    do {
                      iVar1 = *(int *)(lVar15 + ((ulong)((long)(iVar19 + 4) << 0x20) >> 0x1e) +
                                      0x15c);
                      local_b0 = (ulong)iVar1;
                      piVar21 = (int *)((ulong)(uint)(iVar19 << 2) + (long)piVar20);
                      *piVar21 = iVar1;
                      iVar19 = iVar19 + 1;
                    } while (iVar6 != iVar19);
                  }
                }
                else {
                  piVar21 = (int *)(long)*(int *)(gp + -0x66c);
                  *piVar20 = *(int *)(gp + -0x66c);
                }
                if (uVar2 != 0) {
                  do {
                  } while (_DAT_2000000000090 != 0);
                  local_b0 = 0;
                  piVar21 = (int *)&DAT_2000000000000;
                }
              }
            }
          }
          else {
            local_b0 = 5;
            if (uVar5 == 5) {
              local_b0 = (long)(int)(uVar7 >> 0x19) & 3;
              piVar20 = *(int **)(gp + -0x674);
              piVar21 = (int *)((ulong)*(uint *)(gp + -0x670) << 0x20);
              _DAT_2000000000120 = local_b0;
              if (uVar24 == 0) {
                iVar19 = 0;
                if (uVar12 != 2) {
                  do {
                    iVar1 = *(int *)(lVar15 + ((ulong)((long)(iVar19 + 4) << 0x20) >> 0x1e) + 0x15c)
                    ;
                    local_b0 = (ulong)iVar1;
                    piVar21 = (int *)((ulong)(uint)(iVar19 << 2) + (long)piVar20);
                    *piVar21 = iVar1;
                    iVar19 = iVar19 + 1;
                  } while (iVar6 != iVar19);
                }
              }
              else {
                piVar21 = (int *)(long)*(int *)(gp + -0x66c);
                *piVar20 = *(int *)(gp + -0x66c);
              }
              if (uVar2 != 0) {
                do {
                } while (_DAT_2000000000090 != 0);
                local_b0 = 0;
                piVar21 = (int *)&DAT_2000000000000;
              }
            }
          }
          goto LAB_fffffffff000a368;
        }
        if (uVar24 == 0) {
          lVar18 = 4;
          uVar7 = *(uint *)(gp + -0x674) >> 2;
          if (uVar12 != 2) {
            do {
              _DAT_1000100031014 = uVar7;
              _DAT_1000100031018 = *(int *)(lVar15 + ((ulong)(lVar18 << 0x20) >> 0x1e) + 0x15c);
              lVar18 = (long)((int)lVar18 + 1);
              uVar7 = _DAT_1000100031014 + 4;
            } while (((ulong)*(ushort *)(gp + -0x67a) & 0x3fff) + 2 != lVar18);
          }
        }
        else {
          _DAT_1000100031018 = *(int *)(gp + -0x66c);
          _DAT_1000100031014 = *(uint *)(gp + -0x674) >> 2;
        }
        goto LAB_fffffffff000ea54;
      }
      if (uVar7 == 0x3c) {
        uVar7 = *(uint *)(gp + -0x678);
        uVar26 = *(uint *)(gp + -0x674);
        puVar30 = *(uint **)(gp + -0x674);
        uVar2 = uVar7 >> 6 & 3;
        uVar12 = uVar7 & 7;
        uVar24 = uVar7 >> 4 & 3;
        uVar14 = (ulong)uVar26;
        if (uVar2 == 1) {
          if (uVar26 != 0xbcc) {
            if (uVar26 < 0x520) {
              if (uVar26 < 0x50e) {
LAB_fffffffff000b948:
                *(undefined4 *)(uVar14 * 4 + 0x1000100000000) = *(undefined4 *)(gp + -0x66c);
                uVar14 = (ulong)*(uint *)(gp + -0x670);
                goto LAB_fffffffff000a480;
              }
            }
            else if (1 < uVar26 - 0x1537) goto LAB_fffffffff000b948;
          }
          _DAT_2000000000098 = _DAT_2000000000308;
          *(undefined4 *)((ulong)*(uint *)(gp + -0x674) * 4 + 0x1000100000000) =
               *(undefined4 *)(gp + -0x66c);
          uVar14 = (ulong)*(uint *)(gp + -0x670);
        }
LAB_fffffffff000a480:
        lVar15 = 0xfa000;
        if (*(ushort *)(gp + -0x662) != 0) {
          lVar15 = (ulong)*(ushort *)(gp + -0x662) * 0x19000;
        }
        do {
          if (uVar24 == 0) {
            uVar26 = *(uint *)(uVar14 * 4 + 0x1000100000000);
          }
          else {
            _DAT_2000000000120 = 0;
            _DAT_20000000000d8 = 0;
            uVar26 = *puVar30;
            do {
            } while (_DAT_2000000000090 != 0);
            _DAT_2000000000098 = (uRam000200000000002c >> 6 & 0xf) << 0x14 | 8;
          }
          uVar5 = *(uint *)(gp + -0x66c);
          uVar26 = *(uint *)(gp + -0x668) & uVar26;
          if (uVar12 == 3) {
            if (uVar5 == uVar26) goto LAB_fffffffff000a51c;
          }
          else if ((uVar7 & 4) == 0) {
            if (uVar12 == 1) {
              if (uVar26 < uVar5) goto LAB_fffffffff000a51c;
            }
            else if (uVar12 == 2) {
              if (uVar26 <= uVar5) goto LAB_fffffffff000a51c;
            }
            else if (uVar12 == 0) goto LAB_fffffffff000a51c;
          }
          else if (uVar12 == 5) {
            if (uVar5 <= uVar26) goto LAB_fffffffff000a51c;
          }
          else if (uVar12 == 6) {
            if (uVar5 < uVar26) {
LAB_fffffffff000a51c:
              piVar21 = (int *)0x1;
              if (uVar2 == 1) {
                if (uVar24 == 0) {
                  *(uint *)(uVar14 * 4 + 0x1000100000000) = uVar5;
                }
                else {
                  *puVar30 = uVar5;
                }
              }
              break;
            }
          }
          else if ((uVar12 == 4) && (uVar5 != uVar26)) goto LAB_fffffffff000a51c;
          piVar21 = _DAT_20000000000f8;
        } while (lVar15 != 0);
      }
    }
    else if (uVar7 == 0x98) {
      uVar7 = *(uint *)(gp + -0x678);
      if ((uVar7 & 7) != 0) {
        iVar6 = 0x10;
        uVar14 = 0;
LAB_fffffffff000a3dc:
        if ((-1 < *(int *)(lVar15 + (uVar14 + 0x5c) * 4 + 0x370)) ||
           (((*(uint *)(lVar15 + (uVar14 + 0x4c) * 4 + 0x370) ^ uVar7 >> 5) & 0xffff) != 0))
        goto LAB_fffffffff000a41c;
        _DAT_2000000000198 = 5;
        do {
        } while ((_DAT_2000000000048 & 0x20) == 0);
        _DAT_100010000a4d4 = 0xffffffff;
        _DAT_100010000a4d8 = 0x1f;
        _DAT_100010000a438 = _DAT_100010000a438 & 0xfff80000 | (uVar7 >> 0x1d) << 0x10 | 1 << uVar14
        ;
        do {
        } while ((_DAT_100010000a480 & 1L << uVar14) == 0);
        local_b0 = 5;
        _DAT_20000000001a0 = 5;
        goto LAB_fffffffff000e63c;
      }
      uVar14 = (long)*(int *)(((ulong)*(uint *)(gp + -0x2b4) << 0x20) + 0x108080000c830) & 0xf;
      _DAT_2000000000198 = 5;
      do {
      } while ((_DAT_2000000000048 & 0x20) == 0);
      _DAT_2000000000098 = _DAT_2000000000308;
      _DAT_100010000a4d4 = 0xffffffff;
      _DAT_100010000a4d8 = 0x1f;
      _DAT_100010000a438 = _DAT_100010000a438 & 0xfff80000 | (uVar7 >> 0x1d) << 0x10 | 1 << uVar14;
      do {
      } while ((_DAT_100010000a480 & 1L << uVar14) == 0);
      local_b0 = 5;
      _DAT_20000000001a0 = 5;
      piVar21 = (int *)(ulong)_DAT_2000000000028;
    }
  }
  else if (uVar7 == 0xa4) {
    *(undefined4 *)(gp + -0x6d0) = 0xa4;
    *(uint *)(gp + -0x6cc) = *(uint *)(gp + -0x678);
    *(undefined8 **)(gp + -0x6a0) = *(undefined8 **)(gp + -0x670);
    *(undefined8 *)(gp + -0x698) = *(undefined8 *)(gp + -0x668);
    uVar7 = *(uint *)(gp + -0x674) >> 0x1c & 7;
    if (uVar7 == 0) {
      *(undefined4 *)(gp + -0x6d8) = 1;
    }
    else if (uVar7 == 4) {
      *(undefined4 *)(gp + -0x6d8) = 0;
    }
    uVar7 = *(uint *)(gp + -0x674) & 0xfffffff;
    *(uint *)(gp + -0x6b4) = uVar7;
    uVar14 = *(ulong *)(gp + -0x6d0) >> 0x3c & 3;
    if (uVar14 == 0) {
      uVar7 = *(uint *)(gp + -0x678) & 0xc0000000;
      if (uVar7 == 0) {
        do {
        } while( true );
      }
      _DAT_2000000000120 = uVar14;
      **(undefined8 **)(gp + -0x670) = *(undefined8 *)(gp + -0x668);
      if (uVar7 != 0x40000000) {
        do {
        } while ((int)_DAT_2000000000090 != 0);
        if (uVar7 != 0x80000000) {
          do {
          } while( true );
        }
      }
    }
    else if (uVar14 == 2) {
      if (*(int *)(gp + -0x6d8) == 1) {
        uVar14 = 0;
        do {
          uVar16 = 0;
          do {
            lVar15 = (uVar14 | uVar16 | 0x10) << 0x20;
            if ((((*(uint *)(lVar15 + 0x108080000c82c) & 1) != 0) &&
                ((*(uint *)(lVar15 + 0x108080000c860) & 0x40000000) != 0)) &&
               (uVar7 == (*(uint *)(lVar15 + 0x108080000c860) & 0xffffffc))) {
              *(undefined4 *)(lVar15 + 0x108080000c884) = 0x404;
              do {
              } while( true );
            }
            uVar16 = (ulong)((int)uVar16 + 0x100);
          } while (uVar16 != 0x400);
          uVar14 = (ulong)((int)uVar14 + 0x40);
        } while (uVar14 != 0x100);
      }
      else if (*(int *)(gp + -0x6d8) == 0) {
        *(undefined4 *)(((ulong)*(uint *)(gp + -0x2b4) << 0x20) + 0x108080000c8ac) = 0x3000;
        uVar7 = *(uint *)(gp + -0x6b4);
        iVar6 = 0;
        uVar14 = local_b0;
        if ((_DAT_108080000c380 != 0) && (uVar7 == (_DAT_108080000c3b4 & 0xffffffc))) {
          iVar19 = 0;
LAB_fffffffff001166c:
          do {
            lVar8 = ((long)(iVar6 << 8 | iVar19 << 6) << 0x20) + lVar18;
            lVar15 = *(long *)(lVar8 + 0xc378);
            uVar3 = *(undefined4 *)(uVar14 + 0x9104);
            *(undefined4 *)(uVar14 + 0x9104) = 0x10;
            uVar7 = *(uint *)(uVar14 + 0x9118);
            *(undefined4 *)(uVar14 + 0x9104) = 0x12;
            uVar26 = *(uint *)(uVar14 + 0x9118);
            *(undefined4 *)(uVar14 + 0x9104) = 0x14;
            uVar12 = *(uint *)(uVar14 + 0x9118);
            *(undefined4 *)(uVar14 + 0x9104) = 0x18;
            uVar24 = *(uint *)(uVar14 + 0x9118);
            *(undefined4 *)(uVar14 + 0x9104) = 0x1c;
            uVar2 = *(uint *)(uVar14 + 0x9118);
            *(undefined4 *)(uVar14 + 0x9104) = uVar3;
            uVar3 = *(undefined4 *)(lVar8 + 0xc3b8);
            uVar13 = *(undefined4 *)(lVar8 + 0xc3c0);
            iVar6 = *(int *)(lVar8 + 0xc3c4);
            lVar8 = (long)iVar6;
            piVar21[0x48] = 0;
            piVar21[0x49] = 0;
            *(undefined8 *)(lVar15 + 0x158) = *(undefined8 *)(piVar21 + 0x3e);
            do {
            } while ((int)_DAT_2000000000090 != 0);
            *(uint *)(lVar15 + 0x170) =
                 (uVar7 & 0x3ff) + (uVar26 & 0x3ff) + (uVar12 & 0x3ff) + (uVar24 & 0x3ff) +
                 (uVar2 & 0x3ff);
            *(undefined4 *)(lVar15 + 0x174) = uVar13;
            *(int *)(lVar15 + 0x178) = iVar6;
            *(undefined4 *)(lVar15 + 0x17c) = uVar3;
            do {
            } while ((int)_DAT_2000000000090 != 0);
            *(undefined4 *)(uVar14 + 0x30800) = 0;
            piVar11 = piVar20;
            local_b0 = uVar14;
            if ((int)*(undefined8 *)(piVar21 + 0xbc) != 0) {
              lVar8 = uVar14 + 0xd000;
              *(undefined4 *)(uVar14 + 0x30800) = 0x100;
              if (((int)*(undefined8 *)(piVar21 + 0xbc) != 0) &&
                 (*(undefined4 *)(uVar14 + 0x30800) = 0, (int)*(undefined8 *)(piVar21 + 0xbc) != 0))
              {
                piVar11 = (int *)0x1;
                *(undefined4 *)(uVar14 + 0x30800) = 1;
                if (((int)*(undefined8 *)(piVar21 + 0xbc) != 0) &&
                   ((((*(undefined4 *)(uVar14 + 0x30800) = 0x100,
                      (int)*(undefined8 *)(piVar21 + 0xbc) != 0 &&
                      (*(undefined4 *)(uVar14 + 0x30800) = 0x101,
                      (int)*(undefined8 *)(piVar21 + 0xbc) != 0)) &&
                     (*(undefined4 *)(uVar14 + 0x30800) = 0,
                     (int)*(undefined8 *)(piVar21 + 0xbc) != 0)) &&
                    ((*(undefined4 *)(uVar14 + 0x30800) = 1,
                     (int)*(undefined8 *)(piVar21 + 0xbc) != 0 &&
                     (*(undefined4 *)(uVar14 + 0x30800) = 0x100,
                     (int)*(undefined8 *)(piVar21 + 0xbc) != 0)))))) {
                  piVar11 = (int *)(uVar14 + 0xd000);
                  *(undefined4 *)(uVar14 + 0x30800) = 0x101;
                  if (((int)*(undefined8 *)(piVar21 + 0xbc) != 0) &&
                     ((*(undefined4 *)(uVar14 + 0x30800) = 0,
                      (int)*(undefined8 *)(piVar21 + 0xbc) != 0 &&
                      (*(undefined4 *)(uVar14 + 0x30800) = 1,
                      (int)*(undefined8 *)(piVar21 + 0xbc) != 0)))) {
                    *(undefined4 *)(uVar14 + 0x30800) = 0x100;
                    lVar8 = (long)(int)*(undefined8 *)(piVar21 + 0xbc);
                    if (lVar8 != 0) {
                      *(undefined4 *)(uVar14 + 0x30800) = 0x101;
                      lVar8 = (long)(int)*(undefined8 *)(piVar21 + 0xbc);
                      if (lVar8 != 0) {
                        *(undefined4 *)(uVar14 + 0x30800) = 0;
                        lVar8 = (long)(int)*(undefined8 *)(piVar21 + 0xbc);
                        if (lVar8 != 0) {
                          *(undefined4 *)(uVar14 + 0x30800) = 0x100;
                          lVar8 = (long)(int)*(undefined8 *)(piVar21 + 0xbc);
                          if (lVar8 != 0) {
                            *(undefined4 *)(uVar14 + 0x30800) = 0;
                            lVar8 = (long)(int)*(undefined8 *)(piVar21 + 0xbc);
                            if (lVar8 != 0) {
                              lVar8 = (long)*(int *)(uVar14 + 0xce30);
                              *(undefined4 *)(uVar14 + 0x30800) = 0x100;
                              if ((int)*(undefined8 *)(piVar21 + 0xbc) != 0) {
                                piVar11 = (int *)(long)*(int *)(uVar14 + 0xce30);
                                *(undefined4 *)(uVar14 + 0x30800) = 0;
                                if ((int)*(undefined8 *)(piVar21 + 0xbc) != 0) {
                                  piVar11 = (int *)(uVar14 + 0xd000);
                                  local_b0 = uVar14 + 0x31000;
                                  *(undefined4 *)(uVar14 + 0x30800) = 0;
                                  if (((int)*(undefined8 *)(piVar21 + 0xbc) != 0) &&
                                     (*(undefined4 *)(uVar14 + 0x30800) = 0x10000,
                                     (int)*(undefined8 *)(piVar21 + 0xbc) != 0))
                                  goto code_r0xfffffffff001197c;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            FUN_fffffffff0012f60(0x11c2,piVar11,lVar8);
LAB_fffffffff00119d0:
            iVar19 = 0;
            iVar6 = 1;
            uVar14 = local_b0;
          } while( true );
        }
        if ((_DAT_109080000c380 != 0) && (uVar7 == (_DAT_109080000c3b4 & 0xffffffc)))
        goto LAB_fffffffff00119d0;
        if ((_DAT_108480000c380 != 0) && (uVar7 == (_DAT_108480000c3b4 & 0xffffffc))) {
          iVar19 = 1;
          goto LAB_fffffffff001166c;
        }
        if ((_DAT_109480000c380 != 0) && (uVar7 == (_DAT_109480000c3b4 & 0xffffffc))) {
          iVar19 = 1;
          iVar6 = 1;
          goto LAB_fffffffff001166c;
        }
        goto LAB_fffffffff000bc10;
      }
    }
  }
  else if (uVar7 < 0xa5) {
    if (uVar7 == 0xa2) {
      uVar26 = *(uint *)(gp + -0x678);
      uVar12 = uVar26 >> 2 & 3;
      *(uint *)(gp + -0x684) = uVar12;
      uVar7 = uVar26 >> 0x1a & 7;
      if ((uVar12 == 0) && (uVar7 != 3)) {
        if ((uVar26 >> 0x1a & 4) == 0) {
          if (uVar7 == 0) {
            *(undefined4 *)(gp + -0x6d8) = 1;
            uVar7 = 1;
          }
          else {
            if (uVar7 != 2) goto LAB_fffffffff0010e60;
            *(undefined4 *)(gp + -0x6d8) = 2;
          }
        }
        else if (uVar7 == 4) {
          *(undefined4 *)(gp + -0x6d8) = 0;
          uVar7 = 0;
        }
        else {
          if (uVar7 == 5) {
            uVar7 = 4;
            goto LAB_fffffffff000d8f4;
          }
LAB_fffffffff0010e60:
          uVar7 = *(uint *)(gp + -0x6d8);
        }
      }
      else {
LAB_fffffffff000d8f4:
        *(uint *)(gp + -0x6d8) = uVar7;
      }
      uVar25 = *(undefined8 *)(gp + -0x670);
      uVar22 = *(undefined8 *)(gp + -0x668);
      uVar3 = *(undefined4 *)(gp + -0x674);
      uVar24 = uVar26 >> 0xd;
      uVar2 = uVar26 >> 0x18 & 3;
      uVar9 = uVar26 >> 8 & 0xf;
      uVar5 = uVar26 >> 0x10 & 3;
      uVar26 = uVar26 >> 0x15 & 7;
      *(undefined4 *)(gp + -0x6d0) = 0xa2;
      *(uint *)(gp + -0x6c8) = uVar9;
      *(uint *)(gp + -0x6c4) = uVar24 & 7;
      *(uint *)(gp + -0x6c0) = uVar5;
      *(uint *)(gp + -0x6bc) = uVar26;
      *(uint *)(gp + -0x6b8) = uVar2;
      *(undefined4 *)(gp + -0x6b4) = uVar3;
      *(undefined8 *)(gp + -0x6b0) = uVar25;
      *(undefined8 *)(gp + -0x6a8) = uVar22;
      lVar18 = _DAT_2000000000070 << 0x20;
      lVar15 = *(long *)(lVar18 + 0x108080000c824);
      iVar6 = (int)_DAT_2000000000070;
      *(int *)(gp + -0x2b4) = iVar6;
      *(long *)(gp + -0x2b0) = lVar15;
      if (uVar12 != 0) {
        iVar6 = 0;
        if (uVar7 == 1) {
          iVar6 = 0x600;
        }
        iVar6 = (uVar24 & 0xff) * 0x58 + iVar6;
        puVar30 = (uint *)(((ulong)((long)(iVar6 + 0x12e0) << 0x20) >> 0x1e) + 0x1000100000000);
        *puVar30 = *puVar30 & 0xfffffffe;
        *(undefined4 *)((long)(iVar6 + 0x12f2) * 4 + 0x1000100000000) = 0;
        *(undefined4 *)((long)(iVar6 + 0x130b) * 4 + 0x1000100000000) = *(undefined4 *)(gp + -0x6b4)
        ;
        puVar30 = (uint *)(((ulong)((long)(iVar6 + 0x1316) << 0x20) >> 0x1e) + 0x1000100000000);
        *puVar30 = *puVar30 | 1;
        do {
        } while( true );
      }
      if (uVar7 < 4) {
        if (1 < uVar7) {
          iVar6 = uVar7 - 2;
          *(int *)(gp + -0x6d8) = iVar6;
          if (iVar6 == 1) {
            iVar6 = 0x600;
          }
          iVar6 = (uVar24 & 0xff) * 0x58 + iVar6;
          puVar30 = (uint *)(((ulong)((long)(iVar6 + 0x12e0) << 0x20) >> 0x1e) + 0x1000100000000);
          *puVar30 = *puVar30 & 0xfffffffe;
          *(undefined4 *)(((ulong)((long)(iVar6 + 0x12f2) << 0x20) >> 0x1e) + 0x1000100000000) = 0;
          *(undefined4 *)(((ulong)((long)(iVar6 + 0x130b) << 0x20) >> 0x1e) + 0x1000100000000) =
               *(undefined4 *)(gp + -0x6b4);
          puVar30 = (uint *)(((ulong)((long)(iVar6 + 0x1316) << 0x20) >> 0x1e) + 0x1000100000000);
          *puVar30 = *puVar30 | 1;
          do {
          } while( true );
        }
        if (uVar7 == 0) {
          *(undefined4 *)(lVar18 + 0x108080000c8ac) = 0x3000;
          iVar6 = *(int *)(gp + -0x6c0);
          iVar19 = *(int *)(gp + -0x6c4);
          iVar1 = *(int *)(gp + -0x6c8);
          puVar17 = (undefined4 *)((ulong)(uint)((iVar6 * 2 + iVar19) * 0x1c) + 0x470 + lVar15);
          uVar3 = *(undefined4 *)(gp + -0x6b4);
          uVar25 = *(undefined8 *)(gp + -0x6b0);
          uVar22 = *(undefined8 *)(gp + -0x6a8);
          *puVar17 = 0xc005a200;
          puVar17[1] = iVar1 << 8 | iVar6 << 0x10 | iVar19 << 0xd | 0x30000000;
          puVar17[2] = uVar3;
          uVar27 = (undefined4)uVar25;
          puVar17[3] = uVar27;
          uVar3 = (undefined4)((ulong)uVar25 >> 0x20);
          puVar17[4] = uVar3;
          uVar23 = (undefined4)uVar22;
          puVar17[5] = uVar23;
          uVar13 = (undefined4)((ulong)uVar22 >> 0x20);
          puVar17[6] = uVar13;
          *(undefined4 *)(((ulong)*(uint *)(gp + -0x2b4) << 0x20) + 0x108080000c8ac) = 0x2000;
          uVar14 = (long)(*(int *)(gp + -0x6c4) << 8 | *(int *)(gp + -0x6c0) << 6) << 0x20 |
                   0x1080800000000;
          iVar6 = *(int *)(gp + -0x2b4);
          *(undefined4 *)(uVar14 + 0xc378) = uVar27;
          *(undefined4 *)(uVar14 + 0xc37c) = uVar3;
          *(undefined4 *)(uVar14 + 0xc3ac) = uVar23;
          *(undefined4 *)(uVar14 + 0xc3b0) = uVar13;
          *(undefined4 *)(((long)iVar6 << 0x20 | 0x1080800000000U) + 0xc8ac) = 0x3000;
          do {
          } while (_DAT_2000000000030 != 0);
          do {
          } while( true );
        }
LAB_fffffffff000aee4:
        uVar26 = uVar9 << 8 | uVar5 << 0x10 | (uVar24 & 7) << 0xd | uVar26 << 0x15 | uVar2 << 0x18;
        if (uVar7 == 4) {
          uVar26 = uVar26 | 0x34080000;
        }
        else {
          uVar26 = uVar26 | 0x20000000;
        }
        uVar14 = (long)iVar6 << 0x20 | 0x1080800000000;
        uVar12 = uVar26 >> 0x12 & 2;
        uVar7 = uVar26 >> 0xd;
        if (uVar12 == 0) {
          puVar17 = (undefined4 *)
                    ((ulong)(((uVar26 >> 0x10 & 3) * 4 + (uVar7 & 7)) * 0x1c) + lVar15 + 0x4e0);
        }
        else {
          puVar17 = (undefined4 *)
                    ((ulong)(((uVar26 >> 0x10 & 3) * 2 + (uVar7 & 3)) * 0x1c) + lVar15 + 0x400);
        }
        *(undefined4 *)(lVar18 + 0x108080000c8ac) = 0x3000;
        *puVar17 = 0xc005a200;
        puVar17[1] = uVar26;
        puVar17[2] = uVar3;
        uVar3 = (undefined4)uVar25;
        puVar17[3] = uVar3;
        uVar13 = (undefined4)((ulong)uVar25 >> 0x20);
        puVar17[4] = uVar13;
        puVar17[5] = (int)uVar22;
        puVar17[6] = (int)((ulong)uVar22 >> 0x20);
        *(undefined4 *)(((ulong)*(uint *)(gp + -0x2b4) << 0x20) + 0x108080000c8ac) = 0x2000;
        uVar7 = (uVar7 & 0x18) << 3 | (uVar7 & 7) << 8 | (uVar7 & 0x40) + 0x20 >> 1;
        *(undefined4 *)(((ulong)uVar7 << 0x20) + 0x108080000c868) = 0x80000000;
        uVar16 = (long)(int)uVar7 << 0x20 | 0x1080800000000;
        if (uVar12 == 0) {
          *(undefined4 *)(uVar16 + 0xc824) = uVar3;
          *(undefined4 *)(uVar16 + 0xc828) = uVar13;
          *(undefined4 *)(uVar14 + 0xc8ac) = 0x3000;
          do {
          } while (_DAT_2000000000030 != 0);
          do {
          } while( true );
        }
        *(undefined4 *)(uVar16 + 0xc824) = uVar3;
        *(undefined4 *)(uVar16 + 0xc828) = uVar13;
        *(undefined4 *)(uVar14 + 0xc8ac) = 0x3000;
        do {
        } while (_DAT_2000000000030 != 0);
        do {
        } while( true );
      }
      if (uVar7 == 4) goto LAB_fffffffff000aee4;
    }
    else if (uVar7 == 0xa3) {
      uVar26 = *(uint *)(gp + -0x678);
      uVar12 = uVar26 >> 2 & 3;
      *(uint *)(gp + -0x684) = uVar12;
      uVar7 = uVar26 >> 0x1a & 7;
      if ((uVar12 == 0) && (uVar7 != 3)) {
        if ((uVar26 >> 0x1a & 4) == 0) {
          if (uVar7 == 0) {
            *(undefined4 *)(gp + -0x6d8) = 1;
          }
          else if (uVar7 == 2) goto LAB_fffffffff000a564;
        }
        else if (uVar7 == 4) {
          *(undefined4 *)(gp + -0x6d8) = 0;
        }
        else if (uVar7 == 5) {
          uVar7 = 4;
          goto LAB_fffffffff000a564;
        }
      }
      else {
LAB_fffffffff000a564:
        *(uint *)(gp + -0x6d8) = uVar7;
      }
      uVar7 = uVar26 & 3;
      *(undefined4 *)(gp + -0x6d0) = 0xa3;
      *(uint *)(gp + -0x6d4) = uVar7;
      if (uVar7 == 3) {
        uVar7 = *(uint *)(gp + -0x674);
        *(uint *)(gp + -0x6b4) = uVar7;
        *(undefined8 *)(gp + -0x690) = *(undefined8 *)(gp + -0x670);
        *(undefined4 *)(gp + -0x688) = *(undefined4 *)(gp + -0x668);
        if (*(int *)(gp + -0x6d8) == 0) {
          iVar6 = 0;
          if ((_DAT_108080000c380 != 0) && (uVar7 == (_DAT_108080000c3b4 & 0xffffffc))) {
            iVar19 = 0;
LAB_fffffffff000e2ec:
            lVar15 = (long)(iVar6 << 8 | iVar19 << 6) << 0x20;
            *(undefined4 *)(lVar15 + 0x108080000c3e4) = 0x18;
            *(undefined4 *)(lVar15 + 0x108080000c3e4) = 0x19;
            do {
            } while( true );
          }
          if ((_DAT_109080000c380 != 0) && (uVar7 == (_DAT_109080000c3b4 & 0xffffffc))) {
            iVar19 = 0;
            iVar6 = 1;
            goto LAB_fffffffff000e2ec;
          }
          if ((_DAT_108480000c380 != 0) && (uVar7 == (_DAT_108480000c3b4 & 0xffffffc))) {
            iVar19 = 1;
            goto LAB_fffffffff000e2ec;
          }
          if ((_DAT_109480000c380 != 0) && (uVar7 == (_DAT_109480000c3b4 & 0xffffffc))) {
            iVar19 = 1;
            iVar6 = 1;
            goto LAB_fffffffff000e2ec;
          }
        }
      }
      else {
        local_b0 = (long)(int)(uVar26 >> 4) & 3;
        if (local_b0 != 1) {
          local_b0 = (ulong)((int)local_b0 + -2);
          if (local_b0 < 2) {
            lVar15 = *(long *)((_DAT_2000000000070 << 0x20) + 0x108080000c824);
            iVar6 = (int)_DAT_2000000000070;
            *(int *)(gp + -0x2b4) = iVar6;
            *(long *)(gp + -0x2b0) = lVar15;
            uVar14 = 0;
            do {
              uVar16 = 0;
              do {
                lVar18 = (uVar14 | uVar16 | 0x10) << 0x20;
                if ((*(uint *)(lVar18 + 0x108080000c82c) & 1) != 0) {
                  uVar3 = 0x502;
                  if ((uVar7 != 1) &&
                     (uVar3 = 0x501, (*(uint *)(lVar18 + 0x108080000c834) & 0x40000000) != 0)) {
                    uVar3 = 0x503;
                  }
                  *(undefined4 *)(lVar18 + 0x108080000c884) = uVar3;
                }
                uVar16 = (ulong)((int)uVar16 + 0x100);
              } while (uVar16 != 0x400);
              uVar14 = (ulong)((int)uVar14 + 0x40);
            } while (uVar14 != 0x100);
            iVar19 = 0;
            local_b0 = 0;
            while( true ) {
              uVar16 = 0;
              uVar14 = local_b0;
              while( true ) {
                piVar20 = _DAT_20000000000f8;
                uVar10 = (long)(iVar19 << 4) | uVar16;
                uVar28 = uVar10 | 0x10;
                uVar7 = *(uint *)(((long)iVar6 << 0x20) + 0x108080000c8ac);
                *(undefined4 *)(((long)iVar6 << 0x20) + 0x108080000c8ac) = 0x3000;
                _DAT_20000000000d8 = ((long)(int)(uVar7 >> 0x18) & 3U) << 7;
                _DAT_2000000000120 = 0;
                *(undefined4 *)(uVar14 + lVar15 + 0x4e0) = 0;
                *(undefined4 *)(((ulong)*(uint *)(gp + -0x2b4) << 0x20) + 0x108080000c8ac) = 0x2000;
                lVar15 = uVar28 << 0x20;
                if ((ulong)((long)_DAT_20000000000f8 - (long)piVar20) <=
                    (ulong)*(uint *)(gp + -0x2b8) * 10000000) {
                  do {
                  } while( true );
                }
                *(undefined4 *)(lVar15 + 0x108080000c884) = 0;
                *(uint *)(lVar15 + 0x108080000c87c) =
                     *(uint *)(lVar15 + 0x108080000c87c) & 0x7fffffff;
                if ((*(uint *)(lVar15 + 0x108080000c82c) & 1) != 0) {
                  _DAT_20000000000d8 =
                       ((long)(int)(*(uint *)(lVar15 + 0x108080000c8ac) >> 0x18) & 3U) << 7;
                  _DAT_2000000000120 = 0;
                  *(uint *)(*(long *)(lVar15 + 0x108080000c824) + 0x3c0) =
                       *(uint *)(lVar15 + 0x108080000c860) & 0xffffffc | 0x80000000;
                }
                uVar10 = (uVar10 | 0x2018) << 0x20 | 0x1080800000000;
                uVar7 = *(uint *)(uVar10 + 0x3f050);
                if (uVar7 != 0) {
                  uVar26 = (uint)uVar28;
                  *(uint *)(uVar10 + 0x3f050) =
                       ~(1 << ((long)(int)(uVar26 >> 3) & 0x18U | (long)(int)(uVar26 >> 8) & 0x1fU))
                       & uVar7;
                }
                _DAT_2000000000470 = 0;
                uVar16 = (ulong)((int)uVar16 + 0x100);
                uVar14 = uVar14 + 0x1c;
                if (uVar16 == 0x400) break;
                lVar15 = *(long *)(gp + -0x2b0);
                iVar6 = *(int *)(gp + -0x2b4);
              }
              iVar19 = iVar19 + 4;
              local_b0 = local_b0 + 0x70;
              piVar21 = (int *)0x10;
              if (iVar19 == 0x10) break;
              lVar15 = *(long *)(gp + -0x2b0);
              iVar6 = *(int *)(gp + -0x2b4);
            }
          }
          else {
            if (uVar26 >> 0x1d != 0) {
              lVar18 = gp + -0x6d8;
              lVar15 = ((ulong)((long)(int)((uVar26 >> 0x1d) - 1) << 0x20) >> 0x1e) + lVar18;
              do {
                piVar20 = (int *)(long)*(int *)(lVar18 + 100);
                *(int *)(gp + -0x6b4) = *(int *)(lVar18 + 100);
                lVar8 = _DAT_2000000000070 << 0x20;
                piVar21 = *(int **)(lVar8 + 0x108080000c824);
                *(int *)(gp + -0x2b4) = (int)_DAT_2000000000070;
                *(int **)(gp + -0x2b0) = piVar21;
                uVar7 = *(uint *)(gp + -0x6d8);
                if (uVar12 == 0) {
                  local_b0 = 3;
                  if (uVar7 < 4) {
                    if (uVar7 < 2) {
                      if (uVar7 == 0) {
                        iVar6 = 0;
                        if ((_DAT_108080000c380 != 0) &&
                           (piVar20 == (int *)((long)(int)_DAT_108080000c3b4 & 0xffffffcU))) {
                          iVar19 = 0;
LAB_fffffffff000f05c:
                          *(undefined4 *)
                           (((long)(iVar6 << 8 | iVar19 << 6) << 0x20) + 0x108080000c3cc) = 1;
                          *(undefined4 *)(((ulong)*(uint *)(gp + -0x2b4) << 0x20) + 0x108080000c8ac)
                               = 0x3000;
                          do {
                          } while( true );
                        }
                        if ((_DAT_109080000c380 != 0) &&
                           (piVar20 == (int *)((long)(int)_DAT_109080000c3b4 & 0xffffffcU))) {
                          iVar19 = 0;
                          iVar6 = 1;
                          goto LAB_fffffffff000f05c;
                        }
                        if ((_DAT_108480000c380 != 0) &&
                           (piVar20 == (int *)((long)(int)_DAT_108480000c3b4 & 0xffffffcU))) {
                          iVar19 = 1;
                          goto LAB_fffffffff000f05c;
                        }
                        piVar21 = (int *)0x14000000000;
                        local_b0 = (ulong)_DAT_109480000c380;
                        if (local_b0 != 0) {
                          iVar19 = 1;
                          iVar6 = 1;
                          piVar21 = (int *)((long)(int)_DAT_109480000c3b4 & 0xffffffc);
                          if (piVar20 == piVar21) goto LAB_fffffffff000f05c;
                        }
                      }
                      else {
                        iVar6 = 0;
                        do {
                          iVar19 = 0;
                          do {
                            uVar7 = iVar6 << 6 | iVar19 << 8;
                            local_b0 = (ulong)(uVar7 | 0x10) << 0x20;
                            if ((((*(uint *)(local_b0 + 0x108080000c82c) & 1) != 0) &&
                                ((*(uint *)(local_b0 + 0x108080000c860) & 0x40000000) != 0)) &&
                               (piVar20 ==
                                (int *)((long)(int)*(uint *)(local_b0 + 0x108080000c860) &
                                       0xffffffcU))) {
                              uVar26 = 2;
                              if ((*(int *)(gp + -0x6d4) != 1) &&
                                 (uVar26 = 1,
                                 (*(uint *)(local_b0 + 0x108080000c834) & 0x40000000) != 0)) {
                                uVar26 = 3;
                              }
                              if ((*(uint *)(local_b0 + 0x108080000c82c) & 1) != 0) {
                                *(uint *)(local_b0 + 0x108080000c884) = uVar26 | 0x500;
                              }
                              piVar20 = _DAT_20000000000f8;
                              uVar26 = *(uint *)(lVar8 + 0x108080000c8ac);
                              *(undefined4 *)(lVar8 + 0x108080000c8ac) = 0x3000;
                              _DAT_20000000000d8 = ((long)(int)(uVar26 >> 0x18) & 3U) << 7;
                              _DAT_2000000000120 = 0;
                              *(undefined4 *)
                               ((long)piVar21 + (ulong)(uint)((iVar6 * 4 + iVar19) * 0x1c) + 0x4e0)
                                   = 0;
                              *(undefined4 *)
                               (((ulong)*(uint *)(gp + -0x2b4) << 0x20) + 0x108080000c8ac) = 0x2000;
                              if ((ulong)((long)_DAT_20000000000f8 - (long)piVar20) <=
                                  (ulong)*(uint *)(gp + -0x2b8) * 10000000) {
                                do {
                                } while( true );
                              }
                              *(undefined4 *)(local_b0 + 0x108080000c884) = 0;
                              *(uint *)(local_b0 + 0x108080000c87c) =
                                   (uint)((ulong)((long)*(int *)(local_b0 + 0x108080000c87c) << 0x21
                                                 ) >> 0x21);
                              if ((*(uint *)(local_b0 + 0x108080000c82c) & 1) != 0) {
                                _DAT_20000000000d8 =
                                     ((long)(int)(*(uint *)(local_b0 + 0x108080000c8ac) >> 0x18) &
                                     3U) << 7;
                                _DAT_2000000000120 = 0;
                                *(uint *)(*(long *)(local_b0 + 0x108080000c824) + 0x3c0) =
                                     *(uint *)(local_b0 + 0x108080000c860) & 0xffffffc | 0x80000000;
                              }
                              uVar14 = (ulong)(uVar7 | 0x2018) << 0x20 | 0x1080800000000;
                              uVar26 = *(uint *)(uVar14 + 0x3f050);
                              local_b0 = (ulong)(int)uVar26;
                              if (local_b0 != 0) {
                                uVar26 = ~(1 << ((long)(int)((uVar7 | 0x10) >> 3) & 0x18U |
                                                (long)(int)(uVar7 >> 8) & 0x1fU)) & uVar26;
                                local_b0 = (ulong)(int)uVar26;
                                *(uint *)(uVar14 + 0x3f050) = uVar26;
                              }
                              _DAT_2000000000470 = 0;
                              piVar21 = (int *)(ulong)_DAT_2000000000028;
                              goto LAB_fffffffff000eb80;
                            }
                            iVar19 = iVar19 + 1;
                          } while (iVar19 != 4);
                          iVar6 = iVar6 + 1;
                        } while (iVar6 != 4);
                      }
                    }
                    else {
                      piVar21 = (int *)(long)(int)(uVar7 - 2);
                      if (piVar21 == (int *)0x1) {
                        piVar21 = (int *)0x600;
                      }
                      iVar6 = 0;
                      do {
                        iVar19 = (int)piVar21;
                        local_b0 = (ulong)(iVar19 + 0x12e0);
                        uVar14 = (local_b0 << 0x20) >> 0x1e;
                        if (((*(uint *)(uVar14 + 0x1000100000000) & 1) != 0) &&
                           (piVar20 ==
                            (int *)((long)*(int *)(((ulong)((long)(iVar19 + 0x130b) << 0x20) >> 0x1e
                                                   ) + 0x1000100000000) & 0xfffffffU))) {
                          uVar16 = (ulong)((long)(iVar19 + 0x12f2) << 0x20) >> 0x1e;
                          if (*(int *)(uVar16 + 0x1000100000000) != 0) {
                            puVar30 = (uint *)(uVar14 + 0x1000100000000);
                            *puVar30 = *puVar30 & 0xfffffffe;
                            *(undefined4 *)(uVar16 + 0x1000100000000) = 0;
                            puVar30 = (uint *)(((ulong)((long)(iVar19 + 0x1316) << 0x20) >> 0x1e) +
                                              0x1000100000000);
                            *puVar30 = *puVar30 | 1;
                            do {
                            } while( true );
                          }
                          break;
                        }
                        iVar6 = iVar6 + 1;
                        piVar21 = (int *)(long)(iVar19 + 0x58);
                      } while (iVar6 != 8);
                    }
                  }
                  else {
                    piVar21 = (int *)0x4;
                    if (uVar7 == 4) {
                      piVar21 = (int *)0x3000000000;
                      local_b0 = (ulong)_DAT_108380000c82c;
                      if (local_b0 != 0) {
                        do {
                        } while( true );
                      }
                    }
                  }
                }
                else {
                  local_b0 = 0;
                  if (uVar7 == 1) {
                    local_b0 = 0x600;
                  }
                  iVar6 = 0;
                  do {
                    iVar19 = (int)local_b0;
                    uVar14 = (ulong)((long)(iVar19 + 0x12e0) << 0x20) >> 0x1e;
                    piVar21 = (int *)((long)*(int *)(uVar14 + 0x1000100000000) & 1);
                    if ((piVar21 != (int *)0x0) &&
                       (piVar21 = (int *)((long)*(int *)(((ulong)((long)(iVar19 + 0x130b) << 0x20)
                                                         >> 0x1e) + 0x1000100000000) & 0xfffffff),
                       piVar20 == piVar21)) {
                      piVar21 = (int *)((ulong)((long)(iVar19 + 0x12f2) << 0x20) >> 0x1e);
                      if (piVar21[0x400040000000] != 0) {
                        puVar30 = (uint *)(uVar14 + 0x1000100000000);
                        *puVar30 = *puVar30 & 0xfffffffe;
                        piVar21[0x400040000000] = 0;
                        puVar30 = (uint *)(((ulong)((long)(iVar19 + 0x1316) << 0x20) >> 0x1e) +
                                          0x1000100000000);
                        *puVar30 = *puVar30 | 1;
                        do {
                        } while( true );
                      }
                      break;
                    }
                    iVar6 = iVar6 + 1;
                    local_b0 = (ulong)(iVar19 + 0x58);
                  } while (iVar6 != 8);
                }
LAB_fffffffff000eb80:
                if (lVar15 == lVar18) goto LAB_fffffffff000a368;
                uVar12 = *(uint *)(gp + -0x684);
                lVar18 = lVar18 + 4;
              } while( true );
            }
            piVar21 = (int *)0x0;
          }
        }
      }
    }
  }
  else if (uVar7 == 0xd2) {
    do {
    } while( true );
  }
LAB_fffffffff000a368:
  FUN_fffffffff0013358(7,local_b0,piVar21);
LAB_fffffffff000a370:
  FUN_fffffffff0012198();
  return;
code_r0xfffffffff001197c:
  *(undefined4 *)(uVar14 + 0x30800) = 0xe0000000;
  piVar21[0x48] = 0;
  piVar21[0x49] = 0;
  *(undefined4 *)(lVar15 + 0x160) = 0xd7870f42;
  *(undefined4 *)(lVar15 + 0x164) = 0xc96c5795;
  do {
  } while ((int)_DAT_2000000000090 != 0);
LAB_fffffffff000bc10:
  lVar18 = ((ulong)*(uint *)(gp + -0x2b4) << 0x20) + lVar18;
  local_b0 = 0x2000;
  *(undefined4 *)(lVar18 + 0xc8ac) = 0x2000;
  piVar21 = (int *)(long)*(int *)(lVar18 + 0xc8ac);
  goto LAB_fffffffff000a368;
LAB_fffffffff000a41c:
  iVar6 = iVar6 + -1;
  uVar14 = (long)((int)uVar14 + 1) & 0xf;
  if (iVar6 == 0) goto LAB_fffffffff000a368;
  goto LAB_fffffffff000a3dc;
}


/* ---- FUN_fffffffff0011ee4 @ fffffffff0011ee4 size=40 ---- */

void FUN_fffffffff0011ee4(void)

{
  long lVar1;
  
  lVar1 = FUN_fffffffff0014988();
  if (lVar1 != 0) {
    return;
  }
  FUN_fffffffff0012f60(0x152);
  FUN_fffffffff0014998();
  return;
}


/* ---- sub_11f0c @ fffffffff0011f0c size=20 ---- */

void sub_11f0c(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_fffffffff0100160;
  param_1[1] = 0;
  return;
}


/* ---- FUN_fffffffff0011f20 @ fffffffff0011f20 size=108 ---- */

void FUN_fffffffff0011f20(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_LAB_fffffffff0100180;
  *(undefined4 *)(param_1 + 0x36) = 4;
  param_1[0x24] = 0x800000008;
  param_1[0x25] = 0x800000008;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  puVar1 = param_1 + 0x26;
  do {
    *(undefined4 *)puVar1 = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    puVar1 = (undefined8 *)((long)puVar1 + 4);
  } while (puVar1 != param_1 + 0x2e);
  puVar1 = param_1 + 4;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (puVar1 != param_1 + 0x24);
  *(undefined4 *)((long)param_1 + 0x1b4) = 0;
  param_1[0x37] = 0;
  return;
}


/* ---- sub_11f8c @ fffffffff0011f8c size=4 ---- */

void sub_11f8c(void)

{
  return;
}


/* ---- sub_11f90 @ fffffffff0011f90 size=176 ---- */

undefined8 sub_11f90(long param_1,undefined4 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_fffffffff0013ea0(0x28);
  do {
    FUN_fffffffff0013eb4(0x530,1);
    lVar2 = FUN_fffffffff0013ea0(0x28);
  } while (-1 < lVar2);
  if (param_1 == 0x30ff) {
    *(undefined4 *)((param_3 << 0x20) + 0x108080000c3fc) = param_2;
  }
  else {
    *(undefined4 *)((param_3 << 0x20) + 0x1080800000000 + ((ulong)(param_1 << 0x20) >> 0x1e)) =
         param_2;
  }
  FUN_fffffffff0013eb4(0x530,uVar1 >> 0x3f);
  return 0;
}


/* ---- FUN_fffffffff0012040 @ fffffffff0012040 size=28 ---- */

undefined8 FUN_fffffffff0012040(void)

{
  FUN_fffffffff0013ec8();
  return 0;
}


/* ---- FUN_fffffffff001205c @ fffffffff001205c size=44 ---- */

undefined8 FUN_fffffffff001205c(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_fffffffff0013ed8();
  *param_1 = uVar1;
  return 0;
}


/* ---- sub_12088 @ fffffffff0012088 size=28 ---- */

undefined8 sub_12088(void)

{
  FUN_fffffffff00144a8();
  return 0;
}


/* ---- sub_120a4 @ fffffffff00120a4 size=80 ---- */

undefined8 sub_120a4(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_fffffffff00144c4();
  if (uVar1 >> 2 == (uVar1 & 3)) {
    *param_1 = uVar1 >> 2;
    return 0;
  }
  return 2;
}


/* ---- FUN_fffffffff00120f4 @ fffffffff00120f4 size=48 ---- */

undefined8 FUN_fffffffff00120f4(void)

{
  long lVar1;
  
  do {
    FUN_fffffffff0013eb4(0x530,1);
    lVar1 = FUN_fffffffff0013ea0(0x28);
  } while (-1 < lVar1);
  return 0;
}


/* ---- sub_12124 @ fffffffff0012124 size=76 ---- */

undefined8 sub_12124(ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_fffffffff0013ea0(0x28);
  *param_1 = uVar1 >> 0x3f;
  do {
    FUN_fffffffff0013eb4(0x530,1);
    lVar2 = FUN_fffffffff0013ea0(0x28);
  } while (-1 < lVar2);
  return 0;
}


/* ---- sub_12170 @ fffffffff0012170 size=40 ---- */

undefined8 sub_12170(undefined4 param_1)

{
  FUN_fffffffff0013eb4(0x530,param_1);
  return 0;
}


/* ---- FUN_fffffffff0012198 @ fffffffff0012198 size=36 ---- */

undefined8 FUN_fffffffff0012198(void)

{
  FUN_fffffffff0013eb4(0x530,0);
  return 0;
}


/* ---- FUN_fffffffff00121bc @ fffffffff00121bc size=128 ---- */

undefined8 FUN_fffffffff00121bc(long param_1,undefined4 param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_fffffffff0013ea0(0x28);
  do {
    FUN_fffffffff0013eb4(0x530,1);
    lVar2 = FUN_fffffffff0013ea0(0x28);
  } while (-1 < lVar2);
  *(undefined4 *)(((ulong)(param_1 << 0x20) >> 0x1e) + 0x1000100000000) = param_2;
  FUN_fffffffff0013eb4(0x530,uVar1 >> 0x3f);
  return 0;
}


/* ---- sub_1223c @ fffffffff001223c size=156 ---- */

undefined8 sub_1223c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_fffffffff0013ea0(0x28);
  do {
    FUN_fffffffff0013eb4(0x530,1);
    lVar2 = FUN_fffffffff0013ea0(0x28);
  } while (-1 < lVar2);
  *(int *)(((ulong)(param_1 << 0x20) >> 0x1e) + 0x1000100000000) = (int)param_2;
  *(int *)(((ulong)((long)((int)param_1 + 1) << 0x20) >> 0x1e) + 0x1000100000000) =
       (int)((ulong)param_2 >> 0x20);
  FUN_fffffffff0013eb4(0x530,uVar1 >> 0x3f);
  return 0;
}


/* ---- sub_122d8 @ fffffffff00122d8 size=176 ---- */

undefined8 sub_122d8(long param_1,undefined4 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_fffffffff0013ea0(0x28);
  do {
    FUN_fffffffff0013eb4(0x530,1);
    lVar2 = FUN_fffffffff0013ea0(0x28);
  } while (-1 < lVar2);
  if (param_1 == 0x30ff) {
    *(undefined4 *)((param_3 << 0x20) + 0x108080000c3fc) = param_2;
  }
  else {
    *(undefined4 *)((param_3 << 0x20) + 0x1080800000000 + ((ulong)(param_1 << 0x20) >> 0x1e)) =
         param_2;
  }
  FUN_fffffffff0013eb4(0x530,uVar1 >> 0x3f);
  return 0;
}


/* ---- FUN_fffffffff0012388 @ fffffffff0012388 size=176 ---- */

undefined8 FUN_fffffffff0012388(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_fffffffff0013ea0(0x28);
  do {
    FUN_fffffffff0013eb4(0x530,1);
    lVar2 = FUN_fffffffff0013ea0(0x28);
  } while (-1 < lVar2);
  lVar2 = (param_3 << 0x20) + 0x1080800000000;
  *(int *)(lVar2 + ((ulong)(param_1 << 0x20) >> 0x1e)) = (int)param_2;
  *(int *)(lVar2 + ((ulong)((long)((int)param_1 + 1) << 0x20) >> 0x1e)) =
       (int)((ulong)param_2 >> 0x20);
  FUN_fffffffff0013eb4(0x530,uVar1 >> 0x3f);
  return 0;
}


/* ---- thunk_FUN_fffffffff0012388 @ fffffffff0012438 size=4 ---- */

undefined8 thunk_FUN_fffffffff0012388(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_fffffffff0013ea0(0x28);
  do {
    FUN_fffffffff0013eb4(0x530,1);
    lVar2 = FUN_fffffffff0013ea0(0x28);
  } while (-1 < lVar2);
  lVar2 = (param_3 << 0x20) + 0x1080800000000;
  *(int *)(lVar2 + ((ulong)(param_1 << 0x20) >> 0x1e)) = (int)param_2;
  *(int *)(lVar2 + ((ulong)((long)((int)param_1 + 1) << 0x20) >> 0x1e)) =
       (int)((ulong)param_2 >> 0x20);
  FUN_fffffffff0013eb4(0x530,uVar1 >> 0x3f);
  return 0;
}


/* ---- FUN_fffffffff001243c @ fffffffff001243c size=132 ---- */

undefined8 FUN_fffffffff001243c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_fffffffff0013ea0(0x28);
  do {
    FUN_fffffffff0013eb4(0x530,1);
    lVar2 = FUN_fffffffff0013ea0(0x28);
  } while (-1 < lVar2);
  FUN_fffffffff00141c4(param_1 << 2,param_2,param_3);
  FUN_fffffffff0013eb4(0x530,uVar1 >> 0x3f);
  return 0;
}


/* ---- FUN_fffffffff00124c0 @ fffffffff00124c0 size=128 ---- */

undefined8 FUN_fffffffff00124c0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_fffffffff0013ea0(0x28);
  do {
    FUN_fffffffff0013eb4(0x530,1);
    lVar3 = FUN_fffffffff0013ea0(0x28);
  } while (-1 < lVar3);
  uVar1 = FUN_fffffffff00142c0(param_1 << 2,0);
  *param_2 = uVar1;
  FUN_fffffffff0013eb4(0x530,uVar2 >> 0x3f);
  return 0;
}


/* ---- sub_12540 @ fffffffff0012540 size=128 ---- */

undefined8 sub_12540(int param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_fffffffff0013ea0(0x28);
  do {
    FUN_fffffffff0013eb4(0x530,1);
    lVar2 = FUN_fffffffff0013ea0(0x28);
  } while (-1 < lVar2);
  uVar3 = FUN_fffffffff00142c0(param_1 << 2,1);
  *param_2 = uVar3;
  FUN_fffffffff0013eb4(0x530,uVar1 >> 0x3f);
  return 0;
}


/* ---- FUN_fffffffff00125c0 @ fffffffff00125c0 size=172 ---- */

undefined8 FUN_fffffffff00125c0(int param_1,undefined4 *param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = FUN_fffffffff0013ea0(0x28);
  do {
    FUN_fffffffff0013eb4(0x530,1);
    lVar4 = FUN_fffffffff0013ea0(0x28);
  } while (-1 < lVar4);
  if (param_3 == 0xff0) {
    iVar2 = FUN_fffffffff0013ea0(0x70);
    param_3 = (long)iVar2;
  }
  uVar1 = FUN_fffffffff0014278(param_1 << 2,0,param_3);
  *param_2 = uVar1;
  FUN_fffffffff0013eb4(0x530,uVar3 >> 0x3f);
  return 0;
}


/* ---- thunk_FUN_fffffffff00125c0 @ fffffffff001266c size=4 ---- */

undefined8 thunk_FUN_fffffffff00125c0(int param_1,undefined4 *param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = FUN_fffffffff0013ea0(0x28);
  do {
    FUN_fffffffff0013eb4(0x530,1);
    lVar4 = FUN_fffffffff0013ea0(0x28);
  } while (-1 < lVar4);
  if (param_3 == 0xff0) {
    iVar2 = FUN_fffffffff0013ea0(0x70);
    param_3 = (long)iVar2;
  }
  uVar1 = FUN_fffffffff0014278(param_1 << 2,0,param_3);
  *param_2 = uVar1;
  FUN_fffffffff0013eb4(0x530,uVar3 >> 0x3f);
  return 0;
}


/* ---- FUN_fffffffff0012670 @ fffffffff0012670 size=172 ---- */

undefined8 FUN_fffffffff0012670(int param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_fffffffff0013ea0(0x28);
  do {
    FUN_fffffffff0013eb4(0x530,1);
    lVar3 = FUN_fffffffff0013ea0(0x28);
  } while (-1 < lVar3);
  if (param_3 == 0xff0) {
    iVar1 = FUN_fffffffff0013ea0(0x70);
    param_3 = (long)iVar1;
  }
  uVar4 = FUN_fffffffff0014278(param_1 << 2,1,param_3);
  *param_2 = uVar4;
  FUN_fffffffff0013eb4(0x530,uVar2 >> 0x3f);
  return 0;
}


/* ---- thunk_FUN_fffffffff0012670 @ fffffffff001271c size=4 ---- */

undefined8 thunk_FUN_fffffffff0012670(int param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_fffffffff0013ea0(0x28);
  do {
    FUN_fffffffff0013eb4(0x530,1);
    lVar3 = FUN_fffffffff0013ea0(0x28);
  } while (-1 < lVar3);
  if (param_3 == 0xff0) {
    iVar1 = FUN_fffffffff0013ea0(0x70);
    param_3 = (long)iVar1;
  }
  uVar4 = FUN_fffffffff0014278(param_1 << 2,1,param_3);
  *param_2 = uVar4;
  FUN_fffffffff0013eb4(0x530,uVar2 >> 0x3f);
  return 0;
}


/* ---- FUN_fffffffff0012720 @ fffffffff0012720 size=132 ---- */

undefined8 FUN_fffffffff0012720(long param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_fffffffff0013ea0(0x28);
  do {
    FUN_fffffffff0013eb4(0x530,1);
    lVar3 = FUN_fffffffff0013ea0(0x28);
  } while (-1 < lVar3);
  uVar1 = FUN_fffffffff001443c(param_1 << 2,param_3);
  *param_2 = uVar1;
  FUN_fffffffff0013eb4(0x530,uVar2 >> 0x3f);
  return 0;
}


/* ---- sub_127a4 @ fffffffff00127a4 size=188 ---- */

undefined8 sub_127a4(uint param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_fffffffff0013ea0(0x28);
  do {
    FUN_fffffffff0013eb4(0x530,1);
    lVar3 = FUN_fffffffff0013ea0(0x28);
  } while (-1 < lVar3);
  if ((param_1 & 0xfffefffc) == 0) {
    FUN_fffffffff00144e8(param_1 | 0x30,param_2,param_3);
    FUN_fffffffff0013eb4(0x530,uVar2 >> 0x3f);
    uVar1 = 0;
  }
  else {
    FUN_fffffffff0013eb4(0x530,uVar2 >> 0x3f);
    uVar1 = 100;
  }
  return uVar1;
}


/* ---- FUN_fffffffff0012860 @ fffffffff0012860 size=188 ---- */

undefined8 FUN_fffffffff0012860(uint param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_fffffffff0013ea0(0x28);
  do {
    FUN_fffffffff0013eb4(0x530,1);
    lVar3 = FUN_fffffffff0013ea0(0x28);
  } while (-1 < lVar3);
  if ((param_1 & 0xfffefffc) == 0) {
    FUN_fffffffff00144e8(param_1 | 0x20,param_2,param_3);
    FUN_fffffffff0013eb4(0x530,uVar2 >> 0x3f);
    uVar1 = 0;
  }
  else {
    FUN_fffffffff0013eb4(0x530,uVar2 >> 0x3f);
    uVar1 = 100;
  }
  return uVar1;
}


/* ---- FUN_fffffffff001291c @ fffffffff001291c size=188 ---- */

undefined8 FUN_fffffffff001291c(uint param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_fffffffff0013ea0(0x28);
  do {
    FUN_fffffffff0013eb4(0x530,1);
    lVar3 = FUN_fffffffff0013ea0(0x28);
  } while (-1 < lVar3);
  if ((param_1 & 0xfffefffc) == 0) {
    FUN_fffffffff00144e8(param_1 | 0x10,param_2,param_3);
    FUN_fffffffff0013eb4(0x530,uVar2 >> 0x3f);
    uVar1 = 0;
  }
  else {
    FUN_fffffffff0013eb4(0x530,uVar2 >> 0x3f);
    uVar1 = 100;
  }
  return uVar1;
}


/* ---- FUN_fffffffff00129d8 @ fffffffff00129d8 size=184 ---- */

undefined8 FUN_fffffffff00129d8(uint param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_fffffffff0013ea0(0x28);
  do {
    FUN_fffffffff0013eb4(0x530,1);
    lVar3 = FUN_fffffffff0013ea0(0x28);
  } while (-1 < lVar3);
  if ((param_1 & 0xfffefffc) == 0) {
    FUN_fffffffff00144e8(param_1,param_2,param_3);
    FUN_fffffffff0013eb4(0x530,uVar2 >> 0x3f);
    uVar1 = 0;
  }
  else {
    FUN_fffffffff0013eb4(0x530,uVar2 >> 0x3f);
    uVar1 = 100;
  }
  return uVar1;
}


/* ---- FUN_fffffffff0012a90 @ fffffffff0012a90 size=92 ---- */

undefined8 FUN_fffffffff0012a90(void)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_fffffffff0013ea0(0x28);
  do {
    FUN_fffffffff0013eb4(0x530,1);
    lVar2 = FUN_fffffffff0013ea0(0x28);
  } while (-1 < lVar2);
  do {
    lVar2 = FUN_fffffffff0013ea0(0x90);
  } while (lVar2 != 0);
  FUN_fffffffff0013eb4(0x530,uVar1 >> 0x3f);
  return 0;
}


/* ---- sub_12aec @ fffffffff0012aec size=180 ---- */

undefined8 sub_12aec(uint param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_fffffffff0013ea0(0x28);
  do {
    FUN_fffffffff0013eb4(0x530,1);
    lVar2 = FUN_fffffffff0013ea0(0x28);
  } while (-1 < lVar2);
  if ((param_1 & 0xffffff3f) == 0) {
    uVar3 = FUN_fffffffff001456c(param_1 | 3,param_2);
    *param_3 = uVar3;
    FUN_fffffffff0013eb4(0x530,uVar1 >> 0x3f);
    uVar3 = 0;
  }
  else {
    FUN_fffffffff0013eb4(0x530,uVar1 >> 0x3f);
    uVar3 = 100;
  }
  return uVar3;
}


/* ---- FUN_fffffffff0012ba0 @ fffffffff0012ba0 size=180 ---- */

undefined8 FUN_fffffffff0012ba0(uint param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = FUN_fffffffff0013ea0(0x28);
  do {
    FUN_fffffffff0013eb4(0x530,1);
    lVar4 = FUN_fffffffff0013ea0(0x28);
  } while (-1 < lVar4);
  if ((param_1 & 0xffffff3f) == 0) {
    uVar2 = FUN_fffffffff001456c(param_1 | 2,param_2);
    *param_3 = uVar2;
    FUN_fffffffff0013eb4(0x530,uVar3 >> 0x3f);
    uVar1 = 0;
  }
  else {
    FUN_fffffffff0013eb4(0x530,uVar3 >> 0x3f);
    uVar1 = 100;
  }
  return uVar1;
}


/* ---- FUN_fffffffff0012c54 @ fffffffff0012c54 size=180 ---- */

undefined8 FUN_fffffffff0012c54(uint param_1,undefined8 param_2,undefined2 *param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = FUN_fffffffff0013ea0(0x28);
  do {
    FUN_fffffffff0013eb4(0x530,1);
    lVar4 = FUN_fffffffff0013ea0(0x28);
  } while (-1 < lVar4);
  if ((param_1 & 0xffffff3f) == 0) {
    uVar2 = FUN_fffffffff001456c(param_1 | 1,param_2);
    *param_3 = uVar2;
    FUN_fffffffff0013eb4(0x530,uVar3 >> 0x3f);
    uVar1 = 0;
  }
  else {
    FUN_fffffffff0013eb4(0x530,uVar3 >> 0x3f);
    uVar1 = 100;
  }
  return uVar1;
}


/* ---- FUN_fffffffff0012d08 @ fffffffff0012d08 size=176 ---- */

undefined8 FUN_fffffffff0012d08(uint param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = FUN_fffffffff0013ea0(0x28);
  do {
    FUN_fffffffff0013eb4(0x530,1);
    lVar4 = FUN_fffffffff0013ea0(0x28);
  } while (-1 < lVar4);
  if ((param_1 & 0xffffff3f) == 0) {
    uVar2 = FUN_fffffffff001456c(param_1,param_2);
    *param_3 = uVar2;
    FUN_fffffffff0013eb4(0x530,uVar3 >> 0x3f);
    uVar1 = 0;
  }
  else {
    FUN_fffffffff0013eb4(0x530,uVar3 >> 0x3f);
    uVar1 = 100;
  }
  return uVar1;
}


/* ---- thunk_FUN_fffffffff00145e0 @ fffffffff0012db8 size=4 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_fffffffff00145e0(void)

{
  _DAT_2000000000530 = 0;
  wfi();
  return;
}


/* ---- FUN_fffffffff0012dbc @ fffffffff0012dbc size=420 ---- */

undefined8 FUN_fffffffff0012dbc(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  switch((int)param_1) {
  case 3:
    *(undefined8 *)(gp + -0x2a0) = param_2;
    uVar2 = 0;
    break;
  case 4:
    *(undefined8 *)(gp + -0x298) = param_2;
    uVar2 = 0;
    break;
  case 5:
    *(undefined8 *)(gp + -0x290) = param_2;
    uVar2 = 0;
    break;
  case 6:
    *(undefined8 *)(gp + -0x288) = param_2;
    goto LAB_fffffffff0012e54;
  case 7:
    *(undefined8 *)(gp + -0x268) = param_2;
    uVar2 = 0;
    break;
  case 8:
    *(undefined8 *)(gp + -0x280) = param_2;
    uVar2 = 0;
    break;
  case 9:
    *(undefined8 *)(gp + -0x278) = param_2;
    uVar2 = 0;
    break;
  case 10:
    *(undefined8 *)(gp + -0x270) = param_2;
    uVar2 = 0;
    break;
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
    uVar2 = 100;
    break;
  case 0x10:
    *(undefined8 *)(gp + -600) = param_2;
    goto LAB_fffffffff0012e54;
  case 0x11:
    *(undefined8 *)(gp + -0x250) = param_2;
LAB_fffffffff0012e54:
    uVar3 = FUN_fffffffff0013ea0(0x28);
    do {
      FUN_fffffffff0013eb4(0x530,1);
      lVar4 = FUN_fffffffff0013ea0(0x28);
    } while (-1 < lVar4);
    uVar1 = FUN_fffffffff00142c0(0x32038,0);
    FUN_fffffffff0013eb4(0x530,uVar3 >> 0x3f);
    uVar3 = FUN_fffffffff0013ea0(0x28);
    do {
      FUN_fffffffff0013eb4(0x530,1);
      lVar4 = FUN_fffffffff0013ea0(0x28);
    } while (-1 < lVar4);
    *DAT_fffffffff0100190 = uVar1 | 1 << (param_1 & 0x1f);
    FUN_fffffffff0013eb4(0x530,uVar3 >> 0x3f);
    return 0;
  case 0x12:
    *(undefined8 *)(gp + -0x248) = param_2;
    uVar2 = 0;
    break;
  case 0x13:
    *(undefined8 *)(gp + -0x240) = param_2;
    uVar2 = 0;
    break;
  case 0x1f:
    *(undefined8 *)(gp + -0x260) = param_2;
    uVar2 = 0;
    break;
  default:
    return 100;
  }
  return uVar2;
}


/* ---- FUN_fffffffff0012f60 @ fffffffff0012f60 size=56 ---- */

void FUN_fffffffff0012f60(undefined8 param_1)

{
  FUN_fffffffff00121bc(0xc040,0xdead);
  FUN_fffffffff00121bc(0xc041,param_1);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_fffffffff0012f98 @ fffffffff0012f98 size=656 ---- */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0xfffffffff0100066) */
/* WARNING: Removing unreachable block (ram,0xfffffffff010005e) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0100056) */
/* WARNING: Removing unreachable block (ram,0xfffffffff010005a) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0100062) */
/* WARNING: Removing unreachable block (ram,0xfffffffff010006a) */
/* WARNING: Removing unreachable block (ram,0xfffffffff010006c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff010006e) */
/* WARNING: Removing unreachable block (ram,0xfffffffff010004a) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0100070) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0100046) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0100052) */

undefined8 FUN_fffffffff0012f98(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long extraout_a1;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  ulong uVar7;
  uint local_20;
  undefined4 uStack_1c;
  ulong uStack_18;
  
  local_20 = (uint)param_1;
  uVar4 = 2;
  uVar7 = (ulong)(int)((local_20 & 0x1f) + 0x1d);
  uStack_18 = param_2;
  if ((uVar7 & 0x1f) < 3) {
    uVar1 = (uint)(param_2 >> 0x20);
    uVar2 = (uVar1 >> 0x1a & 0xf) << 0xb;
    uStack_18 = 0;
    uVar5 = param_2 >> 0x3a & 0xb;
    if (uVar5 == 2) {
      local_20 = local_20 & 0xffff07ff | uVar2;
      uStack_18 = (param_2 >> 0x1a) << 0x20;
    }
    else {
      uVar4 = local_20 & 0xfff841f | uVar2;
      local_20 = (uVar1 >> 0x16 & 7) << 7 | (uVar1 >> 0x14 & 3) << 5 |
                 (uint)(ushort)(param_2 >> 0x30) << 0x1c | uVar4;
      if (uVar5 == 3) {
        param_3 = 3;
        if ((param_2 >> 0x2f & 1) == 0) {
          uStack_18 = param_2 & 0xffffffffffff;
        }
        else {
          uStack_18 = param_2 | 0xffff000000000000;
        }
        goto joined_r0xfffffffff0013060;
      }
    }
    param_3 = 0x7800;
    if ((local_20 & 0x7800) != 0x800) {
      param_3 = 0xfffffffffc000000;
      uStack_18 = uStack_18 | param_2 & 0x3ffffff;
    }
  }
joined_r0xfffffffff0013060:
  if (0x1c < (uVar7 & 0x1f)) {
switchD_fffffffff001307c_caseD_8:
    FUN_fffffffff00121bc(0xc047,param_1);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  puVar6 = &switchD_fffffffff001307c::caseD_1d;
  uVar2 = (&switchD_fffffffff001307c::caseD_1d)[uVar7 & 0x1f];
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar7 & 0x1f) {
  case 0:
    uVar7 = *(ulong *)(gp + -0x2a0);
    break;
  case 1:
    uVar7 = *(ulong *)(gp + -0x298);
    break;
  case 2:
    uVar7 = *(ulong *)(gp + -0x290);
    break;
  case 3:
    uVar7 = *(ulong *)(gp + -0x288);
    if (uVar7 == 0) {
      uVar2 = FUN_fffffffff0012f60(0x3a2);
      if ((uVar2 & 0xfffffffc) == 0) {
        FUN_fffffffff00145f4
                  (uVar2,(ulong)(uVar4 << 2) + extraout_a1,param_3,(ulong)puVar6 & 0xffffffff);
        return 0;
      }
      return 100;
    }
    goto LAB_fffffffff00130f4;
  case 4:
    uVar7 = *(ulong *)(gp + -0x268);
    break;
  case 5:
    uVar7 = *(ulong *)(gp + -0x280);
    break;
  case 6:
    uVar7 = *(ulong *)(gp + -0x278);
    break;
  case 7:
    uVar7 = *(ulong *)(gp + -0x270);
    break;
  default:
    goto switchD_fffffffff001307c_caseD_8;
  case 0xd:
    uVar7 = *(ulong *)(gp + -600);
    break;
  case 0xe:
    uVar7 = *(ulong *)(gp + -0x250);
    break;
  case 0xf:
    uVar7 = *(ulong *)(gp + -0x248);
    break;
  case 0x10:
    uVar7 = *(ulong *)(gp + -0x240);
    break;
  case 0x1c:
    uVar7 = *(ulong *)(gp + -0x260);
    break;
  case 0x1d:
  case 0x1e:
  case 0x1f:
    do {
                    /* WARNING: This code block may not be properly labeled as switch case */
      if (uVar2 == 0xfefff24) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      while (uVar2 != 0xfefff24) {
        while (uVar2 != 0xfefff24) {
          if (uVar2 != 0xfefff24) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
      }
    } while( true );
  }
  if (uVar7 == 0) {
    return param_1;
  }
LAB_fffffffff00130f4:
                    /* WARNING: Could not recover jumptable at 0xfffffffff0013104. Too many branches
                        */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)(uVar7 & 0xfffffffffffffffe))(CONCAT44(uStack_1c,local_20),uStack_18);
  return uVar3;
}


/* ---- sub_13228 @ fffffffff0013228 size=232 ---- */

undefined8 sub_13228(uint param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_fffffffff00142c0(0x2a628,0);
  uVar4 = 2;
  if ((uVar1 & 0xff) >> 7 != 0) {
    uVar3 = (uint)(uVar1 & 0xff);
    lVar2 = FUN_fffffffff0014278
                      (0xc844,1,(uVar3 >> 3 & 3) << 6 | (uVar3 >> 5 & 3) << 4 |
                                ((uint)uVar1 & 7) << 8);
    if ((param_1 & 0xfffffffc) == 0) {
      FUN_fffffffff00145f4(param_1,(ulong)(uint)(param_2 << 2) + lVar2,param_3,param_4);
      uVar4 = 0;
    }
    else {
      uVar4 = 100;
    }
  }
  return uVar4;
}


/* ---- FUN_fffffffff0013310 @ fffffffff0013310 size=28 ---- */

undefined8 FUN_fffffffff0013310(void)

{
  FUN_fffffffff0014624();
  return 0;
}


/* ---- sub_1332c @ fffffffff001332c size=44 ---- */

undefined8 sub_1332c(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_fffffffff0014684();
  *param_1 = uVar1;
  return 0;
}


/* ---- FUN_fffffffff0013358 @ fffffffff0013358 size=28 ---- */

undefined8 FUN_fffffffff0013358(void)

{
  FUN_fffffffff0002af0();
  return 0;
}


/* ---- sub_13374 @ fffffffff0013374 size=28 ---- */

undefined8 sub_13374(void)

{
  FUN_fffffffff0002b18();
  return 0;
}


/* ---- sub_13390 @ fffffffff0013390 size=44 ---- */

undefined8 sub_13390(void)

{
  FUN_fffffffff0014048(0x320dc,1,0);
  return 0;
}


/* ---- sub_133bc @ fffffffff00133bc size=232 ---- */

undefined8 sub_133bc(uint param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_fffffffff0013ea0(0x28);
  do {
    FUN_fffffffff0013eb4(0x530,1);
    lVar3 = FUN_fffffffff0013ea0(0x28);
  } while (-1 < lVar3);
  FUN_fffffffff00144a8(param_1 >> 0x1a & 3);
  iVar1 = FUN_fffffffff0013ed8();
  FUN_fffffffff0013eb4(0x98,(param_1 >> 0x1c) << 0x14 | 0x4000);
  FUN_fffffffff00151a8(param_3,param_2,param_1 & 0x3ffffff);
  do {
    lVar3 = FUN_fffffffff0013ea0(0x90);
  } while (lVar3 != 0);
  FUN_fffffffff0013eb4(0x98,iVar1 << 0x14 | 8);
  FUN_fffffffff0013eb4(0x530,uVar2 >> 0x3f);
  return 0;
}


/* ---- sub_134a4 @ fffffffff00134a4 size=232 ---- */

undefined8 sub_134a4(uint param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_fffffffff0013ea0(0x28);
  do {
    FUN_fffffffff0013eb4(0x530,1);
    lVar3 = FUN_fffffffff0013ea0(0x28);
  } while (-1 < lVar3);
  FUN_fffffffff00144a8(param_1 >> 0x1a & 3);
  iVar1 = FUN_fffffffff0013ed8();
  FUN_fffffffff0013eb4(0x98,(param_1 >> 0x1c) << 0x14 | 0x4000);
  FUN_fffffffff00151a8(param_3,param_2,param_1 & 0x3ffffff);
  do {
    lVar3 = FUN_fffffffff0013ea0(0x90);
  } while (lVar3 != 0);
  FUN_fffffffff0013eb4(0x98,iVar1 << 0x14 | 8);
  FUN_fffffffff0013eb4(0x530,uVar2 >> 0x3f);
  return 0;
}


/* ---- sub_1358c @ fffffffff001358c size=740 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 sub_1358c(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  uint uStack_38;
  undefined4 uStack_34;
  
  uVar1 = _DAT_20000000004b0;
  uVar6 = 200;
  if ((param_2 != 0) && (uVar6 = 0, param_3 == 0)) {
    uVar6 = 200;
  }
  iVar5 = 99;
  do {
    iVar5 = iVar5 + -1;
    if (_DAT_2000000000030 == 0) {
      _DAT_20000000000d0 = _DAT_2000000000070 | 1;
      _DAT_2000000000098 = 0x2001;
      uVar3 = FUN_fffffffff0013ea0(0x28);
      do {
        FUN_fffffffff0013eb4(0x530,1);
        lVar4 = FUN_fffffffff0013ea0(0x28);
      } while (-1 < lVar4);
      *DAT_fffffffff0100198 = (int)uVar1;
      *DAT_fffffffff01001a0 = (int)((ulong)uVar1 >> 0x20);
      FUN_fffffffff0013eb4(0x530,uVar3 >> 0x3f);
      uStack_38 = (uint)param_1;
      if ((uStack_38 & 0x60000000) == 0x60000000) {
        _DAT_2000000000390 = param_2;
        uVar3 = FUN_fffffffff0013ea0(0x28);
        do {
          FUN_fffffffff0013eb4(0x530,1);
          lVar4 = FUN_fffffffff0013ea0(0x28);
        } while (-1 < lVar4);
      }
      else {
        uVar3 = FUN_fffffffff0013ea0(0x28);
        do {
          FUN_fffffffff0013eb4(0x530,1);
          lVar4 = FUN_fffffffff0013ea0(0x28);
        } while (-1 < lVar4);
      }
      *DAT_fffffffff01001a8 = (int)param_2;
      *DAT_fffffffff01001b0 = (int)((ulong)param_2 >> 0x20);
      FUN_fffffffff0013eb4(0x530,uVar3 >> 0x3f);
      uVar2 = (undefined4)((ulong)param_3 >> 0x20);
      if ((uStack_38 & 0x300000) == 0x300000) {
        _DAT_2000000000390 = param_3;
        uVar3 = FUN_fffffffff0013ea0(0x28);
        do {
          FUN_fffffffff0013eb4(0x530,1);
          lVar4 = FUN_fffffffff0013ea0(0x28);
        } while (-1 < lVar4);
        *DAT_fffffffff01001b8 = (int)param_3;
        *DAT_fffffffff01001c0 = uVar2;
        FUN_fffffffff0013eb4(0x530,uVar3 >> 0x3f);
      }
      else {
        uVar3 = FUN_fffffffff0013ea0(0x28);
        do {
          FUN_fffffffff0013eb4(0x530,1);
          lVar4 = FUN_fffffffff0013ea0(0x28);
        } while (-1 < lVar4);
        *DAT_fffffffff01001b8 = (int)param_3;
        *DAT_fffffffff01001c0 = uVar2;
        FUN_fffffffff0013eb4(0x530,uVar3 >> 0x3f);
      }
      uVar3 = FUN_fffffffff0013ea0(0x28);
      do {
        FUN_fffffffff0013eb4(0x530,1);
        lVar4 = FUN_fffffffff0013ea0(0x28);
      } while (-1 < lVar4);
      *DAT_fffffffff01001c8 = uStack_38;
      FUN_fffffffff0013eb4(0x530,uVar3 >> 0x3f);
      uStack_34 = (undefined4)((ulong)param_1 >> 0x20);
      uVar3 = FUN_fffffffff0013ea0(0x28);
      do {
        FUN_fffffffff0013eb4(0x530,1);
        lVar4 = FUN_fffffffff0013ea0(0x28);
      } while (-1 < lVar4);
      *DAT_fffffffff01001d0 = uStack_34;
      FUN_fffffffff0013eb4(0x530,uVar3 >> 0x3f);
      return uVar6;
    }
  } while (iVar5 != 0);
  return 3;
}


/* ---- sub_13870 @ fffffffff0013870 size=88 ---- */

undefined8 sub_13870(uint param_1,undefined8 param_2,undefined8 param_3)

{
  if ((param_1 & 0xe00) == 0x200) {
    FUN_fffffffff0014694(param_1 & 0x7f,param_1 >> 8 & 0xf,param_2,param_3,0,0);
    return 0;
  }
  return 100;
}


/* ---- sub_138c8 @ fffffffff00138c8 size=240 ---- */

undefined8 sub_138c8(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = param_1 >> 8 & 0xf;
  if ((param_1 & 0xf00) == 0) {
    uVar1 = FUN_fffffffff0014694(param_1 & 0x7f,uVar2,param_2,param_3,0,0);
    *param_4 = uVar1;
    return 0;
  }
  if ((param_1 & 0xf00) != 0x100) {
    if ((param_1 & 0xe00) != 0x200) {
      return 100;
    }
    FUN_fffffffff0014694(param_1 & 0x7f,uVar2,param_2,param_3,0,0);
    return 0;
  }
  return 100;
}


/* ---- sub_139b8 @ fffffffff00139b8 size=268 ---- */

undefined8
sub_139b8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5
         )

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar1 = (uint)param_1;
  uVar2 = param_1 & 0x7f;
  uVar4 = uVar1 >> 8 & 0xf;
  if ((param_1 & 0xf00) == 0) {
    uVar3 = FUN_fffffffff0014694(uVar2,uVar4,param_2,param_3,0,0);
    *param_5 = uVar3;
    return 0;
  }
  if ((uVar1 & 0xf00) != 0x100) {
    if ((uVar1 & 0xe00) != 0x200) {
      return 100;
    }
    FUN_fffffffff0014694(uVar2,uVar4,param_2,param_3,0,0);
    return 0;
  }
  uVar3 = FUN_fffffffff0014694(uVar2,uVar4,param_2,param_3,param_4,(param_1 << 0x27) >> 0x33);
  *param_5 = uVar3;
  return 0;
}


/* ---- sub_13ac4 @ fffffffff0013ac4 size=92 ---- */

undefined8 sub_13ac4(void)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_fffffffff0013ea0(0x28);
  do {
    FUN_fffffffff0013eb4(0x530,1);
    lVar2 = FUN_fffffffff0013ea0(0x28);
  } while (-1 < lVar2);
  *DAT_fffffffff01001d8 = 0;
  FUN_fffffffff0013eb4(0x530,uVar1 >> 0x3f);
  return 0;
}


/* ---- sub_13b20 @ fffffffff0013b20 size=40 ---- */

long sub_13b20(void)

{
  ulong uVar1;
  
  uVar1 = FUN_fffffffff0014758();
  return ((long)~uVar1 >> 0x3f & 0xffffffffffffff9cU) + 100;
}


/* ---- sub_13b48 @ fffffffff0013b48 size=116 ---- */

undefined8 sub_13b48(undefined8 param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  undefined4 uStack_1c;
  
  uVar1 = FUN_fffffffff0013ea0(0x28);
  do {
    FUN_fffffffff0013eb4(0x530,1);
    lVar2 = FUN_fffffffff0013ea0(0x28);
  } while (-1 < lVar2);
  uStack_1c = (int)((ulong)param_1 >> 0x20);
  FUN_fffffffff001481c((long)(uStack_1c << 0xc),((uint)param_1 & 3) << 0x1c,(long)param_2);
  FUN_fffffffff0013eb4(0x530,uVar1 >> 0x3f);
  return 0;
}


/* ---- sub_13bbc @ fffffffff0013bbc size=176 ---- */

undefined8 sub_13bbc(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 1 << ((long)(int)(param_2 >> 3) & 0x18U | (long)(int)(param_2 >> 8) & 7U);
  uVar2 = FUN_fffffffff0013f5c(0x3f050,param_2 | 0x2008);
  if (param_1 == 1) {
    uVar2 = uVar2 | uVar1;
  }
  else {
    uVar2 = ~uVar1 & uVar2;
  }
  FUN_fffffffff0013ef0(0x3f050,uVar2,param_2 | 0x2008);
  return 0;
}


/* ---- sub_13c6c @ fffffffff0013c6c size=356 ---- */

undefined8 sub_13c6c(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = 1 << ((long)(int)(param_2 >> 3) & 0x18U | (long)(int)(param_2 >> 8) & 7U);
  uVar4 = FUN_fffffffff0013ea0(0x28);
  do {
    FUN_fffffffff0013eb4(0x530,1);
    lVar5 = FUN_fffffffff0013ea0(0x28);
  } while (-1 < lVar5);
  uVar2 = FUN_fffffffff00142c0(0x3214c,0);
  FUN_fffffffff0013eb4(0x530,uVar4 >> 0x3f);
  param_2 = param_2 | 0x2008;
  uVar3 = FUN_fffffffff0013f5c(0xc3bc,param_2);
  if (param_1 == 1) {
    uVar2 = uVar2 | uVar1;
    uVar3 = uVar3 | 0x40;
  }
  else {
    uVar2 = ~uVar1 & uVar2;
    uVar3 = uVar3 & 0xffffffbf;
  }
  uVar4 = FUN_fffffffff0013ea0(0x28);
  do {
    FUN_fffffffff0013eb4(0x530,1);
    lVar5 = FUN_fffffffff0013ea0(0x28);
  } while (-1 < lVar5);
  *DAT_fffffffff01001e0 = uVar2;
  FUN_fffffffff0013eb4(0x530,uVar4 >> 0x3f);
  FUN_fffffffff0013ef0(0xc3bc,uVar3,param_2);
  FUN_fffffffff0013ef0(0x3f058,uVar2,param_2);
  return 0;
}


/* ---- FUN_fffffffff0013dd0 @ fffffffff0013dd0 size=92 ---- */

void FUN_fffffffff0013dd0(void)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_fffffffff0013ea0(0x28);
  do {
    FUN_fffffffff0013eb4(0x530,1);
    lVar2 = FUN_fffffffff0013ea0(0x28);
  } while (-1 < lVar2);
  *DAT_fffffffff01001e8 = 0x6038108;
  FUN_fffffffff0013eb4(0x530,uVar1 >> 0x3f);
  return;
}


/* ---- FUN_fffffffff0013e2c @ fffffffff0013e2c size=92 ---- */

void FUN_fffffffff0013e2c(void)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_fffffffff0013ea0(0x28);
  do {
    FUN_fffffffff0013eb4(0x530,1);
    lVar2 = FUN_fffffffff0013ea0(0x28);
  } while (-1 < lVar2);
  *DAT_fffffffff01001f0 = 0xc00010ff;
  FUN_fffffffff0013eb4(0x530,uVar1 >> 0x3f);
  return;
}


/* ---- FUN_fffffffff0013ea0 @ fffffffff0013ea0 size=20 ---- */

undefined8 FUN_fffffffff0013ea0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2000000000000);
}


/* ---- FUN_fffffffff0013eb4 @ fffffffff0013eb4 size=20 ---- */

void FUN_fffffffff0013eb4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x2000000000000) = param_2;
  return;
}


/* ---- FUN_fffffffff0013ec8 @ fffffffff0013ec8 size=16 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0013ec8(undefined4 param_1)

{
  _DAT_2000000000398 = param_1;
  return;
}


/* ---- FUN_fffffffff0013ed8 @ fffffffff0013ed8 size=24 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_fffffffff0013ed8(void)

{
  return _DAT_2000000000028 >> 0x26 & 0xf;
}


/* ---- FUN_fffffffff0013ef0 @ fffffffff0013ef0 size=108 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0013ef0(long param_1,undefined4 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_2000000000028;
  if (param_3 == 0xff0) {
    param_3 = (long)_DAT_2000000000070;
  }
  _DAT_2000000000098 = (uint)param_3 | 0x2008;
  *(undefined4 *)(param_1 + 0x1000000000000) = param_2;
  _DAT_2000000000530 = (uint)((ulong)uVar1 >> 0x3f);
  _DAT_2000000000470 = 0;
  return;
}


/* ---- FUN_fffffffff0013f5c @ fffffffff0013f5c size=92 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff0013f5c(long param_1,uint param_2)

{
  _DAT_2000000000098 = param_2 | 0x2008;
  _DAT_2000000000530 = (uint)((ulong)_DAT_2000000000028 >> 0x3f);
  _DAT_2000000000470 = 0;
  return *(undefined8 *)(param_1 + 0x1000000000000);
}


/* ---- sub_13fb8 @ fffffffff0013fb8 size=72 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_13fb8(long param_1,undefined4 param_2)

{
  _DAT_2000000000098 = _DAT_2000000000070 | 0x2001;
  *(undefined4 *)(param_1 + 0x1000000000000) = param_2;
  _DAT_2000000000470 = 0;
  _DAT_2000000000530 = 0;
  return;
}


/* ---- sub_14000 @ fffffffff0014000 size=72 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_14000(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_2000000000028;
  if (param_4 == 0xff0) {
    param_4 = (long)_DAT_2000000000070;
  }
  _DAT_2000000000098 = (uint)param_4 | 0x2008;
  *(int *)(param_1 + 0x1000000000000) = (int)param_2;
  if (param_3 != 0) {
    *(int *)(param_1 + 0x1000000000004) = (int)((ulong)param_2 >> 0x20);
  }
  _DAT_2000000000530 = (uint)((ulong)uVar1 >> 0x3f);
  return;
}


/* ---- FUN_fffffffff0014048 @ fffffffff0014048 size=104 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0014048(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_2000000000028;
  _DAT_2000000000098 = _DAT_2000000000070 | 0x2001;
  *(int *)(param_1 + 0x1000000000000) = (int)param_2;
  if (param_3 != 0) {
    *(int *)(param_1 + 0x1000000000004) = (int)((ulong)param_2 >> 0x20);
  }
  _DAT_2000000000530 = (uint)((ulong)uVar1 >> 0x3f);
  return;
}


/* ---- sub_140b0 @ fffffffff00140b0 size=72 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_140b0(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = (ulong)_DAT_2000000000028 >> 0x3f;
  _DAT_2000000000098 = _DAT_2000000000070 | 0x2801;
  *(int *)(param_1 + 0x1000000000000) = (int)param_2;
  if (param_3 != 0) {
    *(int *)(param_1 + 0x1000000000004) = (int)((ulong)param_2 >> 0x20);
  }
  _DAT_2000000000530 = (uint)uVar1;
  return;
}


/* ---- sub_140f8 @ fffffffff00140f8 size=204 ---- */

/* WARNING: Removing unreachable block (ram,0xfffffffff0014160) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0014168) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_140f8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_2000000000028;
  _DAT_2000000000098 = _DAT_2000000000070 | 0x2001;
  *(int *)(param_1 + 0x1000000000000) = (int)param_2;
  if (param_3 != 0) {
    *(int *)(param_1 + 0x1000000000004) = (int)((ulong)param_2 >> 0x20);
  }
  _DAT_2000000000530 = (uint)((ulong)uVar1 >> 0x3f);
  _DAT_100000000c25c = 0;
  _DAT_100000000c360 = 0;
  return;
}


/* ---- FUN_fffffffff00141c4 @ fffffffff00141c4 size=108 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff00141c4(long param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)_DAT_2000000000028 >> 0x20);
  _DAT_2000000000098 = _DAT_2000000000070 | 0x2001;
  *(undefined4 *)(param_1 + 0x1000000000000) = param_2;
  _DAT_2000000000398 = uVar1 >> 6 & 0xf;
  _DAT_2000000000530 = uVar1 >> 0x1f;
  return;
}


/* ---- sub_14230 @ fffffffff0014230 size=72 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_14230(long param_1)

{
  _DAT_2000000000098 = _DAT_2000000000070 | 0x2001;
  _DAT_2000000000470 = 0;
  _DAT_2000000000530 = 0;
  return *(undefined4 *)(param_1 + 0x1000000000000);
}


/* ---- FUN_fffffffff0014278 @ fffffffff0014278 size=72 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_fffffffff0014278(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  
  if (param_3 == 0xff0) {
    param_3 = (long)_DAT_2000000000070;
  }
  _DAT_2000000000098 = (uint)param_3 | 0x2008;
  uVar1 = (ulong)*(uint *)(param_1 + 0x1000000000000);
  if (param_2 != 0) {
    uVar1 = CONCAT44(*(undefined4 *)(param_1 + 0x1000000000004),*(uint *)(param_1 + 0x1000000000000)
                    );
  }
  _DAT_2000000000530 = (uint)((ulong)_DAT_2000000000028 >> 0x3f);
  return uVar1;
}


/* ---- FUN_fffffffff00142c0 @ fffffffff00142c0 size=60 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_fffffffff00142c0(long param_1,long param_2)

{
  ulong uVar1;
  
  _DAT_2000000000098 = _DAT_2000000000070 | 0x2001;
  uVar1 = (ulong)*(uint *)(param_1 + 0x1000000000000);
  if (param_2 != 0) {
    uVar1 = CONCAT44(*(undefined4 *)(param_1 + 0x1000000000004),*(uint *)(param_1 + 0x1000000000000)
                    );
  }
  _DAT_2000000000530 = (uint)((ulong)_DAT_2000000000028 >> 0x3f);
  return uVar1;
}


/* ---- sub_142fc @ fffffffff00142fc size=112 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong sub_142fc(long param_1,long param_2)

{
  ulong uVar1;
  
  _DAT_2000000000098 = _DAT_2000000000070 | 0x2801;
  uVar1 = (ulong)*(uint *)(param_1 + 0x1000000000000);
  if (param_2 != 0) {
    uVar1 = CONCAT44(*(undefined4 *)(param_1 + 0x1000000000004),*(uint *)(param_1 + 0x1000000000000)
                    );
  }
  _DAT_2000000000530 = (uint)((ulong)_DAT_2000000000028 >> 0x3f);
  return uVar1;
}


/* ---- sub_1436c @ fffffffff001436c size=208 ---- */

/* WARNING: Removing unreachable block (ram,0xfffffffff00143d4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00143dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong sub_1436c(long param_1,long param_2)

{
  ulong uVar1;
  
  _DAT_2000000000098 = _DAT_2000000000070 | 0x2001;
  uVar1 = (ulong)*(uint *)(param_1 + 0x1000000000000);
  if (param_2 != 0) {
    uVar1 = CONCAT44(*(undefined4 *)(param_1 + 0x1000000000004),*(uint *)(param_1 + 0x1000000000000)
                    );
  }
  _DAT_2000000000530 = (uint)((ulong)_DAT_2000000000028 >> 0x3f);
  _DAT_100000000c25c = 0;
  _DAT_100000000c360 = 0;
  return uVar1;
}


/* ---- FUN_fffffffff001443c @ fffffffff001443c size=108 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_fffffffff001443c(long param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)_DAT_2000000000028 >> 0x20);
  _DAT_2000000000098 = _DAT_2000000000070 | 0x2001;
  _DAT_2000000000398 = uVar1 >> 6 & 0xf;
  _DAT_2000000000530 = uVar1 >> 0x1f;
  return *(undefined4 *)(param_1 + 0x1000000000000);
}


/* ---- FUN_fffffffff00144a8 @ fffffffff00144a8 size=28 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff00144a8(ulong param_1)

{
  _DAT_2000000000120 = (int)(param_1 & 3);
  _DAT_20000000000d8 = (int)((param_1 & 3) << 7);
  return;
}


/* ---- FUN_fffffffff00144c4 @ fffffffff00144c4 size=36 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_fffffffff00144c4(void)

{
  return _DAT_2000000000028 >> 0x35 & 0xc | _DAT_2000000000028 >> 0x20 & 3;
}


/* ---- FUN_fffffffff00144e8 @ fffffffff00144e8 size=132 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff00144e8(ulong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = _DAT_2000000000028;
  _DAT_2000000000120 = (uint)param_1 & 3;
  uVar2 = param_1 >> 4 & 3;
  if (uVar2 == 0) {
    *(char *)param_2 = (char)param_3;
  }
  else if (uVar2 == 1) {
    *(short *)param_2 = (short)param_3;
  }
  else if (uVar2 == 2) {
    *(int *)param_2 = (int)param_3;
  }
  else {
    *param_2 = param_3;
  }
  if (param_1 >> 0x10 != 0) {
    do {
    } while (_DAT_2000000000090 != 0);
  }
  _DAT_2000000000530 = (uint)((ulong)uVar1 >> 0x3f);
  return;
}


/* ---- FUN_fffffffff001456c @ fffffffff001456c size=112 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff001456c(uint param_1,long *param_2)

{
  long lVar1;
  
  _DAT_20000000000d8 = param_1 & 0xc0;
  param_1 = param_1 & 3;
  if (param_1 == 0) {
    lVar1 = (long)(char)*param_2;
  }
  else if (param_1 == 1) {
    lVar1 = (long)(short)*param_2;
  }
  else if (param_1 == 2) {
    lVar1 = (long)(int)*param_2;
  }
  else {
    lVar1 = *param_2;
  }
  _DAT_2000000000530 = (uint)((ulong)_DAT_2000000000028 >> 0x3f);
  return lVar1;
}


/* ---- FUN_fffffffff00145e0 @ fffffffff00145e0 size=20 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff00145e0(void)

{
  _DAT_2000000000530 = 0;
  wfi();
  return;
}


/* ---- FUN_fffffffff00145f4 @ fffffffff00145f4 size=48 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff00145f4(uint param_1,undefined4 *param_2,undefined4 *param_3,long param_4)

{
  long lVar1;
  
  _DAT_2000000000120 = param_1 & 3;
  lVar1 = 0;
  do {
    *param_2 = *param_3;
    param_3 = param_3 + 1;
    param_2 = param_2 + 1;
    lVar1 = lVar1 + 1;
  } while (lVar1 < param_4);
  return;
}


/* ---- FUN_fffffffff0014624 @ fffffffff0014624 size=96 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0014624(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = _DAT_2000000000040;
  *param_1 = _DAT_2000000000040;
  uVar2 = (ulong)(uVar1 >> 0x10) & 0x3fff;
  if ((uVar2 == 0x3fff) && ((uVar1 >> 8 & 0xff) == 0x10)) {
    _DAT_2000000000150 = 0;
    _DAT_2000000000060 = 0;
  }
  else {
    do {
      param_1 = param_1 + 1;
      *param_1 = _DAT_2000000000040;
      uVar2 = uVar2 - 1;
    } while (-1 < (long)uVar2);
  }
  return;
}


/* ---- FUN_fffffffff0014684 @ fffffffff0014684 size=16 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_fffffffff0014684(void)

{
  return _DAT_2000000000040;
}


/* ---- FUN_fffffffff0014694 @ fffffffff0014694 size=196 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff0014694
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
               long param_6)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_2000000000080;
  _DAT_20000000000d8 = (undefined4)param_1;
  _DAT_20000000000e8 = param_3;
  _DAT_20000000000f8 = param_4;
  _DAT_2000000000380 = 0x600000001;
  _DAT_2000000000108 = 1;
  if (param_2 == 1) {
    while( true ) {
      do {
      } while (_DAT_2000000000078 != 0);
      lVar2 = param_6;
      if (_DAT_2000000000080 == param_5) break;
      do {
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
  }
  else {
    if (param_2 == 2) {
      do {
      } while (_DAT_2000000000320 != 0);
      return param_1;
    }
    if (param_2 == 3) {
      do {
      } while (_DAT_2000000000078 != 0);
      return param_1;
    }
    do {
    } while (_DAT_2000000000078 != 0);
  }
  _DAT_2000000000108 = 1;
  FUN_fffffffff0013ea0(0xc894,_DAT_2000000000080,1,_DAT_2000000000070);
  return lVar1;
}


/* ---- FUN_fffffffff0014758 @ fffffffff0014758 size=196 ---- */

/* WARNING: Removing unreachable block (ram,0xfffffffff00147ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff0014758(long param_1)

{
  _DAT_2000000000098 = _DAT_2000000000070 | 0x2001;
  _DAT_10000000320e0 = _DAT_20000000000f8 + param_1;
  _DAT_100000002a404 = 0;
  _DAT_2000000000530 = (uint)((ulong)_DAT_2000000000028 >> 0x3f);
  return param_1;
}


/* ---- FUN_fffffffff001481c @ fffffffff001481c size=208 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff001481c(undefined4 param_1,undefined4 param_2)

{
  long lVar1;
  
  _DAT_2000000000098 = _DAT_2000000000070 | 0x2001;
  do {
    lVar1 = 0x100;
    do {
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  } while (_DAT_100000000c2d4 != 0);
  _DAT_100000000c0dc = param_1;
  _DAT_100000000c2dc = param_2;
  _DAT_2000000000000 = 0;
  _DAT_100000000c0e4 = 0xb1;
  _DAT_100000000c2d4 = 0x4000000;
  _DAT_2000000000530 = (uint)((ulong)_DAT_2000000000028 >> 0x3f);
  return;
}


/* ---- sub_148ec @ fffffffff00148ec size=144 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_148ec(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  do {
  } while (_DAT_2000000000030 != 0);
  _DAT_2000000000098 = _DAT_2000000000070 | 0x2001;
  _DAT_20000000000d0 = _DAT_2000000000070 | 1;
  _DAT_1000000030200 = (int)param_3;
  _DAT_1000000030204 = (int)((ulong)param_3 >> 0x20);
  _DAT_1000000030208 = (int)param_4;
  _DAT_100000003020c = (int)((ulong)param_4 >> 0x20);
  _DAT_10000000301e0 = param_1;
  _DAT_1000000030210 = param_2;
  return;
}


/* ---- FUN_fffffffff0014988 @ fffffffff0014988 size=16 ---- */

void FUN_fffffffff0014988(undefined8 param_1)

{
  FUN_fffffffff00149a8(PTR_DAT_fffffffff0110f68,param_1);
  return;
}


/* ---- FUN_fffffffff0014998 @ fffffffff0014998 size=16 ---- */

void FUN_fffffffff0014998(undefined8 param_1)

{
  FUN_fffffffff001546c(PTR_DAT_fffffffff0110f68,param_1);
  return;
}


/* ---- FUN_fffffffff00149a8 @ fffffffff00149a8 size=2048 ---- */

undefined ** FUN_fffffffff00149a8(undefined4 *param_1,ulong param_2)

{
  int iVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  int *piVar20;
  undefined *puVar21;
  
  uVar4 = param_2 + 0x17;
  if (uVar4 < 0x2f) {
    if (0x20 < param_2) {
LAB_fffffffff0014c50:
      *param_1 = 0xc;
      return (undefined **)0x0;
    }
    FUN_fffffffff00152d0();
    uVar5 = 0x20;
    lVar14 = 0x50;
    iVar12 = 4;
LAB_fffffffff0014a00:
    puVar3 = *(undefined **)((long)&DAT_fffffffff0110008 + lVar14);
    if (puVar3 != &DAT_fffffffff010fff0 + lVar14) {
LAB_fffffffff0014a18:
      lVar11 = *(long *)(puVar3 + 0x18);
      lVar14 = *(long *)(puVar3 + 0x10);
      uVar15 = *(ulong *)(puVar3 + 8) & 0xfffffffffffffffc;
LAB_fffffffff0014a28:
      uVar4 = *(ulong *)(puVar3 + uVar15 + 8);
      *(long *)(lVar14 + 0x18) = lVar11;
      *(long *)(lVar11 + 0x10) = lVar14;
      *(ulong *)(puVar3 + uVar15 + 8) = uVar4 | 1;
      FUN_fffffffff00152d4(param_1);
      return (undefined **)(puVar3 + 0x10);
    }
    puVar3 = *(undefined **)((long)&PTR_DAT_fffffffff0110018 + lVar14);
    uVar4 = DAT_fffffffff0110008;
    ppuVar2 = (undefined **)PTR_PTR_DAT_fffffffff0110020;
    uVar10 = iVar12 + 2;
    if ((undefined *)((long)&DAT_fffffffff0110000 + lVar14) != puVar3) goto LAB_fffffffff0014a18;
  }
  else {
    uVar5 = uVar4 & 0xfffffffffffffff0;
    if ((0x7fffffff < uVar5) || (uVar5 < param_2)) goto LAB_fffffffff0014c50;
    FUN_fffffffff00152d0();
    if (uVar5 < 0x1f8) {
      iVar12 = (int)(uVar5 >> 3);
      lVar14 = (long)((iVar12 + 1) * 2) << 3;
      goto LAB_fffffffff0014a00;
    }
    uVar15 = uVar4 >> 9;
    if (uVar15 == 0) {
      lVar14 = 0x400;
      uVar9 = 0x40;
      uVar6 = 0x3f;
    }
    else if (uVar15 < 5) {
      iVar12 = (int)(uVar4 >> 6);
      uVar9 = iVar12 + 0x39;
      uVar6 = iVar12 + 0x38;
      lVar14 = (long)(int)(uVar9 * 2) << 3;
    }
    else if (uVar15 < 0x15) {
      uVar9 = (int)uVar15 + 0x5c;
      uVar6 = (int)uVar15 + 0x5b;
      lVar14 = (long)(int)(uVar9 * 2) << 3;
    }
    else if (uVar15 < 0x55) {
      iVar12 = (int)(uVar4 >> 0xc);
      uVar9 = iVar12 + 0x6f;
      uVar6 = iVar12 + 0x6e;
      lVar14 = (long)(int)(uVar9 * 2) << 3;
    }
    else if (uVar15 < 0x155) {
      iVar12 = (int)(uVar4 >> 0xf);
      uVar9 = iVar12 + 0x78;
      uVar6 = iVar12 + 0x77;
      lVar14 = (long)(int)(uVar9 * 2) << 3;
    }
    else if (uVar15 < 0x555) {
      iVar12 = (int)(uVar4 >> 0x12);
      uVar9 = iVar12 + 0x7d;
      uVar6 = iVar12 + 0x7c;
      lVar14 = (long)(int)(uVar9 * 2) << 3;
    }
    else {
      lVar14 = 0x7f0;
      uVar9 = 0x7f;
      uVar6 = 0x7e;
    }
    for (puVar3 = *(undefined **)((long)&DAT_fffffffff0110008 + lVar14);
        uVar4 = DAT_fffffffff0110008, ppuVar2 = (undefined **)PTR_PTR_DAT_fffffffff0110020,
        uVar10 = uVar9, &DAT_fffffffff010fff0 + lVar14 != puVar3;
        puVar3 = *(undefined **)(puVar3 + 0x18)) {
      uVar15 = *(ulong *)(puVar3 + 8) & 0xfffffffffffffffc;
      uVar10 = uVar6;
      if (0x1f < (long)(uVar15 - uVar5)) break;
      if (-1 < (long)(uVar15 - uVar5)) {
        lVar11 = *(long *)(puVar3 + 0x18);
        lVar14 = *(long *)(puVar3 + 0x10);
        goto LAB_fffffffff0014a28;
      }
    }
  }
  DAT_fffffffff0110008 = uVar4;
  if (ppuVar2 == &PTR_DAT_fffffffff0110010) {
    uVar15 = 1L << ((long)((int)uVar10 >> 2) & 0x3fU);
    PTR_PTR_DAT_fffffffff0110020 = (undefined *)&PTR_DAT_fffffffff0110010;
    if (uVar15 <= uVar4) goto LAB_fffffffff0014d28;
  }
  else {
    puVar3 = ppuVar2[1];
    uVar16 = (ulong)puVar3 & 0xfffffffffffffffc;
    uVar15 = uVar16 - uVar5;
    if (0x1f < (long)uVar15) {
      ppuVar2[1] = (undefined *)(uVar5 | 1);
      puVar3 = (undefined *)((long)ppuVar2 + uVar5);
      PTR_PTR_DAT_fffffffff0110020 = puVar3;
      PTR_PTR_DAT_fffffffff0110028 = puVar3;
      *(undefined ***)(puVar3 + 0x18) = &PTR_DAT_fffffffff0110010;
      *(undefined ***)(puVar3 + 0x10) = &PTR_DAT_fffffffff0110010;
      *(ulong *)(puVar3 + 8) = uVar15 | 1;
      *(ulong *)((long)ppuVar2 + uVar16) = uVar15;
      FUN_fffffffff00152d4(param_1);
      return ppuVar2 + 2;
    }
    PTR_PTR_DAT_fffffffff0110028 = (undefined *)&PTR_DAT_fffffffff0110010;
    PTR_PTR_DAT_fffffffff0110020 = (undefined *)&PTR_DAT_fffffffff0110010;
    if (-1 < (long)uVar15) {
      *(ulong *)((long)ppuVar2 + uVar16 + 8) = *(ulong *)((long)ppuVar2 + uVar16 + 8) | 1;
      FUN_fffffffff00152d4(param_1);
      return ppuVar2 + 2;
    }
    if (uVar16 < 0x200) {
      iVar12 = (int)((ulong)puVar3 >> 3);
      lVar14 = (long)((iVar12 + 1) * 2);
      puVar3 = (undefined *)(&DAT_fffffffff0110000)[lVar14];
      uVar4 = 1L << ((long)(iVar12 >> 2) & 0x3fU) | uVar4;
      ppuVar2[3] = &DAT_fffffffff010fff0 + lVar14 * 8;
      ppuVar2[2] = puVar3;
      DAT_fffffffff0110008 = uVar4;
      (&DAT_fffffffff0110000)[lVar14] = ppuVar2;
      *(undefined ***)(puVar3 + 0x18) = ppuVar2;
    }
    else {
      uVar15 = (ulong)puVar3 >> 9;
      if (uVar15 < 5) {
        iVar1 = (int)((ulong)puVar3 >> 6);
        iVar12 = iVar1 + 0x38;
        lVar14 = (long)((iVar1 + 0x39) * 2) << 3;
      }
      else if (uVar15 < 0x15) {
        iVar12 = (int)uVar15 + 0x5b;
        lVar14 = (long)(((int)uVar15 + 0x5c) * 2) << 3;
      }
      else if (uVar15 < 0x55) {
        iVar1 = (int)((ulong)puVar3 >> 0xc);
        iVar12 = iVar1 + 0x6e;
        lVar14 = (long)((iVar1 + 0x6f) * 2) << 3;
      }
      else if (uVar15 < 0x155) {
        iVar1 = (int)((ulong)puVar3 >> 0xf);
        iVar12 = iVar1 + 0x77;
        lVar14 = (long)((iVar1 + 0x78) * 2) << 3;
      }
      else if (uVar15 < 0x555) {
        iVar1 = (int)((ulong)puVar3 >> 0x12);
        iVar12 = iVar1 + 0x7c;
        lVar14 = (long)((iVar1 + 0x7d) * 2) << 3;
      }
      else {
        lVar14 = 0x7f0;
        iVar12 = 0x7e;
      }
      puVar13 = *(undefined **)((long)&DAT_fffffffff0110000 + lVar14);
      puVar3 = &DAT_fffffffff010fff0 + lVar14;
      if (puVar3 == puVar13) {
        DAT_fffffffff0110008 = 1L << ((long)(iVar12 >> 2) & 0x3fU) | uVar4;
      }
      else {
        do {
          if ((*(ulong *)(puVar13 + 8) & 0xfffffffffffffffc) <= uVar16) break;
          puVar13 = *(undefined **)(puVar13 + 0x10);
        } while (puVar3 != puVar13);
        puVar3 = *(undefined **)(puVar13 + 0x18);
      }
      uVar4 = DAT_fffffffff0110008;
      ppuVar2[3] = puVar3;
      ppuVar2[2] = puVar13;
      *(undefined ***)(puVar3 + 0x10) = ppuVar2;
      *(undefined ***)(puVar13 + 0x18) = ppuVar2;
    }
    uVar15 = 1L << ((long)((int)uVar10 >> 2) & 0x3fU);
    if (uVar15 <= uVar4) {
LAB_fffffffff0014d28:
      if ((uVar15 & uVar4) == 0) {
        uVar10 = uVar10 & 0xfffffffc;
        do {
          uVar15 = uVar15 << 1;
          uVar10 = uVar10 + 4;
        } while ((uVar15 & uVar4) == 0);
      }
      do {
        lVar14 = (long)(int)((uVar10 + 1) * 2);
        puVar8 = (undefined8 *)(&DAT_fffffffff010fff0 + lVar14 * 8);
        puVar17 = (undefined8 *)(&DAT_fffffffff0110008)[lVar14];
        uVar9 = uVar10;
        while( true ) {
          while (puVar18 = puVar17, puVar8 != puVar18) {
            puVar17 = (undefined8 *)puVar18[3];
            uVar16 = puVar18[1] & 0xfffffffffffffffc;
            uVar4 = uVar16 - uVar5;
            if (0x1f < (long)uVar4) {
              lVar14 = puVar18[2];
              puVar18[1] = uVar5 | 1;
              *(undefined8 **)(lVar14 + 0x18) = puVar17;
              puVar17[2] = lVar14;
              puVar3 = (undefined *)((long)puVar18 + uVar5);
              PTR_PTR_DAT_fffffffff0110020 = puVar3;
              PTR_PTR_DAT_fffffffff0110028 = puVar3;
              *(undefined ***)(puVar3 + 0x18) = &PTR_DAT_fffffffff0110010;
              *(undefined ***)(puVar3 + 0x10) = &PTR_DAT_fffffffff0110010;
              *(ulong *)(puVar3 + 8) = uVar4 | 1;
              *(ulong *)((long)puVar18 + uVar16) = uVar4;
              FUN_fffffffff00152d4(param_1);
              return (undefined **)(puVar18 + 2);
            }
            if (-1 < (long)uVar4) {
              lVar14 = puVar18[2];
              *(ulong *)((long)puVar18 + uVar16 + 8) = *(ulong *)((long)puVar18 + uVar16 + 8) | 1;
              *(undefined8 **)(lVar14 + 0x18) = puVar17;
              puVar17[2] = lVar14;
              FUN_fffffffff00152d4(param_1);
              return (undefined **)(puVar18 + 2);
            }
          }
          uVar9 = uVar9 + 1;
          puVar17 = (undefined8 *)(&DAT_fffffffff010fff0 + lVar14 * 8);
          if ((uVar9 & 3) == 0) break;
          puVar17 = puVar8 + 5;
          puVar8 = puVar8 + 2;
          puVar17 = (undefined8 *)*puVar17;
        }
        do {
          puVar8 = puVar17 + -2;
          if ((uVar10 & 3) == 0) {
            DAT_fffffffff0110008 = ~uVar15 & DAT_fffffffff0110008;
            break;
          }
          puVar18 = (undefined8 *)*puVar17;
          uVar10 = uVar10 - 1;
          puVar17 = puVar8;
        } while (puVar18 == puVar8);
        uVar15 = uVar15 << 1;
        if ((DAT_fffffffff0110008 < uVar15) || (uVar10 = uVar9, uVar15 == 0)) break;
        for (; (uVar15 & DAT_fffffffff0110008) == 0; uVar15 = uVar15 << 1) {
          uVar10 = uVar10 + 4;
        }
      } while( true );
    }
  }
  puVar3 = PTR_DAT_fffffffff0110010;
  uVar4 = *(ulong *)(PTR_DAT_fffffffff0110010 + 8) & 0xfffffffffffffffc;
  if ((uVar5 <= uVar4) &&
     (uVar15 = uVar4 - uVar5, puVar13 = PTR_DAT_fffffffff0110010, 0x1f < (long)uVar15))
  goto LAB_fffffffff0014df4;
  puVar21 = PTR_DAT_fffffffff0110010 + uVar4;
  lVar14 = uVar5 + *(long *)(gp + -0x1f8);
  if (DAT_fffffffff0110f58 == (undefined *)0xffffffffffffffff) {
    puVar19 = (undefined *)(lVar14 + 0x20);
  }
  else {
    puVar19 = (undefined *)(lVar14 + 0x101fU & 0xfffffffffffff000);
  }
  puVar7 = (undefined *)FUN_fffffffff00152d8(param_1,puVar19);
  if (puVar7 == (undefined *)0xffffffffffffffff) {
LAB_fffffffff0014f84:
    uVar16 = *(ulong *)(PTR_DAT_fffffffff0110010 + 8);
    puVar13 = PTR_DAT_fffffffff0110010;
  }
  else {
    if (puVar7 < puVar21) {
      if ((undefined8 *)puVar3 != &DAT_fffffffff0110000) goto LAB_fffffffff0014f84;
      iVar12 = *(int *)(gp + -0x230) + (int)puVar19;
      *(int *)(gp + -0x230) = iVar12;
LAB_fffffffff0014b78:
      piVar20 = (int *)(gp + -0x230);
      puVar13 = puVar7;
      if (DAT_fffffffff0110f58 != (undefined *)0xffffffffffffffff) {
        *piVar20 = ((int)puVar7 - (int)puVar21) + iVar12;
        puVar13 = DAT_fffffffff0110f58;
      }
      DAT_fffffffff0110f58 = puVar13;
      uVar15 = (ulong)puVar7 & 0xf;
      if (uVar15 == 0) {
        uVar16 = -(long)(puVar7 + (long)puVar19) & 0xfff;
        lVar14 = FUN_fffffffff00152d8(param_1,uVar16);
        iVar12 = 0;
        puVar13 = puVar7;
        if (lVar14 != -1) goto LAB_fffffffff0014bd0;
      }
      else {
        puVar7 = puVar7 + (0x10 - uVar15);
        uVar16 = (0x1010 - uVar15) - (long)(puVar7 + (long)puVar19) & 0xfff;
        lVar14 = FUN_fffffffff00152d8(param_1,uVar16);
        if (lVar14 == -1) {
          puVar19 = puVar7 + (long)puVar19 + ((uVar15 - 0x10) - (long)puVar7);
          iVar12 = 0;
          puVar13 = puVar7;
        }
        else {
LAB_fffffffff0014bd0:
          iVar12 = (int)uVar16;
          puVar19 = (undefined *)((lVar14 - (long)puVar7) + uVar16);
          puVar13 = puVar7;
        }
      }
      uVar16 = (ulong)puVar19 | 1;
      uVar15 = (ulong)(*piVar20 + iVar12);
      PTR_DAT_fffffffff0110010 = puVar13;
      *piVar20 = *piVar20 + iVar12;
      *(ulong *)(puVar13 + 8) = uVar16;
      if ((undefined8 *)puVar3 != &DAT_fffffffff0110000) {
        if (uVar4 < 0x20) {
          *(undefined8 *)(puVar13 + 8) = 1;
          goto LAB_fffffffff0014fa0;
        }
        uVar4 = uVar4 - 0x18 & 0xfffffffffffffff0;
        *(ulong *)(puVar3 + 8) = *(ulong *)(puVar3 + 8) & 1 | uVar4;
        *(undefined8 *)(puVar3 + uVar4 + 8) = 9;
        *(undefined8 *)(puVar3 + uVar4 + 0x10) = 9;
        if (uVar4 < 0x20) {
          uVar16 = *(ulong *)(puVar13 + 8);
        }
        else {
          FUN_fffffffff001546c(param_1,puVar3 + 0x10);
          uVar15 = (ulong)*piVar20;
          uVar16 = *(ulong *)(PTR_DAT_fffffffff0110010 + 8);
          puVar13 = PTR_DAT_fffffffff0110010;
        }
      }
    }
    else {
      iVar12 = *(int *)(gp + -0x230) + (int)puVar19;
      uVar15 = (ulong)iVar12;
      *(int *)(gp + -0x230) = iVar12;
      puVar13 = PTR_DAT_fffffffff0110010;
      if ((puVar21 != puVar7) || (((ulong)puVar21 & 0xfff) != 0)) goto LAB_fffffffff0014b78;
      uVar16 = (ulong)(puVar19 + uVar4) | 1;
      *(ulong *)(PTR_DAT_fffffffff0110010 + 8) = uVar16;
    }
    if (*(ulong *)(gp + -0x200) < uVar15) {
      *(ulong *)(gp + -0x200) = uVar15;
    }
    if (*(ulong *)(gp + -0x208) < uVar15) {
      *(ulong *)(gp + -0x208) = uVar15;
    }
  }
  uVar15 = (uVar16 & 0xfffffffffffffffc) - uVar5;
  if ((uVar5 <= (uVar16 & 0xfffffffffffffffc)) && (0x1f < (long)uVar15)) {
LAB_fffffffff0014df4:
    *(ulong *)(puVar13 + 8) = uVar5 | 1;
    PTR_DAT_fffffffff0110010 = puVar13 + uVar5;
    *(ulong *)(PTR_DAT_fffffffff0110010 + 8) = uVar15 | 1;
    FUN_fffffffff00152d4(param_1);
    return (undefined **)(puVar13 + 0x10);
  }
LAB_fffffffff0014fa0:
  FUN_fffffffff00152d4(param_1);
  return (undefined **)0x0;
}


/* ---- FUN_fffffffff00151a8 @ fffffffff00151a8 size=296 ---- */

void FUN_fffffffff00151a8(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar13 = (undefined8 *)((long)param_1 + param_3);
  if (((((ulong)param_1 ^ (ulong)param_2) & 7) == 0) && (7 < param_3)) {
    uVar6 = (ulong)param_1 & 7;
    while (puVar2 = param_2, puVar5 = param_1, uVar6 != 0) {
      puVar5 = (undefined8 *)((long)param_1 + 1);
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      puVar2 = (undefined8 *)((long)param_2 + 1);
      if (((ulong)puVar5 & 7) == 0) break;
      *(undefined1 *)((long)param_1 + 1) = *(undefined1 *)puVar2;
      param_2 = (undefined8 *)((long)param_2 + 2);
      uVar6 = (ulong)((long)param_1 + 2) & 7;
      param_1 = (undefined8 *)((long)param_1 + 2);
    }
    puVar3 = (undefined8 *)((ulong)puVar13 & 0xfffffffffffffff8);
    param_2 = puVar2;
    for (; 0x40 < (long)puVar3 - (long)puVar5; puVar5 = puVar5 + 9) {
      uVar10 = param_2[7];
      uVar17 = *param_2;
      uVar16 = param_2[2];
      uVar15 = param_2[3];
      uVar14 = param_2[4];
      uVar11 = param_2[5];
      uVar12 = param_2[6];
      puVar5[1] = param_2[1];
      uVar4 = param_2[8];
      *puVar5 = uVar17;
      puVar5[2] = uVar16;
      puVar5[3] = uVar15;
      puVar5[4] = uVar14;
      puVar5[5] = uVar11;
      puVar5[6] = uVar12;
      puVar5[7] = uVar10;
      puVar5[8] = uVar4;
      param_2 = param_2 + 9;
    }
    puVar2 = param_2;
    puVar7 = puVar5;
    if (puVar5 < puVar3) {
      do {
        uVar11 = *puVar2;
        puVar8 = puVar7 + 1;
        puVar2 = puVar2 + 1;
        *puVar7 = uVar11;
        puVar7 = puVar8;
      } while (puVar8 < puVar3);
      lVar9 = ((ulong)((long)puVar3 + (-1 - (long)puVar5)) & 0xfffffffffffffff8) + 8;
      puVar5 = (undefined8 *)((long)puVar5 + lVar9);
      param_2 = (undefined8 *)((long)param_2 + lVar9);
    }
    param_1 = puVar5;
    if (puVar5 < puVar13) {
LAB_fffffffff0015228:
      do {
        uVar1 = *(undefined1 *)param_2;
        puVar5 = (undefined8 *)((long)param_1 + 1);
        param_2 = (undefined8 *)((long)param_2 + 1);
        *(undefined1 *)param_1 = uVar1;
        param_1 = puVar5;
      } while (puVar5 < puVar13);
      return;
    }
  }
  else if (param_1 < puVar13) goto LAB_fffffffff0015228;
  return;
}


/* ---- FUN_fffffffff00152d0 @ fffffffff00152d0 size=4 ---- */

void FUN_fffffffff00152d0(void)

{
  return;
}


/* ---- FUN_fffffffff00152d4 @ fffffffff00152d4 size=4 ---- */

void FUN_fffffffff00152d4(void)

{
  return;
}


/* ---- FUN_fffffffff00152d8 @ fffffffff00152d8 size=92 ---- */

void FUN_fffffffff00152d8(int *param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined4 *)(gp + -0x1f0) = 0;
  lVar1 = FUN_fffffffff001594c(param_2);
  if ((lVar1 == -1) && (*(int *)(gp + -0x1f0) != 0)) {
    *param_1 = *(int *)(gp + -0x1f0);
    return;
  }
  return;
}


/* ---- FUN_fffffffff0015334 @ fffffffff0015334 size=312 ---- */

undefined8 FUN_fffffffff0015334(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  
  FUN_fffffffff00152d0();
  uVar4 = *(ulong *)(PTR_DAT_fffffffff0110010 + 8) & 0xfffffffffffffffc;
  lVar3 = ((0xfdf - param_2) + uVar4 >> 0xc) - 1;
  if (0xfff < lVar3 * 0x1000) {
    puVar5 = (undefined *)FUN_fffffffff00152d8(param_1,0);
    if (puVar5 == PTR_DAT_fffffffff0110010 + uVar4) {
      lVar6 = FUN_fffffffff00152d8(param_1,lVar3 * -0x1000);
      if (lVar6 != -1) {
        iVar1 = *(int *)(gp + -0x230);
        *(ulong *)(PTR_DAT_fffffffff0110010 + 8) = uVar4 + lVar3 * -0x1000 | 1;
        *(int *)(gp + -0x230) = iVar1 - (int)(lVar3 * 0x1000);
        FUN_fffffffff00152d4(param_1);
        return 1;
      }
      lVar3 = FUN_fffffffff00152d8(param_1,0);
      uVar2 = DAT_fffffffff0110f58;
      if (0x1f < lVar3 - (long)PTR_DAT_fffffffff0110010) {
        *(ulong *)(PTR_DAT_fffffffff0110010 + 8) = lVar3 - (long)PTR_DAT_fffffffff0110010 | 1;
        *(int *)(gp + -0x230) = (int)lVar3 - (int)uVar2;
      }
    }
  }
  FUN_fffffffff00152d4(param_1);
  return 0;
}


/* ---- FUN_fffffffff001546c @ fffffffff001546c size=812 ---- */

void FUN_fffffffff001546c(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined **ppuVar13;
  
  if (param_2 == 0) {
    return;
  }
  FUN_fffffffff00152d0();
  uVar3 = *(ulong *)(param_2 + -8);
  puVar11 = (undefined *)(param_2 + -0x10);
  uVar12 = uVar3 & 0xfffffffffffffffe;
  puVar6 = (ulong *)(puVar11 + uVar12);
  uVar8 = puVar6[1] & 0xfffffffffffffffc;
  if ((ulong *)PTR_DAT_fffffffff0110010 == puVar6) {
    uVar12 = uVar12 + uVar8;
    if ((uVar3 & 1) == 0) {
      puVar11 = puVar11 + -*(long *)(param_2 + -0x10);
      lVar9 = *(long *)(puVar11 + 0x18);
      lVar4 = *(long *)(puVar11 + 0x10);
      uVar12 = uVar12 + *(long *)(param_2 + -0x10);
      *(long *)(lVar4 + 0x18) = lVar9;
      *(long *)(lVar9 + 0x10) = lVar4;
    }
    uVar3 = DAT_fffffffff0110f60;
    *(ulong *)(puVar11 + 8) = uVar12 | 1;
    PTR_DAT_fffffffff0110010 = puVar11;
    if (uVar3 <= uVar12) {
      FUN_fffffffff0015334(param_1,*(undefined8 *)(gp + -0x1f8));
    }
    goto LAB_fffffffff0015550;
  }
  puVar6[1] = uVar8;
  if ((uVar3 & 1) == 0) {
    puVar11 = puVar11 + -*(long *)(param_2 + -0x10);
    ppuVar13 = *(undefined ***)(puVar11 + 0x10);
    uVar12 = uVar12 + *(long *)(param_2 + -0x10);
    uVar3 = *(ulong *)((long)puVar6 + uVar8 + 8) & 1;
    if (ppuVar13 == &PTR_DAT_fffffffff0110010) {
      if (uVar3 == 0) {
        uVar3 = puVar6[3];
        uVar7 = puVar6[2];
        uVar8 = uVar8 + uVar12;
        *(ulong *)(uVar7 + 0x18) = uVar3;
        *(ulong *)(uVar3 + 0x10) = uVar7;
        *(ulong *)(puVar11 + 8) = uVar8 | 1;
        *(ulong *)(puVar11 + uVar8) = uVar8;
        FUN_fffffffff00152d4(param_1);
        return;
      }
      *(ulong *)(puVar11 + 8) = uVar12 | 1;
      *puVar6 = uVar12;
      goto LAB_fffffffff0015550;
    }
    puVar2 = *(undefined **)(puVar11 + 0x18);
    ppuVar13[3] = puVar2;
    *(undefined ***)(puVar2 + 0x10) = ppuVar13;
    if (uVar3 == 0) goto LAB_fffffffff0015580;
    *(ulong *)(puVar11 + 8) = uVar12 | 1;
    *puVar6 = uVar12;
  }
  else if ((*(ulong *)((long)puVar6 + uVar8 + 8) & 1) == 0) {
LAB_fffffffff0015580:
    uVar12 = uVar12 + uVar8;
    ppuVar13 = (undefined **)puVar6[2];
    if (ppuVar13 == &PTR_DAT_fffffffff0110010) {
      PTR_PTR_DAT_fffffffff0110020 = puVar11;
      PTR_PTR_DAT_fffffffff0110028 = puVar11;
      *(undefined ***)(puVar11 + 0x18) = &PTR_DAT_fffffffff0110010;
      *(undefined ***)(puVar11 + 0x10) = &PTR_DAT_fffffffff0110010;
      *(ulong *)(puVar11 + 8) = uVar12 | 1;
      *(ulong *)(puVar11 + uVar12) = uVar12;
      goto LAB_fffffffff0015550;
    }
    puVar2 = (undefined *)puVar6[3];
    ppuVar13[3] = puVar2;
    *(undefined ***)(puVar2 + 0x10) = ppuVar13;
    *(ulong *)(puVar11 + 8) = uVar12 | 1;
    *(ulong *)(puVar11 + uVar12) = uVar12;
  }
  else {
    *(ulong *)(param_2 + -8) = uVar12 | 1;
    *puVar6 = uVar12;
  }
  if (0x1ff < uVar12) {
    uVar3 = uVar12 >> 9;
    if (uVar3 < 5) {
      iVar1 = (int)(uVar12 >> 6);
      iVar5 = iVar1 + 0x38;
      lVar4 = (long)((iVar1 + 0x39) * 2) << 3;
    }
    else if (uVar3 < 0x15) {
      iVar5 = (int)uVar3 + 0x5b;
      lVar4 = (long)(((int)uVar3 + 0x5c) * 2) << 3;
    }
    else if (uVar3 < 0x55) {
      iVar1 = (int)(uVar12 >> 0xc);
      iVar5 = iVar1 + 0x6e;
      lVar4 = (long)((iVar1 + 0x6f) * 2) << 3;
    }
    else if (uVar3 < 0x155) {
      iVar1 = (int)(uVar12 >> 0xf);
      iVar5 = iVar1 + 0x77;
      lVar4 = (long)((iVar1 + 0x78) * 2) << 3;
    }
    else if (uVar3 < 0x555) {
      iVar1 = (int)(uVar12 >> 0x12);
      iVar5 = iVar1 + 0x7c;
      lVar4 = (long)((iVar1 + 0x7d) * 2) << 3;
    }
    else {
      lVar4 = 0x7f0;
      iVar5 = 0x7e;
    }
    puVar10 = *(undefined **)((long)&DAT_fffffffff0110000 + lVar4);
    puVar2 = &DAT_fffffffff010fff0 + lVar4;
    if (puVar2 == puVar10) {
      DAT_fffffffff0110008 = 1L << ((long)(iVar5 >> 2) & 0x3fU) | DAT_fffffffff0110008;
    }
    else {
      do {
        if ((*(ulong *)(puVar10 + 8) & 0xfffffffffffffffc) <= uVar12) break;
        puVar10 = *(undefined **)(puVar10 + 0x10);
      } while (puVar2 != puVar10);
      puVar2 = *(undefined **)(puVar10 + 0x18);
    }
    *(undefined **)(puVar11 + 0x18) = puVar2;
    *(undefined **)(puVar11 + 0x10) = puVar10;
    *(undefined **)(puVar2 + 0x10) = puVar11;
    *(undefined **)(puVar10 + 0x18) = puVar11;
    FUN_fffffffff00152d4(param_1);
    return;
  }
  iVar5 = (int)(uVar12 >> 3);
  lVar9 = (long)((iVar5 + 1) * 2);
  lVar4 = (&DAT_fffffffff0110000)[lVar9];
  DAT_fffffffff0110008 = 1L << ((long)(iVar5 >> 2) & 0x3fU) | DAT_fffffffff0110008;
  *(undefined **)(puVar11 + 0x18) = &DAT_fffffffff010fff0 + lVar9 * 8;
  *(long *)(puVar11 + 0x10) = lVar4;
  (&DAT_fffffffff0110000)[lVar9] = puVar11;
  *(undefined **)(lVar4 + 0x18) = puVar11;
LAB_fffffffff0015550:
  FUN_fffffffff00152d4(param_1);
  return;
}


/* ---- FUN_fffffffff0015798 @ fffffffff0015798 size=148 ---- */

void FUN_fffffffff0015798(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  puVar1 = (undefined8 *)*param_2;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    if (puVar2 != (undefined8 *)0x0) {
      plVar3 = (long *)*puVar2;
      if (plVar3 != (long *)0x0) {
        if (*plVar3 != 0) {
          FUN_fffffffff0015798();
        }
        FUN_fffffffff001546c(param_1,plVar3);
      }
      FUN_fffffffff001546c(param_1,puVar2);
    }
    FUN_fffffffff001546c(param_1,puVar1);
  }
  FUN_fffffffff001546c(param_1,param_2);
  return;
}


/* ---- sub_1582c @ fffffffff001582c size=288 ---- */

void sub_1582c(undefined *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if (PTR_DAT_fffffffff0110f68 == param_1) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x78);
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      plVar2 = *(long **)(lVar3 + lVar4);
      if (*(long **)(lVar3 + lVar4) != (long *)0x0) {
        do {
          plVar1 = (long *)*plVar2;
          FUN_fffffffff001546c(param_1,plVar2);
          plVar2 = plVar1;
        } while (plVar1 != (long *)0x0);
        lVar3 = *(long *)(param_1 + 0x78);
      }
      lVar4 = lVar4 + 8;
    } while (lVar4 != 0x200);
    FUN_fffffffff001546c(param_1);
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_fffffffff001546c(param_1);
  }
  if (*(long *)(param_1 + 0x1f8) != 0) {
    plVar2 = (long *)*(long *)(param_1 + 0x1f8);
    while (plVar2 != (long *)(param_1 + 0x200)) {
      lVar3 = *plVar2;
      FUN_fffffffff001546c(param_1,plVar2);
      plVar2 = (long *)lVar3;
    }
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_fffffffff001546c(param_1);
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    (*(code *)(*(ulong *)(param_1 + 0x58) & 0xfffffffffffffffe))(param_1);
    plVar2 = *(long **)(param_1 + 0x520);
    if (plVar2 != (long *)0x0) {
      if (*plVar2 != 0) {
        FUN_fffffffff0015798(param_1);
      }
      FUN_fffffffff001546c(param_1,plVar2);
      return;
    }
  }
  return;
}


/* ---- FUN_fffffffff001594c @ fffffffff001594c size=120 ---- */

long FUN_fffffffff001594c(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(gp + -0x1e8);
  if (lVar2 == 0) {
    ecall();
    lVar2 = 0;
    *(undefined8 *)(gp + -0x1e8) = 0;
  }
  ecall();
  lVar3 = *(long *)(gp + -0x1e8);
  if (param_1 + lVar2 != param_1 + lVar3) {
    puVar1 = (undefined4 *)FUN_fffffffff00159c4(0xd6);
    *puVar1 = 0xc;
    return -1;
  }
  *(long *)(gp + -0x1e8) = param_1 + lVar2;
  return lVar3;
}


/* ---- FUN_fffffffff00159c4 @ fffffffff00159c4 size=12 ---- */

undefined * FUN_fffffffff00159c4(void)

{
  return PTR_DAT_fffffffff0110f68;
}


/* ---- FUN_fffffffff00159d0 @ fffffffff00159d0 size=84 ---- */

undefined8 FUN_fffffffff00159d0(void)

{
  int iVar1;
  
  FUN_fffffffff0013dd0();
  iVar1 = FUN_fffffffff0012dbc(6,FUN_fffffffff0005674);
  if ((iVar1 == 0) && (iVar1 = FUN_fffffffff0012dbc(7,FUN_fffffffff000a148), iVar1 == 0)) {
    do {
      thunk_FUN_fffffffff00145e0();
    } while( true );
  }
  return 0xffffffffffffffff;
}


/* ---- FUN_fffffffff0015a24 @ fffffffff0015a24 size=28 ---- */

void FUN_fffffffff0015a24(void)

{
  *(undefined ***)(gp + -0x478) = &PTR_LAB_fffffffff0100160;
  *(undefined8 *)(gp + -0x470) = 0;
  FUN_fffffffff0011f20(gp + -0x468);
  return;
}


/* ---- sub_15ae4 @ fffffffff0015ae4 size=4 ---- */

/* WARNING: Control flow encountered bad instruction data */

void sub_15ae4(void)

{
  long unaff_s4;
  undefined8 unaff_fs1;
  
  *(undefined8 *)(unaff_s4 + 0x74a) = unaff_fs1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


