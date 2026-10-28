/* Decompiled by Ghidra x86:LE:16:Real Mode - vbios.rom */

/* ---- thunk_FUN_c000_6000 @ c000:0003 size=3 ---- */

undefined2 __cdecl16far thunk_FUN_c000_6000(void)

{
  undefined2 in_AX;
  int iVar1;
  undefined1 extraout_AH;
  int iVar2;
  undefined4 in_EDX;
  undefined2 uVar3;
  undefined4 in_EBX;
  int unaff_DI;
  undefined2 unaff_CS;
  undefined1 uVar4;
  
  uVar3 = (undefined2)((ulong)in_EBX >> 8);
  *(undefined2 *)0x14 = in_AX;
  *(undefined2 *)0x8 = unaff_CS;
  iVar2 = (int)((ulong)in_EDX >> 8);
  iVar1 = FUN_c000_7daa();
  if (iVar1 == 0) {
    *(undefined1 *)0x2 = 0;
    return in_AX;
  }
  FUN_c000_7edf();
  FUN_c000_7cb4();
  iVar2 = iVar2 << 8;
  uVar4 = 1;
  FUN_c000_7ca4();
  *(int *)(unaff_DI + 0x16) = iVar2;
  FUN_c000_6d30();
  FUN_c000_6cf6();
  FUN_c000_7bba();
  if ((bool)uVar4) {
    FUN_c000_6ed9();
    FUN_c000_6302();
    iVar1 = FUN_c000_7991();
    if (iVar1 != 0) {
      FUN_c000_6098();
      FUN_c000_a564();
      FUN_c000_6d08();
      FUN_c000_a5bf();
    }
  }
  FUN_c000_6114();
  FUN_c000_7cde();
  *(undefined4 *)0xdd16 =
       CONCAT31(CONCAT21(CONCAT11(extraout_AH,(char)((uint)uVar3 >> 8)),(char)uVar3),0x20);
  FUN_c000_635a();
  FUN_c000_6d3a();
  FUN_c000_7f22();
  return in_AX;
}


/* ---- FUN_c000_6000 @ c000:6000 size=152 ---- */

undefined2 __cdecl16far FUN_c000_6000(void)

{
  undefined2 in_AX;
  int iVar1;
  undefined1 extraout_AH;
  int iVar2;
  undefined4 in_EDX;
  undefined2 uVar3;
  undefined4 in_EBX;
  int unaff_DI;
  undefined2 unaff_CS;
  undefined1 uVar4;
  
  uVar3 = (undefined2)((ulong)in_EBX >> 8);
  *(undefined2 *)0x14 = in_AX;
  *(undefined2 *)0x8 = unaff_CS;
  iVar2 = (int)((ulong)in_EDX >> 8);
  iVar1 = FUN_c000_7daa();
  if (iVar1 == 0) {
    *(undefined1 *)0x2 = 0;
    return in_AX;
  }
  FUN_c000_7edf();
  FUN_c000_7cb4();
  iVar2 = iVar2 << 8;
  uVar4 = 1;
  FUN_c000_7ca4();
  *(int *)(unaff_DI + 0x16) = iVar2;
  FUN_c000_6d30();
  FUN_c000_6cf6();
  FUN_c000_7bba();
  if ((bool)uVar4) {
    FUN_c000_6ed9();
    FUN_c000_6302();
    iVar1 = FUN_c000_7991();
    if (iVar1 != 0) {
      FUN_c000_6098();
      FUN_c000_a564();
      FUN_c000_6d08();
      FUN_c000_a5bf();
    }
  }
  FUN_c000_6114();
  FUN_c000_7cde();
  *(undefined4 *)0xdd16 =
       CONCAT31(CONCAT21(CONCAT11(extraout_AH,(char)((uint)uVar3 >> 8)),(char)uVar3),0x20);
  FUN_c000_635a();
  FUN_c000_6d3a();
  FUN_c000_7f22();
  return in_AX;
}


/* ---- FUN_c000_6098 @ c000:6098 size=102 ---- */

void __cdecl16near FUN_c000_6098(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  uVar1 = DAT_c000_0008;
  if (*(int *)0x6110 == 0) {
    *(undefined2 *)0x610e = DAT_c000_0008;
  }
  uVar2 = DAT_c000_6106;
  *(undefined4 *)0x108 = 0xf000f065;
  *(undefined2 *)0x40 = 0x6134;
  *(undefined2 *)0x42 = uVar1;
  *(undefined2 *)0x1b4 = 0x6134;
  *(undefined2 *)0x1b6 = uVar1;
  *(undefined2 *)0x7c = 0xaaf8;
  *(undefined2 *)0x7e = uVar1;
  *(undefined2 *)0x10c = 0xaf0b;
  *(undefined2 *)0x10e = uVar1;
  *(undefined2 *)0x4a8 = 0xa52a;
  *(undefined2 *)0x4aa = uVar1;
  uVar2 = DAT_c000_610e;
  *(undefined2 *)0xa52c = uVar1;
  *(undefined2 *)0xa53c = uVar1;
  *(undefined2 *)0xa54e = uVar1;
  return;
}


/* ---- FUN_c000_6114 @ c000:6114 size=32 ---- */

void __cdecl16near FUN_c000_6114(void)

{
  undefined2 uVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int unaff_DI;
  undefined2 unaff_DS;
  
  FUN_c000_6d23();
  *(undefined2 *)0x1e = extraout_var;
  FUN_c000_6d23();
  uVar1 = FUN_c000_7ca4();
  *(undefined4 *)(unaff_DI + 0x18) = CONCAT22(extraout_var_00,uVar1);
  return;
}


/* ---- int10h_handler @ c000:6134 size=32 ---- */

void int10h_handler(void)

{
  char extraout_AH;
  
  FUN_c000_7efd();
  if (extraout_AH == -0x60) {
    FUN_c000_617c();
  }
  else if (extraout_AH == 'O') {
    FUN_c000_9442();
  }
  else {
    FUN_c000_99dc();
  }
  FUN_c000_7f22();
  return;
}


/* ---- FUN_c000_617c @ c000:617c size=380 ---- */

uint __cdecl16near FUN_c000_617c(void)

{
  byte in_AL;
  undefined1 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 extraout_var;
  uint extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 uVar4;
  undefined4 in_ECX;
  undefined2 in_DX;
  char cVar5;
  undefined4 in_EBX;
  long *plVar6;
  long *plVar7;
  undefined2 unaff_SS;
  bool bVar8;
  long alStack_20 [3];
  undefined4 local_14;
  undefined4 local_c;
  undefined2 local_8;
  
  plVar7 = alStack_20;
  plVar6 = alStack_20;
  local_8._0_1_ = in_AL;
  if (in_AL == 4) {
    FUN_c000_7ca4();
  }
  else if (in_AL == 5) {
    FUN_c000_7cde();
    FUN_c000_7cb4();
  }
  else if (in_AL == 6) {
    local_c = in_ECX;
    iVar2 = FUN_c000_6d0b();
    local_c = CONCAT22(local_c._2_2_,iVar2 << 1);
    uVar1 = FUN_c000_6d23();
    *(undefined1 *)(plVar6 + 6) = uVar1;
    uVar3 = FUN_c000_6d13();
    plVar6[3] = CONCAT22(extraout_var,uVar3);
    FUN_c000_6d23();
    *plVar6 = (ulong)extraout_var_00 << 0x10;
    FUN_c000_7caa();
    *(undefined2 *)(plVar6 + 4) = in_DX;
  }
  else if (in_AL == 0xb) {
    uVar1 = (char)in_EBX == '\0';
    if (!(bool)uVar1) {
      FUN_c000_62f8();
      FUN_c000_638c();
      if ((bool)uVar1) goto LAB_c000_62d8;
    }
  }
  else {
    bVar8 = in_AL == 0x17;
    if (bVar8) {
      FUN_c000_7087();
      if (!bVar8) {
        FUN_c000_6be7();
        FUN_c000_7585();
      }
      FUN_c000_697d();
      FUN_c000_6ce5();
    }
    else {
      cVar5 = (char)((ulong)in_EBX >> 8);
      if (in_AL == 0x18) {
        bVar8 = cVar5 == '\0';
        if (!bVar8) {
          FUN_c000_7087();
          iVar2 = (int)in_ECX;
          if (((bVar8) && (uVar3 = FUN_c000_7e9b(), CONCAT22(extraout_var_01,uVar3) != 0)) &&
             (uVar1 = iVar2 == 0, !(bool)uVar1)) {
            FUN_c000_706f();
            FUN_c000_6d50();
            if (!(bool)uVar1) {
              FUN_c000_6da9();
              FUN_c000_7033();
              goto LAB_c000_62e0;
            }
          }
LAB_c000_62d8:
          local_8 = CONCAT11(1,(byte)local_8);
          return local_8;
        }
        local_14 = in_EBX;
        uVar3 = FUN_c000_7033();
        uVar4 = (undefined2)in_ECX;
        local_14 = CONCAT22(local_14._2_2_,uVar3);
        FUN_c000_69db();
        *(undefined2 *)((int)plVar7 + 0x10) = uVar4;
      }
      else if ((in_AL == 0x82) && ((char)in_EBX == '\x05')) {
        bVar8 = cVar5 == '\0';
        if (bVar8) {
          FUN_c000_6f8f();
        }
        else {
          FUN_c000_6f76();
          if (bVar8) goto LAB_c000_62d0;
        }
      }
      else {
        if ((in_AL != 0x8e) || ((cVar5 != '\x01' && (cVar5 != '\x02')))) {
LAB_c000_62d0:
          local_8 = CONCAT11(2,(byte)local_8);
          return local_8;
        }
        FUN_c000_6fdb();
      }
    }
  }
LAB_c000_62e0:
  local_8 = (uint)(byte)local_8;
  return local_8;
}


/* ---- FUN_c000_62f8 @ c000:62f8 size=10 ---- */

int __cdecl16near FUN_c000_62f8(void)

{
  byte in_AL;
  
  return 1 << (in_AL & 0x1f);
}


/* ---- FUN_c000_6302 @ c000:6302 size=4 ---- */

void __cdecl16near FUN_c000_6302(void)

{
  FUN_c000_7f48();
  return;
}


/* ---- FUN_c000_635a @ c000:635a size=49 ---- */

void __cdecl16near FUN_c000_635a(void)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  undefined2 unaff_CS;
  
  if (0x80 < *(byte *)0x2) {
    *(undefined1 *)0x2 = 0x80;
  }
  iVar3 = (uint)*(byte *)0x2 << 9;
  bVar2 = 0;
  *(undefined1 *)0x21 = 0;
  pcVar4 = (char *)0x0;
  do {
    pcVar1 = pcVar4;
    pcVar4 = pcVar4 + 1;
    bVar2 = bVar2 + *pcVar1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(char *)0x21 = ~bVar2 + 1;
  return;
}


/* ---- FUN_c000_638c @ c000:638c size=49 ---- */

void __cdecl16near FUN_c000_638c(void)

{
  uint in_AX;
  uint uVar1;
  uint in_BX;
  bool bVar2;
  
  bVar2 = in_AX == 0;
  if (bVar2) {
    do {
      FUN_c000_6baf();
      if (bVar2) {
        return;
      }
      FUN_c000_63bd();
      bVar2 = (in_BX & 4) == 0;
    } while (bVar2);
  }
  else {
    uVar1 = FUN_c000_7991();
    if (((uVar1 & in_AX) == 0) || (FUN_c000_63bd(), (in_BX & 4) == 0)) {
      return;
    }
  }
  FUN_c000_6946();
  return;
}


/* ---- FUN_c000_63bd @ c000:63bd size=54 ---- */

undefined2 __cdecl16near FUN_c000_63bd(void)

{
  char cVar1;
  undefined2 in_AX;
  char in_CL;
  byte in_BL;
  bool bVar2;
  
  FUN_c000_6b91();
  FUN_c000_7902();
  if (in_CL != '\0') {
    cVar1 = FUN_c000_7635();
    if (cVar1 != '\0') goto LAB_c000_63ee;
    FUN_c000_659d();
    if ((in_BL & 4) == 0) goto LAB_c000_63ee;
  }
  cVar1 = FUN_c000_7e9b();
  bVar2 = cVar1 == '\0';
  if (!bVar2) {
    FUN_c000_686c();
    if (!bVar2) {
      FUN_c000_693c();
    }
  }
LAB_c000_63ee:
  FUN_c000_659d();
  return in_AX;
}


/* ---- FUN_c000_6453 @ c000:6453 size=132 ---- */

void __cdecl16near FUN_c000_6453(void)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int unaff_SI;
  bool bVar4;
  undefined1 uVar5;
  
  FUN_c000_6b91();
  uVar3 = unaff_SI + 0x1a4;
  uVar1 = FUN_c000_6546();
  if ((uVar1 & 0xfdd) == 0) {
    if ((uVar1 & 2) != 0) {
      FUN_c000_6577();
      FUN_c000_659d();
      FUN_c000_65ab();
      FUN_c000_7c2e();
      FUN_c000_6589();
      FUN_c000_65ab();
      FUN_c000_68d4();
    }
  }
  else {
    FUN_c000_659d();
    bVar4 = (uVar3 & 8) == 0;
    if (!bVar4) {
      uVar3 = unaff_SI + 0x28;
      FUN_c000_654d();
      if (bVar4) {
        FUN_c000_64d7();
        return;
      }
    }
    cVar2 = '\x02';
    FUN_c000_6577();
    FUN_c000_659d();
    uVar5 = (uVar3 & 4) == 0;
    if ((bool)uVar5) {
      FUN_c000_729e();
      FUN_c000_6589();
      return;
    }
    FUN_c000_65ab();
    FUN_c000_67f6();
    if (!(bool)uVar5) {
      cVar2 = '\x03';
      FUN_c000_6577();
    }
    FUN_c000_68d4();
    FUN_c000_6593();
    if (cVar2 == '\0') {
      FUN_c000_6589();
      return;
    }
  }
  return;
}


/* ---- FUN_c000_64d7 @ c000:64d7 size=56 ---- */

void __cdecl16near FUN_c000_64d7(void)

{
  uint in_BX;
  
  FUN_c000_6577();
  FUN_c000_6589();
  FUN_c000_659d();
  if ((in_BX & 4) == 0) {
    FUN_c000_729e();
    FUN_c000_650f();
    return;
  }
  FUN_c000_65ab();
  FUN_c000_655b();
  FUN_c000_650f();
  FUN_c000_68d4();
  return;
}


/* ---- FUN_c000_650f @ c000:650f size=15 ---- */

void __cdecl16near FUN_c000_650f(void)

{
  FUN_c000_7e3f();
  FUN_c000_6589();
  return;
}


/* ---- FUN_c000_651e @ c000:651e size=40 ---- */

void __cdecl16near FUN_c000_651e(void)

{
  uint uVar1;
  int unaff_SI;
  
  uVar1 = unaff_SI + 0x1a4;
  FUN_c000_6546();
  FUN_c000_659d();
  if ((uVar1 & 4) != 0) {
    FUN_c000_65ab();
    FUN_c000_6593();
    FUN_c000_6c8f();
    FUN_c000_7c3a();
  }
  FUN_c000_6453();
  return;
}


/* ---- FUN_c000_6546 @ c000:6546 size=7 ---- */

void __cdecl16near FUN_c000_6546(void)

{
  FUN_c000_7af2();
  return;
}


/* ---- FUN_c000_654d @ c000:654d size=14 ---- */

byte __cdecl16near FUN_c000_654d(void)

{
  byte bVar1;
  
  bVar1 = FUN_c000_7e9b();
  return bVar1 & 6;
}


/* ---- FUN_c000_655b @ c000:655b size=19 ---- */

void __cdecl16near FUN_c000_655b(void)

{
  int iVar1;
  undefined2 in_BX;
  
  iVar1 = FUN_c000_656e();
  if (iVar1 == 0x401) {
    FUN_c000_7e9b(in_BX);
  }
  return;
}


/* ---- FUN_c000_656e @ c000:656e size=9 ---- */

void __cdecl16near FUN_c000_656e(void)

{
  FUN_c000_7e9b();
  return;
}


/* ---- FUN_c000_6577 @ c000:6577 size=10 ---- */

void __cdecl16near FUN_c000_6577(void)

{
  FUN_c000_7e3f();
  return;
}


/* ---- FUN_c000_6581 @ c000:6581 size=8 ---- */

void __cdecl16near FUN_c000_6581(void)

{
  FUN_c000_7e9b();
  return;
}


/* ---- FUN_c000_6589 @ c000:6589 size=10 ---- */

void __cdecl16near FUN_c000_6589(void)

{
  FUN_c000_7e3f();
  return;
}


/* ---- FUN_c000_6593 @ c000:6593 size=10 ---- */

void __cdecl16near FUN_c000_6593(void)

{
  FUN_c000_7e57();
  return;
}


/* ---- FUN_c000_659d @ c000:659d size=14 ---- */

undefined2 __cdecl16near FUN_c000_659d(void)

{
  undefined2 in_AX;
  
  FUN_c000_7e9b();
  return in_AX;
}


/* ---- FUN_c000_65ab @ c000:65ab size=224 ---- */

void __cdecl16near FUN_c000_65ab(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  byte extraout_var;
  int iVar4;
  uint extraout_DX;
  int iVar5;
  undefined2 unaff_DS;
  
  iVar4 = 8;
  do {
    FUN_c000_7e9b();
    FUN_c000_67a4();
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uVar2 = FUN_c000_7e9b();
  iVar4 = 3;
  iVar5 = 0x668b;
  do {
    if ((*(uint *)(iVar5 + 6) & uVar2) != 0) {
      FUN_c000_7dfb();
      FUN_c000_7e13();
      uVar2 = extraout_DX;
    }
    iVar5 = iVar5 + 8;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = 4;
  uVar2 = 0;
  do {
    iVar5 = FUN_c000_7e9b();
    if (iVar5 != 0) {
      FUN_c000_6763();
      FUN_c000_66a3();
      uVar2 = uVar2 + 0x1c;
    }
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  FUN_c000_6589();
  iVar4 = FUN_c000_656e();
  if (iVar4 == 0x401) {
    FUN_c000_7e9b();
    FUN_c000_6589();
  }
  cVar1 = FUN_c000_7e9b();
  if (((cVar1 != '\0') && (cVar1 = FUN_c000_7e9b(), cVar1 == '\x02')) && (3 < extraout_var)) {
    iVar4 = 4;
    do {
      iVar5 = FUN_c000_7e9b();
      if ((iVar5 != 0) && (uVar3 = FUN_c000_6763(), (uVar3 & 0x80) == 0)) {
        FUN_c000_66a3();
        uVar2 = uVar2 + 0x1c;
        if (0x6f < uVar2) {
          return;
        }
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}


/* ---- FUN_c000_66a3 @ c000:66a3 size=160 ---- */

void __cdecl16near FUN_c000_66a3(void)

{
  FUN_c000_7e9b();
  FUN_c000_7e13();
  FUN_c000_7dfb();
  FUN_c000_7e9b();
  FUN_c000_6743();
  FUN_c000_7e9b();
  FUN_c000_6743();
  FUN_c000_7e9b();
  FUN_c000_7e13();
  FUN_c000_7e13();
  FUN_c000_7e13();
  FUN_c000_7e13();
  FUN_c000_7e9b();
  FUN_c000_7e13();
  return;
}


/* ---- FUN_c000_6743 @ c000:6743 size=32 ---- */

void __cdecl16near FUN_c000_6743(void)

{
  FUN_c000_7e13();
  FUN_c000_7e13();
  return;
}


/* ---- FUN_c000_6763 @ c000:6763 size=65 ---- */

void __cdecl16near FUN_c000_6763(void)

{
  FUN_c000_7e9b();
  FUN_c000_7e13();
  return;
}


/* ---- FUN_c000_67a4 @ c000:67a4 size=66 ---- */

void __cdecl16near FUN_c000_67a4(void)

{
  char in_AL;
  
  if (in_AL != '\x01') {
    FUN_c000_7e13();
    FUN_c000_7e13();
    FUN_c000_7e13();
  }
  return;
}


/* ---- FUN_c000_67f6 @ c000:67f6 size=45 ---- */

void __cdecl16near FUN_c000_67f6(void)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 extraout_var;
  undefined2 in_CX;
  int iVar3;
  int unaff_SI;
  
  cVar1 = FUN_c000_7e9b();
  if (cVar1 != '\0') {
    iVar3 = unaff_SI + 0xa8;
    FUN_c000_6823(in_CX);
    if (iVar3 != 0) {
      uVar2 = FUN_c000_7e9b();
      if (CONCAT22(extraout_var,uVar2) >> 8 == 0xc03) {
        return;
      }
    }
  }
  return;
}


/* ---- FUN_c000_6823 @ c000:6823 size=73 ---- */

undefined4 __cdecl16near FUN_c000_6823(void)

{
  undefined1 uVar1;
  undefined2 in_AX;
  undefined2 uVar2;
  uint uVar3;
  uint extraout_var;
  byte in_CL;
  undefined2 in_DX;
  uint extraout_DX;
  int in_BX;
  uint uVar4;
  
  uVar2 = FUN_c000_7e9b();
  if ((((char)uVar2 == '\x02') && (2 < (byte)((uint)uVar2 >> 8))) && (4 < (byte)extraout_var)) {
    uVar3 = (extraout_var & 0xff) + in_BX;
    uVar4 = in_BX + 4;
    while (uVar4 < uVar3) {
      uVar1 = FUN_c000_7e9b();
      uVar3 = CONCAT11(uVar1,uVar1) & 0xe0ff;
      if ((byte)(uVar3 >> 0xd) == in_CL) {
        return CONCAT22(in_DX,in_AX);
      }
      uVar4 = uVar4 + (byte)(((byte)uVar3 & 0x1f) + 1);
      uVar3 = extraout_DX;
    }
  }
  return CONCAT22(in_DX,in_AX);
}


/* ---- FUN_c000_686c @ c000:686c size=45 ---- */

uint __cdecl16near FUN_c000_686c(void)

{
  uint uVar1;
  uint extraout_var;
  bool bVar2;
  
  uVar1 = FUN_c000_7e9b();
  bVar2 = (char)uVar1 == '\0';
  if ((!bVar2) && (uVar1 = FUN_c000_6899(), !bVar2)) {
    FUN_c000_7e9b();
    uVar1 = extraout_var & 0x7ff;
    if ((char)(uVar1 >> 8) == '\0') {
      return 1;
    }
  }
  return uVar1 & 0xff00;
}


/* ---- FUN_c000_6899 @ c000:6899 size=59 ---- */

undefined4 __cdecl16near FUN_c000_6899(void)

{
  char cVar1;
  undefined2 in_AX;
  uint uVar2;
  uint extraout_var;
  uint extraout_var_00;
  char in_CL;
  undefined2 in_DX;
  uint extraout_DX;
  int in_BX;
  uint uVar3;
  
  cVar1 = FUN_c000_7e9b();
  if (cVar1 == 'p') {
    uVar3 = in_BX + 5;
    uVar2 = (extraout_var & 0xff) + uVar3;
    for (; uVar3 < uVar2; uVar3 = uVar3 + (extraout_var_00 & 0xff) + 3) {
      cVar1 = FUN_c000_7e9b();
      if (cVar1 == in_CL) {
        return CONCAT22(in_DX,in_AX);
      }
      uVar2 = extraout_DX;
    }
  }
  return CONCAT22(in_DX,in_AX);
}


/* ---- FUN_c000_68d4 @ c000:68d4 size=33 ---- */

void __cdecl16near FUN_c000_68d4(void)

{
  uint uVar1;
  ulong in_ECX;
  
  while( true ) {
    uVar1 = (uint)in_ECX;
    FUN_c000_691f();
    in_ECX = (ulong)uVar1;
    if (uVar1 == 0) break;
    FUN_c000_754c();
  }
  return;
}


/* ---- FUN_c000_68f5 @ c000:68f5 size=31 ---- */

undefined2 __cdecl16near FUN_c000_68f5(void)

{
  undefined2 in_AX;
  int iVar1;
  
  iVar1 = FUN_c000_7e9b();
  if (iVar1 != 0) {
    FUN_c000_7b07();
  }
  return in_AX;
}


/* ---- FUN_c000_6914 @ c000:6914 size=11 ---- */

void __cdecl16near FUN_c000_6914(void)

{
  FUN_c000_7b20();
  return;
}


/* ---- FUN_c000_691f @ c000:691f size=29 ---- */

undefined2 __cdecl16near FUN_c000_691f(void)

{
  undefined2 in_AX;
  undefined2 in_BX;
  
  FUN_c000_7e9b();
  FUN_c000_7e9b(in_BX);
  return in_AX;
}


/* ---- FUN_c000_693c @ c000:693c size=10 ---- */

void __cdecl16near FUN_c000_693c(void)

{
  FUN_c000_7e3f();
  return;
}


/* ---- FUN_c000_6946 @ c000:6946 size=9 ---- */

void __cdecl16near FUN_c000_6946(void)

{
  FUN_c000_7b2c();
  return;
}


/* ---- FUN_c000_694f @ c000:694f size=24 ---- */

void __cdecl16near FUN_c000_694f(void)

{
  FUN_c000_696d();
  FUN_c000_7e9b();
  return;
}


/* ---- FUN_c000_6967 @ c000:6967 size=6 ---- */

void __cdecl16near FUN_c000_6967(void)

{
  FUN_c000_6973();
  return;
}


/* ---- FUN_c000_696d @ c000:696d size=6 ---- */

void __cdecl16near FUN_c000_696d(void)

{
  FUN_c000_6973();
  return;
}


/* ---- FUN_c000_6973 @ c000:6973 size=10 ---- */

void __cdecl16near FUN_c000_6973(void)

{
  FUN_c000_7e57();
  return;
}


/* ---- FUN_c000_697d @ c000:697d size=68 ---- */

void __cdecl16near FUN_c000_697d(void)

{
  uint uVar1;
  undefined2 uVar2;
  byte in_BL;
  bool bVar3;
  undefined1 uVar4;
  
  bVar3 = true;
  FUN_c000_7bba();
  if (bVar3) {
    FUN_c000_6ccc();
    uVar4 = 1;
    while( true ) {
      uVar1 = FUN_c000_6baf();
      if ((bool)uVar4) break;
      uVar4 = (uVar1 & 0xfdd) == 0;
      if (!(bool)uVar4) {
        FUN_c000_63bd();
        uVar4 = (in_BL & 4) == 0;
        if ((!(bool)uVar4) || (uVar4 = (in_BL & 0x18) == 0, !(bool)uVar4)) {
          uVar2 = FUN_c000_69cb();
          FUN_c000_6453(uVar2);
        }
      }
    }
    FUN_c000_69c1();
    if ((bool)uVar4) {
      FUN_c000_69db();
      FUN_c000_6453();
    }
  }
  return;
}


/* ---- FUN_c000_69c1 @ c000:69c1 size=10 ---- */

undefined2 __cdecl16near FUN_c000_69c1(void)

{
  undefined2 in_AX;
  
  FUN_c000_6ce5();
  return in_AX;
}


/* ---- FUN_c000_69cb @ c000:69cb size=16 ---- */

void __cdecl16near FUN_c000_69cb(void)

{
  FUN_c000_6ccc();
  return;
}


/* ---- FUN_c000_69db @ c000:69db size=37 ---- */

undefined4 __cdecl16near FUN_c000_69db(void)

{
  undefined2 in_AX;
  int in_CX;
  undefined2 in_DX;
  undefined1 in_ZF;
  
  FUN_c000_69c1();
  if ((bool)in_ZF) {
    FUN_c000_6baf();
  }
  else if (in_CX != 2) {
    FUN_c000_7106();
  }
  return CONCAT22(in_DX,in_AX);
}


/* ---- FUN_c000_6a00 @ c000:6a00 size=32 ---- */

void __cdecl16near FUN_c000_6a00(void)

{
  int iVar1;
  
  FUN_c000_7042();
  iVar1 = FUN_c000_6bbc();
  if (iVar1 != 0) {
    FUN_c000_6a20();
  }
  FUN_c000_7033();
  return;
}


/* ---- FUN_c000_6a20 @ c000:6a20 size=125 ---- */

void __cdecl16near FUN_c000_6a20(void)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 in_ECX;
  int unaff_SI;
  long lVar5;
  
  FUN_c000_6b91();
  FUN_c000_6cbb();
  FUN_c000_6afa();
  FUN_c000_6ab0();
  cVar1 = FUN_c000_7e9b();
  if (cVar1 != (char)((ulong)in_ECX >> 8)) {
    FUN_c000_7dfb();
    FUN_c000_6cbb();
  }
  FUN_c000_6ac3();
  uVar2 = FUN_c000_7e9b(in_ECX);
  lVar5 = CONCAT22(extraout_var,uVar2);
  iVar3 = unaff_SI + 0x2d0;
  uVar2 = FUN_c000_7e9b();
  if (CONCAT22(extraout_var_00,uVar2) == lVar5) {
    iVar3 = FUN_c000_7e9b(iVar3);
    iVar4 = FUN_c000_7e9b();
    if (iVar4 == iVar3) goto LAB_c000_6a7f;
  }
  FUN_c000_6cbb();
LAB_c000_6a7f:
  FUN_c000_68f5();
  FUN_c000_6c86();
  FUN_c000_7042();
  return;
}


/* ---- FUN_c000_6ab0 @ c000:6ab0 size=19 ---- */

undefined2 __cdecl16near FUN_c000_6ab0(void)

{
  undefined2 in_AX;
  
  FUN_c000_7e9b();
  FUN_c000_7dfb();
  return in_AX;
}


/* ---- FUN_c000_6ac3 @ c000:6ac3 size=13 ---- */

void __cdecl16near FUN_c000_6ac3(void)

{
  FUN_c000_7e9b();
  FUN_c000_7dfb();
  return;
}


/* ---- FUN_c000_6ad0 @ c000:6ad0 size=42 ---- */

undefined2 __cdecl16near FUN_c000_6ad0(void)

{
  qword qVar1;
  uint uVar2;
  byte in_CL;
  ulong in_EDX;
  undefined1 in_BH;
  
  uVar2 = (in_CL + 2) * 6;
  qVar1 = (qword)in_EDX * (qword)CONCAT11((char)(uVar2 >> 8),in_BH);
  return (int)((qVar1 & 0xffffffff00000000 | (qword)(ulong)((long)qVar1 << 3)) / (qword)uVar2);
}


/* ---- FUN_c000_6afa @ c000:6afa size=36 ---- */

void __cdecl16near FUN_c000_6afa(void)

{
  FUN_c000_6c46();
  FUN_c000_6c3b();
  FUN_c000_7e9b();
  FUN_c000_7e9b();
  FUN_c000_7761();
  return;
}


/* ---- FUN_c000_6b1e @ c000:6b1e size=115 ---- */

void __cdecl16near FUN_c000_6b1e(void)

{
  char cVar1;
  undefined4 in_ECX;
  undefined2 in_BX;
  undefined1 in_ZF;
  
  cVar1 = (char)((ulong)in_ECX >> 8);
  FUN_c000_6afa();
  FUN_c000_6c3b();
  FUN_c000_7789();
  if (!(bool)in_ZF) {
    if (cVar1 == '\0') {
      FUN_c000_694f(in_BX);
      FUN_c000_6593();
      FUN_c000_6967();
      FUN_c000_6ad0();
      FUN_c000_7e9b();
    }
    else if (cVar1 == '\x02') {
      FUN_c000_6c8f();
      FUN_c000_7e9b();
    }
    else if (cVar1 == '\x03') {
      FUN_c000_6c3b(in_BX);
      FUN_c000_7740();
      FUN_c000_7e9b();
    }
  }
  return;
}


/* ---- FUN_c000_6b91 @ c000:6b91 size=21 ---- */

void __cdecl16near FUN_c000_6b91(void)

{
  uint in_AX;
  uint uVar1;
  
  uVar1 = FUN_c000_7991();
  if ((in_AX & uVar1) != 0) {
    FUN_c000_77d7();
  }
  return;
}


/* ---- FUN_c000_6ba6 @ c000:6ba6 size=9 ---- */

void __cdecl16near FUN_c000_6ba6(void)

{
  FUN_c000_69db();
  FUN_c000_6bbc();
  return;
}


/* ---- FUN_c000_6baf @ c000:6baf size=13 ---- */

void __cdecl16near FUN_c000_6baf(void)

{
  FUN_c000_7991();
  FUN_c000_6bbc();
  return;
}


/* ---- FUN_c000_6bbc @ c000:6bbc size=43 ---- */

uint __cdecl16near FUN_c000_6bbc(void)

{
  uint *puVar1;
  uint uVar2;
  uint in_CX;
  uint *unaff_DI;
  undefined2 unaff_DS;
  
  uVar2 = FUN_c000_79db();
  if (uVar2 != 0) {
    do {
      puVar1 = unaff_DI;
      unaff_DI = unaff_DI + 1;
    } while (uVar2 != *puVar1);
  }
  do {
    uVar2 = *unaff_DI;
    if (uVar2 == 0xffff) {
      return 0;
    }
    unaff_DI = unaff_DI + 1;
  } while ((in_CX & uVar2) == 0);
  return uVar2;
}


/* ---- FUN_c000_6be7 @ c000:6be7 size=36 ---- */

void __cdecl16near FUN_c000_6be7(void)

{
  int unaff_SI;
  undefined1 uVar1;
  
  uVar1 = 1;
  while( true ) {
    FUN_c000_6baf();
    if ((bool)uVar1) break;
    FUN_c000_6b91();
    FUN_c000_7af2();
    unaff_SI = unaff_SI + 8;
    uVar1 = unaff_SI == 0;
    FUN_c000_7941();
  }
  FUN_c000_7e13();
  return;
}


/* ---- FUN_c000_6c1b @ c000:6c1b size=16 ---- */

undefined2 __cdecl16near FUN_c000_6c1b(void)

{
  undefined2 in_AX;
  
  FUN_c000_7e9b();
  return in_AX;
}


/* ---- FUN_c000_6c3b @ c000:6c3b size=11 ---- */

void __cdecl16near FUN_c000_6c3b(void)

{
  FUN_c000_7e9b();
  return;
}


/* ---- FUN_c000_6c46 @ c000:6c46 size=15 ---- */

undefined4 __cdecl16near FUN_c000_6c46(void)

{
  undefined2 in_AX;
  undefined2 uVar1;
  
  uVar1 = FUN_c000_7e9b();
  return CONCAT22(uVar1,in_AX);
}


/* ---- FUN_c000_6c86 @ c000:6c86 size=9 ---- */

void __cdecl16near FUN_c000_6c86(void)

{
  FUN_c000_7e9b();
  return;
}


/* ---- FUN_c000_6c8f @ c000:6c8f size=15 ---- */

undefined4 __cdecl16near FUN_c000_6c8f(void)

{
  undefined2 in_AX;
  undefined2 uVar1;
  
  uVar1 = FUN_c000_7e9b();
  return CONCAT22(uVar1,in_AX);
}


/* ---- FUN_c000_6c9e @ c000:6c9e size=7 ---- */

void __cdecl16near FUN_c000_6c9e(void)

{
  FUN_c000_7e9b();
  return;
}


/* ---- FUN_c000_6ca5 @ c000:6ca5 size=11 ---- */

void __cdecl16near FUN_c000_6ca5(void)

{
  FUN_c000_7e3f();
  return;
}


/* ---- FUN_c000_6cbb @ c000:6cbb size=17 ---- */

void __cdecl16near FUN_c000_6cbb(void)

{
  FUN_c000_6c9e();
  FUN_c000_6ca5();
  return;
}


/* ---- FUN_c000_6ccc @ c000:6ccc size=25 ---- */

undefined2 __cdecl16near FUN_c000_6ccc(void)

{
  undefined2 in_AX;
  
  FUN_c000_77b3();
  FUN_c000_77bc();
  return in_AX;
}


/* ---- FUN_c000_6ce5 @ c000:6ce5 size=13 ---- */

uint __cdecl16near FUN_c000_6ce5(void)

{
  uint uVar1;
  
  uVar1 = FUN_c000_77b3();
  return uVar1 & 0xfdf;
}


/* ---- FUN_c000_6cf2 @ c000:6cf2 size=4 ---- */

void __cdecl16near FUN_c000_6cf2(void)

{
  return;
}


/* ---- FUN_c000_6cf6 @ c000:6cf6 size=18 ---- */

void __cdecl16near FUN_c000_6cf6(void)

{
  undefined1 in_ZF;
  
  FUN_c000_7ad6();
  FUN_c000_7a67();
  FUN_c000_7a48();
  if ((bool)in_ZF) {
    FUN_c000_79a3();
    FUN_c000_7a54();
  }
  return;
}


/* ---- FUN_c000_6d08 @ c000:6d08 size=3 ---- */

undefined1 __cdecl16near FUN_c000_6d08(void)

{
  return 1;
}


/* ---- FUN_c000_6d0b @ c000:6d0b size=8 ---- */

void __cdecl16near FUN_c000_6d0b(void)

{
  FUN_c000_7c4e();
  return;
}


/* ---- FUN_c000_6d13 @ c000:6d13 size=16 ---- */

undefined2 __cdecl16near FUN_c000_6d13(void)

{
  FUN_c000_6d23();
  return 0;
}


/* ---- FUN_c000_6d23 @ c000:6d23 size=13 ---- */

void __cdecl16near FUN_c000_6d23(void)

{
  FUN_c000_7c4e();
  return;
}


/* ---- FUN_c000_6d30 @ c000:6d30 size=10 ---- */

void __cdecl16near FUN_c000_6d30(void)

{
  FUN_c000_7b98();
  FUN_c000_77bc();
  return;
}


/* ---- FUN_c000_6d3a @ c000:6d3a size=22 ---- */

void __cdecl16near FUN_c000_6d3a(void)

{
  FUN_c000_77b3();
  FUN_c000_7b98();
  FUN_c000_77bc();
  return;
}


/* ---- FUN_c000_6d50 @ c000:6d50 size=44 ---- */

uint __cdecl16near FUN_c000_6d50(void)

{
  uint uVar1;
  undefined4 in_ECX;
  
  uVar1 = FUN_c000_6d7c();
  if ((int)in_ECX != 0) {
    FUN_c000_6a00();
    FUN_c000_7511();
    FUN_c000_77b3(in_ECX);
    uVar1 = FUN_c000_77bc();
    return uVar1 | 1;
  }
  return uVar1 & 0xff00;
}


/* ---- FUN_c000_6d7c @ c000:6d7c size=45 ---- */

uint __cdecl16near FUN_c000_6d7c(void)

{
  uint uVar1;
  uint in_CX;
  uint uVar2;
  undefined1 uVar3;
  
  FUN_c000_705f();
  if (in_CX == 0) {
    FUN_c000_69db();
    FUN_c000_706f();
  }
  uVar2 = in_CX;
  FUN_c000_69db();
  uVar3 = 1;
  while( true ) {
    FUN_c000_6ba6();
    if ((bool)uVar3) break;
    uVar1 = FUN_c000_7119();
    if ((bool)uVar3) {
      uVar2 = uVar2 ^ uVar1;
      uVar3 = uVar2 == 0;
    }
  }
  return in_CX;
}


/* ---- FUN_c000_6da9 @ c000:6da9 size=300 ---- */

void __cdecl16near FUN_c000_6da9(void)

{
  byte bVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  ulong in_EAX;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined4 uVar5;
  uint in_CX;
  undefined4 in_EBX;
  undefined1 uVar6;
  undefined2 extraout_var_05;
  
  FUN_c000_77bc();
  if ((in_EAX & 0x10) == 0) {
    FUN_c000_7523();
    uVar6 = 1;
LAB_c000_6dcc:
    while( true ) {
      uVar2 = FUN_c000_6baf();
      if ((bool)uVar6) break;
      uVar3 = FUN_c000_6b91();
      uVar4 = FUN_c000_7033(in_CX);
      if ((uVar3 & uVar4) == 0) goto LAB_c000_6dee;
      bVar1 = FUN_c000_6c9e();
      uVar6 = (bVar1 & 3) == 3;
      if ((bool)uVar6) goto LAB_c000_6dfa;
    }
    FUN_c000_77bc(in_EBX,CONCAT22(extraout_var,uVar2));
    FUN_c000_7033();
    FUN_c000_6b91();
    uVar2 = FUN_c000_6fa3();
    FUN_c000_77bc(in_EBX,CONCAT22(extraout_var_00,uVar2));
    FUN_c000_75d2();
    uVar3 = FUN_c000_751c();
    if ((uVar3 & 0x20) != 0) {
      return;
    }
    if ((uVar3 & 0x40) == 0) {
      FUN_c000_77bc(in_EBX,CONCAT22(extraout_var_01,uVar3));
      FUN_c000_76cc();
    }
  }
  uVar2 = FUN_c000_7511();
  uVar6 = (char)uVar2 == '\0';
  if ((bool)uVar6) {
    FUN_c000_77bc(in_EBX,CONCAT31((int3)(CONCAT22(extraout_var_02,uVar2) >> 8),(char)uVar2));
  }
  FUN_c000_7033();
  FUN_c000_6b91();
  FUN_c000_6c8f();
  FUN_c000_6cf2();
  if ((bool)uVar6) {
    uVar2 = FUN_c000_7106();
    if ((char)in_EBX != '\0') {
      FUN_c000_77bc(in_EBX,CONCAT22(extraout_var_03,uVar2));
      FUN_c000_6ab0();
      FUN_c000_7616();
      uVar2 = FUN_c000_6ca5();
      uVar5 = CONCAT22(extraout_var_04,uVar2);
      goto LAB_c000_6ebd;
    }
  }
  FUN_c000_75f3();
  uVar2 = FUN_c000_6ca5();
  uVar5 = CONCAT22(extraout_var_05,uVar2);
LAB_c000_6ebd:
  FUN_c000_77bc(in_EBX,uVar5);
  FUN_c000_6fa9();
  return;
LAB_c000_6dee:
  uVar3 = FUN_c000_6c9e();
  uVar6 = (uVar3 & 1) == 0;
  if (!(bool)uVar6) {
    FUN_c000_6ab0();
LAB_c000_6dfa:
    bVar1 = (byte)in_CX;
    FUN_c000_7616();
    in_CX = (uint)bVar1;
    FUN_c000_6ca5();
  }
  goto LAB_c000_6dcc;
}


/* ---- FUN_c000_6ed9 @ c000:6ed9 size=66 ---- */

undefined2 __cdecl16near FUN_c000_6ed9(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  
  FUN_c000_6be7();
  FUN_c000_7585();
  FUN_c000_706f();
  FUN_c000_6ccc();
  iVar1 = FUN_c000_7991();
  if (iVar1 != 0) {
    FUN_c000_7680();
    FUN_c000_6f4c();
    FUN_c000_6f76();
    uVar3 = 1;
    while( true ) {
      FUN_c000_6baf();
      if ((bool)uVar3) break;
      uVar2 = FUN_c000_6b91();
      FUN_c000_7634(uVar2);
    }
  }
  FUN_c000_70bb();
  uVar2 = FUN_c000_7991();
  return uVar2;
}


/* ---- FUN_c000_6f1b @ c000:6f1b size=49 ---- */

void __cdecl16near FUN_c000_6f1b(void)

{
  undefined2 uVar1;
  undefined2 in_CX;
  undefined1 uVar2;
  
  FUN_c000_6be7();
  FUN_c000_7585();
  FUN_c000_7042();
  FUN_c000_70a1(in_CX);
  FUN_c000_7693();
  uVar2 = 1;
  while( true ) {
    FUN_c000_6baf();
    if ((bool)uVar2) break;
    uVar1 = FUN_c000_6b91();
    FUN_c000_7625(uVar1);
  }
  FUN_c000_7651();
  return;
}


/* ---- FUN_c000_6f4c @ c000:6f4c size=42 ---- */

void __cdecl16near FUN_c000_6f4c(void)

{
  byte in_BL;
  undefined1 in_ZF;
  
  FUN_c000_6b91();
  if (!(bool)in_ZF) {
    FUN_c000_63bd();
    if ((in_BL & 4) == 0) {
      FUN_c000_7991();
      FUN_c000_799a();
      return;
    }
    FUN_c000_6ccc();
    FUN_c000_651e();
  }
  return;
}


/* ---- FUN_c000_6f76 @ c000:6f76 size=23 ---- */

byte __cdecl16near FUN_c000_6f76(void)

{
  byte bVar1;
  undefined1 in_ZF;
  
  bVar1 = FUN_c000_77c5();
  if (!(bool)in_ZF) {
    FUN_c000_77b3();
    FUN_c000_77bc();
    bVar1 = FUN_c000_7669();
    return bVar1 | 1;
  }
  return bVar1;
}


/* ---- FUN_c000_6f8f @ c000:6f8f size=20 ---- */

undefined2 __cdecl16near FUN_c000_6f8f(void)

{
  undefined1 uVar1;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  undefined1 uVar2;
  undefined1 in_ZF;
  
  uVar1 = FUN_c000_77c5();
  uVar2 = extraout_AH;
  if (!(bool)in_ZF) {
    FUN_c000_77b3();
    uVar1 = extraout_AH_00;
  }
  return CONCAT11(uVar2,uVar1);
}


/* ---- FUN_c000_6fa3 @ c000:6fa3 size=6 ---- */

void __cdecl16near FUN_c000_6fa3(void)

{
  FUN_c000_75b0();
  return;
}


/* ---- FUN_c000_6fa9 @ c000:6fa9 size=6 ---- */

void __cdecl16near FUN_c000_6fa9(void)

{
  FUN_c000_75b0();
  return;
}


/* ---- FUN_c000_6faf @ c000:6faf size=44 ---- */

void __cdecl16near FUN_c000_6faf(void)

{
  undefined2 in_CX;
  undefined1 in_ZF;
  
  FUN_c000_7bba();
  if ((bool)in_ZF) {
    FUN_c000_7033();
    FUN_c000_6b91();
    if ((char)in_CX != '\x01') {
      FUN_c000_6fa3();
      FUN_c000_7625(in_CX);
      FUN_c000_6ca5();
      return;
    }
    FUN_c000_75f3(in_CX);
    FUN_c000_6ca5();
    FUN_c000_6fa9();
  }
  return;
}


/* ---- FUN_c000_6fdb @ c000:6fdb size=12 ---- */

void __cdecl16near FUN_c000_6fdb(void)

{
  undefined1 in_ZF;
  
  FUN_c000_6b91();
  if (!(bool)in_ZF) {
    FUN_c000_765b();
  }
  return;
}


/* ---- FUN_c000_6fe7 @ c000:6fe7 size=63 ---- */

undefined2 __cdecl16near FUN_c000_6fe7(void)

{
  byte bVar1;
  int iVar2;
  undefined2 uVar3;
  byte bVar4;
  int in_CX;
  
  iVar2 = FUN_c000_74b0();
  if (in_CX <= iVar2) {
    FUN_c000_74f9();
    FUN_c000_7731();
    FUN_c000_7532();
    FUN_c000_74f9();
    FUN_c000_7731();
    FUN_c000_7e13();
    bVar4 = 0;
    do {
      bVar1 = FUN_c000_7aec();
      bVar4 = bVar4 + 1;
    } while (bVar4 < bVar1);
    uVar3 = FUN_c000_7e9b();
    return uVar3;
  }
  return 0;
}


/* ---- FUN_c000_7033 @ c000:7033 size=15 ---- */

uint __cdecl16near FUN_c000_7033(void)

{
  uint uVar1;
  
  uVar1 = FUN_c000_77b3();
  return uVar1 & 0xfff;
}


/* ---- FUN_c000_7042 @ c000:7042 size=29 ---- */

undefined2 __cdecl16near FUN_c000_7042(void)

{
  undefined2 in_AX;
  
  FUN_c000_77b3();
  FUN_c000_77bc();
  return in_AX;
}


/* ---- FUN_c000_705f @ c000:705f size=16 ---- */

undefined2 __cdecl16near FUN_c000_705f(void)

{
  undefined2 in_AX;
  
  FUN_c000_77b3();
  return in_AX;
}


/* ---- FUN_c000_706f @ c000:706f size=24 ---- */

undefined2 __cdecl16near FUN_c000_706f(void)

{
  undefined2 uVar1;
  
  uVar1 = FUN_c000_7991();
  FUN_c000_77b3();
  FUN_c000_77bc();
  return uVar1;
}


/* ---- FUN_c000_7087 @ c000:7087 size=26 ---- */

undefined2 __cdecl16near FUN_c000_7087(void)

{
  undefined2 in_AX;
  uint uVar1;
  
  uVar1 = FUN_c000_77b3();
  if ((uVar1 & 0x10) == 0) {
    FUN_c000_7e9b();
  }
  return in_AX;
}


/* ---- FUN_c000_70a1 @ c000:70a1 size=26 ---- */

undefined2 __cdecl16near FUN_c000_70a1(void)

{
  undefined2 in_AX;
  
  FUN_c000_77b3();
  FUN_c000_77bc();
  return in_AX;
}


/* ---- FUN_c000_70bb @ c000:70bb size=18 ---- */

undefined2 __cdecl16near FUN_c000_70bb(void)

{
  undefined2 in_AX;
  
  FUN_c000_7e9b();
  FUN_c000_7dfb();
  return in_AX;
}


/* ---- FUN_c000_70cd @ c000:70cd size=12 ---- */

uint __cdecl16near FUN_c000_70cd(void)

{
  uint uVar1;
  
  uVar1 = FUN_c000_7e9b();
  return uVar1 & 1;
}


/* ---- FUN_c000_70d9 @ c000:70d9 size=22 ---- */

undefined2 __cdecl16near FUN_c000_70d9(void)

{
  uint uVar1;
  undefined2 uVar2;
  undefined4 in_EAX;
  undefined3 uVar3;
  
  uVar1 = FUN_c000_77b3();
  uVar3 = (undefined3)((ulong)in_EAX >> 8);
  uVar2 = (undefined2)CONCAT31(uVar3,6);
  if ((uVar1 & 0x100) != 0) {
    uVar2 = (undefined2)CONCAT31(uVar3,8);
  }
  return uVar2;
}


/* ---- FUN_c000_70ef @ c000:70ef size=23 ---- */

void __cdecl16near FUN_c000_70ef(void)

{
  FUN_c000_77b3();
  FUN_c000_77bc();
  return;
}


/* ---- FUN_c000_7106 @ c000:7106 size=18 ---- */

undefined2 __cdecl16near FUN_c000_7106(void)

{
  undefined2 in_AX;
  
  FUN_c000_77b3();
  return in_AX;
}


/* ---- FUN_c000_7119 @ c000:7119 size=253 ---- */

undefined2 __cdecl16near FUN_c000_7119(void)

{
  uint uVar1;
  char cVar2;
  undefined2 in_AX;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  ulong in_ECX;
  ulong uVar6;
  int unaff_SI;
  uint uVar7;
  undefined2 unaff_DS;
  bool bVar8;
  undefined1 uVar9;
  ulong uStack_a;
  
  FUN_c000_6b91();
  uStack_a = 0;
  uVar6 = 0;
  uVar7 = unaff_SI + 0x1c0;
  do {
    iVar3 = FUN_c000_7e9b();
    bVar8 = iVar3 == 0;
    if (bVar8) {
      if ((int)uVar6 == 0) {
        uStack_a = 0;
        uVar6 = 0;
        while (uVar7 = FUN_c000_7e9b(), uVar7 != 0) {
          cVar2 = FUN_c000_6581();
          uVar9 = cVar2 == '\x01';
          if (((bool)uVar9) || (uVar9 = uVar7 == 0x640, uVar7 < 0x640)) {
            FUN_c000_7e9b();
            FUN_c000_7216();
            if (!(bool)uVar9) {
              FUN_c000_6914();
              FUN_c000_726e();
              if (!(bool)uVar9) {
                FUN_c000_7e9b();
                uVar4 = CONCAT22(*(undefined2 *)(uVar7 + 6),*(undefined2 *)(uVar7 + 2));
                if (uStack_a <= uVar4) {
                  uVar6 = (ulong)uVar7;
                  uStack_a = uVar4;
                }
              }
            }
          }
        }
        if ((int)uVar6 != 0) {
          FUN_c000_6914();
          FUN_c000_7e13();
        }
      }
      else {
        FUN_c000_68f5();
      }
      return in_AX;
    }
    FUN_c000_726e();
    if (!bVar8) {
      FUN_c000_691f();
      uVar1 = (uint)(uStack_a >> 0x10);
      uVar5 = (uint)(in_ECX >> 0x10);
      if ((int)(uint)uStack_a < (int)(uint)in_ECX) {
        in_ECX = in_ECX >> 0x10 | in_ECX << 0x10;
        if (uVar1 <= uVar5) goto LAB_c000_716c;
      }
      else if (((uint)uStack_a <= (uint)in_ECX) &&
              (in_ECX = in_ECX >> 0x10 | in_ECX << 0x10, (int)uVar1 < (int)uVar5)) {
LAB_c000_716c:
        uVar6 = (ulong)uVar7;
        uStack_a = in_ECX;
      }
    }
    uVar7 = uVar7 + 0x1c;
  } while( true );
}


/* ---- FUN_c000_7216 @ c000:7216 size=52 ---- */

void __cdecl16near FUN_c000_7216(void)

{
  char cVar1;
  int in_CX;
  undefined4 in_EDX;
  int unaff_DI;
  undefined2 unaff_DS;
  
  cVar1 = FUN_c000_7a02();
  do {
    if (((int)in_EDX == *(int *)(unaff_DI + 2)) &&
       ((int)((ulong)in_EDX >> 0x10) == *(int *)(unaff_DI + 6))) {
      if (cVar1 == '\0') {
        return;
      }
      if (cVar1 == *(char *)(unaff_DI + 0x1b)) {
        return;
      }
    }
    unaff_DI = unaff_DI + 0x1c;
    in_CX = in_CX + -1;
    if (in_CX == 0) {
      return;
    }
  } while( true );
}


/* ---- FUN_c000_724a @ c000:724a size=35 ---- */

void __cdecl16near FUN_c000_724a(void)

{
  char cVar1;
  char extraout_AH;
  int in_CX;
  int unaff_DI;
  undefined2 unaff_DS;
  
  cVar1 = FUN_c000_7a02();
  do {
    if (extraout_AH == *(char *)(unaff_DI + 0x1a)) {
      if (cVar1 == '\0') {
        return;
      }
      if (cVar1 == *(char *)(unaff_DI + 0x1b)) {
        return;
      }
    }
    unaff_DI = unaff_DI + 0x1c;
    in_CX = in_CX + -1;
    if (in_CX == 0) {
      return;
    }
  } while( true );
}


/* ---- FUN_c000_726e @ c000:726e size=48 ---- */

uint __cdecl16near FUN_c000_726e(void)

{
  undefined2 uVar1;
  uint uVar2;
  undefined2 extraout_var;
  ulong in_ECX;
  bool bVar4;
  ulong uVar3;
  
  uVar1 = FUN_c000_7e9b();
  uVar3 = CONCAT22(extraout_var,uVar1);
  uVar2 = FUN_c000_691f();
  if ((((uint)uVar3 <= (uint)in_ECX) && (bVar4 = in_ECX == uVar3, uVar3 <= in_ECX)) &&
     (uVar2 = FUN_c000_6b1e(), !bVar4)) {
    return uVar2;
  }
  return uVar2 & 0xff00;
}


/* ---- FUN_c000_729e @ c000:729e size=13 ---- */

void __cdecl16near FUN_c000_729e(void)

{
  FUN_c000_724a();
  FUN_c000_6914();
  return;
}


/* ---- FUN_c000_72ab @ c000:72ab size=331 ---- */

undefined2 __cdecl16near FUN_c000_72ab(void)

{
  byte bVar1;
  undefined2 in_AX;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 extraout_var;
  byte in_CL;
  ulong uVar6;
  ulong in_EDX;
  byte *pbVar7;
  undefined2 unaff_DS;
  bool bVar8;
  ulong uVar5;
  
  FUN_c000_7af2();
  FUN_c000_7dfb();
  if ((in_EDX & 3) == 0) {
LAB_c000_72d0:
    pbVar7 = (byte *)0x73f6;
    while( true ) {
      if (*pbVar7 == 0xff) {
        return in_AX;
      }
      if ((in_CL & 0x7f) == *pbVar7) break;
      pbVar7 = pbVar7 + 5;
    }
    uVar6 = 0x20500;
  }
  else {
    bVar8 = (in_EDX & 1) == 0;
    if (!bVar8) {
      uVar3 = FUN_c000_746e();
      if (bVar8) {
        return in_AX;
      }
      in_CL = (byte)((uint)uVar3 >> 8);
      if ((char)uVar3 == '\0') {
        FUN_c000_7dfb();
        goto LAB_c000_72d0;
      }
    }
    if ((in_CL < 0x70) || (0x74 < in_CL)) {
      bVar8 = true;
      FUN_c000_724a();
      if (bVar8) {
        return in_AX;
      }
      FUN_c000_7e13();
    }
    else {
      in_CL = in_CL + 0x90;
      bVar1 = FUN_c000_7575();
      if (bVar1 <= in_CL) {
        return in_AX;
      }
      FUN_c000_757c();
      iVar4 = FUN_c000_7e9b();
      if (iVar4 == 0) {
        return in_AX;
      }
    }
    uVar2 = FUN_c000_7731();
    uVar6 = (ulong)uVar2;
  }
  uVar3 = FUN_c000_7dfb();
  uVar5 = CONCAT22(extraout_var,uVar3);
  FUN_c000_7dfb(uVar5);
  iVar4 = FUN_c000_7e9b((uVar5 >> 0x10) * (uVar6 & 0xffff));
  FUN_c000_7e13();
  if (((iVar4 == 1) || (iVar4 == 0x101)) || (iVar4 == 2)) {
    FUN_c000_7dfb();
    FUN_c000_7dfb();
  }
  return in_AX;
}


/* ---- FUN_c000_746e @ c000:746e size=27 ---- */

uint __cdecl16near FUN_c000_746e(void)

{
  uint uVar1;
  int in_CX;
  uint *unaff_SI;
  undefined2 unaff_DS;
  
  uVar1 = FUN_c000_7c0d();
  do {
    if ((uVar1 & 0x1ff) == *unaff_SI) {
      return unaff_SI[1];
    }
    unaff_SI = unaff_SI + 2;
    in_CX = in_CX + -1;
  } while (in_CX != 0);
  return 0;
}


/* ---- FUN_c000_7489 @ c000:7489 size=39 ---- */

undefined2 __cdecl16near FUN_c000_7489(void)

{
  undefined2 *puVar1;
  undefined2 in_AX;
  uint uVar2;
  int in_CX;
  undefined2 *unaff_SI;
  undefined2 *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  FUN_c000_7c0d();
  in_CX = in_CX + -10;
  uVar2 = FUN_c000_7575();
  if (5 < uVar2) {
    uVar2 = 5;
  }
  in_CX = in_CX + uVar2 * 2;
  do {
    puVar1 = unaff_DI;
    unaff_DI = unaff_DI + 1;
    *puVar1 = *unaff_SI;
    unaff_SI = unaff_SI + 2;
    in_CX = in_CX + -1;
  } while (in_CX != 0);
  *unaff_DI = 0xffff;
  return in_AX;
}


/* ---- FUN_c000_74b0 @ c000:74b0 size=43 ---- */

void __cdecl16near FUN_c000_74b0(void)

{
  FUN_c000_74f9();
  FUN_c000_7532();
  FUN_c000_7731();
  return;
}


/* ---- FUN_c000_74db @ c000:74db size=15 ---- */

undefined2 __cdecl16near FUN_c000_74db(void)

{
  undefined2 in_AX;
  
  FUN_c000_77b3();
  return in_AX;
}


/* ---- FUN_c000_74ea @ c000:74ea size=15 ---- */

undefined2 __cdecl16near FUN_c000_74ea(void)

{
  undefined2 in_AX;
  
  FUN_c000_77b3();
  return in_AX;
}


/* ---- FUN_c000_74f9 @ c000:74f9 size=15 ---- */

undefined2 __cdecl16near FUN_c000_74f9(void)

{
  undefined2 in_AX;
  
  FUN_c000_7e9b();
  return in_AX;
}


/* ---- FUN_c000_7508 @ c000:7508 size=9 ---- */

void __cdecl16near FUN_c000_7508(void)

{
  FUN_c000_7b07();
  return;
}


/* ---- FUN_c000_7511 @ c000:7511 size=11 ---- */

byte __cdecl16near FUN_c000_7511(void)

{
  byte bVar1;
  
  bVar1 = FUN_c000_7e9b();
  return bVar1 & 3;
}


/* ---- FUN_c000_751c @ c000:751c size=7 ---- */

void __cdecl16near FUN_c000_751c(void)

{
  FUN_c000_7e9b();
  return;
}


/* ---- FUN_c000_7523 @ c000:7523 size=15 ---- */

void __cdecl16near FUN_c000_7523(void)

{
  FUN_c000_7e3f();
  return;
}


/* ---- FUN_c000_7532 @ c000:7532 size=8 ---- */

void __cdecl16near FUN_c000_7532(void)

{
  FUN_c000_7e9b();
  return;
}


/* ---- FUN_c000_753a @ c000:753a size=9 ---- */

void __cdecl16near FUN_c000_753a(void)

{
  FUN_c000_7e9b();
  return;
}


/* ---- FUN_c000_754c @ c000:754c size=41 ---- */

void __cdecl16near FUN_c000_754c(void)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = true;
  FUN_c000_7216();
  if (bVar2) {
    FUN_c000_758f();
    if (!bVar2) {
      iVar1 = FUN_c000_7575();
      if (iVar1 + 1U < 5) {
        FUN_c000_7dfb();
        FUN_c000_757c();
        FUN_c000_7dfb();
      }
    }
  }
  return;
}


/* ---- FUN_c000_7575 @ c000:7575 size=7 ---- */

void __cdecl16near FUN_c000_7575(void)

{
  FUN_c000_7e9b();
  return;
}


/* ---- FUN_c000_757c @ c000:757c size=9 ---- */

int __cdecl16near FUN_c000_757c(void)

{
  int in_AX;
  
  return in_AX << 3;
}


/* ---- FUN_c000_7585 @ c000:7585 size=10 ---- */

void __cdecl16near FUN_c000_7585(void)

{
  FUN_c000_7af2();
  return;
}


/* ---- FUN_c000_758f @ c000:758f size=30 ---- */

void __cdecl16near FUN_c000_758f(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 extraout_var;
  long in_EDX;
  
  iVar1 = FUN_c000_7575();
  while ((iVar1 != 0 && (uVar2 = FUN_c000_7e9b(), CONCAT22(extraout_var,uVar2) != in_EDX))) {
    iVar1 = iVar1 + -1;
  }
  return;
}


/* ---- FUN_c000_75b0 @ c000:75b0 size=34 ---- */

void __cdecl16near FUN_c000_75b0(void)

{
  FUN_c000_9ee1();
  FUN_c000_6c1b();
  FUN_c000_769d();
  return;
}


/* ---- FUN_c000_75d2 @ c000:75d2 size=33 ---- */

void __cdecl16near FUN_c000_75d2(void)

{
  FUN_c000_769d();
  return;
}


/* ---- FUN_c000_75f3 @ c000:75f3 size=35 ---- */

void __cdecl16near FUN_c000_75f3(void)

{
  FUN_c000_77bc();
  FUN_c000_769d();
  return;
}


/* ---- FUN_c000_7616 @ c000:7616 size=15 ---- */

void __cdecl16near FUN_c000_7616(void)

{
  FUN_c000_769d();
  return;
}


/* ---- FUN_c000_7625 @ c000:7625 size=15 ---- */

void __cdecl16near FUN_c000_7625(void)

{
  FUN_c000_769d();
  return;
}


/* ---- FUN_c000_7634 @ c000:7634 size=1 ---- */

void __cdecl16near FUN_c000_7634(void)

{
  return;
}


/* ---- FUN_c000_7635 @ c000:7635 size=28 ---- */

int __cdecl16near FUN_c000_7635(void)

{
  byte extraout_AH;
  ulong uVar1;
  uint unaff_SI;
  
  uVar1 = (ulong)unaff_SI;
  FUN_c000_769d();
  FUN_c000_659d();
  if ((uVar1 & 2) != 0) {
    return (uint)extraout_AH << 8;
  }
  return (int)CONCAT31((uint3)extraout_AH,1);
}


/* ---- FUN_c000_7651 @ c000:7651 size=10 ---- */

void __cdecl16near FUN_c000_7651(void)

{
  FUN_c000_769d();
  return;
}


/* ---- FUN_c000_765b @ c000:765b size=14 ---- */

void FUN_c000_765b(void)

{
  FUN_c000_769d();
  FUN_c000_79cf();
  FUN_c000_769d();
  return;
}


/* ---- FUN_c000_7669 @ c000:7669 size=23 ---- */

void __cdecl16near FUN_c000_7669(void)

{
  FUN_c000_79cf();
  FUN_c000_769d();
  return;
}


/* ---- FUN_c000_7680 @ c000:7680 size=19 ---- */

void __cdecl16near FUN_c000_7680(void)

{
  FUN_c000_769d();
  FUN_c000_769d();
  return;
}


/* ---- FUN_c000_7693 @ c000:7693 size=10 ---- */

void __cdecl16near FUN_c000_7693(void)

{
  FUN_c000_769d();
  return;
}


/* ---- FUN_c000_769d @ c000:769d size=47 ---- */

void __cdecl16near FUN_c000_769d(void)

{
  FUN_c000_7a27();
  return;
}


/* ---- FUN_c000_76cc @ c000:76cc size=16 ---- */

void __cdecl16near FUN_c000_76cc(void)

{
  FUN_c000_7e9b();
  FUN_c000_76dc();
  return;
}


/* ---- FUN_c000_76dc @ c000:76dc size=85 ---- */

void __cdecl16near FUN_c000_76dc(void)

{
  ulong in_EAX;
  
  if (0x3fffff0 < in_EAX) {
    in_EAX = 0x3fffff0;
  }
  FUN_c000_7a27(0,0,0,0,1,in_EAX | 0x80000000,0);
  return;
}


/* ---- FUN_c000_7731 @ c000:7731 size=15 ---- */

uint __cdecl16near FUN_c000_7731(void)

{
  uint in_AX;
  
  if (0x7fc0 < in_AX) {
    return 0x7fc0;
  }
  return in_AX + 0x3f & 0xffc0;
}


/* ---- FUN_c000_7740 @ c000:7740 size=33 ---- */

undefined2 __cdecl16near FUN_c000_7740(void)

{
  undefined2 in_AX;
  
  return in_AX;
}


/* ---- FUN_c000_7761 @ c000:7761 size=40 ---- */

void __cdecl16near FUN_c000_7761(void)

{
  return;
}


/* ---- FUN_c000_7789 @ c000:7789 size=42 ---- */

uint __cdecl16near FUN_c000_7789(void)

{
  uint uVar1;
  uint extraout_var;
  undefined2 in_BX;
  
  FUN_c000_7e9b();
  uVar1 = extraout_var;
  if (extraout_var != 0) {
    uVar1 = FUN_c000_7e9b(in_BX);
    if (0x1df < uVar1) {
      uVar1 = FUN_c000_7e9b(in_BX);
      if ((uVar1 & 0x80) == 0) {
        return uVar1 | 1;
      }
    }
  }
  return uVar1 & 0xff00;
}


/* ---- FUN_c000_77b3 @ c000:77b3 size=9 ---- */

void __cdecl16near FUN_c000_77b3(void)

{
  FUN_c000_7e69();
  return;
}


/* ---- FUN_c000_77bc @ c000:77bc size=9 ---- */

void __cdecl16near FUN_c000_77bc(void)

{
  FUN_c000_7dc4();
  return;
}


/* ---- FUN_c000_77c5 @ c000:77c5 size=18 ---- */

undefined2 __cdecl16near FUN_c000_77c5(void)

{
  int unaff_SI;
  undefined2 unaff_DS;
  
  FUN_c000_79cf();
  return CONCAT11(*(undefined1 *)(unaff_SI + 0x14),*(undefined1 *)(unaff_SI + 0x14));
}


/* ---- FUN_c000_77d7 @ c000:77d7 size=99 ---- */

void __cdecl16near FUN_c000_77d7(void)

{
  return;
}


/* ---- FUN_c000_784e @ c000:784e size=38 ---- */

void __cdecl16near FUN_c000_784e(void)

{
  char cVar1;
  int in_BX;
  char *pcVar2;
  int unaff_SI;
  undefined2 unaff_DS;
  
  if (in_BX != 0) {
    cVar1 = FUN_c000_79b0();
    for (pcVar2 = (char *)(in_BX + unaff_SI); (*pcVar2 != -1 && (cVar1 != *pcVar2));
        pcVar2 = pcVar2 + (byte)pcVar2[1]) {
    }
  }
  return;
}


/* ---- FUN_c000_78d2 @ c000:78d2 size=32 ---- */

void __cdecl16near FUN_c000_78d2(void)

{
  int iVar1;
  byte bVar2;
  int unaff_SI;
  int iVar3;
  undefined2 unaff_DS;
  
  iVar1 = FUN_c000_79b0();
  bVar2 = 0;
  iVar3 = unaff_SI + 8;
  do {
    if (iVar1 == *(int *)(iVar3 + 0xc)) {
      return;
    }
    iVar3 = iVar3 + 0x10;
    bVar2 = bVar2 + 1;
  } while (bVar2 < *(byte *)(unaff_SI + 6));
  return;
}


/* ---- FUN_c000_78f2 @ c000:78f2 size=16 ---- */

undefined2 __cdecl16near FUN_c000_78f2(void)

{
  undefined2 in_AX;
  
  FUN_c000_78d2();
  FUN_c000_784e();
  return in_AX;
}


/* ---- FUN_c000_7902 @ c000:7902 size=17 ---- */

void __cdecl16near FUN_c000_7902(void)

{
  FUN_c000_78f2();
  return;
}


/* ---- FUN_c000_7913 @ c000:7913 size=17 ---- */

void __cdecl16near FUN_c000_7913(void)

{
  FUN_c000_78f2();
  return;
}


/* ---- FUN_c000_7941 @ c000:7941 size=80 ---- */

undefined2 __cdecl16near FUN_c000_7941(void)

{
  undefined2 in_AX;
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 extraout_var;
  int unaff_DI;
  
  uVar1 = FUN_c000_7dfb();
  uVar2 = FUN_c000_7991();
  if ((uVar2 & uVar1) != 0) {
    uVar3 = FUN_c000_78d2();
    if (unaff_DI != 0) {
      FUN_c000_7dfb(CONCAT22(extraout_var,uVar3));
      FUN_c000_7dfb();
      FUN_c000_7902();
      FUN_c000_7913();
      FUN_c000_7dfb();
    }
  }
  return in_AX;
}


/* ---- FUN_c000_7991 @ c000:7991 size=9 ---- */

undefined2 __cdecl16near FUN_c000_7991(void)

{
  int unaff_SI;
  undefined2 unaff_DS;
  
  FUN_c000_79b0();
  return *(undefined2 *)(unaff_SI + 4);
}


/* ---- FUN_c000_799a @ c000:799a size=9 ---- */

void __cdecl16near FUN_c000_799a(void)

{
  undefined2 uVar1;
  int unaff_SI;
  undefined2 unaff_DS;
  
  uVar1 = FUN_c000_79b0();
  *(undefined2 *)(unaff_SI + 4) = uVar1;
  return;
}


/* ---- FUN_c000_79a3 @ c000:79a3 size=1 ---- */

void __cdecl16near FUN_c000_79a3(void)

{
  return;
}


/* ---- FUN_c000_79a4 @ c000:79a4 size=12 ---- */

void __cdecl16near FUN_c000_79a4(void)

{
  return;
}


/* ---- FUN_c000_79b0 @ c000:79b0 size=12 ---- */

void __cdecl16near FUN_c000_79b0(void)

{
  return;
}


/* ---- FUN_c000_79cf @ c000:79cf size=12 ---- */

void __cdecl16near FUN_c000_79cf(void)

{
  return;
}


/* ---- FUN_c000_79db @ c000:79db size=15 ---- */

void __cdecl16near FUN_c000_79db(void)

{
  return;
}


/* ---- FUN_c000_79ea @ c000:79ea size=12 ---- */

void __cdecl16near FUN_c000_79ea(void)

{
  return;
}


/* ---- FUN_c000_7a02 @ c000:7a02 size=33 ---- */

undefined4 __cdecl16near FUN_c000_7a02(void)

{
  undefined2 in_AX;
  undefined2 in_DX;
  
  return CONCAT22(in_DX,in_AX);
}


/* ---- FUN_c000_7a27 @ c000:7a27 size=33 ---- */

void __cdecl16near FUN_c000_7a27(void)

{
  FUN_c000_9122();
  return;
}


/* ---- FUN_c000_7a48 @ c000:7a48 size=12 ---- */

void __cdecl16near FUN_c000_7a48(void)

{
  FUN_c000_79a4();
  return;
}


/* ---- FUN_c000_7a54 @ c000:7a54 size=12 ---- */

undefined2 __cdecl16near FUN_c000_7a54(void)

{
  undefined2 in_AX;
  int unaff_DI;
  undefined2 unaff_DS;
  
  FUN_c000_79a4();
  *(uint *)(unaff_DI + 0x10) = *(uint *)(unaff_DI + 0x10) | 1;
  return in_AX;
}


/* ---- FUN_c000_7a60 @ c000:7a60 size=7 ---- */

void __cdecl16near FUN_c000_7a60(void)

{
  undefined1 uVar1;
  int unaff_DI;
  undefined2 unaff_DS;
  
  uVar1 = FUN_c000_79a4();
  *(undefined1 *)(unaff_DI + 0x10) = uVar1;
  return;
}


/* ---- FUN_c000_7a67 @ c000:7a67 size=57 ---- */

void __cdecl16near FUN_c000_7a67(void)

{
  FUN_c000_7a27();
  FUN_c000_7bcf();
  FUN_c000_7c0c();
  FUN_c000_7aa0();
  FUN_c000_77b3();
  FUN_c000_7a60();
  return;
}


/* ---- FUN_c000_7aa0 @ c000:7aa0 size=54 ---- */

void __cdecl16near FUN_c000_7aa0(void)

{
  ulong uVar1;
  int unaff_DI;
  undefined2 unaff_DS;
  
  FUN_c000_7a27();
  uVar1 = 0;
  FUN_c000_79a4();
  *(ulong *)(unaff_DI + 0x28) = uVar1 >> 8;
  *(long *)(unaff_DI + 0x2c) = uVar1 << 0x18;
  return;
}


/* ---- FUN_c000_7ad6 @ c000:7ad6 size=12 ---- */

void __cdecl16near FUN_c000_7ad6(void)

{
  FUN_c000_79a4();
  return;
}


/* ---- FUN_c000_7aec @ c000:7aec size=3 ---- */

undefined1 __cdecl16near FUN_c000_7aec(void)

{
  return 1;
}


/* ---- FUN_c000_7af2 @ c000:7af2 size=18 ---- */

undefined2 __cdecl16near FUN_c000_7af2(void)

{
  undefined2 in_AX;
  int in_CX;
  
  do {
    FUN_c000_7dfb();
    in_CX = in_CX + -1;
  } while (in_CX != 0);
  return in_AX;
}


/* ---- FUN_c000_7b07 @ c000:7b07 size=25 ---- */

void __cdecl16near FUN_c000_7b07(void)

{
  int in_CX;
  
  do {
    FUN_c000_7e9b();
    FUN_c000_7dfb();
    in_CX = in_CX + -1;
  } while (in_CX != 0);
  return;
}


/* ---- FUN_c000_7b20 @ c000:7b20 size=12 ---- */

void __cdecl16near FUN_c000_7b20(void)

{
  int in_CX;
  
  do {
    FUN_c000_7dfb();
    in_CX = in_CX + -1;
  } while (in_CX != 0);
  return;
}


/* ---- FUN_c000_7b2c @ c000:7b2c size=12 ---- */

void __cdecl16near FUN_c000_7b2c(void)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined2 extraout_var;
  int in_CX;
  undefined4 *unaff_DI;
  undefined2 unaff_ES;
  
  do {
    uVar2 = FUN_c000_7e9b();
    puVar1 = unaff_DI;
    unaff_DI = unaff_DI + 1;
    *puVar1 = CONCAT22(extraout_var,uVar2);
    in_CX = in_CX + -1;
  } while (in_CX != 0);
  return;
}


/* ---- FUN_c000_7b98 @ c000:7b98 size=34 ---- */

undefined2 __cdecl16near FUN_c000_7b98(void)

{
  ulong uVar1;
  undefined4 in_EDX;
  undefined3 uVar2;
  
  FUN_c000_7cb4();
  uVar2 = (undefined3)((ulong)in_EDX >> 8);
  out((int)CONCAT31(uVar2,0x30),0x5a8b8);
  uVar1 = in((int)CONCAT31(uVar2,0x34));
  return (int)((qword)uVar1 / 100);
}


/* ---- FUN_c000_7bba @ c000:7bba size=21 ---- */

undefined2 __cdecl16near FUN_c000_7bba(void)

{
  undefined2 in_AX;
  
  FUN_c000_77b3();
  return in_AX;
}


/* ---- FUN_c000_7bcf @ c000:7bcf size=43 ---- */

void __cdecl16near FUN_c000_7bcf(void)

{
  undefined2 uVar1;
  undefined2 extraout_var;
  int iVar2;
  int unaff_SI;
  undefined2 unaff_DS;
  
  FUN_c000_7c4e();
  FUN_c000_79ea();
  iVar2 = *(int *)(unaff_SI + 8);
  if (iVar2 == 0) {
    iVar2 = 0x1000;
  }
  uVar1 = FUN_c000_79ea();
  *(undefined4 *)(unaff_SI + 4) = CONCAT22(extraout_var,uVar1);
  *(int *)(unaff_SI + 8) = iVar2;
  return;
}


/* ---- FUN_c000_7bfa @ c000:7bfa size=18 ---- */

undefined2 __cdecl16near FUN_c000_7bfa(void)

{
  int unaff_SI;
  undefined2 unaff_CS;
  
  FUN_c000_79ea();
  return (int)(*(long *)(unaff_SI + 4) << 10);
}


/* ---- FUN_c000_7c0c @ c000:7c0c size=1 ---- */

void __cdecl16near FUN_c000_7c0c(void)

{
  return;
}


/* ---- FUN_c000_7c0d @ c000:7c0d size=33 ---- */

undefined4 __cdecl16near FUN_c000_7c0d(void)

{
  undefined2 in_AX;
  undefined2 in_DX;
  
  return CONCAT22(in_DX,in_AX);
}


/* ---- FUN_c000_7c2e @ c000:7c2e size=12 ---- */

void __cdecl16near FUN_c000_7c2e(void)

{
  FUN_c000_79cf();
  return;
}


/* ---- FUN_c000_7c3a @ c000:7c3a size=17 ---- */

void __cdecl16near FUN_c000_7c3a(void)

{
  char in_CH;
  int unaff_SI;
  undefined2 unaff_DS;
  
  FUN_c000_79cf();
  if (in_CH != '\0') {
    *(char *)(unaff_SI + 0x13) = in_CH;
  }
  return;
}


/* ---- FUN_c000_7c4e @ c000:7c4e size=37 ---- */

undefined2 __cdecl16near FUN_c000_7c4e(void)

{
  undefined2 in_BX;
  
  FUN_c000_7a27();
  return in_BX;
}


/* ---- FUN_c000_7ca4 @ c000:7ca4 size=6 ---- */

void __cdecl16near FUN_c000_7ca4(void)

{
  return;
}


/* ---- FUN_c000_7caa @ c000:7caa size=10 ---- */

void __cdecl16near FUN_c000_7caa(void)

{
  return;
}


/* ---- FUN_c000_7cb4 @ c000:7cb4 size=42 ---- */

undefined4 __cdecl16near FUN_c000_7cb4(void)

{
  byte bVar1;
  undefined2 in_AX;
  byte extraout_AH;
  int unaff_CS;
  
  if ((unaff_CS != -0x4000) || (bVar1 = in(0x3c3), bVar1 == 0)) {
    FUN_c000_7daa();
    bVar1 = extraout_AH;
  }
  in((uint)bVar1 << 8);
  return CONCAT22((uint)bVar1 << 8,in_AX);
}


/* ---- FUN_c000_7cde @ c000:7cde size=6 ---- */

void __cdecl16near FUN_c000_7cde(void)

{
  return;
}


/* ---- FUN_c000_7d80 @ c000:7d80 size=26 ---- */

undefined4 __cdecl16near FUN_c000_7d80(void)

{
  undefined2 in_AX;
  undefined2 in_DX;
  undefined1 in_BL;
  undefined1 in_BH;
  
  out(0xcf8,CONCAT31(CONCAT21((int)CONCAT31(0x80,in_BH),in_BL),(char)in_DX) & 0xfffffffc);
  return CONCAT22(in_DX,in_AX);
}


/* ---- FUN_c000_7d9a @ c000:7d9a size=8 ---- */

undefined4 __cdecl16near FUN_c000_7d9a(void)

{
  undefined4 uVar1;
  undefined2 in_DX;
  
  uVar1 = in(0xcfc);
  return CONCAT22(in_DX,(int)uVar1);
}


/* ---- FUN_c000_7daa @ c000:7daa size=13 ---- */

void __cdecl16near FUN_c000_7daa(void)

{
  byte in_CF;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  
  FUN_c000_7cde();
  FUN_c000_7d80((uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
                (uint)(in_TF & 1) * 0x100 | (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40 |
                (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_CF & 1));
  FUN_c000_7d9a();
  return;
}


/* ---- FUN_c000_7dc4 @ c000:7dc4 size=14 ---- */

undefined4 __cdecl16near FUN_c000_7dc4(void)

{
  undefined2 in_AX;
  undefined2 in_DX;
  
  FUN_c000_7dd2();
  return CONCAT22(in_DX,in_AX);
}


/* ---- FUN_c000_7dd2 @ c000:7dd2 size=15 ---- */

void __cdecl16near FUN_c000_7dd2(void)

{
  FUN_c000_7cb4();
  FUN_c000_7f9f();
  return;
}


/* ---- FUN_c000_7de1 @ c000:7de1 size=26 ---- */

undefined2 __cdecl16near FUN_c000_7de1(void)

{
  undefined2 in_AX;
  
  FUN_c000_7bfa();
  return in_AX;
}


/* ---- FUN_c000_7dfb @ c000:7dfb size=10 ---- */

void __cdecl16near FUN_c000_7dfb(void)

{
  FUN_c000_7e05();
  return;
}


/* ---- FUN_c000_7e05 @ c000:7e05 size=14 ---- */

undefined2 __cdecl16near FUN_c000_7e05(void)

{
  undefined2 in_AX;
  
  FUN_c000_7cb4();
  FUN_c000_7de1();
  FUN_c000_7fc5();
  return in_AX;
}


/* ---- FUN_c000_7e13 @ c000:7e13 size=44 ---- */

undefined4 __cdecl16near FUN_c000_7e13(void)

{
  undefined2 in_AX;
  undefined2 in_DX;
  
  FUN_c000_7cb4();
  FUN_c000_7de1();
  FUN_c000_7fb9();
  FUN_c000_7fc5();
  return CONCAT22(in_DX,in_AX);
}


/* ---- FUN_c000_7e3f @ c000:7e3f size=24 ---- */

undefined2 __cdecl16near FUN_c000_7e3f(void)

{
  undefined2 in_AX;
  
  FUN_c000_7e9b();
  FUN_c000_7dfb();
  return in_AX;
}


/* ---- FUN_c000_7e57 @ c000:7e57 size=18 ---- */

undefined2 __cdecl16near FUN_c000_7e57(void)

{
  undefined2 in_AX;
  
  FUN_c000_7e9b();
  return in_AX;
}


/* ---- FUN_c000_7e69 @ c000:7e69 size=4 ---- */

void __cdecl16near FUN_c000_7e69(void)

{
  FUN_c000_7ecb();
  return;
}


/* ---- FUN_c000_7e6d @ c000:7e6d size=15 ---- */

void __cdecl16near FUN_c000_7e6d(void)

{
  FUN_c000_7cb4();
  FUN_c000_7f86();
  return;
}


/* ---- FUN_c000_7e87 @ c000:7e87 size=10 ---- */

void __cdecl16near FUN_c000_7e87(void)

{
  FUN_c000_7e91();
  return;
}


/* ---- FUN_c000_7e91 @ c000:7e91 size=10 ---- */

void __cdecl16near FUN_c000_7e91(void)

{
  FUN_c000_7cb4();
  FUN_c000_7de1();
  FUN_c000_7fb9();
  return;
}


/* ---- FUN_c000_7e9b @ c000:7e9b size=48 ---- */

undefined2 __cdecl16near FUN_c000_7e9b(void)

{
  undefined2 uVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  ulong uVar2;
  byte bVar3;
  byte in_BL;
  
  bVar3 = (in_BL & 3) << 3;
  uVar1 = FUN_c000_7e87();
  uVar2 = CONCAT22(extraout_var,uVar1);
  if (bVar3 != 0) {
    uVar1 = FUN_c000_7e87();
    uVar2 = uVar2 >> (bVar3 & 0x1f) | CONCAT22(extraout_var_00,uVar1) << 0x20 - (bVar3 & 0x1f);
  }
  return (int)uVar2;
}


/* ---- FUN_c000_7ecb @ c000:7ecb size=10 ---- */

void __cdecl16near FUN_c000_7ecb(void)

{
  FUN_c000_7e6d();
  return;
}


/* ---- FUN_c000_7edf @ c000:7edf size=30 ---- */

undefined4 __cdecl16near FUN_c000_7edf(void)

{
  undefined2 in_AX;
  undefined2 in_DX;
  undefined1 extraout_DH;
  
  FUN_c000_7cb4();
  in(CONCAT11(extraout_DH,0x30));
  return CONCAT22(in_DX,in_AX);
}


/* ---- FUN_c000_7efd @ c000:7efd size=37 ---- */

undefined4 __cdecl16near FUN_c000_7efd(void)

{
  undefined2 in_AX;
  undefined2 in_DX;
  undefined1 extraout_DH;
  
  FUN_c000_7cb4();
  out(CONCAT11(extraout_DH,0x18),DAT_c000_6326);
  in(CONCAT11(extraout_DH,0x30));
  return CONCAT22(in_DX,in_AX);
}


/* ---- FUN_c000_7f22 @ c000:7f22 size=38 ---- */

undefined4 __cdecl16near FUN_c000_7f22(undefined2 param_1,undefined2 param_2)

{
  undefined2 in_AX;
  undefined2 in_DX;
  undefined1 extraout_DH;
  
  FUN_c000_7cb4();
  out(CONCAT11(extraout_DH,0x30),CONCAT22(param_2,param_1));
  return CONCAT22(in_DX,in_AX);
}


/* ---- FUN_c000_7f48 @ c000:7f48 size=18 ---- */

undefined4 __cdecl16near FUN_c000_7f48(void)

{
  undefined2 in_AX;
  undefined4 uVar1;
  undefined2 in_DX;
  undefined1 extraout_DH;
  
  FUN_c000_7cb4();
  uVar1 = in(CONCAT11(extraout_DH,0x18));
  DAT_c000_6326 = (int)uVar1;
  return CONCAT22(in_DX,in_AX);
}


/* ---- FUN_c000_7f86 @ c000:7f86 size=25 ---- */

undefined2 __cdecl16near FUN_c000_7f86(void)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined2 in_DX;
  undefined1 uVar3;
  ulong in_EBX;
  
  uVar3 = (undefined1)((uint)in_DX >> 8);
  if (in_EBX < 0x100) {
    uVar2 = (undefined1)in_EBX;
  }
  else {
    out(CONCAT11(uVar3,0x30),in_EBX);
    uVar2 = 0x34;
  }
  uVar1 = in(CONCAT11(uVar3,uVar2));
  return (int)uVar1;
}


/* ---- FUN_c000_7f9f @ c000:7f9f size=26 ---- */

void __cdecl16near FUN_c000_7f9f(void)

{
  undefined4 in_EAX;
  undefined1 uVar1;
  undefined2 in_DX;
  undefined1 uVar2;
  ulong in_EBX;
  
  uVar2 = (undefined1)((uint)in_DX >> 8);
  if (in_EBX < 0x100) {
    uVar1 = (undefined1)in_EBX;
  }
  else {
    out(CONCAT11(uVar2,0x30),in_EBX);
    uVar1 = 0x34;
  }
  out(CONCAT11(uVar2,uVar1),in_EAX);
  return;
}


/* ---- FUN_c000_7fb9 @ c000:7fb9 size=12 ---- */

undefined2 __cdecl16near FUN_c000_7fb9(void)

{
  undefined4 uVar1;
  uint in_DX;
  undefined4 in_EBX;
  
  out(in_DX & 0xff00,in_EBX);
  uVar1 = in(CONCAT11((char)(in_DX >> 8),4));
  return (int)uVar1;
}


/* ---- FUN_c000_7fc5 @ c000:7fc5 size=13 ---- */

void __cdecl16near FUN_c000_7fc5(void)

{
  undefined4 in_EAX;
  uint in_DX;
  undefined4 in_EBX;
  
  out(in_DX & 0xff00,in_EBX);
  out(CONCAT11((char)(in_DX >> 8),4),in_EAX);
  return;
}


/* ---- FUN_c000_7fd4 @ c000:7fd4 size=25 ---- */

void __cdecl16near FUN_c000_7fd4(void)

{
  FUN_c000_800e();
  return;
}


/* ---- FUN_c000_7ffd @ c000:7ffd size=17 ---- */

void __cdecl16near FUN_c000_7ffd(void)

{
  FUN_c000_800e();
  return;
}


/* ---- FUN_c000_800e @ c000:800e size=158 ---- */

void __cdecl16near FUN_c000_800e(void)

{
  ulong uVar1;
  int in_AX;
  uint uVar2;
  int iVar3;
  uint in_CX;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint in_BX;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar7;
  undefined4 local_e;
  
  uVar2 = 0xffff;
  uVar6 = 0xffff;
  for (iVar4 = 0x20 - (uint)*(byte *)(*(int *)(in_AX + 0x26) + 1); iVar4 != 0; iVar4 = iVar4 + -1) {
    uVar5 = uVar6 & 1;
    uVar6 = uVar6 >> 1;
    uVar2 = uVar2 >> 1 | (uint)(uVar5 != 0) << 0xf;
  }
  for (uVar5 = (uint)*(byte *)(*(int *)(in_AX + 0x26) + 3); uVar5 != 0; uVar5 = uVar5 - 1) {
    bVar7 = (int)uVar2 < 0;
    uVar2 = uVar2 << 1;
    uVar6 = uVar6 << 1 | (uint)bVar7;
  }
  *(uint *)(in_AX + 0x1c) = *(uint *)(in_AX + 0x1c) & ~uVar2;
  *(uint *)(in_AX + 0x1e) = *(uint *)(in_AX + 0x1e) & ~uVar6;
  iVar4 = *(int *)(in_AX + 0x26);
  iVar3 = 0x20 - (uint)*(byte *)(iVar4 + 1);
  local_e = 0xffffffff;
  uVar1 = local_e;
  while( true ) {
    local_e._0_2_ = (uint)uVar1;
    local_e._2_2_ = (uint)(uVar1 >> 0x10);
    if (iVar3 == 0) break;
    local_e = CONCAT22(local_e._2_2_ >> 1,(uint)local_e >> 1 | (uint)((uVar1 & 0x10000) != 0) << 0xf
                      );
    iVar3 = iVar3 + -1;
    uVar1 = local_e;
  }
  for (uVar2 = (uint)*(byte *)(iVar4 + 2); uVar2 != 0; uVar2 = uVar2 - 1) {
    uVar6 = in_CX & 1;
    in_CX = in_CX >> 1;
    in_BX = in_BX >> 1 | (uint)(uVar6 != 0) << 0xf;
  }
  local_e._0_2_ = in_BX & (uint)local_e;
  local_e._2_2_ = in_CX & local_e._2_2_;
  for (uVar2 = (uint)*(byte *)(iVar4 + 3); uVar2 != 0; uVar2 = uVar2 - 1) {
    bVar7 = (int)(uint)local_e < 0;
    local_e._0_2_ = (uint)local_e << 1;
    local_e._2_2_ = local_e._2_2_ << 1 | (uint)bVar7;
  }
  *(uint *)(in_AX + 0x1c) = *(uint *)(in_AX + 0x1c) | (uint)local_e;
  *(uint *)(in_AX + 0x1e) = *(uint *)(in_AX + 0x1e) | local_e._2_2_;
  return;
}


/* ---- FUN_c000_80ac @ c000:80ac size=76 ---- */

void __cdecl16near FUN_c000_80ac(void)

{
  uint uVar1;
  int in_AX;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  bool bVar5;
  undefined2 local_c;
  
  uVar2 = 0xffff;
  uVar4 = 0xffff;
  for (iVar3 = 0x20 - (uint)*(byte *)(*(int *)(in_AX + 0x26) + 1); iVar3 != 0; iVar3 = iVar3 + -1) {
    uVar1 = uVar4 & 1;
    uVar4 = uVar4 >> 1;
    uVar2 = uVar2 >> 1 | (uint)(uVar1 != 0) << 0xf;
  }
  for (local_c = (uint)*(byte *)(*(int *)(in_AX + 0x26) + 2); local_c != 0; local_c = local_c - 1) {
    bVar5 = (int)uVar2 < 0;
    uVar2 = uVar2 << 1;
    uVar4 = uVar4 << 1 | (uint)bVar5;
  }
  *(uint *)(in_AX + 0x1c) = *(uint *)(in_AX + 0x1c) | uVar2;
  *(uint *)(in_AX + 0x1e) = *(uint *)(in_AX + 0x1e) | uVar4;
  return;
}


/* ---- FUN_c000_9055 @ c000:9055 size=150 ---- */

void __cdecl16near FUN_c000_9055(void)

{
  int *piVar1;
  byte bVar2;
  int in_AX;
  int iVar3;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  bVar2 = *(byte *)*(undefined2 *)(*(int *)(in_AX + 2) + 2);
  *(undefined1 *)(in_AX + 0x3d) = 0;
  while (*(byte *)(in_AX + 0x3d) < 8) {
    *(undefined1 *)(in_AX + (uint)*(byte *)(in_AX + 0x3d) + 0x35) =
         *(undefined1 *)(*(int *)(*(int *)(in_AX + 2) + 2) + (uint)*(byte *)(in_AX + 0x3d));
    *(char *)(in_AX + 0x3d) = *(char *)(in_AX + 0x3d) + '\x01';
  }
  iVar3 = (uint)bVar2 * 4;
  piVar1 = (int *)(*(int *)(in_AX + 2) + 2);
  *piVar1 = *piVar1 + (uint)*(byte *)(iVar3 + -0x2197);
  *(byte *)(in_AX + 0x2d) = *(byte *)(*(int *)(in_AX + 0x28) + 1) & 7;
  *(byte *)(in_AX + 0x2b) = *(byte *)(*(int *)(in_AX + 0x28) + 1) >> 3 & 7;
  *(byte *)(in_AX + 0x2a) = *(byte *)(*(int *)(in_AX + 0x28) + 1) >> 6;
  *(undefined1 *)(in_AX + 0x2c) = *(undefined1 *)(iVar3 + -0x2198);
  return;
}


/* ---- FUN_c000_90eb @ c000:90eb size=30 ---- */

int __cdecl16near FUN_c000_90eb(void)

{
  int iVar1;
  int in_AX;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)(in_AX + 2);
  return *(int *)(*(int *)(iVar1 + 0x48) + iVar1 + 0x1e) + iVar1 + 4;
}


/* ---- FUN_c000_9109 @ c000:9109 size=22 ---- */

int __cdecl16near FUN_c000_9109(void)

{
  int iVar1;
  int in_AX;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)(in_AX + 2);
  return *(int *)(*(int *)(iVar1 + 0x48) + iVar1 + 0x20) + iVar1 + 4;
}


/* ---- FUN_c000_911f @ c000:911f size=3 ---- */

void __cdecl16near FUN_c000_911f(void)

{
  return;
}


/* ---- FUN_c000_9122 @ c000:9122 size=442 ---- */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint __cdecl16near FUN_c000_9122(void)

{
  int *in_AX;
  uint uVar1;
  byte bVar2;
  byte extraout_DL;
  int *piVar3;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int *local_4a;
  int *local_48;
  undefined1 *puStack_46;
  int *piStack_44;
  undefined1 auStack_42 [16];
  undefined4 local_32;
  undefined2 local_2a;
  int local_24;
  int local_22;
  byte local_1b;
  byte local_19;
  byte local_18;
  undefined1 local_16;
  int *local_c;
  
  local_4a = in_AX;
  local_22 = FUN_c000_9109();
  local_24 = *(int *)(local_22 + 0x2e) + in_AX[1] + 4;
  local_22 = FUN_c000_90eb();
  uVar1 = FUN_c000_911f();
  local_19 = (byte)uVar1;
  if (*(int *)(local_22 + (uVar1 & 0xff) * 2) == 0) {
LAB_c000_92d2:
    return uVar1 & 0xff00;
  }
  local_1b = local_1b & 0xf9;
  local_16 = 0;
  local_2a = 0;
  local_32 = 0;
  local_c = (int *)0x0;
  do {
    piVar3 = (int *)(local_22 + (uint)local_19 * 2);
    if (*piVar3 == 0) {
      local_18 = 0x83;
    }
    else {
      bVar2 = (char)*(undefined2 *)(*piVar3 + in_AX[1] + 4) + 9;
      if ((bVar2 & 0xfe) != 0) {
        uVar1 = (uint)(bVar2 >> 1);
        do {
          local_4a = (int *)0x0;
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
      }
      local_48 = (int *)&local_4a;
      if (&stack0x0000 == (undefined1 *)0x4a) {
        local_18 = 0x87;
      }
      else {
        puStack_46 = auStack_42;
        piStack_44 = local_c;
        local_18 = 0;
        local_48 = (int *)&local_4a;
        local_c = (int *)&local_4a;
      }
    }
    do {
      if (0x10 < local_18) {
LAB_c000_92c7:
        uVar1 = 0;
        if (local_18 != 0x10) {
          return (uint)local_18;
        }
        goto LAB_c000_92d2;
      }
      local_18 = 0;
      while (local_18 == 0) {
        local_22 = local_48[1];
        if (*(char *)local_48[1] == '[') {
          local_18 = 0x10;
          local_48 = (int *)local_48[3];
          local_c = local_48;
          if (local_48 != (int *)0x0) {
            *local_4a = *local_4a +
                        (uint)(((byte)((uint)*(undefined2 *)(*local_48 + 4) >> 8) & 0x7f) >> 2) * -4
            ;
          }
        }
        else {
          FUN_c000_9055();
          FUN_c000_92dc();
          (*(code *)*(undefined2 *)((uint)extraout_DL * 4 + -0x219a))();
        }
      }
      if (local_c == (int *)0x0) goto LAB_c000_92c7;
    } while (local_18 != 1);
  } while( true );
}


/* ---- FUN_c000_92dc @ c000:92dc size=1 ---- */

void __cdecl16near FUN_c000_92dc(void)

{
  return;
}


/* ---- FUN_c000_9442 @ c000:9442 size=213 ---- */

uint __cdecl16near FUN_c000_9442(void)

{
  char cVar1;
  uint in_AX;
  uint uVar2;
  
  cVar1 = (char)in_AX;
  if (cVar1 == '\0') {
    uVar2 = FUN_c000_95a2();
  }
  else if (cVar1 == '\x01') {
    uVar2 = FUN_c000_95dc();
  }
  else if (cVar1 == '\x02') {
    uVar2 = FUN_c000_970e();
  }
  else if (cVar1 == '\x03') {
    uVar2 = FUN_c000_984a();
  }
  else {
    if (cVar1 != '\x04') {
      if (cVar1 == '\x05') {
        uVar2 = FUN_c000_98dc();
        return uVar2;
      }
      if (cVar1 == '\x06') {
        uVar2 = FUN_c000_9868();
        return uVar2;
      }
      if (cVar1 != '\a') {
        if (cVar1 == '\b') {
          uVar2 = FUN_c000_98c6();
          return uVar2;
        }
        if (cVar1 != '\t') {
          if (cVar1 == '\n') {
            uVar2 = FUN_c000_996f();
            return uVar2;
          }
          if (cVar1 != '\v') {
            if (cVar1 == '\x10') {
              uVar2 = FUN_c000_997e();
              return uVar2;
            }
            if ((cVar1 != '\x11') && (cVar1 == '\x15')) {
              uVar2 = FUN_c000_99b8();
              return uVar2;
            }
          }
        }
      }
    }
    uVar2 = in_AX & 0xff00;
  }
  return uVar2;
}


/* ---- FUN_c000_95a2 @ c000:95a2 size=58 ---- */

void __cdecl16near FUN_c000_95a2(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *unaff_DI;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined2 unaff_ES;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  
  puVar6 = (undefined4 *)(unaff_DI + 4);
  for (iVar4 = 0x3f; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar3 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar3 = 0;
  }
  puVar5 = (undefined1 *)0x9580;
  puVar7 = unaff_DI;
  for (iVar4 = 0x22; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar7;
    puVar7 = puVar7 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  *(undefined2 *)(unaff_DI + 8) = unaff_CS;
  *(undefined2 *)(unaff_DI + 0x10) = unaff_ES;
  *(undefined2 *)(unaff_DI + 0x18) = unaff_CS;
  *(undefined2 *)(unaff_DI + 0x1c) = unaff_CS;
  *(undefined2 *)(unaff_DI + 0x20) = unaff_CS;
  *(undefined1 **)(unaff_DI + 0xe) = puVar7 + 0x22;
  FUN_c000_7489();
  return;
}


/* ---- FUN_c000_95dc @ c000:95dc size=305 ---- */

undefined2 __cdecl16near FUN_c000_95dc(void)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  uint extraout_var_03;
  int extraout_var_04;
  uint in_CX;
  int iVar6;
  uint *unaff_DI;
  uint *puVar7;
  undefined2 unaff_ES;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  bool bVar8;
  
  puVar7 = unaff_DI;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar1 = puVar7;
    puVar7 = puVar7 + 2;
    puVar1[0] = 0;
    puVar1[1] = 0;
  }
  *unaff_DI = 0xbb;
  *(undefined1 *)(unaff_DI + 1) = 7;
  unaff_DI[2] = 0x40;
  unaff_DI[3] = 0x40;
  *(undefined1 *)((int)unaff_DI + 0x1b) = 6;
  *(undefined1 *)(unaff_DI + 0xc) = 1;
  *(undefined1 *)(unaff_DI + 0xd) = 1;
  *(undefined1 *)(unaff_DI + 0xf) = 1;
  (unaff_DI + 0x1f)[0] = 0x8400;
  (unaff_DI + 0x1f)[1] = 0x17d7;
  uVar4 = FUN_c000_6d13();
  if (CONCAT22(extraout_var,uVar4) != 0) {
    *(long *)(unaff_DI + 0x14) = CONCAT22(extraout_var,uVar4);
    *(ulong *)(unaff_DI + 6) = CONCAT22(unaff_CS,0x9939);
    if (in_CX == 0x81ff) {
LAB_c000_9701:
      bVar2 = 0;
      goto LAB_c000_9707;
    }
    bVar8 = (in_CX & 0x300) == 0;
    FUN_c000_72ab(unaff_DS);
    if (!bVar8) {
      uVar4 = FUN_c000_7532(unaff_DS);
      *(ulong *)(unaff_DI + 9) = CONCAT22(extraout_var_00,uVar4);
      unaff_DI[0xb] = 0x1008;
      uVar4 = FUN_c000_7e9b();
      *(undefined4 *)((int)unaff_DI + 0x1f) = CONCAT22(extraout_var_01,uVar4);
      *(ulong *)(unaff_DI + 0x1b) = CONCAT22(extraout_var_01,uVar4);
      uVar4 = FUN_c000_7e9b();
      *(undefined4 *)((int)unaff_DI + 0x23) = CONCAT22(extraout_var_02,uVar4);
      *(ulong *)(unaff_DI + 0x1d) = CONCAT22(extraout_var_02,uVar4);
      cVar3 = FUN_c000_7e9b();
      if (cVar3 != '\0') {
        FUN_c000_7532();
        if ((extraout_var_03 == 600) || (extraout_var_03 == 0x15e)) {
          *(undefined1 *)((int)unaff_DI + 0x17) = 0xe;
        }
        else if (extraout_var_03 < 0x15f) {
          *(undefined1 *)((int)unaff_DI + 0x17) = 8;
        }
        unaff_DI[4] = DAT_c000_6108;
        iVar6 = FUN_c000_7e9b();
        uVar5 = iVar6 << ((byte)extraout_var_04 & 0x1f);
        unaff_DI[8] = uVar5;
        unaff_DI[0x19] = uVar5;
        *(char *)((int)unaff_DI + 0x19) = '\b' << ((byte)extraout_var_04 & 0x1f);
        iVar6 = extraout_var_04;
        uVar5 = FUN_c000_7e9b();
        if (uVar5 < 0x301) {
          cVar3 = (char)(0x300 / (ulong)uVar5) + -1;
          *(char *)((int)unaff_DI + 0x1d) = cVar3;
          *(char *)((int)unaff_DI + 0x35) = cVar3;
          *(char *)(unaff_DI + 0x1a) = cVar3;
          FUN_c000_6d7c(unaff_DS);
          if (iVar6 == 0) {
            *unaff_DI = *unaff_DI & 0xfffe;
          }
          goto LAB_c000_9701;
        }
      }
    }
  }
  bVar2 = 3;
LAB_c000_9707:
  return (int)CONCAT31((uint3)bVar2,0x4f);
}


/* ---- FUN_c000_970e @ c000:970e size=121 ---- */

void __cdecl16near FUN_c000_970e(void)

{
  char cVar1;
  ulong in_EBX;
  bool bVar2;
  undefined1 uVar3;
  
  if ((int)in_EBX == -0x7e01) {
    return;
  }
  if ((char)(in_EBX >> 8) != '\0') {
    bVar2 = (in_EBX & 0x800) == 0;
    if (!bVar2) {
      return;
    }
    FUN_c000_72ab();
    if (bVar2) {
      return;
    }
    cVar1 = FUN_c000_7511();
    uVar3 = cVar1 == '\0';
    if (!(bool)uVar3) {
      FUN_c000_7087();
      if (!(bool)uVar3) {
        FUN_c000_6f1b();
        FUN_c000_697d();
      }
      FUN_c000_6d50();
      if ((bool)uVar3) {
        return;
      }
      FUN_c000_97fd();
      FUN_c000_9787();
      FUN_c000_7508();
      FUN_c000_7511();
      FUN_c000_6da9();
      return;
    }
  }
  FUN_c000_9a15();
  return;
}


/* ---- FUN_c000_9787 @ c000:9787 size=85 ---- */

void __cdecl16near FUN_c000_9787(void)

{
  uint uVar1;
  uint extraout_var;
  undefined2 unaff_CS;
  
  uVar1 = FUN_c000_7532();
  uRam0000044a = uVar1 >> 3;
  cRam00000484 = (char)(extraout_var >> 4) + -1;
  uRam00000451 = 0;
  uRam00000450 = 0;
  uRam00000449 = 0x62;
  uRam0000044c = 0xa000;
  uRam00000485 = 0x10;
  uRam0000010c = 0xaf0b;
  uRam0000010e = unaff_CS;
  return;
}


/* ---- FUN_c000_97fd @ c000:97fd size=77 ---- */

undefined4 __cdecl16near FUN_c000_97fd(void)

{
  undefined1 *puVar1;
  char cVar3;
  undefined2 uVar2;
  int iVar4;
  undefined1 *puVar5;
  undefined2 unaff_DS;
  
  out(0x3c4,0x100);
  iVar4 = 4;
  cVar3 = '\x01';
  puVar5 = (undefined1 *)0x97dc;
  do {
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    out(0x3c4,CONCAT11(*puVar1,cVar3));
    cVar3 = cVar3 + '\x01';
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  out(0x3c4,0x300);
  iVar4 = 9;
  cVar3 = '\0';
  puVar5 = (undefined1 *)0x97e0;
  do {
    out(0x3ce,cVar3);
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    out(0x3cf,*puVar1);
    cVar3 = cVar3 + '\x01';
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  in(0x3da);
  iVar4 = 0x14;
  uVar2 = 0;
  puVar5 = (undefined1 *)0x97e9;
  do {
    cVar3 = (char)((uint)uVar2 >> 8);
    out(0x3c0,cVar3);
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    out(0x3c0,*puVar1);
    uVar2 = CONCAT11(cVar3 + '\x01',*puVar1);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return CONCAT22(0x3c0,uVar2);
}


/* ---- FUN_c000_984a @ c000:984a size=30 ---- */

undefined2 __cdecl16near FUN_c000_984a(void)

{
  int extraout_var;
  bool bVar1;
  
  FUN_c000_7511();
  bVar1 = extraout_var == 0;
  FUN_c000_74ea();
  if (bVar1) {
    FUN_c000_74db();
    if (!bVar1) {
      return 0x34f;
    }
  }
  return 0x4f;
}


/* ---- FUN_c000_9868 @ c000:9868 size=93 ---- */

ulong __cdecl16near FUN_c000_9868(void)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint in_CX;
  undefined2 extraout_DX;
  undefined2 uVar4;
  char in_BL;
  uint uVar5;
  undefined1 in_ZF;
  bool bVar6;
  byte bVar7;
  ulong uVar8;
  
  uVar8 = FUN_c000_74ea();
  uVar4 = (undefined2)(uVar8 >> 0x10);
  bVar3 = (byte)in_CX;
  if (!(bool)in_ZF) {
    bVar6 = in_BL == '\0';
    if (!bVar6) {
      if (in_BL == '\x01') {
        FUN_c000_753a();
        goto LAB_c000_989c;
      }
      bVar7 = in_BL == '\x02';
      if (!(bool)bVar7) {
        if (in_BL != '\x03') {
          return uVar8 & 0xffffff00;
        }
        FUN_c000_74b0();
        goto LAB_c000_989c;
      }
      uVar1 = FUN_c000_74f9();
      uVar5 = in_CX & 0x1f;
      in_CX = uVar1 >> ((byte)in_CX & 0x1f);
      bVar6 = uVar5 != 0;
      bVar6 = (bool)(!bVar6 & bVar7 | (bVar6 && in_CX == 0));
    }
    bVar3 = (byte)in_CX;
    FUN_c000_6fe7();
    uVar4 = extraout_DX;
    if (!bVar6) {
LAB_c000_989c:
      iVar2 = FUN_c000_74f9();
      uVar5 = iVar2 << (bVar3 & 0x1f);
      if (uVar5 < 0x301) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = (undefined2)(0x3000000 / (ulong)uVar5);
      }
      return CONCAT22(uVar4,0x4f);
    }
  }
  return CONCAT22(uVar4,0x34f);
}


/* ---- FUN_c000_98c6 @ c000:98c6 size=21 ---- */

undefined2 __cdecl16near FUN_c000_98c6(void)

{
  char in_BL;
  
  if (in_BL == '\0') {
    FUN_c000_70ef();
  }
  else {
    FUN_c000_70d9();
  }
  return 0x4f;
}


/* ---- FUN_c000_98dc @ c000:98dc size=57 ---- */

uint __cdecl16near FUN_c000_98dc(void)

{
  uint extraout_var;
  undefined2 in_BX;
  char cVar1;
  undefined1 in_ZF;
  
  cVar1 = (char)((uint)in_BX >> 8);
  FUN_c000_74ea();
  if (!(bool)in_ZF) {
    FUN_c000_7511();
    if ((extraout_var & 0x4000) == 0) {
      if (cVar1 == '\0') {
        FUN_c000_9915();
      }
      else {
        if (cVar1 != '\x01') {
          return extraout_var & 0xff00;
        }
        FUN_c000_7e69();
      }
      return 0x4f;
    }
  }
  return 0x34f;
}


/* ---- FUN_c000_9915 @ c000:9915 size=36 ---- */

undefined4 __cdecl16near FUN_c000_9915(void)

{
  undefined2 in_AX;
  undefined2 in_DX;
  
  FUN_c000_7dc4();
  FUN_c000_7dc4();
  return CONCAT22(in_DX,in_AX);
}


/* ---- FUN_c000_996f @ c000:996f size=14 ---- */

undefined2 __cdecl16near FUN_c000_996f(void)

{
  return 0x4f;
}


/* ---- FUN_c000_997e @ c000:997e size=57 ---- */

undefined2 __cdecl16near FUN_c000_997e(void)

{
  char cVar1;
  undefined2 in_BX;
  bool bVar2;
  
  cVar1 = (char)in_BX;
  if (cVar1 != '\0') {
    bVar2 = cVar1 == '\x01';
    if (bVar2) {
      FUN_c000_7087();
      if (!bVar2) {
        return 0x34f;
      }
      FUN_c000_6faf(in_BX);
    }
    else {
      if (cVar1 != '\x02') {
        return 0x34f;
      }
      FUN_c000_70cd();
    }
  }
  return 0x4f;
}


/* ---- FUN_c000_99b8 @ c000:99b8 size=36 ---- */

undefined2 __cdecl16near FUN_c000_99b8(void)

{
  uint in_BX;
  uint uVar1;
  bool bVar2;
  
  uVar1 = in_BX & 0xff01;
  bVar2 = (char)uVar1 == '\0';
  if (bVar2) {
    return 0x4f;
  }
  FUN_c000_7087();
  if (bVar2) {
    bVar2 = true;
    FUN_c000_638c(uVar1);
    if (!bVar2) {
      return 0x4f;
    }
  }
  return 0x34f;
}


/* ---- FUN_c000_99dc @ c000:99dc size=57 ---- */

undefined2 __cdecl16near FUN_c000_99dc(void)

{
  code *pcVar1;
  byte bVar3;
  undefined2 uVar2;
  undefined4 in_EAX;
  
  bVar3 = (byte)((ulong)in_EAX >> 8);
  if (0x1c < bVar3) {
    pcVar1 = (code *)swi(0x42);
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  (*(code *)*(undefined2 *)((uint)bVar3 * 2 + -0x65da))();
  return (int)((ulong)in_EAX >> 0x10);
}


/* ---- FUN_c000_9a15 @ c000:9a15 size=17 ---- */

void __cdecl16near FUN_c000_9a15(void)

{
  uint in_AX;
  
  (*(code *)*(undefined2 *)((in_AX >> 8) * 2 + -0x65da))();
  return;
}


/* ---- FUN_c000_9ee1 @ c000:9ee1 size=17 ---- */

byte __cdecl16near FUN_c000_9ee1(void)

{
  byte bVar1;
  byte in_BL;
  byte in_BH;
  
  out(0x3c4,1);
  bVar1 = in(0x3c5);
  bVar1 = bVar1 & in_BH | in_BL;
  out(0x3c5,bVar1);
  return bVar1;
}


/* ---- FUN_c000_a564 @ c000:a564 size=20 ---- */

void __cdecl16near FUN_c000_a564(void)

{
  FUN_c000_a578();
  FUN_c000_dc6e();
  FUN_c000_dc48();
  FUN_c000_bfec();
  return;
}


/* ---- FUN_c000_a578 @ c000:a578 size=71 ---- */

void __cdecl16near FUN_c000_a578(void)

{
  undefined2 uVar1;
  uint in_CX;
  
  uVar1 = DAT_c000_6106;
  *(undefined2 *)0x487 = 0xf960;
  *(undefined1 *)0x48a = 0xb;
  *(byte *)0x489 = *(byte *)0x489 & 0x17 | 0x11;
  FUN_c000_c40a();
  *(byte *)0x410 = *(byte *)0x410 & 0xcf;
  *(byte *)0x410 = *(byte *)0x410 | 0x20;
  *(undefined2 *)0x463 = 0x3d4;
  FUN_c000_69db();
  if ((in_CX & 2) == 0) {
    FUN_c000_697d();
  }
  FUN_c000_9a15();
  return;
}


/* ---- FUN_c000_a5bf @ c000:a5bf size=12 ---- */

void __cdecl16near FUN_c000_a5bf(void)

{
  return;
}


/* ---- FUN_c000_bfec @ c000:bfec size=1 ---- */

void __cdecl16near FUN_c000_bfec(void)

{
  return;
}


/* ---- FUN_c000_c40a @ c000:c40a size=12 ---- */

byte __cdecl16near FUN_c000_c40a(void)

{
  byte bVar1;
  byte in_AH;
  
  bVar1 = in(0x3cc);
  bVar1 = bVar1 & 0xfe | in_AH;
  out(0x3c2,bVar1);
  return bVar1;
}


/* ---- FUN_c000_c606 @ c000:c606 size=10 ---- */

undefined1 __cdecl16near FUN_c000_c606(void)

{
  undefined1 in_AL;
  undefined1 uVar1;
  int in_DX;
  
  out(in_DX,in_AL);
  uVar1 = in(in_DX + 1);
  return uVar1;
}


/* ---- FUN_c000_c61f @ c000:c61f size=12 ---- */

void __cdecl16near FUN_c000_c61f(void)

{
  return;
}


/* ---- FUN_c000_c96b @ c000:c96b size=61 ---- */

uint __cdecl16near FUN_c000_c96b(void)

{
  char cVar1;
  undefined2 extraout_DX;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  FUN_c000_c606();
  uVar4 = FUN_c000_c606();
  uVar2 = (undefined2)((ulong)uVar4 >> 0x10);
  uVar3 = (undefined2)uVar4;
  out(uVar2,0xaa0e);
  out(uVar2,0x550f);
  cVar1 = FUN_c000_c606();
  uVar2 = extraout_DX;
  if (cVar1 != -0x56) {
    uVar4 = FUN_c000_c606();
    uVar2 = (undefined2)((ulong)uVar4 >> 0x10);
    if ((char)uVar4 != 'U') {
      return (uint)uVar4 & 0xff00;
    }
  }
  out(uVar2,CONCAT11((char)((uint)uVar3 >> 8),0xe));
  out(uVar2,CONCAT11((char)uVar3,0xf));
  return CONCAT11((char)uVar3,1);
}


/* ---- FUN_c000_dc48 @ c000:dc48 size=38 ---- */

void __cdecl16near FUN_c000_dc48(void)

{
  char cVar1;
  int in_BX;
  int *piVar2;
  undefined2 unaff_DS;
  
  cVar1 = '\0';
  piVar2 = (int *)0xdcec;
  do {
    if ((in_BX == *piVar2) ||
       (in_BX = CONCAT11((char)in_BX,(char)((uint)in_BX >> 8)), in_BX == *piVar2))
    goto LAB_c000_dc6a;
    piVar2 = piVar2 + 1;
    cVar1 = cVar1 + '\x01';
  } while (cVar1 <= DAT_c000_dce8);
  cVar1 = -1;
LAB_c000_dc6a:
  *(char *)0x48a = cVar1;
  return;
}


/* ---- FUN_c000_dc6e @ c000:dc6e size=66 ---- */

void __cdecl16near FUN_c000_dc6e(void)

{
  byte bVar1;
  char extraout_DL;
  undefined2 unaff_DS;
  bool bVar2;
  
  bVar2 = (*(byte *)0x489 & 2) == 0;
  if (!bVar2) {
    bVar1 = in(0x3cc);
    bVar2 = (bVar1 & 1) == 0;
    if (bVar2) {
      FUN_c000_c96b();
      if (bVar2) {
        return;
      }
      FUN_c000_c61f();
      return;
    }
  }
  FUN_c000_c96b();
  if ((!bVar2) && (FUN_c000_c61f(), extraout_DL != -0x2c)) {
    return;
  }
  return;
}


