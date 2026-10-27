/* AtomBIOS command tables decompiled from prior/vbios.rom (master command table @ 0x4270) */
#include <stdint.h>

/* Register names resolved with the kernel *_offset.h headers; SMN[] addresses are byte addresses on the SMN bus,
   REG[] values are dword indices in the BAR5 register aperture (after adding reg_block). */
#define BIF_BX_PF0_MM_INDEX                          0x0000000   /* REG NBIO */
#define BIF_BX_PF0_MM_INDEX_HI                       0x0000006   /* REG NBIO */
#define BIF_BX0_BIOS_SCRATCH_0                       0x000004c   /* REG NBIO */
#define BIF_BX0_BIOS_SCRATCH_7                       0x0000053   /* REG NBIO */
#define BIF_BX0_FW_SCRATCH_12                        0x00000b0   /* REG NBIO */
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

/* command table 0x50 ("getvoltageinfo")  @ 0x0084  size 0x190  rev 0.0  ws=80 ps=0 */
void cmd_table_50(uint32_t PS[]) {   /* uint32_t WS[20] */
  /* 008a */ /* bad opcode 0x0 */
  /* 008b */ /* bad opcode 0x0 */
  /* 008c */ /* bad opcode 0x0 */
  /* 008d */ /* bad opcode 0x0 */
  /* 008e */ /* bad opcode 0x0 */
  /* 008f */ /* bad opcode 0x0 */
  /* 0090 */ /* test WS[5][31:16], WS[0][31:16] */
  /* 0094 */ /* bad opcode 0x0 */
  /* 0095 */ /* bad opcode 0x0 */
  /* 0096 */ /* bad opcode 0x0 */
  /* 0097 */ /* bad opcode 0x0 */
  /* 0098 */ /* bad opcode 0x0 */
  /* 0099 */ /* bad opcode 0x0 */
  /* 009a */ /* bad opcode 0x0 */
  /* 009b */ /* bad opcode 0x0 */
  /* 009c */ /* bad opcode 0x0 */
  /* 009d */ /* bad opcode 0x0 */
  /* 009e */ /* bad opcode 0x0 */
  /* 009f */ /* bad opcode 0x0 */
  /* 00a0 */ /* bad opcode 0x0 */
  /* 00a1 */ /* bad opcode 0x0 */
  /* 00a2 */ /* bad opcode 0x0 */
  /* 00a3 */ /* bad opcode 0x0 */
  /* 00a4 */ /* bad opcode 0x0 */
  /* 00a5 */ /* bad opcode 0x0 */
  /* 00a6 */ /* bad opcode 0x0 */
  /* 00a7 */ /* bad opcode 0x0 */
  /* 00a8 */ /* bad opcode 0x0 */
  /* 00a9 */ /* bad opcode 0x0 */
  /* 00aa */ /* bad opcode 0x0 */
  /* 00ab */ /* bad opcode 0x0 */
  /* 00ac */ /* bad opcode 0x0 */
  /* 00ad */ /* bad opcode 0x0 */
  /* 00ae */ /* bad opcode 0x0 */
  /* 00af */ /* bad opcode 0x0 */
  /* 00b0 */ /* bad opcode 0x0 */
  /* 00b1 */ /* bad opcode 0x0 */
  /* 00b2 */ /* bad opcode 0x0 */
  /* 00b3 */ /* bad opcode 0x0 */
  /* 00b4 */ /* bad opcode 0x0 */
  /* 00b5 */ /* bad opcode 0x0 */
  /* 00b6 */ /* bad opcode 0x0 */
  /* 00b7 */ /* bad opcode 0x0 */
  /* 00b8 */ /* bad opcode 0x0 */
  /* 00b9 */ /* bad opcode 0x0 */
  /* 00ba */ /* bad opcode 0x0 */
  /* 00bb */ /* bad opcode 0x0 */
  /* 00bc */ /* bad opcode 0x0 */
  /* 00bd */ /* bad opcode 0x0 */
  /* 00be */ /* bad opcode 0x0 */
  /* 00bf */ /* bad opcode 0x0 */
  /* 00c0 */ /* bad opcode 0x0 */
  /* 00c1 */ /* bad opcode 0x0 */
  /* 00c2 */ /* bad opcode 0x0 */
  /* 00c3 */ /* bad opcode 0x0 */
  /* 00c4 */ /* bad opcode 0x0 */
  /* 00c5 */ /* bad opcode 0x0 */
  /* 00c6 */ /* bad opcode 0x0 */
  /* 00c7 */ /* bad opcode 0x0 */
  /* 00c8 */ /* bad opcode 0x0 */
  /* 00c9 */ /* bad opcode 0x0 */
  /* 00ca */ /* bad opcode 0x0 */
  /* 00cb */ /* bad opcode 0x0 */
  /* 00cc */ /* bad opcode 0x0 */
  /* 00cd */ /* bad opcode 0x0 */
  /* 00ce */ /* bad opcode 0x0 */
  /* 00cf */ /* bad opcode 0x0 */
  /* 00d0 */ /* bad opcode 0x0 */
  /* 00d1 */ /* bad opcode 0x0 */
  /* 00d2 */ /* bad opcode 0x0 */
  /* 00d3 */ /* bad opcode 0x0 */
  /* 00d4 */ /* bad opcode 0x0 */
  /* 00d5 */ /* bad opcode 0x0 */
  /* 00d6 */ /* bad opcode 0x0 */
  /* 00d7 */ /* bad opcode 0x0 */
  /* 00d8 */ /* bad opcode 0x0 */
  /* 00d9 */ /* bad opcode 0x0 */
  /* 00da */ /* bad opcode 0x0 */
  /* 00db */ /* bad opcode 0x0 */
  /* 00dc */ /* bad opcode 0x0 */
  /* 00dd */ /* bad opcode 0x0 */
  /* 00de */ /* bad opcode 0x0 */
  /* 00df */ /* bad opcode 0x0 */
  /* 00e0 */ /* bad opcode 0x0 */
  /* 00e1 */ /* bad opcode 0x0 */
  /* 00e2 */ /* bad opcode 0x0 */
  /* 00e3 */ /* bad opcode 0x0 */
  /* 00e4 */ /* bad opcode 0x0 */
  /* 00e5 */ /* bad opcode 0x0 */
  /* 00e6 */ /* bad opcode 0x0 */
  /* 00e7 */ /* bad opcode 0x0 */
  /* 00e8 */ /* bad opcode 0x0 */
  /* 00e9 */ /* bad opcode 0x0 */
  /* 00ea */ /* bad opcode 0x0 */
  /* 00eb */ /* bad opcode 0x0 */
  /* 00ec */ /* bad opcode 0x0 */
  /* 00ed */ /* bad opcode 0x0 */
  /* 00ee */ /* bad opcode 0x0 */
  /* 00ef */ /* bad opcode 0x0 */
  /* 00f0 */ /* bad opcode 0x0 */
  /* 00f1 */ /* bad opcode 0x0 */
  /* 00f2 */ /* bad opcode 0x0 */
  /* 00f3 */ /* bad opcode 0x0 */
  /* 00f4 */ /* bad opcode 0x0 */
  /* 00f5 */ /* bad opcode 0x0 */
  /* 00f6 */ /* bad opcode 0x0 */
  /* 00f7 */ /* bad opcode 0x0 */
  /* 00f8 */ PS[80] += REG[0x1e06];
  /* 00fd */ /* bad opcode 0xc0 */
  /* 00fe */ WS[0][15:0] |= ID[0x0000][23:8];
  /* 0103 */ /* bad opcode 0x0 */
  /* 0104 */ /* bad opcode 0x80 */
  /* 0105 */ /* bad opcode 0x0 */
  /* 0106 */ /* bad opcode 0x80 */
  /* 0107 */ /* bad opcode 0x0 */
  /* 0108 */ /* bad opcode 0x80 */
  /* 0109 */ /* bad opcode 0x0 */
  /* 010a */ MC[0x96] <<= 71;
  /* 010e */ /* bad opcode 0xe1 */
  /* 010f */ /* bad opcode 0xa1 */
  /* 0110 */ /* bad opcode 0xe6 */
  /* 0111 */ udelay(8);
  /* 0113 */ /* cmp PLL[0x06][31:24], ID[0x1fef][23:16] */
  /* 0118 */ /* bad opcode 0xcf */
  /* 0119 */ /* bad opcode 0xf9 */
  /* 011a */ /* bad opcode 0xff */
  /* 011b */ WS[0] <<= 0;
  /* 011f */ /* bad opcode 0x0 */
  /* 0120 */ /* bad opcode 0x0 */
  /* 0121 */ /* bad opcode 0x0 */
  /* 0122 */ /* bad opcode 0xe2 */
  /* 0123 */ io_mode = IIO_0xffe;
  /* 0126 */ /* bad opcode 0xfb */
  /* 0127 */ REG[BIF_BX_PF0_MM_INDEX][15:0] &= REG[0x2c0][15:0];
  /* 012d */ PS[200] &= REG[0x8012];
  /* 0132 */ /* bad opcode 0x0 */
  /* 0133 */ /* bad opcode 0x0 */
  /* 0134 */ /* bad opcode 0x0 */
  /* 0135 */ /* bad opcode 0x0 */
  /* 0136 */ /* bad opcode 0x80 */
  /* 0137 */ /* bad opcode 0x87 */
  /* 0138 */ PS[0] = REG[0x20];
  /* 013d */ /* bad opcode 0x0 */
  /* 013e */ PS[48][23:8] <<= 209;
  /* 0142 */ /* bad opcode 0xc1 */
  /* 0143 */ /* bad opcode 0xac */
  /* 0144 */ PS[17][23:8] >>= 209;
  /* 0148 */ REG[0x20] -= REG[0xcc0];
  /* 014e */ /* cmp PLL[0xdd][15:0], REG[0x154][23:8] */
  /* 0153 */ WS_DATAPTR[23:8] >>= 8;
  /* 0157 */ /* bad opcode 0xfe */
  /* 0158 */ /* debug 0x00 */
  /* 015a */ /* bad opcode 0x80 */
  /* 015b */ if (PLL[0xdd][15:0] < REG[0x154][23:8]) goto L_4488;
  /* 015e */ /* cmp PLL[0xcc][15:0], PLL[0xaa][31:16] */
  /* 0162 */ PLL[0x00][15:0] |= 0xc400;
  /* 0167 */ WS[192][15:0] = 0x3f;
  /* 016c */ WS_QUOTIENT = PS[188] * WS[207];
  /* 0170 */ WS_QUOTIENT = PLL[0xb9][15:0] / WS[122][31:16]; WS_REMAINDER = PLL[0xb9][15:0] % WS[122][31:16];   /* 0 if divisor is 0 */
  /* 0174 */ PS[8] &= REG[0x840];
  /* 0179 */ /* cmp PLL[0x00], REG[BIF_BX0_FW_SCRATCH_12] */
  /* 017e */ /* bad opcode 0x95 */
  /* 017f */ /* cmp PLL[0x80][15:8], ID[0xe000][7:0] */
  /* 0184 */ /* bad opcode 0x0 */
  /* 0185 */ /* bad opcode 0x0 */
  /* 0186 */ PLL[0x00] = (PLL[0x00] & 0x7000606) | REG[0x1808];
  /* 018f */ MC[0x04] <<= 32;
  /* 0193 */ FB[4][7:0] = REG[0x420][7:0];
  /* 0198 */ WS_QUOTIENT = PS[212][7:0] * ID[0x3d43][31:24];
  /* 019d */ /* bad opcode 0xd4 */
  /* 019e */ goto L_d4c1;
  /* 01a1 */ goto L_d4c1;
  /* 01a4 */ goto L_4445;
  /* 01a7 */ /* cmp PS[67], ID[0x543d][23:8] */
  /* 01ac */ REG[0x150][15:0] = 0xd015;
  /* 01b2 */ goto L_d4c1;
  /* 01b5 */ goto L_14c1;
  /* 01b8 */ /* cmp REG[0x3d43], ID[0x43d4][23:8] */
  /* 01be */ WS[1][23:8] <<= 21;
  /* 01c2 */ mdelay(1);
  /* 01c4 */ /* cmp MC[0x00], ID[0x0000] */
  /* 01c9 */ /* bad opcode 0x0 */
  /* 01ca */ /* bad opcode 0x0 */
  /* 01cb */ /* bad opcode 0x0 */
  /* 01cc */ MC[0x87][23:8] >>= 41;
  /* 01d0 */ /* cmp PLL[0x06][15:0], ID[0x090f][15:0] */
  /* 01d5 */ /* bad opcode 0x0 */
  /* 01d6 */ /* bad opcode 0x0 */
  /* 01d7 */ /* bad opcode 0x0 */
  /* 01d8 */ REG[0x2][31:24] &= REG[BIF_BX_PF0_MM_INDEX][31:24];
  /* 01de */ FB[192] = REG[0x300];
  /* 01e3 */ /* bad opcode 0x0 */
  /* 01e4 */ FB[12][7:0] = REG[0x208][7:0];
  /* 01e9 */ /* bad opcode 0x0 */
  /* 01ea */ /* bad opcode 0x0 */
  /* 01eb */ /* bad opcode 0x0 */
  /* 01ec */ FB[0] |= REG[0x200];
  /* 01f1 */ /* bad opcode 0x0 */
  /* 01f2 */ /* bad opcode 0x0 */
  /* 01f3 */ /* bad opcode 0x0 */
  /* 01f4 */ PS[0] |= WS[0];
  /* 01f8 */ /* SAVEREG (unimplemented in kernel) */
  /* 01f9 */ /* bad opcode 0x0 */
  /* 01fa */ /* bad opcode 0x0 */
  /* 01fb */ /* bad opcode 0x0 */
  /* 01fc */ MC[0x10] <<= 12;
  /* 0200 */ /* bad opcode 0x0 */
  /* 0201 */ /* bad opcode 0x0 */
  /* 0202 */ {WS_QUOTIENT, WS_REMAINDER} = (uint64_t)WS[32] * ID[0x0000];
  /* 0207 */ /* bad opcode 0x0 */
  /* 0208 */ /* bad opcode 0x0 */
  /* 0209 */ /* bad opcode 0x0 */
  /* 020a */ /* bad opcode 0x0 */
  /* 020b */ PS[0] = REG[BIF_BX_PF0_MM_INDEX];
  /* 0210 */ PS[0][15:0] |= PS[92][31:16];
}


