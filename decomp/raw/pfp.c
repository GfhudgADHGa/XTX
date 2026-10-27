/* Decompiled by Ghidra RISCV:LE:64:RS64PFP - gc_11_0_0_pfp.image.bin */

/* ---- trap_handler @ 00001000 size=216 ---- */

/* WARNING: Removing unreachable block (ram,0x0000107c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void trap_handler(void)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar3 = Ram0002000000000304;
  if ((uVar3 & 0x1f) == 4) {
    lVar2 = Ram00020000000001f9;
    *(undefined4 *)(lVar2 + 0xc10) = 0;
    do {
      iVar4 = Ram0003000000008703;
    } while (iVar4 == 0);
    Ram0003000000008703 = 0;
    Ram00020000000001ff = 0;
    Ram0002000000000304 = 4;
    Ram00020000000003c1 = 0x10;
    if (in_mhartid == 0) {
      _DAT_10000000328f0 = 1;
    }
    else {
      _DAT_10000000328f4 = 1;
    }
    uVar1 = Ram000200000000000b;
    custom0();
    Ram0002000000000304 = 4;
    return;
  }
  Ram0002000000000304 = uVar3 & 0x1f;
  return;
}


/* ---- reset_entry @ 00003000 size=500 ---- */

/* WARNING: Removing unreachable block (ram,0x000031c0) */
/* WARNING: Removing unreachable block (ram,0x000030b8) */
/* WARNING: Removing unreachable block (ram,0x000031e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void reset_entry(void)

{
  long lVar1;
  undefined8 *puVar2;
  long in_mhartid;
  
  tp = 0x2000000000000;
  Ram0002000000000303 = 0x81;
  Ram0002000000000024 = 0;
  Ram00020000000000a1 = 0x880;
  Ram00020000000000b3 = 1;
  Ram00020000000000bb = 0xa50;
  _DAT_1000100000c10 = 0;
  Ram0002000000000320 = 1;
  if (in_mhartid == 0) {
    _DAT_1000100001f3c = 7;
    _DAT_1000100001f40 = 0x100000;
    _DAT_1000100001f44 = 0x21fff;
    _DAT_1000100001f48 = 7;
    _DAT_1000100001f4c = 0;
    _DAT_1000100001f50 = 0x41fff;
  }
  else {
    do {
      lVar1 = Ram000200000000031c;
    } while (lVar1 == 0);
  }
  _DAT_1000100000c14 = 0x400;
  uRam0001000100000c18 = 0;
  _DAT_1000100001f5c = 0;
  Ram0002000000000024 = 1;
  gp = 0x101800;
  puVar2 = &DAT_00101040;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  } while (puVar2 < &DAT_00101370);
  FUN_000098e8(in_mhartid);
  FUN_00009bc8(in_mhartid,_DAT_100010000c1c8);
  return;
}


/* ---- sub_031f4 @ 000031f4 size=4 ---- */

void sub_031f4(void)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  return;
}


/* ---- FUN_000031f8 @ 000031f8 size=112 ---- */

/* WARNING: Removing unreachable block (ram,0x00003210) */

void FUN_000031f8(uint param_1)

{
  uint uVar1;
  uint in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0002000000000067 = 1;
  do {
    Ram000100000000c60c = (in_mhartid & 3) << 0x1c | 0x80000001 | (param_1 >> 4 & 7 ^ 1) << 0x17;
    uVar1 = Ram000100000000c60c;
  } while ((uVar1 & 1) == 0);
  Ram000100000000c60c = 0;
  Ram0002000000000067 = 0;
  return;
}


/* ---- sub_03268 @ 00003268 size=636 ---- */

/* WARNING: Removing unreachable block (ram,0x00003278) */
/* WARNING: Removing unreachable block (ram,0x00003400) */

void sub_03268(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  iVar2 = Ram0002000000000042;
  uVar4 = (ulong)iVar2;
  if (uVar4 != 0) {
    if ((uVar4 >> 4 & 1) == (in_mhartid & 0xffffffff)) {
      if ((uVar4 >> 8 & 3) == 1) {
        Ram0002000000000000 = 0xc0004b00;
        Ram0002000000000000 = 1;
        Ram0002000000000000 = 0xc00f1000;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        do {
          uVar4 = Ram0002000000000314;
        } while ((0x400L << (in_mhartid & 0x3f) & uVar4) != 0);
        uVar3 = Ram0002000000000042;
        Ram0002000000000067 = 1;
        Ram000100000000c6f0 = uVar3 | 0x40000000;
        do {
          uVar3 = Ram0002000000000042;
        } while ((uVar3 & 0xc0000000) != 0x40000000);
      }
      else {
        uVar3 = Ram0002000000000042;
        if ((uVar3 & 0xc0000000) != 0x80000000) {
          gp = 0x101800;
          tp = 0x2000000000000;
          return;
        }
        Ram0002000000000000 = 0xc0004b00;
        Ram0002000000000000 = 1;
        Ram0002000000000000 = 0xc00f1000;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        do {
          uVar4 = Ram0002000000000314;
        } while ((0x400L << (in_mhartid & 0x3f) & uVar4) != 0);
        uVar3 = Ram0002000000000042;
        Ram0002000000000067 = 1;
        Ram000100000000c6f0 =
             (uint)((long)(int)(uVar3 >> 0x1f) << 0x1e) | 0x200 | uVar3 & 0xbfff00ff;
        do {
          uVar3 = Ram0002000000000042;
        } while ((uVar3 & 0xc0000000) != 0x40000000);
      }
      Ram000100000000c6f0 = 0;
      uVar1 = Ram000100000000c6f0;
      Ram0002000000000067 = 0;
      return;
    }
    do {
      uVar3 = Ram0002000000000042;
    } while ((uVar3 >> 8 & 3) == 0);
    if ((uVar3 >> 8 & 3) == 2) {
      Ram0002000000000000 = 0xc0004b00;
      Ram0002000000000000 = 1;
      Ram0002000000000000 = 0xc00f1000;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      do {
        uVar4 = Ram0002000000000314;
      } while ((0x400L << (in_mhartid & 0x3f) & uVar4) != 0);
      uVar3 = Ram0002000000000042;
      Ram0002000000000067 = 1;
      Ram000100000000c6f0 = uVar3 | 0x40000000;
      Ram0002000000000067 = 0;
      return;
    }
  }
  return;
}


/* ---- sub_034e8 @ 000034e8 size=1324 ---- */

/* WARNING: Removing unreachable block (ram,0x00003660) */
/* WARNING: Removing unreachable block (ram,0x00003678) */
/* WARNING: Removing unreachable block (ram,0x0000364c) */
/* WARNING: Removing unreachable block (ram,0x00003654) */
/* WARNING: Removing unreachable block (ram,0x00003740) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong sub_034e8(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar9 = Ram000100000000c6c8;
  if ((uVar9 & 0xc0000000) == 0xc0000000) {
    return ~((long)(int)uVar9 & 1U);
  }
  uVar1 = Ram000100000000c6ec;
  if ((uVar9 >> 1 & 1) == (uVar1 & 1)) {
    if ((uVar1 & 1) ==
        ((_DAT_100000003214c >> (long)(int)(((uint)param_1 >> 2 & 3) << 3)) >>
         ((long)(int)((uint)param_1 >> 4) & 7U) & 1)) {
      return 0;
    }
    uVar9 = Ram000100000000c6c8;
    if (((uVar9 >> 1 & 2) == 0) || ((uVar9 >> 8 & 2) == 0)) {
      if ((uVar9 & 1) != 0) {
        gp = 0x101800;
        tp = 0x2000000000000;
        return 0xfffffffffffffffe;
      }
      Ram000100000000c6c8 = 0x8000006b;
      uVar3 = Ram000100000000c6c8;
      uVar3 = Ram000100000000c6c8;
      uVar9 = Ram000100000000c6c8;
      if ((uVar9 & 0xa000006b) == 0xa000006b) {
        DAT_00101378 = Ram000100000000c164;
        iVar4 = Ram000100000000c6c8;
        if (((ulong)(long)iVar4 >> 0x1e & 1) == 0) {
          uVar9 = Ram00020000000000b1;
          while( true ) {
            if ((uVar9 & 0x10000) != 0) {
              uVar9 = Ram000100000000c2c0;
              lVar5 = Ram00020000000001fa;
              *(uint *)(&LAB_0000c3d8 + (param_1 << 0x24) + lVar5) = uVar9 & 0xff | 0x80000500;
              FUN_000031f8(param_1);
              return 0xfffffffffffffffe;
            }
            uVar9 = Ram000100000000c6c8;
            if ((uVar9 & 0x40000000) != 0) break;
            uVar9 = Ram00020000000000b1;
          }
        }
        uVar9 = Ram000100000000c6c8;
        uVar8 = Ram0002000000000015;
        uVar8 = uVar8 & 3;
        *(undefined4 *)(&TP_R041 + uVar8) = 1;
        do {
          lVar5 = Ram0002000000000013;
        } while (lVar5 != 0);
        uVar2 = Ram000100000000c6bc;
        if ((uVar2 >> 0xc & 3) == 0) {
          if ((uVar2 & 1) != 0) {
            Ram000100000000c6bc = 0;
          }
          *(undefined4 *)(&TP_R041 + uVar8) = *(undefined4 *)(&TP_R00B + uVar8);
          lVar5 = Ram00020000000001fa;
          *(uint *)(lVar5 + 0x100002e080) = uVar9 >> 8 & 1 | 0x80000000;
          do {
            lVar5 = Ram00020000000001fa;
          } while ((*(uint *)(lVar5 + 0x100002e080) & 0xc0000000) != 0xc0000000);
          Ram0002000000000000 = 0xc0004b00;
          Ram0002000000000000 = 1;
          Ram0002000000000000 = 0xc00f1000;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          uVar8 = 0x400L << (in_mhartid & 0x3f);
          do {
            uVar2 = Ram0002000000000314;
          } while ((uVar2 & uVar8) != 0);
          uVar9 = Ram0002000000000042;
          Ram000100000000c6f0 =
               uVar9 & 0x7fff0000 | uVar9 & 0xff | (~(uint)in_mhartid & 1) << 4 | 0x80000100;
          do {
            uVar9 = Ram0002000000000042;
          } while ((uVar9 & 0xc0000000) != 0xc0000000);
          Ram000100000000c6f0 = (uint)(((ulong)uVar9 << 0x21) >> 0x21);
          do {
            iVar4 = Ram0002000000000042;
          } while (iVar4 != 0);
          Ram0002000000000068 = 0;
          lVar5 = Ram00020000000001fa;
          lVar7 = Ram00020000000001fa;
          *(uint *)(lVar7 + 0x100002e080) =
               (uint)((ulong)((long)*(int *)(lVar5 + 0x100002e080) << 0x21) >> 0x21);
          do {
            lVar5 = Ram00020000000001fa;
          } while ((*(uint *)(lVar5 + 0x100002e080) & 0xc0000000) != 0);
          uVar9 = Ram000100000000c6c8;
          uVar9 = uVar9 >> 8 & 1;
          Ram0002000000000066 = uVar9 << 1 | uVar9;
          Ram0002000000000000 = 0xc0004b00;
          Ram0002000000000000 = 1;
          Ram0002000000000000 = 0xc00f1000;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          do {
            uVar2 = Ram0002000000000314;
          } while ((uVar8 & uVar2) != 0);
          Ram0002000000000000 = 0xc0000e00;
          Ram0002000000000000 = uVar9 << 0x10 | 0x2000e;
          Ram0002000000000000 = 0xc00f1000;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          do {
            uVar2 = Ram0002000000000314;
          } while ((uVar8 & uVar2) != 0);
          uVar6 = Ram00020000000000c0;
          uVar1 = 0;
          for (uVar8 = (ulong)(int)(uVar6 >> 0x11); uVar8 != 0; uVar8 = uVar8 >> 1) {
            uVar1 = uVar1 + 1;
            if ((uVar8 & 1) != 0) {
              uVar6 = Ram00020000000001f0;
              Ram000200000000001c = (ulong)uVar6;
              Ram00020000000000a5 = uVar1 | 0x100;
              uVar3 = Ram0002000000000314;
              Ram000100000000c6ec = 0;
            }
          }
          uVar1 = Ram00020000000001f0;
          Ram000200000000001c = (ulong)uVar1;
          Ram00020000000000a5 = 0;
          uVar3 = Ram0002000000000314;
          Ram000100000000c11c = uVar9;
          iVar4 = Ram000100000000c6c8;
          Ram000100000000c6c8 = (uint)((ulong)((long)iVar4 << 0x21) >> 0x21);
          uVar3 = Ram000100000000c6c8;
          return 0;
        }
        do {
        } while( true );
      }
      Ram000100000000c6c8 = 0;
      uVar3 = Ram000100000000c6c8;
    }
  }
  return 0xffffffffffffffff;
}


/* ---- sub_03a18 @ 00003a18 size=476 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_03a18(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  lVar5 = Ram00020000000001fa;
  lVar4 = (ulong)param_1 << 0x24;
  *(uint *)(&LAB_0000c348 + lVar5 + lVar4) = (param_1 >> 4 & 7 | 0x6000) << 0x10;
  uVar3 = Ram00020000000001fa;
  uVar1 = Ram000100000000c6c8;
  if ((int)uVar1 < 0) {
    lVar5 = Ram00020000000001fa;
  }
  else {
    if ((uVar1 & 1) != 0) {
      if (((uVar1 >> 1 & 2) == 0) || ((uVar1 >> 8 & 2) == 0)) {
        if ((uVar1 >> 8 & 1) != 0) {
          Ram000100000000c6c8 = 0x8000000d;
          uVar2 = Ram000100000000c6c8;
          uVar1 = Ram000100000000c6c8;
          if ((uVar1 & 0x8000000d) == 0x8000000d) {
            DAT_00101374 = 1;
            uVar1 = Ram000100000000c2c0;
            lVar5 = Ram00020000000001fa;
            *(uint *)(&LAB_0000c3d8 + lVar5 + lVar4) = uVar1 & 0xff | 0x80000500;
            FUN_000031f8();
            uVar1 = Ram00020000000000a9;
            if (((param_1 >> 4 & 7) == uVar1) &&
               (lVar5 = Ram00020000000001fa,
               ((long)*(int *)(&LAB_0000c348 + lVar5 + lVar4) + 0x1dU & 0x1f) < 0xd)) {
              Ram0002000000000099 = 7;
              DAT_00101370 = 1;
            }
          }
        }
      }
      else {
        Ram000100000000c164 = DAT_00101374;
        DAT_00101374 = 0;
        DAT_00101378 = 0;
        Ram000100000000c6c8 = 0;
        uVar2 = Ram000100000000c6c8;
      }
    }
    lVar5 = Ram00020000000001fa;
  }
  *(undefined4 *)(&LAB_0000c348 + lVar5 + lVar4) = 0x20000000;
  uVar3 = Ram00020000000001fa;
  return;
}


/* ---- pm4_OP_0E_handler @ 00003bf8 size=20344 ---- */

/* WARNING: Removing unreachable block (ram,0x00008788) */
/* WARNING: Removing unreachable block (ram,0x000074c0) */
/* WARNING: Removing unreachable block (ram,0x000074ac) */
/* WARNING: Removing unreachable block (ram,0x000068e8) */
/* WARNING: Removing unreachable block (ram,0x00008b20) */
/* WARNING: Removing unreachable block (ram,0x000089ac) */
/* WARNING: Removing unreachable block (ram,0x00007dbc) */
/* WARNING: Removing unreachable block (ram,0x00007da8) */
/* WARNING: Removing unreachable block (ram,0x000042f8) */
/* WARNING: Removing unreachable block (ram,0x00003ce4) */
/* WARNING: Removing unreachable block (ram,0x00007340) */
/* WARNING: Removing unreachable block (ram,0x00005a3c) */
/* WARNING: Removing unreachable block (ram,0x00005950) */
/* WARNING: Removing unreachable block (ram,0x00003fdc) */
/* WARNING: Removing unreachable block (ram,0x00005948) */
/* WARNING: Removing unreachable block (ram,0x00007338) */
/* WARNING: Removing unreachable block (ram,0x00004b4c) */
/* WARNING: Removing unreachable block (ram,0x0000498c) */
/* WARNING: Removing unreachable block (ram,0x00005864) */
/* WARNING: Removing unreachable block (ram,0x00005020) */
/* WARNING: Removing unreachable block (ram,0x00005680) */
/* WARNING: Removing unreachable block (ram,0x00004198) */
/* WARNING: Removing unreachable block (ram,0x00004170) */
/* WARNING: Removing unreachable block (ram,0x0000464c) */
/* WARNING: Removing unreachable block (ram,0x0000452c) */
/* WARNING: Removing unreachable block (ram,0x00005794) */
/* WARNING: Removing unreachable block (ram,0x00006e2c) */
/* WARNING: Removing unreachable block (ram,0x00006e34) */
/* WARNING: Removing unreachable block (ram,0x0000508c) */
/* WARNING: Removing unreachable block (ram,0x00004774) */
/* WARNING: Removing unreachable block (ram,0x0000694c) */
/* WARNING: Removing unreachable block (ram,0x00004940) */
/* WARNING: Removing unreachable block (ram,0x00003e3c) */
/* WARNING: Removing unreachable block (ram,0x00003db0) */
/* WARNING: Removing unreachable block (ram,0x00003ea0) */
/* WARNING: Removing unreachable block (ram,0x00003f90) */
/* WARNING: Removing unreachable block (ram,0x000074b4) */
/* WARNING: Removing unreachable block (ram,0x000075a4) */
/* WARNING: Removing unreachable block (ram,0x00008898) */
/* WARNING: Removing unreachable block (ram,0x00007414) */
/* WARNING: Removing unreachable block (ram,0x00006954) */
/* WARNING: Removing unreachable block (ram,0x00006e40) */
/* WARNING: Removing unreachable block (ram,0x00006f20) */
/* WARNING: Removing unreachable block (ram,0x00007db0) */
/* WARNING: Removing unreachable block (ram,0x00006410) */
/* WARNING: Removing unreachable block (ram,0x00007290) */
/* WARNING: Removing unreachable block (ram,0x00007ea0) */
/* WARNING: Removing unreachable block (ram,0x0000595c) */
/* WARNING: Removing unreachable block (ram,0x00003d74) */
/* WARNING: Removing unreachable block (ram,0x000044a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pm4_OP_0E_handler(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  int *piVar18;
  int *piVar19;
  uint *puVar20;
  uint *puVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  long lVar27;
  uint uVar28;
  int iVar29;
  ulong uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  ulong in_mhartid;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_48;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar32 = Ram0002000000000302;
  uVar14 = Ram0002000000000015;
  uVar14 = uVar14 & 3;
  uVar31 = *(uint *)(&TP_R00B + uVar14);
  *(undefined4 *)(&TP_R041 + uVar14) = 1;
  uVar24 = (uint)in_mhartid;
  switch(uVar32 & 0xff) {
  case 0:
    iVar29 = Ram0002000000000042;
    uVar15 = (ulong)iVar29;
    if (uVar15 != 0) {
      if ((uVar15 >> 4 & 1) == (in_mhartid & 0xffffffff)) {
        if ((uVar15 >> 8 & 3) == 1) {
          Ram0002000000000000 = 0xc0004b00;
          Ram0002000000000000 = 1;
          Ram0002000000000000 = 0xc00f1000;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          do {
            uVar15 = Ram0002000000000314;
          } while ((0x400L << (in_mhartid & 0x3f) & uVar15) != 0);
          uVar24 = Ram0002000000000042;
          Ram0002000000000067 = 1;
          Ram000100000000c6f0 = uVar24 | 0x40000000;
          do {
            uVar24 = Ram0002000000000042;
          } while ((uVar24 & 0xc0000000) != 0x40000000);
        }
        else {
          uVar24 = Ram0002000000000042;
          if ((uVar24 & 0xc0000000) != 0x80000000) break;
          Ram0002000000000000 = 0xc0004b00;
          Ram0002000000000000 = 1;
          Ram0002000000000000 = 0xc00f1000;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          do {
            uVar15 = Ram0002000000000314;
          } while ((0x400L << (in_mhartid & 0x3f) & uVar15) != 0);
          uVar24 = Ram0002000000000042;
          Ram0002000000000067 = 1;
          Ram000100000000c6f0 =
               (uint)((long)(int)(uVar24 >> 0x1f) << 0x1e) | 0x200 | uVar24 & 0xbfff00ff;
          do {
            uVar24 = Ram0002000000000042;
          } while ((uVar24 & 0xc0000000) != 0x40000000);
        }
        Ram000100000000c6f0 = 0;
        uVar4 = Ram000100000000c6f0;
        Ram0002000000000067 = 0;
      }
      else {
        do {
          uVar24 = Ram0002000000000042;
        } while ((uVar24 >> 8 & 3) == 0);
        if ((uVar24 >> 8 & 3) == 2) {
          Ram0002000000000000 = 0xc0004b00;
          Ram0002000000000000 = 1;
          Ram0002000000000000 = 0xc00f1000;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          do {
            uVar15 = Ram0002000000000314;
          } while ((0x400L << (in_mhartid & 0x3f) & uVar15) != 0);
          uVar24 = Ram0002000000000042;
          Ram0002000000000067 = 1;
          Ram000100000000c6f0 = uVar24 | 0x40000000;
          Ram0002000000000067 = 0;
        }
      }
    }
    break;
  default:
    if ((uVar32 & 0xff) == 4) goto LAB_00003c84;
    break;
  case 3:
    uVar10 = Ram000100000000c2cc;
    uVar15 = (ulong)(long)(int)uVar10 >> 0x10 & 0xff;
    if (uVar24 == 1) {
      uVar15 = (ulong)(int)(uVar10 >> 0x18);
    }
    Ram00020000000001fb = 0;
    if (uVar15 != 0) {
      Ram0002000000000000 = 0xc0004b00;
      Ram0002000000000000 = 1;
      Ram0002000000000000 = 0xc00f1000;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      do {
        uVar16 = Ram0002000000000314;
      } while ((0x400L << (in_mhartid & 0x3f) & uVar16) != 0);
      lVar7 = Ram00020000000001f9;
      uVar10 = *(uint *)(&LAB_0000c348 + lVar7);
      uVar28 = (uint)uVar15;
      if ((char)_DAT_100000002a628 < '\0') {
        lVar22 = Ram00020000000001fa;
        lVar8 = (((long)_DAT_100000002a628 & 7U) << 4 |
                ((long)_DAT_100000002a628 & 0xffU) >> 1 & 0xc |
                (long)(int)((uint)((long)_DAT_100000002a628 & 0xffU) >> 5) & 3U) << 0x24;
        lVar27 = Ram00020000000001fa;
        uVar15 = (in_mhartid & 3) << 2;
        lVar7 = 0;
        puVar9 = (undefined4 *)
                 (CONCAT44(*(undefined4 *)(&LAB_0000c828 + lVar27 + lVar8),
                           *(undefined4 *)(&LAB_0000c824 + lVar22 + lVar8)) +
                 (ulong)(uVar24 * 0x38) + 0x470);
        while( true ) {
          if ((uVar28 >> lVar7 & 1) != 0) {
            uVar15 = uVar15 & 0xffffffffffffff8f | (long)((int)lVar7 << 4);
            lVar22 = Ram00020000000001fa;
            uVar33 = Ram00020000000001f0;
            Ram000200000000001c = (ulong)uVar33;
            Ram00020000000000a5 = *(uint *)(&LAB_0000c3e8 + (uVar15 << 0x24) + lVar22) & 0xf | 0x100
            ;
            uVar4 = Ram0002000000000314;
            *puVar9 = 0;
            uVar33 = Ram00020000000001f0;
            Ram000200000000001c = (ulong)uVar33;
            Ram00020000000000a5 = 0;
            uVar4 = Ram0002000000000314;
          }
          if (lVar7 == 1) break;
          lVar7 = 1;
          puVar9 = puVar9 + 0x1c;
        }
      }
      uVar33 = Ram00020000000000a9;
      uVar16 = (ulong)(int)((uVar24 & 3) << 2);
      uVar15 = 0;
      while( true ) {
        if ((uVar28 >> uVar15 & 1) != 0) {
          uVar16 = uVar16 & 0xffffffffffffff8f | (long)(int)((uint)uVar15 << 4);
          lVar7 = Ram00020000000001fa;
          lVar22 = uVar16 << 0x24;
          if ((*(int *)(&LAB_0000c380 + lVar7 + lVar22) != 0) &&
             (((uVar10 & 0x1f) < 3 || (uVar33 != uVar15)))) {
            lVar7 = Ram00020000000001fa;
            *(uint *)(&LAB_0000c620 + lVar22 + lVar7) = (uint)uVar15 | 0x300;
            lVar7 = Ram00020000000001fa;
            lVar27 = Ram00020000000001fa;
            uVar34 = *(uint *)(&LAB_0000c3c4 + lVar22 + lVar27) &
                     (2 << ((long)*(int *)(&LAB_0000c3bc + lVar22 + lVar7) & 0x1fU)) - 1U;
            lVar7 = Ram00020000000001fa;
            *(uint *)(&LAB_0000c3b8 + lVar22 + lVar7) = uVar34;
            lVar7 = Ram00020000000001fa;
            *(uint *)(&LAB_0000c3c0 + lVar22 + lVar7) = uVar34;
            lVar7 = Ram00020000000001fa;
            uVar34 = Ram00020000000001f0;
            Ram000200000000001c = (ulong)uVar34;
            Ram00020000000000a5 = *(uint *)(&LAB_0000c3e8 + lVar22 + lVar7) & 0xf | 0x100;
            uVar4 = Ram0002000000000314;
            lVar7 = Ram00020000000001fa;
            lVar27 = Ram00020000000001fa;
            uVar4 = *(undefined4 *)(&LAB_0000c37c + lVar22 + lVar27);
            lVar8 = CONCAT44(uVar4,*(undefined4 *)(&LAB_0000c378 + lVar22 + lVar7));
            lVar27 = Ram00020000000001fa;
            uVar34 = *(uint *)(&LAB_0000c3e8 + lVar22 + lVar27);
            Ram0002000000000324 = uVar34 >> 0x18 & 3;
            *(undefined4 *)(lVar8 + 0x200) = *(undefined4 *)(&LAB_0000c378 + lVar22 + lVar7);
            *(undefined4 *)(lVar8 + 0x204) = uVar4;
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x208) = *(undefined4 *)(&LAB_0000c380 + lVar22 + lVar7);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x20c) = *(undefined4 *)(&LAB_0000c384 + lVar22 + lVar7);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x218) = *(undefined4 *)(&LAB_0000c390 + lVar22 + lVar7);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x21c) = *(undefined4 *)(&LAB_0000c394 + lVar22 + lVar7);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x220) = *(undefined4 *)(&LAB_0000c398 + lVar22 + lVar7);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x224) = *(undefined4 *)(&LAB_0000c39c + lVar22 + lVar7);
            *(undefined4 *)(lVar8 + 0x228) = 0;
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x22c) = *(undefined4 *)(&LAB_0000c3a4 + lVar22 + lVar7);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x230) = *(undefined4 *)(&LAB_0000c3a8 + lVar22 + lVar7);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x234) = *(undefined4 *)(&LAB_0000c3ac + lVar22 + lVar7);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x238) = *(undefined4 *)(&LAB_0000c3b0 + lVar22 + lVar7);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x23c) = *(undefined4 *)(&LAB_0000c3b4 + lVar22 + lVar7);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x240) = *(undefined4 *)(&LAB_0000c3b8 + lVar22 + lVar7);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x244) = *(undefined4 *)(&LAB_0000c3bc + lVar22 + lVar7);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x250) = *(undefined4 *)(&LAB_0000c3c0 + lVar22 + lVar7);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x254) = *(undefined4 *)(&LAB_0000c3c4 + lVar22 + lVar7);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 600) = *(undefined4 *)(&LAB_0000c3c8 + lVar22 + lVar7);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x270) = *(undefined4 *)(&LAB_0000c3d0 + lVar22 + lVar7);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x274) = *(undefined4 *)(&LAB_0000c3d4 + lVar22 + lVar7);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x280) = *(undefined4 *)(&LAB_0000c3e0 + lVar22 + lVar7);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x284) = *(undefined4 *)(&LAB_0000c3e4 + lVar22 + lVar7);
            *(uint *)(lVar8 + 0x288) = uVar34 & 0xffffefff;
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(&LAB_0000c3c4 + lVar22 + lVar7) = 0;
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(&LAB_0000c3c8 + lVar22 + lVar7) = 0;
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(&LAB_0000c3c0 + lVar22 + lVar7) = 0;
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(&LAB_0000c3a0 + lVar22 + lVar7) = 0;
            Ram0002000000000000 = 0xc0004b00;
            Ram0002000000000000 = 1;
            Ram0002000000000000 = 0xc00f1000;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            do {
              uVar12 = Ram0002000000000314;
            } while ((0x400L << (in_mhartid & 0x3f) & uVar12) != 0);
            do {
              iVar29 = Ram0002000000000012;
            } while (iVar29 != 0);
            *(undefined4 *)(lVar8 + 0x208) = 0;
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(&LAB_0000c380 + lVar22 + lVar7) = 0;
            uVar34 = Ram00020000000001f0;
            Ram000200000000001c = (ulong)uVar34;
            Ram00020000000000a5 = 0;
            uVar4 = Ram0002000000000314;
          }
        }
        if (uVar15 == 1) break;
        uVar15 = 1;
      }
      uVar15 = uVar16 & 0xffffffffffffff8f | (long)(int)((uVar33 & 7) << 4);
      if (((2 < (uVar10 & 0x1f)) &&
          (lVar7 = uVar15 << 0x24, (uVar28 >> ((long)(int)uVar33 & 0x1fU) & 1) != 0)) &&
         (lVar22 = Ram00020000000001fa, *(int *)(&LAB_0000c380 + lVar22 + lVar7) != 0)) {
        lVar22 = Ram00020000000001fa;
        *(undefined4 *)(&LAB_0000c3cc + lVar22 + lVar7) = 1;
      }
      lVar7 = Ram00020000000001fa;
      if (*(int *)(&LAB_0000c3cc + lVar7 + (uVar15 << 0x24)) == 1) {
        Ram00020000000001fb = 1;
      }
      else {
        Ram0002000000000030 = 1;
        do {
          uVar10 = Ram0002000000000020;
        } while ((uVar10 & 2) == 0);
        uVar10 = Ram000100000000c2cc;
        if (uVar10 != 0) {
          if (uVar24 == 1) {
            uStack_68 = uVar10 & 0xffffff;
          }
          else {
            uStack_68._3_1_ = (char)(uVar10 >> 0x18);
            uStack_68._0_3_ = (uint3)(ushort)uVar10;
          }
          if ((uStack_68._2_1_ == '\0') && (uStack_68._3_1_ == '\0')) {
            uStack_68 = 0;
          }
          Ram000100000000c2cc = uStack_68;
        }
        Ram0002000000000031 = 1;
      }
    }
    break;
  case 4:
    uVar16 = (long)(int)(uVar24 << 2) & 0xc;
    uVar12 = (long)(int)((uVar32 >> 0xc) << 4) & 0x70;
    uVar30 = uVar12 >> 4;
    Ram0003000000008709 = 0;
    uVar15 = uVar16 >> 2;
    Ram00020000000001ff = 0;
    lVar7 = Ram00020000000001fa;
    lVar22 = (uVar12 | uVar16) << 0x24;
    iVar29 = *(int *)(&LAB_0000c3b4 + lVar7 + lVar22);
    lVar7 = Ram00020000000001fa;
    if (*(int *)(&LAB_0000c380 + lVar7 + lVar22) == 0) {
      Ram0002000000000099 = 7;
      goto LAB_00003c84;
    }
    uVar28 = (uint)uVar30;
    Ram000200000000009a = uVar28;
    Ram0002000000000067 = 1;
    uVar10 = Ram000100000000c6c8;
    if ((uVar10 & 0xc0000000) == 0xc0000000) {
LAB_00004108:
      Ram0002000000000099 = 7;
      Ram0002000000000067 = 0;
      Ram0002000000000041 = uVar31;
      gp = 0x101800;
      tp = 0x2000000000000;
      return;
    }
    uVar33 = Ram000100000000c6ec;
    if ((uVar10 >> 1 & 1) != (uVar33 & 1)) goto LAB_00004108;
    if (((_DAT_100000003214c >> (long)((int)uVar15 << 3)) >> uVar30 & 1) != (uVar33 & 1)) {
      uVar10 = Ram000100000000c6c8;
      if ((((uVar10 >> 1 & 2) != 0) && ((uVar10 >> 8 & 2) != 0)) || ((uVar10 & 1) != 0))
      goto LAB_00004108;
      Ram000100000000c6c8 = 0x8000006b;
      uVar4 = Ram000100000000c6c8;
      uVar4 = Ram000100000000c6c8;
      uVar10 = Ram000100000000c6c8;
      if ((uVar10 & 0xa000006b) != 0xa000006b) {
        Ram000100000000c6c8 = 0;
        uVar4 = Ram000100000000c6c8;
        goto LAB_00004108;
      }
      DAT_00101378 = Ram000100000000c164;
      iVar13 = Ram000100000000c6c8;
      if (((ulong)(long)iVar13 >> 0x1e & 1) == 0) {
        uVar10 = Ram00020000000000b1;
        while ((uVar10 & 0x10000) == 0) {
          uVar10 = Ram000100000000c6c8;
          if ((uVar10 & 0x40000000) != 0) goto LAB_00005904;
          uVar10 = Ram00020000000000b1;
        }
        uVar32 = Ram000100000000c2c0;
        lVar7 = Ram00020000000001fa;
        *(uint *)(&LAB_0000c3d8 + lVar22 + lVar7) = uVar32 & 0xff | 0x80000500;
        Ram0002000000000067 = 1;
        do {
          Ram000100000000c60c = (uVar24 & 3) << 0x1c | 0x80000001 | (uVar28 ^ 1) << 0x17;
          uVar32 = Ram000100000000c60c;
        } while ((uVar32 & 1) == 0);
        Ram000100000000c60c = 0;
        Ram0002000000000067 = 0;
        goto LAB_00004108;
      }
LAB_00005904:
      uVar31 = Ram000100000000c6c8;
      uVar16 = Ram0002000000000015;
      uVar16 = uVar16 & 3;
      *(undefined4 *)(&TP_R041 + uVar16) = 1;
      do {
        lVar7 = Ram0002000000000013;
      } while (lVar7 != 0);
      uVar12 = Ram000100000000c6bc;
      if ((uVar12 >> 0xc & 3) != 0) {
        do {
        } while( true );
      }
      if ((uVar12 & 1) != 0) {
        Ram000100000000c6bc = 0;
      }
      *(undefined4 *)(&TP_R041 + uVar16) = *(undefined4 *)(&TP_R00B + uVar16);
      lVar7 = Ram00020000000001fa;
      *(uint *)(lVar7 + 0x100002e080) = uVar31 >> 8 & 1 | 0x80000000;
      do {
        lVar7 = Ram00020000000001fa;
      } while ((*(uint *)(lVar7 + 0x100002e080) & 0xc0000000) != 0xc0000000);
      Ram0002000000000000 = 0xc0004b00;
      Ram0002000000000000 = 1;
      Ram0002000000000000 = 0xc00f1000;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      uVar16 = 0x400L << (in_mhartid & 0x3f);
      do {
        uVar12 = Ram0002000000000314;
      } while ((uVar12 & uVar16) != 0);
      uVar31 = Ram0002000000000042;
      Ram000100000000c6f0 = uVar31 & 0x7fff0000 | uVar31 & 0xff | (~uVar24 & 1) << 4 | 0x80000100;
      do {
        uVar24 = Ram0002000000000042;
      } while ((uVar24 & 0xc0000000) != 0xc0000000);
      Ram000100000000c6f0 = (uint)(((ulong)uVar24 << 0x21) >> 0x21);
      do {
        iVar13 = Ram0002000000000042;
      } while (iVar13 != 0);
      Ram0002000000000068 = 0;
      lVar7 = Ram00020000000001fa;
      lVar22 = Ram00020000000001fa;
      *(uint *)(lVar22 + 0x100002e080) =
           (uint)((ulong)((long)*(int *)(lVar7 + 0x100002e080) << 0x21) >> 0x21);
      do {
        lVar7 = Ram00020000000001fa;
      } while ((*(uint *)(lVar7 + 0x100002e080) & 0xc0000000) != 0);
      uVar24 = Ram000100000000c6c8;
      uVar24 = uVar24 >> 8 & 1;
      Ram0002000000000066 = uVar24 << 1 | uVar24;
      Ram0002000000000000 = 0xc0004b00;
      Ram0002000000000000 = 1;
      Ram0002000000000000 = 0xc00f1000;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      do {
        uVar12 = Ram0002000000000314;
      } while ((uVar16 & uVar12) != 0);
      Ram0002000000000000 = 0xc0000e00;
      Ram0002000000000000 = uVar24 << 0x10 | 0x2000e;
      Ram0002000000000000 = 0xc00f1000;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      do {
        uVar12 = Ram0002000000000314;
      } while ((uVar16 & uVar12) != 0);
      uVar10 = Ram00020000000000c0;
      uVar31 = 0;
      for (uVar16 = (ulong)(int)(uVar10 >> 0x11); uVar16 != 0; uVar16 = uVar16 >> 1) {
        uVar31 = uVar31 + 1;
        if ((uVar16 & 1) != 0) {
          uVar10 = Ram00020000000001f0;
          Ram000200000000001c = (ulong)uVar10;
          Ram00020000000000a5 = uVar31 | 0x100;
          uVar4 = Ram0002000000000314;
          Ram000100000000c6ec = 0;
        }
      }
      uVar31 = Ram00020000000001f0;
      Ram000200000000001c = (ulong)uVar31;
      Ram00020000000000a5 = 0;
      uVar4 = Ram0002000000000314;
      Ram000100000000c11c = uVar24;
      iVar13 = Ram000100000000c6c8;
      Ram000100000000c6c8 = (uint)((ulong)((long)iVar13 << 0x21) >> 0x21);
      uVar4 = Ram000100000000c6c8;
    }
    uVar31 = uVar32 >> 0xf & 1;
    Ram0002000000000067 = 0;
    lVar7 = Ram00020000000001fa;
    lVar27 = (uVar15 << 2 | (long)(int)(uVar28 << 4)) << 0x24;
    uVar10 = *(uint *)(&LAB_0000c3e8 + lVar7 + lVar27) & 0xf | 0x100;
    uVar24 = Ram00020000000001f0;
    Ram000200000000001c = (ulong)uVar24;
    Ram00020000000000a5 = uVar10;
    uVar4 = Ram0002000000000314;
    lVar7 = Ram00020000000001fa;
    lVar22 = Ram00020000000001fa;
    if (*(int *)(&LAB_0000c37c + lVar22 + lVar27) == 0 &&
        *(int *)(&LAB_0000c378 + lVar7 + lVar27) == 0) {
      DAT_001013d0 = (undefined8 *)0x0;
      ebreak();
      DAT_001010bc = 0;
      DAT_00101040 = 0;
      DAT_00101048 = 0;
      DAT_00101050 = 0;
      DAT_00101058 = 0;
      DAT_00101060 = 0;
      Ram0002000000000021 = 0;
      Ram0002000000000022 = 0;
      Ram0003000000008701 = 0;
      Ram00020000000001ff = 0;
      return;
    }
    DAT_001013d0 = (undefined8 *)
                   CONCAT44(*(int *)(&LAB_0000c37c + lVar22 + lVar27),
                            *(int *)(&LAB_0000c378 + lVar7 + lVar27));
    uVar24 = *(uint *)((long)DAT_001013d0 + 0x1c);
    if (uVar24 == 0) {
      lVar7 = Ram00020000000001fa;
      uVar24 = *(uint *)(&LAB_0000c384 + lVar27 + lVar7);
    }
    Ram0003000000008707 = uVar24;
    Ram00020000000001ff = 0;
    lVar7 = Ram00020000000001fa;
    uVar4 = *(undefined4 *)(&LAB_0000c3bc + lVar27 + lVar7);
    Ram0002000000000073 = *DAT_001013d0;
    lVar7 = Ram0002000000000073;
    Ram0002000000000073 = DAT_001013d0[1];
    DAT_001013c0 = Ram0002000000000073;
    Ram0002000000000073 = DAT_001013d0[2];
    DAT_001013b8 = Ram0002000000000073;
    uVar24 = uVar24 | 0x100;
    DAT_001013c8 = lVar7;
    if (lVar7 == 0) {
      FUN_00008b70();
      uVar32 = uVar32 | 0x80000000;
      bVar6 = false;
      lVar22 = DAT_001013b8;
      uVar5 = DAT_001013c0;
    }
    else {
      bVar6 = true;
      lVar22 = DAT_001013b8;
      uVar5 = DAT_001013c0;
      if (*(int *)(DAT_001013d0 + 3) == 0) {
        uVar32 = uVar32 | 0x80000000;
        FUN_00008b70();
        uVar28 = Ram00020000000001f0;
        Ram000200000000001c = (ulong)uVar28;
        Ram00020000000000a5 = uVar24;
        uVar11 = Ram0002000000000314;
        iVar13 = 1;
        lVar22 = 0;
        piVar18 = &DAT_001000a0;
        while( true ) {
          if (iVar13 != 0) {
            iVar1 = *piVar18;
            lVar8 = (long)(iVar1 + -0x2c00);
            do {
              puVar9 = (undefined4 *)(lVar7 + ((ulong)(lVar8 << 0x20) >> 0x1e));
              if ((int)lVar8 + 0x2c00 == (&DAT_00100100)[lVar22 * 2]) {
                lVar23 = lVar22 * 2;
                lVar22 = lVar22 + 1;
                *puVar9 = (&DAT_00100104)[lVar23];
              }
              else {
                *puVar9 = 0;
              }
              lVar8 = (long)((int)lVar8 + 1);
            } while (iVar13 + -0x2c00 + iVar1 != lVar8);
          }
          if (piVar18 + 2 == &DAT_00100100) break;
          iVar13 = piVar18[3];
          piVar18 = piVar18 + 2;
        }
        iVar13 = 6;
        piVar18 = &DAT_00100110;
        while( true ) {
          if (iVar13 != 0) {
            iVar1 = *piVar18;
            lVar8 = (long)(iVar1 + -0x2c00);
            do {
              puVar9 = (undefined4 *)(lVar7 + ((ulong)(lVar8 << 0x20) >> 0x1e));
              if ((&DAT_00100100)[lVar22 * 2] == (int)lVar8 + 0x2c00) {
                lVar23 = lVar22 * 2;
                lVar22 = lVar22 + 1;
                *puVar9 = (&DAT_00100104)[lVar23];
              }
              else {
                *puVar9 = 0;
              }
              lVar8 = (long)((int)lVar8 + 1);
            } while (iVar13 + -0x2c00 + iVar1 != lVar8);
          }
          if (piVar18 + 2 == &DAT_00100158) break;
          iVar13 = piVar18[3];
          piVar18 = piVar18 + 2;
        }
        iVar13 = 6;
        lVar22 = 0;
        piVar18 = &DAT_00100158;
        do {
          if (iVar13 != 0) {
            lVar23 = (long)(*piVar18 + -0xa000);
            lVar8 = (long)(iVar13 + -0xa000 + *piVar18);
            do {
              while( true ) {
                iVar13 = (int)lVar23;
                puVar9 = (undefined4 *)(lVar7 + ((ulong)(lVar23 << 0x20) >> 0x1e) + 0x1000);
                if ((&DAT_00100330)[lVar22 * 2] != iVar13 + 0xa000) break;
                lVar2 = lVar22 * 2;
                lVar23 = (long)(iVar13 + 1);
                lVar22 = lVar22 + 1;
                *puVar9 = (&DAT_00100334)[lVar2];
                if (lVar8 == lVar23) goto LAB_00006d20;
              }
              *puVar9 = 0;
              lVar23 = (long)(iVar13 + 1);
            } while (lVar8 != lVar23);
          }
LAB_00006d20:
          if (piVar18 + 2 == &DAT_00100330) goto LAB_00006d30;
          iVar13 = piVar18[3];
          piVar18 = piVar18 + 2;
        } while( true );
      }
    }
    goto LAB_00005dc8;
  case 6:
    Ram0002000000000099 = 9;
    break;
  case 7:
    uVar15 = (long)(int)((uVar32 >> 0xc) << 4) & 0x70;
    iVar29 = 0;
    Ram000200000000004b = 0;
    lVar7 = Ram00020000000001fa;
    lVar22 = (uVar15 | (long)(int)(uVar24 << 2) & 0xcU) << 0x24;
    uVar10 = Ram00020000000001f0;
    Ram000200000000001c = (ulong)uVar10;
    Ram00020000000000a5 = *(uint *)(&LAB_0000c3e8 + lVar7 + lVar22) & 0xf | 0x100;
    uVar4 = Ram0002000000000314;
    lVar7 = Ram0002000000000036;
    if (lVar7 != 0) {
      Ram0002000000000083 = 0;
      Ram0002000000000000 = 0x410;
    }
    Ram0002000000000058 = 0;
    if (DAT_001013b8 != 0) {
      Ram0002000000000000 = 0xc0009400;
      Ram0002000000000000 = 0;
    }
    Ram0002000000000067 = 1;
    uVar10 = Ram000100000000c6c8;
    if ((uVar10 & 0x80000001) == 0x80000001) {
      if (((uVar10 >> 1 & 1) == 0) && (((int)(uVar10 >> 1 & 0x7f) >> 1 & 3U) == 0)) {
        Ram000100000000c6c8 = uVar10 & 0xffffff01 | 0xc;
        uVar4 = Ram000100000000c6c8;
      }
      uVar10 = Ram000100000000c2c0;
      lVar7 = Ram00020000000001fa;
      *(uint *)(&LAB_0000c3d8 + lVar22 + lVar7) = uVar10 & 0xff | 0x80000500;
      Ram0002000000000067 = 1;
      do {
        Ram000100000000c60c = (uVar24 & 3) << 0x1c | 0x80000001 | ((uint)(uVar15 >> 4) ^ 1) << 0x17;
        uVar10 = Ram000100000000c60c;
      } while ((uVar10 & 1) == 0);
LAB_00004688:
      Ram000100000000c60c = 0;
      Ram0002000000000067 = 0;
    }
    else if (((-1 < (int)uVar10) && ((uVar10 & 1) != 0)) && ((uVar10 >> 8 & 1) != 0)) {
      Ram000100000000c6c8 = 0x80000001;
      uVar4 = Ram000100000000c6c8;
      uVar10 = Ram000100000000c6c8;
      if ((uVar10 & 0x80000001) == 0x80000001) {
        iVar13 = Ram000100000000c6c8;
        if (((ulong)(long)iVar13 >> 0x1e & 1) == 0) {
          uVar10 = Ram000100000000c2c0;
          lVar7 = Ram00020000000001fa;
          *(uint *)(&LAB_0000c3d8 + lVar22 + lVar7) = uVar10 & 0xff | 0x80000500;
          Ram0002000000000067 = 1;
          do {
            Ram000100000000c60c =
                 (uVar24 & 3) << 0x1c | 0x80000001 | ((uint)(uVar15 >> 4) ^ 1) << 0x17;
            uVar10 = Ram000100000000c60c;
          } while ((uVar10 & 1) == 0);
          goto LAB_00004688;
        }
        uVar10 = Ram000100000000c6c8;
        uVar15 = Ram0002000000000015;
        uVar15 = uVar15 & 3;
        *(undefined4 *)(&TP_R041 + uVar15) = 1;
        do {
          lVar7 = Ram0002000000000013;
        } while (lVar7 != 0);
        uVar16 = Ram000100000000c6bc;
        if ((uVar16 >> 0xc & 3) != 0) {
          do {
          } while( true );
        }
        if ((uVar16 & 1) != 0) {
          Ram000100000000c6bc = 0;
        }
        *(undefined4 *)(&TP_R041 + uVar15) = *(undefined4 *)(&TP_R00B + uVar15);
        lVar7 = Ram00020000000001fa;
        *(uint *)(lVar7 + 0x100002e080) = uVar10 >> 8 & 1 | 0x80000000;
        do {
          lVar7 = Ram00020000000001fa;
        } while ((*(uint *)(lVar7 + 0x100002e080) & 0xc0000000) != 0xc0000000);
        Ram0002000000000000 = 0xc0004b00;
        Ram0002000000000000 = 1;
        Ram0002000000000000 = 0xc00f1000;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        uVar15 = 0x400L << (in_mhartid & 0x3f);
        do {
          uVar16 = Ram0002000000000314;
        } while ((uVar16 & uVar15) != 0);
        uVar10 = Ram0002000000000042;
        Ram000100000000c6f0 = uVar10 & 0x7fff0000 | uVar10 & 0xff | (~uVar24 & 1) << 4 | 0x80000100;
        do {
          uVar10 = Ram0002000000000042;
        } while ((uVar10 & 0xc0000000) != 0xc0000000);
        Ram000100000000c6f0 = (uint)(((ulong)uVar10 << 0x21) >> 0x21);
        do {
          iVar13 = Ram0002000000000042;
        } while (iVar13 != 0);
        Ram0002000000000068 = 0;
        lVar7 = Ram00020000000001fa;
        lVar27 = Ram00020000000001fa;
        *(uint *)(lVar27 + 0x100002e080) =
             (uint)((ulong)((long)*(int *)(lVar7 + 0x100002e080) << 0x21) >> 0x21);
        do {
          lVar7 = Ram00020000000001fa;
        } while ((*(uint *)(lVar7 + 0x100002e080) & 0xc0000000) != 0);
        uVar10 = Ram000100000000c6c8;
        uVar10 = uVar10 >> 8 & 1;
        Ram0002000000000066 = uVar10 << 1 | uVar10;
        Ram0002000000000000 = 0xc0004b00;
        Ram0002000000000000 = 1;
        Ram0002000000000000 = 0xc00f1000;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        do {
          uVar16 = Ram0002000000000314;
        } while ((uVar15 & uVar16) != 0);
        Ram0002000000000000 = 0xc0000e00;
        Ram0002000000000000 = uVar10 << 0x10 | 0x2000e;
        Ram0002000000000000 = 0xc00f1000;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        do {
          uVar16 = Ram0002000000000314;
        } while ((uVar15 & uVar16) != 0);
        uVar33 = Ram00020000000000c0;
        uVar28 = 0;
        for (uVar15 = (ulong)(int)(uVar33 >> 0x11); uVar15 != 0; uVar15 = uVar15 >> 1) {
          uVar28 = uVar28 + 1;
          if ((uVar15 & 1) != 0) {
            uVar33 = Ram00020000000001f0;
            Ram000200000000001c = (ulong)uVar33;
            Ram00020000000000a5 = uVar28 | 0x100;
            uVar4 = Ram0002000000000314;
            Ram000100000000c6ec = 0;
          }
        }
        uVar28 = Ram00020000000001f0;
        Ram000200000000001c = (ulong)uVar28;
        Ram00020000000000a5 = 0;
        uVar4 = Ram0002000000000314;
        Ram000100000000c11c = uVar10;
        Ram000100000000c6c8 = 0;
        uVar4 = Ram000100000000c6c8;
      }
    }
    puVar26 = DAT_001013d0;
    Ram0002000000000067 = 0;
    lVar7 = Ram00020000000001fa;
    uVar10 = Ram00020000000001f0;
    Ram000200000000001c = (ulong)uVar10;
    Ram00020000000000a5 = *(uint *)(&LAB_0000c3e8 + lVar22 + lVar7) & 0xf | 0x100;
    uVar4 = Ram0002000000000314;
    iVar13 = DAT_00101060._4_4_;
    if ((DAT_00101060._4_4_ == 1) || ((int)DAT_00101060 != 0)) {
      iVar29 = *(int *)((long)DAT_001013d0 + 0x454);
      iVar1 = Ram00020000000000a9;
      uVar4 = Ram0003000000008616;
      lVar7 = Ram00020000000001fa;
      lVar27 = ((long)(int)(uVar24 << 2) & 0xcU | (long)(iVar1 << 4) & 0x70U) << 0x24;
      *(undefined4 *)(&LAB_0000c3b8 + lVar7 + lVar27) = uVar4;
      uVar4 = Ram0003000000008616;
      lVar7 = Ram00020000000001fa;
      *(undefined4 *)(&LAB_0000c3c0 + lVar7 + lVar27) = uVar4;
      uVar5 = Ram00020000000001fa;
      DAT_00101060 = (ulong)DAT_00101060._4_4_ << 0x20;
    }
    iVar1 = Ram0002000000000039;
    DAT_00101068 = Ram000200000000001a;
    DAT_00101070 = Ram000200000000001b;
    DAT_00101080 = Ram0002000000000018;
    Ram0002000000000000 = 0xc00f1000;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    do {
      uVar15 = Ram0002000000000314;
    } while ((0x400L << (in_mhartid & 0x3f) & uVar15) != 0);
    iVar3 = Ram0003000000008705;
    DAT_001010bc = (uint)((ulong)((long)(int)DAT_001010bc << 0x21) >> 0x21) & 0xfc000000 |
                   iVar1 << 0x1f | (uint)((ulong)((long)iVar3 << 0x26) >> 0x26);
    if (iVar13 == 1) {
      *(int *)((long)puVar26 + 0x454) = iVar29 + 1;
    }
    else {
      DAT_00101040 = DAT_00101040 & 0xffffffff00000000;
    }
    puVar25 = &DAT_00101040;
    puVar17 = puVar26 + 0x10;
    do {
      uVar5 = *puVar25;
      puVar25 = puVar25 + 1;
      *puVar17 = uVar5;
      puVar17 = puVar17 + 1;
    } while (puVar25 != &DAT_00101068);
    lVar7 = Ram00020000000001f4;
    if (lVar7 != 0) {
      _DAT_00101098 = Ram00020000000001f6;
      DAT_001010a0 = Ram00020000000001f7;
      DAT_001010a8 = Ram00020000000001f8;
      DAT_00101090 = lVar7;
    }
    if (_DAT_300000000068e != 0) {
      puVar26[0x3a] = _DAT_300000000068e;
      *(undefined4 *)(puVar26 + 0x3b) = _DAT_300000000068f;
    }
    if (DAT_001013b8 != 0) {
      uVar10 = Ram0003000000008707;
      uVar24 = Ram00020000000001f0;
      Ram000200000000001c = (ulong)uVar24;
      Ram00020000000000a5 = uVar10 | 0x100;
      uVar4 = Ram0002000000000314;
      puVar26 = &DAT_00101068;
      lVar7 = DAT_001013b8 + -0x100e84;
      do {
        uVar5 = *puVar26;
        puVar17 = (undefined8 *)(lVar7 + (long)puVar26);
        puVar26 = puVar26 + 1;
        *puVar17 = uVar5;
      } while (puVar26 != &DAT_001010c0);
    }
    FUN_00008b70();
    uVar24 = Ram000100000000c68c;
    Ram000100000000c68c = uVar24 & 2;
    Ram0001000000030234 = 0;
    uVar24 = Ram00020000000001f0;
    Ram000200000000001c = (ulong)uVar24;
    Ram00020000000000a5 = 0;
    uVar4 = Ram0002000000000314;
    Ram000200000000004f = 0;
    lVar7 = Ram00020000000001fa;
    if ((*(uint *)(&LAB_0000c3e0 + lVar22 + lVar7) >> 0x14 & 1) != 0) {
      lVar23 = Ram00020000000001fa;
      lVar8 = Ram00020000000000a9;
      lVar27 = Ram0002000000000023;
      if ((int)in_mhartid == 0) {
        uVar24 = 0x8000000;
        uVar4 = 0xb;
      }
      else {
        uVar24 = 0x10000000;
        uVar4 = 0xc;
      }
      Ram00020000000000a6 = uVar4;
      uVar10 = Ram0002000000000021;
      do {
        if ((uVar10 & uVar24) != 0) goto LAB_00006994;
        uVar10 = Ram0002000000000021;
        lVar2 = Ram0002000000000074;
      } while (lVar2 == 0);
    }
    goto LAB_000048d4;
  case 8:
    uVar15 = (long)(int)((uVar32 >> 0xc) << 4) & 0x70;
    uVar16 = uVar15 | (long)(int)(uVar24 << 2) & 0xcU;
    lVar7 = Ram00020000000001fa;
    lVar22 = uVar16 << 0x24;
    *(undefined4 *)(&LAB_0000c3d8 + lVar7 + lVar22) = 0;
    Ram0002000000000067 = 1;
    uVar10 = (uint)uVar16 >> 4;
    lVar7 = Ram00020000000001fa;
    *(uint *)(&LAB_0000c348 + lVar7 + lVar22) = ((uint)(uVar15 >> 4) | 0x6000) << 0x10;
    uVar5 = Ram00020000000001fa;
    uVar28 = Ram000100000000c6c8;
    if ((uVar28 & 0x80000001) == 0x80000001) {
      if (((uVar28 >> 1 & 1) == 0) && (((int)(uVar28 >> 1 & 0x7f) >> 1 & 3U) == 0)) {
        Ram000100000000c6c8 = uVar28 & 0xffffff01 | 0xc;
        uVar4 = Ram000100000000c6c8;
      }
      uVar28 = Ram000100000000c2c0;
      DAT_0010137c = 1;
      lVar7 = Ram00020000000001fa;
      *(uint *)(&LAB_0000c3d8 + lVar7 + lVar22) = uVar28 & 0xff | 0x80000400;
      Ram0002000000000067 = 1;
      do {
        Ram000100000000c60c = (uVar24 & 3) << 0x1c | 0x80000001 | (uVar10 ^ 1) << 0x17;
        uVar28 = Ram000100000000c60c;
      } while ((uVar28 & 1) == 0);
LAB_00004ad8:
      Ram000100000000c60c = 0;
      Ram0002000000000067 = 0;
    }
    else if (((-1 < (int)uVar28) && ((uVar28 & 1) != 0)) && ((uVar28 >> 8 & 1) != 0)) {
      Ram000100000000c6c8 = 0x8000000d;
      uVar4 = Ram000100000000c6c8;
      uVar28 = Ram000100000000c6c8;
      if ((uVar28 & 0x8000000d) == 0x8000000d) {
        uVar4 = Ram000100000000c6c8;
        uVar28 = Ram000100000000c2c0;
        DAT_0010137c = 1;
        lVar7 = Ram00020000000001fa;
        *(uint *)(&LAB_0000c3d8 + lVar7 + lVar22) = uVar28 & 0xff | 0x80000400;
        Ram0002000000000067 = 1;
        do {
          Ram000100000000c60c =
               (uVar24 & 3) << 0x1c | 0x80000001 | ((uint)(uVar15 >> 4) ^ 1) << 0x17;
          uVar28 = Ram000100000000c60c;
        } while ((uVar28 & 1) == 0);
        goto LAB_00004ad8;
      }
    }
    uVar28 = Ram000100000000c6c8;
    lVar7 = Ram00020000000001fa;
    *(undefined4 *)(&LAB_0000c348 + lVar7 + lVar22) = 0x20000000;
    uVar5 = Ram00020000000001fa;
    Ram0002000000000067 = 0;
    if (((uVar28 & 1) == 0) || (DAT_0010137c == 0)) {
      lVar7 = Ram00020000000001fa;
      if (*(int *)(&LAB_0000c380 + lVar22 + lVar7) != 0) {
        uVar28 = Ram000100000000c2cc;
        uVar15 = (ulong)(long)(int)uVar28 >> 0x10 & 0xff;
        if ((long)(int)uVar24 == 1) {
          uVar15 = (ulong)(int)(uVar28 >> 0x18);
        }
        lVar7 = Ram00020000000001fa;
        *(uint *)(&LAB_0000c620 + lVar22 + lVar7) = uVar10 | 0x300;
        uVar16 = 0x400L << ((long)(int)uVar24 & 0x3fU);
        if ((uVar15 != 0) && (iVar29 = Ram00020000000001fb, iVar29 != 0)) {
          Ram0002000000000000 = 0xc0004b00;
          Ram0002000000000000 = 1;
          Ram0002000000000000 = 0xc00f1000;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          do {
            uVar15 = Ram0002000000000314;
          } while ((uVar16 & uVar15) != 0);
          lVar7 = Ram00020000000001fa;
          lVar27 = Ram00020000000001fa;
          uVar10 = *(uint *)(&LAB_0000c3c4 + lVar22 + lVar27) &
                   (2 << ((long)*(int *)(&LAB_0000c3bc + lVar22 + lVar7) & 0x1fU)) - 1U;
          lVar7 = Ram00020000000001fa;
          *(uint *)(&LAB_0000c3b8 + lVar22 + lVar7) = uVar10;
          lVar7 = Ram00020000000001fa;
          *(uint *)(&LAB_0000c3c0 + lVar22 + lVar7) = uVar10;
        }
        lVar7 = Ram00020000000001fa;
        uVar10 = Ram00020000000001f0;
        Ram000200000000001c = (ulong)uVar10;
        Ram00020000000000a5 = *(uint *)(&LAB_0000c3e8 + lVar22 + lVar7) & 0xf | 0x100;
        uVar4 = Ram0002000000000314;
        lVar7 = Ram00020000000001fa;
        lVar27 = Ram00020000000001fa;
        uVar4 = *(undefined4 *)(&LAB_0000c37c + lVar22 + lVar27);
        lVar8 = CONCAT44(uVar4,*(undefined4 *)(&LAB_0000c378 + lVar22 + lVar7));
        lVar27 = Ram00020000000001fa;
        uVar10 = *(uint *)(&LAB_0000c3e8 + lVar22 + lVar27);
        Ram0002000000000324 = uVar10 >> 0x18 & 3;
        *(undefined4 *)(lVar8 + 0x200) = *(undefined4 *)(&LAB_0000c378 + lVar22 + lVar7);
        *(undefined4 *)(lVar8 + 0x204) = uVar4;
        lVar7 = Ram00020000000001fa;
        *(undefined4 *)(lVar8 + 0x208) = *(undefined4 *)(&LAB_0000c380 + lVar22 + lVar7);
        lVar7 = Ram00020000000001fa;
        *(undefined4 *)(lVar8 + 0x20c) = *(undefined4 *)(&LAB_0000c384 + lVar22 + lVar7);
        lVar7 = Ram00020000000001fa;
        *(undefined4 *)(lVar8 + 0x218) = *(undefined4 *)(&LAB_0000c390 + lVar22 + lVar7);
        lVar7 = Ram00020000000001fa;
        *(undefined4 *)(lVar8 + 0x21c) = *(undefined4 *)(&LAB_0000c394 + lVar22 + lVar7);
        lVar7 = Ram00020000000001fa;
        *(undefined4 *)(lVar8 + 0x220) = *(undefined4 *)(&LAB_0000c398 + lVar22 + lVar7);
        lVar7 = Ram00020000000001fa;
        *(undefined4 *)(lVar8 + 0x224) = *(undefined4 *)(&LAB_0000c39c + lVar22 + lVar7);
        *(undefined4 *)(lVar8 + 0x228) = 0;
        lVar7 = Ram00020000000001fa;
        *(undefined4 *)(lVar8 + 0x22c) = *(undefined4 *)(&LAB_0000c3a4 + lVar22 + lVar7);
        lVar7 = Ram00020000000001fa;
        *(undefined4 *)(lVar8 + 0x230) = *(undefined4 *)(&LAB_0000c3a8 + lVar22 + lVar7);
        lVar7 = Ram00020000000001fa;
        *(undefined4 *)(lVar8 + 0x234) = *(undefined4 *)(&LAB_0000c3ac + lVar22 + lVar7);
        lVar7 = Ram00020000000001fa;
        *(undefined4 *)(lVar8 + 0x238) = *(undefined4 *)(&LAB_0000c3b0 + lVar22 + lVar7);
        lVar7 = Ram00020000000001fa;
        *(undefined4 *)(lVar8 + 0x23c) = *(undefined4 *)(&LAB_0000c3b4 + lVar22 + lVar7);
        lVar7 = Ram00020000000001fa;
        *(undefined4 *)(lVar8 + 0x240) = *(undefined4 *)(&LAB_0000c3b8 + lVar22 + lVar7);
        lVar7 = Ram00020000000001fa;
        *(undefined4 *)(lVar8 + 0x244) = *(undefined4 *)(&LAB_0000c3bc + lVar22 + lVar7);
        lVar7 = Ram00020000000001fa;
        *(undefined4 *)(lVar8 + 0x250) = *(undefined4 *)(&LAB_0000c3c0 + lVar22 + lVar7);
        lVar7 = Ram00020000000001fa;
        *(undefined4 *)(lVar8 + 0x254) = *(undefined4 *)(&LAB_0000c3c4 + lVar22 + lVar7);
        lVar7 = Ram00020000000001fa;
        *(undefined4 *)(lVar8 + 600) = *(undefined4 *)(&LAB_0000c3c8 + lVar22 + lVar7);
        lVar7 = Ram00020000000001fa;
        *(undefined4 *)(lVar8 + 0x270) = *(undefined4 *)(&LAB_0000c3d0 + lVar22 + lVar7);
        lVar7 = Ram00020000000001fa;
        *(undefined4 *)(lVar8 + 0x274) = *(undefined4 *)(&LAB_0000c3d4 + lVar22 + lVar7);
        lVar7 = Ram00020000000001fa;
        *(undefined4 *)(lVar8 + 0x280) = *(undefined4 *)(&LAB_0000c3e0 + lVar22 + lVar7);
        lVar7 = Ram00020000000001fa;
        *(undefined4 *)(lVar8 + 0x284) = *(undefined4 *)(&LAB_0000c3e4 + lVar22 + lVar7);
        *(uint *)(lVar8 + 0x288) = uVar10 & 0xffffefff;
        lVar7 = Ram00020000000001fa;
        *(undefined4 *)(&LAB_0000c3c4 + lVar22 + lVar7) = 0;
        lVar7 = Ram00020000000001fa;
        *(undefined4 *)(&LAB_0000c3c8 + lVar22 + lVar7) = 0;
        lVar7 = Ram00020000000001fa;
        *(undefined4 *)(&LAB_0000c3c0 + lVar22 + lVar7) = 0;
        lVar7 = Ram00020000000001fa;
        *(undefined4 *)(&LAB_0000c3a0 + lVar22 + lVar7) = 0;
        Ram0002000000000000 = 0xc0004b00;
        Ram0002000000000000 = 1;
        Ram0002000000000000 = 0xc00f1000;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        do {
          uVar15 = Ram0002000000000314;
        } while ((uVar16 & uVar15) != 0);
        do {
          iVar29 = Ram0002000000000012;
        } while (iVar29 != 0);
        *(undefined4 *)(lVar8 + 0x208) = 0;
        lVar7 = Ram00020000000001fa;
        *(undefined4 *)(&LAB_0000c380 + lVar22 + lVar7) = 0;
        uVar10 = Ram00020000000001f0;
        Ram000200000000001c = (ulong)uVar10;
        Ram00020000000000a5 = 0;
        uVar4 = Ram0002000000000314;
      }
      lVar7 = Ram00020000000001fa;
      *(undefined4 *)(&LAB_0000c3cc + lVar22 + lVar7) = 0;
      iVar29 = Ram00020000000001fb;
      if (iVar29 != 0) {
        Ram0002000000000030 = 1;
        do {
          uVar10 = Ram0002000000000020;
        } while ((uVar10 & 2) == 0);
        uVar10 = Ram000100000000c2cc;
        if (uVar10 != 0) {
          if (uVar24 == 1) {
            uStack_60 = uVar10 & 0xffffff;
          }
          else {
            uStack_60._3_1_ = (char)(uVar10 >> 0x18);
            uStack_60._0_3_ = (uint3)(ushort)uVar10;
          }
          if ((uStack_60._2_1_ == '\0') && (uStack_60._3_1_ == '\0')) {
            uStack_60 = 0;
          }
          Ram000100000000c2cc = uStack_60;
        }
LAB_00005058:
        Ram0002000000000031 = 1;
        Ram00020000000001fb = 0;
      }
    }
    break;
  case 10:
    if (uVar14 == 0) {
      Ram0002000000000000 = 0xc00f1000;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      do {
        uVar15 = Ram0002000000000314;
      } while ((0x400L << (in_mhartid & 0x3f) & uVar15) != 0);
      Ram0002000000000099 = 10;
    }
    else {
      DAT_00101380 = 1;
    }
    break;
  case 0xd:
    uVar15 = (long)(int)((uVar32 >> 0xc) << 4) & 0x70;
    Ram0002000000000067 = 1;
    uVar16 = uVar15 >> 4;
    uVar10 = (uint)uVar16;
    lVar7 = Ram00020000000001fa;
    lVar22 = (uVar15 | (long)(int)(uVar24 << 2) & 0xcU) << 0x24;
    *(uint *)(&LAB_0000c348 + lVar7 + lVar22) = (uVar10 | 0x6000) << 0x10;
    uVar5 = Ram00020000000001fa;
    uVar28 = Ram000100000000c6c8;
    if ((int)uVar28 < 0) {
      lVar7 = Ram00020000000001fa;
      *(undefined4 *)(&LAB_0000c348 + lVar22 + lVar7) = 0x20000000;
      uVar5 = Ram00020000000001fa;
      Ram0002000000000067 = 0;
    }
    else {
      if ((uVar28 & 1) != 0) {
        if (((uVar28 >> 1 & 2) == 0) || ((uVar28 >> 8 & 2) == 0)) {
          if ((uVar28 >> 8 & 1) != 0) {
            Ram000100000000c6c8 = 0x8000000d;
            uVar4 = Ram000100000000c6c8;
            uVar28 = Ram000100000000c6c8;
            if ((uVar28 & 0x8000000d) == 0x8000000d) {
              DAT_00101374 = 1;
              uVar28 = Ram000100000000c2c0;
              lVar7 = Ram00020000000001fa;
              *(uint *)(&LAB_0000c3d8 + lVar7 + lVar22) = uVar28 & 0xff | 0x80000500;
              Ram0002000000000067 = 1;
              do {
                Ram000100000000c60c = (uVar24 & 3) << 0x1c | 0x80000001 | (uVar10 ^ 1) << 0x17;
                uVar28 = Ram000100000000c60c;
              } while ((uVar28 & 1) == 0);
              Ram000100000000c60c = 0;
              Ram0002000000000067 = 0;
              iVar29 = Ram00020000000000a9;
              if (((long)iVar29 == uVar16) &&
                 (lVar7 = Ram00020000000001fa,
                 ((long)*(int *)(&LAB_0000c348 + lVar7 + lVar22) + 0x1dU & 0x1f) < 0xd)) {
                Ram0002000000000099 = 7;
                DAT_00101370 = 1;
              }
            }
          }
        }
        else {
          Ram000100000000c164 = DAT_00101374;
          DAT_00101374 = 0;
          DAT_00101378 = 0;
          Ram000100000000c6c8 = 0;
          uVar4 = Ram000100000000c6c8;
        }
      }
      lVar7 = Ram00020000000001fa;
      *(undefined4 *)(&LAB_0000c348 + lVar22 + lVar7) = 0x20000000;
      uVar5 = Ram00020000000001fa;
LAB_00004294:
      Ram0002000000000067 = 0;
    }
    break;
  case 0xe:
    Ram0002000000000067 = 1;
    uVar24 = Ram000100000000c6c8;
    if (((((uVar24 & 0x80000001) == 0x80000001) || ((int)uVar24 < 0)) || ((uVar24 & 1) == 0)) ||
       ((uVar24 >> 8 & 1) == 0)) goto LAB_00004294;
    Ram000100000000c6c8 = 0x80000001;
    uVar4 = Ram000100000000c6c8;
    uVar4 = Ram000100000000c6c8;
    Ram0002000000000067 = 0;
    break;
  case 0x11:
    uVar15 = (long)(int)((uVar32 >> 0xc) << 4) & 0x70;
    uVar16 = uVar15 | (long)(int)(uVar24 << 2) & 0xcU;
    uVar4 = Ram00020000000000a9;
    uVar5 = Ram000200000000000b;
    uVar10 = (uint)uVar16 >> 4;
    uVar33 = (uint)(uVar15 >> 4);
    Ram000200000000009a = uVar33;
    uVar28 = Ram000100000000c3d8;
    uVar5 = Ram000200000000000b;
    Ram000200000000009a = uVar4;
    if ((int)uVar28 < 0) {
      uVar28 = uVar28 >> 8 & 7;
      if (uVar28 == 4) {
        Ram0002000000000067 = 1;
        iVar29 = (uVar33 | 0x6000) << 0x10;
        lVar7 = Ram00020000000001fa;
        lVar22 = uVar16 << 0x24;
        *(int *)(&LAB_0000c348 + lVar7 + lVar22) = iVar29;
        uVar5 = Ram00020000000001fa;
        uVar28 = Ram000100000000c6c8;
        lVar7 = Ram00020000000001fa;
        *(undefined4 *)(&LAB_0000c348 + lVar7 + lVar22) = 0x20000000;
        uVar5 = Ram00020000000001fa;
        Ram0002000000000067 = 0;
        if (((uVar28 & 1) == 0) || (DAT_0010137c == 0)) {
          lVar7 = Ram00020000000001fa;
          if (*(int *)(&LAB_0000c380 + lVar7 + lVar22) != 0) {
            uVar28 = Ram000100000000c2cc;
            uVar15 = (ulong)(long)(int)uVar28 >> 0x10 & 0xff;
            if ((long)(int)uVar24 == 1) {
              uVar15 = (ulong)(int)(uVar28 >> 0x18);
            }
            lVar7 = Ram00020000000001fa;
            *(uint *)(&LAB_0000c620 + lVar7 + lVar22) = uVar10 | 0x300;
            uVar16 = 0x400L << ((long)(int)uVar24 & 0x3fU);
            if ((uVar15 != 0) && (iVar29 = Ram00020000000001fb, iVar29 != 0)) {
              Ram0002000000000000 = 0xc0004b00;
              Ram0002000000000000 = 1;
              Ram0002000000000000 = 0xc00f1000;
              Ram0002000000000000 = 0;
              Ram0002000000000000 = 0;
              Ram0002000000000000 = 0;
              Ram0002000000000000 = 0;
              Ram0002000000000000 = 0;
              Ram0002000000000000 = 0;
              Ram0002000000000000 = 0;
              Ram0002000000000000 = 0;
              Ram0002000000000000 = 0;
              Ram0002000000000000 = 0;
              Ram0002000000000000 = 0;
              Ram0002000000000000 = 0;
              Ram0002000000000000 = 0;
              Ram0002000000000000 = 0;
              Ram0002000000000000 = 0;
              Ram0002000000000000 = 0;
              do {
                uVar15 = Ram0002000000000314;
              } while ((uVar15 & uVar16) != 0);
              lVar7 = Ram00020000000001fa;
              lVar27 = Ram00020000000001fa;
              uVar10 = *(uint *)(&LAB_0000c3c4 + lVar27 + lVar22) &
                       (2 << ((long)*(int *)(&LAB_0000c3bc + lVar7 + lVar22) & 0x1fU)) - 1U;
              lVar7 = Ram00020000000001fa;
              *(uint *)(&LAB_0000c3b8 + lVar7 + lVar22) = uVar10;
              lVar7 = Ram00020000000001fa;
              *(uint *)(&LAB_0000c3c0 + lVar7 + lVar22) = uVar10;
            }
            lVar7 = Ram00020000000001fa;
            uVar10 = Ram00020000000001f0;
            Ram000200000000001c = (ulong)uVar10;
            Ram00020000000000a5 = *(uint *)(&LAB_0000c3e8 + lVar7 + lVar22) & 0xf | 0x100;
            uVar4 = Ram0002000000000314;
            lVar7 = Ram00020000000001fa;
            lVar27 = Ram00020000000001fa;
            uVar4 = *(undefined4 *)(&LAB_0000c37c + lVar27 + lVar22);
            lVar8 = CONCAT44(uVar4,*(undefined4 *)(&LAB_0000c378 + lVar7 + lVar22));
            lVar27 = Ram00020000000001fa;
            uVar10 = *(uint *)(&LAB_0000c3e8 + lVar27 + lVar22);
            Ram0002000000000324 = uVar10 >> 0x18 & 3;
            *(undefined4 *)(lVar8 + 0x200) = *(undefined4 *)(&LAB_0000c378 + lVar7 + lVar22);
            *(undefined4 *)(lVar8 + 0x204) = uVar4;
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x208) = *(undefined4 *)(&LAB_0000c380 + lVar7 + lVar22);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x20c) = *(undefined4 *)(&LAB_0000c384 + lVar7 + lVar22);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x218) = *(undefined4 *)(&LAB_0000c390 + lVar7 + lVar22);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x21c) = *(undefined4 *)(&LAB_0000c394 + lVar7 + lVar22);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x220) = *(undefined4 *)(&LAB_0000c398 + lVar7 + lVar22);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x224) = *(undefined4 *)(&LAB_0000c39c + lVar7 + lVar22);
            *(undefined4 *)(lVar8 + 0x228) = 0;
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x22c) = *(undefined4 *)(&LAB_0000c3a4 + lVar7 + lVar22);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x230) = *(undefined4 *)(&LAB_0000c3a8 + lVar7 + lVar22);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x234) = *(undefined4 *)(&LAB_0000c3ac + lVar7 + lVar22);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x238) = *(undefined4 *)(&LAB_0000c3b0 + lVar7 + lVar22);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x23c) = *(undefined4 *)(&LAB_0000c3b4 + lVar7 + lVar22);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x240) = *(undefined4 *)(&LAB_0000c3b8 + lVar7 + lVar22);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x244) = *(undefined4 *)(&LAB_0000c3bc + lVar7 + lVar22);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x250) = *(undefined4 *)(&LAB_0000c3c0 + lVar7 + lVar22);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x254) = *(undefined4 *)(&LAB_0000c3c4 + lVar7 + lVar22);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 600) = *(undefined4 *)(&LAB_0000c3c8 + lVar7 + lVar22);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x270) = *(undefined4 *)(&LAB_0000c3d0 + lVar7 + lVar22);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x274) = *(undefined4 *)(&LAB_0000c3d4 + lVar7 + lVar22);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x280) = *(undefined4 *)(&LAB_0000c3e0 + lVar7 + lVar22);
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(lVar8 + 0x284) = *(undefined4 *)(&LAB_0000c3e4 + lVar7 + lVar22);
            *(uint *)(lVar8 + 0x288) = uVar10 & 0xffffefff;
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(&LAB_0000c3c4 + lVar7 + lVar22) = 0;
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(&LAB_0000c3c8 + lVar7 + lVar22) = 0;
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(&LAB_0000c3c0 + lVar7 + lVar22) = 0;
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(&LAB_0000c3a0 + lVar7 + lVar22) = 0;
            Ram0002000000000000 = 0xc0004b00;
            Ram0002000000000000 = 1;
            Ram0002000000000000 = 0xc00f1000;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            do {
              uVar15 = Ram0002000000000314;
            } while ((uVar15 & uVar16) != 0);
            do {
              iVar29 = Ram0002000000000012;
            } while (iVar29 != 0);
            *(undefined4 *)(lVar8 + 0x208) = 0;
            lVar7 = Ram00020000000001fa;
            *(undefined4 *)(&LAB_0000c380 + lVar7 + lVar22) = 0;
            uVar10 = Ram00020000000001f0;
            Ram000200000000001c = (ulong)uVar10;
            Ram00020000000000a5 = 0;
            uVar4 = Ram0002000000000314;
          }
          lVar7 = Ram00020000000001fa;
          *(undefined4 *)(&LAB_0000c3cc + lVar7 + lVar22) = 0;
          iVar29 = Ram00020000000001fb;
          if (iVar29 == 0) break;
          Ram0002000000000030 = 1;
          do {
            uVar10 = Ram0002000000000020;
          } while ((uVar10 & 2) == 0);
          uVar10 = Ram000100000000c2cc;
          if (uVar10 != 0) {
            if (uVar24 == 1) {
              uStack_50 = uVar10 & 0xffffff;
            }
            else {
              uStack_50._3_1_ = (char)(uVar10 >> 0x18);
              uStack_50._0_3_ = (uint3)(ushort)uVar10;
            }
            if ((uStack_50._2_1_ == '\0') && (uStack_50._3_1_ == '\0')) {
              uStack_50 = 0;
            }
            Ram000100000000c2cc = uStack_50;
          }
          goto LAB_00005058;
        }
        Ram000200000000006a = 1;
        lVar7 = Ram00020000000001fa;
        *(undefined4 *)(&LAB_0000c3d8 + lVar7 + lVar22) = 0;
        Ram00020000000001ff = 0;
        Ram00020000000001ff = 0;
        Ram00020000000001ff = 0;
        Ram00020000000001ff = 0;
        Ram00020000000001ff = 0;
        Ram00020000000001ff = 0;
        Ram00020000000001ff = 0;
        Ram00020000000001ff = 0;
        Ram0002000000000067 = 1;
        lVar7 = Ram00020000000001fa;
        *(int *)(&LAB_0000c348 + lVar22 + lVar7) = iVar29;
        uVar5 = Ram00020000000001fa;
        uVar28 = Ram000100000000c6c8;
        if ((uVar28 & 0x80000001) == 0x80000001) {
          if ((((ulong)(long)(int)uVar28 >> 0x1e & 1) == 0) || (DAT_00101370 != 0)) {
            uVar28 = Ram000100000000c6c8;
            if (((uVar28 >> 2 & 3) == 0) &&
               (iVar29 = Ram000100000000c164, ((ulong)(long)iVar29 >> 0x1c & 1) != 0)) {
              Ram000100000000c6c8 = uVar28 | 0xc;
              uVar4 = Ram000100000000c6c8;
            }
            uVar28 = Ram000100000000c2c0;
            uVar28 = uVar28 & 0xff | 0x80000500;
            if (DAT_0010137c != 0) {
              uVar28 = uVar28 ^ 0x100;
            }
            lVar7 = Ram00020000000001fa;
            *(uint *)(&LAB_0000c3d8 + lVar7 + lVar22) = uVar28;
            Ram0002000000000067 = 1;
            do {
              Ram000100000000c60c = (uVar24 & 3) << 0x1c | 0x80000001 | (uVar10 ^ 1) << 0x17;
              uVar28 = Ram000100000000c60c;
            } while ((uVar28 & 1) == 0);
            Ram000100000000c60c = 0;
            Ram0002000000000067 = 0;
          }
          else {
            uVar28 = Ram000100000000c6c8;
            uVar15 = Ram0002000000000015;
            uVar15 = uVar15 & 3;
            *(undefined4 *)(&TP_R041 + uVar15) = 1;
            do {
              lVar7 = Ram0002000000000013;
            } while (lVar7 != 0);
            uVar12 = Ram000100000000c6bc;
            if ((uVar12 >> 0xc & 3) != 0) {
              do {
              } while( true );
            }
            if ((uVar12 & 1) != 0) {
              Ram000100000000c6bc = 0;
            }
            *(undefined4 *)(&TP_R041 + uVar15) = *(undefined4 *)(&TP_R00B + uVar15);
            lVar7 = Ram00020000000001fa;
            *(uint *)(lVar7 + 0x100002e080) = uVar28 >> 8 & 1 | 0x80000000;
            do {
              lVar7 = Ram00020000000001fa;
            } while ((*(uint *)(lVar7 + 0x100002e080) & 0xc0000000) != 0xc0000000);
            Ram0002000000000000 = 0xc0004b00;
            Ram0002000000000000 = 1;
            Ram0002000000000000 = 0xc00f1000;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            uVar15 = 0x400L << (in_mhartid & 0x3f);
            do {
              uVar12 = Ram0002000000000314;
            } while ((uVar12 & uVar15) != 0);
            uVar28 = Ram0002000000000042;
            Ram000100000000c6f0 =
                 uVar28 & 0x7fff0000 | uVar28 & 0xff | (~uVar24 & 1) << 4 | 0x80000100;
            do {
              uVar28 = Ram0002000000000042;
            } while ((uVar28 & 0xc0000000) != 0xc0000000);
            Ram000100000000c6f0 = (uint)(((ulong)uVar28 << 0x21) >> 0x21);
            do {
              iVar29 = Ram0002000000000042;
            } while (iVar29 != 0);
            Ram0002000000000068 = 0;
            lVar7 = Ram00020000000001fa;
            lVar27 = Ram00020000000001fa;
            *(uint *)(lVar27 + 0x100002e080) =
                 (uint)((ulong)((long)*(int *)(lVar7 + 0x100002e080) << 0x21) >> 0x21);
            do {
              lVar7 = Ram00020000000001fa;
            } while ((*(uint *)(lVar7 + 0x100002e080) & 0xc0000000) != 0);
            uVar28 = Ram000100000000c6c8;
            uVar28 = uVar28 >> 8 & 1;
            Ram0002000000000066 = uVar28 << 1 | uVar28;
            Ram0002000000000000 = 0xc0004b00;
            Ram0002000000000000 = 1;
            Ram0002000000000000 = 0xc00f1000;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            do {
              uVar12 = Ram0002000000000314;
            } while ((uVar15 & uVar12) != 0);
            Ram0002000000000000 = 0xc0000e00;
            Ram0002000000000000 = uVar28 << 0x10 | 0x2000e;
            Ram0002000000000000 = 0xc00f1000;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            do {
              uVar12 = Ram0002000000000314;
            } while ((uVar15 & uVar12) != 0);
            uVar34 = Ram00020000000000c0;
            uVar33 = 0;
            for (uVar12 = (ulong)(int)(uVar34 >> 0x11); uVar12 != 0; uVar12 = uVar12 >> 1) {
              uVar33 = uVar33 + 1;
              if ((uVar12 & 1) != 0) {
                uVar34 = Ram00020000000001f0;
                Ram000200000000001c = (ulong)uVar34;
                Ram00020000000000a5 = uVar33 | 0x100;
                uVar4 = Ram0002000000000314;
                Ram000100000000c6ec = 0;
              }
            }
            uVar33 = Ram00020000000001f0;
            Ram000200000000001c = (ulong)uVar33;
            Ram00020000000000a5 = 0;
            uVar4 = Ram0002000000000314;
            Ram000100000000c11c = uVar28;
            uVar28 = Ram000100000000c6c8;
            if ((uVar28 >> 8 & 1) != 0) {
              Ram000100000000c6c8 =
                   (uint)((ulong)((long)(int)uVar28 << 0x28) >> 0x28) | uVar28 & 0x3f000000;
              uVar4 = Ram000100000000c6c8;
              if (DAT_0010137c != 0) {
                uVar28 = Ram000100000000c6c8;
                if ((uVar28 & 0x80000001) == 0x80000001) {
                  if (((uVar28 >> 1 & 1) == 0) && (((int)(uVar28 >> 1 & 0x7f) >> 1 & 3U) == 0)) {
                    Ram000100000000c6c8 = uVar28 & 0xffffff01 | 0xc;
                    uVar4 = Ram000100000000c6c8;
                  }
                  uVar28 = Ram000100000000c2c0;
                  DAT_0010137c = 1;
                  lVar7 = Ram00020000000001fa;
                  *(uint *)(&LAB_0000c3d8 + lVar7 + lVar22) = uVar28 & 0xff | 0x80000400;
                  Ram0002000000000067 = 1;
                  do {
                    Ram000100000000c60c = (uVar24 & 3) << 0x1c | 0x80000001 | (uVar10 ^ 1) << 0x17;
                    uVar28 = Ram000100000000c60c;
                  } while ((uVar28 & 1) == 0);
LAB_000089e8:
                  Ram000100000000c60c = 0;
                  Ram0002000000000067 = 0;
                }
                else if (((-1 < (int)uVar28) && ((uVar28 & 1) != 0)) && ((uVar28 >> 8 & 1) != 0)) {
                  Ram000100000000c6c8 = 0x8000000d;
                  uVar4 = Ram000100000000c6c8;
                  uVar28 = Ram000100000000c6c8;
                  if ((uVar28 & 0x8000000d) == 0x8000000d) {
                    uVar4 = Ram000100000000c6c8;
                    uVar28 = Ram000100000000c2c0;
                    DAT_0010137c = 1;
                    lVar7 = Ram00020000000001fa;
                    *(uint *)(&LAB_0000c3d8 + lVar7 + lVar22) = uVar28 & 0xff | 0x80000400;
                    Ram0002000000000067 = 1;
                    do {
                      Ram000100000000c60c = (uVar24 & 3) << 0x1c | 0x80000001 | (uVar10 ^ 1) << 0x17
                      ;
                      uVar28 = Ram000100000000c60c;
                    } while ((uVar28 & 1) == 0);
                    goto LAB_000089e8;
                  }
                }
              }
              goto LAB_000087d8;
            }
            if (DAT_00101374 == 0) {
              Ram000100000000c6c8 = 0;
              uVar4 = Ram000100000000c6c8;
            }
            else {
              iVar29 = Ram000100000000c164;
              uVar16 = (long)iVar29;
              if ((long)DAT_00101378 != ((long)iVar29 & 0xffffffffefffffffU)) {
                uVar16 = (long)DAT_00101378;
              }
              DAT_00101374 = (uint)uVar16;
              uVar12 = (uVar16 << 0x24) >> 0x27;
              uVar16 = 3;
              if (uVar12 != 0) {
                uVar16 = uVar12;
              }
              uVar28 = (uint)((uVar16 << 0x24) >> 0x24) | DAT_00101374 & 0x60000000;
              Ram000100000000c164 = uVar28;
              Ram000100000000c164 = uVar28 | 0x80000000;
              uVar28 = Ram000100000000c6c8;
              Ram000100000000c6c8 =
                   (uint)((ulong)((long)(int)uVar28 << 0x28) >> 0x28) | uVar28 & 0x3f000000;
              uVar4 = Ram000100000000c6c8;
            }
            DAT_00101378 = 0;
            if (DAT_0010137c != 0) {
              DAT_0010137c = 0;
              Ram000200000000006a = 0;
              lVar7 = Ram00020000000001fa;
              if (*(int *)(&LAB_0000c380 + lVar7 + lVar22) != 0) {
                uVar28 = Ram000100000000c2cc;
                if (uVar24 == 1) {
                  uVar16 = (ulong)(int)(uVar28 >> 0x18);
                }
                else {
                  uVar16 = (ulong)(long)(int)uVar28 >> 0x10 & 0xff;
                }
                lVar7 = Ram00020000000001fa;
                *(uint *)(&LAB_0000c620 + lVar7 + lVar22) = uVar10 | 0x300;
                if ((uVar16 != 0) && (iVar29 = Ram00020000000001fb, iVar29 != 0)) {
                  Ram0002000000000000 = 0xc0004b00;
                  Ram0002000000000000 = 1;
                  Ram0002000000000000 = 0xc00f1000;
                  Ram0002000000000000 = 0;
                  Ram0002000000000000 = 0;
                  Ram0002000000000000 = 0;
                  Ram0002000000000000 = 0;
                  Ram0002000000000000 = 0;
                  Ram0002000000000000 = 0;
                  Ram0002000000000000 = 0;
                  Ram0002000000000000 = 0;
                  Ram0002000000000000 = 0;
                  Ram0002000000000000 = 0;
                  Ram0002000000000000 = 0;
                  Ram0002000000000000 = 0;
                  Ram0002000000000000 = 0;
                  Ram0002000000000000 = 0;
                  Ram0002000000000000 = 0;
                  Ram0002000000000000 = 0;
                  do {
                    uVar16 = Ram0002000000000314;
                  } while ((uVar15 & uVar16) != 0);
                  lVar7 = Ram00020000000001fa;
                  lVar27 = Ram00020000000001fa;
                  uVar10 = *(uint *)(&LAB_0000c3c4 + lVar27 + lVar22) &
                           (2 << ((long)*(int *)(&LAB_0000c3bc + lVar7 + lVar22) & 0x1fU)) - 1U;
                  lVar7 = Ram00020000000001fa;
                  *(uint *)(&LAB_0000c3b8 + lVar7 + lVar22) = uVar10;
                  lVar7 = Ram00020000000001fa;
                  *(uint *)(&LAB_0000c3c0 + lVar7 + lVar22) = uVar10;
                }
                lVar7 = Ram00020000000001fa;
                uVar10 = Ram00020000000001f0;
                Ram000200000000001c = (ulong)uVar10;
                Ram00020000000000a5 = *(uint *)(&LAB_0000c3e8 + lVar7 + lVar22) & 0xf | 0x100;
                uVar4 = Ram0002000000000314;
                lVar7 = Ram00020000000001fa;
                lVar27 = Ram00020000000001fa;
                uVar4 = *(undefined4 *)(&LAB_0000c37c + lVar27 + lVar22);
                lVar8 = CONCAT44(uVar4,*(undefined4 *)(&LAB_0000c378 + lVar7 + lVar22));
                lVar27 = Ram00020000000001fa;
                uVar10 = *(uint *)(&LAB_0000c3e8 + lVar27 + lVar22);
                Ram0002000000000324 = uVar10 >> 0x18 & 3;
                *(undefined4 *)(lVar8 + 0x200) = *(undefined4 *)(&LAB_0000c378 + lVar7 + lVar22);
                *(undefined4 *)(lVar8 + 0x204) = uVar4;
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x208) = *(undefined4 *)(&LAB_0000c380 + lVar7 + lVar22);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x20c) = *(undefined4 *)(&LAB_0000c384 + lVar7 + lVar22);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x218) = *(undefined4 *)(&LAB_0000c390 + lVar7 + lVar22);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x21c) = *(undefined4 *)(&LAB_0000c394 + lVar7 + lVar22);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x220) = *(undefined4 *)(&LAB_0000c398 + lVar7 + lVar22);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x224) = *(undefined4 *)(&LAB_0000c39c + lVar7 + lVar22);
                *(undefined4 *)(lVar8 + 0x228) = 0;
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x22c) = *(undefined4 *)(&LAB_0000c3a4 + lVar7 + lVar22);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x230) = *(undefined4 *)(&LAB_0000c3a8 + lVar7 + lVar22);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x234) = *(undefined4 *)(&LAB_0000c3ac + lVar7 + lVar22);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x238) = *(undefined4 *)(&LAB_0000c3b0 + lVar7 + lVar22);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x23c) = *(undefined4 *)(&LAB_0000c3b4 + lVar7 + lVar22);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x240) = *(undefined4 *)(&LAB_0000c3b8 + lVar7 + lVar22);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x244) = *(undefined4 *)(&LAB_0000c3bc + lVar7 + lVar22);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x250) = *(undefined4 *)(&LAB_0000c3c0 + lVar7 + lVar22);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x254) = *(undefined4 *)(&LAB_0000c3c4 + lVar7 + lVar22);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 600) = *(undefined4 *)(&LAB_0000c3c8 + lVar7 + lVar22);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x270) = *(undefined4 *)(&LAB_0000c3d0 + lVar7 + lVar22);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x274) = *(undefined4 *)(&LAB_0000c3d4 + lVar7 + lVar22);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x280) = *(undefined4 *)(&LAB_0000c3e0 + lVar7 + lVar22);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x284) = *(undefined4 *)(&LAB_0000c3e4 + lVar7 + lVar22);
                *(uint *)(lVar8 + 0x288) = uVar10 & 0xffffefff;
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(&LAB_0000c3c4 + lVar7 + lVar22) = 0;
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(&LAB_0000c3c8 + lVar7 + lVar22) = 0;
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(&LAB_0000c3c0 + lVar7 + lVar22) = 0;
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(&LAB_0000c3a0 + lVar7 + lVar22) = 0;
                Ram0002000000000000 = 0xc0004b00;
                Ram0002000000000000 = 1;
                Ram0002000000000000 = 0xc00f1000;
                Ram0002000000000000 = 0;
                Ram0002000000000000 = 0;
                Ram0002000000000000 = 0;
                Ram0002000000000000 = 0;
                Ram0002000000000000 = 0;
                Ram0002000000000000 = 0;
                Ram0002000000000000 = 0;
                Ram0002000000000000 = 0;
                Ram0002000000000000 = 0;
                Ram0002000000000000 = 0;
                Ram0002000000000000 = 0;
                Ram0002000000000000 = 0;
                Ram0002000000000000 = 0;
                Ram0002000000000000 = 0;
                Ram0002000000000000 = 0;
                Ram0002000000000000 = 0;
                do {
                  uVar16 = Ram0002000000000314;
                } while ((uVar15 & uVar16) != 0);
                do {
                  iVar29 = Ram0002000000000012;
                } while (iVar29 != 0);
                *(undefined4 *)(lVar8 + 0x208) = 0;
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(&LAB_0000c380 + lVar7 + lVar22) = 0;
                uVar10 = Ram00020000000001f0;
                Ram000200000000001c = (ulong)uVar10;
                Ram00020000000000a5 = 0;
                uVar4 = Ram0002000000000314;
              }
              lVar7 = Ram00020000000001fa;
              *(undefined4 *)(&LAB_0000c3cc + lVar7 + lVar22) = 0;
              iVar29 = Ram00020000000001fb;
              if (iVar29 != 0) {
                Ram0002000000000030 = 1;
                do {
                  uVar10 = Ram0002000000000020;
                } while ((uVar10 & 2) == 0);
                uVar10 = Ram000100000000c2cc;
                if (uVar10 != 0) {
                  if (uVar24 == 1) {
                    uStack_48 = uVar10 & 0xffffff;
                  }
                  else {
                    uStack_48._3_1_ = (char)(uVar10 >> 0x18);
                    uStack_48._0_3_ = (uint3)(ushort)uVar10;
                  }
                  if ((uStack_48._2_1_ == '\0') && (uStack_48._3_1_ == '\0')) {
                    uStack_48 = 0;
                  }
                  Ram000100000000c2cc = uStack_48;
                }
                Ram0002000000000031 = 1;
                Ram00020000000001fb = 0;
              }
            }
          }
        }
        lVar7 = Ram00020000000001fa;
        *(undefined4 *)(&LAB_0000c348 + lVar22 + lVar7) = 0x20000000;
        uVar5 = Ram00020000000001fa;
        Ram0002000000000067 = 0;
        Ram000200000000006a = 0;
      }
      else {
        if (uVar28 != 5) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        Ram000200000000006a = 1;
        lVar7 = Ram00020000000001fa;
        lVar22 = uVar16 << 0x24;
        *(undefined4 *)(&LAB_0000c3d8 + lVar7 + lVar22) = 0;
        Ram00020000000001ff = 0;
        Ram00020000000001ff = 0;
        Ram00020000000001ff = 0;
        Ram00020000000001ff = 0;
        Ram00020000000001ff = 0;
        Ram00020000000001ff = 0;
        Ram00020000000001ff = 0;
        Ram00020000000001ff = 0;
        Ram0002000000000067 = 1;
        lVar7 = Ram00020000000001fa;
        *(uint *)(&LAB_0000c348 + lVar22 + lVar7) = (uVar33 | 0x6000) << 0x10;
        uVar5 = Ram00020000000001fa;
        uVar28 = Ram000100000000c6c8;
        if ((uVar28 & 0x80000001) == 0x80000001) {
          if ((((ulong)(long)(int)uVar28 >> 0x1e & 1) == 0) || (DAT_00101370 != 0)) {
            uVar28 = Ram000100000000c6c8;
            if (((uVar28 >> 2 & 3) == 0) &&
               (iVar29 = Ram000100000000c164, ((ulong)(long)iVar29 >> 0x1c & 1) != 0)) {
              Ram000100000000c6c8 = uVar28 | 0xc;
              uVar4 = Ram000100000000c6c8;
            }
            uVar28 = Ram000100000000c2c0;
            uVar28 = uVar28 & 0xff | 0x80000500;
            if (DAT_0010137c != 0) {
              uVar28 = uVar28 ^ 0x100;
            }
            lVar7 = Ram00020000000001fa;
            *(uint *)(&LAB_0000c3d8 + lVar22 + lVar7) = uVar28;
            Ram0002000000000067 = 1;
            do {
              Ram000100000000c60c = (uVar24 & 3) << 0x1c | 0x80000001 | (uVar10 ^ 1) << 0x17;
              uVar28 = Ram000100000000c60c;
            } while ((uVar28 & 1) == 0);
            Ram000100000000c60c = 0;
            Ram0002000000000067 = 0;
          }
          else {
            uVar28 = Ram000100000000c6c8;
            uVar15 = Ram0002000000000015;
            uVar15 = uVar15 & 3;
            *(undefined4 *)(&TP_R041 + uVar15) = 1;
            do {
              lVar7 = Ram0002000000000013;
            } while (lVar7 != 0);
            uVar12 = Ram000100000000c6bc;
            if ((uVar12 >> 0xc & 3) != 0) {
              do {
              } while( true );
            }
            if ((uVar12 & 1) != 0) {
              Ram000100000000c6bc = 0;
            }
            *(undefined4 *)(&TP_R041 + uVar15) = *(undefined4 *)(&TP_R00B + uVar15);
            lVar7 = Ram00020000000001fa;
            *(uint *)(lVar7 + 0x100002e080) = uVar28 >> 8 & 1 | 0x80000000;
            do {
              lVar7 = Ram00020000000001fa;
            } while ((*(uint *)(lVar7 + 0x100002e080) & 0xc0000000) != 0xc0000000);
            Ram0002000000000000 = 0xc0004b00;
            Ram0002000000000000 = 1;
            Ram0002000000000000 = 0xc00f1000;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            uVar15 = 0x400L << (in_mhartid & 0x3f);
            do {
              uVar12 = Ram0002000000000314;
            } while ((uVar12 & uVar15) != 0);
            uVar28 = Ram0002000000000042;
            Ram000100000000c6f0 =
                 uVar28 & 0x7fff0000 | uVar28 & 0xff | (~uVar24 & 1) << 4 | 0x80000100;
            do {
              uVar28 = Ram0002000000000042;
            } while ((uVar28 & 0xc0000000) != 0xc0000000);
            Ram000100000000c6f0 = (uint)(((ulong)uVar28 << 0x21) >> 0x21);
            do {
              iVar29 = Ram0002000000000042;
            } while (iVar29 != 0);
            Ram0002000000000068 = 0;
            lVar7 = Ram00020000000001fa;
            lVar27 = Ram00020000000001fa;
            *(uint *)(lVar27 + 0x100002e080) =
                 (uint)((ulong)((long)*(int *)(lVar7 + 0x100002e080) << 0x21) >> 0x21);
            do {
              lVar7 = Ram00020000000001fa;
            } while ((*(uint *)(lVar7 + 0x100002e080) & 0xc0000000) != 0);
            uVar28 = Ram000100000000c6c8;
            uVar28 = uVar28 >> 8 & 1;
            Ram0002000000000066 = uVar28 << 1 | uVar28;
            Ram0002000000000000 = 0xc0004b00;
            Ram0002000000000000 = 1;
            Ram0002000000000000 = 0xc00f1000;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            do {
              uVar12 = Ram0002000000000314;
            } while ((uVar15 & uVar12) != 0);
            Ram0002000000000000 = 0xc0000e00;
            Ram0002000000000000 = uVar28 << 0x10 | 0x2000e;
            Ram0002000000000000 = 0xc00f1000;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            Ram0002000000000000 = 0;
            do {
              uVar12 = Ram0002000000000314;
            } while ((uVar15 & uVar12) != 0);
            uVar34 = Ram00020000000000c0;
            uVar33 = 0;
            for (uVar12 = (ulong)(int)(uVar34 >> 0x11); uVar12 != 0; uVar12 = uVar12 >> 1) {
              uVar33 = uVar33 + 1;
              if ((uVar12 & 1) != 0) {
                uVar34 = Ram00020000000001f0;
                Ram000200000000001c = (ulong)uVar34;
                Ram00020000000000a5 = uVar33 | 0x100;
                uVar4 = Ram0002000000000314;
                Ram000100000000c6ec = 0;
              }
            }
            uVar33 = Ram00020000000001f0;
            Ram000200000000001c = (ulong)uVar33;
            Ram00020000000000a5 = 0;
            uVar4 = Ram0002000000000314;
            Ram000100000000c11c = uVar28;
            uVar28 = Ram000100000000c6c8;
            if ((uVar28 >> 8 & 1) != 0) {
              Ram000100000000c6c8 =
                   (uint)((ulong)((long)(int)uVar28 << 0x28) >> 0x28) | uVar28 & 0x3f000000;
              uVar4 = Ram000100000000c6c8;
              if (DAT_0010137c != 0) {
                uVar28 = Ram000100000000c6c8;
                if ((uVar28 & 0x80000001) == 0x80000001) {
                  if (((uVar28 >> 1 & 1) == 0) && (((int)(uVar28 >> 1 & 0x7f) >> 1 & 3U) == 0)) {
                    Ram000100000000c6c8 = uVar28 & 0xffffff01 | 0xc;
                    uVar4 = Ram000100000000c6c8;
                  }
                  uVar28 = Ram000100000000c2c0;
                  DAT_0010137c = 1;
                  lVar7 = Ram00020000000001fa;
                  *(uint *)(&LAB_0000c3d8 + lVar22 + lVar7) = uVar28 & 0xff | 0x80000400;
                  Ram0002000000000067 = 1;
                  do {
                    Ram000100000000c60c = (uVar24 & 3) << 0x1c | 0x80000001 | (uVar10 ^ 1) << 0x17;
                    uVar28 = Ram000100000000c60c;
                  } while ((uVar28 & 1) == 0);
LAB_000087c4:
                  Ram000100000000c60c = 0;
                  Ram0002000000000067 = 0;
                }
                else if (((-1 < (int)uVar28) && ((uVar28 & 1) != 0)) && ((uVar28 >> 8 & 1) != 0)) {
                  Ram000100000000c6c8 = 0x8000000d;
                  uVar4 = Ram000100000000c6c8;
                  uVar28 = Ram000100000000c6c8;
                  if ((uVar28 & 0x8000000d) == 0x8000000d) {
                    uVar4 = Ram000100000000c6c8;
                    uVar28 = Ram000100000000c2c0;
                    DAT_0010137c = 1;
                    lVar7 = Ram00020000000001fa;
                    *(uint *)(&LAB_0000c3d8 + lVar22 + lVar7) = uVar28 & 0xff | 0x80000400;
                    Ram0002000000000067 = 1;
                    do {
                      Ram000100000000c60c = (uVar24 & 3) << 0x1c | 0x80000001 | (uVar10 ^ 1) << 0x17
                      ;
                      uVar28 = Ram000100000000c60c;
                    } while ((uVar28 & 1) == 0);
                    goto LAB_000087c4;
                  }
                }
              }
LAB_000087d8:
              lVar7 = Ram00020000000001fa;
              *(undefined4 *)(&LAB_0000c348 + (uVar16 << 0x24) + lVar7) = 0x20000000;
              uVar5 = Ram00020000000001fa;
              Ram0002000000000067 = 0;
              Ram000200000000006a = 0;
              break;
            }
            if (DAT_00101374 == 0) {
              Ram000100000000c6c8 = 0;
              uVar4 = Ram000100000000c6c8;
            }
            else {
              iVar29 = Ram000100000000c164;
              uVar16 = (long)iVar29;
              if ((long)DAT_00101378 != ((long)iVar29 & 0xffffffffefffffffU)) {
                uVar16 = (long)DAT_00101378;
              }
              DAT_00101374 = (uint)uVar16;
              uVar12 = (uVar16 << 0x24) >> 0x27;
              uVar16 = 3;
              if (uVar12 != 0) {
                uVar16 = uVar12;
              }
              uVar28 = (uint)((uVar16 << 0x24) >> 0x24) | DAT_00101374 & 0x60000000;
              Ram000100000000c164 = uVar28;
              Ram000100000000c164 = uVar28 | 0x80000000;
              uVar28 = Ram000100000000c6c8;
              Ram000100000000c6c8 =
                   (uint)((ulong)((long)(int)uVar28 << 0x28) >> 0x28) | uVar28 & 0x3f000000;
              uVar4 = Ram000100000000c6c8;
            }
            DAT_00101378 = 0;
            if (DAT_0010137c != 0) {
              DAT_0010137c = 0;
              Ram000200000000006a = 0;
              lVar7 = Ram00020000000001fa;
              if (*(int *)(&LAB_0000c380 + lVar22 + lVar7) != 0) {
                uVar28 = Ram000100000000c2cc;
                if (uVar24 == 1) {
                  uVar16 = (ulong)(int)(uVar28 >> 0x18);
                }
                else {
                  uVar16 = (ulong)(long)(int)uVar28 >> 0x10 & 0xff;
                }
                lVar7 = Ram00020000000001fa;
                *(uint *)(&LAB_0000c620 + lVar22 + lVar7) = uVar10 | 0x300;
                if ((uVar16 != 0) && (iVar29 = Ram00020000000001fb, iVar29 != 0)) {
                  Ram0002000000000000 = 0xc0004b00;
                  Ram0002000000000000 = 1;
                  Ram0002000000000000 = 0xc00f1000;
                  Ram0002000000000000 = 0;
                  Ram0002000000000000 = 0;
                  Ram0002000000000000 = 0;
                  Ram0002000000000000 = 0;
                  Ram0002000000000000 = 0;
                  Ram0002000000000000 = 0;
                  Ram0002000000000000 = 0;
                  Ram0002000000000000 = 0;
                  Ram0002000000000000 = 0;
                  Ram0002000000000000 = 0;
                  Ram0002000000000000 = 0;
                  Ram0002000000000000 = 0;
                  Ram0002000000000000 = 0;
                  Ram0002000000000000 = 0;
                  Ram0002000000000000 = 0;
                  Ram0002000000000000 = 0;
                  do {
                    uVar16 = Ram0002000000000314;
                  } while ((uVar15 & uVar16) != 0);
                  lVar7 = Ram00020000000001fa;
                  lVar27 = Ram00020000000001fa;
                  uVar10 = *(uint *)(&LAB_0000c3c4 + lVar22 + lVar27) &
                           (2 << ((long)*(int *)(&LAB_0000c3bc + lVar22 + lVar7) & 0x1fU)) - 1U;
                  lVar7 = Ram00020000000001fa;
                  *(uint *)(&LAB_0000c3b8 + lVar22 + lVar7) = uVar10;
                  lVar7 = Ram00020000000001fa;
                  *(uint *)(&LAB_0000c3c0 + lVar22 + lVar7) = uVar10;
                }
                lVar7 = Ram00020000000001fa;
                uVar10 = Ram00020000000001f0;
                Ram000200000000001c = (ulong)uVar10;
                Ram00020000000000a5 = *(uint *)(&LAB_0000c3e8 + lVar22 + lVar7) & 0xf | 0x100;
                uVar4 = Ram0002000000000314;
                lVar7 = Ram00020000000001fa;
                lVar27 = Ram00020000000001fa;
                uVar4 = *(undefined4 *)(&LAB_0000c37c + lVar22 + lVar27);
                lVar8 = CONCAT44(uVar4,*(undefined4 *)(&LAB_0000c378 + lVar22 + lVar7));
                lVar27 = Ram00020000000001fa;
                uVar10 = *(uint *)(&LAB_0000c3e8 + lVar22 + lVar27);
                Ram0002000000000324 = uVar10 >> 0x18 & 3;
                *(undefined4 *)(lVar8 + 0x200) = *(undefined4 *)(&LAB_0000c378 + lVar22 + lVar7);
                *(undefined4 *)(lVar8 + 0x204) = uVar4;
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x208) = *(undefined4 *)(&LAB_0000c380 + lVar22 + lVar7);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x20c) = *(undefined4 *)(&LAB_0000c384 + lVar22 + lVar7);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x218) = *(undefined4 *)(&LAB_0000c390 + lVar22 + lVar7);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x21c) = *(undefined4 *)(&LAB_0000c394 + lVar22 + lVar7);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x220) = *(undefined4 *)(&LAB_0000c398 + lVar22 + lVar7);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x224) = *(undefined4 *)(&LAB_0000c39c + lVar22 + lVar7);
                *(undefined4 *)(lVar8 + 0x228) = 0;
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x22c) = *(undefined4 *)(&LAB_0000c3a4 + lVar22 + lVar7);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x230) = *(undefined4 *)(&LAB_0000c3a8 + lVar22 + lVar7);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x234) = *(undefined4 *)(&LAB_0000c3ac + lVar22 + lVar7);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x238) = *(undefined4 *)(&LAB_0000c3b0 + lVar22 + lVar7);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x23c) = *(undefined4 *)(&LAB_0000c3b4 + lVar22 + lVar7);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x240) = *(undefined4 *)(&LAB_0000c3b8 + lVar22 + lVar7);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x244) = *(undefined4 *)(&LAB_0000c3bc + lVar22 + lVar7);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x250) = *(undefined4 *)(&LAB_0000c3c0 + lVar22 + lVar7);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x254) = *(undefined4 *)(&LAB_0000c3c4 + lVar22 + lVar7);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 600) = *(undefined4 *)(&LAB_0000c3c8 + lVar22 + lVar7);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x270) = *(undefined4 *)(&LAB_0000c3d0 + lVar22 + lVar7);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x274) = *(undefined4 *)(&LAB_0000c3d4 + lVar22 + lVar7);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x280) = *(undefined4 *)(&LAB_0000c3e0 + lVar22 + lVar7);
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(lVar8 + 0x284) = *(undefined4 *)(&LAB_0000c3e4 + lVar22 + lVar7);
                *(uint *)(lVar8 + 0x288) = uVar10 & 0xffffefff;
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(&LAB_0000c3c4 + lVar22 + lVar7) = 0;
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(&LAB_0000c3c8 + lVar22 + lVar7) = 0;
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(&LAB_0000c3c0 + lVar22 + lVar7) = 0;
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(&LAB_0000c3a0 + lVar22 + lVar7) = 0;
                Ram0002000000000000 = 0xc0004b00;
                Ram0002000000000000 = 1;
                Ram0002000000000000 = 0xc00f1000;
                Ram0002000000000000 = 0;
                Ram0002000000000000 = 0;
                Ram0002000000000000 = 0;
                Ram0002000000000000 = 0;
                Ram0002000000000000 = 0;
                Ram0002000000000000 = 0;
                Ram0002000000000000 = 0;
                Ram0002000000000000 = 0;
                Ram0002000000000000 = 0;
                Ram0002000000000000 = 0;
                Ram0002000000000000 = 0;
                Ram0002000000000000 = 0;
                Ram0002000000000000 = 0;
                Ram0002000000000000 = 0;
                Ram0002000000000000 = 0;
                Ram0002000000000000 = 0;
                do {
                  uVar16 = Ram0002000000000314;
                } while ((uVar15 & uVar16) != 0);
                do {
                  iVar29 = Ram0002000000000012;
                } while (iVar29 != 0);
                *(undefined4 *)(lVar8 + 0x208) = 0;
                lVar7 = Ram00020000000001fa;
                *(undefined4 *)(&LAB_0000c380 + lVar22 + lVar7) = 0;
                uVar10 = Ram00020000000001f0;
                Ram000200000000001c = (ulong)uVar10;
                Ram00020000000000a5 = 0;
                uVar4 = Ram0002000000000314;
              }
              lVar7 = Ram00020000000001fa;
              *(undefined4 *)(&LAB_0000c3cc + lVar22 + lVar7) = 0;
              iVar29 = Ram00020000000001fb;
              if (iVar29 != 0) {
                Ram0002000000000030 = 1;
                do {
                  uVar10 = Ram0002000000000020;
                } while ((uVar10 & 2) == 0);
                uVar10 = Ram000100000000c2cc;
                if (uVar10 != 0) {
                  if (uVar24 == 1) {
                    uStack_58 = uVar10 & 0xffffff;
                  }
                  else {
                    uStack_58._3_1_ = (char)(uVar10 >> 0x18);
                    uStack_58._0_3_ = (uint3)(ushort)uVar10;
                  }
                  if ((uStack_58._2_1_ == '\0') && (uStack_58._3_1_ == '\0')) {
                    uStack_58 = 0;
                  }
                  Ram000100000000c2cc = uStack_58;
                }
                Ram0002000000000031 = 1;
                Ram00020000000001fb = 0;
              }
            }
          }
        }
        lVar7 = Ram00020000000001fa;
        *(undefined4 *)(&LAB_0000c348 + lVar22 + lVar7) = 0x20000000;
        uVar5 = Ram00020000000001fa;
        Ram0002000000000067 = 0;
        Ram000200000000006a = 0;
      }
    }
  }
  goto LAB_00003c7c;
LAB_00006d30:
  uVar28 = 1;
  lVar8 = 0;
  puVar20 = &DAT_00100598;
  while( true ) {
    if (uVar28 != 0) {
      uVar33 = *puVar20;
      lVar22 = (long)(int)(uVar33 - 0xc000);
      do {
        iVar13 = (&DAT_00101000)[lVar8 * 2];
        *(undefined4 *)(lVar7 + ((ulong)(lVar22 << 0x20) >> 0x1e) + 0x2000) = 0;
        if (iVar13 == (int)lVar22 + 0xc000) {
          lVar8 = lVar8 + 1;
        }
        lVar22 = (long)((int)lVar22 + 1);
      } while ((int)((uVar28 - 0xc000) + uVar33) != lVar22);
    }
    uVar5 = DAT_001013c0;
    lVar22 = DAT_001013b8;
    if (puVar20 + 2 == &switchD_0000ad28::switchdataD_001005d8) break;
    uVar28 = puVar20[3];
    puVar20 = puVar20 + 2;
  }
  uVar28 = Ram00020000000001f0;
  Ram000200000000001c = (ulong)uVar28;
  Ram00020000000000a5 = uVar10;
  uVar11 = Ram0002000000000314;
  *(undefined4 *)(DAT_001013d0 + 3) = 1;
  bVar6 = false;
LAB_00005dc8:
  iVar13 = Ram000200000000001e;
  if (iVar13 == 3) {
    Ram0002000000000000 = 0xc0001200;
    Ram0002000000000000 = 0;
    Ram0002000000000017 = 0;
  }
  if (lVar7 == 0) {
    Ram0002000000000025 = 0xfffffffffffffffe;
    Ram0002000000000023 = 3;
  }
  else {
    Ram0003000000008709 = 1;
    Ram00020000000001ff = 0;
    lVar8 = Ram0002000000000011;
    if (lVar8 == 0) {
      Ram0002000000000018 = 0;
      uVar11 = Ram00020000000001f1;
      Ram0002000000000000 = uVar11;
      Ram0002000000000000 = 0;
    }
    Ram0002000000000000 = 0xc0035f00;
    Ram0002000000000000 = (int)lVar7;
    uVar11 = (undefined4)((ulong)lVar7 >> 0x20);
    Ram0002000000000000 = uVar11;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0xc0035f02;
    Ram0002000000000000 = (int)lVar7;
    Ram0002000000000000 = uVar11;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    iVar13 = Ram0002000000000010;
    if (iVar13 == 0) {
      Ram0002000000000017 = 0;
      Ram0002000000000000 = 0xc0005200;
      Ram0002000000000000 = 0;
    }
    Ram0002000000000000 = 0xc0036100;
    Ram0002000000000000 = (int)(lVar7 + 0x1000);
    Ram0002000000000000 = (int)((ulong)(lVar7 + 0x1000) >> 0x20);
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0xc0035e00;
    Ram0002000000000000 = (int)(lVar7 + 0x2000);
    Ram0002000000000000 = (int)((ulong)(lVar7 + 0x2000) >> 0x20);
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
  }
  Ram000200000000005d = uVar5;
  Ram0002000000000099 = 5;
  if (bVar6) {
    FUN_00008e50();
    uVar28 = Ram00020000000001f0;
    Ram000200000000001c = (ulong)uVar28;
    Ram00020000000000a5 = uVar24;
    uVar11 = Ram0002000000000314;
    FUN_00008e78();
    uVar28 = Ram00020000000001f0;
    Ram000200000000001c = (ulong)uVar28;
    Ram00020000000000a5 = uVar10;
    uVar11 = Ram0002000000000314;
    Ram0002000000000000 = 0xc0001200;
    Ram0002000000000000 = 0;
    Ram0002000000000017 = 0;
  }
  else {
    DAT_001010bc = 0;
    DAT_00101060 = 0;
  }
  Ram0003000000008705 = DAT_001010bc;
  Ram00020000000001ff = 0;
  lVar8 = DAT_001013d0[0x3a];
  if (lVar8 != 0) {
    Ram00020000000001ff = 0;
    uRam0003000000000693 = (undefined3)((ulong)lVar8 >> 0x28);
    _DAT_300000000068e = CONCAT41(*(undefined4 *)(DAT_001013d0 + 0x3b),(char)lVar8);
    Ram00020000000001ff = 0;
  }
  Ram0002000000000000 = 0xc0040e00;
  Ram0002000000000000 = uVar32;
  Ram0002000000000000 = (int)lVar22;
  Ram0002000000000000 = (int)((ulong)lVar22 >> 0x20);
  Ram00020000000001f4 = DAT_00101090;
  Ram0002000000000000 = (int)DAT_00101090;
  Ram0002000000000000 = (int)((ulong)DAT_00101090 >> 0x20);
  if (DAT_00101090 != 0) {
    Ram00020000000001f6 = DAT_00101098;
    Ram00020000000001f7 = DAT_001010a0;
    Ram00020000000001f8 = DAT_001010a8;
    Ram0001000000030118 = DAT_00101098;
  }
  uVar32 = Ram00020000000001f0;
  Ram000200000000001c = (ulong)uVar32;
  Ram00020000000000a5 = uVar24;
  uVar11 = Ram0002000000000314;
  if (bVar6) {
    do {
      iVar13 = Ram0002000000000012;
    } while (iVar13 != 0);
    piVar18 = &DAT_001000a8;
    uVar15 = 1;
    iVar13 = 0x2c01;
    while( true ) {
      Ram0002000000000003 = (ulong)(uint)((iVar13 + -0x2c00) * 4) + lVar7;
      Ram0002000000000003 = uVar15 & 0xffffffff;
      if (piVar18 == &DAT_00100100) break;
      iVar13 = *piVar18;
      uVar15 = (ulong)piVar18[1];
      piVar18 = piVar18 + 2;
    }
    uVar15 = 6;
    iVar13 = 0x2e04;
    piVar18 = &DAT_00100110;
    while( true ) {
      Ram0002000000000003 = (ulong)(uint)((iVar13 + -0x2c00) * 4) + lVar7;
      Ram0002000000000003 = uVar15 & 0xffffffff;
      piVar19 = piVar18 + 2;
      if (piVar19 == &DAT_00100158) break;
      iVar13 = *piVar19;
      uVar15 = (ulong)piVar18[3];
      piVar18 = piVar19;
    }
    piVar18 = &DAT_00100160;
    uVar15 = 6;
    iVar13 = 0xa000;
    while( true ) {
      Ram0002000000000003 = (ulong)(uint)((iVar13 + -0x9c00) * 4) + lVar7;
      Ram0002000000000003 = uVar15 & 0xffffffff;
      if (piVar18 == &DAT_00100330) break;
      iVar13 = *piVar18;
      uVar15 = (ulong)piVar18[1];
      piVar18 = piVar18 + 2;
    }
    uVar15 = 1;
    uVar24 = 0xc242;
    puVar20 = &DAT_00100598;
    while( true ) {
      Ram0002000000000003 = (ulong)((uVar24 - 0xb800) * 4) + lVar7;
      Ram0002000000000003 = uVar15 & 0xffffffff;
      puVar21 = puVar20 + 2;
      if (puVar21 == &switchD_0000ad28::switchdataD_001005d8) break;
      uVar24 = *puVar21;
      uVar15 = (ulong)(int)puVar20[3];
      puVar20 = puVar21;
    }
    FUN_00008ec0();
    if (lVar22 != 0) {
      FUN_00008ea8();
    }
    Ram0002000000000026 = 0x81018003;
  }
  iVar13 = Ram0001000000030234;
  if (iVar13 == 0) {
    Ram0001000000030238 = 0xffffffff;
    Ram0001000000030234 = 3;
  }
  lVar7 = Ram00020000000001fa;
  Ram0002000000000086 = *(undefined4 *)(&LAB_0000c3b8 + lVar27 + lVar7);
  uVar24 = Ram00020000000001f0;
  Ram000200000000001c = (ulong)uVar24;
  Ram00020000000000a5 = 0;
  uVar11 = Ram0002000000000314;
  lVar7 = Ram00020000000001fa;
  if ((*(uint *)(&LAB_0000c3e0 + lVar27 + lVar7) >> 0x14 & 1) != 0) {
    lVar8 = Ram00020000000000a9;
    lVar22 = Ram0002000000000023;
    if ((int)in_mhartid == 0) {
      uVar24 = 0x8000000;
      uVar11 = 0xb;
    }
    else {
      uVar24 = 0x10000000;
      uVar11 = 0xc;
    }
    Ram00020000000000a6 = uVar11;
    uVar32 = Ram0002000000000021;
    do {
      if ((uVar32 & uVar24) != 0) goto LAB_00007380;
      uVar32 = Ram0002000000000021;
      lVar23 = Ram0002000000000074;
    } while (lVar23 == 0);
  }
LAB_00005fe0:
  Ram0002000000000099 = 4;
  Ram000200000000005c = uVar4;
  goto LAB_00003c84;
LAB_00007380:
  do {
    uVar24 = Ram00020000000000af;
  } while ((uVar24 & 0x10) != 0);
  Ram00020000000000a2 =
       (ulong)((long)iVar29 << 0x24) >> 0x26 | in_mhartid << 0x34 |
       (ulong)(*(uint *)(&LAB_0000c3e0 + lVar27 + lVar7) >> 0x15) << 0x3e | lVar22 << 0x30 |
       lVar8 << 0x36 | 0x2c00000000000000;
  Ram00020000000000a7 = uVar11;
  goto LAB_00005fe0;
LAB_00006994:
  do {
    uVar24 = Ram00020000000000af;
  } while ((uVar24 & 0x10) != 0);
  Ram00020000000000a2 =
       (ulong)((long)*(int *)(&LAB_0000c3b4 + lVar22 + lVar23) << 0x24) >> 0x26 |
       (ulong)(*(uint *)(&LAB_0000c3e0 + lVar22 + lVar7) >> 0x15) << 0x3e | lVar27 << 0x30 |
       in_mhartid << 0x34 | lVar8 << 0x36 | 0x2800000000000000;
  Ram00020000000000a7 = uVar4;
LAB_000048d4:
  Ram000100000000c360 = 1;
  iVar29 = Ram000100000000c360;
  while (iVar29 != 1) {
    uVar24 = 0;
    do {
      uVar24 = uVar24 + 1;
    } while (uVar24 < 0x10);
    Ram000100000000c360 = 1;
    iVar29 = Ram000100000000c360;
  }
  uVar15 = Ram0002000000000015;
  *(undefined4 *)(&TP_R041 + (uVar15 & 3)) = 1;
  uVar4 = Ram00020000000000a9;
  uVar5 = Ram000200000000000b;
  Ram000200000000009a = 7;
  uVar10 = Ram000100000000c2cc;
  uVar24 = 0x800000;
  if ((int)in_mhartid != 0) {
    uVar24 = 0x80000000;
  }
  Ram000100000000c2cc = uVar24 | uVar10;
  Ram000100000000c2cc = uVar10;
  uVar11 = Ram000100000000c2cc;
  Ram000200000000009a = uVar4;
  *(undefined4 *)(&TP_R041 + (uVar15 & 3)) = *(undefined4 *)(&TP_R00B + (uVar15 & 3));
  Ram000100000000c360 = 0;
  Ram0002000000000099 = 0xb;
  DAT_00101370 = 0;
LAB_00003c7c:
  Ram0002000000000000 = param_1;
  Ram0002000000000000 = uVar32;
LAB_00003c84:
  uVar5 = Ram000200000000000b;
  custom0();
  do {
    uVar24 = Ram000100000000c128;
  } while ((uVar24 & 0x80000) != 0);
  *(uint *)(&TP_R041 + uVar14) = uVar31;
  return;
}


/* ---- FUN_00008b70 @ 00008b70 size=48 ---- */

void FUN_00008b70(void)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  DAT_001010bc = 0;
  DAT_00101040 = 0;
  DAT_00101048 = 0;
  DAT_00101050 = 0;
  DAT_00101058 = 0;
  DAT_00101060 = 0;
  Ram0002000000000021 = 0;
  Ram0002000000000022 = 0;
  Ram0003000000008701 = 0;
  Ram00020000000001ff = 0;
  return;
}


/* ---- FUN_00008ba0 @ 00008ba0 size=192 ---- */

/* WARNING: Removing unreachable block (ram,0x00008ba4) */

void FUN_00008ba0(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  int in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  iVar2 = Ram00020000000000a9;
  lVar3 = Ram00020000000001fa;
  lVar6 = ((long)(in_mhartid << 2) & 0xcU | (long)(iVar2 << 4) & 0x70U) << 0x24;
  Ram0003000000008616 = *(undefined4 *)(&LAB_0000c3c0 + lVar3 + lVar6);
  Ram00020000000001ff = 0;
  Ram000200000000004f = 1;
  do {
    iVar2 = Ram0002000000000095;
  } while (iVar2 == 0);
  uVar1 = Ram0002000000000092;
  if (uVar1 != 0) {
    Ram0002000000000014 = uVar1;
    uVar7 = 0;
    do {
      uVar5 = Ram0002000000000302;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar1);
  }
  lVar3 = Ram00020000000001fa;
  lVar4 = Ram00020000000001fa;
  *(undefined4 *)(&LAB_0000c398 + lVar6 + lVar4) = *(undefined4 *)(&LAB_0000c398 + lVar6 + lVar3);
  lVar3 = Ram00020000000001fa;
  *(undefined4 *)(&LAB_0000c3c0 + lVar6 + lVar3) = 0;
  DAT_00101060._0_4_ = 1;
  return;
}


/* ---- FUN_00008c60 @ 00008c60 size=488 ---- */

/* WARNING: Removing unreachable block (ram,0x00008cdc) */

void FUN_00008c60(int param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  int in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  DAT_00101060._4_4_ = 1;
  lVar2 = Ram0002000000000015;
  *(int *)(&DAT_00101040 + (lVar2 + -1) * 2) = *(int *)(&TP_R085 + lVar2) - param_1;
  DAT_00101048 = Ram000200000000001c;
  DAT_00101058 = Ram000200000000001d;
  uVar5 = Ram00020000000000a2;
  Ram0002000000000084 = 1;
  Ram0002000000000000 = (int)((ulong)uVar5 >> 0x20);
  Ram0002000000000000 = (int)uVar5;
  iVar4 = Ram00020000000000ac;
  if (iVar4 != 0) {
    Ram000200000000007d = 1;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 2;
  }
  uVar1 = (int)(lVar2 + -1) << 2;
  iVar4 = Ram00020000000000a9;
  lVar2 = Ram00020000000001fa;
  lVar8 = ((long)(in_mhartid << 2) & 0xcU | (long)(iVar4 << 4) & 0x70U) << 0x24;
  Ram0003000000008616 = *(undefined4 *)(&LAB_0000c3c0 + lVar2 + lVar8);
  Ram00020000000001ff = 0;
  Ram000200000000004f = uVar1 | 3;
  do {
    iVar4 = Ram0002000000000095;
  } while (iVar4 == 0);
  if ((uVar1 & 4) != 0) {
    uVar1 = Ram0002000000000094;
    if (uVar1 != 0) {
      Ram0002000000000016 = uVar1;
      uVar9 = 0;
      do {
        uVar7 = Ram0002000000000302;
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar1);
    }
    Ram000200000000004e = 1;
    Ram00020000000000a1 = 2;
    Ram000200000000001a = 1;
  }
  uVar1 = Ram0002000000000093;
  if (uVar1 != 0) {
    Ram0002000000000015 = uVar1;
    uVar9 = 0;
    do {
      uVar7 = Ram0002000000000302;
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar1);
  }
  Ram000200000000004e = 1;
  Ram00020000000000a1 = 1;
  uVar1 = Ram00020000000001f0;
  Ram000200000000001c = (ulong)uVar1;
  Ram000200000000001a = 0;
  uVar1 = Ram0002000000000092;
  if (uVar1 != 0) {
    Ram0002000000000014 = uVar1;
    uVar9 = 0;
    do {
      uVar7 = Ram0002000000000302;
      uVar9 = uVar9 + 1;
    } while (uVar1 != uVar9);
  }
  lVar2 = Ram00020000000001fa;
  lVar6 = Ram00020000000001fa;
  *(undefined4 *)(&LAB_0000c398 + lVar8 + lVar6) = *(undefined4 *)(&LAB_0000c398 + lVar8 + lVar2);
  lVar2 = Ram00020000000001fa;
  *(undefined4 *)(&LAB_0000c3c0 + lVar8 + lVar2) = 0;
  uVar3 = Ram0002000000000033;
  uVar1 = Ram0002000000000023;
  Ram0002000000000058 = 1 << ((ulong)uVar1 & 0x1f) | uVar3;
  Ram000200000000001a = 0;
  Ram0002000000000042 = 1;
  Ram0002000000000043 = 1;
  return;
}


/* ---- pm4_OP_0D_handler @ 00008e48 size=8 ---- */

void pm4_OP_0D_handler(void)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  FUN_00008c60(1);
  return;
}


/* ---- FUN_00008e50 @ 00008e50 size=40 ---- */

void FUN_00008e50(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  puVar4 = (undefined8 *)(DAT_001013d0 + 0x80);
  puVar1 = (undefined8 *)(DAT_001013d0 + 0xa8);
  puVar3 = &DAT_00101040;
  do {
    uVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    *puVar3 = uVar2;
    puVar3 = puVar3 + 1;
  } while (puVar4 != puVar1);
  return;
}


/* ---- FUN_00008e78 @ 00008e78 size=44 ---- */

void FUN_00008e78(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  lVar1 = DAT_001013b8 + -0x100e84;
  puVar2 = &DAT_00101068;
  do {
    puVar3 = puVar2 + 1;
    *puVar2 = *(undefined8 *)(lVar1 + (long)puVar2);
    puVar2 = puVar3;
  } while (puVar3 != &DAT_001010c0);
  return;
}


/* ---- FUN_00008ea8 @ 00008ea8 size=20 ---- */

void FUN_00008ea8(undefined8 param_1)

{
  uint uVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram000200000000002c;
  Ram0002000000000003 = param_1;
  Ram0002000000000003 = uVar1 | 0x79;
  return;
}


/* ---- FUN_00008ec0 @ 00008ec0 size=212 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00008ec0(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram000200000000008c = (undefined4)DAT_00101040;
  Ram000200000000008d = (undefined4)DAT_00101050;
  Ram0002000000000021 = DAT_00101048;
  Ram0002000000000022 = DAT_00101058;
  Ram000200000000001f = DAT_00101068;
  Ram0002000000000020 = DAT_00101070;
  uVar2 = Ram00020000000001f0;
  Ram000200000000001c = (ulong)uVar2;
  Ram000200000000001d = DAT_00101080;
  Ram000200000000002b = 0;
  if (DAT_001010bc._3_1_ < '\0') {
    Ram0002000000000013 = 0;
    uVar1 = Ram0002000000000314;
  }
  else {
    Ram0002000000000012 = 0;
    uVar1 = Ram0002000000000314;
  }
  Ram000200000000002f = DAT_001010b4;
  _DAT_1000000028a88 = DAT_001010b8;
  Ram0002000000000000 = 0xc0017a00;
  Ram0002000000000000 = 0x24d;
  Ram0002000000000000 = DAT_001010b8;
  Ram0001000200028a7c = DAT_001010b0;
  uVar2 = 1 << ((long)DAT_001010b0 & 3U) & 3;
  Ram000200000000001c = uVar2;
  Ram00020000000001f0 = uVar2;
  Ram0002000000000000 = 0xc0002a00;
  Ram0002000000000000 = DAT_001010b0;
  return;
}


/* ---- pm4_OP_0F_handler @ 00008f98 size=24 ---- */

void pm4_OP_0F_handler(undefined4 param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0002000000000000 = param_1;
  Ram0073000100000000 = 0;
  Ram000200000000038b = 0;
  uVar2 = Ram0002000000000302;
  uVar1 = Ram0002000000000007;
                    /* WARNING: Could not recover jumptable at 0x00008fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(uVar1 & 0xfffffffffffffffe))(uVar2);
  return;
}


/* ---- FUN_00008fb0 @ 00008fb0 size=4 ---- */

void FUN_00008fb0(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_00008fb8 @ 00008fb8 size=2352 ---- */

void FUN_00008fb8(void)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram00020000000000ac = 0x113d8;
  Ram00020000000000ac = 0x412248;
  Ram00020000000000ac = 0xa11fc8;
  Ram00020000000000ac = 0x1011430;
  Ram00020000000000ac = 0x1111218;
  Ram00020000000000ac = 0x12113a8;
  Ram00020000000000ac = 0x130e440;
  Ram00020000000000ac = 0x150f1d0;
  Ram00020000000000ac = 0x160f1e8;
  Ram00020000000000ac = 0x1d0a728;
  Ram00020000000000ac = 0x1e0aa10;
  Ram00020000000000ac = 0x1f11c40;
  Ram00020000000000ac = 0x2011cc8;
  Ram00020000000000ac = 0x2112ef8;
  Ram00020000000000ac = 0x2211448;
  Ram00020000000000ac = 0x2311748;
  Ram00020000000000ac = 0x240e768;
  Ram00020000000000ac = 0x250e7e8;
  Ram00020000000000ac = 0x260e408;
  Ram00020000000000ac = 0x270e880;
  Ram00020000000000ac = 0x28111c0;
  Ram00020000000000ac = 0x2a0f230;
  Ram00020000000000ac = 0x2c0e458;
  Ram00020000000000ac = 0x2f126a8;
  Ram00020000000000ac = 0x300ebc0;
  Ram00020000000000ac = 0x350ec30;
  Ram00020000000000ac = 0x3709c70;
  Ram00020000000000ac = 0x380ec78;
  Ram00020000000000ac = 0x3c13aa0;
  Ram00020000000000ac = 0x3f10708;
  Ram00020000000000ac = 0x4009dd8;
  Ram00020000000000ac = 0x4213a30;
  Ram00020000000000ac = 0x450ac80;
  Ram00020000000000ac = 0x49136e8;
  Ram00020000000000ac = 0x4a117c8;
  Ram00020000000000ac = 0x4c0f308;
  Ram00020000000000ac = 0x4d0f5e8;
  Ram00020000000000ac = 0x500a0a8;
  Ram00020000000000ac = 0x5112ea8;
  Ram00020000000000ac = 0x5813458;
  Ram00020000000000ac = 0x5911c20;
  Ram00020000000000ac = 0x5d0abf0;
  Ram00020000000000ac = 0x5e126e8;
  Ram00020000000000ac = 0x5f127c0;
  Ram00020000000000ac = 0x60129a0;
  Ram00020000000000ac = 0x6112a70;
  Ram00020000000000ac = 0x6312cc8;
  Ram00020000000000ac = 0x6412df0;
  Ram00020000000000ac = 0x68125a8;
  Ram00020000000000ac = 0x7713208;
  Ram00020000000000ac = 0x7a125e8;
  Ram00020000000000ac = 0x7d0af18;
  Ram00020000000000ac = 0x7e0aeb8;
  Ram00020000000000ac = 0x8b11018;
  Ram00020000000000ac = 0x910eac0;
  Ram00020000000000ac = 0x93141d8;
  Ram00020000000000ac = 0x950aea0;
  Ram00020000000000ac = 0x9a0a5e0;
  Ram00020000000000ac = 0x9b13340;
  Ram00020000000000ac = 0x9f12c00;
  Ram00020000000000ac = 0xa90f270;
  Ram00020000000000ac = 0xfd113e8;
  Ram00020000000000ac = 0xfc11418;
  Ram00020000000000ac = 0x6130f8;
  Ram00020000000000ac = 0x1b130f8;
  Ram00020000000000ac = 0x813110;
  Ram00020000000000ac = 0x913130;
  Ram00020000000000ac = 0x14132d0;
  Ram00020000000000ac = 0xe03bf8;
  Ram00020000000000ac = 0x1710218;
  Ram00020000000000ac = 0xd08e48;
  Ram00020000000000ac = 0xae0af70;
  Ram00020000000000ac = 0x4e101b8;
  Ram00020000000000ac = 0xaf0b210;
  Ram00020000000000ac = 0x4613910;
  Ram00020000000000ac = 0x980ae28;
  Ram00020000000000ac = 0xb711c08;
  Ram00020000000000ac = 0xb812f48;
  Ram00020000000000ac = 0xb912fb8;
  Ram00020000000000ac = 0xba13018;
  Ram00020000000000ac = 0xbb13088;
  Ram00020000000000ac = 0xbd130b8;
  Ram00020000000000ac = 0xb1138d8;
  Ram00020000000000ac = 0xf011030;
  Ram00020000000000ac = 0x34133a8;
  Ram00020000000000ac = 0xb40b338;
  Ram00020000000000ac = 0xb0165a8;
  Ram00020000000000ac = 0xd014e78;
  Ram00020000000000ac = 0xd114920;
  Ram00020000000000ac = 0x3d124d0;
  Ram00020000000000ac = 0xd2124e8;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  Ram00020000000000ac = 0xf08f98;
  return;
}


/* ---- FUN_000098e8 @ 000098e8 size=720 ---- */

/* WARNING: Removing unreachable block (ram,0x00009b00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000098e8(ulong param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  int *piVar8;
  ulong in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram00020000000001f0;
  Ram000200000000001c = (ulong)uVar1;
  Ram00020000000000a5 = 0x100;
  uVar4 = Ram0002000000000314;
  Ram00020000000001f9 = 0x1000100000000;
  Ram00020000000001fa = 0x1080100000000;
  DAT_001013b0 = 0;
  DAT_001013a8 = 0;
  DAT_00101380 = 0;
  DAT_001013a4 = 0;
  DAT_001013a0 = 0;
  DAT_0010139c = 0;
  DAT_00101398 = 0;
  DAT_00101390 = 0;
  DAT_00101388 = 0;
  DAT_0010137c = 0;
  DAT_00101378 = 0;
  DAT_00101374 = 0;
  DAT_00101384 = 0;
  DAT_00101370 = 0;
  puVar6 = &DAT_00101040;
  do {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined8 *)((long)puVar6 + 1);
  } while (puVar6 != &DAT_00101068);
  puVar6 = &DAT_00101068;
  do {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined8 *)((long)puVar6 + 1);
  } while (puVar6 != &DAT_001010c0);
  if (param_1 == 0) {
    Ram0003000000008701 = 0;
    Ram00020000000001ff = 0;
    DAT_300000000068e = 0;
    Ram00020000000001ff = 0;
    _DAT_300000000068f = 0;
    uRam0003000000000696 = 0;
    Ram00020000000001ff = 0;
  }
  puVar7 = (undefined *)0x1d04;
  do {
    lVar2 = Ram00020000000001f9;
    *(undefined4 *)(puVar7 + lVar2) = 0xffffffff;
    puVar7 = puVar7 + 0xc;
  } while (puVar7 != &DAT_00001dc4);
  Ram00020000000001f0 = 0;
  Ram00020000000001f3 = _DAT_00101008;
  Ram00020000000001f1 = 0xc0005300;
  Ram00020000000001f2 = 0xc0012700;
  Ram00020000000001f5 = DAT_00101010;
  Ram0003000000008600 = 0;
  Ram00020000000001ff = 0;
  Ram0003000000008602 = 0;
  Ram00020000000001ff = 0;
  Ram0003000000008604 = 0;
  Ram00020000000001ff = 0;
  Ram0003000000008606 = 0;
  Ram00020000000001ff = 0;
  Ram0003000000008608 = 0;
  Ram00020000000001ff = 0;
  Ram000300000000860a = 0;
  Ram00020000000001ff = 0;
  Ram000300000000860c = 0;
  Ram00020000000001ff = 0;
  Ram000300000000860e = 0;
  Ram00020000000001ff = 0;
  Ram0003000000008610 = 0;
  Ram00020000000001ff = 0;
  Ram0003000000008618 = 0;
  Ram00020000000001ff = 0;
  Ram000300000000870b = 0;
  Ram00020000000001ff = 0;
  Ram000300000000870d = 0;
  Ram00020000000001ff = 0;
  Ram000300000000870f = 0;
  Ram00020000000001ff = 0;
  Ram0003000000008711 = 0;
  Ram00020000000001ff = 0;
  Ram0003000000008703 = 0;
  Ram00020000000001ff = 0;
  Ram0003000000008709 = 0;
  Ram00020000000001ff = 0;
  Ram0003000000008660 = 0;
  Ram00020000000001ff = 0;
  Ram0003000000008662 = 0;
  Ram00020000000001ff = 0;
  Ram0003000000008664 = 0;
  Ram00020000000001ff = 0;
  Ram0003000000008666 = 0;
  Ram00020000000001ff = 0;
  Ram000300000000866a = 0;
  Ram00020000000001ff = 0;
  Ram000300000000866c = 0;
  Ram00020000000001ff = 0;
  Ram00020000000001fb = 0;
  FUN_00008fb8();
  Ram000100000000c4cc = 0x10001 << (param_1 & 0x1f);
  uVar1 = Ram00020000000001f0;
  Ram000200000000001c = (ulong)uVar1;
  Ram00020000000000a5 = 0;
  uVar4 = Ram0002000000000314;
  Ram0002000000000067 = 1;
  lVar2 = Ram00020000000001fa;
  lVar5 = (in_mhartid & 3) << 0x26;
  lVar3 = Ram00020000000001fa;
  *(uint *)(&LAB_0000c3bc + lVar3 + lVar5) = *(uint *)(&LAB_0000c3bc + lVar5 + lVar2) | 0x80;
  lVar2 = Ram00020000000001fa;
  lVar5 = ((in_mhartid & 3) << 2 | 0x10) << 0x24;
  lVar3 = Ram00020000000001fa;
  *(uint *)(&LAB_0000c3bc + lVar3 + lVar5) = *(uint *)(&LAB_0000c3bc + lVar2 + lVar5) | 0x80;
  Ram0002000000000067 = 0;
  piVar8 = (int *)(((ulong)((long)((int)param_1 + 0xca3e) << 0x20) >> 0x1e) + 0x1000000000000);
  *piVar8 = 0xcafe;
  do {
  } while (*piVar8 != 0x51);
  return;
}


/* ---- FUN_00009bb8 @ 00009bb8 size=16 ---- */

void FUN_00009bb8(void)

{
  ulong uVar1;
  undefined4 uVar2;
  
  do {
    uVar2 = Ram0002000000000302;
    uVar1 = Ram0002000000000007;
    (*(code *)(uVar1 & 0xfffffffffffffffe))(uVar2);
  } while( true );
}


/* ---- FUN_00009bc8 @ 00009bc8 size=160 ---- */

void FUN_00009bc8(ulong param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_2 == 0) {
    DAT_00101384 = 0;
    if (param_1 != 1) {
      Ram000200000000030d = 1;
    }
    lVar4 = Ram00020000000001f9;
    *(undefined4 *)(lVar4 + 0xc10) = 0x4011;
    uVar2 = Ram000200000000000b;
    custom0();
    uVar3 = Ram0002000000000015;
    *(undefined4 *)(&TP_R041 + (uVar3 & 3)) = 1;
    do {
      uVar1 = Ram000100000000c128;
    } while ((uVar1 & 0x80000) != 0);
    *(undefined4 *)(&TP_R041 + (uVar3 & 3)) = *(undefined4 *)(&TP_R00B + (uVar3 & 3));
  }
  else {
    DAT_00101384 = 1;
    if ((param_1 & 3) == 1) goto LAB_00009be0;
  }
  do {
    FUN_00009bb8();
LAB_00009be0:
    do {
      lVar4 = Ram000200000000031c;
      if (lVar4 != 0) break;
      lVar4 = Ram000200000000031c;
    } while (lVar4 == 0);
  } while( true );
}


/* ---- pm4_WRITE_DATA_handler @ 00009c70 size=356 ---- */

void pm4_WRITE_DATA_handler(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000302;
  if ((uVar1 >> 0x1e & 1) == 0) {
    Ram0002000000000000 = (int)param_1;
    Ram0002000000000000 = uVar1;
    Ram0073000100000000 = 0;
    Ram000200000000038b = 0;
    uVar2 = Ram0002000000000302;
    uVar7 = Ram0002000000000007;
                    /* WARNING: Could not recover jumptable at 0x00009d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(uVar7 & 0xfffffffffffffffe))(uVar2);
    return;
  }
  uVar7 = Ram0002000000000302;
  lVar3 = Ram0002000000000302;
  uVar8 = (ulong)(int)((uint)((ulong)(param_1 << 0x22) >> 0x32) - 2);
  uVar6 = ((long)((int)uVar1 >> 0x10) ^ 1U) & 1;
  switch(uVar1 >> 6 & 0x3c) {
  case 0:
    uVar7 = uVar7 & 0x3ffff;
    for (uVar4 = 0; uVar4 < uVar8; uVar4 = uVar4 + 1) {
      uVar2 = Ram0002000000000302;
      *(undefined4 *)(uVar7 * 4 + 0x1000000000000) = uVar2;
      uVar7 = uVar7 + uVar6;
    }
    goto LAB_00009d94;
  case 4:
    break;
  case 8:
    goto LAB_00009d14;
  case 0xc:
    break;
  case 0x10:
    break;
  case 0x14:
LAB_00009d14:
    Ram0002000000000073 = lVar3 << 0x20 | uVar7;
    puVar5 = (undefined4 *)Ram0002000000000073;
    Ram0002000000000324 = uVar1 >> 0x19 & 3;
    for (uVar7 = 0; uVar7 < uVar8; uVar7 = uVar7 + 1) {
      uVar2 = Ram0002000000000302;
      *puVar5 = uVar2;
      puVar5 = puVar5 + uVar6;
    }
    if ((uVar1 & 0x100000) != 0) {
      do {
        lVar3 = Ram0002000000000324;
      } while (lVar3 != 0);
    }
LAB_00009d94:
    uVar2 = Ram0002000000000302;
    uVar7 = Ram0002000000000007;
                    /* WARNING: Could not recover jumptable at 0x00009d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(uVar7 & 0xfffffffffffffffe))(uVar2);
    return;
  case 0x18:
    break;
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


/* ---- pm4_COPY_DATA_handler @ 00009dd8 size=716 ---- */

void pm4_COPY_DATA_handler(undefined4 param_1)

{
  uint uVar1;
  ulong *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar5 = Ram0002000000000302;
  if ((uVar5 & 0xc0000000) != 0x40000000) {
    Ram0002000000000000 = param_1;
    Ram0002000000000000 = uVar5;
    Ram0073000100000000 = 0;
    Ram000200000000038b = 0;
    uVar6 = Ram0002000000000302;
    uVar9 = Ram0002000000000007;
                    /* WARNING: Could not recover jumptable at 0x00009ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(uVar9 & 0xfffffffffffffffe))(uVar6);
    return;
  }
  uVar1 = Ram0002000000000302;
  uVar9 = (ulong)uVar1;
  uVar6 = Ram0002000000000302;
  uVar7 = Ram0002000000000302;
  uVar8 = Ram0002000000000302;
  switch(uVar5 & 0xf) {
  case 0:
    uVar1 = *(uint *)(((uVar9 << 0x2e) >> 0x2c) + 0x1000000000000);
    if ((uVar5 & 0x10000) == 0) {
      uVar9 = (ulong)uVar1;
    }
    else {
      uVar9 = CONCAT44(*(undefined4 *)(((uVar9 & 0x3ffff) + 1) * 4 + 0x1000000000000),uVar1);
    }
    goto LAB_00009e8c;
  case 1:
    goto LAB_00009ec4;
  case 2:
LAB_00009ec4:
    Ram000200000000031b = uVar5 >> 0xd & 3;
    lVar10 = CONCAT44(uVar6,uVar1);
    if ((uVar5 & 0x10000) == 0) {
      Ram0002000000000073 = lVar10;
      puVar3 = (uint *)Ram0002000000000073;
      uVar9 = (ulong)*puVar3;
    }
    else {
LAB_00009eec:
      Ram0002000000000073 = lVar10;
      puVar2 = (ulong *)Ram0002000000000073;
      uVar9 = *puVar2;
    }
    goto LAB_00009e8c;
  case 3:
    break;
  case 4:
    break;
  case 5:
    if ((uVar5 & 0x10000) != 0) {
      uVar9 = CONCAT44(uVar6,uVar1);
    }
LAB_00009e8c:
    switch(uVar5 >> 6 & 0x1c) {
    case 0:
      *(int *)((((ulong)uVar7 << 0x2e) >> 0x2c) + 0x1000000000000) = (int)uVar9;
      if ((uVar5 & 0x10000) != 0) {
        *(int *)((((ulong)uVar7 & 0x3ffff) + 1) * 4 + 0x1000000000000) = (int)(uVar9 >> 0x20);
      }
      goto LAB_00009fd4;
    case 4:
      break;
    case 8:
      goto LAB_0000a044;
    case 0xc:
      break;
    case 0x10:
      break;
    case 0x14:
LAB_0000a044:
      Ram0002000000000324 = uVar5 >> 0x19 & 3;
      if ((uVar5 & 0x10000) == 0) {
        Ram0002000000000073 = CONCAT44(uVar8,uVar7);
        puVar4 = (undefined4 *)Ram0002000000000073;
        *puVar4 = (int)uVar9;
      }
      else {
        Ram0002000000000073 = CONCAT44(uVar8,uVar7);
        puVar2 = (ulong *)Ram0002000000000073;
        *puVar2 = uVar9;
      }
      if ((uVar5 & 0x100000) != 0) {
        do {
          lVar10 = Ram0002000000000324;
        } while (lVar10 != 0);
      }
LAB_00009fd4:
      uVar6 = Ram0002000000000302;
      uVar9 = Ram0002000000000007;
                    /* WARNING: Could not recover jumptable at 0x00009fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(uVar9 & 0xfffffffffffffffe))(uVar6);
      return;
    case 0x18:
      break;
    case 0x1c:
      Ram0002000000000324 = uVar5 >> 0x19 & 3;
      lVar10 = Ram0003000000008602;
      Ram0002000000000073 = CONCAT44(uVar8,uVar7) + lVar10;
      puVar2 = (ulong *)Ram0002000000000073;
      *puVar2 = uVar9;
      if ((uVar5 & 0x100000) != 0) {
        do {
          lVar10 = Ram0002000000000324;
        } while (lVar10 != 0);
      }
      goto LAB_00009fd4;
    }
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  case 6:
    break;
  case 7:
    break;
  case 8:
    break;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    break;
  case 0xc:
    Ram000200000000031b = uVar5 >> 0xd & 3;
    lVar10 = Ram0003000000008600;
    lVar10 = CONCAT44(uVar6,uVar1) + lVar10;
    goto LAB_00009eec;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- pm4_DMA_DATA_handler @ 0000a0a8 size=1328 ---- */

/* WARNING: Removing unreachable block (ram,0x0000a4f0) */
/* WARNING: Removing unreachable block (ram,0x0000a174) */
/* WARNING: Removing unreachable block (ram,0x0000a16c) */
/* WARNING: Removing unreachable block (ram,0x0000a2b4) */
/* WARNING: Removing unreachable block (ram,0x0000a1b8) */
/* WARNING: Removing unreachable block (ram,0x0000a180) */
/* WARNING: Removing unreachable block (ram,0x0000a2ac) */
/* WARNING: Removing unreachable block (ram,0x0000a490) */
/* WARNING: Removing unreachable block (ram,0x0000a488) */
/* WARNING: Removing unreachable block (ram,0x0000a49c) */
/* WARNING: Removing unreachable block (ram,0x0000a4e8) */
/* WARNING: Removing unreachable block (ram,0x0000a4fc) */
/* WARNING: Removing unreachable block (ram,0x0000a1c0) */
/* WARNING: Removing unreachable block (ram,0x0000a2c0) */
/* WARNING: Removing unreachable block (ram,0x0000a1cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pm4_DMA_DATA_handler(undefined4 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar4 = Ram0002000000000302;
  if ((uVar4 & 1) == 0) {
    uVar2 = Ram00020000000000a2;
    Ram0002000000000084 = 1;
    Ram0002000000000000 = (int)((ulong)uVar2 >> 0x20);
    Ram0002000000000000 = (int)uVar2;
    Ram0002000000000000 = param_1;
    Ram0002000000000000 = uVar4;
    Ram0073000100000000 = 0;
    Ram000200000000038b = 0;
    uVar14 = Ram0002000000000302;
    uVar20 = Ram0002000000000007;
                    /* WARNING: Could not recover jumptable at 0x0000a388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(uVar20 & 0xfffffffffffffffe))(uVar14);
    return;
  }
  uVar19 = uVar4 & 0x300000;
  if ((uVar19 == 0x200000) && (uVar20 = Ram0002000000000013, 2 < uVar20)) {
    puVar3 = (undefined8 *)Ram00020000000001f3;
    *puVar3 = 0;
    Ram000200000000038b = 0;
    if ((int)uVar4 < 0) {
      uVar20 = Ram0002000000000015;
      uVar20 = uVar20 & 3;
      *(undefined4 *)(&TP_R041 + uVar20) = 1;
      do {
        lVar21 = Ram0002000000000013;
      } while (lVar21 != 0);
      uVar16 = Ram000100000000c6bc;
      if ((uVar16 >> 0xc & 3) != 0) {
        do {
        } while( true );
      }
      if ((uVar16 & 1) != 0) {
        Ram000100000000c6bc = 0;
      }
      *(undefined4 *)(&TP_R041 + uVar20) = *(undefined4 *)(&TP_R00B + uVar20);
    }
    uVar14 = Ram0002000000000302;
    uVar20 = Ram0002000000000007;
                    /* WARNING: Could not recover jumptable at 0x0000a320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(uVar20 & 0xfffffffffffffffe))(uVar14);
    return;
  }
  uVar14 = Ram0002000000000302;
  uVar5 = Ram0002000000000302;
  uVar6 = Ram0002000000000302;
  uVar7 = Ram0002000000000302;
  uVar8 = Ram0002000000000302;
  uVar17 = uVar4 & 0x60000000;
  if ((((uVar8 & 0x3ffffff) < 0x8000) ||
      ((uVar17 != 0x60000000 && ((uVar8 & 0x10000000) != 0 || uVar17 != 0)))) ||
     ((uVar19 != 0x300000 && ((uVar8 & 0x20000000) != 0 || uVar19 != 0)))) {
    do {
      uVar20 = Ram0002000000000013;
    } while (0xf < uVar20);
    Ram0002000000000029 = 0;
    uVar2 = Ram00020000000000a2;
    Ram0001000000030278 = (int)uVar2;
    Ram000100000003027c = (int)((ulong)uVar2 >> 0x20);
    uVar18 = 0;
    uVar15 = uVar4 >> 0x1d & 3;
    if ((uVar17 == 0x60000000) || ((uVar8 >> 0x1a & 1) == 0 && uVar15 == 0)) {
      lVar21 = CONCAT44(uVar5,uVar14);
      if ((uVar4 & 2) != 0) {
        lVar9 = Ram0003000000008600;
        lVar21 = lVar21 + lVar9;
      }
      Ram0002000000000073 = lVar21;
      uVar2 = Ram0002000000000073;
      Ram0001000000030214 = (int)uVar2;
      Ram0001000000030218 = (int)((ulong)uVar2 >> 0x20);
      uVar18 = (uVar4 >> 0xd & 3) << 0xd;
    }
    else {
      Ram0001000000030214 = uVar14;
      Ram0001000000030218 = uVar5;
    }
    uVar17 = uVar4 >> 0x14 & 3;
    if ((uVar19 == 0x300000) || ((uVar8 >> 0x1b & 1) == 0 && uVar17 == 0)) {
      lVar21 = CONCAT44(uVar7,uVar6);
      if ((uVar4 & 4) != 0) {
        lVar9 = Ram0003000000008602;
        lVar21 = lVar21 + lVar9;
      }
      Ram0002000000000073 = lVar21;
      uVar2 = Ram0002000000000073;
      Ram000100000003021c = (int)uVar2;
      Ram0001000000030220 = (int)((ulong)uVar2 >> 0x20);
      uVar18 = uVar18 | (uVar4 >> 0x19 & 3) << 0x19;
    }
    else {
      Ram000100000003021c = uVar6;
      Ram0001000000030220 = uVar7;
    }
    uVar14 = Ram0002000000000302;
    uVar20 = Ram0002000000000007;
    Ram00010000000301dc = uVar18 | uVar17 << 0x14 | uVar15 << 0x1d;
    Ram0001000000030224 = uVar8;
    if ((int)uVar4 < 0) {
      uVar16 = Ram0002000000000015;
      uVar16 = uVar16 & 3;
      *(undefined4 *)(&TP_R041 + uVar16) = 1;
      do {
        lVar21 = Ram0002000000000013;
      } while (lVar21 != 0);
      uVar1 = Ram000100000000c6bc;
      if ((uVar1 >> 0xc & 3) != 0) {
        do {
        } while( true );
      }
      if ((uVar1 & 1) != 0) {
        Ram000100000000c6bc = 0;
      }
      *(undefined4 *)(&TP_R041 + uVar16) = *(undefined4 *)(&TP_R00B + uVar16);
    }
  }
  else {
    uVar16 = Ram0002000000000015;
    uVar16 = uVar16 & 3;
    *(undefined4 *)(&TP_R041 + uVar16) = 1;
    uVar19 = Ram000100000000c6bc;
    if (1 < (uVar19 >> 0xc & 3)) {
      do {
      } while( true );
    }
    Ram000100000000c6bc = 1;
    _DAT_100000002a404 = 0;
    if ((uVar19 & 1) == 0) {
      do {
      } while( true );
    }
    uVar2 = Ram00020000000000a2;
    Ram0001000000030278 = (int)uVar2;
    Ram000100000003027c = (int)((ulong)uVar2 >> 0x20);
    uVar19 = uVar19 >> 4 & 0xf;
    if (uVar19 == 2) {
LAB_0000a290:
      FUN_00009bb8();
      return;
    }
    if (uVar19 < 3) {
      uVar17 = uVar4;
      uVar10 = uVar14;
      uVar11 = uVar5;
      uVar12 = uVar6;
      uVar13 = uVar7;
      uVar18 = uVar8 & 0x43ffffff;
      if (uVar19 != 0) {
        uVar17 = _DAT_10000000049b0;
        uVar10 = _DAT_10000000049c4;
        uVar11 = _DAT_10000000049c8;
        uVar12 = _DAT_10000000049cc;
        uVar13 = _DAT_10000000049d0;
        uVar18 = _DAT_10000000049d4;
        _DAT_10000000061b0 = uVar4;
        _DAT_10000000061c4 = uVar14;
        _DAT_10000000061c8 = uVar5;
        _DAT_10000000061cc = uVar6;
        _DAT_10000000061d0 = uVar7;
        _DAT_10000000061d4 = uVar8 & 0x43ffffff;
      }
    }
    else {
      uVar17 = _DAT_10000000049b0;
      uVar10 = _DAT_10000000049c4;
      uVar11 = _DAT_10000000049c8;
      uVar12 = _DAT_10000000049cc;
      uVar13 = _DAT_10000000049d0;
      uVar18 = _DAT_10000000049d4;
      if (uVar19 == 3) goto LAB_0000a290;
    }
    _DAT_10000000049d4 = uVar18;
    _DAT_10000000049d0 = uVar13;
    _DAT_10000000049cc = uVar12;
    _DAT_10000000049c8 = uVar11;
    _DAT_10000000049c4 = uVar10;
    _DAT_10000000049b0 = uVar17;
    uVar14 = Ram0002000000000302;
    uVar20 = Ram0002000000000007;
    if ((int)uVar4 < 0) {
      uVar1 = Ram000100000000c6bc;
      if ((uVar1 >> 0xc & 3) != 0) {
        do {
        } while( true );
      }
      if ((uVar1 & 1) != 0) {
        Ram000100000000c6bc = 0;
      }
      do {
        lVar21 = Ram0002000000000013;
        if (lVar21 == 0) break;
        lVar21 = Ram0002000000000013;
      } while (lVar21 != 0);
    }
    *(undefined4 *)(&TP_R041 + uVar16) = *(undefined4 *)(&TP_R00B + uVar16);
  }
                    /* WARNING: Could not recover jumptable at 0x0000a284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(uVar20 & 0xfffffffffffffffe))(uVar14);
  return;
}


/* ---- pm4_DMA_DATA_FILL_MULTI_handler @ 0000a5e0 size=320 ---- */

void pm4_DMA_DATA_FILL_MULTI_handler(undefined4 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar4 = Ram0002000000000302;
  if ((uVar4 & 1) != 0) {
    uVar5 = Ram0002000000000302;
    uVar6 = Ram0002000000000302;
    uVar2 = Ram0002000000000302;
    lVar12 = Ram0002000000000302;
    uVar7 = Ram0002000000000302;
    do {
      uVar1 = Ram0002000000000013;
    } while (0xf < uVar1);
    Ram0002000000000029 = 0;
    lVar11 = (ulong)uVar6 - 1;
    Ram0002000000000073 = lVar12 << 0x20 | uVar2;
    lVar12 = Ram0002000000000073;
    uVar3 = Ram00020000000000a2;
    uVar8 = (undefined4)((ulong)uVar3 >> 0x20);
    if (lVar11 != 0) {
      lVar9 = lVar11;
      lVar10 = lVar12;
      do {
        Ram0001000000030214 = 0;
        Ram0001000000030218 = 0;
        Ram000100000003021c = (int)lVar10;
        Ram0001000000030220 = (int)((ulong)lVar10 >> 0x20);
        Ram00010000000301dc = uVar4;
        Ram0001000000030278 = (int)uVar3;
        Ram000100000003027c = uVar8;
        lVar9 = lVar9 + -1;
        Ram0001000000030224 = uVar7 | 0x80000000;
        do {
          uVar2 = Ram0002000000000013;
        } while (0xf < uVar2);
        Ram0002000000000029 = 0;
        lVar10 = lVar10 + (ulong)uVar5;
      } while (lVar9 != 0);
      lVar12 = lVar12 + lVar11 * (ulong)uVar5;
    }
    Ram0001000000030214 = 0;
    Ram0001000000030218 = 0;
    Ram000100000003021c = (int)lVar12;
    Ram0001000000030220 = (int)((ulong)lVar12 >> 0x20);
    Ram00010000000301dc = uVar4;
    Ram0001000000030278 = (int)uVar3;
    Ram000100000003027c = uVar8;
    Ram0001000000030224 = uVar7;
    do {
      lVar12 = Ram0002000000000013;
    } while (lVar12 != 0);
    FUN_00009bb8();
    return;
  }
  uVar3 = Ram00020000000000a2;
  Ram0002000000000084 = 1;
  Ram0002000000000000 = (int)((ulong)uVar3 >> 0x20);
  Ram0002000000000000 = (int)uVar3;
  Ram0002000000000000 = param_1;
  Ram0002000000000000 = uVar4;
  Ram0073000100000000 = 0;
  Ram000200000000038b = 0;
  FUN_00009bb8();
  return;
}


/* ---- pm4_ATOMIC_GDS_handler @ 0000a728 size=740 ---- */

/* WARNING: Removing unreachable block (ram,0x0000a9e8) */
/* WARNING: Removing unreachable block (ram,0x0000a744) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pm4_ATOMIC_GDS_handler(uint param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar2 = Ram0002000000000302;
  if ((uVar2 & 0xc0000000) == 0x40000000) {
    if ((int)in_mhartid == 0) {
      uVar8 = 0x2000000;
      uVar6 = 9;
    }
    else {
      uVar8 = 0x4000000;
      uVar6 = 10;
    }
    Ram00020000000000a6 = uVar6;
LAB_0000a75c:
    iVar9 = Ram0002000000000074;
    if (iVar9 == 0) goto code_r0x0000a768;
    Ram0002000000000000 = param_1;
    Ram0002000000000000 = uVar2;
    for (iVar9 = 2; iVar9 <= (int)((uint)(((ulong)param_1 << 0x22) >> 0x32) + 1); iVar9 = iVar9 + 1)
    {
      uVar4 = Ram0002000000000302;
    }
    goto LAB_0000a8b8;
  }
  Ram0002000000000000 = param_1;
  Ram0002000000000000 = uVar2;
  Ram0073000100000000 = 0;
  Ram000200000000038b = 0;
  iVar9 = Ram0002000000000032;
  if (iVar9 != 0) {
    Ram0002000000000000 = 0xc00f1000;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    do {
      uVar8 = Ram0002000000000314;
    } while ((0x400L << (in_mhartid & 0x3f) & uVar8) != 0);
    lVar1 = Ram0003000000008701;
    if (lVar1 != 0) {
      FUN_00008c60(0xb);
    }
  }
LAB_0000a8bc:
  FUN_00009bb8();
  return;
code_r0x0000a768:
  uVar7 = Ram0002000000000021;
  if ((uVar8 & uVar7) != 0) goto code_r0x0000a774;
  goto LAB_0000a75c;
code_r0x0000a774:
  _DAT_1000000031028 = Ram0002000000000302;
  _DAT_1000000031030 = Ram0002000000000302;
  _DAT_1000000031034 = Ram0002000000000302;
  _DAT_1000000031038 = Ram0002000000000302;
  _DAT_1000000031044 = uVar2 & 0xff;
  _DAT_100000003103c = _DAT_1000000031038 >> 0x10 & 0xff;
  _DAT_1000000031038 = _DAT_1000000031038 & 0xff;
  _DAT_1000000031040 = Ram0002000000000302;
  uVar3 = Ram0002000000000302;
  uVar4 = Ram0002000000000302;
  uVar11 = uVar2 >> 0x13 & 2;
  uVar10 = uVar2 >> 0x13 & 1;
  uVar12 = Ram0002000000000302;
  uVar5 = Ram0002000000000302;
  _DAT_1000000031050 = uVar3;
  _DAT_100000003104c = uVar5;
  _DAT_1000000031054 = uVar4;
  if ((uVar2 & 0x9e) != 0x10) {
    _DAT_1000000031050 = uVar12;
    _DAT_100000003104c = uVar4;
    uVar12 = uVar3;
    _DAT_1000000031054 = uVar5;
  }
  iVar9 = Ram0002000000000074;
  if (iVar9 == 0) {
    _DAT_1000000031048 = uVar12;
    if ((uVar2 & 0x40000) != 0) {
      if (uVar11 == 0) goto LAB_0000a8f8;
LAB_0000a854:
      uVar8 = (long)_DAT_100000003105c << 0x20;
      if (uVar10 == 0) {
        uVar7 = 0;
        uVar13 = 0;
        goto LAB_0000a878;
      }
      uVar13 = (long)_DAT_1000000031064 << 0x20;
      do {
        uVar7 = (ulong)_DAT_1000000031060;
LAB_0000a878:
        while( true ) {
          Ram0002000000000034 = _DAT_1000000031058 | uVar8;
          if (uVar10 != 0) {
            Ram0002000000000035 = uVar7 & 0xffffffff | uVar13;
          }
          if ((uVar2 & 0x10000) == 0) goto LAB_0000a8b8;
          if (uVar11 == 0) {
            if (uVar3 == _DAT_1000000031058) goto LAB_0000a8b8;
          }
          else if (CONCAT44(uVar4,uVar3) == (_DAT_1000000031058 | uVar8)) goto LAB_0000a8b8;
          lVar1 = Ram0002000000000015;
          if (((lVar1 != 0) && (lVar1 = Ram0002000000000032, lVar1 != 0)) &&
             (lVar1 = Ram0002000000000035, lVar1 != 0)) {
            FUN_00008c60(0xb);
            goto LAB_0000a8b8;
          }
          iVar9 = Ram0002000000000074;
          if (iVar9 != 0) goto LAB_0000a8b8;
          if (uVar11 != 0) goto LAB_0000a854;
LAB_0000a8f8:
          if (uVar10 != 0) break;
          uVar7 = 0;
          uVar8 = 0;
          uVar13 = 0;
        }
        uVar8 = 0;
        uVar13 = 0;
      } while( true );
    }
    if ((uVar2 & 0x20000) != 0) {
      do {
      } while (_DAT_100000003102c == 0);
    }
  }
LAB_0000a8b8:
  Ram00020000000000a7 = uVar6;
  goto LAB_0000a8bc;
}


/* ---- pm4_ATOMIC_MEM_handler @ 0000aa10 size=472 ---- */

/* WARNING: Removing unreachable block (ram,0x0000abc8) */

void pm4_ATOMIC_MEM_handler(undefined4 param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar10 = Ram0002000000000302;
  if ((uVar10 & 0xc0000000) == 0) {
    Ram0002000000000000 = param_1;
    Ram0002000000000000 = uVar10;
    Ram0073000100000000 = 0;
    Ram000200000000038b = 0;
    iVar3 = Ram0002000000000032;
    if (iVar3 != 0) {
      Ram0002000000000000 = 0xc00f1000;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      do {
        uVar12 = Ram0002000000000314;
      } while ((0x400L << (in_mhartid & 0x3f) & uVar12) != 0);
      lVar2 = Ram0003000000008701;
      if (lVar2 != 0) {
        FUN_00008c60(9);
      }
    }
  }
  else {
    if ((uVar10 & 0xc0000000) == 0x40000000) {
      uVar12 = Ram0002000000000302;
      lVar2 = Ram0002000000000302;
      Ram0002000000000073 = lVar2 << 0x20 | uVar12;
      uVar4 = Ram0002000000000073;
      uVar1 = uVar10 >> 0x12;
      uVar12 = Ram0002000000000302;
      lVar2 = Ram0002000000000302;
      uVar8 = Ram0002000000000302;
      lVar7 = Ram0002000000000302;
      uVar8 = lVar7 << 0x20 | uVar8;
      if ((uVar10 & 0x7f) == 0) {
        uVar10 = uVar10 & 0xffffff80 | 0x6f;
        uVar12 = 0;
      }
      else {
        uVar12 = lVar2 << 0x20 | uVar12;
      }
      uVar6 = Ram0002000000000302;
      uVar11 = uVar10 >> 8 & 0xf;
      Ram000200000000031b = uVar1 & 0x180 | uVar10 & 0x7f;
      Ram000200000000031c = uVar4;
      Ram000200000000031d = uVar12;
      Ram000200000000031e = uVar8;
      Ram0002000000000370 = 0x600000001;
      Ram0002000000000321 = 1;
      if (uVar11 == 2) {
        do {
          lVar2 = Ram0002000000000323;
        } while (lVar2 != 0);
      }
      else if (uVar11 == 1) {
        while( true ) {
          lVar9 = 1;
          lVar2 = Ram0002000000000074;
          lVar7 = Ram0002000000000321;
          if (lVar2 != 0) break;
          if (lVar7 == 0) {
            uVar12 = Ram0002000000000322;
            if (uVar12 == uVar8) break;
            lVar2 = Ram0002000000000015;
            if (((lVar2 != 0) && (iVar3 = Ram0002000000000032, iVar3 != 0)) &&
               (iVar3 = Ram0002000000000035, iVar3 != 0)) {
              FUN_00008c60(9);
              return;
            }
            do {
              lVar9 = lVar9 + 1;
            } while (lVar9 != (long)(int)((uint)(((ulong)uVar6 << 0x33) >> 0x33) << 6) + 2);
            Ram0002000000000321 = 1;
          }
        }
      }
      else {
        do {
          lVar2 = Ram0002000000000074;
          lVar7 = Ram0002000000000321;
          if (lVar2 != 0) break;
        } while (lVar7 != 0);
      }
      FUN_00009bb8();
      return;
    }
    puVar5 = (undefined8 *)Ram00020000000001f3;
    *puVar5 = 0;
    Ram000200000000038b = 0;
  }
  FUN_00009bb8();
  return;
}


/* ---- pm4_PRIME_UTCL2_handler @ 0000abf0 size=132 ---- */

void pm4_PRIME_UTCL2_handler(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar5 = 0;
  do {
    iVar3 = Ram0002000000000302;
    uVar6 = Ram0002000000000302;
    lVar2 = Ram0002000000000302;
    Ram0002000000000073 = lVar2 << 0x20 | uVar6;
    uVar1 = Ram0002000000000073;
    Ram0002000000000324 = 0;
    Ram0002000000000325 = uVar1;
    iVar4 = Ram0002000000000302;
    Ram00020000000000ba = ((long)(iVar3 << 1) | 1U) << 0x20 | (ulong)(uint)(iVar4 << 10);
    uVar6 = (long)(iVar3 << 1) & 0x10;
    while ((uVar6 != 0 && (lVar2 = Ram00020000000000ba, lVar2 != 0))) {
      uVar6 = Ram00020000000000ba;
    }
    uVar5 = uVar5 + 4;
  } while (uVar5 < ((ulong)(param_1 << 0x22) >> 0x32) + 1);
  FUN_00009bb8();
  return;
}


/* ---- thunk_FUN_00009bb8 @ 0000ac78 size=4 ---- */

void thunk_FUN_00009bb8(void)

{
  ulong uVar1;
  undefined4 uVar2;
  
  do {
    uVar2 = Ram0002000000000302;
    uVar1 = Ram0002000000000007;
    (*(code *)(uVar1 & 0xfffffffffffffffe))(uVar2);
  } while( true );
}


/* ---- pm4_COND_WRITE_handler @ 0000ac80 size=412 ---- */

void pm4_COND_WRITE_handler(undefined4 param_1)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  int *piVar10;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar2 = Ram0002000000000302;
  if (uVar2 >> 0x1e == 0) {
    Ram0002000000000000 = param_1;
    Ram0002000000000000 = uVar2;
    Ram0073000100000000 = 0;
    Ram000200000000038b = 0;
    FUN_00009bb8();
    return;
  }
  uVar3 = Ram0002000000000302;
  uVar4 = Ram0002000000000302;
  uVar9 = Ram0002000000000302;
  uVar8 = (ulong)uVar9;
  uVar9 = Ram0002000000000302;
  if ((uVar2 & 0x10) == 0) {
    uVar7 = (ulong)*(uint *)((((ulong)uVar3 << 0x20) >> 0x1e) + 0x1000000000000);
  }
  else {
    Ram000200000000031b = uVar2 >> 0x19 & 3;
    Ram0002000000000073 = CONCAT44(uVar4,uVar3);
    puVar1 = (ulong *)Ram0002000000000073;
    uVar7 = *puVar1;
  }
  uVar7 = uVar9 & uVar7;
  switch(uVar2 & 7) {
  case 1:
    break;
  case 2:
    goto joined_r0x0000ae1c;
  case 3:
    goto joined_r0x0000ad50;
  case 4:
joined_r0x0000ad50:
    if (uVar8 != uVar7) goto switchD_0000ad28_default;
    goto LAB_0000ad88;
  case 5:
    break;
  case 6:
joined_r0x0000ae1c:
    if (uVar8 < uVar7) goto switchD_0000ad28_default;
    goto LAB_0000ad88;
  default:
    goto switchD_0000ad28_default;
  }
  if (uVar8 <= uVar7) {
switchD_0000ad28_default:
    uVar9 = uVar2 >> 8 & 3;
    uVar3 = Ram0002000000000302;
    uVar4 = Ram0002000000000302;
    iVar5 = Ram0002000000000302;
    if (uVar9 == 0) {
      piVar10 = (int *)((((ulong)uVar3 << 0x20) >> 0x1e) + 0x1000000000000);
      *piVar10 = iVar5;
      if ((uVar2 >> 0x14 & 1) != 0) {
        do {
        } while (iVar5 != *piVar10);
      }
      goto LAB_0000ad94;
    }
    if (uVar9 == 1) {
      Ram0002000000000324 = uVar2 >> 0x19 & 3;
      Ram0002000000000073 = CONCAT44(uVar4,uVar3);
      piVar10 = (int *)Ram0002000000000073;
      *piVar10 = iVar5;
      if ((uVar2 >> 0x14 & 1) != 0) {
        do {
          lVar6 = Ram0002000000000324;
        } while (lVar6 != 0);
        piVar10 = (int *)0x0;
      }
      goto LAB_0000ad94;
    }
  }
LAB_0000ad88:
  uVar4 = Ram0002000000000302;
  uVar4 = Ram0002000000000302;
  uVar2 = Ram0002000000000302;
  piVar10 = (int *)(ulong)uVar2;
LAB_0000ad94:
  FUN_00009bb8(piVar10);
  return;
}


/* ---- pm4_INVALIDATE_TLBS_handler @ 0000ae28 size=116 ---- */

/* WARNING: Removing unreachable block (ram,0x0000ae84) */

void pm4_INVALIDATE_TLBS_handler(undefined4 param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000302;
  Ram0002000000000000 = param_1;
  uVar1 = Ram0002000000000023;
  Ram0002000000000000 = uVar1;
  Ram0002000000000000 = 0xc00f1000;
  Ram0002000000000000 = 0;
  Ram0002000000000000 = 0;
  Ram0002000000000000 = 0;
  Ram0002000000000000 = 0;
  Ram0002000000000000 = 0;
  Ram0002000000000000 = 0;
  Ram0002000000000000 = 0;
  Ram0002000000000000 = 0;
  Ram0002000000000000 = 0;
  Ram0002000000000000 = 0;
  Ram0002000000000000 = 0;
  Ram0002000000000000 = 0;
  Ram0002000000000000 = 0;
  Ram0002000000000000 = 0;
  Ram0002000000000000 = 0;
  Ram0002000000000000 = 0;
  do {
    uVar2 = Ram0002000000000314;
  } while ((0x400L << (in_mhartid & 0x3f) & uVar2) != 0);
  FUN_00009bb8();
  return;
}


/* ---- pm4_HDP_FLUSH_handler @ 0000aea0 size=16 ---- */

void pm4_HDP_FLUSH_handler(undefined4 param_1)

{
  undefined4 uVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000302;
  Ram0002000000000000 = param_1;
  Ram0002000000000000 = uVar1;
  FUN_00009bb8();
  return;
}


/* ---- pm4_SCRATCH_RAM_READ_handler @ 0000aeb8 size=88 ---- */

/* WARNING: Removing unreachable block (ram,0x0000aee8) */

void pm4_SCRATCH_RAM_READ_handler(undefined4 param_1)

{
  uint uVar1;
  uint in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000302;
  Ram0002000000000000 = param_1;
  Ram0002000000000000 = (int)((ulong)uVar1 & 0xff);
  *(undefined4 *)
   (((ulong)((long)(int)((in_mhartid & 3) + 0xc041) << 0x20) >> 0x1e) + 0x1000000000000) =
       *(undefined4 *)(((ulong)uVar1 & 0xff) + 0x3000000000600);
  FUN_00009bb8();
  return;
}


/* ---- pm4_SCRATCH_RAM_WRITE_handler @ 0000af18 size=84 ---- */

void pm4_SCRATCH_RAM_WRITE_handler(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000302;
  uVar2 = Ram0002000000000302;
  if ((uVar1 & 0xc0000000) == 0) {
    Ram0002000000000000 = param_1;
    Ram0002000000000000 = uVar1 & 0xff;
    Ram0002000000000000 = uVar2;
  }
  else if ((uVar1 & 0xc0000000) == 0x40000000) {
    *(undefined4 *)(((ulong)uVar1 & 0xff) + 0x3000000000600) = uVar2;
    Ram00020000000001ff = 0;
  }
  FUN_00009bb8();
  return;
}


/* ---- pm4_OP_AE_handler @ 0000af70 size=664 ---- */

void pm4_OP_AE_handler(void)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar15 = Ram0002000000000302;
  lVar2 = Ram0002000000000302;
  uVar13 = Ram0002000000000302;
  uVar1 = Ram0002000000000302;
  uVar14 = (ulong)uVar1;
  uVar12 = Ram0002000000000302;
  lVar11 = Ram0002000000000302;
  if ((uVar13 & 0x800000) != 0) {
    Ram0002000000000073 = lVar11 << 0x20 | uVar12;
    puVar3 = (uint *)Ram0002000000000073;
    if (*puVar3 < uVar1) {
      uVar14 = (ulong)*puVar3;
    }
  }
  if (uVar14 != 0) {
    uVar16 = (ulong)uVar13 & 0xfffff;
    uVar1 = Ram0002000000000032;
    Ram000300000000860c = (ulong)uVar1 << 0x20 | uVar16;
    Ram00020000000001ff = 0;
    Ram0003000000008604 = uVar14;
    Ram00020000000001ff = 0;
    uVar5 = Ram0002000000000302;
    uVar7 = Ram0002000000000302;
    uVar8 = Ram0002000000000302;
    Ram0003000000008606 = CONCAT44(uVar8 >> 0x10,uVar5);
    Ram00020000000001ff = 0;
    uVar1 = Ram0002000000000302;
    uVar9 = Ram0002000000000302;
    DAT_00101088 = (ulong)((long)(int)uVar8 << 0x30) >> 0x10 | (ulong)uVar7;
    uVar7 = Ram0002000000000302;
    uVar8 = Ram0002000000000302;
    uVar10 = Ram0002000000000302;
    uVar12 = (ulong)(int)(uVar8 >> 0x10);
    uVar14 = (ulong)((long)(int)uVar9 << 0x30) >> 0x10 | (ulong)uVar1;
    if (uVar12 != 0) {
      uVar12 = (ulong)(int)((uVar8 >> 0x10) - 1);
    }
    uVar15 = lVar2 << 0x20 | uVar15;
    Ram0003000000008610 = uVar12 & 0xffffffff;
    Ram00020000000001ff = 0;
    Ram000300000000860e = uVar14;
    Ram00020000000001ff = 0;
    Ram0003000000008608 =
         ((ulong)uVar7 << 0x20) >> 0x10 | (long)(int)(uVar9 >> 0x10) | (long)(int)uVar8 << 0x30;
    Ram00020000000001ff = 0;
    Ram0003000000008618 = (ulong)uVar10;
    Ram00020000000001ff = 0;
    Ram0002000000000048 = 0;
    uVar5 = Ram0002000000000314;
    Ram0002000000000000 = 0xc000ae00;
    Ram0002000000000000 = 0;
    Ram000200000000008d = 0;
    Ram0002000000000011 = (uint)(((ulong)uVar13 << 0x2c) >> 0x2c);
    Ram0002000000000022 = uVar15;
    Ram0002000000000073 = uVar15;
    uVar4 = Ram0002000000000073;
    Ram000300000000860a = uVar4;
    Ram00020000000001ff = 0;
    Ram0002000000000002 = uVar4;
    Ram0002000000000002 = uVar16 | 0x100000000;
    Ram000200000000000a = 0xc0023f00;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram000200000000001a = 2;
    uVar15 = Ram0003000000008608;
    lVar11 = Ram0003000000008618;
    uVar13 = Ram000200000000000a;
    uVar13 = uVar13 >> 0x10 & 1;
    lVar2 = Ram0002000000000011;
    if (lVar2 == 0) {
      Ram0002000000000018 = 0;
      uVar5 = Ram00020000000001f1;
      Ram0002000000000000 = uVar5;
      Ram0002000000000000 = 0;
    }
    if (lVar11 != 0) {
      Ram0002000000000028 = uVar13;
      Ram0002000000000000 = 0xc0017600;
      Ram0002000000000000 = (uint)lVar11 & 0xffff;
      Ram0002000000000000 = uVar1;
      uVar1 = ((uint)((ulong)lVar11 >> 0x10) & 0xffff) + uVar1;
    }
    for (; uVar15 != 0; uVar15 = uVar15 >> 0x10) {
      Ram0002000000000028 = uVar13;
      Ram0002000000000000 = 0xc0017600;
      Ram0002000000000000 = (uint)uVar15 & 0xffff;
      Ram0002000000000000 = uVar1;
    }
    Ram0003000000008602 = uVar14;
    Ram00020000000001ff = 0;
    Ram0003000000008600 = DAT_00101088;
    Ram00020000000001ff = 0;
    Ram000200000000001f = DAT_00101088;
    Ram0002000000000020 = DAT_00101088;
    uVar5 = Ram0002000000000302;
    uVar15 = Ram0002000000000007;
                    /* WARNING: Could not recover jumptable at 0x0000b1c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(uVar15 & 0xfffffffffffffffe))(uVar5);
    return;
  }
  puVar6 = (undefined8 *)Ram00020000000001f3;
  *puVar6 = 0;
  Ram000200000000038b = 0;
  FUN_00009bb8();
  return;
}


/* ---- pm4_OP_AF_handler @ 0000b210 size=288 ---- */

void pm4_OP_AF_handler(void)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar4 = Ram0002000000000302;
  if ((uVar4 & 1) == 0) {
    uVar11 = Ram0002000000000302;
    uVar6 = Ram0002000000000302;
    lVar10 = ((ulong)uVar4 & 0xfffffffffffffff0 | (ulong)uVar11 << 0x20) + (ulong)uVar6;
    uVar5 = Ram0002000000000302;
    uVar7 = Ram0002000000000302;
    uVar11 = Ram0002000000000302;
    lVar12 = CONCAT44(uVar7,uVar5) + (ulong)uVar11;
  }
  else {
    lVar10 = Ram0003000000008600;
    uVar5 = Ram0002000000000302;
    uVar11 = Ram0002000000000302;
    lVar10 = (ulong)uVar11 + lVar10;
    uVar5 = Ram0002000000000302;
    uVar5 = Ram0002000000000302;
    lVar12 = Ram0003000000008602;
    uVar11 = Ram0002000000000302;
    lVar12 = (ulong)uVar11 + lVar12;
  }
  Ram0002000000000073 = lVar10;
  piVar2 = (int *)Ram0002000000000073;
  uVar6 = Ram0002000000000302;
  iVar8 = *piVar2;
  Ram0002000000000073 = lVar12;
  piVar3 = (int *)Ram0002000000000073;
  uVar11 = (uint)*(ushort *)(piVar2 + 1);
  if (uVar11 == 0 && iVar8 == 0) {
    iVar8 = 0;
    uVar11 = 0;
    uVar13 = 0;
    uVar9 = 0;
  }
  else {
    uVar13 = piVar2[2];
    uVar1 = piVar2[3];
    uVar9 = uVar1;
    if (((uVar4 & 2) == 0) &&
       (uVar11 = (uVar1 & 0x3fff) << 0x10 | (uint)*(ushort *)(piVar2 + 1), uVar9 = uVar6, 1 < uVar1)
       ) {
      uVar13 = uVar13 / uVar1;
    }
  }
  *piVar3 = iVar8;
  piVar3[1] = uVar11;
  piVar3[2] = uVar13;
  piVar3[3] = uVar9;
  do {
    lVar10 = Ram0002000000000324;
  } while (lVar10 != 0);
  FUN_00009bb8();
  return;
}


/* ---- pm4_OP_B4_handler @ 0000b338 size=584 ---- */

void pm4_OP_B4_handler(undefined8 param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar4 = Ram0002000000000302;
  uVar12 = (ulong)uVar4;
  uVar6 = Ram0002000000000302;
  lVar5 = Ram0002000000000302;
  uVar10 = *(ulong *)((long)(int)((uVar4 >> 0x13 & 7) + 0x6a0) + 0x3000000000000);
  if ((uVar4 & 1) == 0) {
    uVar7 = (ulong)(int)(uVar4 >> 1);
    uVar8 = (ulong)(int)(uVar4 >> 6);
    uVar11 = (ulong)(int)(uVar4 >> 0xd);
    uVar9 = Ram0002000000000302;
  }
  else {
    Ram0002000000000073 = lVar5 << 0x20 | uVar6;
    puVar2 = (uint *)Ram0002000000000073;
    uVar1 = *puVar2;
    uVar6 = uVar10 >> 0x10;
    uVar14 = 1L << ((long)(int)(uVar4 >> 0x17) & 7U);
    uVar14 = uVar14 << (ulong)((uVar4 & 0x3e) == 0 && (uVar6 & uVar14) == 0);
    uVar7 = (ulong)(int)(uVar4 >> 1);
    uVar8 = (ulong)(int)(uVar4 >> 6);
    uVar13 = uVar14 - 1 & uVar6;
    uVar11 = (ulong)(int)(uVar4 >> 0xd);
    if (uVar1 == 0) {
      puVar3 = (undefined8 *)Ram00020000000001f3;
      *puVar3 = 0;
      Ram000200000000038b = 0;
      FUN_00009bb8(-(ulong)(((uVar10 >> 0x20 & uVar12) != 0 || 4 < (uVar7 & 0x1f)) ||
                           (uVar6 & uVar14) == 0),
                   (uVar10 >> 0x14 & 0x1ff) + (uVar7 & 0x1f) + ((uVar8 & 1) << (uVar10 & 0xf)) +
                   ((uVar11 & 7) << (uVar10 >> 4 & 0xf)) +
                   (((long)(int)(uVar4 >> 0x16) & 1U) << (uVar10 >> 8 & 0xf)) +
                   ((long)(int)(((uint)uVar13 & 1) + ((uint)(uVar13 >> 1) & 1)) <<
                   (uVar10 >> 0xc & 0xf)),param_1);
      return;
    }
    uVar9 = Ram0002000000000302;
    if (uVar1 < uVar9) {
      uVar9 = uVar1;
    }
  }
  uVar1 = (int)uVar4 >> 0x1f;
  switch(uVar4 >> 0x13 & 0xf) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x0000b630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&LAB_0000b634 +
              (int)((uVar1 & 3 |
                     (uint)(((uVar4 >> 0x10 & 7) != 0 || (uVar4 >> 10 & 7) != 0) || 1 < (uVar11 & 7)
                           ) << 1 | (uint)((uVar12 & 0xe000) == 0x2000)) << 2)))
              (uVar4 >> 8 & 3,uVar8 & 1,uVar4 >> 7 & 1,uVar7 & 0x1f);
    return;
  case 1:
                    /* WARNING: Could not recover jumptable at 0x0000b6c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&LAB_0000b6c8 +
              (int)((uVar1 & 3 |
                     (uint)(((uVar4 >> 0x10 & 7) != 0 || (uVar4 >> 10 & 7) != 0) || 1 < (uVar11 & 7)
                           ) << 1 | (uint)((uVar12 & 0xe000) == 0x2000)) << 2)))
              (uVar4 >> 8 & 3,uVar8 & 1,uVar4 >> 7 & 1);
    return;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x0000b758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&LAB_0000b75c +
              (int)((uVar1 & 3 |
                     (uint)(((uVar4 >> 10 & 7) != 0 || (uVar4 >> 0x10 & 7) != 0) || 1 < (uVar11 & 7)
                           ) << 1 | (uint)((uVar12 & 0xe000) == 0x2000)) << 2)))
              (uVar4 >> 8 & 3,uVar8 & 1);
    return;
  case 3:
                    /* WARNING: Could not recover jumptable at 0x0000b7ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&LAB_0000b7f0 +
              (int)((uVar1 & 3 |
                     (uint)(((uVar4 >> 10 & 7) != 0 || (uVar4 >> 0x10 & 7) != 0) || 1 < (uVar11 & 7)
                           ) << 1 | (uint)((uVar12 & 0xe000) == 0x2000)) << 2)))
              (uVar4 >> 8 & 3,uVar8 & 1,uVar4 >> 7 & 1);
    return;
  case 4:
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    break;
  case 9:
                    /* WARNING: Could not recover jumptable at 0x0000b884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&LAB_0000b888 +
              (int)((uVar1 & 3 |
                     (uint)(((uVar4 >> 0x10 & 7) != 0 || (uVar4 >> 10 & 7) != 0) || 1 < (uVar11 & 7)
                           ) << 1 | (uint)((uVar12 & 0xe000) == 0x2000)) << 2)))((long)(int)uVar9);
    return;
  case 10:
    break;
  case 0xb:
    break;
  case 0xc:
    break;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- pm4_INDEX_BASE_handler @ 0000e408 size=52 ---- */

void pm4_INDEX_BASE_handler(void)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar3 = Ram0002000000000302;
  lVar4 = Ram0002000000000302;
  Ram0002000000000073 = lVar4 << 0x20 | uVar3;
  uVar1 = Ram0002000000000073;
  uVar2 = Ram00020000000001f0;
  Ram000200000000001c = (ulong)uVar2;
  Ram000200000000001d = uVar1;
  Ram000200000000002b = 0;
  FUN_00009bb8();
  return;
}


/* ---- pm4_INDEX_BUFFER_SIZE_handler @ 0000e440 size=16 ---- */

void pm4_INDEX_BUFFER_SIZE_handler(void)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  DAT_001010b4 = Ram0002000000000302;
  Ram000200000000002f = DAT_001010b4;
  FUN_00009bb8();
  return;
}


/* ---- pm4_DRAW_INDIRECT_MULTI_handler @ 0000e458 size=780 ---- */

void pm4_DRAW_INDIRECT_MULTI_handler(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  lVar19 = Ram000200000000001a;
  uVar4 = Ram0002000000000302;
  lVar19 = (ulong)uVar4 + lVar19;
  uVar5 = Ram0002000000000302;
  uVar6 = Ram0002000000000302;
  uVar4 = Ram0002000000000302;
  iVar14 = Ram0002000000000302;
  uVar10 = (ulong)iVar14;
  uVar17 = Ram0002000000000302;
  lVar15 = Ram0002000000000302;
  if ((uVar4 >> 0x1e & 1) != 0) {
    Ram0002000000000073 = lVar15 << 0x20 | uVar17;
    piVar3 = (int *)Ram0002000000000073;
    if ((ulong)(long)*piVar3 < uVar10) {
      iVar14 = *piVar3;
    }
    uVar10 = (ulong)iVar14;
  }
  uVar13 = Ram0002000000000302;
  uVar7 = Ram0002000000000302;
  if (uVar10 == 0) {
LAB_0000e610:
    lVar19 = Ram00020000000000ac;
    if (lVar19 == 0) goto LAB_0000e644;
    Ram000200000000007d = 1;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 2;
  }
  else {
    uVar18 = Ram000200000000000a;
    uVar11 = uVar4 >> 0x1b & 1;
    uVar2 = uVar4 >> 0x1f;
    uVar12 = uVar11 ^ 1;
    uVar18 = (uint)(uVar11 == 0) & uVar18 >> 0x10;
    Ram0002000000000019 = 0;
    uVar8 = Ram0002000000000314;
    if (uVar18 != 0) {
      uVar2 = 2 - ((int)uVar4 >> 0x1f);
      uVar12 = uVar2 * 0x100000 | 1;
    }
    iVar14 = uVar2 * uVar18;
    if (uVar10 != 1) {
      Ram000200000000007e = 2;
      Ram0002000000000000 = uVar5;
      Ram0002000000000000 = uVar6;
      Ram0002000000000000 = uVar4;
      uVar18 = Ram000200000000002c;
      uVar11 = (uVar7 >> 5 | uVar11 | uVar4 >> 0x1d & 1 ^ 1) << 0x1f ^ 0x80000000;
      uVar2 = param_1 & 0xc000ffff | 0x20000;
      iVar9 = (int)uVar10;
      if (uVar13 == 0x10) {
        do {
          uVar17 = uVar10;
          if (0x400 < uVar10) {
            uVar17 = 0x400;
          }
          uVar13 = (uint)uVar17;
          Ram000200000000002c = uVar12 & 0xfffffffe | uVar13;
          Ram0002000000000028 = (ulong)(iVar14 * uVar13);
          Ram0002000000000092 = lVar19;
          Ram0002000000000092 = (ulong)(uVar18 | uVar13 << 2);
          Ram0002000000000000 = uVar2;
          Ram0002000000000000 = uVar11 | uVar13;
          Ram0002000000000000 = iVar9 - (int)uVar10;
          Ram0002000000000000 = uVar7;
          lVar19 = lVar19 + ((ulong)((long)(int)(uVar13 << 2) << 0x20) >> 0x1e);
          uVar10 = (ulong)(int)((int)uVar10 - uVar13);
          lVar15 = Ram0002000000000074;
          if (lVar15 != 0) goto LAB_0000e644;
        } while (uVar10 != 0);
      }
      else {
        do {
          uVar17 = uVar10;
          if (0x400 < uVar10) {
            uVar17 = 0x400;
          }
          uVar1 = (uint)uVar17;
          Ram000200000000002c = uVar12 & 0xfffffffe | uVar1;
          Ram0002000000000028 = iVar14 * uVar1;
          lVar15 = lVar19;
          uVar16 = uVar1;
          do {
            Ram0002000000000092 = lVar15;
            Ram0002000000000092 = (ulong)uVar18 | 4;
            lVar15 = lVar15 + (ulong)uVar13;
            Ram0002000000000000 = uVar2;
            Ram0002000000000000 = uVar11 | 1;
            Ram0002000000000000 = ((uVar1 - (int)uVar10) + iVar9) - uVar16;
            Ram0002000000000000 = uVar7;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
          uVar10 = (ulong)(int)((int)uVar10 - uVar1);
          lVar19 = lVar19 + (uVar17 & 0xffffffff) * (ulong)uVar13;
          lVar15 = Ram0002000000000074;
          if (lVar15 != 0) goto LAB_0000e644;
        } while (uVar10 != 0);
      }
      goto LAB_0000e610;
    }
    uVar13 = Ram000200000000002c;
    Ram0002000000000092 = lVar19;
    Ram0002000000000092 = (ulong)uVar13 | 4;
    Ram0002000000000028 = iVar14;
    Ram000200000000002c = uVar12 | 1;
    lVar19 = Ram00020000000000ac;
    Ram0002000000000000 = param_1 & 0xc00000ff | 0x38900;
    Ram0002000000000000 = uVar4;
    Ram0002000000000000 = uVar5;
    Ram0002000000000000 = uVar6;
    Ram0002000000000000 = uVar7;
    if (lVar19 != 0) {
      Ram000200000000007d = 1;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 2;
    }
  }
  if ((uVar4 & 0x20000000) != 0) {
    Ram0002000000000083 = 0;
    Ram0002000000000000 = 0x35;
  }
LAB_0000e644:
  FUN_00009bb8();
  return;
}


/* ---- pm4_DRAW_INDIRECT_handler @ 0000e768 size=124 ---- */

void pm4_DRAW_INDIRECT_handler(uint param_1)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  lVar2 = Ram000200000000001a;
  lVar4 = Ram0002000000000302;
  uVar1 = Ram000200000000002c;
  uVar5 = Ram000200000000000a;
  Ram0002000000000092 = lVar4 + lVar2;
  Ram0002000000000092 = uVar1 | 4;
  Ram0002000000000019 = 0;
  uVar3 = Ram0002000000000314;
  uVar5 = uVar5 >> 0xf & 2;
  Ram0002000000000028 = uVar5;
  Ram000200000000002c = uVar5 << 0x14 | 1;
  Ram0002000000000000 = param_1 & 0xc000ffff | 0x20000;
  uVar3 = Ram0002000000000302;
  Ram0002000000000000 = uVar3;
  uVar3 = Ram0002000000000302;
  Ram0002000000000000 = uVar3;
  uVar3 = Ram0002000000000302;
  Ram0002000000000000 = uVar3;
  uVar3 = Ram0002000000000302;
  uVar1 = Ram0002000000000007;
                    /* WARNING: Could not recover jumptable at 0x0000e7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(uVar1 & 0xfffffffffffffffe))(uVar3);
  return;
}


/* ---- pm4_DRAW_INDEX_INDIRECT_handler @ 0000e7e8 size=152 ---- */

void pm4_DRAW_INDEX_INDIRECT_handler(undefined4 param_1)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  lVar2 = Ram000200000000001a;
  lVar5 = Ram0002000000000302;
  Ram0002000000000092 = lVar5 + lVar2;
  uVar6 = Ram0002000000000302;
  uVar7 = Ram0002000000000302;
  uVar1 = Ram000200000000002c;
  Ram0002000000000092 = uVar1 | 5;
  Ram0002000000000019 = 0;
  uVar4 = Ram0002000000000314;
  uVar9 = uVar7 >> 0x1c & 1;
  uVar8 = uVar9 << 0x1f;
  uVar1 = Ram000200000000000a;
  if ((uVar1 & 0x10000) != 0) {
    Ram0002000000000028 = uVar9 + 2;
    uVar8 = uVar8 | (uVar9 + 2) * 0x100000;
  }
  Ram0002000000000000 = param_1;
  Ram000200000000002d = uVar8 | 1;
  uVar3 = Ram0002000000000302;
  uVar4 = Ram0002000000000302;
  uVar1 = Ram0002000000000007;
  Ram0002000000000000 = (uVar9 ^ 1) * 3;
  Ram0002000000000000 = uVar6;
  Ram0002000000000000 = uVar7;
  Ram0002000000000000 = (ulong)uVar3;
                    /* WARNING: Could not recover jumptable at 0x0000e87c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(uVar1 & 0xfffffffffffffffe))(uVar4);
  return;
}


/* ---- pm4_DRAW_INDEX_2_handler @ 0000e880 size=68 ---- */

void pm4_DRAW_INDEX_2_handler(void)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar2 = Ram00020000000001f2;
  uVar3 = Ram0002000000000302;
  uVar5 = Ram0002000000000302;
  lVar6 = Ram0002000000000302;
  Ram0002000000000000 = uVar2;
  Ram0001000200028a78 = uVar3;
  uVar2 = Ram0002000000000302;
  uVar3 = Ram0002000000000302;
  uVar4 = Ram0002000000000302;
  uVar1 = Ram0002000000000007;
  Ram00010002000287e8 = lVar6 << 0x20 | uVar5;
  Ram0001000200028a74 = uVar2;
  Ram0002000000000000 = uVar2;
  Ram0002000000000000 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0000e8c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(uVar1 & 0xfffffffffffffffe))(uVar4);
  return;
}


/* ---- thunk_FUN_00009bb8 @ 0000e8c8 size=4 ---- */

void thunk_FUN_00009bb8(void)

{
  ulong uVar1;
  undefined4 uVar2;
  
  do {
    uVar2 = Ram0002000000000302;
    uVar1 = Ram0002000000000007;
    (*(code *)(uVar1 & 0xfffffffffffffffe))(uVar2);
  } while( true );
}


/* ---- sub_0e8d0 @ 0000e8d0 size=488 ---- */

void sub_0e8d0(void)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulong uVar11;
  uint uVar12;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar2 = Ram0002000000000302;
  uVar2 = Ram0002000000000302;
  iVar3 = Ram0002000000000302;
  uVar4 = Ram0002000000000302;
  if (iVar3 == 0x1212) {
    lVar1 = Ram00020000000001f9;
    *(undefined4 *)(lVar1 + 0xc10) = 0x4101;
    if (uVar4 >> 2 != 0) {
      uVar12 = 0;
      do {
        Ram0002000000000000 = 0xc017b300;
        uVar2 = Ram0002000000000302;
        uVar2 = Ram0002000000000302;
        uVar5 = Ram0002000000000302;
        uVar6 = Ram0002000000000302;
        uVar6 = Ram0002000000000302;
        uVar7 = Ram0002000000000302;
        uVar8 = Ram0002000000000302;
        uVar8 = Ram0002000000000302;
        uVar11 = Ram0002000000000302;
        lVar1 = Ram0002000000000302;
        uVar9 = Ram0002000000000302;
        uVar10 = Ram0002000000000302;
        Ram0002000000000000 = uVar2;
        Ram0002000000000000 = uVar5;
        Ram0002000000000000 = uVar6;
        Ram0002000000000000 = uVar7;
        Ram0001000200028a78 = uVar8;
        Ram00010002000287e8 = lVar1 << 0x20 | uVar11;
        Ram0001000200028a74 = uVar9;
        Ram0002000000000000 = uVar9;
        Ram0002000000000000 = uVar10;
        uVar2 = Ram0002000000000302;
        uVar2 = Ram0002000000000302;
        uVar5 = Ram0002000000000302;
        uVar6 = Ram0002000000000302;
        uVar6 = Ram0002000000000302;
        uVar7 = Ram0002000000000302;
        uVar8 = Ram0002000000000302;
        uVar8 = Ram0002000000000302;
        uVar11 = Ram0002000000000302;
        lVar1 = Ram0002000000000302;
        uVar9 = Ram0002000000000302;
        uVar10 = Ram0002000000000302;
        Ram0002000000000000 = uVar2;
        Ram0002000000000000 = uVar5;
        Ram0002000000000000 = uVar6;
        Ram0002000000000000 = uVar7;
        Ram0001000200028a78 = uVar8;
        Ram00010002000287e8 = lVar1 << 0x20 | uVar11;
        Ram0001000200028a74 = uVar9;
        Ram0002000000000000 = uVar9;
        Ram0002000000000000 = uVar10;
        uVar2 = Ram0002000000000302;
        uVar2 = Ram0002000000000302;
        uVar5 = Ram0002000000000302;
        uVar6 = Ram0002000000000302;
        uVar6 = Ram0002000000000302;
        uVar7 = Ram0002000000000302;
        uVar8 = Ram0002000000000302;
        uVar8 = Ram0002000000000302;
        uVar11 = Ram0002000000000302;
        lVar1 = Ram0002000000000302;
        uVar9 = Ram0002000000000302;
        uVar10 = Ram0002000000000302;
        Ram0002000000000000 = uVar2;
        Ram0002000000000000 = uVar5;
        Ram0002000000000000 = uVar6;
        Ram0002000000000000 = uVar7;
        Ram0001000200028a78 = uVar8;
        Ram00010002000287e8 = lVar1 << 0x20 | uVar11;
        Ram0001000200028a74 = uVar9;
        Ram0002000000000000 = uVar9;
        Ram0002000000000000 = uVar10;
        uVar2 = Ram0002000000000302;
        uVar2 = Ram0002000000000302;
        uVar5 = Ram0002000000000302;
        uVar6 = Ram0002000000000302;
        uVar6 = Ram0002000000000302;
        uVar7 = Ram0002000000000302;
        uVar8 = Ram0002000000000302;
        uVar8 = Ram0002000000000302;
        uVar11 = Ram0002000000000302;
        lVar1 = Ram0002000000000302;
        uVar9 = Ram0002000000000302;
        uVar10 = Ram0002000000000302;
        Ram0002000000000000 = uVar2;
        Ram0002000000000000 = uVar5;
        Ram0002000000000000 = uVar6;
        Ram0002000000000000 = uVar7;
        Ram0001000200028a78 = uVar8;
        Ram00010002000287e8 = lVar1 << 0x20 | uVar11;
        Ram0001000200028a74 = uVar9;
        Ram0002000000000000 = uVar9;
        Ram0002000000000000 = uVar10;
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar4 >> 2);
    }
    lVar1 = Ram00020000000001f9;
    *(undefined4 *)(lVar1 + 0xc10) = 0x4001;
  }
  FUN_00009bb8();
  return;
}


/* ---- pm4_INDEX_ATTRIBUTES_INDIRECT_handler @ 0000eac0 size=252 ---- */

void pm4_INDEX_ATTRIBUTES_INDIRECT_handler(void)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar4 = Ram0002000000000302;
  uVar2 = Ram0002000000000302;
  iVar3 = Ram0002000000000302;
  if ((uVar4 & 1) == 0) {
    lVar5 = CONCAT44(uVar2,uVar4);
  }
  else {
    lVar5 = Ram000200000000001a;
    lVar5 = (ulong)uVar2 + lVar5;
  }
  Ram0002000000000073 = (ulong)(uint)(iVar3 << 4) + lVar5;
  puVar1 = (undefined8 *)Ram0002000000000073;
  uVar2 = Ram00020000000001f0;
  Ram000200000000001c = (ulong)uVar2;
  Ram000200000000001d = *puVar1;
  Ram000200000000002b = 0;
  DAT_001010b4 = *(undefined4 *)(puVar1 + 1);
  Ram000200000000002f = DAT_001010b4;
  uVar6 = (ulong)*(int *)((long)puVar1 + 0xc);
  if (((uVar4 & 1) != 0) && (3 < uVar6)) {
    uVar6 = (ulong)(int)((uint)(0x3d < uVar6) << 1 | (uint)(uVar6 < 0x39));
  }
  DAT_001010b0 = (undefined4)uVar6;
  Ram0001000200028a7c = DAT_001010b0;
  uVar4 = 1 << (uVar6 & 3) & 3;
  Ram000200000000001c = uVar4;
  Ram00020000000001f0 = uVar4;
  Ram0002000000000000 = 0xc0002a00;
  Ram0002000000000000 = DAT_001010b0;
  FUN_00009bb8();
  return;
}


/* ---- pm4_DRAW_INDEX_MULTI_AUTO_handler @ 0000ebc0 size=108 ---- */

void pm4_DRAW_INDEX_MULTI_AUTO_handler(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar2 = Ram0002000000000302;
  uVar4 = (ulong)uVar2;
  uVar3 = Ram0002000000000302;
  Ram0002000000000000 = param_1;
  Ram0002000000000000 = uVar2;
  Ram0002000000000000 = uVar3;
  iVar1 = Ram00020000000000ac;
  uVar6 = (ulong)iVar1;
  if ((uVar6 == 0) && (uVar6 = Ram00020000000000a2, (uVar3 >> 5 & 1) == 0)) {
    do {
      uVar5 = uVar4;
      if (8 < uVar4) {
        uVar5 = 8;
      }
      if (uVar4 == 0) break;
      uVar7 = 0;
      do {
        uVar2 = Ram0002000000000302;
        uVar6 = (ulong)uVar2;
        Ram0002000000000000 = uVar2;
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar5);
      uVar4 = uVar4 - uVar5;
    } while (uVar4 != 0);
  }
  FUN_00009bb8(uVar6);
  return;
}


/* ---- pm4_DRAW_INDEX_OFFSET_2_handler @ 0000ec30 size=68 ---- */

void pm4_DRAW_INDEX_OFFSET_2_handler(void)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  lVar2 = Ram0002000000000018;
  uVar1 = Ram0002000000000017;
  Ram0002000000000000 = 0xc0013500;
  uVar3 = Ram0002000000000302;
  Ram0001000200028a78 = uVar3;
  lVar4 = Ram0002000000000302;
  Ram00010002000287e8 = (lVar4 << (uVar1 & 0x3f)) + lVar2;
  uVar3 = Ram0002000000000302;
  Ram0001000200028a74 = uVar3;
  Ram0002000000000000 = uVar3;
  uVar3 = Ram0002000000000302;
  Ram0002000000000000 = uVar3;
  FUN_00009bb8();
  return;
}


/* ---- pm4_DRAW_INDEX_INDIRECT_MULTI_handler @ 0000ec78 size=1360 ---- */

void pm4_DRAW_INDEX_INDIRECT_MULTI_handler(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  lVar22 = Ram000200000000001a;
  uVar1 = Ram0002000000000302;
  uVar6 = Ram0002000000000302;
  uVar7 = Ram0002000000000302;
  uVar2 = Ram0002000000000302;
  iVar17 = Ram0002000000000302;
  uVar14 = (ulong)iVar17;
  uVar12 = Ram0002000000000302;
  lVar11 = Ram0002000000000302;
  if ((uVar2 & 0x40000000) != 0) {
    Ram0002000000000073 = lVar11 << 0x20 | uVar12;
    piVar5 = (int *)Ram0002000000000073;
    if ((ulong)(long)*piVar5 < uVar14) {
      iVar17 = *piVar5;
    }
    uVar14 = (ulong)iVar17;
  }
  uVar13 = Ram0002000000000302;
  uVar12 = (ulong)uVar13;
  uVar8 = Ram0002000000000302;
  uVar4 = Ram000200000000000a;
  if (uVar14 == 0) {
LAB_0000efa8:
    lVar22 = Ram00020000000000ac;
    if (lVar22 == 0) goto LAB_0000ee5c;
LAB_0000efb0:
    Ram000200000000007d = 1;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 2;
LAB_0000efc4:
    if ((uVar2 & 0x20000000) == 0) goto LAB_0000ee5c;
  }
  else {
    uVar21 = (long)(int)(uVar2 >> 0x1b) & 1;
    uVar15 = uVar2 & 0x2000000;
    lVar22 = (ulong)uVar1 + lVar22;
    uVar10 = (uVar21 ^ 1) & (long)(int)(uVar4 >> 0x10);
    iVar17 = (int)uVar14;
    uVar1 = (uint)uVar21;
    if ((uVar2 & 0x2000000) == 0) {
      uVar16 = uVar2 >> 0x1c & 1;
      Ram0002000000000019 = 0;
      uVar9 = Ram0002000000000314;
      uVar4 = Ram000200000000002c;
      uVar21 = (ulong)(int)(uVar16 << 0x1f);
      if (uVar10 != 0) {
        uVar15 = (uVar16 - ((int)uVar2 >> 0x1f)) + 2;
        uVar21 = uVar21 | uVar15 * 0x100000;
      }
      if (uVar14 != 1) {
        Ram000200000000007e = 2;
        Ram0002000000000000 = uVar6;
        Ram0002000000000000 = uVar7;
        Ram0002000000000000 = uVar2;
        uVar16 = ((uVar8 >> 5 & 1 | uVar1 | uVar2 >> 0x1d & 1 ^ 1) ^ 1) << 0x1f;
        uVar1 = param_1 & 0xc000ffff | 0x20000;
        if (uVar13 == 0x14) {
          do {
            uVar12 = uVar14;
            if (0x400 < uVar14) {
              uVar12 = 0x400;
            }
            uVar13 = (uint)uVar12;
            Ram0002000000000092 = lVar22;
            Ram0002000000000092 = (ulong)(uVar4 | uVar13 * 5);
            Ram000200000000002d = uVar12 & 0xffffffff | uVar21;
            Ram0002000000000028 = (ulong)(uVar13 * uVar15);
            Ram0002000000000000 = uVar1;
            Ram0002000000000000 = uVar16 | uVar13;
            Ram0002000000000000 = iVar17 - (int)uVar14;
            Ram0002000000000000 = uVar8;
            lVar22 = lVar22 + ((ulong)((long)(int)(uVar13 * 5) << 0x20) >> 0x1e);
            uVar14 = (ulong)(int)((int)uVar14 - uVar13);
            lVar11 = Ram0002000000000074;
            if (lVar11 != 0) goto LAB_0000ee5c;
          } while (uVar14 != 0);
        }
        else {
          do {
            uVar10 = uVar14;
            if (0x400 < uVar14) {
              uVar10 = 0x400;
            }
            uVar20 = uVar10 & 0xffffffff;
            Ram000200000000002d = uVar20 | uVar21;
            Ram0002000000000028 = uVar20 * uVar15;
            lVar11 = lVar22;
            uVar19 = uVar20;
            do {
              Ram0002000000000092 = lVar11;
              Ram0002000000000092 = (ulong)uVar4 | 5;
              lVar11 = lVar11 + uVar12;
              Ram0002000000000000 = uVar1;
              Ram0002000000000000 = uVar16 | 1;
              Ram0002000000000000 = (((int)uVar10 - (int)uVar14) + iVar17) - (int)uVar19;
              Ram0002000000000000 = uVar8;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
            uVar14 = (ulong)((int)uVar14 - (int)uVar10);
            lVar22 = lVar22 + uVar12 * uVar20;
            lVar11 = Ram0002000000000074;
            if (lVar11 != 0) goto LAB_0000ee5c;
          } while (uVar14 != 0);
        }
        goto LAB_0000efa8;
      }
      Ram0002000000000028 = uVar15;
      Ram0002000000000092 = lVar22;
      Ram0002000000000092 = (ulong)uVar4 | 5;
      Ram000200000000002d = uVar21 | 1;
      lVar22 = Ram00020000000000ac;
      if ((uVar8 & 0x20) != 0) {
        lVar22 = 1;
      }
      Ram0002000000000000 = param_1 & 0xff | 0xc0038a00;
      Ram0002000000000000 = uVar2;
      Ram0002000000000000 = uVar6;
      Ram0002000000000000 = uVar7;
      Ram0002000000000000 = uVar8;
      if (lVar22 != 0) goto LAB_0000efb0;
      goto LAB_0000efc4;
    }
    uVar15 = uVar2 | 0x10000000;
    Ram0002000000000019 = 0;
    uVar9 = Ram0002000000000314;
    uVar4 = Ram000200000000002c;
    lVar11 = (long)(int)(uVar2 >> 0x1f);
    if (uVar10 == 0) {
      uVar21 = 0;
    }
    else {
      lVar11 = lVar11 + 3;
      uVar21 = lVar11 * 0x100000;
    }
    lVar11 = uVar10 * lVar11;
    if (uVar14 != 1) {
      Ram000200000000007e = 2;
      Ram0002000000000000 = uVar6;
      Ram0002000000000000 = uVar7;
      Ram0002000000000000 = uVar15;
      uVar1 = (uVar8 >> 5 | uVar1 | uVar2 >> 0x1d & 1 ^ 1) << 0x1f ^ 0x80000000;
      uVar2 = param_1 & 0xc000ffff | 0x20000;
      if (uVar13 == 0x20) {
        do {
          uVar12 = uVar14;
          if (0x400 < uVar14) {
            uVar12 = 0x400;
          }
          uVar13 = (uint)uVar12;
          Ram0002000000000092 = lVar22;
          Ram0002000000000092 = (ulong)(uVar4 | uVar13 << 3);
          Ram0002000000000080 = uVar12 & 0xffffffff | uVar21;
          Ram0002000000000028 = (uVar12 & 0xffffffff) * lVar11;
          Ram0002000000000000 = uVar2;
          Ram0002000000000000 = uVar1 | uVar13;
          Ram0002000000000000 = iVar17 - (int)uVar14;
          Ram0002000000000000 = uVar8;
          lVar22 = lVar22 + ((ulong)((long)(int)(uVar13 << 3) << 0x20) >> 0x1e);
          uVar14 = (ulong)(int)((int)uVar14 - uVar13);
          lVar18 = Ram0002000000000074;
          if (lVar18 != 0) goto LAB_0000ee5c;
        } while (uVar14 != 0);
      }
      else {
        do {
          iVar3 = (int)uVar14;
          uVar10 = (ulong)iVar3;
          if (0x400 < uVar14) {
            uVar10 = 0x400;
          }
          Ram0002000000000080 = uVar10 & 0xffffffff | uVar21;
          Ram0002000000000028 = (uVar10 & 0xffffffff) * lVar11;
          lVar18 = lVar22;
          uVar14 = uVar10;
          do {
            Ram0002000000000092 = lVar18;
            Ram0002000000000092 = (ulong)uVar4 | 8;
            lVar18 = lVar18 + uVar12;
            Ram0002000000000000 = uVar2;
            Ram0002000000000000 = uVar1 | 1;
            Ram0002000000000000 = (((int)uVar10 - iVar3) + iVar17) - (int)uVar14;
            Ram0002000000000000 = uVar8;
            uVar14 = (ulong)((int)uVar14 + -1);
          } while (uVar14 != 0);
          uVar14 = (ulong)(iVar3 - (int)uVar10);
          lVar22 = lVar22 + (uVar10 & 0xffffffff) * uVar12;
          lVar18 = Ram0002000000000074;
          if (lVar18 != 0) goto LAB_0000ee5c;
        } while (uVar14 != 0);
      }
      lVar22 = Ram00020000000000ac;
      if (lVar22 != 0) {
        Ram000200000000007d = 1;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 2;
      }
      goto LAB_0000ee5c;
    }
    Ram0002000000000028 = lVar11;
    Ram0002000000000092 = lVar22;
    Ram0002000000000092 = (ulong)uVar4 | 8;
    Ram0002000000000080 = uVar21 | 1;
    lVar22 = Ram00020000000000ac;
    Ram0002000000000000 = param_1 & 0xff | 0xc0038a00;
    Ram0002000000000000 = uVar15;
    Ram0002000000000000 = uVar6;
    Ram0002000000000000 = uVar7;
    Ram0002000000000000 = uVar8;
    if (lVar22 != 0) {
      Ram000200000000007d = 1;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 2;
    }
    if (((ulong)(long)(int)uVar15 >> 0x1d & 1) == 0) goto LAB_0000ee5c;
  }
  Ram0002000000000083 = 0;
  Ram0002000000000000 = 0x35;
LAB_0000ee5c:
  FUN_00009bb8();
  return;
}


/* ---- pm4_DISPATCH_DIRECT_handler @ 0000f1d0 size=16 ---- */

void pm4_DISPATCH_DIRECT_handler(undefined4 param_1)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0002000000000000 = param_1;
  Ram0073000100000000 = 0;
  Ram000200000000038b = 0;
  FUN_00009bb8();
  return;
}


/* ---- pm4_DISPATCH_INDIRECT_handler @ 0000f1e8 size=64 ---- */

void pm4_DISPATCH_INDIRECT_handler(undefined4 param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  lVar1 = Ram000200000000001b;
  uVar3 = Ram0002000000000302;
  uVar2 = Ram000200000000002c;
  Ram0002000000000003 = (ulong)uVar3 + lVar1;
  Ram0002000000000003 = (ulong)uVar2 | 3;
  Ram0002000000000000 = param_1;
  Ram0002000000000000 = 0;
  uVar4 = Ram0002000000000302;
  Ram0002000000000000 = uVar4;
  FUN_00009bb8();
  return;
}


/* ---- pm4_INDEX_TYPE_handler @ 0000f230 size=56 ---- */

void pm4_INDEX_TYPE_handler(void)

{
  uint uVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  DAT_001010b0 = Ram0002000000000302;
  Ram0001000200028a7c = DAT_001010b0;
  uVar1 = 1 << ((ulong)DAT_001010b0 & 3) & 3;
  Ram000200000000001c = uVar1;
  Ram00020000000001f0 = uVar1;
  Ram0002000000000000 = 0xc0002a00;
  Ram0002000000000000 = DAT_001010b0;
  FUN_00009bb8();
  return;
}


/* ---- pm4_OP_A9_handler @ 0000f270 size=148 ---- */

void pm4_OP_A9_handler(undefined4 param_1)

{
  uint uVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar4 = Ram0002000000000302;
  uVar5 = Ram0002000000000302;
  Ram0002000000000000 = param_1;
  Ram0002000000000000 = uVar4;
  Ram0002000000000000 = uVar5;
  Ram0002000000000073 = CONCAT44(uVar5,uVar4);
  piVar2 = (int *)Ram0002000000000073;
  uVar1 = piVar2[2];
  Ram0002000000000073 = *(undefined8 *)(piVar2 + 7);
  uVar3 = Ram0002000000000073;
  uVar6 = uVar1;
  if (*piVar2 + 0x10000U < uVar1) {
    uVar6 = uVar1 + 0x10000000;
  }
  Ram00020000000001f4 = piVar2;
  Ram00020000000001f6 = uVar6;
  Ram00020000000001f7 = piVar2[6];
  Ram00020000000001f8 = uVar3;
  Ram0001000000030118 = uVar1;
  FUN_00009bb8();
  return;
}


/* ---- pm4_OP_4C_handler @ 0000f308 size=732 ---- */

/* WARNING: Removing unreachable block (ram,0x0000f3fc) */

void pm4_OP_4C_handler(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  long lVar17;
  int in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000302;
  uVar5 = Ram0002000000000302;
  lVar17 = Ram000200000000001a;
  lVar17 = (ulong)uVar1 + lVar17;
  uVar6 = Ram0002000000000302;
  uVar7 = Ram0002000000000302;
  uVar9 = Ram0002000000000302;
  lVar10 = Ram0002000000000302;
  iVar3 = (int)uVar6 >> 0x1f;
  uVar1 = uVar6 >> 0x1c & 1 | iVar3 * -2 | (uVar6 >> 0x1d & 1) << 2 | (uVar6 >> 0x1b & 1) << 3;
  if ((uVar6 & 0x40000000) != 0) {
    Ram0002000000000073 = lVar10 << 0x20 | uVar9;
    puVar4 = (uint *)Ram0002000000000073;
    if (*puVar4 < uVar7) {
      uVar7 = *puVar4;
    }
  }
  uVar13 = Ram0002000000000302;
  uVar8 = Ram0002000000000302;
  if (uVar7 != 0) {
    uVar2 = Ram000200000000000a;
    uVar12 = uVar2 >> 0x10 & 1;
    uVar2 = param_1 & 0xc000ffff | (3 - iVar3) * 0x10000;
    if (uVar12 != 0) {
      uVar12 = (uVar6 >> 0x1c & 1) * 3 - iVar3;
    }
    Ram0002000000000019 = 0;
    uVar11 = Ram0002000000000314;
    do {
      uVar9 = Ram0002000000000320;
    } while ((uVar9 & 4) != 0);
    if (uVar13 == 0xc) {
      piVar15 = (int *)((ulong)(in_mhartid + 0x30e) + 0x2000000000000);
      uVar13 = uVar7;
      do {
        uVar14 = uVar13;
        if (0xffff < uVar13) {
          uVar14 = 0xffff;
        }
        Ram0002000000000092 = lVar17;
        Ram0002000000000092 = (ulong)(uVar14 * 3);
        uVar16 = uVar14;
        do {
          if (((*piVar15 != 0) && (*piVar15 != 0)) && (*piVar15 != 0)) {
            Ram0002000000000028 = uVar12;
            Ram0002000000000000 = uVar2;
            Ram0002000000000000 = uVar1 | *piVar15 << 8;
            Ram0002000000000000 = *piVar15 << 10 | uVar5 >> 0x10;
            Ram0002000000000000 = uVar5 & 0xffff | *piVar15 << 10;
            if ((int)uVar6 < 0) {
              Ram0002000000000000 = ((uVar14 - uVar13) + uVar7) - uVar16;
            }
            Ram0002000000000000 = uVar8;
          }
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
        uVar13 = uVar13 - uVar14;
        lVar17 = lVar17 + (ulong)uVar14 * 0xc;
        iVar3 = Ram0002000000000074;
        if (iVar3 != 0) goto LAB_0000f5d4;
      } while (uVar13 != 0);
    }
    else {
      uVar14 = 0;
      piVar15 = (int *)((ulong)(in_mhartid + 0x30e) + 0x2000000000000);
      while( true ) {
        Ram0002000000000092 = lVar17;
        Ram0002000000000092 = 3;
        if (((*piVar15 != 0) && (*piVar15 != 0)) && (*piVar15 != 0)) {
          Ram0002000000000028 = uVar12;
          Ram0002000000000000 = uVar2;
          Ram0002000000000000 = uVar1 | *piVar15 << 8;
          Ram0002000000000000 = *piVar15 << 10 | uVar5 >> 0x10;
          Ram0002000000000000 = uVar5 & 0xffff | *piVar15 << 10;
          if ((int)uVar6 < 0) {
            Ram0002000000000000 = uVar14;
          }
          Ram0002000000000000 = uVar8;
        }
        iVar3 = Ram0002000000000074;
        if (iVar3 != 0) goto LAB_0000f5d4;
        uVar14 = uVar14 + 1;
        if (uVar7 == uVar14) break;
        lVar17 = lVar17 + (ulong)uVar13;
      }
    }
  }
  iVar3 = Ram00020000000000ac;
  if (iVar3 != 0) {
    Ram000200000000007d = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 2;
  }
LAB_0000f5d4:
  FUN_00009bb8();
  return;
}


/* ---- pm4_OP_4D_handler @ 0000f5e8 size=3020 ---- */

/* WARNING: Removing unreachable block (ram,0x0000fac4) */
/* WARNING: Removing unreachable block (ram,0x0000f6ec) */
/* WARNING: Removing unreachable block (ram,0x0000f800) */

void pm4_OP_4D_handler(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  int in_mhartid;
  
  puVar9 = DAT_00101018;
  tp = 0x2000000000000;
  gp = 0x101800;
  do {
    uVar17 = Ram0002000000000320;
  } while ((uVar17 & 4) != 0);
  uVar4 = Ram00020000000001f4;
  uVar15 = Ram00020000000001f6;
  lVar6 = Ram00020000000001f8;
  uVar16 = Ram0002000000000302;
  uVar12 = Ram0002000000000302;
  uVar8 = Ram0002000000000302;
  uVar1 = Ram00020000000001f7;
  do {
    uVar13 = *(uint *)(lVar6 + ((((long)(int)(uVar1 - 1) & (ulong)uVar15) << 0x20) >> 0x1c) + 0xc);
    iVar2 = Ram0002000000000074;
    if (iVar2 != 0) goto LAB_0000f7f4;
  } while ((uint)((uVar1 & uVar15) != 0) != (uVar13 & 1));
  uVar1 = uVar12 & 0xff000000;
  uVar7 = Ram00020000000001f7;
  Ram0002000000000019 = 0;
  uVar3 = Ram0002000000000314;
  uVar11 = Ram0001000000030118;
  if ((ulong)uVar11 + 0x10000 < (ulong)uVar15) {
    uVar15 = uVar15 + 0x10000000;
  }
  uVar17 = (ulong)(int)uVar15;
  Ram000200000000007e = 2;
  Ram0002000000000000 = uVar16 & 0xffff;
  Ram0002000000000000 = uVar16 >> 0x10;
  Ram0002000000000000 = uVar1;
  iVar2 = (uVar13 >> 9) + uVar15;
  uVar14 = (ulong)iVar2;
  uVar15 = uVar13 & 2;
  if ((uVar12 >> 0x18 & 0xa0) == 0) {
    if ((uVar13 >> 8 & 1) == 0) {
      if (uVar15 == 0) {
        puVar10 = (uint *)((ulong)(in_mhartid + 0x30e) + 0x2000000000000);
        do {
          uVar15 = Ram0001000000030118;
          uVar18 = (ulong)(int)uVar15;
          uVar16 = (uint)uVar17;
          if (uVar17 < (ulong)(long)(int)uVar15) {
            if (uVar14 < uVar18) goto LAB_0000fc98;
            uVar12 = uVar15 - uVar16;
            uVar13 = Ram00020000000001f7;
            uVar11 = uVar16 & uVar13 - 1;
            if (uVar12 + uVar11 < uVar13) {
              Ram0002000000000003 = lVar6 + ((ulong)((long)(int)uVar11 << 0x20) >> 0x1c);
              Ram0002000000000003 = (ulong)(uVar12 * 4);
            }
            else {
              Ram0002000000000003 = lVar6 + ((ulong)((long)(int)uVar11 << 0x20) >> 0x1c);
              Ram0002000000000003 = (ulong)(uVar13 - uVar11) << 2;
              Ram0002000000000003 = lVar6;
              Ram0002000000000003 = ((ulong)uVar12 - (ulong)(uVar13 - uVar11)) * 4;
            }
            uVar3 = Ram00020000000001f5;
            Ram0002000000000000 = uVar3;
            Ram0002000000000000 = uVar1 | uVar12 | 0x10000;
            Ram0002000000000000 = uVar16;
            Ram0002000000000000 = uVar8;
            uVar15 = uVar7 & uVar15;
            uVar12 = ~(uint)(uVar15 != 0);
            uVar17 = uVar18;
LAB_0000f79c:
            if ((uVar12 & 1) != (uint)(uVar15 != 0)) goto LAB_0000fa7c;
LAB_0000f7a4:
            if (uVar14 <= uVar17) goto LAB_0000fd18;
          }
          else {
            if (uVar18 <= uVar14) {
              uVar15 = (int)uVar14 - uVar16;
              if (0x20 < uVar15) {
                uVar15 = 0x20;
              }
              uVar11 = Ram00020000000001f7;
              uVar12 = uVar11 - 1;
              uVar13 = uVar16 & uVar12;
              uVar18 = (ulong)(int)uVar13;
              if ((ulong)(long)(int)(uVar15 + uVar16 & uVar12) < uVar18) {
                Ram0002000000000092 = lVar6 + ((uVar18 << 0x20) >> 0x1c);
                Ram0002000000000092 = (ulong)((uVar11 - uVar13) * 4);
                Ram0002000000000092 = lVar6;
                Ram0002000000000092 = (ulong)(((uVar13 - uVar12) + uVar15) * 4);
              }
              else {
                Ram0002000000000092 = lVar6 + ((uVar18 << 0x20) >> 0x1c);
                Ram0002000000000092 = (ulong)((uVar15 + 1) * 4);
              }
              do {
                uVar16 = (uint)uVar17;
                while( true ) {
                  if ((uint)((uVar11 & uVar16) != 0) == (*puVar10 & 1)) break;
                  Ram000200000000030b = uVar15 * 4;
                  uVar4 = Ram000200000000000b;
                  *DAT_00101018 = 0;
                  lVar19 = Ram0002000000000301;
                  while (lVar19 != 0) {
                    lVar19 = Ram0002000000000301;
                  }
                  uVar13 = (uint)((long)(int)uVar12 & uVar17);
                  lVar19 = lVar6 + ((((long)(int)uVar12 & uVar17) << 0x20) >> 0x1c);
                  if ((uVar12 & uVar15 + uVar16) < uVar13) {
                    Ram0002000000000092 = lVar19;
                    Ram0002000000000092 = (ulong)((uVar11 - uVar13) * 4);
                    Ram0002000000000092 = lVar6;
                    Ram0002000000000092 = (ulong)(((uVar15 - uVar12) + uVar13) * 4);
                  }
                  else {
                    Ram0002000000000092 = lVar19;
                    Ram0002000000000092 = (ulong)(uVar15 * 4 + 4);
                  }
                }
                if ((char)((*puVar10 == 0) + (*puVar10 == 0) + (*puVar10 == 0)) == '\0') {
                  Ram0002000000000000 = 0xc0054d00;
                  Ram0002000000000000 = uVar1 | 1;
                  Ram0002000000000000 = uVar16;
                  Ram0002000000000000 = uVar8;
                  Ram0002000000000000 = *puVar10;
                  Ram0002000000000000 = *puVar10;
                  Ram0002000000000000 = *puVar10;
                }
                uVar15 = uVar15 - 1;
                uVar17 = (ulong)(int)(uVar16 + 1);
              } while (uVar15 != 0);
              uVar12 = *puVar10;
              uVar15 = uVar7 & uVar16 + 1;
              goto LAB_0000f79c;
            }
LAB_0000fc98:
            uVar15 = (int)uVar14 - uVar16;
            uVar12 = Ram00020000000001f7;
            uVar13 = uVar16 & uVar12 - 1;
            if (uVar15 + uVar13 < uVar12) {
              Ram0002000000000003 = lVar6 + ((ulong)((long)(int)uVar13 << 0x20) >> 0x1c);
              Ram0002000000000003 = (ulong)(uVar15 * 4);
            }
            else {
              Ram0002000000000003 = lVar6 + ((ulong)((long)(int)uVar13 << 0x20) >> 0x1c);
              Ram0002000000000003 = (ulong)(uVar12 - uVar13) << 2;
              Ram0002000000000003 = lVar6;
              Ram0002000000000003 = ((ulong)uVar15 - (ulong)(uVar12 - uVar13)) * 4;
            }
            uVar3 = Ram00020000000001f5;
            Ram0002000000000000 = uVar3;
            Ram0002000000000000 = uVar1 | uVar15 | 0x10000;
            Ram0002000000000000 = uVar16;
            Ram0002000000000000 = uVar8;
            uVar17 = uVar14;
            if ((((long)(int)uVar7 & uVar14) == 0) != (((long)(int)uVar7 & uVar14) != 0)) {
LAB_0000fa7c:
              uVar15 = Ram00020000000001f7;
              do {
                uVar12 = *(uint *)(lVar6 + (((uVar17 & (long)(int)(uVar15 - 1)) << 0x20) >> 0x1c) +
                                  0xc);
                iVar2 = Ram0002000000000074;
                if (iVar2 != 0) goto LAB_0000f7f4;
              } while ((uint)(((uint)uVar17 & uVar15) != 0) != (uVar12 & 1));
              goto LAB_0000f7a4;
            }
            uVar12 = 0xffffffff;
LAB_0000fd18:
            uVar14 = (ulong)(int)((uVar12 >> 9) + (int)uVar17);
          }
          uVar4 = Ram00020000000001f5;
          Ram0002000000000000 = (int)((ulong)uVar4 >> 0x20);
          Ram0002000000000000 = (int)uVar17;
        } while ((uVar12 & 2) == 0);
      }
    }
    else {
      puVar10 = (uint *)((ulong)(in_mhartid + 0x30e) + 0x2000000000000);
      for (; uVar15 == 0; uVar15 = uVar15 & 2) {
        uVar16 = Ram0001000000030118;
        uVar18 = (ulong)(int)uVar16;
        uVar15 = (uint)uVar17;
        if (uVar17 < (ulong)(long)(int)uVar16) {
          if (uVar14 < uVar18) {
LAB_0000fe90:
            uVar16 = iVar2 - uVar15;
            uVar12 = Ram00020000000001f7;
            uVar13 = uVar15 & uVar12 - 1;
            if (uVar16 + uVar13 < uVar12) {
              Ram0002000000000003 = lVar6 + ((ulong)((long)(int)uVar13 << 0x20) >> 0x1c);
              Ram0002000000000003 = (ulong)(uVar16 * 4);
            }
            else {
              Ram0002000000000003 = lVar6 + ((ulong)((long)(int)uVar13 << 0x20) >> 0x1c);
              Ram0002000000000003 = (ulong)(uVar12 - uVar13) << 2;
              Ram0002000000000003 = lVar6;
              Ram0002000000000003 = ((ulong)uVar16 - (ulong)(uVar12 - uVar13)) * 4;
            }
            uVar3 = Ram00020000000001f5;
            Ram0002000000000000 = uVar3;
            Ram0002000000000000 = uVar1 | uVar16 | 0x10000;
            Ram0002000000000000 = uVar15;
            Ram0002000000000000 = uVar8;
            uVar17 = uVar14;
            break;
          }
          uVar12 = uVar16 - uVar15;
          uVar13 = Ram00020000000001f7;
          uVar11 = uVar15 & uVar13 - 1;
          if (uVar12 + uVar11 < uVar13) {
            Ram0002000000000003 = lVar6 + ((ulong)((long)(int)uVar11 << 0x20) >> 0x1c);
            Ram0002000000000003 = (ulong)(uVar12 * 4);
          }
          else {
            Ram0002000000000003 = lVar6 + ((ulong)((long)(int)uVar11 << 0x20) >> 0x1c);
            Ram0002000000000003 = (ulong)(uVar13 - uVar11) << 2;
            Ram0002000000000003 = lVar6;
            Ram0002000000000003 = ((ulong)uVar12 - (ulong)(uVar13 - uVar11)) * 4;
          }
          uVar3 = Ram00020000000001f5;
          Ram0002000000000000 = uVar3;
          Ram0002000000000000 = uVar1 | uVar12 | 0x10000;
          Ram0002000000000000 = uVar15;
          Ram0002000000000000 = uVar8;
          uVar16 = uVar7 & uVar16;
          uVar15 = ~(uint)(uVar16 != 0);
          uVar17 = uVar18;
        }
        else {
          if (uVar14 < uVar18) goto LAB_0000fe90;
          uVar16 = iVar2 - uVar15;
          if (0x20 < uVar16) {
            uVar16 = 0x20;
          }
          uVar11 = Ram00020000000001f7;
          uVar12 = uVar11 - 1;
          uVar13 = uVar15 & uVar12;
          uVar18 = (ulong)(int)uVar13;
          if ((ulong)(long)(int)(uVar16 + uVar15 & uVar12) < uVar18) {
            Ram0002000000000092 = lVar6 + ((uVar18 << 0x20) >> 0x1c);
            Ram0002000000000092 = (ulong)((uVar11 - uVar13) * 4);
            Ram0002000000000092 = lVar6;
            Ram0002000000000092 = (ulong)(((uVar13 - uVar12) + uVar16) * 4);
          }
          else {
            Ram0002000000000092 = lVar6 + ((uVar18 << 0x20) >> 0x1c);
            Ram0002000000000092 = (ulong)((uVar16 + 1) * 4);
          }
          do {
            uVar13 = (uint)uVar17;
            while( true ) {
              if ((uint)((uVar11 & uVar13) != 0) == (*puVar10 & 1)) break;
              Ram000200000000030b = uVar16 * 4;
              uVar4 = Ram000200000000000b;
              *DAT_00101018 = 0;
              lVar19 = Ram0002000000000301;
              while (lVar19 != 0) {
                lVar19 = Ram0002000000000301;
              }
              uVar15 = (uint)((long)(int)uVar12 & uVar17);
              lVar19 = lVar6 + ((((long)(int)uVar12 & uVar17) << 0x20) >> 0x1c);
              if ((uVar12 & uVar16 + uVar13) < uVar15) {
                Ram0002000000000092 = lVar19;
                Ram0002000000000092 = (ulong)((uVar11 - uVar15) * 4);
                Ram0002000000000092 = lVar6;
                Ram0002000000000092 = (ulong)(((uVar16 - uVar12) + uVar15) * 4);
              }
              else {
                Ram0002000000000092 = lVar19;
                Ram0002000000000092 = (ulong)(uVar16 * 4 + 4);
              }
            }
            if ((char)((*puVar10 == 0) + (*puVar10 == 0) + (*puVar10 == 0)) == '\0') {
              Ram0002000000000000 = 0xc0054d00;
              Ram0002000000000000 = uVar1 | 1;
              Ram0002000000000000 = uVar13;
              Ram0002000000000000 = uVar8;
              Ram0002000000000000 = *puVar10;
              Ram0002000000000000 = *puVar10;
              Ram0002000000000000 = *puVar10;
            }
            uVar16 = uVar16 - 1;
            uVar17 = (ulong)(int)(uVar13 + 1);
          } while (uVar16 != 0);
          uVar15 = *puVar10;
          uVar16 = uVar7 & uVar13 + 1;
          if (uVar14 <= uVar17) break;
        }
        if ((uVar15 & 1) != (uint)(uVar16 != 0)) {
          uVar16 = Ram00020000000001f7;
          do {
            uVar15 = *(uint *)(lVar6 + (((uVar17 & (long)(int)(uVar16 - 1)) << 0x20) >> 0x1c) + 0xc)
            ;
            iVar5 = Ram0002000000000074;
            if (iVar5 != 0) goto LAB_0000f7f4;
          } while ((uint)(((uint)uVar17 & uVar16) != 0) != (uVar15 & 1));
        }
        uVar4 = Ram00020000000001f5;
        Ram0002000000000000 = (int)((ulong)uVar4 >> 0x20);
        Ram0002000000000000 = (uint)uVar17;
      }
    }
  }
  else if (uVar15 == 0) {
    puVar10 = (uint *)((ulong)(in_mhartid + 0x30e) + 0x2000000000000);
    do {
      uVar3 = Ram0001000000030118;
      uVar16 = (uint)uVar17;
      uVar15 = (int)uVar14 - uVar16;
      if (0x20 < uVar15) {
        uVar15 = 0x20;
      }
      uVar11 = Ram00020000000001f7;
      uVar12 = uVar11 - 1;
      uVar13 = uVar16 & uVar12;
      uVar18 = (ulong)(int)uVar13;
      if ((ulong)(long)(int)(uVar15 + uVar16 & uVar12) < uVar18) {
        Ram0002000000000092 = lVar6 + ((uVar18 << 0x20) >> 0x1c);
        Ram0002000000000092 = (ulong)((uVar11 - uVar13) * 4);
        Ram0002000000000092 = lVar6;
        Ram0002000000000092 = (ulong)(((uVar15 + uVar13) - uVar12) * 4);
      }
      else {
        Ram0002000000000092 = lVar6 + ((uVar18 << 0x20) >> 0x1c);
        Ram0002000000000092 = (ulong)((uVar15 + 1) * 4);
      }
      do {
        uVar16 = (uint)uVar17;
        while( true ) {
          if ((uint)((uVar11 & uVar16) != 0) == (*puVar10 & 1)) break;
          Ram000200000000030b = uVar15 * 4;
          uVar4 = Ram000200000000000b;
          *puVar9 = 0;
          lVar19 = Ram0002000000000301;
          while (lVar19 != 0) {
            lVar19 = Ram0002000000000301;
          }
          uVar13 = (uint)((long)(int)uVar12 & uVar17);
          lVar19 = lVar6 + ((((long)(int)uVar12 & uVar17) << 0x20) >> 0x1c);
          if ((uVar12 & uVar15 + uVar16) < uVar13) {
            Ram0002000000000092 = lVar19;
            Ram0002000000000092 = (ulong)((uVar11 - uVar13) * 4);
            Ram0002000000000092 = lVar6;
            Ram0002000000000092 = (ulong)(((uVar15 - uVar12) + uVar13) * 4);
          }
          else {
            Ram0002000000000092 = lVar19;
            Ram0002000000000092 = (ulong)(uVar15 * 4 + 4);
          }
        }
        if ((char)((*puVar10 == 0) + (*puVar10 == 0) + (*puVar10 == 0)) == '\0') {
          Ram0002000000000000 = 0xc0054d00;
          Ram0002000000000000 = uVar1 | 1;
          Ram0002000000000000 = uVar16;
          Ram0002000000000000 = uVar8;
          Ram0002000000000000 = *puVar10;
          Ram0002000000000000 = *puVar10;
          Ram0002000000000000 = *puVar10;
        }
        uVar15 = uVar15 - 1;
        uVar16 = uVar16 + 1;
        uVar17 = (ulong)(int)uVar16;
      } while (uVar15 != 0);
      uVar15 = *puVar10;
      if ((uint)((uVar7 & uVar16) != 0) != (uVar15 & 1)) {
        uVar12 = Ram00020000000001f7;
        do {
          uVar15 = *(uint *)(lVar6 + ((ulong)((long)(int)(uVar16 & uVar12 - 1) << 0x20) >> 0x1c) +
                            0xc);
          iVar2 = Ram0002000000000074;
          if (iVar2 != 0) goto LAB_0000f7f4;
        } while ((uint)((uVar16 & uVar12) != 0) != (uVar15 & 1));
      }
      if (uVar14 <= uVar17) {
        uVar14 = (ulong)(int)((uVar15 >> 9) + uVar16);
      }
      uVar4 = Ram00020000000001f5;
      Ram0002000000000000 = (int)((ulong)uVar4 >> 0x20);
      Ram0002000000000000 = uVar16;
    } while ((uVar15 & 2) == 0);
  }
  uVar15 = (int)uVar17 + 1;
  lVar6 = Ram00020000000001f4;
  *(uint *)(lVar6 + 8) = uVar15;
  Ram00020000000001f6 = (ulong)uVar15 | 0x100000000;
  uVar4 = Ram00020000000001f5;
  Ram0002000000000000 = (int)((ulong)uVar4 >> 0x20);
  Ram0002000000000000 = uVar15;
LAB_0000f7f4:
  FUN_00009bb8();
  return;
}


/* ---- pm4_OP_4E_handler @ 000101b8 size=88 ---- */

void pm4_OP_4E_handler(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000302;
  iVar2 = Ram0002000000000302;
  iVar3 = Ram0002000000000302;
  uVar4 = Ram0002000000000302;
  if (((uVar1 != 0) && (iVar2 != 0)) && (iVar3 != 0)) {
    Ram0002000000000000 = param_1 & 0xc000ffff | 0x20000;
    Ram0002000000000000 = iVar2 << 0x10 | uVar1;
    Ram0002000000000000 = iVar3;
    Ram0002000000000000 = uVar4;
  }
  FUN_00009bb8();
  return;
}


/* ---- pm4_OP_17_handler @ 00010218 size=1248 ---- */

/* WARNING: Removing unreachable block (ram,0x000103d4) */
/* WARNING: Removing unreachable block (ram,0x0001036c) */
/* WARNING: Removing unreachable block (ram,0x0001060c) */
/* WARNING: Removing unreachable block (ram,0x000104f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pm4_OP_17_handler(uint param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  uint extraout_a0;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined4 uVar9;
  ulong uVar10;
  uint *puVar11;
  ulong uVar12;
  long lVar13;
  ulong in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  if ((DAT_00101384 == 1) && (lVar4 = Ram00020000000001f9, *(int *)(&LAB_0000c1c8 + lVar4) != 0)) {
    uVar9 = Ram0002000000000302;
    lVar4 = Ram00020000000001f9;
    *(undefined4 *)(&LAB_0000c1c8 + lVar4) = 0;
    _DAT_100000002a404 = 0;
    do {
      lVar4 = Ram00020000000001f9;
    } while (*(int *)(&LAB_0000c1c8 + lVar4) != 0);
    Ram000200000000001a = 0;
    Ram0002000000000000 = 0xc0000e00;
    Ram0002000000000000 = 0xff;
    FUN_00009bc8(0);
    return;
  }
  lVar4 = Ram000300000000860a;
  lVar13 = 0x3000000000000;
  if (lVar4 != 0) {
    lVar6 = Ram0002000000000084;
    if (lVar6 != 0) {
      uVar9 = Ram0002000000000302;
      FUN_00009bb8(uVar9);
      return;
    }
    uVar10 = Ram0003000000008604;
    uVar7 = (int)(uVar10 >> 0x20) + 1;
    Ram0003000000008604 = (long)(int)uVar7 << 0x20 | uVar10 & 0xffffffff;
    Ram00020000000001ff = 0;
    if (uVar7 < (uint)uVar10) {
      uVar3 = Ram000300000000860c;
      Ram000200000000008d = 0;
      Ram0002000000000011 = uVar3;
      Ram0002000000000002 = lVar4;
      Ram0002000000000002 = (ulong)uVar3 | 0x100000000;
      lVar13 = Ram000300000000860e;
      lVar4 = Ram0003000000008600;
      uVar10 = Ram0003000000008606;
      uVar2 = Ram0003000000008610;
      if ((uint)uVar2 != 0) {
        uVar7 = (uint)uVar2 & uVar7;
        if (uVar7 == 0) {
          Ram0002000000000083 = 0;
          Ram0002000000000000 = 0x407;
          Ram0002000000000083 = 0;
          Ram0002000000000000 = 0x40f;
          Ram0002000000000083 = 0;
          Ram0002000000000000 = 0x410;
          Ram0002000000000000 = 0xc0065800;
          Ram0002000000000000 = 0x80000000;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0x10280;
          Ram0002000000000000 = 0xc00f1000;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          Ram0002000000000000 = 0;
          do {
            uVar12 = Ram0002000000000314;
          } while ((0x400L << (in_mhartid & 0x3f) & uVar12) != 0);
        }
        lVar13 = lVar13 + (ulong)((int)(uVar10 >> 0x20) * uVar7);
      }
      uVar9 = Ram0002000000000302;
      uVar12 = Ram0003000000008608;
      DAT_00101088 = (uVar10 & 0xffffffff) + lVar4;
      lVar6 = Ram0003000000008618;
      iVar1 = (int)lVar13;
      uVar7 = Ram000200000000000a;
      uVar7 = uVar7 >> 0x10 & 1;
      lVar4 = Ram0002000000000011;
      if (lVar4 == 0) {
        Ram0002000000000018 = 0;
        uVar9 = Ram00020000000001f1;
        Ram0002000000000000 = uVar9;
        Ram0002000000000000 = 0;
      }
      if (lVar6 != 0) {
        Ram0002000000000028 = uVar7;
        Ram0002000000000000 = 0xc0017600;
        Ram0002000000000000 = (uint)lVar6 & 0xffff;
        Ram0002000000000000 = iVar1;
        iVar1 = ((uint)((ulong)lVar6 >> 0x10) & 0xffff) + iVar1;
      }
      for (; uVar12 != 0; uVar12 = uVar12 >> 0x10) {
        Ram0002000000000028 = uVar7;
        Ram0002000000000000 = 0xc0017600;
        Ram0002000000000000 = (uint)uVar12 & 0xffff;
        Ram0002000000000000 = iVar1;
      }
      Ram0003000000008602 = lVar13;
      Ram00020000000001ff = 0;
      Ram0003000000008600 = DAT_00101088;
      Ram00020000000001ff = 0;
      Ram000200000000001f = DAT_00101088;
      Ram0002000000000020 = DAT_00101088;
      FUN_00009bb8();
      return;
    }
    Ram000300000000860a = 0;
    Ram00020000000001ff = 0;
    uVar2 = Ram000300000000860c;
    Ram0002000000000000 = 0xc000ae00;
    uVar9 = (undefined4)((ulong)uVar2 >> 0x20);
    Ram0002000000000000 = uVar9;
    Ram0002000000000048 = uVar9;
    uVar9 = Ram0002000000000314;
  }
  uVar7 = Ram00020000000001f0;
  Ram000200000000001c = (ulong)uVar7;
  uVar10 = Ram0002000000000015;
  uVar10 = uVar10 & 3;
  lVar4 = 0x2000000000000;
  lVar6 = uVar10 + 0x2000000000000;
  uVar7 = Ram0002000000000302;
  uVar7 = uVar7 & 0xfffffffe;
  if ((uVar10 != 0) && (*(int *)(&TP_R082 + uVar10) == 0)) {
    lVar5 = uVar10 - 1;
    Ram000200000000001a = lVar5;
    if (DAT_00101380 != 0) {
      Ram0002000000000099 = 10;
      DAT_00101380 = 0;
    }
    puVar11 = (uint *)(&TP_R00A + uVar10);
    if (*puVar11 != 0 || *(int *)(&TP_R00D + uVar10) != 0) goto LAB_0001048c;
    *(uint *)(&TP_R008 + uVar10) = param_1;
    *(uint *)(&TP_R008 + uVar10) = uVar7;
    while( true ) {
      if (lVar5 == 0) {
        DAT_00101060._4_4_ = 2;
        Ram000200000000004b = 0;
        Ram0002000000000000 = 0xc00f1000;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        do {
          uVar10 = Ram0002000000000314;
        } while ((0x400L << (in_mhartid & 0x3f) & uVar10) != 0);
      }
      (&DAT_00101040)[lVar5 * 2] = 0;
      *(undefined4 *)(lVar6 + 0x51) = 0;
      *(undefined4 *)(lVar6 + 0x53) = 0;
      *(undefined8 *)(lVar6 + 0x95) = 0;
      lVar8 = *(long *)(lVar13 + 0x870b);
      if (lVar8 == 0) break;
      *(undefined8 *)(lVar13 + 0x870b) = 0;
      *(undefined4 *)(lVar4 + 0x1ff) = 0;
      lVar5 = FUN_00015648(&DAT_00101300,1);
      uVar7 = (uint)lVar8;
      param_1 = extraout_a0;
LAB_0001048c:
      *puVar11 = param_1;
      *puVar11 = uVar7 | 1;
    }
    if (lVar5 == 0) {
      if (DAT_001013a4 != 0) {
        DAT_001013a4 = 0;
        uVar7 = Ram00020000000000a9;
        lVar4 = Ram00020000000001fa;
        lVar6 = (long)(int)((uVar7 & 7) << 4 | ((uint)in_mhartid & 3) << 2) << 0x24;
        lVar13 = Ram00020000000001fa;
        *(uint *)(&LAB_0000c3bc + lVar13 + lVar6) =
             *(uint *)(&LAB_0000c3bc + lVar4 + lVar6) & 0xf7ffffff;
      }
      lVar4 = Ram00020000000001f9;
      if (*(int *)(&LAB_0000c1c8 + lVar4) != 0) {
        lVar4 = Ram00020000000001f9;
        *(undefined4 *)(&LAB_0000c1c8 + lVar4) = 0;
        uVar2 = Ram00020000000001f9;
        do {
          lVar4 = Ram00020000000001f9;
        } while (*(int *)(&LAB_0000c1c8 + lVar4) != 0);
        Ram000200000000001a = 0;
        uVar2 = Ram000200000000000b;
        custom0();
      }
    }
  }
  FUN_00009bb8();
  return;
}


/* ---- pm4_INDIRECT_BUFFER_handler @ 00010708 size=2312 ---- */

/* WARNING: Removing unreachable block (ram,0x00010718) */
/* WARNING: Removing unreachable block (ram,0x00010bd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pm4_INDIRECT_BUFFER_handler(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  ulong in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  lVar17 = 0;
  uVar15 = Ram0002000000000015;
  uVar15 = uVar15 & 3;
  if (uVar15 == 0) {
    lVar17 = (in_mhartid & 3) << 2;
    lVar8 = Ram00020000000001fa;
    *(undefined4 *)(&LAB_0000c3e4 + ((in_mhartid & 3) << 0x26) + lVar8) = 0x10;
    Ram000200000000004a = 1;
  }
  uVar11 = Ram0002000000000302;
  lVar8 = uVar15 + 0xb;
  *(int *)(&TP_R041 + uVar15) = 1;
  uVar1 = Ram000100000000c0c8;
  uVar2 = Ram000100000000c0cc;
  Ram0002000000000073 = CONCAT44(uVar2,uVar1);
  puVar4 = (undefined4 *)Ram0002000000000073;
  if (puVar4 == (undefined4 *)0x0) {
    _DAT_3000000000700 = 0xffffffff;
    Ram00020000000001ff = 0;
  }
  else {
    uVar19 = Ram00020000000001f0;
    Ram000200000000001c = (ulong)uVar19;
    Ram00020000000000a5 = 0x100;
    uVar1 = Ram0002000000000314;
    _DAT_3000000000700 = *puVar4;
    Ram00020000000001ff = 0;
    uVar19 = Ram00020000000001f0;
    Ram000200000000001c = (ulong)uVar19;
    Ram00020000000000a5 = 0;
    uVar1 = Ram0002000000000314;
  }
  *(int *)(&TP_R041 + uVar15) = *(int *)(&TP_R00B + uVar15);
  uVar19 = uVar11 & 3;
  if ((uVar11 & 3) == 0) {
    uVar1 = Ram0002000000000302;
    uVar12 = Ram0002000000000302;
    uVar13 = (ulong)uVar12;
    if ((uVar12 >> 0x16 & 1) != 0) {
      uVar12 = Ram0002000000000023;
      uVar13 = uVar13 & 0xfffffffff0ffffff | (long)(int)((uVar12 & 0xf) << 0x18);
    }
    uVar12 = (uint)uVar13;
    if ((uVar13 & 0x100000) == 0) {
      Ram00020000000000a1 = (int)uVar15 + 1;
      uVar9 = uVar15;
      if (DAT_00101060._4_4_ == 2) {
        DAT_00101060._4_4_ = 0;
      }
    }
    else {
      if (((int)uVar12 < 0) && (*(int *)(&TP_R00B + uVar15) == 0)) {
        Ram0002000000000041 = 1;
        Ram000100000000c128 = 0x400000;
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar9 = uVar15 - 1;
      if (*(int *)(&TP_R082 + uVar15) == 0) {
        uVar2 = Ram0002000000000302;
        uVar2 = Ram0002000000000302;
      }
      else {
        Ram0002000000000049 = 1;
        Ram000200000000004a = 1;
        iVar18 = 2;
        if (uVar9 != 0) {
          iVar18 = 4;
        }
        Ram000200000000004f = iVar18;
        do {
          iVar10 = Ram0002000000000095;
        } while (iVar10 == 0);
        if (uVar9 == 0) {
LAB_000109b4:
          Ram000200000000001a = 1;
          iVar18 = Ram0002000000000093;
          if (iVar18 != 0) {
            Ram0002000000000015 = iVar18;
            iVar10 = 0;
            do {
              uVar2 = Ram0002000000000302;
              iVar10 = iVar10 + 1;
            } while (iVar18 != iVar10);
          }
          Ram00020000000000a1 = 1;
          Ram000200000000004e = 1;
        }
        else {
          iVar10 = Ram0002000000000094;
          if (iVar10 != 0) {
            Ram0002000000000016 = iVar10;
            iVar16 = 0;
            do {
              uVar2 = Ram0002000000000302;
              iVar16 = iVar16 + 1;
            } while (iVar10 != iVar16);
          }
          Ram000200000000004e = 1;
          Ram00020000000000a1 = 2;
          if (iVar18 != 4) goto LAB_000109b4;
        }
        Ram000200000000004b = 0;
        Ram0002000000000049 = 0;
        Ram000200000000004f = 0;
      }
      lVar8 = Ram0002000000000032;
      if ((lVar8 != 0) && (lVar8 = Ram0002000000000035, lVar8 != 0)) goto LAB_000108e4;
      *(uint *)((long)&DAT_00101040 + uVar9 * 0x10 + 4) = (uint)((uVar13 << 0x2c) >> 0x2c);
      lVar8 = uVar15 + 10;
    }
    iVar10 = DAT_00101060._4_4_;
    iVar18 = *(int *)(lVar8 + 0x2000000000000);
    if (DAT_00101060._4_4_ == 1) {
LAB_00010880:
      if (uVar9 == 1) goto LAB_00010910;
    }
    else {
      if (((DAT_00101060._4_4_ != 3) || (uVar9 != 1)) || ((uint)DAT_00101050 == 0)) {
        *(ulong *)(&TP_R021 + uVar9) = CONCAT44(uVar1,uVar11);
        goto LAB_00010880;
      }
LAB_00010910:
      if ((uVar13 & 0x100000) == 0) {
        uVar12 = uVar12 & 0x7fffffff | iVar18 << 0x1f;
        lVar3 = Ram0002000000000032;
        if ((lVar3 != 0) && (lVar3 = Ram0002000000000035, lVar3 != 0)) {
LAB_000108e4:
          FUN_00008c60(4);
          FUN_00009bb8();
          return;
        }
        iVar16 = Ram0002000000000086;
        DAT_00101040._0_4_ = iVar16 + -4;
      }
    }
    Ram0002000000000073 = CONCAT44(uVar1,uVar11);
    uVar15 = Ram0002000000000073;
    if ((long)(int)uVar12 < 0) {
      if (iVar18 == 0) {
        Ram0002000000000041 = 1;
        Ram000100000000c128 = 0x400000;
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      *(int *)(lVar8 + 0x2000000000000) = param_1;
    }
    else {
      *(int *)(&TP_R009 + uVar9) = param_1;
    }
    Ram000200000000001a = uVar9 + 1;
    if ((((ulong)(long)(int)uVar12 >> 0x14 & 1) == 0) && (uVar9 == 0)) {
      Ram0002000000000048 = uVar12 >> 0x15 & 1;
      uVar1 = Ram0002000000000314;
      Ram000200000000000e = uVar12 >> 0x18;
      if (DAT_001013a0 == 0) {
        DAT_001013a0 = 1;
      }
      else {
        iVar18 = Ram0002000000000024;
        uVar12 = uVar12 | iVar18 << 0x17;
      }
    }
    if (iVar10 == 1) {
      lVar8 = uVar9 * 0x10;
      uVar11 = *(uint *)((long)&DAT_00101040 + lVar8 + 4);
      if (uVar11 != 0) {
LAB_00010c78:
        uVar15 = *(ulong *)((long)&DAT_00101048 + lVar8);
        uVar12 = uVar12 & 0xfff00000 | uVar11 & 0xfffff;
      }
      uVar19 = *(uint *)((long)&DAT_00101040 + lVar8);
      DAT_00101060._4_4_ = 3;
      uVar12 = uVar12 - (uint)((ulong)((long)(int)uVar19 << 0x2c) >> 0x2c);
      uVar15 = uVar15 + (uVar19 << 2);
      if (uVar9 == 1) {
LAB_00010c44:
        DAT_00101050._0_4_ = 0;
      }
    }
    else if (((iVar10 == 3) && (uVar9 == 1)) &&
            (uVar19 = (uint)DAT_00101050, (long)(int)(uint)DAT_00101050 != 0)) {
      lVar8 = 0x10;
      uVar11 = DAT_00101050._4_4_;
      if (DAT_00101050._4_4_ != 0) goto LAB_00010c78;
      uVar12 = uVar12 - (uint)((ulong)((long)(int)(uint)DAT_00101050 << 0x2c) >> 0x2c);
      uVar15 = uVar15 + ((uint)DAT_00101050 << 2);
      DAT_00101060._4_4_ = iVar10;
      goto LAB_00010c44;
    }
    *(uint *)(&TP_R08C + uVar9) = uVar19;
    *(uint *)(&TP_R010 + uVar9) = uVar12 & 0x3f3fffff;
    if (uVar9 - 2 < 2) {
      uVar1 = Ram0002000000000314;
    }
    *(ulong *)(&TP_R001 + uVar9) = uVar15;
    *(ulong *)(&TP_R001 + uVar9) = (ulong)(uVar12 & 0x3f3fffff) | 0x100000000;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = uVar12 >> 0x14;
    puVar14 = (undefined8 *)((ulong)(long)(int)uVar12 >> 0x14 & 1);
    uVar15 = uVar9;
    if (puVar14 != (undefined8 *)0x0) goto joined_r0x00010e6c;
    if (uVar9 != 0) goto LAB_00010c04;
    Ram0002000000000017 = 0;
    Ram0002000000000000 = 0xc00f1000;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    do {
      uVar15 = Ram0002000000000314;
    } while ((0x400L << (in_mhartid & 0x3f) & uVar15) != 0);
    goto LAB_00010bec;
  }
  lVar8 = Ram0002000000000015;
  if (lVar8 == 0) {
    puVar14 = (undefined8 *)Ram00020000000001f3;
    *puVar14 = 0;
    Ram000200000000038b = 0;
    goto joined_r0x00010e6c;
  }
  uVar1 = Ram0002000000000302;
  uVar2 = Ram0002000000000302;
  Ram0002000000000073 = CONCAT44(uVar2,uVar1);
  puVar5 = (ulong *)Ram0002000000000073;
  uVar13 = Ram0002000000000302;
  lVar8 = Ram0002000000000302;
  uVar13 = lVar8 << 0x20 | uVar13;
  uVar1 = Ram0002000000000302;
  uVar2 = Ram0002000000000302;
  uVar9 = CONCAT44(uVar2,uVar1) & uVar13;
  uVar13 = *puVar5 & uVar13;
  switch((long)(int)(uVar11 >> 8) + 7U & 7) {
  case 0:
    break;
  case 1:
    goto joined_r0x00010fe4;
  case 2:
    goto joined_r0x00011008;
  case 3:
joined_r0x00011008:
    if (uVar9 != uVar13) goto switchD_00010abc_default;
    goto LAB_00010da0;
  case 4:
    break;
  case 5:
joined_r0x00010fe4:
    if (uVar9 < uVar13) goto switchD_00010abc_default;
    goto LAB_00010da0;
  default:
    goto switchD_00010abc_default;
  }
  if (uVar13 < uVar9) {
LAB_00010da0:
    if (uVar19 == 1) {
      uVar1 = Ram0002000000000302;
      uVar1 = Ram0002000000000302;
      uVar1 = Ram0002000000000302;
      uVar1 = Ram0002000000000302;
      uVar1 = Ram0002000000000302;
      uVar11 = Ram0002000000000302;
      puVar14 = (undefined8 *)(ulong)uVar11;
    }
    else {
      uVar1 = Ram0002000000000302;
      uVar1 = Ram0002000000000302;
      uVar1 = Ram0002000000000302;
      uVar1 = Ram0002000000000302;
      uVar2 = Ram0002000000000302;
      uVar11 = Ram0002000000000302;
      uVar11 = uVar11 & 0xffff | (uVar11 >> 0x10 & 0x300f) << 0x10;
      uVar9 = (ulong)(int)uVar11;
      lVar8 = Ram0002000000000015;
      uVar13 = lVar8 - 1U & 3;
      if (*(int *)(&TP_R083 + uVar13) == 0) {
        uVar7 = Ram0002000000000302;
        uVar7 = Ram0002000000000302;
      }
      else {
        Ram0002000000000049 = 1;
        Ram000200000000004a = 1;
        iVar18 = 2;
        if (uVar13 != 0) {
          iVar18 = 4;
        }
        Ram000200000000004f = iVar18;
        do {
          iVar10 = Ram0002000000000095;
        } while (iVar10 == 0);
        if (uVar13 == 0) {
LAB_00010ed8:
          Ram000200000000001a = 1;
          iVar18 = Ram0002000000000093;
          if (iVar18 != 0) {
            Ram0002000000000015 = iVar18;
            iVar10 = 0;
            do {
              uVar7 = Ram0002000000000302;
              iVar10 = iVar10 + 1;
            } while (iVar18 != iVar10);
          }
          Ram00020000000000a1 = 1;
          Ram000200000000004e = 1;
        }
        else {
          iVar10 = Ram0002000000000094;
          if (iVar10 != 0) {
            Ram0002000000000016 = iVar10;
            iVar16 = 0;
            do {
              uVar7 = Ram0002000000000302;
              iVar16 = iVar16 + 1;
            } while (iVar10 != iVar16);
          }
          Ram000200000000004e = 1;
          Ram00020000000000a1 = 2;
          if (iVar18 != 4) goto LAB_00010ed8;
        }
        Ram000200000000004b = 0;
        Ram0002000000000049 = 0;
        Ram000200000000004f = 0;
      }
      *(ulong *)(&TP_R021 + uVar13) = CONCAT44(uVar2,uVar1);
      Ram0002000000000073 = CONCAT44(uVar2,uVar1);
      uVar6 = Ram0002000000000073;
      *(undefined4 *)(&TP_R08C + uVar13) = 0;
      *(uint *)(&TP_R010 + uVar13) = uVar11;
      if (uVar13 - 2 < 2) {
        uVar1 = Ram0002000000000314;
      }
      *(ulong *)(&TP_R001 + uVar13) = uVar6;
      *(ulong *)(&TP_R001 + uVar13) = uVar9 | 0x100000000;
      puVar14 = (undefined8 *)(uVar9 & 0xfffff);
      *(uint *)((long)&DAT_00101040 + uVar13 * 0x10 + 4) = (uint)((uVar9 << 0x2c) >> 0x2c);
    }
  }
  else {
switchD_00010abc_default:
    uVar1 = Ram0002000000000302;
    uVar2 = Ram0002000000000302;
    uVar11 = Ram0002000000000302;
    uVar7 = Ram0002000000000302;
    uVar7 = Ram0002000000000302;
    uVar7 = Ram0002000000000302;
    uVar11 = uVar11 & 0xffff | (uVar11 >> 0x10 & 0x300f) << 0x10;
    uVar9 = (ulong)(int)uVar11;
    lVar8 = Ram0002000000000015;
    uVar13 = lVar8 - 1U & 3;
    if (*(int *)(&TP_R083 + uVar13) == 0) {
      uVar7 = Ram0002000000000302;
      uVar7 = Ram0002000000000302;
    }
    else {
      Ram0002000000000049 = 1;
      Ram000200000000004a = 1;
      iVar18 = 2;
      if (uVar13 != 0) {
        iVar18 = 4;
      }
      Ram000200000000004f = iVar18;
      do {
        iVar10 = Ram0002000000000095;
      } while (iVar10 == 0);
      if (uVar13 == 0) {
LAB_00010fa0:
        Ram000200000000001a = 1;
        iVar18 = Ram0002000000000093;
        if (iVar18 != 0) {
          Ram0002000000000015 = iVar18;
          iVar10 = 0;
          do {
            uVar7 = Ram0002000000000302;
            iVar10 = iVar10 + 1;
          } while (iVar18 != iVar10);
        }
        Ram00020000000000a1 = 1;
        Ram000200000000004e = 1;
      }
      else {
        iVar10 = Ram0002000000000094;
        if (iVar10 != 0) {
          Ram0002000000000016 = iVar10;
          iVar16 = 0;
          do {
            uVar7 = Ram0002000000000302;
            iVar16 = iVar16 + 1;
          } while (iVar10 != iVar16);
        }
        Ram000200000000004e = 1;
        Ram00020000000000a1 = 2;
        if (iVar18 != 4) goto LAB_00010fa0;
      }
      Ram000200000000004b = 0;
      Ram0002000000000049 = 0;
      Ram000200000000004f = 0;
    }
    *(ulong *)(&TP_R021 + uVar13) = CONCAT44(uVar2,uVar1);
    Ram0002000000000073 = CONCAT44(uVar2,uVar1);
    uVar6 = Ram0002000000000073;
    *(undefined4 *)(&TP_R08C + uVar13) = 0;
    *(uint *)(&TP_R010 + uVar13) = uVar11;
    if (uVar13 - 2 < 2) {
      uVar1 = Ram0002000000000314;
    }
    *(ulong *)(&TP_R001 + uVar13) = uVar6;
    *(ulong *)(&TP_R001 + uVar13) = uVar9 | 0x100000000;
    puVar14 = (undefined8 *)(uVar9 & 0xfffff);
    *(uint *)((long)&DAT_00101040 + uVar13 * 0x10 + 4) = (uint)((uVar9 << 0x2c) >> 0x2c);
  }
joined_r0x00010e6c:
  if (uVar15 == 0) {
LAB_00010bec:
    lVar8 = Ram00020000000001fa;
    puVar14 = (undefined8 *)&LAB_0000c000;
    *(undefined4 *)(&LAB_0000c3e4 + (lVar17 << 0x24) + lVar8) = 0;
  }
LAB_00010c04:
  FUN_00009bb8(puVar14);
  return;
}


/* ---- pm4_SWITCH_BUFFER_handler @ 00011018 size=16 ---- */

void pm4_SWITCH_BUFFER_handler(void)

{
  undefined8 *puVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  puVar1 = (undefined8 *)Ram00020000000001f3;
  *puVar1 = 0;
  Ram000200000000038b = 0;
  FUN_00009bb8();
  return;
}


/* ---- pm4_SET_Q_PREEMPTION_MODE_handler @ 00011030 size=396 ---- */

/* WARNING: Removing unreachable block (ram,0x000111a0) */
/* WARNING: Removing unreachable block (ram,0x00011178) */
/* WARNING: Removing unreachable block (ram,0x00011164) */
/* WARNING: Removing unreachable block (ram,0x00011058) */
/* WARNING: Removing unreachable block (ram,0x0001116c) */
/* WARNING: Removing unreachable block (ram,0x00011198) */
/* WARNING: Removing unreachable block (ram,0x000111ac) */
/* WARNING: Removing unreachable block (ram,0x000111b8) */

void pm4_SET_Q_PREEMPTION_MODE_handler(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  long lVar13;
  int in_mhartid;
  
  uVar1 = Ram0002000000000302;
  uVar5 = Ram0002000000000302;
  uVar6 = Ram0002000000000302;
  uVar7 = Ram0002000000000302;
  uVar8 = Ram0002000000000302;
  uVar9 = Ram0002000000000302;
  uVar10 = Ram0002000000000302;
  iVar11 = Ram0002000000000302;
  iVar2 = Ram00020000000000a9;
  lVar4 = Ram00020000000001fa;
  lVar13 = ((long)(in_mhartid << 2) & 0xcU | (long)(iVar2 << 4) & 0x70U) << 0x24;
  uVar3 = Ram00020000000001f0;
  Ram000200000000001c = (ulong)uVar3;
  Ram00020000000000a5 = *(uint *)(&LAB_0000c3e8 + lVar4 + lVar13) & 0xf | 0x100;
  uVar12 = Ram0002000000000314;
  lVar4 = Ram00020000000001fa;
  Ram0002000000000324 = *(uint *)(&LAB_0000c3e8 + lVar4 + lVar13) >> 0x18 & 3;
  *DAT_001013d0 = CONCAT44(uVar5,uVar1);
  DAT_001013d0[1] = CONCAT44(uVar7,uVar6);
  DAT_001013d0[2] = CONCAT44(uVar9,uVar8);
  *(uint *)(DAT_001013d0 + 3) = (uint)(iVar11 == 0);
  *(undefined4 *)((long)DAT_001013d0 + 0x1c) = uVar10;
  uVar3 = Ram00020000000001f0;
  Ram000200000000001c = (ulong)uVar3;
  Ram00020000000000a5 = 0;
  uVar1 = Ram0002000000000314;
  do {
    lVar4 = Ram0002000000000324;
  } while (lVar4 != 0);
  lVar4 = Ram00020000000001f9;
  if (8 < (*(uint *)(&LAB_0000c348 + lVar4) & 0x1f)) {
    uVar1 = Ram000100000000c2d8;
    do {
    } while( true );
  }
  Ram0002000000000099 = 7;
  do {
  } while( true );
}


/* ---- pm4_CONTEXT_CONTROL_handler @ 000111c0 size=80 ---- */

void pm4_CONTEXT_CONTROL_handler(undefined4 param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  iVar2 = Ram0002000000000302;
  lVar1 = Ram0003000000008709;
  if (lVar1 == 0) {
    uVar3 = Ram0002000000000302;
    uVar3 = uVar3 & 0xfffffffe;
  }
  else {
    uVar3 = Ram0002000000000302;
  }
  lVar1 = Ram000200000000001e;
  if ((lVar1 == 0) && (iVar2 < 0)) {
    Ram0002000000000025 = iVar2;
  }
  if ((int)uVar3 < 0) {
    Ram0002000000000000 = param_1;
    Ram0002000000000000 = iVar2;
    Ram0002000000000000 = uVar3;
    Ram0002000000000026 = uVar3;
  }
  FUN_00009bb8();
  return;
}


/* ---- pm4_SET_BASE_handler @ 00011218 size=48 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pm4_SET_BASE_handler(ulong param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  
  uVar5 = Ram0002000000000302;
  uVar1 = Ram0002000000000302;
  lVar3 = Ram0002000000000302;
  Ram0002000000000073 = lVar3 << 0x20 | uVar1;
  uVar1 = Ram0002000000000073;
  switch(uVar5 & 7) {
  case 0:
    Ram000200000000001e = uVar1;
    break;
  case 1:
    if ((param_1 & 2) == 0) {
      Ram000200000000001f = uVar1;
      DAT_001010bc = DAT_001010bc | 0x20000000;
    }
    else {
      Ram0002000000000020 = uVar1;
      DAT_001010bc = DAT_001010bc | 0x40000000;
    }
    break;
  case 2:
    goto LAB_00011268;
  case 3:
    goto LAB_00011268;
  case 4:
    DAT_00101088 = uVar1;
    break;
  case 5:
    DAT_00101078 = uVar1;
    break;
  case 6:
    if (uVar1 >> 0x20 != uVar1 + 0x100fff >> 0x20) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    DAT_300000000068e = (undefined1)uVar1;
    Ram00020000000001ff = 0;
    _DAT_300000000068f = 0;
    uRam0003000000000696 = 0;
    Ram00020000000001ff = 0;
    uRam00030000000006a0 = (undefined1)uRam0000000000101020;
    Ram00020000000001ff = 0;
    uRam00030000000006a1 = (undefined1)uRam0000000000101028;
    Ram00020000000001ff = 0;
    uRam00030000000006a2 = (undefined1)uRam0000000000101030;
    Ram00020000000001ff = 0;
    uRam00030000000006a3 = (undefined5)uRam0000000000101038;
    uRam00030000000006a8 = (undefined1)((ulong)uRam0000000000101038 >> 0x28);
    uRam00030000000006a9 = (undefined1)((ulong)uRam0000000000101038 >> 0x30);
    uRam00030000000006aa = (undefined1)((ulong)uRam0000000000101038 >> 0x38);
    _DAT_3000000000638 = uVar1 + 0x100ffc;
    Ram00020000000001ff = 0;
    Ram00020000000001ff = 0;
    puVar4 = (uint *)((long)&DAT_00101000 + uVar1);
    uVar5 = 0x30000;
    do {
      *puVar4 = uVar5 | 0xc0001000;
      uVar5 = uVar5 + 0x40000;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0x10030000);
    do {
      lVar3 = Ram0002000000000324;
    } while (lVar3 != 0);
    Ram00020000000001ff = uVar1 + 0x102000;
    break;
  case 7:
LAB_00011268:
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  do {
    uVar2 = Ram0002000000000302;
    uVar1 = Ram0002000000000007;
    (*(code *)(uVar1 & 0xfffffffffffffffe))(uVar2);
  } while( true );
}


/* ---- pm4_CLEAR_STATE_handler @ 000113a8 size=40 ---- */

void pm4_CLEAR_STATE_handler(undefined4 param_1)

{
  uint uVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0002000000000000 = param_1;
  uVar1 = Ram0002000000000302;
  Ram0002000000000000 = uVar1 & 0xf;
  if ((uVar1 & 0xf) != 1) {
    Ram0002000000000017 = 0;
    DAT_001013a0 = 0;
  }
  FUN_00009bb8();
  return;
}


/* ---- pm4_OP_00_handler @ 000113d8 size=12 ---- */

void pm4_OP_00_handler(void)

{
  ulong uVar1;
  undefined4 uVar2;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar2 = Ram0002000000000302;
  uVar1 = Ram0002000000000007;
                    /* WARNING: Could not recover jumptable at 0x000113e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(uVar1 & 0xfffffffffffffffe))(uVar2);
  return;
}


/* ---- pm4_OP_FD_handler @ 000113e8 size=44 ---- */

void pm4_OP_FD_handler(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000015;
  Ram000200000000004b = 0;
  *(undefined4 *)(&TP_R014 + (uVar1 & 3)) = 0;
  Ram00020000000000aa = 0;
  uVar2 = Ram000200000000000b;
  uVar3 = Ram0002000000000302;
  uVar1 = Ram0002000000000007;
                    /* WARNING: Could not recover jumptable at 0x00011410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(uVar1 & 0xfffffffffffffffe))(uVar3);
  return;
}


/* ---- pm4_OP_FC_handler @ 00011418 size=24 ---- */

void pm4_OP_FC_handler(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  puVar2 = (undefined8 *)Ram00020000000001f3;
  *puVar2 = 0;
  Ram000200000000038b = 0;
  uVar3 = Ram0002000000000302;
  uVar1 = Ram0002000000000007;
                    /* WARNING: Could not recover jumptable at 0x0001142c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(uVar1 & 0xfffffffffffffffe))(uVar3);
  return;
}


/* ---- pm4_NOP_handler @ 00011430 size=24 ---- */

void pm4_NOP_handler(ulong param_1)

{
  long lVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  if ((param_1 & 0x3fff0000) != 0x3fff0000) {
    pm4_OP_FC_handler();
  }
  pm4_OP_FD_handler();
  uVar7 = Ram0002000000000015;
  Ram000200000000004a = 1;
  uVar6 = Ram0002000000000302;
  uVar4 = Ram0002000000000302;
  Ram0002000000000024 = 0;
  do {
    lVar1 = Ram000200000000001f;
  } while (lVar1 != 0);
  Ram0002000000000073 = CONCAT44(uVar4,uVar6);
  puVar3 = (uint *)Ram0002000000000073;
  uVar6 = Ram0002000000000302;
  uVar5 = Ram0002000000000302;
  if ((uVar7 & 3) == 0) {
    iVar2 = Ram0002000000000031;
    if (iVar2 != 0xffff) {
      iVar2 = Ram0002000000000074;
                    /* WARNING: Could not recover jumptable at 0x000114d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&LAB_000114d4 + (int)((*puVar3 & -(uint)(iVar2 == 0) & 7) << 2)))();
      return;
    }
    FUN_00008ba0();
    FUN_00009bb8();
    return;
  }
  iVar2 = Ram0002000000000074;
  if ((iVar2 == 0) && ((*puVar3 & 7) != 0)) {
    Ram0002000000000024 = 1;
    do {
      lVar1 = Ram000200000000001f;
    } while (lVar1 != 1);
    uVar6 = 1;
  }
  else {
    *(uint *)(&TP_R014 + (uVar7 & 3)) = (uint)(((ulong)uVar5 << 0x32) >> 0x32);
    Ram0002000000000024 = 1;
    uVar6 = 1;
    do {
      lVar1 = Ram000200000000001f;
      uVar7 = 0;
    } while (lVar1 != 1);
    for (; uVar7 < ((ulong)uVar5 & 0x3fff); uVar7 = uVar7 + 1) {
      uVar6 = Ram0002000000000302;
    }
  }
  Ram000200000000004b = 0;
  FUN_00009bb8(uVar6);
  return;
}


/* ---- pm4_COND_EXEC_handler @ 00011448 size=268 ---- */

void pm4_COND_EXEC_handler(void)

{
  long lVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar7 = Ram0002000000000015;
  Ram000200000000004a = 1;
  uVar6 = Ram0002000000000302;
  uVar4 = Ram0002000000000302;
  Ram0002000000000024 = 0;
  do {
    lVar1 = Ram000200000000001f;
  } while (lVar1 != 0);
  Ram0002000000000073 = CONCAT44(uVar4,uVar6);
  puVar3 = (uint *)Ram0002000000000073;
  uVar6 = Ram0002000000000302;
  uVar5 = Ram0002000000000302;
  if ((uVar7 & 3) == 0) {
    iVar2 = Ram0002000000000031;
    if (iVar2 != 0xffff) {
      iVar2 = Ram0002000000000074;
                    /* WARNING: Could not recover jumptable at 0x000114d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&LAB_000114d4 + (int)((*puVar3 & -(uint)(iVar2 == 0) & 7) << 2)))();
      return;
    }
    FUN_00008ba0();
    FUN_00009bb8();
    return;
  }
  iVar2 = Ram0002000000000074;
  if ((iVar2 == 0) && ((*puVar3 & 7) != 0)) {
    Ram0002000000000024 = 1;
    do {
      lVar1 = Ram000200000000001f;
    } while (lVar1 != 1);
    uVar6 = 1;
  }
  else {
    *(uint *)(&TP_R014 + (uVar7 & 3)) = (uint)(((ulong)uVar5 << 0x32) >> 0x32);
    Ram0002000000000024 = 1;
    uVar6 = 1;
    do {
      lVar1 = Ram000200000000001f;
      uVar7 = 0;
    } while (lVar1 != 1);
    for (; uVar7 < ((ulong)uVar5 & 0x3fff); uVar7 = uVar7 + 1) {
      uVar6 = Ram0002000000000302;
    }
  }
  Ram000200000000004b = 0;
  FUN_00009bb8(uVar6);
  return;
}


/* ---- pm4_PRED_EXEC_handler @ 00011748 size=120 ---- */

void pm4_PRED_EXEC_handler(void)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0002000000000024 = 0;
  do {
    lVar3 = Ram000200000000001f;
  } while (lVar3 != 0);
  uVar5 = Ram0002000000000302;
  uVar2 = Ram0002000000000016;
  if ((uVar5 >> 0x18 & uVar2) == 0) {
    uVar1 = Ram0002000000000015;
    *(uint *)(&TP_R014 + (uVar1 & 3)) = (uint)(((ulong)uVar5 << 0x32) >> 0x32);
    Ram0002000000000024 = 1;
    do {
      lVar3 = Ram000200000000001f;
    } while (lVar3 != 1);
    puVar4 = (undefined8 *)Ram00020000000001f3;
    *puVar4 = 0;
    Ram000200000000038b = 0;
  }
  else {
    Ram0002000000000024 = 1;
    do {
      lVar3 = Ram000200000000001f;
    } while (lVar3 != 1);
  }
  FUN_00009bb8();
  return;
}


/* ---- pm4_PREAMBLE_CNTL_handler @ 000117c8 size=1072 ---- */

/* WARNING: Removing unreachable block (ram,0x00011968) */
/* WARNING: Removing unreachable block (ram,0x00011874) */
/* WARNING: Removing unreachable block (ram,0x000119e8) */

void pm4_PREAMBLE_CNTL_handler(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined8 *puVar11;
  int *piVar12;
  uint *puVar13;
  undefined4 uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong in_mhartid;
  
  lVar8 = DAT_001013c8;
  lVar5 = DAT_001013b8;
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000302;
  switch(uVar1 >> 0x1c) {
  case 0:
    bVar10 = false;
    break;
  case 1:
    bVar10 = true;
    break;
  case 2:
    uVar14 = 0;
    goto LAB_00011804;
  case 3:
    uVar14 = 1;
LAB_00011804:
    uVar4 = Ram000200000000001e;
    if (uVar4 != 3) {
      uVar1 = uVar1 | uVar4;
    }
    Ram000200000000002a = uVar14;
    uVar14 = Ram0002000000000314;
    Ram0002000000000000 = param_1;
    Ram0002000000000000 = uVar1;
    goto LAB_00011828;
  case 4:
    iVar2 = Ram00020000000000a9;
    lVar5 = Ram00020000000001fa;
    uVar4 = Ram00020000000001f0;
    Ram000200000000001c = (ulong)uVar4;
    Ram00020000000000a5 =
         *(uint *)(&LAB_0000c3e8 +
                  (((long)((int)in_mhartid << 2) & 0xcU | (long)(iVar2 << 4) & 0x70U) << 0x24) +
                  lVar5) & 0xf | 0x100;
    uVar14 = Ram0002000000000314;
    lVar5 = Ram0002000000000036;
    if (lVar5 != 0) {
      Ram0002000000000083 = 0;
      Ram0002000000000000 = 0x410;
    }
    Ram0002000000000000 = param_1;
    Ram0002000000000000 = uVar1;
    iVar2 = Ram0002000000000039;
    DAT_00101068 = Ram000200000000001a;
    DAT_00101070 = Ram000200000000001b;
    DAT_00101080 = Ram0002000000000018;
    Ram0002000000000000 = 0xc00f1000;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    do {
      uVar15 = Ram0002000000000314;
    } while ((0x400L << (in_mhartid & 0x3f) & uVar15) != 0);
    iVar6 = Ram0003000000008705;
    DAT_001010bc = (uint)((ulong)((long)(int)DAT_001010bc << 0x21) >> 0x21) & 0xfc000000 |
                   iVar2 << 0x1f | (uint)((ulong)((long)iVar6 << 0x26) >> 0x26);
    puVar11 = &DAT_00101040;
    puVar9 = (undefined8 *)(DAT_001013d0 + 0xa8);
    puVar16 = (undefined8 *)(DAT_001013d0 + 0x80);
    do {
      puVar17 = puVar16 + 1;
      *puVar16 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar16 = puVar17;
    } while (puVar17 != puVar9);
    uVar1 = Ram00020000000001f0;
    Ram000200000000001c = (ulong)uVar1;
    Ram00020000000000a5 = 0;
    uVar14 = Ram0002000000000314;
    FUN_00009bb8();
    return;
  case 5:
    iVar2 = Ram00020000000000a9;
    lVar3 = Ram00020000000001fa;
    uVar4 = Ram00020000000001f0;
    Ram000200000000001c = (ulong)uVar4;
    Ram00020000000000a5 =
         *(uint *)(&LAB_0000c3e8 +
                  (((long)((int)in_mhartid << 2) & 0xcU | (long)(iVar2 << 4) & 0x70U) << 0x24) +
                  lVar3) & 0xf | 0x100;
    uVar14 = Ram0002000000000314;
    if (DAT_001013c8 != 0) {
      FUN_00008e78();
      Ram0003000000008705 = DAT_001010bc;
      Ram00020000000001ff = 0;
      uVar7 = Ram0003000000008707;
      uVar4 = Ram00020000000001f0;
      Ram000200000000001c = (ulong)uVar4;
      Ram00020000000000a5 = uVar7 | 0x100;
      uVar14 = Ram0002000000000314;
      lVar3 = Ram0002000000000011;
      if (lVar3 == 0) {
        Ram0002000000000018 = 0;
        uVar14 = Ram00020000000001f1;
        Ram0002000000000000 = uVar14;
        Ram0002000000000000 = 0;
      }
      iVar2 = Ram0002000000000010;
      if (iVar2 == 0) {
        Ram0002000000000017 = 0;
        Ram0002000000000000 = 0xc0005200;
        Ram0002000000000000 = 0;
      }
      piVar12 = &DAT_00100620;
      do {
        Ram0002000000000003 = (ulong)(uint)((*piVar12 + -0x2c00) * 4) + lVar8;
        Ram0002000000000003 = (ulong)(uint)piVar12[1];
        piVar12 = piVar12 + 2;
      } while (piVar12 != &DAT_00100680);
      piVar12 = &DAT_00100680;
      do {
        Ram0002000000000003 = (ulong)(uint)((*piVar12 + -0x2c00) * 4) + lVar8;
        Ram0002000000000003 = (ulong)(uint)piVar12[1];
        piVar12 = piVar12 + 2;
      } while (piVar12 != &DAT_001006c8);
      piVar12 = &DAT_001006c8;
      do {
        Ram0002000000000003 = (ulong)(uint)((*piVar12 + -0x9c00) * 4) + lVar8;
        Ram0002000000000003 = (ulong)(uint)piVar12[1];
        piVar12 = piVar12 + 2;
      } while (piVar12 != &DAT_001008a0);
      puVar13 = &DAT_001008a0;
      do {
        Ram0002000000000003 = (ulong)((*puVar13 - 0xb800) * 4) + lVar8;
        Ram0002000000000003 = (ulong)puVar13[1];
        puVar13 = puVar13 + 2;
      } while (puVar13 != &switchD_00013d78::switchdataD_001008e0);
      if (lVar5 != 0) {
        FUN_00008ea8(lVar5);
      }
    }
    uVar4 = Ram00020000000001f0;
    Ram000200000000001c = (ulong)uVar4;
    Ram00020000000000a5 = 0;
    uVar14 = Ram0002000000000314;
    Ram0002000000000000 = param_1;
    Ram0002000000000000 = uVar1;
    FUN_00009bb8();
    return;
  default:
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar15 = Ram0002000000000015;
  uVar15 = uVar15 & 3;
  if (uVar15 != 0) {
    if (bVar10) {
      *(int *)(&TP_R053 + uVar15) = *(int *)(&TP_R085 + uVar15) + -2;
      *(undefined8 *)(&TP_R095 + uVar15) = *(undefined8 *)(&TP_R01B + uVar15);
    }
    else {
      *(int *)(&TP_R051 + uVar15) = *(int *)(&TP_R085 + uVar15);
    }
  }
LAB_00011828:
  FUN_00009bb8();
  return;
}


/* ---- pm4_OP_B7_handler @ 00011c08 size=16 ---- */

void pm4_OP_B7_handler(undefined4 param_1)

{
  undefined4 uVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000302;
  Ram0002000000000000 = param_1;
  Ram0002000000000000 = uVar1;
  FUN_00009bb8();
  return;
}


/* ---- pm4_REWIND_handler @ 00011c20 size=28 ---- */

void pm4_REWIND_handler(void)

{
  long unaff_retaddr;
  
  Ram0002000000000041 = 0;
  Ram000100000000c128 = 0x1000000;
  Ram0001000000030110 = (uint)((ulong)(unaff_retaddr << 0x2c) >> 0x2c);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- pm4_OCCLUSION_QUERY_handler @ 00011c40 size=132 ---- */

void pm4_OCCLUSION_QUERY_handler(void)

{
  ulong *puVar1;
  ulong *puVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar6 = Ram0002000000000302;
  lVar5 = Ram0002000000000302;
  Ram0002000000000073 = lVar5 << 0x20 | uVar6;
  puVar2 = (ulong *)Ram0002000000000073;
  uVar6 = Ram0002000000000302;
  lVar5 = Ram0002000000000302;
  Ram0002000000000073 = lVar5 << 0x20 | uVar6;
  plVar3 = (long *)Ram0002000000000073;
  do {
    lVar5 = 0;
    uVar6 = 0x8000000000000000;
    puVar8 = puVar2;
    do {
      uVar7 = *puVar8;
      puVar1 = puVar8 + 1;
      puVar8 = puVar8 + 2;
      lVar5 = lVar5 + (*puVar1 - uVar7);
      uVar6 = uVar6 & *puVar1 & uVar7;
    } while (puVar2 + 0x30 != puVar8);
    iVar4 = Ram0002000000000074;
    if (iVar4 != 0) goto LAB_00011cc0;
  } while (-1 < (long)uVar6);
  *plVar3 = lVar5 + *plVar3;
LAB_00011cc0:
  FUN_00009bb8();
  return;
}


/* ---- pm4_SET_PREDICATION_handler @ 00011cc8 size=764 ---- */

/* WARNING: Removing unreachable block (ram,0x00011e14) */
/* WARNING: Removing unreachable block (ram,0x00011d7c) */
/* WARNING: Removing unreachable block (ram,0x00011eb4) */

void pm4_SET_PREDICATION_handler(void)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  undefined4 uVar7;
  bool bVar8;
  ulong uVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  int in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar5 = Ram0002000000000302;
  uVar9 = Ram0002000000000302;
  lVar6 = Ram0002000000000302;
  uVar13 = uVar5 & 0x70000;
  uVar9 = lVar6 << 0x20 | uVar9;
  if ((uVar13 - 0x30000 & 0xfffe0000) == 0) {
    Ram0002000000000073 = uVar9;
    plVar4 = (long *)Ram0002000000000073;
    if (uVar13 == 0x30000) {
      bVar1 = *plVar4 != 0;
    }
    else {
      bVar1 = (int)*plVar4 != 0;
    }
    uVar9 = (ulong)bVar1;
    if (((long)((int)uVar5 >> 8) & 1U) != uVar9) {
LAB_00011e5c:
      Ram0002000000000013 = 0;
      uVar7 = Ram0002000000000314;
      goto LAB_00011d28;
    }
  }
  else {
    Ram0002000000000073 = uVar9;
    DAT_00101390 = Ram0002000000000073;
    Ram0002000000000092 = DAT_00101390;
    uVar9 = (ulong)(int)uVar5;
    if (-1 < (long)uVar9) {
      DAT_00101388 = 0;
    }
    if ((uVar5 & 0x70000) != 0) {
      if (uVar13 == 0x20000) {
        uVar9 = (ulong)(int)((DAT_00101388 ^ 1) & uVar5 >> 0x1f);
        if (uVar9 == 0) {
          puVar11 = (uint *)((ulong)(in_mhartid + 0x30e) + 0x2000000000000);
          do {
            Ram0002000000000092 = 8;
            do {
              uVar13 = Ram0002000000000320;
            } while ((uVar13 & 4) != 0);
            if ((int)(*puVar11 & *puVar11 & *puVar11 & *puVar11) < 0) {
              bVar1 = *puVar11 - *puVar11 == *puVar11 - *puVar11;
              uVar9 = (ulong)bVar1;
              bVar2 = *puVar11 - *puVar11 == *puVar11 - *puVar11;
              bVar8 = bVar2 && bVar1;
              DAT_00101388 = (uint)bVar8;
              if ((uVar5 >> 8 & 1) == 0) {
                bVar8 = !bVar2 || !bVar1;
              }
              Ram0002000000000012 = 0;
              uVar7 = Ram0002000000000314;
              if (!bVar8) goto LAB_00011e5c;
              goto LAB_00011d28;
            }
            Ram0002000000000092 = DAT_00101390;
            iVar10 = Ram0002000000000074;
            uVar9 = (ulong)iVar10;
          } while (uVar9 == 0);
          Ram0002000000000013 = 0;
          uVar7 = Ram0002000000000314;
          DAT_00101388 = 0;
        }
      }
      else {
        uVar9 = 0x10000;
        if (uVar13 != 0x10000) goto LAB_00011d28;
        uVar9 = (ulong)(int)(DAT_00101388 & uVar5 >> 0x1f);
        if (uVar9 == 0) {
          uVar13 = uVar5 >> 8 & 1;
          Ram0002000000000092 = 0x60;
          do {
            uVar12 = Ram0002000000000320;
          } while ((uVar12 & 4) != 0);
          puVar11 = (uint *)((ulong)(in_mhartid + 0x30e) + 0x2000000000000);
          while( true ) {
            iVar10 = 0x60;
            uVar12 = 1;
            do {
              uVar3 = (*puVar11 & *puVar11) >> 0x1f;
              DAT_00101388 = uVar3 & (*puVar11 != *puVar11 || *puVar11 != *puVar11);
              uVar12 = uVar12 & uVar3;
              iVar10 = iVar10 + -4;
              if (DAT_00101388 != 0) {
                Ram0002000000000012 = 0;
                uVar7 = Ram0002000000000314;
                if (uVar13 == 0) {
                  Ram0002000000000013 = 0;
                  uVar7 = Ram0002000000000314;
                  DAT_00101388 = 0;
                }
                uVar9 = (ulong)(in_mhartid + 0x30e);
                puVar11 = (uint *)(uVar9 + 0x2000000000000);
                for (; iVar10 != 0; iVar10 = iVar10 + -1) {
                  uVar9 = (ulong)*puVar11;
                }
                goto LAB_00011d28;
              }
            } while (iVar10 != 0);
            if (uVar12 != 0) break;
            Ram0002000000000012 = 0;
            uVar7 = Ram0002000000000314;
            DAT_00101388 = 1;
            uVar9 = 0;
            if ((uVar5 >> 0xc & 1) != 0) goto LAB_00011d28;
            iVar10 = Ram0002000000000074;
            uVar9 = (ulong)iVar10;
            if (uVar9 != 0) goto LAB_00011fb8;
            Ram0002000000000092 = DAT_00101390;
            Ram0002000000000092 = 0x60;
          }
          Ram0002000000000012 = 0;
          uVar7 = Ram0002000000000314;
          uVar9 = 1;
          DAT_00101388 = 1;
          if (uVar13 == 0) goto LAB_00011d28;
LAB_00011fb8:
          Ram0002000000000013 = 0;
          uVar7 = Ram0002000000000314;
          DAT_00101388 = 0;
          goto LAB_00011d28;
        }
      }
      Ram0002000000000092 = 0;
      goto LAB_00011d28;
    }
    Ram0002000000000092 = 0;
  }
  Ram0002000000000012 = 0;
  uVar7 = Ram0002000000000314;
LAB_00011d28:
  FUN_00009bb8(uVar9);
  return;
}


/* ---- pm4_OP_0A_handler @ 00011fc8 size=16 ---- */

void pm4_OP_0A_handler(void)

{
  undefined4 uVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000302;
  Ram0002000000000083 = 0;
  Ram0002000000000000 = uVar1;
  FUN_00009bb8();
  return;
}


/* ---- thunk_FUN_00009bb8 @ 00011fe0 size=4 ---- */

void thunk_FUN_00009bb8(void)

{
  ulong uVar1;
  undefined4 uVar2;
  
  do {
    uVar2 = Ram0002000000000302;
    uVar1 = Ram0002000000000007;
    (*(code *)(uVar1 & 0xfffffffffffffffe))(uVar2);
  } while( true );
}


/* ---- thunk_FUN_00009bb8 @ 00011fe8 size=4 ---- */

void thunk_FUN_00009bb8(void)

{
  ulong uVar1;
  undefined4 uVar2;
  
  do {
    uVar2 = Ram0002000000000302;
    uVar1 = Ram0002000000000007;
    (*(code *)(uVar1 & 0xfffffffffffffffe))(uVar2);
  } while( true );
}


/* ---- thunk_FUN_00009bb8 @ 00011ff0 size=4 ---- */

void thunk_FUN_00009bb8(void)

{
  ulong uVar1;
  undefined4 uVar2;
  
  do {
    uVar2 = Ram0002000000000302;
    uVar1 = Ram0002000000000007;
    (*(code *)(uVar1 & 0xfffffffffffffffe))(uVar2);
  } while( true );
}


/* ---- sub_11ff8 @ 00011ff8 size=72 ---- */

void sub_11ff8(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  iVar2 = Ram0002000000000302;
  if (iVar2 == 0) {
    uVar3 = Ram0002000000000302;
    lVar4 = Ram0002000000000302;
    Ram0002000000000073 = lVar4 << 0x20 | uVar3;
    piVar1 = (int *)Ram0002000000000073;
    do {
    } while (*piVar1 == 0);
    return;
  }
  Ram0002000000000000 = param_1;
  Ram0002000000000000 = param_2;
  Ram0002000000000000 = iVar2;
  Ram0073000100000000 = 0;
  Ram000200000000038b = 0;
  return;
}


/* ---- sub_12040 @ 00012040 size=32 ---- */

void sub_12040(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  iVar1 = Ram0002000000000302;
  Ram00020000000000b3 = (uint)(iVar1 != 0);
  Ram0002000000000000 = param_1;
  Ram0002000000000000 = param_2;
  Ram0002000000000000 = iVar1;
  return;
}


/* ---- sub_12060 @ 00012060 size=20 ---- */

void sub_12060(undefined4 param_1,undefined4 param_2)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0002000000000000 = param_1;
  Ram0002000000000000 = param_2;
  Ram0073000100000000 = 0;
  Ram000200000000038b = 0;
  return;
}


/* ---- sub_12078 @ 00012078 size=464 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_12078(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar5 = Ram0002000000000302;
  uVar6 = Ram0002000000000302;
  uVar1 = Ram000100000000c6c8;
  if ((uVar1 >> 8 & 3) == uVar6) {
    Ram0002000000000066 = (uVar1 >> 8 & 3) * 3;
    return;
  }
  Ram0002000000000301 = 1;
  lVar7 = 0;
  while( true ) {
    lVar3 = Ram00020000000001fa;
    lVar4 = Ram00020000000001fa;
    *(uint *)(&LAB_0000c3bc + lVar4 + (lVar7 << 0x26)) =
         *(uint *)(&LAB_0000c3bc + (lVar7 << 0x26) + lVar3) | 0x80;
    lVar3 = Ram00020000000001fa;
    lVar8 = (lVar7 << 2 | 0x10U) << 0x24;
    lVar4 = Ram00020000000001fa;
    *(uint *)(&LAB_0000c3bc + lVar4 + lVar8) = *(uint *)(&LAB_0000c3bc + lVar3 + lVar8) | 0x80;
    if (lVar7 == 1) break;
    lVar7 = 1;
  }
  lVar7 = Ram00020000000001f9;
  *(undefined4 *)(lVar7 + 0x3f058) = uVar5;
  uVar9 = 0;
  do {
    if (uVar6 == 0) {
      Ram0002000000000066 = 0;
LAB_00012150:
      uVar1 = Ram00020000000001f0;
      Ram000200000000001c = (ulong)uVar1;
      Ram00020000000000a5 = uVar9 | 0x100;
      uVar5 = Ram0002000000000314;
      Ram000100000000c6ec = 0;
    }
    else if (((int)(_DAT_100000003f0f4 >> 0x10) >> (uVar9 & 0x1f) & 1U) != 0) {
      Ram0002000000000066 = 3;
      goto LAB_00012150;
    }
    uVar1 = Ram00020000000001f0;
    Ram000200000000001c = (ulong)uVar1;
    Ram00020000000000a5 = 0;
    uVar5 = Ram0002000000000314;
    uVar9 = uVar9 + 1;
  } while (uVar9 != 0x10);
  if (uVar6 == 0) {
    do {
      iVar2 = Ram000100000000c6ec;
    } while (iVar2 != 0);
  }
  else {
    do {
      iVar2 = Ram000100000000c6ec;
      if (iVar2 != 0) break;
      iVar2 = Ram000100000000c6ec;
    } while (iVar2 == 0);
  }
  uVar9 = (long)(int)(uVar6 * 2) & 0xffU | 0xffffffff80000001;
  do {
    do {
      Ram000100000000c6c8 = (int)uVar9;
      uVar1 = Ram000100000000c6c8;
    } while ((uVar1 >> 8 & 3) != uVar6);
  } while ((uVar1 & 0x40000001) != 0x40000001);
  Ram000100000000c6c8 = (uint)((uVar9 << 0x21) >> 0x21);
  Ram0002000000000066 = uVar6 * 3;
  Ram0002000000000301 = 0;
  return;
}


/* ---- pm4_OP_04_handler @ 00012248 size=648 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pm4_OP_04_handler(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000302;
  if (uVar1 == 0x16) {
    Ram0002000000000000 = param_1;
    Ram0002000000000000 = 0x16;
    Ram0073000100000000 = 0;
    Ram000200000000038b = 0;
    return;
  }
  if (uVar1 < 0x17) {
    if (uVar1 == 0xb) {
      iVar2 = Ram0002000000000302;
      if (iVar2 != 0) {
        Ram0002000000000000 = param_1;
        Ram0002000000000000 = 0xb;
        Ram0002000000000000 = iVar2;
        Ram0073000100000000 = 0;
        Ram000200000000038b = 0;
        return;
      }
      uVar10 = Ram0002000000000302;
      lVar8 = Ram0002000000000302;
      Ram0002000000000073 = lVar8 << 0x20 | uVar10;
      piVar3 = (int *)Ram0002000000000073;
      do {
      } while (*piVar3 == 0);
      return;
    }
    if (uVar1 == 0x15) {
      iVar2 = Ram0002000000000302;
      Ram00020000000000b3 = (uint)(iVar2 != 0);
      Ram0002000000000000 = param_1;
      Ram0002000000000000 = 0x15;
      Ram0002000000000000 = iVar2;
      return;
    }
  }
  else if (uVar1 == 0x1c) {
    uVar6 = Ram0002000000000302;
    uVar7 = Ram0002000000000302;
    uVar1 = Ram000100000000c6c8;
    if ((uVar1 >> 8 & 3) == uVar7) {
      Ram0002000000000066 = (uVar1 >> 8 & 3) * 3;
      return;
    }
    Ram0002000000000301 = 1;
    lVar8 = 0;
    while( true ) {
      lVar4 = Ram00020000000001fa;
      lVar5 = Ram00020000000001fa;
      *(uint *)(&LAB_0000c3bc + (lVar8 << 0x26) + lVar5) =
           *(uint *)(&LAB_0000c3bc + lVar4 + (lVar8 << 0x26)) | 0x80;
      lVar4 = Ram00020000000001fa;
      lVar9 = (lVar8 << 2 | 0x10U) << 0x24;
      lVar5 = Ram00020000000001fa;
      *(uint *)(&LAB_0000c3bc + lVar9 + lVar5) = *(uint *)(&LAB_0000c3bc + lVar4 + lVar9) | 0x80;
      if (lVar8 == 1) break;
      lVar8 = 1;
    }
    lVar8 = Ram00020000000001f9;
    *(undefined4 *)(lVar8 + 0x3f058) = uVar6;
    uVar10 = 0;
    do {
      if (uVar7 == 0) {
        Ram0002000000000066 = 0;
LAB_00012370:
        uVar1 = Ram00020000000001f0;
        Ram000200000000001c = (ulong)uVar1;
        Ram00020000000000a5 = uVar10 | 0x100;
        uVar6 = Ram0002000000000314;
        Ram000100000000c6ec = 0;
      }
      else if (((int)(_DAT_100000003f0f4 >> 0x10) >> (uVar10 & 0x1f) & 1U) != 0) {
        Ram0002000000000066 = 3;
        goto LAB_00012370;
      }
      uVar1 = Ram00020000000001f0;
      Ram000200000000001c = (ulong)uVar1;
      Ram00020000000000a5 = 0;
      uVar6 = Ram0002000000000314;
      uVar10 = uVar10 + 1;
    } while (uVar10 != 0x10);
    if (uVar7 == 0) {
      do {
        iVar2 = Ram000100000000c6ec;
      } while (iVar2 != 0);
    }
    else {
      do {
        iVar2 = Ram000100000000c6ec;
        if (iVar2 != 0) break;
        iVar2 = Ram000100000000c6ec;
      } while (iVar2 == 0);
    }
    uVar10 = (long)(int)(uVar7 * 2) & 0xffU | 0xffffffff80000001;
    do {
      do {
        Ram000100000000c6c8 = (int)uVar10;
        uVar1 = Ram000100000000c6c8;
      } while ((uVar1 >> 8 & 3) != uVar7);
    } while ((uVar1 & 0x40000001) != 0x40000001);
    Ram000100000000c6c8 = (uint)((uVar10 << 0x21) >> 0x21);
    Ram0002000000000066 = uVar7 * 3;
    Ram0002000000000301 = 0;
    return;
  }
  FUN_00008fb0();
  return;
}


/* ---- pm4_OP_3D_handler @ 000124d0 size=20 ---- */

void pm4_OP_3D_handler(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000302;
  Ram0002000000000069 = uVar1 & 3;
  uVar2 = Ram0002000000000314;
  FUN_00009bb8();
  return;
}


/* ---- pm4_RUN_CLEANER_SHADER_handler @ 000124e8 size=188 ---- */

void pm4_RUN_CLEANER_SHADER_handler(void)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000302;
  uVar2 = Ram0002000000000015;
  uVar1 = *(undefined4 *)(&TP_R00B + (uVar2 & 3));
  *(undefined4 *)(&TP_R041 + (uVar2 & 3)) = 1;
  Ram0002000000000067 = 1;
  lVar3 = Ram00020000000001fa;
  *(undefined4 *)(lVar3 + 0x100002e080) = 0x80000006;
  do {
    lVar3 = Ram00020000000001fa;
  } while ((*(uint *)(lVar3 + 0x100002e080) & 0xc0000000) != 0xc0000000);
  lVar4 = Ram00020000000001fa;
  *(uint *)(lVar4 + 0x100002e080) =
       (uint)((ulong)((long)(int)*(uint *)(lVar3 + 0x100002e080) << 0x21) >> 0x21);
  do {
    lVar3 = Ram00020000000001fa;
  } while ((*(uint *)(lVar3 + 0x100002e080) & 0xc0000000) != 0);
  Ram0002000000000067 = 0;
  Ram0002000000000041 = uVar1;
  FUN_00009bb8();
  return;
}


/* ---- pm4_SET_CONFIG_REG_handler @ 000125a8 size=60 ---- */

void pm4_SET_CONFIG_REG_handler(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar2 = Ram0003000000008709;
  uVar1 = Ram000200000000000a;
  if ((uVar2 & uVar1 & 1) != 0) {
    Ram0002000000000028 = 0x10000 - (uint)(((ulong)param_1 << 0x22) >> 0x32);
  }
  Ram0002000000000000 = param_1;
  Ram0073000100000000 = 0;
  Ram000200000000038b = 0;
  FUN_00009bb8();
  return;
}


/* ---- pm4_SET_UCONFIG_REG_INDEX_handler @ 000125e8 size=188 ---- */

void pm4_SET_UCONFIG_REG_INDEX_handler(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000302;
  uVar3 = uVar1 >> 0x1c;
  if (uVar3 < 2) {
    Ram0002000000000000 = param_1 & 0xffff00ff | 0x7900;
    Ram0002000000000000 = uVar1 & 0xffff;
    Ram0073000100000000 = 0;
    Ram000200000000038b = 0;
  }
  else {
    uVar2 = Ram0002000000000302;
    if (uVar3 == 2) {
      Ram0001000200028a7c = uVar2;
      uVar3 = 1 << ((ulong)uVar2 & 3) & 3;
      Ram000200000000001c = uVar3;
      Ram00020000000001f0 = uVar3;
      DAT_001010b0 = uVar2;
    }
    else {
      if (uVar3 != 3) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      Ram0001000200028a88 = uVar2;
      DAT_001010b8 = uVar2;
    }
    uVar3 = Ram000200000000000a;
    if ((uVar3 & 0x8000) != 0) {
      Ram0002000000000028 = 0xffff;
    }
    Ram0002000000000000 = param_1;
    Ram0002000000000000 = uVar1 & 0xffff;
    Ram0002000000000000 = uVar2;
  }
  FUN_00009bb8();
  return;
}


/* ---- pm4_NUM_INSTANCES_handler @ 000126a8 size=56 ---- */

void pm4_NUM_INSTANCES_handler(void)

{
  uint uVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  DAT_001010b8 = Ram0002000000000302;
  Ram0001000200028a88 = DAT_001010b8;
  uVar1 = Ram000200000000000a;
  Ram0002000000000028 = uVar1 >> 0xf & 1;
  Ram0002000000000000 = 0xc0017900;
  Ram0002000000000000 = 0x24d;
  Ram0002000000000000 = DAT_001010b8;
  FUN_00009bb8();
  return;
}


/* ---- pm4_LOAD_UCONFIG_REG_handler @ 000126e8 size=208 ---- */

void pm4_LOAD_UCONFIG_REG_handler(ulong param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar4 = Ram0002000000000302;
  uVar5 = Ram0002000000000302;
  Ram0002000000000073 = CONCAT44(uVar5,uVar4);
  lVar3 = Ram0002000000000073;
  Ram0002000000000023 = 0;
  uVar9 = Ram0002000000000009;
  uVar7 = (uint)((param_1 << 0x22) >> 0x20);
  if (((uVar9 & 0x8000) == 0) || (lVar2 = Ram0003000000008709, lVar2 != 0)) {
    uVar9 = 0;
    do {
      uVar8 = Ram0002000000000302;
      param_2 = (ulong)uVar8;
      uVar9 = uVar9 + 1;
    } while (uVar9 <= (uVar7 >> 0x12) - 2);
  }
  else {
    for (iVar1 = (uVar7 >> 0x12) - 1; iVar1 != 0; iVar1 = iVar1 + -2) {
      iVar6 = Ram0002000000000302;
      uVar7 = Ram0002000000000302;
      param_2 = (ulong)uVar7;
      do {
        lVar2 = Ram0002000000000012;
      } while (lVar2 != 0);
      param_1 = param_1 & 0xffffffffc000ffff | 0x30000;
      Ram0002000000000003 = (ulong)(uint)(iVar6 << 2) + lVar3;
      Ram0002000000000003 = param_2;
      Ram0002000000000000 = (int)param_1;
      Ram0002000000000000 = uVar4;
      Ram0002000000000000 = uVar5;
      Ram0002000000000000 = iVar6;
      Ram0002000000000000 = uVar7;
    }
  }
  FUN_00009bb8(param_2);
  return;
}


/* ---- pm4_LOAD_SH_REG_handler @ 000127c0 size=472 ---- */

void pm4_LOAD_SH_REG_handler(ulong param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  if ((param_1 & 2) == 0) {
    lVar2 = Ram0002000000000011;
    if (lVar2 == 0) {
      Ram0002000000000018 = 0;
      uVar4 = Ram00020000000001f1;
      Ram0002000000000000 = uVar4;
      Ram0002000000000000 = 0;
    }
    uVar4 = Ram0002000000000302;
    uVar5 = Ram0002000000000302;
    Ram0002000000000073 = CONCAT44(uVar5,uVar4);
    lVar2 = Ram0002000000000073;
    Ram0002000000000023 = 0;
    uVar8 = Ram0002000000000009;
    param_2 = 0x10000;
    if (((uVar8 & 0x10000) == 0) || (lVar3 = Ram0003000000008709, lVar3 != 0)) {
      uVar8 = 0;
      do {
        uVar7 = Ram0002000000000302;
        param_2 = (ulong)uVar7;
        uVar8 = uVar8 + 1;
      } while (uVar8 <= (uint)((param_1 << 0x22) >> 0x32) - 2);
    }
    else {
      for (iVar1 = (uint)((param_1 << 0x22) >> 0x32) - 1; iVar1 != 0; iVar1 = iVar1 + -2) {
        iVar6 = Ram0002000000000302;
        uVar8 = Ram0002000000000302;
        param_2 = (ulong)uVar8;
        do {
          lVar3 = Ram0002000000000012;
        } while (lVar3 != 0);
        param_1 = param_1 & 0xffffffffc000ffff | 0x30000;
        Ram0002000000000003 = (ulong)(uint)(iVar6 << 2) + lVar2;
        Ram0002000000000003 = param_2;
        Ram0002000000000000 = (int)param_1;
        Ram0002000000000000 = uVar4;
        Ram0002000000000000 = uVar5;
        Ram0002000000000000 = iVar6;
        Ram0002000000000000 = uVar8;
      }
    }
  }
  else {
    uVar4 = Ram0002000000000302;
    uVar5 = Ram0002000000000302;
    Ram0002000000000073 = CONCAT44(uVar5,uVar4);
    lVar2 = Ram0002000000000073;
    Ram0002000000000023 = 0;
    uVar8 = Ram0002000000000009;
    if (((uVar8 & 0x1000000) == 0) || (lVar3 = Ram0003000000008709, lVar3 != 0)) {
      uVar8 = 0;
      do {
        uVar7 = Ram0002000000000302;
        param_2 = (ulong)uVar7;
        uVar8 = uVar8 + 1;
      } while (uVar8 <= (uint)((param_1 << 0x22) >> 0x32) - 2);
    }
    else {
      for (iVar1 = (uint)((param_1 << 0x22) >> 0x32) - 1; iVar1 != 0; iVar1 = iVar1 + -2) {
        iVar6 = Ram0002000000000302;
        uVar8 = Ram0002000000000302;
        param_2 = (ulong)uVar8;
        do {
          lVar3 = Ram0002000000000012;
        } while (lVar3 != 0);
        param_1 = param_1 & 0xffffffffc000ffff | 0x30000;
        Ram0002000000000003 = (ulong)(uint)(iVar6 << 2) + lVar2;
        Ram0002000000000003 = param_2;
        Ram0002000000000000 = (int)param_1;
        Ram0002000000000000 = uVar4;
        Ram0002000000000000 = uVar5;
        Ram0002000000000000 = iVar6;
        Ram0002000000000000 = uVar8;
      }
    }
  }
  FUN_00009bb8(param_2);
  return;
}


/* ---- pm4_LOAD_CONFIG_REG_handler @ 000129a0 size=204 ---- */

void pm4_LOAD_CONFIG_REG_handler(ulong param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar4 = Ram0002000000000302;
  uVar5 = Ram0002000000000302;
  Ram0002000000000073 = CONCAT44(uVar5,uVar4);
  lVar3 = Ram0002000000000073;
  Ram0002000000000023 = 0;
  uVar9 = Ram0002000000000009;
  uVar7 = (uint)((param_1 << 0x22) >> 0x20);
  if (((uVar9 & 1) == 0) || (lVar2 = Ram0003000000008709, lVar2 != 0)) {
    uVar9 = 0;
    do {
      uVar8 = Ram0002000000000302;
      param_2 = (ulong)uVar8;
      uVar9 = uVar9 + 1;
    } while (uVar9 <= (uVar7 >> 0x12) - 2);
  }
  else {
    for (iVar1 = (uVar7 >> 0x12) - 1; iVar1 != 0; iVar1 = iVar1 + -2) {
      iVar6 = Ram0002000000000302;
      uVar7 = Ram0002000000000302;
      param_2 = (ulong)uVar7;
      do {
        lVar2 = Ram0002000000000012;
      } while (lVar2 != 0);
      param_1 = param_1 & 0xffffffffc000ffff | 0x30000;
      Ram0002000000000003 = (ulong)(uint)(iVar6 << 2) + lVar3;
      Ram0002000000000003 = param_2;
      Ram0002000000000000 = (int)param_1;
      Ram0002000000000000 = uVar4;
      Ram0002000000000000 = uVar5;
      Ram0002000000000000 = iVar6;
      Ram0002000000000000 = uVar7;
    }
  }
  FUN_00009bb8(param_2);
  return;
}


/* ---- pm4_LOAD_CONTEXT_REG_handler @ 00012a70 size=244 ---- */

void pm4_LOAD_CONTEXT_REG_handler(ulong param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  lVar2 = Ram0002000000000010;
  if (lVar2 == 0) {
    Ram0002000000000017 = 0;
    Ram0002000000000000 = 0xc0005200;
    Ram0002000000000000 = 0;
  }
  uVar4 = Ram0002000000000302;
  uVar5 = Ram0002000000000302;
  Ram0002000000000073 = CONCAT44(uVar5,uVar4);
  lVar2 = Ram0002000000000073;
  Ram0002000000000023 = 0;
  uVar9 = Ram0002000000000009;
  if (((uVar9 & 2) == 0) || (lVar3 = Ram0003000000008709, lVar3 != 0)) {
    uVar9 = 0;
    do {
      uVar7 = Ram0002000000000302;
      uVar8 = (ulong)uVar7;
      uVar9 = uVar9 + 1;
    } while (uVar9 <= (uint)((param_1 << 0x22) >> 0x32) - 2);
  }
  else {
    for (iVar1 = (uint)((param_1 << 0x22) >> 0x32) - 1; uVar8 = (ulong)iVar1, uVar8 != 0;
        iVar1 = iVar1 + -2) {
      iVar6 = Ram0002000000000302;
      uVar9 = Ram0002000000000302;
      do {
        lVar3 = Ram0002000000000012;
      } while (lVar3 != 0);
      param_1 = param_1 & 0xffffffffc000ffff | 0x30000;
      Ram0002000000000003 = (ulong)(uint)(iVar6 << 2) + lVar2;
      Ram0002000000000003 = (ulong)uVar9;
      Ram0002000000000000 = (int)param_1;
      Ram0002000000000000 = uVar4;
      Ram0002000000000000 = uVar5;
      Ram0002000000000000 = iVar6;
      Ram0002000000000000 = uVar9;
    }
  }
  FUN_00009bb8(uVar8);
  return;
}


/* ---- sub_12b68 @ 00012b68 size=148 ---- */

void sub_12b68(uint param_1,ulong param_2,ulong param_3,int param_4,long param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar2 = Ram000200000000000a;
  if ((param_2 & 1) == 0) {
    Ram0002000000000073 = (param_3 & 0xffffffff) << 0x20 | param_2 & 0xffffffff;
    lVar3 = Ram0002000000000073;
  }
  else {
    lVar3 = (param_3 & 0xffffffff) + DAT_00101088;
  }
  uVar1 = (uint)((ulong)(param_5 << 0x32) >> 0x32);
  if ((param_6 & uVar2) != 0) {
    Ram0002000000000028 = uVar1;
  }
  if (param_4 < 0) {
    uVar1 = uVar1 << 1;
  }
  Ram0002000000000003 = lVar3;
  Ram0002000000000003 = (ulong)uVar1;
  Ram0002000000000000 = param_1 & 0xc000ffff | 0x10000;
  Ram0002000000000000 = param_4;
  Ram0002000000000000 = uVar1;
  return;
}


/* ---- pm4_LOAD_CONTEXT_REG_INDEX_handler @ 00012c00 size=196 ---- */

void pm4_LOAD_CONTEXT_REG_INDEX_handler(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000302;
  uVar3 = Ram0002000000000302;
  iVar4 = Ram0002000000000302;
  uVar5 = Ram0002000000000302;
  if ((uVar5 & 0x3fff) != 0) {
    lVar6 = Ram0002000000000010;
    if (lVar6 == 0) {
      Ram0002000000000017 = 0;
      Ram0002000000000000 = 0xc0005200;
      Ram0002000000000000 = 0;
    }
    uVar2 = Ram000200000000000a;
    if ((uVar1 & 1) == 0) {
      Ram0002000000000073 = CONCAT44(uVar3,uVar1);
      lVar6 = Ram0002000000000073;
    }
    else {
      lVar6 = (ulong)uVar3 + DAT_00101088;
    }
    uVar1 = (uint)(((ulong)uVar5 << 0x32) >> 0x32);
    if ((uVar2 & 2) != 0) {
      Ram0002000000000028 = uVar1;
    }
    if (iVar4 < 0) {
      uVar1 = uVar1 << 1;
    }
    Ram0002000000000003 = lVar6;
    Ram0002000000000003 = (ulong)uVar1;
    Ram0002000000000000 = param_1 & 0xc000ffff | 0x10000;
    Ram0002000000000000 = iVar4;
    Ram0002000000000000 = uVar1;
  }
  FUN_00009bb8();
  return;
}


/* ---- pm4_LOAD_SH_REG_INDEX_handler @ 00012cc8 size=288 ---- */

void pm4_LOAD_SH_REG_INDEX_handler(uint param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar3 = Ram0002000000000302;
  uVar6 = (ulong)uVar3;
  uVar9 = Ram0002000000000302;
  uVar7 = (ulong)uVar9;
  iVar4 = Ram0002000000000302;
  uVar5 = Ram0002000000000302;
  uVar9 = Ram000200000000000a;
  if ((param_1 & 2) == 0) {
    uVar9 = uVar9 >> 0x10 & 1;
    lVar8 = Ram0002000000000011;
    if (lVar8 == 0) {
      Ram0002000000000018 = 0;
      uVar2 = Ram00020000000001f1;
      Ram0002000000000000 = uVar2;
      Ram0002000000000000 = 0;
    }
  }
  else {
    uVar9 = uVar9 >> 0x18 & 1;
  }
  uVar10 = (ulong)uVar5 & 0x3fff;
  if (uVar9 != 0) {
    Ram0002000000000028 = (int)uVar10;
  }
  if ((uVar6 & 3) == 1) {
    lVar8 = uVar7 + DAT_00101088;
  }
  else if ((uVar6 & 3) == 2) {
    Ram0002000000000073 = uVar6 & 0xfffffffffffffffc | uVar7 << 0x20;
    puVar1 = (undefined8 *)Ram0002000000000073;
    Ram0002000000000073 = *puVar1;
    lVar8 = Ram0002000000000073;
  }
  else if ((uVar3 & 3) == 0) {
    Ram0002000000000073 = uVar6 & 0xfffffffffffffffc | uVar7 << 0x20;
    lVar8 = Ram0002000000000073;
  }
  else {
    lVar8 = 0;
  }
  uVar9 = Ram000200000000002c;
  if (iVar4 < 0) {
    uVar10 = (ulong)((int)uVar10 << 1);
  }
  Ram0002000000000003 = lVar8;
  Ram0002000000000003 = uVar10 | uVar9;
  Ram0002000000000000 = param_1 & 0xc000ffff | 0x10000;
  Ram0002000000000000 = iVar4;
  Ram0002000000000000 = (int)uVar10;
  FUN_00009bb8();
  return;
}


/* ---- pm4_OP_64_handler @ 00012df0 size=180 ---- */

void pm4_OP_64_handler(uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar2 = Ram0002000000000302;
  uVar4 = Ram0002000000000302;
  iVar5 = Ram0002000000000302;
  uVar6 = Ram0002000000000302;
  if ((uVar6 & 0x3fff) != 0) {
    uVar1 = Ram000200000000000a;
    if ((uVar2 & 1) == 0) {
      lVar8 = CONCAT44(uVar4,uVar2);
    }
    else {
      lVar8 = (ulong)uVar4 + DAT_00101088;
    }
    Ram0002000000000073 = lVar8;
    uVar3 = Ram0002000000000073;
    uVar7 = (ulong)uVar6 & 0x3fff;
    if ((uVar1 & 0x8000) != 0) {
      Ram0002000000000028 = (int)uVar7;
    }
    if (iVar5 < 0) {
      uVar7 = (ulong)((int)uVar7 << 1);
    }
    uVar2 = Ram000200000000002c;
    Ram0002000000000003 = uVar3;
    Ram0002000000000003 = uVar7 | uVar2;
    Ram0002000000000000 = param_1 & 0xc000ffff | 0x10000;
    Ram0002000000000000 = iVar5;
    Ram0002000000000000 = (int)uVar7;
  }
  FUN_00009bb8();
  return;
}


/* ---- pm4_CONTEXT_REG_RMW_handler @ 00012ea8 size=72 ---- */

void pm4_CONTEXT_REG_RMW_handler(undefined4 param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  do {
    iVar3 = Ram0002000000000012;
  } while (iVar3 != 0);
  lVar2 = Ram0002000000000010;
  if (lVar2 == 0) {
    Ram0002000000000017 = 0;
    Ram0002000000000000 = 0xc0005200;
    Ram0002000000000000 = 0;
  }
  uVar1 = Ram000200000000000a;
  Ram0002000000000028 = uVar1 >> 1 & 1;
  Ram0002000000000000 = param_1;
  Ram0073000100000000 = 0;
  Ram000200000000038b = 0;
  FUN_00009bb8();
  return;
}


/* ---- pm4_REG_RMW_handler @ 00012ef8 size=76 ---- */

void pm4_REG_RMW_handler(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar2 = Ram0002000000000302;
  uVar3 = Ram0002000000000302;
  uVar4 = Ram0002000000000302;
  if ((uVar2 & 0x3000000) == 0x1000000) {
    uVar1 = Ram000200000000000a;
    if ((uVar1 & 0x8000) != 0) {
      Ram0002000000000028 = 1;
    }
  }
  Ram0002000000000000 = param_1;
  Ram0002000000000000 = uVar2;
  Ram0002000000000000 = uVar3;
  Ram0002000000000000 = uVar4;
  FUN_00009bb8();
  return;
}


/* ---- pm4_OP_B8_handler @ 00012f48 size=108 ---- */

void pm4_OP_B8_handler(int param_1)

{
  ulong uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar2 = Ram000200000000000a;
  uVar3 = Ram0002000000000010;
  Ram0002000000000028 =
       (uint)((ulong)((long)(param_1 + 0xfe00) << 0x22) >> 0x33) >>
       ((ulong)((uVar2 >> 1 & 1) == 0) << 4);
  Ram0002000000000000 = param_1 + 0xfe00;
  Ram0002000000000000 = (0xa8U >> ((long)((int)uVar3 << 4) & 0x1fU)) + 0x264c8;
  Ram0073000100000000 = 0;
  Ram000200000000038b = 0;
  Ram0002000000000017 = 0;
  uVar4 = Ram0002000000000302;
  uVar1 = Ram0002000000000007;
                    /* WARNING: Could not recover jumptable at 0x00012fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(uVar1 & 0xfffffffffffffffe))(uVar4);
  return;
}


/* ---- pm4_OP_B9_handler @ 00012fb8 size=96 ---- */

void pm4_OP_B9_handler(int param_1)

{
  ulong uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000302;
  uVar2 = Ram000200000000000a;
  uVar3 = Ram0002000000000010;
  Ram0002000000000028 = uVar1 >> ((ulong)((uVar2 >> 1 & 1) == 0) << 4);
  Ram0002000000000000 = param_1 + -0x300;
  Ram0002000000000000 = (0x118U >> ((long)((int)uVar3 << 4) & 0x1fU)) + 0x26648;
  Ram0073000100000000 = 0;
  Ram000200000000038b = 0;
  Ram0002000000000017 = 0;
  uVar4 = Ram0002000000000302;
  uVar1 = Ram0002000000000007;
                    /* WARNING: Could not recover jumptable at 0x00013014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(uVar1 & 0xfffffffffffffffe))(uVar4);
  return;
}


/* ---- pm4_OP_BA_handler @ 00013018 size=108 ---- */

void pm4_OP_BA_handler(int param_1)

{
  ulong uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar2 = Ram000200000000000a;
  uVar3 = Ram0002000000000011;
  Ram0002000000000028 =
       ((ulong)((long)(param_1 + 0xfc00) << 0x22) >> 0x33) >>
       ((ulong)((uVar2 >> 0x10 & 1) == 0) << 4);
  Ram0002000000000000 = param_1 + 0xfc00;
  Ram0002000000000000 = (0xa8U >> ((long)((int)uVar3 << 4) & 0x1fU)) + 0x268a0;
  Ram0073000100000000 = 0;
  Ram000200000000038b = 0;
  Ram0002000000000018 = 0;
  uVar4 = Ram0002000000000302;
  uVar1 = Ram0002000000000007;
                    /* WARNING: Could not recover jumptable at 0x00013080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(uVar1 & 0xfffffffffffffffe))(uVar4);
  return;
}


/* ---- pm4_OP_BB_handler @ 00013088 size=48 ---- */

void pm4_OP_BB_handler(int param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar4 = Ram0002000000000302;
  uVar2 = Ram0002000000000011;
  Ram0002000000000000 = (int)uVar2 * 0x100 + param_1;
  Ram0002000000000000 = 0;
  Ram0073000100000000 = 0;
  Ram0002000000000018 = 0;
  uVar3 = Ram0002000000000302;
  uVar1 = Ram0002000000000007;
  Ram0002000000000028 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000130b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(uVar1 & 0xfffffffffffffffe))(uVar3);
  return;
}


/* ---- pm4_OP_BD_handler @ 000130b8 size=60 ---- */

void pm4_OP_BD_handler(int param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar2 = Ram0002000000000011;
  uVar4 = Ram0002000000000302;
  Ram0002000000000000 = (int)uVar2 * 0x100 + param_1 + ((int)uVar4 + -2) * 0x100;
  Ram0002000000000000 = 0;
  Ram0073000100000000 = 0;
  Ram0002000000000018 = 0;
  uVar3 = Ram0002000000000302;
  uVar1 = Ram0002000000000007;
  Ram0002000000000028 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000130f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(uVar1 & 0xfffffffffffffffe))(uVar3);
  return;
}


/* ---- pm4_OP_06_OP_1B_handler @ 000130f8 size=20 ---- */

void pm4_OP_06_OP_1B_handler(int param_1)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0002000000000000 = param_1 + 0x600;
  Ram0073000100000000 = 0;
  Ram000200000000038b = 0;
  FUN_00009bb8();
  return;
}


/* ---- pm4_OP_08_handler @ 00013110 size=28 ---- */

void pm4_OP_08_handler(int param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0002000000000000 = param_1 + 0x500;
  Ram0073000100000000 = 0;
  Ram000200000000038b = 0;
  uVar2 = Ram0002000000000302;
  uVar1 = Ram0002000000000007;
                    /* WARNING: Could not recover jumptable at 0x00013128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(uVar1 & 0xfffffffffffffffe))(uVar2);
  return;
}


/* ---- pm4_OP_09_handler @ 00013130 size=212 ---- */

void pm4_OP_09_handler(uint param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar2 = Ram00020000000001f1;
  Ram0002000000000000 = uVar2;
  Ram0002000000000000 = 0;
  uVar3 = Ram0002000000000302;
  uVar4 = Ram0002000000000302;
  uVar5 = Ram0002000000000302;
  if ((uVar3 & 0xc0000000) == 0) {
    lVar6 = Ram0002000000000015;
    if (lVar6 != 0) {
      lVar6 = (ulong)uVar4 + *(long *)(&TP_R01B + lVar6);
      Ram0002000000000000 = param_1;
      Ram0002000000000000 = uVar3;
      Ram0002000000000000 = (int)lVar6;
      Ram0002000000000000 = (uint)(ushort)((ulong)lVar6 >> 0x20) | uVar5 & 0xffff0000;
    }
  }
  else {
    lVar6 = (ulong)uVar4 + DAT_00101078;
    if ((uVar3 & 0xc0000000) == 0x80000000) {
      Ram0002000000000000 = param_1 & 0xc000ffff | 0x10000;
      Ram0002000000000000 = uVar3;
      Ram0002000000000000 = (int)lVar6;
    }
    else {
      Ram0002000000000000 = param_1;
      Ram0002000000000000 = uVar3;
      Ram0002000000000000 = (int)((ulong)lVar6 >> 8);
      Ram0002000000000000 = (uint)((ulong)lVar6 >> 0x28);
    }
  }
  uVar2 = Ram0002000000000302;
  uVar1 = Ram0002000000000007;
                    /* WARNING: Could not recover jumptable at 0x000131a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(uVar1 & 0xfffffffffffffffe))(uVar2);
  return;
}


/* ---- pm4_SET_SH_REG_OFFSET_handler @ 00013208 size=200 ---- */

void pm4_SET_SH_REG_OFFSET_handler(uint param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar2 = Ram0002000000000302;
  uVar3 = Ram0002000000000302;
  uVar4 = Ram0002000000000302;
  if ((uVar2 & 0xc0000000) == 0) {
    lVar6 = Ram0002000000000015;
    if (lVar6 != 0) {
      lVar6 = (ulong)uVar3 + *(long *)(&TP_R01B + lVar6);
      Ram0002000000000000 = param_1;
      Ram0002000000000000 = uVar2;
      Ram0002000000000000 = (int)lVar6;
      Ram0002000000000000 = (uint)(ushort)((ulong)lVar6 >> 0x20) | uVar4 & 0xffff0000;
    }
  }
  else {
    lVar6 = (ulong)uVar3 + DAT_00101078;
    if ((uVar2 & 0xc0000000) == 0x80000000) {
      Ram0002000000000000 = param_1 & 0xc000ffff | 0x10000;
      Ram0002000000000000 = uVar2;
      Ram0002000000000000 = (int)lVar6;
    }
    else {
      Ram0002000000000000 = param_1;
      Ram0002000000000000 = uVar2;
      Ram0002000000000000 = (int)((ulong)lVar6 >> 8);
      Ram0002000000000000 = (uint)((ulong)lVar6 >> 0x28);
    }
  }
  uVar5 = Ram0002000000000302;
  uVar1 = Ram0002000000000007;
                    /* WARNING: Could not recover jumptable at 0x00013274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(uVar1 & 0xfffffffffffffffe))(uVar5);
  return;
}


/* ---- pm4_OP_14_handler @ 000132d0 size=112 ---- */

void pm4_OP_14_handler(long param_1)

{
  ulong uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar3 = Ram00020000000001f1;
  Ram0002000000000000 = uVar3;
  Ram0002000000000000 = 0;
  uVar5 = Ram0002000000000302;
  if ((uVar5 & 0xf0000000) == 0x30000000) {
    uVar2 = Ram000200000000000a;
    if ((uVar2 & 0x10000) != 0) {
      Ram0002000000000028 = (uint)((ulong)(param_1 << 0x22) >> 0x32);
    }
    Ram0002000000000000 = (int)param_1;
    Ram0002000000000000 = uVar5;
    Ram0073000100000000 = 0;
    Ram000200000000038b = 0;
  }
  else {
    puVar4 = (undefined8 *)Ram00020000000001f3;
    *puVar4 = 0;
    Ram000200000000038b = 0;
  }
  uVar3 = Ram0002000000000302;
  uVar1 = Ram0002000000000007;
                    /* WARNING: Could not recover jumptable at 0x00013324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(uVar1 & 0xfffffffffffffffe))(uVar3);
  return;
}


/* ---- pm4_SET_SH_REG_INDEX_handler @ 00013340 size=100 ---- */

void pm4_SET_SH_REG_INDEX_handler(long param_1)

{
  ulong uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar4 = Ram0002000000000302;
  if ((uVar4 & 0xf0000000) == 0x30000000) {
    uVar2 = Ram000200000000000a;
    if ((uVar2 & 0x10000) != 0) {
      Ram0002000000000028 = (uint)((ulong)(param_1 << 0x22) >> 0x32);
    }
    Ram0002000000000000 = (int)param_1;
    Ram0002000000000000 = uVar4;
    Ram0073000100000000 = 0;
    Ram000200000000038b = 0;
  }
  else {
    puVar3 = (undefined8 *)Ram00020000000001f3;
    *puVar3 = 0;
    Ram000200000000038b = 0;
  }
  uVar5 = Ram0002000000000302;
  uVar1 = Ram0002000000000007;
                    /* WARNING: Could not recover jumptable at 0x00013388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(uVar1 & 0xfffffffffffffffe))(uVar5);
  return;
}


/* ---- pm4_STRMOUT_BUFFER_UPDATE_handler @ 000133a8 size=160 ---- */

/* WARNING: Removing unreachable block (ram,0x00013414) */

void pm4_STRMOUT_BUFFER_UPDATE_handler(uint param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0002000000000000 = param_1;
  Ram0073000100000000 = 0;
  Ram000200000000038b = 0;
  lVar1 = Ram0002000000000015;
  if (lVar1 != 0) {
    iVar2 = Ram0002000000000032;
    if (iVar2 != 0) {
      Ram0002000000000000 = 0xc00f1000;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      do {
        uVar3 = Ram0002000000000314;
      } while ((0x400L << (in_mhartid & 0x3f) & uVar3) != 0);
      lVar1 = Ram0003000000008701;
      if (lVar1 != 0) {
        FUN_00008c60((uint)(((ulong)param_1 << 0x22) >> 0x32) + 2);
        FUN_00009bb8();
        return;
      }
    }
  }
  FUN_00009bb8();
  return;
}


/* ---- pm4_ACQUIRE_MEM_handler @ 00013458 size=644 ---- */

/* WARNING: Removing unreachable block (ram,0x0001350c) */
/* WARNING: Removing unreachable block (ram,0x000136cc) */
/* WARNING: Removing unreachable block (ram,0x0001359c) */

void pm4_ACQUIRE_MEM_handler(long param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulong uVar10;
  uint uVar11;
  ulong in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar4 = Ram0002000000000302;
  uVar5 = Ram0002000000000302;
  uVar6 = Ram0002000000000302;
  uVar7 = Ram0002000000000302;
  uVar8 = Ram0002000000000302;
  iVar2 = Ram0002000000000302;
  uVar9 = Ram0002000000000302;
  if (iVar2 < 0) {
    if ((uVar4 & 0x3000) == 0x1000) {
      Ram0002000000000018 = 0;
      uVar3 = Ram00020000000001f1;
      Ram0002000000000000 = uVar3;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0xc00f1000;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = 0;
      do {
        uVar10 = Ram0002000000000314;
      } while ((0x400L << (in_mhartid & 0x3f) & uVar10) != 0);
    }
    uVar11 = uVar4 & 0x7fffffff | (uVar4 >> 0x1f | (uint)((uVar4 & 0x3800) != 0x2000)) << 0x1f;
    if ((uVar4 & 0x3800) == 0x2000) {
      Ram000200000000006d = uVar11 | 0x15;
      do {
        lVar1 = Ram0002000000000051;
        if (lVar1 == 0) goto LAB_00013498;
        lVar1 = Ram0002000000000015;
      } while (((lVar1 == 0) || (lVar1 = Ram0002000000000032, lVar1 == 0)) ||
              (lVar1 = Ram0002000000000035, lVar1 == 0));
      goto LAB_00013658;
    }
  }
  else {
    lVar1 = Ram0002000000000010;
    uVar11 = uVar4;
    if (lVar1 == 0) {
      Ram0002000000000017 = 0;
      param_1 = (long)((int)param_1 + 0xd00);
    }
    else {
      Ram0002000000000000 = 0xc0000c00;
      Ram0002000000000000 = 0;
    }
  }
LAB_00013498:
  Ram0002000000000000 = (int)param_1;
  Ram0002000000000000 = uVar11;
  Ram0002000000000000 = uVar5;
  Ram0002000000000000 = uVar6;
  Ram0002000000000000 = uVar7;
  Ram0002000000000000 = uVar8;
  Ram0002000000000000 = iVar2;
  Ram0002000000000000 = uVar9;
  if (-1 < (int)uVar11) {
    Ram0002000000000000 = 0xc00f1000;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    do {
      uVar10 = Ram0002000000000314;
    } while ((0x400L << (in_mhartid & 0x3f) & uVar10) != 0);
  }
  if (((iVar2 < 0) && ((uVar11 & 0x3800) == 0x2800)) &&
     ((lVar1 = Ram0002000000000015, lVar1 != 0 && (iVar2 = Ram0002000000000032, iVar2 != 0)))) {
    Ram0002000000000000 = 0xc00f1000;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0;
    do {
      uVar10 = Ram0002000000000314;
    } while ((0x400L << (in_mhartid & 0x3f) & uVar10) != 0);
    lVar1 = Ram0003000000008701;
    if (lVar1 != 0) {
LAB_00013658:
      FUN_00008c60((uint)((ulong)(param_1 << 0x22) >> 0x32) + 2);
      FUN_00009bb8();
      return;
    }
  }
  FUN_00009bb8();
  return;
}


/* ---- pm4_RELEASE_MEM_handler @ 000136e8 size=488 ---- */

/* WARNING: Removing unreachable block (ram,0x000137a0) */
/* WARNING: Removing unreachable block (ram,0x0001378c) */
/* WARNING: Removing unreachable block (ram,0x00013794) */
/* WARNING: Removing unreachable block (ram,0x000137e4) */

void pm4_RELEASE_MEM_handler(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulong uVar13;
  int in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar8 = Ram0002000000000302;
  Ram000200000000006d = uVar8 >> 0x15 & 0x400 | uVar8 & 0x3f;
  uVar12 = (undefined4)param_1;
  if ((uVar8 & 0xf00) == 0x500) {
    if ((uVar8 & 0x80) != 0) {
      uVar13 = Ram0002000000000015;
      uVar13 = uVar13 & 3;
      *(undefined4 *)(&TP_R041 + uVar13) = 1;
      do {
        lVar3 = Ram0002000000000013;
      } while (lVar3 != 0);
      uVar2 = Ram000100000000c6bc;
      if ((uVar2 >> 0xc & 3) != 0) {
        do {
        } while( true );
      }
      if ((uVar2 & 1) != 0) {
        Ram000100000000c6bc = 0;
      }
      *(undefined4 *)(&TP_R041 + uVar13) = *(undefined4 *)(&TP_R00B + uVar13);
    }
    uVar9 = Ram0002000000000302;
    if ((uVar9 >> 0x16 & 3) < 2) {
      Ram0002000000000000 = uVar12;
      Ram0002000000000000 = uVar8;
      Ram0002000000000000 = uVar9;
      Ram0073000100000000 = 0;
      Ram000200000000038b = 0;
    }
    else {
      iVar6 = Ram00020000000000a9;
      uVar4 = Ram0002000000000023;
      uVar10 = Ram0002000000000302;
      uVar11 = Ram0002000000000302;
      Ram0002000000000000 = uVar12;
      Ram0002000000000000 = uVar8;
      Ram0002000000000000 = (uint)(((ulong)uVar9 << 0x28) >> 0x28) | (uVar9 >> 0x18 & 0x18) << 0x18;
      Ram0002000000000000 = uVar10;
      Ram0002000000000000 = uVar11;
      uVar8 = (uint)((ulong)(param_1 << 0x22) >> 0x20);
      if ((uVar9 >> 0x18 & 7) == 3) {
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        iVar1 = (uVar8 >> 0x12) - 3;
      }
      else {
        iVar1 = Ram00020000000000a9;
        lVar3 = Ram00020000000001fa;
        uVar12 = Ram0002000000000302;
        Ram0002000000000000 = uVar12;
        Ram0002000000000000 =
             (uint)(*(int *)(&LAB_0000c3b4 +
                            (((long)(in_mhartid << 2) & 0xcU | (long)(iVar1 << 4) & 0x70U) << 0x24)
                            + lVar3) << 4) >> 6;
        iVar1 = (uVar8 >> 0x12) - 4;
      }
      Ram0002000000000000 = iVar6 << 6 | uVar4 | in_mhartid << 4;
      if (iVar1 != 0) {
        puVar7 = (undefined8 *)Ram00020000000001f3;
        *puVar7 = 0;
        Ram000200000000038b = 0;
      }
    }
  }
  else {
    uVar5 = Ram00020000000000a2;
    Ram0002000000000084 = 1;
    Ram0002000000000000 = (int)((ulong)uVar5 >> 0x20);
    Ram0002000000000000 = (int)uVar5;
    Ram0002000000000000 = uVar12;
    Ram0002000000000000 = uVar8;
    Ram0073000100000000 = 0;
    Ram000200000000038b = 0;
  }
  FUN_00009bb8();
  return;
}


/* ---- pm4_OP_B1_handler @ 000138d8 size=52 ---- */

void pm4_OP_B1_handler(undefined4 param_1)

{
  ulong uVar1;
  long lVar2;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0002000000000000 = param_1;
  uVar1 = Ram0002000000000302;
  lVar2 = Ram0002000000000302;
  Ram0002000000000000 = (uint)((lVar2 << 0x20 | uVar1) >> 0x15) & 0x7fffc00;
  Ram0002000000000000 = (int)(uVar1 >> 3);
  FUN_00009bb8();
  return;
}


/* ---- pm4_EVENT_WRITE_handler @ 00013910 size=280 ---- */

/* WARNING: Removing unreachable block (ram,0x00013a04) */

void pm4_EVENT_WRITE_handler(uint param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar3 = Ram0002000000000302;
  Ram0002000000000000 = param_1;
  Ram0002000000000000 = uVar3;
  uVar7 = (long)(int)(uVar3 >> 8) & 0xf;
  if (uVar7 == 1) {
    uVar7 = Ram0002000000000302;
    lVar1 = Ram0002000000000302;
    Ram0002000000000000 =
         (uint)((lVar1 << 0x20 | uVar7) >> 0x15) & 0x7fffc00 | uVar3 & 0x3f | 0x8000000;
    Ram0002000000000000 = (int)(uVar7 >> 3);
  }
  else {
    uVar5 = ((ulong)param_1 << 0x22) >> 0x32;
    uVar6 = 0;
    if (uVar5 != 0) {
      do {
        uVar4 = Ram0002000000000302;
        Ram0002000000000000 = uVar4;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar5);
    }
    if (((0xf10UL >> uVar7 & 1) != 0) && (lVar1 = Ram0002000000000015, lVar1 != 0)) {
      iVar2 = Ram0002000000000032;
      if (iVar2 != 0) {
        Ram0002000000000000 = 0xc00f1000;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        do {
          uVar7 = Ram0002000000000314;
        } while ((0x400L << (in_mhartid & 0x3f) & uVar7) != 0);
        lVar1 = Ram0003000000008701;
        if (lVar1 != 0) {
          FUN_00008c60(uVar5 + 2);
          FUN_00009bb8();
          return;
        }
      }
    }
  }
  FUN_00009bb8();
  return;
}


/* ---- pm4_PFP_SYNC_ME_handler @ 00013a30 size=104 ---- */

/* WARNING: Removing unreachable block (ram,0x00013a80) */

void pm4_PFP_SYNC_ME_handler(void)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar1 = Ram0002000000000302;
  Ram0002000000000000 = 0xc00f1000;
  Ram0002000000000000 = 0;
  Ram0002000000000000 = 0;
  Ram0002000000000000 = 0;
  Ram0002000000000000 = 0;
  Ram0002000000000000 = 0;
  Ram0002000000000000 = 0;
  Ram0002000000000000 = 0;
  Ram0002000000000000 = 0;
  Ram0002000000000000 = 0;
  Ram0002000000000000 = 0;
  Ram0002000000000000 = 0;
  Ram0002000000000000 = 0;
  Ram0002000000000000 = 0;
  Ram0002000000000000 = 0;
  Ram0002000000000000 = 0;
  Ram0002000000000000 = 0;
  do {
    uVar2 = Ram0002000000000314;
  } while ((0x400L << (in_mhartid & 0x3f) & uVar2) != 0);
  FUN_00009bb8();
  return;
}


/* ---- pm4_WAIT_REG_MEM_handler @ 00013aa0 size=1840 ---- */

/* WARNING: Removing unreachable block (ram,0x0001403c) */
/* WARNING: Removing unreachable block (ram,0x00013bf0) */
/* WARNING: Removing unreachable block (ram,0x00013e78) */
/* WARNING: Removing unreachable block (ram,0x00013b38) */
/* WARNING: Removing unreachable block (ram,0x00013de4) */
/* WARNING: Removing unreachable block (ram,0x00013fb4) */
/* WARNING: Removing unreachable block (ram,0x000140e0) */

void pm4_WAIT_REG_MEM_handler(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined4 uVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  ulong in_mhartid;
  
  iVar23 = (int)in_mhartid;
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram000200000000004a = 1;
  uVar16 = Ram0002000000000302;
  uVar15 = uVar16 >> 8 & 3;
  if (uVar15 == 1) {
    uVar15 = Ram0002000000000302;
    uVar4 = Ram0002000000000302;
    uVar6 = Ram0002000000000302;
    uVar7 = Ram0002000000000302;
    uVar8 = Ram0002000000000302;
    if ((uVar16 & 0xc0) == 0x40) {
      *(uint *)(((((ulong)uVar15 & 0x3ffff) << 0x20) >> 0x1e) + 0x1000000000000) = uVar6;
      puVar18 = (uint *)(long)(int)(uVar4 & 0x3ffff);
      puVar19 = (uint *)0x0;
    }
    else if ((uVar16 & 0x30) == 0) {
      puVar18 = (uint *)((ulong)uVar15 & 0x3ffff);
      puVar19 = (uint *)0x0;
    }
    else {
      Ram0002000000000073 = CONCAT44(uVar4,uVar15);
      puVar19 = (uint *)Ram0002000000000073;
      puVar18 = (uint *)0x0;
    }
    uVar13 = 8;
    if (3 < (uVar8 & 0xffff)) {
      uVar13 = ((ulong)uVar8 << 0x30) >> 0x2f;
    }
    Ram000300000000866c = (long)(int)(uVar16 >> 0x18) & 1;
    Ram00020000000001ff = 0;
    Ram000300000000866a = 0;
    Ram00020000000001ff = 0;
    uVar21 = (ulong)(int)(uVar6 & uVar7);
    if ((uVar16 & 0x1000000) != 0) {
      iVar2 = Ram00020000000000a9;
      lVar14 = Ram00020000000001fa;
      uVar17 = (ulong)((long)*(int *)(&LAB_0000c3b4 +
                                     (((long)(iVar23 << 2) & 0xcU | (long)(iVar2 << 4) & 0x70U) <<
                                     0x24) + lVar14) << 0x24) >> 0x26;
      puVar20 = puVar19;
      if ((uVar16 & 0x30) == 0) {
        puVar20 = puVar18;
      }
      uVar22 = (long)(int)(uVar16 >> 0x16) << 0x3e;
      lVar3 = Ram00020000000000a9;
      lVar14 = Ram0002000000000023;
      uVar11 = in_mhartid << 0x34 | uVar22 | lVar3 << 0x36 | lVar14 << 0x30;
      uVar9 = uVar17 | uVar11;
      Ram0003000000008664 = uVar9 | 0x2000000000000000;
      Ram00020000000001ff = 0;
      Ram0003000000008666 = uVar9 | 0x2400000000000000;
      Ram00020000000001ff = 0;
      Ram0003000000008660 = uVar17 | uVar22 | (uVar21 << 0x20) >> 6 | 0x1800000000000000;
      Ram00020000000001ff = 0;
      Ram0003000000008662 = (ulong)puVar20 & 0xffffffffffff | uVar11 | 0x1c00000000000000;
      Ram00020000000001ff = 0;
    }
    iVar2 = Ram0002000000000074;
    if (iVar2 == 0) {
      puVar18 = (uint *)(((ulong)((long)puVar18 << 0x20) >> 0x1e) + 0x1000000000000);
      if ((uVar16 & 0x30) != 0) goto LAB_00013e50;
LAB_00013d40:
      uVar17 = Ram0002000000000015;
      *(undefined4 *)(&TP_R041 + (uVar17 & 3)) = 1;
      uVar15 = *puVar18;
      *(undefined4 *)(&TP_R041 + (uVar17 & 3)) = *(undefined4 *)(&TP_R00B + (uVar17 & 3));
LAB_00013d68:
      uVar17 = (ulong)(int)(uVar7 & uVar15);
      switch(uVar16 & 7) {
      default:
        goto switchD_00013d78_caseD_0;
      case 1:
        bVar1 = uVar17 < uVar21;
        break;
      case 2:
        bVar1 = uVar17 <= uVar21;
        break;
      case 3:
        bVar1 = uVar21 == uVar17;
        break;
      case 4:
        bVar1 = uVar21 != uVar17;
        break;
      case 5:
        bVar1 = uVar21 <= uVar17;
        break;
      case 6:
        bVar1 = uVar21 < uVar17;
      }
      if (!bVar1) {
        if ((uVar16 & 0x30) != 0) {
          lVar14 = Ram0002000000000015;
          if (lVar14 == 0) {
            if ((uVar16 & 0xc0) == 0xc0) {
              uVar15 = Ram00020000000000b1;
              if ((uVar15 & 0x100ff) == 0x10008) {
                Ram0002000000000099 = 7;
                do {
                  iVar2 = Ram0002000000000031;
                } while (iVar2 == 0);
              }
              iVar2 = Ram0002000000000031;
              if (iVar2 != 0) {
                FUN_00008ba0();
                lVar14 = Ram000300000000866a;
                if (lVar14 == 0) goto LAB_00013b58;
                Ram000300000000866a = 0;
                Ram00020000000001ff = 0;
                uVar10 = Ram0003000000008666;
                if (iVar23 == 0) {
                  lVar14 = 0x1b;
                  uVar12 = 0xb;
                }
                else {
                  lVar14 = 0x1c;
                  uVar12 = 0xc;
                }
                Ram00020000000000a6 = uVar12;
                uVar16 = Ram0002000000000021;
                goto LAB_0001411c;
              }
            }
          }
          else {
            iVar2 = Ram0002000000000032;
            if (iVar2 != 0) {
              uVar15 = Ram000200000000000a;
              uVar4 = Ram00020000000000b1;
              if (((uVar15 & 0x1018002) == 0x1018002) && ((uVar4 & 0x100ff) == 0x10008)) {
                Ram0002000000000099 = 7;
                do {
                  iVar2 = Ram0002000000000031;
                } while (iVar2 == 0);
              }
              lVar14 = Ram0002000000000035;
              if (lVar14 != 0) {
                FUN_00008c60(7);
                lVar14 = Ram000300000000866a;
                if (lVar14 == 0) goto LAB_00013b58;
                Ram000300000000866a = 0;
                Ram00020000000001ff = 0;
                uVar10 = Ram0003000000008666;
                if (iVar23 == 0) {
                  lVar14 = 0x1b;
                  uVar12 = 0xb;
                }
                else {
                  lVar14 = 0x1c;
                  uVar12 = 0xc;
                }
                Ram00020000000000a6 = uVar12;
                uVar16 = Ram0002000000000021;
                goto LAB_00013ff0;
              }
            }
          }
        }
        lVar14 = Ram000300000000866c;
        if (lVar14 != 0) {
          Ram000300000000866a = 1;
          Ram00020000000001ff = 0;
          Ram000300000000866c = 0;
          Ram00020000000001ff = 0;
          uVar10 = Ram0003000000008660;
          if (iVar23 == 0) {
            lVar14 = 0x1b;
            uVar12 = 0xb;
          }
          else {
            lVar14 = 0x1c;
            uVar12 = 0xc;
          }
          Ram00020000000000a6 = uVar12;
          uVar15 = Ram0002000000000021;
          do {
            if ((1 << lVar14 & uVar15) != 0) goto LAB_00013eb8;
            uVar15 = Ram0002000000000021;
            lVar3 = Ram0002000000000074;
          } while (lVar3 == 0);
          goto LAB_00013ecc;
        }
        goto LAB_00013e30;
      }
switchD_00013d78_caseD_0:
      if ((uVar16 & 199) == 0x43) {
        *puVar18 = uVar6 & uVar7;
      }
      lVar14 = Ram000300000000866a;
      if (lVar14 == 0) goto LAB_00013b54;
      Ram000300000000866a = 0;
      Ram00020000000001ff = 0;
      uVar10 = Ram0003000000008664;
      if (iVar23 == 0) {
        lVar14 = 0x1b;
        uVar12 = 0xb;
      }
      else {
        lVar14 = 0x1c;
        uVar12 = 0xc;
      }
      Ram00020000000000a6 = uVar12;
      uVar16 = Ram0002000000000021;
      goto LAB_00014078;
    }
    goto LAB_00013b54;
  }
  if (1 < uVar15) {
    puVar5 = (undefined8 *)Ram00020000000001f3;
    *puVar5 = 0;
    Ram000200000000038b = 0;
    goto LAB_00013b58;
  }
  Ram0002000000000000 = param_1;
  Ram0002000000000000 = uVar16;
  Ram0073000100000000 = 0;
  Ram000200000000038b = 0;
  if ((uVar16 & 0x30) != 0) {
    lVar14 = Ram0002000000000015;
    if (lVar14 == 0) {
      if ((uVar16 & 0xc0) == 0xc0) {
        Ram0002000000000000 = 0xc00f1000;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        do {
          uVar13 = Ram0002000000000314;
        } while ((0x400L << (in_mhartid & 0x3f) & uVar13) != 0);
        lVar14 = Ram0003000000008701;
        if (lVar14 != 0) {
          FUN_00008ba0();
          goto LAB_00013b58;
        }
      }
    }
    else {
      iVar23 = Ram0002000000000032;
      if (iVar23 != 0) {
        Ram0002000000000000 = 0xc00f1000;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        do {
          uVar13 = Ram0002000000000314;
        } while ((0x400L << (in_mhartid & 0x3f) & uVar13) != 0);
        lVar14 = Ram0003000000008701;
        if (lVar14 != 0) {
          FUN_00008c60(7);
          goto LAB_00013b58;
        }
      }
    }
  }
  goto LAB_00013b54;
  while( true ) {
    uVar16 = Ram0002000000000021;
    lVar3 = Ram0002000000000074;
    if (lVar3 != 0) break;
LAB_00013ff0:
    if ((1 << lVar14 & uVar16) != 0) goto LAB_00013ff8;
  }
  goto LAB_00013b58;
LAB_00013ff8:
  do {
    uVar16 = Ram00020000000000af;
  } while ((uVar16 & 0x10) != 0);
  goto LAB_00014004;
  while( true ) {
    uVar16 = Ram0002000000000021;
    lVar3 = Ram0002000000000074;
    if (lVar3 != 0) break;
LAB_0001411c:
    if ((uVar16 & 1 << lVar14) != 0) goto LAB_00014124;
  }
  goto LAB_00013b58;
LAB_00014124:
  do {
    uVar16 = Ram00020000000000af;
  } while ((uVar16 & 0x10) != 0);
LAB_00014004:
  Ram00020000000000a2 = uVar10;
  Ram00020000000000a7 = uVar12;
  goto LAB_00013b58;
LAB_00013eb8:
  do {
    uVar15 = Ram00020000000000af;
  } while ((uVar15 & 0x10) != 0);
  Ram00020000000000a2 = uVar10;
  Ram00020000000000a7 = uVar12;
LAB_00013ecc:
  uVar10 = Ram0003000000008662;
  Ram00020000000000a6 = uVar12;
  uVar15 = Ram0002000000000021;
  do {
    if ((1 << lVar14 & uVar15) != 0) goto LAB_00013ef8;
    uVar15 = Ram0002000000000021;
    lVar3 = Ram0002000000000074;
  } while (lVar3 == 0);
LAB_00013e30:
  uVar17 = 0;
  do {
    Ram00020000000001ff = 0;
    uVar17 = (ulong)((int)uVar17 + 1);
  } while (uVar17 != uVar13);
  iVar2 = Ram0002000000000074;
  if (iVar2 != 0) goto LAB_00013b54;
  if ((uVar16 & 0x30) == 0) goto LAB_00013d40;
LAB_00013e50:
  Ram000200000000031b = uVar16 >> 0x19 & 3;
  uVar15 = *puVar19;
  goto LAB_00013d68;
LAB_00013ef8:
  do {
    uVar15 = Ram00020000000000af;
  } while ((uVar15 & 0x10) != 0);
  Ram00020000000000a2 = uVar10;
  Ram00020000000000a7 = uVar12;
  goto LAB_00013e30;
LAB_00014080:
  do {
    uVar16 = Ram00020000000000af;
  } while ((uVar16 & 0x10) != 0);
  Ram00020000000000a2 = uVar10;
  Ram00020000000000a7 = uVar12;
  goto LAB_00013b54;
  while( true ) {
    uVar16 = Ram0002000000000021;
    lVar3 = Ram0002000000000074;
    if (lVar3 != 0) break;
LAB_00014078:
    if ((uVar16 & 1 << lVar14) != 0) goto LAB_00014080;
  }
LAB_00013b54:
  Ram000200000000004b = 0;
LAB_00013b58:
  FUN_00009bb8();
  return;
}


/* ---- pm4_WAIT_REG_MEM64_handler @ 000141d8 size=1860 ---- */

/* WARNING: Removing unreachable block (ram,0x00014784) */
/* WARNING: Removing unreachable block (ram,0x00014338) */
/* WARNING: Removing unreachable block (ram,0x000145bc) */
/* WARNING: Removing unreachable block (ram,0x00014270) */
/* WARNING: Removing unreachable block (ram,0x0001452c) */
/* WARNING: Removing unreachable block (ram,0x000146f8) */
/* WARNING: Removing unreachable block (ram,0x00014828) */

void pm4_WAIT_REG_MEM64_handler(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  ulong *puVar17;
  uint *puVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong *puVar21;
  ulong uVar22;
  int iVar23;
  ulong in_mhartid;
  
  iVar23 = (int)in_mhartid;
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram000200000000004a = 1;
  uVar15 = Ram0002000000000302;
  uVar14 = uVar15 >> 8 & 3;
  if (uVar14 == 1) {
    uVar14 = Ram0002000000000302;
    uVar4 = Ram0002000000000302;
    uVar20 = Ram0002000000000302;
    lVar13 = Ram0002000000000302;
    uVar22 = Ram0002000000000302;
    lVar3 = Ram0002000000000302;
    uVar22 = lVar3 << 0x20 | uVar22;
    uVar6 = Ram0002000000000302;
    if ((uVar15 & 0xc0) == 0x40) {
      *(int *)(((((ulong)uVar14 & 0x3ffff) << 0x20) >> 0x1e) + 0x1000000000000) = (int)uVar20;
      puVar17 = (ulong *)(long)(int)(uVar4 & 0x3ffff);
      puVar19 = (ulong *)0x0;
    }
    else if ((uVar15 & 0x30) == 0) {
      puVar17 = (ulong *)((ulong)uVar14 & 0x3ffff);
      puVar19 = (ulong *)0x0;
    }
    else {
      Ram0002000000000073 = CONCAT44(uVar4,uVar14);
      puVar19 = (ulong *)Ram0002000000000073;
      puVar17 = (ulong *)0x0;
    }
    uVar12 = 8;
    if (3 < (uVar6 & 0xffff)) {
      uVar12 = ((ulong)uVar6 << 0x30) >> 0x2f;
    }
    Ram000300000000866c = (long)(int)(uVar15 >> 0x18) & 1;
    Ram00020000000001ff = 0;
    Ram000300000000866a = 0;
    Ram00020000000001ff = 0;
    uVar20 = (lVar13 << 0x20 | uVar20) & uVar22;
    if ((uVar15 & 0x1000000) != 0) {
      iVar2 = Ram00020000000000a9;
      lVar13 = Ram00020000000001fa;
      uVar16 = (ulong)((long)*(int *)(&LAB_0000c3b4 +
                                     (((long)(iVar23 << 2) & 0xcU | (long)(iVar2 << 4) & 0x70U) <<
                                     0x24) + lVar13) << 0x24) >> 0x26;
      puVar21 = puVar19;
      if ((uVar15 & 0x30) == 0) {
        puVar21 = puVar17;
      }
      uVar7 = (long)(int)(uVar15 >> 0x16) << 0x3e;
      lVar3 = Ram00020000000000a9;
      lVar13 = Ram0002000000000023;
      uVar10 = in_mhartid << 0x34 | uVar7 | lVar3 << 0x36 | lVar13 << 0x30;
      uVar8 = uVar16 | uVar10;
      Ram0003000000008664 = uVar8 | 0x2000000000000000;
      Ram00020000000001ff = 0;
      Ram0003000000008666 = uVar8 | 0x2400000000000000;
      Ram00020000000001ff = 0;
      Ram0003000000008660 = uVar16 | uVar7 | uVar20 << 0x1a | 0x1800000000000000;
      Ram00020000000001ff = 0;
      Ram0003000000008662 = (ulong)puVar21 & 0xffffffffffff | uVar10 | 0x1c00000000000000;
      Ram00020000000001ff = 0;
    }
    iVar2 = Ram0002000000000074;
    if (iVar2 == 0) {
      puVar18 = (uint *)(((ulong)((long)puVar17 << 0x20) >> 0x1e) + 0x1000000000000);
      if ((uVar15 & 0x30) != 0) goto LAB_00014598;
LAB_00014484:
      uVar16 = Ram0002000000000015;
      *(undefined4 *)(&TP_R041 + (uVar16 & 3)) = 1;
      uVar7 = (ulong)*puVar18;
      *(undefined4 *)(&TP_R041 + (uVar16 & 3)) = *(undefined4 *)(&TP_R00B + (uVar16 & 3));
LAB_000144b0:
      uVar7 = uVar22 & uVar7;
      switch(uVar15 & 7) {
      default:
        goto switchD_000144c0_caseD_0;
      case 1:
        bVar1 = uVar7 < uVar20;
        break;
      case 2:
        bVar1 = uVar7 <= uVar20;
        break;
      case 3:
        bVar1 = uVar20 == uVar7;
        break;
      case 4:
        bVar1 = uVar20 != uVar7;
        break;
      case 5:
        bVar1 = uVar20 <= uVar7;
        break;
      case 6:
        bVar1 = uVar20 < uVar7;
      }
      if (!bVar1) {
        if ((uVar15 & 0x30) != 0) {
          lVar13 = Ram0002000000000015;
          if (lVar13 == 0) {
            if ((uVar15 & 0xc0) == 0xc0) {
              uVar14 = Ram00020000000000b1;
              if ((uVar14 & 0x100ff) == 0x10008) {
                Ram0002000000000099 = 7;
                do {
                  iVar2 = Ram0002000000000031;
                } while (iVar2 == 0);
              }
              iVar2 = Ram0002000000000031;
              if (iVar2 != 0) {
                FUN_00008ba0();
                lVar13 = Ram000300000000866a;
                if (lVar13 == 0) goto LAB_00014290;
                Ram000300000000866a = 0;
                Ram00020000000001ff = 0;
                uVar9 = Ram0003000000008666;
                if (iVar23 == 0) {
                  lVar13 = 0x1b;
                  uVar11 = 0xb;
                }
                else {
                  lVar13 = 0x1c;
                  uVar11 = 0xc;
                }
                Ram00020000000000a6 = uVar11;
                uVar15 = Ram0002000000000021;
                goto LAB_00014864;
              }
            }
          }
          else {
            iVar2 = Ram0002000000000032;
            if (iVar2 != 0) {
              uVar14 = Ram000200000000000a;
              uVar4 = Ram00020000000000b1;
              if (((uVar14 & 0x1018002) == 0x1018002) && ((uVar4 & 0x100ff) == 0x10008)) {
                Ram0002000000000099 = 7;
                do {
                  iVar2 = Ram0002000000000031;
                } while (iVar2 == 0);
              }
              lVar13 = Ram0002000000000035;
              if (lVar13 != 0) {
                FUN_00008c60(9);
                lVar13 = Ram000300000000866a;
                if (lVar13 == 0) goto LAB_00014290;
                Ram000300000000866a = 0;
                Ram00020000000001ff = 0;
                uVar9 = Ram0003000000008666;
                if (iVar23 == 0) {
                  lVar13 = 0x1b;
                  uVar11 = 0xb;
                }
                else {
                  lVar13 = 0x1c;
                  uVar11 = 0xc;
                }
                Ram00020000000000a6 = uVar11;
                uVar15 = Ram0002000000000021;
                goto LAB_00014734;
              }
            }
          }
        }
        lVar13 = Ram000300000000866c;
        if (lVar13 != 0) {
          Ram000300000000866a = 1;
          Ram00020000000001ff = 0;
          Ram000300000000866c = 0;
          Ram00020000000001ff = 0;
          uVar9 = Ram0003000000008660;
          if (iVar23 == 0) {
            lVar13 = 0x1b;
            uVar11 = 0xb;
          }
          else {
            lVar13 = 0x1c;
            uVar11 = 0xc;
          }
          Ram00020000000000a6 = uVar11;
          uVar14 = Ram0002000000000021;
          do {
            if ((1 << lVar13 & uVar14) != 0) goto LAB_000145fc;
            uVar14 = Ram0002000000000021;
            lVar3 = Ram0002000000000074;
          } while (lVar3 == 0);
          goto LAB_00014610;
        }
        goto LAB_00014578;
      }
switchD_000144c0_caseD_0:
      if ((uVar15 & 199) == 0x43) {
        *puVar18 = (uint)uVar20;
      }
      lVar13 = Ram000300000000866a;
      if (lVar13 == 0) goto LAB_0001428c;
      Ram000300000000866a = 0;
      Ram00020000000001ff = 0;
      uVar9 = Ram0003000000008664;
      if (iVar23 == 0) {
        lVar13 = 0x1b;
        uVar11 = 0xb;
      }
      else {
        lVar13 = 0x1c;
        uVar11 = 0xc;
      }
      Ram00020000000000a6 = uVar11;
      uVar15 = Ram0002000000000021;
      goto LAB_000147c0;
    }
    goto LAB_0001428c;
  }
  if (1 < uVar14) {
    puVar5 = (undefined8 *)Ram00020000000001f3;
    *puVar5 = 0;
    Ram000200000000038b = 0;
    goto LAB_00014290;
  }
  Ram0002000000000000 = param_1;
  Ram0002000000000000 = uVar15;
  Ram0073000100000000 = 0;
  Ram000200000000038b = 0;
  if ((uVar15 & 0x30) != 0) {
    lVar13 = Ram0002000000000015;
    if (lVar13 == 0) {
      if ((uVar15 & 0xc0) == 0xc0) {
        Ram0002000000000000 = 0xc00f1000;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        do {
          uVar20 = Ram0002000000000314;
        } while ((0x400L << (in_mhartid & 0x3f) & uVar20) != 0);
        lVar13 = Ram0003000000008701;
        if (lVar13 != 0) {
          FUN_00008ba0();
          goto LAB_00014290;
        }
      }
    }
    else {
      iVar23 = Ram0002000000000032;
      if (iVar23 != 0) {
        Ram0002000000000000 = 0xc00f1000;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        do {
          uVar20 = Ram0002000000000314;
        } while ((0x400L << (in_mhartid & 0x3f) & uVar20) != 0);
        lVar13 = Ram0003000000008701;
        if (lVar13 != 0) {
          FUN_00008c60(9);
          goto LAB_00014290;
        }
      }
    }
  }
  goto LAB_0001428c;
  while( true ) {
    uVar15 = Ram0002000000000021;
    lVar3 = Ram0002000000000074;
    if (lVar3 != 0) break;
LAB_00014734:
    if ((1 << lVar13 & uVar15) != 0) goto LAB_0001473c;
  }
  goto LAB_00014290;
LAB_0001473c:
  do {
    uVar15 = Ram00020000000000af;
  } while ((uVar15 & 0x10) != 0);
  goto LAB_00014748;
  while( true ) {
    uVar15 = Ram0002000000000021;
    lVar3 = Ram0002000000000074;
    if (lVar3 != 0) break;
LAB_00014864:
    if ((1 << lVar13 & uVar15) != 0) goto LAB_0001486c;
  }
  goto LAB_00014290;
LAB_0001486c:
  do {
    uVar15 = Ram00020000000000af;
  } while ((uVar15 & 0x10) != 0);
LAB_00014748:
  Ram00020000000000a2 = uVar9;
  Ram00020000000000a7 = uVar11;
  goto LAB_00014290;
LAB_000145fc:
  do {
    uVar14 = Ram00020000000000af;
  } while ((uVar14 & 0x10) != 0);
  Ram00020000000000a2 = uVar9;
  Ram00020000000000a7 = uVar11;
LAB_00014610:
  uVar9 = Ram0003000000008662;
  Ram00020000000000a6 = uVar11;
  uVar14 = Ram0002000000000021;
  do {
    if ((1 << lVar13 & uVar14) != 0) goto LAB_0001463c;
    uVar14 = Ram0002000000000021;
    lVar3 = Ram0002000000000074;
  } while (lVar3 == 0);
LAB_00014578:
  uVar16 = 0;
  do {
    Ram00020000000001ff = 0;
    uVar16 = (ulong)((int)uVar16 + 1);
  } while (uVar16 != uVar12);
  iVar2 = Ram0002000000000074;
  if (iVar2 != 0) goto LAB_0001428c;
  if ((uVar15 & 0x30) == 0) goto LAB_00014484;
LAB_00014598:
  Ram000200000000031b = uVar15 >> 0x19 & 3;
  uVar7 = *puVar19;
  goto LAB_000144b0;
LAB_0001463c:
  do {
    uVar14 = Ram00020000000000af;
  } while ((uVar14 & 0x10) != 0);
  Ram00020000000000a2 = uVar9;
  Ram00020000000000a7 = uVar11;
  goto LAB_00014578;
LAB_000147c8:
  do {
    uVar15 = Ram00020000000000af;
  } while ((uVar15 & 0x10) != 0);
  Ram00020000000000a2 = uVar9;
  Ram00020000000000a7 = uVar11;
  goto LAB_0001428c;
  while( true ) {
    uVar15 = Ram0002000000000021;
    lVar3 = Ram0002000000000074;
    if (lVar3 != 0) break;
LAB_000147c0:
    if ((uVar15 & 1 << lVar13) != 0) goto LAB_000147c8;
  }
LAB_0001428c:
  Ram000200000000004b = 0;
LAB_00014290:
  FUN_00009bb8();
  return;
}


/* ---- pm4_OP_D1_handler @ 00014920 size=1360 ---- */

/* WARNING: Removing unreachable block (ram,0x000149b0) */
/* WARNING: Removing unreachable block (ram,0x00014a30) */

void pm4_OP_D1_handler(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram000200000000004a = 1;
  uVar3 = Ram0002000000000302;
  uVar7 = (ulong)uVar3 & 1;
  if ((uVar3 & 1) == 0) {
    Ram0002000000000000 = (int)param_1;
    Ram0002000000000000 = uVar3;
    Ram0073000100000000 = 0;
    Ram000200000000038b = 0;
    lVar12 = Ram0002000000000015;
    if (lVar12 == 0) {
      if ((uVar3 & 2) != 0) {
        Ram0002000000000000 = 0xc00f1000;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        do {
          uVar7 = Ram0002000000000314;
        } while ((0x400L << (in_mhartid & 0x3f) & uVar7) != 0);
        lVar12 = Ram0003000000008701;
        if (lVar12 != 0) {
LAB_00014a7c:
          FUN_00008ba0();
          goto LAB_000149d0;
        }
      }
    }
    else {
      iVar1 = Ram0002000000000032;
      if (iVar1 != 0) {
        Ram0002000000000000 = 0xc00f1000;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        Ram0002000000000000 = 0;
        do {
          uVar7 = Ram0002000000000314;
        } while ((0x400L << (in_mhartid & 0x3f) & uVar7) != 0);
        lVar12 = Ram0003000000008701;
        if (lVar12 != 0) {
LAB_00014a4c:
          FUN_00008c60(9);
          goto LAB_000149d0;
        }
      }
    }
  }
  else {
    uVar17 = (ulong)(param_1 << 0x22) >> 0x34;
    uVar4 = uVar17;
    if (0x20 < uVar17) {
      uVar4 = 0x20;
    }
    if (uVar17 != 0) {
      puVar9 = &DAT_001010c0;
      puVar10 = &DAT_001011c0;
      uVar11 = 0;
      do {
        uVar18 = Ram0002000000000302;
        lVar12 = Ram0002000000000302;
        Ram0002000000000073 = lVar12 << 0x20 | uVar18;
        uVar2 = Ram0002000000000073;
        *puVar9 = uVar2;
        uVar18 = Ram0002000000000302;
        lVar12 = Ram0002000000000302;
        *puVar10 = lVar12 << 0x20 | uVar18;
        uVar11 = uVar11 + 1;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      } while (uVar11 < uVar4);
    }
    lVar12 = (long)(int)(uVar3 >> 0x10) << 1;
    if ((ulong)(long)(int)(uVar3 >> 0x10) < 4) {
      lVar12 = 8;
    }
    uVar18 = 0;
    uVar11 = 0;
    uVar5 = uVar3 >> 1 & 1;
    while (iVar1 = Ram0002000000000074, iVar1 == 0) {
      Ram000200000000031b = uVar3 >> 2 & 3;
      if (uVar17 < 4) {
        uVar15 = 3;
        uVar6 = 0;
      }
      else {
        puVar10 = &DAT_001011c0;
        puVar9 = &DAT_001010c0;
        uVar15 = 3;
        uVar6 = 0;
        do {
          uVar14 = 0xfL << (uVar6 & 0x3f);
          do {
            iVar1 = Ram0002000000000074;
            if ((iVar1 != 0) || (uVar14 == (uVar14 & uVar18))) break;
            lVar13 = 0;
            if ((*(ulong *)*puVar9 < *puVar10) ||
               (((*(ulong *)puVar9[1] < puVar10[1] || (*(ulong *)puVar9[2] < puVar10[2])) ||
                (*(ulong *)puVar9[3] < puVar10[3])))) {
              lVar16 = Ram0002000000000015;
              if (lVar16 == 0) {
                if ((uVar5 != 0) && (iVar1 = Ram0002000000000031, iVar1 != 0)) goto LAB_00014a7c;
              }
              else {
                lVar16 = Ram0002000000000032;
                if ((lVar16 != 0) && (lVar16 = Ram0002000000000035, lVar16 != 0)) goto LAB_00014a4c;
              }
              uVar19 = 0;
            }
            else {
              uVar18 = uVar18 | uVar14;
              uVar11 = uVar11 + 4;
              uVar19 = uVar7;
            }
            do {
              Ram00020000000001ff = 0;
              lVar13 = (long)((int)lVar13 + 1);
            } while (lVar13 != lVar12);
          } while (uVar19 == 0);
          uVar15 = uVar15 + 4;
          uVar6 = uVar6 + 4;
          puVar10 = puVar10 + 4;
          puVar9 = puVar9 + 4;
        } while (uVar15 < uVar4);
      }
      uVar14 = uVar6 + 1;
      uVar19 = uVar6 + 2;
      if (uVar4 == uVar15) {
        uVar15 = 7L << (uVar6 & 0x3f);
        do {
          iVar1 = Ram0002000000000074;
          if ((iVar1 != 0) || (uVar15 == (uVar15 & uVar18))) break;
          lVar13 = 0;
          if ((*(ulong *)(&DAT_001010c0)[uVar6] < (ulong)(&DAT_001011c0)[uVar6]) ||
             ((*(ulong *)(&DAT_001010c0)[uVar14] < (ulong)(&DAT_001011c0)[uVar14] ||
              (*(ulong *)(&DAT_001010c0)[uVar19] < (ulong)(&DAT_001011c0)[uVar19])))) {
            lVar16 = Ram0002000000000015;
            if (lVar16 == 0) {
              if (uVar5 != 0) {
                iVar1 = Ram0002000000000031;
                uVar8 = (ulong)iVar1;
                if (uVar8 == 0) goto LAB_00014d84;
                goto LAB_00014a7c;
              }
            }
            else {
              lVar16 = Ram0002000000000032;
              if ((lVar16 != 0) && (lVar16 = Ram0002000000000035, lVar16 != 0)) goto LAB_00014a4c;
            }
            uVar8 = 0;
          }
          else {
            uVar18 = uVar18 | uVar15;
            uVar11 = uVar11 + 3;
            uVar8 = uVar7;
          }
LAB_00014d84:
          do {
            Ram00020000000001ff = 0;
            lVar13 = (long)((int)lVar13 + 1);
          } while (lVar12 != lVar13);
        } while (uVar8 == 0);
      }
      if (uVar4 == uVar19) {
        uVar15 = 3L << (uVar6 & 0x3f);
        do {
          iVar1 = Ram0002000000000074;
          if ((iVar1 != 0) || (uVar15 == (uVar15 & uVar18))) break;
          lVar13 = 0;
          if ((*(ulong *)(&DAT_001010c0)[uVar6] < (ulong)(&DAT_001011c0)[uVar6]) ||
             (*(ulong *)(&DAT_001010c0)[uVar14] < (ulong)(&DAT_001011c0)[uVar14])) {
            lVar16 = Ram0002000000000015;
            if (lVar16 == 0) {
              uVar19 = 0;
              if (uVar5 != 0) {
                iVar1 = Ram0002000000000031;
                uVar19 = (ulong)iVar1;
                if (uVar19 != 0) goto LAB_00014a7c;
              }
            }
            else {
              uVar19 = Ram0002000000000032;
              if ((uVar19 != 0) && (uVar19 = Ram0002000000000035, uVar19 != 0)) goto LAB_00014a4c;
            }
          }
          else {
            uVar18 = uVar18 | uVar15;
            uVar11 = uVar11 + 2;
            uVar19 = uVar7;
          }
          do {
            Ram00020000000001ff = 0;
            lVar13 = (long)((int)lVar13 + 1);
          } while (lVar12 != lVar13);
        } while (uVar19 == 0);
      }
      if (uVar4 == uVar14) {
        uVar15 = 1L << (uVar6 & 0x3f);
        do {
          iVar1 = Ram0002000000000074;
          if ((iVar1 != 0) || (uVar15 == (uVar15 & uVar18))) break;
          lVar13 = 0;
          if (*(ulong *)(&DAT_001010c0)[uVar6] < (ulong)(&DAT_001011c0)[uVar6]) {
            lVar16 = Ram0002000000000015;
            if (lVar16 == 0) {
              if ((uVar5 != 0) && (iVar1 = Ram0002000000000031, iVar1 != 0)) goto LAB_00014a7c;
            }
            else {
              lVar16 = Ram0002000000000032;
              if ((lVar16 != 0) && (lVar16 = Ram0002000000000035, lVar16 != 0)) goto LAB_00014a4c;
            }
          }
          else {
            uVar18 = uVar18 | uVar15;
            uVar11 = uVar11 + 1;
          }
          do {
            Ram00020000000001ff = 0;
            lVar13 = (long)((int)lVar13 + 1);
          } while (lVar12 != lVar13);
        } while (*(ulong *)(&DAT_001010c0)[uVar6] < (ulong)(&DAT_001011c0)[uVar6]);
      }
      if (uVar4 == uVar11) break;
      lVar13 = Ram0002000000000015;
      lVar16 = 0;
      if (lVar13 == 0) {
        if ((uVar5 != 0) && (iVar1 = Ram0002000000000031, iVar1 != 0)) goto LAB_00014a7c;
      }
      else {
        lVar13 = Ram0002000000000032;
        if ((lVar13 != 0) && (lVar13 = Ram0002000000000035, lVar13 != 0)) goto LAB_00014a4c;
      }
      do {
        Ram00020000000001ff = 0;
        lVar16 = (long)((int)lVar16 + 1);
      } while (lVar12 != lVar16);
    }
  }
  Ram000200000000004b = 0;
LAB_000149d0:
  FUN_00009bb8();
  return;
}


/* ---- pm4_OP_D0_handler @ 00014e78 size=608 ---- */

/* WARNING: Removing unreachable block (ram,0x00014ed0) */
/* WARNING: Removing unreachable block (ram,0x00014ebc) */
/* WARNING: Removing unreachable block (ram,0x00014ec4) */
/* WARNING: Removing unreachable block (ram,0x00014f00) */

void pm4_OP_D0_handler(void)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  int in_mhartid;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar6 = Ram0002000000000302;
  Ram000200000000006d = 0;
  uVar7 = Ram0002000000000015;
  uVar7 = uVar7 & 3;
  *(undefined4 *)(&TP_R041 + uVar7) = 1;
  do {
    lVar2 = Ram0002000000000013;
  } while (lVar2 != 0);
  uVar1 = Ram000100000000c6bc;
  if ((uVar1 >> 0xc & 3) != 0) {
    do {
    } while( true );
  }
  if ((uVar1 & 1) != 0) {
    Ram000100000000c6bc = 0;
  }
  *(undefined4 *)(&TP_R041 + uVar7) = *(undefined4 *)(&TP_R00B + uVar7);
  iVar3 = Ram00020000000000a9;
  lVar2 = Ram00020000000001fa;
  lVar9 = ((long)(in_mhartid << 2) & 0xcU | (long)(iVar3 << 4) & 0x70U) << 0x24;
  uVar8 = Ram00020000000001f0;
  Ram000200000000001c = (ulong)uVar8;
  Ram00020000000000a5 = *(uint *)(&LAB_0000c3e8 + lVar2 + lVar9) & 0xf | 0x100;
  uVar6 = Ram0002000000000314;
  lVar2 = Ram00020000000001fa;
  uVar8 = 8;
  if ((*(uint *)(&LAB_0000c3bc + lVar2 + lVar9) & 0x3e) != 0) {
    uVar8 = *(uint *)(&LAB_0000c3bc + lVar2 + lVar9) & 0x3f;
    if (0x14 < uVar8) {
      uVar8 = 0x14;
    }
    uVar8 = 1 << ((long)(int)(uVar8 + 1) & 0x1fU);
  }
  lVar2 = Ram00020000000001fa;
  lVar4 = Ram00020000000001fa;
  lVar5 = Ram00020000000001fa;
  uVar7 = (ulong)(-uVar8 & *(uint *)(&LAB_0000c3c4 + lVar2 + lVar9) |
                 *(uint *)(&LAB_0000c3c0 + lVar5 + lVar9));
  if (CONCAT44(*(undefined4 *)(&LAB_0000c3c8 + lVar4 + lVar9),
               *(uint *)(&LAB_0000c3c4 + lVar2 + lVar9)) < uVar7) {
    uVar7 = uVar7 - uVar8;
  }
  lVar2 = Ram00020000000001fa;
  uVar8 = Ram00020000000001f0;
  Ram000200000000001c = (ulong)uVar8;
  Ram00020000000000a5 = 0;
  uVar6 = Ram0002000000000314;
  Ram0002000000000000 = 0xc006d000;
  Ram0002000000000000 = 0x16e03594;
  Ram0002000000000000 = 0x42000000;
  Ram0002000000000000 = *(undefined4 *)(DAT_001013d0 + 0x7f8);
  Ram0002000000000000 = *(undefined4 *)(DAT_001013d0 + 0x7fc);
  Ram0002000000000000 = (int)uVar7;
  Ram0002000000000000 = (int)(uVar7 >> 0x20);
  Ram0002000000000000 =
       (uint)((ulong)((long)*(int *)(&LAB_0000c3b4 + lVar2 + lVar9) << 0x24) >> 0x26);
  FUN_00009bb8();
  return;
}


/* ---- FUN_000150e0 @ 000150e0 size=164 ---- */

/* WARNING: Removing unreachable block (ram,0x00015140) */

uint * FUN_000150e0(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 in_mcycle;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  lVar4 = Ram0003000000008711;
  if ((int)((uint)lVar4 & (uint)param_1) != param_1) {
    return (uint *)0x0;
  }
  lVar3 = Ram000300000000870f;
  uVar2 = Ram000300000000870d;
  if ((uVar2 >> 0x20 == 0) ||
     (iVar1 = (int)(uVar2 >> 0x20), (ulong)(lVar4 >> 0x20) <= (ulong)(long)iVar1)) {
    uVar7 = 0x40;
    uVar6 = 0x200000000;
  }
  else {
    uVar6 = (long)(iVar1 + 1) << 0x20;
    uVar7 = (ulong)(uint)(iVar1 << 6);
  }
  Ram000300000000870d = (int)uVar2 + 1 | uVar6;
  Ram00020000000001ff = 0;
  puVar5 = (uint *)(lVar3 + uVar7);
  *puVar5 = (uint)param_1;
  puVar5[1] = (uint)in_mcycle;
  puVar5[2] = (uint)((ulong)in_mcycle >> 0x20);
  return puVar5;
}


/* ---- FUN_00015188 @ 00015188 size=540 ---- */

void FUN_00015188(uint param_1,long param_2,int param_3,ulong param_4,long param_5,long param_6,
                 long param_7,ulong param_8)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  int in_stack_00000000;
  undefined4 in_stack_00000008;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar6 = (param_1 & 0x101 | 0x100) << 0x10;
  uVar1 = Ram000200000000000a;
  uVar8 = (long)(int)(uVar1 >> 0x10) & 1;
  if (uVar8 != 0) {
    uVar8 = (ulong)(int)((uint)(DAT_001012d4 != 0) + (uint)(DAT_001012f6 != 0) + 2 +
                        (-(uint)(DAT_001012f0 != 0) & 3));
  }
  Ram0002000000000019 = 0;
  uVar3 = Ram0002000000000314;
  do {
    uVar4 = Ram0002000000000320;
  } while ((uVar4 & 4) != 0);
  if (in_stack_00000000 != 0) {
    uVar4 = (ulong)((int)param_8 + in_stack_00000000);
    iVar5 = 0;
    lVar7 = (param_8 & (long)(int)(param_3 - 1U) & 0xffffffff) * (param_4 & 0xffffffff) + param_2;
    do {
      while( true ) {
        Ram0002000000000073 = *(undefined8 *)(param_7 + lVar7);
        uVar2 = Ram0002000000000073;
        uVar1 = Ram00020000000001f0;
        Ram000200000000001c = (ulong)uVar1;
        Ram000200000000001d = uVar2;
        Ram000200000000002b = 0;
        uVar1 = Ram0002000000000017;
        Ram000200000000002f =
             *(uint *)((undefined8 *)(param_7 + lVar7) + 1) >> ((ulong)uVar1 & 0x1f);
        Ram0002000000000073 = param_5 + lVar7;
        uVar2 = Ram0002000000000073;
        Ram0002000000000092 = uVar2;
        uVar1 = Ram000200000000002c;
        Ram0002000000000092 = (ulong)uVar1 | 5;
        Ram000200000000002d = uVar8 << 0x14 | 1;
        uVar6 = uVar6 & 0xffff0000 | (uint)((ulong)lVar7 >> 0x20) & 0xffff;
        if (DAT_001012d4 != 0) {
          iVar5 = *(int *)(param_6 + lVar7) * 0x10 + DAT_001012d0;
        }
        Ram0002000000000028 = (int)uVar8;
        Ram0002000000000000 = 0xc008b000;
        Ram0002000000000000 = (int)lVar7;
        Ram0002000000000000 = uVar6;
        Ram0002000000000000 = CONCAT22(DAT_001012f4,DAT_001012f2);
        Ram0002000000000000 = CONCAT22(DAT_001012f6,DAT_001012f0);
        Ram0002000000000000 = (uint)DAT_001012d4;
        Ram0002000000000000 = (int)param_8;
        Ram0002000000000000 = DAT_001012e0;
        Ram0002000000000000 = iVar5;
        Ram0002000000000000 = in_stack_00000008;
        uVar1 = (int)param_8 + 1;
        param_8 = (ulong)(int)uVar1;
        if ((param_3 - 1U & uVar1) == 0) break;
        lVar7 = lVar7 + (param_4 & 0xffffffff);
        if (param_8 == uVar4) {
          gp = 0x101800;
          tp = 0x2000000000000;
          return;
        }
      }
      lVar7 = param_2;
    } while (param_8 != uVar4);
  }
  return;
}


/* ---- FUN_000153a8 @ 000153a8 size=84 ---- */

void FUN_000153a8(long param_1,int param_2)

{
  long lVar1;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  lVar1 = param_1 + 0xa60 + (ulong)DAT_001012e4 * 0x10;
  param_2 = *(int *)(lVar1 + 0xc) + param_2;
  *(int *)(lVar1 + 0xc) = param_2;
  Ram0002000000000000 = 0xc002b000;
  Ram0002000000000000 = (int)(lVar1 + 8);
  Ram0002000000000000 = (uint)((ulong)(lVar1 + 8) >> 0x20) & 0xffff | 0x3000000;
  Ram0002000000000000 = param_2;
  return;
}


/* ---- FUN_00015400 @ 00015400 size=120 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00015400(char param_1,undefined4 param_2,undefined4 param_3,long param_4,undefined4 param_5
                 ,uint param_6)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  _DAT_001012d8 =
       ((param_6 ^ 1) << 0x12 | param_6 << 0x13) & 0xc0000 |
       (CONCAT21(_DAT_001012da,param_1 + '\x01') & 0xfff0ff) << 8;
  DAT_001012c0 = (int)param_4;
  DAT_001012c4 = (short)((ulong)param_4 >> 0x20);
  DAT_001012c6 = (short)*(undefined4 *)(param_4 + 4);
  DAT_001012c8 = param_2;
  DAT_001012cc = param_3;
  DAT_001012d0 = param_5;
  DAT_001012e0 = 0xffffffff;
  DAT_001012d4 = 0;
  _DAT_001012e8 = 0;
  _DAT_001012f0 = 0;
  _DAT_001012f8 = 0;
  return;
}


/* ---- FUN_00015478 @ 00015478 size=460 ---- */

void FUN_00015478(uint param_1,long param_2,int param_3,ulong param_4,long param_5,long param_6,
                 ulong param_7,long param_8)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  undefined4 in_stack_00000000;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar6 = (param_1 & 1) << 0x10;
  uVar9 = Ram000200000000000a;
  uVar9 = uVar9 >> 0x10 & 1;
  if (uVar9 != 0) {
    uVar9 = (uint)(DAT_001012d4 != 0) + (uint)(DAT_001012f6 != 0) + 2 +
            (-(uint)(DAT_001012f0 != 0) & 3);
  }
  Ram0002000000000019 = 0;
  uVar3 = Ram0002000000000314;
  do {
    uVar8 = Ram0002000000000320;
  } while ((uVar8 & 4) != 0);
  if (param_8 != 0) {
    uVar8 = (ulong)((int)param_7 + (int)param_8);
    iVar5 = 0;
    lVar7 = (param_7 & (long)(int)(param_3 - 1U) & 0xffffffff) * (param_4 & 0xffffffff) + param_2;
    do {
      while( true ) {
        Ram0002000000000073 = param_5 + lVar7;
        uVar2 = Ram0002000000000073;
        uVar4 = Ram0003000000008711;
        Ram0002000000000003 = uVar2;
        Ram0002000000000003 = 4;
        uVar6 = uVar6 & 0xffff0000 | (uint)((ulong)lVar7 >> 0x20) & 0xffff;
        if (DAT_001012d4 != 0) {
          iVar5 = *(int *)(param_6 + lVar7) * 0x10 + DAT_001012d0;
        }
        Ram0002000000000028 = uVar9;
        Ram0002000000000000 = 0xc008b000;
        Ram0002000000000000 = (int)lVar7;
        Ram0002000000000000 = uVar6;
        Ram0002000000000000 = CONCAT22(DAT_001012f4,DAT_001012f2);
        Ram0002000000000000 = CONCAT22(DAT_001012f6,DAT_001012f0);
        Ram0002000000000000 = (uint)DAT_001012d4;
        Ram0002000000000000 = (int)param_7;
        Ram0002000000000000 = DAT_001012e0;
        Ram0002000000000000 = iVar5;
        Ram0002000000000000 = in_stack_00000000;
        uVar1 = (int)param_7 + 1;
        param_7 = (ulong)(int)uVar1;
        if ((param_3 - 1U & uVar1) == 0) break;
        lVar7 = lVar7 + (param_4 & 0xffffffff);
        if (param_7 == uVar8) {
          gp = 0x101800;
          tp = 0x2000000000000;
          return;
        }
      }
      lVar7 = param_2;
    } while (param_7 != uVar8);
  }
  return;
}


/* ---- FUN_00015648 @ 00015648 size=68 ---- */

long FUN_00015648(long param_1)

{
  tp = 0x2000000000000;
  gp = 0x101800;
  return (ulong)(param_1 == 0) + param_1;
}


/* ---- sub_1568c @ 0001568c size=4 ---- */

void sub_1568c(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_00015690 @ 00015690 size=64 ---- */

undefined8 FUN_00015690(undefined8 *param_1)

{
  undefined8 unaff_retaddr;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  
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
  param_1[8] = &DAT_3000000008000;
  param_1[9] = &DAT_73000100000000;
  param_1[10] = &DAT_100000000c800;
  param_1[0xb] = &DAT_1000000030800;
  param_1[0xc] = &DAT_10002000287e8;
  param_1[0xd] = register0x00002010;
  return 0;
}


/* ---- FUN_000156d0 @ 000156d0 size=192 ---- */

void FUN_000156d0(undefined8 param_1,uint param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0002000000000073 = param_1;
  uVar3 = Ram0002000000000073;
  Ram000200000000001a = 2;
  Ram000200000000008d = 0;
  Ram0002000000000011 = param_2 >> 2;
  Ram0002000000000002 = uVar3;
  Ram0002000000000002 = (ulong)(param_2 >> 2) | 0x100000000;
  Ram000200000000000a = 0xc0023f00;
  Ram0002000000000000 = 0;
  Ram0002000000000000 = 0;
  Ram0002000000000000 = 0;
  uVar2 = Ram0002000000000032;
  Ram0002000000000048 = 0;
  uVar4 = Ram0002000000000314;
  lVar5 = FUN_00015690(&DAT_00101300);
  if (lVar5 == 0) {
    Ram000300000000870b = 1;
    Ram00020000000001ff = 0;
    lVar5 = Ram0002000000000015;
    while (lVar5 == 2) {
      uVar4 = Ram0002000000000302;
      uVar1 = Ram0002000000000007;
      (*(code *)(uVar1 & 0xfffffffffffffffe))(uVar4);
      lVar5 = Ram0002000000000015;
    }
  }
  Ram0002000000000048 = uVar2;
  uVar2 = Ram0002000000000314;
  return;
}


/* ---- FUN_00015790 @ 00015790 size=28 ---- */

void FUN_00015790(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  Ram0002000000000073 = param_1;
  uVar1 = Ram0002000000000073;
  uVar2 = Ram0003000000008711;
  Ram0002000000000003 = uVar1;
  Ram0002000000000003 = (long)(int)(param_2 >> 2);
  return;
}


/* ---- FUN_000157b0 @ 000157b0 size=528 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000157b0(uint param_1,long param_2,int param_3,ulong param_4,ulong param_5,ulong param_6,
                 long param_7,undefined4 param_8)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  
  uVar4 = DAT_001012e0;
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar9 = (param_1 & 0x201 | 0x200) << 0x10;
  uVar7 = CONCAT22(DAT_001012f6,DAT_001012f0);
  uVar5 = Ram000200000000000a;
  uVar5 = uVar5 >> 0x10 & 1;
  if (uVar5 != 0) {
    uVar5 = (uint)(DAT_001012f6 != 0) + (-(uint)(DAT_001012f2 != 0) & 3) +
            (-(uint)(DAT_001012f0 != 0) & 3);
  }
  Ram0002000000000019 = 0;
  uVar3 = Ram0002000000000314;
  do {
    uVar8 = Ram0002000000000320;
  } while ((uVar8 & 4) != 0);
  uVar8 = 0;
  if ((param_5 & 0x200000) != 0) {
    uVar8 = (ulong)_DAT_001012c0 + (ulong)DAT_001012c6 * (ulong)DAT_001012e0 + 0x74;
  }
  if (param_7 != 0) {
    uVar2 = (uint)DAT_001012f2;
    iVar6 = (int)param_6;
    lVar10 = (param_6 & (long)(int)(param_3 - 1U) & 0xffffffff) * (param_4 & 0xffffffff) + param_2;
    do {
      if ((param_5 & 0x200000) == 0) {
        uVar8 = (param_5 & 0xffff) + lVar10;
      }
      FUN_00015790(uVar8 & 0xfffffffffffffffc,(uint)param_5 >> 0xe & 0xc);
      uVar9 = uVar9 & 0xffff0000 | (uint)((ulong)lVar10 >> 0x20) & 0xffff;
      Ram0002000000000028 = uVar5;
      Ram0002000000000000 = 0xc008b000;
      Ram0002000000000000 = (int)lVar10;
      Ram0002000000000000 = uVar9;
      Ram0002000000000000 = uVar2;
      Ram0002000000000000 = uVar7;
      Ram0002000000000000 = (uint)param_5;
      Ram0002000000000000 = (int)param_6;
      Ram0002000000000000 = uVar4;
      Ram0002000000000000 = 0;
      Ram0002000000000000 = param_8;
      uVar1 = (int)param_6 + 1;
      param_6 = (ulong)(int)uVar1;
      lVar11 = param_2;
      if ((param_3 - 1U & uVar1) != 0) {
        lVar11 = lVar10 + (param_4 & 0xffffffff);
      }
      lVar10 = lVar11;
    } while ((long)(iVar6 + (int)param_7) != param_6);
  }
  return;
}


/* ---- FUN_000159c0 @ 000159c0 size=1812 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000159c0(undefined8 param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  byte bVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  uint *puVar15;
  undefined8 uVar16;
  long *plVar17;
  ulong uVar18;
  ulong *puVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  int iVar23;
  ulong uVar24;
  int *piVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  ulong uStack_c0;
  int iStack_58;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  lVar20 = Ram0003000000008711;
  if (lVar20 != 0) {
    FUN_000150e0(0x4004);
  }
  FUN_00015400((long)(int)param_2[1],(long)(int)param_2[4],(long)(int)param_2[5],param_1,param_3,0);
  lVar20 = *(long *)(param_2 + 0x290);
  uVar1 = param_2[0x292];
  do {
    iVar23 = DAT_001012ec;
    uVar2 = DAT_001012e8;
    lVar21 = Ram0003000000008711;
    uVar9 = (ulong)(int)DAT_001012e8;
    uVar10 = (ulong)DAT_001012ec;
    if ((lVar21 == 0) || (lVar21 = FUN_000150e0(0x4010), bVar8 = DAT_001012d8, lVar21 == 0)) {
      if (uVar9 == uVar10) {
        uVar4 = param_2[0x296];
        uVar5 = param_2[0x297];
        lVar21 = 0;
        goto LAB_00015fdc;
      }
      puVar15 = (uint *)(lVar20 + ((ulong)((long)(int)(uVar2 & uVar1 - 1) << 0x20) >> 0x1e));
      lVar21 = 0;
    }
    else {
      uVar4 = param_2[0x296];
      uVar5 = param_2[0x297];
      uVar3 = *param_2;
      *(uint *)(lVar21 + 0x1c) = uVar5;
      *(uint *)(lVar21 + 0x20) = uVar3;
      *(uint *)(lVar21 + 0xc) = uVar2;
      *(int *)(lVar21 + 0x10) = iVar23;
      *(uint *)(lVar21 + 0x14) = (uint)bVar8;
      *(uint *)(lVar21 + 0x18) = uVar4;
      lVar21 = lVar21 + 4;
      if (uVar9 == uVar10) {
LAB_00015fdc:
        while( true ) {
          uVar9 = (ulong)(int)uVar4;
          if (lVar21 != 0) {
            *(uint *)(lVar21 + 0x14) = uVar4;
            *(uint *)(lVar21 + 0x18) = uVar5;
          }
          if (uVar9 != (long)(int)uVar5) break;
          if (DAT_001012d8 == 0x22) {
            if (lVar21 != 0) {
              *(undefined4 *)(lVar21 + 0x20) = 0xffffffff;
              *(undefined4 *)(lVar21 + 0x24) = 0xffffffff;
              *(undefined4 *)(lVar21 + 0x28) = 0xffffffff;
            }
            *param_2 = 0;
            lVar20 = Ram0003000000008711;
            DAT_001012da = DAT_001012da & 0xf3;
            if (lVar20 == 0) {
              return;
            }
            FUN_000150e0(0x4008);
            return;
          }
          DAT_001012d8 = (byte)*param_2;
          if (lVar21 != 0) {
            *(uint *)(lVar21 + 0x1c) = *param_2 & 0xff;
          }
          fence();
          uVar4 = param_2[0x296];
          uVar5 = param_2[0x297];
        }
        puVar15 = (uint *)(lVar20 + ((ulong)((long)(int)(uVar4 & uVar1 - 1) << 0x20) >> 0x1e));
        if (lVar21 == 0) goto LAB_00015a90;
      }
      puVar15 = (uint *)(lVar20 + (((uVar9 & (long)(int)(uVar1 - 1)) << 0x20) >> 0x1e));
      *(uint **)(lVar21 + 0x20) = puVar15;
    }
LAB_00015a90:
    do {
      uVar2 = *puVar15;
    } while (uVar2 >> 0x1f != (uint)((uVar1 & (uint)uVar9) == 0));
    DAT_001012e8 = (uint)uVar9 + 1;
    Ram0002000000000073 = param_2 + 0x296;
    uVar16 = Ram0002000000000073;
    Ram000200000000031b = 0x2f;
    Ram000200000000031c = uVar16;
    Ram000200000000031d = (ulong)DAT_001012e8 - (uVar9 & 0xffffffff);
    Ram000200000000031e = 0;
    Ram0002000000000370 = 0x600000001;
    Ram0002000000000321 = 1;
    do {
      lVar29 = Ram0002000000000321;
    } while (lVar29 != 0);
    uVar16 = Ram0002000000000322;
    DAT_001012ec = (int)((ulong)uVar16 >> 0x20);
    uVar9 = (long)(int)uVar2 & 0x7fffffff;
    iVar23 = (int)uVar9;
    if (lVar21 != 0) {
      *(int *)(lVar21 + 0x28) = iVar23;
    }
    uVar10 = (long)(int)uVar2 & 0x7fffffff;
    if ((long)DAT_001012e0 != uVar9) {
      lVar21 = (ulong)_DAT_001012c0 + 0x40 + DAT_001012c6 * uVar10;
      uVar9 = *(ulong *)(lVar21 + 0x28);
      uVar16 = *(undefined8 *)(lVar21 + 0x20);
      DAT_001012e4 = *(undefined4 *)(lVar21 + 4);
      DAT_001012da = (byte)(uVar9 >> 0x1c) & 0x30 | (byte)uVar16 & 3 | DAT_001012da & 0xcc;
      DAT_001012f6 = (undefined2)uVar9;
      _DAT_001012dc = (undefined4)((ulong)*(undefined8 *)(lVar21 + 0x40) >> 0x20);
      DAT_001012f0 = (undefined2)((ulong)uVar16 >> 0x10);
      DAT_001012f2 = (undefined2)((ulong)uVar16 >> 0x20);
      DAT_001012f4 = (undefined2)((ulong)uVar16 >> 0x30);
      DAT_001012d4 = (undefined2)(uVar9 >> 0x10);
      DAT_001012e0 = iVar23;
      if ((int)*(undefined8 *)(lVar21 + 0x40) != 0) {
        uVar16 = Ram0003000000008711;
        FUN_000156d0(*(undefined8 *)(lVar21 + 0x48),(long)(int)*(undefined8 *)(lVar21 + 0x50),uVar16
                    );
      }
    }
    plVar17 = (long *)((long)param_2 + uVar10 * 0x20 + (ulong)DAT_001012cc);
    lVar29 = *plVar17;
    uVar27 = plVar17[1];
    uVar24 = plVar17[2];
    uVar18 = plVar17[3];
    lVar21 = (long)(int)uVar27;
    uVar14 = uVar24 >> 0x20 & 0xffff;
    uStack_c0 = uVar27 >> 0x23;
    uVar9 = (ulong)(int)uVar24;
    uVar11 = (long)uVar27 >> 0x20;
    if (uStack_c0 < 0x80) {
      uStack_c0 = 0x80;
    }
    piVar25 = (int *)((long)param_2 + uVar10 * 8 + (ulong)DAT_001012c8);
    iVar23 = (int)(uVar27 >> 0x20);
    uVar26 = (ulong)piVar25[1];
    uVar10 = 0;
    uVar28 = uVar11 & 0xffffffff;
    uVar27 = (long)*piVar25;
LAB_00015ca4:
    uVar12 = uVar9 & 0xffffffff;
    if (uVar26 != uVar9) {
      uVar22 = uVar12;
      do {
        while( true ) {
          puVar19 = (ulong *)(((uVar22 & iVar23 - 1) >> 6) * 8 + lVar29);
          uVar12 = uVar26 & 0xffffffff;
          if (((uVar22 ^ uVar26 & 0xffffffff) & uVar28) != 0) {
            uVar12 = uVar22 + uVar28 & (ulong)(uint)-iVar23;
          }
          uVar13 = -(ulong)((uVar22 & uVar28) == 0);
          uVar9 = ((uVar13 ^ *puVar19) >> (uVar22 & 0x3f)) << (uVar22 & 0x3f);
          uVar22 = uVar22 & 0xffffffc0;
          if (uVar9 == 0) {
            do {
              puVar19 = puVar19 + 1;
              if (uVar12 <= uVar22) goto LAB_00015d44;
              uVar22 = uVar22 + 0x40;
            } while (uVar13 == *puVar19);
            uVar9 = uVar13 ^ *puVar19;
          }
          if (uVar22 < uVar12) break;
LAB_00015d44:
          uVar22 = uVar12;
          uVar9 = (long)(int)uVar12;
          if (uVar26 == (long)(int)uVar12) goto LAB_00015d50;
        }
        for (; (uVar9 & 0xffff) == 0; uVar9 = uVar9 >> 0x10) {
          uVar22 = uVar22 + 0x10;
        }
        for (; (uVar9 & 0xf) == 0; uVar9 = uVar9 >> 4) {
          uVar22 = uVar22 + 4;
        }
        for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1) {
          uVar22 = uVar22 + 1;
        }
        if (uVar22 < uVar12) {
          uVar12 = uVar22;
        }
        if (uVar12 != (uVar27 & 0xffffffff)) {
          uVar9 = (long)(int)uVar12;
          break;
        }
        uVar22 = uVar12;
        uVar9 = uVar27;
      } while (uVar26 != uVar27);
LAB_00015d50:
      *(int *)(plVar17 + 2) = (int)uVar9;
    }
    iVar6 = (int)uVar9 - (int)uVar27;
    Ram0002000000000073 = piVar25;
    uVar16 = Ram0002000000000073;
    Ram000200000000031b = 0x2f;
    Ram000200000000031c = uVar16;
    Ram000200000000031d = uVar12 - (uVar27 & 0xffffffff);
    Ram000200000000031e = 0;
    Ram0002000000000370 = 0x600000001;
    Ram0002000000000321 = 1;
    do {
      lVar7 = Ram0002000000000321;
    } while (lVar7 != 0);
    lVar7 = Ram0002000000000322;
    uVar12 = (ulong)CONCAT42(_DAT_001012dc,CONCAT11(uRam00000000001012db,DAT_001012da)) & 3;
    uVar26 = lVar7 >> 0x20;
    if (uVar12 == 1) {
      FUN_00015188(param_5,uStack_c0 + lVar29,uVar11,lVar21,uVar14,uVar24 >> 0x30,uVar18 & 0xffff,
                   uVar27);
    }
    else if (uVar12 == 2) {
      iStack_58 = (int)(uVar24 >> 0x20);
      FUN_000157b0(param_5,uStack_c0 + lVar29,uVar11,lVar21,(long)iStack_58,param_4);
    }
    else if ((DAT_001012da & 3) == 0) {
      FUN_00015478(param_5,uStack_c0 + lVar29,uVar11,lVar21,uVar14,uVar24 >> 0x30,uVar27,(long)iVar6
                  );
    }
    uVar10 = (ulong)(iVar6 + (int)uVar10);
    if (uVar26 != uVar9) {
      uVar27 = uVar9;
      if (0x1f < uVar10) {
        FUN_000153a8(param_2,uVar10);
        uVar10 = 0;
      }
      goto LAB_00015ca4;
    }
    if (uVar10 != 0) {
      FUN_000153a8(param_2,uVar10);
    }
  } while( true );
}


/* ---- FUN_000160d8 @ 000160d8 size=1108 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000160d8(int *param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
                 int *param_6,long param_7)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  int in_stack_00000000;
  undefined1 in_stack_00000008;
  int in_stack_00000010;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  lVar12 = Ram0003000000008711;
  lVar11 = (long)in_stack_00000000;
  if (lVar12 != 0) {
    FUN_000150e0(0x4001);
  }
  FUN_00015400((long)*(int *)(param_2 + 4),(long)*(int *)(param_2 + 0x10),
               (long)*(int *)(param_2 + 0x14),param_1,param_3,1);
  if (in_stack_00000010 == 1) {
    piVar10 = *(int **)(param_6 + 2);
    param_5 = (ulong)*param_6;
    lVar11 = (long)param_6[1];
    param_7 = (long)param_6[4];
    piVar13 = (int *)0x0;
    iVar7 = 1;
    uVar5 = 0;
  }
  else if (in_stack_00000010 == 2) {
    piVar13 = *(int **)(param_6 + 2);
    iVar7 = *param_6;
    piVar10 = *(int **)(piVar13 + 2);
    uVar5 = (ulong)param_6[4];
    param_5 = (ulong)*piVar13;
    lVar11 = (long)piVar13[1];
    param_7 = (long)piVar13[4];
    if (iVar7 == 0) {
      gp = 0x101800;
      tp = 0x2000000000000;
      return;
    }
  }
  else if (in_stack_00000010 == 0) {
    uVar5 = 0;
    piVar13 = (int *)0x0;
    iVar7 = 1;
    piVar10 = param_6;
  }
  else {
    lVar11 = 0;
    param_7 = 0;
    param_5 = 0;
    uVar5 = 0;
    piVar13 = (int *)0x0;
    iVar7 = 1;
    piVar10 = (int *)0x0;
  }
  do {
    iVar7 = iVar7 + -1;
    if ((in_stack_00000010 != 0) && (param_1[2] != 0)) {
      param_5 = (ulong)*(int *)((long)param_1 +
                               ((param_5 << 0x20) >> 0x1e) + (ulong)(uint)param_1[2]);
    }
    if (((lVar11 != 0) && (iVar1 = (int)param_5 - *param_1, -1 < iVar1)) && (iVar1 < param_1[3])) {
      do {
        while( true ) {
          if ((long)DAT_001012e0 == param_5) {
            lVar12 = (long)_DAT_001012dc;
            uVar6 = ((ulong)CONCAT13(uRam00000000001012db,CONCAT12(DAT_001012da,_DAT_001012d8)) &
                    0x30000) >> 0x10;
          }
          else {
            DAT_001012e0 = (int)param_5;
            lVar8 = (ulong)_DAT_001012c0 + 0x40 + (ulong)DAT_001012c6 * (param_5 & 0xffffffff);
            uVar6 = *(ulong *)(lVar8 + 0x20);
            uVar9 = *(undefined8 *)(lVar8 + 0x28);
            lVar3 = *(long *)(lVar8 + 0x40);
            DAT_001012e4 = *(undefined4 *)(lVar8 + 4);
            uVar2 = CONCAT13(uRam00000000001012db,CONCAT12(DAT_001012da,_DAT_001012d8)) & 0xffccffff
            ;
            DAT_001012da = (byte)uVar6 & 3 | (byte)(uVar2 >> 0x10) |
                           (byte)((((uint)((ulong)uVar9 >> 0x20) & 3) << 0x14) >> 0x10);
            lVar12 = lVar3 >> 0x20;
            _DAT_001012d8 = (undefined2)uVar2;
            uRam00000000001012db = (undefined1)(uVar2 >> 0x18);
            DAT_001012f6 = (undefined2)uVar9;
            DAT_001012f0 = (undefined2)(uVar6 >> 0x10);
            DAT_001012f2 = (undefined2)(uVar6 >> 0x20);
            DAT_001012f4 = (undefined2)(uVar6 >> 0x30);
            DAT_001012d4 = (undefined2)((ulong)uVar9 >> 0x10);
            _DAT_001012dc = (int)((ulong)lVar3 >> 0x20);
            uVar6 = uVar6 & 3;
            if ((int)lVar3 != 0) {
              uVar9 = Ram0003000000008711;
              FUN_000156d0(*(undefined8 *)(lVar8 + 0x48),(long)(int)*(undefined8 *)(lVar8 + 0x50),
                           uVar9);
              lVar12 = (long)_DAT_001012dc;
              uVar6 = ((ulong)CONCAT13(uRam00000000001012db,CONCAT12(DAT_001012da,_DAT_001012d8)) &
                      0x30000) >> 0x10;
            }
          }
          lVar3 = param_2 + (ulong)DAT_001012cc + (param_5 & 0xffffffff) * 0x20;
          uVar4 = *(ulong *)(lVar3 + 0x10);
          if (uVar6 != 1) break;
          FUN_00015188(in_stack_00000008,piVar10,0,param_7,uVar4 >> 0x20 & 0xffff,uVar4 >> 0x30,
                       *(ulong *)(lVar3 + 0x18) & 0xffff,0);
LAB_00016208:
          param_5 = (ulong)((int)lVar12 + -1);
          if (lVar12 == 0) goto joined_r0x0001639c;
        }
        if (uVar6 != 2) {
          if (uVar6 == 0) {
            FUN_00015478(in_stack_00000008,piVar10,0,param_7,0,lVar11);
          }
          goto LAB_00016208;
        }
        FUN_000157b0(in_stack_00000008,piVar10,0,param_7,(long)uVar4 >> 0x20,0,lVar11,param_4);
        param_5 = (ulong)((int)lVar12 + -1);
      } while (lVar12 != 0);
    }
joined_r0x0001639c:
    if (iVar7 == 0) {
      lVar12 = Ram0003000000008711;
      DAT_001012da = DAT_001012da & 0xf3;
      if (lVar12 == 0) {
        return;
      }
      FUN_000150e0(0x4002);
      return;
    }
    piVar13 = (int *)((long)piVar13 + (uVar5 & 0xffffffff));
    piVar10 = *(int **)(piVar13 + 2);
    param_5 = (ulong)*piVar13;
    lVar11 = (long)piVar13[1];
    param_7 = (long)piVar13[4];
  } while( true );
}


/* ---- FUN_00016530 @ 00016530 size=116 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00016530(uint param_1,int param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar3 = param_1 >> 8 & 0xff;
  param_1 = param_1 >> 0x10;
  if (uVar3 == 0) {
    if (DAT_001012f8 != param_2) {
      DAT_001012f8 = param_2;
      return;
    }
  }
  else {
    if (uVar3 != 1) {
      return;
    }
    if (_DAT_001012fc != param_2) {
      _DAT_001012fc = param_2;
      return;
    }
  }
  uVar1 = Ram0002000000000015;
  *(uint *)(&TP_R014 + (uVar1 & 3)) = param_1;
  if (param_1 != 0) {
    uVar3 = 0;
    do {
      uVar2 = Ram0002000000000302;
      uVar3 = uVar3 + 1;
    } while (param_1 != uVar3);
  }
  return;
}


/* ---- pm4_OP_B0_handler @ 000165a8 size=500 ---- */

void pm4_OP_B0_handler(long param_1)

{
  int iVar1;
  uint3 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 *puVar12;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uVar3 = Ram0002000000000302;
  iVar1 = Ram0002000000000302;
  uVar10 = 2;
  if (((ulong)uVar3 & 0x3f) == 2) {
    iVar1 = (uint)((ulong)(param_1 << 0x22) >> 0x32) - 1;
    if (0 < iVar1) {
      iVar11 = 0;
      do {
        uVar10 = Ram0002000000000302;
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar1);
    }
    FUN_00016530(uVar10);
    return;
  }
  uVar6 = Ram0002000000000302;
  lVar7 = Ram0002000000000302;
  uVar9 = (lVar7 << 0x20 | uVar6) & 0xffffffffffff;
  iVar11 = Ram0002000000000302;
  iVar4 = Ram0002000000000302;
  iVar5 = Ram0002000000000302;
  uVar2 = *(uint3 *)(uVar9 + 0x1f) >> 2;
  if (((ulong)*(ushort *)(uVar9 + 0x22) == 0) || (uVar2 == 0)) {
    Ram000300000000870d = 0;
    Ram00020000000001ff = 0;
    Ram000300000000870f = 0;
    Ram00020000000001ff = 0;
    Ram0003000000008711 = 0;
    Ram00020000000001ff = 0;
  }
  else {
    puVar12 = (undefined8 *)
              (((ulong)(*(uint3 *)(uVar9 + 0x1f) >> 1) + ((long)*(int *)(uVar9 + 0x1c) & 0xffffffU))
               * 0x40 + uVar9);
    Ram000300000000870d = *puVar12;
    Ram00020000000001ff = 0;
    Ram000300000000870f = puVar12;
    Ram00020000000001ff = 0;
    Ram0003000000008711 = (ulong)uVar2 << 0x20 | (ulong)*(ushort *)(uVar9 + 0x22);
    Ram00020000000001ff = 0;
  }
  lVar7 = Ram0003000000008711;
  if (lVar7 != 0) {
    Ram0002000000000000 = 0xc001b000;
    Ram0002000000000000 = (int)uVar6;
    Ram0002000000000000 = (uint)(uVar9 >> 0x20) | 0x4000000;
  }
  if ((uVar3 & 0x3f) == 0) {
    iVar1 = Ram0002000000000302;
    uVar6 = Ram0002000000000302;
    lVar7 = Ram0002000000000302;
    iVar11 = Ram0002000000000302;
    uVar10 = Ram0002000000000302;
    FUN_000160d8(uVar9,(long)iVar1,(lVar7 << 0x20 | uVar6) & 0xffffffffffff,(long)iVar11);
  }
  else {
    FUN_000159c0((ulong)uVar3 & 0xffffffffffffffc0 | ((long)iVar1 & 0xffffU) << 0x20,uVar9,
                 (long)iVar11,(long)iVar4,(long)iVar5);
  }
  lVar7 = Ram0003000000008711;
  if (lVar7 != 0) {
    puVar12 = (undefined8 *)Ram000300000000870f;
    if (puVar12 != (undefined8 *)0x0) {
      uVar8 = Ram000300000000870d;
      *puVar12 = uVar8;
    }
    Ram0002000000000000 = 0xc001b000;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0x4000000;
  }
  return;
}


/* ---- sub_16890 @ 00016890 size=50 ---- */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Removing unreachable block (ram,0x00016894) */
/* WARNING: Removing unreachable block (ram,0x0001689e) */
/* WARNING: Removing unreachable block (ram,0x000167d6) */
/* WARNING: Removing unreachable block (ram,0x000167f4) */
/* WARNING: Removing unreachable block (ram,0x000167de) */
/* WARNING: Removing unreachable block (ram,0x000167e0) */

void sub_16890(undefined8 param_1,uint param_2,int param_3,ulong param_4,ulong param_5,long param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 in_t1;
  uint in_register_00002034;
  undefined8 *puVar7;
  ulong in_t3;
  ulong in_t4;
  ulong in_t6;
  long lStack0000000000000000;
  ulong uStack0000000000000008;
  ulong uStack0000000000000010;
  
  tp = 0x2000000000000;
  gp = 0x101800;
  uStack0000000000000008 = param_4 & 1;
  if ((in_t6 == 0) || ((in_t3 | in_t6) >> 0x20 == 0)) {
    Ram000300000000870d = 0;
    Ram00020000000001ff = 0;
    Ram000300000000870f = 0;
    Ram00020000000001ff = 0;
    Ram0003000000008711 = 0;
    Ram00020000000001ff = 0;
  }
  else {
    puVar7 = (undefined8 *)
             (((param_5 >> 1) + (in_t4 >> 0x28)) * 0x40 + CONCAT44(in_register_00002034,in_t1));
    Ram000300000000870d = *puVar7;
    Ram00020000000001ff = 0;
    Ram000300000000870f = puVar7;
    Ram00020000000001ff = 0;
    Ram0003000000008711 = in_t3 | in_t6;
    Ram00020000000001ff = 0;
  }
  lVar5 = Ram0003000000008711;
  if (lVar5 != 0) {
    Ram0002000000000000 = 0xc001b000;
    Ram0002000000000000 = in_t1;
    Ram0002000000000000 = in_register_00002034 | 0x4000000;
  }
  if (param_6 == 0) {
    iVar1 = Ram0002000000000302;
    uVar4 = Ram0002000000000302;
    lVar5 = Ram0002000000000302;
    iVar2 = Ram0002000000000302;
    iVar3 = Ram0002000000000302;
    uStack0000000000000010 = (long)(int)(param_2 >> 0x11) & 3;
    lStack0000000000000000 = (long)iVar3;
    FUN_000160d8(param_1,(long)iVar1,(lVar5 << 0x20 | uVar4) & 0xffffffffffff,(long)iVar2);
  }
  else {
    FUN_000159c0((long)param_3);
  }
  lVar5 = Ram0003000000008711;
  if (lVar5 != 0) {
    puVar7 = (undefined8 *)Ram000300000000870f;
    if (puVar7 != (undefined8 *)0x0) {
      uVar6 = Ram000300000000870d;
      *puVar7 = uVar6;
    }
    Ram0002000000000000 = 0xc001b000;
    Ram0002000000000000 = 0;
    Ram0002000000000000 = 0x4000000;
  }
  return;
}


