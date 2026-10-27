/* MES_2 firmware - decompiled with Ghidra, post-processed by tools/postproc.py */
#include <stdint.h>

/* FIFO ports of the RS64 core (see docs/RS64_CORE.md) */
uint32_t pkt_in(void);          /* pop next dword of the current PM4 packet (TP_R302) */
void     pkt_out(uint32_t v);   /* push a dword to the downstream FIFO (TP_R000)      */
void     pkt_out_repeat(uint32_t v, int n);   /* pkt_out(v) n times */
void     pm4_next(void);        /* pkt_in() -> a0, then jump to the handler registered for that header */
void     pm4_dispatch(uint32_t hdr); /* jump to the handler for a header already popped */

extern volatile uint32_t MMIO0_000C10;  /* 0x1000000000c10 */
extern volatile uint32_t MMIO0_000C14;  /* 0x1000000000c14 */
extern volatile uint32_t MMIO0_000C18;  /* 0x1000000000c18 */
extern volatile uint32_t MMIO0_001F10;  /* 0x1000000001f10 */
extern volatile uint32_t MMIO0_001F14;  /* 0x1000000001f14 */
extern volatile uint32_t MMIO0_001F18;  /* 0x1000000001f18 */
extern volatile uint32_t MMIO0_001F1C;  /* 0x1000000001f1c */
extern volatile uint32_t MMIO0_001F28;  /* 0x1000000001f28 */
extern volatile uint32_t MMIO0_001F30;  /* 0x1000000001f30 */
extern volatile uint32_t regCPC_INT_INFO;  /* 0x100000000c0dc */
extern volatile uint32_t regCPC_INT_ADDR;  /* 0x100000000c0e4 */
extern volatile uint32_t regCP_GFX_QUEUE_INDEX;  /* 0x100000000c25c */
extern volatile uint32_t regCPC_INT_STATUS;  /* 0x100000000c2d4 */
extern volatile uint32_t regCPC_INT_CNTX_ID;  /* 0x100000000c2dc */
extern volatile uint32_t regCP_PQ_STATUS;  /* 0x100000000c2e0 */
extern volatile uint32_t regCP_GFX_INDEX_MUTEX;  /* 0x100000000c360 */
extern volatile uint32_t regCP_HQD_GFX_CONTROL;  /* 0x100000000c3fc */
extern volatile uint32_t regCP_MQD_BASE_ADDR;  /* 0x100000000c824 */
extern volatile uint32_t regCP_HQD_ACTIVE;  /* 0x100000000c82c */
extern volatile uint32_t regCP_HQD_VMID;  /* 0x100000000c830 */
extern volatile uint32_t regCP_HQD_PQ_RPTR;  /* 0x100000000c84c */
extern volatile uint32_t regCP_HQD_PQ_DOORBELL_CONTROL;  /* 0x100000000c860 */
extern volatile uint32_t regCP_HQD_PQ_CONTROL;  /* 0x100000000c868 */
extern volatile uint32_t regCP_HQD_IQ_TIMER;  /* 0x100000000c87c */
extern volatile uint32_t regCP_HQD_DEQUEUE_REQUEST;  /* 0x100000000c884 */
extern volatile uint32_t regCP_HQD_ATOMIC0_PREOP_LO;  /* 0x100000000c894 */
extern volatile uint32_t regCP_MQD_CONTROL;  /* 0x100000000c8ac */
extern volatile uint32_t regCP_HQD_HQ_CONTROL1;  /* 0x100000000c8b4 */
extern volatile uint32_t regCP_HQD_ERROR;  /* 0x100000000c8f0 */
extern volatile uint32_t regCP_HQD_PQ_WPTR_LO;  /* 0x100000000c8fc */
extern volatile uint32_t regCP_HQD_PQ_WPTR_HI;  /* 0x100000000c900 */
extern volatile uint32_t regCP_HQD_DEQUEUE_STATUS;  /* 0x100000000c920 */
extern volatile uint32_t regGRBM_NOWHERE;  /* 0x100000002a404 */
extern volatile uint32_t regRLC_CP_SCHEDULERS;  /* 0x100000002a628 */
extern volatile uint32_t regCP_HPD_STATUS0;  /* 0x100000002e088 */
extern volatile uint32_t regCP_DMA_ME_CONTROL;  /* 0x10000000301e0 */
extern volatile uint32_t regCP_DMA_ME_SRC_ADDR;  /* 0x1000000030200 */
extern volatile uint32_t regCP_DMA_ME_SRC_ADDR_HI;  /* 0x1000000030204 */
extern volatile uint32_t regCP_DMA_ME_DST_ADDR;  /* 0x1000000030208 */
extern volatile uint32_t regCP_DMA_ME_DST_ADDR_HI;  /* 0x100000003020c */
extern volatile uint32_t regCP_DMA_ME_COMMAND;  /* 0x1000000030210 */
extern volatile uint32_t regCP_MES_CNTL;  /* 0x100000003201c */
extern volatile uint32_t regCP_MES_MTIMECMP_LO;  /* 0x10000000320e0 */
extern volatile uint32_t regCP_MES_DOORBELL_CONTROL1;  /* 0x10000000320f0 */
extern volatile uint32_t regCP_MES_DEBUG_INTERRUPT_INSTR_PNTR;  /* 0x1000000032108 */
extern volatile uint32_t regCP_MES_LOCAL_BASE0_LO;  /* 0x100000003220c */
extern volatile uint32_t regCP_MES_LOCAL_BASE0_HI;  /* 0x1000000032210 */
extern volatile uint32_t regCP_MES_LOCAL_MASK0_HI;  /* 0x1000000032218 */
extern volatile uint32_t regCP_MES_LOCAL_APERTURE;  /* 0x100000003221c */
extern volatile uint32_t regCP_MES_LOCAL_INSTR_BASE_LO;  /* 0x1000000032220 */
extern volatile uint32_t regCP_MES_LOCAL_INSTR_BASE_HI;  /* 0x1000000032224 */
extern volatile uint32_t regCP_MES_LOCAL_INSTR_MASK_HI;  /* 0x100000003222c */
extern volatile uint32_t regCP_MES_LOCAL_INSTR_APERTURE;  /* 0x1000000032230 */
extern volatile uint32_t MMIO0_032278;  /* 0x1000000032278 */
extern volatile uint32_t MMIO0_03F050;  /* 0x100000003f050 */
extern volatile uint32_t MMIO0_03F058;  /* 0x100000003f058 */
extern volatile uint32_t TP_R000;  /* 0x2000000000000 */
extern volatile uint32_t TP_R008;  /* 0x2000000000008 */
extern volatile uint32_t TP_R020;  /* 0x2000000000020 */
extern volatile uint32_t TP_R028;  /* 0x2000000000028 */
extern volatile uint32_t TP_R030;  /* 0x2000000000030 */
extern volatile uint32_t TP_R040;  /* 0x2000000000040 */
extern volatile uint32_t TP_R048;  /* 0x2000000000048 */
extern volatile uint32_t TP_R060;  /* 0x2000000000060 */
extern volatile uint32_t TP_R070;  /* 0x2000000000070 */
extern volatile uint32_t TP_R074;  /* 0x2000000000074 */
extern volatile uint32_t TP_R078;  /* 0x2000000000078 */
extern volatile uint32_t TP_R080;  /* 0x2000000000080 */
extern volatile uint32_t TP_R090;  /* 0x2000000000090 */
extern volatile uint32_t TP_R098;  /* 0x2000000000098 */
extern volatile uint32_t TP_R0D0;  /* 0x20000000000d0 */
extern volatile uint32_t TP_R0D8;  /* 0x20000000000d8 */
extern volatile uint32_t TP_R0E8;  /* 0x20000000000e8 */
extern volatile uint32_t TP_R0F8;  /* 0x20000000000f8 */
extern volatile uint32_t TP_R108;  /* 0x2000000000108 */
extern volatile uint32_t TP_R120;  /* 0x2000000000120 */
extern volatile uint32_t TP_R150;  /* 0x2000000000150 */
extern volatile uint32_t TP_R1B0;  /* 0x20000000001b0 */
extern volatile uint32_t TP_R1B8;  /* 0x20000000001b8 */
extern volatile uint32_t TP_R2F8;  /* 0x20000000002f8 */
extern volatile uint32_t TP_R320;  /* 0x2000000000320 */
extern volatile uint32_t TP_R380;  /* 0x2000000000380 */
extern volatile uint32_t TP_R390;  /* 0x2000000000390 */
extern volatile uint32_t TP_R398;  /* 0x2000000000398 */
extern volatile uint32_t TP_R428;  /* 0x2000000000428 */
extern volatile uint32_t TP_R470;  /* 0x2000000000470 */
extern volatile uint32_t TP_R4B0;  /* 0x20000000004b0 */
extern volatile uint32_t TP_R4B8;  /* 0x20000000004b8 */
extern volatile uint32_t TP_R4C8;  /* 0x20000000004c8 */
extern volatile uint32_t TP_R518;  /* 0x2000000000518 */
extern volatile uint32_t TP_R528;  /* 0x2000000000528 */
extern volatile uint32_t TP_R530;  /* 0x2000000000530 */
extern volatile uint32_t TP_R5A0;  /* 0x20000000005a0 */
extern volatile uint32_t g_00178;  /* 0xfffffffff0100178 */
extern volatile uint32_t g_00180;  /* 0xfffffffff0100180 */
extern volatile uint32_t g_00188;  /* 0xfffffffff0100188 */
extern volatile uint32_t g_00190;  /* 0xfffffffff0100190 */
extern volatile uint32_t g_00198;  /* 0xfffffffff0100198 */
extern volatile uint32_t g_001a0;  /* 0xfffffffff01001a0 */
extern volatile uint32_t g_001a8;  /* 0xfffffffff01001a8 */
extern volatile uint32_t g_001b0;  /* 0xfffffffff01001b0 */
extern volatile uint32_t g_001b8;  /* 0xfffffffff01001b8 */
extern volatile uint32_t g_001c0;  /* 0xfffffffff01001c0 */
extern volatile uint32_t g_001c8;  /* 0xfffffffff01001c8 */
extern volatile uint32_t g_001d0;  /* 0xfffffffff01001d0 */
extern volatile uint32_t g_001d8;  /* 0xfffffffff01001d8 */
extern volatile uint32_t g_001e0;  /* 0xfffffffff01001e0 */
extern volatile uint32_t g_001e8;  /* 0xfffffffff01001e8 */
extern volatile uint32_t g_10000;  /* 0xfffffffff0110000 */
extern volatile uint32_t g_3a158;  /* 0xfffffffff013a158 */
extern volatile uint32_t g_3a15c;  /* 0xfffffffff013a15c */
extern volatile uint32_t g_3a160;  /* 0xfffffffff013a160 */
extern volatile uint32_t g_3a168;  /* 0xfffffffff013a168 */
extern volatile uint32_t g_3a16c;  /* 0xfffffffff013a16c */
extern volatile uint32_t g_3a170;  /* 0xfffffffff013a170 */
extern volatile uint32_t g_3a174;  /* 0xfffffffff013a174 */
extern volatile uint32_t g_3a178;  /* 0xfffffffff013a178 */
extern volatile uint32_t g_3a17c;  /* 0xfffffffff013a17c */
extern volatile uint32_t g_3a180;  /* 0xfffffffff013a180 */
extern volatile uint32_t g_3a264;  /* 0xfffffffff013a264 */
extern volatile uint32_t g_3a268;  /* 0xfffffffff013a268 */
extern volatile uint32_t g_3a26c;  /* 0xfffffffff013a26c */
extern volatile uint32_t g_3a270;  /* 0xfffffffff013a270 */
extern volatile uint32_t g_3a274;  /* 0xfffffffff013a274 */
extern volatile uint32_t g_3a278;  /* 0xfffffffff013a278 */
extern volatile uint32_t g_3a368;  /* 0xfffffffff013a368 */
extern volatile uint32_t g_3a36c;  /* 0xfffffffff013a36c */
extern volatile uint32_t g_3a370;  /* 0xfffffffff013a370 */
extern volatile uint32_t g_3a374;  /* 0xfffffffff013a374 */
extern volatile uint32_t g_3a378;  /* 0xfffffffff013a378 */
extern volatile uint32_t g_3a468;  /* 0xfffffffff013a468 */
extern volatile uint32_t g_3a46c;  /* 0xfffffffff013a46c */
extern volatile uint32_t g_3a46f;  /* 0xfffffffff013a46f */
extern volatile uint32_t g_3a470;  /* 0xfffffffff013a470 */
extern volatile uint32_t g_3a478;  /* 0xfffffffff013a478 */
extern volatile uint32_t g_3a480;  /* 0xfffffffff013a480 */
extern volatile uint32_t g_3a568;  /* 0xfffffffff013a568 */
extern volatile uint32_t g_3a56c;  /* 0xfffffffff013a56c */
extern volatile uint32_t g_3a668;  /* 0xfffffffff013a668 */
extern volatile uint32_t g_3aad0;  /* 0xfffffffff013aad0 */
extern volatile uint32_t g_3aad8;  /* 0xfffffffff013aad8 */
extern volatile uint32_t g_3aae0;  /* 0xfffffffff013aae0 */
extern volatile uint32_t g_3aae8;  /* 0xfffffffff013aae8 */
extern volatile uint32_t g_3aaf0;  /* 0xfffffffff013aaf0 */
extern volatile uint32_t g_3aaf8;  /* 0xfffffffff013aaf8 */
extern volatile uint32_t g_3ab00;  /* 0xfffffffff013ab00 */
extern volatile uint32_t g_3ab08;  /* 0xfffffffff013ab08 */
extern volatile uint32_t g_3ab10;  /* 0xfffffffff013ab10 */
extern volatile uint32_t g_3ab18;  /* 0xfffffffff013ab18 */
extern volatile uint32_t g_3ab20;  /* 0xfffffffff013ab20 */
extern volatile uint32_t g_3ab28;  /* 0xfffffffff013ab28 */
extern volatile uint32_t g_3ab30;  /* 0xfffffffff013ab30 */
extern volatile uint32_t g_3ab40;  /* 0xfffffffff013ab40 */
extern volatile uint32_t g_3ab48;  /* 0xfffffffff013ab48 */
extern volatile uint32_t g_3ab60;  /* 0xfffffffff013ab60 */
extern volatile uint32_t g_3ab64;  /* 0xfffffffff013ab64 */
extern volatile uint32_t g_3ab68;  /* 0xfffffffff013ab68 */
extern volatile uint32_t g_3ab6c;  /* 0xfffffffff013ab6c */
extern volatile uint32_t g_3ab70;  /* 0xfffffffff013ab70 */
extern volatile uint32_t g_3ab78;  /* 0xfffffffff013ab78 */

/* Decompiled by Ghidra RISCV:LE:64:RS64MES - gc_11_0_0_mes_2.image.bin */

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
  
  uVar14 = TP_R008;
  lVar5 = regCP_MQD_BASE_ADDR;
  TP_R098 = CONCAT44(TP_R074,TP_R070) | 0x2001;
  do {
  } while ((TP_R008 & 0x8000) == 0);
  if ((TP_R008 & 0x1f) != 7) {
    if ((TP_R008 & 0x1f) != 0xb) {
      FUN_fffffffff001dc04(TP_R008,TP_R4C8);
      return param_1;
    }
    TP_R098 = CONCAT44(TP_R074,TP_R070) | 0x2008;
    MMIO0_000C10 = MMIO0_000C10 & 0xfffffffffff0ffff;
    if (TP_R428 != 0x800) {
      TP_R530 = 0;
      TP_R528 = 0x3ffffffffc0009c6;
      TP_R020 = 0xb;
      return param_1;
    }
    uVar14 = (ulong)(regRLC_CP_SCHEDULERS >> 3) & 3;
    if ((((ulong)TP_R060 & 3) != uVar14) &&
       (TP_R098 =
             CONCAT44(TP_R074,
                      (uint)(uVar14 << 6) | 0x2008 | (uint)(((ulong)regRLC_CP_SCHEDULERS & 7) << 8) |
                      (uint)(((ulong)(regRLC_CP_SCHEDULERS >> 5) & 3) << 4)),
       (regCP_HQD_HQ_CONTROL1 & 0x40000000) == 0)) {
      FUN_fffffffff000721c();
    }
    do {
    } while (TP_R090 != 0);
    do {
    } while (TP_R4B8 != 0);
    do {
    } while( true );
  }
  uVar12 = TP_R2F8 >> 0x10;
  if (uVar12 < 2) {
    if (uVar12 == 0) goto LAB_fffffffff00020f4;
    TP_R1B8 = 8;
    uVar12 = TP_R2F8 & 0xff;
    if ((uVar12 == 0xc) || (uVar12 == 0x12)) goto LAB_fffffffff0002280;
    if (uVar12 != 0xe) {
      if (uVar12 != 8) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      TP_R098 =
           CONCAT44(TP_R074,TP_R2F8 >> 4) & 0xffffffff000007f0 | 0x2008;
      if ((regCP_HQD_DEQUEUE_REQUEST & 7) == 0) {
        uVar2 = FUN_fffffffff0002a3c();
        return uVar2;
      }
      goto LAB_fffffffff00023e8;
    }
  }
  else {
    TP_R1B8 = 2;
LAB_fffffffff00020f4:
    uVar13 = regCP_HPD_STATUS0 & 0x1f;
    if (uVar13 == 2) {
      TP_R048 = regCP_HPD_STATUS0 >> 5 & 3;
      lVar5 = 1000;
      do {
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      TP_R1B0 = 0;
      uVar2 = FUN_fffffffff0002a3c();
      return uVar2;
    }
    if ((uVar13 == 5) || (uVar13 == 6)) {
      TP_R1B0 = 0;
      TP_R048 = regCP_HPD_STATUS0 >> 5 & 3;
      uVar2 = FUN_fffffffff0002a3c();
      return uVar2;
    }
    if (uVar13 == 0xc) {
      TP_R1B0 = 7;
      regCP_PQ_STATUS = 2;
      uVar2 = FUN_fffffffff0002a3c();
      return uVar2;
    }
    if (uVar13 == 0xf) {
      TP_R1B0 = 2;
      uVar2 = FUN_fffffffff0002a3c();
      return uVar2;
    }
    if (uVar13 == 0x11) {
      TP_R1B0 = 3;
      do {
        lVar5 = 200;
        do {
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      } while ((regCP_HPD_STATUS0 & 0x1f) != 0x14);
      if ((TP_R2F8 & 0x20000) != 0) {
        TP_R1B8 = 7;
      }
      FUN_fffffffff0002ac4();
      do {
      } while (TP_R090 != 0);
      TP_R028 = 0xc0;
      TP_R1B0 = 4;
      return param_1;
    }
    if (1 < uVar12) goto code_r0xfffffffff0002a3c;
    puVar4 = (uint *)&regCP_MES_DOORBELL_CONTROL1;
    uVar12 = 0;
    do {
      uVar12 = uVar12 | *puVar4 >> 0x1f;
      puVar4 = puVar4 + 1;
    } while ((long)puVar4 < 0x1000000032104);
    if (uVar12 == 0) {
      TP_R098 =
           CONCAT44(TP_R074,TP_R2F8 >> 4) & 0xffffffff000007f0 | 0x2008;
      if ((regCP_HQD_DEQUEUE_REQUEST & 7) != 0) {
LAB_fffffffff00023e8:
        if ((regCP_HQD_ACTIVE & 7) == 0) {
          regCP_HQD_DEQUEUE_REQUEST = 0;
          uVar2 = FUN_fffffffff0002a3c();
          return uVar2;
        }
        uVar12 = (uint)((ulong)TP_R028 >> 0x20);
        TP_R398 = uVar12 >> 6 & 0xf;
        *(long *)(regCP_MQD_BASE_ADDR + 0x200) = regCP_MQD_BASE_ADDR;
        *(undefined4 *)(lVar5 + 0x208) = 0;
        puVar10 = (undefined4 *)(lVar5 + 0x20c);
        puVar6 = (undefined4 *)&regCP_HQD_VMID;
        lVar8 = 0xd;
        do {
          *puVar10 = *puVar6;
          puVar10 = puVar10 + 1;
          puVar6 = puVar6 + 1;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
        *(undefined4 *)(lVar5 + 0x244) = regCP_HQD_PQ_CONTROL;
        lVar8 = 6;
        puVar6 = (undefined4 *)&regCP_HQD_ATOMIC0_PREOP_LO;
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
        *(undefined4 *)(lVar5 + 0x2cc) = regCP_HQD_ERROR;
        *(undefined4 *)(lVar5 + 0x2d8) = regCP_HQD_PQ_WPTR_LO;
        *(undefined4 *)(lVar5 + 0x2dc) = regCP_HQD_PQ_WPTR_HI;
        *(undefined4 *)(lVar5 + 0x2e0) = regCP_HQD_GFX_CONTROL;
        TP_R470 = 0;
        do {
        } while (TP_R090 != 0);
        regCP_HQD_IQ_TIMER = 0;
        if ((regCP_HQD_PQ_DOORBELL_CONTROL & 0x40000000) != 0) {
          regCP_HQD_PQ_DOORBELL_CONTROL = 2;
        }
        regCP_MQD_CONTROL = 0x2000;
        TP_R120 = uVar12 & 3;
        TP_R0D8 = uVar12 >> 0x11 & 0xc0;
        regCP_HQD_ACTIVE = 0;
        regCP_HQD_PQ_WPTR_LO = 0;
        regCP_HQD_PQ_WPTR_HI = 0;
        regCP_HQD_PQ_RPTR = 0;
        regCP_HQD_DEQUEUE_REQUEST = 0;
        regCP_HQD_DEQUEUE_STATUS = 0;
        regCP_PQ_STATUS = 2;
        uVar2 = FUN_fffffffff0002a3c();
        return uVar2;
      }
      if (regCP_HQD_HQ_CONTROL1 == 0) {
        uVar2 = FUN_fffffffff0002a3c();
        return uVar2;
      }
LAB_fffffffff0002280:
      FUN_fffffffff001dc04(TP_R008,TP_R2F8);
      return param_1;
    }
  }
  uVar3 = 0;
LAB_fffffffff0002204:
  do {
    puVar4 = (uint *)&regCP_MES_DOORBELL_CONTROL1;
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
    regCP_PQ_STATUS = 2;
    uVar2 = FUN_fffffffff0002a3c(0x1f);
    return uVar2;
  }
code_r0xfffffffff0002a3c:
  TP_R020 = uVar14 & 0x1f;
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
    FUN_fffffffff000721c();
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
    TP_R518 = 1;
  }
  TP_R020 = param_1;
  return;
}


/* ---- FUN_fffffffff0002b18 @ fffffffff0002b18 size=68 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0002b18(ulong param_1,long param_2)

{
  if (param_2 == 0x45) {
    if ((long)param_1 < 6) {
      TP_R518 = 1;
    }
    TP_R5A0 = 1L << (param_1 & 0x3f);
    return;
  }
  if ((long)param_1 < 6) {
    TP_R518 = 1;
  }
  TP_R020 = param_1;
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
  
  uVar4 = TP_R070;
  lVar18 = 0x2000000000000;
  lVar19 = 0x1000000000000;
  uVar13 = TP_R070 | 0x2008;
  uVar14 = TP_R070 | 0x2001;
  MMIO0_000C10 = 0;
  if ((((ulong)(long)regCP_MES_CNTL >> 0x1a & 3) != 3) || ((TP_R060 & 1) == 0)) {
    regCP_MES_LOCAL_APERTURE = 7;
    regCP_MES_LOCAL_BASE0_LO = 0xf0100000;
    regCP_MES_LOCAL_BASE0_HI = 0x7fffff0100000;
    regCP_MES_LOCAL_MASK0_HI = 0;
    regCP_MES_LOCAL_INSTR_APERTURE = 7;
    regCP_MES_LOCAL_INSTR_BASE_LO = 0xf0000000;
    regCP_MES_LOCAL_INSTR_BASE_HI = 0x3fffff0000000;
    regCP_MES_LOCAL_INSTR_MASK_HI = 0;
  }
  MMIO0_000C14 = 0xfc000800;
  MMIO0_000C18 = 0x3fffffff;
  lVar15 = 0;
  lVar16 = 0;
  do {
    *(undefined8 *)(lVar15 + 0x10000000322c0) = 0xffffffff;
    *(undefined8 *)(lVar15 + 0x10000000322c4) = 0x10;
    uVar3 = MMIO0_001F18;
    uVar2 = MMIO0_001F14;
    lVar15 = lVar15 + 0xc;
    lVar16 = lVar16 + 1;
  } while (lVar16 < 0x10);
  regCP_MES_DEBUG_INTERRUPT_INSTR_PNTR = 0xfc000000;
  MMIO0_032278 = 0x3fffffff;
  tp = 0;
  if ((MMIO0_001F10 & 1) == 0) {
    _DAT_fffffffff017fff8 = sub_0566c;
    TP_R098 = uVar13;
    FUN_fffffffff00055b8(0,0,0,0,0,0,0);
    FUN_fffffffff00055e8();
    FUN_fffffffff000554c();
    FUN_fffffffff000563c();
    FUN_fffffffff001ee50((long)_DAT_fffffffff017ffb0,0xfffffffff017ffb1,0);
    return;
  }
  TP_R528 = CONCAT44(MMIO0_001F14,MMIO0_001F10) >> 1;
  tp = TP_R528 << 2;
  lVar15 = CONCAT44(MMIO0_001F1C,MMIO0_001F18);
  MMIO0_03F050 = MMIO0_001F28;
  MMIO0_03F058 = MMIO0_001F30;
  TP_R470 = 0;
  TP_R398 = MMIO0_001F18 >> 6 & 0xf;
  TP_R120 = MMIO0_001F18 & 3;
  TP_R0D8 = MMIO0_001F18 >> 0x10 & 0x180;
  TP_R098 = CONCAT44((int)(uVar4 >> 0x20),MMIO0_001F14);
  TP_R530 = 1;
  FUN_fffffffff000563c();
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
  ulong *puVar1;
  
  for (puVar1 = &g_001e8; puVar1 < &g_001e8; puVar1 = puVar1 + 1) {
    (*(code *)(*puVar1 & 0xfffffffffffffffe))();
  }
  for (puVar1 = &g_001e8; puVar1 < &g_001e8; puVar1 = puVar1 + 1) {
    (*(code *)(*puVar1 & 0xfffffffffffffffe))();
  }
  return;
}


/* ---- FUN_fffffffff00055b8 @ fffffffff00055b8 size=48 ---- */

void FUN_fffffffff00055b8(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &g_10000; puVar1 < (undefined8 *)0xfffffffff013ab80;
      puVar1 = puVar1 + 4) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
  }
  return;
}


/* ---- FUN_fffffffff00055e8 @ fffffffff00055e8 size=84 ---- */

/* WARNING: Removing unreachable block (ram,0xfffffffff0005608) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000560c) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0005638) */

void FUN_fffffffff00055e8(void)

{
  return;
}


/* ---- FUN_fffffffff000563c @ fffffffff000563c size=48 ---- */

void FUN_fffffffff000563c(long param_1)

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


/* ---- sub_0566c @ fffffffff000566c size=4 ---- */

void sub_0566c(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_fffffffff0005670 @ fffffffff0005670 size=352 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0005670(void)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int iStack_48;
  uint auStack_44 [3];
  
  lVar5 = g_3ab40;
  uVar1 = *(uint *)(g_3ab40 + 0x31a4);
  iStack_48 = 0;
  FUN_fffffffff001cc94(&iStack_48);
  FUN_fffffffff001cc78(0);
  auStack_44[0] = 0;
  FUN_fffffffff001dfcc(auStack_44);
  lVar5 = lVar5 + (ulong)uVar1 * 0x100;
  *(uint *)(lVar5 + 8) = auStack_44[0];
  uVar4 = auStack_44[0] >> 0xc & 0xff;
  if (uVar4 != 1) {
    uVar2 = 0;
    do {
      FUN_fffffffff001dfcc(auStack_44);
      *(uint *)(g_3ab40 + ((ulong)uVar1 * 0x40 + (uVar2 & 0xffffffff)) * 4 + 0xc) =
           auStack_44[0];
      uVar2 = (ulong)((int)uVar2 + 1);
    } while ((long)(int)(uVar4 - 1) != uVar2);
  }
  FUN_fffffffff001dff8(6);
  if (((*(uint *)(lVar5 + 8) & 0xff0) != 0) && (*(int *)(g_3ab40 + 0x31dc) != 0)) {
    FUN_fffffffff001cdf4((long)(*(int *)(g_3ab40 + 0x31dc) + 0x1e58),4);
  }
  iVar3 = 0;
  if (uVar1 != 0x1f) {
    iVar3 = *(int *)(g_3ab40 + 0x31a4) + 1;
  }
  *(int *)(g_3ab40 + 0x31a4) = iVar3;
  FUN_fffffffff001cc78((long)iStack_48);
  return;
}


/* ---- FUN_fffffffff00057d0 @ fffffffff00057d0 size=320 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff00057d0(ulong param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  uVar4 = (ulong)*(int *)(g_3ab40 + 0x3d28);
  if ((uVar4 >> 0x13 & 1) != 0) {
    FUN_fffffffff001cdf4(0x16380,param_1 & 0xffff | 0xffffffffc5a00000);
    uVar4 = (ulong)*(int *)(g_3ab40 + 0x3d28);
  }
  if (((uVar4 >> 0xd & 1) != 0) && (lVar1 = *(long *)(g_3ab40 + 0x3d98), lVar1 != 0))
  {
    uVar4 = (ulong)*(int *)(lVar1 + 0x1e00);
    if (0x5f < uVar4) {
      *(undefined4 *)(lVar1 + 0x1e00) = 0;
      uVar4 = 0;
    }
    local_30 = (undefined4)param_2;
    puVar2 = (undefined4 *)(lVar1 + (uVar4 & 0xffffffff) * 0x18);
    *puVar2 = (int)param_1;
    puVar2[3] = local_30;
    uStack_2c = (undefined4)((ulong)param_2 >> 0x20);
    puVar2[5] = param_3;
    puVar2[4] = uStack_2c;
    uVar3 = FUN_fffffffff000bd84();
    puVar2[1] = (int)uVar3;
    puVar2[2] = (int)((ulong)uVar3 >> 0x20);
    *(int *)(lVar1 + 0x1e00) = *(int *)(lVar1 + 0x1e00) + 1;
  }
  return;
}


/* ---- FUN_fffffffff0005910 @ fffffffff0005910 size=136 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0005910(undefined4 param_1,undefined8 param_2)

{
  long lVar1;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iStack_24 = 0;
  FUN_fffffffff001cc94(&iStack_24);
  FUN_fffffffff001cc78(0);
  uStack_1c = (undefined4)param_2;
  uStack_18 = (undefined4)((ulong)param_2 >> 0x20);
  uStack_20 = param_1;
  FUN_fffffffff00057d0(3,CONCAT44(uStack_1c,param_1),CONCAT44(uStack_14,uStack_18));
  lVar1 = g_3ab40;
  *(undefined1 *)(g_3ab40 + 2) = 1;
  *(undefined1 *)(lVar1 + 0x2a0d4) = 0;
  FUN_fffffffff001e764();
  FUN_fffffffff001dff8(9);
  FUN_fffffffff001cc78((long)iStack_24);
  return;
}


/* ---- FUN_fffffffff0005b8c @ fffffffff0005b8c size=180 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff0005b8c(void)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  iVar1 = 1;
  uVar4 = 0;
  do {
    if ((*(int *)(g_3ab40 + 0x3d2c) != 2) || (uVar4 != 1)) {
      uVar3 = 0;
      do {
        uVar2 = uVar3 & 0xffffffff;
        uVar3 = (ulong)((int)uVar3 + 1);
        if ((*(uint *)(g_3ab40 + uVar2 * 0x58 + (uVar4 & 0xffffffff) * 0x1b8 + 0x2c3c)
            & 1) != 0) {
          return 1;
        }
      } while (uVar3 != 5);
      if (iVar1 == 3) {
        return 0;
      }
    }
    uVar4 = (ulong)((int)uVar4 + 1);
    iVar1 = iVar1 + 1;
  } while( true );
}


/* ---- FUN_fffffffff0005c40 @ fffffffff0005c40 size=92 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff0005c40(long param_1)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar6 = (uint *)(g_3ab40 + 0x2c20);
  lVar3 = 0;
  do {
    if (param_1 != lVar3) {
      iVar4 = 5;
      puVar5 = puVar6;
      do {
        uVar2 = *puVar5;
        puVar1 = puVar5 + 2;
        iVar4 = iVar4 + -1;
        puVar5 = puVar5 + 0x16;
        if (*puVar1 < uVar2) {
          return 1;
        }
      } while (iVar4 != 0);
    }
    lVar3 = (long)((int)lVar3 + 1);
    puVar6 = puVar6 + 0x6e;
  } while (lVar3 != 3);
  return 0;
}


/* ---- FUN_fffffffff0005c9c @ fffffffff0005c9c size=132 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_fffffffff0005c9c(long param_1,long param_2)

{
  long lVar1;
  
  if (((*(uint *)(g_3ab40 + 0x3d28) & 0x100) != 0) &&
     (lVar1 = g_3ab40 + param_1 * 0x1b8 + param_2 * 0x58,
     (*(uint *)(lVar1 + 0x2c3c) >> 1 & 1) != 0)) {
    return *(long *)(lVar1 + 0x2c34) != 0;
  }
  return false;
}


/* ---- FUN_fffffffff0005d20 @ fffffffff0005d20 size=188 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_fffffffff0005d20(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if (((*(uint *)(g_3ab40 + 0x3d28) & 0x100) == 0) ||
     (lVar2 = FUN_fffffffff000bd84(),
     (ulong)(lVar2 - *(long *)(param_1 + 0x28)) <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x10))) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
    if (*(int *)(g_3ab40 + 0x31a8) == *(int *)(g_3ab40 + 0x31a4)) {
      iVar1 = (uint)((ulong)(long)*(int *)(param_1 + 0x34) < param_2) << 1;
    }
  }
  return iVar1;
}


/* ---- FUN_fffffffff0005ddc @ fffffffff0005ddc size=304 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff0005ddc(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = g_3ab40;
  lVar7 = 4;
  if (0 < *(int *)(g_3ab40 + 0x31ac)) {
    lVar7 = (long)(*(int *)(g_3ab40 + 0x31ac) + -1);
  }
  lVar6 = (long)(int)param_1;
  lVar4 = lVar7;
  do {
    lVar5 = g_3ab40 + lVar4 * 0x58 + param_1 * 0x1b8;
    uVar1 = *(uint *)(lVar5 + 0x2c3c);
    iVar2 = (int)lVar4;
    if ((uVar1 & 1) != 0) {
      *(uint *)(lVar5 + 0x2c3c) = uVar1 & 0xfffffffe;
      *(int *)(lVar3 + 0x31ac) = iVar2;
      if (lVar4 != 5) {
        return (long)iVar2;
      }
      break;
    }
    lVar4 = (long)(iVar2 + -1);
  } while (lVar4 != -1);
  lVar4 = 4;
  if (lVar7 < 5) {
    lVar5 = param_1 * 8 - lVar6;
    do {
      iVar2 = (int)lVar4;
      if ((*(uint *)(lVar3 + lVar4 * 0x58 + (lVar5 * 8 - lVar6) * 8 + 0x2c3c) & 1) != 0) {
        lVar7 = lVar3 + lVar4 * 0x58 + (lVar5 * 8 - lVar6) * 8;
        *(uint *)(lVar7 + 0x2c3c) = *(uint *)(lVar7 + 0x2c3c) & 0xfffffffe;
        *(int *)(lVar3 + 0x31ac) = iVar2;
        return (long)iVar2;
      }
      lVar4 = (long)(iVar2 + -1);
    } while ((int)lVar7 + -1 != lVar4);
  }
  return 5;
}


/* ---- FUN_fffffffff0005f0c @ fffffffff0005f0c size=288 ---- */

long FUN_fffffffff0005f0c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8), lVar1 != 0)) {
    lVar3 = 0;
    do {
      lVar2 = FUN_fffffffff0008748(lVar1,param_2);
      if (lVar2 != 0) {
        if (param_2 == 0) {
          return 1;
        }
        lVar3 = 1;
      }
      lVar1 = *(long *)(lVar1 + 8);
    } while (lVar1 != 0);
    if (lVar3 != 0) {
      if (param_2 == 0) {
        return 1;
      }
      goto LAB_fffffffff0005f8c;
    }
  }
  lVar3 = 0;
LAB_fffffffff0005f8c:
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return lVar3;
    }
    lVar2 = FUN_fffffffff0008748(lVar1,param_2);
    if (lVar2 != 0) {
      if (param_2 == 0) {
        return 1;
      }
      lVar3 = 1;
    }
    if (lVar1 == *(long *)(param_1 + 0x20)) break;
    lVar1 = *(long *)(lVar1 + 8);
  }
  return lVar3;
}


/* ---- FUN_fffffffff000602c @ fffffffff000602c size=416 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff000602c(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = g_3ab40;
  lVar1 = *(long *)(g_3ab40 + param_1 * 0x1b8 + param_2 * 0x58 + 0x2c34);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 8), lVar1 != 0)) {
    lVar2 = 0;
    do {
      lVar3 = FUN_fffffffff0005f0c(lVar1,param_3);
      if (lVar3 != 0) {
        if (lVar2 == 0) {
          lVar2 = lVar1;
        }
        if (param_3 == 0) {
          return lVar2;
        }
      }
      lVar1 = *(long *)(lVar1 + 8);
    } while (lVar1 != 0);
    if (lVar2 != 0) {
      if (param_3 == 0) {
        return lVar2;
      }
      goto LAB_fffffffff00060fc;
    }
  }
  lVar2 = 0;
LAB_fffffffff00060fc:
  lVar4 = lVar4 + param_1 * 0x1b8 + param_2 * 0x58;
  lVar1 = *(long *)(lVar4 + 0x2be8);
  if (lVar1 == 0) {
    return lVar2;
  }
  do {
    lVar3 = FUN_fffffffff0005f0c(lVar1,param_3);
    if (lVar3 != 0) {
      if (lVar2 == 0) {
        lVar2 = lVar1;
      }
      if (param_3 == 0) {
        return lVar2;
      }
    }
    if (lVar1 == *(long *)(lVar4 + 0x2c34)) {
      return lVar2;
    }
    lVar1 = *(long *)(lVar1 + 8);
  } while (lVar1 != 0);
  return lVar2;
}


/* ---- FUN_fffffffff00061cc @ fffffffff00061cc size=320 ---- */

long FUN_fffffffff00061cc(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    lVar4 = 0;
    for (lVar2 = *plVar1; lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      while ((((*(uint *)(lVar2 + 0x10) & 0x100) != 0 ||
              (lVar3 = FUN_fffffffff0008748(lVar2,0), lVar3 == 0)) ||
             ((lVar4 != 0 && (*(uint *)(lVar2 + 0x24) <= *(uint *)(lVar4 + 0x24)))))) {
        lVar2 = *(long *)(lVar2 + 8);
        if (lVar2 == 0) goto LAB_fffffffff000626c;
      }
      lVar4 = lVar2;
    }
  }
LAB_fffffffff000626c:
  lVar2 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar2 == 0) {
      return lVar4;
    }
    if ((((*(uint *)(lVar2 + 0x10) & 0x100) == 0) &&
        (lVar3 = FUN_fffffffff0008748(lVar2,0), lVar3 != 0)) &&
       ((lVar4 == 0 || (*(uint *)(lVar4 + 0x24) < *(uint *)(lVar2 + 0x24))))) {
      lVar3 = *(long *)(param_1 + 0x20);
      lVar4 = lVar2;
    }
    else {
      lVar3 = *(long *)(param_1 + 0x20);
    }
    if (lVar2 == lVar3) break;
    lVar2 = *(long *)(lVar2 + 8);
  }
  return lVar4;
}


/* ---- FUN_fffffffff000630c @ fffffffff000630c size=320 ---- */

long FUN_fffffffff000630c(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x44);
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    lVar4 = 0;
    for (lVar2 = *plVar1; lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      while ((((*(uint *)(lVar2 + 0x10) & 0x100) == 0 ||
              (lVar3 = FUN_fffffffff0008748(lVar2,0), lVar3 == 0)) ||
             ((lVar4 != 0 && (*(uint *)(lVar2 + 0x24) <= *(uint *)(lVar4 + 0x24)))))) {
        lVar2 = *(long *)(lVar2 + 8);
        if (lVar2 == 0) goto LAB_fffffffff00063ac;
      }
      lVar4 = lVar2;
    }
  }
LAB_fffffffff00063ac:
  lVar2 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar2 == 0) {
      return lVar4;
    }
    if ((((*(uint *)(lVar2 + 0x10) & 0x100) == 0) ||
        (lVar3 = FUN_fffffffff0008748(lVar2,0), lVar3 == 0)) ||
       ((lVar4 != 0 && (*(uint *)(lVar2 + 0x24) <= *(uint *)(lVar4 + 0x24))))) {
      lVar3 = *(long *)(param_1 + 0x44);
    }
    else {
      lVar3 = *(long *)(param_1 + 0x44);
      lVar4 = lVar2;
    }
    if (lVar2 == lVar3) break;
    lVar2 = *(long *)(lVar2 + 8);
  }
  return lVar4;
}


/* ---- sub_0644c @ fffffffff000644c size=8 ---- */

long sub_0644c(int param_1)

{
  return (long)(param_1 << 2);
}


/* ---- sub_06454 @ fffffffff0006454 size=12 ---- */

long sub_06454(int param_1)

{
  return (long)((param_1 + 5) * 4);
}


/* ---- FUN_fffffffff0006460 @ fffffffff0006460 size=216 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0006460(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = g_3ab40;
  if (((((ulong)(long)*(int *)(g_3ab40 + 0x3d28) >> 0x17 & 1) != 0) &&
      (*(int *)(g_3ab40 + 0x3da4) == 0)) &&
     (iVar1 = *(int *)(g_3ab40 + 0x3d2c), iVar1 != 2)) {
    if (*(int *)(g_3ab40 + 0x2a144) == 0) {
      if ((iVar1 == 1) && (*(int *)(g_3ab40 + 0x2a148) == 0)) {
        *(undefined4 *)(g_3ab40 + 0x3d2c) = 0;
      }
    }
    else if ((*(int *)(g_3ab40 + 0x2a148) != 0) && (iVar1 == 0)) {
      uVar4 = FUN_fffffffff000bd84();
      lVar3 = g_3ab40;
      *(int *)(lVar2 + 0x2a14c) = (int)uVar4;
      *(int *)(lVar2 + 0x2a150) = (int)((ulong)uVar4 >> 0x20);
      *(undefined4 *)(lVar3 + 0x3d2c) = 1;
      FUN_fffffffff000bd24(20000);
      FUN_fffffffff000b144();
      return;
    }
  }
  return;
}


/* ---- FUN_fffffffff0006538 @ fffffffff0006538 size=636 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0006538(ulong param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined4 local_70;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  iStack_54 = 0;
  FUN_fffffffff001cc94(&iStack_54);
  FUN_fffffffff001cc78(0);
  local_70 = (undefined4)param_1;
  uStack_50 = local_70;
  uStack_4c = (undefined4)param_2;
  uStack_48 = (undefined4)(param_2 >> 0x20);
  FUN_fffffffff00057d0(0,CONCAT44(uStack_4c,local_70),CONCAT44(uStack_44,uStack_48));
  lVar3 = g_3ab40;
  uVar2 = param_1 >> 0xb & 0xf;
  uVar5 = param_1 >> 5 & 3;
  if (((*(uint *)(g_3ab40 + 0x3d28) & 0x400) == 0) || (uVar2 != 10)) {
    if (((*(uint *)(g_3ab40 + 0x3d28) & 1) == 0) && (uVar2 == 0xb)) {
      FUN_fffffffff000b144(*(undefined8 *)(g_3ab40 + 0x31b8));
      lVar3 = g_3ab40;
    }
  }
  else {
    *(undefined1 *)(g_3ab40 + 1) = 1;
    *(uint *)(lVar3 + 0x319c) = (uint)(param_1 >> 0xb) & 0xf;
  }
  lVar4 = lVar3 + (param_1 >> 7 & 7) * 0x18 + (param_1 >> 5 & 3) * 0xc0;
  if (((*(uint *)(lVar4 + 0x275c) & 1) != 0) && (lVar1 = *(long *)(lVar4 + 0x2764), lVar1 != 0)) {
    if (uVar2 == 10) {
      if ((long)*(int *)(lVar1 + 0xc) == (param_2 & 0x3ffffff)) {
        *(undefined1 *)(lVar1 + 0xa0) = 1;
        *(uint *)(lVar4 + 0x275c) = *(uint *)(lVar4 + 0x275c) & 0xfffe1fff | 0x4000;
        *(uint *)(lVar3 + 0x2a144) = ~(1 << uVar5) & *(uint *)(lVar3 + 0x2a144);
      }
      if ((*(uint *)(lVar3 + 0x3d28) & 0x10) == 0) {
        FUN_fffffffff001975c(uVar5,0);
      }
    }
    else if (uVar2 == 0xb) {
      if ((long)*(int *)(lVar1 + 0xc) == (param_2 & 0x3ffffff)) {
        *(undefined1 *)(lVar1 + 0xa0) = 0;
        *(uint *)(lVar4 + 0x275c) = *(uint *)(lVar4 + 0x275c) & 0xfffe1fff | 0x8000;
        *(uint *)(lVar3 + 0x2a144) = *(uint *)(lVar3 + 0x2a144) | 1 << uVar5;
      }
      if ((*(uint *)(lVar3 + 0x3d28) & 0x10) == 0) {
        FUN_fffffffff00198f4(uVar5,0);
      }
    }
  }
  FUN_fffffffff0006460();
  FUN_fffffffff001dff8(3);
  FUN_fffffffff001cc78((long)iStack_54);
  return;
}


/* ---- FUN_fffffffff00067b4 @ fffffffff00067b4 size=592 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff00067b4(ulong param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 local_70;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  iStack_54 = 0;
  FUN_fffffffff001cc94(&iStack_54);
  FUN_fffffffff001cc78(0);
  local_70 = (undefined4)param_1;
  uStack_50 = local_70;
  uStack_4c = (undefined4)param_2;
  uStack_48 = (undefined4)(param_2 >> 0x20);
  FUN_fffffffff00057d0(1,CONCAT44(uStack_4c,local_70),CONCAT44(uStack_44,uStack_48));
  uVar5 = param_1 >> 0xb & 0xf;
  uVar4 = param_1 >> 5 & 3;
  if (((*(uint *)(g_3ab40 + 0x3d28) & 1) == 0) && (uVar5 == 0xb)) {
    FUN_fffffffff000b144(*(undefined8 *)(g_3ab40 + 0x31b8));
  }
  lVar2 = g_3ab40;
  lVar3 = g_3ab40 + (param_1 >> 7 & 7) * 0x18 + (param_1 >> 5 & 3) * 0xc0;
  if (((*(uint *)(lVar3 + 0x211c) & 1) != 0) && (lVar1 = *(long *)(lVar3 + 0x2124), lVar1 != 0)) {
    if (uVar5 == 10) {
      if ((long)*(int *)(lVar1 + 0xc) == (param_2 & 0x3ffffff)) {
        *(undefined1 *)(lVar1 + 0xa0) = 1;
        *(uint *)(lVar3 + 0x211c) = *(uint *)(lVar3 + 0x211c) & 0xfffe1fff | 0x4000;
        *(uint *)(lVar2 + 0x2a148) = ~(1 << uVar4) & *(uint *)(lVar2 + 0x2a148);
      }
      if ((*(uint *)(lVar2 + 0x3d28) & 0x10) == 0) {
        FUN_fffffffff001975c(uVar4,1);
      }
    }
    else if (uVar5 == 0xb) {
      if ((long)*(int *)(lVar1 + 0xc) == (param_2 & 0x3ffffff)) {
        *(undefined1 *)(lVar1 + 0xa0) = 0;
        *(uint *)(lVar3 + 0x211c) = *(uint *)(lVar3 + 0x211c) & 0xfffe1fff | 0x8000;
        *(uint *)(lVar2 + 0x2a148) = *(uint *)(lVar2 + 0x2a148) | 1 << uVar4;
      }
      if ((*(uint *)(lVar2 + 0x3d28) & 0x10) == 0) {
        FUN_fffffffff00198f4(uVar4,1);
      }
    }
  }
  FUN_fffffffff0006460();
  FUN_fffffffff001dff8(4);
  FUN_fffffffff001cc78((long)iStack_54);
  return;
}


/* ---- FUN_fffffffff0006a04 @ fffffffff0006a04 size=668 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0006a04(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  int iStack_68;
  uint uStack_64;
  
  iStack_68 = 0;
  FUN_fffffffff001cc94(&iStack_68);
  FUN_fffffffff001cc78(0);
  uStack_64 = 0;
  if (param_1 == 0) {
    if (*(int *)(g_3ab40 + 0x31e0) == 0) goto LAB_fffffffff0006a7c;
    FUN_fffffffff001d0f8((long)(*(int *)(g_3ab40 + 0x31e0) + 0x289f),&uStack_64);
  }
  else {
    if ((param_1 != 1) || (*(int *)(g_3ab40 + 0x31e0) == 0))
    goto LAB_fffffffff0006a7c;
    FUN_fffffffff001d0f8((long)(*(int *)(g_3ab40 + 0x31e0) + 0x28a0),&uStack_64);
  }
  if (uStack_64 != 0) {
    uVar6 = 0;
    do {
      lVar2 = g_3ab40;
      lVar3 = (uVar6 & 0xffffffff) * 0x18 + (param_1 & 0xffffffff) * 0xf0;
      lVar5 = g_3ab40 + lVar3;
      uVar1 = *(uint *)(lVar5 + 0x291c);
      if (((uVar1 & 1) != 0) &&
         (uVar4 = uStack_64 >> ((long)((int)uVar6 << 2) & 0x1fU) & 0xf,
         uVar4 != (uVar1 >> 0xd & 0xf))) {
        *(uint *)(lVar5 + 0x291c) = uVar1 & 0xfffe1fff | uVar4 << 0xd;
        if (uVar4 == 2) {
          if ((((uVar1 & 1) != 0) && (*(long *)(lVar5 + 0x2924) != 0)) &&
             (*(undefined1 *)(*(long *)(lVar5 + 0x2924) + 0xa0) = 1,
             (*(uint *)(lVar2 + 0x3d28) & 0x10) == 0)) {
            FUN_fffffffff001975c(param_1,2);
          }
        }
        else if (uVar4 == 4) {
          if ((*(uint *)(lVar2 + 0x3d28) & 1) == 0) {
            FUN_fffffffff000b144(*(undefined8 *)(lVar2 + 0x31b8));
            lVar3 = g_3ab40 + lVar3;
            if ((*(uint *)(lVar3 + 0x291c) & 1) != 0) {
              lVar3 = *(long *)(lVar3 + 0x2924);
              lVar2 = g_3ab40;
joined_r0xfffffffff0006c98:
              if ((lVar3 != 0) &&
                 (*(undefined1 *)(lVar3 + 0xa0) = 0, (*(uint *)(lVar2 + 0x3d28) & 0x10) == 0)) {
                FUN_fffffffff00198f4(param_1,2);
              }
            }
          }
          else if ((*(uint *)(lVar5 + 0x291c) & 1) != 0) {
            lVar3 = *(long *)(lVar5 + 0x2924);
            goto joined_r0xfffffffff0006c98;
          }
        }
      }
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (uVar6 != 8);
  }
LAB_fffffffff0006a7c:
  FUN_fffffffff001dff8(param_2);
  FUN_fffffffff001cc78((long)iStack_68);
  return;
}


/* ---- FUN_fffffffff0006ca0 @ fffffffff0006ca0 size=20 ---- */

void FUN_fffffffff0006ca0(void)

{
  FUN_fffffffff0006a04(0,0x10);
  return;
}


/* ---- FUN_fffffffff0006cb4 @ fffffffff0006cb4 size=20 ---- */

void FUN_fffffffff0006cb4(void)

{
  FUN_fffffffff0006a04(1,0x11);
  return;
}


/* ---- FUN_fffffffff0006cc8 @ fffffffff0006cc8 size=72 ---- */

void FUN_fffffffff0006cc8(void)

{
  FUN_fffffffff001cdf4(0xa900,0xc);
  FUN_fffffffff001cdf4(0xc849,0x1025088);
  FUN_fffffffff001cdf4(0xa900,0);
  return;
}


/* ---- FUN_fffffffff0006d10 @ fffffffff0006d10 size=200 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_fffffffff0006d10(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long alStack_28 [2];
  
  lVar2 = g_3ab40;
  iVar1 = *(int *)(g_3ab40 + 0x3d28);
  *param_2 = 0;
  alStack_28[0] = 0;
  if ((((((ulong)(long)iVar1 >> 0x14 & 1) != 0) && ((*(uint *)(param_1 + 0x90) & 0x100) == 0)) &&
      (*(long *)(lVar2 + 0x2a0d8) != 0)) && (*(long *)(lVar2 + 0x2a0d8) != param_1)) {
    lVar2 = FUN_fffffffff000914c(alStack_28);
    if (lVar2 != 0) {
      iVar1 = FUN_fffffffff0017bc8(*(undefined8 *)(g_3ab40 + 0x2a0d8));
      return iVar1 != 0;
    }
    if (alStack_28[0] != 0) {
      *param_2 = alStack_28[0];
    }
  }
  return true;
}


/* ---- FUN_fffffffff0006dd8 @ fffffffff0006dd8 size=100 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_fffffffff0006dd8(long param_1)

{
  long lVar1;
  
  if ((((((ulong)(long)*(int *)(g_3ab40 + 0x3d28) >> 0x14 & 1) != 0) &&
       (lVar1 = *(long *)(param_1 + 0x10), (*(uint *)(lVar1 + 0x90) & 0x100) == 0)) &&
      (*(int *)(lVar1 + 0x50) == 0)) && (*(int *)(lVar1 + 0x54) == 0)) {
    return *(int *)(lVar1 + 0x58) == 0;
  }
  return false;
}


/* ---- FUN_fffffffff0006e3c @ fffffffff0006e3c size=992 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff0006e3c(long param_1,long *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 auStack_78 [2];
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x18) + 0x28);
  iVar2 = *(int *)(*(long *)(param_1 + 0x18) + 0x30);
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 1;
  lVar5 = g_3ab40;
  lVar7 = g_3ab40 + (long)iVar2 * 0x1b8 + (long)iVar1 * 0x58;
  lStack_88 = 0;
  iVar9 = *(int *)(param_1 + 0x3c);
  *(uint *)(lVar7 + 0x2c3c) = *(uint *)(lVar7 + 0x2c3c) | 4;
  *param_2 = 0;
  *(uint *)(*(long *)(param_1 + 0x10) + 0x90) =
       *(uint *)(*(long *)(param_1 + 0x10) + 0x90) & 0xfffffffe;
  *(undefined1 *)(param_1 + 0x38) = 0;
  lVar7 = FUN_fffffffff0006dd8();
  if (lVar7 != 0) {
    uVar4 = 0;
    do {
      uVar8 = uVar4 & 0xffffffff;
      uVar4 = (ulong)((int)uVar4 + 1);
      if (*(long *)(lVar5 + (uVar8 + 0x541c) * 8) != 0) {
        FUN_fffffffff0017bc8();
        lVar5 = g_3ab40;
      }
    } while (uVar4 != 8);
    if ((*(uint *)(lVar5 + 0x3d28) & 4) == 0) {
      FUN_fffffffff000cbb4();
    }
  }
  lVar5 = 0;
  do {
    lVar7 = FUN_fffffffff00061cc(param_1);
    if (lVar7 == 0) {
      lVar7 = (long)*param_3;
LAB_fffffffff00070f0:
      lVar5 = 1;
LAB_fffffffff00070f8:
      if (lVar7 != 1) {
        iVar9 = 0;
      }
LAB_fffffffff0007104:
      *(int *)(param_1 + 0x3c) = iVar9;
      if ((lStack_88 == 0) && (lVar7 = FUN_fffffffff0005f0c(param_1,0), lVar7 != 0)) {
        *(undefined1 *)(param_1 + 0x38) = 1;
      }
LAB_fffffffff000710c:
      *(uint *)(*(long *)(param_1 + 0x10) + 0x90) = *(uint *)(*(long *)(param_1 + 0x10) + 0x90) | 1;
      *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfffffffe;
      lVar7 = g_3ab40 +
              ((long)iVar2 * 0x40 + (long)iVar2 * -9 +
              (((long)iVar1 * 2 + (long)iVar1) * 4 - (long)iVar1)) * 8;
      *(uint *)(lVar7 + 0x2c3c) = *(uint *)(lVar7 + 0x2c3c) & 0xfffffffb;
      return lVar5;
    }
    uStack_80 = 0;
    auStack_78[0] = 0;
    if ((*(uint *)(lVar7 + 0x10) & 0x40) == 0) {
      if ((*(uint *)(lVar7 + 0x10) & 0x80) == 0) {
        lVar6 = FUN_fffffffff0009054(&lStack_88,&uStack_80);
        goto joined_r0xfffffffff00070b8;
      }
      if (lStack_88 == 0) goto LAB_fffffffff0006fb8;
LAB_fffffffff00071d4:
      iVar3 = *param_3;
      if (lVar5 == 0) {
        *param_2 = lStack_88;
        if (iVar3 == 1) {
          *(int *)(param_1 + 0x3c) = iVar9;
          lVar5 = 1;
          goto LAB_fffffffff000710c;
        }
        lVar5 = 1;
        iVar9 = 0;
        goto LAB_fffffffff0007104;
      }
      if (iVar3 == 1) goto LAB_fffffffff0007104;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      goto LAB_fffffffff000710c;
    }
    lVar6 = FUN_fffffffff000a2a4(&lStack_88,&uStack_80,auStack_78);
joined_r0xfffffffff00070b8:
    if (lVar6 == 0) {
      lVar7 = (long)*param_3;
      lVar5 = 0;
      goto LAB_fffffffff00070f8;
    }
    if (lStack_88 != 0) goto LAB_fffffffff00071d4;
    if ((*(uint *)(lVar7 + 0x10) & 0x40) == 0) {
      if (((*(uint *)(lVar7 + 0x10) & 0x80) == 0) &&
         (lVar5 = FUN_fffffffff0009380(lVar7,uStack_80), lVar5 == 0)) {
        lVar5 = 0;
        goto LAB_fffffffff00070a0;
      }
    }
    else {
      lVar5 = FUN_fffffffff0009ae4(lVar7,&uStack_80,auStack_78);
      if (lVar5 == 0) {
LAB_fffffffff00070a0:
        lVar7 = (long)*param_3;
        goto LAB_fffffffff00070f8;
      }
    }
LAB_fffffffff0006fb8:
    lVar5 = g_3ab40;
    if (((*(uint *)(g_3ab40 + 0x3d28) & 0x100000) != 0) &&
       (lVar6 = *(long *)(*(long *)(lVar7 + 0x34) + 0x10), (*(uint *)(lVar6 + 0x90) & 0x100) == 0))
    {
      *(int *)(g_3ab40 + 0x2a0d8) = (int)lVar6;
      *(int *)(lVar5 + 0x2a0dc) = (int)((ulong)lVar6 >> 0x20);
    }
    *(int *)(param_1 + 0x20) = (int)lVar7;
    *(int *)(param_1 + 0x24) = (int)((ulong)lVar7 >> 0x20);
    lVar7 = FUN_fffffffff0005d20(param_1,(long)iVar9);
    *param_3 = (int)lVar7;
    if (lVar7 != 0) goto LAB_fffffffff00070f0;
    iVar9 = iVar9 + 1;
    lVar5 = 1;
  } while( true );
}


/* ---- FUN_fffffffff000721c @ fffffffff000721c size=52 ---- */

void FUN_fffffffff000721c(void)

{
  undefined8 local_10;
  undefined4 uStack_4;
  
  FUN_fffffffff000dcf8(local_10 & 0xfffc0000 | 0x4000000000000,CONCAT44(uStack_4,0x18000000));
  return;
}


/* ---- FUN_fffffffff0007250 @ fffffffff0007250 size=1840 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0007250
               (undefined4 *param_1,uint *param_2,uint *param_3,uint *param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uint *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 *puVar13;
  long lVar14;
  
  FUN_fffffffff001ec50(0,0xaf4);
  uVar5 = *(uint *)(g_3ab40 + 0x3d28);
  param_1[0x1c0] = 0;
  uVar5 = uVar5 & 0x80;
  g_3ab48 = param_1;
  if (*param_2 != 0) {
    param_1[0x1c0] = 1;
  }
  if (uVar5 == 0) {
    param_1[0x1d6] = param_1[0x1d6] | 0x80;
  }
  else {
    *(ushort *)(param_1 + 0x1c0) = *(ushort *)(param_1 + 0x1c0) & 0xfc3d | 0x42;
  }
  param_1[0x1c6] = (int)(param_1 + 0x1d0);
  param_1[0x1c0] = param_1[0x1c0] & 0xffffffc3 | 0x14;
  param_1[0x1c7] = (int)((ulong)(param_1 + 0x1d0) >> 0x20);
  uVar9 = 0;
  do {
    uVar11 = uVar9 & 0xffffffff;
    *(ushort *)(param_1 + uVar11 * 6 + 0x1d1) =
         *(ushort *)(param_1 + uVar11 * 6 + 0x1d1) & 0x8000 | (ushort)((int)uVar9 << 7) & 0x7fff;
    uVar1 = *param_2;
    uVar12 = uVar9 & 0x1f;
    *(undefined4 **)(param_1 + uVar11 * 6 + 0x1d4) = param_1 + 0x1c0;
    param_1[uVar11 * 6 + 0x1d2] = 0;
    param_1[uVar11 * 6 + 0x1d3] = 0;
    uVar9 = (ulong)((int)uVar9 + 1);
    if ((uVar1 & 1 << uVar12) != 0) {
      iVar2 = param_1[0x2b8];
      param_1[uVar11 * 6 + 0x1d0] = param_1[uVar11 * 6 + 0x1d0] & 0xfffe1ffe | 0x4001;
      param_1[0x2b8] = iVar2 + 1;
    }
  } while (uVar9 != 8);
  param_1[0x1c8] = 0;
  if (param_2[1] != 0) {
    param_1[0x1c8] = 1;
  }
  if (uVar5 == 0) {
    param_1[0x1d6] = param_1[0x1d6] | 0x80;
  }
  else {
    *(ushort *)(param_1 + 0x1c8) = *(ushort *)(param_1 + 0x1c8) & 0xfc3d | 0xc2;
  }
  param_1[0x1ce] = (int)(param_1 + 0x200);
  param_1[0x1c8] = param_1[0x1c8] & 0xffffffc3 | 0x14;
  param_1[0x1cf] = (int)((ulong)(param_1 + 0x200) >> 0x20);
  uVar9 = 0;
  do {
    uVar11 = uVar9 & 0xffffffff;
    *(ushort *)(param_1 + uVar11 * 6 + 0x201) =
         (ushort)((int)uVar9 << 7) & 0x7fff | 8 | *(ushort *)(param_1 + uVar11 * 6 + 0x201) & 0x8000
    ;
    uVar5 = param_2[1];
    uVar12 = uVar9 & 0x1f;
    *(undefined4 **)(param_1 + uVar11 * 6 + 0x204) = param_1 + 0x1c8;
    param_1[uVar11 * 6 + 0x202] = 0;
    param_1[uVar11 * 6 + 0x203] = 0;
    uVar9 = (ulong)((int)uVar9 + 1);
    if ((uVar5 & 1 << uVar12) != 0) {
      iVar2 = param_1[0x2b8];
      param_1[uVar11 * 6 + 0x200] = param_1[uVar11 * 6 + 0x200] & 0xfffe1ffe | 0x4001;
      param_1[0x2b8] = iVar2 + 1;
    }
  } while (uVar9 != 8);
  puVar13 = param_1 + 0x40;
  uVar9 = 0;
  puVar10 = param_1;
  do {
    *puVar10 = 0;
    uVar12 = uVar9 & 0xffffffff;
    if (*param_3 != 0) {
      param_1[uVar12 * 8] = param_1[uVar12 * 8] | 1;
    }
    iVar2 = (int)uVar9;
    uVar5 = iVar2 + 1;
    uVar9 = (ulong)(int)uVar5;
    *(byte *)(param_1 + uVar12 * 8) = *(byte *)(param_1 + uVar12 * 8) & 0xc1 | 0x16;
    if (4 < uVar9) {
      uVar5 = 1;
    }
    puVar6 = param_1 + uVar12 * 8;
    puVar6[6] = (uint)puVar13;
    *puVar6 = *puVar6 & 0xfffffc3f | (uVar5 & 0xf) << 6;
    puVar6[7] = (uint)((ulong)puVar13 >> 0x20);
    uVar11 = 0;
    do {
      uVar8 = uVar11 & 0xffffffff;
      *(ushort *)(param_1 + uVar12 * 0x30 + uVar8 * 6 + 0x41) =
           (ushort)((iVar2 + 0x10U & 0xf) << 3) | 1 | (ushort)((int)uVar11 << 7) & 0x7fff |
           *(ushort *)(param_1 + uVar12 * 0x30 + uVar8 * 6 + 0x41) & 0x8000;
      uVar5 = *param_3;
      uVar4 = uVar11 & 0x1f;
      param_1[uVar12 * 0x30 + uVar8 * 6 + 0x44] = (int)puVar10;
      param_1[uVar12 * 0x30 + uVar8 * 6 + 0x45] = (int)((ulong)puVar10 >> 0x20);
      param_1[uVar12 * 0x30 + uVar8 * 6 + 0x42] = 0;
      param_1[uVar12 * 0x30 + uVar8 * 6 + 0x43] = 0;
      uVar11 = (ulong)((int)uVar11 + 1);
      if ((uVar5 & 1 << uVar4) != 0) {
        iVar3 = param_1[0x2b9];
        param_1[uVar12 * 0x30 + uVar8 * 6 + 0x40] =
             param_1[uVar12 * 0x30 + uVar8 * 6 + 0x40] & 0xfffe1ffe | 0x4001;
        param_1[0x2b9] = iVar3 + 1;
      }
    } while (uVar11 != 8);
    puVar10 = puVar10 + 8;
    param_3 = param_3 + 1;
    puVar13 = puVar13 + 0x30;
  } while (uVar9 != 8);
  uVar9 = 0;
  do {
    uVar12 = uVar9 & 0xffffffff;
    uVar9 = (ulong)((int)uVar9 + 1);
    if ((param_1[uVar12 * 6 + 0x70] & 1) != 0) {
      param_1[uVar12 * 6 + 0x70] = param_1[uVar12 * 6 + 0x70] | 0x100;
    }
  } while (uVar9 != 8);
  uVar9 = 0;
  do {
    uVar12 = uVar9 & 0xffffffff;
    uVar9 = (ulong)((int)uVar9 + 1);
    if ((param_1[uVar12 * 6 + 0x40] & 1) != 0) {
      param_1[uVar12 * 6 + 0x40] = param_1[uVar12 * 6 + 0x40] | 0x800;
    }
    if ((param_1[uVar12 * 6 + 0xa0] & 1) != 0) {
      param_1[uVar12 * 6 + 0xa0] = param_1[uVar12 * 6 + 0xa0] | 0x800;
    }
  } while (uVar9 != 8);
  uVar9 = 0;
  do {
    uVar12 = uVar9 & 0xffffffff;
    uVar9 = (ulong)((int)uVar9 + 1);
    if ((param_1[uVar12 * 6 + 0xd0] & 1) != 0) {
      param_1[uVar12 * 6 + 0xd0] = param_1[uVar12 * 6 + 0xd0] | 0x1000;
    }
  } while (uVar9 != 8);
  param_1[0x4c] = param_1[0x4c] | 0x400;
  puVar10 = param_1 + 0x230;
  *puVar10 = 0;
  puVar13 = param_1 + 0x240;
  uVar5 = *param_4;
  lVar14 = 0;
  while( true ) {
    if (uVar5 != 0) {
      param_1[(lVar14 + 0x46) * 8] = param_1[(lVar14 + 0x46) * 8] | 1;
    }
    *(byte *)(param_1 + (lVar14 + 0x46) * 8) =
         *(byte *)(param_1 + (lVar14 + 0x46) * 8) & 0xc1 | 0x14;
    param_1[lVar14 * 8 + 0x236] = (int)puVar13;
    param_1[lVar14 * 8 + 0x237] = (int)((ulong)puVar13 >> 0x20);
    uVar9 = 0;
    do {
      uVar11 = uVar9 & 0xffffffff;
      *(ushort *)(param_1 + lVar14 * 0x3c + uVar11 * 6 + 0x241) =
           (ushort)((int)lVar14 << 3) | 2 | (ushort)((int)uVar9 << 7) & 0x7fff |
           *(ushort *)(param_1 + lVar14 * 0x3c + uVar11 * 6 + 0x241) & 0x8000;
      uVar5 = *param_4;
      uVar12 = uVar9 & 0x1f;
      param_1[lVar14 * 0x3c + uVar11 * 6 + 0x244] = (int)puVar10;
      param_1[lVar14 * 0x3c + uVar11 * 6 + 0x245] = (int)((ulong)puVar10 >> 0x20);
      param_1[lVar14 * 0x3c + uVar11 * 6 + 0x242] = 0;
      param_1[lVar14 * 0x3c + uVar11 * 6 + 0x243] = 0;
      uVar9 = (ulong)((int)uVar9 + 1);
      if ((uVar5 & 1 << uVar12) != 0) {
        iVar2 = param_1[0x2ba];
        param_1[lVar14 * 0x3c + uVar11 * 6 + 0x240] =
             param_1[lVar14 * 0x3c + uVar11 * 6 + 0x240] & 0xfffe1ffe | 0x4001;
        param_1[0x2ba] = iVar2 + 1;
      }
    } while (uVar9 != 8);
    puVar10 = puVar10 + 8;
    param_4 = param_4 + 1;
    puVar13 = puVar13 + 0x3c;
    if (lVar14 == 1) break;
    *puVar10 = 0;
    uVar5 = *param_4;
    lVar14 = 1;
  }
  if ((param_5 & 1) != 0) {
    uVar12 = (long)(int)(param_5 >> 4) & 0xf;
    uVar9 = (long)(int)(param_5 >> 1) & 7;
    if ((param_1[uVar9 * 0x3c + uVar12 * 6 + 0x240] & 1) != 0) {
      param_1[uVar9 * 0x3c + uVar12 * 6 + 0x240] = param_1[uVar9 * 0x3c + uVar12 * 6 + 0x240] | 4;
    }
  }
  uVar7 = FUN_fffffffff000bd24(5000);
  param_1[699] = (int)uVar7;
  param_1[700] = (int)((ulong)uVar7 >> 0x20);
  return;
}


/* ---- FUN_fffffffff0007980 @ fffffffff0007980 size=568 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_fffffffff0007980(long param_1,uint param_2,ulong param_3,undefined8 *param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  
  lVar2 = g_3ab40;
  if (param_1 == 1) {
    iVar7 = 8;
    puVar5 = g_3ab48;
  }
  else if (param_1 == 2) {
    iVar7 = 2;
    puVar5 = g_3ab48 + 0x230;
  }
  else {
    if (param_1 != 0) {
      return 0;
    }
    iVar7 = 2;
    puVar5 = g_3ab48 + 0x1c0;
  }
  uVar3 = 0;
  do {
    puVar8 = puVar5;
    do {
      uVar1 = *puVar8;
      bVar4 = false;
      if ((((uVar1 & 1) != 0) && (bVar4 = true, (uVar1 & 2) != 0)) &&
         (((int)param_2 < 2 || (bVar4 = false, (*puVar8 >> 6 & 0xf) == param_2)))) {
        bVar4 = (uVar1 & 0x3c) == 0x14 || (uVar1 >> 2 & 0xf) == param_2;
      }
      *puVar8 = *puVar8 & 0xfeffffff | (uint)bVar4 << 0x18;
      if (bVar4 != false) {
        puVar6 = (uint *)(*(long *)(puVar8 + 6) + (uVar3 & 0xffffffff) * 0x18);
        uVar1 = *puVar6;
        if (((((uVar1 & 3) == 1) && (((long)(int)(uVar1 >> 2) & 1U) == param_3)) &&
            (((*(int *)(lVar2 + 0x3da4) == 0 || ((uVar1 & 0x100) == 0)) &&
             ((*(int *)(lVar2 + 0x3da8) == 0 || ((uVar1 & 0x800) == 0)))))) &&
           (((*(int *)(lVar2 + 0x3dac) == 0 || ((uVar1 & 0x1000) == 0)) &&
            ((*(int *)(lVar2 + 0x3db0) == 0 || ((uVar1 & 0x400) == 0)))))) {
          *param_4 = puVar6;
          iVar7 = (int)uVar3 + 1;
          do {
            if (iVar7 == 8) {
              return 1;
            }
            bVar4 = iVar7 != 7;
            iVar7 = iVar7 + 2;
          } while (bVar4);
          return 1;
        }
      }
      puVar8 = puVar8 + 8;
    } while ((uint *)((long)puVar5 + ((ulong)((long)(iVar7 + -1) << 0x20) >> 0x1b) + 0x20) != puVar8
            );
    uVar3 = (ulong)((int)uVar3 + 1);
    if (uVar3 == 8) {
      return 0;
    }
  } while( true );
}


/* ---- FUN_fffffffff0007bb8 @ fffffffff0007bb8 size=120 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff0007bb8(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  long lVar1;
  
  lVar1 = g_3ab48;
  if (param_1 == 1) {
    *param_2 = 8;
    *param_3 = 8;
    return lVar1;
  }
  if (param_1 != 2) {
    if (param_1 != 0) {
      return 0;
    }
    *param_2 = 2;
    *param_3 = 8;
    return lVar1 + 0x700;
  }
  *param_2 = 2;
  *param_3 = 8;
  return lVar1 + 0x8c0;
}


/* ---- sub_07c30 @ fffffffff0007c30 size=92 ---- */

bool sub_07c30(uint param_1,uint *param_2)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *param_2;
  if (((uVar1 & 1) == 0) ||
     (((bVar2 = true, (uVar1 & 2) != 0 &&
       (bVar2 = (uVar1 & 0x3c) == 0x14 || (uVar1 >> 2 & 0xf) == param_1, 1 < (int)param_1)) &&
      ((*param_2 >> 6 & 0xf) != param_1)))) {
    bVar2 = false;
  }
  return bVar2;
}


/* ---- sub_07c8c @ fffffffff0007c8c size=92 ---- */

void sub_07c8c(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_fffffffff000bd84();
  lVar1 = FUN_fffffffff000bd3c(lVar1 - *(long *)(param_1 + 0x3c));
  *(long *)(param_1 + 0x44) = *(long *)(param_1 + 0x44) + lVar1;
  return;
}


/* ---- FUN_fffffffff0007ce8 @ fffffffff0007ce8 size=1008 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0007ce8(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x34) + 0x10);
  iVar7 = *(int *)(param_1 + 0x30);
  lVar10 = (long)iVar7;
  iVar1 = *(int *)(param_1 + 0x28);
  lVar11 = (long)iVar1;
  lVar6 = g_3ab40;
  if ((*(uint *)(param_1 + 0x10) & 2) != 0) {
    lVar6 = FUN_fffffffff000bd84();
    lVar6 = FUN_fffffffff000bd3c(lVar6 - *(long *)(param_1 + 0x3c));
    *(long *)(param_1 + 0x44) = *(long *)(param_1 + 0x44) + lVar6;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffd;
    lVar6 = g_3ab40;
    if (lVar10 == 1) {
      if ((*(uint *)(g_3ab40 + 0x3d28) & 8) == 0) goto LAB_fffffffff0007e54;
      *(int *)(lVar5 + 0x58) = *(int *)(lVar5 + 0x58) + -1;
    }
    else if (lVar10 == 0) {
      if ((lVar11 == 3) && ((*(uint *)(g_3ab40 + 0x3d28) & 0x80) != 0)) {
        *(int *)(lVar5 + 0x54) = *(int *)(lVar5 + 0x54) + -1;
      }
      else {
LAB_fffffffff0007e54:
        *(int *)(lVar5 + 0x50) = *(int *)(lVar5 + 0x50) + -1;
      }
    }
    else {
      if (lVar10 != 2) goto LAB_fffffffff0007e54;
      *(int *)(lVar5 + 0x5c) = *(int *)(lVar5 + 0x5c) + -1;
    }
    lVar9 = *(long *)(param_1 + 0x34);
    lVar8 = lVar6 + lVar10 * 0x1b8 + lVar11 * 0x58;
    iVar2 = *(int *)(lVar8 + 0x2c28);
    iVar4 = *(int *)(lVar9 + 0x30) + -1;
    *(int *)(lVar9 + 0x30) = iVar4;
    iVar2 = iVar2 + -1;
    *(int *)(lVar8 + 0x2c28) = iVar2;
    if ((iVar4 == 0) && ((*(uint *)(lVar9 + 0x40) & 1) == 0)) {
      *(undefined4 *)(lVar9 + 0x28) = 0;
      *(undefined4 *)(lVar9 + 0x2c) = 0;
    }
    if ((iVar2 == 0) &&
       (lVar9 = lVar6 + (lVar10 * 0x40 + (long)iVar7 * -9) * 8 + lVar11 * 0x40 + (long)iVar1 * 0x18,
       (*(uint *)(lVar9 + 0x2c3c) >> 2 & 1) == 0)) {
      *(undefined4 *)(lVar9 + 0x2bf8) = 0;
      *(undefined4 *)(lVar9 + 0x2bfc) = 0;
    }
  }
  lVar9 = *(long *)(lVar6 + 0x2a0d8);
  if (param_2 == 0) {
    if (lVar5 != lVar9) {
      if (lVar10 != 1) {
        return;
      }
      FUN_fffffffff001b6a4(lVar5);
      return;
    }
    bVar3 = false;
    if (*(int *)(lVar5 + 0x50) == 0) {
LAB_fffffffff0008004:
      if (*(int *)(lVar5 + 0x54) == 0) {
        iVar7 = *(int *)(lVar5 + 0x58);
LAB_fffffffff0007fb4:
        if (iVar7 == 0) {
LAB_fffffffff0007fb8:
          iVar7 = *(int *)(lVar5 + 0x5c);
          goto LAB_fffffffff0007fbc;
        }
      }
    }
LAB_fffffffff0007f5c:
    if (lVar10 != 1) goto LAB_fffffffff0007dac;
  }
  else {
    if (lVar10 != 1) {
      if (lVar10 == 0) {
        if ((lVar11 != 3) || ((*(uint *)(lVar6 + 0x3d28) & 0x80) == 0)) {
LAB_fffffffff0007da0:
          bVar3 = *(int *)(lVar5 + 0x50) == 0;
          if ((lVar5 != lVar9) || (*(int *)(lVar5 + 0x50) != 0)) goto LAB_fffffffff0007dac;
          goto LAB_fffffffff0008004;
        }
        bVar3 = *(int *)(lVar5 + 0x54) == 0;
joined_r0xfffffffff0007ff8:
        if (((lVar5 != lVar9) || (*(int *)(lVar5 + 0x50) != 0)) || (*(int *)(lVar5 + 0x54) != 0))
        goto LAB_fffffffff0007dac;
        iVar7 = *(int *)(lVar5 + 0x58);
        goto LAB_fffffffff0007fb4;
      }
      if (lVar10 != 2) goto LAB_fffffffff0007da0;
      iVar7 = *(int *)(lVar5 + 0x5c);
      if (iVar7 == 0) {
        bVar3 = *(int *)(lVar5 + 0x4c) != 0xffff;
        goto joined_r0xfffffffff0007ff8;
      }
      if (lVar5 != lVar9) {
        return;
      }
      if (*(int *)(lVar5 + 0x50) != 0) {
        return;
      }
      if (*(int *)(lVar5 + 0x54) != 0) {
        return;
      }
      if (*(int *)(lVar5 + 0x58) != 0) {
        return;
      }
      bVar3 = false;
LAB_fffffffff0007fbc:
      if (iVar7 == 0) {
        *(undefined4 *)(lVar6 + 0x2a0d8) = 0;
        *(undefined4 *)(lVar6 + 0x2a0dc) = 0;
      }
      goto LAB_fffffffff0007f5c;
    }
    if ((*(uint *)(lVar6 + 0x3d28) & 8) == 0) {
      bVar3 = *(int *)(lVar5 + 0x50) == 0;
      if ((lVar5 == lVar9) && (*(int *)(lVar5 + 0x50) == 0)) goto LAB_fffffffff0008004;
    }
    else {
      bVar3 = *(int *)(lVar5 + 0x58) == 0;
      if ((lVar5 == lVar9) && ((*(int *)(lVar5 + 0x50) == 0 && (*(int *)(lVar5 + 0x54) == 0)))) {
        if (*(int *)(lVar5 + 0x58) != 0) goto LAB_fffffffff0007f5c;
        goto LAB_fffffffff0007fb8;
      }
    }
  }
  FUN_fffffffff001b6a4(lVar5);
LAB_fffffffff0007dac:
  if ((bVar3) && ((*(uint *)(lVar5 + 0x90) & 9) == 1)) {
    FUN_fffffffff001876c(lVar5,lVar10,lVar11);
    return;
  }
  return;
}


/* ---- FUN_fffffffff00080d8 @ fffffffff00080d8 size=216 ---- */

byte * FUN_fffffffff00080d8(long param_1)

{
  byte *pbVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  pbVar1 = *(byte **)(param_1 + 0x58);
  lVar3 = FUN_fffffffff000d280(pbVar1,0);
  if (lVar3 != 0) {
    FUN_fffffffff001cd2c();
    pbVar1[8] = 0;
    pbVar1[9] = 0;
    pbVar1[10] = 0;
    pbVar1[0xb] = 0;
    pbVar1[0xc] = 0;
    pbVar1[0xd] = 0;
    pbVar1[0xe] = 0;
    pbVar1[0xf] = 0;
    *pbVar1 = *pbVar1 & 0x85;
    FUN_fffffffff001cdd0();
    puVar2 = *(uint **)(pbVar1 + 0x10);
    uVar4 = *puVar2 & 0xe1ffffff | (*(uint *)(pbVar1 + 4) >> 7 & 0xf) << 0x19;
    uVar5 = (long)(int)(uVar4 >> 0x10) - 1;
    *puVar2 = uVar4;
    *(char *)((long)puVar2 + 2) = (char)uVar5;
    if (((uVar5 & 0xff) == 0) && ((*puVar2 & 2) != 0)) {
      *puVar2 = *puVar2 & 0xffffffc3 | 0x14;
    }
    return pbVar1;
  }
  return (byte *)0x0;
}


/* ---- FUN_fffffffff00081b0 @ fffffffff00081b0 size=540 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff00081b0(uint param_1,long param_2,long param_3)

{
  uint *puVar1;
  uint *puVar2;
  byte *pbVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  lVar4 = g_3ab40;
  if (*(int *)(param_2 + 0x30) == 0) {
    if (param_3 != 0) {
      uVar8 = 0;
      lVar6 = 0;
      do {
        while( true ) {
          uVar7 = (uint)param_3;
          if ((((uVar7 & 1 << (uVar8 & 0x1f)) != 0) &&
              (lVar9 = lVar4 + (uVar8 & 0xffffffff) * 0x18 + lVar6 * 0xc0,
              (*(uint *)(lVar9 + 0x275c) & 1) != 0)) &&
             (puVar1 = *(uint **)(lVar9 + 0x2764), puVar1 != (uint *)0x0)) {
            pbVar3 = *(byte **)(puVar1 + 1);
            puVar2 = *(uint **)(pbVar3 + 0x10);
            uVar5 = *puVar2 & 0xe1ffffff | ((uint)uVar8 & 0xf) << 0x19;
            uVar10 = (long)(int)(uVar5 >> 0x10) - 1;
            *puVar2 = uVar5;
            *(char *)((long)puVar2 + 2) = (char)uVar10;
            if (((uVar10 & 0xff) == 0) && ((*puVar2 & 2) != 0)) {
              *puVar2 = *puVar2 & 0xffffffc3 | 0x14;
            }
            *puVar1 = *puVar1 & 0xfffffffd;
            pbVar3[8] = 0;
            pbVar3[9] = 0;
            pbVar3[10] = 0;
            pbVar3[0xb] = 0;
            pbVar3[0xc] = 0;
            pbVar3[0xd] = 0;
            pbVar3[0xe] = 0;
            pbVar3[0xf] = 0;
            *pbVar3 = *pbVar3 & 0x85;
            puVar1[1] = 0;
            puVar1[2] = 0;
            if (((long)(int)(param_1 >> 7) & 0xffU) == uVar8) {
              *puVar1 = *puVar1 | 4;
            }
          }
          uVar8 = (ulong)(int)((uint)uVar8 + 1);
          if (uVar8 == 8) break;
          if (uVar7 >> (uVar8 & 0x1f) == 0) {
            return 1;
          }
        }
        param_3 = (long)(int)(uVar7 >> 8);
        uVar8 = 0;
        lVar6 = 1;
      } while (param_3 != 0);
    }
  }
  else {
    puVar1 = *(uint **)(param_2 + 0x58);
    if (puVar1[1] == param_1) {
      puVar2 = *(uint **)(puVar1 + 4);
      uVar7 = *puVar2 & 0xe1ffffff | (puVar1[1] >> 7 & 0xf) << 0x19;
      uVar8 = (long)(int)(uVar7 >> 0x10) - 1;
      *puVar2 = uVar7;
      *(char *)((long)puVar2 + 2) = (char)uVar8;
      if (((uVar8 & 0xff) == 0) && ((*puVar2 & 2) != 0)) {
        *puVar2 = *puVar2 & 0xffffffc3 | 0x14;
      }
      *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) & 0xfffffffd;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *puVar1 = *puVar1 & 0xfffffffd;
      *(undefined4 *)(param_2 + 0x58) = 0;
      *(undefined4 *)(param_2 + 0x5c) = 0;
      *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) | 4;
      return 1;
    }
  }
  return 1;
}


/* ---- FUN_fffffffff00083cc @ fffffffff00083cc size=88 ---- */

void FUN_fffffffff00083cc(uint *param_1,long param_2,long param_3)

{
  uint uVar1;
  
  uVar1 = *param_1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = uVar1 & 0xfffffffd;
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
  }
  else {
    *param_1 = uVar1 & 0xfffffffd | 4;
  }
  *param_1 = *param_1 & 0xfffffffe;
  *(int *)(*(long *)(param_1 + 0x1b) + 0x2c) = *(int *)(*(long *)(param_1 + 0x1b) + 0x2c) + -1;
  return;
}


/* ---- FUN_fffffffff0008424 @ fffffffff0008424 size=272 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff0008424(long param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((*(uint *)(param_1 + 0x54) & 3) == 3) {
    lVar3 = FUN_fffffffff00080d8();
    *param_2 = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
    uVar2 = *(uint *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(uint *)(param_1 + 0x54) = uVar2 & 0xfffffffd;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    if ((((*(uint *)(param_1 + 0x10) & 1) == 0) && ((uVar2 & 1) == 3)) &&
       (lVar3 = FUN_fffffffff000b4f0(param_1 + 0x54), lVar3 == 0)) {
      lVar3 = g_3ab40 + (long)iVar1 * 0x1b8 + (long)*(int *)(param_1 + 0x28) * 0x58;
      *(uint *)(lVar3 + 0x2c3c) = *(uint *)(lVar3 + 0x2c3c) | 1;
    }
  }
  FUN_fffffffff0007ce8(param_1,param_3);
  FUN_fffffffff0012170((long)iVar1);
  return 1;
}


/* ---- FUN_fffffffff0008534 @ fffffffff0008534 size=192 ---- */

undefined8 FUN_fffffffff0008534(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  undefined8 auStack_38 [2];
  
  auStack_38[0] = 0;
  if (param_2 != 0) {
    lVar4 = (param_2 & 0xffffffff) * 0x18;
    lVar1 = 0;
    do {
      while( true ) {
        puVar3 = (uint *)(*(long *)(param_1 + 0x18) + lVar1);
        lVar1 = lVar1 + 0x18;
        if ((*puVar3 & 3) == 3) break;
        if (lVar4 == lVar1) {
          return 1;
        }
      }
      lVar2 = FUN_fffffffff0008424(*(undefined8 *)(*(long *)(puVar3 + 2) + 0x6c),auStack_38,0);
      if (lVar2 == 0) {
        return 0;
      }
    } while (lVar4 != lVar1);
  }
  return 1;
}


/* ---- FUN_fffffffff00085f4 @ fffffffff00085f4 size=132 ---- */

void FUN_fffffffff00085f4(uint *param_1,long param_2,uint param_3,uint param_4)

{
  char cVar1;
  
  cVar1 = *(char *)((long)param_1 + 2);
  if (param_2 != 0) {
    if ((cVar1 == '\0') && ((*param_1 & 2) != 0)) {
      *param_1 = *param_1 & 0xffffffc3 | (param_3 & 0xf) << 2;
    }
    *(char *)((long)param_1 + 2) = cVar1 + '\x01';
    return;
  }
  *param_1 = *param_1 & 0xe1ffffff | (param_4 & 0xf) << 0x19;
  *(char *)((long)param_1 + 2) = cVar1 + -1;
  if (((char)(cVar1 + -1) == '\0') && ((*param_1 & 2) != 0)) {
    *param_1 = *param_1 & 0xffffffc3 | 0x14;
  }
  return;
}


/* ---- FUN_fffffffff0008678 @ fffffffff0008678 size=60 ---- */

bool FUN_fffffffff0008678(long param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x54) & 3) != 3) {
    return true;
  }
  iVar1 = FUN_fffffffff000b4f0(param_1 + 0x54);
  return iVar1 != 0;
}


/* ---- FUN_fffffffff00086b4 @ fffffffff00086b4 size=148 ---- */

undefined8 FUN_fffffffff00086b4(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (((*(uint *)(param_1 + 0x10) & 0x80) == 0) || ((*(uint *)(param_1 + 0x10) & 1) != 0)) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x54) & 3) == 1) {
    if ((*(uint *)(param_1 + 0x54) & 8) != 0) {
      lVar2 = FUN_fffffffff000b338(param_1 + 0x54);
      if (lVar2 == 0) goto LAB_fffffffff00086f0;
      *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xfffffff7;
      if (param_2 != 0) {
        FUN_fffffffff0019554(param_1);
        return 1;
      }
    }
    uVar1 = 1;
  }
  else {
LAB_fffffffff00086f0:
    uVar1 = 0;
  }
  return uVar1;
}


/* ---- FUN_fffffffff0008748 @ fffffffff0008748 size=512 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff0008748(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  uVar6 = uVar4 & 1;
  if ((uVar4 & 0x80) == 0) {
    if ((*(uint *)(g_3ab40 + 0x3d28) & 0x400) != 0) {
      if ((*(uint *)(param_1 + 0x54) & 3) != 1) goto LAB_fffffffff00087b0;
      uVar2 = FUN_fffffffff000b3d8(param_1 + 0x54);
      if (uVar2 != 1) {
        if (uVar2 == 2) {
          *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xfffffff7;
          FUN_fffffffff000b468(param_1 + 0x54,0);
          uVar5 = *(uint *)(param_1 + 0x54);
        }
        else {
          uVar5 = *(uint *)(param_1 + 0x54);
        }
        goto LAB_fffffffff000884c;
      }
LAB_fffffffff00088f8:
      uVar4 = *(uint *)(param_1 + 0x10);
      goto LAB_fffffffff00087ec;
    }
    if (uVar6 != 0) {
      return 0;
    }
    uVar5 = *(uint *)(param_1 + 0x54);
    uVar2 = uVar5 & 4;
    if (uVar2 == 0) {
LAB_fffffffff000884c:
      if ((uVar5 & 3) == 1) {
        if ((uVar5 & 8) == 0) goto LAB_fffffffff0008860;
        lVar3 = FUN_fffffffff000b338(param_1 + 0x54);
        if (lVar3 != 0) {
          *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xfffffff7;
          if (param_2 != 0) {
            FUN_fffffffff0019554(param_1);
          }
          goto LAB_fffffffff0008860;
        }
      }
      goto LAB_fffffffff00088f8;
    }
LAB_fffffffff00087b0:
    uVar6 = uVar4 & 0x40;
  }
  else {
    uVar2 = 0;
LAB_fffffffff00087ec:
    if ((uVar4 & 0x40) == 0) {
      return 0;
    }
    if ((*(uint *)(g_3ab40 + 0x3d28) & 0x400) != 0) {
      uVar6 = uVar2;
    }
  }
  if (uVar6 != 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0xfc) == 0) {
    return 0;
  }
  lVar3 = FUN_fffffffff00086b4(0);
  if (lVar3 == 0) {
    return 0;
  }
LAB_fffffffff0008860:
  if (*(long *)(param_1 + 0xfc) == 0) {
    return 1;
  }
  iVar1 = FUN_fffffffff000b3d8(*(long *)(param_1 + 0xfc) + 0x54);
  if ((*(uint *)(g_3ab40 + 0x3d28) & 0x400) == 0) {
    if ((*(uint *)(*(long *)(param_1 + 0xfc) + 0x10) & 1) == 0) {
      return 1;
    }
  }
  else if (iVar1 != 1) {
    return 1;
  }
  return 0;
}


/* ---- FUN_fffffffff0008948 @ fffffffff0008948 size=624 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff0008948(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  long lVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  long local_80;
  
  if (param_1 == 1) {
    uVar3 = 8;
    local_80 = g_3ab48;
  }
  else if (param_1 == 2) {
    local_80 = g_3ab48 + 0x8c0;
    uVar3 = 2;
  }
  else {
    if (param_1 != 0) {
      return 1;
    }
    uVar3 = 2;
    local_80 = g_3ab48 + 0x700;
  }
  uVar6 = 0;
  lVar8 = 1;
  do {
    if (*param_2 != 0) {
      return lVar8;
    }
    iVar11 = (int)uVar6 + 1;
    if (lVar8 == 0) {
      if (uVar3 <= (ulong)(long)iVar11) {
        return 0;
      }
    }
    else {
      puVar9 = (uint *)(local_80 + ((uVar6 << 0x20) >> 0x1b));
      uVar10 = *puVar9;
      iVar11 = (int)uVar6;
      while ((uVar10 & 0x1000000) == 0) {
        iVar11 = (int)uVar6 + 1;
        uVar6 = (ulong)iVar11;
        puVar9 = puVar9 + 8;
        if (uVar3 <= uVar6) {
          return lVar8;
        }
        uVar10 = *puVar9;
      }
      uVar10 = uVar10 >> 0x19 & 0xf;
      iVar2 = uVar10 + 8;
      while( true ) {
        uVar10 = uVar10 + 1;
        puVar7 = (uint *)(*(long *)(puVar9 + 6) + ((long)(int)uVar10 & 7U) * 0x18);
        uVar1 = *puVar7;
        if (((((uVar1 & 7) == 3) &&
             ((*(int *)(g_3ab40 + 0x3da4) == 0 || ((uVar1 & 0x100) == 0)))) &&
            ((*(int *)(g_3ab40 + 0x3da8) == 0 || ((uVar1 & 0x800) == 0)))) &&
           ((((*(int *)(g_3ab40 + 0x3dac) == 0 || ((uVar1 & 0x1000) == 0)) &&
             ((*(int *)(g_3ab40 + 0x3db0) == 0 || ((uVar1 & 0x400) == 0)))) &&
            (((lVar4 = *(long *)(*(long *)(puVar7 + 2) + 0x6c), (*(uint *)(lVar4 + 0x54) & 3) != 3
              || (lVar5 = FUN_fffffffff000b4f0(lVar4 + 0x54), lVar5 != 0)) &&
             (lVar4 = FUN_fffffffff0008424(lVar4,param_2,0), lVar4 == 0)))))) break;
        if (((long)iVar2 == (long)(int)uVar10) || (*param_2 != 0)) goto LAB_fffffffff0008b58;
      }
      lVar8 = 0;
    }
LAB_fffffffff0008b58:
    uVar6 = (ulong)(iVar11 + 1);
    if (uVar3 <= uVar6) {
      return lVar8;
    }
  } while( true );
}


/* ---- sub_08bb8 @ fffffffff0008bb8 size=44 ---- */

bool sub_08bb8(long param_1,long param_2)

{
  return param_2 < *(int *)(*(long *)(*(long *)(param_1 + 8) + 0x6c) + 0x28);
}


/* ---- FUN_fffffffff0008be4 @ fffffffff0008be4 size=104 ---- */

long FUN_fffffffff0008be4(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_fffffffff000bd84();
  if ((ulong)(lVar1 - *(long *)(param_1 + 0x3c)) < *(ulong *)(param_1 + 0x14)) {
    return (*(long *)(param_1 + 0x3c) + *(ulong *)(param_1 + 0x14)) - lVar1;
  }
  return 0;
}


/* ---- FUN_fffffffff0008c4c @ fffffffff0008c4c size=756 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff0008c4c(long param_1,long param_2,long *param_3,ulong *param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  bool bVar11;
  int iStack_90;
  ulong uStack_88;
  
  uStack_88 = *(ulong *)(g_3ab48 + 699);
  if (param_1 == 1) {
    iVar9 = 8;
    puVar7 = g_3ab48;
  }
  else if (param_1 == 2) {
    iVar9 = 2;
    puVar7 = g_3ab48 + 0x230;
  }
  else {
    iVar9 = 2;
    puVar7 = g_3ab48 + 0x1c0;
    if (param_1 != 0) goto LAB_fffffffff0008cd4;
  }
  puVar10 = (uint *)((long)puVar7 + ((ulong)((long)(iVar9 + -1) << 0x20) >> 0x1b) + 0x20);
  iStack_90 = (int)param_2;
  bVar11 = true;
  do {
    while( true ) {
      if (*param_3 != 0) {
        if (!bVar11) {
          return 0;
        }
        uStack_88 = 0;
        goto LAB_fffffffff0008cec;
      }
      if ((!bVar11) || ((*puVar7 & 0x1000000) == 0)) break;
      uVar8 = *puVar7 >> 0x19 & 0xf;
      iVar9 = uVar8 + 8;
      do {
        uVar8 = uVar8 + 1;
        piVar6 = (int *)(*(long *)(puVar7 + 6) + ((long)(int)uVar8 & 7U) * 0x18);
        uVar4 = (ulong)*piVar6;
        if (((((uVar4 & 7) == 3) &&
             ((*(int *)(g_3ab40 + 0x3da4) == 0 || ((uVar4 & 0x100) == 0)))) &&
            ((*(int *)(g_3ab40 + 0x3da8) == 0 || ((uVar4 & 0x800) == 0)))) &&
           (((*(int *)(g_3ab40 + 0x3dac) == 0 || ((uVar4 >> 0xc & 1) == 0)) &&
            ((*(int *)(g_3ab40 + 0x3db0) == 0 || ((uVar4 & 0x400) == 0)))))) {
          lVar2 = *(long *)(*(long *)(piVar6 + 2) + 0x6c);
          if (param_1 == 1) {
            iVar3 = *(int *)(lVar2 + 0x28);
LAB_fffffffff0008e88:
            if (iStack_90 < iVar3) goto LAB_fffffffff0008ed8;
          }
          else if ((((param_2 != 1) || (param_1 != 0)) || ((uVar4 & 0x80) == 0)) &&
                  (iVar3 = *(int *)(lVar2 + 0x28), 2 < iVar3)) goto LAB_fffffffff0008e88;
          lVar1 = FUN_fffffffff000bd84();
          if (((ulong)(lVar1 - *(long *)(lVar2 + 0x3c)) < *(ulong *)(lVar2 + 0x14)) &&
             (lVar5 = *(long *)(lVar2 + 0x3c) + *(ulong *)(lVar2 + 0x14), uVar4 = lVar5 - lVar1,
             lVar5 != lVar1)) {
            if ((uStack_88 != 0) && (uStack_88 < uVar4)) {
              uStack_88 = uVar4;
            }
          }
          else {
            lVar2 = FUN_fffffffff0008424(lVar2,param_3,0);
            if (lVar2 == 0) {
              bVar11 = false;
              goto LAB_fffffffff0008d80;
            }
          }
        }
LAB_fffffffff0008ed8:
        if ((long)iVar9 == (long)(int)uVar8) goto LAB_fffffffff0008d80;
      } while (*param_3 == 0);
      puVar7 = puVar7 + 8;
      if (puVar7 == puVar10) goto LAB_fffffffff0008ef0;
    }
LAB_fffffffff0008d80:
    puVar7 = puVar7 + 8;
  } while (puVar7 != puVar10);
LAB_fffffffff0008ef0:
  if (!bVar11) {
    return 0;
  }
LAB_fffffffff0008cd4:
  uStack_88 = uStack_88 & -(ulong)(*param_3 == 0);
LAB_fffffffff0008cec:
  *param_4 = uStack_88;
  return 1;
}


/* ---- sub_08f40 @ fffffffff0008f40 size=44 ---- */

bool sub_08f40(uint *param_1,ulong param_2)

{
  if ((*param_1 & 0x3c) != 0x14) {
    return ((long)(int)(*param_1 >> 2) & 0xfU) != param_2;
  }
  return false;
}


/* ---- FUN_fffffffff0008f6c @ fffffffff0008f6c size=232 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_fffffffff0008f6c(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  
  if (param_1 == 1) {
    iVar2 = 8;
    puVar4 = g_3ab48;
    if (g_3ab48 == (uint *)0x0) {
      return true;
    }
  }
  else if (param_1 == 2) {
    iVar2 = 2;
    puVar4 = g_3ab48 + 0x230;
  }
  else {
    if (param_1 != 0) {
      return true;
    }
    iVar2 = 2;
    puVar4 = g_3ab48 + 0x1c0;
  }
  puVar3 = (uint *)((long)puVar4 + ((ulong)((long)(iVar2 + -1) << 0x20) >> 0x1b) + 0x20);
  while ((uVar1 = *puVar4, (uVar1 & 3) != 3 || ((uVar1 >> 6 & 0xf) != param_2))) {
    puVar4 = puVar4 + 8;
    if (puVar3 == puVar4) {
      return true;
    }
  }
  if ((uVar1 & 0x3c) == 0x14) {
    return true;
  }
  if ((uVar1 >> 2 & 0xf) == param_2) {
    return true;
  }
  iVar2 = FUN_fffffffff0008534(puVar4,8);
  return iVar2 != 0;
}


/* ---- FUN_fffffffff0009054 @ fffffffff0009054 size=248 ---- */

long FUN_fffffffff0009054(long param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 auStack_48 [2];
  
  auStack_48[0] = 0;
  lVar3 = (long)*(int *)(param_1 + 0x30);
  lVar4 = (long)*(int *)(param_1 + 0x28);
  if ((*(uint *)(param_1 + 0x10) & 4) != 0) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffb;
  }
  lVar1 = FUN_fffffffff0008f6c(lVar3,lVar4);
  if ((lVar1 != 0) &&
     (FUN_fffffffff0007980(lVar3,lVar4,*(uint *)(param_1 + 0x10) >> 3 & 1,param_3), *param_3 == 0))
  {
    lVar2 = FUN_fffffffff0008948(lVar3,lVar4,param_3);
    if (lVar2 != 0) {
      if (*param_3 != 0) {
        return lVar1;
      }
      lVar3 = FUN_fffffffff0008c4c(lVar3,lVar4,param_3,auStack_48);
      if (lVar3 != 0) {
        *param_2 = auStack_48[0];
        return lVar1;
      }
    }
    *param_3 = 0;
    lVar1 = 0;
  }
  return lVar1;
}


/* ---- FUN_fffffffff000914c @ fffffffff000914c size=564 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff000914c(ulong *param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar7 = *(ulong *)(g_3ab48 + 0xaec);
  uVar6 = 0;
  do {
    uVar8 = 0;
    do {
      uVar4 = uVar8 & 0xffffffff;
      uVar8 = (ulong)((int)uVar8 + 1);
      for (lVar3 = *(long *)(uVar4 * 0x4c + (uVar6 & 0xffffffff) * 0x17c +
                             *(long *)(g_3ab40 + 0x2a0d8) + 0xf0); lVar3 != 0;
          lVar3 = *(long *)(lVar3 + 8)) {
        if (((*(uint *)(lVar3 + 0x54) & 3) == 3) &&
           (lVar2 = FUN_fffffffff000b4f0(lVar3 + 0x54), lVar2 == 0)) {
          lVar3 = FUN_fffffffff000bd84();
          uVar6 = 0;
          bVar1 = true;
          do {
            uVar8 = 0;
            do {
              lVar2 = *(long *)(*(long *)(g_3ab40 + 0x2a0d8) +
                                (uVar8 & 0xffffffff) * 0x4c + (uVar6 & 0xffffffff) * 0x17c + 0x100);
              uVar8 = (ulong)((int)uVar8 + 1);
              if ((((lVar2 != 0) &&
                   (uVar4 = *(ulong *)(*(long *)(g_3ab40 + 0x2a0d8) + 0x10),
                   uVar5 = (uVar4 - lVar3) + lVar2, (ulong)(lVar3 - lVar2) < uVar4)) && (uVar5 != 0)
                  ) && (bVar1 = false, uVar7 != 0)) {
                if (uVar7 < uVar5) {
                  bVar1 = false;
                  uVar7 = uVar5;
                }
                else {
                  bVar1 = false;
                }
              }
            } while (uVar8 != 5);
            uVar6 = (ulong)((int)uVar6 + 1);
          } while (uVar6 != 3);
          if (bVar1) {
            return 1;
          }
          *param_1 = uVar7;
          return 0;
        }
      }
    } while (uVar8 != 5);
    uVar6 = (ulong)((int)uVar6 + 1);
    if (uVar6 == 3) {
      return 1;
    }
  } while( true );
}


/* ---- FUN_fffffffff0009380 @ fffffffff0009380 size=788 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff0009380(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if ((param_2 == 0) || (param_1 == 0)) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  lVar10 = (long)iVar1;
  uVar2 = *(uint *)(param_1 + 0x28);
  lVar11 = (long)(int)uVar2;
  if (lVar10 == 1) {
    FUN_fffffffff001bb1c(*(undefined8 *)(*(long *)(param_1 + 0x34) + 0x10));
    lVar6 = FUN_fffffffff000c738(param_2,param_1 + 0x54);
    if (lVar6 == 0) {
      FUN_fffffffff001b6a4(*(undefined8 *)(*(long *)(param_1 + 0x34) + 0x10));
      return 0;
    }
  }
  else {
    lVar6 = FUN_fffffffff000c738(param_2);
    if (lVar6 == 0) {
      return 0;
    }
  }
  uVar7 = FUN_fffffffff000bd84();
  *(int *)(param_1 + 0x3c) = (int)uVar7;
  *(int *)(param_1 + 0x40) = (int)((ulong)uVar7 >> 0x20);
  puVar4 = *(uint **)(param_2 + 0x10);
  if ((*(char *)((long)puVar4 + 2) == '\0') && ((*puVar4 & 2) != 0)) {
    *puVar4 = *puVar4 & 0xffffffc3 | (uVar2 & 0xf) << 2;
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  *(char *)((long)puVar4 + 2) = *(char *)((long)puVar4 + 2) + '\x01';
  if ((uVar3 & 2) != 0) {
    return 1;
  }
  *(uint *)(param_1 + 0x10) = uVar3 | 2;
  lVar9 = g_3ab40;
  lVar5 = CONCAT44(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x34));
  lVar6 = *(long *)(lVar5 + 0x10);
  if (((*(uint *)(g_3ab40 + 0x3d28) & 8) == 0) || (lVar10 != 1)) {
    if ((lVar11 == 3) && (lVar10 == 0)) {
      if ((*(uint *)(g_3ab40 + 0x3d28) & 0x80) != 0) {
        *(int *)(lVar6 + 0x54) = *(int *)(lVar6 + 0x54) + 1;
        goto LAB_fffffffff00094cc;
      }
    }
    else if (lVar10 == 2) {
      *(int *)(lVar6 + 0x5c) = *(int *)(lVar6 + 0x5c) + 1;
      goto LAB_fffffffff00094cc;
    }
    *(int *)(lVar6 + 0x50) = *(int *)(lVar6 + 0x50) + 1;
  }
  else {
    *(int *)(lVar6 + 0x58) = *(int *)(lVar6 + 0x58) + 1;
  }
LAB_fffffffff00094cc:
  if ((*(int *)(lVar5 + 0x30) == 0) && (*(long *)(lVar5 + 0x28) == 0)) {
    uVar7 = FUN_fffffffff000bd84();
    lVar9 = g_3ab40;
    *(int *)(lVar5 + 0x28) = (int)uVar7;
    *(int *)(lVar5 + 0x2c) = (int)((ulong)uVar7 >> 0x20);
  }
  lVar6 = (lVar10 * 0x37 + lVar11 * 0xb) * 8;
  lVar5 = lVar9 + lVar6;
  iVar8 = *(int *)(lVar5 + 0x2c28);
  if ((iVar8 == 0) && (*(long *)(lVar5 + 0x2bf8) == 0)) {
    uVar7 = FUN_fffffffff000bd84();
    lVar9 = g_3ab40;
    iVar8 = *(int *)(g_3ab40 + lVar6 + 0x2c28);
    *(int *)(lVar5 + 0x2bf8) = (int)uVar7;
    *(int *)(lVar5 + 0x2bfc) = (int)((ulong)uVar7 >> 0x20);
  }
  *(int *)(lVar9 + (lVar10 * 0x40 + (long)iVar1 * -9 +
                   ((lVar11 * 2 + (long)(int)uVar2) * 4 - (long)(int)uVar2)) * 8 + 0x2c28) =
       iVar8 + 1;
  *(int *)(*(long *)(param_1 + 0x34) + 0x30) = *(int *)(*(long *)(param_1 + 0x34) + 0x30) + 1;
  FUN_fffffffff0012170(lVar10);
  return 1;
}


/* ---- sub_09694 @ fffffffff0009694 size=156 ---- */

uint * sub_09694(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  uint *puVar2;
  ulong uVar3;
  uint *puVar4;
  ulong uVar5;
  
  uVar5 = 1;
  if (param_4 != 0) {
    while( true ) {
      if (param_3 != 0) {
        uVar3 = 0;
        do {
          puVar4 = (uint *)(param_1 + ((uVar3 << 0x20) >> 0x1b));
          uVar3 = (ulong)((int)uVar3 + 1);
          puVar2 = (uint *)(*(long *)(puVar4 + 6) + (ulong)((int)uVar5 - 1) * 0x18);
          uVar1 = *puVar2;
          if ((((uVar1 & 3) == 1) && ((*puVar4 & 0x1000000) != 0)) &&
             (((long)(int)(uVar1 >> 2) & 1U) == param_2)) {
            return puVar2;
          }
        } while (uVar3 < param_3);
      }
      if (param_4 <= uVar5) break;
      uVar5 = (ulong)((int)uVar5 + 1);
    }
  }
  return (uint *)0x0;
}


/* ---- FUN_fffffffff0009730 @ fffffffff0009730 size=764 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff0009730(ulong param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  
  lVar8 = g_3ab40;
  uVar9 = 0;
  lVar14 = 0;
  bVar7 = false;
  do {
    uVar12 = 0;
    do {
      lVar10 = (uVar12 & 0xffffffff) * 0x18;
      lVar11 = lVar8 + lVar10 + lVar14 * 0xc0;
      uVar1 = *(uint *)(lVar11 + 0x275c);
      uVar12 = (ulong)((int)uVar12 + 1);
      if (((((uVar1 & 1) != 0) && ((uVar1 >> 1 & 1) != 0)) &&
          (lVar11 = *(long *)(lVar11 + 0x2764), lVar11 != 0)) &&
         (*(uint *)(lVar11 + 0xc) == param_1)) {
        lVar10 = lVar8 + lVar10 + lVar14 * 0xc0;
        bVar7 = true;
        *param_2 = *(undefined4 *)(lVar10 + 0x2760);
        uVar9 = *(undefined8 *)(lVar11 + 0x6c);
        uVar2 = *(undefined4 *)(lVar10 + 0x2760);
        uVar3 = *(undefined4 *)(lVar10 + 0x2764);
        uVar4 = *(undefined4 *)(lVar10 + 0x2768);
        uVar5 = *(undefined4 *)(lVar10 + 0x276c);
        uVar6 = *(undefined4 *)(lVar10 + 0x2770);
        *param_3 = *(undefined4 *)(lVar10 + 0x275c);
        param_3[1] = uVar2;
        param_3[2] = uVar3;
        param_3[3] = uVar4;
        param_3[4] = uVar5;
        param_3[5] = uVar6;
        break;
      }
    } while (uVar12 != 8);
    if (lVar14 == 1) {
      if (!bVar7) {
        uVar12 = 0;
        do {
          uVar13 = 0;
          do {
            lVar14 = (uVar13 & 0xffffffff) * 0x18;
            lVar10 = lVar8 + lVar14 + (uVar12 & 0xffffffff) * 0xc0;
            uVar1 = *(uint *)(lVar10 + 0x211c);
            uVar13 = (ulong)((int)uVar13 + 1);
            if ((((uVar1 & 1) != 0) && ((uVar1 >> 1 & 1) != 0)) &&
               ((lVar10 = *(long *)(lVar10 + 0x2124), lVar10 != 0 &&
                (*(uint *)(lVar10 + 0xc) == param_1)))) {
              lVar14 = lVar8 + lVar14 + (uVar12 & 0xffffffff) * 0xc0;
              bVar7 = true;
              *param_2 = *(undefined4 *)(lVar14 + 0x2120);
              uVar9 = *(undefined8 *)(lVar10 + 0x6c);
              uVar2 = *(undefined4 *)(lVar14 + 0x2120);
              uVar3 = *(undefined4 *)(lVar14 + 0x2124);
              uVar4 = *(undefined4 *)(lVar14 + 0x2128);
              uVar5 = *(undefined4 *)(lVar14 + 0x212c);
              uVar6 = *(undefined4 *)(lVar14 + 0x2130);
              *param_3 = *(undefined4 *)(lVar14 + 0x211c);
              param_3[1] = uVar2;
              param_3[2] = uVar3;
              param_3[3] = uVar4;
              param_3[4] = uVar5;
              param_3[5] = uVar6;
              break;
            }
          } while (uVar13 != 8);
          uVar12 = (ulong)((int)uVar12 + 1);
        } while (uVar12 != 8);
        lVar14 = 0;
        if (!bVar7) {
          do {
            uVar12 = 0;
            do {
              lVar10 = (uVar12 & 0xffffffff) * 0x18;
              lVar11 = lVar8 + lVar10 + lVar14 * 0xf0;
              uVar1 = *(uint *)(lVar11 + 0x291c);
              uVar12 = (ulong)((int)uVar12 + 1);
              if ((((uVar1 & 1) != 0) && ((uVar1 >> 1 & 1) != 0)) &&
                 ((lVar11 = *(long *)(lVar11 + 0x2924), lVar11 != 0 &&
                  (*(uint *)(lVar11 + 0xc) == param_1)))) {
                lVar10 = lVar8 + lVar10 + lVar14 * 0xf0;
                *param_2 = *(undefined4 *)(lVar10 + 0x2920);
                uVar9 = *(undefined8 *)(lVar11 + 0x6c);
                uVar2 = *(undefined4 *)(lVar10 + 0x2920);
                uVar3 = *(undefined4 *)(lVar10 + 0x2924);
                uVar4 = *(undefined4 *)(lVar10 + 0x2928);
                uVar5 = *(undefined4 *)(lVar10 + 0x292c);
                uVar6 = *(undefined4 *)(lVar10 + 0x2930);
                *param_3 = *(undefined4 *)(lVar10 + 0x291c);
                param_3[1] = uVar2;
                param_3[2] = uVar3;
                param_3[3] = uVar4;
                param_3[4] = uVar5;
                param_3[5] = uVar6;
                break;
              }
            } while (uVar12 != 8);
            if (lVar14 == 1) {
              return uVar9;
            }
            lVar14 = 1;
          } while( true );
        }
      }
      return uVar9;
    }
    lVar14 = 1;
  } while( true );
}


/* ---- FUN_fffffffff0009a2c @ fffffffff0009a2c size=184 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff0009a2c(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (param_1 == 1) {
    uVar1 = (param_2 << 0x20) >> 0x1b;
    if ((*(uint *)(g_3ab48 + uVar1) & 1) != 0) {
      return g_3ab48 + uVar1 + 4;
    }
  }
  else if (param_1 == 2) {
    lVar2 = ((param_2 & 0xffffffff) + 0x46) * 0x20;
    if ((*(uint *)(g_3ab48 + lVar2) & 1) != 0) {
      return g_3ab48 + lVar2 + 4;
    }
  }
  else if ((param_1 == 0) &&
          (uVar1 = (param_2 << 0x20) >> 0x1b,
          (*(uint *)(g_3ab48 + uVar1 + 0x700) & 1) != 0)) {
    return g_3ab48 + uVar1 + 0x704;
  }
  return 0;
}


/* ---- FUN_fffffffff0009ae4 @ fffffffff0009ae4 size=240 ---- */

undefined8 FUN_fffffffff0009ae4(long param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  lVar1 = FUN_fffffffff0018d94
                    (*(undefined8 *)(param_1 + 0x34),(long)*(int *)(param_1 + 0x30),&uStack_28,
                     (long)*(int *)(param_1 + 0x28));
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0xfc);
    if ((lVar1 == 0) || (*param_3 == 0)) {
LAB_fffffffff0009bac:
      FUN_fffffffff0009380(param_1,*param_2);
      return 1;
    }
    lVar1 = FUN_fffffffff0018d94
                      (*(undefined8 *)(lVar1 + 0x34),(long)*(int *)(lVar1 + 0x30),&uStack_28,
                       (long)*(int *)(lVar1 + 0x28));
    if (lVar1 != 0) {
      if (((*(long *)(param_1 + 0xfc) == 0) || (*param_3 == 0)) ||
         (lVar1 = FUN_fffffffff0009380(), lVar1 != 0)) goto LAB_fffffffff0009bac;
    }
  }
  return 0;
}


/* ---- FUN_fffffffff0009bd4 @ fffffffff0009bd4 size=496 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_fffffffff0009bd4(long param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  lVar1 = g_3ab48;
  if ((**(uint **)(g_3ab48 + 0x38) & 2) == 0) {
    uVar3 = FUN_fffffffff0009054();
    if (uVar3 != 0) {
      *param_4 = *(undefined8 *)(lVar1 + 0x38);
      return uVar3;
    }
  }
  else {
    lVar1 = *(long *)(*(long *)(*(uint **)(g_3ab48 + 0x38) + 2) + 0x6c);
    if (lVar1 == *(long *)(param_1 + 0xfc)) {
      uVar3 = FUN_fffffffff0009054();
      return uVar3;
    }
    if (((*(uint *)(lVar1 + 0x54) & 3) == 3) &&
       (lVar4 = FUN_fffffffff000b4f0(lVar1 + 0x54), lVar4 == 0)) {
LAB_fffffffff0009d30:
      lVar4 = FUN_fffffffff000bd84();
      if ((ulong)(lVar4 - *(long *)(lVar1 + 0x3c)) < *(ulong *)(lVar1 + 0x14)) {
        lVar4 = (*(long *)(lVar1 + 0x3c) + *(ulong *)(lVar1 + 0x14)) - lVar4;
      }
      else {
        lVar4 = 0;
      }
      *param_2 = lVar4;
      return 1;
    }
    lVar4 = *(long *)(lVar1 + 0x104);
    if ((*(uint *)(lVar4 + 0x54) & 3) == 3) {
      lVar4 = FUN_fffffffff000b4f0(lVar4 + 0x54);
      if (lVar4 == 0) {
        lVar1 = *(long *)(lVar1 + 0x104);
        goto LAB_fffffffff0009d30;
      }
      lVar4 = *(long *)(lVar1 + 0x104);
    }
    iVar2 = FUN_fffffffff0008424(lVar4,param_3,0);
    uVar3 = FUN_fffffffff0008424(lVar1,param_4,0);
    if (uVar3 != 0) {
      uVar3 = (ulong)(iVar2 != 0);
    }
  }
  return uVar3;
}


/* ---- FUN_fffffffff0009dc4 @ fffffffff0009dc4 size=728 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff0009dc4(long *param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 auStack_38 [2];
  
  lVar3 = g_3ab48;
  auStack_38[0] = 0;
  uVar6 = (ulong)*(uint *)(g_3ab48 + 0x1c);
  lVar5 = *(long *)(g_3ab48 + 0x18);
  uVar4 = (ulong)*(uint *)(g_3ab48 + 0x18);
  if ((*(uint *)(lVar5 + 0x30) & 2) == 0) {
    lVar5 = *(long *)(g_3ab48 + 0x58);
    if ((*(uint *)(lVar5 + 0x30) & 2) == 0) goto LAB_fffffffff0009e28;
    uVar1 = *(undefined4 *)(lVar5 + 0x3c);
    uVar2 = *(undefined4 *)(lVar5 + 0x38);
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x6c);
    if ((*(uint *)(lVar5 + 0x54) & 3) == 3) {
LAB_fffffffff0009ea4:
      lVar5 = FUN_fffffffff000b4f0(lVar5 + 0x54);
      if (lVar5 != 0) goto LAB_fffffffff0009f3c;
LAB_fffffffff0009eb0:
      FUN_fffffffff000bd84();
      uVar4 = (ulong)*(uint *)(lVar3 + 0x18);
      uVar6 = (ulong)*(uint *)(lVar3 + 0x1c);
      goto LAB_fffffffff0009e28;
    }
LAB_fffffffff0009fb0:
    lVar5 = FUN_fffffffff0008424(*(undefined8 *)(CONCAT44(uVar1,uVar2) + 0x6c),auStack_38,0);
    if (lVar5 == 0) {
      return 0;
    }
  }
  else {
    lVar7 = *(long *)(*(long *)(lVar5 + 0x38) + 0x6c);
    if ((*(uint *)(lVar7 + 0x54) & 3) == 3) {
      lVar5 = FUN_fffffffff000b4f0(lVar7 + 0x54);
      if (lVar5 == 0) goto LAB_fffffffff0009eb0;
      lVar7 = *(long *)(lVar3 + 0x58);
      if ((*(uint *)(lVar7 + 0x30) & 2) != 0) goto LAB_fffffffff0009f0c;
      uVar6 = (ulong)*(uint *)(lVar3 + 0x1c);
      lVar5 = *(long *)(lVar3 + 0x18);
      uVar4 = (ulong)*(uint *)(lVar3 + 0x18);
      if ((*(uint *)(lVar5 + 0x30) & 2) == 0) goto LAB_fffffffff0009e28;
LAB_fffffffff0009f58:
      lVar5 = FUN_fffffffff0008424(*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x6c),auStack_38,0);
      if (lVar5 == 0) {
        if ((*(uint *)(*(long *)(lVar3 + 0x58) + 0x30) & 2) != 0) {
          FUN_fffffffff0008424
                    (*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x58) + 0x38) + 0x6c),auStack_38,0)
          ;
          return 0;
        }
        return 0;
      }
    }
    else {
      lVar7 = *(long *)(g_3ab48 + 0x58);
      if ((*(uint *)(lVar7 + 0x30) & 2) == 0) goto LAB_fffffffff0009f58;
LAB_fffffffff0009f0c:
      lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x6c);
      if ((*(uint *)(lVar5 + 0x54) & 3) == 3) goto LAB_fffffffff0009ea4;
LAB_fffffffff0009f3c:
      lVar5 = *(long *)(lVar3 + 0x18);
      if ((*(uint *)(lVar5 + 0x30) & 2) != 0) goto LAB_fffffffff0009f58;
    }
    lVar5 = *(long *)(lVar3 + 0x58);
    if ((*(uint *)(lVar5 + 0x30) & 2) != 0) {
      uVar2 = *(undefined4 *)(lVar5 + 0x38);
      uVar1 = *(undefined4 *)(lVar5 + 0x3c);
      goto LAB_fffffffff0009fb0;
    }
  }
  uVar4 = (ulong)*(uint *)(lVar3 + 0x18);
  uVar6 = (ulong)*(uint *)(lVar3 + 0x1c);
LAB_fffffffff0009e28:
  *param_1 = (uVar6 << 0x20 | uVar4) + 0x30;
  *param_2 = *(long *)(lVar3 + 0x58) + 0x30;
  return 1;
}


/* ---- FUN_fffffffff000a09c @ fffffffff000a09c size=520 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_fffffffff000a09c(long param_1,long *param_2,long *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = g_3ab48;
  if ((*(uint *)(*(long *)(g_3ab48 + 0x78) + 0x30) & 2) == 0) {
    uVar3 = FUN_fffffffff0009054(*(undefined8 *)(param_1 + 0xfc),param_4);
    if (uVar3 == 0) {
      return 0;
    }
    *param_3 = *(long *)(lVar2 + 0x78) + 0x30;
    return uVar3;
  }
  lVar2 = *(long *)(*(long *)(*(long *)(g_3ab48 + 0x78) + 0x38) + 0x6c);
  if (param_1 != lVar2) {
    if (((*(uint *)(lVar2 + 0x54) & 3) != 3) ||
       (lVar4 = FUN_fffffffff000b4f0(lVar2 + 0x54), lVar4 != 0)) {
      if (((*(uint *)(*(long *)(lVar2 + 0xfc) + 0x54) & 3) != 3) ||
         (lVar4 = FUN_fffffffff000b4f0(*(long *)(lVar2 + 0xfc) + 0x54), lVar4 != 0)) {
        iVar1 = FUN_fffffffff0008424(lVar2,param_3,0);
        lVar2 = FUN_fffffffff0008424(*(undefined8 *)(lVar2 + 0xfc),param_4,0);
        if (lVar2 == 0) {
          return 0;
        }
        return (ulong)(iVar1 != 0);
      }
      lVar2 = *(long *)(lVar2 + 0xfc);
    }
    lVar4 = FUN_fffffffff000bd84();
    if ((ulong)(lVar4 - *(long *)(lVar2 + 0x3c)) < *(ulong *)(lVar2 + 0x14)) {
      lVar4 = (*(long *)(lVar2 + 0x3c) + *(ulong *)(lVar2 + 0x14)) - lVar4;
    }
    else {
      lVar4 = 0;
    }
    *param_2 = lVar4;
    return 1;
  }
  uVar3 = FUN_fffffffff0009054(*(undefined8 *)(param_1 + 0xfc),param_4);
  return uVar3;
}


/* ---- FUN_fffffffff000a2a4 @ fffffffff000a2a4 size=72 ---- */

undefined8 FUN_fffffffff000a2a4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar2 = FUN_fffffffff0009bd4();
    return uVar2;
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if (*(long *)(param_1 + 0xfc) != 0) {
      iVar1 = *(int *)(*(long *)(param_1 + 0xfc) + 0x30);
      if (iVar1 == 1) {
        uVar2 = FUN_fffffffff0009dc4();
        return uVar2;
      }
      if (iVar1 == 2) {
        uVar2 = FUN_fffffffff000a09c();
        return uVar2;
      }
    }
  }
  return 0;
}


/* ---- FUN_fffffffff000a2ec @ fffffffff000a2ec size=76 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff000a2ec(ulong param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(g_3ab40 + 0x3274);
  iVar1 = 0;
  while (((char)puVar2[0x27] == '\0' || (*puVar2 != param_1))) {
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 0x2b;
    if (iVar1 == 0x10) {
      return 0;
    }
  }
  *param_2 = iVar1;
  return 1;
}


/* ---- FUN_fffffffff000a338 @ fffffffff000a338 size=684 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff000a338(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint uVar5;
  uint extraout_a0;
  undefined8 uVar6;
  uint uVar7;
  uint extraout_var;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  long lVar13;
  long lVar14;
  
  uVar3 = *(undefined8 *)(param_1 + 0x4c);
  uVar7 = *(uint *)(param_1 + 0xc0);
  uVar5 = *(uint *)(param_1 + 0xc4);
  lVar14 = (long)*(int *)(param_1 + 0x6c);
  pcVar12 = (char *)(g_3ab40 + 0x3310);
  uVar10 = 0;
  do {
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 0xac;
    if (cVar1 == '\0') {
      lVar11 = (uVar10 & 0xffffffff) * 0xac;
      lVar9 = g_3ab40 + lVar11;
      puVar4 = (uint *)(g_3ab40 + lVar11 + 0x3268);
      *(ushort *)(lVar9 + 0x330c) =
           (ushort)*(int *)(param_1 + 0x6c) & 7 | (ushort)((uVar7 & 0xf) << 3) |
           (ushort)((uVar5 & 0xff) << 7) | *(ushort *)(lVar9 + 0x330c) & 0x8000;
      *(undefined1 *)(lVar9 + 0x3310) = 1;
      goto LAB_fffffffff000a3b0;
    }
    uVar10 = (ulong)((int)uVar10 + 1);
  } while (uVar10 != 0x10);
  puVar4 = (uint *)0x0;
LAB_fffffffff000a3b0:
  lVar9 = g_3ab48;
  uVar8 = (undefined4)((ulong)puVar4 >> 0x20);
  if (lVar14 == 0) {
    lVar13 = (ulong)uVar5 * 0x18 + (ulong)uVar7 * 0xc0;
    lVar11 = g_3ab48 + lVar13;
    *(ushort *)(lVar11 + 0x740) = *(ushort *)(lVar11 + 0x740) | 0x202;
    *(int *)(lVar11 + 0x748) = (int)puVar4;
    *(undefined4 *)(lVar11 + 0x74c) = uVar8;
    lVar11 = lVar9 + lVar13 + 0x740;
  }
  else {
    lVar11 = 0;
    if (lVar14 == 1) {
      lVar13 = (ulong)uVar5 * 0x18 + (ulong)uVar7 * 0xc0;
      lVar11 = g_3ab48 + lVar13;
      *(ushort *)(lVar11 + 0x100) = *(ushort *)(lVar11 + 0x100) | 0x202;
      *(int *)(lVar11 + 0x108) = (int)puVar4;
      *(undefined4 *)(lVar11 + 0x10c) = uVar8;
      lVar11 = lVar9 + lVar13 + 0x100;
    }
  }
  if (puVar4 != (uint *)0x0) {
    uVar7 = *(uint *)(param_1 + 0x48);
    puVar4[4] = (uint)uVar3;
    puVar4[5] = (uint)((ulong)uVar3 >> 0x20);
    puVar4[3] = uVar7;
    uVar6 = FUN_fffffffff000e714(lVar14,uVar3);
    iVar2 = *(int *)(g_3ab40 + 0x3d28);
    puVar4[0x11] = (uint)uVar6;
    puVar4[0x12] = (uint)((ulong)uVar6 >> 0x20);
    if (((ulong)(long)iVar2 >> 0x12 & 1) == 0) {
      FUN_fffffffff000e6c8(lVar14,uVar3);
      uVar5 = extraout_a0;
      uVar7 = extraout_var;
    }
    else {
      uVar7 = *(uint *)(param_1 + 0xd4);
      uVar5 = *(uint *)(param_1 + 0xd0);
    }
    puVar4[0xd] = uVar5;
    puVar4[0xe] = uVar7;
    uVar3 = *(undefined8 *)(param_1 + 0x54);
    puVar4[6] = *(uint *)(param_1 + 0x54);
    puVar4[7] = (uint)((ulong)uVar3 >> 0x20);
    *puVar4 = *puVar4 | 2;
    puVar4[1] = (uint)lVar11;
    puVar4[2] = (uint)((ulong)lVar11 >> 0x20);
  }
  return;
}


/* ---- FUN_fffffffff000a5e4 @ fffffffff000a5e4 size=352 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff000a5e4(ulong param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  
  piVar3 = (int *)(g_3ab40 + 0x3274);
  uVar2 = 0;
  while( true ) {
    lVar1 = g_3ab40 + (uVar2 & 0xffffffff) * 0xac;
    uVar2 = (ulong)((int)uVar2 + 1);
    if (((*(uint *)(lVar1 + 0x3268) >> 1 & 1) != 0) && (*piVar3 == param_3)) break;
    piVar3 = piVar3 + 0x2b;
    if (uVar2 == 0x10) {
joined_r0xfffffffff000a6e4:
      if (param_4 == 0) {
        lVar1 = g_3ab48 +
                (param_1 & 0xffffffff) * 0xc0 + (param_2 & 0xffffffff) * 0x18;
        *(undefined4 *)(lVar1 + 0x748) = 0;
        *(undefined4 *)(lVar1 + 0x74c) = 0;
        *(ushort *)(lVar1 + 0x740) = *(ushort *)(lVar1 + 0x740) & 0xfdfd;
        return;
      }
      if (param_4 != 1) {
        return;
      }
      lVar1 = g_3ab48 + (param_2 & 0xffffffff) * 0x18 + (param_1 & 0xffffffff) * 0xc0;
      *(undefined4 *)(lVar1 + 0x108) = 0;
      *(undefined4 *)(lVar1 + 0x10c) = 0;
      *(ushort *)(lVar1 + 0x100) = *(ushort *)(lVar1 + 0x100) & 0xfdfd;
      return;
    }
  }
  *(undefined4 *)(lVar1 + 0x330c) = 0;
  *(undefined1 *)(lVar1 + 0x3310) = 0;
  *(undefined4 *)(lVar1 + 0x3274) = 0;
  *(undefined4 *)(lVar1 + 0x3278) = 0;
  *(undefined4 *)(lVar1 + 0x327c) = 0;
  *(undefined4 *)(lVar1 + 0x32ac) = 0;
  *(undefined4 *)(lVar1 + 0x32b0) = 0;
  *(undefined4 *)(lVar1 + 0x329c) = 0;
  *(undefined4 *)(lVar1 + 0x32a0) = 0;
  *(undefined4 *)(lVar1 + 0x3280) = 0;
  *(undefined4 *)(lVar1 + 0x3284) = 0;
  *(uint *)(lVar1 + 0x3268) = *(uint *)(lVar1 + 0x3268) & 0xfffffffd;
  *(undefined4 *)(lVar1 + 0x326c) = 0;
  *(undefined4 *)(lVar1 + 0x3270) = 0;
  goto joined_r0xfffffffff000a6e4;
}


/* ---- FUN_fffffffff000a744 @ fffffffff000a744 size=172 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_fffffffff000a744(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  if (param_1 != 0) {
    uVar3 = FUN_fffffffff0018d94
                      (*(undefined8 *)(param_1 + 0x34),(long)*(int *)(param_1 + 0x30),&uStack_18,
                       (long)*(int *)(param_1 + 0x28));
    if (uVar3 != 0) {
      iVar2 = FUN_fffffffff0009380(param_1,*(long *)(g_3ab48 + 0x18) + 0x30);
      uVar3 = (ulong)(iVar2 != 0);
    }
    lVar1 = *(long *)(param_1 + 0x34);
    *(int *)(lVar1 + 0x44) = (int)param_1;
    *(int *)(lVar1 + 0x48) = (int)((ulong)param_1 >> 0x20);
    return uVar3;
  }
  return 0;
}


/* ---- FUN_fffffffff000a7f0 @ fffffffff000a7f0 size=208 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_fffffffff000a7f0(void)

{
  long lVar1;
  long lVar2;
  
  if ((*(uint *)(*(long *)(g_3ab48 + 0x18) + 0x30) & 2) == 0) {
    return true;
  }
  lVar1 = *(long *)(*(long *)(*(long *)(g_3ab48 + 0x18) + 0x38) + 0x6c);
  if ((((*(uint *)(lVar1 + 0x10) & 0x100) != 0) && ((*(uint *)(lVar1 + 0x54) & 3) == 3)) &&
     (lVar2 = FUN_fffffffff000b4f0(lVar1 + 0x54), lVar2 == 0)) {
    lVar2 = FUN_fffffffff000bd84();
    if ((ulong)(lVar2 - *(long *)(lVar1 + 0x3c)) < *(ulong *)(lVar1 + 0x14)) {
      return *(long *)(lVar1 + 0x3c) + *(ulong *)(lVar1 + 0x14) == lVar2;
    }
  }
  return true;
}


/* ---- FUN_fffffffff000a8c0 @ fffffffff000a8c0 size=128 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_fffffffff000a8c0(void)

{
  int iVar1;
  undefined8 auStack_18 [2];
  
  auStack_18[0] = 0;
  if ((*(uint *)(*(long *)(g_3ab48 + 0x18) + 0x30) & 2) == 0) {
    return true;
  }
  iVar1 = FUN_fffffffff0008424
                    (*(undefined8 *)
                      (*(long *)(*(long *)(g_3ab48 + 0x18) + 0x38) + 0x6c),auStack_18,
                     0);
  return iVar1 != 0;
}


/* ---- sub_0a940 @ fffffffff000a940 size=292 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_0a940(void)

{
  long lVar1;
  uint *puVar2;
  uint *puVar3;
  long lVar4;
  uint *puVar5;
  undefined8 auStack_58 [2];
  
  puVar2 = (uint *)(g_3ab48 + 0x700);
  auStack_58[0] = 0;
  puVar5 = (uint *)(g_3ab48 + 0x740);
  do {
    if ((*puVar2 & 1) != 0) {
      lVar1 = 0;
      do {
        while( true ) {
          puVar3 = (uint *)(*(long *)(puVar2 + 6) + lVar1);
          lVar1 = lVar1 + 0x18;
          if ((*puVar3 & 3) == 3) break;
          if (lVar1 == 0xc0) goto LAB_fffffffff000a998;
        }
        lVar4 = *(long *)(*(long *)(puVar3 + 2) + 0x6c);
        FUN_fffffffff0008424(lVar4,auStack_58,0);
        lVar4 = g_3ab40 + (long)*(int *)(lVar4 + 0x28) * 0x58;
        *(uint *)(lVar4 + 0x2c3c) = *(uint *)(lVar4 + 0x2c3c) | 1;
      } while (lVar1 != 0xc0);
    }
LAB_fffffffff000a998:
    puVar2 = puVar2 + 8;
    if (puVar5 == puVar2) {
      return;
    }
  } while( true );
}


/* ---- FUN_fffffffff000aa64 @ fffffffff000aa64 size=320 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff000aa64(void)

{
  long lVar1;
  uint *puVar2;
  uint *puVar3;
  long lVar4;
  uint *puVar5;
  undefined8 uStack_58;
  
  puVar2 = (uint *)(g_3ab48 + 0x700);
  uStack_58 = 0;
  puVar5 = (uint *)(g_3ab48 + 0x740);
  do {
    if ((*puVar2 & 1) != 0) {
      lVar1 = 0;
      do {
        while( true ) {
          puVar3 = (uint *)(*(long *)(puVar2 + 6) + lVar1);
          lVar1 = lVar1 + 0x18;
          if (((*puVar3 & 3) == 3) &&
             (lVar4 = *(long *)(*(long *)(puVar3 + 2) + 0x6c),
             (*(uint *)(lVar4 + 0x10) & 0xc00) == 0)) break;
          if (lVar1 == 0xc0) goto LAB_fffffffff000aac0;
        }
        FUN_fffffffff0008424(lVar4,&uStack_58,0);
        lVar4 = g_3ab40 + (long)*(int *)(lVar4 + 0x28) * 0x58;
        *(uint *)(lVar4 + 0x2c3c) = *(uint *)(lVar4 + 0x2c3c) | 1;
      } while (lVar1 != 0xc0);
    }
LAB_fffffffff000aac0:
    puVar2 = puVar2 + 8;
    if (puVar5 == puVar2) {
      return;
    }
  } while( true );
}


/* ---- FUN_fffffffff000aba4 @ fffffffff000aba4 size=24 ---- */

/* WARNING: Removing unreachable block (ram,0xfffffffff000aba4) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000abac) */

void FUN_fffffffff000aba4(long param_1)

{
  do {
  } while (param_1 != 0);
  return;
}


/* ---- FUN_fffffffff000abbc @ fffffffff000abbc size=492 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff000abbc
               (uint param_1,undefined4 param_2,uint param_3,uint param_4,long param_5,uint param_6)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = (ulong)*(int *)(g_3ab40 + 0x3d28);
  if ((uVar5 >> 0x13 & 1) != 0) {
    FUN_fffffffff001cdf4
              (0x16380,(long)(int)(((uint)param_5 & 0xf) << 4 | param_6 & 0xf |
                                   (param_1 & 0xff) << 8 | 0xc5a10000));
    uVar5 = (ulong)*(int *)(g_3ab40 + 0x3d28);
  }
  if ((uVar5 >> 0xd & 1) != 0) {
    lVar3 = *(long *)(g_3ab40 + 0x3d98);
    if (lVar3 != 0) {
      uVar5 = (ulong)(int)*(uint *)(lVar3 + 0x1e04);
      if (param_5 == 0) {
        if (0x5f < uVar5) {
          *(undefined4 *)(lVar3 + 0x1e04) = 0;
          uVar5 = 0;
        }
        lVar3 = lVar3 + (uVar5 & 0xffffffff) * 0x1c;
        *(byte *)(lVar3 + 0x918) =
             (byte)((param_4 & 1) << 3) | (byte)((param_3 & 3) << 1) |
             *(byte *)(lVar3 + 0x918) & 0xf1;
        *(uint *)(lVar3 + 0x900) = param_1;
        *(undefined4 *)(lVar3 + 0x904) = param_2;
        uVar2 = FUN_fffffffff001c0e0(0xf8);
        *(int *)(lVar3 + 0x908) = (int)uVar2;
        *(int *)(lVar3 + 0x90c) = (int)((ulong)uVar2 >> 0x20);
        *(uint *)(lVar3 + 0x918) = *(uint *)(lVar3 + 0x918) & 0xfffffffe;
        *(undefined4 *)(lVar3 + 0x910) = 0;
        *(undefined4 *)(lVar3 + 0x914) = 0;
      }
      else {
        lVar4 = lVar3 + (ulong)*(uint *)(lVar3 + 0x1e04) * 0x1c;
        *(uint *)(lVar4 + 0x918) = *(uint *)(lVar4 + 0x918) & 0xfffffffe | param_6 & 1;
        uVar2 = FUN_fffffffff001c0e0(0xf8);
        iVar1 = *(int *)(lVar3 + 0x1e04);
        *(int *)(lVar4 + 0x910) = (int)uVar2;
        *(int *)(lVar4 + 0x914) = (int)((ulong)uVar2 >> 0x20);
        *(int *)(lVar3 + 0x1e04) = iVar1 + 1;
      }
    }
  }
  return;
}


/* ---- sub_0ada8 @ fffffffff000ada8 size=100 ---- */

long sub_0ada8(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  if (param_2 != 0) {
    lVar1 = 0;
    lVar3 = 1;
    do {
      iVar2 = FUN_fffffffff001ed2c(param_1,lVar3);
      lVar1 = (long)((int)lVar1 + 1);
      lVar3 = (long)iVar2;
    } while (param_2 != lVar1);
    return lVar3;
  }
  return 1;
}


/* ---- FUN_fffffffff000ae0c @ fffffffff000ae0c size=208 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff000ae0c(void)

{
  uint local_34 [3];
  
  FUN_fffffffff001d1f8
            ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x1fb8),local_34,
             (long)g_3a158);
  FUN_fffffffff001cf10
            ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x1fb8),local_34[0] & 0x7fffffff,
             (long)g_3a158);
  FUN_fffffffff001d1f8
            ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x1fb8),local_34,
             (long)g_3a158);
  FUN_fffffffff001cf10
            ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x1fb8),
             (long)(int)local_34[0] & 0xffffffffbfffffff,(long)g_3a158);
  return;
}


/* ---- FUN_fffffffff000aedc @ fffffffff000aedc size=336 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff000aedc(void)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)&g_3a168;
  g_3a264 = 0xc0001000;
  uVar2 = 0x40;
  do {
    g_3a264 =
         g_3a264 & 0xc000ffff | ((uVar2 & 0x3fff) + 0x3ffe & 0x3fff) << 0x10;
    *puVar1 = g_3a264;
    uVar2 = uVar2 - 1;
    puVar1 = puVar1 + 1;
  } while (uVar2 != 1);
  g_3a264 = g_3a264 | 0x3fff0000;
  FUN_fffffffff001eb28(&g_3a268,&g_3a168,0x100);
  FUN_fffffffff001eb28(&g_3a368,&g_3a168,0x100);
  FUN_fffffffff001eb28(&g_3a468,&g_3a168,0x100);
  FUN_fffffffff001eb28(&g_3a568,&g_3a168,0x100);
  FUN_fffffffff001eb28(&g_3a668,&g_3a168,0x100);
  g_3a168 = g_3a168 & 0xff | 0xc005a200;
  g_3a268 = g_3a268 & 0xff | 0xc004a300;
  g_3a368 = g_3a368 & 0xff | g_001e0;
  g_3a468 = g_3a468 & 0xff | 0xc005a400;
  g_3a568 = g_3a568 & 0xff | 0xc0007000;
  g_3a668 = g_3a668 & 0xff | 0xc000d200;
  return;
}


/* ---- FUN_fffffffff000b02c @ fffffffff000b02c size=140 ---- */

long FUN_fffffffff000b02c(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  if (param_1 == 1) {
    if (param_3 != 0) {
      return (long)(int)((uint)(param_5 != 0) << 0x1a);
    }
    if (param_5 == 0) {
      lVar1 = (long)(int)(uint)(param_4 != 0);
    }
    else {
      lVar1 = (long)(int)(param_4 != 0 | 0x4000000);
    }
  }
  else if (param_1 == 2) {
    lVar1 = 0x8000000;
    if (param_2 == 1) {
      lVar1 = 0xc000000;
    }
  }
  else {
    lVar1 = (ulong)(param_1 == 0) << 0x1c;
  }
  return lVar1;
}


/* ---- FUN_fffffffff000b0b8 @ fffffffff000b0b8 size=140 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff000b0b8(void)

{
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  local_30 = *(int *)(g_3ab40 + 0x31dc) + 0x2f;
  iStack_2c = *(int *)(g_3ab40 + 0x31dc) + 0x62f;
  FUN_fffffffff001eb28(0xfffffffff013ab58,&local_30,8);
  iStack_28 = *(int *)(g_3ab40 + 0x31dc) + 0x7b;
  iStack_24 = *(int *)(g_3ab40 + 0x31dc) + 0x67b;
  FUN_fffffffff001eb28(0xfffffffff013ab50,&iStack_28,8);
  return;
}


/* ---- FUN_fffffffff000b144 @ fffffffff000b144 size=124 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff000b144(ulong param_1)

{
  FUN_fffffffff001cd2c();
  if (*(char *)(g_3ab40 + 0x2a0d4) != '\0') {
    FUN_fffffffff001cdd0();
    return;
  }
  *(undefined1 *)(g_3ab40 + 0x2a0d4) = 1;
  if (param_1 < 0x1000) {
    FUN_fffffffff001e7c0(0x1000);
  }
  else {
    FUN_fffffffff001e7c0(param_1 & 0xfffffffffffff000);
  }
  FUN_fffffffff001cdd0();
  return;
}


/* ---- sub_0b1c0 @ fffffffff000b1c0 size=72 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte sub_0b1c0(void)

{
  undefined1 *puVar1;
  byte bVar2;
  
  puVar1 = g_3ab40;
  bVar2 = *(int *)(g_3ab40 + 0x31a4) != *(int *)(g_3ab40 + 0x31a8);
  if ((bool)bVar2) {
    *g_3ab40 = 1;
  }
  if (puVar1[1] != '\0') {
    bVar2 = bVar2 | 2;
  }
  if (puVar1[2] != '\0') {
    bVar2 = bVar2 | 4;
  }
  return bVar2;
}


/* ---- FUN_fffffffff000b208 @ fffffffff000b208 size=304 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_fffffffff000b208(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  ulong uVar3;
  char cVar4;
  
  do {
    FUN_fffffffff001cd2c();
    puVar2 = g_3ab40;
    if (*(int *)(g_3ab40 + 0x31a4) != *(int *)(g_3ab40 + 0x31a8)) {
      pcVar1 = g_3ab40 + 1;
      *g_3ab40 = 1;
      cVar4 = puVar2[2];
      if (*pcVar1 == '\0') {
        uVar3 = 5;
        if (cVar4 == '\0') {
          uVar3 = 1;
        }
        goto LAB_fffffffff000b258;
      }
      uVar3 = 3;
LAB_fffffffff000b2e0:
      if (cVar4 != '\0') {
        uVar3 = uVar3 | 4;
      }
LAB_fffffffff000b258:
      FUN_fffffffff001cdd0();
      return uVar3;
    }
    cVar4 = g_3ab40[2];
    if (g_3ab40[1] != '\0') {
      uVar3 = 2;
      goto LAB_fffffffff000b2e0;
    }
    if (cVar4 != '\0') {
      uVar3 = 4;
      goto LAB_fffffffff000b258;
    }
    thunk_FUN_fffffffff001c820();
    puVar2 = g_3ab40;
    if (*(int *)(g_3ab40 + 0x31a4) != *(int *)(g_3ab40 + 0x31a8)) {
      pcVar1 = g_3ab40 + 1;
      *g_3ab40 = 1;
      cVar4 = puVar2[2];
      if (*pcVar1 == '\0') {
        if (cVar4 != '\0') {
          return 5;
        }
        return 1;
      }
      uVar3 = 3;
LAB_fffffffff000b324:
      if (cVar4 != '\0') {
        uVar3 = uVar3 | 4;
      }
      return uVar3;
    }
    cVar4 = g_3ab40[2];
    if (g_3ab40[1] != '\0') {
      uVar3 = 2;
      goto LAB_fffffffff000b324;
    }
    if (cVar4 != '\0') {
      return 4;
    }
  } while( true );
}


/* ---- FUN_fffffffff000b338 @ fffffffff000b338 size=160 ---- */

bool FUN_fffffffff000b338(uint *param_1)

{
  int iStack_18;
  int iStack_14;
  
  iStack_18 = 0;
  iStack_14 = 0;
  FUN_fffffffff001e05c(4,*(undefined8 *)(param_1 + 10),&iStack_18);
  FUN_fffffffff001e05c(4,*(undefined8 *)(param_1 + 8),&iStack_14);
  if ((*param_1 & 0x400) != 0) {
    return iStack_18 != iStack_14 << 4;
  }
  return iStack_18 != iStack_14;
}


/* ---- FUN_fffffffff000b3d8 @ fffffffff000b3d8 size=144 ---- */

long FUN_fffffffff000b3d8(long param_1)

{
  int iVar1;
  long lVar2;
  int aiStack_14 [3];
  
  aiStack_14[0] = 0;
  iVar1 = *(int *)(*(long *)(param_1 + 0x6c) + 0x30);
  if (iVar1 != 1) {
    lVar2 = 0;
    if (iVar1 == 0) {
      lVar2 = *(long *)(param_1 + 0x10) + 0x28c;
    }
    FUN_fffffffff001e05c(4,lVar2,aiStack_14);
    return (long)aiStack_14[0];
  }
  FUN_fffffffff001e05c(4,*(long *)(param_1 + 0x10) + 0x1a8,aiStack_14);
  return (long)aiStack_14[0];
}


/* ---- FUN_fffffffff000b468 @ fffffffff000b468 size=136 ---- */

void FUN_fffffffff000b468(long param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  undefined4 auStack_14 [3];
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x6c) + 0x30);
  auStack_14[0] = param_2;
  if (iVar1 != 1) {
    lVar2 = 0;
    if (iVar1 == 0) {
      lVar2 = *(long *)(param_1 + 0x10) + 0x28c;
    }
    FUN_fffffffff001e144(4,auStack_14,lVar2);
    return;
  }
  FUN_fffffffff001e144(4,auStack_14,*(long *)(param_1 + 0x10) + 0x1a8);
  return;
}


/* ---- FUN_fffffffff000b4f0 @ fffffffff000b4f0 size=8 ---- */

undefined1 FUN_fffffffff000b4f0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa0);
}


/* ---- FUN_fffffffff000b4f8 @ fffffffff000b4f8 size=36 ---- */

void FUN_fffffffff000b4f8(long param_1,uint *param_2)

{
  *param_2 = (*(uint *)(param_1 + 4) >> 7 & 0xff) << 8 | (*(uint *)(param_1 + 4) & 0x78) << 3;
  return;
}


/* ---- sub_0b51c @ fffffffff000b51c size=68 ---- */

void sub_0b51c(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 4) >> 3;
  uVar2 = uVar1 & 0xf;
  uVar3 = 0x10;
  if (3 < uVar2) {
    uVar2 = (uVar1 & 0xf) - 4;
    uVar3 = 0x20;
  }
  *param_2 = uVar3 | (*(uint *)(param_1 + 4) >> 7 & 0xff) << 8 | uVar2 << 6;
  return;
}


/* ---- sub_0b560 @ fffffffff000b560 size=96 ---- */

uint sub_0b560(long param_1)

{
  uint uVar1;
  uint uStack_14;
  
  uVar1 = *(uint *)(param_1 + 4);
  uStack_14 = 0;
  FUN_fffffffff001d0f8((long)*(int *)(((long)(int)(uVar1 >> 3) & 0xfU) * 4 + -0xfec54a8),&uStack_14)
  ;
  return uStack_14 >> ((long)(int)((uVar1 >> 7 & 0xff) << 2) & 0x1fU) & 1;
}


/* ---- sub_0b5c0 @ fffffffff000b5c0 size=40 ---- */

void sub_0b5c0(long param_1,uint *param_2)

{
  *param_2 = (*(uint *)(param_1 + 4) >> 7 & 0xff) << 8 | (*(uint *)(param_1 + 4) & 0x78) << 3 | 0x30
  ;
  return;
}


/* ---- FUN_fffffffff000b5e8 @ fffffffff000b5e8 size=452 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_fffffffff000b5e8(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uStack_18;
  uint uStack_14;
  
  uVar1 = *(uint *)(param_1 + 4);
  uStack_18 = 0;
  uVar4 = uVar1 & 7;
  if (uVar4 == 1) {
    if (param_2 != 0) {
      uVar4 = uVar1 >> 3 & 0xf;
      uVar3 = 0x10;
      if (3 < uVar4) {
        uVar4 = (uVar1 >> 3 & 0xf) - 4;
        uVar3 = 0x20;
      }
      FUN_fffffffff001d1f8
                ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x1fab),&uStack_18,
                 (long)(int)(uVar3 | (uVar1 >> 7 & 0xff) << 8 | uVar4 << 6));
      return uStack_18 & 1;
    }
    lVar2 = *(long *)(param_1 + 8);
  }
  else {
    if (uVar4 == 2) {
      uStack_14 = 0;
      FUN_fffffffff001d0f8
                ((long)*(int *)(((long)(int)(uVar1 >> 3) & 0xfU) * 4 + -0xfec54a8),&uStack_14);
      return uStack_14 >> ((long)(int)((uVar1 >> 7 & 0xff) << 2) & 0x1fU) & 1;
    }
    if (uVar4 != 0) {
      return 0;
    }
    if (param_2 != 0) {
      FUN_fffffffff001d1f8
                ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x1e80),&uStack_18,
                 (uVar1 >> 7 & 0xff) << 8 | (uVar1 & 0x78) << 3);
      return uStack_18 & 1;
    }
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    return 0;
  }
  FUN_fffffffff001e05c(4,*(long *)(lVar2 + 0x10) + 0x208,&uStack_18);
  return uStack_18 & 1;
}


/* ---- FUN_fffffffff000b7ac @ fffffffff000b7ac size=204 ---- */

undefined8 FUN_fffffffff000b7ac(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_fffffffff001c0e0(0xf8);
  while( true ) {
    lVar2 = FUN_fffffffff001c0e0(0xf8);
    if ((ulong)(param_2 * 100) <= (ulong)(lVar2 - lVar1)) {
      return 0;
    }
    lVar2 = FUN_fffffffff000b5e8(param_1,param_3);
    if (lVar2 != 0) break;
    FUN_fffffffff000aba4(50000);
  }
  return 1;
}


/* ---- sub_0b878 @ fffffffff000b878 size=104 ---- */

undefined8 sub_0b878(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  FUN_fffffffff001c0e0(0xf8);
  while (lVar1 = FUN_fffffffff000b5e8(param_1,param_2), lVar1 == 0) {
    FUN_fffffffff000aba4(50000);
  }
  return 1;
}


/* ---- FUN_fffffffff000b8e0 @ fffffffff000b8e0 size=252 ---- */

undefined8 FUN_fffffffff000b8e0(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_fffffffff001c0e0(0xf8);
  if (param_3 == 0) {
    while( true ) {
      lVar2 = FUN_fffffffff001c0e0(0xf8);
      if ((ulong)(param_2 * 100) <= (ulong)(lVar2 - lVar1)) {
        return 0;
      }
      lVar2 = FUN_fffffffff000b5e8(param_1,param_4);
      if (lVar2 == 0) break;
      FUN_fffffffff000aba4(50000);
    }
  }
  else {
    while (lVar1 = FUN_fffffffff000b5e8(param_1,param_4), lVar1 != 0) {
      FUN_fffffffff000aba4(50000);
    }
  }
  return 1;
}


/* ---- FUN_fffffffff000b9dc @ fffffffff000b9dc size=776 ---- */

uint FUN_fffffffff000b9dc(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  uVar3 = *(uint *)(param_1 + 4) & 7;
  if (uVar3 == 0) {
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    FUN_fffffffff001e05c(4,*(undefined8 *)(*(long *)(param_1 + 8) + 0x28),&uStack_18);
    FUN_fffffffff001e05c(4,*(undefined8 *)(*(long *)(param_1 + 8) + 0x4c),&uStack_1c);
    FUN_fffffffff001e05c(4,*(undefined8 *)(*(long *)(param_1 + 8) + 0x20),&uStack_14);
    uVar2 = 0;
    if (uStack_14 == uStack_18) {
      return (uint)(uStack_1c == uStack_14);
    }
  }
  else {
    if (uVar3 == 1) {
      FUN_fffffffff001e05c(4,*(undefined8 *)(*(long *)(param_1 + 8) + 0x28),&uStack_18);
      FUN_fffffffff001e05c(4,*(undefined8 *)(*(long *)(param_1 + 8) + 0x20),&uStack_14);
      uVar3 = uStack_14;
      if ((**(uint **)(param_1 + 8) & 0x400) != 0) {
        uVar3 = uStack_14 << 4;
      }
      if (uStack_18 == uVar3) {
        FUN_fffffffff001e05c(4,*(undefined8 *)(*(uint **)(param_1 + 8) + 0x13),&uStack_14);
        iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x30);
        if (iVar1 != 0) {
          uStack_18 = uStack_18 & iVar1 - 1U;
        }
        if (uStack_14 == uStack_18) {
          FUN_fffffffff001e05c(4,*(undefined8 *)(*(long *)(param_1 + 8) + 0x54),&uStack_14);
          if ((char)uStack_14 == '\0') {
            FUN_fffffffff001e05c(4,*(undefined8 *)(*(long *)(param_1 + 8) + 0x5c),&uStack_14);
            return 1 - (uStack_14 >> 0x1d & 1 | uStack_14 >> 0x1f) & 0xff;
          }
        }
      }
      return 0;
    }
    uVar2 = 1;
    if (uVar3 == 2) {
      FUN_fffffffff001e05c(4,*(undefined8 *)(*(long *)(param_1 + 8) + 0x28),&uStack_18);
      FUN_fffffffff001e05c(4,*(undefined8 *)(*(long *)(param_1 + 8) + 0x20),&uStack_14);
      uVar2 = 0;
      if (uStack_18 == uStack_14) {
        FUN_fffffffff001e05c(4,*(undefined8 *)(*(long *)(param_1 + 8) + 0x4c),&uStack_14);
        uVar2 = (uint)(uStack_18 == uStack_14);
      }
    }
  }
  return uVar2;
}


/* ---- FUN_fffffffff000bce4 @ fffffffff000bce4 size=64 ---- */

void FUN_fffffffff000bce4(long param_1)

{
  undefined8 local_10;
  undefined4 uStack_4;
  
  FUN_fffffffff001e7e8
            (local_10 & 0xfffc0000 | 0x4000000000000,
             CONCAT44(uStack_4,(uint)((ulong)(param_1 << 0x26) >> 0x26)) | 0x4000000);
  return;
}


/* ---- FUN_fffffffff000bd24 @ fffffffff000bd24 size=24 ---- */

long FUN_fffffffff000bd24(long param_1)

{
  return param_1 * 100;
}


/* ---- FUN_fffffffff000bd3c @ fffffffff000bd3c size=72 ---- */

long FUN_fffffffff000bd3c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_fffffffff001ed98(100);
  lVar2 = FUN_fffffffff001ede0(param_1,100);
  return lVar1 + (ulong)(lVar2 != 0);
}


/* ---- FUN_fffffffff000bd84 @ fffffffff000bd84 size=8 ---- */

void FUN_fffffffff000bd84(void)

{
  FUN_fffffffff001c0e0(0xf8);
  return;
}


/* ---- FUN_fffffffff000bd8c @ fffffffff000bd8c size=40 ---- */

void FUN_fffffffff000bd8c(undefined4 param_1)

{
  undefined4 uStack_4;
  
  FUN_fffffffff001e7e8(0x4000000000000,CONCAT44(uStack_4,param_1) & 0xffffffff00000003 | 0x8000000);
  return;
}


/* ---- FUN_fffffffff000bdb4 @ fffffffff000bdb4 size=160 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff000bdb4(void)

{
  undefined4 uStack_38;
  undefined4 auStack_34 [3];
  
  uStack_38 = 0;
  auStack_34[0] = 0;
  FUN_fffffffff001d1f8
            ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x1fb6),&uStack_38,
             (long)g_3a158);
  FUN_fffffffff001d1f8
            ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x1fb7),auStack_34,
             (long)g_3a158);
  return CONCAT44(auStack_34[0],uStack_38);
}


/* ---- FUN_fffffffff000be54 @ fffffffff000be54 size=304 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff000be54(void)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint local_40;
  uint uStack_3c;
  long alStack_38 [2];
  
  FUN_fffffffff001d0f8((long)(*(int *)(g_3ab40 + 0x31e0) + 0x98a),&local_40);
  g_3a158 =
       ((local_40 & 0xff) >> 3 & 3) << 6 | ((local_40 & 0xff) >> 5 & 3) << 4 | (local_40 & 7) << 8;
  local_40 = g_3a158;
  FUN_fffffffff001d2a8((long)(*(int *)(g_3ab40 + 0x31dc) + 0x1fb1),alStack_38);
  g_3a160 = alStack_38[0] << 8;
  alStack_38[0] = g_3a160;
  FUN_fffffffff001d1f8
            ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x1fba),&uStack_3c,
             (long)(int)local_40);
  lVar2 = g_3ab40;
  g_3a15c = 1;
  uVar4 = 0;
  do {
    g_3a15c = g_3a15c << 1;
    bVar1 = (uStack_3c & 0x3f) != uVar4;
    uVar4 = uVar4 + 1;
  } while (bVar1);
  uVar3 = FUN_fffffffff000bdb4();
  *(int *)(lVar2 + 0x31cc) = (int)uVar3;
  *(int *)(lVar2 + 0x31d0) = (int)((ulong)uVar3 >> 0x20);
  return;
}


/* ---- FUN_fffffffff000bf84 @ fffffffff000bf84 size=1484 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff000bf84(ulong param_1,ulong *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong local_78 [2];
  
  uVar1 = param_2[1];
  uVar4 = *(uint *)((long)param_2 + 0xc);
  uVar11 = (ulong)(int)uVar4;
  uVar5 = (uint)param_2[2];
  uVar14 = param_2[3];
  uVar13 = param_2[4];
  uVar12 = param_2[6];
  uVar10 = param_2[8];
  uVar9 = *param_2 >> 4 & 1;
  lVar6 = g_3ab40;
  if ((*(uint *)(g_3ab40 + 0x3d28) & 2) != 0) {
    FUN_fffffffff000be54();
    if (*(long *)(g_3ab40 + 0x31d4) == 0) {
      FUN_fffffffff000ae0c();
    }
    lVar6 = g_3ab40;
    *(uint *)(g_3ab40 + 0x3d28) =
         *(uint *)(g_3ab40 + 0x3d28) & 0xfffffffd;
  }
  local_78[0] = 0;
  FUN_fffffffff001e05c(8,*(undefined8 *)(lVar6 + 0x31cc),local_78);
  uVar7 = 0;
  if (local_78[0] < g_3a15c) {
    uVar7 = local_78[0] << 2;
  }
  uVar8 = *param_2 & 7;
  local_78[0] = uVar7;
  if (param_1 == 0xa3) {
    g_3a270 = 0;
    g_3a278 = 0;
    g_3a26c = FUN_fffffffff000b02c(uVar8,uVar11,0,*param_2 >> 3 & 1,uVar9);
    uVar1 = *param_2;
    if ((uVar1 & 0x100) == 0) {
      g_3a26c = g_3a26c & 0x1fffffcf | 0x20000000;
    }
    else {
      g_3a26c = g_3a26c | 0x30;
    }
    if ((uVar1 & 0x40) != 0) {
      g_3a26c = g_3a26c | 3;
      g_3a274 = (uint)uVar12 & 0xfffffffc | g_3a274 & 3;
      g_3a278 = CONCAT44((uint)param_2[7],(int)(uVar12 >> 0x20));
    }
    g_3a270 =
         CONCAT44(g_3a274,
                  (uint)((ulong)((long)(int)uVar5 << 0x26) >> 0x24) |
                  g_3a270 & 0xf0000003);
    if ((uVar1 & 0x200) != 0) {
      g_3a26c = g_3a26c | 0x40;
    }
    FUN_fffffffff001e144(0x100,&g_3a268,uVar7 + g_3a160);
    goto LAB_fffffffff000c160;
  }
  if (0xa3 < param_1) {
    if (param_1 == 0xa4) {
      lVar6 = (long)(int)*(uint *)((long)param_2 + 0x2c) << 0x24;
      uVar4 = (uint)((ulong)lVar6 >> 0x24);
      g_3a478 = 0;
      g_3a480 = 0;
      if ((*param_2 & 0x20) == 0) {
        g_3a46f = (byte)((ulong)lVar6 >> 0x3c);
        uVar5 = (uVar5 & 0x3ffffff) << 2;
        g_3a46c = (undefined3)uVar4;
        g_3a46c = CONCAT13(g_3a46f,g_3a46c) | 0xa0000000;
        if (uVar8 == 0) {
          uVar5 = uVar5 | 0x40000000;
        }
        g_3a470 = CONCAT44((int)*(undefined8 *)(g_3ab40 + 0x31c0),uVar5)
        ;
        g_3a478 =
             CONCAT44((uint)param_2[5],
                      (int)((ulong)*(undefined8 *)(g_3ab40 + 0x31c0) >> 0x20));
      }
      else {
        uVar5 = (uVar5 & 0x3ffffff) << 2;
        g_3a470 = (ulong)uVar5;
        g_3a46c = uVar4;
        if (uVar8 == 0) {
          g_3a470 = (long)(int)uVar5 | 0x40000000;
        }
      }
      FUN_fffffffff001e144(0x100,&g_3a468,uVar7 + g_3a160);
    }
    else if (param_1 == 0xd2) {
      FUN_fffffffff001e144(0x100,&g_3a668,uVar7 + g_3a160);
    }
    goto LAB_fffffffff000c160;
  }
  if (param_1 == 0x70) {
    g_3a56c = (uint)*param_2 >> 7 & 1;
    FUN_fffffffff001e144(0x100,&g_3a568,uVar7 + g_3a160);
    goto LAB_fffffffff000c160;
  }
  if (param_1 != 0xa2) {
    if (param_1 == 0x37) {
      g_3a378 = (uint)param_2[9];
      g_3a36c = g_3a36c & 0xf9eef0ff | 0x10500;
      g_3a370 = (uint)uVar10 & 0xfffffffc;
      g_3a374 = (undefined4)(uVar10 >> 0x20);
      FUN_fffffffff001e144(0x100,&g_3a368,uVar7 + g_3a160);
    }
    goto LAB_fffffffff000c160;
  }
  uVar2 = FUN_fffffffff000b02c(uVar8,uVar11,1,0,uVar9);
  g_3a16c =
       CONCAT22((short)((uint)uVar2 >> 0x10),
                (ushort)(((long)(int)*(uint *)((long)param_2 + 4) & 0xfU) << 8) |
                (ushort)uVar2 & 0xf0cf);
  if (uVar8 == 1) {
    uVar3 = 0;
    if (3 < uVar11) {
      uVar4 = uVar4 - 4;
      uVar3 = 0x20;
    }
LAB_fffffffff000c474:
    uVar3 = ((uint)uVar1 | uVar3 | uVar4 << 3) & 0xff;
  }
  else {
    uVar3 = (uint)uVar1 & 0xff;
    if ((uVar8 != 2) && (uVar3 = 0, uVar8 == 0)) goto LAB_fffffffff000c474;
  }
  g_3a16c = uVar3 << 0xd | 0x20000000 | g_3a16c & 0x1fe01fff;
  g_3a170 = (uint)((ulong)((long)(int)uVar5 << 0x26) >> 0x24);
  g_3a180 = (undefined4)(uVar13 >> 0x20);
  g_3a174 = (undefined4)uVar14;
  g_3a178 = (undefined4)(uVar14 >> 0x20);
  g_3a17c = (undefined4)uVar13;
  FUN_fffffffff001e144(0x100,&g_3a168,uVar7 + g_3a160);
LAB_fffffffff000c160:
  local_78[0] = (local_78[0] >> 2) + 0x40;
  FUN_fffffffff001e144(8,local_78,*(undefined8 *)(g_3ab40 + 0x31cc));
  if (*(long *)(g_3ab40 + 0x31d4) == 0) {
    FUN_fffffffff001cfc0
              ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x1fdf),local_78[0],
               (long)g_3a158);
  }
  else {
    FUN_fffffffff001e144(8,*(undefined8 *)(g_3ab40 + 0x31cc));
  }
  return;
}


/* ---- FUN_fffffffff000c550 @ fffffffff000c550 size=488 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff000c550(long param_1,long param_2)

{
  undefined8 uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  int iStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uVar3 = (ulong)(*(int *)(g_3ab40 + 0x3da0) + 1);
  if (uVar3 == 0xffffffffffffffff) {
    uVar3 = 1;
  }
  *(int *)(g_3ab40 + 0x3da0) = (int)uVar3;
  uVar1 = *(undefined8 *)(param_1 + 0x44);
  uStack_68 = uVar3 & 0xffffffff;
  local_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  bVar2 = false;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_c8 = uStack_68;
  uStack_d0 = uVar1;
  uStack_70 = uVar1;
  FUN_fffffffff000bf84(0x37,&local_110);
  lVar4 = FUN_fffffffff001c0e0(0xf8);
  iStack_b4 = 0;
  do {
    FUN_fffffffff001e05c(4,uVar1,&iStack_b4);
    while( true ) {
      if ((long)iStack_b4 == uVar3) {
        return 1;
      }
      FUN_fffffffff000aba4(50000);
      if (((((*(uint *)(g_3ab40 + 0x3d28) & 0x800000) == 0) ||
           (*(int *)(g_3ab40 + 0x3da4) != 0)) ||
          (lVar5 = FUN_fffffffff001c0e0(0xf8), (ulong)(lVar5 - lVar4) < 0x1312d01)) ||
         ((param_2 == 0 || (bVar2)))) break;
      lVar5 = FUN_fffffffff000f27c(1);
      if (lVar5 == 0) {
        return 0;
      }
      FUN_fffffffff000f72c();
      FUN_fffffffff001e05c(4,uVar1,&iStack_b4);
      bVar2 = true;
    }
  } while( true );
}


/* ---- FUN_fffffffff000c738 @ fffffffff000c738 size=844 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff000c738(uint *param_1,uint *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong local_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  uint uStack_78;
  uint uStack_74;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar6 = param_1[1];
  uStack_68 = *(undefined8 *)(param_2 + 4);
  uStack_60 = *(undefined8 *)(param_2 + 6);
  lVar3 = (long)(int)param_2[3];
  uVar1 = (long)(int)uVar6 & 7;
  uStack_78 = uVar6 >> 7 & 0xff;
  uStack_74 = uVar6 >> 3 & 0xf;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_70 = (ulong)param_2[3];
  lVar2 = *(long *)(*(long *)(*(long *)(param_2 + 0x1b) + 0x34) + 0x10);
  auStack_80._0_4_ = (undefined4)uVar1;
  if (((*(uint *)(g_3ab40 + 0x3d28) & 8) == 0) || (uVar1 != 1)) {
    if (uVar1 != 0) {
      if (uVar1 == 2) {
        uVar6 = *(uint *)(lVar2 + 0x4c);
        auStack_80._4_4_ = uVar6;
        goto LAB_fffffffff000c87c;
      }
      uVar6 = *(uint *)(lVar2 + 0x40);
      auStack_80._4_4_ = uVar6;
      if (uVar1 != 1) goto LAB_fffffffff000c87c;
      goto LAB_fffffffff000ca44;
    }
    if ((*(int *)(*(long *)(param_2 + 0x1b) + 0x28) == 3) &&
       ((*(uint *)(g_3ab40 + 0x3d28) & 0x80) != 0)) {
      auStack_80._4_4_ = *(undefined4 *)(lVar2 + 0x44);
    }
    else {
      auStack_80._4_4_ = *(undefined4 *)(lVar2 + 0x40);
    }
    uVar5 = *(undefined8 *)(param_2 + 0xf);
    puVar4 = (undefined8 *)(auStack_80 + 4);
  }
  else {
    uVar6 = *(uint *)(lVar2 + 0x48);
    auStack_80._4_4_ = uVar6;
LAB_fffffffff000ca44:
    uVar5 = *(undefined8 *)(param_2 + 0xf);
    puVar4 = &uStack_88;
    uStack_88 = CONCAT44(uStack_88._4_4_,uVar6 & 0xf | (uVar6 & 0xf) << 8);
  }
  FUN_fffffffff001e144(4,puVar4,uVar5);
  lVar3 = (long)(int)uStack_70;
  uVar1 = (ulong)auStack_80 & 7;
  uVar6 = auStack_80._4_4_;
LAB_fffffffff000c87c:
  *param_1 = *param_1 | 2;
  param_1[2] = (uint)param_2;
  param_1[3] = (uint)((ulong)param_2 >> 0x20);
  *(undefined1 *)(param_2 + 0x28) = 0;
  *param_1 = *param_1 & 0xffffff87 | (uVar6 & 0xf) << 3;
  uVar6 = *param_2;
  *param_2 = uVar6 | 2;
  param_2[1] = (uint)param_1;
  param_2[2] = (uint)((ulong)param_1 >> 0x20);
  FUN_fffffffff000abbc(0,lVar3,uVar1,uVar6 >> 4 & 1,0,0);
  local_e0 = (ulong)auStack_80;
  uStack_d8 = CONCAT44(uStack_74,uStack_78);
  uStack_d0 = uStack_70;
  uStack_c8 = uStack_68;
  uStack_c0 = uStack_60;
  uStack_b8 = uStack_58;
  uStack_b0 = uStack_50;
  uStack_a8 = uStack_48;
  uStack_a0 = uStack_40;
  uStack_98 = uStack_38;
  FUN_fffffffff000bf84(0xa2,&local_e0);
  lVar2 = FUN_fffffffff000c550(param_2,0);
  if (lVar2 != 0) {
    uVar6 = *(uint *)(g_3ab40 + 0x3d28);
    FUN_fffffffff001c0e0(0xf8);
    while (lVar2 = FUN_fffffffff000b5e8(param_1,uVar6 >> 0xe & 1), lVar2 == 0) {
      FUN_fffffffff000aba4(50000);
    }
    FUN_fffffffff000abbc(0,(long)(int)uStack_70,(ulong)auStack_80 & 7,*param_2 >> 4 & 1,1,1);
    uStack_88 = 0;
    FUN_fffffffff001e144(4,&uStack_88,*(undefined8 *)(param_2 + 0xd));
    return 1;
  }
  return 0;
}


/* ---- FUN_fffffffff000ca84 @ fffffffff000ca84 size=168 ---- */

undefined8 FUN_fffffffff000ca84(ulong param_1,undefined8 param_2)

{
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  int aiStack_74 [19];
  ulong uStack_28;
  
  uStack_28 = param_1 & 0xffffffff;
  local_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = uStack_28;
  uStack_90 = param_2;
  FUN_fffffffff000bf84(0x37,&local_d0);
  aiStack_74[0] = 0;
  while( true ) {
    FUN_fffffffff001e05c(4,param_2,aiStack_74);
    if ((long)aiStack_74[0] == param_1) break;
    FUN_fffffffff000aba4(50000);
  }
  return 1;
}


/* ---- FUN_fffffffff000cb2c @ fffffffff000cb2c size=136 ---- */

bool FUN_fffffffff000cb2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long local_c0 [21];
  
  local_c0[10] = (ulong)(param_1 != 0) << 7;
  local_c0[0] = local_c0[10];
  local_c0[1] = 0;
  local_c0[2] = 0;
  local_c0[3] = 0;
  local_c0[4] = 0;
  local_c0[5] = 0;
  local_c0[6] = 0;
  local_c0[7] = 0;
  local_c0[8] = 0;
  local_c0[9] = 0;
  FUN_fffffffff000bf84(0x70,local_c0);
  iVar1 = FUN_fffffffff000ca84(param_2,param_3);
  return iVar1 != 0;
}


/* ---- FUN_fffffffff000cbb4 @ fffffffff000cbb4 size=188 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_fffffffff000cbb4(void)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  FUN_fffffffff000bf84(0xd2,&local_b0);
  iVar2 = *(int *)(g_3ab40 + 0x2a138) + 1;
  if (iVar2 == -1) {
    iVar2 = 1;
  }
  puVar1 = (undefined8 *)(g_3ab40 + 0x2a13c);
  *(int *)(g_3ab40 + 0x2a138) = iVar2;
  iVar2 = FUN_fffffffff000ca84(*puVar1);
  return iVar2 != 0;
}


/* ---- FUN_fffffffff000cc70 @ fffffffff000cc70 size=164 ---- */

undefined8 FUN_fffffffff000cc70(long param_1)

{
  ulong local_b0 [3];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_60 = (ulong)(byte)*(undefined4 *)(param_1 + 4) & 0xffffffffffffff07 | 8;
  uStack_50 = (ulong)*(uint *)(*(long *)(param_1 + 8) + 0xc);
  local_b0[0] = uStack_60;
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  local_b0[1] = 0;
  local_b0[2] = uStack_50;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  FUN_fffffffff000bf84(0xa3,local_b0);
  return 1;
}


/* ---- FUN_fffffffff000cd14 @ fffffffff000cd14 size=400 ---- */

undefined8 FUN_fffffffff000cd14(long param_1,uint param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_80._0_4_ = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if (param_1 == 0) {
    if (param_3 == (uint *)0x0) {
      lVar3 = 0;
      uVar4 = 0;
      uVar2 = 0;
    }
    else {
      uStack_80._0_4_ = 0x20;
      uStack_58 = (ulong)*param_3 << 0x20;
      lVar3 = 0;
      uVar4 = 0;
      uVar2 = 0;
    }
  }
  else {
    puVar1 = *(uint **)(param_1 + 8);
    uStack_68 = *(undefined8 *)(puVar1 + 4);
    lVar3 = (long)(int)puVar1[3];
    uVar4 = *(uint *)(param_1 + 4) & 7;
    uStack_58 = (ulong)param_2;
    uVar2 = *puVar1 >> 4 & 1;
  }
  uStack_80._4_4_ = 0;
  FUN_fffffffff000abbc(2,lVar3,uVar4,uVar2,0,1);
  uStack_70 = CONCAT44(uStack_70._4_4_,(int)lVar3);
  uStack_80 = CONCAT44(uStack_80._4_4_,(uint)uStack_80 & 0xfffffff8 | uVar4);
  local_d0 = uStack_80;
  uStack_c8 = uStack_78;
  uStack_c0 = uStack_70;
  uStack_b8 = uStack_68;
  uStack_b0 = uStack_60;
  uStack_a8 = uStack_58;
  uStack_a0 = uStack_50;
  uStack_98 = uStack_48;
  uStack_90 = uStack_40;
  uStack_88 = uStack_38;
  FUN_fffffffff000bf84(0xa4,&local_d0);
  FUN_fffffffff000abbc(2,lVar3,uVar4,uVar2,1,1);
  return 1;
}


/* ---- FUN_fffffffff000cea4 @ fffffffff000cea4 size=116 ---- */

undefined8 FUN_fffffffff000cea4(uint param_1,undefined8 param_2,uint param_3)

{
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_50;
  ulong uStack_28;
  
  uStack_60 = 0x40;
  uStack_50 = (ulong)param_1;
  local_b0 = 0x40;
  uStack_28 = (ulong)param_3;
  uStack_a0 = uStack_50;
  uStack_a8 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_78 = uStack_28;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_80 = param_2;
  FUN_fffffffff000bf84(0xa3,&local_b0);
  return 1;
}


/* ---- FUN_fffffffff000cf18 @ fffffffff000cf18 size=428 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_fffffffff000cf18(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  
  uStack_128 = 0;
  uVar3 = param_4 & 7;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_140 = 0;
  uStack_130 = 0;
  uStack_138 = FUN_fffffffff001ec50(auStack_d8,0,0xa4);
  uStack_140 = CONCAT44(param_4,(undefined4)uStack_140) & 0x7ffffffff | 0x800000000;
  uStack_120 = CONCAT44(1,(undefined4)uStack_120);
  uStack_128._0_4_ = 0x10;
  uStack_110 = param_2;
  uStack_108 = param_3;
  uStack_c8 = param_2;
  FUN_fffffffff000abbc(0,param_1,uVar3,0,0,0);
  uStack_118 = CONCAT44(uStack_118._4_4_,(int)param_1);
  uStack_128 = CONCAT44(uStack_128._4_4_,uVar3 | (uint)uStack_128 & 0xfffffff8);
  local_190 = uStack_128;
  uStack_188 = uStack_120;
  uStack_180 = uStack_118;
  uStack_178 = uStack_110;
  uStack_170 = uStack_108;
  uStack_168 = uStack_100;
  uStack_160 = uStack_f8;
  uStack_158 = uStack_f0;
  uStack_150 = uStack_e8;
  uStack_148 = uStack_e0;
  FUN_fffffffff000bf84(0xa2,&local_190);
  uVar1 = *(uint *)(g_3ab40 + 0x3d28);
  FUN_fffffffff001c0e0(0xf8);
  while (lVar2 = FUN_fffffffff000b5e8(&uStack_140,uVar1 >> 0xe & 1), lVar2 == 0) {
    FUN_fffffffff000aba4(50000);
  }
  FUN_fffffffff000abbc(0,param_1,uVar3,0,1,1);
  return 1;
}


/* ---- FUN_fffffffff000d0c4 @ fffffffff000d0c4 size=444 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_fffffffff000d0c4
          (uint param_1,uint param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          ulong param_6)

{
  uint uVar1;
  long lVar2;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  uint uStack_130;
  uint uStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [16];
  undefined8 uStack_d8;
  
  uStack_138 = 0;
  uStack_128 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_150 = 0;
  uStack_140 = 0;
  uStack_148 = FUN_fffffffff001ec50(auStack_e8,0,0xa4);
  uStack_150._0_6_ =
       CONCAT24((ushort)(param_6 & 7) | (ushort)((param_1 & 0xf) << 3) |
                (ushort)((param_2 & 0xff) << 7),(undefined4)uStack_150);
  uStack_138 = CONCAT44(uStack_138._4_4_,(int)(param_6 & 7));
  uStack_128 = CONCAT44(uStack_128._4_4_,(int)param_3);
  uStack_130 = param_2;
  uStack_12c = param_1;
  uStack_120 = param_4;
  uStack_118 = param_5;
  uStack_d8 = param_4;
  FUN_fffffffff000abbc(0,param_3,param_6,0,0,0);
  local_1a0 = uStack_138;
  uStack_198 = CONCAT44(uStack_12c,uStack_130);
  uStack_190 = uStack_128;
  uStack_188 = uStack_120;
  uStack_180 = uStack_118;
  uStack_178 = uStack_110;
  uStack_170 = uStack_108;
  uStack_168 = uStack_100;
  uStack_160 = uStack_f8;
  uStack_158 = uStack_f0;
  FUN_fffffffff000bf84(0xa2,&local_1a0);
  uVar1 = *(uint *)(g_3ab40 + 0x3d28);
  FUN_fffffffff001c0e0(0xf8);
  while (lVar2 = FUN_fffffffff000b5e8(&uStack_150,uVar1 >> 0xe & 1), lVar2 == 0) {
    FUN_fffffffff000aba4(50000);
  }
  FUN_fffffffff000abbc(0,param_3,param_6,0,1,1);
  return 1;
}


/* ---- FUN_fffffffff000d280 @ fffffffff000d280 size=1224 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff000d280(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong local_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  ulong uStack_b0;
  uint uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar5 = *(long *)(param_1 + 8);
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0xc);
    lVar9 = (long)iVar1;
    if (lVar9 == 0) {
      return 1;
    }
    uVar7 = *(uint *)(param_1 + 4) & 7;
    lStack_98 = ((ulong)(*(uint *)(param_1 + 4) >> 3) & 0xf) << 0x20;
    uStack_a0._4_4_ = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_b4 = 1;
    uStack_a0._0_4_ = uVar7;
    FUN_fffffffff001e144(4,&uStack_b4,*(undefined8 *)(lVar5 + 0x34));
    uStack_b8 = 0;
    FUN_fffffffff001e05c(4,*(undefined8 *)(*(long *)(param_1 + 8) + 0x34),&uStack_b8);
    lVar10 = (long)(int)uVar7;
    FUN_fffffffff000abbc(1,lVar9,lVar10,**(uint **)(param_1 + 8) >> 4 & 1,0,0);
    uStack_90 = CONCAT44(uStack_90._4_4_,iVar1);
    uStack_a0 = CONCAT44(uStack_a0._4_4_,
                         (uint)uStack_a0 & 0xfffffdf8 | uVar7 | (uint)(uVar7 == 0) << 9);
    local_110 = uStack_a0;
    lStack_108 = lStack_98;
    uStack_100 = uStack_90;
    uStack_f8 = uStack_88;
    uStack_f0 = uStack_80;
    uStack_e8 = uStack_78;
    uStack_e0 = uStack_70;
    uStack_d8 = uStack_68;
    uStack_d0 = uStack_60;
    uStack_c8 = uStack_58;
    FUN_fffffffff000bf84(0xa3,&local_110);
    lVar5 = FUN_fffffffff000c550(*(undefined8 *)(param_1 + 8),(uStack_a0 & 7) == 0);
    if (lVar5 == 0) {
      return 0;
    }
    lVar5 = FUN_fffffffff000b8e0
                      (param_1,200000,*(undefined1 *)(g_3ab40 + 0x2a124),
                       *(uint *)(g_3ab40 + 0x3d28) >> 0xe & 1);
    if (lVar5 == 0) {
      if ((((((ulong)(long)*(int *)(g_3ab40 + 0x3d28) >> 0x17 & 1) != 0) &&
           (*(int *)(g_3ab40 + 0x3da4) == 0)) && ((*(uint *)(param_1 + 4) & 7) == 0))
         && ((*(int *)(g_3ab40 + 0x2a144) != 0 &&
             (*(int *)(g_3ab40 + 0x2a148) != 0)))) {
        lVar5 = FUN_fffffffff000f27c(1);
        if (lVar5 == 0) goto LAB_fffffffff000d5c0;
        FUN_fffffffff000f72c();
      }
      lVar5 = FUN_fffffffff000b8e0
                        (param_1,*(int *)(g_3ab40 + 0x3db8) + -1200000,
                         *(undefined1 *)(g_3ab40 + 0x2a124),
                         *(uint *)(g_3ab40 + 0x3d28) >> 0xe & 1);
      if (lVar5 == 0) {
LAB_fffffffff000d5c0:
        lVar5 = g_3ab40;
        uVar2 = *(undefined4 *)(param_1 + 0xc);
        uVar3 = *(undefined4 *)(param_1 + 8);
        puVar4 = *(uint **)(param_1 + 8);
        if ((*(uint *)(param_1 + 4) & 7) != 2) {
          lVar6 = 0;
          *(uint *)(g_3ab40 + 0x3d28) = *(uint *)(g_3ab40 + 0x3d28) | 4;
          *puVar4 = *puVar4 | 0x200;
          do {
            lVar8 = lVar5 + ((ulong)(lVar6 << 0x20) >> 0x1d);
            lVar6 = (long)((int)lVar6 + 1);
            if (*(long *)(lVar8 + 0x3248) == 0) {
              *(undefined4 *)(lVar8 + 0x3248) = uVar3;
              *(int *)(lVar8 + 0x324c) = (int)((ulong)puVar4 >> 0x20);
              break;
            }
          } while (lVar6 != 4);
          if (param_2 == 0) {
            uVar7 = (uint)((ulong)((long)(int)puVar4[3] << 0x26) >> 0x26);
            uStack_a8 = uVar7 | 0x4000000;
            uStack_b0 = uStack_b0 & 0xfffc0000 | 0x4000000000000;
            FUN_fffffffff001e7e8(CONCAT44(uStack_a4,uVar7) | 0x4000000);
          }
          uVar3 = *(undefined4 *)(param_1 + 8);
          uVar2 = *(undefined4 *)(param_1 + 0xc);
        }
        FUN_fffffffff000abbc(1,lVar9,lVar10,*(uint *)CONCAT44(uVar2,uVar3) >> 4 & 1,1,0);
        return 0;
      }
    }
    lVar6 = FUN_fffffffff000b9dc(param_1);
    FUN_fffffffff000abbc(1,lVar9,lVar10,**(uint **)(param_1 + 8) >> 4 & 1,1,1);
    puVar4 = *(uint **)(param_1 + 8);
    *puVar4 = *puVar4 & 0xfffffff7 | ((uint)lVar6 & 1) << 3;
    lVar5 = g_3ab40;
    if ((lVar6 == 0) &&
       (lVar9 = g_3ab40 +
                lVar10 * 0x1b8 + (long)*(int *)(*(long *)(puVar4 + 0x1b) + 0x28) * 0x58,
       *(uint *)(lVar9 + 0x2c3c) = *(uint *)(lVar9 + 0x2c3c) | 1,
       (*(uint *)(lVar5 + 0x3d28) & 0x10) == 0)) {
      FUN_fffffffff0019608();
      return 1;
    }
  }
  return 1;
}


/* ---- FUN_fffffffff000d748 @ fffffffff000d748 size=156 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_fffffffff000d748(undefined8 param_1)

{
  undefined4 uStack_38;
  undefined2 uStack_34;
  undefined2 uStack_32;
  
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_32 = 0;
  FUN_fffffffff001d1f8((long)(*(int *)(g_3ab40 + 0x31dc) + 0x1e7e),&uStack_38,param_1)
  ;
  FUN_fffffffff001d1f8((long)(*(int *)(g_3ab40 + 0x31dc) + 0x1e7f),&uStack_34,param_1)
  ;
  return (ulong)CONCAT24(uStack_34,uStack_38);
}


/* ---- FUN_fffffffff000d7e4 @ fffffffff000d7e4 size=156 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_fffffffff000d7e4(undefined8 param_1)

{
  undefined4 uStack_38;
  undefined2 uStack_34;
  undefined2 uStack_32;
  
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_32 = 0;
  FUN_fffffffff001d1f8((long)(*(int *)(g_3ab40 + 0x31dc) + 0x1fa9),&uStack_38,param_1)
  ;
  FUN_fffffffff001d1f8((long)(*(int *)(g_3ab40 + 0x31dc) + 0x1faa),&uStack_34,param_1)
  ;
  return (ulong)CONCAT24(uStack_34,uStack_38);
}


/* ---- FUN_fffffffff000d880 @ fffffffff000d880 size=664 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff000d880(undefined8 param_1,uint param_2,uint param_3,ulong param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined1 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [16];
  undefined8 uStack_e8;
  
  uVar7 = param_2 & 0xf;
  uVar1 = *(uint *)(g_3ab40 + 0x3d28);
  lStack_160 = (param_4 & 7 | (long)(int)(uVar7 << 3) | (long)(int)((param_3 & 0xff) << 7)) << 0x20;
  uStack_148._0_4_ = 0;
  uStack_148._4_4_ = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  puStack_158 = (undefined1 *)0x0;
  uStack_150 = 0;
  FUN_fffffffff001ec50(auStack_f8,0,0xa4);
  uVar1 = uVar1 >> 0xe & 1;
  if (param_4 == 1) {
    uStack_148._0_4_ = (uint)uStack_148 | 8;
    if (uVar1 == 0) {
      uVar5 = 0x10;
      if ((param_2 & 0xc) != 0) {
        uVar7 = uVar7 - 4;
        uVar5 = 0x20;
      }
      uStack_e8 = FUN_fffffffff000d7e4((long)(int)((param_3 & 0xff) << 8 | uVar5 | uVar7 << 6));
      puStack_158 = auStack_f8;
    }
  }
  else if ((param_4 == 0) && (uVar1 == 0)) {
    uStack_e8 = FUN_fffffffff000d748((param_3 & 0xff) << 8 | (param_2 & 0xf) << 6);
    puStack_158 = auStack_f8;
  }
  uVar7 = (uint)(param_4 & 7);
  FUN_fffffffff000abbc(1,param_1,uVar7,0,0,0);
  uStack_138 = CONCAT44(uStack_138._4_4_,(int)param_1);
  uStack_148 = CONCAT44(uStack_148._4_4_,(uint)uStack_148 & 0xfffffff8 | uVar7);
  local_1b0 = uStack_148;
  uStack_1a8 = uStack_140;
  uStack_1a0 = uStack_138;
  uStack_198 = uStack_130;
  uStack_190 = uStack_128;
  uStack_188 = uStack_120;
  uStack_180 = uStack_118;
  uStack_178 = uStack_110;
  uStack_170 = uStack_108;
  uStack_168 = uStack_100;
  FUN_fffffffff000bf84(0xa3,&local_1b0);
  lVar3 = FUN_fffffffff001c0e0(0xf8);
  do {
    lVar4 = FUN_fffffffff001c0e0(0xf8);
    if (199999999 < (ulong)(lVar4 - lVar3)) {
      uVar6 = 0;
      uVar2 = 0;
LAB_fffffffff000da30:
      FUN_fffffffff000abbc(1,param_1,uVar7,0,1,uVar6);
      return uVar2;
    }
    lVar4 = FUN_fffffffff000b5e8(&lStack_160,uVar1);
    if (lVar4 == 0) {
      uVar6 = 1;
      uVar2 = 1;
      goto LAB_fffffffff000da30;
    }
    FUN_fffffffff000aba4(50000);
  } while( true );
}


/* ---- FUN_fffffffff000db18 @ fffffffff000db18 size=420 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff000db18(ulong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_190;
  undefined8 uStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  
  FUN_fffffffff001ec50(auStack_d8,0,0xa4);
  uStack_140 = 0x900000000;
  puStack_138 = (undefined1 *)0x0;
  uStack_130 = 0;
  uStack_c8 = FUN_fffffffff000d7e4(0x70);
  puStack_138 = auStack_d8;
  FUN_fffffffff000abbc(1,param_1,1,0,0,0);
  uStack_128 = 0x11;
  uStack_118 = param_1 & 0xffffffff;
  local_190 = 0x11;
  uStack_180 = uStack_118;
  uStack_120 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_188 = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  FUN_fffffffff000bf84(0xa3,&local_190);
  uVar1 = *(uint *)(g_3ab40 + 0x3d28);
  lVar3 = FUN_fffffffff001c0e0(0xf8);
  do {
    lVar4 = FUN_fffffffff001c0e0(0xf8);
    if (199999999 < (ulong)(lVar4 - lVar3)) {
      uVar5 = 0;
      uVar2 = 0;
LAB_fffffffff000dc74:
      FUN_fffffffff000abbc(1,param_1,1,0,1,uVar5);
      return uVar2;
    }
    lVar4 = FUN_fffffffff000b5e8(&uStack_140,uVar1 >> 0xe & 1);
    if (lVar4 == 0) {
      uVar5 = 1;
      uVar2 = 1;
      goto LAB_fffffffff000dc74;
    }
    FUN_fffffffff000aba4(50000);
  } while( true );
}


/* ---- FUN_fffffffff000dcbc @ fffffffff000dcbc size=60 ---- */

void FUN_fffffffff000dcbc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 auStack_18 [2];
  
  if (param_3 == 0) {
    *param_1 = param_2;
    return;
  }
  auStack_18[0] = param_2;
  FUN_fffffffff001e144(8,auStack_18,param_1);
  return;
}


/* ---- FUN_fffffffff000dcf8 @ fffffffff000dcf8 size=76 ---- */

void FUN_fffffffff000dcf8(long param_1,undefined8 param_2)

{
  if ((((int)((ulong)param_1 >> 0x20) - 0x40000U & 0xfffbffff) != 0) && (param_1 >> 0x20 != 0x4000))
  {
    return;
  }
  FUN_fffffffff001e7e8(param_1,param_2);
  return;
}


/* ---- FUN_fffffffff000dd44 @ fffffffff000dd44 size=44 ---- */

void FUN_fffffffff000dd44(void)

{
  FUN_fffffffff001c0f4(0x470,1);
  FUN_fffffffff001c0e0(0x28);
  return;
}


/* ---- sub_0dd70 @ fffffffff000dd70 size=44 ---- */

void sub_0dd70(void)

{
  FUN_fffffffff001c0f4(0x470,0);
  FUN_fffffffff001c0e0(0x28);
  return;
}


/* ---- sub_0dd9c @ fffffffff000dd9c size=32 ---- */

void sub_0dd9c(void)

{
  FUN_fffffffff001c0e0(0x28);
  return;
}


/* ---- FUN_fffffffff000ddbc @ fffffffff000ddbc size=88 ---- */

void FUN_fffffffff000ddbc(void)

{
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0x101;
  local_b0 = 0x101;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  FUN_fffffffff000bf84(0xa3,&local_b0);
  return;
}


/* ---- FUN_fffffffff000de14 @ fffffffff000de14 size=24 ---- */

/* WARNING: Removing unreachable block (ram,0xfffffffff000de14) */
/* WARNING: Removing unreachable block (ram,0xfffffffff000de1c) */

void FUN_fffffffff000de14(long param_1)

{
  do {
  } while (param_1 != 0);
  return;
}


/* ---- FUN_fffffffff000de2c @ fffffffff000de2c size=1492 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff000de2c(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int iStack_54;
  long lStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x30);
  lVar14 = (long)iVar2;
  uVar10 = uVar1 & 0x80;
  if ((uVar1 & 0x40) == 0) {
    if ((uVar10 != 0) && (lVar12 = *(long *)(param_1 + 0x104), lVar12 != 0)) {
      *(int *)(lVar12 + 0x10c) = iVar2;
      *(undefined4 *)(lVar12 + 0xfc) = 0;
      *(undefined4 *)(lVar12 + 0x100) = 0;
    }
    iVar7 = 3;
LAB_fffffffff000df10:
    lVar12 = *(long *)(param_1 + 0x34);
    lVar15 = (long)*(int *)(param_1 + 0x28);
    if ((uVar1 & 0x100) == 0) goto LAB_fffffffff000ded8;
LAB_fffffffff000df2c:
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffeff;
    *(uint *)(*(long *)(lVar12 + 0x10) + 0x90) =
         *(uint *)(*(long *)(lVar12 + 0x10) + 0x90) & 0xffffff7f;
    *(int *)(g_3ab40 + 0x3db0) = *(int *)(g_3ab40 + 0x3db0) + -1;
    lVar9 = *(long *)(lVar12 + 0x20);
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0x100);
    uVar5 = *(undefined4 *)(param_1 + 0xfc);
    lVar12 = *(long *)(param_1 + 0xfc);
    if (lVar12 == 0) {
      iVar7 = *(int *)(param_1 + 0x10c);
      if (uVar10 != 0) goto LAB_fffffffff000de80;
      goto LAB_fffffffff000df10;
    }
    iVar7 = *(int *)(lVar12 + 0x30);
    if (uVar10 != 0) {
LAB_fffffffff000de80:
      lVar12 = *(long *)(param_1 + 0x104);
      if (lVar12 != 0) {
        *(int *)(lVar12 + 0x10c) = iVar2;
        *(undefined4 *)(lVar12 + 0xfc) = 0;
        *(undefined4 *)(lVar12 + 0x100) = 0;
        uVar5 = *(undefined4 *)(param_1 + 0xfc);
        uVar4 = *(undefined4 *)(param_1 + 0x100);
      }
      lVar12 = CONCAT44(uVar4,uVar5);
      if (lVar12 == 0) goto LAB_fffffffff000df10;
    }
    *(undefined4 *)(lVar12 + 0x104) = 0;
    *(undefined4 *)(lVar12 + 0x108) = 0;
    lVar12 = *(long *)(param_1 + 0x34);
    lVar15 = (long)*(int *)(param_1 + 0x28);
    if ((uVar1 & 0x100) != 0) goto LAB_fffffffff000df2c;
LAB_fffffffff000ded8:
    if (lVar12 == 0) {
      return 0;
    }
    lVar9 = *(long *)(lVar12 + 0x20);
  }
  if (param_1 == lVar9) {
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(lVar12 + 0x20) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(lVar12 + 0x24) = uVar4;
  }
  lStack_50 = *(long *)(lVar12 + 0x18);
  lVar12 = FUN_fffffffff0016d78(param_1,&lStack_50);
  if (lVar12 == 0) {
    if ((*(uint *)(g_3ab40 + 0x3d28) & 0x10) != 0) {
      return 0;
    }
    FUN_fffffffff001cd2c();
    iStack_54 = 0;
    uStack_48 = uStack_48 & 0xffffffff00000000;
    FUN_fffffffff0007bb8(lVar14,&iStack_54,&uStack_48);
    bVar6 = false;
    if (iStack_54 == 0) {
      FUN_fffffffff001cdd0();
      return 0;
    }
  }
  else {
    lVar12 = *(long *)(param_1 + 0x34);
    *(int *)(lVar12 + 0x18) = (int)lStack_50;
    *(int *)(lVar12 + 0x1c) = (int)((ulong)lStack_50 >> 0x20);
    FUN_fffffffff0007ce8(param_1,1);
    lVar9 = g_3ab40;
    lVar12 = g_3ab40 + lVar14 * 0x1b8 + lVar15 * 0x58;
    *(int *)(lVar12 + 0x2c20) = *(int *)(lVar12 + 0x2c20) + -1;
    lVar12 = *(long *)(*(long *)(param_1 + 0x34) + 0x10);
    lVar11 = lVar12 + lVar14 * 0x17c + lVar15 * 0x4c;
    iVar3 = *(int *)(lVar12 + 0x74) + -1;
    *(int *)(lVar11 + 0x10c) = *(int *)(lVar11 + 0x10c) + -1;
    *(int *)(lVar12 + 0x74) = iVar3;
    if (lVar14 == 1) {
      *(int *)(lVar12 + 0x78) = *(int *)(lVar12 + 0x78) + -1;
    }
    if (iVar3 == 0) {
      lVar11 = 0;
      if ((*(uint *)(lVar12 + 0x90) & 0x100) != 0) {
        do {
          lVar13 = lVar9 + ((ulong)(lVar11 << 0x20) >> 0x1d);
          lVar11 = (long)((int)lVar11 + 1);
          if (lVar12 == *(long *)(lVar13 + 0x2a0e0)) {
            *(undefined4 *)(lVar13 + 0x2a0e0) = 0;
            *(undefined4 *)(lVar13 + 0x2a0e4) = 0;
            *(uint *)(lVar12 + 0x90) = *(uint *)(lVar12 + 0x90) & 0xfffffeff;
          }
        } while (lVar11 != 8);
      }
      uStack_48 = *(ulong *)(lVar9 + 0x3240);
      FUN_fffffffff0016d78(&uStack_48);
      lVar9 = g_3ab40;
      *(undefined4 *)(g_3ab40 + 0x3240) = (undefined4)uStack_48;
      *(undefined4 *)(lVar9 + 0x3244) = uStack_48._4_4_;
    }
    uVar1 = *(uint *)(lVar9 + 0x3d28);
    if ((*(uint *)(param_1 + 0x10) & 0x40) != 0) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffffffbf;
      if (lVar14 == 0) {
        *(int *)(lVar9 + 0x3da4) = *(int *)(lVar9 + 0x3da4) + -1;
      }
      else if (lVar14 == 1) {
        if (iVar7 == 1) {
          *(int *)(lVar9 + 0x3da8) = *(int *)(lVar9 + 0x3da8) + -1;
        }
        else if (iVar7 == 2) {
          *(int *)(lVar9 + 0x3dac) = *(int *)(lVar9 + 0x3dac) + -1;
        }
      }
    }
    if ((uVar1 & 0x10) != 0) goto LAB_fffffffff000e16c;
    FUN_fffffffff001cd2c();
    iStack_54 = 0;
    uStack_48 = uStack_48 & 0xffffffff00000000;
    FUN_fffffffff0007bb8(lVar14,&iStack_54,&uStack_48);
    bVar6 = true;
    if (iStack_54 == 0) {
      FUN_fffffffff001cdd0();
      goto LAB_fffffffff000e16c;
    }
  }
  uVar8 = 0;
  do {
    while( true ) {
      lVar12 = FUN_fffffffff0009a2c(lVar14,uVar8);
      uVar8 = (ulong)((int)uVar8 + 1);
      if ((lVar12 == 0) || (param_1 != *(long *)(lVar12 + 8))) break;
      *(uint *)(lVar12 + 0x10) = *(uint *)(lVar12 + 0x10) | 1;
      if ((ulong)(long)iStack_54 <= uVar8) goto LAB_fffffffff000e314;
    }
  } while (uVar8 < (ulong)(long)iStack_54);
LAB_fffffffff000e314:
  FUN_fffffffff001cdd0();
  if (!bVar6) {
    return 0;
  }
LAB_fffffffff000e16c:
  lVar9 = g_3ab40;
  lVar12 = 1;
  if (lStack_50 == 0) {
    lVar11 = g_3ab40 + lVar14 * 0x1b8 + lVar15 * 0x58;
    lVar12 = *(long *)(param_1 + 0x34);
    if (lVar12 == *(long *)(lVar11 + 0x2c34)) {
      uVar4 = *(undefined4 *)(lVar12 + 0xc);
      *(undefined4 *)(lVar11 + 0x2c34) = *(undefined4 *)(lVar12 + 8);
      *(undefined4 *)(lVar11 + 0x2c38) = uVar4;
    }
    lVar14 = (((lVar14 * 8 - (long)iVar2) * 8 - (long)iVar2) + lVar15 * 8 + (long)(int)lVar15 * 3) *
             8;
    uStack_48 = *(undefined8 *)(lVar9 + lVar14 + 0x2be8);
    lVar12 = FUN_fffffffff0016d78(&uStack_48);
    if (lVar12 != 0) {
      lVar12 = *(long *)(param_1 + 0x34);
      lVar14 = g_3ab40 + lVar14;
      iVar2 = *(int *)(lVar14 + 0x2c1c);
      *(undefined4 *)(lVar12 + 0x10) = 0;
      *(undefined4 *)(lVar12 + 0x14) = 0;
      *(undefined4 *)(lVar14 + 0x2be8) = (undefined4)uStack_48;
      *(undefined4 *)(lVar14 + 0x2bec) = uStack_48._4_4_;
      *(int *)(lVar14 + 0x2c1c) = iVar2 + -1;
      lVar12 = 1;
    }
  }
  return lVar12;
}


/* ---- FUN_fffffffff000e400 @ fffffffff000e400 size=472 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff000e400(uint param_1,long param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  uVar5 = (ulong)*(int *)(g_3ab40 + 0x3d28);
  if ((uVar5 >> 0x13 & 1) != 0) {
    FUN_fffffffff001cdf4
              (0x16380,(long)(int)(((uint)param_2 & 0xf) << 4 | (uint)param_3 & 0xf |
                                   (param_1 & 0xff) << 8 | 0xc5a20000));
    uVar5 = (ulong)*(int *)(g_3ab40 + 0x3d28);
  }
  lVar8 = g_3ab40;
  if (((uVar5 >> 0xd & 1) != 0) && (lVar6 = *(long *)(g_3ab40 + 0x3d98), lVar6 != 0))
  {
    uVar1 = *(uint *)(lVar6 + 0x1e08);
    uVar5 = (ulong)(int)uVar1;
    if (param_2 != 0) {
      lVar7 = lVar6 + (ulong)uVar1 * 0x1c;
      uVar4 = 0;
      *(uint *)(lVar7 + 0x1398) = *(uint *)(lVar7 + 0x1398) & 0xfffffffe | (uint)param_3 & 1;
      if (param_3 == 0) {
        uVar4 = *(undefined4 *)(lVar8 + 0x3120);
      }
      lVar8 = lVar6 + (ulong)uVar1 * 0x1c;
      *(undefined4 *)(lVar8 + 0x1394) = uVar4;
      uVar3 = FUN_fffffffff000bd84();
      iVar2 = *(int *)(lVar6 + 0x1e08);
      *(int *)(lVar8 + 0x138c) = (int)uVar3;
      *(int *)(lVar8 + 0x1390) = (int)((ulong)uVar3 >> 0x20);
      *(int *)(lVar6 + 0x1e08) = iVar2 + 1;
      return;
    }
    if (0x5f < uVar5) {
      *(undefined4 *)(lVar6 + 0x1e08) = 0;
      uVar5 = 0;
    }
    lVar6 = lVar6 + (uVar5 & 0xffffffff) * 0x1c;
    *(uint *)(lVar6 + 0x1380) = param_1;
    uVar3 = FUN_fffffffff000bd84();
    *(int *)(lVar6 + 0x1384) = (int)uVar3;
    *(int *)(lVar6 + 5000) = (int)((ulong)uVar3 >> 0x20);
  }
  return;
}


/* ---- sub_0e5d8 @ fffffffff000e5d8 size=56 ---- */

long sub_0e5d8(long param_1,long param_2)

{
  if (param_1 == 1) {
    return param_2 + 0x2d8;
  }
  if (param_1 == 0) {
    return param_2 + 0x254;
  }
  if (param_1 != 2) {
    return 0;
  }
  return param_2 + 0x14;
}


/* ---- sub_0e610 @ fffffffff000e610 size=52 ---- */

long sub_0e610(ulong param_1,long param_2)

{
  if (param_1 < 2) {
    return param_2 + 0x800;
  }
  if (param_1 != 2) {
    return 0;
  }
  return param_2 + 0x200;
}


/* ---- FUN_fffffffff000e644 @ fffffffff000e644 size=132 ---- */

undefined8 FUN_fffffffff000e644(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = 0;
  uStack_14 = 0;
  if (param_1 < 2) {
    lVar2 = param_2 + 0x234;
    lVar1 = param_2 + 0x238;
  }
  else {
    lVar1 = 0;
    lVar2 = 0;
    if (param_1 == 2) {
      lVar2 = param_2 + 0x6c;
      lVar1 = param_2 + 0x68;
    }
  }
  FUN_fffffffff001e05c(4,lVar2,&uStack_18);
  FUN_fffffffff001e05c(4,lVar1,&uStack_14);
  return CONCAT44(uStack_14,uStack_18);
}


/* ---- FUN_fffffffff000e6c8 @ fffffffff000e6c8 size=52 ---- */

long FUN_fffffffff000e6c8(ulong param_1,long param_2)

{
  if (param_1 < 2) {
    return param_2 + 0x804;
  }
  if (param_1 != 2) {
    return 0;
  }
  return param_2 + 0x204;
}


/* ---- sub_0e6fc @ fffffffff000e6fc size=24 ---- */

long sub_0e6fc(ulong param_1,long param_2)

{
  if (1 < param_1) {
    return 0;
  }
  return param_2 + 0x20c;
}


/* ---- FUN_fffffffff000e714 @ fffffffff000e714 size=52 ---- */

long FUN_fffffffff000e714(ulong param_1,long param_2)

{
  if (param_1 < 2) {
    return param_2 + 0x80c;
  }
  if (param_1 != 2) {
    return 0;
  }
  return param_2 + 0x20c;
}


/* ---- sub_0e748 @ fffffffff000e748 size=56 ---- */

long sub_0e748(long param_1,long param_2)

{
  if (param_1 == 1) {
    return param_2 + 0x228;
  }
  if (param_1 == 0) {
    return param_2 + 0x240;
  }
  if (param_1 != 2) {
    return 0;
  }
  return param_2 + 0xc;
}


/* ---- sub_0e780 @ fffffffff000e780 size=24 ---- */

long sub_0e780(long param_1,long param_2)

{
  if (param_1 != 1) {
    return 0;
  }
  return param_2 + 0x254;
}


/* ---- sub_0e798 @ fffffffff000e798 size=24 ---- */

long sub_0e798(long param_1,long param_2)

{
  if (param_1 != 1) {
    return 0;
  }
  return param_2 + 0x210;
}


/* ---- FUN_fffffffff000e7b0 @ fffffffff000e7b0 size=320 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_fffffffff000e7b0(void)

{
  uint uVar1;
  long lVar2;
  undefined1 uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  
  FUN_fffffffff001cd2c();
  lVar2 = g_3ab40;
  if (*(char *)(g_3ab40 + 1) == '\0') {
    FUN_fffffffff001cdd0();
    uVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(g_3ab40 + 0x319c);
    *(undefined1 *)(g_3ab40 + 1) = 0;
    *(undefined4 *)(lVar2 + 0x319c) = 0;
    FUN_fffffffff001cdd0();
    lVar2 = g_3ab40;
    if (uVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar4 = 0;
      uVar3 = 0;
      do {
        uVar6 = uVar1 & 1;
        uVar1 = uVar1 >> 1;
        if (uVar6 != 0) {
          lVar5 = lVar2 + (uVar4 & 0xffffffff) * 0x58;
          if (*(long *)(lVar5 + 0x2be8) != 0) {
            uVar3 = 1;
            *(uint *)(lVar5 + 0x2c3c) = *(uint *)(lVar5 + 0x2c3c) | 1;
          }
          if (*(long *)(lVar5 + 0x2da0) != 0) {
            uVar3 = 1;
            *(uint *)(lVar5 + 0x2df4) = *(uint *)(lVar5 + 0x2df4) | 1;
          }
          if (*(long *)(lVar5 + 0x2f58) != 0) {
            uVar3 = 1;
            *(uint *)(lVar5 + 0x2fac) = *(uint *)(lVar5 + 0x2fac) | 1;
          }
        }
        uVar4 = (ulong)((int)uVar4 + 1);
      } while ((uVar1 != 0) && (uVar4 != 5));
    }
  }
  return uVar3;
}


/* ---- sub_0e8f0 @ fffffffff000e8f0 size=244 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool sub_0e8f0(ulong param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = g_3ab40;
  if (param_1 < 5) {
    param_1 = param_1 & 0xffffffff;
    lVar4 = g_3ab40 + param_1 * 0x58;
    bVar1 = *(long *)(lVar4 + 0x2be8) != 0;
    if (bVar1) {
      *(uint *)(lVar4 + 0x2c3c) = *(uint *)(lVar4 + 0x2c3c) | 1;
    }
    lVar4 = lVar3 + param_1 * 0x58;
    bVar2 = *(long *)(lVar4 + 0x2da0) != 0;
    if (bVar2) {
      *(uint *)(lVar4 + 0x2df4) = *(uint *)(lVar4 + 0x2df4) | 1;
    }
    bVar2 = bVar2 || bVar1;
    lVar3 = lVar3 + param_1 * 0x58;
    if (*(long *)(lVar3 + 0x2f58) != 0) {
      *(uint *)(lVar3 + 0x2fac) = *(uint *)(lVar3 + 0x2fac) | 1;
      return true;
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


/* ---- sub_0e9e4 @ fffffffff000e9e4 size=92 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_0e9e4(void)

{
  long lVar1;
  
  for (lVar1 = *(long *)(g_3ab40 + 0x3240); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8))
  {
    FUN_fffffffff0017bc8(lVar1);
  }
  return;
}


/* ---- sub_0ea40 @ fffffffff000ea40 size=24 ---- */

undefined8 sub_0ea40(long param_1)

{
  undefined8 uVar1;
  
  if ((*(uint *)(param_1 + 0x54) & 2) == 0) {
    uVar1 = FUN_fffffffff000de2c();
    return uVar1;
  }
  return 0;
}


/* ---- FUN_fffffffff000ea58 @ fffffffff000ea58 size=580 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff000ea58(long param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x28);
  if ((((ulong)(long)*(int *)(g_3ab40 + 0x3d28) >> 0x11 & 1) != 0) &&
     (*(int *)(param_1 + 0xf0) != -1)) {
    FUN_fffffffff001c09c(*(long *)(g_3ab40 + 0x2a0c8) + 8);
  }
  FUN_fffffffff00083cc(param_1 + 0x54,param_2,param_3);
  lVar5 = g_3ab40;
  if ((((*(uint *)(*(long *)(*(long *)(param_1 + 0x34) + 0x10) + 0x90) & 0x20) != 0) &&
      ((long)iVar1 == 1)) && (*(int *)(g_3ab40 + 0x3d3c) != 0)) {
    *(int *)(g_3ab40 + 0x3d3c) = *(int *)(g_3ab40 + 0x3d3c) + -1;
  }
  if ((((ulong)(long)*(int *)(param_1 + 0x10) >> 0xb & 1) != 0) && (*(int *)(lVar5 + 0x3db4) != 0))
  {
    *(int *)(lVar5 + 0x3db4) = *(int *)(lVar5 + 0x3db4) + -1;
  }
  lVar6 = lVar5 + (long)iVar1 * 0x1b8 + (long)iVar2 * 0x58;
  uVar3 = *(uint *)(param_1 + 0x54);
  *(int *)(lVar6 + 0x2c24) = *(int *)(lVar6 + 0x2c24) + -1;
  if (((uVar3 & 2) == 0) &&
     (lVar6 = FUN_fffffffff000de2c(param_1), lVar5 = g_3ab40, lVar6 != 0)) {
    iVar1 = *(int *)(g_3ab40 + 0x3d28);
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
    *param_4 = *param_4 | 3;
    iVar1 = *(int *)(lVar5 + 0x3d28);
  }
  if ((((((ulong)(long)iVar1 >> 0x15 & 1) != 0) && ((*(uint *)(param_1 + 0x10) & 0x400) == 0)) &&
      (*(int *)(param_1 + 0x30) == 0)) &&
     (((*(uint *)(param_1 + 0x54) & 0x10) != 0 &&
      (iVar1 = *(int *)(lVar5 + 0x2a0c4) + -1, *(int *)(lVar5 + 0x2a0c4) = iVar1, iVar1 == 0)))) {
    *(uint *)(lVar5 + 0x275c) = *(uint *)(lVar5 + 0x275c) | 1;
    *(int *)(lVar5 + 0x2afc) = *(int *)(lVar5 + 0x2afc) + 1;
  }
  return uVar4;
}


/* ---- FUN_fffffffff000ec9c @ fffffffff000ec9c size=348 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff000ec9c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  lVar3 = g_3ab40;
  lVar7 = g_3ab40 + (ulong)*(uint *)(g_3ab40 + 0x31a8) * 0x100 + 8;
  uVar8 = 0;
  *(undefined4 *)(g_3ab40 + 0x31a0) = *(undefined4 *)(lVar7 + 0x7c);
  do {
    uVar4 = 0;
    do {
      lVar5 = lVar7 + (uVar4 & 0xffffffff) * 8;
      uVar1 = *(undefined8 *)(lVar5 + 0x54);
      uVar2 = *(undefined8 *)(lVar5 + 4);
      lVar6 = lVar3 + (uVar4 & 0xffffffff) * 0x58 + (uVar8 & 0xffffffff) * 0x1b8;
      *(long *)(lVar6 + 0x2bf0) = *(long *)(lVar5 + 0x2c) * 10;
      *(int *)(lVar6 + 0x2c08) = (int)uVar2;
      *(int *)(lVar6 + 0x2c0c) = (int)((ulong)uVar2 >> 0x20);
      *(int *)(lVar6 + 0x2c10) = (int)uVar1;
      *(int *)(lVar6 + 0x2c14) = (int)((ulong)uVar1 >> 0x20);
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (uVar4 != 5);
    uVar8 = (ulong)((int)uVar8 + 1);
  } while (uVar8 != 3);
  FUN_fffffffff000dcbc(*(undefined8 *)(lVar7 + 0x80),*(undefined8 *)(lVar7 + 0x88),0);
  return 1;
}


/* ---- FUN_fffffffff000edf8 @ fffffffff000edf8 size=312 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff000edf8(long param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  if ((*(uint *)(g_3ab40 + 0x3d28) & 0x400) == 0) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  }
  else {
    FUN_fffffffff000b468(param_1 + 0x54,1);
  }
  if ((*(uint *)(param_1 + 0x54) & 1) != 0) {
    *param_2 = *(int *)(param_1 + 0x60);
  }
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 & 0x80) == 0) {
    iVar1 = *param_2;
joined_r0xfffffffff000eefc:
    lVar3 = 1;
    if (iVar1 == 0) goto LAB_fffffffff000ee6c;
LAB_fffffffff000ef04:
    lVar3 = FUN_fffffffff0008424(param_1,&uStack_28,0);
  }
  else {
    if (*(long *)(param_1 + 0x104) == 0) {
      iVar1 = *param_2;
      goto joined_r0xfffffffff000eefc;
    }
    lVar3 = FUN_fffffffff0008424(&uStack_28,0);
    if (*param_2 != 0) goto LAB_fffffffff000ef04;
  }
  if (lVar3 == 0) {
    return 0;
  }
  uVar4 = *(uint *)(param_1 + 0x10);
LAB_fffffffff000ee6c:
  if ((uVar4 & 0x40) == 0) {
    return lVar3;
  }
  if (*(long *)(param_1 + 0xfc) != 0) {
    lVar2 = FUN_fffffffff0008424(&uStack_28,0);
    if (lVar2 == 0) {
      return 0;
    }
    return lVar3;
  }
  return lVar3;
}


/* ---- FUN_fffffffff000ef30 @ fffffffff000ef30 size=448 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff000ef30(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  undefined4 uStack_44;
  ulong uStack_40;
  uint uStack_38;
  undefined4 uStack_34;
  
  lVar3 = g_3ab40 + (ulong)*(uint *)(g_3ab40 + 0x31a8) * 0x100 + 8;
  uStack_44 = 0;
  lVar1 = *(long *)(g_3ab40 +
                    (long)*(int *)(lVar3 + 0x3c) * 0x1b8 + (long)*(int *)(lVar3 + 0x40) * 0x58 +
                   0x2be8);
  lVar5 = 1;
  do {
    if (lVar1 == 0) {
      FUN_fffffffff001cd2c();
      if (*(long *)(lVar3 + 0x10) != 0) {
        FUN_fffffffff000dcbc(*(undefined4 *)(lVar3 + 0x18),1);
        FUN_fffffffff000dcbc(*(undefined8 *)(lVar3 + 0x1c),*(undefined8 *)(lVar3 + 0x24),0);
      }
      uStack_38 = (uint)((ulong)((long)*(int *)(lVar3 + 0x2c) << 0x26) >> 0x26);
      FUN_fffffffff000dcf8(uStack_40 & 0xfffc0000 | 0x4000000000000,CONCAT44(uStack_34,uStack_38));
      FUN_fffffffff001cdd0();
      uVar4 = 0x60000;
LAB_fffffffff000f018:
      *(undefined4 *)(g_3ab40 + 0x3120) = uVar4;
      return lVar5;
    }
    for (lVar2 = *(long *)(lVar1 + 0x18); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      uStack_44 = 0;
      if ((*(int *)(lVar2 + 0xf8) == *(int *)(lVar3 + 0x2c)) &&
         (lVar5 = FUN_fffffffff000edf8(lVar2,&uStack_44), lVar5 == 0)) {
        uVar4 = 0x60002;
        goto LAB_fffffffff000f018;
      }
    }
    lVar1 = *(long *)(lVar1 + 8);
  } while( true );
}


/* ---- FUN_fffffffff000f0f0 @ fffffffff000f0f0 size=396 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff000f0f0(long param_1)

{
  int iVar1;
  byte *pbVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  
  pbVar2 = *(byte **)(param_1 + 4);
  lVar3 = *(long *)(param_1 + 0x6c);
  puVar4 = *(uint **)(pbVar2 + 8);
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x28);
    *puVar4 = *puVar4 & 0xfffffff7;
    if ((long)iVar1 < 5) {
      lVar5 = g_3ab40 + (long)iVar1 * 0x58;
      *(uint *)(lVar5 + 0x2df4) = *(uint *)(lVar5 + 0x2df4) | 1;
    }
    FUN_fffffffff001cd2c();
    pbVar2[8] = 0;
    pbVar2[9] = 0;
    pbVar2[10] = 0;
    pbVar2[0xb] = 0;
    pbVar2[0xc] = 0;
    pbVar2[0xd] = 0;
    pbVar2[0xe] = 0;
    pbVar2[0xf] = 0;
    *pbVar2 = *pbVar2 & 0x85;
    FUN_fffffffff001cdd0();
    FUN_fffffffff00085f4
              (*(undefined8 *)(pbVar2 + 0x10),0,(long)iVar1,*(uint *)(pbVar2 + 4) >> 7 & 0xff);
    FUN_fffffffff00083cc(param_1,0,0);
    FUN_fffffffff0007ce8(lVar3,1);
    return;
  }
  *puVar4 = *puVar4 & 0xfffffff7;
  FUN_fffffffff001cd2c();
  pbVar2[8] = 0;
  pbVar2[9] = 0;
  pbVar2[10] = 0;
  pbVar2[0xb] = 0;
  pbVar2[0xc] = 0;
  pbVar2[0xd] = 0;
  pbVar2[0xe] = 0;
  pbVar2[0xf] = 0;
  *pbVar2 = *pbVar2 & 0x85;
  FUN_fffffffff001cdd0();
  FUN_fffffffff00085f4(*(undefined8 *)(pbVar2 + 0x10),0,5,*(uint *)(pbVar2 + 4) >> 7 & 0xff);
  FUN_fffffffff00083cc(param_1,0,0);
  return;
}


/* ---- FUN_fffffffff000f27c @ fffffffff000f27c size=1200 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff000f27c(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  long lStack_a0;
  undefined4 uStack_8c;
  int iStack_88;
  int iStack_84;
  uint *puStack_80;
  ulong auStack_78 [2];
  
  uStack_8c = 1;
  puStack_80 = (uint *)0x0;
  iStack_88 = 0;
  iStack_84 = 0;
  if (param_1 == 0) {
    FUN_fffffffff000abbc(4,0,1,0,0);
  }
  lVar6 = FUN_fffffffff0007bb8(1,&iStack_88,&iStack_84);
  lVar7 = *(long *)(lVar6 + 0x78);
  if (*(int *)(g_3ab40 + 0x3da4) == 0) {
    lVar4 = 1;
LAB_fffffffff000f32c:
    if ((((*(int *)(g_3ab40 + 0x3dac) == 0) || ((*(uint *)(lVar7 + 0x30) & 2) == 0))
        || (lVar7 = *(long *)(lVar7 + 0x38), lVar7 == 0)) ||
       (lVar7 = *(long *)(lVar7 + 0x6c), lVar7 == 0)) {
      FUN_fffffffff000ddbc();
      uVar9 = (ulong)iStack_88;
      if (uVar9 != 0) {
        lStack_a0 = 0;
        goto LAB_fffffffff000f358;
      }
    }
    else {
      lStack_a0 = *(long *)(lVar7 + 0xfc);
      FUN_fffffffff000ddbc();
      uVar9 = (ulong)iStack_88;
      if (uVar9 != 0) {
LAB_fffffffff000f358:
        bVar1 = true;
        uVar5 = 0;
        bVar3 = true;
LAB_fffffffff000f378:
        do {
          puVar11 = (uint *)(lVar6 + ((uVar5 << 0x20) >> 0x1b));
          if (((*puVar11 & 1) == 0) || (!bVar1)) break;
          uVar8 = (ulong)iStack_84;
          uVar12 = 0;
          if (uVar8 != 0) {
            do {
              while( true ) {
                puStack_80 = (uint *)(*(long *)(puVar11 + 6) + (uVar12 & 0xffffffff) * 0x18);
                if (((puStack_80 == (uint *)0x0) || ((*puStack_80 & 2) == 0)) ||
                   ((*puStack_80 & 0x201) == 0)) break;
                FUN_fffffffff001e144(4,&uStack_8c,*(undefined8 *)(*(long *)(puStack_80 + 2) + 0x34))
                ;
                auStack_78[0] = auStack_78[0] & 0xffffffff00000000;
                FUN_fffffffff001e05c(4,*(undefined8 *)(*(long *)(puStack_80 + 2) + 0x34),auStack_78)
                ;
                if ((bVar3) &&
                   (lVar7 = FUN_fffffffff000c550(*(undefined8 *)(puStack_80 + 2),0), lVar7 == 0)) {
                  uVar9 = (ulong)iStack_88;
                  uVar5 = (ulong)((int)uVar5 + 1);
                  bVar1 = false;
                  lVar4 = 0;
                  bVar3 = false;
                  if (uVar9 <= uVar5) goto LAB_fffffffff000f4d8;
                  goto LAB_fffffffff000f378;
                }
                lVar7 = FUN_fffffffff000b8e0
                                  (puStack_80,*(undefined4 *)(g_3ab40 + 0x3db8),
                                   *(undefined1 *)(g_3ab40 + 0x2a124),1);
                if (lVar7 == 0) {
                  **(uint **)(puStack_80 + 2) = **(uint **)(puStack_80 + 2) | 0x200;
                  lVar7 = FUN_fffffffff0016e18(g_3ab40 + 0x3248,4);
                  if (lVar7 == 0) {
                    lVar7 = 0;
                    do {
                      lVar10 = g_3ab40 + ((ulong)(lVar7 << 0x20) >> 0x1d);
                      lVar7 = (long)((int)lVar7 + 1);
                      lVar4 = 0;
                      if (*(long *)(lVar10 + 0x3248) == 0) {
                        uVar2 = *(undefined8 *)(puStack_80 + 2);
                        *(int *)(lVar10 + 0x3248) = (int)uVar2;
                        *(int *)(lVar10 + 0x324c) = (int)((ulong)uVar2 >> 0x20);
                        break;
                      }
                    } while (lVar7 != 4);
                  }
                  else {
                    lVar4 = 0;
                  }
                }
                else {
                  FUN_fffffffff000f0f0(*(undefined8 *)(puStack_80 + 2));
                }
                uVar8 = (ulong)iStack_84;
                uVar12 = (ulong)((int)uVar12 + 1);
                bVar3 = false;
                if (uVar8 <= uVar12) goto LAB_fffffffff000f4cc;
              }
              uVar12 = (ulong)((int)uVar12 + 1);
            } while (uVar12 < uVar8);
LAB_fffffffff000f4cc:
            uVar9 = (ulong)iStack_88;
          }
          uVar5 = (ulong)((int)uVar5 + 1);
        } while (uVar5 < uVar9);
LAB_fffffffff000f4d8:
        if (lVar4 == 0) goto joined_r0xfffffffff000f624;
      }
      if (lStack_a0 != 0) {
        auStack_78[0] = 0;
        lVar7 = FUN_fffffffff0008424(auStack_78,0);
        if (lVar7 == 0) goto joined_r0xfffffffff000f624;
      }
    }
    if (param_1 == 0) {
      FUN_fffffffff000abbc(4,0,1,0,1,(long)(int)lVar4);
    }
    *(undefined4 *)(g_3ab40 + 0x2a148) = 0;
  }
  else {
    lVar4 = 1;
    if (((**(uint **)(lVar6 + 0x38) & 2) == 0) ||
       (lVar4 = FUN_fffffffff0008424
                          (*(undefined8 *)
                            (*(long *)(*(long *)(*(uint **)(lVar6 + 0x38) + 2) + 0x6c) + 0x104),
                           &puStack_80,0), lVar4 != 0)) goto LAB_fffffffff000f32c;
joined_r0xfffffffff000f624:
    if (param_1 == 0) {
      FUN_fffffffff000abbc(4,0,1,0,1,0);
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
    }
  }
  return lVar4;
}


/* ---- FUN_fffffffff000f72c @ fffffffff000f72c size=508 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff000f72c(void)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = 0x3268;
  uVar3 = 0;
  lVar4 = 1;
  lVar9 = g_3ab40;
  do {
    lVar2 = lVar9 + (uVar3 & 0xffffffff) * 0xac;
    lVar10 = lVar9;
    if (((*(char *)(lVar2 + 0x3310) != '\0') && ((*(uint *)(lVar2 + 0x3268) >> 1 & 1) == 0)) &&
       (uVar1 = *(uint *)(lVar2 + 0x330c), (uVar1 & 7) == 1)) {
      uVar7 = (long)(int)(uVar1 >> 3) & 0xf;
      uVar5 = (long)(int)(uVar1 >> 7) & 0xff;
      lVar4 = FUN_fffffffff000d0c4
                        (uVar7,(long)*(int *)(lVar2 + 0x3274),*(undefined8 *)(lVar2 + 0x3278),
                         *(undefined8 *)(lVar2 + 0x3280),1);
      lVar10 = g_3ab40;
      if (lVar4 != 0) {
        lVar6 = g_3ab40 + uVar5 * 0x18 + uVar7 * 0xc0;
        *(long *)(lVar6 + 0x2124) = lVar9 + lVar8;
        *(uint *)(lVar6 + 0x211c) = *(uint *)(lVar6 + 0x211c) | 2;
        *(uint *)(lVar2 + 0x3268) = *(uint *)(lVar2 + 0x3268) | 2;
        *(ulong *)(lVar2 + 0x326c) = lVar10 + uVar5 * 0x18 + uVar7 * 0xc0 + 0x211c;
      }
    }
    uVar3 = (ulong)((int)uVar3 + 1);
    lVar8 = lVar8 + 0xac;
    lVar9 = lVar10;
  } while (uVar3 != 0x10);
  *(undefined4 *)(lVar10 + 0x2a120) = 0;
  return lVar4;
}


/* ---- FUN_fffffffff000f928 @ fffffffff000f928 size=616 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff000f928(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  int iStack_34;
  ulong uStack_30;
  uint uStack_28;
  undefined4 uStack_24;
  
  lVar1 = g_3ab40 + (ulong)*(uint *)(g_3ab40 + 0x31a8) * 0x100 + 8;
  iStack_34 = 0;
  if ((*(uint *)(lVar1 + 4) & 3) == 0) {
    lVar2 = *(long *)(lVar1 + 8);
    if ((((ulong)(long)*(int *)(g_3ab40 + 0x3d28) >> 0x10 & 1) != 0) &&
       (*(uint *)(lVar1 + 0x44) < 0x100)) {
      lVar2 = g_3ab40 + (ulong)*(uint *)(lVar1 + 0x44) * 0x110 + 0x190bc;
    }
    lVar3 = FUN_fffffffff000edf8(lVar2,&iStack_34);
    if (lVar3 != 0) {
      FUN_fffffffff000dcbc(*(undefined8 *)(lVar1 + 0x10),*(undefined4 *)(lVar1 + 0x18),1);
      FUN_fffffffff000dcbc(*(undefined8 *)(lVar1 + 0x1c),*(undefined8 *)(lVar1 + 0x24),1);
      uStack_28 = (uint)((ulong)((long)iStack_34 << 0x26) >> 0x26);
      if ((long)iStack_34 != 0) {
        FUN_fffffffff000dcf8(uStack_30 & 0xfffc0000 | 0x4000000000000,CONCAT44(uStack_24,uStack_28))
        ;
      }
      uVar4 = 0x60000;
      lVar2 = g_3ab40;
      goto LAB_fffffffff000f9e0;
    }
LAB_fffffffff000f9d4:
    uVar4 = 0x60002;
    lVar2 = g_3ab40;
  }
  else {
    lVar3 = FUN_fffffffff000f27c(0);
    lVar2 = g_3ab40;
    if ((*(uint *)(lVar1 + 4) & 2) == 0) {
      if ((*(uint *)(lVar1 + 4) & 1) == 0) {
        if (lVar3 == 0) goto LAB_fffffffff000f9d4;
      }
      else {
        *(uint *)(g_3ab40 + 0x3d28) = *(uint *)(g_3ab40 + 0x3d28) | 4;
        if (lVar3 == 0) {
          *(undefined4 *)(lVar2 + 0x2a120) = 2;
          uVar4 = 0x60002;
          goto LAB_fffffffff000f9e0;
        }
        *(undefined4 *)(lVar2 + 0x2a120) = 1;
      }
    }
    else {
      if (lVar3 == 0) {
        *(undefined4 *)(g_3ab40 + 0x2a120) = 3;
        uVar4 = 0x60002;
        *(uint *)(lVar2 + 0x3d28) = *(uint *)(lVar2 + 0x3d28) | 4;
        goto LAB_fffffffff000f9e0;
      }
      FUN_fffffffff000f72c();
      FUN_fffffffff000dcbc(*(undefined8 *)(lVar1 + 0x10),*(undefined4 *)(lVar1 + 0x18),1);
    }
    FUN_fffffffff000dcbc(*(undefined8 *)(lVar1 + 0x1c),*(undefined8 *)(lVar1 + 0x24),1);
    uVar4 = 0x60000;
    lVar2 = g_3ab40;
  }
LAB_fffffffff000f9e0:
  *(undefined4 *)(lVar2 + 0x3120) = uVar4;
  return lVar3;
}


/* ---- FUN_fffffffff000fb90 @ fffffffff000fb90 size=656 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff000fb90(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong local_30;
  undefined4 uStack_24;
  
  lVar5 = g_3ab40;
  lVar2 = g_3ab40 + (ulong)*(uint *)(g_3ab40 + 0x31a8) * 0x100 + 8;
  if ((*(uint *)(lVar2 + 4) & 1) == 0) {
    iVar1 = *(int *)(g_3ab40 + 0x3d28);
    lVar3 = *(long *)(lVar2 + 8);
    if ((((ulong)(long)iVar1 >> 0x10 & 1) == 0) || (0xff < *(uint *)(lVar2 + 0x2c))) {
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      lVar3 = g_3ab40 + (ulong)*(uint *)(lVar2 + 0x2c) * 0x110 + 0x190bc;
    }
    lVar4 = g_3ab40 +
            (long)*(int *)(lVar3 + 0x30) * 0x1b8 + (long)*(int *)(lVar3 + 0x28) * 0x58;
    *(uint *)(lVar4 + 0x2c3c) = *(uint *)(lVar4 + 0x2c3c) | 1;
    if (((long)iVar1 & 0x400U) != 0) {
      *(uint *)(lVar3 + 0x54) = *(uint *)(lVar3 + 0x54) & 0xfffffff7;
    }
    lVar4 = *(long *)(lVar3 + 0x104);
    *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) & 0xfffffffe;
    lVar3 = 1;
    if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x10) & 1) == 0)) {
      lVar5 = lVar5 + (long)*(int *)(lVar4 + 0x30) * 0x1b8 + (long)*(int *)(lVar4 + 0x28) * 0x58;
      *(uint *)(lVar5 + 0x2c3c) = *(uint *)(lVar5 + 0x2c3c) | 1;
    }
  }
  else if (*(int *)(g_3ab40 + 0x2a120) == 0) {
    lVar3 = 1;
    *(uint *)(g_3ab40 + 0x3d28) =
         *(uint *)(g_3ab40 + 0x3d28) & 0xfffffffb;
    FUN_fffffffff000dcf8(CONCAT44(uStack_24,0xc000000));
  }
  else {
    lVar3 = FUN_fffffffff000f72c();
    *(uint *)(g_3ab40 + 0x3d28) =
         *(uint *)(g_3ab40 + 0x3d28) & 0xfffffffb;
    FUN_fffffffff000dcf8(local_30 & 0xfffc0000 | 0x4000000000000,CONCAT44(uStack_24,0xc000000));
    if (lVar3 == 0) {
      return 0;
    }
  }
  FUN_fffffffff000dcbc(*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18),1);
  return lVar3;
}


/* ---- FUN_fffffffff000fe20 @ fffffffff000fe20 size=224 ---- */

void FUN_fffffffff000fe20(long param_1,uint *param_2,long param_3,long param_4)

{
  undefined4 auStack_38 [4];
  
  *(ulong *)(param_1 + (ulong)*param_2 * 8) = (ulong)*(uint *)(param_4 + 0xc);
  auStack_38[0] = 0;
  FUN_fffffffff001eb28(auStack_38,param_4 + 0xc,4);
  FUN_fffffffff001e144(0xc000004,auStack_38,(ulong)(*param_2 << 2) + param_3);
  FUN_fffffffff001eb28(auStack_38,*(long *)(param_4 + 4) + 4,4);
  FUN_fffffffff001e144(0xc000004,auStack_38,(ulong)((*param_2 + 4) * 4) + param_3);
  *param_2 = *param_2 + 1;
  return;
}


/* ---- FUN_fffffffff000ff00 @ fffffffff000ff00 size=388 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff000ff00(undefined8 param_1,uint *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = 0;
  do {
    if (3 < *param_2) {
      return;
    }
    lVar2 = *(long *)(g_3ab40 + (uVar3 & 0xffffffff) * 0x58 + param_4 * 0x1b8 + 0x2be8
                     );
    if (lVar2 != 0) {
      do {
        lVar1 = *(long *)(lVar2 + 0x18);
        if (lVar1 != 0) {
          while( true ) {
            if ((*(uint *)(lVar1 + 0x54) & 0x100) == 0) {
              lVar1 = *(long *)(lVar1 + 8);
            }
            else {
              *(uint *)(g_3ab40 + 0x3d28) =
                   *(uint *)(g_3ab40 + 0x3d28) | 4;
              FUN_fffffffff000fe20(param_1,param_2,param_3,lVar1 + 0x54);
              lVar1 = *(long *)(lVar1 + 8);
            }
            if (lVar1 == 0) break;
            if (3 < *param_2) goto LAB_fffffffff0010044;
          }
        }
        lVar2 = *(long *)(lVar2 + 8);
      } while ((lVar2 != 0) && (*param_2 < 4));
    }
LAB_fffffffff0010044:
    uVar3 = (ulong)((int)uVar3 + 1);
    if (uVar3 == 5) {
      return;
    }
  } while( true );
}


/* ---- FUN_fffffffff0010084 @ fffffffff0010084 size=712 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff0010084(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = *(undefined8 *)(param_3 + 0x14);
  uVar1 = *(uint *)(param_3 + 0x70);
  uVar2 = *(uint *)(param_3 + 4);
  uVar3 = *(uint *)(param_3 + 0x84);
  if (uVar1 != 0) {
    lVar9 = 0;
    uVar7 = 1;
    do {
      uVar8 = 0;
      do {
        while( true ) {
          lVar5 = (uVar8 & 0xffffffff) * 0x18 + lVar9 * 0xc0;
          lVar6 = g_3ab40 + lVar5;
          uVar2 = *(uint *)(lVar6 + 0x275c);
          uVar8 = (ulong)((int)uVar8 + 1);
          if ((((uVar2 & 1) != 0) && ((uVar1 >> ((long)(int)(uVar2 >> 3) & 0xfU) & 1) != 0)) &&
             (lVar6 = FUN_fffffffff0016e18
                                (param_1,4,*(undefined4 *)(*(long *)(lVar6 + 0x2764) + 0xc)),
             lVar6 == 0)) break;
          if (uVar8 == 8) goto LAB_fffffffff001015c;
        }
        FUN_fffffffff000fe20
                  (param_1,param_2,uVar4,*(undefined8 *)(g_3ab40 + lVar5 + 0x2764));
        uVar7 = 0;
      } while (uVar8 != 8);
LAB_fffffffff001015c:
      if (lVar9 == 1) {
        return uVar7;
      }
      lVar9 = 1;
    } while( true );
  }
  if ((uVar2 >> 4 & 1) != 0) {
    lVar5 = (ulong)*(uint *)(param_3 + 0x80) * 0x18;
    lVar9 = g_3ab40 + lVar5;
    uVar1 = *(uint *)(lVar9 + 0x275c);
    if ((((uVar1 & 1) != 0) && ((uVar1 >> 1 & 1) != 0)) &&
       (lVar9 = FUN_fffffffff0016e18(4,*(undefined4 *)(*(long *)(lVar9 + 0x2764) + 0xc)), lVar9 == 0
       )) {
      FUN_fffffffff000fe20
                (param_1,param_2,uVar4,*(undefined8 *)(g_3ab40 + lVar5 + 0x2764));
      uVar7 = 0;
      goto LAB_fffffffff00101dc;
    }
  }
  uVar7 = 1;
LAB_fffffffff00101dc:
  if ((uVar2 >> 5 & 1) != 0) {
    lVar9 = (ulong)uVar3 * 0x18;
    lVar5 = g_3ab40 + lVar9;
    uVar1 = *(uint *)(lVar5 + 0x281c);
    if ((((uVar1 & 1) != 0) && ((uVar1 >> 1 & 1) != 0)) &&
       (lVar5 = FUN_fffffffff0016e18(param_1,4,*(undefined4 *)(*(long *)(lVar5 + 0x2824) + 0xc)),
       lVar5 == 0)) {
      FUN_fffffffff000fe20
                (param_1,param_2,uVar4,*(undefined8 *)(g_3ab40 + lVar9 + 0x2824));
      uVar7 = 0;
    }
  }
  return uVar7;
}


/* ---- FUN_fffffffff001034c @ fffffffff001034c size=328 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff001034c
               (undefined8 param_1,uint *param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  uint *puVar4;
  int iVar5;
  undefined1 uStack_61;
  
  uStack_61 = 1;
  iVar5 = 5;
  do {
    FUN_fffffffff001a290(&uStack_61,param_4,1);
    lVar1 = FUN_fffffffff000bd84();
    while( true ) {
      lVar2 = FUN_fffffffff000bd84();
      uVar3 = FUN_fffffffff000bd24(200000);
      if (uVar3 <= (ulong)(lVar2 - lVar1)) break;
      FUN_fffffffff000de14(50000);
    }
    puVar4 = (uint *)FUN_fffffffff001a290(&uStack_61,param_4,0);
    if (puVar4 == (uint *)0x0) {
      return;
    }
    iVar5 = iVar5 + -1;
    if (iVar5 == 0) {
      *puVar4 = *puVar4 | 0x100;
      if (param_5 == 0) {
        *(uint *)(g_3ab40 + 0x3d28) = *(uint *)(g_3ab40 + 0x3d28) | 4;
      }
      FUN_fffffffff000fe20(param_1,param_2,param_3,puVar4);
      return;
    }
  } while (*param_2 < 4);
  return;
}


/* ---- FUN_fffffffff0010494 @ fffffffff0010494 size=280 ---- */

void FUN_fffffffff0010494(long *param_1,uint *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined4 local_70 [2];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  plVar2 = param_1;
  do {
    if (*plVar2 != 0xffffffff) {
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      local_70[0] = 0;
      lVar3 = FUN_fffffffff0009730(local_70,&uStack_68);
      if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x10) & 0xc0) != 0)) {
        if (*param_2 < 4) {
          if ((*(uint *)(lVar3 + 0x10) & 0x40) == 0) {
            lVar3 = *(long *)(lVar3 + 0x104);
            uVar1 = *(undefined4 *)(lVar3 + 0x60);
          }
          else {
            lVar3 = *(long *)(lVar3 + 0xfc);
            uVar1 = *(undefined4 *)(lVar3 + 0x60);
          }
          lVar4 = FUN_fffffffff0016e18(param_1,4,uVar1);
          if (lVar4 == 0) {
            FUN_fffffffff000fe20(param_1,param_2,param_3,lVar3 + 0x54);
          }
        }
      }
    }
    plVar2 = plVar2 + 1;
  } while (param_1 + 4 != plVar2);
  return;
}


/* ---- FUN_fffffffff00105ac @ fffffffff00105ac size=216 ---- */

void FUN_fffffffff00105ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_4 + 0x14);
  lVar3 = (long)*(int *)(param_4 + 0x1c);
  if (param_1 == 0) {
    FUN_fffffffff000ff00(param_2,param_3,uVar1,lVar3);
  }
  if ((lVar3 == 0) && (lVar2 = FUN_fffffffff0010084(param_2,param_3,param_4), lVar2 != 1)) {
    return;
  }
  FUN_fffffffff001034c(param_2,param_3,uVar1,lVar3,param_1);
  return;
}


/* ---- FUN_fffffffff0010684 @ fffffffff0010684 size=372 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0010684(long param_1,undefined8 param_2,uint *param_3,long param_4)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  uVar2 = *(undefined8 *)(param_4 + 0x14);
  uVar1 = *(uint *)(param_4 + 0x1c);
  uVar3 = 0;
  do {
    uVar6 = uVar3 & 0xffffffff;
    lVar4 = (uVar6 + 0x648) * 8;
    uVar3 = (ulong)((int)uVar3 + 1);
    if ((*param_3 < 4) && (lVar5 = *(long *)(g_3ab40 + lVar4 + 8), lVar5 != 0)) {
      if ((*(uint *)(*(long *)(lVar5 + 4) + 4) & 7) == uVar1) {
        lVar5 = FUN_fffffffff0016e18(param_2,4,*(undefined4 *)(lVar5 + 0xc));
        if (lVar5 == 0) {
          FUN_fffffffff000fe20
                    (param_2,param_3,uVar2,*(undefined8 *)(g_3ab40 + lVar4 + 8));
        }
        if (param_1 == 0) {
          lVar4 = g_3ab40 + uVar6 * 8;
          **(uint **)(lVar4 + 0x3248) = **(uint **)(lVar4 + 0x3248) & 0xfffffdff;
          *(undefined4 *)(lVar4 + 0x3248) = 0;
          *(undefined4 *)(lVar4 + 0x324c) = 0;
        }
      }
    }
  } while (uVar3 != 4);
  return;
}


/* ---- FUN_fffffffff00107f8 @ fffffffff00107f8 size=240 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff00107f8(void)

{
  long lVar1;
  
  lVar1 = g_3ab40 + (ulong)*(uint *)(g_3ab40 + 0x31a8) * 0x100 + 8;
  if (*(int *)(lVar1 + 4) == 0) {
    if (*(long *)(lVar1 + 0x20) != 0) {
      if (*(long *)(lVar1 + 0x28) != 0) {
        FUN_fffffffff001d498(0x10000,0x40);
        FUN_fffffffff001d498(0x10000,*(undefined8 *)(lVar1 + 0x28),0x100);
        FUN_fffffffff001d6c8();
      }
    }
    if (*(long *)(lVar1 + 0x30) != 0) {
      FUN_fffffffff001d498(0x10000,0);
      FUN_fffffffff001d6c8();
    }
  }
  FUN_fffffffff000dcbc(*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10),1);
  return 1;
}


/* ---- FUN_fffffffff00108e8 @ fffffffff00108e8 size=436 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_fffffffff00108e8(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(char *)(g_3ab40 + 2) != '\0') {
    uVar2 = FUN_fffffffff000bd84();
    lVar3 = g_3ab40;
    if ((*(uint *)(g_3ab40 + 0x2c94) >> 3 & 1) != 0) {
      *(uint *)(g_3ab40 + 0x2c94) = *(uint *)(g_3ab40 + 0x2c94) | 1;
    }
    if ((*(uint *)(lVar3 + 0x2e4c) >> 3 & 1) != 0) {
      *(uint *)(lVar3 + 0x2e4c) = *(uint *)(lVar3 + 0x2e4c) | 1;
    }
    if ((*(uint *)(lVar3 + 0x3004) >> 3 & 1) != 0) {
      *(uint *)(lVar3 + 0x3004) = *(uint *)(lVar3 + 0x3004) | 1;
    }
    *(undefined1 *)(lVar3 + 2) = 0;
    uVar4 = 0;
    if (*(ulong *)(lVar3 + 0x2a14c) < uVar2) {
      uVar4 = uVar2 - *(ulong *)(lVar3 + 0x2a14c);
      iVar1 = *(int *)(lVar3 + 0x3d2c);
    }
    else {
      iVar1 = *(int *)(lVar3 + 0x3d2c);
    }
    if (iVar1 == 1) {
      if (*(int *)(lVar3 + 0x3da4) == 0) {
        uVar2 = FUN_fffffffff000bd24(20000);
        if (uVar4 < uVar2) {
          lVar3 = FUN_fffffffff000bd24(2000);
          FUN_fffffffff000b144(lVar3 - uVar4);
          lVar3 = g_3ab40;
        }
        else {
          *(undefined4 *)(g_3ab40 + 0x3d2c) = 2;
          lVar3 = FUN_fffffffff000f27c(0);
          if (lVar3 != 0) {
            FUN_fffffffff000f72c();
          }
          FUN_fffffffff000bd24(2000);
          FUN_fffffffff000b144();
          lVar3 = g_3ab40;
        }
      }
    }
    else if (iVar1 == 2) {
      *(undefined4 *)(lVar3 + 0x3d2c) = 0;
    }
    if (((((ulong)(long)*(int *)(lVar3 + 0x3d28) >> 0x14 & 1) == 0) &&
        (*(int *)(lVar3 + 0x3db4) != 0)) && (*(int *)(lVar3 + 0x3da4) != 0)) {
      FUN_fffffffff000aa64();
      FUN_fffffffff000bd24(10000);
      FUN_fffffffff000b144();
    }
    return 1;
  }
  return 0;
}


/* ---- FUN_fffffffff0010a9c @ fffffffff0010a9c size=192 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff0010a9c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  
  FUN_fffffffff001cd2c();
  lVar3 = g_3ab40 + (ulong)*(uint *)(g_3ab40 + 0x31a8) * 0x100 + 8;
  uVar1 = *(undefined4 *)(lVar3 + 0x10);
  uVar2 = *(undefined4 *)(lVar3 + 0x30);
  lVar4 = g_3ab40 + (long)*(int *)(lVar3 + 4) * 0x28;
  *(undefined4 *)(lVar4 + 0x3128) = *(undefined4 *)(lVar3 + 0x14);
  *(undefined4 *)(lVar4 + 0x313c) = uVar2;
  *(undefined4 *)(lVar4 + 0x3124) = uVar1;
  *(undefined4 *)(lVar4 + 0x312c) = 0;
  *(undefined4 *)(lVar4 + 0x3130) = 0;
  *(undefined4 *)(lVar4 + 0x3134) = 0;
  *(undefined4 *)(lVar4 + 0x3138) = 0;
  uVar1 = *(undefined4 *)(lVar3 + 0xc);
  *(undefined4 *)(lVar4 + 0x3144) = *(undefined4 *)(lVar3 + 8);
  *(undefined4 *)(lVar4 + 0x3148) = uVar1;
  FUN_fffffffff001cdd0();
  FUN_fffffffff000dcbc(*(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar3 + 0x20),1);
  return 1;
}


/* ---- sub_10b5c @ fffffffff0010b5c size=56 ---- */

bool sub_10b5c(long param_1)

{
  if (*(int *)(param_1 + 0x50) != 0) {
    return true;
  }
  if ((*(int *)(param_1 + 0x58) == 0) && (*(int *)(param_1 + 0x5c) == 0)) {
    return *(int *)(param_1 + 0x54) != 0;
  }
  return true;
}


/* ---- FUN_fffffffff0010b94 @ fffffffff0010b94 size=260 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff0010b94(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = g_3ab40 + (ulong)*(uint *)(g_3ab40 + 0x31a8) * 0x100 + 8;
  lVar6 = *(long *)(lVar5 + 4);
  if ((((ulong)(long)*(int *)(g_3ab40 + 0x3d28) >> 0x10 & 1) != 0) &&
     (*(uint *)(lVar5 + 0x38) < 0x40)) {
    lVar6 = g_3ab40 + (ulong)*(uint *)(lVar5 + 0x38) * 0x54c + 0x3dbc;
  }
  *(uint *)(lVar6 + 0x90) = *(uint *)(lVar6 + 0x90) | 2;
  uVar1 = *(undefined4 *)(lVar5 + 0x10);
  uVar2 = *(undefined4 *)(lVar5 + 0x14);
  uVar3 = *(undefined4 *)(lVar5 + 0x18);
  uVar4 = *(undefined4 *)(lVar5 + 0x1c);
  *(undefined4 *)(lVar6 + 0x60) = *(undefined4 *)(lVar5 + 0xc);
  *(undefined4 *)(lVar6 + 100) = uVar1;
  *(undefined4 *)(lVar6 + 0x6c) = uVar2;
  *(undefined4 *)(lVar6 + 0x68) = uVar3;
  *(undefined4 *)(lVar6 + 0x70) = uVar4;
  FUN_fffffffff0018ad4();
  FUN_fffffffff000dcbc(*(undefined8 *)(lVar5 + 0x20),*(undefined8 *)(lVar5 + 0x28),0);
  return 1;
}


/* ---- sub_10c98 @ fffffffff0010c98 size=8 ---- */

undefined8 sub_10c98(void)

{
  return 1;
}


/* ---- FUN_fffffffff0010ca0 @ fffffffff0010ca0 size=176 ---- */

void FUN_fffffffff0010ca0(long param_1,int param_2,int param_3)

{
  long lVar1;
  uint local_24;
  
  local_24 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 100) + 0x21c;
  FUN_fffffffff001d7d8(0,lVar1,&local_24);
  local_24 = local_24 & 0xffff00e7 | param_3 << 8 | param_2 << 3;
  FUN_fffffffff001d498(0x10000,lVar1);
  return;
}


/* ---- sub_10d50 @ fffffffff0010d50 size=96 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 sub_10d50(void)

{
  long lVar1;
  
  lVar1 = g_3ab40 + (ulong)*(uint *)(g_3ab40 + 0x31a8) * 0x100 + 8;
  FUN_fffffffff000dcbc(*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10),0);
  return 1;
}


/* ---- FUN_fffffffff0010db0 @ fffffffff0010db0 size=756 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff0010db0(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long local_40;
  undefined8 auStack_38 [2];
  
  lVar10 = *(long *)(param_1 + 0x34);
  if (lVar10 != 0) {
    iVar1 = *(int *)(param_1 + 0x30);
    lVar9 = (long)iVar1;
    iVar2 = *(int *)(param_1 + 0x28);
    lVar12 = (long)iVar2;
    if (param_1 == *(long *)(lVar10 + 0x20)) {
      uVar6 = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(lVar10 + 0x20) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(lVar10 + 0x24) = uVar6;
    }
    local_40 = *(long *)(lVar10 + 0x18);
    lVar10 = FUN_fffffffff0016d78(param_1,&local_40);
    lVar8 = g_3ab40;
    if (lVar10 != 0) {
      lVar11 = g_3ab40 + lVar9 * 0x1b8 + lVar12 * 0x58;
      lVar7 = *(long *)(param_1 + 0x34);
      iVar3 = *(int *)(lVar11 + 0x2c20);
      *(int *)(lVar7 + 0x1c) = (int)((ulong)local_40 >> 0x20);
      *(int *)(lVar7 + 0x18) = (int)local_40;
      *(int *)(lVar11 + 0x2c20) = iVar3 + -1;
      lVar10 = *(long *)(lVar7 + 0x10) + lVar9 * 0x17c + lVar12 * 0x4c;
      iVar3 = *(int *)(lVar11 + 0x2c24);
      iVar4 = *(int *)(param_1 + 0x2c);
      uVar5 = *(uint *)(param_1 + 0x10);
      *(int *)(lVar10 + 0x10c) = *(int *)(lVar10 + 0x10c) + -1;
      *(int *)(lVar11 + 0x2c24) = iVar3 - iVar4;
      lVar11 = (long)iVar1;
      lVar13 = (long)iVar2;
      if ((uVar5 & 2) != 0) {
        iVar1 = *(int *)(param_1 + 0x30);
        iVar2 = *(int *)(param_1 + 0x28);
        lVar10 = lVar8 + (long)iVar1 * 0x1b8 + (long)iVar2 * 0x58;
        iVar3 = *(int *)(lVar10 + 0x2c28);
        iVar4 = *(int *)(lVar7 + 0x30) + -1;
        *(int *)(lVar7 + 0x30) = iVar4;
        iVar3 = iVar3 + -1;
        *(int *)(lVar10 + 0x2c28) = iVar3;
        if (iVar4 == 0) {
          *(undefined4 *)(lVar7 + 0x28) = 0;
          *(undefined4 *)(lVar7 + 0x2c) = 0;
        }
        if (iVar3 == 0) {
          lVar10 = lVar8 + (long)iVar1 * 0x1b8 + (long)iVar2 * 0x58;
          *(undefined4 *)(lVar10 + 0x2bf8) = 0;
          *(undefined4 *)(lVar10 + 0x2bfc) = 0;
        }
      }
      lVar10 = 1;
      if (local_40 == 0) {
        lVar10 = lVar8 + (((lVar9 * 8 - lVar11) * 8 - lVar11) + ((lVar12 * 2 + lVar13) * 4 - lVar13)
                         ) * 8;
        *(undefined4 *)(lVar7 + 0x10) = 0;
        *(undefined4 *)(lVar7 + 0x14) = 0;
        if (lVar7 == *(long *)(lVar10 + 0x2c34)) {
          uVar6 = *(undefined4 *)(lVar7 + 0xc);
          *(undefined4 *)(lVar10 + 0x2c34) = *(undefined4 *)(lVar7 + 8);
          *(undefined4 *)(lVar10 + 0x2c38) = uVar6;
        }
        lVar9 = (((lVar9 * 8 - lVar11) * 8 - lVar11) + ((lVar12 * 2 + lVar13) * 4 - lVar13)) * 8;
        auStack_38[0] = *(undefined8 *)(lVar8 + lVar9 + 0x2be8);
        lVar10 = FUN_fffffffff0016d78(lVar7,auStack_38);
        if (lVar10 != 0) {
          lVar10 = 1;
          lVar9 = g_3ab40 + lVar9;
          *(int *)(lVar9 + 0x2be8) = (int)auStack_38[0];
          *(int *)(lVar9 + 0x2bec) = (int)((ulong)auStack_38[0] >> 0x20);
          *(int *)(lVar9 + 0x2c1c) = *(int *)(lVar9 + 0x2c1c) + -1;
        }
      }
    }
    return lVar10;
  }
  return 1;
}


/* ---- FUN_fffffffff00110a4 @ fffffffff00110a4 size=984 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff00110a4(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_80;
  undefined8 auStack_78 [2];
  
  lVar10 = (long)*(int *)(param_1 + 0x30);
  lVar11 = (long)*(int *)(param_1 + 0x28);
  lVar4 = (lVar10 * 0x37 + lVar11 * 0xb) * 8;
  lVar3 = (lVar11 * 0x13 + lVar10 * 0x5f) * 4;
  uStack_80 = *(undefined8 *)(g_3ab40 + lVar4 + 0x2be8);
  lVar7 = param_2 + lVar3 + 0xd8;
  lVar3 = param_2 + lVar3;
  *(int *)(lVar3 + 0xe8) = (int)param_2;
  *(int *)(lVar3 + 0xec) = (int)((ulong)param_2 >> 0x20);
  *(long *)(param_1 + 0x34) = lVar7;
  lVar5 = FUN_fffffffff0016e00(lVar7);
  if (lVar5 == 0) {
    lVar6 = FUN_fffffffff0016d30(lVar7,&uStack_80);
    lVar5 = g_3ab40;
    uVar1 = *(uint *)(param_1 + 0x10);
    lVar4 = g_3ab40 + lVar4;
    *(long *)(lVar4 + 0x2be8) = lVar7;
    *(int *)(lVar4 + 0x2c1c) = *(int *)(lVar4 + 0x2c1c) + 1;
    uVar8 = *(undefined8 *)(lVar4 + 0x2bf0);
    lVar3 = *(long *)(lVar3 + 0xe8);
    *(int *)(lVar3 + 0x14) = (int)((ulong)uVar8 >> 0x20);
    *(int *)(lVar3 + 0x10) = (int)uVar8;
    if ((uVar1 & 2) != 0) {
      lVar3 = *(long *)(param_1 + 0x34);
      if ((*(int *)(lVar3 + 0x30) == 0) && (*(long *)(lVar3 + 0x28) == 0)) {
        uVar8 = FUN_fffffffff000bd84();
        lVar5 = g_3ab40;
        *(int *)(lVar3 + 0x28) = (int)uVar8;
        *(int *)(lVar3 + 0x2c) = (int)((ulong)uVar8 >> 0x20);
      }
      lVar3 = (lVar10 * 0x37 + lVar11 * 0xb) * 8;
      lVar4 = lVar5 + lVar3;
      iVar9 = *(int *)(lVar4 + 0x2c28);
      if ((iVar9 == 0) && (*(long *)(lVar4 + 0x2bf8) == 0)) {
        uVar8 = FUN_fffffffff000bd84();
        lVar5 = g_3ab40;
        iVar9 = *(int *)(g_3ab40 + lVar3 + 0x2c28);
        *(int *)(lVar4 + 0x2bf8) = (int)uVar8;
        *(int *)(lVar4 + 0x2bfc) = (int)((ulong)uVar8 >> 0x20);
      }
      *(int *)(lVar5 + lVar10 * 0x1b8 + lVar11 * 0x58 + 0x2c28) = iVar9 + 1;
      *(int *)(*(long *)(param_1 + 0x34) + 0x30) = *(int *)(*(long *)(param_1 + 0x34) + 0x30) + 1;
    }
    if (lVar6 == 0) {
      return 0;
    }
  }
  auStack_78[0] = *(undefined8 *)(*(long *)(param_1 + 0x34) + 0x18);
  lVar3 = FUN_fffffffff0016e00(param_1);
  if (lVar3 == 0) {
    uVar8 = FUN_fffffffff0016d30(param_1,auStack_78);
    lVar4 = (lVar10 * 0x5f + lVar11 * 0x13) * 4;
    param_2 = param_2 + lVar4;
    lVar3 = g_3ab40 + lVar10 * 0x1b8 + lVar11 * 0x58;
    *(int *)(param_2 + 0xf4) = (int)((ulong)param_1 >> 0x20);
    *(int *)(param_2 + 0xf0) = (int)param_1;
    iVar9 = *(int *)(param_1 + 0x2c);
    iVar2 = *(int *)(lVar3 + 0x2c24);
    *(int *)(lVar3 + 0x2c20) = *(int *)(lVar3 + 0x2c20) + 1;
    lVar4 = *(long *)(param_2 + 0xe8) + lVar4;
    *(int *)(lVar4 + 0x10c) = *(int *)(lVar4 + 0x10c) + 1;
    *(int *)(lVar3 + 0x2c24) = iVar9 + iVar2;
    *(uint *)(lVar3 + 0x2c3c) = *(uint *)(lVar3 + 0x2c3c) | 1;
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}


/* ---- FUN_fffffffff001147c @ fffffffff001147c size=396 ---- */

undefined8
FUN_fffffffff001147c(long param_1,long param_2,long param_3,long param_4,long param_5,uint *param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  *param_6 = 0xa0000;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x34) + 0x10);
  if (*(int *)(param_1 + 0x28) == param_5) {
    uVar1 = *(undefined4 *)(param_2 + 4);
    *(long *)(param_1 + 0x14) = *(long *)(param_2 + 0xc) * 10;
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    uVar4 = 1;
  }
  else {
    uVar4 = 1;
    if (((*(int *)(param_1 + 0x30) == 0) && (param_3 != 0)) && (param_4 != 0)) {
      if ((*(uint *)(param_1 + 0x10) & 2) != 0) {
        uStack_48 = 0;
        uVar4 = FUN_fffffffff0008424(&uStack_48,0);
      }
      FUN_fffffffff0010ca0(param_1,param_3,param_4);
    }
    lVar3 = FUN_fffffffff0010db0(param_1);
    if (lVar3 == 0) {
      *param_6 = *param_6 | 1;
      uVar4 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
      *(long *)(param_1 + 0x14) = *(long *)(param_2 + 0xc) * 10;
      *(int *)(param_1 + 0x28) = (int)param_5;
      *(undefined4 *)(param_1 + 0x24) = uVar1;
      lVar3 = FUN_fffffffff00110a4(param_1,uVar2);
      if (lVar3 == 0) {
        *param_6 = *param_6 | 2;
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}


/* ---- FUN_fffffffff0011608 @ fffffffff0011608 size=408 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff0011608(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar4 = *(long *)(g_3ab40 + 0x3110);
  lVar5 = *(long *)(param_1 + 0x34);
  iVar1 = *(int *)(g_3ab40 + 0x2c84);
  iVar2 = *(int *)(g_3ab40 + 0x2c88);
  if (((lVar4 != 0) && (lVar4 != lVar5)) && (lVar4 = *(long *)(lVar4 + 0x18), lVar4 != 0)) {
    lVar5 = 1;
    do {
      while (*(int *)(lVar4 + 0x28) < 3) {
LAB_fffffffff0011758:
        lVar4 = *(long *)(lVar4 + 8);
        if (lVar4 == 0) goto LAB_fffffffff00116c4;
        if (lVar5 == 0) {
          return 0;
        }
      }
      if ((*(uint *)(lVar4 + 0x10) & 0x400) == 0) {
        lVar5 = FUN_fffffffff001147c(lVar4,param_2,(long)iVar1,(long)iVar2,1,param_3);
        goto LAB_fffffffff0011758;
      }
      lVar4 = *(long *)(lVar4 + 8);
    } while (lVar4 != 0);
LAB_fffffffff00116c4:
    if (lVar5 == 0) {
      return 0;
    }
    lVar5 = *(long *)(param_1 + 0x34);
  }
  lVar4 = g_3ab40;
  uVar3 = *(uint *)(param_2 + 0x3c);
  iVar1 = *(int *)(param_2 + 8);
  *(int *)(g_3ab40 + 0x3110) = (int)lVar5;
  *(int *)(lVar4 + 0x3114) = (int)((ulong)lVar5 >> 0x20);
  uVar6 = FUN_fffffffff001147c(param_1,param_2,uVar3 & 3,uVar3 >> 2 & 0xff,(long)iVar1,param_3);
  return uVar6;
}


/* ---- FUN_fffffffff00117a0 @ fffffffff00117a0 size=172 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff00117a0(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = g_3ab40;
  uVar1 = *(uint *)(g_3ab40 + 0x31a8);
  uVar4 = FUN_fffffffff000bd84();
  lVar3 = lVar2 + (ulong)uVar1 * 0x100 + 8;
  *(int *)(lVar2 + 0x2a0bc) = (int)uVar4;
  *(int *)(lVar2 + 0x2a0c0) = (int)((ulong)uVar4 >> 0x20);
  FUN_fffffffff001eb28(*(undefined8 *)(lVar3 + 4),g_3ab40,0x2a154);
  FUN_fffffffff000dcbc(*(undefined8 *)(lVar3 + 0x14),*(undefined8 *)(lVar3 + 0x1c),0);
  return 1;
}


/* ---- FUN_fffffffff001184c @ fffffffff001184c size=696 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff001184c(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  lVar6 = g_3ab40;
  uVar1 = *(uint *)(param_1 + 0xd8);
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(g_3ab40 + 0x2014) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(lVar6 + 0x2018) = uVar2;
  *(undefined4 *)(lVar6 + 0x2010) = uVar3;
  *(undefined4 *)(lVar6 + 0x31ac) = 4;
  uVar3 = *(undefined4 *)(param_1 + 0xe0);
  uVar5 = *(undefined4 *)(param_1 + 0xe4);
  uVar2 = *(undefined4 *)(param_1 + 0xdc);
  *(uint *)(lVar6 + 0x3d28) =
       (uVar1 & 0x20) << 2 | 2 | (uVar1 & 0x80) << 3 | (uVar1 >> 8 & 1) << 0xb |
       (uVar1 >> 0xf & 1) << 0x12 | (uVar1 >> 0x11 & 1) << 0x14 | (uVar1 >> 0x12 & 1) << 0x15 |
       (uVar1 >> 0x13 & 1) << 0x17 | *(uint *)(lVar6 + 0x3d28) & 0xff4bf37d;
  *(undefined4 *)(lVar6 + 0x3d30) = uVar3;
  *(undefined4 *)(lVar6 + 0x3d34) = uVar5;
  *(undefined4 *)(lVar6 + 0x3d38) = uVar2;
  FUN_fffffffff0007250(lVar6 + 0x201c);
  FUN_fffffffff0016ed8
            (g_3ab40 + 0x2b10,(long)*(int *)(param_1 + 8),(long)*(int *)(param_1 + 4),
             (long)*(int *)(param_1 + 0x10));
  puVar8 = (undefined4 *)(g_3ab40 + 0x2c18);
  puVar7 = (undefined4 *)(g_3ab40 + 0x3140);
  puVar10 = (undefined4 *)(param_1 + 0x44);
  puVar9 = puVar8;
  do {
    do {
      puVar11 = puVar10 + 1;
      *puVar8 = *puVar10;
      puVar8 = puVar8 + 0x16;
      puVar10 = puVar11;
    } while ((undefined4 *)(param_1 + 0x58) != puVar11);
    puVar8 = puVar9 + 0x6e;
    puVar10 = (undefined4 *)(param_1 + 0x44);
    puVar9 = puVar8;
  } while (puVar8 != puVar7);
  FUN_fffffffff000b0b8();
  lVar6 = g_3ab40;
  uVar1 = *(uint *)(param_1 + 0xd8);
  *(undefined4 *)(g_3ab40 + 0x3118) = 0;
  *(undefined4 *)(lVar6 + 0x311c) = 0;
  *(undefined4 *)(lVar6 + 0x3120) = 0;
  iVar4 = *(int *)(param_1 + 0xd8);
  *(undefined4 *)(lVar6 + 0x3240) = 0;
  *(undefined4 *)(lVar6 + 0x3244) = 0;
  *(uint *)(lVar6 + 0x3d28) =
       uVar1 & 1 | 0x10 | (uVar1 & 2) << 2 | (uVar1 & 8) << 2 | (uVar1 & 0x10) << 2 |
       (uVar1 & 0x40) << 2 | (uVar1 >> 10 & 1) << 0xe | (uVar1 >> 2 & 1) << 0x16 |
       *(uint *)(lVar6 + 0x3d28) & 0xffbfbe86;
  if (((ulong)(long)iVar4 >> 0xd & 1) == 0) {
    *(undefined4 *)(lVar6 + 0x3db8) = 2000000;
  }
  else if (*(int *)(param_1 + 0xf8) == 0) {
    *(undefined4 *)(lVar6 + 0x2a124) = 1;
  }
  else {
    *(int *)(lVar6 + 0x3db8) = *(int *)(param_1 + 0xf8) * 1000000;
  }
  *(byte *)(lVar6 + 0x3d2a) =
       (byte)(uVar1 >> 0xd) & 8 | (byte)(uVar1 >> 0xe) & 1 | *(byte *)(lVar6 + 0x3d2a) & 0xf6;
  return;
}


/* ---- FUN_fffffffff0011b04 @ fffffffff0011b04 size=424 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff0011b04(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  lVar4 = g_3ab40 + (ulong)*(uint *)(g_3ab40 + 0x31a8) * 0x100 + 8;
  FUN_fffffffff001eb28(g_3ab40 + 0x31dc,lVar4 + 0x68,0x20);
  FUN_fffffffff001eb28(g_3ab40 + 0x31fc,lVar4 + 0x88,0x20);
  FUN_fffffffff001eb28(g_3ab40 + 0x321c,lVar4 + 0xa8,0x20);
  FUN_fffffffff001184c(lVar4,lVar4 + 0x34,lVar4 + 0x14,lVar4 + 0x3c,(long)*(int *)(lVar4 + 0xfc));
  lVar3 = g_3ab40;
  uVar1 = *(undefined8 *)(lVar4 + 0x60);
  puVar2 = *(undefined8 **)(lVar4 + 0x58);
  *(int *)(g_3ab40 + 0x31c4) = (int)((ulong)uVar1 >> 0x20);
  *(int *)(lVar3 + 0x31c0) = (int)uVar1;
  *puVar2 = 0x10000;
  uVar5 = *(uint *)(lVar4 + 0xd8) >> 9 & 1;
  *(uint *)(lVar3 + 0x3d28) = *(uint *)(lVar3 + 0x3d28) & 0xffffdfff | uVar5 << 0xd;
  if (uVar5 != 0) {
    uVar1 = *(undefined8 *)(lVar4 + 0xe8);
    *(int *)(lVar3 + 0x3d98) = (int)uVar1;
    *(int *)(lVar3 + 0x3d9c) = (int)((ulong)uVar1 >> 0x20);
  }
  FUN_fffffffff001cdf4((long)(*(int *)(lVar3 + 0x31dc) + 0x1e58),4);
  FUN_fffffffff000dcbc(*(undefined8 *)(lVar4 + 200),*(undefined8 *)(lVar4 + 0xd0),1);
  return 1;
}


/* ---- sub_11cac @ fffffffff0011cac size=72 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_11cac(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar1 = (undefined4 *)(g_3ab40 + 0x2c18);
  puVar5 = (undefined4 *)(g_3ab40 + 0x3140);
  puVar3 = param_1;
  puVar2 = puVar1;
  do {
    do {
      puVar4 = puVar3 + 1;
      *puVar1 = *puVar3;
      puVar1 = puVar1 + 0x16;
      puVar3 = puVar4;
    } while (puVar4 != param_1 + 5);
    puVar1 = puVar2 + 0x6e;
    puVar3 = param_1;
    puVar2 = puVar1;
  } while (puVar1 != puVar5);
  return;
}


/* ---- sub_11cf4 @ fffffffff0011cf4 size=24 ---- */

void sub_11cf4(long param_1)

{
  FUN_fffffffff001cdf4((long)(int)param_1,param_1 >> 0x20);
  return;
}


/* ---- FUN_fffffffff0011d0c @ fffffffff0011d0c size=180 ---- */

void FUN_fffffffff0011d0c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  int local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_30;
  ulong auStack_28 [2];
  
  local_40 = (int)param_1;
  uStack_3c = (undefined4)((ulong)param_1 >> 0x20);
  uStack_38 = (undefined4)param_2;
  uStack_30 = 0;
  if ((param_2 >> 0x20 & 1U) == 0) {
    auStack_28[0] = auStack_28[0] & 0xffffffff00000000;
    FUN_fffffffff001d0f8(auStack_28);
    uVar1 = 0xc000004;
    FUN_fffffffff001eb28(&uStack_30,auStack_28,4);
  }
  else {
    auStack_28[0] = 0;
    FUN_fffffffff001d178((long)local_40,auStack_28);
    uVar1 = 0xc000008;
    FUN_fffffffff001eb28(&uStack_30,auStack_28,8);
  }
  FUN_fffffffff001e144(uVar1,&uStack_30,CONCAT44(uStack_38,uStack_3c));
  return;
}


/* ---- FUN_fffffffff0011dc0 @ fffffffff0011dc0 size=88 ---- */

void FUN_fffffffff0011dc0(undefined8 param_1,undefined8 param_2)

{
  FUN_fffffffff001cd2c();
  FUN_fffffffff0018bf8(0,0,param_1,param_2);
  FUN_fffffffff0018bf8(0,1,param_1,param_2);
  FUN_fffffffff001cdd0();
  return;
}


/* ---- FUN_fffffffff0011e18 @ fffffffff0011e18 size=72 ---- */

bool FUN_fffffffff0011e18(ulong param_1,ulong param_2)

{
  int aiStack_24 [3];
  
  aiStack_24[0] = 0;
  FUN_fffffffff001d0f8(aiStack_24);
  return (((long)aiStack_24[0] ^ param_1) & param_2) == 0;
}


/* ---- sub_11e60 @ fffffffff0011e60 size=124 ---- */

undefined8 sub_11e60(undefined8 param_1,ulong param_2,ulong param_3)

{
  int aiStack_34 [3];
  
  FUN_fffffffff000bd84();
  while( true ) {
    aiStack_34[0] = 0;
    FUN_fffffffff001d0f8(param_1,aiStack_34);
    if ((((long)aiStack_34[0] ^ param_2) & param_3) == 0) break;
    FUN_fffffffff000de14(50000);
  }
  return 1;
}


/* ---- FUN_fffffffff0011edc @ fffffffff0011edc size=276 ---- */

void FUN_fffffffff0011edc(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uStack_44;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  iVar3 = param_1[3];
  iVar4 = param_1[4];
  FUN_fffffffff001cd2c();
  if (*param_1 == 0) {
    FUN_fffffffff000bd84();
    while( true ) {
      uStack_44 = 0;
      FUN_fffffffff001d0f8((long)iVar3,&uStack_44);
      if (((uStack_44 ^ uVar1) & uVar2) == 0) break;
      FUN_fffffffff000de14(50000);
    }
  }
  else if (*param_1 == 1) {
    FUN_fffffffff001cdf4((long)iVar3,(long)(int)uVar1);
    FUN_fffffffff000bd84();
    while( true ) {
      uStack_44 = 0;
      FUN_fffffffff001d0f8((long)iVar4,&uStack_44);
      if (((uStack_44 ^ uVar1) & uVar2) == 0) break;
      FUN_fffffffff000de14(50000);
    }
    FUN_fffffffff001cdf4((long)iVar4,(long)(int)(uVar1 & uVar2));
  }
  FUN_fffffffff001cdd0();
  return;
}


/* ---- FUN_fffffffff0011ff0 @ fffffffff0011ff0 size=108 ---- */

void FUN_fffffffff0011ff0(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 != 0) {
    lVar1 = param_1 + 4;
    lVar3 = param_1;
    while (lVar2 = lVar1, FUN_fffffffff001d498(0,lVar3,param_3),
          lVar2 != ((ulong)((long)((int)param_2 + -1) << 0x20) >> 0x1e) + param_1 + 4) {
      lVar3 = lVar2;
      lVar1 = lVar2 + 4;
    }
  }
  FUN_fffffffff001d6c8();
  return;
}


/* ---- FUN_fffffffff001205c @ fffffffff001205c size=276 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff001205c(void)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = g_3ab40 + (ulong)*(uint *)(g_3ab40 + 0x31a8) * 0x100 + 8;
  lVar3 = *(long *)(lVar2 + 0xc);
  if ((((ulong)(long)*(int *)(g_3ab40 + 0x3d28) >> 0x10 & 1) != 0) &&
     (*(uint *)(lVar2 + 0x2c) < 0x40)) {
    lVar3 = g_3ab40 + (ulong)*(uint *)(lVar2 + 0x2c) * 0x54c + 0x3dbc;
  }
  if (*(long *)(lVar3 + 0x24) != *(long *)(lVar2 + 4)) {
    FUN_fffffffff0017bc8(lVar3);
    uVar1 = *(undefined4 *)(lVar2 + 8);
    *(undefined4 *)(lVar3 + 0x24) = *(undefined4 *)(lVar2 + 4);
    *(undefined4 *)(lVar3 + 0x28) = uVar1;
  }
  FUN_fffffffff000dcbc(*(undefined8 *)(lVar2 + 0x14),*(undefined8 *)(lVar2 + 0x1c),0);
  return 1;
}


/* ---- FUN_fffffffff0012170 @ fffffffff0012170 size=268 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0012170(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = g_3ab40;
  if (*(int *)(g_3ab40 + 0x3d38) == 0) {
    iVar2 = 0;
    goto LAB_fffffffff00121d8;
  }
  lVar3 = g_3ab40 + param_1 * 0x1b8;
  if (*(uint *)(lVar3 + 0x2c7c) <= *(uint *)(g_3ab40 + (param_1 + 0xabc) * 4 + 0xc)) {
    iVar2 = 0;
    if (*(uint *)(lVar3 + 0x2c7c) <= *(uint *)(lVar3 + 0x2c80)) goto LAB_fffffffff00121d8;
    lVar3 = *(long *)(lVar3 + 0x2c40);
    if (lVar3 != 0) {
      do {
        lVar1 = *(long *)(lVar3 + 0x18);
        while (lVar1 != 0) {
          *(uint *)(lVar1 + 0x54) = *(uint *)(lVar1 + 0x54) & 0xfffffff7;
          lVar1 = *(long *)(lVar1 + 8);
        }
        lVar3 = *(long *)(lVar3 + 8);
      } while (lVar3 != 0);
      iVar2 = 1;
      goto LAB_fffffffff00121d8;
    }
  }
  iVar2 = 1;
LAB_fffffffff00121d8:
  lVar4 = lVar4 + param_1 * 0x1b8;
  *(uint *)(lVar4 + 0x2c94) = *(uint *)(lVar4 + 0x2c94) & 0xfffffff7 | iVar2 << 3;
  return;
}


/* ---- FUN_fffffffff001227c @ fffffffff001227c size=444 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff001227c(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 local_34 [3];
  
  lVar4 = g_3ab40 + (ulong)*(uint *)(g_3ab40 + 0x31a8) * 0x100 + 8;
  local_34[0] = 0xa0000;
  lVar5 = *(long *)(lVar4 + 0x14);
  if ((((ulong)(long)*(int *)(g_3ab40 + 0x3d28) >> 0x10 & 1) == 0) ||
     (0xff < *(uint *)(lVar4 + 0x38))) {
    if (lVar5 == 0) {
      local_34[0] = 0xa0000;
      lVar6 = 0;
      goto LAB_fffffffff00123ac;
    }
  }
  else {
    lVar5 = g_3ab40 + (ulong)*(uint *)(lVar4 + 0x38) * 0x110 + 0x190bc;
  }
  iVar1 = *(int *)(lVar4 + 8);
  iVar2 = *(int *)(lVar5 + 0x30);
  uVar3 = *(uint *)(lVar4 + 0x3c);
  lVar6 = g_3ab40 + (long)iVar2 * 0x1b8 + (long)iVar1 * 0x58;
  *(uint *)(lVar6 + 0x2c30) = uVar3 >> 2 & 0xff;
  *(uint *)(lVar6 + 0x2c2c) = uVar3 & 3;
  if ((((uVar3 & 0x400) == 0) || (iVar1 < 3)) || ((long)iVar2 != 0)) {
    lVar6 = FUN_fffffffff001147c(lVar5,lVar4,uVar3 & 3,local_34);
  }
  else {
    lVar6 = FUN_fffffffff0011608(lVar5,lVar4,local_34,uVar3 >> 2 & 0xff);
  }
  if (lVar6 != 0) {
    FUN_fffffffff000dcbc(*(undefined8 *)(lVar4 + 0x1c),*(undefined8 *)(lVar4 + 0x24),0);
    FUN_fffffffff0012170((long)*(int *)(lVar5 + 0x30));
  }
LAB_fffffffff00123ac:
  *(undefined4 *)(g_3ab40 + 0x3120) = local_34[0];
  return lVar6;
}


/* ---- FUN_fffffffff0012438 @ fffffffff0012438 size=1264 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff0012438(void)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uStack_44;
  
  lVar9 = g_3ab40;
  lVar3 = g_3ab40 + (ulong)*(uint *)(g_3ab40 + 0x31a8) * 0x100 + 8;
  lVar4 = *(long *)(lVar3 + 8);
  if ((((ulong)(long)*(int *)(g_3ab40 + 0x3d28) >> 0x10 & 1) != 0) &&
     (*(uint *)(lVar3 + 0x44) < 0x100)) {
    lVar4 = g_3ab40 + (ulong)*(uint *)(lVar3 + 0x44) * 0x110 + 0x190bc;
  }
  uVar1 = *(uint *)(lVar3 + 0x10);
  uStack_44 = 0x30000;
  if ((uVar1 >> 3 & 1) == 0) {
    if ((uVar1 >> 2 & 1) == 0) {
      if ((uVar1 >> 1 & 1) != 0) {
        lVar8 = FUN_fffffffff000db18((long)*(int *)(lVar3 + 4));
        FUN_fffffffff000a5e4
                  ((long)*(int *)(lVar3 + 0x24),(long)*(int *)(lVar3 + 0x28),
                   (long)*(int *)(lVar3 + 4),(long)*(int *)(lVar3 + 0x38));
        goto LAB_fffffffff00126b4;
      }
      if (lVar4 == 0) {
        lVar8 = 0;
        uVar10 = 0x30005;
        goto LAB_fffffffff0012654;
      }
      lVar8 = 0;
      uVar10 = 0x30004;
      if (*(int *)(lVar4 + 0x60) != *(int *)(lVar3 + 4)) goto LAB_fffffffff0012654;
      if ((uVar1 & 0x10) != 0) {
        if ((*(uint *)(*(long *)(*(long *)(lVar4 + 0x34) + 0x10) + 0x90) & 0x20) == 0) {
          uVar6 = 0;
          goto LAB_fffffffff0012824;
        }
        lVar8 = 0;
        do {
          lVar7 = lVar9 + ((ulong)(lVar8 << 0x20) >> 0x1d);
          lVar8 = (long)((int)lVar8 + 1);
          if (lVar4 + 0x54 == *(long *)(lVar7 + 0x3248)) {
            *(undefined4 *)(lVar7 + 0x3248) = 0;
            *(undefined4 *)(lVar7 + 0x324c) = 0;
          }
        } while (lVar8 != 4);
        puVar5 = *(uint **)(lVar4 + 0x58);
        if (puVar5 == (uint *)0x0) {
          uVar6 = 1;
        }
        else {
          if ((*puVar5 & 2) != 0) {
            lVar9 = FUN_fffffffff000b8e0
                              (*(int *)(lVar9 + 0x3db8) + -1000000,*(undefined1 *)(lVar9 + 0x2a124),
                               1);
            if (lVar9 == 0) goto LAB_fffffffff0012900;
            puVar5 = *(uint **)(lVar4 + 0x58);
          }
          puVar5[2] = 0;
          puVar5[3] = 0;
          *(byte *)puVar5 = (byte)*puVar5 & 0x85;
          uVar6 = 1;
        }
LAB_fffffffff0012774:
        lVar8 = FUN_fffffffff000ea58(lVar4,uVar6,1,&uStack_44);
        lVar9 = g_3ab40;
        uVar10 = uStack_44;
        if (lVar8 == 0) goto LAB_fffffffff0012654;
        lVar8 = 1;
        goto LAB_fffffffff0012794;
      }
      uVar1 = *(uint *)(lVar4 + 0x54);
      if ((uVar1 & 2) == 0) {
        if ((uVar1 & 0x200) == 0) {
LAB_fffffffff001287c:
          uVar6 = 0;
          goto LAB_fffffffff0012774;
        }
        uVar6 = 0;
        bVar2 = true;
LAB_fffffffff0012584:
        lVar8 = g_3ab40;
        lVar9 = 0;
        do {
          lVar7 = lVar8 + ((ulong)(lVar9 << 0x20) >> 0x1d);
          lVar9 = (long)((int)lVar9 + 1);
          if (lVar4 + 0x54 == *(long *)(lVar7 + 0x3248)) {
            *(undefined4 *)(lVar7 + 0x3248) = 0;
            *(undefined4 *)(lVar7 + 0x324c) = 0;
          }
        } while (lVar9 != 4);
        if (bVar2) goto LAB_fffffffff0012774;
      }
      else {
        if ((**(uint **)(lVar4 + 0x58) & 2) != 0) {
          lVar9 = FUN_fffffffff00080d8(lVar4);
          if (lVar9 == 0) {
            uStack_44 = 0x30001;
            if ((*(uint *)(lVar4 + 0x54) & 0x200) == 0) {
LAB_fffffffff0012900:
              uVar6 = 1;
              goto LAB_fffffffff00125c0;
            }
            uVar6 = 1;
            bVar2 = false;
          }
          else {
            if ((*(uint *)(lVar4 + 0x54) & 0x200) == 0) goto LAB_fffffffff001287c;
            uVar6 = 0;
            bVar2 = true;
          }
          goto LAB_fffffffff0012584;
        }
        uStack_44 = 0x30002;
        uVar6 = 0;
        bVar2 = false;
        if ((uVar1 & 0x200) != 0) goto LAB_fffffffff0012584;
      }
LAB_fffffffff00125c0:
      if ((*(uint *)(*(long *)(*(long *)(lVar4 + 0x34) + 0x10) + 0x90) & 0x20) != 0) {
        lVar8 = 0;
        lVar9 = g_3ab40;
        uVar10 = uStack_44;
        goto LAB_fffffffff0012654;
      }
LAB_fffffffff0012824:
      lVar8 = FUN_fffffffff000ea58(lVar4,uVar6,1,&uStack_44);
      lVar9 = g_3ab40;
      uVar10 = uStack_44;
      if (lVar8 == 0) goto LAB_fffffffff0012654;
    }
    else {
      lVar8 = FUN_fffffffff000cea4
                        ((long)*(int *)(lVar3 + 4),(long)*(int *)(lVar3 + 0x24),
                         (long)*(int *)(lVar3 + 0x28),*(undefined8 *)(lVar3 + 0x2c),
                         (long)*(int *)(lVar3 + 0x34));
LAB_fffffffff00126b4:
      uVar10 = 0x30000;
      if (lVar8 != 0) {
LAB_fffffffff0012794:
        FUN_fffffffff000dcbc(*(undefined8 *)(lVar3 + 0x14),*(undefined8 *)(lVar3 + 0x1c),1);
        lVar9 = g_3ab40;
        *(int *)(g_3ab40 + 0x311c) = *(int *)(g_3ab40 + 0x311c) + 1;
        goto LAB_fffffffff0012530;
      }
    }
    lVar8 = 0;
    lVar9 = g_3ab40;
  }
  else {
    if ((uVar1 & 0x10) == 0) {
      lVar8 = FUN_fffffffff000d880
                        ((long)*(int *)(lVar3 + 0x24),(long)*(int *)(lVar3 + 0x28),
                         (long)*(int *)(lVar3 + 0x38));
      FUN_fffffffff000a5e4
                ((long)*(int *)(lVar3 + 0x24),(long)*(int *)(lVar3 + 0x28),(long)*(int *)(lVar3 + 4)
                 ,(long)*(int *)(lVar3 + 0x38));
      if (lVar8 == 0) {
        lVar9 = g_3ab40;
        uVar10 = 0x30000;
        goto LAB_fffffffff0012654;
      }
    }
    else {
      FUN_fffffffff000a5e4((long)*(int *)(lVar3 + 0x24),(long)*(int *)(lVar3 + 4));
      lVar8 = 1;
    }
    FUN_fffffffff000dcbc(*(undefined8 *)(lVar3 + 0x14),*(undefined8 *)(lVar3 + 0x1c),1);
    uVar10 = 0x30000;
    lVar9 = g_3ab40;
LAB_fffffffff0012530:
    if (lVar4 != 0) {
      FUN_fffffffff0012170((long)*(int *)(lVar4 + 0x30));
    }
  }
LAB_fffffffff0012654:
  *(undefined4 *)(lVar9 + 0x3120) = uVar10;
  return lVar8;
}


/* ---- sub_12928 @ fffffffff0012928 size=108 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_12928(void)

{
  long lVar1;
  
  lVar1 = g_3ab40;
  if ((*(uint *)(g_3ab40 + 0x2c94) >> 3 & 1) != 0) {
    *(uint *)(g_3ab40 + 0x2c94) = *(uint *)(g_3ab40 + 0x2c94) | 1;
  }
  if ((*(uint *)(lVar1 + 0x2e4c) >> 3 & 1) != 0) {
    *(uint *)(lVar1 + 0x2e4c) = *(uint *)(lVar1 + 0x2e4c) | 1;
  }
  if ((*(uint *)(lVar1 + 0x3004) >> 3 & 1) != 0) {
    *(uint *)(lVar1 + 0x3004) = *(uint *)(lVar1 + 0x3004) | 1;
  }
  return;
}


/* ---- FUN_fffffffff0012994 @ fffffffff0012994 size=64 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_fffffffff0012994(void)

{
  if (((*(uint *)(g_3ab40 + 0x2c94) & 8) == 0) &&
     ((*(uint *)(g_3ab40 + 0x2e4c) & 8) == 0)) {
    return *(int *)(g_3ab40 + 0x3004) >> 3 & 1;
  }
  return 1;
}


/* ---- FUN_fffffffff00129d4 @ fffffffff00129d4 size=180 ---- */

undefined8 FUN_fffffffff00129d4(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    if (param_3 == 0) {
      uVar1 = 1;
      if ((*(int *)(param_1 + 0x98) != param_2) &&
         (((*(int *)(param_1 + 0x50) != 0 || (*(int *)(param_1 + 0x58) != 0)) ||
          ((*(int *)(param_1 + 0x5c) != 0 || (*(int *)(param_1 + 0x54) != 0)))))) {
        uVar1 = FUN_fffffffff0017bc8(param_1);
      }
      *(int *)(param_1 + 0x98) = (int)param_2;
    }
    else {
      uVar2 = 1;
      uVar1 = 1;
      if (param_3 == 1) {
        if ((*(int *)(param_1 + 0x9c) != param_2) &&
           ((((*(int *)(param_1 + 0x50) != 0 || (*(int *)(param_1 + 0x58) != 0)) ||
             (*(int *)(param_1 + 0x5c) != 0)) || (*(int *)(param_1 + 0x54) != 0)))) {
          uVar2 = FUN_fffffffff0017bc8(param_1);
        }
        *(int *)(param_1 + 0x9c) = (int)param_2;
        uVar1 = uVar2;
      }
    }
    return uVar1;
  }
  return 1;
}


/* ---- FUN_fffffffff0012a88 @ fffffffff0012a88 size=2300 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff0012a88(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  uint local_5c0;
  undefined4 uStack_5bc;
  uint local_5b8 [6];
  uint local_5a0 [9];
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_560;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_514;
  
  lVar6 = g_3ab40 + (ulong)*(uint *)(g_3ab40 + 0x31a8) * 0x100 + 8;
  uStack_5bc = 0xffff;
  uVar10 = *(uint *)(lVar6 + 0x14) & 6;
  if (uVar10 == 2) {
    lVar11 = FUN_fffffffff00181a4(&uStack_5bc,0);
    if (*(undefined4 **)(lVar6 + 0x54) == (undefined4 *)0x0) {
      iVar7 = (lVar11 == 0) + 0xd0000;
    }
    else if (lVar11 == 0) {
      iVar7 = 0xd0001;
    }
    else {
      iVar7 = 0xd0000;
      **(undefined4 **)(lVar6 + 0x54) = uStack_5bc;
    }
  }
  else if (uVar10 == 4) {
    uVar10 = *(uint *)(lVar6 + 0x1c);
    lVar8 = (long)(int)uVar10;
    iVar7 = 0xd0002;
    lVar11 = FUN_fffffffff0017b78(lVar8);
    if (lVar11 != 0) {
      lVar12 = *(long *)(g_3ab40 + (ulong)uVar10 * 0xc + 0x2b14);
      uVar5 = *(undefined8 *)(g_3ab40 + 0x3240);
      local_5b8[0] = 0;
      FUN_fffffffff001d358(*(int *)(g_3ab40 + 0x31e0) + 0x9e5,local_5b8,lVar8);
      local_5b8[0] = local_5b8[0] & 0xfffffffe;
      FUN_fffffffff001d074(*(int *)(g_3ab40 + 0x31e0) + 0x9e5,lVar8);
      local_5a0[0] = 0;
      FUN_fffffffff001d358(*(int *)(g_3ab40 + 0x31dc) + 0x10a0,local_5a0,lVar8);
      local_5a0[0] = local_5a0[0] & 0xf7ffffff;
      FUN_fffffffff001d074(*(int *)(g_3ab40 + 0x31dc) + 0x10a0,lVar8);
      FUN_fffffffff0017b38(lVar8);
      if (lVar12 == 0) {
        iVar7 = 0xd0000;
        lVar11 = 1;
      }
      else {
        lVar11 = FUN_fffffffff0016e00(lVar12,uVar5);
        if (lVar11 == 0) {
          iVar7 = 0xd0000;
          lVar11 = 1;
        }
        else {
          lVar11 = FUN_fffffffff0017bc8(lVar12);
          iVar7 = 0xd0004;
          if (lVar11 != 0) {
            iVar7 = 0xd0000;
            lVar11 = 1;
          }
          FUN_fffffffff001876c(lVar12,0,1);
          FUN_fffffffff001876c(lVar12,2,1);
          FUN_fffffffff001876c(lVar12,1,1);
        }
        *(uint *)(lVar12 + 0x90) = *(uint *)(lVar12 + 0x90) & 0xfffffff7;
      }
      if (*(undefined4 **)(lVar6 + 0x54) != (undefined4 *)0x0) {
        **(undefined4 **)(lVar6 + 0x54) = 0;
      }
    }
  }
  else if (uVar10 == 0) {
    lVar8 = *(long *)(lVar6 + 0x20);
    if ((((ulong)(long)*(int *)(g_3ab40 + 0x3d28) >> 0x10 & 1) == 0) ||
       (0x3f < *(uint *)(lVar6 + 0x6c))) {
      if (lVar8 == 0) {
        iVar7 = 0xd0005;
        lVar11 = 0;
        goto LAB_fffffffff0012b10;
      }
    }
    else {
      lVar8 = g_3ab40 + (ulong)*(uint *)(lVar6 + 0x6c) * 0x54c + 0x3dbc;
    }
    uVar5 = *(undefined8 *)(g_3ab40 + 0x3240);
    lVar12 = (long)*(int *)(lVar6 + 0x1c);
    FUN_fffffffff00129d4(lVar8,(long)*(int *)(lVar6 + 0x74),0);
    iVar7 = *(int *)(lVar6 + 0x74);
    if (iVar7 == 0) {
      lVar11 = 1;
    }
    else if (*(int *)(lVar8 + 0x9c) == iVar7) {
      *(int *)(lVar8 + 0x9c) = *(int *)(lVar8 + 0x9c);
      lVar11 = 1;
    }
    else if ((((*(int *)(lVar8 + 0x50) == 0) && (*(int *)(lVar8 + 0x58) == 0)) &&
             (*(int *)(lVar8 + 0x5c) == 0)) && (*(int *)(lVar8 + 0x54) == 0)) {
      *(int *)(lVar8 + 0x9c) = iVar7;
      lVar11 = 1;
    }
    else {
      lVar11 = FUN_fffffffff0017bc8(lVar8);
      *(int *)(lVar8 + 0x9c) = iVar7;
      if (lVar11 == 0) {
        lVar11 = 0;
        iVar7 = 0xd0000;
        goto LAB_fffffffff0012b10;
      }
    }
    lVar9 = FUN_fffffffff0016e00(lVar8,uVar5);
    if (((lVar9 == 0) ||
        ((((*(int *)(lVar8 + 0x40) == 0xffff || (*(int *)(lVar6 + 0x1c) == *(int *)(lVar8 + 0x40)))
          && ((*(int *)(lVar8 + 0x44) == 0xffff ||
              (*(int *)(lVar6 + 0x1c) == *(int *)(lVar8 + 0x44))))) &&
         (((*(int *)(lVar8 + 0x48) == 0xffff || (*(int *)(lVar6 + 0x1c) == *(int *)(lVar8 + 0x48)))
          && ((*(int *)(lVar8 + 0x4c) == 0xffff ||
              (*(int *)(lVar6 + 0x1c) == *(int *)(lVar8 + 0x4c))))))))) ||
       (((((*(int *)(lVar8 + 0x50) == 0 && (*(int *)(lVar8 + 0x58) == 0)) &&
          (*(int *)(lVar8 + 0x5c) == 0)) && (*(int *)(lVar8 + 0x54) == 0)) ||
        (lVar9 = FUN_fffffffff0017bc8(lVar8), lVar9 != 0)))) {
      FUN_fffffffff00188d8(lVar8,0,lVar12,1);
      FUN_fffffffff00188d8(lVar8,2,lVar12,1);
      FUN_fffffffff00188d8(lVar8,1,lVar12,1);
      *(uint *)(lVar8 + 0x90) = *(uint *)(lVar8 + 0x90) | 8;
      lVar9 = *(long *)(lVar6 + 0x28);
      if (*(long *)(lVar8 + 0x24) != lVar9) {
        *(int *)(lVar8 + 0x24) = (int)lVar9;
        *(int *)(lVar8 + 0x28) = (int)((ulong)lVar9 >> 0x20);
        uVar5 = *(undefined8 *)(lVar6 + 0x30);
        *(int *)(lVar8 + 0x2c) = (int)uVar5;
        *(int *)(lVar8 + 0x30) = (int)((ulong)uVar5 >> 0x20);
        uVar5 = *(undefined8 *)(lVar6 + 0x38);
        *(int *)(lVar8 + 0x34) = (int)uVar5;
        *(int *)(lVar8 + 0x38) = (int)((ulong)uVar5 >> 0x20);
      }
      FUN_fffffffff001cd2c();
      FUN_fffffffff001861c(lVar12,lVar8);
      FUN_fffffffff0018524(lVar12,0,1,(long)*(int *)(lVar8 + 0x98));
      FUN_fffffffff0018bf8(lVar12,0,0,0);
      FUN_fffffffff0018730(lVar12,(long)*(int *)(lVar8 + 0x20),0);
      uVar10 = *(uint *)(lVar6 + 0x14);
      if ((uVar10 & 8) != 0) {
        local_5b8[0] = 0;
        FUN_fffffffff001d358(*(int *)(g_3ab40 + 0x31e0) + 0x9e5,local_5b8,lVar12);
        local_5b8[0] = local_5b8[0] | 1;
        FUN_fffffffff001d074(*(int *)(g_3ab40 + 0x31e0) + 0x9e5,lVar12);
        local_5a0[0] = 0;
        FUN_fffffffff001d358(*(int *)(g_3ab40 + 0x31dc) + 0x10a0,local_5a0,lVar12);
        local_5a0[0] = local_5a0[0] | 0x8000000;
        FUN_fffffffff001d074
                  (*(int *)(g_3ab40 + 0x31dc) + 0x10a0,(long)(int)local_5a0[0],lVar12)
        ;
        uVar10 = *(uint *)(lVar6 + 0x14);
      }
      if ((uVar10 & 1) != 0) {
        uVar1 = *(undefined4 *)(lVar6 + 0x40);
        uVar2 = *(undefined4 *)(lVar6 + 0x44);
        uVar3 = *(undefined4 *)(lVar6 + 0x48);
        uVar4 = *(undefined4 *)(lVar6 + 0x4c);
        *(undefined4 *)(lVar8 + 0x70) = *(undefined4 *)(lVar6 + 0x50);
        *(undefined4 *)(lVar8 + 0x60) = uVar1;
        *(undefined4 *)(lVar8 + 100) = uVar2;
        *(undefined4 *)(lVar8 + 0x6c) = uVar3;
        *(undefined4 *)(lVar8 + 0x68) = uVar4;
        if (*(int *)(lVar8 + 0x40) != 0xffff) {
          FUN_fffffffff00189b8(local_5a0,lVar8,1);
          FUN_fffffffff0018a3c(local_5a0);
        }
      }
      FUN_fffffffff001cdd0();
      iVar7 = 0xd0000;
    }
    else {
      iVar7 = 0xd0004;
      lVar11 = 0;
    }
  }
  else if (uVar10 == 6) {
    FUN_fffffffff001ec50(local_5a0,0,0x54c);
    uStack_514 = *(undefined4 *)(lVar6 + 100);
    uStack_560 = *(undefined4 *)(lVar6 + 0x1c);
    uStack_57c = (undefined4)*(undefined8 *)(lVar6 + 0x28);
    uStack_578 = (undefined4)((ulong)*(undefined8 *)(lVar6 + 0x28) >> 0x20);
    uStack_540 = *(undefined4 *)(lVar6 + 0x40);
    uStack_574 = (undefined4)*(undefined8 *)(lVar6 + 0x30);
    uStack_570 = (undefined4)((ulong)*(undefined8 *)(lVar6 + 0x30) >> 0x20);
    uStack_538 = *(undefined4 *)(lVar6 + 0x4c);
    uStack_530 = *(undefined4 *)(lVar6 + 0x50);
    uStack_534 = *(undefined4 *)(lVar6 + 0x48);
    uStack_53c = *(undefined4 *)(lVar6 + 0x44);
    uStack_56c = (undefined4)*(undefined8 *)(lVar6 + 0x38);
    uStack_568 = (undefined4)((ulong)*(undefined8 *)(lVar6 + 0x38) >> 0x20);
    FUN_fffffffff001cd2c();
    FUN_fffffffff001861c((long)*(int *)(lVar6 + 0x1c),local_5a0);
    FUN_fffffffff0018524
              ((long)*(int *)(lVar6 + 0x1c),(long)*(int *)(lVar6 + 0x68),1,
               (long)*(int *)(lVar6 + 0x74));
    FUN_fffffffff0018bf8((long)*(int *)(lVar6 + 0x1c),0,0,0);
    uVar10 = *(uint *)(lVar6 + 0x14);
    if ((uVar10 & 8) != 0) {
      local_5c0 = 0;
      FUN_fffffffff001d358
                (*(int *)(g_3ab40 + 0x31e0) + 0x9e5,&local_5c0,
                 (long)*(int *)(lVar6 + 0x1c));
      local_5c0 = local_5c0 | 1;
      FUN_fffffffff001d074
                (*(int *)(g_3ab40 + 0x31e0) + 0x9e5,(long)(int)local_5c0,
                 (long)*(int *)(lVar6 + 0x1c));
      local_5b8[0] = 0;
      FUN_fffffffff001d358
                (*(int *)(g_3ab40 + 0x31dc) + 0x10a0,local_5b8,
                 (long)*(int *)(lVar6 + 0x1c));
      local_5b8[0] = local_5b8[0] | 0x8000000;
      FUN_fffffffff001d074
                (*(int *)(g_3ab40 + 0x31dc) + 0x10a0,(long)(int)local_5b8[0],
                 (long)*(int *)(lVar6 + 0x1c));
      uVar10 = *(uint *)(lVar6 + 0x14);
    }
    if ((uVar10 & 1) != 0) {
      FUN_fffffffff00189b8(local_5b8,local_5a0,1);
      FUN_fffffffff0018a3c(local_5b8);
    }
    FUN_fffffffff001cdd0();
    iVar7 = 0xd0000;
    lVar11 = 1;
  }
  else {
    iVar7 = 0xd0006;
    lVar11 = 0;
  }
LAB_fffffffff0012b10:
  FUN_fffffffff000dcbc(*(undefined8 *)(lVar6 + 4),*(undefined8 *)(lVar6 + 0xc),0);
  *(int *)(g_3ab40 + 0x3120) = iVar7;
  return lVar11;
}


/* ---- sub_13384 @ fffffffff0013384 size=8 ---- */

undefined8 sub_13384(void)

{
  return 0;
}


/* ---- FUN_fffffffff001338c @ fffffffff001338c size=160 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_fffffffff001338c(void)

{
  char cVar1;
  uint uStack_24;
  
  FUN_fffffffff001d0f8((long)(*(int *)(g_3ab40 + 0x31dc) + 0xfe9),&uStack_24);
  cVar1 = '\x03';
  if ((uStack_24 & 0xc00) != 0xc00) {
    FUN_fffffffff001d0f8((long)(*(int *)(g_3ab40 + 0x31e0) + 0x5b92),&uStack_24);
    cVar1 = ((uStack_24 & 0xc00) != 0xc00) + '\x01';
  }
  return cVar1;
}


/* ---- sub_1342c @ fffffffff001342c size=52 ---- */

bool sub_1342c(long param_1,long param_2)

{
  if (param_1 == 2) {
    return param_2 == 1;
  }
  if (param_1 != 1) {
    return false;
  }
  return param_2 == 2;
}


/* ---- FUN_fffffffff0013460 @ fffffffff0013460 size=624 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff0013460(void)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 uStack_34;
  
  lVar1 = g_3ab40 + (ulong)*(uint *)(g_3ab40 + 0x31a8) * 0x100 + 8;
  lVar6 = 0;
  if ((*(uint *)(lVar1 + 0x14) & 1) != 0) {
    lVar6 = FUN_fffffffff000bd84();
    uVar3 = FUN_fffffffff001338c();
    FUN_fffffffff000dcf8(CONCAT44(uStack_34,((uVar3 & 3) << 4 | 0x1000) << 0x10));
  }
  lVar4 = FUN_fffffffff001338c();
  if (lVar4 == 2) {
    lVar5 = 1;
    if (*(int *)(lVar1 + 4) != 1) goto LAB_fffffffff00134c0;
    lVar5 = 1;
    lVar4 = *(long *)(g_3ab40 + 0x3240);
    if (lVar4 != 0) goto LAB_fffffffff00135a0;
LAB_fffffffff00136b0:
    FUN_fffffffff000cb2c(1,(long)*(int *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 8));
  }
  else {
    lVar5 = 1;
    if ((lVar4 != 1) || (*(int *)(lVar1 + 4) != 2)) goto LAB_fffffffff00134c0;
    lVar4 = *(long *)(g_3ab40 + 0x3240);
    if (lVar4 != 0) {
LAB_fffffffff00135a0:
      do {
        lVar5 = FUN_fffffffff0017bc8(lVar4);
        if (lVar5 == 0) goto LAB_fffffffff00134c0;
        lVar4 = *(long *)(lVar4 + 8);
      } while (lVar4 != 0);
      if (*(int *)(lVar1 + 4) == 1) goto LAB_fffffffff00136b0;
    }
    FUN_fffffffff000cb2c(0,(long)*(int *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 8));
  }
LAB_fffffffff00134c0:
  FUN_fffffffff000dcbc(*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20),0);
  if ((*(uint *)(lVar1 + 0x14) & 1) == 0) {
    return lVar5;
  }
  lVar4 = FUN_fffffffff000bd84();
  uVar2 = FUN_fffffffff000bd3c(lVar4 - lVar6);
  lVar6 = FUN_fffffffff001338c();
  FUN_fffffffff000dcf8
            (CONCAT44(uStack_34,
                      ((uint)lVar6 & 3) << 0x14 | (uint)uVar2 << 4 | 0x10000000 |
                      (uint)(*(int *)(lVar1 + 4) != lVar6) << 0x16) | 1);
  return lVar5;
}


/* ---- sub_136d0 @ fffffffff00136d0 size=120 ---- */

void sub_136d0(uint param_1,uint param_2,uint param_3,long param_4)

{
  undefined8 local_10;
  undefined4 uStack_4;
  
  FUN_fffffffff000dcf8
            (local_10 & 0xfffc0000 | 0x4000000000000,
             CONCAT44(uStack_4,(param_2 & 0xffff) << 4 | param_1 & 0xf | 0x10000000 |
                               (param_3 & 3) << 0x14 | (uint)(param_4 != 0) << 0x16));
  return;
}


/* ---- FUN_fffffffff0013748 @ fffffffff0013748 size=996 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0013748(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 auStack_48 [2];
  
  lVar5 = g_3ab40;
  lVar3 = param_1[1];
  lVar2 = *param_1;
  if (((ulong)(long)*(int *)(g_3ab40 + 0x3d28) >> 0x10 & 1) != 0) {
    if (*(uint *)(param_1 + 2) < 0x100) {
      lVar2 = g_3ab40 + (ulong)*(uint *)(param_1 + 2) * 0x110 + 0x190bc;
    }
    if (*(uint *)((long)param_1 + 0x14) < 0x100) {
      lVar3 = g_3ab40 + (ulong)*(uint *)((long)param_1 + 0x14) * 0x110 + 0x190bc;
    }
  }
  if (*(long *)(lVar2 + 0xfc) == 0) {
    *(int *)(lVar2 + 0xfc) = (int)lVar3;
    *(int *)(lVar2 + 0x100) = (int)((ulong)lVar3 >> 0x20);
  }
  if ((*(uint *)(lVar2 + 0x10) & 0x40) == 0) {
    *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) | 0x40;
    if (*(int *)(lVar2 + 0x30) == 0) {
      if (*(int *)(lVar3 + 0x30) == 1) {
        iVar4 = *(int *)(lVar5 + 0x3da4);
        if (iVar4 == 0) {
          auStack_48[0] = 0;
          uVar6 = 0;
          do {
            lVar5 = lVar5 + (uVar6 & 0xffffffff) * 0x18;
            uVar1 = *(uint *)(lVar5 + 0x21dc);
            uVar6 = (ulong)((int)uVar6 + 1);
            if (((uVar1 & 1) != 0) && ((uVar1 >> 1 & 1) != 0)) {
              FUN_fffffffff0008424(*(undefined8 *)(*(long *)(lVar5 + 0x21e4) + 0x6c),auStack_48,0);
            }
            lVar5 = g_3ab40;
          } while (uVar6 != 8);
          iVar4 = *(int *)(g_3ab40 + 0x3da4);
        }
        *(int *)(lVar5 + 0x3da4) = iVar4 + 1;
      }
    }
    else if (*(int *)(lVar2 + 0x30) == 1) {
      if (*(int *)(lVar3 + 0x30) == 1) {
        iVar4 = *(int *)(lVar5 + 0x3da8);
        if (iVar4 == 0) {
          auStack_48[0] = 0;
          if ((*(uint *)(lVar5 + 0x214c) & 3) == 3) {
            FUN_fffffffff0008424(*(undefined8 *)(*(long *)(lVar5 + 0x2154) + 0x6c),auStack_48,0);
            lVar5 = g_3ab40;
          }
          if ((*(uint *)(lVar5 + 0x22cc) & 3) == 3) {
            FUN_fffffffff0008424(*(undefined8 *)(*(long *)(lVar5 + 0x22d4) + 0x6c),auStack_48,0);
            lVar5 = g_3ab40;
          }
          iVar4 = *(int *)(lVar5 + 0x3da8);
        }
        *(int *)(lVar5 + 0x3da8) = iVar4 + 1;
      }
      else if (*(int *)(lVar3 + 0x30) == 2) {
        iVar4 = *(int *)(lVar5 + 0x3dac);
        if (iVar4 == 0) {
          auStack_48[0] = 0;
          if ((*(uint *)(lVar5 + 0x238c) & 3) == 3) {
            FUN_fffffffff0008424(*(undefined8 *)(*(long *)(lVar5 + 0x2394) + 0x6c),auStack_48,0);
            iVar4 = *(int *)(g_3ab40 + 0x3dac);
            lVar5 = g_3ab40;
          }
        }
        *(int *)(lVar5 + 0x3dac) = iVar4 + 1;
      }
    }
  }
  uVar1 = *(uint *)(lVar3 + 0x10);
  if ((uVar1 & 0x80) == 0) {
    *(uint *)(lVar3 + 0x10) = uVar1 | 0x80;
    *(int *)(lVar3 + 0x104) = (int)lVar2;
    *(int *)(lVar3 + 0x108) = (int)((ulong)lVar2 >> 0x20);
    if ((uVar1 & 2) != 0) {
      auStack_48[0] = 0;
      FUN_fffffffff0008424(lVar3,auStack_48,0);
    }
  }
  if (((((ulong)(long)*(int *)(g_3ab40 + 0x3d28) >> 0x14 & 1) == 0) &&
      (*(int *)(g_3ab40 + 0x3db4) != 0)) &&
     (*(int *)(g_3ab40 + 0x3da4) == 1)) {
    FUN_fffffffff000bd24(10000);
    FUN_fffffffff000b144();
    return;
  }
  return;
}


/* ---- FUN_fffffffff0013b2c @ fffffffff0013b2c size=160 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff0013b2c(void)

{
  long lVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar1 = g_3ab40 + (ulong)*(uint *)(g_3ab40 + 0x31a8) * 0x100 + 8;
  local_30 = *(undefined4 *)(lVar1 + 0x14);
  uStack_2c = *(undefined4 *)(lVar1 + 0x18);
  uStack_28 = *(undefined4 *)(lVar1 + 0x1c);
  uStack_24 = *(undefined4 *)(lVar1 + 0x20);
  uStack_20 = *(undefined4 *)(lVar1 + 0x24);
  uStack_1c = *(undefined4 *)(lVar1 + 0x28);
  FUN_fffffffff0013748(&local_30);
  FUN_fffffffff000dcbc(*(undefined8 *)(lVar1 + 4),*(undefined8 *)(lVar1 + 0xc),0);
  return 1;
}


/* ---- FUN_fffffffff0013bcc @ fffffffff0013bcc size=100 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff0013bcc(ulong param_1,long param_2)

{
  if ((((ulong)(long)*(int *)(g_3ab40 + 0x3d28) >> 0x10 & 1) != 0) && (param_1 < 0x40)
     ) {
    return g_3ab40 + (param_1 & 0xffffffff) * 0x54c + 0x3dbc;
  }
  return param_2;
}


/* ---- sub_13c30 @ fffffffff0013c30 size=88 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long sub_13c30(ulong param_1,long param_2)

{
  if ((((ulong)(long)*(int *)(g_3ab40 + 0x3d28) >> 0x10 & 1) != 0) &&
     (param_1 < 0x100)) {
    return g_3ab40 + (param_1 & 0xffffffff) * 0x110 + 0x190bc;
  }
  return param_2;
}


/* ---- FUN_fffffffff0013c88 @ fffffffff0013c88 size=208 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0013c88(void)

{
  uint auStack_34 [3];
  
  auStack_34[0] = 0;
  FUN_fffffffff001cdf4((long)(*(int *)(g_3ab40 + 0x31dc) + 0x1e78),1);
  FUN_fffffffff001d0f8((long)(*(int *)(g_3ab40 + 0x31dc) + 0x1e78),auStack_34);
  while ((auStack_34[0] & 1) == 0) {
    FUN_fffffffff000de14(50000);
    FUN_fffffffff001cdf4((long)(*(int *)(g_3ab40 + 0x31dc) + 0x1e78),1);
    FUN_fffffffff001d0f8((long)(*(int *)(g_3ab40 + 0x31dc) + 0x1e78),auStack_34);
  }
  return;
}


/* ---- FUN_fffffffff0013d58 @ fffffffff0013d58 size=684 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff0013d58(long param_1,uint *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  int local_74 [3];
  
  uVar5 = 0;
  if ((param_1 != 0) && (*(long *)(param_1 + 0x34) != 0)) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x34) + 0x10);
    if (lVar6 != 0) {
      if ((*(int *)(param_1 + 0x28) == 3) &&
         ((*(uint *)(g_3ab40 + 0x3d28) & 0x80) != 0)) {
        iVar1 = *(int *)(lVar6 + 0x44);
      }
      else {
        iVar1 = *(int *)(lVar6 + 0x40);
      }
      lVar6 = 0;
      while( true ) {
        if ((*(uint *)(g_3ab40 + (lVar6 + 0x38) * 0x20 + 0x201c) & 1) != 0) {
          uVar4 = 0;
          do {
            uVar2 = *(uint *)(g_3ab40 + (uVar4 & 0xffffffff) * 0x18 + lVar6 * 0xc0 +
                             0x275c);
            iVar3 = (int)uVar4;
            if (((uVar2 & 1) != 0) && (((long)(int)(uVar2 >> 3) & 0xfU) == (long)iVar1)) {
              FUN_fffffffff001d1f8
                        ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x1e8d),local_74);
              FUN_fffffffff001cf10
                        ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x1e8d),
                         (long)local_74[0] & 0xffffffffbfffffff,
                         (long)(int)((uint)(lVar6 << 6) | iVar3 << 8));
              *param_2 = *param_2 | 1 << ((long)((int)(lVar6 << 3) + iVar3) & 0x1fU);
            }
            uVar4 = (ulong)(iVar3 + 1);
          } while (uVar4 != 8);
        }
        if (lVar6 != 0) break;
        lVar6 = 1;
      }
      uVar2 = *param_2 << 0x10 | 1 << ((long)iVar1 & 0x1fU);
      if (param_3 == 0) {
        FUN_fffffffff0013c88();
        FUN_fffffffff001cdf4
                  ((long)(*(int *)(g_3ab40 + 0x31e0) + 0x2200),0xffffffff80000000);
        FUN_fffffffff001cdf4
                  ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x1e53),(long)(int)uVar2);
        FUN_fffffffff001cdf4((long)(*(int *)(g_3ab40 + 0x31dc) + 0x1e78),0);
        uVar5 = 1;
      }
      else {
        uVar5 = 1;
        *(uint *)(g_3ab40 + 0x323c) =
             *(uint *)(g_3ab40 + 0x323c) | uVar2;
      }
    }
    return uVar5;
  }
  return uVar5;
}


/* ---- FUN_fffffffff0014004 @ fffffffff0014004 size=808 ---- */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff0014004(undefined8 param_1)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  int aiStack_58 [2];
  uint uStack_50;
  int iStack_4c;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uStack_50 = 0;
  aiStack_58[0] = 0;
  iStack_4c = 0;
  uStack_48 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  lVar4 = FUN_fffffffff000a2ec(&uStack_50);
  if (lVar4 != 0) {
    uVar1 = *(uint *)(g_3ab40 + (ulong)uStack_50 * 0xac + 0x330c);
    if ((uVar1 & 7) == 1) {
      uStack_48 = CONCAT44(uVar1,(undefined4)uStack_48);
      lStack_40 = g_3ab40 + (ulong)uStack_50 * 0xac + 0x3268;
      lVar4 = 0;
      bVar2 = true;
      uVar6 = 0;
      goto joined_r0xfffffffff00140c0;
    }
  }
  lVar4 = FUN_fffffffff0009730(param_1,aiStack_58,&uStack_48);
  if (lVar4 == 0) {
    return 0;
  }
  bVar2 = false;
  uVar6 = *(uint *)(lVar4 + 0x54) >> 4 & 1;
  uVar1 = uStack_48._4_4_;
joined_r0xfffffffff00140c0:
  uVar1 = uVar1 & 7;
  if (uVar1 == 1) {
    lVar3 = (long)(int)param_1;
    FUN_fffffffff000abbc(3,lVar3,1,uVar6,0,0);
    lVar5 = FUN_fffffffff000cc70(&uStack_48);
    if ((lVar5 == 0) ||
       (lVar5 = FUN_fffffffff000b8e0
                          (&uStack_48,2000000,0,*(uint *)(g_3ab40 + 0x3d28) >> 0xe & 1
                          ), lVar5 == 0)) {
      FUN_fffffffff000abbc(3,lVar3,1,uVar6,1,0);
      return lVar5;
    }
    FUN_fffffffff000abbc(3,lVar3,1,uVar6,1,1);
  }
  else if (uVar1 == 2) {
    lVar3 = FUN_fffffffff001a86c(&uStack_48);
    if (lVar3 == 0) {
      return 0;
    }
  }
  else {
    if (uVar1 != 0) {
      return 0;
    }
    lVar3 = (long)(int)param_1;
    FUN_fffffffff000abbc(3,lVar3,0,uVar6,0);
    lVar5 = FUN_fffffffff0013d58((long)aiStack_58[0],lVar4,&iStack_4c,0);
    if ((lVar5 == 0) ||
       (lVar5 = FUN_fffffffff000b8e0
                          (&uStack_48,2000000,0,*(uint *)(g_3ab40 + 0x3d28) >> 0xe & 1
                          ), lVar5 == 0)) {
      FUN_fffffffff000abbc(3,lVar3,0,uVar6,1,0);
      return lVar5;
    }
    FUN_fffffffff000abbc(3,lVar3,0,uVar6,1,1);
  }
  if (bVar2) {
    lVar4 = g_3ab40 + (ulong)uStack_50 * 0xac;
    uVar1 = *(uint *)(lVar4 + 0x330c);
    lVar3 = FUN_fffffffff000d0c4
                      (uVar1 >> 3 & 0xf,uVar1 >> 7 & 0xff,(long)*(int *)(lVar4 + 0x3274),
                       *(undefined8 *)(lVar4 + 0x3278),*(undefined8 *)(lVar4 + 0x3280),uVar1 & 7);
  }
  else {
    lVar3 = 1;
    FUN_fffffffff00081b0((long)aiStack_58[0],lVar4,(long)iStack_4c);
  }
  return lVar3;
}


/* ---- FUN_fffffffff001432c @ fffffffff001432c size=660 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff001432c(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iStack_104;
  undefined8 uStack_100;
  undefined1 *puStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [16];
  undefined8 uStack_d8;
  
  iVar3 = 0x10;
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar3 = 0x18;
  }
  uVar1 = 1 << ((long)*(int *)(param_1 + 0x28) & 0x1fU) |
          1 << ((long)(*(int *)(param_1 + 0x24) + iVar3) & 0x1fU);
  if ((long)*(int *)(param_1 + 0x48) != 0) {
    iVar3 = 0x18;
    if (*(int *)(param_1 + 0x40) == 0) {
      iVar3 = 0x10;
    }
    uVar1 = 1 << ((long)*(int *)(param_1 + 0x48) & 0x1fU) |
            1 << ((long)(*(int *)(param_1 + 0x44) + iVar3) & 0x1fU) | uVar1;
  }
  FUN_fffffffff0013c88();
  FUN_fffffffff001cdf4((long)(*(int *)(g_3ab40 + 0x31e0) + 0x2200),0xffffffff80000000)
  ;
  FUN_fffffffff001cdf4((long)(*(int *)(g_3ab40 + 0x31dc) + 0x1e53),(long)(int)uVar1);
  FUN_fffffffff001cdf4((long)(*(int *)(g_3ab40 + 0x31dc) + 0x1e78),0);
  uStack_100 = 0;
  puStack_f8 = (undefined1 *)0x0;
  uStack_f0 = 0;
  FUN_fffffffff001ec50(auStack_e8,0,0xa4);
  uStack_100._0_6_ =
       CONCAT24((ushort)*(byte *)(param_1 + 0x24) << 7 |
                (ushort)((*(uint *)(param_1 + 0x20) & 0xf) << 3),(undefined4)uStack_100);
  iStack_104 = 0;
  FUN_fffffffff000b4f8(&uStack_100,&iStack_104);
  uStack_d8 = FUN_fffffffff000d748((long)iStack_104);
  puStack_f8 = auStack_e8;
  lVar2 = FUN_fffffffff000b8e0
                    (&uStack_100,2000000,0,*(uint *)(g_3ab40 + 0x3d28) >> 0xe & 1);
  if (lVar2 != 0) {
    if (*(int *)(param_1 + 0x48) != 0) {
      uStack_100._0_6_ =
           CONCAT24((ushort)*(byte *)(param_1 + 0x44) << 7 |
                    (ushort)((*(uint *)(param_1 + 0x40) & 0xf) << 3) |
                    (ushort)((ulong)uStack_100 >> 0x20) & 0x8000,(undefined4)uStack_100);
      FUN_fffffffff000b8e0
                (&uStack_100,2000000,0,*(uint *)(g_3ab40 + 0x3d28) >> 0xe & 1);
    }
    lVar2 = FUN_fffffffff000d0c4
                      ((long)*(int *)(param_1 + 0x20),(long)*(int *)(param_1 + 0x24),
                       (long)*(int *)(param_1 + 0x34),*(undefined8 *)(param_1 + 0x2c),
                       *(undefined8 *)(param_1 + 0x38),0);
    if (lVar2 != 0) {
      if (*(int *)(param_1 + 0x48) == 0) {
        return lVar2;
      }
      lVar2 = FUN_fffffffff000d0c4
                        ((long)*(int *)(param_1 + 0x40),(long)*(int *)(param_1 + 0x44),
                         (long)*(int *)(param_1 + 0x54),*(undefined8 *)(param_1 + 0x4c),
                         *(undefined8 *)(param_1 + 0x58),0);
      return lVar2;
    }
  }
  return 0;
}


/* ---- FUN_fffffffff00145c0 @ fffffffff00145c0 size=908 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_fffffffff00145c0(undefined8 param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  undefined4 uVar8;
  ulong *puVar9;
  int aiStack_118 [2];
  undefined1 auStack_110 [4];
  int iStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong local_f0 [17];
  
  puVar7 = local_f0;
  puVar9 = local_f0 + 4;
  aiStack_118[0] = 0;
  iStack_10c = 0;
  local_f0[4] = 0;
  local_f0[5] = 0;
  local_f0[6] = 0;
  local_f0[7] = 0;
  local_f0[8] = 0;
  local_f0[9] = 0;
  local_f0[10] = 0;
  local_f0[0xb] = 0;
  local_f0[0xc] = 0;
  local_f0[0xd] = 0;
  local_f0[0xe] = 0;
  local_f0[0xf] = 0;
  local_f0[0] = 0xffffffff;
  local_f0[1] = 0xffffffff;
  local_f0[2] = 0xffffffff;
  local_f0[3] = 0xffffffff;
  FUN_fffffffff001eb28(param_1,0x20);
  bVar1 = false;
  uVar8 = 1;
  puVar2 = puVar7;
  puVar4 = puVar9;
  do {
    if ((*puVar2 != 0xffffffff) && (lVar5 = FUN_fffffffff0009730(aiStack_118,puVar4), lVar5 != 0)) {
      if (*(int *)(lVar5 + 0x30) == 0) {
        FUN_fffffffff000abbc(3,(long)(int)*puVar2,0,*(uint *)(lVar5 + 0x54) >> 4 & 1,0,uVar8);
        FUN_fffffffff0013d58((long)aiStack_118[0],lVar5,&iStack_10c,1);
        FUN_fffffffff000abbc(3,(long)(int)*puVar2,0,*(uint *)(lVar5 + 0x54) >> 4 & 1,1,uVar8);
        bVar1 = true;
      }
      else if (*(int *)(lVar5 + 0x30) == 1) {
        FUN_fffffffff000abbc(3,(long)(int)*puVar2,1,*(uint *)(lVar5 + 0x54) >> 4 & 1,0,uVar8);
        lVar6 = FUN_fffffffff000cc70(puVar4);
        if (lVar6 != 0) {
          lVar6 = FUN_fffffffff000b8e0
                            (puVar4,2000000,0,*(uint *)(g_3ab40 + 0x3d28) >> 0xe & 1);
          if (lVar6 == 0) {
            uVar8 = 0;
          }
          else {
            FUN_fffffffff00081b0((long)aiStack_118[0],lVar5,(long)iStack_10c);
          }
        }
        FUN_fffffffff000abbc(3,(long)(int)*puVar2,1,*(uint *)(lVar5 + 0x54) >> 4 & 1,1,uVar8);
      }
    }
    puVar4 = puVar4 + 3;
    puVar2 = puVar2 + 1;
  } while (puVar2 != puVar9);
  if (bVar1) {
    FUN_fffffffff0013c88();
    FUN_fffffffff001cdf4
              ((long)(*(int *)(g_3ab40 + 0x31e0) + 0x2200),0xffffffff80000000);
    FUN_fffffffff001cdf4
              ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x1e53),
               (long)*(int *)(g_3ab40 + 0x323c));
    uVar3 = 0;
    FUN_fffffffff001cdf4((long)(*(int *)(g_3ab40 + 0x31dc) + 0x1e78),0);
    *(undefined4 *)(g_3ab40 + 0x323c) = 0;
    do {
      if (*puVar7 != 0xffffffff) {
        uStack_108 = 0;
        uStack_100 = 0;
        uStack_f8 = 0;
        lVar5 = FUN_fffffffff0009730(auStack_110,&uStack_108);
        if ((((local_f0[(uVar3 & 0xffffffff) * 3 + 4] & 1) != 0) && (lVar5 != 0)) &&
           (*(int *)(lVar5 + 0x30) == 0)) {
          lVar6 = FUN_fffffffff000b8e0
                            (puVar9,2000000,0,*(uint *)(g_3ab40 + 0x3d28) >> 0xe & 1);
          if (lVar6 == 0) {
            uVar8 = 0;
          }
          else {
            FUN_fffffffff00081b0((long)aiStack_118[0],lVar5,(long)iStack_10c);
          }
        }
      }
      uVar3 = (ulong)((int)uVar3 + 1);
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 3;
    } while (uVar3 != 4);
  }
  return uVar8;
}


/* ---- FUN_fffffffff001494c @ fffffffff001494c size=288 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff001494c(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x1c);
  uStack_60 = 0xffffffff;
  uStack_58 = 0xffffffff;
  uStack_50 = 0xffffffff;
  uStack_48 = 0xffffffff;
  uStack_64 = 0;
  if (iVar1 == 1) {
    if (1 < *(int *)(g_3ab40 + 0x2a120) - 2U) {
      FUN_fffffffff00105ac(param_2,&uStack_60,&uStack_64,param_1);
    }
  }
  else {
    FUN_fffffffff00105ac(param_2,&uStack_60,&uStack_64,param_1);
    if (iVar1 == 2) goto joined_r0xfffffffff0014a44;
  }
  FUN_fffffffff0010684(param_2,&uStack_60,&uStack_64,param_1);
joined_r0xfffffffff0014a44:
  uVar3 = 1;
  if (param_2 == 0) {
    FUN_fffffffff0010494(&uStack_60,&uStack_64,uVar2);
    uVar3 = FUN_fffffffff00145c0(&uStack_60);
  }
  return uVar3;
}


/* ---- FUN_fffffffff0014a6c @ fffffffff0014a6c size=376 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff0014a6c(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = g_3ab40 + (ulong)*(uint *)(g_3ab40 + 0x31a8) * 0x100 + 8;
  uVar1 = *(uint *)(lVar2 + 4);
  if ((uVar1 & 2) == 0) {
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 1) == 0) {
        if ((uVar1 & 8) == 0) {
          lVar3 = *(long *)(lVar2 + 8);
          if ((((ulong)(long)*(int *)(g_3ab40 + 0x3d28) >> 0x10 & 1) == 0) ||
             (0xff < *(uint *)(lVar2 + 0x7c))) {
            if (lVar3 == 0) {
              return 0;
            }
          }
          else {
            lVar3 = g_3ab40 + (ulong)*(uint *)(lVar2 + 0x7c) * 0x110 + 0x190bc;
          }
          if (*(int *)(lVar3 + 0x60) == 0) {
            return 0;
          }
          lVar3 = FUN_fffffffff0014004(*(int *)(lVar3 + 0x60));
        }
        else {
          lVar3 = FUN_fffffffff001432c(lVar2);
        }
      }
      else {
        lVar3 = FUN_fffffffff0014004(*(undefined4 *)(lVar2 + 0x10));
      }
    }
    else {
      lVar3 = FUN_fffffffff001494c(lVar2,1);
    }
  }
  else {
    lVar3 = FUN_fffffffff001494c(lVar2,0);
  }
  if (lVar3 == 0) {
    return 0;
  }
  FUN_fffffffff000dcbc(*(undefined8 *)(lVar2 + 0x60),*(undefined8 *)(lVar2 + 0x68),1);
  return lVar3;
}


/* ---- sub_14be4 @ fffffffff0014be4 size=40 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_14be4(void)

{
  FUN_fffffffff001cdf4((long)(*(int *)(g_3ab40 + 0x31dc) + 0x1e78),0);
  return;
}


/* ---- FUN_fffffffff0014c0c @ fffffffff0014c0c size=444 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0014c0c(long param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  lVar2 = g_3ab40;
  uVar3 = *(uint *)(param_1 + 0x1c) & 1;
  *(uint *)(g_3ab40 + 0x3d28) =
       *(uint *)(g_3ab40 + 0x3d28) & 0xfffdffff | uVar3 << 0x11;
  if (((uVar3 != 0) && (lVar6 = *(long *)(param_1 + 0x20), lVar6 != 0)) &&
     (uVar3 = *(uint *)(param_1 + 0x28), 0xc < uVar3)) {
    *(int *)(lVar2 + 0x2a0c8) = (int)lVar6;
    *(int *)(lVar2 + 0x2a0cc) = (int)((ulong)lVar6 >> 0x20);
    FUN_fffffffff001ec50(0,uVar3);
    lVar6 = (ulong)*(uint *)(param_1 + 0x28) - 8;
    uVar3 = FUN_fffffffff001ed98(lVar6,0x304);
    lVar2 = g_3ab40;
    uVar7 = (ulong)((long)(int)(uVar3 + 1) << 0x20) >> 0x1e;
    *(uint *)(g_3ab40 + 0x2a0d0) = uVar3 + 1;
    iVar4 = FUN_fffffffff001ed98(lVar6 - uVar7,0x18);
    if ((long)iVar4 == 0) {
      *(uint *)(lVar2 + 0x3d28) = *(uint *)(lVar2 + 0x3d28) & 0xfffdffff;
    }
    else {
      plVar1 = *(long **)(lVar2 + 0x2a0c8);
      uVar5 = (long)iVar4 & 0x1f;
      if (uVar5 == 0) {
        *(uint *)(lVar2 + 0x2a0d0) = uVar3;
        uVar7 = (ulong)uVar3 << 2;
      }
      else {
        *(int *)((long)plVar1 + ((ulong)((long)(int)uVar3 << 0x20) >> 0x1e) + 8) = -1 << uVar5;
      }
      *plVar1 = *(long *)(param_1 + 0x20) + 8 + uVar7;
    }
  }
  return;
}


/* ---- FUN_fffffffff0014dc8 @ fffffffff0014dc8 size=216 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff0014dc8(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = g_3ab40 + (ulong)*(uint *)(g_3ab40 + 0x31a8) * 0x100 + 8;
  FUN_fffffffff0014c0c(lVar4);
  lVar3 = g_3ab40;
  uVar2 = *(undefined8 *)(lVar4 + 0x2c);
  *(int *)(g_3ab40 + 0x31d4) = (int)uVar2;
  *(int *)(lVar3 + 0x31d8) = (int)((ulong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)(lVar4 + 0x34);
  uVar1 = *(undefined4 *)(lVar4 + 4);
  *(int *)(lVar3 + 0x2a13c) = (int)uVar2;
  *(int *)(lVar3 + 0x2a140) = (int)((ulong)uVar2 >> 0x20);
  FUN_fffffffff000dcbc(CONCAT44(*(undefined4 *)(lVar4 + 8),uVar1),*(undefined8 *)(lVar4 + 0xc),1);
  return 1;
}


/* ---- FUN_fffffffff0014ea0 @ fffffffff0014ea0 size=268 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0014ea0(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar3 = FUN_fffffffff001c01c
                    (*(long *)(g_3ab40 + 0x2a0c8) + 8,
                     (long)*(int *)(g_3ab40 + 0x2a0d0));
  *(uint *)(param_1 + 0xf0) = uVar3;
  if (uVar3 != 0xffffffff) {
    puVar4 = (undefined4 *)(**(long **)(g_3ab40 + 0x2a0c8) + (ulong)uVar3 * 0x18);
    *puVar4 = *(undefined4 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_2 + 0x24);
    puVar4[1] = *(undefined4 *)(param_2 + 0x24);
    puVar4[2] = (int)((ulong)uVar2 >> 0x20);
    uVar2 = *(undefined8 *)(param_1 + 100);
    uVar1 = *(undefined4 *)(param_1 + 0x60);
    puVar4[3] = *(undefined4 *)(param_1 + 100);
    puVar4[4] = (int)((ulong)uVar2 >> 0x20);
    puVar4[5] = uVar1;
  }
  return;
}


/* ---- FUN_fffffffff0014fac @ fffffffff0014fac size=4148 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff0014fac(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  long lVar10;
  undefined4 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined4 uVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 auStack_78 [2];
  
  lVar10 = g_3ab40 + (ulong)*(uint *)(g_3ab40 + 0x31a8) * 0x100 + 8;
  iVar1 = *(int *)(lVar10 + 0x6c);
  lVar23 = (long)iVar1;
  iVar2 = *(int *)(lVar10 + 0x44);
  lVar22 = (long)iVar2;
  if (((long)*(int *)(lVar10 + 0x90) & 0x100U) != 0) {
    lVar22 = FUN_fffffffff000cf18
                       ((long)*(int *)(lVar10 + 0x48),*(undefined8 *)(lVar10 + 0x4c),
                        *(undefined8 *)(lVar10 + 0x54),lVar23);
    if (lVar22 == 0) {
      return 0;
    }
LAB_fffffffff0015270:
    FUN_fffffffff000dcbc(*(undefined8 *)(lVar10 + 0x94),*(undefined8 *)(lVar10 + 0x9c),0);
    return lVar22;
  }
  if (((ulong)(long)*(int *)(lVar10 + 0x90) >> 0xd & 1) != 0) {
    lVar22 = FUN_fffffffff000d0c4
                       ((long)*(int *)(lVar10 + 0xc0),(long)*(int *)(lVar10 + 0xc4),
                        (long)*(int *)(lVar10 + 0x48),*(undefined8 *)(lVar10 + 0x4c),
                        *(undefined8 *)(lVar10 + 0x54),lVar23);
    if (lVar22 == 0) {
      return 0;
    }
    FUN_fffffffff000a338(lVar10);
    goto LAB_fffffffff0015270;
  }
  lVar12 = *(long *)(lVar10 + 0x28);
  if ((((ulong)(long)*(int *)(g_3ab40 + 0x3d28) >> 0x10 & 1) != 0) &&
     (*(uint *)(lVar10 + 0xb8) < 0x40)) {
    lVar12 = g_3ab40 + (ulong)*(uint *)(lVar10 + 0xb8) * 0x54c + 0x3dbc;
  }
  uStack_90 = *(undefined8 *)(g_3ab40 + 0x3240);
  lVar13 = FUN_fffffffff0016e00(lVar12);
  uVar11 = (undefined4)lVar12;
  uVar24 = (undefined4)((ulong)lVar12 >> 0x20);
  lVar20 = g_3ab40;
  if (lVar13 == 0) {
    if (((ulong)(long)*(int *)(lVar10 + 0x90) >> 0xc & 1) == 0) {
      lVar20 = lVar12;
      do {
        lVar13 = lVar20 + 4;
        FUN_fffffffff001d498(0,lVar20,0);
        lVar20 = lVar13;
      } while (lVar13 != lVar12 + 0x54c);
      FUN_fffffffff001d6c8();
    }
    lVar13 = FUN_fffffffff0016d30(lVar12,&uStack_90);
    lVar20 = g_3ab40;
    *(undefined4 *)(g_3ab40 + 0x3240) = uVar11;
    *(undefined4 *)(lVar20 + 0x3244) = uVar24;
    if (lVar13 == 0) {
      return 0;
    }
  }
  uStack_88 = *(undefined8 *)(lVar20 + lVar23 * 0x1b8 + lVar22 * 0x58 + 0x2be8);
  lVar20 = lVar12 + lVar23 * 0x17c + lVar22 * 0x4c;
  uVar9 = *(uint *)(lVar10 + 0x90);
  *(undefined4 *)(lVar20 + 0xe8) = uVar11;
  *(undefined4 *)(lVar20 + 0xec) = uVar24;
  *(uint *)(lVar12 + 0x90) = *(uint *)(lVar12 + 0x90) & 0xfffffffb | (uVar9 & 1) << 2;
  iVar3 = *(int *)(lVar10 + 0x6c);
  *(undefined4 *)(lVar12 + 0x20) = *(undefined4 *)(lVar10 + 4);
  lVar20 = (long)iVar1;
  lVar13 = (long)iVar2;
  if (iVar3 == 1) {
    uVar15 = *(undefined8 *)(lVar10 + 0x84);
    uVar9 = *(uint *)(lVar10 + 0x90);
    *(int *)(lVar12 + 0x7c) = (int)uVar15;
    *(int *)(lVar12 + 0x80) = (int)((ulong)uVar15 >> 0x20);
    uVar15 = *(undefined8 *)(lVar10 + 0xa4);
    *(int *)(lVar12 + 0x88) = (int)((ulong)uVar15 >> 0x20);
    *(int *)(lVar12 + 0x84) = (int)uVar15;
    if (((ulong)(long)(int)uVar9 >> 0xc & 1) == 0) {
      *(uint *)(lVar12 + 0x90) = *(uint *)(lVar12 + 0x90) & 0xffffffef | uVar9 >> 6 & 0x10;
    }
  }
  uVar4 = *(undefined4 *)(lVar10 + 0x8c);
  *(uint *)(lVar12 + 0x90) =
       *(uint *)(lVar12 + 0x90) & 0xffffffdf |
       ((*(uint *)(lVar10 + 0x90) >> 9 | *(uint *)(lVar12 + 0x90) >> 5) & 1) << 5;
  iVar3 = *(int *)(lVar10 + 0xcc);
  *(undefined4 *)(lVar12 + 0x8c) = uVar4;
  lVar14 = FUN_fffffffff00129d4(lVar12,(long)iVar3);
  if ((((ulong)(long)*(int *)(lVar10 + 0x90) >> 0x14 & 1) != 0) &&
     ((*(uint *)(lVar12 + 0x90) & 0x100) == 0)) {
    lVar17 = 0;
    do {
      lVar21 = g_3ab40 + ((ulong)(lVar17 << 0x20) >> 0x1d);
      lVar17 = (long)((int)lVar17 + 1);
      if (*(long *)(lVar21 + 0x2a0e0) == 0) {
        *(undefined4 *)(lVar21 + 0x2a0e0) = uVar11;
        *(undefined4 *)(lVar21 + 0x2a0e4) = uVar24;
        *(uint *)(lVar12 + 0x90) = *(uint *)(lVar12 + 0x90) | 0x100;
        break;
      }
    } while (lVar17 != 8);
  }
  if (lVar14 == 0) {
    return 0;
  }
  lVar26 = (lVar22 * 0x10 + lVar13 * 3 + lVar23 * 0x40 + lVar20 * 0x1f) * 4;
  lVar25 = lVar12 + lVar26 + 0xd8;
  lVar21 = FUN_fffffffff0016e00(lVar25,uStack_88);
  uVar11 = (undefined4)((ulong)lVar25 >> 0x20);
  lVar17 = g_3ab40;
  if (lVar21 == 0) {
    lVar14 = FUN_fffffffff0016d30(lVar25,&uStack_88);
    lVar17 = g_3ab40;
    lVar21 = g_3ab40 +
             (lVar23 * 0x40 + lVar20 * -9) * 8 + lVar22 * 0x40 + lVar13 * 0x18;
    *(int *)(lVar21 + 0x2be8) = (int)lVar25;
    *(undefined4 *)(lVar21 + 0x2bec) = uVar11;
    *(int *)(lVar21 + 0x2c1c) = *(int *)(lVar21 + 0x2c1c) + 1;
    lVar26 = lVar12 + lVar26;
    lVar21 = *(long *)(lVar26 + 0xe8);
    lVar18 = *(long *)(lVar10 + 8);
    if (*(long *)(lVar21 + 0x24) != lVar18) {
      *(int *)(lVar21 + 0x24) = (int)lVar18;
      *(int *)(lVar21 + 0x28) = (int)((ulong)lVar18 >> 0x20);
      uVar15 = *(undefined8 *)(lVar10 + 0x10);
      lVar21 = *(long *)(lVar26 + 0xe8);
      *(int *)(lVar21 + 0x2c) = (int)uVar15;
      *(int *)(lVar21 + 0x30) = (int)((ulong)uVar15 >> 0x20);
      uVar15 = *(undefined8 *)(lVar10 + 0x18);
      lVar21 = *(long *)(lVar26 + 0xe8);
      *(int *)(lVar21 + 0x34) = (int)uVar15;
      *(int *)(lVar21 + 0x38) = (int)((ulong)uVar15 >> 0x20);
      *(long *)(*(long *)(lVar26 + 0xe8) + 0x10) = *(long *)(lVar10 + 0x20) * 10;
      *(undefined4 *)(*(long *)(lVar26 + 0xe8) + 0x40) = 0xffff;
      *(undefined4 *)(*(long *)(lVar26 + 0xe8) + 0x44) = 0xffff;
      *(undefined4 *)(*(long *)(lVar26 + 0xe8) + 0x48) = 0xffff;
      *(undefined4 *)(*(long *)(lVar26 + 0xe8) + 0x4c) = 0xffff;
    }
    if ((*(uint *)(lVar10 + 0x90) & 0x20) != 0) {
      *(uint *)(lVar12 + 0x90) = *(uint *)(lVar12 + 0x90) | 2;
      uVar24 = *(undefined4 *)(lVar10 + 0x74);
      uVar4 = *(undefined4 *)(lVar10 + 0x78);
      uVar7 = *(undefined4 *)(lVar10 + 0x7c);
      uVar8 = *(undefined4 *)(lVar10 + 0x80);
      *(undefined4 *)(lVar12 + 0x60) = *(undefined4 *)(lVar10 + 0x70);
      *(undefined4 *)(lVar12 + 100) = uVar24;
      *(undefined4 *)(lVar12 + 0x6c) = uVar4;
      *(undefined4 *)(lVar12 + 0x68) = uVar7;
      *(undefined4 *)(lVar12 + 0x70) = uVar8;
    }
    if (lVar14 == 0) {
      return 0;
    }
  }
  lVar21 = *(long *)(lVar10 + 0x38);
  if ((((ulong)(long)*(int *)(lVar17 + 0x3d28) >> 0x10 & 1) != 0) &&
     (*(uint *)(lVar10 + 0xbc) < 0x100)) {
    lVar21 = lVar17 + (ulong)*(uint *)(lVar10 + 0xbc) * 0x110 + 0x190bc;
  }
  uStack_80 = *(undefined8 *)
               (lVar12 + (lVar23 * 0x40 + lVar20 * 0x1f) * 4 + (lVar22 * 0x10 + lVar13 * 3) * 4 +
               0xf0);
  lVar17 = FUN_fffffffff0016e00(lVar21);
  uVar24 = (undefined4)((ulong)lVar21 >> 0x20);
  if (lVar17 == 0) {
    lVar14 = lVar21;
    do {
      FUN_fffffffff001d498(0,lVar14,0);
      lVar14 = lVar14 + 4;
    } while (lVar14 != lVar21 + 0x110);
    FUN_fffffffff001d6c8();
    lVar14 = FUN_fffffffff0016d30(lVar21,&uStack_80);
    lVar17 = g_3ab40;
    lVar18 = lVar12 + (lVar23 * 0x40 + lVar20 * 0x1f) * 4 + lVar22 * 0x40 + lVar13 * 0xc;
    lVar26 = g_3ab40 +
             (lVar23 * 0x40 + lVar20 * -9) * 8 + lVar22 * 0x40 + lVar13 * 0x18;
    iVar3 = *(int *)(lVar26 + 0x2c20);
    iVar5 = *(int *)(lVar12 + 0x74);
    *(int *)(lVar18 + 0xf0) = (int)lVar21;
    *(undefined4 *)(lVar18 + 0xf4) = uVar24;
    *(int *)(lVar18 + 0x10c) = *(int *)(lVar18 + 0x10c) + 1;
    *(int *)(lVar26 + 0x2c20) = iVar3 + 1;
    *(int *)(lVar12 + 0x74) = iVar5 + 1;
    if (lVar23 == 1) {
      *(int *)(lVar12 + 0x78) = *(int *)(lVar12 + 0x78) + 1;
    }
    uVar9 = *(uint *)(lVar10 + 0x90);
    *(int *)(lVar21 + 0x34) = (int)lVar25;
    *(undefined4 *)(lVar21 + 0x38) = uVar11;
    *(int *)(lVar21 + 0x30) = iVar1;
    *(int *)(lVar21 + 0x28) = iVar2;
    uVar6 = *(uint *)(lVar10 + 0x90);
    lVar25 = *(long *)(lVar10 + 0x30) * 10;
    uVar11 = *(undefined4 *)(lVar10 + 0x40);
    *(int *)(lVar21 + 0x18) = (int)((ulong)lVar25 >> 0x20);
    *(undefined4 *)(lVar21 + 0x24) = uVar11;
    *(int *)(lVar21 + 0x14) = (int)lVar25;
    uVar15 = *(undefined8 *)(lVar10 + 0x5c);
    uVar11 = *(undefined4 *)(lVar10 + 0xac);
    *(ushort *)(lVar21 + 0x10) =
         (ushort)(uVar6 >> 6) & 1 | (ushort)((uVar9 & 1) << 3) | (ushort)(uVar6 >> 6) & 0x400 |
         (ushort)((uVar6 >> 0x11 & 1) << 0xb) | *(ushort *)(lVar21 + 0x10) & 0xf3f6;
    *(int *)(lVar21 + 0x50) = (int)((ulong)uVar15 >> 0x20);
    *(int *)(lVar21 + 0x4c) = (int)uVar15;
    *(undefined4 *)(lVar21 + 0xf8) = uVar11;
    if ((*(uint *)(lVar21 + 0x10) & 0x800) != 0) {
      *(int *)(lVar17 + 0x3db4) = *(int *)(lVar17 + 0x3db4) + 1;
    }
    if ((*(uint *)(lVar17 + 0x3d28) & 0x10) == 0) {
      FUN_fffffffff001970c(lVar21);
      lVar17 = g_3ab40;
    }
    if ((((ulong)(long)*(int *)(lVar17 + 0x3d28) >> 0x15 & 1) != 0) &&
       ((*(uint *)(lVar21 + 0x10) & 0x400) == 0)) goto LAB_fffffffff00153b4;
joined_r0xfffffffff0015bb4:
    if (lVar14 == 0) {
      return 0;
    }
  }
  else if ((((ulong)(long)*(int *)(g_3ab40 + 0x3d28) >> 0x15 & 1) != 0) &&
          (lVar17 = g_3ab40, (*(uint *)(lVar21 + 0x10) & 0x400) == 0)) {
LAB_fffffffff00153b4:
    if ((*(int *)(lVar21 + 0x30) == 0) && ((*(uint *)(lVar10 + 0x90) & 0x80) != 0)) {
      lVar25 = g_3ab40;
      if (*(int *)(lVar17 + 0x2a0c4) == 0) {
        if (*(long *)(lVar17 + 0x2764) != 0) {
          auStack_78[0] = 0;
          FUN_fffffffff0008424(*(undefined8 *)(*(long *)(lVar17 + 0x2764) + 0x6c),auStack_78,0);
        }
        lVar25 = g_3ab40;
        *(uint *)(g_3ab40 + 0x275c) =
             *(uint *)(g_3ab40 + 0x275c) & 0xfffffffe;
        *(int *)(lVar25 + 0x2afc) = *(int *)(lVar25 + 0x2afc) + -1;
      }
      *(int *)(lVar25 + 0x2a0c4) = *(int *)(lVar25 + 0x2a0c4) + 1;
    }
    goto joined_r0xfffffffff0015bb4;
  }
  lVar26 = g_3ab40;
  uVar9 = *(uint *)(lVar10 + 0x90);
  *(undefined4 *)(lVar21 + 0x60) = *(undefined4 *)(lVar10 + 0x48);
  uVar11 = *(undefined4 *)(lVar10 + 0x50);
  lVar17 = *(long *)(lVar10 + 0x4c);
  *(undefined4 *)(lVar21 + 100) = *(undefined4 *)(lVar10 + 0x4c);
  *(undefined4 *)(lVar21 + 0x68) = uVar11;
  *(ushort *)(lVar21 + 0x54) =
       (ushort)(uVar9 >> 1) & 0x400 | 1 | *(ushort *)(lVar21 + 0x54) & 0xfbfc;
  lVar25 = *(long *)(*(long *)(lVar21 + 0x34) + 0x10);
  if ((*(uint *)(lVar25 + 0x90) & 0x20) != 0) {
    *(undefined4 *)(lVar21 + 0x84) = *(undefined4 *)(lVar10 + 0x74);
  }
  if (((*(uint *)(lVar26 + 0x3d28) & 0x800) == 0) ||
     (uVar27 = (ulong)*(int *)(lVar10 + 0x90), (uVar27 >> 0x12 & 1) != 0)) {
    uVar15 = *(undefined8 *)(lVar10 + 0x54);
    *(int *)(lVar21 + 0x74) = (int)uVar15;
    *(int *)(lVar21 + 0x78) = (int)((ulong)uVar15 >> 0x20);
    uVar15 = FUN_fffffffff000e644(lVar23);
    *(int *)(lVar21 + 0x6c) = (int)uVar15;
    *(int *)(lVar21 + 0x70) = (int)((ulong)uVar15 >> 0x20);
    lVar17 = *(long *)(lVar10 + 0x4c);
    uVar9 = *(uint *)(lVar10 + 0x90);
    uVar27 = (ulong)(int)uVar9;
    lVar25 = *(long *)(*(long *)(lVar21 + 0x34) + 0x10);
    lVar26 = g_3ab40;
  }
  else {
    if ((lVar23 == 1) || (lVar23 == 0)) {
      lVar18 = lVar17 + 0x800;
    }
    else {
      lVar18 = 0;
      if (lVar23 == 2) {
        lVar18 = lVar17 + 0x200;
      }
    }
    *(int *)(lVar21 + 0x74) = (int)lVar18;
    *(int *)(lVar21 + 0x78) = (int)((ulong)lVar18 >> 0x20);
    uVar15 = *(undefined8 *)(lVar10 + 0x54);
    *(int *)(lVar21 + 0x6c) = (int)uVar15;
    *(int *)(lVar21 + 0x70) = (int)((ulong)uVar15 >> 0x20);
  }
  if (lVar23 == 1) {
    uVar16 = (ulong)*(int *)(lVar26 + 0x3d28);
    *(long *)(lVar21 + 0x7c) = lVar17 + 0x2d8;
    if (((uVar27 | uVar16) >> 0x12 & 1) == 0) {
      *(long *)(lVar21 + 0x88) = lVar17 + 0x804;
    }
    else {
      uVar15 = *(undefined8 *)(lVar10 + 0xd0);
      *(int *)(lVar21 + 0x88) = (int)uVar15;
      *(int *)(lVar21 + 0x8c) = (int)((ulong)uVar15 >> 0x20);
    }
    *(int *)(lVar21 + 0x94) = (int)((ulong)(lVar17 + 0x20c) >> 0x20);
    *(int *)(lVar21 + 0x98) = (int)(lVar17 + 0x80c);
    lVar19 = lVar17 + 0x254;
    lVar18 = lVar17 + 0x228;
    *(int *)(lVar21 + 0x90) = (int)(lVar17 + 0x20c);
    *(int *)(lVar21 + 0x9c) = (int)((ulong)(lVar17 + 0x80c) >> 0x20);
    lVar17 = lVar17 + 0x210;
    goto LAB_fffffffff00156c4;
  }
  if (lVar23 == 0) {
    uVar16 = (ulong)*(int *)(lVar26 + 0x3d28);
    *(long *)(lVar21 + 0x7c) = lVar17 + 0x254;
    if (((uVar16 | uVar27) >> 0x12 & 1) != 0) goto LAB_fffffffff001594c;
    *(long *)(lVar21 + 0x88) = lVar17 + 0x804;
LAB_fffffffff0015960:
    lVar28 = lVar17 + 0x20c;
    lVar19 = lVar17 + 0x80c;
    lVar18 = lVar17 + 0x240;
  }
  else if (lVar23 == 2) {
    uVar16 = (ulong)*(int *)(lVar26 + 0x3d28);
    *(long *)(lVar21 + 0x7c) = lVar17 + 0x14;
    if (((uVar16 | uVar27) >> 0x12 & 1) != 0) goto LAB_fffffffff001594c;
    *(long *)(lVar21 + 0x88) = lVar17 + 0x204;
LAB_fffffffff0015cac:
    lVar19 = lVar17 + 0x20c;
    lVar18 = lVar17 + 0xc;
    lVar28 = 0;
  }
  else {
    uVar16 = (ulong)*(int *)(lVar26 + 0x3d28);
    *(undefined4 *)(lVar21 + 0x7c) = 0;
    *(undefined4 *)(lVar21 + 0x80) = 0;
    if (((uVar16 | uVar27) >> 0x12 & 1) == 0) {
      *(undefined4 *)(lVar21 + 0x88) = 0;
      *(undefined4 *)(lVar21 + 0x8c) = 0;
    }
    else {
LAB_fffffffff001594c:
      uVar11 = *(undefined4 *)(lVar10 + 0xd4);
      *(undefined4 *)(lVar21 + 0x88) = *(undefined4 *)(lVar10 + 0xd0);
      *(undefined4 *)(lVar21 + 0x8c) = uVar11;
      if (lVar23 == 0) goto LAB_fffffffff0015960;
      if (lVar23 == 2) goto LAB_fffffffff0015cac;
    }
    lVar28 = 0;
    lVar19 = 0;
    lVar18 = 0;
  }
  *(int *)(lVar21 + 0x94) = (int)((ulong)lVar28 >> 0x20);
  *(int *)(lVar21 + 0x98) = (int)lVar19;
  *(int *)(lVar21 + 0x90) = (int)lVar28;
  *(int *)(lVar21 + 0x9c) = (int)((ulong)lVar19 >> 0x20);
  lVar19 = 0;
  lVar17 = 0;
LAB_fffffffff00156c4:
  *(int *)(lVar21 + 0xa4) = (int)((ulong)lVar18 >> 0x20);
  *(int *)(lVar21 + 0xa0) = (int)lVar18;
  *(int *)(lVar21 + 0xa8) = (int)lVar19;
  *(int *)(lVar21 + 0xac) = (int)((ulong)lVar19 >> 0x20);
  *(int *)(lVar21 + 0xb0) = (int)lVar17;
  *(int *)(lVar21 + 0xb4) = (int)((ulong)lVar17 >> 0x20);
  *(int *)(lVar21 + 0xc0) = (int)lVar21;
  *(undefined4 *)(lVar21 + 0xc4) = uVar24;
  uVar15 = *(undefined8 *)(lVar10 + 100);
  *(int *)(lVar21 + 0xb8) = (int)uVar15;
  *(int *)(lVar21 + 0xbc) = (int)((ulong)uVar15 >> 0x20);
  *(byte *)(lVar21 + 0x54) = (byte)(uVar9 >> 3) & 0x10 | *(byte *)(lVar21 + 0x54) & 0xe7;
  if (((uVar27 >> 0xe & 1) != 0) && ((*(uint *)(lVar12 + 0x90) & 0x80) == 0)) {
    *(uint *)(lVar12 + 0x90) = *(uint *)(lVar12 + 0x90) | 0x80;
    *(uint *)(lVar21 + 0x10) = *(uint *)(lVar21 + 0x10) | 0x100;
    *(int *)(lVar26 + 0x3db0) = *(int *)(lVar26 + 0x3db0) + 1;
  }
  *(uint *)(lVar21 + 0x10) = *(uint *)(lVar21 + 0x10) | 4;
  uVar9 = *(uint *)(lVar25 + 0x90);
  *(int *)(lVar21 + 0x2c) = *(int *)(lVar21 + 0x2c) + 1;
  if (((uVar9 & 0x20) != 0) && (lVar23 == 1)) {
    *(int *)(lVar26 + 0x3d3c) = *(int *)(lVar26 + 0x3d3c) + 1;
  }
  lVar17 = lVar26 + (lVar23 * 0x40 + lVar20 * -9) * 8 + lVar22 * 0x40 + lVar13 * 0x18;
  *(int *)(lVar17 + 0x2c24) = *(int *)(lVar17 + 0x2c24) + 1;
  if ((uVar16 & 0x10) == 0) {
    FUN_fffffffff00196b8(lVar21);
    lVar26 = g_3ab40;
  }
  uVar27 = (ulong)*(int *)(lVar26 + 0x3d28);
  if ((uVar27 >> 0x11 & 1) != 0) {
    FUN_fffffffff0014ea0(lVar21,lVar12);
    uVar27 = (ulong)*(int *)(g_3ab40 + 0x3d28);
    lVar26 = g_3ab40;
  }
  lVar22 = lVar26 + (lVar23 * 0x40 + lVar20 * -9) * 8 + lVar22 * 0x40 + lVar13 * 0x18;
  *(uint *)(lVar22 + 0x2c3c) = *(uint *)(lVar22 + 0x2c3c) | 1;
  if (((((uVar27 >> 0x14 & 1) == 0) && (((ulong)(long)*(int *)(lVar10 + 0x90) >> 0x11 & 1) != 0)) &&
      (*(int *)(lVar26 + 0x3db4) == 1)) && (*(int *)(lVar26 + 0x3da4) != 0)) {
    FUN_fffffffff000bd24(10000);
    FUN_fffffffff000b144();
  }
  FUN_fffffffff000dcbc(*(undefined8 *)(lVar10 + 0x94),*(undefined8 *)(lVar10 + 0x9c),1);
  *(int *)(g_3ab40 + 0x3118) = *(int *)(g_3ab40 + 0x3118) + 1;
  FUN_fffffffff0012170(lVar23);
  return lVar14;
}


/* ---- sub_15fe0 @ fffffffff0015fe0 size=56 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_15fe0(long param_1)

{
  if (*(int *)(param_1 + 0xf0) == -1) {
    return;
  }
  FUN_fffffffff001c09c(*(long *)(g_3ab40 + 0x2a0c8) + 8);
  return;
}


/* ---- FUN_fffffffff0016018 @ fffffffff0016018 size=300 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0016018(int *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = g_3ab40;
  iVar1 = *param_1;
  if (iVar1 == 1) {
    *(uint *)(g_3ab40 + 0x3d28) =
         *(uint *)(g_3ab40 + 0x3d28) & 0xffffffef;
    return;
  }
  if (iVar1 == 2) {
    iVar1 = param_1[3];
    *(uint *)(g_3ab40 + 0x2a124) = (uint)(param_1[2] == 0);
    *(int *)(lVar3 + 0x3db8) = iVar1 * 1000000;
    return;
  }
  if (iVar1 == 0) {
    uVar2 = *(uint *)(g_3ab40 + 0x3d28);
    if ((uVar2 & 0x100000) == 0) {
      if ((param_1[1] & 1U) != 0) {
        *(uint *)(g_3ab40 + 0x3d28) = uVar2 | 0x100000;
        for (lVar3 = *(long *)(lVar3 + 0x3240); lVar3 != 0; lVar3 = *(long *)(lVar3 + 8)) {
          FUN_fffffffff0017bc8(lVar3);
        }
        return;
      }
    }
    else if ((param_1[1] & 1U) == 0) {
      *(uint *)(g_3ab40 + 0x3d28) = uVar2 & 0xffefffff;
      return;
    }
  }
  return;
}


/* ---- FUN_fffffffff0016624 @ fffffffff0016624 size=2584 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff0016624(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_90 [64];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  lVar7 = g_3ab40;
  uVar1 = *(uint *)(g_3ab40 + (ulong)*(uint *)(g_3ab40 + 0x31a8) * 0x100
                   + 8);
  lVar5 = 0;
  if ((uVar1 & 0xf) != 1) {
    return 0;
  }
  switch(uVar1 >> 4 & 0xff) {
  case 0:
    FUN_fffffffff000e400(0,0,0);
    lVar5 = FUN_fffffffff0011b04();
    FUN_fffffffff000e400(0,1,(long)(int)lVar5);
    break;
  case 1:
    FUN_fffffffff000e400(1,0,0);
    lVar5 = FUN_fffffffff000ec9c();
    FUN_fffffffff000e400(1,1,(long)(int)lVar5);
    break;
  case 2:
    FUN_fffffffff000e400(2,0,0);
    lVar5 = FUN_fffffffff0014fac();
    FUN_fffffffff000e400(2,1,(long)(int)lVar5);
    break;
  case 3:
    FUN_fffffffff000e400(3,0,0);
    lVar5 = FUN_fffffffff0012438();
    FUN_fffffffff000e400(3,1,(long)(int)lVar5);
    break;
  case 4:
    FUN_fffffffff000e400(4,0,0);
    lVar5 = 1;
    lVar7 = g_3ab40 + (ulong)*(uint *)(g_3ab40 + 0x31a8) * 0x100 + 8;
    FUN_fffffffff000dcbc(*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10),0);
    FUN_fffffffff000e400(4,1,1);
    break;
  case 5:
    FUN_fffffffff000e400(5,0,0);
    FUN_fffffffff000e400(5,1,1);
    lVar5 = 1;
    break;
  case 6:
    FUN_fffffffff000e400(6,0,0);
    if ((*(uint *)(g_3ab40 + 0x3d28) & 0x400) == 0) {
      lVar5 = FUN_fffffffff000f928();
    }
    else {
      lVar5 = FUN_fffffffff000ef30();
    }
    FUN_fffffffff000e400(6,1,(long)(int)lVar5);
    break;
  case 7:
    FUN_fffffffff000e400(7,0,0);
    lVar5 = FUN_fffffffff000fb90();
    FUN_fffffffff000e400(7,1,(long)(int)lVar5);
    break;
  case 8:
    FUN_fffffffff000e400(8,0,0);
    lVar5 = FUN_fffffffff0014a6c();
    FUN_fffffffff000e400(8,1,(long)(int)lVar5);
    break;
  case 9:
    FUN_fffffffff000e400(9,0,0);
    lVar5 = FUN_fffffffff0010a9c();
    FUN_fffffffff000e400(9,1,(long)(int)lVar5);
    break;
  case 10:
    FUN_fffffffff000e400(10,0,0);
    lVar5 = FUN_fffffffff001227c();
    FUN_fffffffff000e400(10,1,(long)(int)lVar5);
    break;
  case 0xb:
    FUN_fffffffff000e400(0xb,0,0);
    lVar5 = FUN_fffffffff00107f8();
    FUN_fffffffff000e400(0xb,1,(long)(int)lVar5);
    break;
  case 0xc:
    FUN_fffffffff000e400(0xc,0,0);
    lVar5 = FUN_fffffffff0010b94();
    FUN_fffffffff000e400(0xc,1,(long)(int)lVar5);
    break;
  case 0xd:
    FUN_fffffffff000e400(0xd,0,0);
    lVar5 = FUN_fffffffff0012a88();
    FUN_fffffffff000e400(0xd,1,(long)(int)lVar5);
    break;
  case 0xe:
    lVar5 = g_3ab40 + (ulong)*(uint *)(g_3ab40 + 0x31a8) * 0x100 + 8;
    switch(*(undefined4 *)(lVar5 + 4)) {
    case 0:
      FUN_fffffffff000e400(0x10,0,0);
      lVar8 = 1;
      FUN_fffffffff001cdf4((long)*(int *)(lVar5 + 0x18),(long)*(int *)(lVar5 + 0x1c));
      FUN_fffffffff000e400(0x10,1,1);
      break;
    case 1:
      FUN_fffffffff000e400(0x11,0,0);
      uVar3 = *(undefined8 *)(lVar5 + 0x18);
      uVar4 = *(undefined8 *)(lVar5 + 0x20);
      FUN_fffffffff001cd2c();
      FUN_fffffffff0018bf8(0,0,uVar3,uVar4);
      FUN_fffffffff0018bf8(0,1,uVar3,uVar4);
      FUN_fffffffff001cdd0();
      FUN_fffffffff000e400(0x11,1,1);
      lVar8 = 1;
      break;
    case 2:
      FUN_fffffffff000e400(0x12,0,0);
      FUN_fffffffff000cd14(0,0,lVar5 + 0x18);
      FUN_fffffffff000e400(0x12,1,1);
      lVar8 = 1;
      break;
    case 3:
      FUN_fffffffff000e400(0x13,0,0);
      FUN_fffffffff0011d0c(*(undefined8 *)(lVar5 + 0x18),*(undefined8 *)(lVar5 + 0x20));
      FUN_fffffffff000e400(0x13,1,1);
      lVar8 = 1;
      break;
    case 4:
      FUN_fffffffff000e400(0x14,0,0);
      uStack_40 = *(undefined4 *)(lVar5 + 0x18);
      uStack_3c = *(undefined4 *)(lVar5 + 0x1c);
      uStack_38 = *(undefined4 *)(lVar5 + 0x20);
      uStack_34 = *(undefined4 *)(lVar5 + 0x24);
      uStack_30 = *(undefined4 *)(lVar5 + 0x28);
      FUN_fffffffff0011edc(&uStack_40);
      FUN_fffffffff000e400(0x14,1,1);
      lVar8 = 1;
      break;
    case 5:
      FUN_fffffffff000e400(0x15,0,0);
      FUN_fffffffff001eb28(auStack_90,lVar5 + 0x18,0x48);
      lVar8 = FUN_fffffffff001bc14(auStack_90);
      FUN_fffffffff000e400(0x15,1,(long)(int)lVar8);
      if (lVar8 == 0) {
        return 0;
      }
      break;
    case 6:
      FUN_fffffffff000e400(0x16,0,0);
      lVar7 = g_3ab40;
      if (*(uint *)(lVar5 + 0x18) < 5) {
        uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
        lVar8 = g_3ab40 + uVar6 * 0x58;
        if (*(long *)(lVar8 + 0x2be8) != 0) {
          *(uint *)(lVar8 + 0x2c3c) = *(uint *)(lVar8 + 0x2c3c) | 1;
        }
        lVar8 = lVar7 + uVar6 * 0x58;
        if (*(long *)(lVar8 + 0x2da0) != 0) {
          *(uint *)(lVar8 + 0x2df4) = *(uint *)(lVar8 + 0x2df4) | 1;
        }
        lVar7 = lVar7 + uVar6 * 0x58;
        if (*(long *)(lVar7 + 0x2f58) != 0) {
          *(uint *)(lVar7 + 0x2fac) = *(uint *)(lVar7 + 0x2fac) | 1;
        }
      }
      FUN_fffffffff000e400(0x16,1,1);
      lVar8 = 1;
      break;
    case 7:
      FUN_fffffffff000e400(0x18,0,0);
      for (lVar7 = *(long *)(g_3ab40 + 0x3240); lVar7 != 0;
          lVar7 = *(long *)(lVar7 + 8)) {
        FUN_fffffffff0017bc8(lVar7);
      }
      FUN_fffffffff000e400(0x18,1,1);
      lVar8 = 1;
      break;
    case 8:
      FUN_fffffffff000e400(0x1a,0,0);
      FUN_fffffffff0016018(lVar5 + 0x18);
      FUN_fffffffff000e400(0x1a,1,1);
      lVar8 = 1;
      break;
    case 9:
      FUN_fffffffff000e400(0x1b,0,0);
      if (((ulong)(long)*(int *)(g_3ab40 + 0x3d28) >> 0x14 & 1) == 0) {
        for (lVar7 = *(long *)(g_3ab40 + 0x3240); lVar7 != 0;
            lVar7 = *(long *)(lVar7 + 8)) {
          FUN_fffffffff0017bc8(lVar7);
        }
        FUN_fffffffff000cbb4();
      }
      FUN_fffffffff000e400(0x1b,1,1);
      lVar8 = 1;
      break;
    case 10:
      uVar3 = *(undefined8 *)(lVar5 + 0x18);
      *(int *)(g_3ab40 + 0x2a128) = (int)uVar3;
      *(int *)(lVar7 + 0x2a12c) = (int)((ulong)uVar3 >> 0x20);
      uVar3 = *(undefined8 *)(lVar5 + 0x20);
      lVar8 = 1;
      *(int *)(lVar7 + 0x2a130) = (int)uVar3;
      *(int *)(lVar7 + 0x2a134) = (int)((ulong)uVar3 >> 0x20);
      break;
    default:
      lVar8 = 1;
    }
    FUN_fffffffff000dcbc(*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10),1);
    return lVar8;
  case 0xf:
    FUN_fffffffff000e400(0xe,0,0);
    lVar5 = FUN_fffffffff001205c();
    FUN_fffffffff000e400(0xe,1,(long)(int)lVar5);
    break;
  case 0x10:
    FUN_fffffffff000e400(0xf,0,0);
    lVar5 = FUN_fffffffff00117a0();
    FUN_fffffffff000e400(0xf,1,(long)(int)lVar5);
    break;
  case 0x11:
    FUN_fffffffff000e400(0x17,0,0);
    lVar5 = FUN_fffffffff0013460();
    FUN_fffffffff000e400(0x17,1,(long)(int)lVar5);
    break;
  case 0x12:
    lVar5 = g_3ab40 + (ulong)*(uint *)(g_3ab40 + 0x31a8) * 0x100 + 8;
    local_50 = *(undefined4 *)(lVar5 + 0x14);
    uStack_4c = *(undefined4 *)(lVar5 + 0x18);
    uStack_48 = *(undefined4 *)(lVar5 + 0x1c);
    uStack_44 = *(undefined4 *)(lVar5 + 0x20);
    uStack_40 = *(undefined4 *)(lVar5 + 0x24);
    uStack_3c = *(undefined4 *)(lVar5 + 0x28);
    FUN_fffffffff0013748(&local_50);
    FUN_fffffffff000dcbc(*(undefined8 *)(lVar5 + 4),*(undefined8 *)(lVar5 + 0xc),0);
    lVar5 = 1;
    break;
  case 0x13:
    FUN_fffffffff000e400(0x19,0,0);
    lVar5 = 1;
    lVar8 = g_3ab40 + (ulong)*(uint *)(g_3ab40 + 0x31a8) * 0x100 + 8;
    FUN_fffffffff0014c0c(lVar8);
    lVar7 = g_3ab40;
    uVar3 = *(undefined8 *)(lVar8 + 0x2c);
    *(int *)(g_3ab40 + 0x31d4) = (int)uVar3;
    *(int *)(lVar7 + 0x31d8) = (int)((ulong)uVar3 >> 0x20);
    uVar3 = *(undefined8 *)(lVar8 + 0x34);
    uVar2 = *(undefined4 *)(lVar8 + 4);
    *(int *)(lVar7 + 0x2a13c) = (int)uVar3;
    *(int *)(lVar7 + 0x2a140) = (int)((ulong)uVar3 >> 0x20);
    FUN_fffffffff000dcbc(CONCAT44(*(undefined4 *)(lVar8 + 8),uVar2),*(undefined8 *)(lVar8 + 0xc),1);
    FUN_fffffffff000e400(0x19,1,1);
  }
  return lVar5;
}


/* ---- FUN_fffffffff0016b5c @ fffffffff0016b5c size=164 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff0016b5c(void)

{
  int *piVar1;
  char *pcVar2;
  undefined8 uVar3;
  int iVar4;
  
  pcVar2 = g_3ab40;
  if ((*g_3ab40 != '\0') &&
     (*g_3ab40 = '\0', *(int *)(pcVar2 + 0x31a8) != *(int *)(pcVar2 + 0x31a4))) {
    do {
      uVar3 = FUN_fffffffff0016624();
      iVar4 = 0;
      if (*(int *)(g_3ab40 + 0x31a8) != 0x1f) {
        iVar4 = *(int *)(g_3ab40 + 0x31a8) + 1;
      }
      piVar1 = (int *)(g_3ab40 + 0x31a4);
      *(int *)(g_3ab40 + 0x31a8) = iVar4;
    } while (*piVar1 != iVar4);
    return uVar3;
  }
  return 0;
}


/* ---- FUN_fffffffff0016c00 @ fffffffff0016c00 size=184 ---- */

bool FUN_fffffffff0016c00(ulong param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = 1;
  if ((param_1 & 1) != 0) {
    lVar1 = FUN_fffffffff0016b5c();
  }
  if ((param_1 & 2) == 0) {
    lVar3 = 1;
    if ((param_1 & 4) != 0) {
      iVar2 = FUN_fffffffff00108e8();
      lVar3 = lVar1;
joined_r0xfffffffff0016ca4:
      if (lVar3 == 0) {
        return false;
      }
      return iVar2 != 0;
    }
  }
  else {
    lVar3 = FUN_fffffffff000e7b0();
    if ((param_1 & 4) != 0) {
      iVar2 = FUN_fffffffff00108e8();
      if (lVar1 == 0) {
        return false;
      }
      goto joined_r0xfffffffff0016ca4;
    }
  }
  if (lVar1 == 0) {
    return false;
  }
  return (int)lVar3 != 0;
}


/* ---- sub_16cb8 @ fffffffff0016cb8 size=120 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_16cb8(void)

{
  long lVar1;
  
  if (((ulong)(long)*(int *)(g_3ab40 + 0x3d28) >> 0x14 & 1) == 0) {
    for (lVar1 = *(long *)(g_3ab40 + 0x3240); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)
        ) {
      FUN_fffffffff0017bc8(lVar1);
    }
    FUN_fffffffff000cbb4();
    return;
  }
  return;
}


/* ---- FUN_fffffffff0016d30 @ fffffffff0016d30 size=72 ---- */

undefined8 FUN_fffffffff0016d30(undefined8 *param_1,long *param_2)

{
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if (*param_2 != 0) {
    param_1[1] = *param_2;
    *param_1 = 0;
    *(undefined8 **)*param_2 = param_1;
    return 1;
  }
  *param_2 = (long)param_1;
  param_1[1] = 0;
  *(undefined8 *)*param_2 = 0;
  return 1;
}


/* ---- FUN_fffffffff0016d78 @ fffffffff0016d78 size=136 ---- */

undefined8 FUN_fffffffff0016d78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((param_1 != (undefined8 *)0x0) && ((undefined8 *)*param_2 != (undefined8 *)0x0)) {
    puVar1 = (undefined8 *)0x0;
    puVar3 = (undefined8 *)*param_2;
    do {
      puVar2 = (undefined8 *)puVar3[1];
      if (param_1 == puVar3) {
        if (puVar1 == (undefined8 *)0x0) {
          if (puVar2 != (undefined8 *)0x0) {
            *param_2 = puVar2;
            *puVar2 = 0;
            puVar3[1] = 0;
            *puVar3 = 0;
            return 1;
          }
          *param_2 = 0;
        }
        else {
          if (puVar2 == (undefined8 *)0x0) {
            puVar1[1] = 0;
            puVar3[1] = 0;
            *puVar3 = 0;
            return 1;
          }
          puVar1[1] = puVar2;
          *puVar2 = puVar1;
        }
        puVar3[1] = 0;
        *puVar3 = 0;
        return 1;
      }
      puVar1 = puVar3;
      puVar3 = puVar2;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return 0;
}


/* ---- FUN_fffffffff0016e00 @ fffffffff0016e00 size=24 ---- */

long FUN_fffffffff0016e00(long param_1,long param_2)

{
  if (param_2 != 0) {
    do {
      if (param_1 == param_2) {
        return param_2;
      }
      param_2 = *(long *)(param_2 + 8);
    } while (param_2 != 0);
  }
  return param_2;
}


/* ---- FUN_fffffffff0016e18 @ fffffffff0016e18 size=60 ---- */

undefined8 FUN_fffffffff0016e18(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (long *)((long)param_1 + ((ulong)((long)((int)param_2 + -1) << 0x20) >> 0x1d) + 8);
    do {
      lVar1 = *param_1;
      param_1 = param_1 + 1;
      if (lVar1 == param_3) {
        return 1;
      }
    } while (param_1 != plVar2);
  }
  return 0;
}


/* ---- FUN_fffffffff0016e54 @ fffffffff0016e54 size=24 ---- */

/* WARNING: Removing unreachable block (ram,0xfffffffff0016e54) */
/* WARNING: Removing unreachable block (ram,0xfffffffff0016e5c) */

void FUN_fffffffff0016e54(long param_1)

{
  do {
  } while (param_1 != 0);
  return;
}


/* ---- FUN_fffffffff0016e6c @ fffffffff0016e6c size=108 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_fffffffff0016e6c(void)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  while( true ) {
    uVar1 = *(uint *)(g_3ab78 + (uVar2 & 0xffffffff) * 0xc);
    if ((((uVar1 & 1) != 0) && ((uVar1 >> 1 & 1) == 0)) && ((uVar2 == 0 || ((uVar1 >> 2 & 1) == 0)))
       ) break;
    uVar2 = (ulong)((int)uVar2 + 1);
    if (uVar2 == 0x10) {
      return 0xffff;
    }
  }
  return uVar2;
}


/* ---- FUN_fffffffff0016ed8 @ fffffffff0016ed8 size=3120 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0016ed8(long param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte *pbVar5;
  int iStack_3f0;
  int iStack_3ec;
  int iStack_3e8;
  int iStack_3e4;
  int iStack_3e0;
  int iStack_3dc;
  int iStack_3d8;
  int iStack_3d4;
  int iStack_3d0;
  int iStack_3cc;
  undefined4 uStack_3c8;
  int iStack_3c4;
  int iStack_3c0;
  int iStack_3bc;
  int iStack_3b8;
  int iStack_3b4;
  int iStack_3b0;
  int iStack_3ac;
  int iStack_3a8;
  int iStack_3a4;
  int iStack_3a0;
  int iStack_39c;
  int iStack_398;
  int iStack_394;
  int iStack_390;
  int iStack_38c;
  int iStack_388;
  int iStack_384;
  int iStack_380;
  int iStack_37c;
  int iStack_378;
  int iStack_374;
  int iStack_370;
  int iStack_36c;
  int iStack_368;
  int iStack_364;
  int iStack_360;
  int iStack_35c;
  int iStack_358;
  int iStack_354;
  int iStack_350;
  int iStack_34c;
  int iStack_348;
  int iStack_344;
  int iStack_340;
  int iStack_33c;
  int iStack_338;
  int iStack_334;
  int iStack_330;
  int iStack_32c;
  int iStack_328;
  int iStack_324;
  int iStack_320;
  int iStack_31c;
  int iStack_318;
  int iStack_314;
  int iStack_310;
  int iStack_30c;
  int iStack_308;
  int iStack_304;
  int iStack_300;
  int iStack_2fc;
  int iStack_2f8;
  int iStack_2f4;
  int iStack_2f0;
  int iStack_2ec;
  int iStack_2e8;
  int iStack_2e4;
  int iStack_2e0;
  int iStack_2dc;
  int iStack_2d8;
  int iStack_2d4;
  int iStack_2d0;
  int iStack_2cc;
  int iStack_2c8;
  int iStack_2c4;
  int iStack_2c0;
  int iStack_2bc;
  int iStack_2b8;
  int iStack_2b4;
  int iStack_2b0;
  int iStack_2ac;
  int iStack_2a8;
  int iStack_2a4;
  int iStack_2a0;
  int iStack_29c;
  int iStack_298;
  int iStack_294;
  int iStack_290;
  int iStack_28c;
  int iStack_288;
  int iStack_284;
  int iStack_280;
  int iStack_27c;
  int iStack_278;
  int iStack_274;
  int iStack_270;
  int iStack_26c;
  int iStack_268;
  int iStack_264;
  int iStack_260;
  int iStack_25c;
  int iStack_258;
  int iStack_254;
  int iStack_250;
  int iStack_24c;
  int iStack_248;
  int iStack_244;
  int iStack_240;
  int iStack_23c;
  int iStack_238;
  int iStack_234;
  int iStack_230;
  int iStack_22c;
  int iStack_228;
  int iStack_224;
  int iStack_220;
  int iStack_21c;
  int iStack_218;
  int iStack_214;
  int iStack_210;
  int iStack_20c;
  int iStack_208;
  int iStack_204;
  int iStack_200;
  int iStack_1fc;
  int iStack_1f8;
  int iStack_1f4;
  int iStack_1f0;
  int iStack_1ec;
  int iStack_1e8;
  int iStack_1e4;
  int iStack_1e0;
  int iStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  int iStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  
  FUN_fffffffff001ec50(0,0xd8);
  g_3ab78 = param_1;
  *(undefined4 *)(param_1 + 0xcc) = param_3;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  uVar4 = 0;
  do {
    uVar2 = uVar4 & 0x1f;
    pbVar5 = (byte *)(param_1 + (uVar4 & 0xffffffff) * 0xc);
    uVar4 = (ulong)((int)uVar4 + 1);
    if ((param_2 & 1 << uVar2) != 0) {
      iVar1 = *(int *)(param_1 + 0xc0);
      *pbVar5 = *pbVar5 & 0xf8 | 1;
      *(int *)(param_1 + 0xc0) = iVar1 + 1;
    }
  } while (uVar4 != 0x10);
  uVar3 = FUN_fffffffff000bd24(5000);
  iStack_74 = *(int *)(g_3ab40 + 0x31dc);
  iStack_1c4 = iStack_74 + 0x173a;
  *(int *)(param_1 + 0xc4) = (int)uVar3;
  *(int *)(param_1 + 200) = (int)((ulong)uVar3 >> 0x20);
  iStack_228 = iStack_74 + 0x16f4;
  iStack_22c = iStack_74 + 0x16f3;
  iStack_208 = iStack_74 + 0x1715;
  iStack_230 = iStack_74 + 0x1688;
  iStack_20c = iStack_74 + 0x16f6;
  iStack_21c = iStack_74 + 0x1733;
  iStack_218 = iStack_74 + 0x1734;
  iStack_214 = iStack_74 + 0x1689;
  iStack_210 = iStack_74 + 0x16f5;
  iStack_204 = iStack_74 + 0x1716;
  iStack_200 = iStack_74 + 0x1735;
  iStack_1fc = iStack_74 + 0x1736;
  iStack_1f8 = iStack_74 + 0x168a;
  iStack_1f4 = iStack_74 + 0x16f7;
  iStack_1f0 = iStack_74 + 0x16f8;
  iStack_1ec = iStack_74 + 0x1717;
  iStack_1e8 = iStack_74 + 0x1718;
  iStack_1e4 = iStack_74 + 0x1737;
  iStack_1e0 = iStack_74 + 0x1738;
  iStack_1dc = iStack_74 + 0x168b;
  iStack_1d8 = iStack_74 + 0x16f9;
  iStack_1d4 = iStack_74 + 0x16fa;
  iStack_1d0 = iStack_74 + 0x1719;
  iStack_224 = iStack_74 + 0x1713;
  iStack_220 = iStack_74 + 0x1714;
  iStack_1cc = iStack_74 + 0x171a;
  iStack_174 = iStack_74 + 0x173f;
  iStack_170 = iStack_74 + 0x1740;
  iStack_16c = iStack_74 + 0x168f;
  iStack_168 = iStack_74 + 0x1701;
  iStack_164 = iStack_74 + 0x1702;
  iStack_160 = iStack_74 + 0x1721;
  iStack_15c = iStack_74 + 0x1722;
  iStack_158 = iStack_74 + 0x1741;
  iStack_154 = iStack_74 + 0x1742;
  iStack_150 = iStack_74 + 0x1690;
  iStack_14c = iStack_74 + 0x1703;
  iStack_148 = iStack_74 + 0x1704;
  iStack_1c8 = iStack_74 + 0x1739;
  iStack_1c0 = iStack_74 + 0x168c;
  iStack_144 = iStack_74 + 0x1723;
  iStack_184 = iStack_74 + 0x16ff;
  iStack_1bc = iStack_74 + 0x16fb;
  iStack_180 = iStack_74 + 0x1700;
  iStack_1b8 = iStack_74 + 0x16fc;
  iStack_1b4 = iStack_74 + 0x171b;
  iStack_1b0 = iStack_74 + 0x171c;
  iStack_1ac = iStack_74 + 0x173b;
  iStack_1a8 = iStack_74 + 0x173c;
  iStack_1a4 = iStack_74 + 0x168d;
  iStack_1a0 = iStack_74 + 0x16fd;
  iStack_19c = iStack_74 + 0x16fe;
  iStack_198 = iStack_74 + 0x171d;
  iStack_194 = iStack_74 + 0x171e;
  iStack_190 = iStack_74 + 0x173d;
  iStack_18c = iStack_74 + 0x173e;
  iStack_188 = iStack_74 + 0x168e;
  iStack_140 = iStack_74 + 0x1724;
  iStack_17c = iStack_74 + 0x171f;
  iStack_138 = iStack_74 + 0x1744;
  iStack_134 = iStack_74 + 0x1691;
  iStack_118 = iStack_74 + 0x1692;
  iStack_114 = iStack_74 + 0x1707;
  iStack_110 = iStack_74 + 0x1708;
  iStack_10c = iStack_74 + 0x1727;
  iStack_108 = iStack_74 + 0x1728;
  iStack_104 = iStack_74 + 0x1747;
  iStack_100 = iStack_74 + 0x1748;
  iStack_fc = iStack_74 + 0x1693;
  iStack_f8 = iStack_74 + 0x1709;
  iStack_f4 = iStack_74 + 0x170a;
  iStack_f0 = iStack_74 + 0x1729;
  iStack_ec = iStack_74 + 0x172a;
  iStack_e8 = iStack_74 + 0x1749;
  iStack_e4 = iStack_74 + 0x174a;
  iStack_e0 = iStack_74 + 0x1694;
  iStack_dc = iStack_74 + 0x170b;
  iStack_d8 = iStack_74 + 0x170c;
  iStack_d4 = iStack_74 + 0x172b;
  iStack_d0 = iStack_74 + 0x172c;
  iStack_cc = iStack_74 + 0x174b;
  iStack_c8 = iStack_74 + 0x174c;
  iStack_c4 = iStack_74 + 0x1695;
  iStack_178 = iStack_74 + 0x1720;
  iStack_13c = iStack_74 + 0x1743;
  iStack_130 = iStack_74 + 0x1705;
  iStack_12c = iStack_74 + 0x1706;
  iStack_128 = iStack_74 + 0x1725;
  iStack_124 = iStack_74 + 0x1726;
  iStack_c0 = iStack_74 + 0x170d;
  iStack_bc = iStack_74 + 0x170e;
  iStack_120 = iStack_74 + 0x1745;
  iStack_b0 = iStack_74 + 0x174d;
  iStack_ac = iStack_74 + 0x174e;
  iStack_a8 = iStack_74 + 0x1696;
  iStack_a4 = iStack_74 + 0x170f;
  iStack_a0 = iStack_74 + 0x1710;
  iStack_9c = iStack_74 + 0x172f;
  iStack_98 = iStack_74 + 0x1730;
  iStack_94 = iStack_74 + 0x174f;
  iStack_90 = iStack_74 + 0x1750;
  iStack_8c = iStack_74 + 0x1697;
  iStack_88 = iStack_74 + 0x1711;
  iStack_84 = iStack_74 + 0x1712;
  iStack_80 = iStack_74 + 0x1731;
  iStack_7c = iStack_74 + 0x1732;
  iStack_78 = iStack_74 + 0x1751;
  iStack_11c = iStack_74 + 0x1746;
  iStack_b8 = iStack_74 + 0x172d;
  iStack_b4 = iStack_74 + 0x172e;
  iStack_74 = iStack_74 + 0x1752;
  FUN_fffffffff001eb28(0xfffffffff013a768,&iStack_230,0x1c0);
  iStack_3b4 = *(int *)(g_3ab40 + 0x31fc);
  iStack_3cc = *(int *)(g_3ab40 + 0x31dc);
  iStack_3d8 = iStack_3cc + 0x16b0;
  iStack_3d4 = iStack_3cc + 0x16c2;
  iStack_3d0 = iStack_3cc + 0x16d9;
  iStack_3c4 = iStack_3b4 + 0x768;
  iStack_3cc = iStack_3cc + 0x16da;
  iStack_3c0 = iStack_3b4 + 0x77a;
  iStack_3bc = iStack_3b4 + 0x791;
  iStack_3b8 = iStack_3b4 + 0x792;
  iStack_3b4 = iStack_3b4 + 0x756;
  uStack_3c8 = 0;
  FUN_fffffffff001eb28(0xfffffffff013a928,&iStack_3d8,0x28);
  iStack_234 = *(int *)(g_3ab40 + 0x31dc);
  iStack_330 = iStack_234 + 0x20a0;
  iStack_2d4 = iStack_234 + 0x20d5;
  iStack_2d0 = iStack_234 + 0x20ac;
  iStack_2c8 = iStack_234 + 0x20c6;
  iStack_2c4 = iStack_234 + 0x20d6;
  iStack_2d8 = iStack_234 + 0x20c5;
  iStack_2c0 = iStack_234 + 0x20ae;
  iStack_32c = iStack_234 + 0x20a1;
  iStack_328 = iStack_234 + 0x20c0;
  iStack_2b4 = iStack_234 + 0x20d7;
  iStack_324 = iStack_234 + 0x20d0;
  iStack_2b0 = iStack_234 + 0x20b0;
  iStack_320 = iStack_234 + 0x20a2;
  iStack_2ac = iStack_234 + 0x20b1;
  iStack_2cc = iStack_234 + 0x20ad;
  iStack_2a8 = iStack_234 + 0x20c8;
  iStack_31c = iStack_234 + 0x20a3;
  iStack_318 = iStack_234 + 0x20c1;
  iStack_314 = iStack_234 + 0x20d1;
  iStack_310 = iStack_234 + 0x20a4;
  iStack_30c = iStack_234 + 0x20a5;
  iStack_308 = iStack_234 + 0x20c2;
  iStack_304 = iStack_234 + 0x20d2;
  iStack_300 = iStack_234 + 0x20a6;
  iStack_2fc = iStack_234 + 0x20a7;
  iStack_2f8 = iStack_234 + 0x20c3;
  iStack_2f4 = iStack_234 + 0x20d3;
  iStack_2f0 = iStack_234 + 0x20a8;
  iStack_2ec = iStack_234 + 0x20a9;
  iStack_2e8 = iStack_234 + 0x20c4;
  iStack_2e4 = iStack_234 + 0x20d4;
  iStack_2e0 = iStack_234 + 0x20aa;
  iStack_2dc = iStack_234 + 0x20ab;
  iStack_2bc = iStack_234 + 0x20af;
  iStack_2a4 = iStack_234 + 0x20d8;
  iStack_2a0 = iStack_234 + 0x20b2;
  iStack_29c = iStack_234 + 0x20b3;
  iStack_298 = iStack_234 + 0x20c9;
  iStack_294 = iStack_234 + 0x20d9;
  iStack_290 = iStack_234 + 0x20b4;
  iStack_28c = iStack_234 + 0x20b5;
  iStack_288 = iStack_234 + 0x20ca;
  iStack_284 = iStack_234 + 0x20da;
  iStack_280 = iStack_234 + 0x20b6;
  iStack_27c = iStack_234 + 0x20b7;
  iStack_278 = iStack_234 + 0x20cb;
  iStack_274 = iStack_234 + 0x20db;
  iStack_270 = iStack_234 + 0x20b8;
  iStack_26c = iStack_234 + 0x20b9;
  iStack_268 = iStack_234 + 0x20cc;
  iStack_264 = iStack_234 + 0x20dc;
  iStack_260 = iStack_234 + 0x20ba;
  iStack_25c = iStack_234 + 0x20bb;
  iStack_258 = iStack_234 + 0x20cd;
  iStack_254 = iStack_234 + 0x20dd;
  iStack_250 = iStack_234 + 0x20bc;
  iStack_24c = iStack_234 + 0x20bd;
  iStack_248 = iStack_234 + 0x20ce;
  iStack_244 = iStack_234 + 0x20de;
  iStack_240 = iStack_234 + 0x20be;
  iStack_23c = iStack_234 + 0x20bf;
  iStack_2b8 = iStack_234 + 0x20c7;
  iStack_238 = iStack_234 + 0x20cf;
  iStack_234 = iStack_234 + 0x20df;
  FUN_fffffffff001eb28(0xfffffffff013a950,&iStack_330,0x100);
  iStack_3b0 = *(int *)(g_3ab40 + 0x321c);
  iStack_3a8 = iStack_3b0 + 2;
  iStack_364 = iStack_3b0 + 0x13;
  iStack_360 = iStack_3b0 + 0x14;
  iStack_35c = iStack_3b0 + 0x15;
  iStack_358 = iStack_3b0 + 0x16;
  iStack_340 = iStack_3b0 + 0x1c;
  iStack_37c = iStack_3b0 + 0xd;
  iStack_378 = iStack_3b0 + 0xe;
  iStack_374 = iStack_3b0 + 0xf;
  iStack_370 = iStack_3b0 + 0x10;
  iStack_36c = iStack_3b0 + 0x11;
  iStack_368 = iStack_3b0 + 0x12;
  iStack_354 = iStack_3b0 + 0x17;
  iStack_350 = iStack_3b0 + 0x18;
  iStack_34c = iStack_3b0 + 0x19;
  iStack_348 = iStack_3b0 + 0x1a;
  iStack_344 = iStack_3b0 + 0x1b;
  iStack_3ac = iStack_3b0 + 1;
  iStack_3a4 = iStack_3b0 + 3;
  iStack_3a0 = iStack_3b0 + 4;
  iStack_39c = iStack_3b0 + 5;
  iStack_398 = iStack_3b0 + 6;
  iStack_394 = iStack_3b0 + 7;
  iStack_390 = iStack_3b0 + 8;
  iStack_38c = iStack_3b0 + 9;
  iStack_388 = iStack_3b0 + 10;
  iStack_384 = iStack_3b0 + 0xb;
  iStack_380 = iStack_3b0 + 0xc;
  iStack_33c = iStack_3b0 + 0x1d;
  iStack_338 = iStack_3b0 + 0x1e;
  iStack_334 = iStack_3b0 + 0x1f;
  FUN_fffffffff001eb28(0xfffffffff013aa50,&iStack_3b0,0x80);
  iStack_3f0 = *(int *)(g_3ab40 + 0x31e0) + 0x9e4;
  iStack_3ec = *(int *)(g_3ab40 + 0x31e0) + 0x9e3;
  FUN_fffffffff001eb28(&g_3ab70,&iStack_3f0,8);
  iStack_3e8 = *(int *)(g_3ab40 + 0x31e0) + 0x9e6;
  iStack_3e4 = *(int *)(g_3ab40 + 0x31e0) + 0x9e7;
  FUN_fffffffff001eb28(&g_3ab68,&iStack_3e8,8);
  iStack_3e0 = *(int *)(g_3ab40 + 0x31e0) + 0x9e8;
  iStack_3dc = *(int *)(g_3ab40 + 0x31e0) + 0x9e9;
  FUN_fffffffff001eb28(&g_3ab60,&iStack_3e0,8);
  return;
}


/* ---- sub_17b08 @ fffffffff0017b08 size=28 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long sub_17b08(long param_1)

{
  if (param_1 == 0) {
    return (long)*(int *)(g_3ab78 + 0xc0);
  }
  return 0;
}


/* ---- sub_17b24 @ fffffffff0017b24 size=20 ---- */

undefined8 sub_17b24(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = FUN_fffffffff0016e6c();
    return uVar1;
  }
  return 0xffff;
}


/* ---- FUN_fffffffff0017b38 @ fffffffff0017b38 size=64 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0017b38(ulong param_1)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  
  lVar2 = g_3ab78;
  puVar3 = (uint *)(g_3ab78 + (param_1 & 0xffffffff) * 0xc);
  *puVar3 = *puVar3 & 0xfffffffb;
  iVar1 = *(int *)(lVar2 + 0xd0);
  if (iVar1 != 0) {
    *(int *)(lVar2 + 0xd0) = iVar1 + -1;
  }
  return;
}


/* ---- FUN_fffffffff0017b78 @ fffffffff0017b78 size=80 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_fffffffff0017b78(ulong param_1)

{
  if ((param_1 != 0) && (param_1 != 0xffff)) {
    return *(uint *)(g_3ab78 + (param_1 & 0xffffffff) * 0xc) >> 2 & 1;
  }
  return 0;
}


/* ---- FUN_fffffffff0017bc8 @ fffffffff0017bc8 size=252 ---- */

undefined8 FUN_fffffffff0017bc8(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  uVar4 = 0;
  do {
    uVar2 = 0;
    do {
      while( true ) {
        lVar1 = *(long *)(param_1 + (uVar2 & 0xffffffff) * 0x4c + (uVar4 & 0xffffffff) * 0x17c +
                         0xf0);
        uVar2 = (ulong)((int)uVar2 + 1);
        if (lVar1 == 0) break;
        do {
          lVar3 = FUN_fffffffff0008424(lVar1,&uStack_48,1);
          if (lVar3 == 0) {
            return 0;
          }
          lVar1 = *(long *)(lVar1 + 8);
        } while (lVar1 != 0);
        if (uVar2 == 5) goto LAB_fffffffff0017c60;
      }
    } while (uVar2 != 5);
LAB_fffffffff0017c60:
    uVar4 = (ulong)((int)uVar4 + 1);
    if (uVar4 == 3) {
      return 1;
    }
  } while( true );
}


/* ---- FUN_fffffffff0017cc4 @ fffffffff0017cc4 size=168 ---- */

undefined8 FUN_fffffffff0017cc4(long param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    uVar1 = 0;
    uVar4 = 1;
  }
  else {
    uVar1 = 0;
    uVar4 = 1;
    do {
      while (lVar2 = FUN_fffffffff0008678(param_1), lVar2 == 0) {
        uVar3 = FUN_fffffffff0008be4(param_1);
        if (uVar1 < uVar3) {
          uVar1 = uVar3;
        }
        param_1 = *(long *)(param_1 + 8);
        uVar4 = 0;
        if (param_1 == 0) goto LAB_fffffffff0017d3c;
      }
      param_1 = *(long *)(param_1 + 8);
    } while (param_1 != 0);
  }
LAB_fffffffff0017d3c:
  *param_2 = uVar1;
  return uVar4;
}


/* ---- FUN_fffffffff0017d6c @ fffffffff0017d6c size=376 ---- */

long FUN_fffffffff0017d6c(long param_1,ulong *param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  
  uVar8 = 0;
  uVar3 = 0;
  uVar9 = 0;
  lVar10 = 1;
  uVar6 = 0;
  do {
    while( true ) {
      lVar2 = *(long *)(param_1 + uVar6 * 0x17c + (uVar3 & 0xffffffff) * 0x4c + 0xf0);
      if (lVar2 != 0) break;
LAB_fffffffff0017ec0:
      uVar3 = (ulong)((int)uVar3 + 1);
      if (uVar3 == 5) {
        uVar8 = uVar8 + 1;
        if ((uVar8 == 3) || (lVar10 == 0)) goto LAB_fffffffff0017e7c;
        uVar3 = 0;
        uVar6 = (ulong)uVar8;
      }
    }
    bVar1 = true;
    uVar7 = 0;
    do {
      while (lVar4 = FUN_fffffffff0008678(lVar2), lVar4 == 0) {
        uVar5 = FUN_fffffffff0008be4(lVar2);
        if (uVar7 < uVar5) {
          uVar7 = uVar5;
        }
        lVar2 = *(long *)(lVar2 + 8);
        bVar1 = false;
        if (lVar2 == 0) goto LAB_fffffffff0017e64;
      }
      lVar2 = *(long *)(lVar2 + 8);
    } while (lVar2 != 0);
LAB_fffffffff0017e64:
    if (bVar1) goto LAB_fffffffff0017ec0;
    if (uVar9 < uVar7) {
      uVar9 = uVar7;
    }
    uVar3 = (ulong)((int)uVar3 + 1);
    lVar10 = 0;
  } while (uVar3 != 5);
LAB_fffffffff0017e7c:
  *param_2 = uVar9;
  return lVar10;
}


/* ---- FUN_fffffffff0017ee4 @ fffffffff0017ee4 size=508 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff0017ee4(long param_1,undefined4 *param_2,ulong *param_3,long param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong auStack_78 [2];
  
  auStack_78[0] = 0;
  if (param_1 == 0) {
    iVar6 = 0;
    uVar5 = 0;
    do {
      while( true ) {
        uVar7 = (long)(*(int *)(g_3ab78 + 0xd4) + 1 + iVar6) & 0xf;
        uVar1 = *(uint *)(g_3ab78 + uVar7 * 0xc);
        if (((uVar1 & 1) != 0) && ((uVar7 == 0 || ((uVar1 >> 2 & 1) == 0)))) break;
LAB_fffffffff0018040:
        iVar6 = iVar6 + 1;
        if (iVar6 == 0x10) goto LAB_fffffffff0018048;
      }
      if ((*(uint *)(g_3ab40 + 0x3d28) & 8) != 0) {
        if (param_5 == 0) {
          if (*(int *)(param_4 + 0x78) != 0) {
            iVar2 = *(int *)(param_4 + 0x48);
joined_r0xfffffffff0018084:
            if ((long)iVar2 == uVar7) goto LAB_fffffffff0018040;
          }
        }
        else if ((param_5 == 1) && (*(int *)(param_4 + 0x74) != *(int *)(param_4 + 0x78))) {
          iVar2 = *(int *)(param_4 + 0x40);
          goto joined_r0xfffffffff0018084;
        }
      }
      lVar4 = FUN_fffffffff0017d6c
                        (*(undefined8 *)(g_3ab78 + uVar7 * 0xc + 4),auStack_78);
      if ((lVar4 != 0) || (auStack_78[0] == 0)) {
        lVar4 = FUN_fffffffff0017bc8(*(undefined8 *)(g_3ab78 + uVar7 * 0xc + 4));
        lVar3 = g_3ab78;
        if (lVar4 == 0) {
          *param_2 = 0xffff;
        }
        else {
          *param_2 = (int)uVar7;
          *(int *)(lVar3 + 0xd4) = (int)uVar7;
        }
        goto LAB_fffffffff0017f40;
      }
      if ((uVar5 != 0) && (uVar5 <= auStack_78[0])) goto LAB_fffffffff0018040;
      iVar6 = iVar6 + 1;
      uVar5 = auStack_78[0];
    } while (iVar6 != 0x10);
LAB_fffffffff0018048:
    *param_2 = 0xffff;
    lVar4 = 1;
  }
  else {
    *param_2 = 0xffff;
    uVar5 = 0;
    lVar4 = 1;
  }
LAB_fffffffff0017f40:
  *param_3 = uVar5;
  return lVar4;
}


/* ---- FUN_fffffffff00180e0 @ fffffffff00180e0 size=196 ---- */

long FUN_fffffffff00180e0
               (long param_1,int *param_2,undefined8 *param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  int iStack_3c;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  if (param_1 == 0) {
    iStack_3c = FUN_fffffffff0016e6c();
    if (iStack_3c != 0xffff) {
      *param_2 = iStack_3c;
      return 1;
    }
  }
  else {
    iStack_3c = 0xffff;
  }
  lVar1 = FUN_fffffffff0017ee4(param_1,&iStack_3c,&uStack_38,param_4,param_5);
  if (lVar1 != 0) {
    if (iStack_3c == 0xffff) {
      *param_3 = uStack_38;
    }
    else {
      *param_2 = iStack_3c;
    }
  }
  return lVar1;
}


/* ---- FUN_fffffffff00181a4 @ fffffffff00181a4 size=276 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff00181a4(uint *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  uint *puVar3;
  uint uStack_3c;
  undefined8 uStack_38;
  
  lVar2 = g_3ab78;
  if (3 < *(uint *)(g_3ab78 + 0xd0)) {
    return 0;
  }
  uStack_38 = 0;
  uStack_3c = FUN_fffffffff0016e6c();
  if (uStack_3c == 0xffff) {
    lVar1 = FUN_fffffffff0017ee4(0,&uStack_3c,&uStack_38,param_2,3);
    if (lVar1 == 0) {
      return 0;
    }
    if (uStack_3c == 0xffff) {
      lVar2 = g_3ab78;
      if (*param_1 == 0xffff) {
        return lVar1;
      }
    }
    else {
      *param_1 = uStack_3c;
      lVar2 = g_3ab78;
    }
  }
  else {
    *param_1 = uStack_3c;
    lVar1 = 1;
  }
  *(int *)(lVar2 + 0xd0) = *(int *)(lVar2 + 0xd0) + 1;
  puVar3 = (uint *)(lVar2 + (ulong)*param_1 * 0xc);
  puVar3[1] = (uint)param_2;
  puVar3[2] = (uint)((ulong)param_2 >> 0x20);
  *puVar3 = *puVar3 | 4;
  return lVar1;
}


/* ---- FUN_fffffffff00182b8 @ fffffffff00182b8 size=236 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_fffffffff00182b8(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  if (param_2 == 1) {
    lVar1 = *(long *)(param_1 + 0x10);
    if ((*(uint *)(g_3ab40 + 0x3d28) & 8) != 0) {
      return *(int *)(lVar1 + 0x48) != 0xffff;
    }
  }
  else {
    if (param_2 == 2) {
      return *(int *)(*(long *)(param_1 + 0x10) + 0x4c) != 0xffff;
    }
    if (param_2 != 0) {
      return false;
    }
    lVar1 = *(long *)(param_1 + 0x10);
    if ((param_3 == 3) && ((*(uint *)(g_3ab40 + 0x3d28) & 0x80) != 0)) {
      return *(int *)(lVar1 + 0x44) != 0xffff;
    }
  }
  return *(int *)(lVar1 + 0x40) != 0xffff;
}


/* ---- FUN_fffffffff00183a4 @ fffffffff00183a4 size=384 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_fffffffff00183a4(long param_1,long param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint *puVar4;
  
  if (param_2 == 1) {
    lVar3 = *(long *)(param_1 + 0x10);
    uVar2 = (ulong)*(int *)(lVar3 + 0x4c);
    if ((*(uint *)(g_3ab40 + 0x3d28) & 8) != 0) {
      if (uVar2 == 0xffff) {
        return 0xffff;
      }
      if ((long)*(int *)(lVar3 + 0x40) == uVar2) {
        return 0xffff;
      }
      *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x4c);
      goto LAB_fffffffff001848c;
    }
    if (uVar2 == 0xffff) {
      return 0xffff;
    }
  }
  else {
    if (param_2 == 2) {
      lVar3 = *(long *)(param_1 + 0x10);
      uVar2 = (ulong)*(int *)(lVar3 + 0x48);
      if ((uVar2 == 0xffff) && (uVar2 = (ulong)*(int *)(lVar3 + 0x40), uVar2 == 0xffff)) {
        return 0xffff;
      }
      *(int *)(lVar3 + 0x4c) = (int)uVar2;
      goto LAB_fffffffff001848c;
    }
    if ((param_2 != 0) ||
       ((uVar1 = *(uint *)(g_3ab40 + 0x3d28), param_3 == 3 && ((uVar1 & 0x80) != 0))))
    {
      return 0xffff;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    uVar2 = (ulong)*(int *)(lVar3 + 0x4c);
    if ((uVar1 & 8) == 0) {
      if (uVar2 == 0xffff) {
        return 0xffff;
      }
    }
    else {
      if (uVar2 == 0xffff) {
        return 0xffff;
      }
      if ((long)*(int *)(lVar3 + 0x48) == uVar2) {
        return 0xffff;
      }
    }
    if ((param_3 == 3) && ((uVar1 & 0x80) != 0)) {
      *(int *)(lVar3 + 0x44) = *(int *)(lVar3 + 0x4c);
      goto LAB_fffffffff001848c;
    }
  }
  *(int *)(lVar3 + 0x40) = (int)uVar2;
LAB_fffffffff001848c:
  puVar4 = (uint *)(g_3ab78 + (uVar2 & 0xffffffff) * 0xc);
  puVar4[1] = (uint)lVar3;
  *puVar4 = *puVar4 | 2;
  puVar4[2] = (uint)((ulong)lVar3 >> 0x20);
  return uVar2;
}


/* ---- FUN_fffffffff0018524 @ fffffffff0018524 size=28 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0018524(undefined8 param_1,long param_2)

{
  if (param_2 == 0) {
    return;
  }
  FUN_fffffffff001d074(g_3ab70,param_2,param_1);
  return;
}


/* ---- FUN_fffffffff0018540 @ fffffffff0018540 size=116 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0018540(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  
  uVar1 = g_3ab6c;
  FUN_fffffffff001d074(g_3ab68,(long)(int)((ulong)param_2 >> 8),param_1);
  FUN_fffffffff001d074
            (uVar1,(long)(int)((uint)((ulong)param_2 >> 0x28) & 0xff | (uint)(param_3 != 0) << 0x1f)
             ,param_1);
  return;
}


/* ---- FUN_fffffffff00185b4 @ fffffffff00185b4 size=104 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff00185b4(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  
  uVar1 = g_3ab64;
  FUN_fffffffff001d074(g_3ab60,(long)(int)(param_2 >> 8),param_1);
  FUN_fffffffff001d074(uVar1,param_2 >> 0x28 & 0xff,param_1);
  return;
}


/* ---- FUN_fffffffff001861c @ fffffffff001861c size=276 ---- */

void FUN_fffffffff001861c(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  
  lVar8 = (param_1 & 0xffffffff) * 0x1c;
  iVar1 = *(int *)(lVar8 + -0xfec5890);
  iVar2 = *(int *)(lVar8 + -0xfec5894);
  iVar3 = *(int *)(lVar8 + -0xfec588c);
  iVar4 = *(int *)(lVar8 + -0xfec5888);
  iVar5 = *(int *)(lVar8 + -0xfec5884);
  iVar6 = *(int *)(lVar8 + -0xfec5880);
  FUN_fffffffff001cdf4((long)*(int *)(lVar8 + -0xfec5898),(long)*(int *)(param_2 + 0x8c));
  uVar7 = *(ulong *)(param_2 + 0x24) | 1;
  FUN_fffffffff001cdf4((long)iVar2,(long)(int)uVar7);
  FUN_fffffffff001cdf4((long)iVar1,(long)uVar7 >> 0x20);
  lVar8 = *(long *)(param_2 + 0x2c);
  FUN_fffffffff001cdf4((long)iVar3,(long)*(int *)(param_2 + 0x2c));
  FUN_fffffffff001cdf4((long)iVar4,lVar8 >> 0x20);
  lVar8 = *(long *)(param_2 + 0x34);
  FUN_fffffffff001cdf4((long)iVar5,(long)*(int *)(param_2 + 0x34));
  FUN_fffffffff001cdf4((long)iVar6,lVar8 >> 0x20);
  return;
}


/* ---- FUN_fffffffff0018730 @ fffffffff0018730 size=60 ---- */

void FUN_fffffffff0018730(ulong param_1,long param_2,long param_3)

{
  if ((param_1 != 0xffff) && (param_2 != 0)) {
    FUN_fffffffff001cdf4((long)*(int *)((param_3 * 0x10 + (param_1 & 0xffffffff)) * 4 + -0xfec55b0))
    ;
    return;
  }
  return;
}


/* ---- FUN_fffffffff001876c @ fffffffff001876c size=364 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff001876c(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  uint *puVar2;
  
  if (param_2 == 1) {
    if ((*(uint *)(g_3ab40 + 0x3d28) & 8) != 0) {
      uVar1 = (ulong)*(int *)(param_1 + 0x48);
      if (uVar1 == 0xffff) {
        return;
      }
      *(undefined4 *)(param_1 + 0x48) = 0xffff;
      if ((long)*(int *)(param_1 + 0x40) == uVar1) {
        return;
      }
      goto LAB_fffffffff001879c;
    }
    uVar1 = (ulong)*(int *)(param_1 + 0x40);
    if (uVar1 == 0xffff) {
      return;
    }
  }
  else if (param_2 == 0) {
    if (param_3 == 3) {
      if ((*(uint *)(g_3ab40 + 0x3d28) & 0x80) != 0) {
        uVar1 = (ulong)*(int *)(param_1 + 0x44);
        if (uVar1 == 0xffff) {
          return;
        }
        *(undefined4 *)(param_1 + 0x44) = 0xffff;
        if ((long)*(int *)(param_1 + 0x40) == uVar1) {
          return;
        }
        goto LAB_fffffffff001879c;
      }
      uVar1 = (ulong)*(int *)(param_1 + 0x40);
      if (uVar1 == 0xffff) {
        return;
      }
    }
    else {
      uVar1 = (ulong)*(int *)(param_1 + 0x40);
      if (uVar1 == 0xffff) {
        return;
      }
    }
  }
  else {
    if (param_2 == 2) {
      uVar1 = (ulong)*(int *)(param_1 + 0x4c);
      if (uVar1 == 0xffff) {
        return;
      }
      *(undefined4 *)(param_1 + 0x4c) = 0xffff;
      if ((long)*(int *)(param_1 + 0x40) == uVar1) {
        return;
      }
      goto LAB_fffffffff001879c;
    }
    uVar1 = (ulong)*(int *)(param_1 + 0x40);
    if (uVar1 == 0xffff) {
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x40) = 0xffff;
LAB_fffffffff001879c:
  if ((((long)*(int *)(param_1 + 0x4c) != uVar1) && ((long)*(int *)(param_1 + 0x48) != uVar1)) &&
     ((long)*(int *)(param_1 + 0x44) != uVar1)) {
    puVar2 = (uint *)(g_3ab78 + (uVar1 & 0xffffffff) * 0xc);
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = *puVar2 & 0xfffffffd;
    return;
  }
  return;
}


/* ---- FUN_fffffffff00188d8 @ fffffffff00188d8 size=172 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff00188d8(long param_1,long param_2,uint param_3,long param_4)

{
  uint *puVar1;
  
  if (param_2 == 1) {
    if ((*(uint *)(g_3ab40 + 0x3d28) & 8) != 0) {
      *(uint *)(param_1 + 0x48) = param_3;
      goto LAB_fffffffff00188f0;
    }
  }
  else if (param_2 == 0) {
    if ((param_4 == 3) && ((*(uint *)(g_3ab40 + 0x3d28) & 0x80) != 0)) {
      *(uint *)(param_1 + 0x44) = param_3;
      goto LAB_fffffffff00188f0;
    }
  }
  else if (param_2 == 2) {
    *(uint *)(param_1 + 0x4c) = param_3;
    goto LAB_fffffffff00188f0;
  }
  *(uint *)(param_1 + 0x40) = param_3;
LAB_fffffffff00188f0:
  puVar1 = (uint *)(g_3ab78 + (ulong)param_3 * 0xc);
  puVar1[1] = (uint)param_1;
  *puVar1 = *puVar1 | 2;
  puVar1[2] = (uint)((ulong)param_1 >> 0x20);
  return;
}


/* ---- sub_18984 @ fffffffff0018984 size=52 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 sub_18984(ulong param_1)

{
  return *(undefined8 *)(g_3ab78 + (param_1 & 0xffffffff) * 0xc + 4);
}


/* ---- FUN_fffffffff00189b8 @ fffffffff00189b8 size=132 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff00189b8(undefined4 *param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_2 + 0x6c) | *(int *)(param_2 + 0x68) << 0x10;
  uVar3 = *(uint *)(param_2 + 100);
  uVar1 = *(undefined4 *)(param_2 + 0x70);
  if (((*(uint *)(g_3ab40 + 0x3d28) & 0x80) != 0) &&
     (uVar3 = uVar3 >> 1, param_3 == 3)) {
    uVar2 = *(undefined4 *)(param_2 + 0x44);
    param_1[1] = uVar3 + *(int *)(param_2 + 0x60);
    *param_1 = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    param_1[4] = uVar1;
    return;
  }
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  param_1[1] = *(int *)(param_2 + 0x60);
  param_1[2] = uVar3;
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[4] = uVar1;
  return;
}


/* ---- FUN_fffffffff0018a3c @ fffffffff0018a3c size=152 ---- */

void FUN_fffffffff0018a3c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  if ((long)*param_1 == 0xffff) {
    return;
  }
  uVar4 = (ulong)((long)*param_1 << 0x20) >> 0x1c;
  iVar1 = *(int *)(uVar4 - 0xfec56a8);
  iVar2 = *(int *)(uVar4 - 0xfec56ac);
  iVar3 = *(int *)(uVar4 - 0xfec56a4);
  FUN_fffffffff001cdf4((long)*(int *)(uVar4 - 0xfec56b0),(long)param_1[1]);
  FUN_fffffffff001cdf4((long)iVar2,(long)param_1[2]);
  FUN_fffffffff001cdf4((long)iVar1,(long)param_1[3]);
  FUN_fffffffff001cdf4((long)iVar3,(long)param_1[4]);
  return;
}


/* ---- FUN_fffffffff0018ad4 @ fffffffff0018ad4 size=112 ---- */

void FUN_fffffffff0018ad4(long param_1)

{
  undefined1 auStack_28 [24];
  
  if (*(int *)(param_1 + 0x44) != 0xffff) {
    FUN_fffffffff00189b8(auStack_28,param_1,3);
    FUN_fffffffff0018a3c(auStack_28);
  }
  if (*(int *)(param_1 + 0x40) != 0xffff) {
    FUN_fffffffff00189b8(auStack_28,param_1,0);
    FUN_fffffffff0018a3c(auStack_28);
  }
  return;
}


/* ---- FUN_fffffffff0018b44 @ fffffffff0018b44 size=180 ---- */

ulong FUN_fffffffff0018b44(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_2 != 0) {
    uVar1 = param_2 + 0xfffU & 0xfffffffffffff000;
    if (uVar1 < 2) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      uVar4 = uVar1;
      do {
        uVar4 = uVar4 >> 1;
        lVar3 = lVar3 + 1;
      } while (uVar4 != 1);
    }
    uVar1 = 1L << (lVar3 + (ulong)((uVar1 - 1 & uVar1) != 0) & 0x3f);
    uVar4 = -uVar1 & param_1;
    uVar2 = uVar1 + uVar4;
    while (uVar2 < param_2 + param_1) {
      uVar4 = uVar1 * -2 & param_1;
      uVar2 = uVar1 * 2 + uVar4;
      uVar1 = uVar1 * 2;
    }
    return (uVar1 >> 1) + (uVar4 - 1) >> 0xb;
  }
  return 0x1fffffffff;
}


/* ---- FUN_fffffffff0018bf8 @ fffffffff0018bf8 size=412 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0018bf8(ulong param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint auStack_64 [3];
  
  lVar6 = param_2 * 0x14;
  iVar1 = *(int *)(lVar6 + -0xfec56d0);
  iVar2 = *(int *)(lVar6 + -0xfec56cc);
  iVar3 = *(int *)(lVar6 + -0xfec56d8);
  iVar4 = *(int *)(lVar6 + -0xfec56d4);
  lVar6 = (long)*(int *)(lVar6 + -0xfec56c8);
  if ((param_3 == 0) || (param_4 == 0)) {
    lVar7 = 0x1f;
    lVar8 = -1;
  }
  else {
    lVar7 = FUN_fffffffff0018b44(param_3,param_4);
    lVar8 = (long)(int)lVar7;
    lVar7 = lVar7 >> 0x20;
  }
  if (((*(uint *)(g_3ab40 + 0x3d28) & 0x20) != 0) && (lVar6 != 0)) {
    auStack_64[0] = 0;
    do {
      FUN_fffffffff001d0f8(lVar6,auStack_64);
    } while (auStack_64[0] == 0);
  }
  FUN_fffffffff001cdf4((long)iVar1,lVar8);
  FUN_fffffffff001cdf4((long)iVar2,lVar7);
  uVar5 = 1 << (param_1 & 0x1f);
  fence();
  FUN_fffffffff001cdf4((long)iVar3,uVar5 & 0xffff | (param_2 == 1 | 0xf8) << 0x10);
  auStack_64[0] = 0;
  while (FUN_fffffffff001d0f8((long)iVar4,auStack_64), (auStack_64[0] & uVar5) == 0) {
    FUN_fffffffff0016e54(0x32);
  }
  if (((*(uint *)(g_3ab40 + 0x3d28) & 0x20) != 0) && (lVar6 != 0)) {
    FUN_fffffffff001cdf4(lVar6,0);
  }
  return;
}


/* ---- FUN_fffffffff0018d94 @ fffffffff0018d94 size=1160 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff0018d94(long param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iStack_6c;
  undefined8 auStack_68 [3];
  
  *param_3 = 0;
  lVar7 = FUN_fffffffff00182b8(param_4);
  if (lVar7 != 0) {
    return 1;
  }
  iVar6 = FUN_fffffffff00183a4(param_1,param_2,param_4);
  lVar7 = (long)iVar6;
  if (lVar7 == 0xffff) {
    lVar9 = *(long *)(param_1 + 0x10);
    if ((*(uint *)(lVar9 + 0x90) & 8) == 0) {
      if ((*(uint *)(lVar9 + 0x90) & 4) != 0) {
        lVar9 = 1;
        lVar7 = (long)*(int *)(g_3ab78 + 0xcc);
        uVar5 = 0;
        goto joined_r0xfffffffff0018f6c;
      }
      auStack_68[0] = 0;
      iStack_6c = FUN_fffffffff0016e6c();
      lVar7 = (long)iStack_6c;
      if (lVar7 == 0xffff) {
        lVar9 = FUN_fffffffff0017ee4(0,&iStack_6c,auStack_68,lVar9,param_2);
        if (lVar9 == 0) {
          return 0;
        }
        lVar7 = (long)iStack_6c;
        uVar5 = 0;
        if (lVar7 == 0xffff) {
          uVar5 = auStack_68[0];
        }
        goto joined_r0xfffffffff0018f6c;
      }
      FUN_fffffffff00188d8(lVar9,param_2,lVar7,param_4);
      FUN_fffffffff001cd2c();
      FUN_fffffffff001861c(lVar7,*(undefined8 *)(param_1 + 0x10));
      lVar9 = 1;
      if (*(int *)(*(long *)(param_1 + 0x10) + 0x20) == 0) {
        FUN_fffffffff0018bf8(lVar7,0,0,0);
        FUN_fffffffff001cdd0();
        goto LAB_fffffffff0018e44;
      }
LAB_fffffffff001902c:
      FUN_fffffffff001cdf4((long)*(int *)(((ulong)(lVar7 << 0x20) >> 0x1e) - 0xfec55b0));
    }
    else {
      lVar7 = (long)*(int *)(lVar9 + 0x40);
      lVar9 = 1;
      uVar5 = 0;
joined_r0xfffffffff0018f6c:
      if (lVar7 == 0xffff) {
        *param_3 = uVar5;
        return lVar9;
      }
      FUN_fffffffff00188d8(*(undefined8 *)(param_1 + 0x10),param_2,lVar7,param_4);
      FUN_fffffffff001cd2c();
      FUN_fffffffff001861c(lVar7,*(undefined8 *)(param_1 + 0x10));
      if (*(int *)(*(long *)(param_1 + 0x10) + 0x20) != 0) goto LAB_fffffffff001902c;
    }
    FUN_fffffffff0018bf8(lVar7,0,0,0);
    FUN_fffffffff001cdd0();
    if (lVar9 != 1) {
      return lVar9;
    }
  }
  else if (param_2 == 2) {
    return 1;
  }
LAB_fffffffff0018e44:
  FUN_fffffffff001cd2c();
  uVar2 = g_3ab6c;
  FUN_fffffffff001d074(g_3ab68,0,lVar7);
  FUN_fffffffff001d074(uVar2,0,lVar7);
  uVar2 = g_3ab64;
  FUN_fffffffff001d074(g_3ab60,0,lVar7);
  FUN_fffffffff001d074(uVar2,0,lVar7);
  uVar2 = g_3ab6c;
  if (((*(uint *)(g_3ab40 + 0x3d28) & 8) == 0) || (param_2 != 0)) {
    lVar8 = *(long *)(param_1 + 0x10);
    lVar9 = *(long *)(lVar8 + 0x7c);
    if (lVar9 != 0) {
      uVar1 = *(uint *)(lVar8 + 0x90);
      FUN_fffffffff001d074(g_3ab68,(long)(int)((ulong)lVar9 >> 8),lVar7);
      FUN_fffffffff001d074
                (uVar2,(long)(int)((uint)((ulong)lVar9 >> 0x28) & 0xff | (uVar1 >> 4) << 0x1f),lVar7
                );
      uVar2 = g_3ab64;
      uVar4 = *(ulong *)(*(long *)(param_1 + 0x10) + 0x84);
      FUN_fffffffff001d074(g_3ab60,(long)(int)(uVar4 >> 8),lVar7);
      FUN_fffffffff001d074(uVar2,uVar4 >> 0x28 & 0xff,lVar7);
      lVar8 = *(long *)(param_1 + 0x10);
    }
    if ((*(uint *)(lVar8 + 0x90) & 2) != 0) goto LAB_fffffffff0019100;
LAB_fffffffff001909c:
    if ((param_2 == 2) ||
       (((*(uint *)(g_3ab40 + 0x3d28) & 8) == 0 &&
        ((*(uint *)(*(long *)(param_1 + 0x10) + 0x90) & 8) == 0)))) goto LAB_fffffffff0018f04;
    if (param_2 == 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      uVar2 = *(undefined4 *)(param_1 + 0x14);
      goto LAB_fffffffff0018ee4;
    }
    if (param_2 != 1) goto LAB_fffffffff0018f04;
    iVar6 = *(int *)(*(long *)(param_1 + 0x10) + 0x9c);
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    if ((*(uint *)(*(long *)(param_1 + 0x10) + 0x90) & 2) != 0) {
LAB_fffffffff0019100:
      FUN_fffffffff00189b8(auStack_68,param_4);
      FUN_fffffffff0018a3c(auStack_68);
      goto LAB_fffffffff001909c;
    }
LAB_fffffffff0018ee4:
    iVar6 = *(int *)(CONCAT44(uVar2,uVar3) + 0x98);
  }
  if (iVar6 != 0) {
    FUN_fffffffff001d074(g_3ab70,lVar7);
  }
LAB_fffffffff0018f04:
  FUN_fffffffff001cdd0();
  return 1;
}


/* ---- sub_1921c @ fffffffff001921c size=20 ---- */

ulong sub_1921c(long param_1,long param_2)

{
  return param_1 + -1 + param_2 & -param_2;
}


/* ---- sub_19230 @ fffffffff0019230 size=12 ---- */

ulong sub_19230(ulong param_1,long param_2)

{
  return -param_2 & param_1;
}


/* ---- sub_1923c @ fffffffff001923c size=36 ---- */

long sub_1923c(ulong param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (1 < param_1) {
    do {
      param_1 = param_1 >> 1;
      lVar1 = lVar1 + 1;
    } while (param_1 != 1);
    return lVar1;
  }
  return lVar1;
}


/* ---- sub_19260 @ fffffffff0019260 size=76 ---- */

ulong sub_19260(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (1 < param_1) {
    lVar1 = 0;
    uVar2 = param_1;
    do {
      uVar2 = uVar2 >> 1;
      lVar1 = lVar1 + 1;
    } while (uVar2 != 1);
    return lVar1 + (ulong)((param_1 - 1 & param_1) != 0);
  }
  return (ulong)((param_1 - 1 & param_1) != 0);
}


/* ---- FUN_fffffffff00192ac @ fffffffff00192ac size=680 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff00192ac(ulong param_1,uint param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int local_b0;
  int iStack_ac;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  int iStack_88;
  uint uStack_84;
  uint uStack_80;
  int iStack_7c;
  undefined8 uStack_78;
  int iStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  lVar1 = g_3ab40 + param_4 * 0x28;
  lVar2 = *(long *)(lVar1 + 0x3144);
  if (lVar2 == 0) {
    *(uint *)(lVar1 + 0x3140) = *(uint *)(lVar1 + 0x3140) | 4;
  }
  else {
    iStack_70 = *(int *)(lVar1 + 0x313c);
    lVar3 = (long)iStack_70;
    iStack_88 = *(int *)(lVar1 + 0x3124);
    uStack_84 = *(uint *)(lVar1 + 0x3128);
    uStack_80 = *(int *)(lVar1 + 0x312c);
    lVar5 = (long)(int)uStack_80;
    uStack_68 = *(undefined4 *)(lVar1 + 0x3144);
    iStack_7c = *(int *)(lVar1 + 0x3130);
    uStack_78 = *(undefined8 *)(lVar1 + 0x3134);
    uStack_6c = *(uint *)(lVar1 + 0x3140);
    uStack_64 = *(undefined4 *)(lVar1 + 0x3148);
    uStack_a8 = FUN_fffffffff000bd84();
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = param_1 & 0xffffffff;
    if (param_1 == 0) {
      uStack_90 = (ulong)param_2;
      uStack_98 = param_3;
    }
    else if ((param_1 == 1) || (param_1 == 3)) {
      uStack_98 = param_3;
    }
    uVar4 = lVar3 << 0x1c | 0x20;
    FUN_fffffffff001e144(uVar4,&uStack_a8,lVar2 + ((ulong)(lVar5 << 0x20) >> 0x1b) + 0x20);
    if (uStack_80 == 0 && iStack_7c == 0) {
      uVar4 = lVar3 << 0x1c | 4;
      local_b0 = 0;
      iStack_ac = 0;
      FUN_fffffffff001e144(uVar4,lVar2,&local_b0);
      FUN_fffffffff001e144(uVar4,lVar2 + 4,&iStack_ac);
      if (local_b0 != 0 || iStack_ac != 0) {
        uStack_80 = local_b0;
        iStack_7c = iStack_ac;
      }
    }
    uStack_80 = uStack_80 + 1;
    if (iStack_88 - 1U < uStack_80) {
      iStack_7c = iStack_7c + 1;
      uStack_80 = 0;
      uStack_6c = uStack_6c | 1;
    }
    uStack_78 = CONCAT44(iStack_7c,uStack_80);
    FUN_fffffffff001e144(uVar4 & 0xfffffffffc000000 | 8,&uStack_78,lVar2);
    if (uStack_80 == uStack_84) {
      FUN_fffffffff000bd8c(param_4);
    }
    lVar2 = g_3ab40 + (param_4 * 4 + (long)(int)param_4) * 8;
    *(int *)(lVar2 + 0x3124) = iStack_88;
    *(uint *)(lVar2 + 0x3128) = uStack_84;
    *(uint *)(lVar2 + 0x312c) = uStack_80;
    *(int *)(lVar2 + 0x3130) = iStack_7c;
    *(undefined4 *)(lVar2 + 0x3134) = (undefined4)uStack_78;
    *(undefined4 *)(lVar2 + 0x3138) = uStack_78._4_4_;
    *(int *)(lVar2 + 0x313c) = iStack_70;
    *(uint *)(lVar2 + 0x3140) = uStack_6c;
    *(undefined4 *)(lVar2 + 0x3144) = uStack_68;
    *(undefined4 *)(lVar2 + 0x3148) = uStack_64;
  }
  return;
}


/* ---- FUN_fffffffff0019554 @ fffffffff0019554 size=180 ---- */

void FUN_fffffffff0019554(long param_1)

{
  FUN_fffffffff001cd2c();
  if ((*(uint *)(param_1 + 0x54) & 0xe0) == 0x60) {
    FUN_fffffffff00192ac(1,0xf,*(undefined8 *)(param_1 + 0xb8),(long)*(int *)(param_1 + 0x30));
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xffffff1f | 0x20;
  }
  if ((*(uint *)(param_1 + 0x10) & 0x30) != 0) {
    FUN_fffffffff001cdd0();
    return;
  }
  FUN_fffffffff00192ac(0,2,*(undefined8 *)(param_1 + 0x4c),(long)*(int *)(param_1 + 0x30));
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffffffcf | 0x20;
  FUN_fffffffff001cdd0();
  return;
}


/* ---- FUN_fffffffff0019608 @ fffffffff0019608 size=176 ---- */

void FUN_fffffffff0019608(long param_1)

{
  long lVar1;
  
  FUN_fffffffff001cd2c();
  lVar1 = *(long *)(param_1 + 0x6c);
  if (*(uint *)(lVar1 + 0x2c) != 1) {
    if ((*(uint *)(lVar1 + 0x2c) < 2) || (lVar1 = FUN_fffffffff0008748(0), lVar1 == 0)) {
      FUN_fffffffff001cdd0();
      return;
    }
    lVar1 = *(long *)(param_1 + 0x6c);
  }
  FUN_fffffffff00192ac(0,2,*(undefined8 *)(lVar1 + 0x4c),(long)*(int *)(lVar1 + 0x30));
  *(uint *)(*(long *)(param_1 + 0x6c) + 0x10) =
       *(uint *)(*(long *)(param_1 + 0x6c) + 0x10) & 0xffffffcf | 0x20;
  FUN_fffffffff001cdd0();
  return;
}


/* ---- FUN_fffffffff00196b8 @ fffffffff00196b8 size=84 ---- */

void FUN_fffffffff00196b8(long param_1)

{
  FUN_fffffffff001cd2c();
  *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xffffff1f | 0x60;
  FUN_fffffffff00192ac(3,0xf,*(undefined8 *)(param_1 + 0xb8),(long)*(int *)(param_1 + 0x30));
  FUN_fffffffff001cdd0();
  return;
}


/* ---- FUN_fffffffff001970c @ fffffffff001970c size=80 ---- */

void FUN_fffffffff001970c(long param_1)

{
  FUN_fffffffff001cd2c();
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffffffcf;
  FUN_fffffffff00192ac(0,0,*(undefined8 *)(param_1 + 0x4c),(long)*(int *)(param_1 + 0x30));
  FUN_fffffffff001cdd0();
  return;
}


/* ---- FUN_fffffffff001975c @ fffffffff001975c size=408 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff001975c(uint *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if ((*param_1 & 0xe0) == 0x20) {
    FUN_fffffffff00192ac(3,0xf,*(undefined8 *)(param_1 + 0x19),param_3);
    *param_1 = *param_1 & 0xffffff1f | 0x60;
  }
  lVar3 = *(long *)(param_1 + 0x1b);
  iVar1 = 0;
  if (1 < *(uint *)(lVar3 + 0x2c)) {
    iVar1 = FUN_fffffffff0008748(0);
    lVar3 = *(long *)(param_1 + 0x1b);
    iVar1 = (uint)(iVar1 != 0) << 1;
  }
  if ((*(uint *)(lVar3 + 0x10) & 0x30) == 0x10) {
    FUN_fffffffff00192ac(0,iVar1,*(undefined8 *)(lVar3 + 0x4c),param_3);
    *(uint *)(*(long *)(param_1 + 0x1b) + 0x10) =
         *(uint *)(*(long *)(param_1 + 0x1b) + 0x10) & 0xffffffcf | iVar1 << 4;
    plVar2 = (long *)FUN_fffffffff0009a2c(param_3,param_2);
    if ((plVar2 != (long *)0x0) && (*(long *)(*(long *)(param_1 + 0x1b) + 0x4c) == *plVar2)) {
      *(undefined4 *)plVar2 = 0;
      *(undefined4 *)((long)plVar2 + 4) = 0;
    }
  }
  else {
    lVar3 = g_3ab40 + param_3 * 0x28;
    *(uint *)(lVar3 + 0x3140) = *(uint *)(lVar3 + 0x3140) | 2;
  }
  return;
}


/* ---- FUN_fffffffff00198f4 @ fffffffff00198f4 size=476 ---- */

void FUN_fffffffff00198f4(uint *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_fffffffff0009a2c(param_2);
  if (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    if ((*(uint *)(plVar2 + 2) & 1) == 0) {
      if (((lVar3 != 0) && (*(long *)(*(long *)(param_1 + 0x1b) + 0x4c) != lVar3)) &&
         ((*(uint *)(plVar2[1] + 0x10) & 0x30) != 0x20)) {
        FUN_fffffffff00192ac(0,2,param_2);
        *(uint *)(plVar2[1] + 0x10) = *(uint *)(plVar2[1] + 0x10) & 0xffffffcf | 0x20;
      }
    }
    else if (lVar3 != 0) {
      FUN_fffffffff00192ac(0,0,param_2);
    }
    if ((*param_1 & 0xe0) == 0x60) {
      FUN_fffffffff00192ac(1,0xf,*(undefined8 *)(param_1 + 0x19),param_2);
      *param_1 = *param_1 & 0xffffff1f | 0x20;
    }
    lVar3 = *(long *)(param_1 + 0x1b);
    if ((*(uint *)(lVar3 + 0x10) & 0x30) != 0x10) {
      FUN_fffffffff00192ac(0,1,*(undefined8 *)(lVar3 + 0x4c),param_2);
      lVar3 = *(long *)(param_1 + 0x1b);
      *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) & 0xffffffcf | 0x10;
    }
    *(int *)(plVar2 + 1) = (int)lVar3;
    *(int *)((long)plVar2 + 0xc) = (int)((ulong)lVar3 >> 0x20);
    uVar1 = *(undefined8 *)(lVar3 + 0x4c);
    *(int *)plVar2 = (int)uVar1;
    *(int *)((long)plVar2 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(uint *)(plVar2 + 2) = *(uint *)(plVar2 + 2) & 0xfffffffe;
  }
  return;
}


/* ---- FUN_fffffffff0019ad0 @ fffffffff0019ad0 size=172 ---- */

void FUN_fffffffff0019ad0(long param_1,long param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = *param_3;
  iVar2 = param_3[1];
  iVar3 = param_3[3];
  iVar4 = param_3[8];
  iVar5 = param_3[9];
  iVar6 = param_3[0xc];
  if (param_1 == 0) {
    if ((*(int *)(param_2 + 0x74) != param_3[2]) || (*(int *)(param_2 + 0x78) != iVar3)) {
      iVar7 = param_3[10];
      iVar8 = param_3[0xb];
      *(int *)(param_2 + 0x74) = param_3[2];
      *(int *)(param_2 + 0x78) = iVar3;
      *(int *)(param_2 + 0x7c) = iVar4;
      *(int *)(param_2 + 0x84) = iVar5;
      *(int *)(param_2 + 0x88) = iVar7;
      *(int *)(param_2 + 0x80) = iVar8;
      *(int *)(param_2 + 0x8c) = iVar1;
      *(int *)(param_2 + 0x90) = iVar2;
      *(int *)(param_2 + 0x94) = iVar6;
      return;
    }
  }
  else {
    if (param_1 != 1) {
      return;
    }
    if ((*(int *)(param_2 + 0x74) != iVar1) || (*(int *)(param_2 + 0x78) != iVar2)) {
      iVar3 = param_3[6];
      iVar7 = param_3[7];
      *(int *)(param_2 + 0x74) = iVar1;
      *(int *)(param_2 + 0x78) = iVar2;
      *(int *)(param_2 + 0x7c) = iVar3;
      *(int *)(param_2 + 0x84) = iVar7;
      *(int *)(param_2 + 0x88) = iVar4;
      *(int *)(param_2 + 0x80) = iVar5;
      *(int *)(param_2 + 0x94) = iVar6;
    }
  }
  return;
}


/* ---- FUN_fffffffff0019b7c @ fffffffff0019b7c size=260 ---- */

bool FUN_fffffffff0019b7c(long param_1,long param_2,int *param_3,undefined1 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_3[1];
  iVar2 = param_3[8];
  iVar3 = param_3[9];
  if (param_1 == 0) {
    if ((*(int *)(param_2 + 0x74) == param_3[2]) && (*(int *)(param_2 + 0x78) == param_3[3])) {
      return false;
    }
    if (*(int *)(param_2 + 0x94) != param_3[0xc]) {
      return false;
    }
    if (iVar3 == param_3[10]) {
      return false;
    }
    if ((((*(int *)(param_2 + 0x7c) == iVar2) && (*(int *)(param_2 + 0x84) == iVar3)) &&
        (*(int *)(param_2 + 0x88) == param_3[10])) &&
       ((*(int *)(param_2 + 0x80) == param_3[0xb] && (*(int *)(param_2 + 0x8c) == *param_3)))) {
      iVar2 = *(int *)(param_2 + 0x90);
      *param_4 = 0;
      return iVar2 == iVar1;
    }
  }
  else {
    if (param_1 != 1) {
      return false;
    }
    if (((*(int *)(param_2 + 0x74) == *param_3) && (*(int *)(param_2 + 0x78) == iVar1)) ||
       ((*(int *)(param_2 + 0x94) != param_3[0xc] || (param_3[7] == iVar2)))) {
      return false;
    }
    if (((*(int *)(param_2 + 0x7c) == param_3[6]) && (*(int *)(param_2 + 0x84) == param_3[7])) &&
       (*(int *)(param_2 + 0x88) == iVar2)) {
      iVar1 = *(int *)(param_2 + 0x80);
      *param_4 = 0;
      return iVar1 == iVar3;
    }
  }
  *param_4 = 0;
  return false;
}


/* ---- FUN_fffffffff0019c80 @ fffffffff0019c80 size=192 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff0019c80(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int aiStack_48 [2];
  
  aiStack_48[0] = 0;
  lVar1 = FUN_fffffffff000bd84();
  do {
    lVar2 = FUN_fffffffff000bd84();
    uVar3 = FUN_fffffffff000bd24(1000000);
    if (uVar3 <= (ulong)(lVar2 - lVar1)) {
      return;
    }
    FUN_fffffffff001e05c(0xc000004,*(undefined8 *)(g_3ab40 + 0x31c0),aiStack_48);
  } while (aiStack_48[0] != param_1);
  return;
}


/* ---- sub_19d40 @ fffffffff0019d40 size=28 ---- */

void sub_19d40(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  FUN_fffffffff001e05c(param_3 & 0x3ffffff | 0xc000000,param_1,param_2);
  return;
}


/* ---- sub_19d5c @ fffffffff0019d5c size=28 ---- */

void sub_19d5c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  FUN_fffffffff001e144(param_3 & 0x3ffffff | 0xc000000,param_1,param_2);
  return;
}


/* ---- FUN_fffffffff0019d78 @ fffffffff0019d78 size=188 ---- */

void FUN_fffffffff0019d78(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  if (param_1 == 0) {
    lVar2 = *(long *)(param_2 + 0x10) + 0x150;
    uVar1 = 0xc000030;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    lVar2 = *(long *)(param_2 + 0x10) + 0x158;
    uVar1 = 0xc000028;
  }
  FUN_fffffffff001e05c(uVar1,lVar2);
  FUN_fffffffff001e05c(0xc000008,*(long *)(param_2 + 0x10) + 0x808,param_3 + 0x30);
  return;
}


/* ---- FUN_fffffffff0019e34 @ fffffffff0019e34 size=176 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_fffffffff0019e34(long param_1,uint *param_2,long param_3)

{
  uint uStack_14;
  
  uStack_14 = 0;
  if (param_1 != 0) {
    return 0;
  }
  if ((*(uint *)(g_3ab40 + ((ulong)(param_3 << 0x20) >> 0x1b) + 0x271c) & 1) == 0) {
    return 0;
  }
  FUN_fffffffff001d1f8
            ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x1e72),&uStack_14,
             (long)((int)param_3 << 6));
  *param_2 = uStack_14 >> 5 & 7;
  return uStack_14 & 0x1f;
}


/* ---- FUN_fffffffff0019ee4 @ fffffffff0019ee4 size=668 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff0019ee4(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 auStack_58 [2];
  
  lVar6 = (param_2 & 0xffffffff) * 0x18;
  lVar5 = (param_3 & 0xffffffff) * 0xc0;
  lVar4 = g_3ab40 + lVar6 + lVar5;
  if ((*(uint *)(lVar4 + 0x275c) & 1) == 0) {
    return 0;
  }
  if ((**(uint **)(lVar4 + 0x2764) & 0x304) != 0) {
    return 0;
  }
  lVar6 = g_3ab40 + lVar6 + 0x275c + lVar5;
  *(int *)(g_3ab40 + 0x31c8) = *(int *)(g_3ab40 + 0x31c8) + 1;
  FUN_fffffffff000cd14(lVar6);
  FUN_fffffffff0019c80((long)*(int *)(g_3ab40 + 0x31c8));
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  auStack_58[0] = 0;
  lVar5 = *(long *)(lVar4 + 0x2764);
  FUN_fffffffff001e05c(0xc000030,*(long *)(lVar5 + 0x10) + 0x150,&uStack_88);
  FUN_fffffffff001e05c(0xc000008,*(long *)(lVar5 + 0x10) + 0x808,auStack_58);
  if (param_4 == 0) {
    local_d0 = uStack_88;
    uStack_c8 = uStack_80;
    uStack_c0 = uStack_78;
    uStack_b8 = uStack_70;
    uStack_b0 = uStack_68;
    uStack_a8 = uStack_60;
    uStack_a0 = auStack_58[0];
    lVar5 = FUN_fffffffff0019b7c(0,*(undefined8 *)(lVar4 + 0x2764),&local_d0,param_1);
    uVar1 = *(undefined4 *)(lVar4 + 0x2768);
    uVar2 = *(undefined4 *)(lVar4 + 0x2764);
    uVar3 = *(undefined8 *)(lVar4 + 0x2764);
    if (lVar5 != 0) {
      lVar5 = FUN_fffffffff000d280(lVar6,1);
      if (lVar5 == 0) {
        lVar4 = *(long *)(lVar4 + 0x2764);
        lVar5 = lVar4;
        goto LAB_fffffffff001a07c;
      }
      FUN_fffffffff000c738(lVar6,uVar3);
      goto LAB_fffffffff001a06c;
    }
  }
  else {
LAB_fffffffff001a06c:
    uVar1 = *(undefined4 *)(lVar4 + 0x2768);
    uVar2 = *(undefined4 *)(lVar4 + 0x2764);
  }
  lVar4 = CONCAT44(uVar1,uVar2);
  lVar5 = 0;
LAB_fffffffff001a07c:
  if ((*(int *)(lVar4 + 0x74) != (int)uStack_80) || (*(int *)(lVar4 + 0x78) != uStack_80._4_4_)) {
    *(int *)(lVar4 + 0x74) = (int)uStack_80;
    *(int *)(lVar4 + 0x78) = uStack_80._4_4_;
    *(undefined4 *)(lVar4 + 0x7c) = (undefined4)uStack_68;
    *(undefined4 *)(lVar4 + 0x84) = uStack_68._4_4_;
    *(undefined4 *)(lVar4 + 0x88) = (undefined4)uStack_60;
    *(undefined4 *)(lVar4 + 0x80) = uStack_60._4_4_;
    *(undefined4 *)(lVar4 + 0x8c) = (undefined4)uStack_88;
    *(undefined4 *)(lVar4 + 0x90) = uStack_88._4_4_;
    *(undefined4 *)(lVar4 + 0x94) = (undefined4)auStack_58[0];
  }
  return lVar5;
}


/* ---- FUN_fffffffff001a180 @ fffffffff001a180 size=272 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff001a180(undefined1 *param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint auStack_24 [3];
  
  param_2 = param_2 & 0xffffffff;
  auStack_24[0] = 0;
  FUN_fffffffff001d0f8((long)*(int *)(param_2 * 4 + -0xfec54a8),auStack_24);
  uVar3 = 0;
  do {
    lVar2 = g_3ab40;
    lVar4 = (uVar3 & 0xffffffff) * 0x18;
    lVar5 = g_3ab40 + lVar4 + param_2 * 0xf0;
    if ((*(uint *)(lVar5 + 0x291c) & 3) == 3) {
      uVar1 = auStack_24[0] >> ((long)((int)uVar3 << 2) & 0x1fU);
      if ((((**(uint **)(lVar5 + 0x2924) & 0x104) == 0) && ((uVar1 & 2) == 0)) &&
         (*param_1 = 0, (uVar1 & 0xc) != 0)) {
        return *(undefined8 *)(lVar2 + lVar4 + param_2 * 0xf0 + 0x2924);
      }
    }
    uVar3 = (ulong)((int)uVar3 + 1);
    if (uVar3 == 8) {
      return 0;
    }
  } while( true );
}


/* ---- FUN_fffffffff001a290 @ fffffffff001a290 size=1056 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff001a290(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (param_2 != 0) {
    if (param_2 == 2) {
      if (((*(uint *)(g_3ab40 + 0x28dc) & 1) != 0) &&
         (lVar6 = FUN_fffffffff001a180(0), lVar6 != 0)) {
        return lVar6;
      }
      if ((*(uint *)(g_3ab40 + 0x28fc) & 1) != 0) {
        lVar6 = FUN_fffffffff001a180(param_1,1);
        return lVar6;
      }
    }
    else {
      uVar7 = 0;
      do {
        uVar5 = uVar7 & 0xffffffff;
        uVar7 = (ulong)((int)uVar7 + 1);
        for (lVar6 = *(long *)(g_3ab40 + uVar5 * 0x58 + param_2 * 0x1b8 + 0x2be8);
            lVar6 != 0; lVar6 = *(long *)(lVar6 + 8)) {
          for (lVar2 = *(long *)(lVar6 + 0x18); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
            while (((*(uint *)(lVar2 + 0x54) & 0x107) == 3 &&
                   (lVar3 = FUN_fffffffff000b5e8
                                      (*(undefined8 *)(lVar2 + 0x58),
                                       *(uint *)(g_3ab40 + 0x3d28) >> 0xe & 1),
                   lVar3 != 0))) {
              lVar3 = lVar2 + 0x54;
              *(int *)(g_3ab40 + 0x31c8) =
                   *(int *)(g_3ab40 + 0x31c8) + 1;
              FUN_fffffffff000cd14(*(undefined8 *)(lVar2 + 0x58),0);
              FUN_fffffffff0019c80((long)*(int *)(g_3ab40 + 0x31c8));
              uStack_a8 = 0;
              uStack_a0 = 0;
              uStack_98 = 0;
              uStack_90 = 0;
              uStack_88 = 0;
              uStack_80 = 0;
              uStack_78 = 0;
              FUN_fffffffff0019d78(param_2,lVar3,&uStack_a8);
              if (param_3 == 0) {
                local_f0 = uStack_a8;
                uStack_e8 = uStack_a0;
                uStack_e0 = uStack_98;
                uStack_d8 = uStack_90;
                uStack_d0 = uStack_88;
                uStack_c8 = uStack_80;
                uStack_c0 = uStack_78;
                lVar4 = FUN_fffffffff0019b7c(param_2,lVar3,&local_f0,param_1);
                if (lVar4 != 0) {
                  local_f0 = uStack_a8;
                  uStack_e8 = uStack_a0;
                  uStack_e0 = uStack_98;
                  uStack_d8 = uStack_90;
                  uStack_d0 = uStack_88;
                  uStack_c8 = uStack_80;
                  uStack_c0 = uStack_78;
                  FUN_fffffffff0019ad0(param_2,lVar3,&local_f0);
                  return lVar3;
                }
              }
              local_f0 = uStack_a8;
              uStack_e8 = uStack_a0;
              uStack_e0 = uStack_98;
              uStack_d8 = uStack_90;
              uStack_d0 = uStack_88;
              uStack_c8 = uStack_80;
              uStack_c0 = uStack_78;
              FUN_fffffffff0019ad0(param_2,lVar3,&local_f0);
              lVar2 = *(long *)(lVar2 + 8);
              if (lVar2 == 0) goto LAB_fffffffff001a564;
            }
          }
LAB_fffffffff001a564:
        }
      } while (uVar7 != 5);
    }
    return 0;
  }
  lVar6 = 0;
  do {
    while( true ) {
      uStack_a8 = uStack_a8 & 0xffffffff00000000;
      iVar1 = (int)lVar6;
      if ((*(uint *)(g_3ab40 + ((ulong)(lVar6 << 0x20) >> 0x1b) + 0x271c) & 1) != 0)
      break;
      if (iVar1 == 1) {
        return 0;
      }
LAB_fffffffff001a3b8:
      lVar6 = 1;
    }
    FUN_fffffffff001d1f8
              ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x1e72),&uStack_a8,iVar1 << 6);
    if ((uStack_a8 & 0x1f) != 0) {
      lVar6 = FUN_fffffffff0019ee4(param_1,(uint)uStack_a8 >> 5 & 7,lVar6,param_3);
      if (iVar1 == 1) {
        return lVar6;
      }
      if (lVar6 != 0) {
        return lVar6;
      }
      goto LAB_fffffffff001a3b8;
    }
    if (lVar6 == 1) {
      return 0;
    }
    lVar6 = 1;
  } while( true );
}


/* ---- FUN_fffffffff001a6b0 @ fffffffff001a6b0 size=348 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_fffffffff001a6b0(ulong param_1)

{
  long lVar1;
  uint *puVar2;
  ulong uVar3;
  long lVar4;
  char acStack_31 [9];
  
  lVar1 = FUN_fffffffff000bd84();
  lVar4 = g_3ab40;
  if ((ulong)(lVar1 - *(long *)(g_3ab40 + 0x31b0)) <
      *(ulong *)(g_3ab40 + 0x31b8)) {
    uVar3 = (*(long *)(g_3ab40 + 0x31b0) + *(ulong *)(g_3ab40 + 0x31b8))
            - lVar1;
joined_r0xfffffffff001a7b4:
    if (param_1 < uVar3) {
      return param_1;
    }
  }
  else {
    *(int *)(g_3ab40 + 0x31b4) = (int)((ulong)lVar1 >> 0x20);
    *(int *)(lVar4 + 0x31b0) = (int)lVar1;
    acStack_31[0] = '\x01';
    lVar4 = 0;
    do {
      puVar2 = (uint *)FUN_fffffffff001a290(acStack_31,lVar4,0);
      lVar4 = (long)((int)lVar4 + 1);
      uVar3 = param_1;
      if (lVar4 == 3) {
        if (acStack_31[0] != '\0') {
          return param_1;
        }
        if (puVar2 != (uint *)0x0) goto LAB_fffffffff001a750;
        uVar3 = *(ulong *)(g_3ab40 + 0x31b8);
        goto joined_r0xfffffffff001a7b4;
      }
    } while (puVar2 == (uint *)0x0);
    if (acStack_31[0] == '\0') {
LAB_fffffffff001a750:
      *puVar2 = *puVar2 | 0x100;
      FUN_fffffffff000bce4((long)(int)puVar2[3]);
      *(uint *)(g_3ab40 + 0x3d28) = *(uint *)(g_3ab40 + 0x3d28) | 4;
      if (0xffffffff < param_1) {
        uVar3 = 0xffffffff;
      }
    }
  }
  return uVar3;
}


/* ---- FUN_fffffffff001a80c @ fffffffff001a80c size=96 ---- */

undefined8 FUN_fffffffff001a80c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_fffffffff000d280(1);
  if (lVar1 == 0) {
    return 1;
  }
  FUN_fffffffff000c738(param_1,param_2);
  return 0;
}


/* ---- FUN_fffffffff001a86c @ fffffffff001a86c size=140 ---- */

undefined8 FUN_fffffffff001a86c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uStack_24;
  
  uVar2 = (ulong)(int)(*(uint *)(param_1 + 4) >> 3);
  uVar1 = 1 << ((long)(int)(*(uint *)(param_1 + 4) >> 7) & 0x1fU);
  FUN_fffffffff001cdf4((long)*(int *)((uVar2 & 0xf) * 4 + -0xfec54b0),(long)(int)uVar1);
  do {
    uStack_24 = 0;
    FUN_fffffffff001d0f8((long)*(int *)((uVar2 & 0xf) * 4 + -0xfec54b0),&uStack_24);
  } while ((uStack_24 & uVar1) != 0);
  return 1;
}


/* ---- FUN_fffffffff001a8f8 @ fffffffff001a8f8 size=308 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff001a8f8(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  long lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  uVar16 = (undefined4)((ulong)param_1 >> 0x20);
  uVar15 = (undefined4)param_1;
  iVar1 = *(int *)(param_2 + 0x10);
  iVar2 = *(int *)(param_2 + 0x14);
  iVar3 = *(int *)(param_2 + 0x18);
  iVar4 = *(int *)(param_2 + 0x1c);
  uVar5 = *(undefined4 *)(param_2 + 0x24);
  uVar6 = *(undefined4 *)(param_2 + 0x28);
  uVar7 = *(undefined4 *)(param_2 + 0x2c);
  uVar8 = *(undefined4 *)(param_2 + 0x30);
  uVar9 = *(undefined4 *)(param_2 + 0x34);
  uVar10 = *(undefined4 *)(param_2 + 0x38);
  uVar11 = *(undefined4 *)(param_2 + 0x3c);
  uVar12 = *(undefined4 *)(param_2 + 0xc);
  uVar13 = *(undefined4 *)(param_2 + 0x40);
  *(byte *)(param_1 + 0xa0) = *(byte *)(param_1 + 0xa0) & 0xfc | *(byte *)(param_2 + 8) & 3;
  *(undefined4 *)(param_1 + 0xa4) = uVar12;
  *(int *)(param_1 + 0xa8) = iVar1;
  *(int *)(param_1 + 0xac) = iVar2;
  *(int *)(param_1 + 0xb0) = iVar3;
  *(int *)(param_1 + 0xb4) = iVar4;
  *(undefined4 *)(param_1 + 0xb8) = uVar5;
  *(undefined4 *)(param_1 + 0xbc) = uVar6;
  *(undefined4 *)(param_1 + 0xc0) = uVar7;
  *(undefined4 *)(param_1 + 0xc4) = uVar8;
  *(undefined4 *)(param_1 + 200) = uVar9;
  *(undefined4 *)(param_1 + 0xcc) = uVar10;
  *(undefined4 *)(param_1 + 0xd0) = uVar11;
  *(undefined4 *)(param_1 + 0xd4) = uVar13;
  lVar14 = g_3ab40;
  if (iVar1 < 0) {
    *(undefined4 *)(g_3ab40 + 0x3d78) = uVar15;
    *(undefined4 *)(lVar14 + 0x3d7c) = uVar16;
    lVar14 = g_3ab40;
  }
  if (iVar2 < 0) {
    g_3ab40 = lVar14;
    *(undefined4 *)(lVar14 + 0x3d80) = uVar15;
    *(undefined4 *)(lVar14 + 0x3d84) = uVar16;
    lVar14 = g_3ab40;
  }
  g_3ab40 = lVar14;
  if (iVar3 < 0) {
    *(undefined4 *)(lVar14 + 0x3d88) = uVar15;
    *(undefined4 *)(lVar14 + 0x3d8c) = uVar16;
  }
  lVar14 = g_3ab40;
  if (iVar4 < 0) {
    *(undefined4 *)(g_3ab40 + 0x3d90) = uVar15;
    *(undefined4 *)(lVar14 + 0x3d94) = uVar16;
  }
  *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 0x40;
  return;
}


/* ---- FUN_fffffffff001aa2c @ fffffffff001aa2c size=204 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff001aa2c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = g_3ab40;
  if ((param_1 == *(long *)(g_3ab40 + 0x3d78)) && (-1 < *(int *)(param_2 + 0x10))) {
    *(undefined4 *)(g_3ab40 + 0x3d78) = 0;
    *(undefined4 *)(lVar1 + 0x3d7c) = 0;
  }
  if ((param_1 == *(long *)(lVar1 + 0x3d80)) && (-1 < *(int *)(param_2 + 0x14))) {
    *(undefined4 *)(lVar1 + 0x3d80) = 0;
    *(undefined4 *)(lVar1 + 0x3d84) = 0;
  }
  if ((param_1 == *(long *)(lVar1 + 0x3d88)) && (-1 < *(int *)(param_2 + 0x18))) {
    *(undefined4 *)(lVar1 + 0x3d88) = 0;
    *(undefined4 *)(lVar1 + 0x3d8c) = 0;
  }
  if ((param_1 == *(long *)(lVar1 + 0x3d90)) && (-1 < *(int *)(param_2 + 0x1c))) {
    *(undefined4 *)(lVar1 + 0x3d90) = 0;
    *(undefined4 *)(lVar1 + 0x3d94) = 0;
    return;
  }
  return;
}


/* ---- FUN_fffffffff001aaf8 @ fffffffff001aaf8 size=312 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_fffffffff001aaf8(undefined8 *param_1)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = FUN_fffffffff0013bcc((long)*(int *)((long)param_1 + 0x44),*param_1);
  bVar2 = false;
  if ((*(int *)(param_1 + 2) < 0) && (*(long *)(g_3ab40 + 0x3d78) != 0)) {
    bVar2 = *(long *)(g_3ab40 + 0x3d78) != lVar3;
    iVar1 = *(int *)((long)param_1 + 0x14);
  }
  else {
    iVar1 = *(int *)((long)param_1 + 0x14);
  }
  if (((iVar1 < 0) && (*(long *)(g_3ab40 + 0x3d80) != 0)) &&
     (*(long *)(g_3ab40 + 0x3d80) != lVar3)) {
    iVar1 = *(int *)(param_1 + 3);
    bVar2 = true;
  }
  else {
    iVar1 = *(int *)(param_1 + 3);
  }
  if (((iVar1 < 0) && (*(long *)(g_3ab40 + 0x3d88) != 0)) &&
     (*(long *)(g_3ab40 + 0x3d88) != lVar3)) {
    iVar1 = *(int *)((long)param_1 + 0x1c);
    bVar2 = true;
  }
  else {
    iVar1 = *(int *)((long)param_1 + 0x1c);
  }
  if (((iVar1 < 0) && (*(long *)(g_3ab40 + 0x3d90) != 0)) &&
     (*(long *)(g_3ab40 + 0x3d90) != lVar3)) {
    return true;
  }
  return bVar2;
}


/* ---- sub_1ac30 @ fffffffff001ac30 size=164 ---- */

uint sub_1ac30(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_fffffffff0013bcc((long)*(int *)((long)param_1 + 0x44),*param_1);
  uVar1 = 0;
  if (-1 < *(int *)(param_1 + 2)) {
    uVar1 = *(uint *)(lVar2 + 0xa8) >> 0x1f;
  }
  if ((-1 < *(int *)((long)param_1 + 0x14)) && (*(int *)(lVar2 + 0xac) < 0)) {
    uVar1 = 1;
  }
  if ((-1 < *(int *)(param_1 + 3)) && (*(int *)(lVar2 + 0xb0) < 0)) {
    uVar1 = 1;
  }
  if ((-1 < *(int *)((long)param_1 + 0x1c)) && (*(int *)(lVar2 + 0xb4) < 0)) {
    return 1;
  }
  return uVar1;
}


/* ---- FUN_fffffffff001acd4 @ fffffffff001acd4 size=1444 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff001acd4(long param_1,byte *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int local_58 [4];
  
  if ((*(uint *)(g_3ab40 + 0x3d28) & 8) == 0) {
    iVar1 = *(int *)(param_1 + 0x40);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x48);
  }
  uVar3 = (ulong)iVar1;
  local_58[0] = 0;
  FUN_fffffffff001d358(*(int *)(g_3ab40 + 0x31e0) + 0x9e5,local_58,uVar3);
  local_58[0] = CONCAT31(local_58[0]._1_3_,(byte)local_58[0] & 0xfc | *param_2 & 3);
  FUN_fffffffff001d074(*(int *)(g_3ab40 + 0x31e0) + 0x9e5,(long)local_58[0],uVar3);
  FUN_fffffffff001d074
            (*(int *)(g_3ab40 + 0x31dc) + 0x1f72,(long)*(int *)(param_2 + 4),uVar3);
  if (param_1 == *(long *)(g_3ab40 + 0x3d78)) {
    iVar1 = *(int *)(param_2 + 8);
    if (-1 < (long)iVar1) {
      FUN_fffffffff001cdf4
                ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x204a),
                 (long)*(int *)(g_3ab40 + 0x3d48));
      FUN_fffffffff001cdf4
                ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x2049),
                 (long)*(int *)(g_3ab40 + 0x3d58));
      FUN_fffffffff001cdf4
                ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x2048),
                 (long)*(int *)(g_3ab40 + 0x3d68));
      goto LAB_fffffffff001addc;
    }
    if (*(int *)(param_2 + 0x18) != 0) {
      FUN_fffffffff001cdf4((long)(*(int *)(g_3ab40 + 0x31dc) + 0x2049));
    }
    if (*(int *)(param_2 + 0x28) != 0) {
      FUN_fffffffff001cdf4((long)(*(int *)(g_3ab40 + 0x31dc) + 0x2048));
    }
    FUN_fffffffff001cdf4
              ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x204a),
               (uVar3 & 0xf) << 0x18 | (long)iVar1 & 0xfffffffff0ffffffU);
    if (param_1 == *(long *)(g_3ab40 + 0x3d80)) goto LAB_fffffffff001aed8;
LAB_fffffffff001adf8:
    lVar2 = *(long *)(g_3ab40 + 0x3d88);
  }
  else {
LAB_fffffffff001addc:
    if (param_1 != *(long *)(g_3ab40 + 0x3d80)) goto LAB_fffffffff001adf8;
LAB_fffffffff001aed8:
    iVar1 = *(int *)(param_2 + 0xc);
    if (-1 < (long)iVar1) {
      FUN_fffffffff001cdf4
                ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x204d),
                 (long)*(int *)(g_3ab40 + 0x3d4c));
      FUN_fffffffff001cdf4
                ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x204c),
                 (long)*(int *)(g_3ab40 + 0x3d5c));
      FUN_fffffffff001cdf4
                ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x204b),
                 (long)*(int *)(g_3ab40 + 0x3d6c));
      goto LAB_fffffffff001adf8;
    }
    if (*(int *)(param_2 + 0x1c) != 0) {
      FUN_fffffffff001cdf4((long)(*(int *)(g_3ab40 + 0x31dc) + 0x204c));
    }
    if (*(int *)(param_2 + 0x2c) != 0) {
      FUN_fffffffff001cdf4((long)(*(int *)(g_3ab40 + 0x31dc) + 0x204b));
    }
    FUN_fffffffff001cdf4
              ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x204d),
               (uVar3 & 0xf) << 0x18 | (long)iVar1 & 0xfffffffff0ffffffU);
    lVar2 = *(long *)(g_3ab40 + 0x3d88);
  }
  if (param_1 == lVar2) {
    iVar1 = *(int *)(param_2 + 0x10);
    if ((long)iVar1 < 0) {
      if (*(int *)(param_2 + 0x20) != 0) {
        FUN_fffffffff001cdf4((long)(*(int *)(g_3ab40 + 0x31dc) + 0x204f));
      }
      if (*(int *)(param_2 + 0x30) != 0) {
        FUN_fffffffff001cdf4((long)(*(int *)(g_3ab40 + 0x31dc) + 0x204e));
      }
      FUN_fffffffff001cdf4
                ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x2050),
                 (uVar3 & 0xf) << 0x18 | (long)iVar1 & 0xfffffffff0ffffffU);
      lVar2 = *(long *)(g_3ab40 + 0x3d90);
      goto joined_r0xfffffffff001afc4;
    }
    FUN_fffffffff001cdf4
              ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x2050),
               (long)*(int *)(g_3ab40 + 0x3d50));
    FUN_fffffffff001cdf4
              ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x204f),
               (long)*(int *)(g_3ab40 + 0x3d60));
    FUN_fffffffff001cdf4
              ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x204e),
               (long)*(int *)(g_3ab40 + 0x3d70));
  }
  lVar2 = *(long *)(g_3ab40 + 0x3d90);
joined_r0xfffffffff001afc4:
  if (param_1 == lVar2) {
    iVar1 = *(int *)(param_2 + 0x14);
    if ((long)iVar1 < 0) {
      if (*(int *)(param_2 + 0x24) != 0) {
        FUN_fffffffff001cdf4((long)(*(int *)(g_3ab40 + 0x31dc) + 0x2052));
      }
      if (*(int *)(param_2 + 0x34) != 0) {
        FUN_fffffffff001cdf4((long)(*(int *)(g_3ab40 + 0x31dc) + 0x2051));
      }
      FUN_fffffffff001cdf4
                ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x2053),
                 (uVar3 & 0xf) << 0x18 | (long)iVar1 & 0xfffffffff0ffffffU);
    }
    else {
      FUN_fffffffff001cdf4
                ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x2053),
                 (long)*(int *)(g_3ab40 + 0x3d54));
      FUN_fffffffff001cdf4
                ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x2052),
                 (long)*(int *)(g_3ab40 + 0x3d64));
      FUN_fffffffff001cdf4
                ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x2051),
                 (long)*(int *)(g_3ab40 + 0x3d74));
    }
  }
  return;
}


/* ---- FUN_fffffffff001b278 @ fffffffff001b278 size=828 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff001b278(long param_1)

{
  int iVar1;
  long lVar2;
  
  if ((*(uint *)(g_3ab40 + 0x3d28) & 8) == 0) {
    iVar1 = *(int *)(param_1 + 0x40);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x48);
  }
  FUN_fffffffff001d074
            (*(int *)(g_3ab40 + 0x31e0) + 0x9e5,
             (long)*(int *)(g_3ab40 + 0x3d40),(long)iVar1);
  FUN_fffffffff001d074
            (*(int *)(g_3ab40 + 0x31dc) + 0x1f72,
             (long)*(int *)(g_3ab40 + 0x3d44),(long)iVar1);
  if (param_1 == *(long *)(g_3ab40 + 0x3d78)) {
    FUN_fffffffff001cdf4
              ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x204a),
               (long)*(int *)(g_3ab40 + 0x3d48));
    FUN_fffffffff001cdf4
              ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x2049),
               (long)*(int *)(g_3ab40 + 0x3d58));
    FUN_fffffffff001cdf4
              ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x2048),
               (long)*(int *)(g_3ab40 + 0x3d68));
    lVar2 = *(long *)(g_3ab40 + 0x3d80);
  }
  else {
    lVar2 = *(long *)(g_3ab40 + 0x3d80);
  }
  if (param_1 == lVar2) {
    FUN_fffffffff001cdf4
              ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x204d),
               (long)*(int *)(g_3ab40 + 0x3d4c));
    FUN_fffffffff001cdf4
              ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x204c),
               (long)*(int *)(g_3ab40 + 0x3d5c));
    FUN_fffffffff001cdf4
              ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x204b),
               (long)*(int *)(g_3ab40 + 0x3d6c));
    lVar2 = *(long *)(g_3ab40 + 0x3d88);
  }
  else {
    lVar2 = *(long *)(g_3ab40 + 0x3d88);
  }
  if (param_1 == lVar2) {
    FUN_fffffffff001cdf4
              ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x2050),
               (long)*(int *)(g_3ab40 + 0x3d50));
    FUN_fffffffff001cdf4
              ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x204f),
               (long)*(int *)(g_3ab40 + 0x3d60));
    FUN_fffffffff001cdf4
              ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x204e),
               (long)*(int *)(g_3ab40 + 0x3d70));
    lVar2 = *(long *)(g_3ab40 + 0x3d90);
  }
  else {
    lVar2 = *(long *)(g_3ab40 + 0x3d90);
  }
  if (param_1 == lVar2) {
    FUN_fffffffff001cdf4
              ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x2053),
               (long)*(int *)(g_3ab40 + 0x3d54));
    FUN_fffffffff001cdf4
              ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x2052),
               (long)*(int *)(g_3ab40 + 0x3d64));
    FUN_fffffffff001cdf4
              ((long)(*(int *)(g_3ab40 + 0x31dc) + 0x2051),
               (long)*(int *)(g_3ab40 + 0x3d74));
    return;
  }
  return;
}


/* ---- FUN_fffffffff001b5b4 @ fffffffff001b5b4 size=240 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff001b5b4(void)

{
  uint local_28 [2];
  
  local_28[0] = 0;
  FUN_fffffffff001d0f8((long)(*(int *)(g_3ab40 + 0x31e0) + 0x1943),local_28);
  local_28[0] = local_28[0] | 2;
  FUN_fffffffff001cdf4((long)(*(int *)(g_3ab40 + 0x31e0) + 0x1943));
  FUN_fffffffff001d0f8((long)(*(int *)(g_3ab40 + 0x31e0) + 0x1943),local_28);
  FUN_fffffffff001d0f8((long)(*(int *)(g_3ab40 + 0x31e0) + 0x1943),local_28);
  FUN_fffffffff001d0f8((long)(*(int *)(g_3ab40 + 0x31e0) + 0x1943),local_28);
  FUN_fffffffff001d0f8((long)(*(int *)(g_3ab40 + 0x31e0) + 0x1943),local_28);
  FUN_fffffffff001d0f8((long)(*(int *)(g_3ab40 + 0x31e0) + 0x1943),local_28);
  return;
}


/* ---- FUN_fffffffff001b6a4 @ fffffffff001b6a4 size=248 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff001b6a4(long param_1)

{
  uint local_28 [2];
  
  if ((*(uint *)(param_1 + 0x90) & 0x40) == 0) {
    return;
  }
  if ((((((ulong)(long)*(int *)(g_3ab40 + 0x3d28) >> 0xc & 1) != 0) &&
       (*(int *)(param_1 + 0x284) == 0)) && (*(int *)(param_1 + 0x2d0) == 0)) &&
     (((*(int *)(param_1 + 0x31c) == 0 && (*(int *)(param_1 + 0x368) == 0)) &&
      (*(int *)(param_1 + 0x3b4) == 0)))) {
    FUN_fffffffff001cd2c();
    FUN_fffffffff001b5b4();
    FUN_fffffffff001b278(param_1);
    local_28[0] = 0;
    FUN_fffffffff001d0f8((long)(*(int *)(g_3ab40 + 0x31e0) + 0x1943),local_28);
    local_28[0] = local_28[0] & 0xfffffffd;
    FUN_fffffffff001cdf4((long)(*(int *)(g_3ab40 + 0x31e0) + 0x1943));
    FUN_fffffffff001cdd0();
    return;
  }
  return;
}


/* ---- sub_1b79c @ fffffffff001b79c size=120 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_1b79c(void)

{
  uint local_28 [2];
  
  local_28[0] = 0;
  FUN_fffffffff001d0f8((long)(*(int *)(g_3ab40 + 0x31e0) + 0x1943),local_28);
  local_28[0] = local_28[0] & 0xfffffffd;
  FUN_fffffffff001cdf4((long)(*(int *)(g_3ab40 + 0x31e0) + 0x1943));
  return;
}


/* ---- FUN_fffffffff001b814 @ fffffffff001b814 size=776 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_fffffffff001b814(long param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined4 uStack_34;
  
  if ((*(uint *)(g_3ab40 + 0x3d28) & 8) == 0) {
    iVar2 = *(int *)(param_1 + 0x40);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x48);
  }
  lVar3 = (long)iVar2;
  if (lVar3 != 0xffff) {
    uStack_34 = 0;
    FUN_fffffffff001d358(*(int *)(g_3ab40 + 0x31e0) + 0x9e5,&uStack_34,lVar3);
    piVar1 = (int *)(g_3ab40 + 0x31dc);
    *(undefined4 *)(g_3ab40 + 0x3d40) = uStack_34;
    uStack_34 = 0;
    FUN_fffffffff001d358(*piVar1 + 0x1f72,&uStack_34,lVar3);
    piVar1 = (int *)(g_3ab40 + 0x31dc);
    *(undefined4 *)(g_3ab40 + 0x3d44) = uStack_34;
    uStack_34 = 0;
    FUN_fffffffff001d0f8((long)(*piVar1 + 0x204a),&uStack_34);
    piVar1 = (int *)(g_3ab40 + 0x31dc);
    *(undefined4 *)(g_3ab40 + 0x3d48) = uStack_34;
    uStack_34 = 0;
    FUN_fffffffff001d0f8((long)(*piVar1 + 0x2049),&uStack_34);
    piVar1 = (int *)(g_3ab40 + 0x31dc);
    *(undefined4 *)(g_3ab40 + 0x3d58) = uStack_34;
    uStack_34 = 0;
    FUN_fffffffff001d0f8((long)(*piVar1 + 0x2048),&uStack_34);
    piVar1 = (int *)(g_3ab40 + 0x31dc);
    *(undefined4 *)(g_3ab40 + 0x3d68) = uStack_34;
    uStack_34 = 0;
    FUN_fffffffff001d0f8((long)(*piVar1 + 0x204d),&uStack_34);
    piVar1 = (int *)(g_3ab40 + 0x31dc);
    *(undefined4 *)(g_3ab40 + 0x3d4c) = uStack_34;
    uStack_34 = 0;
    FUN_fffffffff001d0f8((long)(*piVar1 + 0x204c),&uStack_34);
    piVar1 = (int *)(g_3ab40 + 0x31dc);
    *(undefined4 *)(g_3ab40 + 0x3d5c) = uStack_34;
    uStack_34 = 0;
    FUN_fffffffff001d0f8((long)(*piVar1 + 0x204b),&uStack_34);
    piVar1 = (int *)(g_3ab40 + 0x31dc);
    *(undefined4 *)(g_3ab40 + 0x3d6c) = uStack_34;
    uStack_34 = 0;
    FUN_fffffffff001d0f8((long)(*piVar1 + 0x2050),&uStack_34);
    piVar1 = (int *)(g_3ab40 + 0x31dc);
    *(undefined4 *)(g_3ab40 + 0x3d50) = uStack_34;
    uStack_34 = 0;
    FUN_fffffffff001d0f8((long)(*piVar1 + 0x204f),&uStack_34);
    piVar1 = (int *)(g_3ab40 + 0x31dc);
    *(undefined4 *)(g_3ab40 + 0x3d60) = uStack_34;
    uStack_34 = 0;
    FUN_fffffffff001d0f8((long)(*piVar1 + 0x204e),&uStack_34);
    piVar1 = (int *)(g_3ab40 + 0x31dc);
    *(undefined4 *)(g_3ab40 + 0x3d70) = uStack_34;
    uStack_34 = 0;
    FUN_fffffffff001d0f8((long)(*piVar1 + 0x2053),&uStack_34);
    piVar1 = (int *)(g_3ab40 + 0x31dc);
    *(undefined4 *)(g_3ab40 + 0x3d54) = uStack_34;
    uStack_34 = 0;
    FUN_fffffffff001d0f8((long)(*piVar1 + 0x2052),&uStack_34);
    piVar1 = (int *)(g_3ab40 + 0x31dc);
    *(undefined4 *)(g_3ab40 + 0x3d64) = uStack_34;
    uStack_34 = 0;
    FUN_fffffffff001d0f8((long)(*piVar1 + 0x2051),&uStack_34);
    *(undefined4 *)(g_3ab40 + 0x3d74) = uStack_34;
  }
  return lVar3 != 0xffff;
}


/* ---- FUN_fffffffff001bb1c @ fffffffff001bb1c size=248 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff001bb1c(long param_1)

{
  long lVar1;
  undefined1 auStack_80 [72];
  uint local_38 [4];
  
  if ((*(uint *)(param_1 + 0x90) & 0x40) != 0) {
    if (((*(uint *)(g_3ab40 + 0x3d28) & 0x1000) == 0) &&
       (lVar1 = FUN_fffffffff001b814(), lVar1 != 0)) {
      *(uint *)(g_3ab40 + 0x3d28) = *(uint *)(g_3ab40 + 0x3d28) | 0x1000
      ;
    }
    FUN_fffffffff001cd2c();
    FUN_fffffffff001b5b4();
    FUN_fffffffff001eb28(auStack_80,param_1 + 0xa0,0x38);
    FUN_fffffffff001acd4(param_1,auStack_80);
    local_38[0] = 0;
    FUN_fffffffff001d0f8((long)(*(int *)(g_3ab40 + 0x31e0) + 0x1943),local_38);
    local_38[0] = local_38[0] & 0xfffffffd;
    FUN_fffffffff001cdf4((long)(*(int *)(g_3ab40 + 0x31e0) + 0x1943));
    FUN_fffffffff001cdd0();
    return;
  }
  return;
}


/* ---- FUN_fffffffff001bc14 @ fffffffff001bc14 size=968 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff001bc14(undefined8 *param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 auStack_90 [80];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar3 = FUN_fffffffff0013bcc((long)*(int *)((long)param_1 + 0x44),*param_1);
  uStack_40 = *(undefined8 *)(g_3ab40 + 0x3240);
  if (*(int *)(param_1 + 1) < 0) {
    lVar4 = FUN_fffffffff0016e00();
    if (lVar4 == 0) {
      return 1;
    }
    if (*(int *)(lVar3 + 0x74) != 0) {
      return 0;
    }
    FUN_fffffffff0016d78(lVar3,&uStack_40);
    lVar3 = g_3ab40;
    *(int *)(g_3ab40 + 0x3240) = (int)uStack_40;
    *(int *)(lVar3 + 0x3244) = (int)((ulong)uStack_40 >> 0x20);
    return 1;
  }
  lVar4 = FUN_fffffffff0016e00();
  if (lVar4 == 0) {
    FUN_fffffffff0011ff0(lVar3,0x153,0);
    FUN_fffffffff0016d30(lVar3,&uStack_40);
    lVar4 = g_3ab40;
    *(int *)(g_3ab40 + 0x3244) = (int)((ulong)lVar3 >> 0x20);
    *(int *)(lVar4 + 0x3240) = (int)lVar3;
    FUN_fffffffff001cd2c();
    uVar5 = *(uint *)(lVar3 + 0x90);
    if (*(int *)(param_1 + 4) != 0) goto LAB_fffffffff001bc94;
LAB_fffffffff001bdbc:
    if ((uVar5 >> 4 & 1) == 0) {
      FUN_fffffffff001eb28(auStack_90,param_1,0x48);
      lVar4 = FUN_fffffffff001aaf8(auStack_90);
      if (lVar4 != 0) goto LAB_fffffffff001bf5c;
      bVar2 = false;
      bVar1 = false;
    }
    else {
      *(uint *)(lVar3 + 0x90) = uVar5 & 0xffffffef;
      FUN_fffffffff001eb28(auStack_90,param_1,0x48);
      lVar4 = FUN_fffffffff001aaf8(auStack_90);
      if (lVar4 != 0) goto LAB_fffffffff001bdf4;
      bVar2 = true;
      bVar1 = false;
    }
  }
  else {
    FUN_fffffffff001cd2c();
    uVar5 = *(uint *)(lVar3 + 0x90);
    if (*(int *)(param_1 + 4) == 0) goto LAB_fffffffff001bdbc;
LAB_fffffffff001bc94:
    if ((uVar5 >> 4 & 1) == 0) {
      *(uint *)(lVar3 + 0x90) = uVar5 | 0x10;
      uStack_38 = 0;
      uVar6 = 0;
      do {
        for (lVar4 = *(long *)(lVar3 + (uVar6 & 0xffffffff) * 0x4c + 0x26c); lVar4 != 0;
            lVar4 = *(long *)(lVar4 + 8)) {
          while ((*(uint *)(lVar4 + 0x10) & 2) == 0) {
            lVar4 = *(long *)(lVar4 + 8);
            if (lVar4 == 0) goto LAB_fffffffff001bd30;
          }
          FUN_fffffffff0008424(lVar4,&uStack_38,1);
        }
LAB_fffffffff001bd30:
        uVar6 = (ulong)((int)uVar6 + 1);
      } while (uVar6 != 5);
      FUN_fffffffff001eb28(auStack_90,param_1,0x48);
      lVar4 = FUN_fffffffff001aaf8(auStack_90);
      bVar2 = true;
      bVar1 = true;
      if (lVar4 != 0) goto LAB_fffffffff001bf5c;
    }
    else {
      FUN_fffffffff001eb28(auStack_90,param_1,0x48);
      lVar4 = FUN_fffffffff001aaf8(auStack_90);
      if (lVar4 != 0) goto LAB_fffffffff001bf5c;
      bVar1 = true;
      bVar2 = false;
    }
  }
  FUN_fffffffff001eb28(auStack_90,param_1,0x48);
  FUN_fffffffff001a8f8(lVar3,auStack_90);
  if ((((*(int *)(lVar3 + 0x284) != 0) || (*(int *)(lVar3 + 0x2d0) != 0)) ||
      (*(int *)(lVar3 + 0x31c) != 0)) ||
     ((*(int *)(lVar3 + 0x368) != 0 || (*(int *)(lVar3 + 0x3b4) != 0)))) {
    FUN_fffffffff001bb1c(lVar3);
  }
  FUN_fffffffff001eb28(auStack_90,param_1,0x48);
  FUN_fffffffff001aa2c(lVar3,auStack_90);
  if ((bVar1) || (!bVar2)) {
LAB_fffffffff001bf5c:
    FUN_fffffffff001cdd0();
    return 1;
  }
LAB_fffffffff001bdf4:
  uStack_38 = 0;
  uVar6 = 0;
  do {
    for (lVar4 = *(long *)(lVar3 + (uVar6 & 0xffffffff) * 0x4c + 0x26c); lVar4 != 0;
        lVar4 = *(long *)(lVar4 + 8)) {
      while ((*(uint *)(lVar4 + 0x10) & 2) == 0) {
        lVar4 = *(long *)(lVar4 + 8);
        if (lVar4 == 0) goto LAB_fffffffff001be7c;
      }
      FUN_fffffffff0008424(lVar4,&uStack_38,1);
    }
LAB_fffffffff001be7c:
    uVar6 = (ulong)((int)uVar6 + 1);
    if (uVar6 == 5) {
      FUN_fffffffff001cdd0();
      return 1;
    }
  } while( true );
}


/* ---- sub_1bfdc @ fffffffff001bfdc size=64 ---- */

bool sub_1bfdc(long param_1)

{
  if (*(int *)(param_1 + 0x284) != 0) {
    return true;
  }
  if (((*(int *)(param_1 + 0x2d0) == 0) && (*(int *)(param_1 + 0x31c) == 0)) &&
     (*(int *)(param_1 + 0x368) == 0)) {
    return *(int *)(param_1 + 0x3b4) != 0;
  }
  return true;
}


/* ---- FUN_fffffffff001c01c @ fffffffff001c01c size=128 ---- */

long FUN_fffffffff001c01c(uint *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  uint *puVar5;
  
  if (param_2 != 0) {
    puVar5 = (uint *)((long)param_1 + ((ulong)((long)((int)param_2 + -1) << 0x20) >> 0x1e) + 4);
    iVar4 = 0;
    do {
      uVar1 = *param_1;
      if (uVar1 != 0xffffffff) {
        uVar3 = 0;
        do {
          if ((uVar1 >> (uVar3 & 0x1f) & 1) == 0) {
            *param_1 = uVar1 | 1 << (uVar3 & 0x1f);
            lVar2 = (long)(iVar4 + (int)uVar3);
            if (lVar2 != -1) {
              return lVar2;
            }
            break;
          }
          uVar3 = (ulong)((int)uVar3 + 1);
        } while (uVar3 != 0x20);
      }
      param_1 = param_1 + 1;
      iVar4 = iVar4 + 0x20;
    } while (param_1 != puVar5);
  }
  return -1;
}


/* ---- FUN_fffffffff001c09c @ fffffffff001c09c size=40 ---- */

void FUN_fffffffff001c09c(long param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 + (long)(int)(param_2 >> 5) * 4);
  *puVar1 = ~(1 << ((ulong)param_2 & 0x1f)) & *puVar1;
  return;
}


/* ---- FUN_fffffffff001c0e0 @ fffffffff001c0e0 size=20 ---- */

undefined8 FUN_fffffffff001c0e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2000000000000);
}


/* ---- FUN_fffffffff001c0f4 @ fffffffff001c0f4 size=20 ---- */

void FUN_fffffffff001c0f4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x2000000000000) = param_2;
  return;
}


/* ---- FUN_fffffffff001c108 @ fffffffff001c108 size=16 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff001c108(undefined4 param_1)

{
  TP_R398 = param_1;
  return;
}


/* ---- FUN_fffffffff001c118 @ fffffffff001c118 size=24 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_fffffffff001c118(void)

{
  return TP_R028 >> 0x26 & 0xf;
}


/* ---- FUN_fffffffff001c130 @ fffffffff001c130 size=108 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff001c130(long param_1,undefined4 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = TP_R028;
  if (param_3 == 0xff0) {
    param_3 = (long)TP_R070;
  }
  TP_R098 = (uint)param_3 | 0x2008;
  *(undefined4 *)(param_1 + 0x1000000000000) = param_2;
  TP_R530 = (uint)((ulong)uVar1 >> 0x3f);
  TP_R470 = 0;
  return;
}


/* ---- FUN_fffffffff001c19c @ fffffffff001c19c size=92 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff001c19c(long param_1,uint param_2)

{
  TP_R098 = param_2 | 0x2008;
  TP_R530 = (uint)((ulong)TP_R028 >> 0x3f);
  TP_R470 = 0;
  return *(undefined8 *)(param_1 + 0x1000000000000);
}


/* ---- sub_1c1f8 @ fffffffff001c1f8 size=72 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_1c1f8(long param_1,undefined4 param_2)

{
  TP_R098 = TP_R070 | 0x2001;
  *(undefined4 *)(param_1 + 0x1000000000000) = param_2;
  TP_R470 = 0;
  TP_R530 = 0;
  return;
}


/* ---- sub_1c240 @ fffffffff001c240 size=72 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_1c240(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = TP_R028;
  if (param_4 == 0xff0) {
    param_4 = (long)TP_R070;
  }
  TP_R098 = (uint)param_4 | 0x2008;
  *(int *)(param_1 + 0x1000000000000) = (int)param_2;
  if (param_3 != 0) {
    *(int *)(param_1 + 0x1000000000004) = (int)((ulong)param_2 >> 0x20);
  }
  TP_R530 = (uint)((ulong)uVar1 >> 0x3f);
  return;
}


/* ---- FUN_fffffffff001c288 @ fffffffff001c288 size=104 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff001c288(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = TP_R028;
  TP_R098 = TP_R070 | 0x2001;
  *(int *)(param_1 + 0x1000000000000) = (int)param_2;
  if (param_3 != 0) {
    *(int *)(param_1 + 0x1000000000004) = (int)((ulong)param_2 >> 0x20);
  }
  TP_R530 = (uint)((ulong)uVar1 >> 0x3f);
  return;
}


/* ---- sub_1c2f0 @ fffffffff001c2f0 size=72 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_1c2f0(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = (ulong)TP_R028 >> 0x3f;
  TP_R098 = TP_R070 | 0x2801;
  *(int *)(param_1 + 0x1000000000000) = (int)param_2;
  if (param_3 != 0) {
    *(int *)(param_1 + 0x1000000000004) = (int)((ulong)param_2 >> 0x20);
  }
  TP_R530 = (uint)uVar1;
  return;
}


/* ---- sub_1c338 @ fffffffff001c338 size=204 ---- */

/* WARNING: Removing unreachable block (ram,0xfffffffff001c3a0) */
/* WARNING: Removing unreachable block (ram,0xfffffffff001c3a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_1c338(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = TP_R028;
  TP_R098 = TP_R070 | 0x2001;
  *(int *)(param_1 + 0x1000000000000) = (int)param_2;
  if (param_3 != 0) {
    *(int *)(param_1 + 0x1000000000004) = (int)((ulong)param_2 >> 0x20);
  }
  TP_R530 = (uint)((ulong)uVar1 >> 0x3f);
  regCP_GFX_QUEUE_INDEX = 0;
  regCP_GFX_INDEX_MUTEX = 0;
  return;
}


/* ---- FUN_fffffffff001c404 @ fffffffff001c404 size=108 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff001c404(long param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)TP_R028 >> 0x20);
  TP_R098 = TP_R070 | 0x2001;
  *(undefined4 *)(param_1 + 0x1000000000000) = param_2;
  TP_R398 = uVar1 >> 6 & 0xf;
  TP_R530 = uVar1 >> 0x1f;
  return;
}


/* ---- sub_1c470 @ fffffffff001c470 size=72 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_1c470(long param_1)

{
  TP_R098 = TP_R070 | 0x2001;
  TP_R470 = 0;
  TP_R530 = 0;
  return *(undefined4 *)(param_1 + 0x1000000000000);
}


/* ---- FUN_fffffffff001c4b8 @ fffffffff001c4b8 size=72 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff001c4b8(long param_1)

{
  TP_R530 = 1;
  if (param_1 == 0xff0) {
    param_1 = (long)TP_R070;
  }
  TP_R098 = (uint)param_1 | 0x2008;
  FUN_fffffffff001c578();
  return;
}


/* ---- FUN_fffffffff001c500 @ fffffffff001c500 size=60 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff001c500(void)

{
  TP_R530 = 1;
  TP_R098 = TP_R070 | 0x2001;
  FUN_fffffffff001c578();
  return;
}


/* ---- sub_1c53c @ fffffffff001c53c size=60 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong sub_1c53c(long param_1,long param_2)

{
  ulong uVar1;
  
  TP_R098 = TP_R070 | 0x2801;
  uVar1 = (ulong)*(uint *)(param_1 + 0x1000000000000);
  if (param_2 != 0) {
    uVar1 = CONCAT44(*(undefined4 *)(param_1 + 0x1000000000004),*(uint *)(param_1 + 0x1000000000000)
                    );
  }
  TP_R530 = (uint)((ulong)TP_R028 >> 0x3f);
  return uVar1;
}


/* ---- FUN_fffffffff001c578 @ fffffffff001c578 size=52 ---- */

ulong FUN_fffffffff001c578(long param_1,long param_2)

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


/* ---- sub_1c5ac @ fffffffff001c5ac size=208 ---- */

/* WARNING: Removing unreachable block (ram,0xfffffffff001c614) */
/* WARNING: Removing unreachable block (ram,0xfffffffff001c61c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong sub_1c5ac(long param_1,long param_2)

{
  ulong uVar1;
  
  TP_R098 = TP_R070 | 0x2001;
  uVar1 = (ulong)*(uint *)(param_1 + 0x1000000000000);
  if (param_2 != 0) {
    uVar1 = CONCAT44(*(undefined4 *)(param_1 + 0x1000000000004),*(uint *)(param_1 + 0x1000000000000)
                    );
  }
  TP_R530 = (uint)((ulong)TP_R028 >> 0x3f);
  regCP_GFX_QUEUE_INDEX = 0;
  regCP_GFX_INDEX_MUTEX = 0;
  return uVar1;
}


/* ---- FUN_fffffffff001c67c @ fffffffff001c67c size=108 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_fffffffff001c67c(long param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)TP_R028 >> 0x20);
  TP_R098 = TP_R070 | 0x2001;
  TP_R398 = uVar1 >> 6 & 0xf;
  TP_R530 = uVar1 >> 0x1f;
  return *(undefined4 *)(param_1 + 0x1000000000000);
}


/* ---- FUN_fffffffff001c6e8 @ fffffffff001c6e8 size=28 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff001c6e8(ulong param_1)

{
  TP_R120 = (int)(param_1 & 3);
  TP_R0D8 = (int)((param_1 & 3) << 7);
  return;
}


/* ---- FUN_fffffffff001c704 @ fffffffff001c704 size=36 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_fffffffff001c704(void)

{
  return TP_R028 >> 0x35 & 0xc | TP_R028 >> 0x20 & 3;
}


/* ---- FUN_fffffffff001c728 @ fffffffff001c728 size=132 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff001c728(ulong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = TP_R028;
  TP_R120 = (uint)param_1 & 3;
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
    } while (TP_R090 != 0);
  }
  TP_R530 = (uint)((ulong)uVar1 >> 0x3f);
  return;
}


/* ---- FUN_fffffffff001c7ac @ fffffffff001c7ac size=112 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff001c7ac(uint param_1,long *param_2)

{
  long lVar1;
  
  TP_R0D8 = param_1 & 0xc0;
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
  TP_R530 = (uint)((ulong)TP_R028 >> 0x3f);
  return lVar1;
}


/* ---- FUN_fffffffff001c820 @ fffffffff001c820 size=20 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff001c820(void)

{
  TP_R530 = 0;
  wfi();
  return;
}


/* ---- FUN_fffffffff001c834 @ fffffffff001c834 size=48 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff001c834(uint param_1,undefined4 *param_2,undefined4 *param_3,long param_4)

{
  long lVar1;
  
  TP_R120 = param_1 & 3;
  lVar1 = 0;
  do {
    *param_2 = *param_3;
    param_3 = param_3 + 1;
    param_2 = param_2 + 1;
    lVar1 = lVar1 + 1;
  } while (lVar1 < param_4);
  return;
}


/* ---- FUN_fffffffff001c864 @ fffffffff001c864 size=96 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff001c864(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = TP_R040;
  *param_1 = TP_R040;
  uVar2 = (ulong)(uVar1 >> 0x10) & 0x3fff;
  if ((uVar2 == 0x3fff) && ((uVar1 >> 8 & 0xff) == 0x10)) {
    TP_R150 = 0;
    TP_R060 = 0;
  }
  else {
    do {
      param_1 = param_1 + 1;
      *param_1 = TP_R040;
      uVar2 = uVar2 - 1;
    } while (-1 < (long)uVar2);
  }
  return;
}


/* ---- FUN_fffffffff001c8c4 @ fffffffff001c8c4 size=16 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_fffffffff001c8c4(void)

{
  return TP_R040;
}


/* ---- FUN_fffffffff001c8d4 @ fffffffff001c8d4 size=196 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff001c8d4
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
               long param_6)

{
  long lVar1;
  long lVar2;
  
  lVar1 = TP_R080;
  TP_R0D8 = (undefined4)param_1;
  TP_R0E8 = param_3;
  TP_R0F8 = param_4;
  TP_R380 = 0x600000001;
  TP_R108 = 1;
  if (param_2 == 1) {
    while( true ) {
      do {
      } while (TP_R078 != 0);
      lVar2 = param_6;
      if (TP_R080 == param_5) break;
      do {
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
  }
  else {
    if (param_2 == 2) {
      do {
      } while (TP_R320 != 0);
      return param_1;
    }
    if (param_2 == 3) {
      do {
      } while (TP_R078 != 0);
      return param_1;
    }
    do {
    } while (TP_R078 != 0);
  }
  TP_R108 = 1;
  FUN_fffffffff001c0e0(0xc894,TP_R080,1,TP_R070);
  return lVar1;
}


/* ---- FUN_fffffffff001c998 @ fffffffff001c998 size=196 ---- */

/* WARNING: Removing unreachable block (ram,0xfffffffff001ca2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_fffffffff001c998(long param_1)

{
  TP_R098 = TP_R070 | 0x2001;
  regCP_MES_MTIMECMP_LO = TP_R0F8 + param_1;
  regGRBM_NOWHERE = 0;
  TP_R530 = (uint)((ulong)TP_R028 >> 0x3f);
  return param_1;
}


/* ---- FUN_fffffffff001ca5c @ fffffffff001ca5c size=208 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fffffffff001ca5c(undefined4 param_1,undefined4 param_2)

{
  long lVar1;
  
  TP_R098 = TP_R070 | 0x2001;
  do {
    lVar1 = 0x100;
    do {
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  } while (regCPC_INT_STATUS != 0);
  regCPC_INT_INFO = param_1;
  regCPC_INT_CNTX_ID = param_2;
  TP_R000 = 0;
  regCPC_INT_ADDR = 0xb1;
  regCPC_INT_STATUS = 0x4000000;
  TP_R530 = (uint)((ulong)TP_R028 >> 0x3f);
  return;
}


/* ---- sub_1cb2c @ fffffffff001cb2c size=144 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_1cb2c(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  do {
  } while (TP_R030 != 0);
  TP_R098 = TP_R070 | 0x2001;
  TP_R0D0 = TP_R070 | 1;
  regCP_DMA_ME_SRC_ADDR = (int)param_3;
  regCP_DMA_ME_SRC_ADDR_HI = (int)((ulong)param_3 >> 0x20);
  regCP_DMA_ME_DST_ADDR = (int)param_4;
  regCP_DMA_ME_DST_ADDR_HI = (int)((ulong)param_4 >> 0x20);
  regCP_DMA_ME_CONTROL = param_1;
  regCP_DMA_ME_COMMAND = param_2;
  return;
}


/* ---- sub_1cbc8 @ fffffffff001cbc8 size=176 ---- */

undefined8 sub_1cbc8(long param_1,undefined4 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_fffffffff001c0e0(0x28);
  do {
    FUN_fffffffff001c0f4(0x530,1);
    lVar2 = FUN_fffffffff001c0e0(0x28);
  } while (-1 < lVar2);
  if (param_1 == 0x30ff) {
    *(undefined4 *)((param_3 << 0x20) + 0x108080000c3fc) = param_2;
  }
  else {
    *(undefined4 *)((param_3 << 0x20) + 0x1080800000000 + ((ulong)(param_1 << 0x20) >> 0x1e)) =
         param_2;
  }
  FUN_fffffffff001c0f4(0x530,uVar1 >> 0x3f);
  return 0;
}


/* ---- FUN_fffffffff001cc78 @ fffffffff001cc78 size=28 ---- */

undefined8 FUN_fffffffff001cc78(void)

{
  FUN_fffffffff001c108();
  return 0;
}


/* ---- FUN_fffffffff001cc94 @ fffffffff001cc94 size=44 ---- */

undefined8 FUN_fffffffff001cc94(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_fffffffff001c118();
  *param_1 = uVar1;
  return 0;
}


/* ---- sub_1ccc0 @ fffffffff001ccc0 size=28 ---- */

undefined8 sub_1ccc0(void)

{
  FUN_fffffffff001c6e8();
  return 0;
}


/* ---- sub_1ccdc @ fffffffff001ccdc size=80 ---- */

undefined8 sub_1ccdc(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_fffffffff001c704();
  if (uVar1 >> 2 == (uVar1 & 3)) {
    *param_1 = uVar1 >> 2;
    return 0;
  }
  return 2;
}


/* ---- FUN_fffffffff001cd2c @ fffffffff001cd2c size=48 ---- */

undefined8 FUN_fffffffff001cd2c(void)

{
  long lVar1;
  
  do {
    FUN_fffffffff001c0f4(0x530,1);
    lVar1 = FUN_fffffffff001c0e0(0x28);
  } while (-1 < lVar1);
  return 0;
}


/* ---- sub_1cd5c @ fffffffff001cd5c size=76 ---- */

undefined8 sub_1cd5c(ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_fffffffff001c0e0(0x28);
  *param_1 = uVar1 >> 0x3f;
  do {
    FUN_fffffffff001c0f4(0x530,1);
    lVar2 = FUN_fffffffff001c0e0(0x28);
  } while (-1 < lVar2);
  return 0;
}


/* ---- sub_1cda8 @ fffffffff001cda8 size=40 ---- */

undefined8 sub_1cda8(undefined4 param_1)

{
  FUN_fffffffff001c0f4(0x530,param_1);
  return 0;
}


/* ---- FUN_fffffffff001cdd0 @ fffffffff001cdd0 size=36 ---- */

undefined8 FUN_fffffffff001cdd0(void)

{
  FUN_fffffffff001c0f4(0x530,0);
  return 0;
}


/* ---- FUN_fffffffff001cdf4 @ fffffffff001cdf4 size=128 ---- */

undefined8 FUN_fffffffff001cdf4(long param_1,undefined4 param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_fffffffff001c0e0(0x28);
  do {
    FUN_fffffffff001c0f4(0x530,1);
    lVar2 = FUN_fffffffff001c0e0(0x28);
  } while (-1 < lVar2);
  *(undefined4 *)(((ulong)(param_1 << 0x20) >> 0x1e) + 0x1000100000000) = param_2;
  FUN_fffffffff001c0f4(0x530,uVar1 >> 0x3f);
  return 0;
}


/* ---- sub_1ce74 @ fffffffff001ce74 size=156 ---- */

undefined8 sub_1ce74(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_fffffffff001c0e0(0x28);
  do {
    FUN_fffffffff001c0f4(0x530,1);
    lVar2 = FUN_fffffffff001c0e0(0x28);
  } while (-1 < lVar2);
  *(int *)(((ulong)(param_1 << 0x20) >> 0x1e) + 0x1000100000000) = (int)param_2;
  *(int *)(((ulong)((long)((int)param_1 + 1) << 0x20) >> 0x1e) + 0x1000100000000) =
       (int)((ulong)param_2 >> 0x20);
  FUN_fffffffff001c0f4(0x530,uVar1 >> 0x3f);
  return 0;
}


/* ---- FUN_fffffffff001cf10 @ fffffffff001cf10 size=176 ---- */

undefined8 FUN_fffffffff001cf10(long param_1,undefined4 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_fffffffff001c0e0(0x28);
  do {
    FUN_fffffffff001c0f4(0x530,1);
    lVar2 = FUN_fffffffff001c0e0(0x28);
  } while (-1 < lVar2);
  if (param_1 == 0x30ff) {
    *(undefined4 *)((param_3 << 0x20) + 0x108080000c3fc) = param_2;
  }
  else {
    *(undefined4 *)((param_3 << 0x20) + 0x1080800000000 + ((ulong)(param_1 << 0x20) >> 0x1e)) =
         param_2;
  }
  FUN_fffffffff001c0f4(0x530,uVar1 >> 0x3f);
  return 0;
}


/* ---- FUN_fffffffff001cfc0 @ fffffffff001cfc0 size=176 ---- */

undefined8 FUN_fffffffff001cfc0(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_fffffffff001c0e0(0x28);
  do {
    FUN_fffffffff001c0f4(0x530,1);
    lVar2 = FUN_fffffffff001c0e0(0x28);
  } while (-1 < lVar2);
  lVar2 = (param_3 << 0x20) + 0x1080800000000;
  *(int *)(lVar2 + ((ulong)(param_1 << 0x20) >> 0x1e)) = (int)param_2;
  *(int *)(lVar2 + ((ulong)((long)((int)param_1 + 1) << 0x20) >> 0x1e)) =
       (int)((ulong)param_2 >> 0x20);
  FUN_fffffffff001c0f4(0x530,uVar1 >> 0x3f);
  return 0;
}


/* ---- thunk_FUN_fffffffff001cfc0 @ fffffffff001d070 size=4 ---- */

undefined8 thunk_FUN_fffffffff001cfc0(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_fffffffff001c0e0(0x28);
  do {
    FUN_fffffffff001c0f4(0x530,1);
    lVar2 = FUN_fffffffff001c0e0(0x28);
  } while (-1 < lVar2);
  lVar2 = (param_3 << 0x20) + 0x1080800000000;
  *(int *)(lVar2 + ((ulong)(param_1 << 0x20) >> 0x1e)) = (int)param_2;
  *(int *)(lVar2 + ((ulong)((long)((int)param_1 + 1) << 0x20) >> 0x1e)) =
       (int)((ulong)param_2 >> 0x20);
  FUN_fffffffff001c0f4(0x530,uVar1 >> 0x3f);
  return 0;
}


/* ---- FUN_fffffffff001d074 @ fffffffff001d074 size=132 ---- */

undefined8 FUN_fffffffff001d074(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_fffffffff001c0e0(0x28);
  do {
    FUN_fffffffff001c0f4(0x530,1);
    lVar2 = FUN_fffffffff001c0e0(0x28);
  } while (-1 < lVar2);
  FUN_fffffffff001c404(param_1 << 2,param_2,param_3);
  FUN_fffffffff001c0f4(0x530,uVar1 >> 0x3f);
  return 0;
}


/* ---- FUN_fffffffff001d0f8 @ fffffffff001d0f8 size=128 ---- */

undefined8 FUN_fffffffff001d0f8(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_fffffffff001c0e0(0x28);
  do {
    FUN_fffffffff001c0f4(0x530,1);
    lVar3 = FUN_fffffffff001c0e0(0x28);
  } while (-1 < lVar3);
  uVar1 = FUN_fffffffff001c500(param_1 << 2,0);
  *param_2 = uVar1;
  FUN_fffffffff001c0f4(0x530,uVar2 >> 0x3f);
  return 0;
}


/* ---- FUN_fffffffff001d178 @ fffffffff001d178 size=128 ---- */

undefined8 FUN_fffffffff001d178(int param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_fffffffff001c0e0(0x28);
  do {
    FUN_fffffffff001c0f4(0x530,1);
    lVar2 = FUN_fffffffff001c0e0(0x28);
  } while (-1 < lVar2);
  uVar3 = FUN_fffffffff001c500(param_1 << 2,1);
  *param_2 = uVar3;
  FUN_fffffffff001c0f4(0x530,uVar1 >> 0x3f);
  return 0;
}


/* ---- FUN_fffffffff001d1f8 @ fffffffff001d1f8 size=172 ---- */

undefined8 FUN_fffffffff001d1f8(int param_1,undefined4 *param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = FUN_fffffffff001c0e0(0x28);
  do {
    FUN_fffffffff001c0f4(0x530,1);
    lVar4 = FUN_fffffffff001c0e0(0x28);
  } while (-1 < lVar4);
  if (param_3 == 0xff0) {
    iVar2 = FUN_fffffffff001c0e0(0x70);
    param_3 = (long)iVar2;
  }
  uVar1 = FUN_fffffffff001c4b8(param_1 << 2,0,param_3);
  *param_2 = uVar1;
  FUN_fffffffff001c0f4(0x530,uVar3 >> 0x3f);
  return 0;
}


/* ---- thunk_FUN_fffffffff001d1f8 @ fffffffff001d2a4 size=4 ---- */

undefined8 thunk_FUN_fffffffff001d1f8(int param_1,undefined4 *param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = FUN_fffffffff001c0e0(0x28);
  do {
    FUN_fffffffff001c0f4(0x530,1);
    lVar4 = FUN_fffffffff001c0e0(0x28);
  } while (-1 < lVar4);
  if (param_3 == 0xff0) {
    iVar2 = FUN_fffffffff001c0e0(0x70);
    param_3 = (long)iVar2;
  }
  uVar1 = FUN_fffffffff001c4b8(param_1 << 2,0,param_3);
  *param_2 = uVar1;
  FUN_fffffffff001c0f4(0x530,uVar3 >> 0x3f);
  return 0;
}


/* ---- FUN_fffffffff001d2a8 @ fffffffff001d2a8 size=172 ---- */

undefined8 FUN_fffffffff001d2a8(int param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_fffffffff001c0e0(0x28);
  do {
    FUN_fffffffff001c0f4(0x530,1);
    lVar3 = FUN_fffffffff001c0e0(0x28);
  } while (-1 < lVar3);
  if (param_3 == 0xff0) {
    iVar1 = FUN_fffffffff001c0e0(0x70);
    param_3 = (long)iVar1;
  }
  uVar4 = FUN_fffffffff001c4b8(param_1 << 2,1,param_3);
  *param_2 = uVar4;
  FUN_fffffffff001c0f4(0x530,uVar2 >> 0x3f);
  return 0;
}


/* ---- thunk_FUN_fffffffff001d2a8 @ fffffffff001d354 size=4 ---- */

undefined8 thunk_FUN_fffffffff001d2a8(int param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_fffffffff001c0e0(0x28);
  do {
    FUN_fffffffff001c0f4(0x530,1);
    lVar3 = FUN_fffffffff001c0e0(0x28);
  } while (-1 < lVar3);
  if (param_3 == 0xff0) {
    iVar1 = FUN_fffffffff001c0e0(0x70);
    param_3 = (long)iVar1;
  }
  uVar4 = FUN_fffffffff001c4b8(param_1 << 2,1,param_3);
  *param_2 = uVar4;
  FUN_fffffffff001c0f4(0x530,uVar2 >> 0x3f);
  return 0;
}


/* ---- FUN_fffffffff001d358 @ fffffffff001d358 size=132 ---- */

undefined8 FUN_fffffffff001d358(long param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_fffffffff001c0e0(0x28);
  do {
    FUN_fffffffff001c0f4(0x530,1);
    lVar3 = FUN_fffffffff001c0e0(0x28);
  } while (-1 < lVar3);
  uVar1 = FUN_fffffffff001c67c(param_1 << 2,param_3);
  *param_2 = uVar1;
  FUN_fffffffff001c0f4(0x530,uVar2 >> 0x3f);
  return 0;
}


/* ---- sub_1d3dc @ fffffffff001d3dc size=188 ---- */

undefined8 sub_1d3dc(uint param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_fffffffff001c0e0(0x28);
  do {
    FUN_fffffffff001c0f4(0x530,1);
    lVar3 = FUN_fffffffff001c0e0(0x28);
  } while (-1 < lVar3);
  if ((param_1 & 0xfffefffc) == 0) {
    FUN_fffffffff001c728(param_1 | 0x30,param_2,param_3);
    FUN_fffffffff001c0f4(0x530,uVar2 >> 0x3f);
    uVar1 = 0;
  }
  else {
    FUN_fffffffff001c0f4(0x530,uVar2 >> 0x3f);
    uVar1 = 100;
  }
  return uVar1;
}


/* ---- FUN_fffffffff001d498 @ fffffffff001d498 size=188 ---- */

undefined8 FUN_fffffffff001d498(uint param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_fffffffff001c0e0(0x28);
  do {
    FUN_fffffffff001c0f4(0x530,1);
    lVar3 = FUN_fffffffff001c0e0(0x28);
  } while (-1 < lVar3);
  if ((param_1 & 0xfffefffc) == 0) {
    FUN_fffffffff001c728(param_1 | 0x20,param_2,param_3);
    FUN_fffffffff001c0f4(0x530,uVar2 >> 0x3f);
    uVar1 = 0;
  }
  else {
    FUN_fffffffff001c0f4(0x530,uVar2 >> 0x3f);
    uVar1 = 100;
  }
  return uVar1;
}


/* ---- FUN_fffffffff001d554 @ fffffffff001d554 size=188 ---- */

undefined8 FUN_fffffffff001d554(uint param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_fffffffff001c0e0(0x28);
  do {
    FUN_fffffffff001c0f4(0x530,1);
    lVar3 = FUN_fffffffff001c0e0(0x28);
  } while (-1 < lVar3);
  if ((param_1 & 0xfffefffc) == 0) {
    FUN_fffffffff001c728(param_1 | 0x10,param_2,param_3);
    FUN_fffffffff001c0f4(0x530,uVar2 >> 0x3f);
    uVar1 = 0;
  }
  else {
    FUN_fffffffff001c0f4(0x530,uVar2 >> 0x3f);
    uVar1 = 100;
  }
  return uVar1;
}


/* ---- FUN_fffffffff001d610 @ fffffffff001d610 size=184 ---- */

undefined8 FUN_fffffffff001d610(uint param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_fffffffff001c0e0(0x28);
  do {
    FUN_fffffffff001c0f4(0x530,1);
    lVar3 = FUN_fffffffff001c0e0(0x28);
  } while (-1 < lVar3);
  if ((param_1 & 0xfffefffc) == 0) {
    FUN_fffffffff001c728(param_1,param_2,param_3);
    FUN_fffffffff001c0f4(0x530,uVar2 >> 0x3f);
    uVar1 = 0;
  }
  else {
    FUN_fffffffff001c0f4(0x530,uVar2 >> 0x3f);
    uVar1 = 100;
  }
  return uVar1;
}


/* ---- FUN_fffffffff001d6c8 @ fffffffff001d6c8 size=92 ---- */

undefined8 FUN_fffffffff001d6c8(void)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_fffffffff001c0e0(0x28);
  do {
    FUN_fffffffff001c0f4(0x530,1);
    lVar2 = FUN_fffffffff001c0e0(0x28);
  } while (-1 < lVar2);
  do {
    lVar2 = FUN_fffffffff001c0e0(0x90);
  } while (lVar2 != 0);
  FUN_fffffffff001c0f4(0x530,uVar1 >> 0x3f);
  return 0;
}


/* ---- sub_1d724 @ fffffffff001d724 size=180 ---- */

undefined8 sub_1d724(uint param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_fffffffff001c0e0(0x28);
  do {
    FUN_fffffffff001c0f4(0x530,1);
    lVar2 = FUN_fffffffff001c0e0(0x28);
  } while (-1 < lVar2);
  if ((param_1 & 0xffffff3f) == 0) {
    uVar3 = FUN_fffffffff001c7ac(param_1 | 3,param_2);
    *param_3 = uVar3;
    FUN_fffffffff001c0f4(0x530,uVar1 >> 0x3f);
    uVar3 = 0;
  }
  else {
    FUN_fffffffff001c0f4(0x530,uVar1 >> 0x3f);
    uVar3 = 100;
  }
  return uVar3;
}


/* ---- FUN_fffffffff001d7d8 @ fffffffff001d7d8 size=180 ---- */

undefined8 FUN_fffffffff001d7d8(uint param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = FUN_fffffffff001c0e0(0x28);
  do {
    FUN_fffffffff001c0f4(0x530,1);
    lVar4 = FUN_fffffffff001c0e0(0x28);
  } while (-1 < lVar4);
  if ((param_1 & 0xffffff3f) == 0) {
    uVar2 = FUN_fffffffff001c7ac(param_1 | 2,param_2);
    *param_3 = uVar2;
    FUN_fffffffff001c0f4(0x530,uVar3 >> 0x3f);
    uVar1 = 0;
  }
  else {
    FUN_fffffffff001c0f4(0x530,uVar3 >> 0x3f);
    uVar1 = 100;
  }
  return uVar1;
}


/* ---- FUN_fffffffff001d88c @ fffffffff001d88c size=180 ---- */

undefined8 FUN_fffffffff001d88c(uint param_1,undefined8 param_2,undefined2 *param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = FUN_fffffffff001c0e0(0x28);
  do {
    FUN_fffffffff001c0f4(0x530,1);
    lVar4 = FUN_fffffffff001c0e0(0x28);
  } while (-1 < lVar4);
  if ((param_1 & 0xffffff3f) == 0) {
    uVar2 = FUN_fffffffff001c7ac(param_1 | 1,param_2);
    *param_3 = uVar2;
    FUN_fffffffff001c0f4(0x530,uVar3 >> 0x3f);
    uVar1 = 0;
  }
  else {
    FUN_fffffffff001c0f4(0x530,uVar3 >> 0x3f);
    uVar1 = 100;
  }
  return uVar1;
}


/* ---- FUN_fffffffff001d940 @ fffffffff001d940 size=176 ---- */

undefined8 FUN_fffffffff001d940(uint param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = FUN_fffffffff001c0e0(0x28);
  do {
    FUN_fffffffff001c0f4(0x530,1);
    lVar4 = FUN_fffffffff001c0e0(0x28);
  } while (-1 < lVar4);
  if ((param_1 & 0xffffff3f) == 0) {
    uVar2 = FUN_fffffffff001c7ac(param_1,param_2);
    *param_3 = uVar2;
    FUN_fffffffff001c0f4(0x530,uVar3 >> 0x3f);
    uVar1 = 0;
  }
  else {
    FUN_fffffffff001c0f4(0x530,uVar3 >> 0x3f);
    uVar1 = 100;
  }
  return uVar1;
}


/* ---- thunk_FUN_fffffffff001c820 @ fffffffff001d9f0 size=4 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_fffffffff001c820(void)

{
  TP_R530 = 0;
  wfi();
  return;
}


/* ---- FUN_fffffffff001d9f4 @ fffffffff001d9f4 size=472 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff001d9f4(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  switch((int)param_1) {
  case 3:
    uVar2 = 0;
    g_3aad0 = param_2;
    break;
  case 4:
    uVar2 = 0;
    g_3aad8 = param_2;
    break;
  case 5:
    uVar2 = 0;
    g_3aae0 = param_2;
    break;
  case 6:
    g_3aae8 = param_2;
    goto LAB_fffffffff001daa0;
  case 7:
    uVar2 = 0;
    g_3ab08 = param_2;
    break;
  case 8:
    uVar2 = 0;
    g_3aaf0 = param_2;
    break;
  case 9:
    uVar2 = 0;
    g_3aaf8 = param_2;
    break;
  case 10:
    uVar2 = 0;
    g_3ab00 = param_2;
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
    g_3ab18 = param_2;
    goto LAB_fffffffff001daa0;
  case 0x11:
    g_3ab20 = param_2;
LAB_fffffffff001daa0:
    uVar3 = FUN_fffffffff001c0e0(0x28);
    do {
      FUN_fffffffff001c0f4(0x530,1);
      lVar4 = FUN_fffffffff001c0e0(0x28);
    } while (-1 < lVar4);
    uVar1 = FUN_fffffffff001c500(0x32038,0);
    FUN_fffffffff001c0f4(0x530,uVar3 >> 0x3f);
    uVar3 = FUN_fffffffff001c0e0(0x28);
    do {
      FUN_fffffffff001c0f4(0x530,1);
      lVar4 = FUN_fffffffff001c0e0(0x28);
    } while (-1 < lVar4);
    *g_00178 = uVar1 | 1 << (param_1 & 0x1f);
    FUN_fffffffff001c0f4(0x530,uVar3 >> 0x3f);
    return 0;
  case 0x12:
    uVar2 = 0;
    g_3ab28 = param_2;
    break;
  case 0x13:
    uVar2 = 0;
    g_3ab30 = param_2;
    break;
  case 0x1f:
    uVar2 = 0;
    g_3ab10 = param_2;
    break;
  default:
    return 100;
  }
  return uVar2;
}


/* ---- FUN_fffffffff001dbcc @ fffffffff001dbcc size=56 ---- */

void FUN_fffffffff001dbcc(undefined8 param_1)

{
  FUN_fffffffff001cdf4(0xc040,0xdead);
  FUN_fffffffff001cdf4(0xc041,param_1);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_fffffffff001dc04 @ fffffffff001dc04 size=708 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff001dc04(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long extraout_a1;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  uint local_20;
  undefined4 uStack_1c;
  ulong uStack_18;
  
  local_20 = (uint)param_1;
  uVar5 = 2;
  uVar3 = (local_20 & 0x1f) + 0x1d;
  uStack_18 = param_2;
  if ((uVar3 & 0x1f) < 3) {
    uVar2 = (uint)(param_2 >> 0x20);
    uVar1 = (uVar2 >> 0x1a & 0xf) << 0xb;
    uStack_18 = 0;
    uVar6 = param_2 >> 0x3a & 0xb;
    if (uVar6 == 2) {
      local_20 = local_20 & 0xffff07ff | uVar1;
      uStack_18 = (param_2 >> 0x1a) << 0x20;
    }
    else {
      uVar5 = local_20 & 0xfff841f | uVar1;
      local_20 = (uVar2 >> 0x16 & 7) << 7 | (uVar2 >> 0x14 & 3) << 5 |
                 (uint)(ushort)(param_2 >> 0x30) << 0x1c | uVar5;
      if (uVar6 == 3) {
        param_3 = 3;
        if ((param_2 >> 0x2f & 1) == 0) {
          uStack_18 = param_2 & 0xffffffffffff;
        }
        else {
          uStack_18 = param_2 | 0xffff000000000000;
        }
        goto code_r0xfffffffff001dd40;
      }
    }
    param_3 = 0x7800;
    if ((local_20 & 0x7800) != 0x800) {
      param_3 = 0xfffffffffc000000;
      uStack_18 = uStack_18 | param_2 & 0x3ffffff;
    }
  }
code_r0xfffffffff001dd40:
  puVar7 = &switchD_fffffffff001dce8::switchdataD_fffffffff0100104;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(uVar3 & 0x1f) {
  case 0:
    uVar6 = g_3aad0;
    if (g_3aad0 == 0) {
      return param_1;
    }
    break;
  case 1:
    uVar6 = g_3aad8;
    if (g_3aad8 == 0) {
      return param_1;
    }
    break;
  case 2:
    uVar6 = g_3aae0;
    if (g_3aae0 == 0) {
      return param_1;
    }
    break;
  case 3:
    uVar6 = g_3aae8;
    if (g_3aae8 == 0) {
      uVar3 = FUN_fffffffff001dbcc(0x3a2);
      if ((uVar3 & 0xfffffffc) == 0) {
        FUN_fffffffff001c834
                  (uVar3,(ulong)(uVar5 << 2) + extraout_a1,param_3,(ulong)puVar7 & 0xffffffff);
        return 0;
      }
      return 100;
    }
    break;
  case 4:
    uVar6 = g_3ab08;
    if (g_3ab08 == 0) {
      return param_1;
    }
    break;
  case 5:
    uVar6 = g_3aaf0;
    if (g_3aaf0 == 0) {
      return param_1;
    }
    break;
  case 6:
    uVar6 = g_3aaf8;
    if (g_3aaf8 == 0) {
      return param_1;
    }
    break;
  case 7:
    uVar6 = g_3ab00;
    if (g_3ab00 == 0) {
      return param_1;
    }
    break;
  default:
    FUN_fffffffff001cdf4(0xc047,param_1);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  case 0xd:
    uVar6 = g_3ab18;
    if (g_3ab18 == 0) {
      return param_1;
    }
    break;
  case 0xe:
    uVar6 = g_3ab20;
    if (g_3ab20 == 0) {
      return param_1;
    }
    break;
  case 0xf:
    uVar6 = g_3ab28;
    if (g_3ab28 == 0) {
      return param_1;
    }
    break;
  case 0x10:
    uVar6 = g_3ab30;
    if (g_3ab30 == 0) {
      return param_1;
    }
    break;
  case 0x1c:
    uVar6 = g_3ab10;
    if (g_3ab10 == 0) {
      return param_1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0xfffffffff001dd74. Too many branches
                        */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)(uVar6 & 0xfffffffffffffffe))(CONCAT44(uStack_1c,local_20),uStack_18);
  return uVar4;
}


/* ---- sub_1dec8 @ fffffffff001dec8 size=232 ---- */

undefined8 sub_1dec8(uint param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_fffffffff001c500(0x2a628,0);
  uVar4 = 2;
  if ((uVar1 & 0xff) >> 7 != 0) {
    uVar3 = (uint)(uVar1 & 0xff);
    lVar2 = FUN_fffffffff001c4b8
                      (0xc844,1,(uVar3 >> 3 & 3) << 6 | (uVar3 >> 5 & 3) << 4 |
                                ((uint)uVar1 & 7) << 8);
    if ((param_1 & 0xfffffffc) == 0) {
      FUN_fffffffff001c834(param_1,(ulong)(uint)(param_2 << 2) + lVar2,param_3,param_4);
      uVar4 = 0;
    }
    else {
      uVar4 = 100;
    }
  }
  return uVar4;
}


/* ---- FUN_fffffffff001dfb0 @ fffffffff001dfb0 size=28 ---- */

undefined8 FUN_fffffffff001dfb0(void)

{
  FUN_fffffffff001c864();
  return 0;
}


/* ---- FUN_fffffffff001dfcc @ fffffffff001dfcc size=44 ---- */

undefined8 FUN_fffffffff001dfcc(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_fffffffff001c8c4();
  *param_1 = uVar1;
  return 0;
}


/* ---- FUN_fffffffff001dff8 @ fffffffff001dff8 size=28 ---- */

undefined8 FUN_fffffffff001dff8(void)

{
  FUN_fffffffff0002af0();
  return 0;
}


/* ---- sub_1e014 @ fffffffff001e014 size=28 ---- */

undefined8 sub_1e014(void)

{
  FUN_fffffffff0002b18();
  return 0;
}


/* ---- sub_1e030 @ fffffffff001e030 size=44 ---- */

undefined8 sub_1e030(void)

{
  FUN_fffffffff001c288(0x320dc,1,0);
  return 0;
}


/* ---- FUN_fffffffff001e05c @ fffffffff001e05c size=232 ---- */

undefined8 FUN_fffffffff001e05c(uint param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_fffffffff001c0e0(0x28);
  do {
    FUN_fffffffff001c0f4(0x530,1);
    lVar3 = FUN_fffffffff001c0e0(0x28);
  } while (-1 < lVar3);
  FUN_fffffffff001c6e8(param_1 >> 0x1a & 3);
  iVar1 = FUN_fffffffff001c118();
  FUN_fffffffff001c0f4(0x98,(param_1 >> 0x1c) << 0x14 | 0x4000);
  FUN_fffffffff001eb28(param_3,param_2,param_1 & 0x3ffffff);
  do {
    lVar3 = FUN_fffffffff001c0e0(0x90);
  } while (lVar3 != 0);
  FUN_fffffffff001c0f4(0x98,iVar1 << 0x14 | 8);
  FUN_fffffffff001c0f4(0x530,uVar2 >> 0x3f);
  return 0;
}


/* ---- FUN_fffffffff001e144 @ fffffffff001e144 size=232 ---- */

undefined8 FUN_fffffffff001e144(uint param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_fffffffff001c0e0(0x28);
  do {
    FUN_fffffffff001c0f4(0x530,1);
    lVar3 = FUN_fffffffff001c0e0(0x28);
  } while (-1 < lVar3);
  FUN_fffffffff001c6e8(param_1 >> 0x1a & 3);
  iVar1 = FUN_fffffffff001c118();
  FUN_fffffffff001c0f4(0x98,(param_1 >> 0x1c) << 0x14 | 0x4000);
  FUN_fffffffff001eb28(param_3,param_2,param_1 & 0x3ffffff);
  do {
    lVar3 = FUN_fffffffff001c0e0(0x90);
  } while (lVar3 != 0);
  FUN_fffffffff001c0f4(0x98,iVar1 << 0x14 | 8);
  FUN_fffffffff001c0f4(0x530,uVar2 >> 0x3f);
  return 0;
}


/* ---- sub_1e22c @ fffffffff001e22c size=740 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 sub_1e22c(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  uint uStack_38;
  undefined4 uStack_34;
  
  uVar1 = TP_R4B0;
  uVar6 = 200;
  if ((param_2 != 0) && (uVar6 = 0, param_3 == 0)) {
    uVar6 = 200;
  }
  iVar5 = 99;
  do {
    iVar5 = iVar5 + -1;
    if (TP_R030 == 0) {
      TP_R0D0 = TP_R070 | 1;
      TP_R098 = 0x2001;
      uVar3 = FUN_fffffffff001c0e0(0x28);
      do {
        FUN_fffffffff001c0f4(0x530,1);
        lVar4 = FUN_fffffffff001c0e0(0x28);
      } while (-1 < lVar4);
      *g_00180 = (int)uVar1;
      *g_00188 = (int)((ulong)uVar1 >> 0x20);
      FUN_fffffffff001c0f4(0x530,uVar3 >> 0x3f);
      uStack_38 = (uint)param_1;
      if ((uStack_38 & 0x60000000) == 0x60000000) {
        TP_R390 = param_2;
        uVar3 = FUN_fffffffff001c0e0(0x28);
        do {
          FUN_fffffffff001c0f4(0x530,1);
          lVar4 = FUN_fffffffff001c0e0(0x28);
        } while (-1 < lVar4);
      }
      else {
        uVar3 = FUN_fffffffff001c0e0(0x28);
        do {
          FUN_fffffffff001c0f4(0x530,1);
          lVar4 = FUN_fffffffff001c0e0(0x28);
        } while (-1 < lVar4);
      }
      *g_00190 = (int)param_2;
      *g_00198 = (int)((ulong)param_2 >> 0x20);
      FUN_fffffffff001c0f4(0x530,uVar3 >> 0x3f);
      uVar2 = (undefined4)((ulong)param_3 >> 0x20);
      if ((uStack_38 & 0x300000) == 0x300000) {
        TP_R390 = param_3;
        uVar3 = FUN_fffffffff001c0e0(0x28);
        do {
          FUN_fffffffff001c0f4(0x530,1);
          lVar4 = FUN_fffffffff001c0e0(0x28);
        } while (-1 < lVar4);
        *g_001a0 = (int)param_3;
        *g_001a8 = uVar2;
        FUN_fffffffff001c0f4(0x530,uVar3 >> 0x3f);
      }
      else {
        uVar3 = FUN_fffffffff001c0e0(0x28);
        do {
          FUN_fffffffff001c0f4(0x530,1);
          lVar4 = FUN_fffffffff001c0e0(0x28);
        } while (-1 < lVar4);
        *g_001a0 = (int)param_3;
        *g_001a8 = uVar2;
        FUN_fffffffff001c0f4(0x530,uVar3 >> 0x3f);
      }
      uVar3 = FUN_fffffffff001c0e0(0x28);
      do {
        FUN_fffffffff001c0f4(0x530,1);
        lVar4 = FUN_fffffffff001c0e0(0x28);
      } while (-1 < lVar4);
      *g_001b0 = uStack_38;
      FUN_fffffffff001c0f4(0x530,uVar3 >> 0x3f);
      uStack_34 = (undefined4)((ulong)param_1 >> 0x20);
      uVar3 = FUN_fffffffff001c0e0(0x28);
      do {
        FUN_fffffffff001c0f4(0x530,1);
        lVar4 = FUN_fffffffff001c0e0(0x28);
      } while (-1 < lVar4);
      *g_001b8 = uStack_34;
      FUN_fffffffff001c0f4(0x530,uVar3 >> 0x3f);
      return uVar6;
    }
  } while (iVar5 != 0);
  return 3;
}


/* ---- sub_1e510 @ fffffffff001e510 size=88 ---- */

undefined8 sub_1e510(uint param_1,undefined8 param_2,undefined8 param_3)

{
  if ((param_1 & 0xe00) == 0x200) {
    FUN_fffffffff001c8d4(param_1 & 0x7f,param_1 >> 8 & 0xf,param_2,param_3,0,0);
    return 0;
  }
  return 100;
}


/* ---- sub_1e568 @ fffffffff001e568 size=240 ---- */

undefined8 sub_1e568(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = param_1 >> 8 & 0xf;
  if ((param_1 & 0xf00) == 0) {
    uVar1 = FUN_fffffffff001c8d4(param_1 & 0x7f,uVar2,param_2,param_3,0,0);
    *param_4 = uVar1;
    return 0;
  }
  if ((param_1 & 0xf00) != 0x100) {
    if ((param_1 & 0xe00) != 0x200) {
      return 100;
    }
    FUN_fffffffff001c8d4(param_1 & 0x7f,uVar2,param_2,param_3,0,0);
    return 0;
  }
  return 100;
}


/* ---- sub_1e658 @ fffffffff001e658 size=268 ---- */

undefined8
sub_1e658(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5
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
    uVar3 = FUN_fffffffff001c8d4(uVar2,uVar4,param_2,param_3,0,0);
    *param_5 = uVar3;
    return 0;
  }
  if ((uVar1 & 0xf00) != 0x100) {
    if ((uVar1 & 0xe00) != 0x200) {
      return 100;
    }
    FUN_fffffffff001c8d4(uVar2,uVar4,param_2,param_3,0,0);
    return 0;
  }
  uVar3 = FUN_fffffffff001c8d4(uVar2,uVar4,param_2,param_3,param_4,(param_1 << 0x27) >> 0x33);
  *param_5 = uVar3;
  return 0;
}


/* ---- FUN_fffffffff001e764 @ fffffffff001e764 size=92 ---- */

undefined8 FUN_fffffffff001e764(void)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_fffffffff001c0e0(0x28);
  do {
    FUN_fffffffff001c0f4(0x530,1);
    lVar2 = FUN_fffffffff001c0e0(0x28);
  } while (-1 < lVar2);
  *g_001c0 = 0;
  FUN_fffffffff001c0f4(0x530,uVar1 >> 0x3f);
  return 0;
}


/* ---- FUN_fffffffff001e7c0 @ fffffffff001e7c0 size=40 ---- */

long FUN_fffffffff001e7c0(void)

{
  ulong uVar1;
  
  uVar1 = FUN_fffffffff001c998();
  return ((long)~uVar1 >> 0x3f & 0xffffffffffffff9cU) + 100;
}


/* ---- FUN_fffffffff001e7e8 @ fffffffff001e7e8 size=116 ---- */

undefined8 FUN_fffffffff001e7e8(undefined8 param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  undefined4 uStack_1c;
  
  uVar1 = FUN_fffffffff001c0e0(0x28);
  do {
    FUN_fffffffff001c0f4(0x530,1);
    lVar2 = FUN_fffffffff001c0e0(0x28);
  } while (-1 < lVar2);
  uStack_1c = (int)((ulong)param_1 >> 0x20);
  FUN_fffffffff001ca5c((long)(uStack_1c << 0xc),((uint)param_1 & 3) << 0x1c,(long)param_2);
  FUN_fffffffff001c0f4(0x530,uVar1 >> 0x3f);
  return 0;
}


/* ---- sub_1e85c @ fffffffff001e85c size=176 ---- */

undefined8 sub_1e85c(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 1 << ((long)(int)(param_2 >> 3) & 0x18U | (long)(int)(param_2 >> 8) & 7U);
  uVar2 = FUN_fffffffff001c19c(0x3f050,param_2 | 0x2008);
  if (param_1 == 1) {
    uVar2 = uVar2 | uVar1;
  }
  else {
    uVar2 = ~uVar1 & uVar2;
  }
  FUN_fffffffff001c130(0x3f050,uVar2,param_2 | 0x2008);
  return 0;
}


/* ---- sub_1e90c @ fffffffff001e90c size=356 ---- */

undefined8 sub_1e90c(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = 1 << ((long)(int)(param_2 >> 3) & 0x18U | (long)(int)(param_2 >> 8) & 7U);
  uVar4 = FUN_fffffffff001c0e0(0x28);
  do {
    FUN_fffffffff001c0f4(0x530,1);
    lVar5 = FUN_fffffffff001c0e0(0x28);
  } while (-1 < lVar5);
  uVar2 = FUN_fffffffff001c500(0x3214c,0);
  FUN_fffffffff001c0f4(0x530,uVar4 >> 0x3f);
  param_2 = param_2 | 0x2008;
  uVar3 = FUN_fffffffff001c19c(0xc3bc,param_2);
  if (param_1 == 1) {
    uVar2 = uVar2 | uVar1;
    uVar3 = uVar3 | 0x40;
  }
  else {
    uVar2 = ~uVar1 & uVar2;
    uVar3 = uVar3 & 0xffffffbf;
  }
  uVar4 = FUN_fffffffff001c0e0(0x28);
  do {
    FUN_fffffffff001c0f4(0x530,1);
    lVar5 = FUN_fffffffff001c0e0(0x28);
  } while (-1 < lVar5);
  *g_001c8 = uVar2;
  FUN_fffffffff001c0f4(0x530,uVar4 >> 0x3f);
  FUN_fffffffff001c130(0xc3bc,uVar3,param_2);
  FUN_fffffffff001c130(0x3f058,uVar2,param_2);
  return 0;
}


/* ---- FUN_fffffffff001ea70 @ fffffffff001ea70 size=92 ---- */

void FUN_fffffffff001ea70(void)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_fffffffff001c0e0(0x28);
  do {
    FUN_fffffffff001c0f4(0x530,1);
    lVar2 = FUN_fffffffff001c0e0(0x28);
  } while (-1 < lVar2);
  *g_001d0 = 0x6038108;
  FUN_fffffffff001c0f4(0x530,uVar1 >> 0x3f);
  return;
}


/* ---- FUN_fffffffff001eacc @ fffffffff001eacc size=92 ---- */

void FUN_fffffffff001eacc(void)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_fffffffff001c0e0(0x28);
  do {
    FUN_fffffffff001c0f4(0x530,1);
    lVar2 = FUN_fffffffff001c0e0(0x28);
  } while (-1 < lVar2);
  *g_001d8 = 0xc00010ff;
  FUN_fffffffff001c0f4(0x530,uVar1 >> 0x3f);
  return;
}


/* ---- FUN_fffffffff001eb28 @ fffffffff001eb28 size=296 ---- */

void FUN_fffffffff001eb28(undefined8 *param_1,undefined8 *param_2,ulong param_3)

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
LAB_fffffffff001eba8:
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
  else if (param_1 < puVar13) goto LAB_fffffffff001eba8;
  return;
}


/* ---- FUN_fffffffff001ec50 @ fffffffff001ec50 size=156 ---- */

void FUN_fffffffff001ec50(ulong *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  uVar1 = 0xf;
  if (0xf < param_3) {
    uVar3 = (ulong)param_1 & 0xf;
    if (uVar3 != 0) {
      param_2 = (*(code *)(uVar3 * 4 + -0xffe1364))();
      param_1 = (ulong *)((long)param_1 - (uVar3 - 0x10));
      param_3 = param_3 + (uVar3 - 0x10);
      if (param_3 <= uVar1) goto LAB_fffffffff001ec8c;
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
LAB_fffffffff001ec8c:
                    /* WARNING: Could not recover jumptable at 0xfffffffff001ec9c. Too many branches
                        */
                    /* WARNING: Treating indirect jump as call */
  (*(sub_1eca0 + (uVar1 - param_3) * 4))();
  return;
}


/* ---- sub_1eca0 @ fffffffff001eca0 size=64 ---- */

void sub_1eca0(undefined1 param_1,undefined1 *param_2)

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


/* ---- FUN_fffffffff001ed2c @ fffffffff001ed2c size=36 ---- */

long FUN_fffffffff001ed2c(long param_1,ulong param_2)

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


/* ---- sub_1ed50 @ fffffffff001ed50 size=24 ---- */

long sub_1ed50(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = FUN_fffffffff001ed98(param_1 << 0x20,param_2 << 0x20);
                    /* WARNING: Treating indirect jump as return */
  return (long)iVar1;
}


/* ---- sub_1ed68 @ fffffffff001ed68 size=32 ---- */

long sub_1ed68(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_fffffffff001ed98(param_1,param_2);
                    /* WARNING: Treating indirect jump as return */
  return (long)iVar1;
}


/* ---- sub_1ed88 @ fffffffff001ed88 size=64 ---- */

ulong sub_1ed88(ulong param_1,ulong param_2)

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
      uVar1 = FUN_fffffffff001ed98(param_1,-param_2);
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
  lVar2 = FUN_fffffffff001ed98(param_1,param_2);
                    /* WARNING: Treating indirect jump as return */
  return -lVar2;
}


/* ---- FUN_fffffffff001ed98 @ fffffffff001ed98 size=72 ---- */

ulong FUN_fffffffff001ed98(ulong param_1,ulong param_2)

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


/* ---- FUN_fffffffff001ede0 @ fffffffff001ede0 size=16 ---- */

undefined8 FUN_fffffffff001ede0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_fffffffff001ed98();
                    /* WARNING: Treating indirect jump as return */
  return uVar1;
}


/* ---- sub_1ee14 @ fffffffff001ee14 size=48 ---- */

long sub_1ee14(long param_1,long param_2)

{
  long lVar1;
  
  if (param_2 < 0) {
    param_2 = -param_2;
  }
  if (param_1 < 0) {
    lVar1 = FUN_fffffffff001ed98(-param_1,param_2);
                    /* WARNING: Treating indirect jump as return */
    return -lVar1;
  }
  lVar1 = FUN_fffffffff001ed98(param_2);
                    /* WARNING: Treating indirect jump as return */
  return lVar1;
}


/* ---- FUN_fffffffff001ee50 @ fffffffff001ee50 size=2232 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_fffffffff001ee50(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined4 uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  ulong auStack_78 [2];
  
  FUN_fffffffff001cdf4(0x16380,0xffffffffc5a30000);
  uStack_84 = 0;
  uStack_80 = 0;
  FUN_fffffffff001cdf4(0xa900,0xc);
  FUN_fffffffff001d0f8(0xc815,&uStack_84);
  FUN_fffffffff001d0f8(0xc814,&uStack_80);
  g_3ab40 = (undefined8 *)CONCAT44(uStack_80,uStack_84);
  if (g_3ab40 == (undefined8 *)0x0) {
    g_3ab40 = &g_10000;
  }
  FUN_fffffffff001ec50(0,0x2a154);
  FUN_fffffffff001cdf4(0xa900,0);
  FUN_fffffffff0006cc8();
  FUN_fffffffff000aedc();
  iVar8 = FUN_fffffffff001d9f4(9,FUN_fffffffff0005910);
  if ((((iVar8 != 0) || (iVar8 = FUN_fffffffff001d9f4(6,FUN_fffffffff0005670), iVar8 != 0)) ||
      (iVar8 = FUN_fffffffff001d9f4(0x1f,&LAB_fffffffff0005998), iVar8 != 0)) ||
     (((iVar8 = FUN_fffffffff001d9f4(3,FUN_fffffffff0006538), iVar8 != 0 ||
       (iVar8 = FUN_fffffffff001d9f4(4,FUN_fffffffff00067b4), iVar8 != 0)) ||
      ((iVar8 = FUN_fffffffff001d9f4(0x10,FUN_fffffffff0006ca0), iVar8 != 0 ||
       (iVar8 = FUN_fffffffff001d9f4(0x11,FUN_fffffffff0006cb4), puVar6 = g_3ab40,
       iVar8 != 0)))))) {
    return 0xffffffffffffffff;
  }
  auStack_78[0] = 0;
  uVar9 = FUN_fffffffff000bd24(1000000);
  uVar18 = 0xffffffff;
  *(int *)((long)puVar6 + 0x31bc) = (int)((ulong)uVar9 >> 0x20);
  *(int *)(puVar6 + 0x637) = (int)uVar9;
  FUN_fffffffff001cdf4(0x16380,0xffffffffc5a31100);
  uVar16 = 0;
  bVar1 = true;
  uVar13 = uVar18;
LAB_fffffffff001f070:
  if (bVar1) goto LAB_fffffffff001f10c;
LAB_fffffffff001f074:
  puVar6 = g_3ab40;
  if ((*(int *)((long)g_3ab40 + 0x3d2c) == 2) && (uVar16 == 1)) {
    if ((*(uint *)(g_3ab40 + 0x7a5) & 4) != 0) goto LAB_fffffffff001f0c4;
    uVar16 = 2;
  }
  else if ((*(uint *)(g_3ab40 + 0x7a5) & 4) != 0) goto LAB_fffffffff001f0b8;
LAB_fffffffff001f094:
  puVar6 = g_3ab40;
  lVar17 = (long)*(int *)((long)g_3ab40 + 0x31ac);
  lVar10 = FUN_fffffffff0005c9c(uVar16,lVar17);
  if (lVar10 == 0) {
    lVar17 = FUN_fffffffff0005ddc(uVar16);
  }
  if (lVar17 != 5) {
    uVar7 = uVar16 & 0xffffffff;
    lVar10 = (long)(int)lVar17;
LAB_fffffffff001f1c8:
    do {
      lVar11 = FUN_fffffffff0005c9c(uVar16,lVar17);
      if (lVar11 == 0) {
        lVar11 = FUN_fffffffff000602c
                           (uVar16,lVar17,(*(int *)(g_3ab40 + 0x7a5) >> 4 ^ 1U) & 1);
      }
      else {
        lVar14 = lVar10 * 0x58 + uVar7 * 0x1b8;
        lVar11 = *(long *)((long)g_3ab40 + lVar14 + 0x2c34);
        *(uint *)((long)g_3ab40 + lVar14 + 0x2c3c) =
             *(uint *)((long)g_3ab40 + lVar14 + 0x2c3c) & 0xfffffffd;
      }
      if (lVar11 == 0) goto LAB_fffffffff001f074;
      lVar14 = FUN_fffffffff0006d10(*(undefined8 *)(lVar11 + 0x10),auStack_78);
      if ((lVar14 != 0) && (auStack_78[0] != 0)) {
LAB_fffffffff001f2c8:
        lVar10 = (uVar16 & 0xffffffff) * 0x37 + (long)(int)lVar17 * 0xb;
        uVar16 = (ulong)((int)uVar16 + 1);
        *(uint *)((long)g_3ab40 + lVar10 * 8 + 0x2c3c) =
             *(uint *)((long)g_3ab40 + lVar10 * 8 + 0x2c3c) | 1;
        if (auStack_78[0] < uVar13) {
          uVar13 = auStack_78[0];
        }
        goto LAB_fffffffff001f074;
      }
      if ((*(int *)(g_3ab40 + 0x7b6) != 0) &&
         ((lVar14 = FUN_fffffffff000630c(lVar11), lVar14 != 0 &&
          ((*(uint *)(lVar14 + 0x10) & 0x100) != 0)))) {
        lVar12 = FUN_fffffffff000a7f0();
        if (lVar12 == 0) {
          lVar12 = lVar10 * 0x58 + uVar7 * 0x1b8;
          *(uint *)((long)g_3ab40 + lVar12 + 0x2c3c) =
               *(uint *)((long)g_3ab40 + lVar12 + 0x2c3c) | 1;
          *(undefined1 *)(*(long *)(lVar14 + 0x34) + 0x38) = 1;
        }
        else {
          lVar12 = FUN_fffffffff000a8c0();
          if (lVar12 != 0) {
            FUN_fffffffff000a744(lVar14);
          }
        }
      }
      lVar14 = FUN_fffffffff0018d94(lVar11,uVar16,auStack_78,lVar17);
      if (lVar14 == 0) {
        lVar10 = uVar7 * 0x1b8 + lVar10 * 0x58;
        *(uint *)((long)g_3ab40 + lVar10 + 0x2c3c) =
             *(uint *)((long)g_3ab40 + lVar10 + 0x2c3c) | 1;
        goto LAB_fffffffff001f074;
      }
      if (((*(uint *)(*(long *)(lVar11 + 0x10) + 0x90) & 4) != 0) &&
         ((*(uint *)(g_3ab40 + 0x7a5) & 0x400010) == 0x10)) {
        *(uint *)(g_3ab40 + 0x7a5) =
             *(uint *)(g_3ab40 + 0x7a5) & 0xffffffef;
      }
      iStack_7c = 0;
      if (auStack_78[0] != 0) goto LAB_fffffffff001f2c8;
      lVar14 = FUN_fffffffff0006e3c(lVar11,auStack_78,&iStack_7c);
      puVar6 = g_3ab40;
      if (lVar14 == 0) {
        lVar10 = uVar7 * 0x1b8 + lVar10 * 0x58;
        *(uint *)((long)g_3ab40 + lVar10 + 0x2c3c) =
             *(uint *)((long)g_3ab40 + lVar10 + 0x2c3c) | 1;
        goto LAB_fffffffff001f10c;
      }
      if (auStack_78[0] != 0) goto LAB_fffffffff001f2c8;
      uVar15 = (undefined4)((ulong)lVar11 >> 0x20);
      uVar4 = (undefined4)lVar11;
      if (iStack_7c != 1) {
        if (iStack_7c == 2) {
          if ((*(uint *)(g_3ab40 + 0x7a5) & 0x100) == 0) goto LAB_fffffffff001f3cc;
LAB_fffffffff001f420:
          lVar14 = uVar7 * 0x1b8 + lVar10 * 0x58;
          *(uint *)((long)g_3ab40 + lVar14 + 0x2c3c) =
               *(uint *)((long)g_3ab40 + lVar14 + 0x2c3c) | 1;
          *(undefined1 *)(lVar11 + 0x38) = 0;
        }
        else if (*(char *)(lVar11 + 0x38) != '\0') goto LAB_fffffffff001f420;
        lVar11 = uVar7 * 0x37 + lVar10 * 0xb;
        uVar2 = *(uint *)(puVar6 + 0x7a5);
        lVar14 = lVar11 * 8;
        *(undefined4 *)(puVar6 + lVar11 + 0x587) = uVar15;
        *(undefined4 *)((long)puVar6 + lVar14 + 0x2c34) = uVar4;
        if (((uVar2 & 0x100) != 0) && (puVar6[lVar11 + 0x57f] != 0)) {
          lVar12 = FUN_fffffffff000bd84();
          puVar6 = g_3ab40;
          if ((ulong)g_3ab40[lVar11 + 0x57e] <
              (ulong)(lVar12 - g_3ab40[lVar11 + 0x57f])) {
            iVar8 = *(int *)((long)g_3ab40 + 0x31a4);
            iVar3 = *(int *)(g_3ab40 + 0x635);
            uVar9 = FUN_fffffffff000bd84();
            puVar5 = g_3ab40;
            *(int *)((long)puVar6 + lVar14 + 0x2bfc) = (int)((ulong)uVar9 >> 0x20);
            *(int *)(puVar6 + lVar11 + 0x57f) = (int)uVar9;
            bVar1 = iVar3 != iVar8;
            *(uint *)((long)puVar5 + lVar14 + 0x2c3c) =
                 *(uint *)((long)puVar5 + lVar14 + 0x2c3c) | 1;
            lVar10 = FUN_fffffffff0005c40(uVar16);
            if (lVar10 != 0) {
              iVar8 = FUN_fffffffff001ede0((int)uVar16 + 1,3);
              uVar16 = (ulong)iVar8;
            }
            goto LAB_fffffffff001f070;
          }
        }
        goto LAB_fffffffff001f1c8;
      }
      if ((*(uint *)(g_3ab40 + 0x7a5) & 0x100) != 0) goto code_r0xfffffffff001f590;
LAB_fffffffff001f3cc:
      if (*(char *)(lVar11 + 0x38) != '\0') goto LAB_fffffffff001f420;
      *(undefined4 *)((long)g_3ab40 + uVar7 * 0x1b8 + lVar10 * 0x58 + 0x2c34) = uVar4;
      *(undefined4 *)(puVar6 + lVar10 * 0xb + uVar7 * 0x37 + 0x587) = uVar15;
    } while( true );
  }
LAB_fffffffff001f0b8:
  uVar16 = (ulong)((int)uVar16 + 1);
  if (2 < uVar16) {
LAB_fffffffff001f0c4:
    if ((*(uint *)(puVar6 + 0x7a5) & 5) == 0) {
      uVar13 = FUN_fffffffff001a6b0(uVar13);
    }
    bVar1 = uVar13 != 0xffffffff;
    if (bVar1) {
      FUN_fffffffff000b144(uVar13);
    }
    lVar10 = FUN_fffffffff0005b8c();
    uVar13 = uVar18;
    if (((lVar10 == 0) ||
        (*(int *)(g_3ab40 + 0x635) != *(int *)((long)g_3ab40 + 0x31a4)))
       || (uVar16 = (long)*(int *)(g_3ab40 + 0x7a5) & 4, uVar16 != 0))
    goto LAB_fffffffff001f10c;
    goto LAB_fffffffff001f070;
  }
  goto LAB_fffffffff001f074;
code_r0xfffffffff001f590:
  lVar17 = uVar7 * 0x1b8 + lVar10 * 0x58;
  *(uint *)((long)g_3ab40 + lVar17 + 0x2c3c) =
       *(uint *)((long)g_3ab40 + lVar17 + 0x2c3c) | 1;
  if (*(char *)(lVar11 + 0x38) != '\0') {
    *(uint *)((long)puVar6 + lVar17 + 0x2c3c) = *(uint *)((long)puVar6 + lVar17 + 0x2c3c) | 2;
    *(undefined4 *)((long)puVar6 + lVar17 + 0x2c34) = uVar4;
    *(undefined4 *)(puVar6 + lVar10 * 0xb + uVar7 * 0x37 + 0x587) = uVar15;
  }
LAB_fffffffff001f10c:
  lVar10 = FUN_fffffffff0012994();
  if (lVar10 != 0) {
    FUN_fffffffff000bd24(*(undefined4 *)(g_3ab40 + 0x7a7));
    FUN_fffffffff000b144();
  }
  *(uint *)(g_3ab40 + 0x7a5) = *(uint *)(g_3ab40 + 0x7a5) | 0x1000000;
  iVar8 = FUN_fffffffff000b208();
  *(uint *)(g_3ab40 + 0x7a5) = *(uint *)(g_3ab40 + 0x7a5) & 0xfeffffff;
  if (iVar8 != 0) {
    FUN_fffffffff0016c00();
  }
  uVar16 = (long)*(int *)(g_3ab40 + 0x7a5) & 4;
  if (uVar16 != 0) goto code_r0xfffffffff001f164;
  goto LAB_fffffffff001f094;
code_r0xfffffffff001f164:
  uVar16 = 1;
  goto LAB_fffffffff001f074;
}


/* ---- sub_1f718 @ fffffffff001f718 size=4 ---- */

/* WARNING: Control flow encountered bad instruction data */

void sub_1f718(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ---- thunk_EXT_FUN_ffffffffefff906e @ fffffffff001f720 size=4 ---- */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_ffffffffefff906e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ---- sub_1f734 @ fffffffff001f734 size=26 ---- */

/* WARNING: Control flow encountered bad instruction data */

void sub_1f734(long param_1)

{
  long unaff_s0;
  undefined4 unaff_s1;
  undefined4 unaff_0000204c;
  *(long *)(param_1 + 0x58) = unaff_s0;
  if (CONCAT44(unaff_0000204c,unaff_s1) == 0) {
    *(undefined4 *)(unaff_s0 + 0x68) = unaff_s1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  tp = (long)((int)tp + 1);
  if (CONCAT44(unaff_0000204c,unaff_s1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ---- thunk_EXT_FUN_ffffffffeffaa512 @ fffffffff001f758 size=4 ---- */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_ffffffffeffaa512(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ---- sub_1f760 @ fffffffff001f760 size=8 ---- */

void sub_1f760(long param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long unaff_s0;
  ulong unaff_s1;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  undefined4 uVar11;
  long lVar12;
  ulong unaff_s2;
  long unaff_s3;
  long unaff_s4;
  long unaff_s5;
  long unaff_s6;
  long unaff_s7;
  ulong unaff_s8;
  long unaff_s9;
  ulong unaff_s10;
  long unaff_s11;
  ulong in_stack_00000000;
  uint in_stack_00000010;
  int in_stack_00000034;
  ulong in_stack_00000038;
  
  do {
    FUN_fffffffff000a744(param_1);
LAB_fffffffff001f244:
    do {
      do {
        lVar6 = FUN_fffffffff0018d94(unaff_s11,unaff_s2,&stack0x00000038,unaff_s5);
        if (lVar6 == 0) {
          lVar6 = *(long *)(unaff_s0 + -0x4c0) +
                  unaff_s1 * 0x1b8 + unaff_s6 * 0x20 + unaff_s4 * 0x18;
          *(uint *)(lVar6 + 0x2c3c) = *(uint *)(lVar6 + 0x2c3c) | 1;
          goto LAB_fffffffff001f074;
        }
        if ((*(uint *)(*(long *)(unaff_s11 + 0x10) + 0x90) & 4) != 0) {
          lVar6 = *(long *)(unaff_s0 + -0x4c0) + unaff_s3;
          uVar10 = *(uint *)(lVar6 + -0x2d8);
          if (((long)(int)uVar10 & in_stack_00000000) == 0x10) {
            *(uint *)(lVar6 + -0x2d8) = uVar10 & 0xffffffef;
          }
        }
        in_stack_00000034 = 0;
        if (in_stack_00000038 != 0) {
LAB_fffffffff001f2a8:
          lVar8 = *(long *)(unaff_s0 + -0x4c0);
          lVar6 = unaff_s6 * 4 + unaff_s4 * 3;
LAB_fffffffff001f2c8:
          lVar8 = lVar8 + (unaff_s1 * 0x37 + lVar6) * 8;
          unaff_s2 = (ulong)((int)unaff_s2 + 1);
          *(uint *)(lVar8 + 0x2c3c) = *(uint *)(lVar8 + 0x2c3c) | 1;
          if (unaff_s10 <= in_stack_00000038) goto LAB_fffffffff001f074;
          unaff_s10 = in_stack_00000038;
          goto LAB_fffffffff001f074;
        }
        lVar6 = FUN_fffffffff0006e3c(unaff_s11,&stack0x00000038,&stack0x00000034);
        if (lVar6 == 0) {
          lVar6 = *(long *)(unaff_s0 + -0x4c0) +
                  unaff_s1 * 0x1b8 + unaff_s6 * 0x20 + unaff_s4 * 0x18;
          *(uint *)(lVar6 + 0x2c3c) = *(uint *)(lVar6 + 0x2c3c) | 1;
          goto LAB_fffffffff001f10c;
        }
        lVar6 = *(long *)(unaff_s0 + -0x4c0);
        if (in_stack_00000038 != 0) goto LAB_fffffffff001f2a8;
        uVar11 = (undefined4)((ulong)unaff_s11 >> 0x20);
        uVar10 = (uint)unaff_s11;
        uVar4 = (uint)unaff_s8;
        if (in_stack_00000034 == 1) {
          if ((*(uint *)(lVar6 + unaff_s3 + -0x2d8) & 0x100) != 0) {
            lVar6 = lVar6 + unaff_s1 * 0x1b8 + unaff_s6 * 0x20 + unaff_s4 * 0x18;
            *(uint *)(lVar6 + 0x2c3c) = *(uint *)(lVar6 + 0x2c3c) | 1;
            if (*(char *)(unaff_s11 + 0x38) == '\0') goto LAB_fffffffff001f10c;
            *(uint *)(lVar6 + 0x2c3c) = *(uint *)(lVar6 + 0x2c3c) | 2;
            *(uint *)(lVar6 + 0x2c34) = uVar10 & uVar4;
            *(undefined4 *)(lVar6 + 0x2c38) = uVar11;
            goto LAB_fffffffff001f10c;
          }
LAB_fffffffff001f3cc:
          if (*(char *)(unaff_s11 + 0x38) != '\0') goto LAB_fffffffff001f420;
          lVar6 = lVar6 + unaff_s1 * 0x1b8 + unaff_s6 * 0x20 + unaff_s4 * 0x18;
          *(uint *)(lVar6 + 0x2c34) = uVar10 & uVar4;
          *(undefined4 *)(lVar6 + 0x2c38) = uVar11;
        }
        else {
          if (in_stack_00000034 == 2) {
            if ((*(uint *)(lVar6 + unaff_s3 + -0x2d8) & 0x100) == 0) goto LAB_fffffffff001f3cc;
LAB_fffffffff001f420:
            lVar8 = lVar6 + unaff_s1 * 0x1b8 + unaff_s6 * 0x20 + unaff_s4 * 0x18;
            *(uint *)(lVar8 + 0x2c3c) = *(uint *)(lVar8 + 0x2c3c) | 1;
            *(undefined1 *)(unaff_s11 + 0x38) = 0;
          }
          else if (*(char *)(unaff_s11 + 0x38) != '\0') goto LAB_fffffffff001f420;
          uVar2 = *(uint *)(lVar6 + unaff_s3 + -0x2d8);
          lVar8 = (unaff_s1 * 0x37 + unaff_s6 * 4 + unaff_s4 * 3) * 8;
          lVar6 = lVar6 + lVar8;
          *(undefined4 *)(lVar6 + 0x2c38) = uVar11;
          *(uint *)(lVar6 + 0x2c34) = uVar10 & uVar4;
          if (((uVar2 & 0x100) != 0) && (*(long *)(lVar6 + 0x2bf8) != 0)) {
            lVar6 = FUN_fffffffff000bd84();
            lVar12 = *(long *)(unaff_s0 + -0x4c0);
            lVar9 = lVar12 + lVar8;
            if (*(ulong *)(lVar9 + 0x2bf0) < (ulong)(lVar6 - *(long *)(lVar9 + 0x2bf8))) {
              iVar5 = *(int *)(lVar12 + 0x31a4);
              iVar3 = *(int *)(lVar12 + 0x31a8);
              uVar7 = FUN_fffffffff000bd84();
              lVar8 = *(long *)(unaff_s0 + -0x4c0) + lVar8;
              *(int *)(lVar9 + 0x2bfc) = (int)((ulong)uVar7 >> 0x20);
              *(uint *)(lVar9 + 0x2bf8) = (uint)uVar7 & uVar4;
              bVar1 = iVar3 != iVar5;
              *(uint *)(lVar8 + 0x2c3c) = *(uint *)(lVar8 + 0x2c3c) | 1;
              lVar6 = FUN_fffffffff0005c40(unaff_s2);
              if (lVar6 != 0) {
                iVar5 = FUN_fffffffff001ede0((int)unaff_s2 + 1,3);
                unaff_s2 = (ulong)iVar5;
              }
LAB_fffffffff001f070:
              if (!bVar1) goto LAB_fffffffff001f074;
LAB_fffffffff001f10c:
              lVar6 = FUN_fffffffff0012994();
              if (lVar6 != 0) {
                FUN_fffffffff000bd24
                          (*(undefined4 *)(*(long *)(unaff_s0 + -0x4c0) + unaff_s3 + -0x2c8));
                FUN_fffffffff000b144();
              }
              lVar6 = *(long *)(unaff_s0 + -0x4c0) + unaff_s3;
              *(uint *)(lVar6 + -0x2d8) = *(uint *)(lVar6 + -0x2d8) | 0x1000000;
              iVar5 = FUN_fffffffff000b208();
              lVar6 = *(long *)(unaff_s0 + -0x4c0) + unaff_s3;
              *(uint *)(lVar6 + -0x2d8) = *(uint *)(lVar6 + -0x2d8) & in_stack_00000010;
              if (iVar5 != 0) {
                FUN_fffffffff0016c00();
              }
              lVar6 = *(long *)(unaff_s0 + -0x4c0);
              unaff_s2 = (long)*(int *)(lVar6 + unaff_s3 + -0x2d8) & 4;
              if (unaff_s2 != 0) {
                unaff_s2 = 1;
                goto LAB_fffffffff001f074;
              }
              do {
                unaff_s5 = (long)*(int *)(lVar6 + 0x31ac);
                lVar8 = FUN_fffffffff0005c9c(unaff_s2,unaff_s5);
                if (lVar8 == 0) {
                  unaff_s5 = FUN_fffffffff0005ddc(unaff_s2);
                }
                if (unaff_s5 != 5) {
                  unaff_s1 = unaff_s2 & 0xffffffff;
                  unaff_s4 = (long)(int)unaff_s5;
                  unaff_s6 = unaff_s4 * 2;
                  unaff_s9 = unaff_s4 * 0xb;
                  unaff_s7 = unaff_s1 * 0x1b8;
                  break;
                }
                do {
                  unaff_s2 = (ulong)((int)unaff_s2 + 1);
                  if (2 < unaff_s2) {
LAB_fffffffff001f0c4:
                    if ((*(uint *)(lVar6 + unaff_s3 + -0x2d8) & 5) == 0) {
                      unaff_s10 = FUN_fffffffff001a6b0(unaff_s10);
                    }
                    bVar1 = unaff_s10 != unaff_s8;
                    if (bVar1) {
                      FUN_fffffffff000b144(unaff_s10);
                    }
                    lVar6 = FUN_fffffffff0005b8c();
                    unaff_s10 = unaff_s8;
                    if (((lVar6 == 0) ||
                        (lVar6 = *(long *)(unaff_s0 + -0x4c0),
                        *(int *)(lVar6 + 0x31a8) != *(int *)(lVar6 + 0x31a4))) ||
                       (unaff_s2 = (long)*(int *)(lVar6 + unaff_s3 + -0x2d8) & 4, unaff_s2 != 0))
                    goto LAB_fffffffff001f10c;
                    goto LAB_fffffffff001f070;
                  }
LAB_fffffffff001f074:
                  lVar6 = *(long *)(unaff_s0 + -0x4c0);
                  uVar10 = *(uint *)(lVar6 + unaff_s3 + -0x2d8) & 4;
                  if ((*(int *)(lVar6 + unaff_s3 + -0x2d4) == 2) && (unaff_s2 == 1)) {
                    if (uVar10 != 0) goto LAB_fffffffff001f0c4;
                    unaff_s2 = 2;
                    break;
                  }
                } while (uVar10 != 0);
              } while( true );
            }
          }
        }
        lVar6 = FUN_fffffffff0005c9c(unaff_s2,unaff_s5);
        if (lVar6 == 0) {
          unaff_s11 = FUN_fffffffff000602c
                                (unaff_s2,unaff_s5,
                                 (*(int *)(*(long *)(unaff_s0 + -0x4c0) + unaff_s3 + -0x2d8) >> 4 ^
                                 1U) & 1);
        }
        else {
          lVar6 = *(long *)(unaff_s0 + -0x4c0) + unaff_s9 * 8 + unaff_s7;
          unaff_s11 = *(long *)(lVar6 + 0x2c34);
          *(uint *)(lVar6 + 0x2c3c) = *(uint *)(lVar6 + 0x2c3c) & 0xfffffffd;
        }
        if (unaff_s11 == 0) goto LAB_fffffffff001f074;
        lVar6 = FUN_fffffffff0006d10(*(undefined8 *)(unaff_s11 + 0x10),&stack0x00000038);
        if ((lVar6 != 0) && (in_stack_00000038 != 0)) {
          unaff_s1 = unaff_s2 & 0xffffffff;
          lVar8 = *(long *)(unaff_s0 + -0x4c0);
          lVar6 = (long)(int)unaff_s5 * 0xb;
          goto LAB_fffffffff001f2c8;
        }
      } while ((*(int *)(*(long *)(unaff_s0 + -0x4c0) + unaff_s3 + -0x250) == 0) ||
              ((param_1 = FUN_fffffffff000630c(unaff_s11), param_1 == 0 ||
               ((*(uint *)(param_1 + 0x10) & 0x100) == 0))));
      lVar6 = FUN_fffffffff000a7f0();
      if (lVar6 == 0) {
        lVar6 = *(long *)(unaff_s0 + -0x4c0) + unaff_s9 * 8 + unaff_s7;
        *(uint *)(lVar6 + 0x2c3c) = *(uint *)(lVar6 + 0x2c3c) | 1;
        *(undefined1 *)(*(long *)(param_1 + 0x34) + 0x38) = 1;
        goto LAB_fffffffff001f244;
      }
      lVar6 = FUN_fffffffff000a8c0();
    } while (lVar6 == 0);
  } while( true );
}


/* ---- sub_1f7a0 @ fffffffff001f7a0 size=8 ---- */

/* WARNING: Control flow encountered bad instruction data */

void sub_1f7a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ---- sub_1f7cc @ fffffffff001f7cc size=6 ---- */

/* WARNING: Control flow encountered bad instruction data */

void sub_1f7cc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ---- thunk_EXT_FUN_ffffffffeff8243c @ fffffffff001f808 size=4 ---- */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_ffffffffeff8243c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


