/* AtomBIOS command tables decompiled from prior/vbios.rom (master command table @ 0x4270) */
#include <stdint.h>

/* Register names resolved with the kernel *_offset.h headers; SMN[] addresses are byte addresses on the SMN bus,
   REG[] values are dword indices in the BAR5 register aperture (after adding reg_block). */
#define BIF_BX_PF0_MM_INDEX_HI                       0x0000006   /* REG NBIO */
#define BIF_BX0_BIOS_SCRATCH_0                       0x000004c   /* REG NBIO */
#define BIF_BX0_BIOS_SCRATCH_7                       0x0000053   /* REG NBIO */
#define RCC_DEV0_EPF0_RCC_CONFIG_MEMSIZE             0x0000de3   /* REG NBIO */
#define RCC_DEV0_0_RCC_CONFIG_APER_SIZE              0x0000de7   /* REG NBIO */
#define RCC_DEV0_0_RCC_CONFIG_REG_APER_SIZE          0x0000de8   /* REG NBIO */
#define LSDMA_UCODE_CHECKSUM                         0x00450a4   /* SMN LSDMA */
#define LSDMA_PIO_STATUS                             0x00450c8   /* SMN LSDMA */
#define LSDMA_PIO_SRC_ADDR_LO                        0x00451a4   /* SMN LSDMA */
#define LSDMA_PIO_SRC_ADDR_HI                        0x00451a8   /* SMN LSDMA */
#define LSDMA_PIO_DST_ADDR_LO                        0x00451ac   /* SMN LSDMA */
#define LSDMA_PIO_DST_ADDR_HI                        0x00451b0   /* SMN LSDMA */
#define LSDMA_PIO_COMMAND                            0x00451b4   /* SMN LSDMA */
#define LSDMA_PIO_CONSTFILL_DATA                     0x00451b8   /* SMN LSDMA */
#define LSDMA_PIO_CONTROL                            0x00451bc   /* SMN LSDMA */
#define LSDMA_QUEUE0_RB_CNTL                         0x0045200   /* SMN LSDMA */
#define LSDMA_QUEUE0_RB_BASE                         0x0045204   /* SMN LSDMA */
#define LSDMA_QUEUE0_RB_BASE_HI                      0x0045208   /* SMN LSDMA */
#define MP0_SMN_C2PMSG_33                            0x0058184   /* SMN MP0 */
#define MMMC_VM_FB_LOCATION_BASE                     0x006a3b0   /* SMN MMHUB */
#define MMMC_VM_FB_LOCATION_TOP                      0x006a3b4   /* SMN MMHUB */

/* command table 0x00 ("asic_init")  @ 0x4314  size 0x84  rev 2.1  ws=0 ps=0 */
void cmd_table_00(uint32_t PS[]) {   /* uint32_t WS[0] */
  /* 431a */ io_mode = MM;
  /* 431d */ /* test PS[0][31:24], 0x4 */
  /* 4321 */ if ((PS[0][31:24] & 0x4) != 0) goto L_4357;
  /* 4324 */ data_block = DATA_TABLE[9];   /* master data table slot 9 */
  /* 4326 */ /* cmp WS_DATAPTR[15:0], 0x0 */
  /* 432b */ if (WS_DATAPTR[15:0] == 0x0) goto L_4357;
  /* 432e */ WS_QUOTIENT = 0;
L_4331:
  /* 4331 */ /* smn_index = 0x58184 */
  /* 4339 */ /* cmp SMN[MP0_SMN_C2PMSG_33], 0x80000000 */
  /* 4341 */ if (SMN[MP0_SMN_C2PMSG_33] == 0x80000000) goto L_4357;
  /* 4344 */ udelay(20);
  /* 4346 */ WS_QUOTIENT += 0x1;
  /* 434d */ /* cmp WS_QUOTIENT, 0x30d40 */
  /* 4354 */ if (WS_QUOTIENT < 0x30d40) goto L_4331;
L_4357:
  /* 4357 */ data_block = DATA_TABLE[22];   /* master data table slot 22 */
  /* 4359 */ /* cmp WS_DATAPTR[15:0], 0x0 */
  /* 435e */ if (WS_DATAPTR[15:0] == 0x0) goto L_4373;
  /* 4361 */ WS_REMAINDER[15:0] = ID[0x0004][15:0];
  /* 4366 */ /* test WS_REMAINDER[15:0], 0x2 */
  /* 436b */ if ((WS_REMAINDER[15:0] & 0x2) == 0) goto L_4373;
  /* 436e */ REG[BIF_BX0_BIOS_SCRATCH_0][7:0] |= 0x2;
L_4373:
  /* 4373 */ WS_REMAINDER = REG[RCC_DEV0_EPF0_RCC_CONFIG_MEMSIZE];
  /* 4378 */ /* cmp WS_REMAINDER, 0x0 */
  /* 437f */ if (WS_REMAINDER == 0x0) goto L_4397;
  /* 4382 */ WS_REMAINDER -= 0x1;
  /* 4389 */ WS_REMAINDER >>= 11;
  /* 438d */ REG[BIF_BX_PF0_MM_INDEX_HI] = WS_REMAINDER;
  /* 4392 */ REG[BIF_BX0_BIOS_SCRATCH_7][15:8] |= 0x2;
L_4397:
  /* 4397 */ return;
}

/* command table 0x06 ("cmd_function6")  @ 0x496c  size 0x4b  rev 1.1  ws=0 ps=0 */
void cmd_table_06(uint32_t PS[]) {   /* uint32_t WS[0] */
  /* 4972 */ io_mode = MM;
  /* 4975 */ switch (PS[0][7:0]) { case 0x0: goto L_498b; case 0x1: goto L_49a5; case 0x3: goto L_49ab; case 0x2: goto L_49b1; }
  /* 498a */ return;
L_498b:
  /* 498b */ WS_QUOTIENT = 0x4050000;
  /* 4992 */ WS_QUOTIENT[15:0] += PS[0][31:16];
  /* 4996 */ WS_QUOTIENT <<= 2;
  /* 499a */ /* smn_index = WS_QUOTIENT */
  /* 499f */ PS[0] = SMN[WS_QUOTIENT];
  /* 49a4 */ return;
L_49a5:
  /* 49a5 */ PS[0] = REG[RCC_DEV0_EPF0_RCC_CONFIG_MEMSIZE];
  /* 49aa */ return;
L_49ab:
  /* 49ab */ PS[0] = REG[RCC_DEV0_0_RCC_CONFIG_APER_SIZE];
  /* 49b0 */ return;
L_49b1:
  /* 49b1 */ PS[0] = REG[RCC_DEV0_0_RCC_CONFIG_REG_APER_SIZE];
  /* 49b6 */ return;
}

/* command table 0x16 ("cmd_function22")  @ 0x44f4  size 0x44  rev 2.1  ws=0 ps=0 */
void cmd_table_16(uint32_t PS[]) {   /* uint32_t WS[0] */
  /* 44fa */ io_mode = MM;
  /* 44fd */ /* smn_index = 0x6a3b0 */
  /* 4505 */ PS[0] = SMN[MMMC_VM_FB_LOCATION_BASE];
  /* 450a */ PS[1] = PS[0];
  /* 450e */ /* smn_index = 0x6a3b4 */
  /* 4516 */ PS[2] = SMN[MMMC_VM_FB_LOCATION_TOP];
  /* 451b */ /* cmp PS[0], PS[2] */
  /* 451f */ if (PS[0] <= PS[2]) goto L_4537;
  /* 4522 */ PS[0] = 0x8000;
  /* 4529 */ PS[1] = 0x90;
  /* 4530 */ PS[2] = 0x800f;
L_4537:
  /* 4537 */ return;
}

/* command table 0x35 ("cmd_function53")  @ 0x4398  size 0x15b  rev 4.0  ws=12 ps=0 */
void cmd_table_35(uint32_t PS[]) {   /* uint32_t WS[12] */
  /* 439e */ io_mode = MM;
  /* 43a1 */ /* cmp PS[4][23:16], 0x1 */
  /* 43a5 */ if (PS[4][23:16] == 0x1) goto L_447d;
  /* 43a8 */ data_block = DATA_TABLE[4];   /* master data table slot 4 */
  /* 43aa */ WS_FB_WINDOW = ID[0x0028];
  /* 43af */ /* cmp WS_FB_WINDOW, 0x0 */
  /* 43b6 */ if (WS_FB_WINDOW != 0x0) goto L_43db;
  /* 43b9 */ WS[0] = PS[0];
  /* 43bd */ WS[1] = PS[1];
  /* 43c1 */ WS[2] = PS[2];
  /* 43c5 */ call_table_0x16(&PS[ps_shift]);
  /* 43c7 */ WS_FB_WINDOW = PS[0];
  /* 43cb */ WS_FB_WINDOW >>= 8;
  /* 43cf */ PS[0] = WS[0];
  /* 43d3 */ PS[1] = WS[1];
  /* 43d7 */ PS[2] = WS[2];
L_43db:
  /* 43db */ /* cmp PS[4][7:0], 0x0 */
  /* 43df */ if (PS[4][7:0] != 0x0) goto L_43e6;
  /* 43e2 */ PS[1] += WS_FB_WINDOW;
L_43e6:
  /* 43e6 */ /* cmp PS[4][15:8], 0x0 */
  /* 43ea */ if (PS[4][15:8] != 0x0) goto L_43f1;
  /* 43ed */ PS[3] += WS_FB_WINDOW;
L_43f1:
  /* 43f1 */ WS_QUOTIENT = PS[5];
  /* 43f5 */ WS_QUOTIENT &= 0xfc000000;
  /* 43fc */ /* cmp WS_QUOTIENT, 0x80000000 */
  /* 4403 */ if (WS_QUOTIENT != 0x80000000) goto L_4419;
  /* 4406 */ PS[0] = 0;
  /* 4409 */ PS[1] = 0;
  /* 440c */ /* smn_index = 0x451b8 */
  /* 4414 */ SMN[LSDMA_PIO_CONSTFILL_DATA] = PS[6];
L_4419:
  /* 4419 */ /* smn_index = 0x451bc */
  /* 4421 */ SMN[LSDMA_PIO_CONTROL] = 0x0;
  /* 4429 */ /* smn_index = 0x451a4 */
  /* 4431 */ SMN[LSDMA_PIO_SRC_ADDR_LO] = PS[0];
  /* 4436 */ /* smn_index = 0x451a8 */
  /* 443e */ SMN[LSDMA_PIO_SRC_ADDR_HI] = PS[1];
  /* 4443 */ /* smn_index = 0x451ac */
  /* 444b */ SMN[LSDMA_PIO_DST_ADDR_LO] = PS[2];
  /* 4450 */ /* smn_index = 0x451b0 */
  /* 4458 */ SMN[LSDMA_PIO_DST_ADDR_HI] = PS[3];
  /* 445d */ /* smn_index = 0x451b4 */
  /* 4465 */ SMN[LSDMA_PIO_COMMAND] = PS[5];
L_446a:
  /* 446a */ /* smn_index = 0x450c8 */
  /* 4472 */ /* test SMN[LSDMA_PIO_STATUS][31:24], 0x80 */
  /* 4477 */ if ((SMN[LSDMA_PIO_STATUS][31:24] & 0x80) == 0) goto L_446a;
  /* 447a */ goto L_44f2;
L_447d:
  /* 447d */ /* smn_index = 0x58184 */
  /* 4485 */ SMN[MP0_SMN_C2PMSG_33] = 0xa0000;
  /* 448d */ /* smn_index = 0x58184 */
  /* 4495 */ WS_QUOTIENT = 0;
L_4498:
  /* 4498 */ /* cmp SMN[MP0_SMN_C2PMSG_33], 0x80000000 */
  /* 44a0 */ if (SMN[MP0_SMN_C2PMSG_33] != 0x80000000) goto L_4498;
  /* 44a3 */ /* smn_index = 0x45204 */
  /* 44ab */ SMN[LSDMA_QUEUE0_RB_BASE] = PS[0];
  /* 44b0 */ /* smn_index = 0x45208 */
  /* 44b8 */ SMN[LSDMA_QUEUE0_RB_BASE_HI] = PS[1];
  /* 44bd */ /* smn_index = 0x45200 */
  /* 44c5 */ WS_REMAINDER = SMN[LSDMA_QUEUE0_RB_CNTL];
  /* 44ca */ WS_REMAINDER &= 0xffffffc1;
  /* 44d1 */ WS_REMAINDER |= 0x15;
  /* 44d8 */ /* smn_index = 0x45200 */
  /* 44e0 */ SMN[LSDMA_QUEUE0_RB_CNTL] = WS_REMAINDER;
  /* 44e5 */ /* smn_index = 0x450a4 */
  /* 44ed */ PS[6] = SMN[LSDMA_UCODE_CHECKSUM];
L_44f2:
  /* 44f2 */ return;
}

/* command table 0x42 ("cmd_function66")  @ 0x4538  size 0x433  rev 1.2  ws=8 ps=0 */
void cmd_table_42(uint32_t PS[]) {   /* uint32_t WS[8] */
  /* 453e */ io_mode = MM;
  /* 4541 */ /* cmp PS[0][7:0], 0x0 */
  /* 4545 */ if (PS[0][7:0] == 0x0) goto L_462d;
  /* 4548 */ /* test REG[0x36a3], 0x2 */
  /* 4550 */ if ((REG[0x36a3] & 0x2) == 0) goto L_496a;
  /* 4553 */ WS[0] = 0x32;
L_455a:
  /* 455a */ WS_QUOTIENT = REG[0x3697];
  /* 455f */ WS_FB_WINDOW = 0x3100;
  /* 4566 */ FB[4] = WS_QUOTIENT;
  /* 456a */ WS_REMAINDER = FB[5];
  /* 456e */ /* cmp WS_REMAINDER, WS_QUOTIENT */
  /* 4572 */ if (WS_REMAINDER >= WS_QUOTIENT) goto L_4584;
  /* 4575 */ WS_QUOTIENT -= WS_REMAINDER;
  /* 4579 */ WS_REMAINDER = FB[6];
  /* 457d */ WS_REMAINDER -= WS_QUOTIENT;
  /* 4581 */ goto L_4588;
L_4584:
  /* 4584 */ WS_REMAINDER -= WS_QUOTIENT;
L_4588:
  /* 4588 */ /* cmp WS_REMAINDER, 0x0 */
  /* 458f */ if (WS_REMAINDER == 0x0) goto L_45a8;
  /* 4592 */ WS[0] -= 0x1;
  /* 4599 */ /* cmp WS[0], 0x0 */
  /* 45a0 */ if (WS[0] == 0x0) goto L_496a;
  /* 45a3 */ udelay(20);
  /* 45a5 */ goto L_455a;
L_45a8:
  /* 45a8 */ WS_QUOTIENT = FB[5];
  /* 45ac */ WS_REMAINDER = WS_QUOTIENT;
  /* 45b0 */ WS_QUOTIENT += 0x0;
  /* 45b7 */ WS_FB_WINDOW = WS_QUOTIENT;
  /* 45bb */ FB[0] = PS[0];
  /* 45bf */ FB[1] = PS[1];
  /* 45c3 */ FB[2] = PS[2];
  /* 45c7 */ FB[3] = PS[3];
  /* 45cb */ FB[4] = PS[4];
  /* 45cf */ FB[5] = PS[5];
  /* 45d3 */ FB[6] = PS[6];
  /* 45d7 */ WS_REMAINDER += 0x40;
  /* 45de */ /* cmp WS_REMAINDER, 0x2000 */
  /* 45e5 */ if (WS_REMAINDER < 0x2000) goto L_45ef;
  /* 45e8 */ WS_QUOTIENT = WS_REMAINDER / 0x2000; WS_REMAINDER = WS_REMAINDER % 0x2000;   /* 0 if divisor is 0 */
L_45ef:
  /* 45ef */ WS_FB_WINDOW = 0x3100;
  /* 45f6 */ FB[5] = WS_REMAINDER;
  /* 45fa */ REG[0x3696] = WS_REMAINDER;
  /* 45ff */ WS[0] = 0x61a80;
L_4606:
  /* 4606 */ WS_REMAINDER = REG[0x3697];
  /* 460b */ WS_QUOTIENT = REG[0x3696];
  /* 4610 */ /* cmp WS_REMAINDER, WS_QUOTIENT */
  /* 4614 */ if (WS_REMAINDER == WS_QUOTIENT) goto L_496a;
  /* 4617 */ WS[0] -= 0x1;
  /* 461e */ /* cmp WS[0], 0x0 */
  /* 4625 */ if (WS[0] == 0x0) goto L_496a;
  /* 4628 */ udelay(20);
  /* 462a */ goto L_4606;
L_462d:
  /* 462d */ /* cmp PS[0][15:8], 0x1 */
  /* 4631 */ if (PS[0][15:8] == 0x1) goto L_466d;
  /* 4634 */ /* test REG[0x36b6], 0x10000 */
  /* 463c */ if ((REG[0x36b6] & 0x10000) != 0) goto L_466d;
  /* 463f */ /* test REG[0x36c0], 0x1 */
  /* 4647 */ if ((REG[0x36c0] & 0x1) == 0) goto L_466d;
  /* 464a */ /* smn_index = 0x58184 */
  /* 4652 */ SMN[MP0_SMN_C2PMSG_33] = 0x8000000;
  /* 465a */ /* smn_index = 0x58184 */
L_4662:
  /* 4662 */ /* cmp SMN[MP0_SMN_C2PMSG_33], 0x80000000 */
  /* 466a */ if (SMN[MP0_SMN_C2PMSG_33] != 0x80000000) goto L_4662;
L_466d:
  /* 466d */ /* test REG[0x36c0], 0x1 */
  /* 4675 */ if ((REG[0x36c0] & 0x1) != 0) goto L_470c;
  /* 4678 */ REG[0x36b8] = 0x10020000;
  /* 4680 */ WS_REMAINDER = 0xa;
L_4687:
  /* 4687 */ WS_REMAINDER -= 0x1;
  /* 468e */ /* cmp WS_REMAINDER, 0x0 */
  /* 4695 */ if (WS_REMAINDER == 0x0) goto L_46ca;
  /* 4698 */ udelay(10);
  /* 469a */ /* cmp REG[0x36b8], 0x20000 */
  /* 46a2 */ if (REG[0x36b8] != 0x20000) goto L_4687;
  /* 46a5 */ WS_REMAINDER = 0x4;
L_46ac:
  /* 46ac */ udelay(10);
  /* 46ae */ WS_REMAINDER -= 0x1;
  /* 46b5 */ /* cmp WS_REMAINDER, 0x0 */
  /* 46bc */ if (WS_REMAINDER == 0x0) goto L_46ca;
  /* 46bf */ /* cmp REG[0x36aa], 0xdeaddead */
  /* 46c7 */ if (REG[0x36aa] != 0xdeaddead) goto L_46ac;
L_46ca:
  /* 46ca */ REG[0x36b8] = 0x0;
  /* 46d2 */ REG[0x36c0] |= 0x1;
  /* 46da */ REG[0x36b6] &= 0xfffeffff;
  /* 46e2 */ REG[0x3802] |= 0x100;
  /* 46ea */ udelay(10);
  /* 46ec */ REG[0x3697] = 0x0;
  /* 46f4 */ REG[0x3696] = 0x0;
  /* 46fc */ REG[0x36a3] = 0x0;
  /* 4704 */ REG[0x3802] &= 0xfffffeff;
L_470c:
  /* 470c */ data_block = DATA_TABLE[11];   /* master data table slot 11 */
  /* 470e */ WS[0] = ID[0x0004];
  /* 4713 */ WS[1] = WS[0];
  /* 4717 */ WS[0] <<= 10;
  /* 471b */ WS[1] >>= 22;
  /* 471f */ PS[0] = 0x0;
  /* 4726 */ PS[2] = WS[0];
  /* 472a */ PS[2] += 0x20000;
  /* 4731 */ PS[3] = WS[1];
  /* 4735 */ PS[4] = 0x1;
  /* 473c */ PS[5] = 0x80050000;
  /* 4743 */ call_table_0x35(&PS[ps_shift]);
  /* 4745 */ PS[0] = 0x0;
  /* 474c */ PS[2] = WS[0];
  /* 4750 */ PS[2] += 0x0;
  /* 4757 */ PS[3] = WS[1];
  /* 475b */ PS[4] = 0x1;
  /* 4762 */ PS[5] = 0x80002000;
  /* 4769 */ call_table_0x35(&PS[ps_shift]);
  /* 476b */ data_block = DATA_TABLE[22];   /* master data table slot 22 */
  /* 476d */ /* cmp WS_DATAPTR[15:0], 0x0 */
  /* 4772 */ if (WS_DATAPTR[15:0] == 0x0) goto L_47e5;
  /* 4775 */ WS_REMAINDER = 0;
  /* 4778 */ WS_REMAINDER[15:0] = ID[0x0000][15:0];
  /* 477d */ WS_REMAINDER += 0xf;
  /* 4784 */ WS_REMAINDER &= 0xfff0;
  /* 478b */ WS_REMAINDER[15:0] += WS_DATAPTR[15:0];
  /* 478f */ WS_FB_WINDOW = 0xa000;
  /* 4796 */ WS_DATAPTR[15:0] = 0;
L_4799:
  /* 4799 */ FB[0] = ID[0x0000];
  /* 479e */ WS_FB_WINDOW += 0x4;
  /* 47a5 */ WS_DATAPTR += 0x4;
  /* 47ac */ /* cmp WS_DATAPTR, WS_REMAINDER */
  /* 47b0 */ if (WS_DATAPTR < WS_REMAINDER) goto L_4799;
  /* 47b3 */ PS[0] = 0xa000;
  /* 47ba */ PS[0] += WS[0];
  /* 47be */ PS[2] = WS[0];
  /* 47c2 */ PS[2] += 0x20000;
  /* 47c9 */ PS[3] = WS[1];
  /* 47cd */ PS[1] = WS[1];
  /* 47d1 */ PS[4] = 0x0;
  /* 47d8 */ PS[5] = 0x40000000;
  /* 47df */ PS[5][15:0] = WS_REMAINDER[15:0];
  /* 47e3 */ call_table_0x35(&PS[ps_shift]);
L_47e5:
  /* 47e5 */ call_table_0x16(&PS[ps_shift]);
  /* 47e7 */ PS[2] = PS[0];
  /* 47eb */ PS[0] <<= 24;
  /* 47ef */ PS[2] >>= 8;
  /* 47f3 */ WS_REMAINDER = WS[0];
  /* 47f7 */ WS_REMAINDER += 0x20000;
  /* 47fe */ WS_REMAINDER += PS[0];
  /* 4802 */ REG[0x367b] = WS_REMAINDER;
  /* 4807 */ WS_QUOTIENT = WS[1];
  /* 480b */ WS_QUOTIENT += PS[2];
  /* 480f */ REG[0x367c] = WS_QUOTIENT;
  /* 4814 */ REG[0x3668] = 0x3000000;
  /* 481c */ REG[0x3670] = 0x8301ffff;
  /* 4824 */ WS_REMAINDER = WS[0];
  /* 4828 */ WS_REMAINDER += 0x40000;
  /* 482f */ WS_REMAINDER += PS[0];
  /* 4833 */ REG[0x367d] = WS_REMAINDER;
  /* 4838 */ WS_QUOTIENT = WS[1];
  /* 483c */ WS_QUOTIENT += PS[2];
  /* 4840 */ REG[0x367e] = WS_QUOTIENT;
  /* 4845 */ REG[0x3669] = 0x4000000;
  /* 484d */ REG[0x3671] = 0x8400ffff;
  /* 4855 */ WS_REMAINDER = WS[0];
  /* 4859 */ WS_REMAINDER += 0x50000;
  /* 4860 */ WS_REMAINDER += PS[0];
  /* 4864 */ REG[0x367f] = WS_REMAINDER;
  /* 4869 */ WS_QUOTIENT = WS[1];
  /* 486d */ WS_QUOTIENT += PS[2];
  /* 4871 */ REG[0x3680] = WS_QUOTIENT;
  /* 4876 */ REG[0x366a] = 0x5000000;
  /* 487e */ REG[0x3672] = 0x8500ffff;
  /* 4886 */ WS_REMAINDER = WS[0];
  /* 488a */ WS_REMAINDER += 0x60000;
  /* 4891 */ WS_REMAINDER += PS[0];
  /* 4895 */ REG[0x3681] = WS_REMAINDER;
  /* 489a */ WS_QUOTIENT = WS[1];
  /* 489e */ WS_QUOTIENT += PS[2];
  /* 48a2 */ REG[0x3682] = WS_QUOTIENT;
  /* 48a7 */ REG[0x366b] = 0x6000000;
  /* 48af */ REG[0x3673] = 0x8600ffff;
  /* 48b7 */ WS_FB_WINDOW = 0x3100;
  /* 48be */ WS_REMAINDER = WS[0];
  /* 48c2 */ WS_REMAINDER += 0x0;
  /* 48c9 */ WS_REMAINDER += PS[0];
  /* 48cd */ WS_QUOTIENT = WS[1];
  /* 48d1 */ WS_QUOTIENT += PS[2];
  /* 48d5 */ FB[0] = WS_REMAINDER;
  /* 48d9 */ FB[1] = WS_QUOTIENT;
  /* 48dd */ FB[4] = 0x0;
  /* 48e4 */ FB[5] = 0x0;
  /* 48eb */ FB[6] = 0x2000;
  /* 48f2 */ REG[0x3694] = 0x80000000;
  /* 48fa */ REG[0x3695] = 0x2000;
  /* 4902 */ REG[0x3656] = WS_REMAINDER;
  /* 4907 */ REG[0x3657] = WS_QUOTIENT;
  /* 490c */ REG[0x3661] = 0x8000ffff;
  /* 4914 */ REG[0x3697] = 0x0;
  /* 491c */ REG[0x3696] = 0x0;
  /* 4924 */ WS_REMAINDER = REG[0x3696];
  /* 4929 */ REG[0x36b1] = 0x0;
  /* 4931 */ REG[0x36b6] = (REG[0x36b6] & 0xffffff00) | 0x900c6;
  /* 493d */ REG[0x36c0] &= 0xfffffffe;
  /* 4945 */ WS_REMAINDER = 0xc350;
L_494c:
  /* 494c */ /* test REG[0x36a3], 0x2 */
  /* 4954 */ if ((REG[0x36a3] & 0x2) != 0) goto L_496a;
  /* 4957 */ udelay(20);
  /* 4959 */ WS_REMAINDER -= 0x1;
  /* 4960 */ /* cmp WS_REMAINDER, 0x0 */
  /* 4967 */ if (WS_REMAINDER != 0x0) goto L_494c;
L_496a:
  /* 496a */ return;
}


