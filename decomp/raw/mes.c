/* Decompiled by Ghidra RISCV:LE:64:RS64MES - gc_11_0_0_mes.image.bin */

/* ---- trap_handler @ fffffffff0002000 size=2208 ---- */

/* WARNING: Removing unreachable block (ram,0xfffffffff00027f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 trap_handler(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  
  uVar6 = _DAT_2000000000008;
  lVar9 = _DAT_100000000c824;
  _DAT_2000000000098 = CONCAT44(uRam0002000000000074,_DAT_2000000000070) | 0x2001;
  do {
  } while ((_DAT_2000000000008 & 0x8000) == 0);
  if ((_DAT_2000000000008 & 0x1f) != 7) {
    if ((_DAT_2000000000008 & 0x1f) == 0xb) {
      do {
      } while (_DAT_2000000000090 != 0);
      do {
      } while (_DAT_20000000004b8 != 0);
      do {
      } while( true );
    }
    FUN_fffffffff0024c4c(_DAT_2000000000008,_DAT_20000000004c8);
    uVar5 = CONCAT44(_DAT_1000000001f1c,_DAT_1000000001f18);
    goto LAB_fffffffff0002830;
  }
  uVar18 = _DAT_20000000002f8 >> 0x11;
  uVar17 = _DAT_100000002e088 & 0x1f;
  if (uVar17 == 2) {
    _DAT_2000000000048 = _DAT_100000002e088 >> 5 & 3;
    lVar9 = 1000;
    do {
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    _DAT_20000000001b0 = 0;
    if ((uVar18 & 1) != 0) {
      _DAT_20000000001b8 = 0;
    }
  }
  else if ((uVar17 == 5) || (uVar17 == 6)) {
    _DAT_20000000001b0 = 0;
    _DAT_2000000000048 = _DAT_100000002e088 >> 5 & 3;
    if ((uVar18 & 1) != 0) {
      _DAT_20000000001b8 = 0;
    }
  }
  else if (uVar17 == 0xc) {
    _DAT_20000000001b0 = 7;
    if ((uVar18 & 1) != 0) {
      _DAT_20000000001b8 = 7;
    }
    _DAT_100000000c2e0 = 2;
  }
  else if (uVar17 == 0xf) {
    _DAT_20000000001b0 = 2;
    if ((uVar18 & 1) != 0) {
      _DAT_20000000001b8 = 2;
    }
  }
  else {
    if (uVar17 == 0x11) {
      _DAT_20000000001b0 = 3;
      if ((uVar18 & 1) != 0) {
        _DAT_20000000001b8 = 3;
      }
      do {
      } while ((_DAT_100000002e088 & 0x1f) != 0x14);
      if ((_DAT_20000000002f8 & 0x20000) != 0) {
        _DAT_20000000001b8 = 7;
      }
      FUN_fffffffff00028a8();
      uVar5 = CONCAT44(_DAT_1000000001f1c,_DAT_1000000001f18);
      do {
      } while (_DAT_2000000000090 != 0);
      _DAT_2000000000028 = 0xc0;
      _DAT_20000000001b0 = 4;
      goto LAB_fffffffff0002830;
    }
    uVar18 = _DAT_20000000002f8 >> 0x10;
    uVar17 = uVar18 & 1;
    uVar2 = uVar18 & 1;
    uVar3 = uVar18 & 1;
    uVar4 = uVar18 & 1;
    if ((uVar18 & 1) == 0) {
      puVar8 = (uint *)&DAT_10000000320f0;
      uVar16 = 0;
      do {
        uVar16 = uVar16 | *puVar8 >> 0x1f;
        puVar8 = puVar8 + 1;
      } while ((long)puVar8 < 0x1000000032104);
      uVar19 = _DAT_100000002e088;
      if (uVar16 == 0) {
        _DAT_2000000000098 =
             CONCAT44(uRam0002000000000074,_DAT_20000000002f8 >> 4) & 0xffffffff000007f0 | 0x2008;
        if ((_DAT_100000000c884 & 7) == 0) {
          uVar16 = 0xc;
          if (_DAT_100000000c8b4 != 0) goto LAB_fffffffff000228c;
        }
        else {
LAB_fffffffff0002408:
          if ((_DAT_100000000c82c & 7) == 0) {
            _DAT_100000000c884 = 0;
            if (uVar3 != 0) {
              _DAT_20000000001b8 = 8;
            }
          }
          else {
            uVar18 = (uint)((ulong)_DAT_2000000000028 >> 0x20);
            _DAT_2000000000398 = uVar18 >> 6 & 0xf;
            *(long *)(_DAT_100000000c824 + 0x200) = _DAT_100000000c824;
            *(undefined4 *)(lVar9 + 0x208) = 0;
            puVar14 = (undefined4 *)(lVar9 + 0x20c);
            puVar10 = (undefined4 *)&DAT_100000000c830;
            lVar12 = 0xd;
            do {
              *puVar14 = *puVar10;
              puVar14 = puVar14 + 1;
              puVar10 = puVar10 + 1;
              lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
            *(undefined4 *)(lVar9 + 0x244) = _DAT_100000000c868;
            lVar12 = 6;
            puVar10 = (undefined4 *)&DAT_100000000c894;
            puVar14 = (undefined4 *)(lVar9 + 0x270);
            do {
              puVar15 = puVar14;
              puVar11 = puVar10;
              *puVar15 = *puVar11;
              lVar12 = lVar12 + -1;
              puVar10 = puVar11 + 1;
              puVar14 = puVar15 + 1;
            } while (lVar12 != 0);
            puVar15[1] = 0x2000;
            puVar15[2] = puVar11[2];
            *(undefined4 *)(lVar9 + 0x2cc) = _DAT_100000000c8f0;
            *(undefined4 *)(lVar9 + 0x2d8) = _DAT_100000000c8fc;
            *(undefined4 *)(lVar9 + 0x2dc) = _DAT_100000000c900;
            *(undefined4 *)(lVar9 + 0x2e0) = _DAT_100000000c3fc;
            _DAT_2000000000470 = 0;
            do {
            } while (_DAT_2000000000090 != 0);
            _DAT_100000000c87c = 0;
            if ((_DAT_100000000c860 & 0x40000000) != 0) {
              _DAT_100000000c860 = 3;
            }
            _DAT_100000000c8ac = 0x2000;
            _DAT_2000000000120 = uVar18 & 3;
            _DAT_20000000000d8 = uVar18 >> 0x11 & 0xc0;
            _DAT_100000000c82c = 0;
            _DAT_100000000c8fc = 0;
            _DAT_100000000c900 = 0;
            _DAT_100000000c84c = 0;
            _DAT_100000000c884 = 0;
            _DAT_100000000c920 = 0;
            _DAT_100000000c2e0 = 2;
            if (uVar4 != 0) {
              _DAT_20000000001b8 = 8;
            }
          }
        }
      }
      else {
LAB_fffffffff00021d4:
        uVar7 = 0;
LAB_fffffffff00021f4:
        do {
          puVar8 = (uint *)&DAT_10000000320f0;
          bVar1 = false;
          uVar13 = 1;
          do {
            if ((int)*puVar8 < 0) {
              uVar7 = uVar7 | uVar13;
              *puVar8 = *puVar8 & 0x7fffffff;
              bVar1 = true;
              if ((int)*puVar8 < 0) goto LAB_fffffffff00021f4;
            }
            uVar13 = uVar13 << 1;
            puVar8 = puVar8 + 1;
          } while ((long)puVar8 < 0x1000000032105);
        } while (bVar1);
        if (uVar17 != 0) {
          _DAT_20000000001b8 = uVar19;
        }
        if (uVar7 != 0) {
          _DAT_100000000c2e0 = 2;
          _DAT_2000000000020 = uVar6 & 0x1f;
          FUN_fffffffff0024c4c(0x1f);
          uVar5 = CONCAT44(_DAT_1000000001f1c,_DAT_1000000001f18);
          goto LAB_fffffffff0002830;
        }
      }
    }
    else {
      uVar18 = _DAT_20000000002f8 & 0xff;
      uVar16 = _DAT_20000000002f8;
      if ((uVar18 == 0xc) || (uVar18 == 0x12)) {
LAB_fffffffff000228c:
        if (uVar2 != 0) {
          _DAT_20000000001b8 = uVar18;
        }
        FUN_fffffffff0024c4c(_DAT_2000000000008,uVar16);
        uVar5 = CONCAT44(_DAT_1000000001f1c,_DAT_1000000001f18);
        goto LAB_fffffffff0002830;
      }
      uVar19 = 0xe;
      if (uVar18 == 0xe) goto LAB_fffffffff00021d4;
      if (uVar18 != 8) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      _DAT_2000000000098 =
           CONCAT44(uRam0002000000000074,_DAT_20000000002f8 >> 4) & 0xffffffff000007f0 | 0x2008;
      if ((_DAT_100000000c884 & 7) != 0) goto LAB_fffffffff0002408;
    }
  }
  _DAT_2000000000020 = uVar6 & 0x1f;
  uVar5 = _DAT_1000000001f18;
LAB_fffffffff0002830:
  _DAT_1000000001f1c = (undefined4)((ulong)uVar5 >> 0x20);
  _DAT_1000000001f18 = (undefined4)uVar5;
  return param_1;
}


/* ---- sub_026b8 @ fffffffff00026b8 size=4 ---- */

void sub_026b8(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- sub_028a4 @ fffffffff00028a4 size=4 ---- */

void sub_028a4(void)

{
  return;
}


/* ---- FUN_fffffffff00028a8 @ fffffffff00028a8 size=44 ---- */

void FUN_fffffffff00028a8(void)

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


/* ---- FUN_fffffffff00028d4 @ fffffffff00028d4 size=32 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff00028d4(long param_1)

{
  if (param_1 < 6) {
    _DAT_2000000000518 = 1;
  }
  _DAT_2000000000020 = param_1;
  return;
}


/* ---- FUN_fffffffff00028f4 @ fffffffff00028f4 size=68 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff00028f4(ulong param_1,long param_2)

{
  if (param_2 != 0x45) {
    if ((long)param_1 < 6) {
      _DAT_2000000000518 = 1;
    }
    _DAT_2000000000020 = param_1;
    return;
  }
  if ((long)param_1 < 6) {
    _DAT_2000000000518 = 1;
  }
  _DAT_20000000005a0 = 1L << (param_1 & 0x3f);
  return;
}


/* ---- reset_entry @ fffffffff0005000 size=1152 ---- */

/* WARNING: Removing unreachable block (ram,0xfffffffff0005414) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void reset_entry(void)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint *puVar16;
  long lVar17;
  long lVar18;
  
  uVar2 = _DAT_2000000000070;
  lVar17 = 0x2000000000000;
  lVar18 = 0x1000000000000;
  uVar12 = _DAT_2000000000070 | 0x2008;
  uVar13 = _DAT_2000000000070 | 0x2001;
  _DAT_1000000000c10 = 0;
  gp = 0xfffffffff0100970;
  if ((((ulong)(long)_DAT_100000003201c >> 0x1a & 3) != 3) || ((_DAT_2000000000060 & 1) == 0)) {
    _DAT_100000003221c = 7;
    _DAT_100000003220c = 0xf0100000;
    _DAT_1000000032210 = 0x1fffff0100000;
    _DAT_1000000032218 = 0;
    _DAT_1000000032230 = 7;
    _DAT_1000000032220 = 0xf0000000;
    _DAT_1000000032224 = 0x3fffff0000000;
    _DAT_100000003222c = 0;
  }
  _DAT_1000000000c14 = 0xfc000800;
  uRam0001000000000c18 = 0x3fffffff;
  lVar14 = 0;
  lVar15 = 0;
  do {
    *(undefined8 *)(lVar14 + 0x10000000322c0) = 0xffffffff;
    *(undefined8 *)(lVar14 + 0x10000000322c4) = 0x10;
    uVar1 = _DAT_1000000001f14;
    lVar14 = lVar14 + 0xc;
    lVar15 = lVar15 + 1;
  } while (lVar15 < 0x10);
  _DAT_1000000032108 = 0xfc000200;
  _DAT_1000000032278 = 0x3fffffff;
  tp = 0;
  if ((_DAT_1000000001f10 & 1) == 0) {
    _DAT_1000000001f1c = 0x6020049;
    DAT_fffffffff011fff8 = sub_054a0;
    puVar3 = &DAT_fffffffff0100170;
    _DAT_2000000000098 = uVar12;
    do {
      *(undefined4 *)puVar3 = 0;
      puVar3 = (undefined8 *)((long)puVar3 + 4);
    } while (puVar3 < (undefined8 *)0xfffffffff0103790);
    FUN_fffffffff0005480(0,0,0,0,0,0,0,0);
    FUN_fffffffff0007ef0((long)DAT_fffffffff011ffb0,0xfffffffff011ffb1,0);
    return;
  }
  _DAT_2000000000528 = CONCAT44(_DAT_1000000001f14,_DAT_1000000001f10) >> 1;
  tp = _DAT_2000000000528 << 2;
  lVar14 = CONCAT44(_DAT_1000000001f1c,_DAT_1000000001f18);
  _DAT_100000003f050 = _DAT_1000000001f28;
  _DAT_100000003f058 = _DAT_1000000001f30;
  _DAT_2000000000470 = 0;
  _DAT_2000000000398 = _DAT_1000000001f18 >> 6 & 0xf;
  _DAT_2000000000120 = _DAT_1000000001f18 & 3;
  _DAT_20000000000d8 = _DAT_1000000001f18 >> 0x10 & 0x180;
  _DAT_2000000000098 = CONCAT44((int)(uVar2 >> 0x20),_DAT_1000000001f14);
  _DAT_2000000000530 = 1;
  FUN_fffffffff0005480(0,0,0,0,0,0,0,0);
  *(ulong *)(lVar17 + 0x98) = uVar12;
  *(undefined8 *)(lVar18 + 0x1f24) = 1;
  *(ulong *)(lVar17 + 0x98) = uVar13;
  if ((*(ulong *)(lVar17 + 0x60) & 1) != ((ulong)(*(uint *)(lVar18 + 0x2a628) >> 3) & 1)) {
    do {
      *(ulong *)(lVar17 + 0x98) = uVar12;
      puVar16 = (uint *)(lVar18 + 0x1f2c);
    } while ((*puVar16 & 1) == 0);
    puVar16[0] = 0;
    puVar16[1] = 0;
  }
  *(undefined4 *)(lVar17 + 0x98) = uVar1;
  *(undefined4 *)(lVar17 + 0x580) = 1;
  *(undefined4 *)(lVar17 + 0x40) = 1;
  uVar4 = *(undefined8 *)(lVar14 + 0x80);
  uVar5 = *(undefined8 *)(lVar14 + 0x78);
  uVar6 = *(undefined8 *)(lVar14 + 0x70);
  uVar7 = *(undefined8 *)(lVar14 + 0x68);
  uVar8 = *(undefined8 *)(lVar14 + 0x60);
  uVar9 = *(undefined8 *)(lVar14 + 0x58);
  uVar10 = *(undefined8 *)(lVar14 + 0x50);
  uVar11 = *(undefined8 *)(lVar14 + 0x48);
  *(undefined4 *)(lVar17 + 0x530) = 0;
                    /* WARNING: Could not recover jumptable at 0xfffffffff0005418. Too many branches
                        */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(tp & 0xfffffffffffffffe))(uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
  return;
}


/* ---- FUN_fffffffff0005480 @ fffffffff0005480 size=32 ---- */

void FUN_fffffffff0005480(void)

{
  undefined8 unaff_s2;
  long in_t5;
  long in_t6;
  
  *(undefined8 *)(in_t5 + 0x98) = unaff_s2;
  *(undefined8 *)(in_t6 + 0xc10) = 0x1ffe;
  return;
}


/* ---- sub_054a0 @ fffffffff00054a0 size=4 ---- */

void sub_054a0(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- sub_054a4 @ fffffffff00054a4 size=24 ---- */

/* WARNING: Removing unreachable block (ram,0xfffffffff00054a4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00054ac) */

void sub_054a4(long param_1)

{
  do {
  } while (param_1 != 0);
  return;
}


/* ---- FUN_fffffffff00054bc @ fffffffff00054bc size=620 ---- */

void FUN_fffffffff00054bc(undefined4 param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_48;
  
  if (((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x8000) != 0) &&
     (*(long *)(DAT_fffffffff0100168 + 0x31f8) != 0)) {
    lVar2 = *(long *)(DAT_fffffffff0100168 + 0x31f8);
    if (0x1f < *(uint *)(lVar2 + 0xa00)) {
      *(undefined4 *)(lVar2 + 0xa00) = 0;
    }
    *(undefined4 *)(lVar2 + (ulong)*(uint *)(lVar2 + 0xa00) * 0x18) = param_1;
    local_48 = (undefined4)param_2;
    *(undefined4 *)(lVar2 + (ulong)*(uint *)(lVar2 + 0xa00) * 0x18 + 0xc) = local_48;
    lVar4 = lVar2 + (ulong)*(uint *)(lVar2 + 0xa00) * 0x18;
    *(int *)(lVar4 + 0x10) = (int)((ulong)param_2 >> 0x20);
    *(undefined4 *)(lVar4 + 0x14) = param_3;
    uVar1 = *(uint *)(lVar2 + 0xa00);
    uVar3 = FUN_fffffffff0010abc();
    lVar4 = lVar2 + (ulong)uVar1 * 0x18;
    *(int *)(lVar4 + 4) = (int)uVar3;
    *(int *)(lVar4 + 8) = (int)((ulong)uVar3 >> 0x20);
    *(int *)(lVar2 + 0xa00) = *(int *)(lVar2 + 0xa00) + 1;
  }
  return;
}


/* ---- FUN_fffffffff0005728 @ fffffffff0005728 size=204 ---- */

undefined8 FUN_fffffffff0005728(void)

{
  uint local_18;
  uint local_14;
  
  local_14 = 0;
  do {
    if (2 < local_14) {
      return 0;
    }
    for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
      if ((*(uint *)(DAT_fffffffff0100168 + (ulong)local_18 * 0x50 + (ulong)local_14 * 400 + 0x2c24)
          & 1) != 0) {
        return 1;
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}


/* ---- FUN_fffffffff00057f4 @ fffffffff00057f4 size=312 ---- */

undefined8 FUN_fffffffff00057f4(uint param_1)

{
  uint local_18;
  uint local_14;
  
  local_14 = 0;
  do {
    if (2 < local_14) {
      return 0;
    }
    if (local_14 != param_1) {
      for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
        if (*(uint *)(DAT_fffffffff0100168 + (ulong)local_18 * 0x50 + (ulong)local_14 * 400 + 0x2c18
                     ) <
            *(uint *)(DAT_fffffffff0100168 + (ulong)local_18 * 0x50 + (ulong)local_14 * 400 + 0x2c10
                     )) {
          return 1;
        }
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}


/* ---- FUN_fffffffff000592c @ fffffffff000592c size=288 ---- */

undefined1 FUN_fffffffff000592c(int param_1,int param_2)

{
  undefined1 local_11;
  
  local_11 = 0;
  if ((((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x200) != 0) &&
      ((*(uint *)(DAT_fffffffff0100168 + (long)param_2 * 0x50 + (long)param_1 * 400 + 0x2c24) >> 1 &
       1) != 0)) &&
     (*(long *)(DAT_fffffffff0100168 + (long)param_2 * 0x50 + (long)param_1 * 400 + 0x2c1c) != 0)) {
    local_11 = 1;
  }
  return local_11;
}


/* ---- FUN_fffffffff0005a4c @ fffffffff0005a4c size=264 ---- */

undefined4 FUN_fffffffff0005a4c(long param_1,uint param_2)

{
  bool bVar1;
  long lVar2;
  undefined4 local_14;
  
  local_14 = 0;
  if (((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x200) == 0) ||
     (lVar2 = FUN_fffffffff0010abc(),
     (ulong)(lVar2 - *(long *)(param_1 + 0x28)) <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x10))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    if (*(int *)(DAT_fffffffff0100168 + 0x30f4) == *(int *)(DAT_fffffffff0100168 + 0x30f0)) {
      if (*(uint *)(param_1 + 0x34) < param_2) {
        local_14 = 2;
      }
    }
    else {
      local_14 = 1;
    }
  }
  return local_14;
}


/* ---- FUN_fffffffff0005b54 @ fffffffff0005b54 size=608 ---- */

long FUN_fffffffff0005b54(int param_1)

{
  int iVar1;
  long lVar2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 5;
  iVar1 = *(int *)(DAT_fffffffff0100168 + 0x30f8) + -1;
  for (local_18 = iVar1; -1 < local_18; local_18 = local_18 + -1) {
    if ((*(uint *)(DAT_fffffffff0100168 + (long)local_18 * 0x50 + (long)param_1 * 400 + 0x2c24) & 1)
        != 0) {
      local_14 = local_18;
      lVar2 = DAT_fffffffff0100168 + (long)local_18 * 0x50 + (long)param_1 * 400;
      *(uint *)(lVar2 + 0x2c24) = *(uint *)(lVar2 + 0x2c24) & 0xfffffffe;
      *(int *)(DAT_fffffffff0100168 + 0x30f8) = local_18;
      break;
    }
  }
  if (local_14 == 5) {
    for (local_1c = 4; iVar1 <= local_1c; local_1c = local_1c + -1) {
      if ((*(uint *)(DAT_fffffffff0100168 + (long)local_1c * 0x50 + (long)param_1 * 400 + 0x2c24) &
          1) != 0) {
        local_14 = local_1c;
        lVar2 = DAT_fffffffff0100168 + (long)local_1c * 0x50 + (long)param_1 * 400;
        *(uint *)(lVar2 + 0x2c24) = *(uint *)(lVar2 + 0x2c24) & 0xfffffffe;
        *(int *)(DAT_fffffffff0100168 + 0x30f8) = local_1c;
        break;
      }
    }
  }
  return (long)local_14;
}


/* ---- FUN_fffffffff0005db4 @ fffffffff0005db4 size=648 ---- */

long FUN_fffffffff0005db4(int param_1,int param_2,char param_3)

{
  int iVar1;
  long local_20;
  long local_18;
  
  local_18 = 0;
  local_20 = *(long *)(DAT_fffffffff0100168 + (long)param_2 * 0x50 + (long)param_1 * 400 + 0x2c1c);
  if (local_20 != 0) {
    local_20 = *(long *)(local_20 + 8);
  }
  for (; local_20 != 0; local_20 = *(long *)(local_20 + 8)) {
    iVar1 = FUN_fffffffff000603c(local_20,param_3);
    if (iVar1 != 0) {
      if (local_18 == 0) {
        local_18 = local_20;
      }
      if (param_3 == '\0') break;
    }
  }
  if ((local_18 == 0) || (param_3 != '\0')) {
    for (local_20 = *(long *)(DAT_fffffffff0100168 + (long)param_2 * 0x50 + (long)param_1 * 400 +
                             0x2bd8); local_20 != 0; local_20 = *(long *)(local_20 + 8)) {
      iVar1 = FUN_fffffffff000603c(local_20,param_3);
      if (iVar1 != 0) {
        if (local_18 == 0) {
          local_18 = local_20;
        }
        if (param_3 == '\0') {
          return local_18;
        }
      }
      if (local_20 ==
          *(long *)(DAT_fffffffff0100168 + (long)param_2 * 0x50 + (long)param_1 * 400 + 0x2c1c)) {
        return local_18;
      }
    }
  }
  return local_18;
}


/* ---- FUN_fffffffff000603c @ fffffffff000603c size=400 ---- */

char FUN_fffffffff000603c(long param_1,char param_2)

{
  int iVar1;
  char local_19;
  long local_18;
  
  local_19 = '\0';
  if (*(long *)(param_1 + 0x20) != 0) {
    local_18 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    while ((local_18 != 0 &&
           ((iVar1 = FUN_fffffffff000b0b4(local_18,param_2), iVar1 == 0 ||
            (local_19 = '\x01', param_2 != '\0'))))) {
      local_18 = *(long *)(local_18 + 8);
    }
  }
  if ((local_19 == '\0') || (param_2 != '\0')) {
    for (local_18 = *(long *)(param_1 + 0x18);
        (local_18 != 0 &&
        (((iVar1 = FUN_fffffffff000b0b4(local_18,param_2), iVar1 == 0 ||
          (local_19 = '\x01', param_2 != '\0')) && (local_18 != *(long *)(param_1 + 0x20)))));
        local_18 = *(long *)(local_18 + 8)) {
    }
  }
  return local_19;
}


/* ---- FUN_fffffffff00061cc @ fffffffff00061cc size=400 ---- */

long FUN_fffffffff00061cc(long param_1)

{
  int iVar1;
  long local_20;
  long local_18;
  
  local_18 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    for (local_20 = *(long *)(*(long *)(param_1 + 0x20) + 8); local_20 != 0;
        local_20 = *(long *)(local_20 + 8)) {
      iVar1 = FUN_fffffffff000b0b4(local_20,0);
      if (iVar1 != 0) {
        if (local_18 == 0) {
          local_18 = local_20;
        }
        else if (*(uint *)(local_18 + 0x24) < *(uint *)(local_20 + 0x24)) {
          local_18 = local_20;
        }
      }
    }
  }
  local_20 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (local_20 == 0) {
      return local_18;
    }
    iVar1 = FUN_fffffffff000b0b4(local_20,0);
    if (iVar1 != 0) {
      if (local_18 == 0) {
        local_18 = local_20;
      }
      else if (*(uint *)(local_18 + 0x24) < *(uint *)(local_20 + 0x24)) {
        local_18 = local_20;
      }
    }
    if (local_20 == *(long *)(param_1 + 0x20)) break;
    local_20 = *(long *)(local_20 + 8);
  }
  return local_18;
}


/* ---- FUN_fffffffff000635c @ fffffffff000635c size=840 ---- */

undefined1 FUN_fffffffff000635c(long param_1,long *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long local_28;
  long local_20;
  int local_18;
  char local_12;
  undefined1 local_11;
  
  local_11 = 1;
  local_28 = 0;
  local_12 = '\0';
  local_18 = *(int *)(param_1 + 0x3c);
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 1;
  lVar3 = DAT_fffffffff0100168 +
          (long)*(int *)(*(long *)(param_1 + 0x18) + 0x28) * 0x50 +
          (long)*(int *)(*(long *)(param_1 + 0x18) + 0x30) * 400;
  *(uint *)(lVar3 + 0x2c24) = *(uint *)(lVar3 + 0x2c24) | 4;
  *param_2 = 0;
  *(uint *)(*(long *)(param_1 + 0x10) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0x10) + 0x84) & 0xfffffffe;
  do {
    local_20 = FUN_fffffffff00061cc(param_1);
    if (local_20 == 0) {
LAB_fffffffff0006570:
      if (*param_3 == 1) {
        *(int *)(param_1 + 0x3c) = local_18;
      }
      else {
        *(undefined4 *)(param_1 + 0x3c) = 0;
      }
      if ((local_28 == 0) && (lVar3 = FUN_fffffffff000603c(param_1,0), lVar3 != 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        *(undefined1 *)(param_1 + 0x38) = 1;
      }
      *(uint *)(*(long *)(param_1 + 0x10) + 0x84) = *(uint *)(*(long *)(param_1 + 0x10) + 0x84) | 1;
      *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfffffffe;
      lVar3 = DAT_fffffffff0100168 +
              (long)*(int *)(*(long *)(param_1 + 0x18) + 0x28) * 0x50 +
              (long)*(int *)(*(long *)(param_1 + 0x18) + 0x30) * 400;
      *(uint *)(lVar3 + 0x2c24) = *(uint *)(lVar3 + 0x2c24) & 0xfffffffb;
      return local_11;
    }
    iVar2 = FUN_fffffffff000bce8(local_20,&local_28);
    if (iVar2 == 0) {
      local_11 = 0;
      goto LAB_fffffffff0006570;
    }
    if (local_28 != 0) {
      if (local_12 == '\0') {
        *param_2 = local_28;
      }
      goto LAB_fffffffff0006570;
    }
    iVar2 = FUN_fffffffff000bf30(local_20);
    if (iVar2 == 0) {
      local_11 = 0;
      goto LAB_fffffffff0006570;
    }
    local_12 = '\x01';
    *(int *)(param_1 + 0x20) = (int)local_20;
    *(int *)(param_1 + 0x24) = (int)((ulong)local_20 >> 0x20);
    iVar2 = FUN_fffffffff0005a4c(param_1,(long)local_18);
    *param_3 = iVar2;
    if (*param_3 != 0) goto LAB_fffffffff0006570;
    local_18 = local_18 + 1;
  } while( true );
}


/* ---- FUN_fffffffff00069bc @ fffffffff00069bc size=52 ---- */

long FUN_fffffffff00069bc(int param_1)

{
  return (long)(param_1 << 2);
}


/* ---- FUN_fffffffff00069f0 @ fffffffff00069f0 size=60 ---- */

long FUN_fffffffff00069f0(int param_1)

{
  return (long)((param_1 + 5) * 4);
}


/* ---- sub_06ff8 @ fffffffff0006ff8 size=1288 ---- */

void sub_06ff8(ulong param_1,undefined8 param_2)

{
  int iStack_2c;
  undefined8 local_28;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  iStack_2c = 0;
  FUN_fffffffff00244a8(&iStack_2c);
  FUN_fffffffff002448c(0);
  FUN_fffffffff00054bc
            (0,CONCAT44((uint)param_2,(int)param_1),
             CONCAT44(iStack_2c,(int)((ulong)param_2 >> 0x20)));
  local_14 = (uint)(param_1 >> 0xb) & 0xf;
  local_18 = (uint)(param_1 >> 5) & 3;
  local_1c = (uint)(param_1 >> 7) & 7;
  local_20 = (uint)param_2 & 0x3ffffff;
  if (((DAT_fffffffff0100168[0xc6b] & 0x800) != 0) && (local_14 == 10)) {
    *DAT_fffffffff0100168 = *DAT_fffffffff0100168 | 2;
    DAT_fffffffff0100168[0xc3a] = 10;
  }
  if ((((DAT_fffffffff0100168[0xc6b] & 8) == 0) && ((DAT_fffffffff0100168[0xc6b] & 1) == 0)) &&
     (local_14 == 0xb)) {
    FUN_fffffffff000e7b0(*(undefined8 *)(DAT_fffffffff0100168 + 0xc41));
  }
  if (((DAT_fffffffff0100168[(ulong)local_18 * 0x30 + (ulong)local_1c * 6 + 0x9d7] & 1) != 0) &&
     (*(long *)(DAT_fffffffff0100168 + (ulong)local_18 * 0x30 + (ulong)local_1c * 6 + 0x9d9) != 0))
  {
    if (local_14 == 10) {
      if (local_20 ==
          *(uint *)(*(long *)(DAT_fffffffff0100168 +
                             (ulong)local_18 * 0x30 + (ulong)local_1c * 6 + 0x9d9) + 0xc)) {
        **(uint **)(DAT_fffffffff0100168 + (ulong)local_18 * 0x30 + (ulong)local_1c * 6 + 0x9d9) =
             **(uint **)(DAT_fffffffff0100168 + (ulong)local_18 * 0x30 + (ulong)local_1c * 6 + 0x9d9
                        ) | 0x10;
      }
    }
    else if ((local_14 == 0xb) &&
            (local_20 ==
             *(uint *)(*(long *)(DAT_fffffffff0100168 +
                                (ulong)local_18 * 0x30 + (ulong)local_1c * 6 + 0x9d9) + 0xc))) {
      **(uint **)(DAT_fffffffff0100168 + (ulong)local_18 * 0x30 + (ulong)local_1c * 6 + 0x9d9) =
           **(uint **)(DAT_fffffffff0100168 + (ulong)local_18 * 0x30 + (ulong)local_1c * 6 + 0x9d9)
           & 0xffffffef;
    }
    if ((DAT_fffffffff0100168[0xc6b] & 0x20) == 0) {
      local_28 = *(undefined8 *)
                  (DAT_fffffffff0100168 + (ulong)local_18 * 0x30 + (ulong)local_1c * 6 + 0x9d9);
      if (local_14 == 10) {
        FUN_fffffffff0020144(local_28,(long)(int)local_18,0);
      }
      else if (local_14 == 0xb) {
        FUN_fffffffff002039c(local_28,(long)(int)local_18,0);
      }
    }
  }
  FUN_fffffffff0025010(3);
  FUN_fffffffff002448c((long)iStack_2c);
  return;
}


/* ---- FUN_fffffffff00079a0 @ fffffffff00079a0 size=1112 ---- */

void FUN_fffffffff00079a0(ulong param_1,uint param_2,uint param_3,int param_4)

{
  uint *puVar1;
  int local_2c;
  undefined8 local_28;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_2c = 0;
  FUN_fffffffff00244a8(&local_2c);
  FUN_fffffffff002448c(0);
  local_14 = (uint)(param_1 >> 0xb) & 0xf;
  local_1c = (uint)(param_1 >> 7) & 7;
  local_20 = param_2 & 0x3ffffff;
  local_18 = param_3;
  if ((((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 8) == 0) &&
      ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 1) == 0)) && (local_14 == 0xb)) {
    FUN_fffffffff000e7b0(*(undefined8 *)(DAT_fffffffff0100168 + 0x3104));
  }
  if (((*(uint *)(DAT_fffffffff0100168 + (ulong)local_1c * 0x18 + (ulong)local_18 * 0xf0 + 0x291c) &
       1) != 0) &&
     (*(long *)(DAT_fffffffff0100168 + (ulong)local_1c * 0x18 + (ulong)local_18 * 0xf0 + 0x2924) !=
      0)) {
    if (local_14 == 10) {
      if (local_20 ==
          *(uint *)(*(long *)(DAT_fffffffff0100168 + (ulong)local_1c * 0x18 + (ulong)local_18 * 0xf0
                             + 0x2924) + 0xc)) {
        puVar1 = *(uint **)(DAT_fffffffff0100168 + (ulong)local_1c * 0x18 + (ulong)local_18 * 0xf0 +
                           0x2924);
        *puVar1 = *puVar1 | 0x10;
      }
    }
    else if ((local_14 == 0xb) &&
            (local_20 ==
             *(uint *)(*(long *)(DAT_fffffffff0100168 +
                                 (ulong)local_1c * 0x18 + (ulong)local_18 * 0xf0 + 0x2924) + 0xc)))
    {
      puVar1 = *(uint **)(DAT_fffffffff0100168 + (ulong)local_1c * 0x18 + (ulong)local_18 * 0xf0 +
                         0x2924);
      *puVar1 = *puVar1 & 0xffffffef;
    }
    if ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x20) == 0) {
      local_28 = *(undefined8 *)
                  (DAT_fffffffff0100168 + (ulong)local_1c * 0x18 + (ulong)local_18 * 0xf0 + 0x2924);
      if (local_14 == 10) {
        FUN_fffffffff0020144(local_28,(long)(int)local_18,2);
      }
      else if (local_14 == 0xb) {
        FUN_fffffffff002039c(local_28,(long)(int)local_18,2);
      }
    }
  }
  FUN_fffffffff0025010((long)param_4);
  FUN_fffffffff002448c((long)local_2c);
  return;
}


/* ---- FUN_fffffffff0007e78 @ fffffffff0007e78 size=120 ---- */

void FUN_fffffffff0007e78(void)

{
  FUN_fffffffff0024540(0xa900,0xc);
  FUN_fffffffff0024540(0xc849,0x100a024);
  FUN_fffffffff0024540(0xa900,0);
  return;
}


/* ---- FUN_fffffffff0007ef0 @ fffffffff0007ef0 size=3480 ---- */

undefined8 FUN_fffffffff0007ef0(void)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  int local_7c;
  ulong local_78;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  undefined1 local_5d;
  undefined4 local_5c;
  undefined *local_58;
  ulong local_50;
  uint local_44;
  ulong local_40;
  int local_34;
  long local_30;
  char local_21;
  
  local_68 = 0;
  local_6c = 0;
  local_50 = 0;
  local_58 = (undefined *)0x0;
  local_5c = 0xc;
  FUN_fffffffff0024540(0xa900,0xc);
  FUN_fffffffff002465c(0xc815,&local_68);
  FUN_fffffffff002465c(0xc814,&local_6c);
  local_50 = (ulong)local_6c;
  local_58 = (undefined *)CONCAT44(local_6c,local_68);
  DAT_fffffffff0100168 = local_58;
  if (local_58 == (undefined *)0x0) {
    DAT_fffffffff0100168 = &DAT_fffffffff01001a8;
  }
  FUN_fffffffff0025980(DAT_fffffffff0100168,0,0x3200);
  FUN_fffffffff0024540(0xa900,0);
  FUN_fffffffff0007e78();
  iVar4 = FUN_fffffffff0024b44(9,&LAB_fffffffff00068e0);
  if ((((iVar4 != 0) || (iVar4 = FUN_fffffffff0024b44(6,&LAB_fffffffff00066a4), iVar4 != 0)) ||
      (iVar4 = FUN_fffffffff0024b44(0x1f,&LAB_fffffffff0006a2c), iVar4 != 0)) ||
     (((iVar4 = FUN_fffffffff0024b44(3,sub_06ff8), iVar4 != 0 ||
       (iVar4 = FUN_fffffffff0024b44(4,&LAB_fffffffff0007500), iVar4 != 0)) ||
      ((iVar4 = FUN_fffffffff0024b44(0x10,&LAB_fffffffff0007df8), iVar4 != 0 ||
       (iVar4 = FUN_fffffffff0024b44(0x11,&LAB_fffffffff0007e38), puVar2 = DAT_fffffffff0100168,
       iVar4 != 0)))))) {
    return 0xffffffffffffffff;
  }
  local_21 = '\x01';
  local_5d = 0;
  local_30 = 0;
  local_34 = 5;
  local_40 = 0xffffffff;
  local_78 = 0;
  local_44 = 0;
  local_64 = 0;
  uVar5 = FUN_fffffffff0010a08(1000000);
  *(int *)(puVar2 + 0x3104) = (int)uVar5;
  *(int *)(puVar2 + 0x3108) = (int)((ulong)uVar5 >> 0x20);
  uVar3 = local_40;
LAB_fffffffff0008198:
  do {
    while( true ) {
      local_40 = uVar3;
      if (local_21 != '\0') {
        local_64 = FUN_fffffffff000e8dc();
        if (local_64 != 0) {
          local_5d = FUN_fffffffff0011b88((long)local_64);
        }
        local_21 = '\0';
        local_44 = 0;
      }
      local_34 = 5;
      if ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 4) == 0) {
        iVar4 = FUN_fffffffff000592c
                          ((long)(int)local_44,(long)*(int *)(DAT_fffffffff0100168 + 0x30f8));
        if (iVar4 == 0) {
          local_34 = FUN_fffffffff0005b54((long)(int)local_44);
        }
        else {
          local_34 = *(int *)(DAT_fffffffff0100168 + 0x30f8);
        }
      }
      if (local_34 != 5) break;
      if (((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x1000) != 0) &&
         ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 8) == 0)) {
        uVar5 = FUN_fffffffff0010a08(*(undefined4 *)(DAT_fffffffff0100168 + 0x31b8));
        FUN_fffffffff000e7b0(uVar5);
      }
      local_44 = local_44 + 1;
      uVar3 = local_40;
      if (local_44 == 3) {
        local_44 = 0;
        if (((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 4) == 0) &&
           ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 1) == 0)) {
          local_40 = FUN_fffffffff0020704(local_40);
        }
        if (local_40 != 0xffffffff) {
          FUN_fffffffff0024af8();
          if ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 8) == 0) {
            FUN_fffffffff000e7b0(local_40);
          }
          FUN_fffffffff0024b1c();
          local_40 = 0xffffffff;
          local_21 = '\x01';
        }
        lVar6 = FUN_fffffffff0005728();
        if (((lVar6 == 0) ||
            (*(int *)(DAT_fffffffff0100168 + 0x30f4) != *(int *)(DAT_fffffffff0100168 + 0x30f0))) ||
           ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 4) != 0)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        uVar3 = local_40;
        if (bVar1) {
          local_21 = '\x01';
        }
      }
    }
    do {
      iVar4 = FUN_fffffffff000592c((long)(int)local_44,(long)local_34);
      if (iVar4 == 0) {
        local_30 = FUN_fffffffff0005db4
                             ((long)(int)local_44,(long)local_34,
                              (*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x20) == 0);
      }
      else {
        local_30 = *(long *)(DAT_fffffffff0100168 +
                            (long)local_34 * 0x50 + (ulong)local_44 * 400 + 0x2c1c);
        lVar6 = (long)local_34 * 0x50 + (ulong)local_44 * 400;
        *(uint *)(DAT_fffffffff0100168 + lVar6 + 0x2c24) =
             *(uint *)(DAT_fffffffff0100168 + lVar6 + 0x2c24) & 0xfffffffd;
      }
      uVar3 = local_40;
      if (local_30 == 0) goto LAB_fffffffff0008198;
      iVar4 = FUN_fffffffff001e0e0(local_30,(long)(int)local_44,&local_78,(long)local_34);
      if (iVar4 == 0) {
        lVar6 = (long)local_34 * 0x50 + (ulong)local_44 * 400;
        *(uint *)(DAT_fffffffff0100168 + lVar6 + 0x2c24) =
             *(uint *)(DAT_fffffffff0100168 + lVar6 + 0x2c24) | 1;
        uVar3 = local_40;
        goto LAB_fffffffff0008198;
      }
      local_7c = 0;
      if ((local_78 == 0) &&
         (lVar6 = FUN_fffffffff000635c(local_30,&local_78,&local_7c), lVar6 == 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      uVar3 = local_40;
      if (bVar1) {
        lVar6 = (long)local_34 * 0x50 + (ulong)local_44 * 400;
        *(uint *)(DAT_fffffffff0100168 + lVar6 + 0x2c24) =
             *(uint *)(DAT_fffffffff0100168 + lVar6 + 0x2c24) | 1;
        local_21 = '\x01';
        goto LAB_fffffffff0008198;
      }
      if (local_78 != 0) {
        lVar6 = (long)local_34 * 0x50 + (ulong)local_44 * 400;
        *(uint *)(DAT_fffffffff0100168 + lVar6 + 0x2c24) =
             *(uint *)(DAT_fffffffff0100168 + lVar6 + 0x2c24) | 1;
        local_44 = local_44 + 1;
        uVar3 = local_78;
        if (local_40 < local_78) {
          uVar3 = local_40;
        }
        goto LAB_fffffffff0008198;
      }
      uVar7 = (undefined4)((ulong)local_30 >> 0x20);
      if ((local_7c == 1) && ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x200) != 0)) {
        lVar6 = (long)local_34 * 0x50 + (ulong)local_44 * 400;
        *(uint *)(DAT_fffffffff0100168 + lVar6 + 0x2c24) =
             *(uint *)(DAT_fffffffff0100168 + lVar6 + 0x2c24) | 1;
        lVar6 = (long)local_34 * 0x50 + (ulong)local_44 * 400;
        *(uint *)(DAT_fffffffff0100168 + lVar6 + 0x2c24) =
             *(uint *)(DAT_fffffffff0100168 + lVar6 + 0x2c24) | 2;
        puVar2 = DAT_fffffffff0100168;
        lVar6 = (long)local_34 * 0x50 + (ulong)local_44 * 400;
        *(int *)(DAT_fffffffff0100168 + lVar6 + 0x2c1c) = (int)local_30;
        *(undefined4 *)(puVar2 + lVar6 + 0x2c20) = uVar7;
        local_21 = '\x01';
        goto LAB_fffffffff0008198;
      }
      if (((local_7c == 2) && ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x200) != 0)) ||
         (*(char *)(local_30 + 0x38) != '\0')) {
        lVar6 = (long)local_34 * 0x50 + (ulong)local_44 * 400;
        *(uint *)(DAT_fffffffff0100168 + lVar6 + 0x2c24) =
             *(uint *)(DAT_fffffffff0100168 + lVar6 + 0x2c24) | 1;
        *(undefined1 *)(local_30 + 0x38) = 0;
      }
      puVar2 = DAT_fffffffff0100168;
      lVar6 = (long)local_34 * 0x50 + (ulong)local_44 * 400;
      *(int *)(DAT_fffffffff0100168 + lVar6 + 0x2c1c) = (int)local_30;
      *(undefined4 *)(puVar2 + lVar6 + 0x2c20) = uVar7;
    } while ((((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x200) == 0) ||
             (*(long *)(DAT_fffffffff0100168 +
                       (long)local_34 * 0x50 + (ulong)local_44 * 400 + 0x2be8) == 0)) ||
            (lVar6 = FUN_fffffffff0010abc(), puVar2 = DAT_fffffffff0100168,
            (ulong)(lVar6 - *(long *)(DAT_fffffffff0100168 +
                                     (long)local_34 * 0x50 + (ulong)local_44 * 400 + 0x2be8)) <=
            *(ulong *)(DAT_fffffffff0100168 + (long)local_34 * 0x50 + (ulong)local_44 * 400 + 0x2be0
                      )));
    if (*(int *)(DAT_fffffffff0100168 + 0x30f4) != *(int *)(DAT_fffffffff0100168 + 0x30f0)) {
      local_21 = '\x01';
    }
    lVar6 = (long)local_34;
    uVar5 = FUN_fffffffff0010abc();
    lVar6 = lVar6 * 0x50 + (ulong)local_44 * 400;
    *(int *)(puVar2 + lVar6 + 0x2be8) = (int)uVar5;
    *(int *)(puVar2 + lVar6 + 0x2bec) = (int)((ulong)uVar5 >> 0x20);
    lVar6 = (long)local_34 * 0x50 + (ulong)local_44 * 400;
    *(uint *)(DAT_fffffffff0100168 + lVar6 + 0x2c24) =
         *(uint *)(DAT_fffffffff0100168 + lVar6 + 0x2c24) | 1;
    iVar4 = FUN_fffffffff00057f4((long)(int)local_44);
    uVar3 = local_40;
    if (iVar4 != 0) {
      local_44 = FUN_fffffffff0025b10(local_44 + 1,3);
      uVar3 = local_40;
    }
  } while( true );
}


/* ---- sub_08c88 @ fffffffff0008c88 size=24 ---- */

/* WARNING: Removing unreachable block (ram,0xfffffffff0008c88) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0008c90) */

void sub_08c88(long param_1)

{
  do {
  } while (param_1 != 0);
  return;
}


/* ---- FUN_fffffffff0008ca0 @ fffffffff0008ca0 size=3456 ---- */

void FUN_fffffffff0008ca0(long param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  undefined4 local_28;
  undefined4 local_24;
  
  DAT_fffffffff0100170 = param_1;
  for (local_24 = 0; local_24 < 2; local_24 = local_24 + 1) {
    *(undefined4 *)(DAT_fffffffff0100170 + ((ulong)local_24 + 0x38) * 0x20) = 0;
    if (*(int *)(param_2 + (ulong)local_24 * 4) != 0) {
      puVar4 = (uint *)(DAT_fffffffff0100170 + ((ulong)local_24 + 0x38) * 0x20);
      *puVar4 = *puVar4 | 1;
    }
    if ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x100) == 0) {
      puVar4 = (uint *)(DAT_fffffffff0100170 + ((ulong)local_24 + 0x38) * 0x20);
      *puVar4 = *puVar4 & 0xfffffffd;
      *(uint *)(DAT_fffffffff0100170 + 0x758) = *(uint *)(DAT_fffffffff0100170 + 0x758) | 0x80;
    }
    else {
      puVar4 = (uint *)(DAT_fffffffff0100170 + ((ulong)local_24 + 0x38) * 0x20);
      *puVar4 = *puVar4 | 2;
      if (local_24 == 1) {
        iVar2 = 3;
      }
      else {
        iVar2 = 1;
      }
      puVar4 = (uint *)(DAT_fffffffff0100170 + ((ulong)local_24 + 0x38) * 0x20);
      *puVar4 = *puVar4 & 0xfffffc3f | iVar2 << 6;
    }
    puVar4 = (uint *)(DAT_fffffffff0100170 + ((ulong)local_24 + 0x38) * 0x20);
    *puVar4 = *puVar4 & 0xffffffc3 | 0x14;
    *(ulong *)(DAT_fffffffff0100170 + (ulong)local_24 * 0x20 + 0x718) =
         DAT_fffffffff0100170 + (ulong)local_24 * 0xc0 + 0x740;
    for (local_28 = 0; local_28 < 8; local_28 = local_28 + 1) {
      lVar5 = DAT_fffffffff0100170 + (ulong)local_28 * 0x18 + (ulong)local_24 * 0xc0;
      *(uint *)(lVar5 + 0x744) = *(uint *)(lVar5 + 0x744) & 0xfffffff8;
      lVar5 = DAT_fffffffff0100170 + (ulong)local_28 * 0x18 + (ulong)local_24 * 0xc0;
      *(uint *)(lVar5 + 0x744) = *(uint *)(lVar5 + 0x744) & 0xffffff87 | (local_24 & 0xf) << 3;
      lVar5 = DAT_fffffffff0100170 + (ulong)local_28 * 0x18 + (ulong)local_24 * 0xc0;
      *(uint *)(lVar5 + 0x744) = *(uint *)(lVar5 + 0x744) & 0xffff807f | (local_28 & 0xff) << 7;
      *(ulong *)(DAT_fffffffff0100170 + (ulong)local_28 * 0x18 + (ulong)local_24 * 0xc0 + 0x750) =
           DAT_fffffffff0100170 + ((ulong)local_24 + 0x38) * 0x20;
      lVar5 = DAT_fffffffff0100170 + (ulong)local_28 * 0x18 + (ulong)local_24 * 0xc0;
      *(undefined4 *)(lVar5 + 0x748) = 0;
      *(undefined4 *)(lVar5 + 0x74c) = 0;
      if ((*(uint *)(param_2 + (ulong)local_24 * 4) & 1 << ((long)(int)local_28 & 0x1fU)) != 0) {
        lVar5 = DAT_fffffffff0100170 + (ulong)local_28 * 0x18 + (ulong)local_24 * 0xc0;
        *(uint *)(lVar5 + 0x740) = *(uint *)(lVar5 + 0x740) | 1;
      }
    }
  }
  for (local_24 = 0; local_24 < 8; local_24 = local_24 + 1) {
    *(undefined4 *)(DAT_fffffffff0100170 + (ulong)local_24 * 0x20) = 0;
    if (*(int *)(param_3 + (ulong)local_24 * 4) != 0) {
      puVar4 = (uint *)(DAT_fffffffff0100170 + (ulong)local_24 * 0x20);
      *puVar4 = *puVar4 | 1;
    }
    puVar4 = (uint *)(DAT_fffffffff0100170 + (ulong)local_24 * 0x20);
    *puVar4 = *puVar4 | 2;
    puVar4 = (uint *)(DAT_fffffffff0100170 + (ulong)local_24 * 0x20);
    *puVar4 = *puVar4 & 0xffffffc3 | 0x14;
    if (local_24 + 1 < 5) {
      uVar3 = (local_24 & 0xff) + 1 & 0xf;
    }
    else {
      uVar3 = 1;
    }
    puVar4 = (uint *)(DAT_fffffffff0100170 + (ulong)local_24 * 0x20);
    *puVar4 = *puVar4 & 0xfffffc3f | uVar3 << 6;
    *(ulong *)(DAT_fffffffff0100170 + (ulong)local_24 * 0x20 + 0x18) =
         DAT_fffffffff0100170 + (ulong)local_24 * 0xc0 + 0x100;
    for (local_28 = 0; local_28 < 8; local_28 = local_28 + 1) {
      lVar5 = DAT_fffffffff0100170 + (ulong)local_28 * 0x18 + (ulong)local_24 * 0xc0;
      *(uint *)(lVar5 + 0x104) = *(uint *)(lVar5 + 0x104) & 0xfffffff8 | 1;
      lVar5 = DAT_fffffffff0100170 + (ulong)local_28 * 0x18 + (ulong)local_24 * 0xc0;
      *(uint *)(lVar5 + 0x104) = *(uint *)(lVar5 + 0x104) & 0xffffff87 | (local_24 & 0xf) << 3;
      lVar5 = DAT_fffffffff0100170 + (ulong)local_28 * 0x18 + (ulong)local_24 * 0xc0;
      *(uint *)(lVar5 + 0x104) = *(uint *)(lVar5 + 0x104) & 0xffff807f | (local_28 & 0xff) << 7;
      *(ulong *)(DAT_fffffffff0100170 + (ulong)local_28 * 0x18 + (ulong)local_24 * 0xc0 + 0x110) =
           DAT_fffffffff0100170 + (ulong)local_24 * 0x20;
      lVar5 = DAT_fffffffff0100170 + (ulong)local_28 * 0x18 + (ulong)local_24 * 0xc0;
      *(undefined4 *)(lVar5 + 0x108) = 0;
      *(undefined4 *)(lVar5 + 0x10c) = 0;
      if ((*(uint *)(param_3 + (ulong)local_24 * 4) & 1 << ((long)(int)local_28 & 0x1fU)) != 0) {
        lVar5 = DAT_fffffffff0100170 + (ulong)local_28 * 0x18 + (ulong)local_24 * 0xc0;
        *(uint *)(lVar5 + 0x100) = *(uint *)(lVar5 + 0x100) | 1;
      }
    }
  }
  for (local_24 = 0; lVar5 = DAT_fffffffff0100170, local_24 < 2; local_24 = local_24 + 1) {
    *(undefined4 *)(DAT_fffffffff0100170 + ((ulong)local_24 + 0x46) * 0x20) = 0;
    if (*(int *)(param_4 + (ulong)local_24 * 4) != 0) {
      puVar4 = (uint *)(DAT_fffffffff0100170 + ((ulong)local_24 + 0x46) * 0x20);
      *puVar4 = *puVar4 | 1;
    }
    puVar4 = (uint *)(DAT_fffffffff0100170 + ((ulong)local_24 + 0x46) * 0x20);
    *puVar4 = *puVar4 & 0xfffffffd;
    puVar4 = (uint *)(DAT_fffffffff0100170 + ((ulong)local_24 + 0x46) * 0x20);
    *puVar4 = *puVar4 & 0xffffffc3 | 0x14;
    *(ulong *)(DAT_fffffffff0100170 + (ulong)local_24 * 0x20 + 0x8d8) =
         DAT_fffffffff0100170 + (ulong)local_24 * 0xf0 + 0x900;
    for (local_28 = 0; local_28 < 8; local_28 = local_28 + 1) {
      lVar5 = DAT_fffffffff0100170 + (ulong)local_28 * 0x18 + (ulong)local_24 * 0xf0;
      *(uint *)(lVar5 + 0x904) = *(uint *)(lVar5 + 0x904) & 0xfffffff8 | 2;
      lVar5 = DAT_fffffffff0100170 + (ulong)local_28 * 0x18 + (ulong)local_24 * 0xf0;
      *(uint *)(lVar5 + 0x904) = *(uint *)(lVar5 + 0x904) & 0xffffff87 | (local_24 & 0xf) << 3;
      lVar5 = DAT_fffffffff0100170 + (ulong)local_28 * 0x18 + (ulong)local_24 * 0xf0;
      *(uint *)(lVar5 + 0x904) = *(uint *)(lVar5 + 0x904) & 0xffff807f | (local_28 & 0xff) << 7;
      *(ulong *)(DAT_fffffffff0100170 + (ulong)local_28 * 0x18 + (ulong)local_24 * 0xf0 + 0x910) =
           DAT_fffffffff0100170 + ((ulong)local_24 + 0x46) * 0x20;
      lVar5 = DAT_fffffffff0100170 + (ulong)local_28 * 0x18 + (ulong)local_24 * 0xf0;
      *(undefined4 *)(lVar5 + 0x908) = 0;
      *(undefined4 *)(lVar5 + 0x90c) = 0;
      if ((*(uint *)(param_4 + (ulong)local_24 * 4) & 1 << ((long)(int)local_28 & 0x1fU)) != 0) {
        lVar5 = DAT_fffffffff0100170 + (ulong)local_28 * 0x18 + (ulong)local_24 * 0xf0;
        *(uint *)(lVar5 + 0x900) = *(uint *)(lVar5 + 0x900) | 1;
      }
    }
    if ((*(uint *)(DAT_fffffffff0100170 + (ulong)local_24 * 0xf0 + 0x918) & 1) != 0) {
      lVar5 = DAT_fffffffff0100170 + (ulong)local_24 * 0xf0;
      *(uint *)(lVar5 + 0x918) = *(uint *)(lVar5 + 0x918) | 4;
    }
  }
  uVar1 = FUN_fffffffff0010a08(5000);
  *(int *)(lVar5 + 0xae0) = (int)uVar1;
  *(int *)(lVar5 + 0xae4) = (int)((ulong)uVar1 >> 0x20);
  return;
}


/* ---- FUN_fffffffff0009a20 @ fffffffff0009a20 size=600 ---- */

long FUN_fffffffff0009a20(int param_1,int param_2,byte param_3)

{
  uint uVar1;
  uint *puVar2;
  uint local_30;
  uint local_2c;
  long local_28;
  uint local_1c;
  uint local_18;
  int local_14;
  
  local_14 = 0;
  local_2c = 0;
  local_30 = 0;
  local_28 = 0;
  local_18 = 0;
  local_1c = 0;
  local_28 = FUN_fffffffff0009c78((long)param_1,&local_2c,&local_30);
  for (local_18 = 0; local_18 < local_2c; local_18 = local_18 + 1) {
    uVar1 = FUN_fffffffff0009f30((long)param_2,local_28 + (ulong)local_18 * 0x20);
    puVar2 = (uint *)(local_28 + (ulong)local_18 * 0x20);
    *puVar2 = *puVar2 & 0xfeffffff | (uVar1 & 1) << 0x18;
    if ((*(uint *)(local_28 + (ulong)local_18 * 0x20) & 0x1000000) != 0) {
      for (local_1c = 0; local_1c < local_30; local_1c = local_1c + 1) {
        if ((((*(uint *)(*(long *)(local_28 + (ulong)local_18 * 0x20 + 0x18) +
                        (ulong)local_1c * 0x18) & 1) != 0) &&
            ((*(uint *)(*(long *)(local_28 + (ulong)local_18 * 0x20 + 0x18) + (ulong)local_1c * 0x18
                       ) & 2) == 0)) &&
           ((uint)param_3 ==
            (*(uint *)(*(long *)(local_28 + (ulong)local_18 * 0x20 + 0x18) + (ulong)local_1c * 0x18)
             >> 2 & 1))) {
          local_14 = local_14 + 1;
        }
      }
    }
  }
  return (long)local_14;
}


/* ---- FUN_fffffffff0009c78 @ fffffffff0009c78 size=236 ---- */

long FUN_fffffffff0009c78(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 local_18;
  
  local_18 = 0;
  if (param_1 == 2) {
    local_18 = DAT_fffffffff0100170 + 0x8c0;
    *param_2 = 2;
    *param_3 = 8;
  }
  else if (param_1 < 3) {
    if (param_1 == 0) {
      local_18 = DAT_fffffffff0100170 + 0x700;
      *param_2 = 2;
      *param_3 = 8;
    }
    else if (param_1 == 1) {
      local_18 = DAT_fffffffff0100170;
      *param_2 = 8;
      *param_3 = 8;
    }
  }
  return local_18;
}


/* ---- FUN_fffffffff0009d64 @ fffffffff0009d64 size=372 ---- */

undefined1 FUN_fffffffff0009d64(long param_1,uint param_2)

{
  int iVar1;
  undefined4 local_24;
  undefined8 local_20;
  uint local_18;
  undefined1 local_11;
  
  local_11 = 1;
  local_24 = 0;
  local_18 = 0;
  do {
    if (param_2 <= local_18) {
      return local_11;
    }
    if (((*(uint *)(*(long *)(param_1 + 0x18) + (ulong)local_18 * 0x18) & 1) != 0) &&
       ((*(uint *)(*(long *)(param_1 + 0x18) + (ulong)local_18 * 0x18) & 2) != 0)) {
      local_20 = *(undefined8 *)
                  (*(long *)(*(long *)(param_1 + 0x18) + (ulong)local_18 * 0x18 + 8) + 0x34);
      iVar1 = FUN_fffffffff000ac4c(local_20,&local_24);
      if (iVar1 == 0) {
        return 0;
      }
    }
    local_18 = local_18 + 1;
  } while( true );
}


/* ---- FUN_fffffffff0009ed8 @ fffffffff0009ed8 size=88 ---- */

bool FUN_fffffffff0009ed8(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_fffffffff000f878(param_1,0);
  return iVar1 != 0;
}


/* ---- FUN_fffffffff0009f30 @ fffffffff0009f30 size=196 ---- */

bool FUN_fffffffff0009f30(uint param_1,uint *param_2)

{
  int iVar1;
  undefined1 local_11;
  
  local_11 = false;
  if ((*param_2 & 1) != 0) {
    if ((*param_2 & 2) == 0) {
      local_11 = true;
    }
    else {
      iVar1 = FUN_fffffffff000baf0(param_2,(long)(int)param_1);
      local_11 = iVar1 == 0;
      if ((1 < (int)param_1) && ((*param_2 >> 6 & 0xf) != param_1)) {
        local_11 = false;
      }
    }
  }
  return local_11;
}


/* ---- FUN_fffffffff0009ff4 @ fffffffff0009ff4 size=172 ---- */

void FUN_fffffffff0009ff4(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_fffffffff0010abc();
  lVar1 = FUN_fffffffff0010a50(lVar1 - *(long *)(param_1 + 0x3c));
  *(long *)(param_1 + 0x44) = *(long *)(param_1 + 0x44) + lVar1;
  return;
}


/* ---- FUN_fffffffff000a0a0 @ fffffffff000a0a0 size=1420 ---- */

void FUN_fffffffff000a0a0(long param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x34) + 0x10);
  bVar2 = false;
  if ((*(uint *)(param_1 + 0x10) & 2) == 0) {
    if ((*(int *)(param_1 + 0x30) == 1) && ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x10) != 0))
    {
      if ((*(int *)(lVar1 + 0x54) == 0) && (*(int *)(lVar1 + 0x48) != 0xffff)) {
        bVar2 = true;
      }
    }
    else if ((*(int *)(param_1 + 0x30) == 0) &&
            ((*(int *)(param_1 + 0x28) == 3 &&
             ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x100) != 0)))) {
      if ((*(int *)(lVar1 + 0x50) == 0) && (*(int *)(lVar1 + 0x44) != 0xffff)) {
        bVar2 = true;
      }
    }
    else if ((*(int *)(lVar1 + 0x4c) == 0) && (*(int *)(lVar1 + 0x40) != 0xffff)) {
      bVar2 = true;
    }
  }
  else {
    FUN_fffffffff0009ff4(param_1);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffd;
    if ((*(int *)(param_1 + 0x30) == 1) && ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x10) != 0))
    {
      *(int *)(lVar1 + 0x54) = *(int *)(lVar1 + 0x54) + -1;
      if (*(int *)(lVar1 + 0x54) == 0) {
        bVar2 = true;
      }
    }
    else if ((*(int *)(param_1 + 0x30) == 0) &&
            ((*(int *)(param_1 + 0x28) == 3 &&
             ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x100) != 0)))) {
      *(int *)(lVar1 + 0x50) = *(int *)(lVar1 + 0x50) + -1;
      if (*(int *)(lVar1 + 0x50) == 0) {
        bVar2 = true;
      }
    }
    else {
      *(int *)(lVar1 + 0x4c) = *(int *)(lVar1 + 0x4c) + -1;
      if (*(int *)(lVar1 + 0x4c) == 0) {
        bVar2 = true;
      }
    }
    *(int *)(*(long *)(param_1 + 0x34) + 0x30) = *(int *)(*(long *)(param_1 + 0x34) + 0x30) + -1;
    *(int *)(DAT_fffffffff0100168 +
             (long)*(int *)(param_1 + 0x28) * 0x50 + (long)*(int *)(param_1 + 0x30) * 400 + 0x2c18)
         = *(int *)(DAT_fffffffff0100168 +
                    (long)*(int *)(param_1 + 0x28) * 0x50 + (long)*(int *)(param_1 + 0x30) * 400 +
                   0x2c18) + -1;
    if ((*(int *)(*(long *)(param_1 + 0x34) + 0x30) == 0) &&
       ((*(uint *)(*(long *)(param_1 + 0x34) + 0x40) & 1) == 0)) {
      lVar3 = *(long *)(param_1 + 0x34);
      *(undefined4 *)(lVar3 + 0x28) = 0;
      *(undefined4 *)(lVar3 + 0x2c) = 0;
    }
    if ((*(int *)(DAT_fffffffff0100168 +
                  (long)*(int *)(param_1 + 0x28) * 0x50 + (long)*(int *)(param_1 + 0x30) * 400 +
                 0x2c18) == 0) &&
       ((*(uint *)(DAT_fffffffff0100168 +
                   (long)*(int *)(param_1 + 0x28) * 0x50 + (long)*(int *)(param_1 + 0x30) * 400 +
                  0x2c24) >> 2 & 1) == 0)) {
      lVar3 = DAT_fffffffff0100168 +
              (long)*(int *)(param_1 + 0x28) * 0x50 + (long)*(int *)(param_1 + 0x30) * 400;
      *(undefined4 *)(lVar3 + 0x2be8) = 0;
      *(undefined4 *)(lVar3 + 0x2bec) = 0;
    }
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    FUN_fffffffff00221a0(lVar1);
  }
  if (((bVar2) && ((*(uint *)(lVar1 + 0x84) & 1) != 0)) && ((*(uint *)(lVar1 + 0x84) & 8) == 0)) {
    FUN_fffffffff001ef24(lVar1,(long)*(int *)(param_1 + 0x30),(long)*(int *)(param_1 + 0x28));
  }
  return;
}


/* ---- FUN_fffffffff000a62c @ fffffffff000a62c size=292 ---- */

bool FUN_fffffffff000a62c(long param_1,ulong param_2)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = *(uint **)(param_1 + (param_2 & 0xffffffff) * 100 + 0x58);
  iVar2 = FUN_fffffffff0009ed8(puVar1);
  if (iVar2 != 0) {
    FUN_fffffffff0024af8();
    *puVar1 = *puVar1 & 0xfffffffd;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = *puVar1 & 0xffffff87;
    FUN_fffffffff0024b1c();
    FUN_fffffffff000ae74
              (*(undefined8 *)(puVar1 + 4),0,(long)*(int *)(param_1 + 0x28),puVar1[1] >> 7 & 0xff);
  }
  return iVar2 != 0;
}


/* ---- FUN_fffffffff000a750 @ fffffffff000a750 size=1076 ---- */

undefined1 FUN_fffffffff000a750(int param_1,long param_2,uint param_3)

{
  uint *puVar1;
  long lVar2;
  uint uStack_44;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint *local_18;
  
  local_18 = (uint *)0x0;
  local_1c = 0;
  local_20 = 0;
  uStack_44 = param_3;
  if (*(int *)(param_2 + 0x30) == 0) {
    while (uStack_44 >> ((long)(int)local_1c & 0x1fU) != 0) {
      if ((((uStack_44 & 1 << ((long)(int)local_1c & 0x1fU)) != 0) &&
          ((*(uint *)(DAT_fffffffff0100168 + (ulong)local_1c * 0x18 + (ulong)local_20 * 0xc0 +
                     0x275c) & 1) != 0)) &&
         (puVar1 = *(uint **)(DAT_fffffffff0100168 + (ulong)local_1c * 0x18 + (ulong)local_20 * 0xc0
                             + 0x2764), puVar1 != (uint *)0x0)) {
        FUN_fffffffff000ae74
                  (*(undefined8 *)(*(long *)(puVar1 + 1) + 0x10),0,
                   (long)*(int *)(*(long *)(puVar1 + 0xd) + 0x28),(long)(int)local_1c);
        *puVar1 = *puVar1 & 0xfffffffd;
        **(uint **)(puVar1 + 1) = **(uint **)(puVar1 + 1) & 0xfffffffd;
        lVar2 = *(long *)(puVar1 + 1);
        *(undefined4 *)(lVar2 + 8) = 0;
        *(undefined4 *)(lVar2 + 0xc) = 0;
        **(uint **)(puVar1 + 1) = **(uint **)(puVar1 + 1) & 0xffffff87;
        puVar1[1] = 0;
        puVar1[2] = 0;
        if (local_1c == ((uint)(CONCAT44(uStack_44,param_1) >> 7) & 0xff)) {
          *puVar1 = *puVar1 | 4;
        }
      }
      local_1c = local_1c + 1;
      if (local_1c == 8) {
        local_20 = 1;
        local_1c = 0;
        uStack_44 = uStack_44 >> 8;
      }
    }
  }
  else {
    for (local_24 = 0; local_24 < 8; local_24 = local_24 + 1) {
      if (*(int *)(*(long *)(param_2 + (ulong)local_24 * 100 + 0x58) + 4) == param_1) {
        local_18 = (uint *)(param_2 + (ulong)local_24 * 100 + 0x54);
        break;
      }
    }
    if (local_18 != (uint *)0x0) {
      FUN_fffffffff000ae74
                (*(undefined8 *)(*(long *)(local_18 + 1) + 0x10),0,(long)*(int *)(param_2 + 0x28),
                 *(uint *)(*(long *)(local_18 + 1) + 4) >> 7 & 0xff);
      *local_18 = *local_18 & 0xfffffffd;
      **(uint **)(local_18 + 1) = **(uint **)(local_18 + 1) & 0xfffffffd;
      lVar2 = *(long *)(local_18 + 1);
      *(undefined4 *)(lVar2 + 8) = 0;
      *(undefined4 *)(lVar2 + 0xc) = 0;
      local_18[1] = 0;
      local_18[2] = 0;
      *local_18 = *local_18 | 4;
    }
  }
  return 1;
}


/* ---- FUN_fffffffff000ab84 @ fffffffff000ab84 size=200 ---- */

void FUN_fffffffff000ab84(uint *param_1,char param_2,char param_3)

{
  *param_1 = *param_1 & 0xfffffffd;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      return;
    }
  }
  else {
    *param_1 = *param_1 | 4;
  }
  *param_1 = *param_1 & 0xfffffffe;
  *(int *)(*(long *)(param_1 + 0xd) + 0x2c) = *(int *)(*(long *)(param_1 + 0xd) + 0x2c) + -1;
  return;
}


/* ---- FUN_fffffffff000ac4c @ fffffffff000ac4c size=552 ---- */

char FUN_fffffffff000ac4c(long param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined4 local_18;
  undefined1 local_11;
  
  local_11 = '\x01';
  local_18 = 0;
  *param_2 = 0;
  while ((local_18 < 8 && (local_11 != '\0'))) {
    if ((*(uint *)(param_1 + (ulong)local_18 * 100 + 0x54) & 1) != 0) {
      if ((*(uint *)(param_1 + (ulong)local_18 * 100 + 0x54) >> 1 & 1) != 0) {
        iVar2 = FUN_fffffffff000a62c(param_1,(long)(int)local_18);
        if (iVar2 == 0) {
          local_11 = '\0';
        }
        else {
          FUN_fffffffff000ab84(param_1 + (ulong)local_18 * 100 + 0x54,0,0);
          *param_2 = *param_2 + 1;
        }
      }
    }
    local_18 = local_18 + 1;
  }
  if (((local_11 == '\0') || ((*(uint *)(param_1 + 0x10) & 1) != 0)) ||
     (lVar3 = FUN_fffffffff000afa0(param_1), lVar3 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar3 = DAT_fffffffff0100168 +
            (long)*(int *)(param_1 + 0x28) * 0x50 + (long)*(int *)(param_1 + 0x30) * 400;
    *(uint *)(lVar3 + 0x2c24) = *(uint *)(lVar3 + 0x2c24) | 1;
  }
  if (local_11 != '\0') {
    FUN_fffffffff000a0a0(param_1);
  }
  return local_11;
}


/* ---- FUN_fffffffff000ae74 @ fffffffff000ae74 size=300 ---- */

void FUN_fffffffff000ae74(uint *param_1,char param_2,uint param_3,uint param_4)

{
  if (param_2 == '\0') {
    *param_1 = *param_1 & 0xe1ffffff | (param_4 & 0xf) << 0x19;
    *(char *)((long)param_1 + 2) = *(char *)((long)param_1 + 2) + -1;
    if ((*(char *)((long)param_1 + 2) == '\0') && ((*param_1 & 2) != 0)) {
      *param_1 = *param_1 & 0xffffffc3 | 0x14;
    }
  }
  else {
    if ((*(char *)((long)param_1 + 2) == '\0') && ((*param_1 & 2) != 0)) {
      *param_1 = *param_1 & 0xffffffc3 | (param_3 & 0xf) << 2;
    }
    *(char *)((long)param_1 + 2) = *(char *)((long)param_1 + 2) + '\x01';
  }
  return;
}


/* ---- FUN_fffffffff000afa0 @ fffffffff000afa0 size=276 ---- */

undefined1 FUN_fffffffff000afa0(long param_1)

{
  int iVar1;
  uint local_18;
  
  local_18 = 0;
  while( true ) {
    if (7 < local_18) {
      return 1;
    }
    if ((((*(uint *)(param_1 + (ulong)local_18 * 100 + 0x54) & 1) != 0) &&
        ((*(uint *)(param_1 + (ulong)local_18 * 100 + 0x54) >> 1 & 1) != 0)) &&
       (iVar1 = FUN_fffffffff000ebc8(param_1 + (ulong)local_18 * 100 + 0x54), iVar1 == 0)) break;
    local_18 = local_18 + 1;
  }
  return 0;
}


/* ---- FUN_fffffffff000b0b4 @ fffffffff000b0b4 size=476 ---- */

undefined1 FUN_fffffffff000b0b4(long param_1,char param_2)

{
  int iVar1;
  long lVar2;
  uint local_18;
  undefined1 local_11;
  
  local_11 = 0;
  local_18 = 0;
  if ((*(uint *)(param_1 + 0x10) & 1) == 0) {
    for (; local_18 < 8; local_18 = local_18 + 1) {
      if (((*(uint *)(param_1 + (ulong)local_18 * 100 + 0x54) & 1) != 0) &&
         ((*(uint *)(param_1 + (ulong)local_18 * 100 + 0x54) >> 1 & 1) == 0)) {
        if ((*(uint *)(param_1 + (ulong)local_18 * 100 + 0x54) >> 3 & 1) == 0) {
          local_11 = 1;
          if (param_2 == '\0') {
            return 1;
          }
        }
        else {
          iVar1 = FUN_fffffffff000e948(param_1 + (ulong)local_18 * 100 + 0x54);
          if (iVar1 != 0) {
            lVar2 = param_1 + (ulong)local_18 * 100;
            *(uint *)(lVar2 + 0x54) = *(uint *)(lVar2 + 0x54) & 0xfffffff7;
            local_11 = 1;
            if (param_2 == '\0') {
              return 1;
            }
            FUN_fffffffff001fd90(param_1,(long)(int)local_18);
          }
        }
      }
    }
  }
  else {
    local_11 = 0;
  }
  return local_11;
}


/* ---- FUN_fffffffff000b290 @ fffffffff000b290 size=880 ---- */

char FUN_fffffffff000b290(int param_1,uint param_2,uint *param_3)

{
  int iVar1;
  int local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined8 local_38;
  uint local_2c;
  long local_28;
  uint local_20;
  uint local_1c;
  uint local_18;
  char local_11;
  
  local_11 = '\x01';
  local_40 = 0;
  local_44 = 0;
  local_28 = 0;
  local_18 = 0;
  local_1c = 0;
  local_2c = 0;
  local_38 = 0;
  local_48 = 0;
  local_3c = 0;
  local_28 = FUN_fffffffff0009c78((long)param_1,&local_40,&local_44);
  *param_3 = 0;
  local_1c = 0;
  while( true ) {
    if ((local_40 <= local_1c) || (param_2 <= local_18)) {
      return local_11;
    }
    if ((local_11 != '\0') && ((*(uint *)(local_28 + (ulong)local_1c * 0x20) & 0x1000000) != 0))
    break;
LAB_fffffffff000b5b4:
    local_1c = local_1c + 1;
  }
  local_3c = *(uint *)(local_28 + (ulong)local_1c * 0x20) >> 0x19 & 0xf;
  local_20 = 0;
  do {
    if ((local_44 <= local_20) || (param_2 <= local_18)) goto LAB_fffffffff000b5b4;
    local_2c = FUN_fffffffff0025b10(local_3c + local_20 + 1,local_44);
    if (((*(uint *)(*(long *)(local_28 + (ulong)local_1c * 0x20 + 0x18) + (ulong)local_2c * 0x18) &
         1) != 0) &&
       (((*(uint *)(*(long *)(local_28 + (ulong)local_1c * 0x20 + 0x18) + (ulong)local_2c * 0x18) &
         2) != 0 &&
        ((*(uint *)(*(long *)(local_28 + (ulong)local_1c * 0x20 + 0x18) + (ulong)local_2c * 0x18) &
         4) == 0)))) {
      local_38 = *(undefined8 *)
                  (*(long *)(*(long *)(local_28 + (ulong)local_1c * 0x20 + 0x18) +
                             (ulong)local_2c * 0x18 + 8) + 0x34);
      iVar1 = FUN_fffffffff000afa0(local_38);
      if (iVar1 != 0) {
        iVar1 = FUN_fffffffff000ac4c(local_38,&local_48);
        if (iVar1 == 0) {
          local_11 = '\0';
          goto LAB_fffffffff000b5b4;
        }
        local_18 = local_18 + local_48;
        *param_3 = local_18;
      }
    }
    local_20 = local_20 + 1;
  } while( true );
}


/* ---- sub_0b600 @ fffffffff000b600 size=96 ---- */

bool sub_0b600(long param_1,int param_2)

{
  return param_2 < *(int *)(*(long *)(*(long *)(param_1 + 8) + 0x34) + 0x28);
}


/* ---- FUN_fffffffff000b660 @ fffffffff000b660 size=164 ---- */

long FUN_fffffffff000b660(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = FUN_fffffffff0010abc();
  uVar2 = lVar1 - *(long *)(param_1 + 0x3c);
  if (uVar2 < *(ulong *)(param_1 + 0x14)) {
    lVar1 = *(long *)(param_1 + 0x14) - uVar2;
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}


/* ---- FUN_fffffffff000b704 @ fffffffff000b704 size=1004 ---- */

char FUN_fffffffff000b704(int param_1,int param_2,uint param_3,ulong *param_4)

{
  int iVar1;
  int local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  long local_58;
  uint *local_50;
  ulong local_48;
  uint local_3c;
  long local_38;
  uint local_2c;
  ulong local_28;
  uint local_1c;
  uint local_18;
  char local_11;
  
  local_11 = '\x01';
  local_60 = 0;
  local_64 = 0;
  local_38 = 0;
  local_68 = 0;
  local_18 = 0;
  local_1c = 0;
  local_3c = 0;
  local_48 = 0;
  local_28 = *(ulong *)(DAT_fffffffff0100170 + 0xae0);
  local_50 = (uint *)0x0;
  local_58 = 0;
  local_5c = 0;
  local_38 = FUN_fffffffff0009c78((long)param_1,&local_60,&local_64);
  local_1c = 0;
  while( true ) {
    if ((local_60 <= local_1c) || (param_3 <= local_18)) {
      if (local_11 != '\0') {
        if (param_3 <= local_18) {
          local_28 = 0;
        }
        *param_4 = local_28;
      }
      return local_11;
    }
    if ((local_11 != '\0') && ((*(uint *)(local_38 + (ulong)local_1c * 0x20) & 0x1000000) != 0))
    break;
LAB_fffffffff000ba70:
    local_1c = local_1c + 1;
  }
  local_5c = *(uint *)(local_38 + (ulong)local_1c * 0x20) >> 0x19 & 0xf;
  local_2c = 0;
  do {
    if ((local_64 <= local_2c) || (param_3 <= local_18)) goto LAB_fffffffff000ba70;
    local_3c = FUN_fffffffff0025b10(local_5c + local_2c + 1,local_64);
    local_50 = (uint *)(*(long *)(local_38 + (ulong)local_1c * 0x20 + 0x18) + (ulong)local_3c * 0x18
                       );
    if (((*local_50 & 2) != 0) && ((*local_50 & 4) == 0)) {
      local_58 = *(long *)(*(long *)(local_50 + 2) + 0x34);
      if (param_1 == 1) {
        iVar1 = *(int *)(local_58 + 0x28);
joined_r0xfffffffff000b9a8:
        if (param_2 < iVar1) goto LAB_fffffffff000ba34;
      }
      else if ((((param_2 != 1) || (param_1 != 0)) ||
               ((*(uint *)(*(long *)(local_38 + (ulong)local_1c * 0x20 + 0x18) +
                          (ulong)local_3c * 0x18) & 0x80) == 0)) && (2 < *(int *)(local_58 + 0x28)))
      {
        iVar1 = *(int *)(local_58 + 0x28);
        goto joined_r0xfffffffff000b9a8;
      }
      local_48 = FUN_fffffffff000b660(local_58);
      if (local_48 == 0) {
        iVar1 = FUN_fffffffff000ac4c(local_58,&local_68);
        if (iVar1 == 0) {
          local_11 = '\0';
          goto LAB_fffffffff000ba70;
        }
        local_18 = local_18 + local_68;
      }
      else if ((local_28 != 0) && (local_28 < local_48)) {
        local_28 = local_48;
      }
    }
LAB_fffffffff000ba34:
    local_2c = local_2c + 1;
  } while( true );
}


/* ---- FUN_fffffffff000baf0 @ fffffffff000baf0 size=116 ---- */

undefined1 FUN_fffffffff000baf0(uint *param_1,uint param_2)

{
  undefined1 local_11;
  
  local_11 = 0;
  if (((*param_1 & 0x3c) != 0x14) && ((*param_1 >> 2 & 0xf) != param_2)) {
    local_11 = 1;
  }
  return local_11;
}


/* ---- FUN_fffffffff000bb64 @ fffffffff000bb64 size=388 ---- */

uint FUN_fffffffff000bb64(int param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  int local_30;
  uint local_2c;
  long local_28;
  uint local_20;
  uint local_1c;
  long local_18;
  
  local_18 = 0;
  local_2c = 0;
  local_30 = 0;
  local_28 = 0;
  local_1c = 0;
  local_20 = 1;
  local_28 = FUN_fffffffff0009c78((long)param_1,&local_2c,&local_30);
  if (local_28 != 0) {
    for (local_1c = 0; local_1c < local_2c; local_1c = local_1c + 1) {
      if ((((*(uint *)(local_28 + (ulong)local_1c * 0x20) & 1) != 0) &&
          ((*(uint *)(local_28 + (ulong)local_1c * 0x20) & 2) != 0)) &&
         ((*(uint *)(local_28 + (ulong)local_1c * 0x20) >> 6 & 0xf) == param_2)) {
        local_18 = local_28 + (ulong)local_1c * 0x20;
        break;
      }
    }
  }
  if ((local_18 == 0) || (lVar3 = FUN_fffffffff000baf0(local_18,(long)(int)param_2), lVar3 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) && (iVar2 = FUN_fffffffff0009d64(local_18,(long)local_30), iVar2 == 0)) {
    local_20 = 0;
  }
  return local_20 & 0xff;
}


/* ---- FUN_fffffffff000bce8 @ fffffffff000bce8 size=584 ---- */

char FUN_fffffffff000bce8(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 local_3c;
  undefined8 local_38;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  char local_11;
  
  local_11 = '\x01';
  local_18 = *(int *)(param_1 + 0x30);
  local_1c = *(int *)(param_1 + 0x28);
  local_20 = *(undefined4 *)(param_1 + 0x24);
  local_24 = *(uint *)(param_1 + 0x2c);
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_38 = 0;
  if ((*(uint *)(param_1 + 0x10) & 4) != 0) {
    if ((*(uint *)(param_1 + 0x10) & 2) == 0) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffb;
    }
    else {
      local_3c = 0;
      iVar1 = FUN_fffffffff000ac4c(param_1,&local_3c);
      if (iVar1 == 0) {
        local_11 = '\0';
      }
      else {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffb;
      }
    }
  }
  if (((local_11 != '\0') &&
      (local_11 = FUN_fffffffff000bb64((long)local_18,(long)local_1c), local_11 != '\0')) &&
     (local_28 = FUN_fffffffff0009a20
                           ((long)local_18,(long)local_1c,*(uint *)(param_1 + 0x10) >> 3 & 1),
     local_28 < local_24)) {
    local_2c = local_24 - local_28;
    iVar1 = FUN_fffffffff000b290((long)local_18,(long)local_1c,(long)(int)local_2c,&local_30);
    if (iVar1 == 0) {
      local_11 = '\0';
    }
    else if (local_30 < local_2c) {
      local_2c = local_2c - local_30;
      iVar1 = FUN_fffffffff000b704((long)local_18,(long)local_1c,(long)(int)local_2c,&local_38);
      if (iVar1 == 0) {
        local_11 = '\0';
      }
      else {
        *param_2 = local_38;
      }
    }
  }
  return local_11;
}


/* ---- FUN_fffffffff000bf30 @ fffffffff000bf30 size=1808 ---- */

char FUN_fffffffff000bf30(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int local_68;
  int local_64;
  long local_60;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  char local_3a;
  char local_39;
  uint local_38;
  char local_31;
  
  local_31 = '\x01';
  local_40 = *(int *)(param_1 + 0x30);
  local_44 = *(int *)(param_1 + 0x28);
  local_48 = *(undefined4 *)(param_1 + 0x2c);
  local_4c = 0;
  local_64 = 0;
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_38 = 0;
  local_39 = '\0';
  local_3a = '\0';
  local_4c = FUN_fffffffff0009a20((long)local_40,(long)local_44,*(uint *)(param_1 + 0x10) >> 3 & 1);
  local_58 = FUN_fffffffff0009c78((long)local_40,&local_64,&local_68);
LAB_fffffffff000c07c:
  do {
    if (local_38 < 8) {
      if (((*(uint *)(param_1 + (ulong)local_38 * 100 + 0x54) & 1) == 0) ||
         ((*(uint *)(param_1 + (ulong)local_38 * 100 + 0x54) >> 1 & 1) != 0)) {
        local_38 = local_38 + 1;
        goto LAB_fffffffff000c07c;
      }
      local_39 = '\x01';
    }
    if (local_39 == '\0') {
      uVar3 = FUN_fffffffff0010abc();
      *(int *)(param_1 + 0x3c) = (int)uVar3;
      *(int *)(param_1 + 0x40) = (int)((ulong)uVar3 >> 0x20);
      local_3a = '\x01';
    }
    else {
      local_39 = '\0';
      local_60 = FUN_fffffffff000c640
                           (local_58,*(uint *)(param_1 + 0x10) >> 3 & 1,(long)local_64,
                            (long)local_68);
      if (*(int *)(param_1 + 0x30) == 1) {
        FUN_fffffffff00220a0(*(undefined8 *)(*(long *)(param_1 + 0x34) + 0x10));
      }
      iVar2 = FUN_fffffffff000f164(local_60,param_1 + (ulong)local_38 * 100 + 0x54);
      if (iVar2 == 0) {
        if (*(int *)(param_1 + 0x30) == 1) {
          FUN_fffffffff00221a0(*(undefined8 *)(*(long *)(param_1 + 0x34) + 0x10));
        }
        local_31 = '\0';
        goto LAB_fffffffff000c240;
      }
      FUN_fffffffff000ae74
                (*(undefined8 *)(local_60 + 0x10),1,(long)*(int *)(param_1 + 0x28),
                 *(uint *)(local_60 + 4) >> 7 & 0xff);
    }
    if (local_3a != '\0') {
LAB_fffffffff000c240:
      if ((local_31 != '\0') && ((*(uint *)(param_1 + 0x10) & 2) == 0)) {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
        if (((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x10) == 0) ||
           (*(int *)(param_1 + 0x30) != 1)) {
          if (((*(int *)(param_1 + 0x28) == 3) && (*(int *)(param_1 + 0x30) == 0)) &&
             ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x100) != 0)) {
            lVar4 = *(long *)(*(long *)(param_1 + 0x34) + 0x10);
            *(int *)(lVar4 + 0x50) = *(int *)(lVar4 + 0x50) + 1;
          }
          else {
            lVar4 = *(long *)(*(long *)(param_1 + 0x34) + 0x10);
            *(int *)(lVar4 + 0x4c) = *(int *)(lVar4 + 0x4c) + 1;
          }
        }
        else {
          lVar4 = *(long *)(*(long *)(param_1 + 0x34) + 0x10);
          *(int *)(lVar4 + 0x54) = *(int *)(lVar4 + 0x54) + 1;
        }
        if ((*(int *)(*(long *)(param_1 + 0x34) + 0x30) == 0) &&
           (*(long *)(*(long *)(param_1 + 0x34) + 0x28) == 0)) {
          lVar4 = *(long *)(param_1 + 0x34);
          uVar3 = FUN_fffffffff0010abc();
          *(int *)(lVar4 + 0x28) = (int)uVar3;
          *(int *)(lVar4 + 0x2c) = (int)((ulong)uVar3 >> 0x20);
        }
        lVar4 = DAT_fffffffff0100168;
        if (*(int *)(DAT_fffffffff0100168 + (long)local_44 * 0x50 + (long)local_40 * 400 + 0x2c18)
            == 0) {
          if (*(long *)(DAT_fffffffff0100168 + (long)local_44 * 0x50 + (long)local_40 * 400 + 0x2be8
                       ) == 0) {
            lVar1 = (long)local_40;
            lVar5 = (long)local_44;
            uVar3 = FUN_fffffffff0010abc();
            lVar4 = lVar4 + lVar5 * 0x50 + lVar1 * 400;
            *(int *)(lVar4 + 0x2be8) = (int)uVar3;
            *(int *)(lVar4 + 0x2bec) = (int)((ulong)uVar3 >> 0x20);
          }
        }
        *(int *)(DAT_fffffffff0100168 + (long)local_44 * 0x50 + (long)local_40 * 400 + 0x2c18) =
             *(int *)(DAT_fffffffff0100168 + (long)local_44 * 0x50 + (long)local_40 * 400 + 0x2c18)
             + 1;
        *(int *)(*(long *)(param_1 + 0x34) + 0x30) = *(int *)(*(long *)(param_1 + 0x34) + 0x30) + 1;
      }
      return local_31;
    }
  } while( true );
}


/* ---- FUN_fffffffff000c640 @ fffffffff000c640 size=528 ---- */

long FUN_fffffffff000c640(long param_1,byte param_2,uint param_3,uint param_4)

{
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = 0;
  local_14 = 0;
  while ((local_14 < param_4 && (local_20 == 0))) {
    local_18 = 0;
    while ((local_18 < param_3 && (local_20 == 0))) {
      if (((*(uint *)(*(long *)(param_1 + (ulong)local_18 * 0x20 + 0x18) + (ulong)local_14 * 0x18) &
           1) != 0) &&
         ((((*(uint *)(*(long *)(param_1 + (ulong)local_18 * 0x20 + 0x18) + (ulong)local_14 * 0x18)
            & 2) == 0 && ((*(uint *)(param_1 + (ulong)local_18 * 0x20) & 0x1000000) != 0)) &&
          ((uint)param_2 ==
           (*(uint *)(*(long *)(param_1 + (ulong)local_18 * 0x20 + 0x18) + (ulong)local_14 * 0x18)
            >> 2 & 1))))) {
        local_20 = *(long *)(param_1 + (ulong)local_18 * 0x20 + 0x18) + (ulong)local_14 * 0x18;
      }
      local_18 = local_18 + 1;
    }
    local_14 = local_14 + 1;
  }
  return local_20;
}


/* ---- FUN_fffffffff000c850 @ fffffffff000c850 size=2388 ---- */

undefined8 FUN_fffffffff000c850(ulong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  long lVar7;
  undefined8 local_28;
  uint local_1c;
  uint local_18;
  
  bVar6 = false;
  local_28 = 0;
  for (local_18 = 0; local_18 < 2; local_18 = local_18 + 1) {
    for (local_1c = 0; local_1c < 8; local_1c = local_1c + 1) {
      if (((((*(uint *)(DAT_fffffffff0100168 + (ulong)local_1c * 0x18 + (ulong)local_18 * 0xc0 +
                       0x275c) & 1) != 0) &&
           ((*(uint *)(DAT_fffffffff0100168 + (ulong)local_1c * 0x18 + (ulong)local_18 * 0xc0 +
                      0x275c) >> 1 & 1) != 0)) &&
          (*(long *)(DAT_fffffffff0100168 + (ulong)local_1c * 0x18 + (ulong)local_18 * 0xc0 + 0x2764
                    ) != 0)) &&
         (param_1 ==
          *(uint *)(*(long *)(DAT_fffffffff0100168 + (ulong)local_1c * 0x18 + (ulong)local_18 * 0xc0
                             + 0x2764) + 0xc))) {
        *param_2 = *(undefined4 *)
                    (DAT_fffffffff0100168 + (ulong)local_1c * 0x18 + (ulong)local_18 * 0xc0 + 0x2760
                    );
        local_28 = *(undefined8 *)
                    (*(long *)(DAT_fffffffff0100168 +
                               (ulong)local_1c * 0x18 + (ulong)local_18 * 0xc0 + 0x2764) + 0x34);
        lVar7 = DAT_fffffffff0100168 + (ulong)local_1c * 0x18 + (ulong)local_18 * 0xc0;
        uVar1 = *(undefined4 *)(lVar7 + 0x2760);
        uVar2 = *(undefined4 *)(lVar7 + 0x2764);
        uVar3 = *(undefined4 *)(lVar7 + 0x2768);
        uVar4 = *(undefined4 *)(lVar7 + 0x276c);
        uVar5 = *(undefined4 *)(lVar7 + 0x2770);
        *param_3 = *(undefined4 *)(lVar7 + 0x275c);
        param_3[1] = uVar1;
        param_3[2] = uVar2;
        param_3[3] = uVar3;
        param_3[4] = uVar4;
        param_3[5] = uVar5;
        bVar6 = true;
        break;
      }
    }
  }
  if (!bVar6) {
    for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
      for (local_1c = 0; local_1c < 8; local_1c = local_1c + 1) {
        if ((((*(uint *)(DAT_fffffffff0100168 + (ulong)local_1c * 0x18 + (ulong)local_18 * 0xc0 +
                        0x211c) & 1) != 0) &&
            ((*(uint *)(DAT_fffffffff0100168 + (ulong)local_1c * 0x18 + (ulong)local_18 * 0xc0 +
                       0x211c) >> 1 & 1) != 0)) &&
           ((*(long *)(DAT_fffffffff0100168 + (ulong)local_1c * 0x18 + (ulong)local_18 * 0xc0 +
                      0x2124) != 0 &&
            (param_1 ==
             *(uint *)(*(long *)(DAT_fffffffff0100168 +
                                 (ulong)local_1c * 0x18 + (ulong)local_18 * 0xc0 + 0x2124) + 0xc))))
           ) {
          *param_2 = *(undefined4 *)
                      (DAT_fffffffff0100168 + (ulong)local_1c * 0x18 + (ulong)local_18 * 0xc0 +
                      0x2120);
          local_28 = *(undefined8 *)
                      (*(long *)(DAT_fffffffff0100168 +
                                 (ulong)local_1c * 0x18 + (ulong)local_18 * 0xc0 + 0x2124) + 0x34);
          lVar7 = DAT_fffffffff0100168 + (ulong)local_1c * 0x18 + (ulong)local_18 * 0xc0;
          uVar1 = *(undefined4 *)(lVar7 + 0x2120);
          uVar2 = *(undefined4 *)(lVar7 + 0x2124);
          uVar3 = *(undefined4 *)(lVar7 + 0x2128);
          uVar4 = *(undefined4 *)(lVar7 + 0x212c);
          uVar5 = *(undefined4 *)(lVar7 + 0x2130);
          *param_3 = *(undefined4 *)(lVar7 + 0x211c);
          param_3[1] = uVar1;
          param_3[2] = uVar2;
          param_3[3] = uVar3;
          param_3[4] = uVar4;
          param_3[5] = uVar5;
          bVar6 = true;
          break;
        }
      }
    }
  }
  if (!bVar6) {
    for (local_18 = 0; local_18 < 2; local_18 = local_18 + 1) {
      for (local_1c = 0; local_1c < 8; local_1c = local_1c + 1) {
        if ((((*(uint *)(DAT_fffffffff0100168 + (ulong)local_1c * 0x18 + (ulong)local_18 * 0xf0 +
                        0x291c) & 1) != 0) &&
            ((*(uint *)(DAT_fffffffff0100168 + (ulong)local_1c * 0x18 + (ulong)local_18 * 0xf0 +
                       0x291c) >> 1 & 1) != 0)) &&
           ((*(long *)(DAT_fffffffff0100168 + (ulong)local_1c * 0x18 + (ulong)local_18 * 0xf0 +
                      0x2924) != 0 &&
            (param_1 ==
             *(uint *)(*(long *)(DAT_fffffffff0100168 +
                                 (ulong)local_1c * 0x18 + (ulong)local_18 * 0xf0 + 0x2924) + 0xc))))
           ) {
          *param_2 = *(undefined4 *)
                      (DAT_fffffffff0100168 + (ulong)local_1c * 0x18 + (ulong)local_18 * 0xf0 +
                      0x2920);
          local_28 = *(undefined8 *)
                      (*(long *)(DAT_fffffffff0100168 +
                                 (ulong)local_1c * 0x18 + (ulong)local_18 * 0xf0 + 0x2924) + 0x34);
          lVar7 = DAT_fffffffff0100168 + (ulong)local_1c * 0x18 + (ulong)local_18 * 0xf0;
          uVar1 = *(undefined4 *)(lVar7 + 0x2920);
          uVar2 = *(undefined4 *)(lVar7 + 0x2924);
          uVar3 = *(undefined4 *)(lVar7 + 0x2928);
          uVar4 = *(undefined4 *)(lVar7 + 0x292c);
          uVar5 = *(undefined4 *)(lVar7 + 0x2930);
          *param_3 = *(undefined4 *)(lVar7 + 0x291c);
          param_3[1] = uVar1;
          param_3[2] = uVar2;
          param_3[3] = uVar3;
          param_3[4] = uVar4;
          param_3[5] = uVar5;
          break;
        }
      }
    }
  }
  return local_28;
}


/* ---- FUN_fffffffff000d1a4 @ fffffffff000d1a4 size=268 ---- */

long FUN_fffffffff000d1a4(int param_1,uint param_2)

{
  long local_18;
  
  local_18 = 0;
  if ((param_1 != 2) && (param_1 < 3)) {
    if (param_1 == 0) {
      if ((*(uint *)(DAT_fffffffff0100170 + ((ulong)param_2 + 0x38) * 0x20) & 1) != 0) {
        local_18 = DAT_fffffffff0100170 + ((ulong)param_2 + 0x38) * 0x20 + 4;
      }
    }
    else if ((param_1 == 1) && ((*(uint *)(DAT_fffffffff0100170 + (ulong)param_2 * 0x20) & 1) != 0))
    {
      local_18 = DAT_fffffffff0100170 + (ulong)param_2 * 0x20 + 4;
    }
  }
  return local_18;
}


/* ---- FUN_fffffffff000d2b0 @ fffffffff000d2b0 size=24 ---- */

/* WARNING: Removing unreachable block (ram,0xfffffffff000d2b0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000d2b8) */

void FUN_fffffffff000d2b0(long param_1)

{
  do {
  } while (param_1 != 0);
  return;
}


/* ---- FUN_fffffffff000d2c8 @ fffffffff000d2c8 size=804 ---- */

void FUN_fffffffff000d2c8
               (undefined4 param_1,undefined4 param_2,uint param_3,char param_4,uint param_5)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if (((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x8000) != 0) &&
     (*(long *)(DAT_fffffffff0100168 + 0x31f8) != 0)) {
    lVar4 = *(long *)(DAT_fffffffff0100168 + 0x31f8);
    if (param_4 == '\0') {
      if (0x1f < *(uint *)(lVar4 + 0xa04)) {
        *(undefined4 *)(lVar4 + 0xa04) = 0;
      }
      *(undefined4 *)(lVar4 + (ulong)*(uint *)(lVar4 + 0xa04) * 0x1c + 0x300) = param_1;
      *(undefined4 *)(lVar4 + (ulong)*(uint *)(lVar4 + 0xa04) * 0x1c + 0x304) = param_2;
      lVar3 = lVar4 + (ulong)*(uint *)(lVar4 + 0xa04) * 0x1c;
      *(uint *)(lVar3 + 0x318) = *(uint *)(lVar3 + 0x318) & 0xfffffff9 | (param_3 & 3) << 1;
      uVar1 = *(uint *)(lVar4 + 0xa04);
      uVar2 = FUN_fffffffff0010abc();
      lVar4 = lVar4 + (ulong)uVar1 * 0x1c;
      *(int *)(lVar4 + 0x308) = (int)uVar2;
      *(int *)(lVar4 + 0x30c) = (int)((ulong)uVar2 >> 0x20);
    }
    else {
      lVar3 = lVar4 + (ulong)*(uint *)(lVar4 + 0xa04) * 0x1c;
      *(uint *)(lVar3 + 0x318) = *(uint *)(lVar3 + 0x318) & 0xfffffffe | param_5 & 1;
      uVar1 = *(uint *)(lVar4 + 0xa04);
      uVar2 = FUN_fffffffff0010abc();
      lVar3 = lVar4 + (ulong)uVar1 * 0x1c;
      *(int *)(lVar3 + 0x310) = (int)uVar2;
      *(int *)(lVar3 + 0x314) = (int)((ulong)uVar2 >> 0x20);
      *(int *)(lVar4 + 0xa04) = *(int *)(lVar4 + 0xa04) + 1;
    }
  }
  return;
}


/* ---- FUN_fffffffff000d5ec @ fffffffff000d5ec size=144 ---- */

long FUN_fffffffff000d5ec(int param_1,uint param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 1;
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    local_14 = FUN_fffffffff0025a5c((long)local_14,(long)param_1);
  }
  return (long)local_14;
}


/* ---- FUN_fffffffff000d67c @ fffffffff000d67c size=544 ---- */

void FUN_fffffffff000d67c(void)

{
  long lVar1;
  undefined8 uVar2;
  uint local_3c;
  long local_38;
  uint local_2c;
  uint local_28;
  byte local_23;
  byte local_22;
  byte local_21;
  
  FUN_fffffffff002465c((long)(*(int *)(DAT_fffffffff0100168 + 0x3124) + 0x98a),&local_2c);
  local_21 = (byte)((local_2c & 0xff) >> 5) & 3;
  local_22 = (byte)((local_2c & 0xff) >> 3) & 3;
  local_23 = (byte)local_2c & 7;
  DAT_fffffffff01033a8 = (uint)local_23 << 8 | (uint)local_22 << 6 | (uint)local_21 << 4;
  local_2c = DAT_fffffffff01033a8;
  FUN_fffffffff0024738
            ((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1fb1),&local_38,DAT_fffffffff01033a8
            );
  DAT_fffffffff01033b0 = local_38 << 8;
  local_38 = DAT_fffffffff01033b0;
  FUN_fffffffff00246d4
            ((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1fba),&local_3c,(long)(int)local_2c)
  ;
  local_28 = local_3c & 0x3f;
  DAT_fffffffff01033ac = FUN_fffffffff000d5ec(2,local_28 + 1);
  lVar1 = DAT_fffffffff0100168;
  local_28 = DAT_fffffffff01033ac;
  uVar2 = FUN_fffffffff00114bc();
  *(int *)(lVar1 + 0x3118) = (int)uVar2;
  *(int *)(lVar1 + 0x311c) = (int)((ulong)uVar2 >> 0x20);
  return;
}


/* ---- FUN_fffffffff000d89c @ fffffffff000d89c size=356 ---- */

void FUN_fffffffff000d89c(void)

{
  uint local_1c;
  uint local_18;
  uint local_14;
  
  FUN_fffffffff00246d4
            ((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1fb8),&local_1c,
             (long)DAT_fffffffff01033a8);
  local_14 = local_1c & 0x7fffffff;
  FUN_fffffffff00245a0
            ((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1fb8),local_14,
             (long)DAT_fffffffff01033a8);
  FUN_fffffffff00246d4
            ((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1fb8),&local_1c,
             (long)DAT_fffffffff01033a8);
  local_18 = local_1c & 0xbfffffff;
  FUN_fffffffff00245a0
            ((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1fb8),(long)(int)local_18,
             (long)DAT_fffffffff01033a8);
  return;
}


/* ---- FUN_fffffffff000da00 @ fffffffff000da00 size=724 ---- */

uint FUN_fffffffff000da00(int param_1,int param_2,char param_3,char param_4,char param_5)

{
  uint uStack_44;
  uint uStack_2c;
  uint local_14;
  
  uStack_44 = 0;
  uStack_2c = 0;
  if (param_1 == 2) {
    if (param_3 == '\0') {
      if (param_2 == 1) {
        uStack_44 = 0xc000000;
      }
      else {
        uStack_44 = 0x8000000;
      }
    }
    else if (param_2 == 1) {
      uStack_2c = 0xc000000;
    }
    else {
      uStack_2c = 0x8000000;
    }
  }
  else if (param_1 < 3) {
    if (param_1 == 0) {
      if (param_3 == '\0') {
        uStack_44 = 0x10000000;
      }
      else {
        uStack_2c = 0x10000000;
      }
    }
    else if (param_1 == 1) {
      if (param_3 == '\0') {
        uStack_44 = (uint)(param_4 != '\0');
        if (param_5 == '\0') {
          uStack_44 = (uint)(param_4 != '\0');
        }
        else {
          uStack_44 = uStack_44 | 0x4000000;
        }
      }
      else if (param_5 == '\0') {
        uStack_2c = 0;
      }
      else {
        uStack_2c = 0x4000000;
      }
    }
  }
  if (param_3 == '\0') {
    local_14 = uStack_44;
  }
  else {
    local_14 = uStack_2c;
  }
  return local_14;
}


/* ---- FUN_fffffffff000dcd4 @ fffffffff000dcd4 size=2568 ---- */

void FUN_fffffffff000dcd4(int param_1,ulong *param_2)

{
  uint uVar1;
  int iVar2;
  ulong local_160;
  uint local_158;
  uint local_150 [64];
  uint *local_50;
  uint *local_48;
  uint *local_40;
  uint local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  
  FUN_fffffffff0025980(local_150,0,0x100);
  local_24 = 0x40;
  local_158 = 0xffff1000;
  local_34 = (uint)*param_2 & 7;
  for (local_28 = 0x40; local_28 != 0; local_28 = local_28 - 1) {
    if ((local_24 == 0) && (local_24 = local_28, 0x4000 < local_28)) {
      local_24 = 0x4000;
    }
    local_158 = local_158 & 0xc000ffff | (uint)((short)local_24 - 2U & 0x3fff) << 0x10;
    local_150[0x40 - local_28] = local_158;
    local_24 = local_24 - 1;
  }
  if (param_1 == 0xa4) {
    local_40 = local_150;
    FUN_fffffffff0025980(local_40,0,0x1c);
    *(undefined1 *)((long)local_40 + 1) = 0xa4;
    *local_40 = *local_40 & 0xc000ffff | 0x50000;
    *local_40 = *local_40 | 0xc0000000;
    local_40[1] = local_40[1] & 0xf0000000 | *(uint *)((long)param_2 + 0x2c) & 0xfffffff;
    if ((*param_2 & 0x20) == 0) {
      iVar2 = 2;
    }
    else {
      iVar2 = 0;
    }
    local_40[1] = local_40[1] & 0xcfffffff | iVar2 << 0x1c;
    if ((*param_2 & 0x20) == 0) {
      iVar2 = 2;
    }
    else {
      iVar2 = 0;
    }
    local_40[1] = local_40[1] & 0x3fffffff | iVar2 << 0x1e;
    local_40[2] = local_40[2] & 0xf0000003 | ((uint)param_2[2] & 0x3ffffff) << 2;
    if (local_34 == 0) {
      local_40[2] = local_40[2] & 0x8fffffff | 0x40000000;
    }
    else if (local_34 == 1) {
      local_40[2] = local_40[2] & 0x8fffffff;
    }
    if ((*param_2 & 0x20) == 0) {
      local_40[3] = *(uint *)(DAT_fffffffff0100168 + 0x310c);
      local_40[4] = (uint)((ulong)*(undefined8 *)(DAT_fffffffff0100168 + 0x310c) >> 0x20);
      local_40[5] = (uint)param_2[5];
      local_40[6] = 0;
    }
    goto LAB_fffffffff000e514;
  }
  if (0xa4 < param_1) goto LAB_fffffffff000e514;
  if (param_1 != 0xa2) {
    if (param_1 == 0xa3) {
      local_48 = local_150;
      FUN_fffffffff0025980(local_48,0,0x18);
      *(undefined1 *)((long)local_48 + 1) = 0xa3;
      *local_48 = *local_48 & 0xc000ffff | 0x40000;
      *local_48 = *local_48 | 0xc0000000;
      uVar1 = FUN_fffffffff000da00
                        ((long)(int)local_34,(long)(int)*(uint *)((long)param_2 + 0xc),0,
                         *param_2 >> 3 & 1,*param_2 >> 4 & 1);
      local_48[1] = uVar1;
      local_48[1] = local_48[1] & 0xffffffcf;
      local_48[1] = local_48[1] & 0x1fffffff | 0x20000000;
      local_48[2] = local_48[2] & 0xf0000003 | ((uint)param_2[2] & 0x3ffffff) << 2;
      if ((*param_2 & 0x40) != 0) {
        local_48[1] = local_48[1] | 3;
        local_48[3] = local_48[3] & 3 | (int)(param_2[6] >> 2) << 2;
        local_48[4] = (uint)(param_2[6] >> 0x20);
        local_48[5] = (uint)param_2[7];
      }
    }
    goto LAB_fffffffff000e514;
  }
  local_50 = local_150;
  FUN_fffffffff0025980(local_50,0,0x1c);
  *(undefined1 *)((long)local_50 + 1) = 0xa2;
  *local_50 = *local_50 & 0xc000ffff | 0x50000;
  *local_50 = *local_50 | 0xc0000000;
  uVar1 = FUN_fffffffff000da00
                    ((long)(int)local_34,(long)(int)*(uint *)((long)param_2 + 0xc),1,0,
                     *param_2 >> 4 & 1);
  local_50[1] = uVar1;
  local_50[1] = local_50[1] & 0xffffffcf;
  local_50[1] = local_50[1] & 0xfffff0ff | (*(uint *)((long)param_2 + 4) & 0xf) << 8;
  local_2c = 0;
  local_30 = 0;
  if (local_34 == 2) {
    local_30 = (uint)param_2[1];
  }
  else if ((int)local_34 < 3) {
    if (local_34 != 0) {
      if (local_34 != 1) goto LAB_fffffffff000dff0;
      if (3 < *(uint *)((long)param_2 + 0xc)) {
        local_2c = 1;
        *(uint *)((long)param_2 + 0xc) = *(uint *)((long)param_2 + 0xc) - 4;
      }
    }
    local_30 = (uint)param_2[1] | *(uint *)((long)param_2 + 0xc) << 3 | local_2c << 5;
  }
LAB_fffffffff000dff0:
  local_50[1] = local_50[1] & 0xffe01fff | (local_30 & 0xff) << 0xd;
  local_50[1] = local_50[1] & 0x1fffffff | 0x20000000;
  local_50[2] = local_50[2] & 0xfffffffd;
  local_50[2] = local_50[2] & 0xf0000003 | ((uint)param_2[2] & 0x3ffffff) << 2;
  local_50[3] = (uint)param_2[3];
  local_50[4] = (uint)(param_2[3] >> 0x20);
  local_50[5] = (uint)param_2[4];
  local_50[6] = (uint)(param_2[4] >> 0x20);
LAB_fffffffff000e514:
  if ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 2) != 0) {
    FUN_fffffffff000d67c();
    FUN_fffffffff000d89c();
    *(uint *)(DAT_fffffffff0100168 + 0x31ac) = *(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0xfffffffd
    ;
  }
  FUN_fffffffff0024738
            ((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1fdf),&local_160,
             (long)DAT_fffffffff01033a8);
  if (DAT_fffffffff01033ac <= local_160) {
    local_160 = 0;
  }
  local_160 = local_160 * 4;
  FUN_fffffffff0025154(0x100,local_150,DAT_fffffffff01033b0 + local_160);
  local_160 = (local_160 >> 2) + 0x40;
  FUN_fffffffff00115a4(*(undefined8 *)(DAT_fffffffff0100168 + 0x3118),local_160,1);
  FUN_fffffffff0024608
            ((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1fdf),local_160,
             (long)DAT_fffffffff01033a8);
  return;
}


/* ---- FUN_fffffffff000e6dc @ fffffffff000e6dc size=212 ---- */

void FUN_fffffffff000e6dc(void)

{
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_18 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x2f;
  local_14 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x62f;
  FUN_fffffffff0025858(&DAT_fffffffff0100178,&local_18,8);
  local_20 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x7b;
  local_1c = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x67b;
  FUN_fffffffff0025858(&DAT_fffffffff0100180,&local_20,8);
  return;
}


/* ---- FUN_fffffffff000e7b0 @ fffffffff000e7b0 size=112 ---- */

void FUN_fffffffff000e7b0(ulong param_1)

{
  undefined8 local_28;
  
  local_28 = param_1;
  if (param_1 < 0x1000) {
    local_28 = 0x1000;
  }
  *(uint *)(DAT_fffffffff0100168 + 0x31ac) = *(uint *)(DAT_fffffffff0100168 + 0x31ac) | 8;
  FUN_fffffffff002563c(local_28 & 0xfffffffffffff000);
  return;
}


/* ---- FUN_fffffffff000e820 @ fffffffff000e820 size=188 ---- */

byte FUN_fffffffff000e820(void)

{
  byte bVar1;
  
  bVar1 = DAT_fffffffff0100168[0xc3c] != DAT_fffffffff0100168[0xc3d];
  if ((bool)bVar1) {
    *DAT_fffffffff0100168 = *DAT_fffffffff0100168 | 1;
  }
  if ((*DAT_fffffffff0100168 & 2) != 0) {
    bVar1 = bVar1 | 2;
  }
  if ((*DAT_fffffffff0100168 & 4) != 0) {
    bVar1 = bVar1 | 4;
  }
  return bVar1;
}


/* ---- FUN_fffffffff000e8dc @ fffffffff000e8dc size=108 ---- */

long FUN_fffffffff000e8dc(void)

{
  undefined4 local_14;
  
  do {
    FUN_fffffffff0024af8();
    local_14 = FUN_fffffffff000e820();
    if (local_14 == 0) {
      thunk_FUN_fffffffff0023fa0();
      local_14 = FUN_fffffffff000e820();
    }
    else {
      FUN_fffffffff0024b1c();
    }
  } while (local_14 == 0);
  return (long)local_14;
}


/* ---- FUN_fffffffff000e948 @ fffffffff000e948 size=640 ---- */

undefined1 FUN_fffffffff000e948(uint *param_1)

{
  int local_30;
  int local_2c;
  long local_28;
  long local_20;
  undefined1 local_11;
  
  local_11 = 0;
  local_20 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  if (*(int *)(*(long *)(param_1 + 0xd) + 0x30) == 1) {
    local_20 = *(long *)(param_1 + 4) + 0x2d8;
    local_28 = *(long *)(param_1 + 4) + 0x800;
  }
  else if (*(int *)(*(long *)(param_1 + 0xd) + 0x30) == 0) {
    local_20 = *(long *)(param_1 + 4) + 0x254;
    local_28 = *(long *)(param_1 + 4) + 0x800;
  }
  else if (*(int *)(*(long *)(param_1 + 0xd) + 0x30) == 2) {
    local_20 = *(long *)(param_1 + 4) + 0x14;
    local_28 = *(long *)(param_1 + 4) + 0x200;
  }
  FUN_fffffffff0025074(4,local_20,&local_2c);
  if ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x2000) == 0) {
    FUN_fffffffff0025074(4,*(undefined8 *)(param_1 + 8),&local_30);
  }
  else {
    FUN_fffffffff0025074(4,local_28,&local_30);
  }
  if ((*param_1 & 0x800) != 0) {
    local_30 = local_30 << 4;
  }
  if (local_30 != local_2c) {
    local_11 = 1;
  }
  return local_11;
}


/* ---- FUN_fffffffff000ebc8 @ fffffffff000ebc8 size=52 ---- */

uint FUN_fffffffff000ebc8(uint *param_1)

{
  return *param_1 >> 4 & 1;
}


/* ---- FUN_fffffffff000ebfc @ fffffffff000ebfc size=132 ---- */

undefined1 FUN_fffffffff000ebfc(undefined8 param_1,undefined1 param_2)

{
  int iVar1;
  
  FUN_fffffffff0010abc();
  while (iVar1 = FUN_fffffffff000ef3c(param_1,param_2), iVar1 == 0) {
    FUN_fffffffff000d2b0(50000);
  }
  return 1;
}


/* ---- FUN_fffffffff000ec80 @ fffffffff000ec80 size=180 ---- */

undefined1 FUN_fffffffff000ec80(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = FUN_fffffffff0010abc();
  while( true ) {
    lVar3 = FUN_fffffffff0010abc();
    uVar4 = FUN_fffffffff0010a08(param_2);
    if (uVar4 <= (ulong)(lVar3 - lVar2)) {
      return 0;
    }
    iVar1 = FUN_fffffffff000ef3c(param_1,param_3);
    if (iVar1 == 0) break;
    FUN_fffffffff000d2b0(50000);
  }
  return 1;
}


/* ---- FUN_fffffffff000ed34 @ fffffffff000ed34 size=148 ---- */

void FUN_fffffffff000ed34(long param_1,uint *param_2)

{
  *param_2 = (*(uint *)(param_1 + 4) >> 7 & 0xff) << 8 | (*(uint *)(param_1 + 4) >> 3 & 0xf) << 6;
  return;
}


/* ---- FUN_fffffffff000edc8 @ fffffffff000edc8 size=188 ---- */

void FUN_fffffffff000edc8(long param_1,uint *param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 1;
  local_18 = *(uint *)(param_1 + 4) >> 3 & 0xf;
  if (3 < local_18) {
    local_14 = 2;
    local_18 = local_18 - 4;
  }
  *param_2 = (*(uint *)(param_1 + 4) >> 7 & 0xff) << 8 | local_18 << 6 | local_14 << 4;
  return;
}


/* ---- FUN_fffffffff000ee84 @ fffffffff000ee84 size=184 ---- */

uint FUN_fffffffff000ee84(long param_1)

{
  uint uStack_1c;
  uint local_18;
  uint local_14;
  
  local_14 = *(uint *)(param_1 + 4) >> 3 & 0xf;
  local_18 = *(uint *)(param_1 + 4) >> 7 & 0xff;
  uStack_1c = 0;
  FUN_fffffffff002465c((long)*(int *)(&DAT_fffffffff0100178 + (ulong)local_14 * 4),&uStack_1c);
  return uStack_1c >> ((long)(int)(local_18 << 2) & 0x1fU) & 1;
}


/* ---- FUN_fffffffff000ef3c @ fffffffff000ef3c size=552 ---- */

ulong FUN_fffffffff000ef3c(long param_1,char param_2)

{
  uint uVar1;
  ulong uVar2;
  int local_28;
  int local_24;
  long local_20;
  long local_18;
  
  local_24 = 0;
  local_28 = 0;
  local_18 = 0;
  local_20 = 0;
  uVar1 = *(uint *)(param_1 + 4) & 7;
  if (uVar1 == 2) {
    uVar2 = FUN_fffffffff000ee84(param_1);
  }
  else {
    if (uVar1 < 3) {
      if (uVar1 == 0) {
        if (param_2 == '\0') {
          local_18 = *(long *)(*(long *)(param_1 + 8) + 0x10) + 0x208;
          FUN_fffffffff0025074(4,local_18,&local_28);
        }
        else {
          FUN_fffffffff000ed34(param_1,&local_24);
          FUN_fffffffff00246d4
                    ((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1e80),&local_28,
                     (long)local_24);
        }
      }
      else if (uVar1 == 1) {
        if (param_2 == '\0') {
          local_20 = *(long *)(*(long *)(param_1 + 8) + 0x10) + 0x208;
          FUN_fffffffff0025074(4,local_20,&local_28);
        }
        else {
          FUN_fffffffff000edc8(param_1,&local_24);
          FUN_fffffffff00246d4
                    ((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1fab),&local_28,
                     (long)local_24);
        }
      }
    }
    uVar2 = (long)local_28 & 1;
  }
  return uVar2;
}


/* ---- FUN_fffffffff000f164 @ fffffffff000f164 size=1812 ---- */

undefined1 FUN_fffffffff000f164(uint *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  uint *local_90;
  uint *local_88;
  undefined8 local_78;
  ulong local_70;
  ulong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  uint local_30;
  uint local_2c;
  long local_28;
  long local_20;
  undefined1 local_11;
  
  local_11 = 0;
  local_38 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  uVar1 = param_1[1];
  local_70 = CONCAT44(param_1[1] >> 3,param_1[1] >> 7) & 0xf000000ff;
  local_68 = (ulong)param_2[3];
  local_60 = *(undefined8 *)(param_2 + 4);
  local_58 = *(undefined8 *)(param_2 + 6);
  if (((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x10) == 0) || ((param_1[1] & 7) != 1)) {
    if (((param_1[1] & 7) == 0) &&
       ((*(int *)(*(long *)(param_2 + 0xd) + 0x28) == 3 &&
        ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x100) != 0)))) {
      local_78 = CONCAT44(*(undefined4 *)
                           (*(long *)(*(long *)(*(long *)(param_2 + 0xd) + 0x34) + 0x10) + 0x44),
                          uVar1) & 0xffffffff00000007;
    }
    else {
      local_78 = CONCAT44(*(undefined4 *)
                           (*(long *)(*(long *)(*(long *)(param_2 + 0xd) + 0x34) + 0x10) + 0x40),
                          uVar1) & 0xffffffff00000007;
    }
  }
  else {
    local_78 = CONCAT44(*(undefined4 *)
                         (*(long *)(*(long *)(*(long *)(param_2 + 0xd) + 0x34) + 0x10) + 0x48),uVar1
                       ) & 0xffffffff00000007;
  }
  local_90 = param_2;
  local_88 = param_1;
  if ((param_1[1] & 7) == 0) {
    local_28 = *(long *)(param_2 + 4) + 0x20c;
    FUN_fffffffff002482c(0,local_28,(long)(int)local_78._4_4_);
    FUN_fffffffff002493c();
  }
  local_11 = 1;
  *local_88 = *local_88 | 2;
  local_88[2] = (uint)local_90;
  local_88[3] = (uint)((ulong)local_90 >> 0x20);
  *local_88 = *local_88 & 0xffffff87 | (local_78._4_4_ & 0xf) << 3;
  *local_90 = *local_90 | 2;
  local_90[1] = (uint)local_88;
  local_90[2] = (uint)((ulong)local_88 >> 0x20);
  if (((*local_90 & 0x20) != 0) && ((local_88[1] & 7) == 1)) {
    local_2c = (local_88[1] >> 7 & 0xff) << 8 | (local_88[1] >> 3 & 0xf) << 6 | 0x10;
    FUN_fffffffff0025694(1,local_2c);
  }
  FUN_fffffffff000d2c8(0,(long)(int)local_68,(uint)local_78 & 7,0,local_11);
  local_d0 = local_78;
  local_c8 = local_70;
  local_c0 = local_68;
  local_b8 = local_60;
  local_b0 = local_58;
  local_a8 = local_50;
  local_a0 = local_48;
  local_98 = local_40;
  FUN_fffffffff000dcd4(0xa2,&local_d0);
  iVar2 = FUN_fffffffff000ebfc
                    (local_88,2000000,*(uint *)(DAT_fffffffff0100168 + 0x31ac) >> 0x10 & 1);
  if (iVar2 == 0) {
    local_11 = 0;
    *local_88 = *local_88 & 0xfffffffd;
    local_88[2] = 0;
    local_88[3] = 0;
    *local_88 = *local_88 & 0xffffff87;
    *local_90 = *local_90 & 0xfffffffd;
    local_90[1] = 0;
    local_90[2] = 0;
    if (((*local_90 & 0x20) != 0) && ((local_88[1] & 7) == 1)) {
      local_30 = (local_88[1] >> 7 & 0xff) << 8 | (local_88[1] >> 3 & 0xf) << 6 | 0x10;
      FUN_fffffffff0025694(0,local_30);
    }
  }
  FUN_fffffffff000d2c8(0,(long)(int)local_68,(uint)local_78 & 7,1,local_11);
  local_20 = 0;
  if ((local_88[1] & 7) == 1) {
    local_20 = *(long *)(*(long *)(local_88 + 2) + 0x10) + 0x804;
  }
  else if ((local_88[1] & 7) == 0) {
    local_20 = *(long *)(*(long *)(local_88 + 2) + 0x10) + 0x804;
  }
  else if ((local_88[1] & 7) == 2) {
    local_20 = *(long *)(*(long *)(local_88 + 2) + 0x10) + 0x204;
  }
  FUN_fffffffff002482c((long)local_38,local_20,0);
  FUN_fffffffff002493c();
  return local_11;
}


/* ---- FUN_fffffffff000f878 @ fffffffff000f878 size=1572 ---- */

char FUN_fffffffff000f878(long param_1,char param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  ulong local_d0;
  long local_c8;
  ulong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  char local_89;
  long local_88;
  undefined4 local_78 [2];
  int local_70;
  undefined4 local_6c;
  ulong local_68;
  long local_60;
  ulong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  uint local_24;
  long local_20;
  byte local_12;
  char local_11;
  
  local_11 = '\0';
  local_12 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_68 = (ulong)*(uint *)(param_1 + 4) & 0xffffffff00000007;
  local_60 = ((ulong)(*(uint *)(param_1 + 4) >> 3) & 0xf) << 0x20;
  local_58 = (ulong)*(uint *)(*(long *)(param_1 + 8) + 0xc);
  local_20 = 0;
  if ((*(uint *)(param_1 + 4) & 7) == 1) {
    local_20 = *(long *)(*(long *)(param_1 + 8) + 0x10) + 0x804;
  }
  else if ((*(uint *)(param_1 + 4) & 7) == 0) {
    local_20 = *(long *)(*(long *)(param_1 + 8) + 0x10) + 0x804;
  }
  else if ((*(uint *)(param_1 + 4) & 7) == 2) {
    local_20 = *(long *)(*(long *)(param_1 + 8) + 0x10) + 0x204;
  }
  local_6c = 1;
  local_70 = 4;
  local_89 = param_2;
  local_88 = param_1;
  FUN_fffffffff0025154(4,&local_6c,local_20);
  local_78[0] = 0;
  FUN_fffffffff0025074((long)local_70,local_20,local_78);
  FUN_fffffffff000d2c8(1,(long)(int)local_58,(uint)local_68 & 7,0,local_11);
  local_d0 = local_68;
  local_c8 = local_60;
  local_c0 = local_58;
  local_b8 = local_50;
  local_b0 = local_48;
  local_a8 = local_40;
  local_a0 = local_38;
  local_98 = local_30;
  FUN_fffffffff000dcd4(0xa3,&local_d0);
  iVar2 = FUN_fffffffff000ec80
                    (local_88,2000000,*(uint *)(DAT_fffffffff0100168 + 0x31ac) >> 0x10 & 1);
  if (iVar2 == 0) {
    if ((*(uint *)(local_88 + 4) & 7) != 2) {
      *(uint *)(DAT_fffffffff0100168 + 0x31ac) = *(uint *)(DAT_fffffffff0100168 + 0x31ac) | 4;
      **(uint **)(local_88 + 8) = **(uint **)(local_88 + 8) | 0x400;
      for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
        if (*(long *)(DAT_fffffffff0100168 + ((ulong)local_24 + 0x630) * 8 + 0xc) == 0) {
          uVar1 = *(undefined8 *)(local_88 + 8);
          lVar3 = DAT_fffffffff0100168 + ((ulong)local_24 + 0x630) * 8;
          *(int *)(lVar3 + 0xc) = (int)uVar1;
          *(int *)(lVar3 + 0x10) = (int)((ulong)uVar1 >> 0x20);
          break;
        }
      }
      if (local_89 == '\0') {
        FUN_fffffffff0010918((long)*(int *)(*(long *)(local_88 + 8) + 0xc));
      }
    }
  }
  else {
    local_11 = '\x01';
    local_12 = FUN_fffffffff000fe9c(local_88);
  }
  FUN_fffffffff000d2c8(1,(long)(int)local_58,(uint)local_68 & 7,1,local_11);
  if (local_11 != '\0') {
    if (((**(uint **)(local_88 + 8) & 0x20) != 0) && ((*(uint *)(local_88 + 4) & 7) == 1)) {
      local_28 = (*(uint *)(local_88 + 4) >> 7 & 0xff) << 8 |
                 (*(uint *)(local_88 + 4) >> 3 & 0xf) << 6 | 0x10;
      FUN_fffffffff0025694(0,local_28);
    }
    **(uint **)(local_88 + 8) = **(uint **)(local_88 + 8) & 0xfffffff7 | (local_12 & 1) << 3;
    if (local_12 == 0) {
      lVar3 = DAT_fffffffff0100168 +
              (long)*(int *)(*(long *)(*(long *)(local_88 + 8) + 0x34) + 0x28) * 0x50 +
              (long)(int)((uint)local_68 & 7) * 400;
      *(uint *)(lVar3 + 0x2c24) = *(uint *)(lVar3 + 0x2c24) | 1;
      if ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x20) == 0) {
        FUN_fffffffff001feec(*(undefined8 *)(local_88 + 8));
      }
    }
  }
  return local_11;
}


/* ---- FUN_fffffffff000fe9c @ fffffffff000fe9c size=1860 ---- */

undefined1 FUN_fffffffff000fe9c(long param_1)

{
  int iVar1;
  int local_80;
  int local_7c;
  int local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_60;
  int local_5c;
  int local_58;
  char local_51;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  undefined1 local_11;
  
  local_11 = 1;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  if ((*(uint *)(param_1 + 4) & 7) == 0) {
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_30 = *(long *)(*(long *)(param_1 + 8) + 0x10) + 0x240;
    local_28 = *(long *)(*(long *)(param_1 + 8) + 0x10) + 0x254;
    local_20 = *(long *)(*(long *)(param_1 + 8) + 0x10) + 0x800;
    local_68 = 4;
    FUN_fffffffff0025074(4,local_28,&local_5c);
    FUN_fffffffff0025074((long)local_68,local_30,&local_58);
    if ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x2000) == 0) {
      FUN_fffffffff0025074((long)local_68,*(undefined8 *)(*(long *)(param_1 + 8) + 0x20),&local_60);
    }
    else {
      FUN_fffffffff0025074((long)local_68,local_20,&local_60);
    }
    if (local_58 != local_5c) {
      local_11 = 0;
    }
    if (local_60 != local_5c) {
      local_11 = 0;
    }
  }
  else if ((*(uint *)(param_1 + 4) & 7) == 1) {
    local_11 = 0;
    local_48 = *(long *)(*(long *)(param_1 + 8) + 0x10) + 0x2d8;
    local_50 = *(long *)(*(long *)(param_1 + 8) + 0x10) + 0x800;
    local_78 = 4;
    FUN_fffffffff0025074(4,local_48,&local_6c);
    if ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x2000) == 0) {
      FUN_fffffffff0025074((long)local_78,*(undefined8 *)(*(long *)(param_1 + 8) + 0x20),&local_70);
    }
    else {
      FUN_fffffffff0025074((long)local_78,local_50,&local_70);
    }
    iVar1 = local_70;
    if ((**(uint **)(param_1 + 8) & 0x800) != 0) {
      iVar1 = local_70 << 4;
    }
    if (iVar1 == local_6c) {
      local_50 = *(long *)(*(long *)(param_1 + 8) + 0x10) + 0x228;
      FUN_fffffffff0025074((long)local_78,local_50,&local_70);
      if (((**(uint **)(param_1 + 8) & 0x800) != 0) &&
         (*(int *)(*(long *)(param_1 + 8) + 0x28) != 0)) {
        local_6c = FUN_fffffffff0025b10(local_6c,*(undefined4 *)(*(long *)(param_1 + 8) + 0x28));
      }
      if (local_6c == local_70) {
        local_50 = *(long *)(*(long *)(param_1 + 8) + 0x10) + 0x254;
        FUN_fffffffff0025074((long)local_78,local_50,&local_70);
        local_51 = (char)local_70;
        if (local_51 == '\0') {
          local_50 = *(long *)(*(long *)(param_1 + 8) + 0x10) + 0x210;
          FUN_fffffffff0025074((long)local_78,local_50,&local_70);
          if ((((byte)((uint)local_70 >> 0x1d) & 1) == 0) && (-1 < local_70)) {
            local_11 = 1;
          }
        }
      }
    }
  }
  else if ((*(uint *)(param_1 + 4) & 7) == 2) {
    local_11 = 0;
    local_38 = *(long *)(*(long *)(param_1 + 8) + 0x10) + 0x14;
    local_40 = *(long *)(*(long *)(param_1 + 8) + 0x10) + 0x200;
    FUN_fffffffff0025074(4,local_38,&local_7c);
    if ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x2000) == 0) {
      FUN_fffffffff0025074(4,*(undefined8 *)(*(long *)(param_1 + 8) + 0x20),&local_80);
    }
    else {
      FUN_fffffffff0025074(4,local_40,&local_80);
    }
    if (local_7c == local_80) {
      local_40 = *(long *)(*(long *)(param_1 + 8) + 0x10) + 0xc;
      FUN_fffffffff0025074(4,local_40,&local_80);
      if (local_7c == local_80) {
        local_11 = 1;
      }
    }
  }
  return local_11;
}


/* ---- FUN_fffffffff00105e0 @ fffffffff00105e0 size=404 ---- */

undefined1 FUN_fffffffff00105e0(long param_1)

{
  ulong local_b0 [3];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_68;
  ulong local_58;
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  undefined1 local_11;
  
  local_11 = 1;
  local_50 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_58 = (ulong)*(uint *)(param_1 + 4) & 0xffffffff00000007;
  local_58 = local_58 | 8;
  local_48 = (ulong)*(uint *)(*(long *)(param_1 + 8) + 0xc);
  local_b0[0] = local_58;
  local_b0[1] = 0;
  local_b0[2] = local_48;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_68 = param_1;
  FUN_fffffffff000dcd4(0xa3,local_b0);
  if (((**(uint **)(local_68 + 8) & 0x20) != 0) && ((*(uint *)(local_68 + 4) & 7) == 1)) {
    local_18 = (*(uint *)(local_68 + 4) >> 7 & 0xff) << 8 |
               (*(uint *)(local_68 + 4) >> 3 & 0xf) << 6 | 0x10;
    FUN_fffffffff0025694(0,local_18);
  }
  return local_11;
}


/* ---- FUN_fffffffff0010774 @ fffffffff0010774 size=420 ---- */

undefined1 FUN_fffffffff0010774(long param_1,uint param_2,uint *param_3)

{
  ulong local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ulong local_98;
  undefined8 local_90;
  undefined8 local_88;
  uint *local_78;
  uint local_6c;
  long local_68;
  ulong local_58;
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_11;
  
  local_11 = 1;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  if (param_1 == 0) {
    if (param_3 != (uint *)0x0) {
      local_58 = 0x20;
      local_30 = (ulong)*param_3 << 0x20;
    }
  }
  else {
    local_58 = (ulong)*(uint *)(param_1 + 4) & 0xffffffff00000007;
    local_48 = (ulong)*(uint *)(*(long *)(param_1 + 8) + 0xc);
    local_40 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x10);
    local_30 = (ulong)param_2;
  }
  local_78 = param_3;
  local_6c = param_2;
  local_68 = param_1;
  FUN_fffffffff000d2c8(2,(long)(int)local_48,(uint)local_58 & 7,0,1);
  local_c0 = local_58;
  local_b8 = local_50;
  local_b0 = local_48;
  local_a8 = local_40;
  local_a0 = local_38;
  local_98 = local_30;
  local_90 = local_28;
  local_88 = local_20;
  FUN_fffffffff000dcd4(0xa4,&local_c0);
  FUN_fffffffff000d2c8(2,(long)(int)local_48,(uint)local_58 & 7,1,local_11);
  return local_11;
}


/* ---- FUN_fffffffff0010918 @ fffffffff0010918 size=240 ---- */

void FUN_fffffffff0010918(undefined4 param_1)

{
  undefined4 local_28;
  undefined4 uStack_1c;
  
  FUN_fffffffff0011650
            (CONCAT44(0x40000,local_28 & 0xfffc0000),
             CONCAT44(uStack_1c,param_1) & 0xffffffff03ffffff | 0x4000000);
  return;
}


/* ---- FUN_fffffffff0010a08 @ fffffffff0010a08 size=72 ---- */

long FUN_fffffffff0010a08(long param_1)

{
  return param_1 * 100;
}


/* ---- FUN_fffffffff0010a50 @ fffffffff0010a50 size=108 ---- */

long FUN_fffffffff0010a50(undefined8 param_1)

{
  long lVar1;
  undefined8 local_18;
  
  local_18 = FUN_fffffffff0025ac8(param_1,100);
  lVar1 = FUN_fffffffff0025b10(param_1,100);
  if (lVar1 != 0) {
    local_18 = local_18 + 1;
  }
  return local_18;
}


/* ---- FUN_fffffffff0010abc @ fffffffff0010abc size=56 ---- */

undefined8 FUN_fffffffff0010abc(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_fffffffff0023860(0xf8);
  return uVar1;
}


/* ---- FUN_fffffffff0010af4 @ fffffffff0010af4 size=212 ---- */

void FUN_fffffffff0010af4(undefined4 param_1)

{
  undefined4 uStack_1c;
  
  FUN_fffffffff0011650(0x4000000000000,CONCAT44(uStack_1c,param_1) & 0xffffffff00000003 | 0x8000000)
  ;
  return;
}


/* ---- FUN_fffffffff0010bc8 @ fffffffff0010bc8 size=556 ---- */

undefined1 FUN_fffffffff0010bc8(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  ulong local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  long local_70 [4];
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_11;
  
  local_11 = 0;
  local_18 = 0;
  local_50 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_70[1] = 0;
  local_70[2] = 0;
  local_70[0] = (ulong)(param_4 & 7 | (param_2 & 0xf) << 3 | (param_3 & 0xff) << 7) << 0x20;
  local_70[3] = (ulong)param_4 & 0xffffffff00000007;
  local_48 = (ulong)param_1;
  if (param_4 == 1) {
    local_70[3] = local_70[3] | 8;
  }
  local_80 = param_4;
  local_7c = param_3;
  local_78 = param_2;
  local_74 = param_1;
  FUN_fffffffff000d2c8(1,(long)(int)param_1,(uint)local_70[3] & 7,0,0);
  local_c0 = local_70[3];
  local_b8 = local_50;
  local_b0 = local_48;
  local_a8 = local_40;
  local_a0 = local_38;
  local_98 = local_30;
  local_90 = local_28;
  local_88 = local_20;
  FUN_fffffffff000dcd4(0xa3,&local_c0);
  iVar1 = FUN_fffffffff000ec80
                    (local_70,2000000,*(uint *)(DAT_fffffffff0100168 + 0x31ac) >> 0x10 & 1);
  if (iVar1 != 0) {
    local_11 = 1;
  }
  FUN_fffffffff000d2c8(1,(long)(int)local_48,(uint)local_70[3] & 7,1,local_11);
  return local_11;
}


/* ---- FUN_fffffffff0010df4 @ fffffffff0010df4 size=348 ---- */

undefined1
FUN_fffffffff0010df4(uint param_1,uint param_2,uint param_3,undefined8 param_4,uint param_5)

{
  undefined8 local_d0;
  undefined8 local_c8;
  ulong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ulong local_98;
  undefined8 local_88;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulong local_20;
  undefined4 local_18;
  undefined1 local_11;
  
  local_11 = 1;
  local_18 = 0;
  local_50 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_68 = 0;
  local_60 = 0;
  local_70 = (ulong)((param_2 & 0xf) << 3 | (param_3 & 0xff) << 7) << 0x20;
  local_48 = (ulong)param_1;
  local_58 = 0x40;
  local_20 = (ulong)param_5;
  local_d0 = 0x40;
  local_c8 = 0;
  local_c0 = local_48;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_98 = local_20;
  local_a0 = param_4;
  local_88 = param_4;
  local_80 = param_5;
  local_7c = param_3;
  local_78 = param_2;
  local_74 = param_1;
  local_28 = param_4;
  FUN_fffffffff000dcd4(0xa3,&local_d0);
  return local_11;
}


/* ---- FUN_fffffffff0010f50 @ fffffffff0010f50 size=444 ---- */

undefined1 FUN_fffffffff0010f50(uint param_1)

{
  int iVar1;
  undefined8 local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  uint local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_11;
  
  local_11 = 0;
  local_18 = 0;
  local_50 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_68 = 0;
  local_60 = 0;
  local_70 = 0x2100000000;
  local_48 = (ulong)param_1;
  local_58 = 0x11;
  local_74 = param_1;
  FUN_fffffffff000d2c8(1,(long)(int)param_1,1,0,0);
  local_c0 = local_58;
  local_b8 = local_50;
  local_b0 = local_48;
  local_a8 = local_40;
  local_a0 = local_38;
  local_98 = local_30;
  local_90 = local_28;
  local_88 = local_20;
  FUN_fffffffff000dcd4(0xa3,&local_c0);
  iVar1 = FUN_fffffffff000ec80
                    (&local_70,2000000,*(uint *)(DAT_fffffffff0100168 + 0x31ac) >> 0x10 & 1);
  if (iVar1 != 0) {
    local_11 = 1;
  }
  FUN_fffffffff000d2c8(1,(long)(int)local_48,(uint)local_58 & 7,1,local_11);
  return local_11;
}


/* ---- FUN_fffffffff001110c @ fffffffff001110c size=520 ---- */

undefined1 FUN_fffffffff001110c(uint param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  ulong local_d0;
  undefined8 local_c8;
  ulong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  uint local_78;
  uint local_74;
  ulong local_70 [4];
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_11;
  
  local_11 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_70[1] = 0;
  local_70[2] = 0;
  local_70[0] = (ulong)(param_4 & 7) << 0x20 | 0x2000000000;
  local_70[3] = (ulong)param_4 & 0xffffffff00000007;
  local_48 = (ulong)param_1;
  local_50 = 0x400000000;
  local_70[3] = local_70[3] | 0x10;
  local_88 = param_3;
  local_80 = param_2;
  local_78 = param_4;
  local_74 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  FUN_fffffffff000d2c8(0,(long)(int)param_1,(uint)local_70[3] & 7,0,0);
  local_d0 = local_70[3];
  local_c8 = local_50;
  local_c0 = local_48;
  local_b8 = local_40;
  local_b0 = local_38;
  local_a8 = local_30;
  local_a0 = local_28;
  local_98 = local_20;
  FUN_fffffffff000dcd4(0xa2,&local_d0);
  iVar1 = FUN_fffffffff000ebfc
                    (local_70,2000000,*(uint *)(DAT_fffffffff0100168 + 0x31ac) >> 0x10 & 1);
  if (iVar1 != 0) {
    local_11 = 1;
  }
  FUN_fffffffff000d2c8(0,(long)(int)local_48,(uint)local_70[3] & 7,1,local_11);
  return local_11;
}


/* ---- FUN_fffffffff0011314 @ fffffffff0011314 size=424 ---- */

undefined1
FUN_fffffffff0011314(uint param_1,uint param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 local_d0;
  undefined8 local_c8;
  ulong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  uint local_7c;
  uint local_78;
  uint local_74;
  long local_70 [4];
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_11;
  
  local_11 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_70[1] = 0;
  local_70[2] = 0;
  local_70[0] = (ulong)((param_1 & 0xf) << 3 | (param_2 & 0xff) << 7) << 0x20;
  local_70[3] = 0;
  local_48 = (ulong)param_3;
  local_50 = CONCAT44(param_1,param_2);
  local_d0 = 0;
  local_c8 = local_50;
  local_c0 = local_48;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b8 = param_4;
  local_b0 = param_5;
  local_90 = param_5;
  local_88 = param_4;
  local_7c = param_3;
  local_78 = param_2;
  local_74 = param_1;
  local_40 = param_4;
  local_38 = param_5;
  FUN_fffffffff000dcd4(0xa2,&local_d0);
  iVar1 = FUN_fffffffff000ebfc
                    (local_70,2000000,*(uint *)(DAT_fffffffff0100168 + 0x31ac) >> 0x10 & 1);
  if (iVar1 != 0) {
    local_11 = 1;
  }
  return local_11;
}


/* ---- FUN_fffffffff00114bc @ fffffffff00114bc size=232 ---- */

undefined8 FUN_fffffffff00114bc(void)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  FUN_fffffffff00246d4
            ((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1fb6),&local_1c,
             (long)DAT_fffffffff01033a8);
  FUN_fffffffff00246d4
            ((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1fb7),&local_20,
             (long)DAT_fffffffff01033a8);
  return CONCAT44(local_20,local_1c);
}


/* ---- FUN_fffffffff00115a4 @ fffffffff00115a4 size=172 ---- */

void FUN_fffffffff00115a4(undefined8 *param_1,undefined8 param_2,char param_3)

{
  undefined8 local_40;
  undefined8 *local_38;
  undefined4 local_28;
  
  if (param_3 == '\0') {
    *param_1 = param_2;
  }
  else {
    local_28 = 8;
    local_40 = param_2;
    local_38 = param_1;
    FUN_fffffffff0025154(8,&local_40,param_1);
  }
  return;
}


/* ---- FUN_fffffffff0011650 @ fffffffff0011650 size=172 ---- */

void FUN_fffffffff0011650(undefined8 param_1,undefined8 param_2)

{
  undefined4 uStack_2c;
  undefined4 local_14;
  
  local_14 = 0;
  uStack_2c = (int)((ulong)param_1 >> 0x20);
  if (uStack_2c == 0x80000) {
    local_14 = -0x80000000;
  }
  else if (uStack_2c < 0x80001) {
    if (uStack_2c == 0x4000) {
      local_14 = 0x4000000;
    }
    else if (uStack_2c == 0x40000) {
      local_14 = 0x40000000;
    }
  }
  if (local_14 != 0) {
    FUN_fffffffff0025664(param_1,param_2);
  }
  return;
}


/* ---- FUN_fffffffff00116fc @ fffffffff00116fc size=24 ---- */

/* WARNING: Removing unreachable block (ram,0xfffffffff00116fc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0011704) */

void FUN_fffffffff00116fc(long param_1)

{
  do {
  } while (param_1 != 0);
  return;
}


/* ---- FUN_fffffffff0011714 @ fffffffff0011714 size=792 ---- */

void FUN_fffffffff0011714(undefined4 param_1,char param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if (((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x8000) != 0) &&
     (*(long *)(DAT_fffffffff0100168 + 0x31f8) != 0)) {
    lVar3 = *(long *)(DAT_fffffffff0100168 + 0x31f8);
    if (param_2 == '\0') {
      if (0x1f < *(uint *)(lVar3 + 0xa08)) {
        *(undefined4 *)(lVar3 + 0xa08) = 0;
      }
      *(undefined4 *)(lVar3 + (ulong)*(uint *)(lVar3 + 0xa08) * 0x1c + 0x680) = param_1;
      uVar1 = *(uint *)(lVar3 + 0xa08);
      uVar2 = FUN_fffffffff0010abc();
      lVar3 = lVar3 + (ulong)uVar1 * 0x1c;
      *(int *)(lVar3 + 0x684) = (int)uVar2;
      *(int *)(lVar3 + 0x688) = (int)((ulong)uVar2 >> 0x20);
    }
    else {
      lVar4 = lVar3 + (ulong)*(uint *)(lVar3 + 0xa08) * 0x1c;
      *(uint *)(lVar4 + 0x698) = *(uint *)(lVar4 + 0x698) & 0xfffffffe | param_3 & 1;
      if (param_3 == 0) {
        *(undefined4 *)(lVar3 + (ulong)*(uint *)(lVar3 + 0xa08) * 0x1c + 0x694) =
             *(undefined4 *)(DAT_fffffffff0100168 + 0x3090);
      }
      else {
        *(undefined4 *)(lVar3 + (ulong)*(uint *)(lVar3 + 0xa08) * 0x1c + 0x694) = 0;
      }
      uVar1 = *(uint *)(lVar3 + 0xa08);
      uVar2 = FUN_fffffffff0010abc();
      lVar4 = lVar3 + (ulong)uVar1 * 0x1c;
      *(int *)(lVar4 + 0x68c) = (int)uVar2;
      *(int *)(lVar4 + 0x690) = (int)((ulong)uVar2 >> 0x20);
      *(int *)(lVar3 + 0xa08) = *(int *)(lVar3 + 0xa08) + 1;
    }
  }
  return;
}


/* ---- FUN_fffffffff0011a2c @ fffffffff0011a2c size=348 ---- */

undefined8 FUN_fffffffff0011a2c(int param_1,long param_2)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  local_20 = 0;
  local_2c = 0;
  local_30 = 0;
  local_28 = 0;
  if (param_1 == 1) {
    local_18 = param_2 + 0x234;
    local_20 = param_2 + 0x238;
  }
  else if (param_1 == 0) {
    local_18 = param_2 + 0x234;
    local_20 = param_2 + 0x238;
  }
  else if (param_1 == 2) {
    local_18 = param_2 + 0x6c;
    local_20 = param_2 + 0x68;
  }
  FUN_fffffffff0025074(4,local_18,&local_2c);
  FUN_fffffffff0025074(4,local_20,&local_30);
  return CONCAT44(local_30,local_2c);
}


/* ---- FUN_fffffffff0011b88 @ fffffffff0011b88 size=200 ---- */

undefined8 FUN_fffffffff0011b88(uint param_1)

{
  undefined8 uVar1;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  
  local_11 = '\x01';
  local_12 = '\x01';
  local_13 = '\x01';
  if ((param_1 & 1) != 0) {
    local_11 = FUN_fffffffff0011c50();
  }
  if ((param_1 & 2) != 0) {
    local_12 = FUN_fffffffff0011d48();
  }
  if ((param_1 & 4) != 0) {
    local_13 = FUN_fffffffff00179e4();
  }
  if (((local_11 == '\0') || (local_12 == '\0')) || (local_13 == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* ---- FUN_fffffffff0011c50 @ fffffffff0011c50 size=248 ---- */

undefined1 FUN_fffffffff0011c50(void)

{
  undefined1 local_11;
  
  local_11 = 0;
  if ((*DAT_fffffffff0100168 & 1) != 0) {
    *DAT_fffffffff0100168 = *DAT_fffffffff0100168 & 0xfffffffe;
    while( true ) {
      if (DAT_fffffffff0100168[0xc3c] == DAT_fffffffff0100168[0xc3d]) break;
      local_11 = FUN_fffffffff00120b8();
      if (DAT_fffffffff0100168[0xc3d] == 0x1f) {
        DAT_fffffffff0100168[0xc3d] = 0;
      }
      else {
        DAT_fffffffff0100168[0xc3d] = DAT_fffffffff0100168[0xc3d] + 1;
      }
    }
  }
  return local_11;
}


/* ---- FUN_fffffffff0011d48 @ fffffffff0011d48 size=452 ---- */

undefined1 FUN_fffffffff0011d48(void)

{
  uint local_20;
  uint local_1c;
  uint local_18;
  undefined1 local_11;
  
  local_11 = 0;
  local_18 = 0;
  local_20 = 0;
  FUN_fffffffff0024af8();
  if ((*DAT_fffffffff0100168 & 2) != 0) {
    local_18 = DAT_fffffffff0100168[0xc3a];
    *DAT_fffffffff0100168 = *DAT_fffffffff0100168 & 0xfffffffd;
    DAT_fffffffff0100168[0xc3a] = 0;
  }
  FUN_fffffffff0024b1c();
  for (; (local_18 != 0 && (local_20 < 5)); local_20 = local_20 + 1) {
    if ((local_18 & 1) != 0) {
      for (local_1c = 0; local_1c < 3; local_1c = local_1c + 1) {
        if (*(long *)(DAT_fffffffff0100168 + (ulong)local_1c * 100 + (ulong)local_20 * 0x14 + 0xaf6)
            != 0) {
          DAT_fffffffff0100168[(ulong)local_1c * 100 + (ulong)local_20 * 0x14 + 0xb09] =
               DAT_fffffffff0100168[(ulong)local_1c * 100 + (ulong)local_20 * 0x14 + 0xb09] | 1;
          local_11 = 1;
        }
      }
    }
    local_18 = local_18 >> 1;
  }
  return local_11;
}


/* ---- FUN_fffffffff0011f0c @ fffffffff0011f0c size=300 ---- */

undefined1 FUN_fffffffff0011f0c(uint param_1)

{
  long lVar1;
  undefined4 local_18;
  undefined1 local_11;
  
  local_11 = 0;
  if (param_1 < 5) {
    for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
      if (*(long *)(DAT_fffffffff0100168 + (ulong)param_1 * 0x50 + (ulong)local_18 * 400 + 0x2bd8)
          != 0) {
        lVar1 = DAT_fffffffff0100168 + (ulong)param_1 * 0x50 + (ulong)local_18 * 400;
        *(uint *)(lVar1 + 0x2c24) = *(uint *)(lVar1 + 0x2c24) | 1;
        local_11 = 1;
      }
    }
  }
  return local_11;
}


/* ---- FUN_fffffffff0012038 @ fffffffff0012038 size=128 ---- */

void FUN_fffffffff0012038(void)

{
  undefined8 local_18;
  
  local_18 = *(long *)(DAT_fffffffff0100168 + 0x3184);
  while( true ) {
    if (local_18 == 0) break;
    FUN_fffffffff001db90(local_18);
    local_18 = *(long *)(local_18 + 8);
  }
  return;
}


/* ---- FUN_fffffffff00120b8 @ fffffffff00120b8 size=1252 ---- */

undefined1 FUN_fffffffff00120b8(void)

{
  undefined1 local_11;
  
  local_11 = 0;
  if ((*(uint *)(DAT_fffffffff0100168 + (ulong)*(uint *)(DAT_fffffffff0100168 + 0x30f4) * 0x100 + 8)
      & 0xf) == 1) {
    switch(*(uint *)(DAT_fffffffff0100168 + (ulong)*(uint *)(DAT_fffffffff0100168 + 0x30f4) * 0x100
                    + 8) >> 4 & 0xff) {
    case 0:
      FUN_fffffffff0011714(0,0,0);
      local_11 = FUN_fffffffff001259c();
      FUN_fffffffff0011714(0,1,local_11);
      break;
    case 1:
      FUN_fffffffff0011714(1,0,0);
      local_11 = FUN_fffffffff0014c9c();
      FUN_fffffffff0011714(1,1,local_11);
      break;
    case 2:
      FUN_fffffffff0011714(2,0,0);
      local_11 = FUN_fffffffff0012880();
      FUN_fffffffff0011714(2,1,local_11);
      break;
    case 3:
      FUN_fffffffff0011714(3,0,0);
      local_11 = FUN_fffffffff00145ec();
      FUN_fffffffff0011714(3,1,local_11);
      break;
    case 4:
      FUN_fffffffff0011714(4,0,0);
      local_11 = FUN_fffffffff001894c();
      FUN_fffffffff0011714(4,1,local_11);
      break;
    case 5:
      FUN_fffffffff0011714(5,0,0);
      local_11 = FUN_fffffffff00186ac();
      FUN_fffffffff0011714(5,1,local_11);
      break;
    case 6:
      FUN_fffffffff0011714(6,0,0);
      if ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x800) == 0) {
        local_11 = FUN_fffffffff00150b0();
      }
      else {
        local_11 = FUN_fffffffff00152e4();
      }
      FUN_fffffffff0011714(6,1,local_11);
      break;
    case 7:
      FUN_fffffffff0011714(7,0,0);
      local_11 = FUN_fffffffff00157ec();
      FUN_fffffffff0011714(7,1,local_11);
      break;
    case 8:
      FUN_fffffffff0011714(8,0,0);
      local_11 = FUN_fffffffff0016a54();
      FUN_fffffffff0011714(8,1,local_11);
      break;
    case 9:
      FUN_fffffffff0011714(9,0,0);
      local_11 = FUN_fffffffff0017a48();
      FUN_fffffffff0011714(9,1,local_11);
      break;
    case 10:
      FUN_fffffffff0011714(10,0,0);
      local_11 = FUN_fffffffff00186d4();
      FUN_fffffffff0011714(10,1,local_11);
      break;
    case 0xb:
      FUN_fffffffff0011714(0xb,0,0);
      local_11 = FUN_fffffffff00178fc();
      FUN_fffffffff0011714(0xb,1,local_11);
      break;
    case 0xc:
      FUN_fffffffff0011714(0xc,0,0);
      local_11 = FUN_fffffffff0018580();
      FUN_fffffffff0011714(0xc,1,local_11);
      break;
    case 0xd:
      FUN_fffffffff0011714(0xd,0,0);
      local_11 = FUN_fffffffff0017c78();
      FUN_fffffffff0011714(0xd,1,local_11);
      break;
    case 0xe:
      local_11 = FUN_fffffffff001a23c();
      break;
    case 0xf:
      FUN_fffffffff0011714(0xe,0,0);
      local_11 = FUN_fffffffff001aa68();
      FUN_fffffffff0011714(0xe,1,local_11);
      break;
    case 0x10:
      FUN_fffffffff0011714(0xf,0,0);
      local_11 = FUN_fffffffff0019bd8();
      FUN_fffffffff0011714(0xf,1,local_11);
      break;
    case 0x11:
      FUN_fffffffff0011714(0x17,0,0);
      local_11 = FUN_fffffffff001ae7c();
      FUN_fffffffff0011714(0x17,1,local_11);
    }
  }
  return local_11;
}


/* ---- FUN_fffffffff001259c @ fffffffff001259c size=740 ---- */

undefined8 FUN_fffffffff001259c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = DAT_fffffffff0100168 + (ulong)*(uint *)(DAT_fffffffff0100168 + 0x30f4) * 0x100;
  FUN_fffffffff0025858(DAT_fffffffff0100168 + 0x3120,lVar4 + 0x70,0x20);
  FUN_fffffffff0025858(DAT_fffffffff0100168 + 0x3140,lVar4 + 0x90,0x20);
  FUN_fffffffff0025858(DAT_fffffffff0100168 + 0x3160,lVar4 + 0xb0,0x20);
  FUN_fffffffff0019cc8(lVar4 + 8,lVar4 + 0x3c,lVar4 + 0x1c,lVar4 + 0x44);
  lVar3 = DAT_fffffffff0100168;
  puVar1 = *(undefined8 **)(lVar4 + 0x60);
  uVar2 = *(undefined8 *)(lVar4 + 0x68);
  *(int *)(DAT_fffffffff0100168 + 0x310c) = (int)uVar2;
  *(int *)(lVar3 + 0x3110) = (int)((ulong)uVar2 >> 0x20);
  *puVar1 = 0x1a8;
  *(uint *)(DAT_fffffffff0100168 + 0x31ac) =
       *(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0xffff7fff |
       (*(uint *)(lVar4 + 0xe0) >> 9 & 1) << 0xf;
  lVar3 = DAT_fffffffff0100168;
  if ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x8000) != 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0xf0);
    *(int *)(DAT_fffffffff0100168 + 0x31f8) = (int)uVar2;
    *(int *)(lVar3 + 0x31fc) = (int)((ulong)uVar2 >> 0x20);
  }
  FUN_fffffffff0024540((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1e58),4);
  FUN_fffffffff00115a4(*(undefined8 *)(lVar4 + 0xd0),*(undefined8 *)(lVar4 + 0xd8),0);
  return 1;
}


/* ---- FUN_fffffffff0012880 @ fffffffff0012880 size=5340 ---- */

char FUN_fffffffff0012880(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  long local_38;
  int local_30;
  int local_2c;
  long local_28;
  uint local_1c;
  uint local_18;
  char local_12;
  char local_11;
  
  local_11 = '\x01';
  local_12 = '\0';
  lVar2 = DAT_fffffffff0100168 + (ulong)*(uint *)(DAT_fffffffff0100168 + 0x30f4) * 0x100;
  local_28 = lVar2 + 8;
  local_2c = *(int *)(lVar2 + 0x74);
  local_30 = *(int *)(lVar2 + 0x4c);
  if ((*(uint *)(lVar2 + 0x98) & 0x100) == 0) {
    local_38 = *(long *)(lVar2 + 0x30);
    local_50 = *(undefined8 *)(DAT_fffffffff0100168 + 0x3184);
    lVar2 = FUN_fffffffff001b1ac(local_38,local_50);
    if (lVar2 == 0) {
      if ((*(uint *)(local_28 + 0x90) & 0x1000) == 0) {
        FUN_fffffffff001a9b0(local_38,0x127,0);
      }
      local_11 = FUN_fffffffff001afb8(local_38,&local_50);
      lVar2 = DAT_fffffffff0100168;
      *(int *)(DAT_fffffffff0100168 + 0x3184) = (int)local_38;
      *(int *)(lVar2 + 0x3188) = (int)((ulong)local_38 >> 0x20);
    }
    local_58 = *(undefined8 *)
                (DAT_fffffffff0100168 + (long)local_30 * 0x50 + (long)local_2c * 400 + 0x2bd8);
    local_40 = local_38 + (long)local_30 * 0x44 + (long)local_2c * 0x154 + 0xa0;
    *(int *)(local_40 + 0x10) = (int)local_38;
    *(int *)(local_40 + 0x14) = (int)((ulong)local_38 >> 0x20);
    *(uint *)(local_38 + 0x84) =
         *(uint *)(local_38 + 0x84) & 0xfffffffb | (*(uint *)(local_28 + 0x90) & 1) << 2;
    *(undefined4 *)(local_38 + 0x20) = *(undefined4 *)(local_28 + 4);
    uVar1 = *(undefined8 *)(local_28 + 0x84);
    *(int *)(local_38 + 0x70) = (int)uVar1;
    *(int *)(local_38 + 0x74) = (int)((ulong)uVar1 >> 0x20);
    uVar1 = *(undefined8 *)(local_28 + 0xa4);
    *(int *)(local_38 + 0x78) = (int)uVar1;
    *(int *)(local_38 + 0x7c) = (int)((ulong)uVar1 >> 0x20);
    *(uint *)(local_38 + 0x84) =
         *(uint *)(local_38 + 0x84) & 0xffffffef | (*(uint *)(local_28 + 0x90) >> 10 & 1) << 4;
    *(undefined4 *)(local_38 + 0x80) = *(undefined4 *)(local_28 + 0x8c);
    *(uint *)(local_38 + 0x84) =
         *(uint *)(local_38 + 0x84) & 0xffffffdf |
         (*(uint *)(local_38 + 0x84) >> 5 & 1 | *(uint *)(local_28 + 0x90) >> 9 & 1) << 5;
    lVar2 = FUN_fffffffff001b1ac(local_40,local_58);
    if (lVar2 == 0) {
      local_11 = FUN_fffffffff001afb8(local_40,&local_58);
      lVar2 = DAT_fffffffff0100168 + (long)local_30 * 0x50 + (long)local_2c * 400;
      *(int *)(lVar2 + 0x2bd8) = (int)local_40;
      *(int *)(lVar2 + 0x2bdc) = (int)((ulong)local_40 >> 0x20);
      *(int *)(DAT_fffffffff0100168 + (long)local_30 * 0x50 + (long)local_2c * 400 + 0x2c0c) =
           *(int *)(DAT_fffffffff0100168 + (long)local_30 * 0x50 + (long)local_2c * 400 + 0x2c0c) +
           1;
      if (*(long *)(*(long *)(local_40 + 0x10) + 0x24) != *(long *)(local_28 + 8)) {
        lVar2 = *(long *)(local_40 + 0x10);
        uVar1 = *(undefined8 *)(local_28 + 8);
        *(int *)(lVar2 + 0x24) = (int)uVar1;
        *(int *)(lVar2 + 0x28) = (int)((ulong)uVar1 >> 0x20);
        lVar2 = *(long *)(local_40 + 0x10);
        uVar1 = *(undefined8 *)(local_28 + 0x10);
        *(int *)(lVar2 + 0x2c) = (int)uVar1;
        *(int *)(lVar2 + 0x30) = (int)((ulong)uVar1 >> 0x20);
        lVar2 = *(long *)(local_40 + 0x10);
        uVar1 = *(undefined8 *)(local_28 + 0x18);
        *(int *)(lVar2 + 0x34) = (int)uVar1;
        *(int *)(lVar2 + 0x38) = (int)((ulong)uVar1 >> 0x20);
        *(long *)(*(long *)(local_40 + 0x10) + 0x10) = *(long *)(local_28 + 0x20) * 10;
        *(undefined4 *)(*(long *)(local_40 + 0x10) + 0x40) = 0xffff;
        *(undefined4 *)(*(long *)(local_40 + 0x10) + 0x44) = 0xffff;
        *(undefined4 *)(*(long *)(local_40 + 0x10) + 0x48) = 0xffff;
      }
      if ((*(uint *)(local_28 + 0x90) & 0x20) != 0) {
        *(uint *)(local_38 + 0x84) = *(uint *)(local_38 + 0x84) | 2;
        *(undefined4 *)(local_38 + 0x58) = *(undefined4 *)(local_28 + 0x70);
        *(undefined4 *)(local_38 + 0x5c) = *(undefined4 *)(local_28 + 0x74);
        *(undefined4 *)(local_38 + 100) = *(undefined4 *)(local_28 + 0x78);
        *(undefined4 *)(local_38 + 0x60) = *(undefined4 *)(local_28 + 0x7c);
        *(undefined4 *)(local_38 + 0x68) = *(undefined4 *)(local_28 + 0x80);
      }
    }
    if (local_11 != '\0') {
      local_48 = *(long *)(local_28 + 0x38);
      local_60 = *(undefined8 *)(local_38 + (long)local_30 * 0x44 + (long)local_2c * 0x154 + 0xb8);
      lVar2 = FUN_fffffffff001b1ac(local_48,local_60);
      if (lVar2 == 0) {
        FUN_fffffffff001a9b0(local_48,0xde,0);
        local_11 = FUN_fffffffff001afb8(local_48,&local_60);
        lVar2 = local_38 + (long)local_30 * 0x44 + (long)local_2c * 0x154;
        *(int *)(lVar2 + 0xb8) = (int)local_48;
        *(int *)(lVar2 + 0xbc) = (int)((ulong)local_48 >> 0x20);
        *(int *)(local_38 + (long)local_30 * 0x44 + (long)local_2c * 0x154 + 0xd4) =
             *(int *)(local_38 + (long)local_30 * 0x44 + (long)local_2c * 0x154 + 0xd4) + 1;
        *(int *)(DAT_fffffffff0100168 + (long)local_30 * 0x50 + (long)local_2c * 400 + 0x2c10) =
             *(int *)(DAT_fffffffff0100168 + (long)local_30 * 0x50 + (long)local_2c * 400 + 0x2c10)
             + 1;
        *(int *)(local_38 + 0x6c) = *(int *)(local_38 + 0x6c) + 1;
        *(uint *)(local_48 + 0x10) =
             *(uint *)(local_48 + 0x10) & 0xfffffff7 | (*(uint *)(local_28 + 0x90) & 1) << 3;
        *(long *)(local_48 + 0x34) =
             local_38 + (long)local_30 * 0x44 + (long)local_2c * 0x154 + 0xa0;
        *(int *)(local_48 + 0x30) = local_2c;
        *(int *)(local_48 + 0x28) = local_30;
        *(long *)(local_48 + 0x14) = *(long *)(local_28 + 0x30) * 10;
        *(undefined4 *)(local_48 + 0x24) = *(undefined4 *)(local_28 + 0x40);
        *(uint *)(local_48 + 0x10) =
             *(uint *)(local_48 + 0x10) & 0xfffffffe | *(uint *)(local_28 + 0x90) >> 6 & 1;
        uVar1 = *(undefined8 *)(local_28 + 0x5c);
        *(int *)(local_48 + 0x4c) = (int)uVar1;
        *(int *)(local_48 + 0x50) = (int)((ulong)uVar1 >> 0x20);
        *(undefined4 *)(local_48 + 0x374) = *(undefined4 *)(local_28 + 0xac);
        for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
          lVar2 = local_48 + (ulong)local_18 * 100;
          *(uint *)(lVar2 + 0x54) = *(uint *)(lVar2 + 0x54) & 0xfffffffd;
          lVar2 = local_48 + (ulong)local_18 * 100;
          *(uint *)(lVar2 + 0x54) = *(uint *)(lVar2 + 0x54) & 0xfffffffe;
        }
        if ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x20) == 0) {
          FUN_fffffffff00200d0(local_48);
        }
      }
      if (local_11 != '\0') {
        for (local_1c = 0; local_1c < 8; local_1c = local_1c + 1) {
          if ((*(uint *)(local_48 + (ulong)local_1c * 100 + 0x54) & 1) == 0) {
            lVar2 = local_48 + (ulong)local_1c * 100;
            *(uint *)(lVar2 + 0x54) = *(uint *)(lVar2 + 0x54) | 1;
            lVar2 = local_48 + (ulong)local_1c * 100;
            *(uint *)(lVar2 + 0x54) = *(uint *)(lVar2 + 0x54) & 0xfffffffd;
            *(undefined4 *)(local_48 + (ulong)local_1c * 100 + 0x60) =
                 *(undefined4 *)(local_28 + 0x48);
            uVar1 = *(undefined8 *)(local_28 + 0x4c);
            lVar2 = local_48 + (ulong)local_1c * 100;
            *(int *)(lVar2 + 100) = (int)uVar1;
            *(int *)(lVar2 + 0x68) = (int)((ulong)uVar1 >> 0x20);
            lVar2 = local_48 + (ulong)local_1c * 100;
            *(uint *)(lVar2 + 0x54) =
                 *(uint *)(lVar2 + 0x54) & 0xfffff7ff |
                 (*(uint *)(local_28 + 0x90) >> 0xb & 1) << 0xb;
            if ((*(uint *)(local_48 + (ulong)local_1c * 100 + 0x54) >> 0xb & 1) != 0) {
              *(undefined4 *)(local_48 + (ulong)local_1c * 100 + 0x7c) =
                   *(undefined4 *)(local_28 + 0x74);
            }
            if ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x2000) == 0) {
              uVar1 = *(undefined8 *)(local_28 + 0x54);
              lVar2 = local_48 + (ulong)local_1c * 100;
              *(int *)(lVar2 + 0x74) = (int)uVar1;
              *(int *)(lVar2 + 0x78) = (int)((ulong)uVar1 >> 0x20);
              uVar1 = FUN_fffffffff0011a2c((long)local_2c,*(undefined8 *)(local_28 + 0x4c));
              lVar2 = local_48 + (ulong)local_1c * 100;
              *(int *)(lVar2 + 0x6c) = (int)uVar1;
              *(int *)(lVar2 + 0x70) = (int)((ulong)uVar1 >> 0x20);
            }
            else {
              lVar2 = local_48 + (ulong)local_1c * 100;
              *(undefined4 *)(lVar2 + 0x74) = 0;
              *(undefined4 *)(lVar2 + 0x78) = 0;
              uVar1 = *(undefined8 *)(local_28 + 0x54);
              lVar2 = local_48 + (ulong)local_1c * 100;
              *(int *)(lVar2 + 0x6c) = (int)uVar1;
              *(int *)(lVar2 + 0x70) = (int)((ulong)uVar1 >> 0x20);
            }
            lVar2 = local_48 + (ulong)local_1c * 100;
            *(int *)(lVar2 + 0x88) = (int)local_48;
            *(int *)(lVar2 + 0x8c) = (int)((ulong)local_48 >> 0x20);
            uVar1 = *(undefined8 *)(local_28 + 100);
            lVar2 = local_48 + (ulong)local_1c * 100;
            *(int *)(lVar2 + 0x80) = (int)uVar1;
            *(int *)(lVar2 + 0x84) = (int)((ulong)uVar1 >> 0x20);
            lVar2 = local_48 + (ulong)local_1c * 100;
            *(uint *)(lVar2 + 0x54) = *(uint *)(lVar2 + 0x54) & 0xfffffff7;
            lVar2 = local_48 + (ulong)local_1c * 100;
            *(uint *)(lVar2 + 0x54) =
                 *(uint *)(lVar2 + 0x54) & 0xffffffdf | (*(uint *)(local_28 + 0x90) >> 7 & 1) << 5;
            *(int *)(local_48 + 0x2c) = *(int *)(local_48 + 0x2c) + 1;
            *(uint *)(local_48 + 0x10) = *(uint *)(local_48 + 0x10) | 4;
            if (((*(uint *)(*(long *)(*(long *)(local_48 + 0x34) + 0x10) + 0x84) & 0x20) != 0) &&
               (local_2c == 1)) {
              *(int *)(DAT_fffffffff0100168 + 0x31bc) = *(int *)(DAT_fffffffff0100168 + 0x31bc) + 1;
            }
            *(int *)(DAT_fffffffff0100168 + (long)local_30 * 0x50 + (long)local_2c * 400 + 0x2c14) =
                 *(int *)(DAT_fffffffff0100168 + (long)local_30 * 0x50 + (long)local_2c * 400 +
                         0x2c14) + 1;
            local_12 = '\x01';
            if ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x20) == 0) {
              FUN_fffffffff0020010(local_48,(long)(int)local_1c);
            }
            break;
          }
        }
      }
    }
    if (local_12 == '\0') {
      local_11 = '\0';
    }
    else {
      lVar2 = DAT_fffffffff0100168 + (long)local_30 * 0x50 + (long)local_2c * 400;
      *(uint *)(lVar2 + 0x2c24) = *(uint *)(lVar2 + 0x2c24) | 1;
      FUN_fffffffff00115a4(*(undefined8 *)(local_28 + 0x94),*(undefined8 *)(local_28 + 0x9c),0);
      *(int *)(DAT_fffffffff0100168 + 0x3088) = *(int *)(DAT_fffffffff0100168 + 0x3088) + 1;
      if (local_2c == 1) {
        FUN_fffffffff001aba4();
      }
    }
  }
  else {
    local_11 = FUN_fffffffff001110c
                         ((long)*(int *)(lVar2 + 0x50),*(undefined8 *)(lVar2 + 0x54),
                          *(undefined8 *)(lVar2 + 0x5c),(long)*(int *)(lVar2 + 0x74));
    if (local_11 != '\0') {
      FUN_fffffffff00115a4(*(undefined8 *)(local_28 + 0x94),*(undefined8 *)(local_28 + 0x9c),0);
    }
  }
  return local_11;
}


/* ---- FUN_fffffffff0013d5c @ fffffffff0013d5c size=2192 ---- */

char FUN_fffffffff0013d5c(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 local_50;
  undefined4 local_48;
  uint local_44;
  undefined8 local_40;
  long local_38;
  long local_30;
  int local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  char local_12;
  char local_11;
  
  local_11 = '\0';
  local_12 = '\0';
  local_18 = 0;
  do {
    if (7 < local_18) {
LAB_fffffffff0013e14:
      if (local_12 == '\0') {
        local_20 = *(int *)(param_1 + 0x30);
        local_24 = *(int *)(param_1 + 0x28);
        if (*(long *)(param_1 + 0x34) != 0) {
          if (param_1 == *(long *)(*(long *)(param_1 + 0x34) + 0x20)) {
            lVar3 = *(long *)(param_1 + 0x34);
            uVar1 = *(undefined8 *)(param_1 + 8);
            *(int *)(lVar3 + 0x20) = (int)uVar1;
            *(int *)(lVar3 + 0x24) = (int)((ulong)uVar1 >> 0x20);
          }
          local_38 = *(long *)(*(long *)(param_1 + 0x34) + 0x18);
          iVar2 = FUN_fffffffff001b05c(param_1,&local_38);
          if (iVar2 == 0) {
            local_11 = '\0';
          }
          else {
            lVar3 = *(long *)(param_1 + 0x34);
            *(int *)(lVar3 + 0x18) = (int)local_38;
            *(int *)(lVar3 + 0x1c) = (int)((ulong)local_38 >> 0x20);
            FUN_fffffffff000a0a0(param_1);
            *(int *)(DAT_fffffffff0100168 + (long)local_24 * 0x50 + (long)local_20 * 400 + 0x2c10) =
                 *(int *)(DAT_fffffffff0100168 + (long)local_24 * 0x50 + (long)local_20 * 400 +
                         0x2c10) + -1;
            lVar3 = *(long *)(*(long *)(param_1 + 0x34) + 0x10);
            *(int *)(lVar3 + (long)local_24 * 0x44 + (long)local_20 * 0x154 + 0xd4) =
                 *(int *)(lVar3 + (long)local_24 * 0x44 + (long)local_20 * 0x154 + 0xd4) + -1;
            lVar3 = *(long *)(*(long *)(param_1 + 0x34) + 0x10);
            *(int *)(lVar3 + 0x6c) = *(int *)(lVar3 + 0x6c) + -1;
            if (*(int *)(*(long *)(*(long *)(param_1 + 0x34) + 0x10) + 0x6c) == 0) {
              local_40 = *(undefined8 *)(DAT_fffffffff0100168 + 0x3184);
              FUN_fffffffff001b05c(*(undefined8 *)(*(long *)(param_1 + 0x34) + 0x10),&local_40);
              lVar3 = DAT_fffffffff0100168;
              *(int *)(DAT_fffffffff0100168 + 0x3184) = (int)local_40;
              *(int *)(lVar3 + 0x3188) = (int)((ulong)local_40 >> 0x20);
            }
            local_11 = '\x01';
          }
          if ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x20) == 0) {
            FUN_fffffffff0024af8();
            local_44 = 0;
            local_48 = 0;
            FUN_fffffffff0009c78((long)local_20,&local_44,&local_48);
            local_1c = 0;
            while( true ) {
              if (local_44 <= local_1c) break;
              local_30 = FUN_fffffffff000d1a4((long)local_20,(long)(int)local_1c);
              if ((local_30 != 0) && (param_1 == *(long *)(local_30 + 8))) {
                *(uint *)(local_30 + 0x10) = *(uint *)(local_30 + 0x10) | 1;
              }
              local_1c = local_1c + 1;
            }
            FUN_fffffffff0024b1c();
          }
          if ((local_11 != '\0') && (local_38 == 0)) {
            if (*(long *)(DAT_fffffffff0100168 + (long)local_24 * 0x50 + (long)local_20 * 400 +
                         0x2c1c) == *(long *)(param_1 + 0x34)) {
              uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x34) + 8);
              lVar3 = DAT_fffffffff0100168 + (long)local_24 * 0x50 + (long)local_20 * 400;
              *(int *)(lVar3 + 0x2c1c) = (int)uVar1;
              *(int *)(lVar3 + 0x2c20) = (int)((ulong)uVar1 >> 0x20);
            }
            local_50 = *(undefined8 *)
                        (DAT_fffffffff0100168 + (long)local_24 * 0x50 + (long)local_20 * 400 +
                        0x2bd8);
            iVar2 = FUN_fffffffff001b05c(*(undefined8 *)(param_1 + 0x34),&local_50);
            if (iVar2 == 0) {
              local_11 = '\0';
            }
            else {
              lVar3 = *(long *)(param_1 + 0x34);
              *(undefined4 *)(lVar3 + 0x10) = 0;
              *(undefined4 *)(lVar3 + 0x14) = 0;
              lVar3 = DAT_fffffffff0100168 + (long)local_24 * 0x50 + (long)local_20 * 400;
              *(int *)(lVar3 + 0x2bd8) = (int)local_50;
              *(int *)(lVar3 + 0x2bdc) = (int)((ulong)local_50 >> 0x20);
              *(int *)(DAT_fffffffff0100168 + (long)local_24 * 0x50 + (long)local_20 * 400 + 0x2c0c)
                   = *(int *)(DAT_fffffffff0100168 + (long)local_24 * 0x50 + (long)local_20 * 400 +
                             0x2c0c) + -1;
              local_11 = '\x01';
            }
          }
        }
      }
      else {
        local_11 = '\x01';
      }
      return local_11;
    }
    if (((*(uint *)(param_1 + (ulong)local_18 * 100 + 0x54) & 1) != 0) &&
       ((*(uint *)(param_1 + (ulong)local_18 * 100 + 0x54) >> 1 & 1) != 0)) {
      local_12 = '\x01';
      goto LAB_fffffffff0013e14;
    }
    local_18 = local_18 + 1;
  } while( true );
}


/* ---- FUN_fffffffff00145ec @ fffffffff00145ec size=1712 ---- */

char FUN_fffffffff00145ec(void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_13;
  undefined1 local_11;
  
  lVar7 = DAT_fffffffff0100168 + (ulong)*(uint *)(DAT_fffffffff0100168 + 0x30f4) * 0x100;
  local_11 = '\x01';
  bVar4 = false;
  local_13 = 0;
  lVar3 = *(long *)(lVar7 + 0x10);
  local_18 = 0;
  uVar2 = *(uint *)(lVar7 + 0x18) >> 3;
  local_1c = 0x30000;
  if ((uVar2 & 1) == 0) {
    if ((*(uint *)(lVar7 + 0x18) >> 2 & 1) == 0) {
      if ((*(uint *)(lVar7 + 0x18) >> 1 & 1) == 0) {
        if (lVar3 == 0) {
          local_11 = '\0';
          local_1c = 0x30005;
        }
        else {
          iVar6 = *(int *)(lVar3 + 0x30);
          iVar1 = *(int *)(lVar3 + 0x28);
          for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
            if (((*(uint *)(lVar3 + (ulong)local_20 * 100 + 0x54) & 1) != 0) &&
               (*(int *)(lVar3 + (ulong)local_20 * 100 + 0x60) == *(int *)(lVar7 + 0xc))) {
              bVar4 = true;
              local_18 = local_20;
              break;
            }
          }
          if (bVar4) {
            if ((*(uint *)(lVar3 + (ulong)local_18 * 100 + 0x54) >> 1 & 1) != 0) {
              if ((**(uint **)(lVar3 + (ulong)local_18 * 100 + 0x58) & 2) == 0) {
                local_11 = '\0';
                local_1c = 0x30002;
              }
              else {
                iVar5 = FUN_fffffffff000a62c(lVar3,(long)(int)local_18);
                if (iVar5 == 0) {
                  local_13 = 1;
                  local_11 = '\0';
                  local_1c = 0x30001;
                }
              }
            }
            if ((*(uint *)(lVar3 + (ulong)local_18 * 100 + 0x54) >> 10 & 1) != 0) {
              for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
                if (*(long *)(DAT_fffffffff0100168 + ((ulong)local_24 + 0x630) * 8 + 0xc) ==
                    lVar3 + (ulong)local_18 * 100 + 0x54) {
                  lVar8 = DAT_fffffffff0100168 + ((ulong)local_24 + 0x630) * 8;
                  *(undefined4 *)(lVar8 + 0xc) = 0;
                  *(undefined4 *)(lVar8 + 0x10) = 0;
                }
              }
            }
            FUN_fffffffff000ab84(lVar3 + (ulong)local_18 * 100 + 0x54,local_13,1);
            if ((((*(uint *)(*(long *)(*(long *)(lVar3 + 0x34) + 0x10) + 0x84) & 0x20) != 0) &&
                (iVar6 == 1)) && (*(int *)(DAT_fffffffff0100168 + 0x31bc) != 0)) {
              *(int *)(DAT_fffffffff0100168 + 0x31bc) = *(int *)(DAT_fffffffff0100168 + 0x31bc) + -1
              ;
            }
            *(int *)(DAT_fffffffff0100168 + (long)iVar1 * 0x50 + (long)iVar6 * 400 + 0x2c14) =
                 *(int *)(DAT_fffffffff0100168 + (long)iVar1 * 0x50 + (long)iVar6 * 400 + 0x2c14) +
                 -1;
            iVar6 = FUN_fffffffff0013d5c(lVar3);
            if (iVar6 == 0) {
              local_11 = '\0';
              local_1c = local_1c | 3;
            }
          }
          else {
            local_11 = '\0';
            local_1c = 0x30004;
          }
        }
      }
      else {
        local_11 = FUN_fffffffff0010f50((long)*(int *)(lVar7 + 0xc));
      }
    }
    else {
      local_11 = FUN_fffffffff0010df4
                           ((long)*(int *)(lVar7 + 0xc),(long)*(int *)(lVar7 + 0x2c),
                            (long)*(int *)(lVar7 + 0x30),*(undefined8 *)(lVar7 + 0x34),
                            (long)*(int *)(lVar7 + 0x3c));
    }
  }
  else {
    local_11 = FUN_fffffffff0010bc8
                         ((long)*(int *)(lVar7 + 0xc),(long)*(int *)(lVar7 + 0x2c),
                          (long)*(int *)(lVar7 + 0x30),(long)*(int *)(lVar7 + 0x40));
  }
  if (local_11 != '\0') {
    FUN_fffffffff00115a4(*(undefined8 *)(lVar7 + 0x1c),*(undefined8 *)(lVar7 + 0x24),1);
    if ((uVar2 & 1) == 0) {
      *(int *)(DAT_fffffffff0100168 + 0x308c) = *(int *)(DAT_fffffffff0100168 + 0x308c) + 1;
    }
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x30) == 1)) {
      FUN_fffffffff001aba4();
    }
  }
  *(uint *)(DAT_fffffffff0100168 + 0x3090) = local_1c;
  return local_11;
}


/* ---- FUN_fffffffff0014c9c @ fffffffff0014c9c size=792 ---- */

char FUN_fffffffff0014c9c(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_11;
  
  local_11 = '\0';
  lVar2 = DAT_fffffffff0100168 + (ulong)*(uint *)(DAT_fffffffff0100168 + 0x30f4) * 0x100;
  lVar3 = lVar2 + 8;
  if (lVar3 != 0) {
    *(undefined4 *)(DAT_fffffffff0100168 + 0x30ec) = *(undefined4 *)(lVar2 + 0x84);
    for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
      for (local_1c = 0; local_1c < 5; local_1c = local_1c + 1) {
        *(long *)(DAT_fffffffff0100168 + (ulong)local_1c * 0x50 + (ulong)local_18 * 400 + 0x2be0) =
             *(long *)(lVar3 + ((ulong)local_1c + 4) * 8 + 0xc) * 10;
        uVar1 = *(undefined8 *)(lVar3 + (ulong)local_1c * 8 + 4);
        lVar4 = DAT_fffffffff0100168 + (ulong)local_1c * 0x50 + (ulong)local_18 * 400;
        *(int *)(lVar4 + 0x2bf8) = (int)uVar1;
        *(int *)(lVar4 + 0x2bfc) = (int)((ulong)uVar1 >> 0x20);
        uVar1 = *(undefined8 *)(lVar3 + ((ulong)local_1c + 10) * 8 + 4);
        lVar4 = DAT_fffffffff0100168 + (ulong)local_1c * 0x50 + (ulong)local_18 * 400;
        *(int *)(lVar4 + 0x2c00) = (int)uVar1;
        *(int *)(lVar4 + 0x2c04) = (int)((ulong)uVar1 >> 0x20);
      }
    }
    local_11 = '\x01';
  }
  if (local_11 != '\0') {
    FUN_fffffffff00115a4(*(undefined8 *)(lVar2 + 0x88),*(undefined8 *)(lVar2 + 0x90),0);
  }
  return local_11;
}


/* ---- FUN_fffffffff0014fb4 @ fffffffff0014fb4 size=252 ---- */

undefined1 FUN_fffffffff0014fb4(long param_1,int *param_2)

{
  undefined4 local_1c;
  uint local_18;
  undefined1 local_11;
  
  local_11 = 1;
  local_1c = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  local_18 = 0;
  do {
    if (7 < local_18) {
LAB_fffffffff0015074:
      if (*param_2 != 0) {
        local_11 = FUN_fffffffff000ac4c(param_1,&local_1c);
      }
      return local_11;
    }
    if ((*(uint *)(param_1 + (ulong)local_18 * 100 + 0x54) & 1) != 0) {
      *param_2 = *(int *)(param_1 + (ulong)local_18 * 100 + 0x60);
      goto LAB_fffffffff0015074;
    }
    local_18 = local_18 + 1;
  } while( true );
}


/* ---- FUN_fffffffff00150b0 @ fffffffff00150b0 size=564 ---- */

char FUN_fffffffff00150b0(void)

{
  long lVar1;
  uint local_40;
  undefined4 uStack_34;
  int local_2c;
  undefined8 local_28;
  long local_20;
  uint local_18;
  char local_11;
  
  lVar1 = DAT_fffffffff0100168 + (ulong)*(uint *)(DAT_fffffffff0100168 + 0x30f4) * 0x100;
  local_20 = lVar1 + 8;
  local_11 = 0;
  local_2c = 0;
  local_18 = 0x60000;
  if ((*(uint *)(lVar1 + 0xc) & 1) == 0) {
    local_28 = *(undefined8 *)(lVar1 + 0x10);
    local_11 = FUN_fffffffff0014fb4(local_28,&local_2c);
    if (local_11 == '\0') {
      local_18 = local_18 | 2;
    }
  }
  else {
    local_11 = '\0';
    local_18 = 0x60001;
  }
  if (local_11 != '\0') {
    FUN_fffffffff00115a4(*(undefined8 *)(local_20 + 0x10),*(undefined4 *)(local_20 + 0x18),1);
    FUN_fffffffff00115a4(*(undefined8 *)(local_20 + 0x1c),*(undefined8 *)(local_20 + 0x24),0);
    if (local_2c != 0) {
      FUN_fffffffff0011650
                (CONCAT44(0x40000,local_40 & 0xfffc0000),
                 CONCAT44(uStack_34,local_2c) & 0xffffffff03ffffff);
    }
  }
  *(uint *)(DAT_fffffffff0100168 + 0x3090) = local_18;
  return local_11;
}


/* ---- FUN_fffffffff00152e4 @ fffffffff00152e4 size=1288 ---- */

char FUN_fffffffff00152e4(void)

{
  long lVar1;
  uint local_78;
  undefined4 uStack_6c;
  uint local_60;
  undefined4 uStack_54;
  undefined4 local_4c;
  undefined8 local_48;
  int local_40;
  int local_3c;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  uint local_18;
  char local_11;
  
  lVar1 = DAT_fffffffff0100168 + (ulong)*(uint *)(DAT_fffffffff0100168 + 0x30f4) * 0x100;
  local_30 = lVar1 + 8;
  local_11 = '\x01';
  local_4c = 0;
  local_18 = 0x60000;
  local_38 = *(long *)(lVar1 + 0x10);
  local_3c = *(int *)(local_38 + 0x30);
  local_40 = *(int *)(local_38 + 0x28);
  if ((*(uint *)(lVar1 + 0xc) & 1) == 0) {
    local_48 = *(undefined8 *)(lVar1 + 0x10);
    local_11 = FUN_fffffffff0014fb4(local_48,&local_4c);
    if (local_11 == '\0') {
      local_18 = local_18 | 2;
    }
    else {
      if (((*(uint *)(local_30 + 4) & 2) == 0) && (*(long *)(local_30 + 0x10) != 0)) {
        FUN_fffffffff00115a4(*(undefined8 *)(local_30 + 0x10),*(undefined4 *)(local_30 + 0x18),1);
      }
      FUN_fffffffff00115a4(*(undefined8 *)(local_30 + 0x1c),*(undefined8 *)(local_30 + 0x24),0);
      if ((*(uint *)(local_30 + 4) & 2) == 0) {
        FUN_fffffffff0011650
                  (CONCAT44(0x40000,local_60 & 0xfffc0000),
                   CONCAT44(uStack_54,*(undefined4 *)(local_30 + 0x2c)) & 0xffffffff03ffffff);
      }
    }
  }
  else {
    local_20 = *(long *)(DAT_fffffffff0100168 + (long)local_40 * 0x50 + (long)local_3c * 400 +
                        0x2bd8);
    local_28 = 0;
    for (; local_20 != 0; local_20 = *(long *)(local_20 + 8)) {
      for (local_28 = *(long *)(local_20 + 0x18); local_28 != 0; local_28 = *(long *)(local_28 + 8))
      {
        local_4c = 0;
        if ((*(int *)(local_28 + 0x374) == *(int *)(local_30 + 0x2c)) &&
           (local_11 = FUN_fffffffff0014fb4(local_28,&local_4c), local_11 == '\0')) {
          local_18 = local_18 | 2;
          break;
        }
      }
      if (local_11 == '\0') break;
    }
    if (local_11 != '\0') {
      if (*(long *)(local_30 + 0x10) != 0) {
        FUN_fffffffff00115a4(*(undefined8 *)(local_30 + 0x10),*(undefined4 *)(local_30 + 0x18),1);
      }
      FUN_fffffffff00115a4(*(undefined8 *)(local_30 + 0x1c),*(undefined8 *)(local_30 + 0x24),0);
      FUN_fffffffff0011650
                (CONCAT44(0x40000,local_78 & 0xfffc0000),
                 CONCAT44(uStack_6c,*(undefined4 *)(local_30 + 0x2c)) & 0xffffffff03ffffff);
    }
  }
  *(uint *)(DAT_fffffffff0100168 + 0x3090) = local_18;
  return local_11;
}


/* ---- FUN_fffffffff00157ec @ fffffffff00157ec size=716 ---- */

char FUN_fffffffff00157ec(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 local_40;
  undefined4 uStack_34;
  undefined1 local_15;
  undefined4 local_14;
  
  lVar2 = DAT_fffffffff0100168 + (ulong)*(uint *)(DAT_fffffffff0100168 + 0x30f4) * 0x100;
  local_14 = 0;
  local_15 = '\x01';
  if ((*(uint *)(lVar2 + 0xc) & 1) == 0) {
    lVar1 = *(long *)(lVar2 + 0x10);
    if (lVar1 == 0) {
      local_15 = '\0';
    }
    else {
      *(uint *)(lVar1 + 0x10) = *(uint *)(lVar1 + 0x10) & 0xfffffffe;
      lVar3 = DAT_fffffffff0100168 +
              (long)*(int *)(lVar1 + 0x28) * 0x50 + (long)*(int *)(lVar1 + 0x30) * 400;
      *(uint *)(lVar3 + 0x2c24) = *(uint *)(lVar3 + 0x2c24) | 1;
      if ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x800) != 0) {
        for (; local_14 < 8; local_14 = local_14 + 1) {
          if ((*(uint *)(lVar1 + (ulong)local_14 * 100 + 0x54) & 1) != 0) {
            lVar3 = lVar1 + (ulong)local_14 * 100;
            *(uint *)(lVar3 + 0x54) = *(uint *)(lVar3 + 0x54) & 0xfffffff7;
          }
        }
      }
    }
  }
  else {
    *(uint *)(DAT_fffffffff0100168 + 0x31ac) = *(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0xfffffffb
    ;
    FUN_fffffffff0011650(CONCAT44(0x40000,local_40 & 0xfffc0000),CONCAT44(uStack_34,0xc000000));
    local_15 = '\x01';
  }
  if (local_15 != '\0') {
    FUN_fffffffff00115a4(*(undefined8 *)(lVar2 + 0x18),*(undefined8 *)(lVar2 + 0x20),0);
  }
  return local_15;
}


/* ---- FUN_fffffffff0015ab8 @ fffffffff0015ab8 size=1104 ---- */

undefined1 FUN_fffffffff0015ab8(long param_1,uint *param_2,char param_3)

{
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  undefined1 local_11;
  
  local_11 = 0;
  local_24 = 0;
  local_28 = 0;
  if (((param_1 != 0) && (*(long *)(param_1 + 0x34) != 0)) &&
     (*(long *)(*(long *)(param_1 + 0x34) + 0x10) != 0)) {
    if ((*(int *)(param_1 + 0x28) == 3) && ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x100) != 0)
       ) {
      local_1c = *(uint *)(*(long *)(*(long *)(param_1 + 0x34) + 0x10) + 0x44);
    }
    else {
      local_1c = *(uint *)(*(long *)(*(long *)(param_1 + 0x34) + 0x10) + 0x40);
    }
    local_2c = 1 << ((long)(int)local_1c & 0x1fU);
    for (local_18 = 0; local_18 < 2; local_18 = local_18 + 1) {
      if ((*(uint *)(DAT_fffffffff0100168 + ((ulong)local_18 + 0x38) * 0x20 + 0x201c) & 1) != 0) {
        for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
          if (((*(uint *)(DAT_fffffffff0100168 + (ulong)local_20 * 0x18 + (ulong)local_18 * 0xc0 +
                         0x275c) & 1) != 0) &&
             (local_1c ==
              (*(uint *)(DAT_fffffffff0100168 + (ulong)local_20 * 0x18 + (ulong)local_18 * 0xc0 +
                        0x275c) >> 3 & 0xf))) {
            local_28 = local_20 << 8 | local_18 << 6 | local_24 << 4;
            FUN_fffffffff00246d4
                      ((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1e8d),&local_38,
                       (long)(int)local_28);
            local_34 = local_38 & 0xbfffffff;
            FUN_fffffffff00245a0
                      ((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1e8d),(long)(int)local_34,
                       (long)(int)local_28);
            *param_2 = *param_2 | 1 << ((long)(int)(local_20 + local_18 * 8) & 0x1fU);
          }
        }
      }
    }
    local_30 = local_2c | *param_2 << 0x10;
    if (param_3 == '\0') {
      FUN_fffffffff0024540
                ((long)(*(int *)(DAT_fffffffff0100168 + 0x3124) + 0x2200),0xffffffff80000000);
      FUN_fffffffff0024540
                ((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1e53),(long)(int)local_30);
    }
    else {
      *(uint *)(DAT_fffffffff0100168 + 0x3180) = local_30 | *(uint *)(DAT_fffffffff0100168 + 0x3180)
      ;
    }
    local_11 = 1;
  }
  return local_11;
}


/* ---- FUN_fffffffff0015f08 @ fffffffff0015f08 size=1016 ---- */

char FUN_fffffffff0015f08(long param_1)

{
  int iVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  uint local_1c;
  uint local_18;
  char local_11;
  
  local_11 = '\0';
  local_1c = 1 << ((long)*(int *)(param_1 + 0x28) & 0x1fU);
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar1 = 0x10;
  }
  else {
    iVar1 = 0x18;
  }
  local_18 = local_1c | 1 << ((long)(iVar1 + *(int *)(param_1 + 0x24)) & 0x1fU);
  if (*(int *)(param_1 + 0x48) != 0) {
    local_1c = 1 << ((long)*(int *)(param_1 + 0x48) & 0x1fU);
    if (*(int *)(param_1 + 0x40) == 0) {
      iVar1 = 0x10;
    }
    else {
      iVar1 = 0x18;
    }
    local_18 = local_18 | local_1c | 1 << ((long)(iVar1 + *(int *)(param_1 + 0x44)) & 0x1fU);
  }
  FUN_fffffffff0024540((long)(*(int *)(DAT_fffffffff0100168 + 0x3124) + 0x2200),0xffffffff80000000);
  FUN_fffffffff0024540((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1e53),(long)(int)local_18)
  ;
  local_30 = 0;
  local_28 = 0;
  local_38._4_4_ = (*(uint *)(param_1 + 0x20) & 0xf) << 3 | (*(uint *)(param_1 + 0x24) & 0xff) << 7;
  local_38._0_4_ = 0;
  iVar1 = FUN_fffffffff000ec80
                    (&local_38,2000000,*(uint *)(DAT_fffffffff0100168 + 0x31ac) >> 0x10 & 1);
  if (iVar1 != 0) {
    local_11 = '\x01';
  }
  if ((local_11 != '\0') && (*(int *)(param_1 + 0x48) != 0)) {
    local_38 = CONCAT44(local_38._4_4_,(undefined4)local_38) & 0xfffffff8ffffffff;
    local_38._4_4_ =
         local_38._4_4_ & 0xffff8007 | (*(uint *)(param_1 + 0x40) & 0xf) << 3 |
         (*(uint *)(param_1 + 0x44) & 0xff) << 7;
    iVar1 = FUN_fffffffff000ec80
                      (&local_38,2000000,*(uint *)(DAT_fffffffff0100168 + 0x31ac) >> 0x10 & 1);
    if (iVar1 != 0) {
      local_11 = '\x01';
    }
  }
  local_11 = FUN_fffffffff0011314
                       ((long)*(int *)(param_1 + 0x20),(long)*(int *)(param_1 + 0x24),
                        (long)*(int *)(param_1 + 0x34),*(undefined8 *)(param_1 + 0x2c),
                        *(undefined8 *)(param_1 + 0x38));
  if ((local_11 != '\0') && (*(int *)(param_1 + 0x48) != 0)) {
    local_11 = FUN_fffffffff0011314
                         ((long)*(int *)(param_1 + 0x40),(long)*(int *)(param_1 + 0x44),
                          (long)*(int *)(param_1 + 0x54),*(undefined8 *)(param_1 + 0x4c),
                          *(undefined8 *)(param_1 + 0x58));
  }
  return local_11;
}


/* ---- FUN_fffffffff0016300 @ fffffffff0016300 size=656 ---- */

char FUN_fffffffff0016300(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  int local_28 [2];
  long local_20;
  char local_11;
  
  local_11 = '\0';
  local_20 = 0;
  local_28[0] = 0;
  local_2c = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_20 = FUN_fffffffff000c850(param_1,local_28,&local_48);
  if (local_20 != 0) {
    iVar2 = *(int *)(local_20 + 0x30);
    if (iVar2 == 2) {
      iVar2 = FUN_fffffffff0021db8(&local_48);
      if (iVar2 != 0) {
        local_11 = '\x01';
      }
    }
    else if (iVar2 < 3) {
      iVar1 = (int)param_1;
      if (iVar2 == 0) {
        FUN_fffffffff000d2c8(3,(long)iVar1,0,0,local_11);
        iVar2 = FUN_fffffffff0015ab8((long)local_28[0],local_20,&local_2c,0);
        if ((iVar2 != 0) &&
           (iVar2 = FUN_fffffffff000ec80
                              (&local_48,2000000,
                               *(uint *)(DAT_fffffffff0100168 + 0x31ac) >> 0x10 & 1), iVar2 != 0)) {
          local_11 = '\x01';
        }
        FUN_fffffffff000d2c8(3,(long)iVar1,0,1,local_11);
      }
      else if (iVar2 == 1) {
        FUN_fffffffff000d2c8(3,(long)iVar1,1,0,local_11);
        iVar2 = FUN_fffffffff00105e0(&local_48);
        if ((iVar2 != 0) &&
           (iVar2 = FUN_fffffffff000ec80
                              (&local_48,2000000,
                               *(uint *)(DAT_fffffffff0100168 + 0x31ac) >> 0x10 & 1), iVar2 != 0)) {
          local_11 = '\x01';
        }
        FUN_fffffffff000d2c8(3,(long)iVar1,1,1,local_11);
      }
    }
  }
  if (local_11 != '\0') {
    FUN_fffffffff000a750((long)local_28[0],local_20,(long)local_2c);
  }
  return local_11;
}


/* ---- FUN_fffffffff0016590 @ fffffffff0016590 size=1220 ---- */

undefined1 FUN_fffffffff0016590(undefined8 param_1)

{
  int iVar1;
  long alStack_b8 [4];
  ulong local_98 [12];
  int local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  long local_20;
  undefined1 local_11;
  
  local_11 = 1;
  local_20 = 0;
  local_30 = 0;
  local_34 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[4] = 0;
  local_98[5] = 0;
  local_98[6] = 0;
  local_98[7] = 0;
  local_98[8] = 0;
  local_98[9] = 0;
  local_98[10] = 0;
  local_98[0xb] = 0;
  for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
    alStack_b8[local_24] = 0xffffffff;
  }
  FUN_fffffffff0025858(alStack_b8,param_1,0x20);
  for (local_28 = 0; local_28 < 4; local_28 = local_28 + 1) {
    if (alStack_b8[local_28] != 0xffffffff) {
      local_20 = FUN_fffffffff000c850(alStack_b8[local_28],&local_30,local_98 + (ulong)local_28 * 3)
      ;
      if (((local_20 != 0) && (iVar1 = *(int *)(local_20 + 0x30), iVar1 != 2)) && (iVar1 < 3)) {
        if (iVar1 == 0) {
          FUN_fffffffff000d2c8(3,(long)(int)alStack_b8[local_28],0,0,local_11);
          FUN_fffffffff0015ab8((long)local_30,local_20,&local_34,1);
          FUN_fffffffff000d2c8(3,(long)(int)alStack_b8[local_28],0,1,local_11);
        }
        else if (iVar1 == 1) {
          FUN_fffffffff000d2c8(3,(long)(int)alStack_b8[local_28],1,0,local_11);
          iVar1 = FUN_fffffffff00105e0(local_98 + (ulong)local_28 * 3);
          if (iVar1 != 0) {
            iVar1 = FUN_fffffffff000ec80
                              (local_98 + (ulong)local_28 * 3,2000000,
                               *(uint *)(DAT_fffffffff0100168 + 0x31ac) >> 0x10 & 1);
            if (iVar1 == 0) {
              local_11 = 0;
            }
            else {
              FUN_fffffffff000a750((long)local_30,local_20,(long)local_34);
            }
          }
          FUN_fffffffff000d2c8(3,(long)(int)alStack_b8[local_28],1,1,local_11);
        }
      }
    }
  }
  if ((local_20 != 0) && (*(int *)(local_20 + 0x30) == 0)) {
    FUN_fffffffff0024540
              ((long)(*(int *)(DAT_fffffffff0100168 + 0x3124) + 0x2200),0xffffffff80000000);
    FUN_fffffffff0024540
              ((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1e53),
               (long)*(int *)(DAT_fffffffff0100168 + 0x3180));
    *(undefined4 *)(DAT_fffffffff0100168 + 0x3180) = 0;
    for (local_2c = 0; local_2c < 4; local_2c = local_2c + 1) {
      if ((local_98[(ulong)local_2c * 3] & 1) != 0) {
        iVar1 = FUN_fffffffff000ec80
                          (local_98 + (ulong)local_2c * 3,2000000,
                           *(uint *)(DAT_fffffffff0100168 + 0x31ac) >> 0x10 & 1);
        if (iVar1 == 0) {
          local_11 = 0;
        }
        else {
          FUN_fffffffff000a750((long)local_30,local_20,(long)local_34);
        }
      }
    }
  }
  return local_11;
}


/* ---- FUN_fffffffff0016a54 @ fffffffff0016a54 size=720 ---- */

char FUN_fffffffff0016a54(void)

{
  long lVar1;
  long lVar2;
  uint local_18;
  char local_11;
  
  lVar2 = DAT_fffffffff0100168 + (ulong)*(uint *)(DAT_fffffffff0100168 + 0x30f4) * 0x100;
  local_11 = '\0';
  if ((*(uint *)(lVar2 + 0xc) & 2) == 0) {
    if ((*(uint *)(lVar2 + 0xc) & 4) == 0) {
      if ((*(uint *)(lVar2 + 0xc) & 1) == 0) {
        if ((*(uint *)(lVar2 + 0xc) & 8) == 0) {
          lVar1 = *(long *)(lVar2 + 0x10);
          if (lVar1 != 0) {
            local_18 = 0;
            while ((local_18 < 8 &&
                   ((*(int *)(lVar1 + (ulong)local_18 * 100 + 0x60) == 0 ||
                    (local_11 = FUN_fffffffff0016300
                                          (*(undefined4 *)(lVar1 + (ulong)local_18 * 100 + 0x60)),
                    local_11 != '\0'))))) {
              local_18 = local_18 + 1;
            }
          }
        }
        else {
          local_11 = FUN_fffffffff0015f08(lVar2 + 8);
        }
      }
      else {
        local_11 = FUN_fffffffff0016300(*(undefined4 *)(lVar2 + 0x18));
      }
    }
    else {
      local_11 = FUN_fffffffff0017500
                           (*(undefined8 *)(lVar2 + 0x1c),(long)*(int *)(lVar2 + 0x24),1,
                            (long)*(int *)(lVar2 + 0x78));
    }
  }
  else {
    local_11 = FUN_fffffffff0017500
                         (*(undefined8 *)(lVar2 + 0x1c),(long)*(int *)(lVar2 + 0x24),0,
                          (long)*(int *)(lVar2 + 0x78));
  }
  if (local_11 != '\0') {
    if ((*(uint *)(lVar2 + 0xc) & 2) == 0) {
      FUN_fffffffff00115a4(*(undefined8 *)(lVar2 + 0x68),*(undefined8 *)(lVar2 + 0x70),0);
    }
    else {
      FUN_fffffffff00115a4(*(undefined8 *)(lVar2 + 0x68),*(undefined8 *)(lVar2 + 0x70),1);
    }
  }
  return local_11;
}


/* ---- FUN_fffffffff0016d24 @ fffffffff0016d24 size=760 ---- */

void FUN_fffffffff0016d24(long param_1,uint *param_2,long param_3,int param_4)

{
  undefined4 local_38 [2];
  int local_30;
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  long local_20;
  long local_18;
  
  local_30 = 0xc000004;
  local_2c = 0;
  local_24 = 0;
  while ((local_24 < 5 && (*param_2 < 4))) {
    local_18 = *(long *)(DAT_fffffffff0100168 + (ulong)local_24 * 0x50 + (long)param_4 * 400 +
                        0x2bd8);
    while ((local_18 != 0 && (*param_2 < 4))) {
      local_20 = *(long *)(local_18 + 0x18);
      while ((local_20 != 0 && (*param_2 < 4))) {
        for (local_28 = 0; local_28 < 8; local_28 = local_28 + 1) {
          if ((*(uint *)(local_20 + (ulong)local_28 * 100 + 0x54) >> 9 & 1) == 1) {
            *(uint *)(DAT_fffffffff0100168 + 0x31ac) = *(uint *)(DAT_fffffffff0100168 + 0x31ac) | 4;
            *(ulong *)(param_1 + (ulong)*param_2 * 8) =
                 (ulong)*(uint *)(local_20 + (ulong)local_28 * 100 + 0x60);
            local_38[0] = 0;
            FUN_fffffffff0025858(local_38,local_20 + (ulong)local_28 * 100 + 0x60,4);
            FUN_fffffffff0025154((long)local_30,local_38,(ulong)(*param_2 << 2) + param_3);
            *param_2 = *param_2 + 1;
          }
        }
        local_20 = *(long *)(local_20 + 8);
      }
      local_18 = *(long *)(local_18 + 8);
    }
    local_24 = local_24 + 1;
  }
  return;
}


/* ---- FUN_fffffffff001701c @ fffffffff001701c size=696 ---- */

undefined1 FUN_fffffffff001701c(long param_1,uint *param_2,long param_3,uint param_4)

{
  int iVar1;
  undefined4 local_30 [2];
  int local_28;
  uint local_20;
  uint local_1c;
  uint local_18;
  undefined1 local_11;
  
  local_11 = 1;
  local_28 = 0xc000004;
  if (param_4 != 0) {
    for (local_18 = 0; local_18 < 2; local_18 = local_18 + 1) {
      for (local_1c = 0; local_1c < 8; local_1c = local_1c + 1) {
        if (((*(uint *)(DAT_fffffffff0100168 + (ulong)local_1c * 0x18 + (ulong)local_18 * 0xc0 +
                       0x275c) & 1) != 0) &&
           ((param_4 >>
             (long)(int)(*(uint *)(DAT_fffffffff0100168 +
                                   (ulong)local_1c * 0x18 + (ulong)local_18 * 0xc0 + 0x275c) >> 3 &
                        0xf) & 1) != 0)) {
          local_20 = *(uint *)(*(long *)(DAT_fffffffff0100168 +
                                         (ulong)local_1c * 0x18 + (ulong)local_18 * 0xc0 + 0x2764) +
                              0xc);
          iVar1 = FUN_fffffffff001b208(param_1,4,local_20);
          if (iVar1 == 0) {
            *(ulong *)(param_1 + (ulong)*param_2 * 8) = (ulong)local_20;
            local_30[0] = 0;
            FUN_fffffffff0025858(local_30,&local_20,4);
            FUN_fffffffff0025154((long)local_28,local_30,(ulong)(*param_2 << 2) + param_3);
            *param_2 = *param_2 + 1;
            local_11 = 0;
          }
        }
      }
    }
  }
  return local_11;
}


/* ---- FUN_fffffffff00172d4 @ fffffffff00172d4 size=556 ---- */

void FUN_fffffffff00172d4(long param_1,uint *param_2,long param_3,int param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined4 local_48 [2];
  int local_40;
  undefined1 local_39;
  long local_38;
  uint *local_30;
  uint local_24;
  
  local_39 = 1;
  local_30 = (uint *)0x0;
  local_40 = 0xc000004;
  local_24 = 0;
  local_38 = 0;
  do {
    local_24 = local_24 + 1;
    local_30 = (uint *)FUN_fffffffff002092c(&local_39,(long)param_4,1);
    local_38 = FUN_fffffffff0010abc();
    while( true ) {
      lVar2 = FUN_fffffffff0010abc();
      uVar1 = lVar2 - local_38;
      uVar3 = FUN_fffffffff0010a08(50000);
      if (uVar3 <= uVar1) break;
      FUN_fffffffff00116fc(50000);
    }
    local_30 = (uint *)FUN_fffffffff002092c(&local_39,(long)param_4,0);
    if (((local_30 == (uint *)0x0) || (0x13 < local_24)) && (local_30 != (uint *)0x0)) {
      *local_30 = *local_30 | 0x200;
      *(uint *)(DAT_fffffffff0100168 + 0x31ac) = *(uint *)(DAT_fffffffff0100168 + 0x31ac) | 4;
      *(ulong *)(param_1 + (ulong)*param_2 * 8) = (ulong)local_30[3];
      local_48[0] = 0;
      FUN_fffffffff0025858(local_48,local_30 + 3,4);
      FUN_fffffffff0025154((long)local_40,local_48,(ulong)(*param_2 << 2) + param_3);
      *param_2 = *param_2 + 1;
    }
  } while (((local_30 != (uint *)0x0) && (*param_2 < 4)) && (local_24 < 0x14));
  return;
}


/* ---- FUN_fffffffff0017500 @ fffffffff0017500 size=1020 ---- */

undefined1 FUN_fffffffff0017500(long param_1,int param_2,char param_3,int param_4)

{
  bool bVar1;
  uint *puVar2;
  long lVar3;
  undefined4 local_58 [2];
  ulong auStack_50 [4];
  uint local_2c;
  int local_28;
  uint local_20;
  uint local_1c;
  uint local_18;
  char local_12;
  undefined1 local_11;
  
  local_11 = 1;
  local_12 = '\x01';
  local_20 = 0;
  local_28 = 0xc000004;
  local_2c = 0;
  for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
    auStack_50[local_18] = 0xffffffff;
  }
  if (param_3 == '\0') {
    FUN_fffffffff0016d24(auStack_50,&local_2c,param_1,(long)param_2);
  }
  if ((param_2 != 0) ||
     (local_12 = FUN_fffffffff001701c(auStack_50,&local_2c,param_1,(long)param_4),
     local_12 == '\x01')) {
    FUN_fffffffff00172d4(auStack_50,&local_2c,param_1,(long)param_2);
  }
  if (param_3 == '\0') {
    if (param_2 != 2) {
      for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
        if (((local_2c < 4) &&
            (*(long *)(DAT_fffffffff0100168 + ((ulong)local_1c + 0x630) * 8 + 0xc) != 0)) &&
           (param_2 ==
            *(int *)(*(long *)(*(long *)(DAT_fffffffff0100168 + ((ulong)local_1c + 0x630) * 8 + 0xc)
                              + 0x34) + 0x30))) {
          local_20 = *(uint *)(*(long *)(DAT_fffffffff0100168 + ((ulong)local_1c + 0x630) * 8 + 0xc)
                              + 0xc);
          lVar3 = FUN_fffffffff000ef3c
                            (*(undefined8 *)
                              (*(long *)(DAT_fffffffff0100168 + ((ulong)local_1c + 0x630) * 8 + 0xc)
                              + 4),*(uint *)(DAT_fffffffff0100168 + 0x31ac) >> 0x10 & 1);
          if ((lVar3 == 0) || (lVar3 = FUN_fffffffff001b208(auStack_50,4,local_20), lVar3 != 0)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            auStack_50[local_2c] = (ulong)local_20;
            local_58[0] = 0;
            FUN_fffffffff0025858(local_58,&local_20,4);
            FUN_fffffffff0025154((long)local_28,local_58,(ulong)(local_2c << 2) + param_1);
            local_2c = local_2c + 1;
          }
          puVar2 = *(uint **)(DAT_fffffffff0100168 + ((ulong)local_1c + 0x630) * 8 + 0xc);
          *puVar2 = *puVar2 & 0xfffffbff;
          lVar3 = DAT_fffffffff0100168 + ((ulong)local_1c + 0x630) * 8;
          *(undefined4 *)(lVar3 + 0xc) = 0;
          *(undefined4 *)(lVar3 + 0x10) = 0;
        }
      }
    }
    local_11 = FUN_fffffffff0016590(auStack_50);
  }
  return local_11;
}


/* ---- FUN_fffffffff00178fc @ fffffffff00178fc size=232 ---- */

bool FUN_fffffffff00178fc(void)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = DAT_fffffffff0100168 + (ulong)*(uint *)(DAT_fffffffff0100168 + 0x30f4) * 0x100;
  FUN_fffffffff00115a4(*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18),0);
  bVar1 = **(long **)(lVar2 + 0x10) == *(long *)(lVar2 + 0x18);
  if (bVar1) {
    *(undefined1 *)(lVar2 + 0xc) = 1;
  }
  return bVar1;
}


/* ---- FUN_fffffffff00179e4 @ fffffffff00179e4 size=100 ---- */

bool FUN_fffffffff00179e4(void)

{
  bool bVar1;
  
  bVar1 = (*DAT_fffffffff0100168 & 4) != 0;
  if (bVar1) {
    FUN_fffffffff001acec();
    *DAT_fffffffff0100168 = *DAT_fffffffff0100168 & 0xfffffffb;
  }
  return bVar1;
}


/* ---- FUN_fffffffff0017a48 @ fffffffff0017a48 size=560 ---- */

undefined1 FUN_fffffffff0017a48(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  FUN_fffffffff0024af8();
  lVar2 = DAT_fffffffff0100168 + (ulong)*(uint *)(DAT_fffffffff0100168 + 0x30f4) * 0x100;
  *(undefined4 *)(DAT_fffffffff0100168 + (long)*(int *)(lVar2 + 0xc) * 0x1c + 0x3094) =
       *(undefined4 *)(lVar2 + 0x18);
  *(undefined4 *)(DAT_fffffffff0100168 + (long)*(int *)(lVar2 + 0xc) * 0x1c + 0x3098) =
       *(undefined4 *)(lVar2 + 0x1c);
  *(undefined4 *)(DAT_fffffffff0100168 + (long)*(int *)(lVar2 + 0xc) * 0x1c + 0x309c) = 0;
  *(undefined4 *)(DAT_fffffffff0100168 + (long)*(int *)(lVar2 + 0xc) * 0x1c + 0x30a0) = 0;
  uVar1 = FUN_fffffffff001853c
                    (*(undefined8 *)(lVar2 + 0x10),0,*(undefined4 *)(DAT_fffffffff0100168 + 0x2bd0))
  ;
  lVar3 = DAT_fffffffff0100168 + (long)*(int *)(lVar2 + 0xc) * 0x1c;
  *(int *)(lVar3 + 0x30a8) = (int)uVar1;
  *(int *)(lVar3 + 0x30ac) = (int)((ulong)uVar1 >> 0x20);
  FUN_fffffffff0024b1c();
  FUN_fffffffff00115a4(*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x28),1);
  return 1;
}


/* ---- FUN_fffffffff0017c78 @ fffffffff0017c78 size=2244 ---- */

char FUN_fffffffff0017c78(void)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined1 auStack_510 [36];
  undefined4 local_4ec;
  undefined4 local_4e8;
  undefined4 local_4e4;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined4 local_4d8;
  undefined4 local_4d0;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined4 local_4a8;
  undefined4 local_490;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [20];
  undefined4 local_44;
  undefined8 local_40;
  uint local_38;
  int local_34;
  undefined8 local_30;
  long local_28;
  long local_20;
  uint local_18;
  bool local_11;
  
  local_11 = true;
  local_44 = 0xffff;
  local_18 = 0xd0000;
  lVar4 = DAT_fffffffff0100168 + (ulong)*(uint *)(DAT_fffffffff0100168 + 0x30f4) * 0x100;
  local_20 = lVar4 + 8;
  local_28 = 0;
  if ((*(uint *)(lVar4 + 0x1c) & 6) == 2) {
    local_11 = (bool)FUN_fffffffff001d8e8(&local_44,0);
    if ((*(long *)(local_20 + 0x54) == 0) || (local_11 == false)) {
      if (local_11 == false) {
        local_18 = local_18 | 1;
      }
    }
    else {
      **(undefined4 **)(local_20 + 0x54) = local_44;
    }
  }
  else if ((*(uint *)(lVar4 + 0x1c) & 6) == 4) {
    local_38 = *(uint *)(lVar4 + 0x24);
    iVar3 = FUN_fffffffff001da8c((long)(int)local_38);
    if (iVar3 == 0) {
      local_18 = local_18 | 2;
      local_11 = false;
    }
    else {
      local_28 = *(long *)(DAT_fffffffff0100168 + (ulong)local_38 * 0xc + 0x2b08);
      local_40 = *(undefined8 *)(DAT_fffffffff0100168 + 0x3184);
      FUN_fffffffff001da14((long)(int)local_38);
      if (local_28 != 0) {
        lVar4 = FUN_fffffffff001b1ac(local_28,local_40);
        if (lVar4 != 0) {
          iVar3 = FUN_fffffffff001db90(local_28);
          if (iVar3 == 0) {
            local_18 = local_18 | 4;
            local_11 = false;
          }
          FUN_fffffffff001ef24(local_28,0,1);
          FUN_fffffffff001ef24(local_28,1,1);
        }
        *(uint *)(local_28 + 0x84) = *(uint *)(local_28 + 0x84) & 0xfffffff7;
      }
      if (*(long *)(local_20 + 0x54) != 0) {
        **(undefined4 **)(local_20 + 0x54) = 0;
      }
    }
  }
  else if ((*(uint *)(lVar4 + 0x1c) & 6) == 0) {
    local_30 = *(undefined8 *)(DAT_fffffffff0100168 + 0x3184);
    local_28 = *(long *)(lVar4 + 0x28);
    local_34 = *(int *)(lVar4 + 0x24);
    if (local_28 == 0) {
      local_18 = 0xd0005;
    }
    local_11 = local_28 != 0;
    if ((local_11) && (lVar4 = FUN_fffffffff001b1ac(local_28,local_30), lVar4 != 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((((bVar1) &&
         ((((*(int *)(local_28 + 0x40) != 0xffff &&
            (*(int *)(local_28 + 0x40) != *(int *)(local_20 + 0x1c))) ||
           ((*(int *)(local_28 + 0x44) != 0xffff &&
            (*(int *)(local_28 + 0x44) != *(int *)(local_20 + 0x1c))))) ||
          ((*(int *)(local_28 + 0x48) != 0xffff &&
           (*(int *)(local_28 + 0x48) != *(int *)(local_20 + 0x1c))))))) &&
        ((*(int *)(local_28 + 0x4c) != 0 ||
         ((*(int *)(local_28 + 0x54) != 0 || (*(int *)(local_28 + 0x50) != 0)))))) &&
       (iVar3 = FUN_fffffffff001db90(local_28), iVar3 == 0)) {
      local_18 = local_18 | 4;
      local_11 = false;
    }
    if (local_11 != false) {
      FUN_fffffffff001f11c(local_28,0,(long)local_34,1);
      FUN_fffffffff001f11c(local_28,1,(long)local_34,1);
      *(uint *)(local_28 + 0x84) = *(uint *)(local_28 + 0x84) | 8;
      if (*(long *)(local_28 + 0x24) != *(long *)(local_20 + 0x28)) {
        uVar2 = *(undefined8 *)(local_20 + 0x28);
        *(int *)(local_28 + 0x24) = (int)uVar2;
        *(int *)(local_28 + 0x28) = (int)((ulong)uVar2 >> 0x20);
        uVar2 = *(undefined8 *)(local_20 + 0x30);
        *(int *)(local_28 + 0x2c) = (int)uVar2;
        *(int *)(local_28 + 0x30) = (int)((ulong)uVar2 >> 0x20);
        uVar2 = *(undefined8 *)(local_20 + 0x38);
        *(int *)(local_28 + 0x34) = (int)uVar2;
        *(int *)(local_28 + 0x38) = (int)((ulong)uVar2 >> 0x20);
      }
      FUN_fffffffff001e84c((long)local_34,local_28);
      FUN_fffffffff001e5bc((long)local_34,(long)*(int *)(local_20 + 0x68),1);
      FUN_fffffffff001eba0((long)local_34,0,0,0);
      FUN_fffffffff001eb00((long)local_34,(long)*(int *)(local_28 + 0x20),0);
      if ((*(uint *)(local_20 + 0x14) & 1) != 0) {
        *(undefined4 *)(local_28 + 0x58) = *(undefined4 *)(local_20 + 0x40);
        *(undefined4 *)(local_28 + 0x5c) = *(undefined4 *)(local_20 + 0x44);
        *(undefined4 *)(local_28 + 100) = *(undefined4 *)(local_20 + 0x48);
        *(undefined4 *)(local_28 + 0x60) = *(undefined4 *)(local_20 + 0x4c);
        *(undefined4 *)(local_28 + 0x68) = *(undefined4 *)(local_20 + 0x50);
        if (*(int *)(local_28 + 0x40) != 0xffff) {
          FUN_fffffffff001f2c8(auStack_58,local_28,1);
          FUN_fffffffff001f48c(auStack_58);
        }
      }
    }
  }
  else if ((*(uint *)(lVar4 + 0x1c) & 6) == 6) {
    FUN_fffffffff0025980(auStack_510,0,0x49c);
    local_490 = *(undefined4 *)(local_20 + 100);
    local_4ec = (undefined4)*(undefined8 *)(local_20 + 0x28);
    local_4e8 = (undefined4)((ulong)*(undefined8 *)(local_20 + 0x28) >> 0x20);
    local_4e4 = (undefined4)*(undefined8 *)(local_20 + 0x30);
    local_4e0 = (undefined4)((ulong)*(undefined8 *)(local_20 + 0x30) >> 0x20);
    local_4dc = (undefined4)*(undefined8 *)(local_20 + 0x38);
    local_4d8 = (undefined4)((ulong)*(undefined8 *)(local_20 + 0x38) >> 0x20);
    local_4d0 = *(undefined4 *)(local_20 + 0x1c);
    local_4b8 = *(undefined4 *)(local_20 + 0x40);
    local_4b4 = *(undefined4 *)(local_20 + 0x44);
    local_4ac = *(undefined4 *)(local_20 + 0x48);
    local_4b0 = *(undefined4 *)(local_20 + 0x4c);
    local_4a8 = *(undefined4 *)(local_20 + 0x50);
    FUN_fffffffff001e84c((long)*(int *)(local_20 + 0x1c),auStack_510);
    FUN_fffffffff001e5bc((long)*(int *)(local_20 + 0x1c),(long)*(int *)(local_20 + 0x68),1);
    FUN_fffffffff001eba0((long)*(int *)(local_20 + 0x1c),0,0,0);
    if ((*(uint *)(local_20 + 0x14) & 1) != 0) {
      FUN_fffffffff001f2c8(auStack_70,auStack_510,1);
      FUN_fffffffff001f48c(auStack_70);
    }
  }
  else {
    local_18 = 0xd0006;
    local_11 = false;
  }
  FUN_fffffffff00115a4(*(undefined8 *)(local_20 + 4),*(undefined8 *)(local_20 + 0xc),0);
  *(uint *)(DAT_fffffffff0100168 + 0x3090) = local_18;
  return local_11;
}


/* ---- FUN_fffffffff001853c @ fffffffff001853c size=68 ---- */

ulong FUN_fffffffff001853c(ulong param_1,long param_2,long param_3)

{
  return param_3 << 0x32 | param_2 << 0x30 | param_1;
}


/* ---- FUN_fffffffff0018580 @ fffffffff0018580 size=300 ---- */

undefined1 FUN_fffffffff0018580(void)

{
  long lVar1;
  long lVar2;
  
  lVar2 = DAT_fffffffff0100168 + (ulong)*(uint *)(DAT_fffffffff0100168 + 0x30f4) * 0x100;
  lVar1 = *(long *)(lVar2 + 0xc);
  *(uint *)(lVar1 + 0x84) = *(uint *)(lVar1 + 0x84) | 2;
  *(undefined4 *)(lVar1 + 0x58) = *(undefined4 *)(lVar2 + 0x14);
  *(undefined4 *)(lVar1 + 0x5c) = *(undefined4 *)(lVar2 + 0x18);
  *(undefined4 *)(lVar1 + 100) = *(undefined4 *)(lVar2 + 0x1c);
  *(undefined4 *)(lVar1 + 100) = *(undefined4 *)(lVar2 + 0x1c);
  *(undefined4 *)(lVar1 + 0x68) = *(undefined4 *)(lVar2 + 0x24);
  FUN_fffffffff001f5c4(lVar1);
  FUN_fffffffff00115a4(*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(lVar2 + 0x30),0);
  return 1;
}


/* ---- FUN_fffffffff00186ac @ fffffffff00186ac size=40 ---- */

undefined1 FUN_fffffffff00186ac(void)

{
  return 1;
}


/* ---- FUN_fffffffff00186d4 @ fffffffff00186d4 size=632 ---- */

char FUN_fffffffff00186d4(void)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined4 local_18;
  undefined1 local_11;
  
  local_11 = '\x01';
  local_18 = 0xa0000;
  lVar4 = DAT_fffffffff0100168 + (ulong)*(uint *)(DAT_fffffffff0100168 + 0x30f4) * 0x100;
  lVar1 = *(long *)(lVar4 + 0x1c);
  uVar2 = *(undefined8 *)(*(long *)(lVar1 + 0x34) + 0x10);
  if (*(int *)(lVar4 + 0x10) == *(int *)(lVar1 + 0x28)) {
    *(long *)(lVar1 + 0x14) = *(long *)(lVar4 + 0x14) * 10;
    *(undefined4 *)(lVar1 + 0x24) = *(undefined4 *)(lVar4 + 0xc);
  }
  else {
    iVar3 = FUN_fffffffff00189f8(lVar1);
    if (iVar3 == 0) {
      local_18 = 0xa0001;
      local_11 = '\0';
    }
    else {
      *(long *)(lVar1 + 0x14) = *(long *)(lVar4 + 0x14) * 10;
      *(undefined4 *)(lVar1 + 0x28) = *(undefined4 *)(lVar4 + 0x10);
      *(undefined4 *)(lVar1 + 0x24) = *(undefined4 *)(lVar4 + 0xc);
      iVar3 = FUN_fffffffff00192ac(lVar1,uVar2);
      if (iVar3 == 0) {
        local_18 = 0xa0002;
        local_11 = '\0';
      }
    }
  }
  if (local_11 != '\0') {
    FUN_fffffffff00115a4(*(undefined8 *)(lVar4 + 0x24),*(undefined8 *)(lVar4 + 0x2c),0);
  }
  *(undefined4 *)(DAT_fffffffff0100168 + 0x3090) = local_18;
  return local_11;
}


/* ---- FUN_fffffffff001894c @ fffffffff001894c size=172 ---- */

undefined1 FUN_fffffffff001894c(void)

{
  long lVar1;
  
  lVar1 = DAT_fffffffff0100168 + (ulong)*(uint *)(DAT_fffffffff0100168 + 0x30f4) * 0x100;
  FUN_fffffffff00115a4(*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),0);
  return 1;
}


/* ---- FUN_fffffffff00189f8 @ fffffffff00189f8 size=2228 ---- */

char FUN_fffffffff00189f8(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 local_30;
  long local_28;
  int local_1c;
  int local_18;
  char local_11;
  
  local_11 = '\x01';
  local_18 = *(int *)(param_1 + 0x30);
  local_1c = *(int *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x34) != 0) {
    if (param_1 == *(long *)(*(long *)(param_1 + 0x34) + 0x20)) {
      lVar3 = *(long *)(param_1 + 0x34);
      uVar1 = *(undefined8 *)(param_1 + 8);
      *(int *)(lVar3 + 0x20) = (int)uVar1;
      *(int *)(lVar3 + 0x24) = (int)((ulong)uVar1 >> 0x20);
    }
    local_28 = *(long *)(*(long *)(param_1 + 0x34) + 0x18);
    iVar2 = FUN_fffffffff001b05c(param_1,&local_28);
    if (iVar2 == 0) {
      local_11 = '\0';
    }
    else {
      lVar3 = *(long *)(param_1 + 0x34);
      *(int *)(lVar3 + 0x18) = (int)local_28;
      *(int *)(lVar3 + 0x1c) = (int)((ulong)local_28 >> 0x20);
      *(int *)(DAT_fffffffff0100168 + (long)local_1c * 0x50 + (long)local_18 * 400 + 0x2c10) =
           *(int *)(DAT_fffffffff0100168 + (long)local_1c * 0x50 + (long)local_18 * 400 + 0x2c10) +
           -1;
      lVar3 = *(long *)(*(long *)(param_1 + 0x34) + 0x10);
      *(int *)(lVar3 + (long)local_1c * 0x44 + (long)local_18 * 0x154 + 0xd4) =
           *(int *)(lVar3 + (long)local_1c * 0x44 + (long)local_18 * 0x154 + 0xd4) + -1;
      *(int *)(DAT_fffffffff0100168 + (long)local_1c * 0x50 + (long)local_18 * 400 + 0x2c14) =
           *(int *)(DAT_fffffffff0100168 + (long)local_1c * 0x50 + (long)local_18 * 400 + 0x2c14) -
           *(int *)(param_1 + 0x2c);
      if ((*(uint *)(param_1 + 0x10) & 2) != 0) {
        *(int *)(*(long *)(param_1 + 0x34) + 0x30) = *(int *)(*(long *)(param_1 + 0x34) + 0x30) + -1
        ;
        *(int *)(DAT_fffffffff0100168 +
                 (long)*(int *)(param_1 + 0x28) * 0x50 + (long)*(int *)(param_1 + 0x30) * 400 +
                0x2c18) =
             *(int *)(DAT_fffffffff0100168 +
                      (long)*(int *)(param_1 + 0x28) * 0x50 + (long)*(int *)(param_1 + 0x30) * 400 +
                     0x2c18) + -1;
        if (*(int *)(*(long *)(param_1 + 0x34) + 0x30) == 0) {
          lVar3 = *(long *)(param_1 + 0x34);
          *(undefined4 *)(lVar3 + 0x28) = 0;
          *(undefined4 *)(lVar3 + 0x2c) = 0;
        }
        if (*(int *)(DAT_fffffffff0100168 +
                     (long)*(int *)(param_1 + 0x28) * 0x50 + (long)*(int *)(param_1 + 0x30) * 400 +
                    0x2c18) == 0) {
          lVar3 = DAT_fffffffff0100168 +
                  (long)*(int *)(param_1 + 0x28) * 0x50 + (long)*(int *)(param_1 + 0x30) * 400;
          *(undefined4 *)(lVar3 + 0x2be8) = 0;
          *(undefined4 *)(lVar3 + 0x2bec) = 0;
        }
      }
    }
    if ((local_11 != '\0') && (local_28 == 0)) {
      lVar3 = *(long *)(param_1 + 0x34);
      *(undefined4 *)(lVar3 + 0x10) = 0;
      *(undefined4 *)(lVar3 + 0x14) = 0;
      if (*(long *)(DAT_fffffffff0100168 + (long)local_1c * 0x50 + (long)local_18 * 400 + 0x2c1c) ==
          *(long *)(param_1 + 0x34)) {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x34) + 8);
        lVar3 = DAT_fffffffff0100168 + (long)local_1c * 0x50 + (long)local_18 * 400;
        *(int *)(lVar3 + 0x2c1c) = (int)uVar1;
        *(int *)(lVar3 + 0x2c20) = (int)((ulong)uVar1 >> 0x20);
      }
      local_30 = *(undefined8 *)
                  (DAT_fffffffff0100168 + (long)local_1c * 0x50 + (long)local_18 * 400 + 0x2bd8);
      iVar2 = FUN_fffffffff001b05c(*(undefined8 *)(param_1 + 0x34),&local_30);
      if (iVar2 == 0) {
        local_11 = '\0';
      }
      else {
        lVar3 = DAT_fffffffff0100168 + (long)local_1c * 0x50 + (long)local_18 * 400;
        *(int *)(lVar3 + 0x2bd8) = (int)local_30;
        *(int *)(lVar3 + 0x2bdc) = (int)((ulong)local_30 >> 0x20);
        *(int *)(DAT_fffffffff0100168 + (long)local_1c * 0x50 + (long)local_18 * 400 + 0x2c0c) =
             *(int *)(DAT_fffffffff0100168 + (long)local_1c * 0x50 + (long)local_18 * 400 + 0x2c0c)
             + -1;
      }
    }
  }
  return local_11;
}


/* ---- FUN_fffffffff00192ac @ fffffffff00192ac size=2348 ---- */

char FUN_fffffffff00192ac(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  int local_3c;
  int local_38;
  char local_31;
  
  local_31 = '\x01';
  local_38 = *(int *)(param_1 + 0x30);
  local_3c = *(int *)(param_1 + 0x28);
  local_50 = *(undefined8 *)
              (DAT_fffffffff0100168 + (long)local_3c * 0x50 + (long)local_38 * 400 + 0x2bd8);
  local_48 = param_2 + (long)local_3c * 0x44 + (long)local_38 * 0x154 + 0xa0;
  *(int *)(local_48 + 0x10) = (int)param_2;
  *(int *)(local_48 + 0x14) = (int)((ulong)param_2 >> 0x20);
  *(long *)(param_1 + 0x34) = local_48;
  lVar2 = FUN_fffffffff001b1ac(local_48,local_50);
  if (lVar2 == 0) {
    local_31 = FUN_fffffffff001afb8(local_48,&local_50);
    lVar2 = DAT_fffffffff0100168 + (long)local_3c * 0x50 + (long)local_38 * 400;
    *(int *)(lVar2 + 0x2bd8) = (int)local_48;
    *(int *)(lVar2 + 0x2bdc) = (int)((ulong)local_48 >> 0x20);
    *(int *)(DAT_fffffffff0100168 + (long)local_3c * 0x50 + (long)local_38 * 400 + 0x2c0c) =
         *(int *)(DAT_fffffffff0100168 + (long)local_3c * 0x50 + (long)local_38 * 400 + 0x2c0c) + 1;
    lVar2 = *(long *)(local_48 + 0x10);
    uVar3 = *(undefined8 *)
             (DAT_fffffffff0100168 + (long)local_3c * 0x50 + (long)local_38 * 400 + 0x2be0);
    *(int *)(lVar2 + 0x10) = (int)uVar3;
    *(int *)(lVar2 + 0x14) = (int)((ulong)uVar3 >> 0x20);
    if ((*(uint *)(param_1 + 0x10) & 2) != 0) {
      if ((*(int *)(*(long *)(param_1 + 0x34) + 0x30) == 0) &&
         (*(long *)(*(long *)(param_1 + 0x34) + 0x28) == 0)) {
        lVar2 = *(long *)(param_1 + 0x34);
        uVar3 = FUN_fffffffff0010abc();
        *(int *)(lVar2 + 0x28) = (int)uVar3;
        *(int *)(lVar2 + 0x2c) = (int)((ulong)uVar3 >> 0x20);
      }
      lVar2 = DAT_fffffffff0100168;
      if (*(int *)(DAT_fffffffff0100168 + (long)local_3c * 0x50 + (long)local_38 * 400 + 0x2c18) ==
          0) {
        if (*(long *)(DAT_fffffffff0100168 + (long)local_3c * 0x50 + (long)local_38 * 400 + 0x2be8)
            == 0) {
          lVar1 = (long)local_38;
          lVar4 = (long)local_3c;
          uVar3 = FUN_fffffffff0010abc();
          lVar2 = lVar2 + lVar4 * 0x50 + lVar1 * 400;
          *(int *)(lVar2 + 0x2be8) = (int)uVar3;
          *(int *)(lVar2 + 0x2bec) = (int)((ulong)uVar3 >> 0x20);
        }
      }
      *(int *)(DAT_fffffffff0100168 + (long)local_3c * 0x50 + (long)local_38 * 400 + 0x2c18) =
           *(int *)(DAT_fffffffff0100168 + (long)local_3c * 0x50 + (long)local_38 * 400 + 0x2c18) +
           1;
      *(int *)(*(long *)(param_1 + 0x34) + 0x30) = *(int *)(*(long *)(param_1 + 0x34) + 0x30) + 1;
    }
  }
  if (local_31 != '\0') {
    local_58 = *(undefined8 *)(*(long *)(param_1 + 0x34) + 0x18);
    lVar2 = FUN_fffffffff001b1ac(param_1,local_58);
    if (lVar2 == 0) {
      local_31 = FUN_fffffffff001afb8(param_1,&local_58);
      *(int *)(local_48 + 0x18) = (int)param_1;
      *(int *)(local_48 + 0x1c) = (int)((ulong)param_1 >> 0x20);
      *(int *)(DAT_fffffffff0100168 + (long)local_3c * 0x50 + (long)local_38 * 400 + 0x2c10) =
           *(int *)(DAT_fffffffff0100168 + (long)local_3c * 0x50 + (long)local_38 * 400 + 0x2c10) +
           1;
      *(int *)(*(long *)(local_48 + 0x10) + (long)local_3c * 0x44 + (long)local_38 * 0x154 + 0xd4) =
           *(int *)(*(long *)(local_48 + 0x10) + (long)local_3c * 0x44 + (long)local_38 * 0x154 +
                   0xd4) + 1;
      *(int *)(DAT_fffffffff0100168 + (long)local_3c * 0x50 + (long)local_38 * 400 + 0x2c14) =
           *(int *)(DAT_fffffffff0100168 + (long)local_3c * 0x50 + (long)local_38 * 400 + 0x2c14) +
           *(int *)(param_1 + 0x2c);
      lVar2 = DAT_fffffffff0100168 + (long)local_3c * 0x50 + (long)local_38 * 400;
      *(uint *)(lVar2 + 0x2c24) = *(uint *)(lVar2 + 0x2c24) | 1;
    }
    else {
      local_31 = '\0';
    }
  }
  return local_31;
}


/* ---- FUN_fffffffff0019bd8 @ fffffffff0019bd8 size=240 ---- */

undefined1 FUN_fffffffff0019bd8(void)

{
  long lVar1;
  
  lVar1 = DAT_fffffffff0100168 + (ulong)*(uint *)(DAT_fffffffff0100168 + 0x30f4) * 0x100;
  FUN_fffffffff0025858(*(undefined8 *)(lVar1 + 0xc),DAT_fffffffff0100168,0x3200);
  FUN_fffffffff00115a4(*(undefined8 *)(lVar1 + 0x1c),*(undefined8 *)(lVar1 + 0x24),0);
  return 1;
}


/* ---- FUN_fffffffff0019cc8 @ fffffffff0019cc8 size=1188 ---- */

void FUN_fffffffff0019cc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  *(undefined4 *)(DAT_fffffffff0100168 + 0x2014) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(DAT_fffffffff0100168 + 0x2018) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(DAT_fffffffff0100168 + 0x2010) = *(undefined4 *)(param_1 + 0xc);
  *(uint *)(DAT_fffffffff0100168 + 0x31ac) = *(uint *)(DAT_fffffffff0100168 + 0x31ac) | 2;
  *(undefined4 *)(DAT_fffffffff0100168 + 0x30f8) = 4;
  *(uint *)(DAT_fffffffff0100168 + 0x31ac) =
       *(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0xfffffeff |
       (*(uint *)(param_1 + 0xd8) >> 5 & 1) << 8;
  *(uint *)(DAT_fffffffff0100168 + 0x31ac) =
       *(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0xfffff7ff |
       (*(uint *)(param_1 + 0xd8) >> 7 & 1) << 0xb;
  lVar2 = DAT_fffffffff0100168;
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  *(int *)(DAT_fffffffff0100168 + 0x31b0) = (int)uVar1;
  *(int *)(lVar2 + 0x31b4) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(DAT_fffffffff0100168 + 0x31b8) = *(undefined4 *)(param_1 + 0xdc);
  *(uint *)(DAT_fffffffff0100168 + 0x31ac) =
       *(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0xffffdfff |
       (*(uint *)(param_1 + 0xd8) >> 8 & 1) << 0xd;
  FUN_fffffffff0008ca0(DAT_fffffffff0100168 + 0x201c,param_2,param_3,param_4);
  FUN_fffffffff001b2a8
            (DAT_fffffffff0100168 + 0x2b04,(long)*(int *)(param_1 + 8),(long)*(int *)(param_1 + 4),
             (long)*(int *)(param_1 + 0x10));
  FUN_fffffffff001a16c(param_1 + 0x44);
  FUN_fffffffff000e6dc();
  *(undefined4 *)(DAT_fffffffff0100168 + 0x3088) = 0;
  *(undefined4 *)(DAT_fffffffff0100168 + 0x308c) = 0;
  *(undefined4 *)(DAT_fffffffff0100168 + 0x3090) = 0;
  *(uint *)(DAT_fffffffff0100168 + 0x31ac) =
       *(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0xfffffffe | *(uint *)(param_1 + 0xd8) & 1;
  lVar2 = DAT_fffffffff0100168;
  *(undefined4 *)(DAT_fffffffff0100168 + 0x3184) = 0;
  *(undefined4 *)(lVar2 + 0x3188) = 0;
  *(uint *)(DAT_fffffffff0100168 + 0x31ac) =
       *(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0xffffffef |
       (*(uint *)(param_1 + 0xd8) >> 1 & 1) << 4;
  *(uint *)(DAT_fffffffff0100168 + 0x31ac) =
       *(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0xffffffdf |
       (*(uint *)(param_1 + 0xd8) >> 2 & 1) << 5;
  *(uint *)(DAT_fffffffff0100168 + 0x31ac) =
       *(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0xffffffbf |
       (*(uint *)(param_1 + 0xd8) >> 3 & 1) << 6;
  *(uint *)(DAT_fffffffff0100168 + 0x31ac) =
       *(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0xffffff7f |
       (*(uint *)(param_1 + 0xd8) >> 4 & 1) << 7;
  *(uint *)(DAT_fffffffff0100168 + 0x31ac) =
       *(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0xfffffdff |
       (*(uint *)(param_1 + 0xd8) >> 6 & 1) << 9;
  *(uint *)(DAT_fffffffff0100168 + 0x31ac) =
       *(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0xfffeffff |
       (*(uint *)(param_1 + 0xd8) >> 10 & 1) << 0x10;
  return;
}


/* ---- FUN_fffffffff001a16c @ fffffffff001a16c size=208 ---- */

void FUN_fffffffff001a16c(long param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
      *(undefined4 *)
       (DAT_fffffffff0100168 + (ulong)local_18 * 0x50 + (ulong)local_14 * 400 + 0x2c08) =
           *(undefined4 *)(param_1 + (ulong)local_18 * 4);
    }
  }
  return;
}


/* ---- FUN_fffffffff001a23c @ fffffffff001a23c size=940 ---- */

undefined1 FUN_fffffffff001a23c(void)

{
  long lVar1;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  long local_20;
  undefined1 local_11;
  
  local_11 = 1;
  lVar1 = DAT_fffffffff0100168 + (ulong)*(uint *)(DAT_fffffffff0100168 + 0x30f4) * 0x100;
  local_20 = lVar1 + 8;
  switch(*(undefined4 *)(lVar1 + 0xc)) {
  case 0:
    FUN_fffffffff0011714(0x10,0,0);
    FUN_fffffffff001a5e8(*(undefined8 *)(local_20 + 0x18));
    FUN_fffffffff0011714(0x10,1,local_11);
    break;
  case 1:
    FUN_fffffffff0011714(0x11,0,0);
    FUN_fffffffff001a6f0(*(undefined8 *)(local_20 + 0x18),*(undefined8 *)(local_20 + 0x20));
    FUN_fffffffff0011714(0x11,1,local_11);
    break;
  case 2:
    FUN_fffffffff0011714(0x12,0,0);
    FUN_fffffffff0010774(0,0,local_20 + 0x18);
    FUN_fffffffff0011714(0x12,1,local_11);
    break;
  case 3:
    FUN_fffffffff0011714(0x13,0,0);
    FUN_fffffffff001a624(*(undefined8 *)(local_20 + 0x18),*(undefined4 *)(local_20 + 0x20));
    FUN_fffffffff0011714(0x13,1,local_11);
    break;
  case 4:
    FUN_fffffffff0011714(0x14,0,0);
    local_40 = *(undefined4 *)(local_20 + 0x18);
    local_3c = *(undefined4 *)(local_20 + 0x1c);
    local_38 = *(undefined4 *)(local_20 + 0x20);
    local_34 = *(undefined4 *)(local_20 + 0x24);
    local_30 = *(undefined4 *)(local_20 + 0x28);
    FUN_fffffffff001a880(&local_40);
    FUN_fffffffff0011714(0x14,1,local_11);
    break;
  case 5:
    FUN_fffffffff0011714(0x15,0,0);
    local_40 = *(undefined4 *)(local_20 + 0x18);
    local_3c = *(undefined4 *)(local_20 + 0x1c);
    local_38 = *(undefined4 *)(local_20 + 0x20);
    local_34 = *(undefined4 *)(local_20 + 0x24);
    local_30 = *(undefined4 *)(local_20 + 0x28);
    local_2c = *(undefined4 *)(local_20 + 0x2c);
    local_28 = *(undefined4 *)(local_20 + 0x30);
    local_24 = *(undefined4 *)(local_20 + 0x34);
    FUN_fffffffff0021ee4(&local_40);
    FUN_fffffffff0011714(0x15,1,local_11);
    break;
  case 6:
    FUN_fffffffff0011714(0x16,0,0);
    FUN_fffffffff0011f0c((long)*(int *)(local_20 + 0x18));
    FUN_fffffffff0011714(0x16,1,local_11);
    break;
  case 7:
    FUN_fffffffff0011714(0x18,0,0);
    FUN_fffffffff0012038();
    FUN_fffffffff0011714(0x18,1,local_11);
  }
  FUN_fffffffff00115a4(*(undefined8 *)(local_20 + 8),*(undefined8 *)(local_20 + 0x10),0);
  return local_11;
}


/* ---- FUN_fffffffff001a5e8 @ fffffffff001a5e8 size=60 ---- */

void FUN_fffffffff001a5e8(undefined8 param_1)

{
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = (int)param_1;
  uStack_14 = (int)((ulong)param_1 >> 0x20);
  FUN_fffffffff0024540((long)local_18,(long)uStack_14);
  return;
}


/* ---- FUN_fffffffff001a624 @ fffffffff001a624 size=204 ---- */

void FUN_fffffffff001a624(ulong param_1,long param_2)

{
  int local_30;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  
  local_18 = 0xc000004;
  local_1c = 0;
  local_20 = 0;
  local_30 = (int)param_1;
  FUN_fffffffff002465c((long)local_30,&local_1c);
  FUN_fffffffff0025858(&local_20,&local_1c,4);
  FUN_fffffffff0025154((long)local_18,&local_20,param_2 << 0x20 | param_1 >> 0x20);
  return;
}


/* ---- FUN_fffffffff001a6f0 @ fffffffff001a6f0 size=100 ---- */

void FUN_fffffffff001a6f0(undefined8 param_1,undefined8 param_2)

{
  FUN_fffffffff001eba0(0,0,param_1,param_2);
  FUN_fffffffff001eba0(0,1,param_1,param_2);
  return;
}


/* ---- FUN_fffffffff001a754 @ fffffffff001a754 size=140 ---- */

undefined1 FUN_fffffffff001a754(int param_1,uint param_2,uint param_3)

{
  uint local_18;
  undefined1 local_11;
  
  local_11 = 0;
  local_18 = 0;
  FUN_fffffffff002465c((long)param_1,&local_18);
  if ((param_3 & (param_2 ^ local_18)) == 0) {
    local_11 = 1;
  }
  return local_11;
}


/* ---- FUN_fffffffff001a7e0 @ fffffffff001a7e0 size=160 ---- */

char FUN_fffffffff001a7e0(int param_1,int param_2,int param_3)

{
  undefined1 local_11;
  
  local_11 = '\0';
  FUN_fffffffff0010abc();
  while (local_11 == '\0') {
    local_11 = FUN_fffffffff001a754((long)param_1,(long)param_2,(long)param_3);
    if (local_11 == '\0') {
      FUN_fffffffff00116fc(50000);
    }
  }
  return local_11;
}


/* ---- FUN_fffffffff001a880 @ fffffffff001a880 size=304 ---- */

void FUN_fffffffff001a880(int *param_1)

{
  char cVar1;
  
  FUN_fffffffff0024540
            ((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0xde7),
             (long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0xde0));
  if (*param_1 == 0) {
    FUN_fffffffff001a7e0((long)param_1[3],(long)param_1[1],(long)param_1[2]);
  }
  else if (*param_1 == 1) {
    FUN_fffffffff0024540((long)param_1[3],(long)param_1[1]);
    cVar1 = FUN_fffffffff001a7e0((long)param_1[4],(long)param_1[1],(long)param_1[2]);
    if (cVar1 != '\0') {
      FUN_fffffffff0024540((long)param_1[4],(long)(param_1[1] & param_1[2]));
    }
  }
  return;
}


/* ---- FUN_fffffffff001a9b0 @ fffffffff001a9b0 size=184 ---- */

void FUN_fffffffff001a9b0(long param_1,uint param_2,int param_3)

{
  undefined8 local_28;
  undefined4 local_14;
  
  local_14 = 0;
  local_28 = param_1;
  while( true ) {
    if (param_2 <= local_14) break;
    FUN_fffffffff002482c(0,local_28,(long)param_3);
    local_28 = local_28 + 4;
    local_14 = local_14 + 1;
  }
  FUN_fffffffff002493c();
  return;
}


/* ---- FUN_fffffffff001aa68 @ fffffffff001aa68 size=316 ---- */

undefined1 FUN_fffffffff001aa68(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = DAT_fffffffff0100168 + (ulong)*(uint *)(DAT_fffffffff0100168 + 0x30f4) * 0x100;
  lVar1 = *(long *)(lVar3 + 0x14);
  if (*(long *)(lVar1 + 0x24) != *(long *)(lVar3 + 0xc)) {
    FUN_fffffffff001db90(lVar1);
    uVar2 = *(undefined8 *)(lVar3 + 0xc);
    *(int *)(lVar1 + 0x24) = (int)uVar2;
    *(int *)(lVar1 + 0x28) = (int)((ulong)uVar2 >> 0x20);
  }
  FUN_fffffffff00115a4(*(undefined8 *)(lVar3 + 0x1c),*(undefined8 *)(lVar3 + 0x24),0);
  return 1;
}


/* ---- FUN_fffffffff001aba4 @ fffffffff001aba4 size=328 ---- */

void FUN_fffffffff001aba4(void)

{
  long lVar1;
  undefined4 local_14;
  
  if (*(int *)(DAT_fffffffff0100168 + 0x31bc) != 0) {
    *(uint *)(DAT_fffffffff0100168 + 0x31ac) = *(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0xffffefff
    ;
    for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
      if (*(uint *)(DAT_fffffffff0100168 + (ulong)local_14 * 0x50 + 0x2da4) < 9) {
        lVar1 = DAT_fffffffff0100168 + (ulong)local_14 * 0x50;
        *(uint *)(lVar1 + 0x2db4) = *(uint *)(lVar1 + 0x2db4) & 0xfffffff7;
      }
      else {
        lVar1 = DAT_fffffffff0100168 + (ulong)local_14 * 0x50;
        *(uint *)(lVar1 + 0x2db4) = *(uint *)(lVar1 + 0x2db4) | 8;
        *(uint *)(DAT_fffffffff0100168 + 0x31ac) = *(uint *)(DAT_fffffffff0100168 + 0x31ac) | 0x1000
        ;
      }
    }
  }
  return;
}


/* ---- FUN_fffffffff001acec @ fffffffff001acec size=216 ---- */

void FUN_fffffffff001acec(void)

{
  long lVar1;
  undefined4 local_14;
  
  if ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x1000) != 0) {
    for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
      if ((*(uint *)(DAT_fffffffff0100168 + (ulong)local_14 * 0x50 + 0x2db4) >> 3 & 1) != 0) {
        lVar1 = DAT_fffffffff0100168 + (ulong)local_14 * 0x50;
        *(uint *)(lVar1 + 0x2db4) = *(uint *)(lVar1 + 0x2db4) | 1;
      }
    }
  }
  return;
}


/* ---- FUN_fffffffff001adc4 @ fffffffff001adc4 size=184 ---- */

void FUN_fffffffff001adc4(int param_1)

{
  if (param_1 == 1) {
    FUN_fffffffff0024540((long)(*(int *)(DAT_fffffffff0100168 + 0x3124) + 0x98f),1);
  }
  else {
    FUN_fffffffff0024540((long)(*(int *)(DAT_fffffffff0100168 + 0x3124) + 0x98f),2);
  }
  return;
}


/* ---- FUN_fffffffff001ae7c @ fffffffff001ae7c size=316 ---- */

char FUN_fffffffff001ae7c(void)

{
  long lVar1;
  long local_20;
  char local_11;
  
  local_11 = '\x01';
  lVar1 = DAT_fffffffff0100168 + (ulong)*(uint *)(DAT_fffffffff0100168 + 0x30f4) * 0x100;
  local_20 = *(long *)(DAT_fffffffff0100168 + 0x3184);
  while ((local_20 != 0 && (local_11 = FUN_fffffffff001db90(local_20), local_11 != '\0'))) {
    local_20 = *(long *)(local_20 + 8);
  }
  if (local_11 != '\0') {
    FUN_fffffffff001adc4((long)*(int *)(lVar1 + 0xc));
    FUN_fffffffff00115a4(*(undefined8 *)(lVar1 + 0x14),*(undefined8 *)(lVar1 + 0x1c),0);
  }
  return local_11;
}


/* ---- FUN_fffffffff001afb8 @ fffffffff001afb8 size=164 ---- */

bool FUN_fffffffff001afb8(undefined8 *param_1,long *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    if (*param_2 == 0) {
      *param_2 = (long)param_1;
      *(undefined8 *)(*param_2 + 8) = 0;
      *(undefined8 *)*param_2 = 0;
    }
    else {
      param_1[1] = *param_2;
      *param_1 = 0;
      *(undefined8 **)*param_2 = param_1;
    }
  }
  return param_1 != (undefined8 *)0x0;
}


/* ---- FUN_fffffffff001b05c @ fffffffff001b05c size=336 ---- */

undefined1 FUN_fffffffff001b05c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 local_21;
  undefined8 *local_20;
  undefined8 *local_18;
  
  local_18 = (undefined8 *)*param_2;
  local_20 = (undefined8 *)0x0;
  local_21 = 0;
  if (param_1 != (undefined8 *)0x0) {
    for (; local_18 != (undefined8 *)0x0; local_18 = (undefined8 *)local_18[1]) {
      if (param_1 == local_18) {
        if (local_20 == (undefined8 *)0x0) {
          if (local_18[1] == 0) {
            *param_2 = 0;
            local_18[1] = 0;
            *local_18 = 0;
            local_21 = 1;
          }
          else {
            *param_2 = local_18[1];
            *(undefined8 *)*param_2 = 0;
            local_18[1] = 0;
            *local_18 = 0;
            local_21 = 1;
          }
        }
        else if (local_20 != (undefined8 *)0x0) {
          if (local_18[1] == 0) {
            local_20[1] = 0;
            local_18[1] = 0;
            *local_18 = 0;
            local_21 = 1;
          }
          else {
            local_20[1] = local_18[1];
            *(undefined8 **)local_18[1] = local_20;
            local_18[1] = 0;
            *local_18 = 0;
            local_21 = 1;
          }
        }
      }
      local_20 = local_18;
    }
  }
  return local_21;
}


/* ---- FUN_fffffffff001b1ac @ fffffffff001b1ac size=92 ---- */

long FUN_fffffffff001b1ac(long param_1,long param_2)

{
  long local_18;
  
  for (local_18 = param_2; (local_18 != 0 && (local_18 != param_1));
      local_18 = *(long *)(local_18 + 8)) {
  }
  return local_18;
}


/* ---- FUN_fffffffff001b208 @ fffffffff001b208 size=136 ---- */

undefined1 FUN_fffffffff001b208(long param_1,uint param_2,long param_3)

{
  uint local_18;
  
  local_18 = 0;
  while( true ) {
    if (param_2 <= local_18) {
      return 0;
    }
    if (param_3 == *(long *)(param_1 + (ulong)local_18 * 8)) break;
    local_18 = local_18 + 1;
  }
  return 1;
}


/* ---- FUN_fffffffff001b290 @ fffffffff001b290 size=24 ---- */

/* WARNING: Removing unreachable block (ram,0xfffffffff001b290) */
/* WARNING: Removing unreachable block (ram,0xfffffffff001b298) */

void FUN_fffffffff001b290(long param_1)

{
  do {
  } while (param_1 != 0);
  return;
}


/* ---- FUN_fffffffff001b2a8 @ fffffffff001b2a8 size=9224 ---- */

void FUN_fffffffff001b2a8(long param_1,uint param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  uint *puVar3;
  int local_3a8;
  int local_3a4;
  int local_3a0;
  int local_39c;
  int local_398;
  int local_394;
  undefined4 local_390;
  int local_38c;
  int local_388;
  int local_384;
  int local_380;
  int local_37c;
  int local_378;
  int local_374;
  int local_370;
  int local_36c;
  int local_368;
  int local_364;
  int local_360;
  int local_35c;
  int local_358;
  int local_354;
  int local_350;
  int local_34c;
  int local_348;
  int local_344;
  int local_340;
  int local_33c;
  int local_338;
  int local_334;
  int local_330;
  int local_32c;
  int local_328;
  int local_324;
  int local_320;
  int local_31c;
  int local_318;
  int local_314;
  int local_310;
  int local_30c;
  int local_308;
  int local_304;
  int local_300;
  int local_2fc;
  int local_2f8;
  int local_2f4;
  int local_2f0;
  int local_2ec;
  int local_2e8;
  int local_2e4;
  int local_2e0;
  int local_2dc;
  int local_2d8;
  int local_2d4;
  int local_2d0;
  int local_2cc;
  int local_2c8;
  int local_2c4;
  int local_2c0;
  int local_2bc;
  int local_2b8;
  int local_2b4;
  int local_2b0;
  int local_2ac;
  int local_2a8;
  int local_2a4;
  int local_2a0;
  int local_29c;
  int local_298;
  int local_294;
  int local_290;
  int local_28c;
  int local_288;
  int local_284;
  int local_280;
  int local_27c;
  int local_278;
  int local_274;
  int local_270;
  int local_26c;
  int local_268;
  int local_264;
  int local_260;
  int local_25c;
  int local_258;
  int local_254;
  int local_250;
  int local_24c;
  int local_248;
  int local_244;
  int local_240;
  int local_23c;
  int local_238;
  int local_234;
  int local_230;
  int local_22c;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  int local_210;
  int iStack_20c;
  int local_208;
  int iStack_204;
  long local_200;
  int local_1f8;
  int iStack_1f4;
  int local_1f0;
  int iStack_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  uint local_24;
  
  DAT_fffffffff0100188 = param_1;
  *(undefined4 *)(param_1 + 0xcc) = param_3;
  *(undefined4 *)(DAT_fffffffff0100188 + 0xd0) = 0;
  local_28 = 1;
  for (local_24 = 0; lVar1 = DAT_fffffffff0100188, local_24 < 0x10; local_24 = local_24 + 1) {
    if ((param_2 & 1 << ((long)(int)local_24 & 0x1fU)) != 0) {
      puVar3 = (uint *)(DAT_fffffffff0100188 + (ulong)local_24 * 0xc);
      *puVar3 = *puVar3 | 1;
      puVar3 = (uint *)(DAT_fffffffff0100188 + (ulong)local_24 * 0xc);
      *puVar3 = *puVar3 & 0xfffffffd;
      puVar3 = (uint *)(DAT_fffffffff0100188 + (ulong)local_24 * 0xc);
      *puVar3 = *puVar3 & 0xfffffffb;
      *(int *)(DAT_fffffffff0100188 + 0xc0) = *(int *)(DAT_fffffffff0100188 + 0xc0) + 1;
    }
  }
  uVar2 = FUN_fffffffff0010a08(5000);
  *(int *)(lVar1 + 0xc4) = (int)uVar2;
  *(int *)(lVar1 + 200) = (int)((ulong)uVar2 >> 0x20);
  local_1e8 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1688;
  local_1e4 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x16f3;
  local_1e0 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x16f4;
  local_1dc = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1713;
  local_1d8 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1714;
  local_1d4 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1733;
  local_1d0 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1734;
  local_1cc = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1689;
  local_1c8 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x16f5;
  local_1c4 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x16f6;
  local_1c0 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1715;
  local_1bc = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1716;
  local_1b8 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1735;
  local_1b4 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1736;
  local_1b0 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x168a;
  local_1ac = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x16f7;
  local_1a8 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x16f8;
  local_1a4 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1717;
  local_1a0 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1718;
  local_19c = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1737;
  local_198 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1738;
  local_194 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x168b;
  local_190 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x16f9;
  local_18c = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x16fa;
  local_188 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1719;
  local_184 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x171a;
  local_180 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1739;
  local_17c = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x173a;
  local_178 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x168c;
  local_174 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x16fb;
  local_170 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x16fc;
  local_16c = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x171b;
  local_168 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x171c;
  local_164 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x173b;
  local_160 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x173c;
  local_15c = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x168d;
  local_158 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x16fd;
  local_154 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x16fe;
  local_150 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x171d;
  local_14c = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x171e;
  local_148 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x173d;
  local_144 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x173e;
  local_140 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x168e;
  local_13c = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x16ff;
  local_138 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1700;
  local_134 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x171f;
  local_130 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1720;
  local_12c = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x173f;
  local_128 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1740;
  local_124 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x168f;
  local_120 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1701;
  local_11c = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1702;
  local_118 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1721;
  local_114 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1722;
  local_110 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1741;
  local_10c = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1742;
  local_108 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1690;
  local_104 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1703;
  local_100 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1704;
  local_fc = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1723;
  local_f8 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1724;
  local_f4 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1743;
  local_f0 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1744;
  local_ec = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1691;
  local_e8 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1705;
  local_e4 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1706;
  local_e0 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1725;
  local_dc = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1726;
  local_d8 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1745;
  local_d4 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1746;
  local_d0 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1692;
  local_cc = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1707;
  local_c8 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1708;
  local_c4 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1727;
  local_c0 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1728;
  local_bc = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1747;
  local_b8 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1748;
  local_b4 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1693;
  local_b0 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1709;
  local_ac = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x170a;
  local_a8 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1729;
  local_a4 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x172a;
  local_a0 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1749;
  local_9c = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x174a;
  local_98 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1694;
  local_94 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x170b;
  local_90 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x170c;
  local_8c = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x172b;
  local_88 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x172c;
  local_84 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x174b;
  local_80 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x174c;
  local_7c = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1695;
  local_78 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x170d;
  local_74 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x170e;
  local_70 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x172d;
  local_6c = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x172e;
  local_68 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x174d;
  local_64 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x174e;
  local_60 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1696;
  local_5c = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x170f;
  local_58 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1710;
  local_54 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x172f;
  local_50 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1730;
  local_4c = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x174f;
  local_48 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1750;
  local_44 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1697;
  local_40 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1711;
  local_3c = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1712;
  local_38 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1731;
  local_34 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1732;
  local_30 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1751;
  local_2c = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1752;
  FUN_fffffffff0025858(&DAT_fffffffff01033b8,&local_1e8,0x1c0);
  _local_210 = CONCAT44(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x16c2,
                        *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x16b0);
  _local_208 = CONCAT44(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x16da,
                        *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x16d9);
  local_200 = (ulong)(*(int *)(DAT_fffffffff0100168 + 0x3140) + 0x768) << 0x20;
  _local_1f8 = CONCAT44(*(int *)(DAT_fffffffff0100168 + 0x3140) + 0x791,
                        *(int *)(DAT_fffffffff0100168 + 0x3140) + 0x77a);
  _local_1f0 = CONCAT44(*(int *)(DAT_fffffffff0100168 + 0x3140) + 0x756,
                        *(int *)(DAT_fffffffff0100168 + 0x3140) + 0x792);
  FUN_fffffffff0025858(&DAT_fffffffff0103578,&local_210,0x28);
  local_310 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20a0;
  local_30c = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20a1;
  local_308 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20c0;
  local_304 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20d0;
  local_300 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20a2;
  local_2fc = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20a3;
  local_2f8 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20c1;
  local_2f4 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20d1;
  local_2f0 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20a4;
  local_2ec = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20a5;
  local_2e8 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20c2;
  local_2e4 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20d2;
  local_2e0 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20a6;
  local_2dc = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20a7;
  local_2d8 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20c3;
  local_2d4 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20d3;
  local_2d0 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20a8;
  local_2cc = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20a9;
  local_2c8 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20c4;
  local_2c4 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20d4;
  local_2c0 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20aa;
  local_2bc = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20ab;
  local_2b8 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20c5;
  local_2b4 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20d5;
  local_2b0 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20ac;
  local_2ac = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20ad;
  local_2a8 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20c6;
  local_2a4 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20d6;
  local_2a0 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20ae;
  local_29c = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20af;
  local_298 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20c7;
  local_294 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20d7;
  local_290 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20b0;
  local_28c = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20b1;
  local_288 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20c8;
  local_284 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20d8;
  local_280 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20b2;
  local_27c = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20b3;
  local_278 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20c9;
  local_274 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20d9;
  local_270 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20b4;
  local_26c = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20b5;
  local_268 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20ca;
  local_264 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20da;
  local_260 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20b6;
  local_25c = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20b7;
  local_258 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20cb;
  local_254 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20db;
  local_250 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20b8;
  local_24c = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20b9;
  local_248 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20cc;
  local_244 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20dc;
  local_240 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20ba;
  local_23c = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20bb;
  local_238 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20cd;
  local_234 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20dd;
  local_230 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20bc;
  local_22c = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20bd;
  local_228 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20ce;
  local_224 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20de;
  local_220 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20be;
  local_21c = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20bf;
  local_218 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20cf;
  local_214 = *(int *)(DAT_fffffffff0100168 + 0x3120) + 0x20df;
  FUN_fffffffff0025858(&DAT_fffffffff01035a0,&local_310,0x100);
  local_390 = *(undefined4 *)(DAT_fffffffff0100168 + 0x3160);
  local_38c = *(int *)(DAT_fffffffff0100168 + 0x3160) + 1;
  local_388 = *(int *)(DAT_fffffffff0100168 + 0x3160) + 2;
  local_384 = *(int *)(DAT_fffffffff0100168 + 0x3160) + 3;
  local_380 = *(int *)(DAT_fffffffff0100168 + 0x3160) + 4;
  local_37c = *(int *)(DAT_fffffffff0100168 + 0x3160) + 5;
  local_378 = *(int *)(DAT_fffffffff0100168 + 0x3160) + 6;
  local_374 = *(int *)(DAT_fffffffff0100168 + 0x3160) + 7;
  local_370 = *(int *)(DAT_fffffffff0100168 + 0x3160) + 8;
  local_36c = *(int *)(DAT_fffffffff0100168 + 0x3160) + 9;
  local_368 = *(int *)(DAT_fffffffff0100168 + 0x3160) + 10;
  local_364 = *(int *)(DAT_fffffffff0100168 + 0x3160) + 0xb;
  local_360 = *(int *)(DAT_fffffffff0100168 + 0x3160) + 0xc;
  local_35c = *(int *)(DAT_fffffffff0100168 + 0x3160) + 0xd;
  local_358 = *(int *)(DAT_fffffffff0100168 + 0x3160) + 0xe;
  local_354 = *(int *)(DAT_fffffffff0100168 + 0x3160) + 0xf;
  local_350 = *(int *)(DAT_fffffffff0100168 + 0x3160) + 0x10;
  local_34c = *(int *)(DAT_fffffffff0100168 + 0x3160) + 0x11;
  local_348 = *(int *)(DAT_fffffffff0100168 + 0x3160) + 0x12;
  local_344 = *(int *)(DAT_fffffffff0100168 + 0x3160) + 0x13;
  local_340 = *(int *)(DAT_fffffffff0100168 + 0x3160) + 0x14;
  local_33c = *(int *)(DAT_fffffffff0100168 + 0x3160) + 0x15;
  local_338 = *(int *)(DAT_fffffffff0100168 + 0x3160) + 0x16;
  local_334 = *(int *)(DAT_fffffffff0100168 + 0x3160) + 0x17;
  local_330 = *(int *)(DAT_fffffffff0100168 + 0x3160) + 0x18;
  local_32c = *(int *)(DAT_fffffffff0100168 + 0x3160) + 0x19;
  local_328 = *(int *)(DAT_fffffffff0100168 + 0x3160) + 0x1a;
  local_324 = *(int *)(DAT_fffffffff0100168 + 0x3160) + 0x1b;
  local_320 = *(int *)(DAT_fffffffff0100168 + 0x3160) + 0x1c;
  local_31c = *(int *)(DAT_fffffffff0100168 + 0x3160) + 0x1d;
  local_318 = *(int *)(DAT_fffffffff0100168 + 0x3160) + 0x1e;
  local_314 = *(int *)(DAT_fffffffff0100168 + 0x3160) + 0x1f;
  FUN_fffffffff0025858(&DAT_fffffffff01036a0,&local_390,0x80);
  local_398 = *(int *)(DAT_fffffffff0100168 + 0x3124) + 0x9e4;
  local_394 = *(int *)(DAT_fffffffff0100168 + 0x3124) + 0x9e3;
  FUN_fffffffff0025858(&DAT_fffffffff0100190,&local_398,8);
  local_3a0 = *(int *)(DAT_fffffffff0100168 + 0x3124) + 0x9e6;
  local_39c = *(int *)(DAT_fffffffff0100168 + 0x3124) + 0x9e7;
  FUN_fffffffff0025858(&DAT_fffffffff0100198,&local_3a0,8);
  local_3a8 = *(int *)(DAT_fffffffff0100168 + 0x3124) + 0x9e8;
  local_3a4 = *(int *)(DAT_fffffffff0100168 + 0x3124) + 0x9e9;
  FUN_fffffffff0025858(&DAT_fffffffff01001a0,&local_3a8,8);
  return;
}


/* ---- sub_1d6b0 @ fffffffff001d6b0 size=72 ---- */

long sub_1d6b0(int param_1)

{
  undefined4 local_14;
  
  local_14 = 0;
  if (param_1 == 0) {
    local_14 = *(int *)(DAT_fffffffff0100188 + 0xc0);
  }
  return (long)local_14;
}


/* ---- FUN_fffffffff001d6f8 @ fffffffff001d6f8 size=256 ---- */

long FUN_fffffffff001d6f8(int param_1)

{
  bool bVar1;
  long lVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0xffff;
  if (param_1 == 0) {
    for (local_18 = 0; local_18 < 0x10; local_18 = local_18 + 1) {
      if ((*(uint *)(DAT_fffffffff0100188 + (ulong)local_18 * 0xc) & 1) == 0) {
LAB_fffffffff001d7b0:
        bVar1 = false;
      }
      else {
        if (((*(uint *)(DAT_fffffffff0100188 + (ulong)local_18 * 0xc) >> 1 & 1) != 0) ||
           (lVar2 = FUN_fffffffff001da8c((long)(int)local_18), lVar2 != 0))
        goto LAB_fffffffff001d7b0;
        bVar1 = true;
      }
      if (bVar1) {
        local_14 = local_18;
        break;
      }
    }
  }
  return (long)(int)local_14;
}


/* ---- FUN_fffffffff001d7f8 @ fffffffff001d7f8 size=240 ---- */

char FUN_fffffffff001d7f8(int param_1,int *param_2,undefined8 *param_3)

{
  undefined8 local_20;
  int local_18;
  char local_11;
  
  local_11 = 0;
  local_18 = 0xffff;
  local_20 = 0;
  local_18 = FUN_fffffffff001d6f8((long)param_1);
  if (local_18 == 0xffff) {
    local_11 = FUN_fffffffff001dcd4((long)param_1,&local_18,&local_20);
    if (local_11 != '\0') {
      if (local_18 == 0xffff) {
        *param_3 = local_20;
      }
      else {
        *param_2 = local_18;
      }
    }
  }
  else {
    *param_2 = local_18;
    local_11 = '\x01';
  }
  return local_11;
}


/* ---- FUN_fffffffff001d8e8 @ fffffffff001d8e8 size=300 ---- */

char FUN_fffffffff001d8e8(uint *param_1,undefined8 param_2)

{
  uint *puVar1;
  long lVar2;
  undefined8 local_20;
  char local_11;
  
  local_11 = '\0';
  local_20 = 0;
  if (*(uint *)(DAT_fffffffff0100188 + 0xd0) < 4) {
    local_11 = FUN_fffffffff001d7f8(0,param_1,&local_20);
  }
  if (local_11 != '\0') {
    *(int *)(DAT_fffffffff0100188 + 0xd0) = *(int *)(DAT_fffffffff0100188 + 0xd0) + 1;
    puVar1 = (uint *)(DAT_fffffffff0100188 + (ulong)*param_1 * 0xc);
    *puVar1 = *puVar1 | 4;
    lVar2 = DAT_fffffffff0100188 + (ulong)*param_1 * 0xc;
    *(int *)(lVar2 + 4) = (int)param_2;
    *(int *)(lVar2 + 8) = (int)((ulong)param_2 >> 0x20);
  }
  return local_11;
}


/* ---- FUN_fffffffff001da14 @ fffffffff001da14 size=120 ---- */

void FUN_fffffffff001da14(uint param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(DAT_fffffffff0100188 + (ulong)param_1 * 0xc);
  *puVar1 = *puVar1 & 0xfffffffb;
  if (*(int *)(DAT_fffffffff0100188 + 0xd0) != 0) {
    *(int *)(DAT_fffffffff0100188 + 0xd0) = *(int *)(DAT_fffffffff0100188 + 0xd0) + -1;
  }
  return;
}


/* ---- FUN_fffffffff001da8c @ fffffffff001da8c size=124 ---- */

uint FUN_fffffffff001da8c(uint param_1)

{
  uint uVar1;
  
  if ((param_1 == 0) || (param_1 == 0xffff)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(DAT_fffffffff0100188 + (ulong)param_1 * 0xc) >> 2 & 1;
  }
  return uVar1;
}


/* ---- FUN_fffffffff001db08 @ fffffffff001db08 size=136 ---- */

undefined1 FUN_fffffffff001db08(long param_1)

{
  int iVar1;
  long local_28;
  undefined4 local_18;
  undefined1 local_11;
  
  local_11 = 1;
  local_18 = 0;
  local_28 = param_1;
  while( true ) {
    if (local_28 == 0) {
      return local_11;
    }
    iVar1 = FUN_fffffffff000ac4c(local_28,&local_18);
    if (iVar1 == 0) break;
    local_28 = *(long *)(local_28 + 8);
  }
  return 0;
}


/* ---- FUN_fffffffff001db90 @ fffffffff001db90 size=324 ---- */

undefined1 FUN_fffffffff001db90(long param_1)

{
  int iVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_11;
  
  local_11 = 1;
  local_18 = 0;
  do {
    if (2 < local_18) {
      return local_11;
    }
    for (local_1c = 0; local_1c < 5; local_1c = local_1c + 1) {
      if ((*(long *)(param_1 + (ulong)local_1c * 0x44 + (ulong)local_18 * 0x154 + 0xb8) != 0) &&
         (iVar1 = FUN_fffffffff001db08
                            (*(undefined8 *)
                              (param_1 + (ulong)local_1c * 0x44 + (ulong)local_18 * 0x154 + 0xb8)),
         iVar1 == 0)) {
        local_11 = 0;
        break;
      }
    }
    local_18 = local_18 + 1;
  } while( true );
}


/* ---- FUN_fffffffff001dcd4 @ fffffffff001dcd4 size=472 ---- */

char FUN_fffffffff001dcd4(int param_1,uint *param_2,ulong *param_3)

{
  bool bVar1;
  long lVar2;
  ulong local_30;
  char local_25;
  uint local_24;
  ulong local_20;
  uint local_18;
  char local_11;
  
  local_11 = '\x01';
  local_18 = 0xffff;
  local_30 = 0;
  local_20 = 0;
  if (param_1 == 0) {
    for (local_24 = 0; local_24 < 0x10; local_24 = local_24 + 1) {
      if (((*(uint *)(DAT_fffffffff0100188 + (ulong)local_24 * 0xc) & 1) == 0) ||
         (lVar2 = FUN_fffffffff001da8c((long)(int)local_24), lVar2 != 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        local_25 = FUN_fffffffff001df5c
                             (*(undefined8 *)(DAT_fffffffff0100188 + (ulong)local_24 * 0xc + 4),
                              &local_30);
        if ((local_25 != '\0') || (local_30 == 0)) {
          local_11 = FUN_fffffffff001db90
                               (*(undefined8 *)(DAT_fffffffff0100188 + (ulong)local_24 * 0xc + 4));
          if (local_11 != '\0') {
            local_18 = local_24;
          }
          break;
        }
        local_25 = 0;
        if (local_20 == 0) {
          local_20 = local_30;
        }
        else if (local_30 < local_20) {
          local_20 = local_30;
        }
      }
    }
  }
  *param_2 = local_18;
  *param_3 = local_20;
  return local_11;
}


/* ---- FUN_fffffffff001deac @ fffffffff001deac size=176 ---- */

undefined1 FUN_fffffffff001deac(long param_1,ulong *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 local_38;
  undefined8 local_20;
  undefined1 local_11;
  
  local_11 = 1;
  local_20 = 0;
  for (local_38 = param_1; local_38 != 0; local_38 = *(long *)(local_38 + 8)) {
    iVar1 = FUN_fffffffff000afa0(local_38);
    if (iVar1 == 0) {
      local_11 = 0;
      uVar2 = FUN_fffffffff000b660(local_38);
      if (local_20 < uVar2) {
        local_20 = uVar2;
      }
    }
  }
  *param_2 = local_20;
  return local_11;
}


/* ---- FUN_fffffffff001df5c @ fffffffff001df5c size=388 ---- */

char FUN_fffffffff001df5c(long param_1,ulong *param_2)

{
  int iVar1;
  ulong local_30;
  uint local_28;
  uint local_24;
  ulong local_20;
  char local_11;
  
  local_11 = '\x01';
  local_30 = 0;
  local_20 = 0;
  local_24 = 0;
  while ((local_24 < 3 && (local_11 != '\0'))) {
    for (local_28 = 0; local_28 < 5; local_28 = local_28 + 1) {
      if (((*(long *)(param_1 + (ulong)local_28 * 0x44 + (ulong)local_24 * 0x154 + 0xb8) != 0) &&
          (iVar1 = FUN_fffffffff001deac
                             (*(undefined8 *)
                               (param_1 + (ulong)local_28 * 0x44 + (ulong)local_24 * 0x154 + 0xb8),
                              &local_30), iVar1 == 0)) && (local_11 = '\0', local_20 < local_30)) {
        local_20 = local_30;
      }
    }
    local_24 = local_24 + 1;
  }
  *param_2 = local_20;
  return local_11;
}


/* ---- FUN_fffffffff001e0e0 @ fffffffff001e0e0 size=1244 ---- */

char FUN_fffffffff001e0e0(long param_1,int param_2,undefined8 *param_3,int param_4)

{
  undefined1 auStack_38 [24];
  undefined8 local_20;
  int local_18;
  char local_12;
  char local_11;
  
  local_11 = '\0';
  local_12 = '\0';
  local_18 = 0xffff;
  local_20 = 0;
  *param_3 = 0;
  if ((param_2 == 1) && ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x10) != 0)) {
    if (*(int *)(*(long *)(param_1 + 0x10) + 0x48) == 0xffff) {
      local_12 = '\x01';
    }
    else {
      local_11 = '\x01';
    }
  }
  else if ((param_2 == 0) &&
          ((param_4 == 3 && ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x100) != 0)))) {
    if (*(int *)(*(long *)(param_1 + 0x10) + 0x44) == 0xffff) {
      local_12 = '\x01';
    }
    else {
      local_11 = '\x01';
    }
  }
  else if (*(int *)(*(long *)(param_1 + 0x10) + 0x40) == 0xffff) {
    local_12 = '\x01';
  }
  else {
    local_11 = '\x01';
  }
  if (local_12 != '\0') {
    if ((*(uint *)(*(long *)(param_1 + 0x10) + 0x84) & 8) == 0) {
      if ((*(uint *)(*(long *)(param_1 + 0x10) + 0x84) & 4) == 0) {
        local_11 = FUN_fffffffff001d7f8(0,&local_18,&local_20);
      }
      else {
        local_18 = *(int *)(DAT_fffffffff0100188 + 0xcc);
        local_11 = '\x01';
      }
    }
    else {
      local_18 = *(int *)(*(long *)(param_1 + 0x10) + 0x40);
      local_11 = '\x01';
    }
    if (local_11 != '\0') {
      if (local_18 == 0xffff) {
        *param_3 = local_20;
      }
      else {
        FUN_fffffffff001f11c
                  (*(undefined8 *)(param_1 + 0x10),(long)param_2,(long)local_18,(long)param_4);
        FUN_fffffffff001e84c((long)local_18,*(undefined8 *)(param_1 + 0x10));
        FUN_fffffffff001eb00((long)local_18,(long)*(int *)(*(long *)(param_1 + 0x10) + 0x20),0);
        if (((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x10) != 0) ||
           ((*(uint *)(*(long *)(param_1 + 0x10) + 0x84) & 8) != 0)) {
          FUN_fffffffff001e5bc
                    ((long)local_18,(long)param_2,
                     *(uint *)(*(long *)(param_1 + 0x10) + 0x84) >> 3 & 1);
        }
        FUN_fffffffff001eba0((long)local_18,0,0,0);
        FUN_fffffffff001e6a0((long)local_18,0,0);
        FUN_fffffffff001e798((long)local_18,0);
        if ((param_2 == 1) && (*(long *)(*(long *)(param_1 + 0x10) + 0x70) != 0)) {
          FUN_fffffffff001e6a0
                    ((long)local_18,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x70),
                     *(uint *)(*(long *)(param_1 + 0x10) + 0x84) >> 4 & 1);
          FUN_fffffffff001e798((long)local_18,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x78));
        }
        if ((*(uint *)(*(long *)(param_1 + 0x10) + 0x84) & 2) != 0) {
          FUN_fffffffff001f2c8(auStack_38,*(undefined8 *)(param_1 + 0x10),(long)param_4);
          FUN_fffffffff001f48c(auStack_38);
        }
      }
    }
  }
  return local_11;
}


/* ---- FUN_fffffffff001e5bc @ fffffffff001e5bc size=228 ---- */

void FUN_fffffffff001e5bc(int param_1,int param_2,char param_3)

{
  int iVar1;
  uint local_20;
  uint local_18;
  undefined4 local_14;
  
  local_14 = DAT_fffffffff0100190;
  local_18 = 0;
  FUN_fffffffff002479c(DAT_fffffffff0100190,&local_18,(long)param_1);
  if (param_3 == '\0') {
    if (param_2 == 1) {
      iVar1 = 3;
    }
    else {
      iVar1 = 0;
    }
    local_20 = local_18 & 0xfffffff3 | iVar1 << 2;
  }
  else {
    local_20 = local_18 & 0xfffffff3;
  }
  FUN_fffffffff002463c(local_14,(long)(int)local_20,(long)param_1);
  return;
}


/* ---- FUN_fffffffff001e6a0 @ fffffffff001e6a0 size=248 ---- */

void FUN_fffffffff001e6a0(int param_1,undefined8 param_2,char param_3)

{
  undefined4 uVar1;
  
  uVar1 = DAT_fffffffff010019c;
  FUN_fffffffff002463c(DAT_fffffffff0100198,(long)(int)((ulong)param_2 >> 8),(long)param_1);
  FUN_fffffffff002463c
            (uVar1,(long)(int)((uint)((ulong)param_2 >> 0x28) & 0xff |
                              (uint)(param_3 != '\0') << 0x1f),(long)param_1);
  return;
}


/* ---- FUN_fffffffff001e798 @ fffffffff001e798 size=180 ---- */

void FUN_fffffffff001e798(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_fffffffff01001a4;
  FUN_fffffffff002463c(DAT_fffffffff01001a0,(long)(int)((ulong)param_2 >> 8),(long)param_1);
  FUN_fffffffff002463c(uVar1,(uint)((ulong)param_2 >> 0x28) & 0xff,(long)param_1);
  return;
}


/* ---- FUN_fffffffff001e84c @ fffffffff001e84c size=692 ---- */

void FUN_fffffffff001e84c(uint param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  int local_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  uint local_40;
  undefined4 uStack_3c;
  
  iVar1 = *(int *)(&DAT_fffffffff01033bc + (ulong)param_1 * 0x1c);
  iVar2 = *(int *)(&DAT_fffffffff01033c0 + (ulong)param_1 * 0x1c);
  iVar3 = *(int *)(&DAT_fffffffff01033c4 + (ulong)param_1 * 0x1c);
  iVar4 = *(int *)(&DAT_fffffffff01033c8 + (ulong)param_1 * 0x1c);
  iVar5 = *(int *)(&DAT_fffffffff01033cc + (ulong)param_1 * 0x1c);
  iVar6 = *(int *)(&DAT_fffffffff01033d0 + (ulong)param_1 * 0x1c);
  FUN_fffffffff0024540
            ((long)*(int *)(&DAT_fffffffff01033b8 + (ulong)param_1 * 0x1c),
             (long)*(int *)(param_2 + 0x80));
  lVar8 = (*(ulong *)(param_2 + 0x24) >> 6 & 0x3ffffffffff) << 6;
  local_40 = (uint)((*(ulong *)(param_2 + 0x24) >> 1 & 1) << 1) | 1 | (uint)lVar8;
  FUN_fffffffff0024540((long)iVar1,(long)(int)local_40);
  uStack_3c = (undefined4)((ulong)lVar8 >> 0x20);
  FUN_fffffffff0024540((long)iVar2,uStack_3c);
  uVar7 = *(undefined8 *)(param_2 + 0x2c);
  local_48 = (int)uVar7;
  FUN_fffffffff0024540((long)iVar3,(long)local_48);
  iStack_44 = (int)((ulong)uVar7 >> 0x20);
  FUN_fffffffff0024540((long)iVar4,(long)iStack_44);
  uVar7 = *(undefined8 *)(param_2 + 0x34);
  local_50 = (int)uVar7;
  FUN_fffffffff0024540((long)iVar5,(long)local_50);
  iStack_4c = (int)((ulong)uVar7 >> 0x20);
  FUN_fffffffff0024540((long)iVar6,(long)iStack_4c);
  return;
}


/* ---- FUN_fffffffff001eb00 @ fffffffff001eb00 size=160 ---- */

void FUN_fffffffff001eb00(uint param_1,int param_2,int param_3)

{
  if ((param_1 != 0xffff) && (param_2 != 0)) {
    FUN_fffffffff0024540
              ((long)*(int *)(&DAT_fffffffff01036a0 + ((long)param_3 * 0x10 + (ulong)param_1) * 4),
               (long)param_2);
  }
  return;
}


/* ---- FUN_fffffffff001eba0 @ fffffffff001eba0 size=900 ---- */

void FUN_fffffffff001eba0(int param_1,int param_2,long param_3,long param_4)

{
  uint local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  undefined8 local_30;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_14 = *(int *)(&DAT_fffffffff0103580 + (long)param_2 * 0x14);
  local_18 = *(int *)(&DAT_fffffffff0103584 + (long)param_2 * 0x14);
  local_1c = *(int *)(&DAT_fffffffff0103578 + (long)param_2 * 0x14);
  local_20 = *(int *)(&DAT_fffffffff010357c + (long)param_2 * 0x14);
  local_24 = *(int *)(&DAT_fffffffff0103588 + (long)param_2 * 0x14);
  if ((param_3 == 0) || (param_4 == 0)) {
    local_30 = 0x1fffffffff;
  }
  else {
    local_30 = FUN_fffffffff001f65c(param_3,param_4);
  }
  if (((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x40) != 0) && (local_24 != 0)) {
    local_40 = 0;
    do {
      FUN_fffffffff002465c((long)local_24,&local_40);
    } while (local_40 == 0);
  }
  FUN_fffffffff0024540((long)local_14,(long)(int)local_30);
  FUN_fffffffff0024540((long)local_18,(long)local_30._4_4_);
  local_38 = 1 << ((long)param_1 & 0x1fU) & 0xffff;
  if (param_2 == 1) {
    local_38 = local_38 | 0x10000;
  }
  local_38 = local_38 | 0xf80000;
  FUN_fffffffff0024540((long)local_1c,local_38);
  if ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x80) != 0) {
    local_44 = 0;
    do {
      FUN_fffffffff002465c((long)local_1c,&local_44);
    } while (local_38 != local_44);
  }
  local_28 = 1 << ((long)param_1 & 0x1fU);
  local_3c = 0;
  while (FUN_fffffffff002465c((long)local_20,&local_3c), (local_28 & local_3c) == 0) {
    FUN_fffffffff001b290(0x32);
  }
  if (((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x40) != 0) && (local_24 != 0)) {
    FUN_fffffffff0024540((long)local_24,0);
  }
  return;
}


/* ---- FUN_fffffffff001ef24 @ fffffffff001ef24 size=504 ---- */

void FUN_fffffffff001ef24(long param_1,int param_2,int param_3)

{
  uint *puVar1;
  long lVar2;
  undefined4 local_14;
  
  if ((param_2 == 1) && ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x10) != 0)) {
    local_14 = *(uint *)(param_1 + 0x48);
  }
  else if ((param_2 == 0) &&
          ((param_3 == 3 && ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x100) != 0)))) {
    local_14 = *(uint *)(param_1 + 0x44);
  }
  else {
    local_14 = *(uint *)(param_1 + 0x40);
  }
  if (local_14 != 0xffff) {
    puVar1 = (uint *)(DAT_fffffffff0100188 + (ulong)local_14 * 0xc);
    *puVar1 = *puVar1 & 0xfffffffd;
    lVar2 = DAT_fffffffff0100188 + (ulong)local_14 * 0xc;
    *(undefined4 *)(lVar2 + 4) = 0;
    *(undefined4 *)(lVar2 + 8) = 0;
    if ((param_2 == 1) && ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x10) != 0)) {
      *(undefined4 *)(param_1 + 0x48) = 0xffff;
    }
    else if ((param_2 == 0) &&
            ((param_3 == 3 && ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x100) != 0)))) {
      *(undefined4 *)(param_1 + 0x44) = 0xffff;
    }
    else {
      *(undefined4 *)(param_1 + 0x40) = 0xffff;
    }
  }
  return;
}


/* ---- FUN_fffffffff001f11c @ fffffffff001f11c size=344 ---- */

void FUN_fffffffff001f11c(long param_1,int param_2,uint param_3,int param_4)

{
  uint *puVar1;
  long lVar2;
  
  if ((param_2 == 1) && ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x10) != 0)) {
    *(uint *)(param_1 + 0x48) = param_3;
  }
  else if ((param_2 == 0) &&
          ((param_4 == 3 && ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x100) != 0)))) {
    *(uint *)(param_1 + 0x44) = param_3;
  }
  else {
    *(uint *)(param_1 + 0x40) = param_3;
  }
  puVar1 = (uint *)(DAT_fffffffff0100188 + (ulong)param_3 * 0xc);
  *puVar1 = *puVar1 | 2;
  lVar2 = DAT_fffffffff0100188 + (ulong)param_3 * 0xc;
  *(int *)(lVar2 + 4) = (int)param_1;
  *(int *)(lVar2 + 8) = (int)((ulong)param_1 >> 0x20);
  return;
}


/* ---- sub_1f274 @ fffffffff001f274 size=84 ---- */

undefined8 sub_1f274(uint param_1)

{
  return *(undefined8 *)(DAT_fffffffff0100188 + (ulong)param_1 * 0xc + 4);
}


/* ---- FUN_fffffffff001f2c8 @ fffffffff001f2c8 size=452 ---- */

void FUN_fffffffff001f2c8(undefined4 *param_1,long param_2,int param_3)

{
  if ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x100) == 0) {
    *param_1 = *(undefined4 *)(param_2 + 0x40);
    param_1[1] = *(undefined4 *)(param_2 + 0x58);
    param_1[2] = *(undefined4 *)(param_2 + 0x5c);
    param_1[3] = *(int *)(param_2 + 0x60) << 0x10 | *(uint *)(param_2 + 100);
    param_1[4] = *(undefined4 *)(param_2 + 0x68);
  }
  else if (param_3 == 3) {
    *param_1 = *(undefined4 *)(param_2 + 0x44);
    param_1[1] = *(int *)(param_2 + 0x58) + (*(uint *)(param_2 + 0x5c) >> 1);
    param_1[2] = *(uint *)(param_2 + 0x5c) >> 1;
    param_1[3] = *(int *)(param_2 + 0x60) << 0x10 | *(uint *)(param_2 + 100);
    param_1[4] = *(undefined4 *)(param_2 + 0x68);
  }
  else {
    *param_1 = *(undefined4 *)(param_2 + 0x40);
    param_1[1] = *(undefined4 *)(param_2 + 0x58);
    param_1[2] = *(uint *)(param_2 + 0x5c) >> 1;
    param_1[3] = *(int *)(param_2 + 0x60) << 0x10 | *(uint *)(param_2 + 100);
    param_1[4] = *(undefined4 *)(param_2 + 0x68);
  }
  return;
}


/* ---- FUN_fffffffff001f48c @ fffffffff001f48c size=312 ---- */

void FUN_fffffffff001f48c(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *param_1;
  if (uVar1 != 0xffff) {
    iVar2 = *(int *)(&DAT_fffffffff01035a4 + (ulong)uVar1 * 0x10);
    iVar3 = *(int *)(&DAT_fffffffff01035a8 + (ulong)uVar1 * 0x10);
    iVar4 = *(int *)(&DAT_fffffffff01035ac + (ulong)uVar1 * 0x10);
    FUN_fffffffff0024540
              ((long)*(int *)(&DAT_fffffffff01035a0 + (ulong)uVar1 * 0x10),(long)(int)param_1[1]);
    FUN_fffffffff0024540((long)iVar2,(long)(int)param_1[2]);
    FUN_fffffffff0024540((long)iVar3,(long)(int)param_1[3]);
    FUN_fffffffff0024540((long)iVar4,(long)(int)param_1[4]);
  }
  return;
}


/* ---- FUN_fffffffff001f5c4 @ fffffffff001f5c4 size=152 ---- */

void FUN_fffffffff001f5c4(long param_1)

{
  undefined1 auStack_40 [24];
  undefined1 auStack_28 [24];
  
  if (*(int *)(param_1 + 0x44) != 0xffff) {
    FUN_fffffffff001f2c8(auStack_28,param_1,3);
    FUN_fffffffff001f48c(auStack_28);
  }
  if (*(int *)(param_1 + 0x40) != 0xffff) {
    FUN_fffffffff001f2c8(auStack_40,param_1,0);
    FUN_fffffffff001f48c(auStack_40);
  }
  return;
}


/* ---- FUN_fffffffff001f65c @ fffffffff001f65c size=232 ---- */

ulong FUN_fffffffff001f65c(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined8 local_28;
  undefined8 local_18;
  
  local_28 = 0x1fffffffff;
  if (param_2 != 0) {
    uVar2 = FUN_fffffffff001f744(param_2,0x1000);
    iVar1 = FUN_fffffffff001f81c(uVar2);
    local_40 = 1L << ((long)iVar1 & 0x3fU);
    local_18 = FUN_fffffffff001f78c(param_1,local_40);
    while (local_18 + local_40 < (ulong)(param_1 + param_2)) {
      local_40 = local_40 << 1;
      local_18 = FUN_fffffffff001f78c(param_1,local_40);
    }
    local_28 = ((local_40 >> 1) + local_18) - 1 >> 0xb;
  }
  return local_28;
}


/* ---- FUN_fffffffff001f744 @ fffffffff001f744 size=72 ---- */

ulong FUN_fffffffff001f744(long param_1,long param_2)

{
  return param_1 + (param_2 - 1U) & ~(param_2 - 1U);
}


/* ---- FUN_fffffffff001f78c @ fffffffff001f78c size=64 ---- */

ulong FUN_fffffffff001f78c(ulong param_1,long param_2)

{
  return ~(param_2 - 1U) & param_1;
}


/* ---- FUN_fffffffff001f7cc @ fffffffff001f7cc size=80 ---- */

long FUN_fffffffff001f7cc(ulong param_1)

{
  undefined8 local_28;
  undefined8 local_18;
  
  local_18 = 0;
  for (local_28 = param_1; 1 < local_28; local_28 = local_28 >> 1) {
    local_18 = local_18 + 1;
  }
  return local_18;
}


/* ---- FUN_fffffffff001f81c @ fffffffff001f81c size=88 ---- */

long FUN_fffffffff001f81c(ulong param_1)

{
  undefined8 local_18;
  
  local_18 = FUN_fffffffff001f7cc(param_1);
  if ((param_1 - 1 & param_1) != 0) {
    local_18 = local_18 + 1;
  }
  return local_18;
}


/* ---- sub_1f874 @ fffffffff001f874 size=24 ---- */

/* WARNING: Removing unreachable block (ram,0xfffffffff001f874) */
/* WARNING: Removing unreachable block (ram,0xfffffffff001f87c) */

void sub_1f874(long param_1)

{
  do {
  } while (param_1 != 0);
  return;
}


/* ---- FUN_fffffffff001f88c @ fffffffff001f88c size=1284 ---- */

void FUN_fffffffff001f88c(int param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined8 local_70;
  undefined4 local_68;
  int local_64;
  uint local_60;
  undefined8 local_58;
  int local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  long local_30;
  uint local_24;
  long local_20;
  int local_14;
  
  if (*(long *)(DAT_fffffffff0100168 + (long)param_4 * 0x1c + 0x30a8) == 0) {
    lVar1 = DAT_fffffffff0100168 + (long)param_4 * 0x1c;
    *(uint *)(lVar1 + 0x30a4) = *(uint *)(lVar1 + 0x30a4) | 4;
  }
  else {
    local_14 = *(int *)(DAT_fffffffff0100168 + 0x2bd0);
    local_20 = *(long *)(DAT_fffffffff0100168 + (long)param_4 * 0x1c + 0x30a8);
    lVar1 = DAT_fffffffff0100168 + (long)param_4 * 0x1c;
    local_50 = *(int *)(lVar1 + 0x3094);
    local_4c = *(uint *)(lVar1 + 0x3098);
    local_48 = *(uint *)(lVar1 + 0x309c);
    local_44 = *(int *)(lVar1 + 0x30a0);
    local_40 = *(uint *)(lVar1 + 0x30a4);
    local_3c = *(undefined4 *)(lVar1 + 0x30a8);
    local_38 = *(undefined4 *)(lVar1 + 0x30ac);
    local_24 = *(uint *)(DAT_fffffffff0100168 + (long)param_4 * 0x1c + 0x309c);
    local_70 = param_3;
    local_68 = param_2;
    local_64 = param_1;
    local_58 = FUN_fffffffff0010abc();
    local_30 = local_20 + ((ulong)local_24 + 1) * 0x20;
    local_60 = local_14 << 0x1c | 8;
    FUN_fffffffff0025154((long)(int)local_60,&local_58,local_30);
    local_60 = local_60 & 0xfc000000 | 4;
    FUN_fffffffff0025154((long)(int)local_60,&local_64,local_30 + 8);
    if (local_64 == 0) {
      local_60 = local_60 & 0xfc000000 | 8;
      FUN_fffffffff0025154((long)(int)local_60,&local_70,local_30 + 0x10);
      local_60 = local_60 & 0xfc000000 | 4;
      FUN_fffffffff0025154((long)(int)local_60,&local_68,local_30 + 0x18);
    }
    else if (local_64 == 1) {
      local_60 = local_60 & 0xfc000000 | 8;
      FUN_fffffffff0025154((long)(int)local_60,&local_70,local_30 + 0x10);
    }
    else if (local_64 == 3) {
      local_60 = local_60 & 0xfc000000 | 8;
      FUN_fffffffff0025154((long)(int)local_60,&local_70,local_30 + 0x10);
    }
    local_48 = local_48 + 1;
    if (local_50 - 1U <= local_48) {
      local_48 = 0;
      local_44 = local_44 + 1;
      local_60 = local_60 & 0xfc000000 | 4;
      FUN_fffffffff0025154((long)(int)local_60,&local_44,local_20 + 4);
      local_40 = local_40 | 1;
    }
    local_60 = local_60 & 0xfc000000 | 4;
    FUN_fffffffff0025154((long)(int)local_60,&local_48,local_20);
    if (local_48 == local_4c) {
      FUN_fffffffff0010af4((long)param_4);
    }
    lVar1 = DAT_fffffffff0100168 + (long)param_4 * 0x1c;
    *(int *)(lVar1 + 0x3094) = local_50;
    *(uint *)(lVar1 + 0x3098) = local_4c;
    *(uint *)(lVar1 + 0x309c) = local_48;
    *(int *)(lVar1 + 0x30a0) = local_44;
    *(uint *)(lVar1 + 0x30a4) = local_40;
    *(undefined4 *)(lVar1 + 0x30a8) = local_3c;
    *(undefined4 *)(lVar1 + 0x30ac) = local_38;
  }
  return;
}


/* ---- FUN_fffffffff001fd90 @ fffffffff001fd90 size=348 ---- */

void FUN_fffffffff001fd90(long param_1,ulong param_2)

{
  long lVar1;
  
  FUN_fffffffff0024af8();
  if ((*(uint *)(param_1 + (param_2 & 0xffffffff) * 100 + 0x54) >> 6 & 7) == 3) {
    FUN_fffffffff001f88c
              (1,0xf,*(undefined8 *)(param_1 + (param_2 & 0xffffffff) * 100 + 0x80),
               (long)*(int *)(param_1 + 0x30));
    lVar1 = param_1 + (param_2 & 0xffffffff) * 100;
    *(uint *)(lVar1 + 0x54) = *(uint *)(lVar1 + 0x54) & 0xfffffe3f | 0x40;
  }
  if ((*(uint *)(param_1 + 0x10) & 0x30) == 0) {
    FUN_fffffffff001f88c(0,2,*(undefined8 *)(param_1 + 0x4c),(long)*(int *)(param_1 + 0x30));
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffffffcf | 0x20;
  }
  FUN_fffffffff0024b1c();
  return;
}


/* ---- FUN_fffffffff001feec @ fffffffff001feec size=292 ---- */

void FUN_fffffffff001feec(long param_1)

{
  long lVar1;
  bool bVar2;
  
  FUN_fffffffff0024af8();
  if ((*(int *)(*(long *)(param_1 + 0x34) + 0x2c) == 1) ||
     ((1 < *(uint *)(*(long *)(param_1 + 0x34) + 0x2c) &&
      (lVar1 = FUN_fffffffff000b0b4(*(undefined8 *)(param_1 + 0x34),0), lVar1 != 0)))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    FUN_fffffffff001f88c
              (0,2,*(undefined8 *)(*(long *)(param_1 + 0x34) + 0x4c),
               (long)*(int *)(*(long *)(param_1 + 0x34) + 0x30));
    *(uint *)(*(long *)(param_1 + 0x34) + 0x10) =
         *(uint *)(*(long *)(param_1 + 0x34) + 0x10) & 0xffffffcf | 0x20;
  }
  FUN_fffffffff0024b1c();
  return;
}


/* ---- FUN_fffffffff0020010 @ fffffffff0020010 size=192 ---- */

void FUN_fffffffff0020010(long param_1,ulong param_2)

{
  long lVar1;
  
  FUN_fffffffff0024af8();
  lVar1 = param_1 + (param_2 & 0xffffffff) * 100;
  *(uint *)(lVar1 + 0x54) = *(uint *)(lVar1 + 0x54) & 0xfffffe3f | 0xc0;
  FUN_fffffffff001f88c
            (3,0xf,*(undefined8 *)(param_1 + (param_2 & 0xffffffff) * 100 + 0x80),
             (long)*(int *)(param_1 + 0x30));
  FUN_fffffffff0024b1c();
  return;
}


/* ---- FUN_fffffffff00200d0 @ fffffffff00200d0 size=116 ---- */

void FUN_fffffffff00200d0(long param_1)

{
  FUN_fffffffff0024af8();
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffffffcf;
  FUN_fffffffff001f88c(0,0,*(undefined8 *)(param_1 + 0x4c),(long)*(int *)(param_1 + 0x30));
  FUN_fffffffff0024b1c();
  return;
}


/* ---- FUN_fffffffff0020144 @ fffffffff0020144 size=600 ---- */

void FUN_fffffffff0020144(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  int local_14;
  
  local_14 = 0;
  if ((*param_1 & 0x1c0) == 0x40) {
    FUN_fffffffff001f88c(3,0xf,*(undefined8 *)(param_1 + 0xb),(long)param_3);
    *param_1 = *param_1 & 0xfffffe3f | 0xc0;
  }
  if ((1 < *(uint *)(*(long *)(param_1 + 0xd) + 0x2c)) &&
     (iVar1 = FUN_fffffffff000b0b4(*(undefined8 *)(param_1 + 0xd),0), iVar1 != 0)) {
    local_14 = 2;
  }
  if ((*(uint *)(*(long *)(param_1 + 0xd) + 0x10) & 0x30) == 0x10) {
    FUN_fffffffff001f88c(0,local_14,*(undefined8 *)(*(long *)(param_1 + 0xd) + 0x4c),(long)param_3);
    *(uint *)(*(long *)(param_1 + 0xd) + 0x10) =
         *(uint *)(*(long *)(param_1 + 0xd) + 0x10) & 0xffffffcf | local_14 << 4;
    plVar2 = (long *)FUN_fffffffff000d1a4((long)param_3,(long)param_2);
    if ((plVar2 != (long *)0x0) && (*(long *)(*(long *)(param_1 + 0xd) + 0x4c) == *plVar2)) {
      *(undefined4 *)plVar2 = 0;
      *(undefined4 *)((long)plVar2 + 4) = 0;
    }
  }
  else {
    lVar3 = DAT_fffffffff0100168 + (long)param_3 * 0x1c;
    *(uint *)(lVar3 + 0x30a4) = *(uint *)(lVar3 + 0x30a4) | 2;
  }
  return;
}


/* ---- FUN_fffffffff002039c @ fffffffff002039c size=848 ---- */

void FUN_fffffffff002039c(uint *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_fffffffff000d1a4((long)param_3,(long)param_2);
  if (plVar2 != (long *)0x0) {
    if (((*(uint *)(plVar2 + 2) & 1) == 0) || (*plVar2 == 0)) {
      if (((*(uint *)(plVar2 + 2) & 1) == 0) &&
         (((*plVar2 != 0 && (*plVar2 != *(long *)(*(long *)(param_1 + 0xd) + 0x4c))) &&
          ((*(uint *)(plVar2[1] + 0x10) & 0x30) != 0x20)))) {
        FUN_fffffffff001f88c(0,2,*plVar2,(long)param_3);
        *(uint *)(plVar2[1] + 0x10) = *(uint *)(plVar2[1] + 0x10) & 0xffffffcf | 0x20;
      }
    }
    else {
      FUN_fffffffff001f88c(0,0,*plVar2,(long)param_3);
    }
    if ((*param_1 & 0x1c0) == 0xc0) {
      FUN_fffffffff001f88c(1,0xf,*(undefined8 *)(param_1 + 0xb),(long)param_3);
      *param_1 = *param_1 & 0xfffffe3f | 0x40;
    }
    if ((*(uint *)(*(long *)(param_1 + 0xd) + 0x10) & 0x30) != 0x10) {
      FUN_fffffffff001f88c(0,1,*(undefined8 *)(*(long *)(param_1 + 0xd) + 0x4c),(long)param_3);
      *(uint *)(*(long *)(param_1 + 0xd) + 0x10) =
           *(uint *)(*(long *)(param_1 + 0xd) + 0x10) & 0xffffffcf | 0x10;
    }
    uVar1 = *(undefined8 *)(param_1 + 0xd);
    *(int *)(plVar2 + 1) = (int)uVar1;
    *(int *)((long)plVar2 + 0xc) = (int)((ulong)uVar1 >> 0x20);
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0xd) + 0x4c);
    *(int *)plVar2 = (int)uVar1;
    *(int *)((long)plVar2 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(uint *)(plVar2 + 2) = *(uint *)(plVar2 + 2) & 0xfffffffe;
  }
  return;
}


/* ---- sub_206ec @ fffffffff00206ec size=24 ---- */

/* WARNING: Removing unreachable block (ram,0xfffffffff00206ec) */
/* WARNING: Removing unreachable block (ram,0xfffffffff00206f4) */

void sub_206ec(long param_1)

{
  do {
  } while (param_1 != 0);
  return;
}


/* ---- FUN_fffffffff0020704 @ fffffffff0020704 size=552 ---- */

ulong FUN_fffffffff0020704(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  char local_39;
  ulong local_38;
  long local_30;
  uint local_24;
  uint *local_20;
  ulong local_18;
  
  local_30 = FUN_fffffffff0010abc();
  lVar1 = DAT_fffffffff0100168;
  local_18 = 0;
  local_38 = local_30 - *(long *)(DAT_fffffffff0100168 + 0x30fc);
  if (local_38 < *(ulong *)(DAT_fffffffff0100168 + 0x3104)) {
    uVar2 = *(long *)(DAT_fffffffff0100168 + 0x3104) - local_38;
  }
  else {
    *(int *)(DAT_fffffffff0100168 + 0x30fc) = (int)local_30;
    *(int *)(lVar1 + 0x3100) = (int)((ulong)local_30 >> 0x20);
    local_20 = (uint *)0x0;
    local_39 = '\x01';
    local_24 = 0;
    while ((local_24 < 3 && (local_20 == (uint *)0x0))) {
      local_20 = (uint *)FUN_fffffffff002092c(&local_39,(long)(int)local_24,0);
      local_24 = local_24 + 1;
    }
    uVar2 = param_1;
    if (local_39 == '\0') {
      if (local_20 == (uint *)0x0) {
        uVar2 = *(ulong *)(DAT_fffffffff0100168 + 0x3104);
      }
      else {
        *local_20 = *local_20 | 0x200;
        FUN_fffffffff0010918((long)(int)local_20[3]);
        local_18 = 0xffffffff;
        *(uint *)(DAT_fffffffff0100168 + 0x31ac) = *(uint *)(DAT_fffffffff0100168 + 0x31ac) | 4;
        uVar2 = local_18;
      }
    }
  }
  local_18 = uVar2;
  if (param_1 < local_18) {
    local_18 = param_1;
  }
  return local_18;
}


/* ---- FUN_fffffffff002092c @ fffffffff002092c size=1624 ---- */

long FUN_fffffffff002092c(undefined8 param_1,int param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  char local_8d;
  int local_8c;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  int local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_8d = param_3;
  local_88 = param_1;
  if (param_2 == 0) {
    local_2c = 0;
    local_8c = 0;
    while ((local_2c < 2 && (local_28 == 0))) {
      local_40 = 0;
      local_3c = FUN_fffffffff0021700((long)local_8c,&local_40,(long)(int)local_2c);
      if (local_3c != 0) {
        local_28 = FUN_fffffffff0021808(local_88,(long)local_40,(long)(int)local_2c,local_8d);
      }
      local_2c = local_2c + 1;
    }
  }
  else if (param_2 == 2) {
    local_30 = 0;
    local_8c = 2;
    while ((local_30 < 2 && (local_28 == 0))) {
      if ((*(uint *)(DAT_fffffffff0100168 + ((ulong)local_30 + 0x46) * 0x20 + 0x201c) & 1) != 0) {
        local_28 = FUN_fffffffff0021b90(local_88,(long)(int)local_30);
      }
      local_30 = local_30 + 1;
    }
  }
  else {
    local_8c = param_2;
    iVar2 = FUN_fffffffff0021694((long)param_2);
    if (iVar2 == 0) {
      local_34 = 0;
      while ((local_34 < 5 && (local_28 == 0))) {
        local_18 = *(long *)(DAT_fffffffff0100168 + (ulong)local_34 * 0x50 + (long)local_8c * 400 +
                            0x2bd8);
        while ((local_18 != 0 && (local_28 == 0))) {
          local_20 = *(long *)(local_18 + 0x18);
          while ((local_20 != 0 && (local_28 == 0))) {
            for (local_38 = 0; local_38 < 8; local_38 = local_38 + 1) {
              if (((((*(uint *)(local_20 + (ulong)local_38 * 100 + 0x54) >> 9 & 1) == 0) &&
                   ((*(uint *)(local_20 + (ulong)local_38 * 100 + 0x54) >> 2 & 1) == 0)) &&
                  ((*(uint *)(local_20 + (ulong)local_38 * 100 + 0x54) & 1) == 1)) &&
                 (((*(uint *)(local_20 + (ulong)local_38 * 100 + 0x54) >> 1 & 1) == 1 &&
                  (lVar3 = FUN_fffffffff000ef3c
                                     (*(undefined8 *)(local_20 + (ulong)local_38 * 100 + 0x58),
                                      *(uint *)(DAT_fffffffff0100168 + 0x31ac) >> 0x10 & 1),
                  lVar3 != 0)))) {
                bVar1 = true;
              }
              else {
                bVar1 = false;
              }
              if (bVar1) {
                *(int *)(DAT_fffffffff0100168 + 0x3114) =
                     *(int *)(DAT_fffffffff0100168 + 0x3114) + 1;
                FUN_fffffffff0010774
                          (*(undefined8 *)(local_20 + (ulong)local_38 * 100 + 0x58),
                           (long)*(int *)(DAT_fffffffff0100168 + 0x3114),0);
                FUN_fffffffff00212f8((long)*(int *)(DAT_fffffffff0100168 + 0x3114));
                local_78 = 0;
                local_70 = 0;
                local_68 = 0;
                local_60 = 0;
                local_58 = 0;
                local_50 = 0;
                local_48 = 0;
                FUN_fffffffff002153c
                          ((long)local_8c,local_20 + (ulong)local_38 * 100 + 0x54,&local_78);
                if (local_8d == '\0') {
                  local_d0 = local_78;
                  local_c8 = local_70;
                  local_c0 = local_68;
                  local_b8 = local_60;
                  local_b0 = local_58;
                  local_a8 = local_50;
                  local_a0 = local_48;
                  iVar2 = FUN_fffffffff002111c
                                    ((long)local_8c,local_20 + (ulong)local_38 * 100 + 0x54,
                                     &local_d0,local_88);
                  if (iVar2 != 0) {
                    local_28 = local_20 + (ulong)local_38 * 100 + 0x54;
                    break;
                  }
                }
                local_d0 = local_78;
                local_c8 = local_70;
                local_c0 = local_68;
                local_b8 = local_60;
                local_b0 = local_58;
                local_a8 = local_50;
                local_a0 = local_48;
                FUN_fffffffff0020f84
                          ((long)local_8c,local_20 + (ulong)local_38 * 100 + 0x54,&local_d0);
              }
            }
            local_20 = *(long *)(local_20 + 8);
          }
          local_18 = *(long *)(local_18 + 8);
        }
        local_34 = local_34 + 1;
      }
    }
  }
  return local_28;
}


/* ---- FUN_fffffffff0020f84 @ fffffffff0020f84 size=408 ---- */

void FUN_fffffffff0020f84(uint param_1,long param_2,int *param_3)

{
  if ((param_1 != 2) && (param_1 < 3)) {
    if (param_1 == 0) {
      if ((*(int *)(param_2 + 0x3c) != param_3[2]) || (*(int *)(param_2 + 0x40) != param_3[3])) {
        *(int *)(param_2 + 0x3c) = param_3[2];
        *(int *)(param_2 + 0x40) = param_3[3];
        *(int *)(param_2 + 0x44) = param_3[8];
        *(int *)(param_2 + 0x4c) = param_3[9];
        *(int *)(param_2 + 0x50) = param_3[10];
        *(int *)(param_2 + 0x48) = param_3[0xb];
        *(int *)(param_2 + 0x54) = *param_3;
        *(int *)(param_2 + 0x58) = param_3[1];
        *(int *)(param_2 + 0x5c) = param_3[0xc];
      }
    }
    else if ((param_1 == 1) &&
            ((*(int *)(param_2 + 0x3c) != *param_3 || (*(int *)(param_2 + 0x40) != param_3[1])))) {
      *(int *)(param_2 + 0x3c) = *param_3;
      *(int *)(param_2 + 0x40) = param_3[1];
      *(int *)(param_2 + 0x44) = param_3[6];
      *(int *)(param_2 + 0x4c) = param_3[7];
      *(int *)(param_2 + 0x50) = param_3[8];
      *(int *)(param_2 + 0x48) = param_3[9];
      *(int *)(param_2 + 0x5c) = param_3[0xc];
    }
  }
  return;
}


/* ---- FUN_fffffffff002111c @ fffffffff002111c size=476 ---- */

undefined1 FUN_fffffffff002111c(uint param_1,long param_2,int *param_3,undefined1 *param_4)

{
  undefined1 local_11;
  
  local_11 = 0;
  if ((param_1 != 2) && (param_1 < 3)) {
    if (param_1 == 0) {
      if ((((*(int *)(param_2 + 0x3c) != param_3[2]) || (*(int *)(param_2 + 0x40) != param_3[3])) &&
          (*(int *)(param_2 + 0x5c) == param_3[0xc])) && (param_3[9] != param_3[10])) {
        if ((((*(int *)(param_2 + 0x44) == param_3[8]) && (*(int *)(param_2 + 0x4c) == param_3[9]))
            && ((*(int *)(param_2 + 0x50) == param_3[10] &&
                ((*(int *)(param_2 + 0x48) == param_3[0xb] && (*(int *)(param_2 + 0x54) == *param_3)
                 ))))) && (*(int *)(param_2 + 0x58) == param_3[1])) {
          local_11 = 1;
        }
        *param_4 = 0;
      }
    }
    else if ((param_1 == 1) &&
            ((((*(int *)(param_2 + 0x3c) != *param_3 || (*(int *)(param_2 + 0x40) != param_3[1])) &&
              (*(int *)(param_2 + 0x5c) == param_3[0xc])) && (param_3[7] != param_3[8])))) {
      if (((*(int *)(param_2 + 0x44) == param_3[6]) && (*(int *)(param_2 + 0x4c) == param_3[7])) &&
         ((*(int *)(param_2 + 0x50) == param_3[8] && (*(int *)(param_2 + 0x48) == param_3[9])))) {
        local_11 = 1;
      }
      *param_4 = 0;
    }
  }
  return local_11;
}


/* ---- FUN_fffffffff00212f8 @ fffffffff00212f8 size=244 ---- */

void FUN_fffffffff00212f8(int param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  int local_38 [2];
  long local_30;
  uint local_24;
  
  local_38[0] = 0;
  local_30 = FUN_fffffffff0010abc();
  do {
    lVar2 = FUN_fffffffff0010abc();
    uVar1 = lVar2 - local_30;
    uVar3 = FUN_fffffffff0010a08(1000000);
    if (uVar3 <= uVar1) {
      return;
    }
    for (local_24 = 0; local_24 < 0x2711; local_24 = local_24 + 1) {
    }
    FUN_fffffffff00213ec(*(undefined8 *)(DAT_fffffffff0100168 + 0x310c),local_38,4);
  } while (param_1 != local_38[0]);
  return;
}


/* ---- FUN_fffffffff00213ec @ fffffffff00213ec size=168 ---- */

void FUN_fffffffff00213ec(undefined8 param_1,undefined8 param_2,uint param_3)

{
  FUN_fffffffff0025074(param_3 & 0x3ffffff | 0xc000000,param_1,param_2);
  return;
}


/* ---- sub_21494 @ fffffffff0021494 size=168 ---- */

void sub_21494(undefined8 param_1,undefined8 param_2,uint param_3)

{
  FUN_fffffffff0025154(param_3 & 0x3ffffff | 0xc000000,param_1,param_2);
  return;
}


/* ---- FUN_fffffffff002153c @ fffffffff002153c size=344 ---- */

void FUN_fffffffff002153c(uint param_1,long param_2,long param_3)

{
  if ((param_1 != 2) && (param_1 < 3)) {
    if (param_1 == 0) {
      FUN_fffffffff00213ec(*(long *)(param_2 + 0x10) + 0x150,param_3,0x30);
      FUN_fffffffff00213ec(*(long *)(param_2 + 0x10) + 0x808,param_3 + 0x30,8);
    }
    else if (param_1 == 1) {
      FUN_fffffffff00213ec(*(long *)(param_2 + 0x10) + 0x158,param_3,0x28);
      FUN_fffffffff00213ec(*(long *)(param_2 + 0x10) + 0x808,param_3 + 0x30,8);
    }
  }
  return;
}


/* ---- FUN_fffffffff0021694 @ fffffffff0021694 size=108 ---- */

undefined1 FUN_fffffffff0021694(void)

{
  return 0;
}


/* ---- FUN_fffffffff0021700 @ fffffffff0021700 size=264 ---- */

uint FUN_fffffffff0021700(int param_1,uint *param_2,uint param_3)

{
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_14 = 0;
  if (param_1 == 0) {
    local_1c = 0;
    if ((*(uint *)(DAT_fffffffff0100168 + ((ulong)param_3 + 0x38) * 0x20 + 0x201c) & 1) != 0) {
      local_18 = param_3 << 6;
      FUN_fffffffff00246d4
                ((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1e72),&local_1c,(long)local_18);
      local_14 = local_1c & 0x1f;
      *param_2 = local_1c >> 5 & 7;
    }
  }
  else {
    local_14 = 0;
  }
  return local_14;
}


/* ---- FUN_fffffffff0021808 @ fffffffff0021808 size=904 ---- */

undefined8 FUN_fffffffff0021808(undefined8 param_1,uint param_2,uint param_3,char param_4)

{
  int iVar1;
  long lVar2;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  char local_71;
  uint local_70;
  uint local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  undefined8 local_18;
  
  local_18 = 0;
  if (((((*(uint *)(DAT_fffffffff0100168 + (ulong)param_2 * 0x18 + (ulong)param_3 * 0xc0 + 0x275c) &
         1) != 0) &&
       ((**(uint **)(DAT_fffffffff0100168 + (ulong)param_2 * 0x18 + (ulong)param_3 * 0xc0 + 0x2764)
        & 0x400) == 0)) &&
      (lVar2 = DAT_fffffffff0100168 + (ulong)param_2 * 0x18 + (ulong)param_3 * 0xc0,
      local_20 = lVar2 + 0x275c, (**(uint **)(lVar2 + 0x2764) & 4) == 0)) &&
     ((**(uint **)(lVar2 + 0x2764) & 0x200) == 0)) {
    *(int *)(DAT_fffffffff0100168 + 0x3114) = *(int *)(DAT_fffffffff0100168 + 0x3114) + 1;
    local_71 = param_4;
    local_70 = param_3;
    local_6c = param_2;
    local_68 = param_1;
    FUN_fffffffff0010774(local_20,(long)*(int *)(DAT_fffffffff0100168 + 0x3114),0);
    FUN_fffffffff00212f8((long)*(int *)(DAT_fffffffff0100168 + 0x3114));
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    FUN_fffffffff002153c(0,*(undefined8 *)(local_20 + 8),&local_60);
    if (local_71 == '\0') {
      local_c0 = local_60;
      local_b8 = local_58;
      local_b0 = local_50;
      local_a8 = local_48;
      local_a0 = local_40;
      local_98 = local_38;
      local_90 = local_30;
      iVar1 = FUN_fffffffff002111c(0,*(undefined8 *)(local_20 + 8),&local_c0,local_68);
      if (iVar1 != 0) {
        local_28 = *(undefined8 *)(local_20 + 8);
        iVar1 = FUN_fffffffff0021d4c(local_20,local_28);
        if (iVar1 != 0) {
          local_18 = *(undefined8 *)(local_20 + 8);
        }
      }
    }
    local_c0 = local_60;
    local_b8 = local_58;
    local_b0 = local_50;
    local_a8 = local_48;
    local_a0 = local_40;
    local_98 = local_38;
    local_90 = local_30;
    FUN_fffffffff0020f84(0,*(undefined8 *)(local_20 + 8),&local_c0);
  }
  return local_18;
}


/* ---- FUN_fffffffff0021b90 @ fffffffff0021b90 size=444 ---- */

long FUN_fffffffff0021b90(undefined1 *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  uint local_2c [4];
  uint local_1c;
  long local_18;
  
  local_18 = 0;
  local_2c[0] = 0;
  FUN_fffffffff002465c((long)*(int *)(&DAT_fffffffff0100178 + (ulong)param_2 * 4),local_2c);
  local_1c = 0;
  while( true ) {
    if (9 < local_1c) {
      return local_18;
    }
    if (local_18 != 0) break;
    lVar2 = DAT_fffffffff0100168 + (ulong)local_1c * 0x18 + (ulong)param_2 * 0xf0;
    if (((((*(uint *)(lVar2 + 0x291c) & 1) != 0) && ((*(uint *)(lVar2 + 0x291c) & 2) != 0)) &&
        ((**(uint **)(lVar2 + 0x2924) & 4) == 0)) &&
       ((((**(uint **)(lVar2 + 0x2924) & 0x200) == 0 &&
         (uVar1 = local_2c[0] >> ((long)(int)(local_1c << 2) & 0x1fU), (uVar1 & 2) == 0)) &&
        (*param_1 = 0, (uVar1 & 0xc) != 0)))) {
      return *(long *)(lVar2 + 0x2924);
    }
    local_1c = local_1c + 1;
  }
  return local_18;
}


/* ---- FUN_fffffffff0021d4c @ fffffffff0021d4c size=108 ---- */

bool FUN_fffffffff0021d4c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 local_11;
  
  iVar1 = FUN_fffffffff000f878(param_1,1);
  if (iVar1 != 0) {
    FUN_fffffffff000f164(param_1,param_2);
  }
  local_11 = iVar1 == 0;
  return local_11;
}


/* ---- FUN_fffffffff0021db8 @ fffffffff0021db8 size=276 ---- */

undefined1 FUN_fffffffff0021db8(long param_1)

{
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  undefined1 local_19;
  ulong local_18;
  
  local_19 = 0;
  local_18 = 0;
  local_20 = *(uint *)(param_1 + 4) >> 3 & 0xf;
  local_24 = *(uint *)(param_1 + 4) >> 7 & 0xff;
  local_28 = 1 << ((long)(int)local_24 & 0x1fU);
  FUN_fffffffff0024540
            ((long)*(int *)(&DAT_fffffffff0100180 + (ulong)local_20 * 4),(long)(int)local_28);
  while( true ) {
    local_2c = 0;
    FUN_fffffffff002465c((long)*(int *)(&DAT_fffffffff0100180 + (ulong)local_20 * 4),&local_2c);
    if ((local_28 & local_2c) == 0) break;
    for (local_18 = 0; local_18 < 0x2711; local_18 = local_18 + 1) {
    }
  }
  return 1;
}


/* ---- sub_21ecc @ fffffffff0021ecc size=24 ---- */

/* WARNING: Removing unreachable block (ram,0xfffffffff0021ecc) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0021ed4) */

void sub_21ecc(long param_1)

{
  do {
  } while (param_1 != 0);
  return;
}


/* ---- FUN_fffffffff0021ee4 @ fffffffff0021ee4 size=444 ---- */

void FUN_fffffffff0021ee4(undefined8 *param_1)

{
  int iVar1;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_28;
  
  local_28 = *param_1;
  local_50 = *(undefined4 *)param_1;
  local_4c = *(undefined4 *)((long)param_1 + 4);
  local_48 = *(undefined4 *)(param_1 + 1);
  local_44 = *(undefined4 *)((long)param_1 + 0xc);
  local_40 = *(undefined4 *)(param_1 + 2);
  local_3c = *(undefined4 *)((long)param_1 + 0x14);
  local_38 = *(undefined4 *)(param_1 + 3);
  local_34 = *(undefined4 *)((long)param_1 + 0x1c);
  iVar1 = FUN_fffffffff00226c0(&local_50);
  if (iVar1 == 0) {
    local_50 = *(undefined4 *)param_1;
    local_4c = *(undefined4 *)((long)param_1 + 4);
    local_48 = *(undefined4 *)(param_1 + 1);
    local_44 = *(undefined4 *)((long)param_1 + 0xc);
    local_40 = *(undefined4 *)(param_1 + 2);
    local_3c = *(undefined4 *)((long)param_1 + 0x14);
    local_38 = *(undefined4 *)(param_1 + 3);
    local_34 = *(undefined4 *)((long)param_1 + 0x1c);
    FUN_fffffffff0022234(local_28,&local_50);
    iVar1 = FUN_fffffffff00237f0(local_28);
    if (iVar1 != 0) {
      FUN_fffffffff00220a0(local_28);
    }
    local_50 = *(undefined4 *)param_1;
    local_4c = *(undefined4 *)((long)param_1 + 4);
    local_48 = *(undefined4 *)(param_1 + 1);
    local_44 = *(undefined4 *)((long)param_1 + 0xc);
    local_40 = *(undefined4 *)(param_1 + 2);
    local_3c = *(undefined4 *)((long)param_1 + 0x14);
    local_38 = *(undefined4 *)(param_1 + 3);
    local_34 = *(undefined4 *)((long)param_1 + 0x1c);
    FUN_fffffffff00224a0(local_28,&local_50);
  }
  return;
}


/* ---- FUN_fffffffff00220a0 @ fffffffff00220a0 size=256 ---- */

void FUN_fffffffff00220a0(long param_1)

{
  int iVar1;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  long local_18;
  
  if ((*(uint *)(param_1 + 0x84) & 0x40) != 0) {
    local_18 = param_1;
    if ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x4000) == 0) {
      iVar1 = FUN_fffffffff002356c(param_1);
      if (iVar1 != 0) {
        *(uint *)(DAT_fffffffff0100168 + 0x31ac) = *(uint *)(DAT_fffffffff0100168 + 0x31ac) | 0x4000
        ;
      }
    }
    FUN_fffffffff0023330();
    local_40 = *(undefined4 *)(local_18 + 0x88);
    local_3c = *(undefined4 *)(local_18 + 0x8c);
    local_38 = *(undefined4 *)(local_18 + 0x90);
    local_34 = *(undefined4 *)(local_18 + 0x94);
    local_30 = *(undefined4 *)(local_18 + 0x98);
    local_2c = *(undefined4 *)(local_18 + 0x9c);
    FUN_fffffffff0022ac0(local_18,&local_40);
    FUN_fffffffff00234d0();
  }
  return;
}


/* ---- FUN_fffffffff00221a0 @ fffffffff00221a0 size=148 ---- */

void FUN_fffffffff00221a0(long param_1)

{
  long lVar1;
  bool bVar2;
  
  if ((*(uint *)(param_1 + 0x84) & 0x40) != 0) {
    if (((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x4000) != 0) &&
       (lVar1 = FUN_fffffffff00237f0(param_1), lVar1 == 0)) {
      bVar2 = true;
      goto LAB_fffffffff002220c;
    }
  }
  bVar2 = false;
LAB_fffffffff002220c:
  if (bVar2) {
    FUN_fffffffff0023330();
    FUN_fffffffff0023048(param_1);
    FUN_fffffffff00234d0();
  }
  return;
}


/* ---- FUN_fffffffff0022234 @ fffffffff0022234 size=620 ---- */

void FUN_fffffffff0022234(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  
  *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xfffffffe | *(uint *)(param_2 + 8) & 1;
  *(uint *)(param_1 + 0x88) =
       *(uint *)(param_1 + 0x88) & 0xfffffffd | (*(uint *)(param_2 + 8) >> 1 & 1) << 1;
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x1c);
  lVar2 = DAT_fffffffff0100168;
  uVar1 = (undefined4)param_1;
  uVar3 = (undefined4)((ulong)param_1 >> 0x20);
  if ((*(uint *)(param_2 + 0x10) & 0x80000000) != 0) {
    *(undefined4 *)(DAT_fffffffff0100168 + 0x31d8) = uVar1;
    *(undefined4 *)(lVar2 + 0x31dc) = uVar3;
  }
  lVar2 = DAT_fffffffff0100168;
  if ((*(uint *)(param_2 + 0x14) & 0x80000000) != 0) {
    *(undefined4 *)(DAT_fffffffff0100168 + 0x31e0) = uVar1;
    *(undefined4 *)(lVar2 + 0x31e4) = uVar3;
  }
  lVar2 = DAT_fffffffff0100168;
  if ((*(uint *)(param_2 + 0x18) & 0x80000000) != 0) {
    *(undefined4 *)(DAT_fffffffff0100168 + 0x31e8) = uVar1;
    *(undefined4 *)(lVar2 + 0x31ec) = uVar3;
  }
  lVar2 = DAT_fffffffff0100168;
  if ((*(uint *)(param_2 + 0x1c) & 0x80000000) != 0) {
    *(undefined4 *)(DAT_fffffffff0100168 + 0x31f0) = uVar1;
    *(undefined4 *)(lVar2 + 0x31f4) = uVar3;
  }
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x40;
  return;
}


/* ---- FUN_fffffffff00224a0 @ fffffffff00224a0 size=544 ---- */

void FUN_fffffffff00224a0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = DAT_fffffffff0100168;
  if ((param_1 == *(long *)(DAT_fffffffff0100168 + 0x31d8)) &&
     ((*(uint *)(param_2 + 0x10) & 0x80000000) == 0)) {
    *(undefined4 *)(DAT_fffffffff0100168 + 0x31d8) = 0;
    *(undefined4 *)(lVar1 + 0x31dc) = 0;
  }
  lVar1 = DAT_fffffffff0100168;
  if ((param_1 == *(long *)(DAT_fffffffff0100168 + 0x31e0)) &&
     ((*(uint *)(param_2 + 0x14) & 0x80000000) == 0)) {
    *(undefined4 *)(DAT_fffffffff0100168 + 0x31e0) = 0;
    *(undefined4 *)(lVar1 + 0x31e4) = 0;
  }
  lVar1 = DAT_fffffffff0100168;
  if ((param_1 == *(long *)(DAT_fffffffff0100168 + 0x31e8)) &&
     ((*(uint *)(param_2 + 0x18) & 0x80000000) == 0)) {
    *(undefined4 *)(DAT_fffffffff0100168 + 0x31e8) = 0;
    *(undefined4 *)(lVar1 + 0x31ec) = 0;
  }
  lVar1 = DAT_fffffffff0100168;
  if ((param_1 == *(long *)(DAT_fffffffff0100168 + 0x31f0)) &&
     ((*(uint *)(param_2 + 0x1c) & 0x80000000) == 0)) {
    *(undefined4 *)(DAT_fffffffff0100168 + 0x31f0) = 0;
    *(undefined4 *)(lVar1 + 0x31f4) = 0;
  }
  return;
}


/* ---- FUN_fffffffff00226c0 @ fffffffff00226c0 size=644 ---- */

undefined1 FUN_fffffffff00226c0(long *param_1)

{
  undefined1 local_11;
  
  local_11 = 0;
  if ((((*(uint *)(param_1 + 2) & 0x80000000) != 0) &&
      (*(long *)(DAT_fffffffff0100168 + 0x31d8) != 0)) &&
     (*(long *)(DAT_fffffffff0100168 + 0x31d8) != *param_1)) {
    local_11 = 1;
  }
  if ((((*(uint *)((long)param_1 + 0x14) & 0x80000000) != 0) &&
      (*(long *)(DAT_fffffffff0100168 + 0x31e0) != 0)) &&
     (*(long *)(DAT_fffffffff0100168 + 0x31e0) != *param_1)) {
    local_11 = 1;
  }
  if ((((*(uint *)(param_1 + 3) & 0x80000000) != 0) &&
      (*(long *)(DAT_fffffffff0100168 + 0x31e8) != 0)) &&
     (*(long *)(DAT_fffffffff0100168 + 0x31e8) != *param_1)) {
    local_11 = 1;
  }
  if ((((*(uint *)((long)param_1 + 0x1c) & 0x80000000) != 0) &&
      (*(long *)(DAT_fffffffff0100168 + 0x31f0) != 0)) &&
     (*(long *)(DAT_fffffffff0100168 + 0x31f0) != *param_1)) {
    local_11 = 1;
  }
  return local_11;
}


/* ---- sub_22944 @ fffffffff0022944 size=380 ---- */

undefined1 sub_22944(long *param_1)

{
  long lVar1;
  undefined1 local_11;
  
  local_11 = 0;
  lVar1 = *param_1;
  if (((*(uint *)(param_1 + 2) & 0x80000000) == 0) && ((*(uint *)(lVar1 + 0x90) & 0x80000000) != 0))
  {
    local_11 = 1;
  }
  if (((*(uint *)((long)param_1 + 0x14) & 0x80000000) == 0) &&
     ((*(uint *)(lVar1 + 0x94) & 0x80000000) != 0)) {
    local_11 = 1;
  }
  if (((*(uint *)(param_1 + 3) & 0x80000000) == 0) && ((*(uint *)(lVar1 + 0x98) & 0x80000000) != 0))
  {
    local_11 = 1;
  }
  if (((*(uint *)((long)param_1 + 0x1c) & 0x80000000) == 0) &&
     ((*(uint *)(lVar1 + 0x9c) & 0x80000000) != 0)) {
    local_11 = 1;
  }
  return local_11;
}


/* ---- FUN_fffffffff0022ac0 @ fffffffff0022ac0 size=1416 ---- */

void FUN_fffffffff0022ac0(long param_1,uint *param_2)

{
  uint local_28;
  uint local_24;
  
  if ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x10) == 0) {
    local_24 = *(uint *)(param_1 + 0x40);
  }
  else {
    local_24 = *(uint *)(param_1 + 0x48);
  }
  local_28 = 0;
  FUN_fffffffff002479c
            (*(int *)(DAT_fffffffff0100168 + 0x3124) + 0x9e5,&local_28,(long)(int)local_24);
  local_28 = local_28 & 0xfffffffc | *param_2 & 1 | (*param_2 >> 1 & 1) << 1;
  FUN_fffffffff002463c
            (*(int *)(DAT_fffffffff0100168 + 0x3124) + 0x9e5,(long)(int)local_28,(long)(int)local_24
            );
  FUN_fffffffff002463c
            (*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1f72,(long)(int)param_2[1],
             (long)(int)local_24);
  if (param_1 == *(long *)(DAT_fffffffff0100168 + 0x31d8)) {
    if ((param_2[2] & 0x80000000) == 0) {
      FUN_fffffffff0024540
                ((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x204a),
                 (long)*(int *)(DAT_fffffffff0100168 + 0x31c8));
    }
    else {
      FUN_fffffffff0024540
                ((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x204a),
                 (long)(int)(param_2[2] & 0xf0ffffff | (local_24 & 0xf) << 0x18));
    }
  }
  if (param_1 == *(long *)(DAT_fffffffff0100168 + 0x31e0)) {
    if ((param_2[3] & 0x80000000) == 0) {
      FUN_fffffffff0024540
                ((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x204d),
                 (long)*(int *)(DAT_fffffffff0100168 + 0x31cc));
    }
    else {
      FUN_fffffffff0024540
                ((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x204d),
                 (long)(int)(param_2[3] & 0xf0ffffff | (local_24 & 0xf) << 0x18));
    }
  }
  if (param_1 == *(long *)(DAT_fffffffff0100168 + 0x31e8)) {
    if ((param_2[4] & 0x80000000) == 0) {
      FUN_fffffffff0024540
                ((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x2050),
                 (long)*(int *)(DAT_fffffffff0100168 + 0x31d0));
    }
    else {
      FUN_fffffffff0024540
                ((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x2050),
                 (long)(int)(param_2[4] & 0xf0ffffff | (local_24 & 0xf) << 0x18));
    }
  }
  if (param_1 == *(long *)(DAT_fffffffff0100168 + 0x31f0)) {
    if ((param_2[5] & 0x80000000) == 0) {
      FUN_fffffffff0024540
                ((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x2053),
                 (long)*(int *)(DAT_fffffffff0100168 + 0x31d4));
    }
    else {
      FUN_fffffffff0024540
                ((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x2053),
                 (long)(int)(param_2[5] & 0xf0ffffff | (local_24 & 0xf) << 0x18));
    }
  }
  return;
}


/* ---- FUN_fffffffff0023048 @ fffffffff0023048 size=744 ---- */

void FUN_fffffffff0023048(long param_1)

{
  int iVar1;
  
  if ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x10) == 0) {
    iVar1 = *(int *)(param_1 + 0x40);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x48);
  }
  FUN_fffffffff002463c
            (*(int *)(DAT_fffffffff0100168 + 0x3124) + 0x9e5,
             (long)*(int *)(DAT_fffffffff0100168 + 0x31c0),(long)iVar1);
  FUN_fffffffff002463c
            (*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1f72,
             (long)*(int *)(DAT_fffffffff0100168 + 0x31c4),(long)iVar1);
  if (param_1 == *(long *)(DAT_fffffffff0100168 + 0x31d8)) {
    FUN_fffffffff0024540
              ((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x204a),
               (long)*(int *)(DAT_fffffffff0100168 + 0x31c8));
  }
  if (param_1 == *(long *)(DAT_fffffffff0100168 + 0x31e0)) {
    FUN_fffffffff0024540
              ((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x204d),
               (long)*(int *)(DAT_fffffffff0100168 + 0x31cc));
  }
  if (param_1 == *(long *)(DAT_fffffffff0100168 + 0x31e8)) {
    FUN_fffffffff0024540
              ((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x2050),
               (long)*(int *)(DAT_fffffffff0100168 + 0x31d0));
  }
  if (param_1 == *(long *)(DAT_fffffffff0100168 + 0x31f0)) {
    FUN_fffffffff0024540
              ((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x2053),
               (long)*(int *)(DAT_fffffffff0100168 + 0x31d4));
  }
  return;
}


/* ---- FUN_fffffffff0023330 @ fffffffff0023330 size=416 ---- */

void FUN_fffffffff0023330(void)

{
  uint local_18 [2];
  
  local_18[0] = 0;
  FUN_fffffffff002465c((long)(*(int *)(DAT_fffffffff0100168 + 0x3124) + 0x1943),local_18);
  local_18[0] = local_18[0] | 2;
  FUN_fffffffff0024540
            ((long)(*(int *)(DAT_fffffffff0100168 + 0x3124) + 0x1943),(long)(int)local_18[0]);
  FUN_fffffffff002465c((long)(*(int *)(DAT_fffffffff0100168 + 0x3124) + 0x1943),local_18);
  FUN_fffffffff002465c((long)(*(int *)(DAT_fffffffff0100168 + 0x3124) + 0x1943),local_18);
  FUN_fffffffff002465c((long)(*(int *)(DAT_fffffffff0100168 + 0x3124) + 0x1943),local_18);
  FUN_fffffffff002465c((long)(*(int *)(DAT_fffffffff0100168 + 0x3124) + 0x1943),local_18);
  FUN_fffffffff002465c((long)(*(int *)(DAT_fffffffff0100168 + 0x3124) + 0x1943),local_18);
  return;
}


/* ---- FUN_fffffffff00234d0 @ fffffffff00234d0 size=156 ---- */

void FUN_fffffffff00234d0(void)

{
  uint local_18 [2];
  
  local_18[0] = 0;
  FUN_fffffffff002465c((long)(*(int *)(DAT_fffffffff0100168 + 0x3124) + 0x1943),local_18);
  local_18[0] = local_18[0] & 0xfffffffd;
  FUN_fffffffff0024540
            ((long)(*(int *)(DAT_fffffffff0100168 + 0x3124) + 0x1943),(long)(int)local_18[0]);
  return;
}


/* ---- FUN_fffffffff002356c @ fffffffff002356c size=644 ---- */

bool FUN_fffffffff002356c(long param_1)

{
  bool bVar1;
  undefined4 local_1c;
  int local_18;
  undefined1 local_11;
  
  local_11 = 0;
  if ((*(uint *)(DAT_fffffffff0100168 + 0x31ac) & 0x10) == 0) {
    local_18 = *(int *)(param_1 + 0x40);
  }
  else {
    local_18 = *(int *)(param_1 + 0x48);
  }
  bVar1 = local_18 != 0xffff;
  if (bVar1) {
    local_1c = 0;
    FUN_fffffffff002479c(*(int *)(DAT_fffffffff0100168 + 0x3124) + 0x9e5,&local_1c,(long)local_18);
    *(undefined4 *)(DAT_fffffffff0100168 + 0x31c0) = local_1c;
    local_1c = 0;
    FUN_fffffffff002479c(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x1f72,&local_1c,(long)local_18);
    *(undefined4 *)(DAT_fffffffff0100168 + 0x31c4) = local_1c;
    local_1c = 0;
    FUN_fffffffff002465c((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x204a),&local_1c);
    *(undefined4 *)(DAT_fffffffff0100168 + 0x31c8) = local_1c;
    local_1c = 0;
    FUN_fffffffff002465c((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x204d),&local_1c);
    *(undefined4 *)(DAT_fffffffff0100168 + 0x31cc) = local_1c;
    local_1c = 0;
    FUN_fffffffff002465c((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x2050),&local_1c);
    *(undefined4 *)(DAT_fffffffff0100168 + 0x31d0) = local_1c;
    local_1c = 0;
    FUN_fffffffff002465c((long)(*(int *)(DAT_fffffffff0100168 + 0x3120) + 0x2053),&local_1c);
    *(undefined4 *)(DAT_fffffffff0100168 + 0x31d4) = local_1c;
  }
  return bVar1;
}


/* ---- FUN_fffffffff00237f0 @ fffffffff00237f0 size=108 ---- */

undefined1 FUN_fffffffff00237f0(long param_1)

{
  undefined1 local_11;
  
  local_11 = 0;
  if ((((*(int *)(param_1 + 0x224) != 0) || (*(int *)(param_1 + 0x268) != 0)) ||
      (*(int *)(param_1 + 0x2ac) != 0)) ||
     ((*(int *)(param_1 + 0x2f0) != 0 || (*(int *)(param_1 + 0x334) != 0)))) {
    local_11 = 1;
  }
  return local_11;
}


/* ---- FUN_fffffffff0023860 @ fffffffff0023860 size=20 ---- */

undefined8 FUN_fffffffff0023860(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2000000000000);
}


/* ---- FUN_fffffffff0023874 @ fffffffff0023874 size=20 ---- */

void FUN_fffffffff0023874(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x2000000000000) = param_2;
  return;
}


/* ---- FUN_fffffffff0023888 @ fffffffff0023888 size=16 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0023888(undefined4 param_1)

{
  _DAT_2000000000398 = param_1;
  return;
}


/* ---- FUN_fffffffff0023898 @ fffffffff0023898 size=24 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_fffffffff0023898(void)

{
  return _DAT_2000000000028 >> 0x26 & 0xf;
}


/* ---- FUN_fffffffff00238b0 @ fffffffff00238b0 size=108 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff00238b0(long param_1,undefined4 param_2,long param_3)

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


/* ---- FUN_fffffffff002391c @ fffffffff002391c size=92 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff002391c(long param_1,uint param_2)

{
  _DAT_2000000000098 = param_2 | 0x2008;
  _DAT_2000000000530 = (uint)((ulong)_DAT_2000000000028 >> 0x3f);
  _DAT_2000000000470 = 0;
  return *(undefined8 *)(param_1 + 0x1000000000000);
}


/* ---- sub_23978 @ fffffffff0023978 size=72 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_23978(long param_1,undefined4 param_2)

{
  _DAT_2000000000098 = _DAT_2000000000070 | 0x2001;
  *(undefined4 *)(param_1 + 0x1000000000000) = param_2;
  _DAT_2000000000470 = 0;
  _DAT_2000000000530 = 0;
  return;
}


/* ---- FUN_fffffffff00239c0 @ fffffffff00239c0 size=72 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff00239c0(long param_1,undefined8 param_2,long param_3,long param_4)

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


/* ---- FUN_fffffffff0023a08 @ fffffffff0023a08 size=104 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0023a08(long param_1,undefined8 param_2,long param_3)

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


/* ---- sub_23a70 @ fffffffff0023a70 size=72 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_23a70(long param_1,undefined8 param_2,long param_3)

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


/* ---- sub_23ab8 @ fffffffff0023ab8 size=204 ---- */

/* WARNING: Removing unreachable block (ram,0xfffffffff0023b20) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0023b28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_23ab8(long param_1,undefined8 param_2,long param_3)

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


/* ---- FUN_fffffffff0023b84 @ fffffffff0023b84 size=108 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0023b84(long param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)_DAT_2000000000028 >> 0x20);
  _DAT_2000000000098 = _DAT_2000000000070 | 0x2001;
  *(undefined4 *)(param_1 + 0x1000000000000) = param_2;
  _DAT_2000000000398 = uVar1 >> 6 & 0xf;
  _DAT_2000000000530 = uVar1 >> 0x1f;
  return;
}


/* ---- sub_23bf0 @ fffffffff0023bf0 size=72 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_23bf0(long param_1)

{
  _DAT_2000000000098 = _DAT_2000000000070 | 0x2001;
  _DAT_2000000000470 = 0;
  _DAT_2000000000530 = 0;
  return *(undefined4 *)(param_1 + 0x1000000000000);
}


/* ---- FUN_fffffffff0023c38 @ fffffffff0023c38 size=72 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0023c38(long param_1)

{
  _DAT_2000000000530 = 1;
  if (param_1 == 0xff0) {
    param_1 = (long)_DAT_2000000000070;
  }
  _DAT_2000000000098 = (uint)param_1 | 0x2008;
  FUN_fffffffff0023cf8();
  return;
}


/* ---- FUN_fffffffff0023c80 @ fffffffff0023c80 size=60 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0023c80(void)

{
  _DAT_2000000000530 = 1;
  _DAT_2000000000098 = _DAT_2000000000070 | 0x2001;
  FUN_fffffffff0023cf8();
  return;
}


/* ---- sub_23cbc @ fffffffff0023cbc size=60 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong sub_23cbc(long param_1,long param_2)

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


/* ---- FUN_fffffffff0023cf8 @ fffffffff0023cf8 size=52 ---- */

ulong FUN_fffffffff0023cf8(long param_1,long param_2)

{
  ulong uVar1;
  long in_t3;
  undefined4 in_t6;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x1000000000000);
  if (param_2 != 0) {
    uVar1 = CONCAT44(*(undefined4 *)(param_1 + 0x1000000000004),*(uint *)(param_1 + 0x1000000000000)
                    );
  }
  *(undefined4 *)(in_t3 + 0x530) = in_t6;
  return uVar1;
}


/* ---- sub_23d2c @ fffffffff0023d2c size=208 ---- */

/* WARNING: Removing unreachable block (ram,0xfffffffff0023d94) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0023d9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong sub_23d2c(long param_1,long param_2)

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


/* ---- FUN_fffffffff0023dfc @ fffffffff0023dfc size=108 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_fffffffff0023dfc(long param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)_DAT_2000000000028 >> 0x20);
  _DAT_2000000000098 = _DAT_2000000000070 | 0x2001;
  _DAT_2000000000398 = uVar1 >> 6 & 0xf;
  _DAT_2000000000530 = uVar1 >> 0x1f;
  return *(undefined4 *)(param_1 + 0x1000000000000);
}


/* ---- FUN_fffffffff0023e68 @ fffffffff0023e68 size=28 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0023e68(ulong param_1)

{
  _DAT_2000000000120 = (int)(param_1 & 3);
  _DAT_20000000000d8 = (int)((param_1 & 3) << 7);
  return;
}


/* ---- FUN_fffffffff0023e84 @ fffffffff0023e84 size=36 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_fffffffff0023e84(void)

{
  return _DAT_2000000000028 >> 0x35 & 0xc | _DAT_2000000000028 >> 0x20 & 3;
}


/* ---- FUN_fffffffff0023ea8 @ fffffffff0023ea8 size=132 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0023ea8(ulong param_1,undefined8 *param_2,undefined8 param_3)

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


/* ---- FUN_fffffffff0023f2c @ fffffffff0023f2c size=112 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff0023f2c(uint param_1,long *param_2)

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


/* ---- FUN_fffffffff0023fa0 @ fffffffff0023fa0 size=20 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0023fa0(void)

{
  _DAT_2000000000530 = 0;
  wfi();
  return;
}


/* ---- FUN_fffffffff0023fb4 @ fffffffff0023fb4 size=48 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0023fb4(uint param_1,undefined4 *param_2,undefined4 *param_3,long param_4)

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


/* ---- FUN_fffffffff0023fe4 @ fffffffff0023fe4 size=96 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0023fe4(uint *param_1)

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


/* ---- FUN_fffffffff0024044 @ fffffffff0024044 size=16 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_fffffffff0024044(void)

{
  return _DAT_2000000000040;
}


/* ---- FUN_fffffffff0024054 @ fffffffff0024054 size=196 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff0024054
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
  FUN_fffffffff0023860(0xc894,_DAT_2000000000080,1,_DAT_2000000000070);
  return lVar1;
}


/* ---- FUN_fffffffff0024118 @ fffffffff0024118 size=196 ---- */

/* WARNING: Removing unreachable block (ram,0xfffffffff00241ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff0024118(long param_1)

{
  _DAT_2000000000098 = _DAT_2000000000070 | 0x2001;
  _DAT_10000000320e0 = _DAT_20000000000f8 + param_1;
  _DAT_100000002a404 = 0;
  _DAT_2000000000530 = (uint)((ulong)_DAT_2000000000028 >> 0x3f);
  return param_1;
}


/* ---- FUN_fffffffff00241dc @ fffffffff00241dc size=164 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff00241dc(undefined4 param_1,undefined4 param_2)

{
  _DAT_2000000000098 = _DAT_2000000000070 | 0x2001;
  do {
  } while ((_DAT_100000000c2d4 >> 0x1a & 1) != 0);
  _DAT_100000000c0dc = param_1;
  _DAT_100000000c2dc = param_2;
  _DAT_2000000000000 = 0;
  _DAT_100000000c0e4 = 0xb1;
  _DAT_100000000c2d4 = _DAT_100000000c2d4 | 0x4000000;
  return;
}


/* ---- sub_24280 @ fffffffff0024280 size=144 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_24280(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

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


/* ---- sub_24328 @ fffffffff0024328 size=100 ---- */

undefined8 sub_24328(int param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_3 == 0xff0) {
    iVar1 = FUN_fffffffff0023860(0x70);
    param_3 = (long)iVar1;
  }
  uVar2 = FUN_fffffffff0023c38(param_1 << 2,1,param_3);
  *param_2 = uVar2;
  return 0;
}


/* ---- FUN_fffffffff002438c @ fffffffff002438c size=100 ---- */

undefined8 FUN_fffffffff002438c(int param_1,undefined4 *param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_3 == 0xff0) {
    iVar2 = FUN_fffffffff0023860(0x70);
    param_3 = (long)iVar2;
  }
  uVar1 = FUN_fffffffff0023c38(param_1 << 2,0,param_3);
  *param_2 = uVar1;
  return 0;
}


/* ---- sub_243f0 @ fffffffff00243f0 size=52 ---- */

undefined8 sub_243f0(int param_1,undefined4 param_2)

{
  FUN_fffffffff00239c0(param_1 << 2,1,param_2);
  return 0;
}


/* ---- sub_24424 @ fffffffff0024424 size=104 ---- */

undefined8 sub_24424(long param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0x30ff) {
    FUN_fffffffff00239c0((int)param_1 << 2,0);
    return 0;
  }
  FUN_fffffffff00238b0(0xc3fc,param_2,param_3);
  return 0;
}


/* ---- FUN_fffffffff002448c @ fffffffff002448c size=28 ---- */

undefined8 FUN_fffffffff002448c(void)

{
  FUN_fffffffff0023888();
  return 0;
}


/* ---- FUN_fffffffff00244a8 @ fffffffff00244a8 size=44 ---- */

undefined8 FUN_fffffffff00244a8(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_fffffffff0023898();
  *param_1 = uVar1;
  return 0;
}


/* ---- sub_244d4 @ fffffffff00244d4 size=28 ---- */

undefined8 sub_244d4(void)

{
  FUN_fffffffff0023e68();
  return 0;
}


/* ---- sub_244f0 @ fffffffff00244f0 size=80 ---- */

undefined8 sub_244f0(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_fffffffff0023e84();
  if (uVar1 >> 2 == (uVar1 & 3)) {
    *param_1 = uVar1 >> 2;
    return 0;
  }
  return 2;
}


/* ---- FUN_fffffffff0024540 @ fffffffff0024540 size=52 ---- */

undefined8 FUN_fffffffff0024540(int param_1,undefined4 param_2)

{
  FUN_fffffffff0023a08(param_1 << 2,param_2,0);
  return 0;
}


/* ---- sub_24574 @ fffffffff0024574 size=44 ---- */

undefined8 sub_24574(int param_1)

{
  FUN_fffffffff0023a08(param_1 << 2,1);
  return 0;
}


/* ---- FUN_fffffffff00245a0 @ fffffffff00245a0 size=104 ---- */

undefined8 FUN_fffffffff00245a0(long param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0x30ff) {
    FUN_fffffffff00239c0((int)param_1 << 2,0);
    return 0;
  }
  FUN_fffffffff00238b0(0xc3fc,param_2,param_3);
  return 0;
}


/* ---- FUN_fffffffff0024608 @ fffffffff0024608 size=52 ---- */

undefined8 FUN_fffffffff0024608(int param_1,undefined4 param_2)

{
  FUN_fffffffff00239c0(param_1 << 2,1,param_2);
  return 0;
}


/* ---- FUN_fffffffff002463c @ fffffffff002463c size=32 ---- */

undefined8 FUN_fffffffff002463c(long param_1)

{
  FUN_fffffffff0023b84(param_1 << 2);
  return 0;
}


/* ---- FUN_fffffffff002465c @ fffffffff002465c size=60 ---- */

undefined8 FUN_fffffffff002465c(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_fffffffff0023c80(param_1 << 2,0);
  *param_2 = uVar1;
  return 0;
}


/* ---- sub_24698 @ fffffffff0024698 size=60 ---- */

undefined8 sub_24698(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_fffffffff0023c80(param_1 << 2,1);
  *param_2 = uVar1;
  return 0;
}


/* ---- FUN_fffffffff00246d4 @ fffffffff00246d4 size=100 ---- */

undefined8 FUN_fffffffff00246d4(int param_1,undefined4 *param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_3 == 0xff0) {
    iVar2 = FUN_fffffffff0023860(0x70);
    param_3 = (long)iVar2;
  }
  uVar1 = FUN_fffffffff0023c38(param_1 << 2,0,param_3);
  *param_2 = uVar1;
  return 0;
}


/* ---- FUN_fffffffff0024738 @ fffffffff0024738 size=100 ---- */

undefined8 FUN_fffffffff0024738(int param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_3 == 0xff0) {
    iVar1 = FUN_fffffffff0023860(0x70);
    param_3 = (long)iVar1;
  }
  uVar2 = FUN_fffffffff0023c38(param_1 << 2,1,param_3);
  *param_2 = uVar2;
  return 0;
}


/* ---- FUN_fffffffff002479c @ fffffffff002479c size=52 ---- */

undefined8 FUN_fffffffff002479c(long param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_fffffffff0023dfc(param_1 << 2,param_3);
  *param_2 = uVar1;
  return 0;
}


/* ---- sub_247d0 @ fffffffff00247d0 size=92 ---- */

undefined8 sub_247d0(uint param_1)

{
  if ((param_1 & 0xfffefffc) == 0) {
    FUN_fffffffff0023ea8(param_1 | 0x30);
    return 0;
  }
  return 100;
}


/* ---- FUN_fffffffff002482c @ fffffffff002482c size=92 ---- */

undefined8 FUN_fffffffff002482c(uint param_1)

{
  if ((param_1 & 0xfffefffc) == 0) {
    FUN_fffffffff0023ea8(param_1 | 0x20);
    return 0;
  }
  return 100;
}


/* ---- sub_24888 @ fffffffff0024888 size=92 ---- */

undefined8 sub_24888(uint param_1)

{
  if ((param_1 & 0xfffefffc) == 0) {
    FUN_fffffffff0023ea8(param_1 | 0x10);
    return 0;
  }
  return 100;
}


/* ---- sub_248e4 @ fffffffff00248e4 size=88 ---- */

undefined8 sub_248e4(uint param_1)

{
  if ((param_1 & 0xfffefffc) == 0) {
    FUN_fffffffff0023ea8(param_1);
    return 0;
  }
  return 100;
}


/* ---- FUN_fffffffff002493c @ fffffffff002493c size=32 ---- */

void FUN_fffffffff002493c(void)

{
  long lVar1;
  
  do {
    lVar1 = FUN_fffffffff0023860(0x90);
  } while (lVar1 != 0);
  return;
}


/* ---- sub_2495c @ fffffffff002495c size=104 ---- */

undefined8 sub_2495c(uint param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if ((param_1 & 0xffffff3f) == 0) {
    uVar1 = FUN_fffffffff0023f2c(param_1 | 3);
    *param_2 = uVar1;
    return 0;
  }
  return 100;
}


/* ---- sub_249c4 @ fffffffff00249c4 size=104 ---- */

undefined8 sub_249c4(uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if ((param_1 & 0xffffff3f) == 0) {
    uVar1 = FUN_fffffffff0023f2c(param_1 | 2);
    *param_2 = uVar1;
    return 0;
  }
  return 100;
}


/* ---- sub_24a2c @ fffffffff0024a2c size=104 ---- */

undefined8 sub_24a2c(uint param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  
  if ((param_1 & 0xffffff3f) == 0) {
    uVar1 = FUN_fffffffff0023f2c(param_1 | 1);
    *param_2 = uVar1;
    return 0;
  }
  return 100;
}


/* ---- sub_24a94 @ fffffffff0024a94 size=100 ---- */

undefined8 sub_24a94(uint param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  if ((param_1 & 0xffffff3f) == 0) {
    uVar1 = FUN_fffffffff0023f2c(param_1);
    *param_2 = uVar1;
    return 0;
  }
  return 100;
}


/* ---- FUN_fffffffff0024af8 @ fffffffff0024af8 size=36 ---- */

undefined8 FUN_fffffffff0024af8(void)

{
  FUN_fffffffff0023874(0x530,1);
  return 0;
}


/* ---- FUN_fffffffff0024b1c @ fffffffff0024b1c size=36 ---- */

undefined8 FUN_fffffffff0024b1c(void)

{
  FUN_fffffffff0023874(0x530,0);
  return 0;
}


/* ---- thunk_FUN_fffffffff0023fa0 @ fffffffff0024b40 size=4 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_fffffffff0023fa0(void)

{
  _DAT_2000000000530 = 0;
  wfi();
  return;
}


/* ---- FUN_fffffffff0024b44 @ fffffffff0024b44 size=264 ---- */

undefined8 FUN_fffffffff0024b44(undefined4 param_1,undefined8 param_2)

{
  switch(param_1) {
  case 3:
    DAT_fffffffff0103720 = param_2;
    return 0;
  case 4:
    DAT_fffffffff0103728 = param_2;
    return 0;
  case 5:
    DAT_fffffffff0103730 = param_2;
    return 0;
  case 6:
    DAT_fffffffff0103738 = param_2;
    return 0;
  case 7:
    DAT_fffffffff0103758 = param_2;
    return 0;
  case 8:
    DAT_fffffffff0103740 = param_2;
    return 0;
  case 9:
    DAT_fffffffff0103748 = param_2;
    return 0;
  case 10:
    DAT_fffffffff0103750 = param_2;
    return 0;
  default:
    return 100;
  case 0x10:
    DAT_fffffffff0103768 = param_2;
    return 0;
  case 0x11:
    DAT_fffffffff0103770 = param_2;
    return 0;
  case 0x12:
    DAT_fffffffff0103778 = param_2;
    return 0;
  case 0x13:
    DAT_fffffffff0103780 = param_2;
    return 0;
  case 0x1f:
    DAT_fffffffff0103760 = param_2;
    return 0;
  }
}


/* ---- FUN_fffffffff0024c4c @ fffffffff0024c4c size=548 ---- */

void FUN_fffffffff0024c4c(uint param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint local_10;
  undefined4 uStack_c;
  ulong uStack_8;
  
  uVar1 = (param_1 & 0x1f) + 0x1d;
  local_10 = param_1;
  uStack_8 = param_2;
  if ((uVar1 & 0x1f) < 3) {
    uVar2 = (uint)(param_2 >> 0x20);
    local_10 = (uVar2 >> 0x1a & 0xf) << 0xb;
    uStack_8 = 0;
    uVar3 = param_2 >> 0x3a & 0xb;
    if (uVar3 == 2) {
      local_10 = param_1 & 0xffff07ff | local_10;
      uStack_8 = (param_2 >> 0x1a) << 0x20;
    }
    else {
      local_10 = (uVar2 >> 0x16 & 7) << 7 | (uVar2 >> 0x14 & 3) << 5 |
                 (uint)(ushort)(param_2 >> 0x30) << 0x1c | param_1 & 0xfff841f | local_10;
      if (uVar3 == 3) {
        if ((param_2 >> 0x2f & 1) == 0) {
          uStack_8 = param_2 & 0xffffffffffff;
        }
        else {
          uStack_8 = param_2 | 0xffff000000000000;
        }
        goto LAB_fffffffff0024d50;
      }
    }
    if ((local_10 & 0x7800) != 0x800) {
      uStack_8 = uStack_8 | param_2 & 0x3ffffff;
    }
  }
LAB_fffffffff0024d50:
  switch(uVar1 & 0x1f) {
  case 0:
    uVar3 = DAT_fffffffff0103720;
    if (DAT_fffffffff0103720 != 0) {
LAB_fffffffff0024da0:
                    /* WARNING: Could not recover jumptable at 0xfffffffff0024dac. Too many branches
                        */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(uVar3 & 0xfffffffffffffffe))(CONCAT44(uStack_c,local_10),uStack_8);
      return;
    }
    break;
  case 1:
    uVar3 = DAT_fffffffff0103728;
    if (DAT_fffffffff0103728 != 0) goto LAB_fffffffff0024da0;
    break;
  case 2:
    uVar3 = DAT_fffffffff0103730;
    if (DAT_fffffffff0103730 != 0) goto LAB_fffffffff0024da0;
    break;
  case 3:
    uVar3 = DAT_fffffffff0103738;
    if (DAT_fffffffff0103738 != 0) goto LAB_fffffffff0024da0;
    break;
  case 4:
    uVar3 = DAT_fffffffff0103758;
    if (DAT_fffffffff0103758 != 0) goto LAB_fffffffff0024da0;
    break;
  case 5:
    uVar3 = DAT_fffffffff0103740;
    if (DAT_fffffffff0103740 != 0) goto LAB_fffffffff0024da0;
    break;
  case 6:
    uVar3 = DAT_fffffffff0103748;
    if (DAT_fffffffff0103748 != 0) goto LAB_fffffffff0024da0;
    break;
  case 7:
    uVar3 = DAT_fffffffff0103750;
    if (DAT_fffffffff0103750 != 0) goto LAB_fffffffff0024da0;
    break;
  case 0xd:
    uVar3 = DAT_fffffffff0103768;
    if (DAT_fffffffff0103768 != 0) goto LAB_fffffffff0024da0;
    break;
  case 0xe:
    uVar3 = DAT_fffffffff0103770;
    if (DAT_fffffffff0103770 != 0) goto LAB_fffffffff0024da0;
    break;
  case 0xf:
    uVar3 = DAT_fffffffff0103778;
    if (DAT_fffffffff0103778 != 0) goto LAB_fffffffff0024da0;
    break;
  case 0x10:
    uVar3 = DAT_fffffffff0103780;
    if (DAT_fffffffff0103780 != 0) goto LAB_fffffffff0024da0;
    break;
  case 0x1c:
    uVar3 = DAT_fffffffff0103760;
    if (DAT_fffffffff0103760 != 0) goto LAB_fffffffff0024da0;
  }
  return;
}


/* ---- FUN_fffffffff0024e70 @ fffffffff0024e70 size=112 ---- */

undefined8
FUN_fffffffff0024e70(uint param_1,long param_2,int param_3,undefined8 param_4,undefined4 param_5)

{
  if ((param_1 & 0xfffffffc) == 0) {
    FUN_fffffffff0023fb4(param_1,(ulong)(uint)(param_3 << 2) + param_2,param_4,param_5);
    return 0;
  }
  return 100;
}


/* ---- sub_24ee0 @ fffffffff0024ee0 size=232 ---- */

undefined8 sub_24ee0(uint param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_fffffffff0023c80(0x2a628,0);
  uVar4 = 2;
  if ((uVar1 & 0xff) >> 7 != 0) {
    uVar3 = (uint)(uVar1 & 0xff);
    lVar2 = FUN_fffffffff0023c38
                      (0xc844,1,(uVar3 >> 3 & 3) << 6 | (uVar3 >> 5 & 3) << 4 |
                                ((uint)uVar1 & 7) << 8);
    if ((param_1 & 0xfffffffc) == 0) {
      FUN_fffffffff0023fb4(param_1,(ulong)(uint)(param_2 << 2) + lVar2,param_3,param_4);
      uVar4 = 0;
    }
    else {
      uVar4 = 100;
    }
  }
  return uVar4;
}


/* ---- FUN_fffffffff0024fc8 @ fffffffff0024fc8 size=28 ---- */

undefined8 FUN_fffffffff0024fc8(void)

{
  FUN_fffffffff0023fe4();
  return 0;
}


/* ---- FUN_fffffffff0024fe4 @ fffffffff0024fe4 size=44 ---- */

undefined8 FUN_fffffffff0024fe4(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_fffffffff0024044();
  *param_1 = uVar1;
  return 0;
}


/* ---- FUN_fffffffff0025010 @ fffffffff0025010 size=28 ---- */

undefined8 FUN_fffffffff0025010(void)

{
  FUN_fffffffff00028d4();
  return 0;
}


/* ---- sub_2502c @ fffffffff002502c size=28 ---- */

undefined8 sub_2502c(void)

{
  FUN_fffffffff00028f4();
  return 0;
}


/* ---- sub_25048 @ fffffffff0025048 size=44 ---- */

undefined8 sub_25048(void)

{
  FUN_fffffffff0023a08(0x320dc,1,0);
  return 0;
}


/* ---- FUN_fffffffff0025074 @ fffffffff0025074 size=224 ---- */

undefined8 FUN_fffffffff0025074(uint param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_fffffffff0023860(0x28);
  FUN_fffffffff0023874(0x530,1);
  FUN_fffffffff0023e68(param_1 >> 0x1a & 3);
  iVar1 = FUN_fffffffff0023898();
  FUN_fffffffff0023874(0x98,(param_1 >> 0x1c) << 0x14 | 0x4000);
  FUN_fffffffff0025858(param_3,param_2,param_1 & 0x3ffffff);
  do {
    lVar3 = FUN_fffffffff0023860(0x90);
  } while (lVar3 != 0);
  FUN_fffffffff0023874(0x98,iVar1 << 0x14 | 8);
  FUN_fffffffff0023874(0x530,uVar2 >> 0x3f);
  return 0;
}


/* ---- FUN_fffffffff0025154 @ fffffffff0025154 size=224 ---- */

undefined8 FUN_fffffffff0025154(uint param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_fffffffff0023860(0x28);
  FUN_fffffffff0023874(0x530,1);
  FUN_fffffffff0023e68(param_1 >> 0x1a & 3);
  iVar1 = FUN_fffffffff0023898();
  FUN_fffffffff0023874(0x98,(param_1 >> 0x1c) << 0x14 | 0x4000);
  FUN_fffffffff0025858(param_3,param_2,param_1 & 0x3ffffff);
  do {
    lVar3 = FUN_fffffffff0023860(0x90);
  } while (lVar3 != 0);
  FUN_fffffffff0023874(0x98,iVar1 << 0x14 | 8);
  FUN_fffffffff0023874(0x530,uVar2 >> 0x3f);
  return 0;
}


/* ---- sub_25234 @ fffffffff0025234 size=392 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 sub_25234(ulong param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uStack_48;
  
  uVar2 = 200;
  if ((param_2 != 0) && (uVar2 = 0, param_3 == 0)) {
    uVar2 = 200;
  }
  iVar1 = 99;
  do {
    iVar1 = iVar1 + -1;
    if (_DAT_2000000000030 == 0) {
      _DAT_20000000000d0 = _DAT_2000000000070 | 1;
      _DAT_2000000000098 = 0x2001;
      FUN_fffffffff0023a08(0x30270,_DAT_20000000004b0,1);
      uStack_48 = (uint)param_1;
      if ((uStack_48 & 0x60000000) == 0x60000000) {
        _DAT_2000000000390 = param_2;
        FUN_fffffffff0023a08(0x30200,param_2,1);
      }
      else {
        FUN_fffffffff0023a08(0x30200,param_2,1);
      }
      if ((uStack_48 & 0x300000) == 0x300000) {
        _DAT_2000000000390 = param_3;
        FUN_fffffffff0023a08(0x30208,param_3,1);
      }
      else {
        FUN_fffffffff0023a08(0x30208,param_3,1);
      }
      FUN_fffffffff0023a08(0x301e0,param_1 & 0xffffffff,0);
      FUN_fffffffff0023a08(0x30210,param_1 >> 0x20,0);
      return uVar2;
    }
  } while (iVar1 != 0);
  return 3;
}


/* ---- sub_253bc @ fffffffff00253bc size=88 ---- */

undefined8 sub_253bc(uint param_1,undefined8 param_2,undefined8 param_3)

{
  if ((param_1 & 0xe00) == 0x200) {
    FUN_fffffffff0024054(param_1 & 0x7f,param_1 >> 8 & 0xf,param_2,param_3,0,0);
    return 0;
  }
  return 100;
}


/* ---- sub_25414 @ fffffffff0025414 size=240 ---- */

undefined8 sub_25414(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = param_1 >> 8 & 0xf;
  if ((param_1 & 0xf00) == 0) {
    uVar1 = FUN_fffffffff0024054(param_1 & 0x7f,uVar2,param_2,param_3,0,0);
    *param_4 = uVar1;
    return 0;
  }
  if ((param_1 & 0xf00) != 0x100) {
    if ((param_1 & 0xe00) != 0x200) {
      return 100;
    }
    FUN_fffffffff0024054(param_1 & 0x7f,uVar2,param_2,param_3,0,0);
    return 0;
  }
  return 100;
}


/* ---- sub_25504 @ fffffffff0025504 size=268 ---- */

undefined8
sub_25504(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5
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
    uVar3 = FUN_fffffffff0024054(uVar2,uVar4,param_2,param_3,0,0);
    *param_5 = uVar3;
    return 0;
  }
  if ((uVar1 & 0xf00) != 0x100) {
    if ((uVar1 & 0xe00) != 0x200) {
      return 100;
    }
    FUN_fffffffff0024054(uVar2,uVar4,param_2,param_3,0,0);
    return 0;
  }
  uVar3 = FUN_fffffffff0024054(uVar2,uVar4,param_2,param_3,param_4,(param_1 << 0x27) >> 0x33);
  *param_5 = uVar3;
  return 0;
}


/* ---- sub_25610 @ fffffffff0025610 size=44 ---- */

undefined8 sub_25610(void)

{
  FUN_fffffffff0023a08(0x320e0,0,0);
  return 0;
}


/* ---- FUN_fffffffff002563c @ fffffffff002563c size=40 ---- */

long FUN_fffffffff002563c(void)

{
  ulong uVar1;
  
  uVar1 = FUN_fffffffff0024118();
  return ((long)~uVar1 >> 0x3f & 0xffffffffffffff9cU) + 100;
}


/* ---- FUN_fffffffff0025664 @ fffffffff0025664 size=48 ---- */

undefined8 FUN_fffffffff0025664(undefined8 param_1,int param_2)

{
  FUN_fffffffff00241dc
            ((long)((int)((ulong)param_1 >> 0x20) << 0xc),((uint)param_1 & 3) << 0x1c,(long)param_2)
  ;
  return 0;
}


/* ---- FUN_fffffffff0025694 @ fffffffff0025694 size=176 ---- */

undefined8 FUN_fffffffff0025694(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 1 << ((long)(int)(param_2 >> 3) & 0x18U | (long)(int)(param_2 >> 8) & 7U);
  uVar2 = FUN_fffffffff002391c(0x3f050,param_2 | 0x2008);
  if (param_1 == 1) {
    uVar2 = uVar2 | uVar1;
  }
  else {
    uVar2 = ~uVar1 & uVar2;
  }
  FUN_fffffffff00238b0(0x3f050,uVar2,param_2 | 0x2008);
  return 0;
}


/* ---- FUN_fffffffff0025744 @ fffffffff0025744 size=276 ---- */

undefined8 FUN_fffffffff0025744(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 1 << ((long)(int)(param_2 >> 3) & 0x18U | (long)(int)(param_2 >> 8) & 7U);
  uVar2 = FUN_fffffffff0023c80(0x3214c,0);
  param_2 = param_2 | 0x2008;
  uVar3 = FUN_fffffffff002391c(0xc3bc,param_2);
  if (param_1 == 1) {
    uVar2 = uVar2 | uVar1;
    uVar3 = uVar3 | 0x40;
  }
  else {
    uVar2 = ~uVar1 & uVar2;
    uVar3 = uVar3 & 0xffffffbf;
  }
  FUN_fffffffff0023a08(0x3214c,uVar2,0);
  FUN_fffffffff00238b0(0xc3bc,uVar3,param_2);
  FUN_fffffffff00238b0(0x3f058,uVar2,param_2);
  return 0;
}


/* ---- FUN_fffffffff0025858 @ fffffffff0025858 size=296 ---- */

void FUN_fffffffff0025858(undefined8 *param_1,undefined8 *param_2,ulong param_3)

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
LAB_fffffffff00258d8:
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
  else if (param_1 < puVar13) goto LAB_fffffffff00258d8;
  return;
}


/* ---- FUN_fffffffff0025980 @ fffffffff0025980 size=156 ---- */

void FUN_fffffffff0025980(ulong *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  uVar1 = 0xf;
  if (0xf < param_3) {
    uVar3 = (ulong)param_1 & 0xf;
    if (uVar3 != 0) {
      param_2 = (*(code *)(uVar3 * 4 + -0xffda634))();
      param_1 = (ulong *)((long)param_1 - (uVar3 - 0x10));
      param_3 = param_3 + (uVar3 - 0x10);
      if (param_3 <= uVar1) goto LAB_fffffffff00259bc;
    }
    if (param_2 != 0) {
      param_2 = param_2 & 0xff | (param_2 & 0xff) << 8;
      param_2 = param_2 | param_2 << 0x10;
      param_2 = param_2 | param_2 << 0x20;
    }
    uVar3 = param_3 & 0xfffffffffffffff0;
    param_3 = param_3 & 0xf;
    puVar2 = (ulong *)(uVar3 + (long)param_1);
    do {
      *param_1 = param_2;
      param_1[1] = param_2;
      param_1 = param_1 + 2;
    } while (param_1 < puVar2);
    if (param_3 == 0) {
      return;
    }
  }
LAB_fffffffff00259bc:
                    /* WARNING: Could not recover jumptable at 0xfffffffff00259cc. Too many branches
                        */
                    /* WARNING: Treating indirect jump as call */
  (*(sub_259d0 + (uVar1 - param_3) * 4))();
  return;
}


/* ---- sub_259d0 @ fffffffff00259d0 size=64 ---- */

void sub_259d0(undefined1 param_1,undefined1 *param_2)

{
  param_2[0xe] = param_1;
  param_2[0xd] = param_1;
  param_2[0xc] = param_1;
  param_2[0xb] = param_1;
  param_2[10] = param_1;
  param_2[9] = param_1;
  param_2[8] = param_1;
  param_2[7] = param_1;
  param_2[6] = param_1;
  param_2[5] = param_1;
  param_2[4] = param_1;
  param_2[3] = param_1;
  param_2[2] = param_1;
  param_2[1] = param_1;
  *param_2 = param_1;
  return;
}


/* ---- FUN_fffffffff0025a5c @ fffffffff0025a5c size=36 ---- */

long FUN_fffffffff0025a5c(long param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if ((param_2 & 1) != 0) {
      lVar1 = lVar1 + param_1;
    }
    param_2 = param_2 >> 1;
    param_1 = param_1 << 1;
  } while (param_2 != 0);
  return lVar1;
}


/* ---- sub_25a80 @ fffffffff0025a80 size=24 ---- */

long sub_25a80(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = FUN_fffffffff0025ac8(param_1 << 0x20,param_2 << 0x20);
                    /* WARNING: Treating indirect jump as return */
  return (long)iVar1;
}


/* ---- sub_25a98 @ fffffffff0025a98 size=32 ---- */

long sub_25a98(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_fffffffff0025ac8(param_1,param_2);
                    /* WARNING: Treating indirect jump as return */
  return (long)iVar1;
}


/* ---- sub_25ab8 @ fffffffff0025ab8 size=64 ---- */

ulong sub_25ab8(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if ((param_2 == 0xffffffffffffffff) && (param_1 == 0xffffffff80000000)) {
    return 0xffffffff80000000;
  }
  if ((long)param_1 < 0) {
    param_1 = -param_1;
    if ((long)param_2 < 1) {
      uVar1 = FUN_fffffffff0025ac8(param_1,-param_2);
      return uVar1;
    }
  }
  else {
    if (-1 < (long)param_2) {
      uVar1 = 0xffffffffffffffff;
      if (param_2 != 0) {
        uVar3 = 1;
        if (param_2 < param_1) {
          do {
            if ((long)param_2 < 1) break;
            param_2 = param_2 << 1;
            uVar3 = uVar3 << 1;
          } while (param_2 < param_1);
        }
        uVar1 = 0;
        do {
          if (param_2 <= param_1) {
            param_1 = param_1 - param_2;
            uVar1 = uVar1 | uVar3;
          }
          uVar3 = uVar3 >> 1;
          param_2 = param_2 >> 1;
        } while (uVar3 != 0);
      }
      return uVar1;
    }
    param_2 = -param_2;
  }
  lVar2 = FUN_fffffffff0025ac8(param_1,param_2);
                    /* WARNING: Treating indirect jump as return */
  return -lVar2;
}


/* ---- FUN_fffffffff0025ac8 @ fffffffff0025ac8 size=72 ---- */

ulong FUN_fffffffff0025ac8(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0xffffffffffffffff;
  if (param_2 != 0) {
    uVar2 = 1;
    if (param_2 < param_1) {
      do {
        if ((long)param_2 < 1) break;
        param_2 = param_2 << 1;
        uVar2 = uVar2 << 1;
      } while (param_2 < param_1);
    }
    uVar1 = 0;
    do {
      if (param_2 <= param_1) {
        param_1 = param_1 - param_2;
        uVar1 = uVar1 | uVar2;
      }
      uVar2 = uVar2 >> 1;
      param_2 = param_2 >> 1;
    } while (uVar2 != 0);
  }
  return uVar1;
}


/* ---- FUN_fffffffff0025b10 @ fffffffff0025b10 size=16 ---- */

undefined8 FUN_fffffffff0025b10(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_fffffffff0025ac8();
                    /* WARNING: Treating indirect jump as return */
  return uVar1;
}


/* ---- sub_25b44 @ fffffffff0025b44 size=48 ---- */

long sub_25b44(long param_1,long param_2)

{
  long lVar1;
  
  if (param_2 < 0) {
    param_2 = -param_2;
  }
  if (param_1 < 0) {
    lVar1 = FUN_fffffffff0025ac8(-param_1,param_2);
                    /* WARNING: Treating indirect jump as return */
    return -lVar1;
  }
  lVar1 = FUN_fffffffff0025ac8(param_2);
                    /* WARNING: Treating indirect jump as return */
  return lVar1;
}


/* ---- sub_25c70 @ fffffffff0025c70 size=4 ---- */

/* WARNING: Control flow encountered bad instruction data */

void sub_25c70(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


