; /lib/firmware/amdgpu/gc_11_0_0_pfp.bin.zst  header: gfx v2.0  code 0x169a0 bytes @file+0x100  data 0x22000 bytes  start_addr=0x7000000003000
; aligned RV64IMAFD decode; '.word' = not a valid instruction (data, padding or non-standard opcode)
000000: c4fe65c9   .word 0xc4fe65c9
000004: f3d7f847   fmsub.d	fa6, fa5, ft9, ft10
000008: f07ed657   .word 0xf07ed657
00000c: 60527228   .word 0x60527228
000010: 31535024   .word 0x31535024
000014: 000167a0   .word 0x000167a0
000030: 00000001   .word 0x00000001
000038: 88268b29   .word 0x88268b29
00003c: 154d7439   .word 0x154d7439
000040: e032efaf   .word 0xe032efaf
000044: 2243252e   .word 0x2243252e
00004c: 00000001   .word 0x00000001
000058: 81012044   .word 0x81012044
000060: 00000a50   .word 0x00000a50
000064: ffffffff   .word 0xffffffff
00006c: 000169a0   .word 0x000169a0
0000d0: 59714999   .word 0x59714999
0000d4: 3b57c0d4   .word 0x3b57c0d4
0000d8: 150cd285   .word 0x150cd285
0000dc: bf61e26a   .word 0xbf61e26a
0000e0: 680d2c90   .word 0x680d2c90
0000e4: f33cf3db   .word 0xf33cf3db
0000e8: b1a1305e   .word 0xb1a1305e
0000ec: 3896e39c   .word 0x3896e39c
001100: fd010113   addi	sp, sp, -48
001104: 02d13423   sd	a3, 40(sp)
001108: 02e13023   sd	a4, 32(sp)
00110c: 00f13c23   sd	a5, 24(sp)
001110: 01713823   sd	s7, 16(sp)
001114: 01913423   sd	s9, 8(sp)
001118: 30426703   lwu	a4, 772(tp)
00111c: 00400793   li	a5, 4
001120: 01f77713   andi	a4, a4, 31
001124: 02f70263   beq	a4, a5, 36
001128: 30e22223   sw	a4, 772(tp)
00112c: 02813683   ld	a3, 40(sp)
001130: 02013703   ld	a4, 32(sp)
001134: 01813783   ld	a5, 24(sp)
001138: 01013b83   ld	s7, 16(sp)
00113c: 00813c83   ld	s9, 8(sp)
001140: 03010113   addi	sp, sp, 48
001144: 30200073   mret
001148: 1f923783   ld	a5, 505(tp)
00114c: 000016b7   lui	a3, 1
001150: 00d787b3   add	a5, a5, a3
001154: c007a823   sw	zero, -1008(a5)
001158: 000b8693   mv	a3, s7
00115c: 7036a783   lw	a5, 1795(a3)
001160: fe078ee3   beqz	a5, -4
001164: 7006a1a3   sw	zero, 1795(a3)
001168: 1e022fa3   sw	zero, 511(tp)
00116c: 00400793   li	a5, 4
001170: 30f22223   sw	a5, 772(tp)
001174: 01000793   li	a5, 16
001178: 3cf220a3   sw	a5, 961(tp)
00117c: f14027f3   csrr	a5, mhartid
001180: 0007879b   sext.w	a5, a5
001184: 04078063   beqz	a5, 64
001188: 000267b7   lui	a5, 38
00118c: 00fc87b3   add	a5, s9, a5
001190: 00100693   li	a3, 1
001194: 0ed7aa23   sw	a3, 244(a5)
001198: 00b23783   ld	a5, 11(tp)
00119c: 00078263   beqz	a5, 4
0011a0: 0000000b   .word 0x0000000b
0011a4: 30e22223   sw	a4, 772(tp)
0011a8: 02813683   ld	a3, 40(sp)
0011ac: 02013703   ld	a4, 32(sp)
0011b0: 01813783   ld	a5, 24(sp)
0011b4: 01013b83   ld	s7, 16(sp)
0011b8: 00813c83   ld	s9, 8(sp)
0011bc: 03010113   addi	sp, sp, 48
0011c0: 30200073   mret
0011c4: 000267b7   lui	a5, 38
0011c8: 00fc87b3   add	a5, s9, a5
0011cc: 00100693   li	a3, 1
0011d0: 0ed7a823   sw	a3, 240(a5)
0011d4: fc5ff06f   j	-60
003100: 0010021b   addiw	tp, zero, 1
003104: 03121213   slli	tp, tp, 49
003108: 00008db7   lui	s11, 8
00310c: 001d8d9b   addiw	s11, s11, 1
003110: 012d9d93   slli	s11, s11, 18
003114: 005d8d93   addi	s11, s11, 5
003118: 00fd9d93   slli	s11, s11, 15
00311c: 7e8d8d93   addi	s11, s11, 2024
003120: 00100d1b   addiw	s10, zero, 1
003124: 024d1d13   slli	s10, s10, 36
003128: 031d0d13   addi	s10, s10, 49
00312c: 00cd1d13   slli	s10, s10, 12
003130: 800d0d13   addi	s10, s10, -2048
003134: 00100c9b   addiw	s9, zero, 1
003138: 024c9c93   slli	s9, s9, 36
00313c: 00dc8c93   addi	s9, s9, 13
003140: 00cc9c93   slli	s9, s9, 12
003144: 800c8c93   addi	s9, s9, -2048
003148: 00300b9b   addiw	s7, zero, 3
00314c: 030b9b93   slli	s7, s7, 48
003150: 000083b7   lui	t2, 8
003154: 007bebb3   or	s7, s7, t2
003158: 08100393   li	t2, 129
00315c: 307221a3   sw	t2, 771(tp)
003160: 02022223   sw	zero, 36(tp)
003164: 000013b7   lui	t2, 1
003168: 8803839b   addiw	t2, t2, -1920
00316c: 0a7220a3   sw	t2, 161(tp)
003170: 00100393   li	t2, 1
003174: 0a7229a3   sw	t2, 179(tp)
003178: 00010937   lui	s2, 16
00317c: 0019091b   addiw	s2, s2, 1
003180: 02091913   slli	s2, s2, 32
003184: 00001337   lui	t1, 1
003188: a503031b   addiw	t1, t1, -1456
00318c: 0a622da3   sw	t1, 187(tp)
003190: 00100313   li	t1, 1
003194: 7b331073   csrw	dscratch1, t1
003198: 000013b7   lui	t2, 1
00319c: c103839b   addiw	t2, t2, -1008
0031a0: 007902b3   add	t0, s2, t2
0031a4: 0002b023   sd	zero, 0(t0)
0031a8: 00100313   li	t1, 1
0031ac: 32622023   sw	t1, 800(tp)
0031b0: 0011f117   auipc	sp, 287
0031b4: b5010113   addi	sp, sp, -1200
0031b8: f1402ff3   csrr	t6, mhartid
0031bc: 000f8863   beqz	t6, 16
0031c0: 31c23303   ld	t1, 796(tp)
0031c4: fe030ee3   beqz	t1, -4
0031c8: 09c0006f   j	156
0031cc: 00700313   li	t1, 7
0031d0: 000023b7   lui	t2, 2
0031d4: f3c3839b   addiw	t2, t2, -196
0031d8: 007902b3   add	t0, s2, t2
0031dc: 0062a023   sw	t1, 0(t0)
0031e0: 000fd317   auipc	t1, 253
0031e4: f2030313   addi	t1, t1, -224
0031e8: 0011fe17   auipc	t3, 287
0031ec: f18e0e13   addi	t3, t3, -232
0031f0: 406e0e33   sub	t3, t3, t1
0031f4: fffe0e13   addi	t3, t3, -1
0031f8: 000023b7   lui	t2, 2
0031fc: f403839b   addiw	t2, t2, -192
003200: 007902b3   add	t0, s2, t2
003204: 0062b023   sd	t1, 0(t0)
003208: 000023b7   lui	t2, 2
00320c: f443839b   addiw	t2, t2, -188
003210: 007902b3   add	t0, s2, t2
003214: 01c2b023   sd	t3, 0(t0)
003218: 00700313   li	t1, 7
00321c: 000023b7   lui	t2, 2
003220: f483839b   addiw	t2, t2, -184
003224: 007902b3   add	t0, s2, t2
003228: 0062a023   sw	t1, 0(t0)
00322c: ffffd317   auipc	t1, 1048573
003230: ed430313   addi	t1, t1, -300
003234: 0003fe17   auipc	t3, 63
003238: ecce0e13   addi	t3, t3, -308
00323c: 406e0e33   sub	t3, t3, t1
003240: fffe0e13   addi	t3, t3, -1
003244: 000023b7   lui	t2, 2
003248: f4c3839b   addiw	t2, t2, -180
00324c: 007902b3   add	t0, s2, t2
003250: 0062a023   sw	t1, 0(t0)
003254: 000023b7   lui	t2, 2
003258: f503839b   addiw	t2, t2, -176
00325c: 007902b3   add	t0, s2, t2
003260: 01c2b023   sd	t3, 0(t0)
003264: ffffe317   auipc	t1, 1048574
003268: e9c30313   addi	t1, t1, -356
00326c: 00235313   srli	t1, t1, 2
003270: 000013b7   lui	t2, 1
003274: c143839b   addiw	t2, t2, -1004
003278: 007902b3   add	t0, s2, t2
00327c: 0062b023   sd	t1, 0(t0)
003280: ffffd317   auipc	t1, 1048573
003284: e8030313   addi	t1, t1, -384
003288: 000023b7   lui	t2, 2
00328c: f5c3839b   addiw	t2, t2, -164
003290: 007902b3   add	t0, s2, t2
003294: 0062b023   sd	t1, 0(t0)
003298: 00100313   li	t1, 1
00329c: 02622223   sw	t1, 36(tp)
0032a0: 000fe197   auipc	gp, 254
0032a4: 66018193   addi	gp, gp, 1632
0032a8: 84018513   addi	a0, gp, -1984
0032ac: b7018593   addi	a1, gp, -1168
0032b0: 00b50863   beq	a0, a1, 16
0032b4: 00053023   sd	zero, 0(a0)
0032b8: 00850513   addi	a0, a0, 8
0032bc: feb56ce3   bltu	a0, a1, -8
0032c0: f1402573   csrr	a0, mhartid
0032c4: 724060ef   jal	26404
0032c8: 00010937   lui	s2, 16
0032cc: 0019091b   addiw	s2, s2, 1
0032d0: 02091913   slli	s2, s2, 32
0032d4: 0000c3b7   lui	t2, 12
0032d8: 1c83839b   addiw	t2, t2, 456
0032dc: 007902b3   add	t0, s2, t2
0032e0: 0002b583   ld	a1, 0(t0)
0032e4: f1402573   csrr	a0, mhartid
0032e8: 00000097   auipc	ra, 0
0032ec: e1808093   addi	ra, ra, -488
0032f0: 1d90606f   j	27096
0032f4: 00008067   ret
0032f8: 00100793   li	a5, 1
0032fc: 06f223a3   sw	a5, 103(tp)
003300: 80000737   lui	a4, 524288
003304: d0000637   lui	a2, 851968
003308: 0017071b   addiw	a4, a4, 1
00330c: fff60613   addi	a2, a2, -1
003310: f14026f3   csrr	a3, mhartid
003314: 0036f693   andi	a3, a3, 3
003318: 01c6969b   slliw	a3, a3, 28
00331c: 0045579b   srliw	a5, a0, 4
003320: 00c77733   and	a4, a4, a2
003324: 00d76733   or	a4, a4, a3
003328: 0077f793   andi	a5, a5, 7
00332c: fc8006b7   lui	a3, 1034240
003330: fff68693   addi	a3, a3, -1
003334: 0017c793   xori	a5, a5, 1
003338: 00d77733   and	a4, a4, a3
00333c: 0177979b   slliw	a5, a5, 23
003340: 00f76733   or	a4, a4, a5
003344: 0007071b   sext.w	a4, a4
003348: 000c8693   mv	a3, s9
00334c: e0e6a623   sw	a4, -500(a3)
003350: e0c6a783   lw	a5, -500(a3)
003354: 0017f793   andi	a5, a5, 1
003358: fe078ae3   beqz	a5, -12
00335c: e006a623   sw	zero, -500(a3)
003360: 060223a3   sw	zero, 103(tp)
003364: 00008067   ret
003368: 04226783   lwu	a5, 66(tp)
00336c: 0007879b   sext.w	a5, a5
003370: 02078a63   beqz	a5, 52
003374: 0047d713   srli	a4, a5, 4
003378: f14026f3   csrr	a3, mhartid
00337c: 02069613   slli	a2, a3, 32
003380: 00177713   andi	a4, a4, 1
003384: 02065613   srli	a2, a2, 32
003388: 02c70063   beq	a4, a2, 32
00338c: 04226783   lwu	a5, 66(tp)
003390: 0087d793   srli	a5, a5, 8
003394: 0037f793   andi	a5, a5, 3
003398: fe078ae3   beqz	a5, -12
00339c: 00200713   li	a4, 2
0033a0: 10e78063   beq	a5, a4, 256
0033a4: 00008067   ret
0033a8: 0087d793   srli	a5, a5, 8
0033ac: 0037f793   andi	a5, a5, 3
0033b0: 00100713   li	a4, 1
0033b4: 18e78263   beq	a5, a4, 388
0033b8: 04226783   lwu	a5, 66(tp)
0033bc: c0000737   lui	a4, 786432
0033c0: 00e7f7b3   and	a5, a5, a4
0033c4: 0007879b   sext.w	a5, a5
0033c8: 80000737   lui	a4, 524288
0033cc: fce79ce3   bne	a5, a4, -40
0033d0: c00057b7   lui	a5, 786437
0033d4: b007879b   addiw	a5, a5, -1280
0033d8: 00f22023   sw	a5, 0(tp)
0033dc: 00100793   li	a5, 1
0033e0: 00f22023   sw	a5, 0(tp)
0033e4: c00f17b7   lui	a5, 786673
0033e8: 00f22023   sw	a5, 0(tp)
0033ec: 00022023   sw	zero, 0(tp)
0033f0: 00022023   sw	zero, 0(tp)
0033f4: 00022023   sw	zero, 0(tp)
0033f8: 00022023   sw	zero, 0(tp)
0033fc: 00022023   sw	zero, 0(tp)
003400: 00022023   sw	zero, 0(tp)
003404: 00022023   sw	zero, 0(tp)
003408: 00022023   sw	zero, 0(tp)
00340c: 00022023   sw	zero, 0(tp)
003410: 00022023   sw	zero, 0(tp)
003414: 00022023   sw	zero, 0(tp)
003418: 00022023   sw	zero, 0(tp)
00341c: 00022023   sw	zero, 0(tp)
003420: 00022023   sw	zero, 0(tp)
003424: 00022023   sw	zero, 0(tp)
003428: 00022023   sw	zero, 0(tp)
00342c: 40000713   li	a4, 1024
003430: 00d71733   sll	a4, a4, a3
003434: 31423783   ld	a5, 788(tp)
003438: 00f777b3   and	a5, a4, a5
00343c: fe079ce3   bnez	a5, -8
003440: 04226683   lwu	a3, 66(tp)
003444: 00100713   li	a4, 1
003448: 01f6d79b   srliw	a5, a3, 31
00344c: 06e223a3   sw	a4, 103(tp)
003450: bfff0737   lui	a4, 786416
003454: 01e79793   slli	a5, a5, 30
003458: 0ff70713   addi	a4, a4, 255
00345c: 00d77733   and	a4, a4, a3
003460: 2007e793   ori	a5, a5, 512
003464: 00e7e7b3   or	a5, a5, a4
003468: 0007879b   sext.w	a5, a5
00346c: 000c8613   mv	a2, s9
003470: eefca823   sw	a5, -272(s9)
003474: c00006b7   lui	a3, 786432
003478: 40000737   lui	a4, 262144
00347c: 04226783   lwu	a5, 66(tp)
003480: 00d7f7b3   and	a5, a5, a3
003484: 0007879b   sext.w	a5, a5
003488: fee79ae3   bne	a5, a4, -12
00348c: ee062823   sw	zero, -272(a2)
003490: ef066783   lwu	a5, -272(a2)
003494: 00078263   beqz	a5, 4
003498: 060223a3   sw	zero, 103(tp)
00349c: 00008067   ret
0034a0: c00057b7   lui	a5, 786437
0034a4: b007879b   addiw	a5, a5, -1280
0034a8: 00f22023   sw	a5, 0(tp)
0034ac: 00100793   li	a5, 1
0034b0: 00f22023   sw	a5, 0(tp)
0034b4: c00f17b7   lui	a5, 786673
0034b8: 00f22023   sw	a5, 0(tp)
0034bc: 00022023   sw	zero, 0(tp)
0034c0: 00022023   sw	zero, 0(tp)
0034c4: 00022023   sw	zero, 0(tp)
0034c8: 00022023   sw	zero, 0(tp)
0034cc: 00022023   sw	zero, 0(tp)
0034d0: 00022023   sw	zero, 0(tp)
0034d4: 00022023   sw	zero, 0(tp)
0034d8: 00022023   sw	zero, 0(tp)
0034dc: 00022023   sw	zero, 0(tp)
0034e0: 00022023   sw	zero, 0(tp)
0034e4: 00022023   sw	zero, 0(tp)
0034e8: 00022023   sw	zero, 0(tp)
0034ec: 00022023   sw	zero, 0(tp)
0034f0: 00022023   sw	zero, 0(tp)
0034f4: 00022023   sw	zero, 0(tp)
0034f8: 00022023   sw	zero, 0(tp)
0034fc: 40000713   li	a4, 1024
003500: f14027f3   csrr	a5, mhartid
003504: 00f71733   sll	a4, a4, a5
003508: 31423783   ld	a5, 788(tp)
00350c: 00f777b3   and	a5, a4, a5
003510: fe079ce3   bnez	a5, -8
003514: 04226783   lwu	a5, 66(tp)
003518: 00100713   li	a4, 1
00351c: 06e223a3   sw	a4, 103(tp)
003520: 40000737   lui	a4, 262144
003524: 00e7e7b3   or	a5, a5, a4
003528: 0007879b   sext.w	a5, a5
00352c: eefca823   sw	a5, -272(s9)
003530: 060223a3   sw	zero, 103(tp)
003534: 00008067   ret
003538: c00057b7   lui	a5, 786437
00353c: b007879b   addiw	a5, a5, -1280
003540: 00f22023   sw	a5, 0(tp)
003544: 00100793   li	a5, 1
003548: 00f22023   sw	a5, 0(tp)
00354c: c00f17b7   lui	a5, 786673
003550: 00f22023   sw	a5, 0(tp)
003554: 00022023   sw	zero, 0(tp)
003558: 00022023   sw	zero, 0(tp)
00355c: 00022023   sw	zero, 0(tp)
003560: 00022023   sw	zero, 0(tp)
003564: 00022023   sw	zero, 0(tp)
003568: 00022023   sw	zero, 0(tp)
00356c: 00022023   sw	zero, 0(tp)
003570: 00022023   sw	zero, 0(tp)
003574: 00022023   sw	zero, 0(tp)
003578: 00022023   sw	zero, 0(tp)
00357c: 00022023   sw	zero, 0(tp)
003580: 00022023   sw	zero, 0(tp)
003584: 00022023   sw	zero, 0(tp)
003588: 00022023   sw	zero, 0(tp)
00358c: 00022023   sw	zero, 0(tp)
003590: 00022023   sw	zero, 0(tp)
003594: 40000713   li	a4, 1024
003598: 00d71733   sll	a4, a4, a3
00359c: 31423783   ld	a5, 788(tp)
0035a0: 00f777b3   and	a5, a4, a5
0035a4: fe079ce3   bnez	a5, -8
0035a8: 04226783   lwu	a5, 66(tp)
0035ac: 00100713   li	a4, 1
0035b0: 06e223a3   sw	a4, 103(tp)
0035b4: 40000737   lui	a4, 262144
0035b8: 00e7e7b3   or	a5, a5, a4
0035bc: 0007879b   sext.w	a5, a5
0035c0: 000c8613   mv	a2, s9
0035c4: eefca823   sw	a5, -272(s9)
0035c8: c00006b7   lui	a3, 786432
0035cc: 40000737   lui	a4, 262144
0035d0: 04226783   lwu	a5, 66(tp)
0035d4: 00d7f7b3   and	a5, a5, a3
0035d8: 0007879b   sext.w	a5, a5
0035dc: fee79ae3   bne	a5, a4, -12
0035e0: eadff06f   j	-340
0035e4: 00000013   nop
0035e8: ec8ca783   lw	a5, -312(s9)
0035ec: c00005b7   lui	a1, 786432
0035f0: c00008b7   lui	a7, 786432
0035f4: 00b7f5b3   and	a1, a5, a1
0035f8: 0007879b   sext.w	a5, a5
0035fc: 4b158a63   beq	a1, a7, 1204
003600: eecca583   lw	a1, -276(s9)
003604: 00050693   mv	a3, a0
003608: 0025561b   srliw	a2, a0, 2
00360c: 0017d79b   srliw	a5, a5, 1
003610: 0045551b   srliw	a0, a0, 4
003614: 00757813   andi	a6, a0, 7
003618: 0017f793   andi	a5, a5, 1
00361c: 0015f513   andi	a0, a1, 1
003620: 000c8713   mv	a4, s9
003624: 00050593   mv	a1, a0
003628: 48a79063   bne	a5, a0, 1152
00362c: 000267b7   lui	a5, 38
003630: 00fc87b3   add	a5, s9, a5
003634: 94c7a783   lw	a5, -1716(a5)
003638: 00367613   andi	a2, a2, 3
00363c: 0036161b   slliw	a2, a2, 3
003640: 00c7d7bb   srlw	a5, a5, a2
003644: 0107d7bb   srlw	a5, a5, a6
003648: 0017f793   andi	a5, a5, 1
00364c: 00000513   li	a0, 0
003650: 44f58463   beq	a1, a5, 1096
003654: ec8ca783   lw	a5, -312(s9)
003658: 0017d61b   srliw	a2, a5, 1
00365c: 00267613   andi	a2, a2, 2
003660: 0007879b   sext.w	a5, a5
003664: 00060863   beqz	a2, 16
003668: 0087d61b   srliw	a2, a5, 8
00366c: 00267613   andi	a2, a2, 2
003670: 42061c63   bnez	a2, 1080
003674: 0017f793   andi	a5, a5, 1
003678: ffe00513   li	a0, -2
00367c: 40079e63   bnez	a5, 1052
003680: 800007b7   lui	a5, 524288
003684: 06b78793   addi	a5, a5, 107
003688: ecf72423   sw	a5, -312(a4)
00368c: ec870613   addi	a2, a4, -312
003690: ec876783   lwu	a5, -312(a4)
003694: 00078263   beqz	a5, 4
003698: ec872783   lw	a5, -312(a4)
00369c: ec872783   lw	a5, -312(a4)
0036a0: a00005b7   lui	a1, 655360
0036a4: 06b58593   addi	a1, a1, 107
0036a8: 00b7f7b3   and	a5, a5, a1
0036ac: 0007879b   sext.w	a5, a5
0036b0: 3eb79663   bne	a5, a1, 1004
0036b4: 96472783   lw	a5, -1692(a4)
0036b8: b6f1ac23   sw	a5, -1160(gp)
0036bc: ec872783   lw	a5, -312(a4)
0036c0: 01e7d793   srli	a5, a5, 30
0036c4: 0017f793   andi	a5, a5, 1
0036c8: 04079063   bnez	a5, 64
0036cc: 0b126783   lwu	a5, 177(tp)
0036d0: 000105b7   lui	a1, 16
0036d4: 00b7f7b3   and	a5, a5, a1
0036d8: 3e079263   bnez	a5, 996
0036dc: 400005b7   lui	a1, 262144
0036e0: 00010537   lui	a0, 16
0036e4: 0140006f   j	20
0036e8: 0b126783   lwu	a5, 177(tp)
0036ec: 00a7f7b3   and	a5, a5, a0
0036f0: 0007879b   sext.w	a5, a5
0036f4: 3c079463   bnez	a5, 968
0036f8: ec872783   lw	a5, -312(a4)
0036fc: 00b7f7b3   and	a5, a5, a1
003700: 0007879b   sext.w	a5, a5
003704: fe0782e3   beqz	a5, -28
003708: ec872783   lw	a5, -312(a4)
00370c: 0007859b   sext.w	a1, a5
003710: 01523783   ld	a5, 21(tp)
003714: 0037f793   andi	a5, a5, 3
003718: 00f20533   add	a0, tp, a5
00371c: 00b56803   lwu	a6, 11(a0)
003720: 04178513   addi	a0, a5, 65
003724: 00a206b3   add	a3, tp, a0
003728: 00100793   li	a5, 1
00372c: 00f6a023   sw	a5, 0(a3)
003730: 01323783   ld	a5, 19(tp)
003734: fe079ee3   bnez	a5, -4
003738: ebc73783   ld	a5, -324(a4)
00373c: 00c7d713   srli	a4, a5, 12
003740: 00377713   andi	a4, a4, 3
003744: 02070e63   beqz	a4, 60
003748: 07f00693   li	a3, 127
00374c: b0002773   csrr	a4, mcycle
003750: 00000013   nop
003754: b00027f3   csrr	a5, mcycle
003758: 40e787b3   sub	a5, a5, a4
00375c: fef6fae3   bgeu	a3, a5, -12
003760: ebcca783   lw	a5, -324(s9)
003764: 00c7d71b   srliw	a4, a5, 12
003768: 00377713   andi	a4, a4, 3
00376c: 02079793   slli	a5, a5, 32
003770: 0207d793   srli	a5, a5, 32
003774: fc071ce3   bnez	a4, -40
003778: ec8c8613   addi	a2, s9, -312
00377c: 00a206b3   add	a3, tp, a0
003780: 0017f793   andi	a5, a5, 1
003784: 38079463   bnez	a5, 904
003788: 0106a023   sw	a6, 0(a3)
00378c: 0085d79b   srliw	a5, a1, 8
003790: 80000737   lui	a4, 524288
003794: 0017f793   andi	a5, a5, 1
003798: 00e7e7b3   or	a5, a5, a4
00379c: 1fa23683   ld	a3, 506(tp)
0037a0: 00100713   li	a4, 1
0037a4: 02471713   slli	a4, a4, 36
0037a8: 0002e5b7   lui	a1, 46
0037ac: 00e686b3   add	a3, a3, a4
0037b0: 00b686b3   add	a3, a3, a1
0037b4: 08f6a023   sw	a5, 128(a3)
0037b8: 0002e537   lui	a0, 46
0037bc: c00005b7   lui	a1, 786432
0037c0: c00006b7   lui	a3, 786432
0037c4: 1fa23783   ld	a5, 506(tp)
0037c8: 00e787b3   add	a5, a5, a4
0037cc: 00a787b3   add	a5, a5, a0
0037d0: 0807a783   lw	a5, 128(a5)
0037d4: 00b7f7b3   and	a5, a5, a1
0037d8: 0007879b   sext.w	a5, a5
0037dc: fed794e3   bne	a5, a3, -24
0037e0: c00057b7   lui	a5, 786437
0037e4: b007879b   addiw	a5, a5, -1280
0037e8: 00f22023   sw	a5, 0(tp)
0037ec: 00100793   li	a5, 1
0037f0: 00f22023   sw	a5, 0(tp)
0037f4: c00f17b7   lui	a5, 786673
0037f8: 00f22023   sw	a5, 0(tp)
0037fc: 00022023   sw	zero, 0(tp)
003800: 00022023   sw	zero, 0(tp)
003804: 00022023   sw	zero, 0(tp)
003808: 00022023   sw	zero, 0(tp)
00380c: 00022023   sw	zero, 0(tp)
003810: 00022023   sw	zero, 0(tp)
003814: 00022023   sw	zero, 0(tp)
003818: 00022023   sw	zero, 0(tp)
00381c: 00022023   sw	zero, 0(tp)
003820: 00022023   sw	zero, 0(tp)
003824: 00022023   sw	zero, 0(tp)
003828: 00022023   sw	zero, 0(tp)
00382c: 00022023   sw	zero, 0(tp)
003830: 00022023   sw	zero, 0(tp)
003834: 00022023   sw	zero, 0(tp)
003838: 00022023   sw	zero, 0(tp)
00383c: 40000693   li	a3, 1024
003840: f14027f3   csrr	a5, mhartid
003844: 0007871b   sext.w	a4, a5
003848: 00f696b3   sll	a3, a3, a5
00384c: 31423783   ld	a5, 788(tp)
003850: 00d7f7b3   and	a5, a5, a3
003854: fe079ce3   bnez	a5, -8
003858: 04226783   lwu	a5, 66(tp)
00385c: fff74713   not	a4, a4
003860: 00177713   andi	a4, a4, 1
003864: 0047171b   slliw	a4, a4, 4
003868: 00e7e733   or	a4, a5, a4
00386c: 0ff77713   zext.b	a4, a4
003870: f007f793   andi	a5, a5, -256
003874: 00e7e7b3   or	a5, a5, a4
003878: 7fff0737   lui	a4, 524272
00387c: 0ff70713   addi	a4, a4, 255
003880: 00e7f7b3   and	a5, a5, a4
003884: 80000737   lui	a4, 524288
003888: 10070713   addi	a4, a4, 256
00388c: 00e7e7b3   or	a5, a5, a4
003890: 0007879b   sext.w	a5, a5
003894: 000c8513   mv	a0, s9
003898: eefca823   sw	a5, -272(s9)
00389c: c0000837   lui	a6, 786432
0038a0: c00005b7   lui	a1, 786432
0038a4: 04226703   lwu	a4, 66(tp)
0038a8: 010777b3   and	a5, a4, a6
0038ac: 0007879b   sext.w	a5, a5
0038b0: feb79ae3   bne	a5, a1, -12
0038b4: 02171793   slli	a5, a4, 33
0038b8: 0217d793   srli	a5, a5, 33
0038bc: eef52823   sw	a5, -272(a0)
0038c0: 04226783   lwu	a5, 66(tp)
0038c4: 0007879b   sext.w	a5, a5
0038c8: fe079ce3   bnez	a5, -8
0038cc: 06022423   sw	zero, 104(tp)
0038d0: 1fa23783   ld	a5, 506(tp)
0038d4: 00100713   li	a4, 1
0038d8: 02471713   slli	a4, a4, 36
0038dc: 00e787b3   add	a5, a5, a4
0038e0: 0002e837   lui	a6, 46
0038e4: 010787b3   add	a5, a5, a6
0038e8: 0807a583   lw	a1, 128(a5)
0038ec: 02159593   slli	a1, a1, 33
0038f0: 0215d593   srli	a1, a1, 33
0038f4: 1fa23783   ld	a5, 506(tp)
0038f8: 00e787b3   add	a5, a5, a4
0038fc: 010787b3   add	a5, a5, a6
003900: 08b7a023   sw	a1, 128(a5)
003904: c00005b7   lui	a1, 786432
003908: 1fa23783   ld	a5, 506(tp)
00390c: 00e787b3   add	a5, a5, a4
003910: 010787b3   add	a5, a5, a6
003914: 0807a783   lw	a5, 128(a5)
003918: 00b7f7b3   and	a5, a5, a1
00391c: 0007879b   sext.w	a5, a5
003920: fe0794e3   bnez	a5, -24
003924: ec852803   lw	a6, -312(a0)
003928: 0088581b   srliw	a6, a6, 8
00392c: 00187813   andi	a6, a6, 1
003930: 0018171b   slliw	a4, a6, 1
003934: 01076733   or	a4, a4, a6
003938: 06e22323   sw	a4, 102(tp)
00393c: c0005737   lui	a4, 786437
003940: b007071b   addiw	a4, a4, -1280
003944: 00e22023   sw	a4, 0(tp)
003948: 00100713   li	a4, 1
00394c: 00e22023   sw	a4, 0(tp)
003950: c00f1737   lui	a4, 786673
003954: 00e22023   sw	a4, 0(tp)
003958: 00022023   sw	zero, 0(tp)
00395c: 00022023   sw	zero, 0(tp)
003960: 00022023   sw	zero, 0(tp)
003964: 00022023   sw	zero, 0(tp)
003968: 00022023   sw	zero, 0(tp)
00396c: 00022023   sw	zero, 0(tp)
003970: 00022023   sw	zero, 0(tp)
003974: 00022023   sw	zero, 0(tp)
003978: 00022023   sw	zero, 0(tp)
00397c: 00022023   sw	zero, 0(tp)
003980: 00022023   sw	zero, 0(tp)
003984: 00022023   sw	zero, 0(tp)
003988: 00022023   sw	zero, 0(tp)
00398c: 00022023   sw	zero, 0(tp)
003990: 00022023   sw	zero, 0(tp)
003994: 00022023   sw	zero, 0(tp)
003998: 31423703   ld	a4, 788(tp)
00399c: 00e6f733   and	a4, a3, a4
0039a0: fe071ce3   bnez	a4, -8
0039a4: c0001737   lui	a4, 786433
0039a8: e007071b   addiw	a4, a4, -512
0039ac: 00e22023   sw	a4, 0(tp)
0039b0: 000205b7   lui	a1, 32
0039b4: 0108171b   slliw	a4, a6, 16
0039b8: 00e58593   addi	a1, a1, 14
0039bc: 00b76733   or	a4, a4, a1
0039c0: 00e22023   sw	a4, 0(tp)
0039c4: c00f1737   lui	a4, 786673
0039c8: 00e22023   sw	a4, 0(tp)
0039cc: 00022023   sw	zero, 0(tp)
0039d0: 00022023   sw	zero, 0(tp)
0039d4: 00022023   sw	zero, 0(tp)
0039d8: 00022023   sw	zero, 0(tp)
0039dc: 00022023   sw	zero, 0(tp)
0039e0: 00022023   sw	zero, 0(tp)
0039e4: 00022023   sw	zero, 0(tp)
0039e8: 00022023   sw	zero, 0(tp)
0039ec: 00022023   sw	zero, 0(tp)
0039f0: 00022023   sw	zero, 0(tp)
0039f4: 00022023   sw	zero, 0(tp)
0039f8: 00022023   sw	zero, 0(tp)
0039fc: 00022023   sw	zero, 0(tp)
003a00: 00022023   sw	zero, 0(tp)
003a04: 00022023   sw	zero, 0(tp)
003a08: 00022023   sw	zero, 0(tp)
003a0c: 31423703   ld	a4, 788(tp)
003a10: 00e6f733   and	a4, a3, a4
003a14: fe071ce3   bnez	a4, -8
003a18: 0c026703   lwu	a4, 192(tp)
003a1c: 0117571b   srliw	a4, a4, 17
003a20: 02070e63   beqz	a4, 60
003a24: 0017869b   addiw	a3, a5, 1
003a28: 00177593   andi	a1, a4, 1
003a2c: 0006879b   sext.w	a5, a3
003a30: 02058263   beqz	a1, 36
003a34: 1f026583   lwu	a1, 496(tp)
003a38: 02059593   slli	a1, a1, 32
003a3c: 0205d593   srli	a1, a1, 32
003a40: 00b23e23   sd	a1, 28(tp)
003a44: 1006e693   ori	a3, a3, 256
003a48: 0ad222a3   sw	a3, 165(tp)
003a4c: 31422003   lw	zero, 788(tp)
003a50: ee052623   sw	zero, -276(a0)
003a54: 00175713   srli	a4, a4, 1
003a58: fc0716e3   bnez	a4, -52
003a5c: 1f026783   lwu	a5, 496(tp)
003a60: 02079793   slli	a5, a5, 32
003a64: 0207d793   srli	a5, a5, 32
003a68: 00f23e23   sd	a5, 28(tp)
003a6c: 0a0222a3   sw	zero, 165(tp)
003a70: 31422003   lw	zero, 788(tp)
003a74: 91052e23   sw	a6, -1764(a0)
003a78: ec852783   lw	a5, -312(a0)
003a7c: 02179793   slli	a5, a5, 33
003a80: 0217d793   srli	a5, a5, 33
003a84: ecf52423   sw	a5, -312(a0)
003a88: 00066783   lwu	a5, 0(a2)
003a8c: 00078263   beqz	a5, 4
003a90: 00000513   li	a0, 0
003a94: 00008067   ret
003a98: 00008067   ret
003a9c: ec072423   sw	zero, -312(a4)
003aa0: ec876783   lwu	a5, -312(a4)
003aa4: 00078263   beqz	a5, 4
003aa8: fff00513   li	a0, -1
003aac: 00008067   ret
003ab0: 0017f793   andi	a5, a5, 1
003ab4: fff7c513   not	a0, a5
003ab8: 00008067   ret
003abc: ac072783   lw	a5, -1344(a4)
003ac0: 80000737   lui	a4, 524288
003ac4: 50070713   addi	a4, a4, 1280
003ac8: 0ff7f793   zext.b	a5, a5
003acc: ff010113   addi	sp, sp, -16
003ad0: 00e7e7b3   or	a5, a5, a4
003ad4: 00113423   sd	ra, 8(sp)
003ad8: 0007879b   sext.w	a5, a5
003adc: 1fa23603   ld	a2, 506(tp)
003ae0: 02469713   slli	a4, a3, 36
003ae4: 00c70733   add	a4, a4, a2
003ae8: 0000c637   lui	a2, 12
003aec: 00c70733   add	a4, a4, a2
003af0: 00068513   mv	a0, a3
003af4: 3cf72c23   sw	a5, 984(a4)
003af8: 801ff0ef   jal	-2048
003afc: 00813083   ld	ra, 8(sp)
003b00: ffe00513   li	a0, -2
003b04: 01010113   addi	sp, sp, 16
003b08: 00008067   ret
003b0c: ea0cae23   sw	zero, -324(s9)
003b10: c79ff06f   j	-904
003b14: 00000013   nop
003b18: fc010113   addi	sp, sp, -64
003b1c: 03213023   sd	s2, 32(sp)
003b20: 0045591b   srliw	s2, a0, 4
003b24: 02813823   sd	s0, 48(sp)
003b28: 00797713   andi	a4, s2, 7
003b2c: 000067b7   lui	a5, 6
003b30: 0001e437   lui	s0, 30
003b34: 00e7e7b3   or	a5, a5, a4
003b38: c0440413   addi	s0, s0, -1020
003b3c: 02113c23   sd	ra, 56(sp)
003b40: 02913423   sd	s1, 40(sp)
003b44: 01313c23   sd	s3, 24(sp)
003b48: 01413823   sd	s4, 16(sp)
003b4c: 01513423   sd	s5, 8(sp)
003b50: 0107979b   slliw	a5, a5, 16
003b54: 008c8433   add	s0, s9, s0
003b58: 00046703   lwu	a4, 0(s0)
003b5c: 00070263   beqz	a4, 4
003b60: 1fa23703   ld	a4, 506(tp)
003b64: 02451493   slli	s1, a0, 36
003b68: 00970733   add	a4, a4, s1
003b6c: 0000c6b7   lui	a3, 12
003b70: 00d70733   add	a4, a4, a3
003b74: 34f72423   sw	a5, 840(a4)
003b78: 1fa23783   ld	a5, 506(tp)
003b7c: 00f487b3   add	a5, s1, a5
003b80: 00f687b3   add	a5, a3, a5
003b84: 3487e783   lwu	a5, 840(a5)
003b88: 00078263   beqz	a5, 4
003b8c: ec8ca703   lw	a4, -312(s9)
003b90: 34868793   addi	a5, a3, 840
003b94: 00f489b3   add	s3, s1, a5
003b98: 14074263   bltz	a4, 324
003b9c: 0007079b   sext.w	a5, a4
003ba0: 0017f713   andi	a4, a5, 1
003ba4: 04070863   beqz	a4, 80
003ba8: 0017d71b   srliw	a4, a5, 1
003bac: 00277713   andi	a4, a4, 2
003bb0: 0087d79b   srliw	a5, a5, 8
003bb4: 000c8613   mv	a2, s9
003bb8: 0037f793   andi	a5, a5, 3
003bbc: 00070663   beqz	a4, 12
003bc0: 0027f713   andi	a4, a5, 2
003bc4: 0e071c63   bnez	a4, 248
003bc8: 0017f793   andi	a5, a5, 1
003bcc: 02078463   beqz	a5, 40
003bd0: 800006b7   lui	a3, 524288
003bd4: 00d68713   addi	a4, a3, 13
003bd8: ece62423   sw	a4, -312(a2)
003bdc: ec866783   lwu	a5, -312(a2)
003be0: 00078263   beqz	a5, 4
003be4: ec862783   lw	a5, -312(a2)
003be8: 00e7f7b3   and	a5, a5, a4
003bec: 0007879b   sext.w	a5, a5
003bf0: 04e78c63   beq	a5, a4, 88
003bf4: 00046783   lwu	a5, 0(s0)
003bf8: 00078263   beqz	a5, 4
003bfc: 1fa23783   ld	a5, 506(tp)
003c00: 0000c737   lui	a4, 12
003c04: 009787b3   add	a5, a5, s1
003c08: 00e787b3   add	a5, a5, a4
003c0c: 20000737   lui	a4, 131072
003c10: 34e7a423   sw	a4, 840(a5)
003c14: 1fa23783   ld	a5, 506(tp)
003c18: 013787b3   add	a5, a5, s3
003c1c: 0007e783   lwu	a5, 0(a5)
003c20: 00078263   beqz	a5, 4
003c24: 03813083   ld	ra, 56(sp)
003c28: 03013403   ld	s0, 48(sp)
003c2c: 02813483   ld	s1, 40(sp)
003c30: 02013903   ld	s2, 32(sp)
003c34: 01813983   ld	s3, 24(sp)
003c38: 01013a03   ld	s4, 16(sp)
003c3c: 00813a83   ld	s5, 8(sp)
003c40: 04010113   addi	sp, sp, 64
003c44: 00008067   ret
003c48: 00100a93   li	s5, 1
003c4c: b751aa23   sw	s5, -1164(gp)
003c50: ac062783   lw	a5, -1344(a2)
003c54: 50068693   addi	a3, a3, 1280
003c58: 0ff7f793   zext.b	a5, a5
003c5c: 00d7e7b3   or	a5, a5, a3
003c60: 0007879b   sext.w	a5, a5
003c64: 1fa23703   ld	a4, 506(tp)
003c68: 0000ca37   lui	s4, 12
003c6c: 00970733   add	a4, a4, s1
003c70: 01470733   add	a4, a4, s4
003c74: 3cf72c23   sw	a5, 984(a4)
003c78: e80ff0ef   jal	-2432
003c7c: 0a926783   lwu	a5, 169(tp)
003c80: 0007879b   sext.w	a5, a5
003c84: 00797913   andi	s2, s2, 7
003c88: f6f916e3   bne	s2, a5, -148
003c8c: 1fa23783   ld	a5, 506(tp)
003c90: 009787b3   add	a5, a5, s1
003c94: 014787b3   add	a5, a5, s4
003c98: 3487a783   lw	a5, 840(a5)
003c9c: 00c00713   li	a4, 12
003ca0: 01d78793   addi	a5, a5, 29
003ca4: 01f7f793   andi	a5, a5, 31
003ca8: f4f766e3   bltu	a4, a5, -180
003cac: 00700793   li	a5, 7
003cb0: 08f22ca3   sw	a5, 153(tp)
003cb4: b751a823   sw	s5, -1168(gp)
003cb8: f3dff06f   j	-196
003cbc: b741a783   lw	a5, -1164(gp)
003cc0: 96fca223   sw	a5, -1692(s9)
003cc4: b601aa23   sw	zero, -1164(gp)
003cc8: b601ac23   sw	zero, -1160(gp)
003ccc: ec0ca423   sw	zero, -312(s9)
003cd0: ec8ce783   lwu	a5, -312(s9)
003cd4: 00078263   beqz	a5, 4
003cd8: f1dff06f   j	-228
003cdc: 00046783   lwu	a5, 0(s0)
003ce0: 00078263   beqz	a5, 4
003ce4: 1fa23783   ld	a5, 506(tp)
003ce8: 009787b3   add	a5, a5, s1
003cec: 00d787b3   add	a5, a5, a3
003cf0: f1dff06f   j	-228
003cf4: 00000013   nop
003cf8: f6010113   addi	sp, sp, -160
003cfc: 08913423   sd	s1, 136(sp)
003d00: 08113c23   sd	ra, 152(sp)
003d04: 08813823   sd	s0, 144(sp)
003d08: 09213023   sd	s2, 128(sp)
003d0c: 07313c23   sd	s3, 120(sp)
003d10: 07413823   sd	s4, 112(sp)
003d14: 07513423   sd	s5, 104(sp)
003d18: 07613023   sd	s6, 96(sp)
003d1c: 00050493   mv	s1, a0
003d20: 30226403   lwu	s0, 770(tp)
003d24: 01523703   ld	a4, 21(tp)
003d28: 00377713   andi	a4, a4, 3
003d2c: 00e207b3   add	a5, tp, a4
003d30: 00b7e883   lwu	a7, 11(a5)
003d34: 04170993   addi	s3, a4, 65
003d38: 0008891b   sext.w	s2, a7
003d3c: 013207b3   add	a5, tp, s3
003d40: 00100613   li	a2, 1
003d44: 00c7a023   sw	a2, 0(a5)
003d48: 01100613   li	a2, 17
003d4c: 0ff47593   zext.b	a1, s0
003d50: 02b66263   bltu	a2, a1, 36
003d54: 000fc517   auipc	a0, 252
003d58: 40450513   addi	a0, a0, 1028
003d5c: 00259613   slli	a2, a1, 2
003d60: 00a60633   add	a2, a2, a0
003d64: 00062603   lw	a2, 0(a2)
003d68: 00020693   mv	a3, tp
003d6c: 00a60633   add	a2, a2, a0
003d70: 00060067   jr	a2
003d74: 00400713   li	a4, 4
003d78: 00e58663   beq	a1, a4, 12
003d7c: 00922023   sw	s1, 0(tp)
003d80: 00822023   sw	s0, 0(tp)
003d84: 00b23703   ld	a4, 11(tp)
003d88: 00070263   beqz	a4, 4
003d8c: 0000000b   .word 0x0000000b
003d90: 00080637   lui	a2, 128
003d94: 000c8693   mv	a3, s9
003d98: 9286a703   lw	a4, -1752(a3)
003d9c: 00c77733   and	a4, a4, a2
003da0: 0007071b   sext.w	a4, a4
003da4: fe071ae3   bnez	a4, -12
003da8: 0127a023   sw	s2, 0(a5)
003dac: 09813083   ld	ra, 152(sp)
003db0: 09013403   ld	s0, 144(sp)
003db4: 08813483   ld	s1, 136(sp)
003db8: 08013903   ld	s2, 128(sp)
003dbc: 07813983   ld	s3, 120(sp)
003dc0: 07013a03   ld	s4, 112(sp)
003dc4: 06813a83   ld	s5, 104(sp)
003dc8: 06013b03   ld	s6, 96(sp)
003dcc: 0a010113   addi	sp, sp, 160
003dd0: 00008067   ret
003dd4: 04226703   lwu	a4, 66(tp)
003dd8: 0007071b   sext.w	a4, a4
003ddc: fa0700e3   beqz	a4, -96
003de0: 00475693   srli	a3, a4, 4
003de4: f1402673   csrr	a2, mhartid
003de8: 02061593   slli	a1, a2, 32
003dec: 0016f693   andi	a3, a3, 1
003df0: 0205d593   srli	a1, a1, 32
003df4: 00b69463   bne	a3, a1, 8
003df8: 4300106f   j	5168
003dfc: 04226703   lwu	a4, 66(tp)
003e00: 00875713   srli	a4, a4, 8
003e04: 00377713   andi	a4, a4, 3
003e08: fe070ae3   beqz	a4, -12
003e0c: 00200693   li	a3, 2
003e10: f6d716e3   bne	a4, a3, -148
003e14: c0005737   lui	a4, 786437
003e18: b007071b   addiw	a4, a4, -1280
003e1c: 00e22023   sw	a4, 0(tp)
003e20: 00100713   li	a4, 1
003e24: 00e22023   sw	a4, 0(tp)
003e28: c00f1737   lui	a4, 786673
003e2c: 00e22023   sw	a4, 0(tp)
003e30: 00022023   sw	zero, 0(tp)
003e34: 00022023   sw	zero, 0(tp)
003e38: 00022023   sw	zero, 0(tp)
003e3c: 00022023   sw	zero, 0(tp)
003e40: 00022023   sw	zero, 0(tp)
003e44: 00022023   sw	zero, 0(tp)
003e48: 00022023   sw	zero, 0(tp)
003e4c: 00022023   sw	zero, 0(tp)
003e50: 00022023   sw	zero, 0(tp)
003e54: 00022023   sw	zero, 0(tp)
003e58: 00022023   sw	zero, 0(tp)
003e5c: 00022023   sw	zero, 0(tp)
003e60: 00022023   sw	zero, 0(tp)
003e64: 00022023   sw	zero, 0(tp)
003e68: 00022023   sw	zero, 0(tp)
003e6c: 00022023   sw	zero, 0(tp)
003e70: 40000693   li	a3, 1024
003e74: f1402773   csrr	a4, mhartid
003e78: 00e696b3   sll	a3, a3, a4
003e7c: 31423703   ld	a4, 788(tp)
003e80: 00e6f733   and	a4, a3, a4
003e84: fe071ce3   bnez	a4, -8
003e88: 04226703   lwu	a4, 66(tp)
003e8c: 00100693   li	a3, 1
003e90: 06d223a3   sw	a3, 103(tp)
003e94: 400006b7   lui	a3, 262144
003e98: 00d76733   or	a4, a4, a3
003e9c: 0007071b   sext.w	a4, a4
003ea0: eeeca823   sw	a4, -272(s9)
003ea4: 060223a3   sw	zero, 103(tp)
003ea8: ed5ff06f   j	-300
003eac: accca683   lw	a3, -1332(s9)
003eb0: f1402773   csrr	a4, mhartid
003eb4: 00100613   li	a2, 1
003eb8: 0006869b   sext.w	a3, a3
003ebc: 0106d593   srli	a1, a3, 16
003ec0: 0007071b   sext.w	a4, a4
003ec4: 000c8313   mv	t1, s9
003ec8: 0ff5f593   zext.b	a1, a1
003ecc: 00c71463   bne	a4, a2, 8
003ed0: 0186d59b   srliw	a1, a3, 24
003ed4: 1e022da3   sw	zero, 507(tp)
003ed8: ea0582e3   beqz	a1, -348
003edc: c0005737   lui	a4, 786437
003ee0: b007071b   addiw	a4, a4, -1280
003ee4: 00e22023   sw	a4, 0(tp)
003ee8: 00100713   li	a4, 1
003eec: 00e22023   sw	a4, 0(tp)
003ef0: c00f1737   lui	a4, 786673
003ef4: 00e22023   sw	a4, 0(tp)
003ef8: 00022023   sw	zero, 0(tp)
003efc: 00022023   sw	zero, 0(tp)
003f00: 00022023   sw	zero, 0(tp)
003f04: 00022023   sw	zero, 0(tp)
003f08: 00022023   sw	zero, 0(tp)
003f0c: 00022023   sw	zero, 0(tp)
003f10: 00022023   sw	zero, 0(tp)
003f14: 00022023   sw	zero, 0(tp)
003f18: 00022023   sw	zero, 0(tp)
003f1c: 00022023   sw	zero, 0(tp)
003f20: 00022023   sw	zero, 0(tp)
003f24: 00022023   sw	zero, 0(tp)
003f28: 00022023   sw	zero, 0(tp)
003f2c: 00022023   sw	zero, 0(tp)
003f30: 00022023   sw	zero, 0(tp)
003f34: 00022023   sw	zero, 0(tp)
003f38: 40000693   li	a3, 1024
003f3c: f1402673   csrr	a2, mhartid
003f40: 00c696b3   sll	a3, a3, a2
003f44: 31423703   ld	a4, 788(tp)
003f48: 00e6f733   and	a4, a3, a4
003f4c: fe071ce3   bnez	a4, -8
003f50: 1f923503   ld	a0, 505(tp)
003f54: 0000c6b7   lui	a3, 12
003f58: 00d50533   add	a0, a0, a3
003f5c: 0001e6b7   lui	a3, 30
003f60: 00d306b3   add	a3, t1, a3
003f64: 34852883   lw	a7, 840(a0)
003f68: e286a683   lw	a3, -472(a3)
003f6c: 0008889b   sext.w	a7, a7
003f70: 0186981b   slliw	a6, a3, 24
003f74: 4188581b   sraiw	a6, a6, 24
003f78: 0006851b   sext.w	a0, a3
003f7c: 0ff6f693   zext.b	a3, a3
003f80: 00085463   bgez	a6, 8
003f84: 3780206f   j	9080
003f88: 0a926803   lwu	a6, 169(tp)
003f8c: fffffe37   lui	t3, 1048575
003f90: fffe0e13   addi	t3, t3, -1
003f94: 000e0993   mv	s3, t3
003f98: c0005e37   lui	t3, 786437
003f9c: b00e0e1b   addiw	t3, t3, -1280
003fa0: f14026f3   csrr	a3, mhartid
003fa4: 01c12023   sw	t3, 0(sp)
003fa8: 0036f613   andi	a2, a3, 3
003fac: 40000e13   li	t3, 1024
003fb0: 02081b13   slli	s6, a6, 32
003fb4: 0008029b   sext.w	t0, a6
003fb8: 0026161b   slliw	a2, a2, 2
003fbc: 01f8f893   andi	a7, a7, 31
003fc0: 0000c537   lui	a0, 12
003fc4: 00200393   li	t2, 2
003fc8: c00f1ab7   lui	s5, 786673
003fcc: 00de1e33   sll	t3, t3, a3
003fd0: 020b5b13   srli	s6, s6, 32
003fd4: 00100f13   li	t5, 1
003fd8: 00e5d6bb   srlw	a3, a1, a4
003fdc: 0016f693   andi	a3, a3, 1
003fe0: 04068063   beqz	a3, 64
003fe4: 00777693   andi	a3, a4, 7
003fe8: f8f67613   andi	a2, a2, -113
003fec: 0046969b   slliw	a3, a3, 4
003ff0: 00d666b3   or	a3, a2, a3
003ff4: 00068613   mv	a2, a3
003ff8: 1fa23e83   ld	t4, 506(tp)
003ffc: 02469693   slli	a3, a3, 36
004000: 00de8eb3   add	t4, t4, a3
004004: 00ae8eb3   add	t4, t4, a0
004008: 380eae83   lw	t4, 896(t4)
00400c: 000e8a63   beqz	t4, 20
004010: 0113e463   bltu	t2, a7, 8
004014: 3140106f   j	4884
004018: 00eb0463   beq	s6, a4, 8
00401c: 30c0106f   j	4876
004020: 01e70463   beq	a4, t5, 8
004024: 7f00106f   j	6128
004028: 00787693   andi	a3, a6, 7
00402c: 0046969b   slliw	a3, a3, 4
004030: f8f67613   andi	a2, a2, -113
004034: 00200513   li	a0, 2
004038: 00d666b3   or	a3, a2, a3
00403c: 01157463   bgeu	a0, a7, 8
004040: 2780206f   j	8824
004044: 02469693   slli	a3, a3, 36
004048: 1fa23703   ld	a4, 506(tp)
00404c: 00d70733   add	a4, a4, a3
004050: 0000c6b7   lui	a3, 12
004054: 00d70733   add	a4, a4, a3
004058: 3cc72683   lw	a3, 972(a4)
00405c: 00100713   li	a4, 1
004060: 00e69463   bne	a3, a4, 8
004064: 3b80206f   j	9144
004068: 00100713   li	a4, 1
00406c: 02e22823   sw	a4, 48(tp)
004070: 02026703   lwu	a4, 32(tp)
004074: 00277713   andi	a4, a4, 2
004078: fe070ce3   beqz	a4, -8
00407c: acc32703   lw	a4, -1332(t1)
004080: 0007071b   sext.w	a4, a4
004084: 02e12c23   sw	a4, 56(sp)
004088: 03812703   lw	a4, 56(sp)
00408c: 02070e63   beqz	a4, 60
004090: f1402773   csrr	a4, mhartid
004094: 00100693   li	a3, 1
004098: 0007071b   sext.w	a4, a4
00409c: 00d71463   bne	a4, a3, 8
0040a0: 3a50206f   j	11172
0040a4: 02010d23   sb	zero, 58(sp)
0040a8: 03a14703   lbu	a4, 58(sp)
0040ac: 00071863   bnez	a4, 16
0040b0: 03b14703   lbu	a4, 59(sp)
0040b4: 00071463   bnez	a4, 8
0040b8: 02012c23   sw	zero, 56(sp)
0040bc: 03812703   lw	a4, 56(sp)
0040c0: 0007071b   sext.w	a4, a4
0040c4: ace32623   sw	a4, -1332(t1)
0040c8: 00100713   li	a4, 1
0040cc: 02e228a3   sw	a4, 49(tp)
0040d0: cadff06f   j	-852
0040d4: 00c4571b   srliw	a4, s0, 12
0040d8: 0047171b   slliw	a4, a4, 4
0040dc: f1402673   csrr	a2, mhartid
0040e0: 0026161b   slliw	a2, a2, 2
0040e4: 00c67613   andi	a2, a2, 12
0040e8: 07077713   andi	a4, a4, 112
0040ec: 00475813   srli	a6, a4, 4
0040f0: 700ba4a3   sw	zero, 1801(s7)
0040f4: 00265313   srli	t1, a2, 2
0040f8: 1e022fa3   sw	zero, 511(tp)
0040fc: 00030593   mv	a1, t1
004100: 00080513   mv	a0, a6
004104: 00c76733   or	a4, a4, a2
004108: 1fa23603   ld	a2, 506(tp)
00410c: 02471713   slli	a4, a4, 36
004110: 00e60633   add	a2, a2, a4
004114: 0000ce37   lui	t3, 12
004118: 01c60633   add	a2, a2, t3
00411c: 3b462a83   lw	s5, 948(a2)
004120: 000a8a9b   sext.w	s5, s5
004124: 1fa23603   ld	a2, 506(tp)
004128: 00e60633   add	a2, a2, a4
00412c: 01c60633   add	a2, a2, t3
004130: 38062603   lw	a2, 896(a2)
004134: 00061463   bnez	a2, 8
004138: 0e40106f   j	4324
00413c: 09022d23   sw	a6, 154(tp)
004140: 00100793   li	a5, 1
004144: 06f223a3   sw	a5, 103(tp)
004148: ec8ca783   lw	a5, -312(s9)
00414c: c0000e37   lui	t3, 786432
004150: c0000eb7   lui	t4, 786432
004154: 01c7fe33   and	t3, a5, t3
004158: 000c8613   mv	a2, s9
00415c: 0007879b   sext.w	a5, a5
004160: 0bde0463   beq	t3, t4, 168
004164: eeccae03   lw	t3, -276(s9)
004168: 0017d79b   srliw	a5, a5, 1
00416c: 0017f793   andi	a5, a5, 1
004170: 001e7e93   andi	t4, t3, 1
004174: 09d79a63   bne	a5, t4, 148
004178: 000267b7   lui	a5, 38
00417c: 00fc87b3   add	a5, s9, a5
004180: 94c7a783   lw	a5, -1716(a5)
004184: 0033131b   slliw	t1, t1, 3
004188: 00040a1b   sext.w	s4, s0
00418c: 0067d7bb   srlw	a5, a5, t1
004190: 0107d7bb   srlw	a5, a5, a6
004194: 0017f793   andi	a5, a5, 1
004198: 01d79463   bne	a5, t4, 8
00419c: 3f50106f   j	7156
0041a0: ec8ca783   lw	a5, -312(s9)
0041a4: 0017d31b   srliw	t1, a5, 1
0041a8: 00237313   andi	t1, t1, 2
0041ac: 0007879b   sext.w	a5, a5
0041b0: 00030863   beqz	t1, 16
0041b4: 0087d31b   srliw	t1, a5, 8
0041b8: 00237313   andi	t1, t1, 2
0041bc: 04031663   bnez	t1, 76
0041c0: 0017f793   andi	a5, a5, 1
0041c4: 04079263   bnez	a5, 68
0041c8: 800007b7   lui	a5, 524288
0041cc: 06b78793   addi	a5, a5, 107
0041d0: ecf62423   sw	a5, -312(a2)
0041d4: ec866783   lwu	a5, -312(a2)
0041d8: 00078263   beqz	a5, 4
0041dc: ec862783   lw	a5, -312(a2)
0041e0: ec862783   lw	a5, -312(a2)
0041e4: a0000337   lui	t1, 655360
0041e8: 06b30313   addi	t1, t1, 107
0041ec: 0067f7b3   and	a5, a5, t1
0041f0: 0007879b   sext.w	a5, a5
0041f4: 00679463   bne	a5, t1, 8
0041f8: 7b00106f   j	6064
0041fc: ec062423   sw	zero, -312(a2)
004200: ec866783   lwu	a5, -312(a2)
004204: 00078263   beqz	a5, 4
004208: 00700793   li	a5, 7
00420c: 08f22ca3   sw	a5, 153(tp)
004210: 060223a3   sw	zero, 103(tp)
004214: 051220a3   sw	a7, 65(tp)
004218: b95ff06f   j	-1132
00421c: 00070463   beqz	a4, 8
004220: 7f10006f   j	4080
004224: c00f1737   lui	a4, 786673
004228: 00e22023   sw	a4, 0(tp)
00422c: 00022023   sw	zero, 0(tp)
004230: 00022023   sw	zero, 0(tp)
004234: 00022023   sw	zero, 0(tp)
004238: 00022023   sw	zero, 0(tp)
00423c: 00022023   sw	zero, 0(tp)
004240: 00022023   sw	zero, 0(tp)
004244: 00022023   sw	zero, 0(tp)
004248: 00022023   sw	zero, 0(tp)
00424c: 00022023   sw	zero, 0(tp)
004250: 00022023   sw	zero, 0(tp)
004254: 00022023   sw	zero, 0(tp)
004258: 00022023   sw	zero, 0(tp)
00425c: 00022023   sw	zero, 0(tp)
004260: 00022023   sw	zero, 0(tp)
004264: 00022023   sw	zero, 0(tp)
004268: 00022023   sw	zero, 0(tp)
00426c: 40000693   li	a3, 1024
004270: f1402773   csrr	a4, mhartid
004274: 00e696b3   sll	a3, a3, a4
004278: 31423703   ld	a4, 788(tp)
00427c: 00e6f733   and	a4, a3, a4
004280: fe071ce3   bnez	a4, -8
004284: 00a00713   li	a4, 10
004288: 08e22ca3   sw	a4, 153(tp)
00428c: af1ff06f   j	-1296
004290: 00c4571b   srliw	a4, s0, 12
004294: 0047171b   slliw	a4, a4, 4
004298: f14026f3   csrr	a3, mhartid
00429c: 0026969b   slliw	a3, a3, 2
0042a0: 00c6f693   andi	a3, a3, 12
0042a4: 07077713   andi	a4, a4, 112
0042a8: 00d76733   or	a4, a4, a3
0042ac: 00100693   li	a3, 1
0042b0: 06d223a3   sw	a3, 103(tp)
0042b4: 000066b7   lui	a3, 6
0042b8: 00475813   srli	a6, a4, 4
0042bc: 0001e537   lui	a0, 30
0042c0: 0106e6b3   or	a3, a3, a6
0042c4: c0450513   addi	a0, a0, -1020
0042c8: 000c8593   mv	a1, s9
0042cc: 0106969b   slliw	a3, a3, 16
0042d0: 00ac8533   add	a0, s9, a0
0042d4: 00056603   lwu	a2, 0(a0)
0042d8: 00060263   beqz	a2, 4
0042dc: 1fa23603   ld	a2, 506(tp)
0042e0: 02471713   slli	a4, a4, 36
0042e4: 00e60633   add	a2, a2, a4
0042e8: 0000c8b7   lui	a7, 12
0042ec: 01160633   add	a2, a2, a7
0042f0: 34d62423   sw	a3, 840(a2)
0042f4: 1fa23683   ld	a3, 506(tp)
0042f8: 00d706b3   add	a3, a4, a3
0042fc: 00d886b3   add	a3, a7, a3
004300: 3486e683   lwu	a3, 840(a3)
004304: 00068263   beqz	a3, 4
004308: ec8ca603   lw	a2, -312(s9)
00430c: 0006069b   sext.w	a3, a2
004310: 00065463   bgez	a2, 8
004314: 1100206f   j	8464
004318: 0016f613   andi	a2, a3, 1
00431c: 04060263   beqz	a2, 68
004320: 0016d61b   srliw	a2, a3, 1
004324: 00267613   andi	a2, a2, 2
004328: 0086d69b   srliw	a3, a3, 8
00432c: 0036f693   andi	a3, a3, 3
004330: 00061463   bnez	a2, 8
004334: 3d00106f   j	5072
004338: 0026f613   andi	a2, a3, 2
00433c: 00061463   bnez	a2, 8
004340: 3c40106f   j	5060
004344: b741a683   lw	a3, -1164(gp)
004348: 96dca223   sw	a3, -1692(s9)
00434c: b601aa23   sw	zero, -1164(gp)
004350: b601ac23   sw	zero, -1160(gp)
004354: ec0ca423   sw	zero, -312(s9)
004358: ec8ce683   lwu	a3, -312(s9)
00435c: 00068263   beqz	a3, 4
004360: 00056683   lwu	a3, 0(a0)
004364: 00068263   beqz	a3, 4
004368: 1fa23683   ld	a3, 506(tp)
00436c: 0000c637   lui	a2, 12
004370: 00d706b3   add	a3, a4, a3
004374: 00c686b3   add	a3, a3, a2
004378: 200005b7   lui	a1, 131072
00437c: 34b6a423   sw	a1, 840(a3)
004380: 1fa23683   ld	a3, 506(tp)
004384: 00d70733   add	a4, a4, a3
004388: 00e60633   add	a2, a2, a4
00438c: 34866703   lwu	a4, 840(a2)
004390: 00070263   beqz	a4, 4
004394: 060223a3   sw	zero, 103(tp)
004398: 9e5ff06f   j	-1564
00439c: 00100713   li	a4, 1
0043a0: 06e223a3   sw	a4, 103(tp)
0043a4: ec8ca703   lw	a4, -312(s9)
0043a8: 800006b7   lui	a3, 524288
0043ac: 00168693   addi	a3, a3, 1
0043b0: 00d77633   and	a2, a4, a3
0043b4: 0006061b   sext.w	a2, a2
0043b8: 0007071b   sext.w	a4, a4
0043bc: fcd60ce3   beq	a2, a3, -40
0043c0: fc074ae3   bltz	a4, -44
0043c4: 00177613   andi	a2, a4, 1
0043c8: fc0606e3   beqz	a2, -52
0043cc: 0087571b   srliw	a4, a4, 8
0043d0: 00177713   andi	a4, a4, 1
0043d4: fc0700e3   beqz	a4, -64
0043d8: ecdca423   sw	a3, -312(s9)
0043dc: ec8ce703   lwu	a4, -312(s9)
0043e0: 00070263   beqz	a4, 4
0043e4: ec8ca703   lw	a4, -312(s9)
0043e8: 060223a3   sw	zero, 103(tp)
0043ec: 991ff06f   j	-1648
0043f0: 00c4571b   srliw	a4, s0, 12
0043f4: 0047171b   slliw	a4, a4, 4
0043f8: f1402673   csrr	a2, mhartid
0043fc: 0026161b   slliw	a2, a2, 2
004400: 00c67613   andi	a2, a2, 12
004404: 07077713   andi	a4, a4, 112
004408: 00c76733   or	a4, a4, a2
00440c: 0a926803   lwu	a6, 169(tp)
004410: 00b23603   ld	a2, 11(tp)
004414: 00060263   beqz	a2, 4
004418: 0047559b   srliw	a1, a4, 4
00441c: 00475e13   srli	t3, a4, 4
004420: 09c22d23   sw	t3, 154(tp)
004424: bd8ca603   lw	a2, -1064(s9)
004428: 000c8513   mv	a0, s9
00442c: 0006061b   sext.w	a2, a2
004430: 00b23883   ld	a7, 11(tp)
004434: 00088263   beqz	a7, 4
004438: 09022d23   sw	a6, 154(tp)
00443c: 940650e3   bgez	a2, -1728
004440: 0086561b   srliw	a2, a2, 8
004444: 00767613   andi	a2, a2, 7
004448: 00400813   li	a6, 4
00444c: 01061463   bne	a2, a6, 8
004450: 00c0206f   j	8204
004454: 00500813   li	a6, 5
004458: 01060463   beq	a2, a6, 8
00445c: 7bd0106f   j	8124
004460: 00100313   li	t1, 1
004464: 06622523   sw	t1, 106(tp)
004468: 1fa23603   ld	a2, 506(tp)
00446c: 02471713   slli	a4, a4, 36
004470: 00e60633   add	a2, a2, a4
004474: 0000c837   lui	a6, 12
004478: 01060633   add	a2, a2, a6
00447c: 3c062c23   sw	zero, 984(a2)
004480: 1e022fa3   sw	zero, 511(tp)
004484: 1e022fa3   sw	zero, 511(tp)
004488: 1e022fa3   sw	zero, 511(tp)
00448c: 1e022fa3   sw	zero, 511(tp)
004490: 1e022fa3   sw	zero, 511(tp)
004494: 1e022fa3   sw	zero, 511(tp)
004498: 1e022fa3   sw	zero, 511(tp)
00449c: 1e022fa3   sw	zero, 511(tp)
0044a0: 066223a3   sw	t1, 103(tp)
0044a4: 00006637   lui	a2, 6
0044a8: 0001e8b7   lui	a7, 30
0044ac: 01c66633   or	a2, a2, t3
0044b0: c0488893   addi	a7, a7, -1020
0044b4: 0106161b   slliw	a2, a2, 16
0044b8: 011c88b3   add	a7, s9, a7
0044bc: 0008ee03   lwu	t3, 0(a7)
0044c0: 000e0263   beqz	t3, 4
0044c4: 1fa23e03   ld	t3, 506(tp)
0044c8: 01c70e33   add	t3, a4, t3
0044cc: 010e0e33   add	t3, t3, a6
0044d0: 34ce2423   sw	a2, 840(t3)
0044d4: 1fa23603   ld	a2, 506(tp)
0044d8: 34880813   addi	a6, a6, 840
0044dc: 01070833   add	a6, a4, a6
0044e0: 00c80633   add	a2, a6, a2
0044e4: 00066603   lwu	a2, 0(a2)
0044e8: 00060263   beqz	a2, 4
0044ec: ec8ca603   lw	a2, -312(s9)
0044f0: 80000e37   lui	t3, 524288
0044f4: 001e0e13   addi	t3, t3, 1
0044f8: 01c67eb3   and	t4, a2, t3
0044fc: 000e8e9b   sext.w	t4, t4
004500: 0006061b   sext.w	a2, a2
004504: 0fce9263   bne	t4, t3, 228
004508: 01e65613   srli	a2, a2, 30
00450c: 00167613   andi	a2, a2, 1
004510: 00060463   beqz	a2, 8
004514: 04c0306f   j	12364
004518: ec852683   lw	a3, -312(a0)
00451c: 0026d61b   srliw	a2, a3, 2
004520: 00367613   andi	a2, a2, 3
004524: 0006869b   sext.w	a3, a3
004528: 02061263   bnez	a2, 36
00452c: 96452603   lw	a2, -1692(a0)
004530: 01c65613   srli	a2, a2, 28
004534: 00167613   andi	a2, a2, 1
004538: 00060a63   beqz	a2, 20
00453c: 00c6e693   ori	a3, a3, 12
004540: ecd52423   sw	a3, -312(a0)
004544: ec856683   lwu	a3, -312(a0)
004548: 00068263   beqz	a3, 4
00454c: ac052683   lw	a3, -1344(a0)
004550: 80000637   lui	a2, 524288
004554: 50060613   addi	a2, a2, 1280
004558: 0ff6f693   zext.b	a3, a3
00455c: b7c1a303   lw	t1, -1156(gp)
004560: 00c6e6b3   or	a3, a3, a2
004564: 00030463   beqz	t1, 8
004568: 1006c693   xori	a3, a3, 256
00456c: 0006869b   sext.w	a3, a3
004570: 1fa23603   ld	a2, 506(tp)
004574: 0000c337   lui	t1, 12
004578: 00c70633   add	a2, a4, a2
00457c: 00660633   add	a2, a2, t1
004580: 3cd62c23   sw	a3, 984(a2)
004584: 0075f693   andi	a3, a1, 7
004588: 00100613   li	a2, 1
00458c: 06c223a3   sw	a2, 103(tp)
004590: 80000637   lui	a2, 524288
004594: d0000337   lui	t1, 851968
004598: 0016061b   addiw	a2, a2, 1
00459c: fff30313   addi	t1, t1, -1
0045a0: f14025f3   csrr	a1, mhartid
0045a4: 0035f593   andi	a1, a1, 3
0045a8: 01c5959b   slliw	a1, a1, 28
0045ac: 00667633   and	a2, a2, t1
0045b0: 00b66633   or	a2, a2, a1
0045b4: fc8005b7   lui	a1, 1034240
0045b8: 0016c693   xori	a3, a3, 1
0045bc: fff58593   addi	a1, a1, -1
0045c0: 0176969b   slliw	a3, a3, 23
0045c4: 00b67633   and	a2, a2, a1
0045c8: 00d66633   or	a2, a2, a3
0045cc: 0006061b   sext.w	a2, a2
0045d0: e0c52623   sw	a2, -500(a0)
0045d4: e0c52683   lw	a3, -500(a0)
0045d8: 0016f693   andi	a3, a3, 1
0045dc: fe068ae3   beqz	a3, -12
0045e0: e0052623   sw	zero, -500(a0)
0045e4: 060223a3   sw	zero, 103(tp)
0045e8: 0008e683   lwu	a3, 0(a7)
0045ec: 00068263   beqz	a3, 4
0045f0: 1fa23683   ld	a3, 506(tp)
0045f4: 00d70733   add	a4, a4, a3
0045f8: 0000c6b7   lui	a3, 12
0045fc: 00d70733   add	a4, a4, a3
004600: 200006b7   lui	a3, 131072
004604: 34d72423   sw	a3, 840(a4)
004608: 1fa23703   ld	a4, 506(tp)
00460c: 00e80733   add	a4, a6, a4
004610: 00076703   lwu	a4, 0(a4)
004614: 00070263   beqz	a4, 4
004618: 060223a3   sw	zero, 103(tp)
00461c: 06022523   sw	zero, 106(tp)
004620: f5cff06f   j	-2212
004624: 00c4571b   srliw	a4, s0, 12
004628: 0047171b   slliw	a4, a4, 4
00462c: f14027f3   csrr	a5, mhartid
004630: 0027979b   slliw	a5, a5, 2
004634: 00c7f793   andi	a5, a5, 12
004638: 07077713   andi	a4, a4, 112
00463c: 00000813   li	a6, 0
004640: 00f76733   or	a4, a4, a5
004644: 040225a3   sw	zero, 75(tp)
004648: 1fa23783   ld	a5, 506(tp)
00464c: 02471a13   slli	s4, a4, 36
004650: 014787b3   add	a5, a5, s4
004654: 0000c6b7   lui	a3, 12
004658: 00d787b3   add	a5, a5, a3
00465c: 3e87a783   lw	a5, 1000(a5)
004660: 0007879b   sext.w	a5, a5
004664: 1f026683   lwu	a3, 496(tp)
004668: 02069693   slli	a3, a3, 32
00466c: 0206d693   srli	a3, a3, 32
004670: 00d23e23   sd	a3, 28(tp)
004674: 00f7f793   andi	a5, a5, 15
004678: 1007e793   ori	a5, a5, 256
00467c: 0af222a3   sw	a5, 165(tp)
004680: 31422003   lw	zero, 788(tp)
004684: 03623783   ld	a5, 54(tp)
004688: 00078863   beqz	a5, 16
00468c: 080221a3   sw	zero, 131(tp)
004690: 41000793   li	a5, 1040
004694: 00f22023   sw	a5, 0(tp)
004698: 04022c23   sw	zero, 88(tp)
00469c: bb818b13   addi	s6, gp, -1096
0046a0: 000b3783   ld	a5, 0(s6)
0046a4: 34079ce3   bnez	a5, 2904
0046a8: 00100893   li	a7, 1
0046ac: 071223a3   sw	a7, 103(tp)
0046b0: ec8ca783   lw	a5, -312(s9)
0046b4: 80000537   lui	a0, 524288
0046b8: 00150593   addi	a1, a0, 1
0046bc: 00b7f633   and	a2, a5, a1
0046c0: 0006061b   sext.w	a2, a2
0046c4: 000c8693   mv	a3, s9
0046c8: 0007879b   sext.w	a5, a5
0046cc: 00b61463   bne	a2, a1, 8
0046d0: 14c0106f   j	4428
0046d4: 0a07ce63   bltz	a5, 188
0046d8: 0017f613   andi	a2, a5, 1
0046dc: 0a060a63   beqz	a2, 180
0046e0: 0087d79b   srliw	a5, a5, 8
0046e4: 0017f793   andi	a5, a5, 1
0046e8: 0a078463   beqz	a5, 168
0046ec: ecbca423   sw	a1, -312(s9)
0046f0: ec8ce783   lwu	a5, -312(s9)
0046f4: 00078263   beqz	a5, 4
0046f8: ec8ca783   lw	a5, -312(s9)
0046fc: 00b7f7b3   and	a5, a5, a1
004700: 0007879b   sext.w	a5, a5
004704: 08b79663   bne	a5, a1, 140
004708: ec8ca603   lw	a2, -312(s9)
00470c: 01e65613   srli	a2, a2, 30
004710: 00167613   andi	a2, a2, 1
004714: 00060463   beqz	a2, 8
004718: 7d40206f   j	10196
00471c: ac0ca603   lw	a2, -1344(s9)
004720: 50050513   addi	a0, a0, 1280
004724: 0ff67613   zext.b	a2, a2
004728: 00a66633   or	a2, a2, a0
00472c: 0006061b   sext.w	a2, a2
004730: 1fa23583   ld	a1, 506(tp)
004734: 0000c537   lui	a0, 12
004738: 00ba05b3   add	a1, s4, a1
00473c: 00a585b3   add	a1, a1, a0
004740: 3cc5ac23   sw	a2, 984(a1)
004744: 00475613   srli	a2, a4, 4
004748: 071223a3   sw	a7, 103(tp)
00474c: f1402773   csrr	a4, mhartid
004750: 00377713   andi	a4, a4, 3
004754: 01c7171b   slliw	a4, a4, 28
004758: 00e7e7b3   or	a5, a5, a4
00475c: fc800737   lui	a4, 1034240
004760: 00164613   xori	a2, a2, 1
004764: fff70713   addi	a4, a4, -1
004768: 0176161b   slliw	a2, a2, 23
00476c: 00e7f733   and	a4, a5, a4
004770: 00c76733   or	a4, a4, a2
004774: 0007071b   sext.w	a4, a4
004778: e0e6a623   sw	a4, -500(a3)
00477c: e0c6a783   lw	a5, -500(a3)
004780: 0017f793   andi	a5, a5, 1
004784: fe078ae3   beqz	a5, -12
004788: e006a623   sw	zero, -500(a3)
00478c: 060223a3   sw	zero, 103(tp)
004790: 060223a3   sw	zero, 103(tp)
004794: 1fa23783   ld	a5, 506(tp)
004798: 0000c737   lui	a4, 12
00479c: 00fa07b3   add	a5, s4, a5
0047a0: 00e787b3   add	a5, a5, a4
0047a4: 3e87a783   lw	a5, 1000(a5)
0047a8: 0007879b   sext.w	a5, a5
0047ac: 1f026703   lwu	a4, 496(tp)
0047b0: 02071713   slli	a4, a4, 32
0047b4: 02075713   srli	a4, a4, 32
0047b8: 00e23e23   sd	a4, 28(tp)
0047bc: 00f7f793   andi	a5, a5, 15
0047c0: 1007e793   ori	a5, a5, 256
0047c4: 0af222a3   sw	a5, 165(tp)
0047c8: 31422003   lw	zero, 788(tp)
0047cc: 84018793   addi	a5, gp, -1984
0047d0: 0247a603   lw	a2, 36(a5)
0047d4: ffff8537   lui	a0, 1048568
0047d8: 00100713   li	a4, 1
0047dc: bd01b883   ld	a7, -1072(gp)
0047e0: 00ab8533   add	a0, s7, a0
0047e4: 18e608e3   beq	a2, a4, 2448
0047e8: 0207a783   lw	a5, 32(a5)
0047ec: 180794e3   bnez	a5, 2440
0047f0: 03926703   lwu	a4, 57(tp)
0047f4: 86818693   addi	a3, gp, -1944
0047f8: 0546a783   lw	a5, 84(a3)
0047fc: 01f7171b   slliw	a4, a4, 31
004800: 02179793   slli	a5, a5, 33
004804: 0217d793   srli	a5, a5, 33
004808: 00e7e7b3   or	a5, a5, a4
00480c: 04f6aa23   sw	a5, 84(a3)
004810: 01a23783   ld	a5, 26(tp)
004814: 00f6b023   sd	a5, 0(a3)
004818: 01b23783   ld	a5, 27(tp)
00481c: 00f6b423   sd	a5, 8(a3)
004820: 01823783   ld	a5, 24(tp)
004824: 00f6bc23   sd	a5, 24(a3)
004828: c00f17b7   lui	a5, 786673
00482c: 00f22023   sw	a5, 0(tp)
004830: 00022023   sw	zero, 0(tp)
004834: 00022023   sw	zero, 0(tp)
004838: 00022023   sw	zero, 0(tp)
00483c: 00022023   sw	zero, 0(tp)
004840: 00022023   sw	zero, 0(tp)
004844: 00022023   sw	zero, 0(tp)
004848: 00022023   sw	zero, 0(tp)
00484c: 00022023   sw	zero, 0(tp)
004850: 00022023   sw	zero, 0(tp)
004854: 00022023   sw	zero, 0(tp)
004858: 00022023   sw	zero, 0(tp)
00485c: 00022023   sw	zero, 0(tp)
004860: 00022023   sw	zero, 0(tp)
004864: 00022023   sw	zero, 0(tp)
004868: 00022023   sw	zero, 0(tp)
00486c: 00022023   sw	zero, 0(tp)
004870: 40000713   li	a4, 1024
004874: f14027f3   csrr	a5, mhartid
004878: 00f71733   sll	a4, a4, a5
00487c: 31423783   ld	a5, 788(tp)
004880: 00f777b3   and	a5, a4, a5
004884: fe079ce3   bnez	a5, -8
004888: 000087b7   lui	a5, 8
00488c: 00f507b3   add	a5, a0, a5
004890: 7057a703   lw	a4, 1797(a5)
004894: 0546a783   lw	a5, 84(a3)
004898: fc0005b7   lui	a1, 1032192
00489c: 02671713   slli	a4, a4, 38
0048a0: 00b7f7b3   and	a5, a5, a1
0048a4: 02675713   srli	a4, a4, 38
0048a8: 00e7e7b3   or	a5, a5, a4
0048ac: 04f6aa23   sw	a5, 84(a3)
0048b0: 00100793   li	a5, 1
0048b4: 00f61463   bne	a2, a5, 8
0048b8: 0200106f   j	4128
0048bc: 8401a023   sw	zero, -1984(gp)
0048c0: 08088713   addi	a4, a7, 128
0048c4: 84018793   addi	a5, gp, -1984
0048c8: 86818813   addi	a6, gp, -1944
0048cc: 0007b583   ld	a1, 0(a5)
0048d0: 00878793   addi	a5, a5, 8
0048d4: 00870713   addi	a4, a4, 8
0048d8: feb73c23   sd	a1, -8(a4)
0048dc: ff0798e3   bne	a5, a6, -16
0048e0: 1f423783   ld	a5, 500(tp)
0048e4: 02078063   beqz	a5, 32
0048e8: 02f6b423   sd	a5, 40(a3)
0048ec: 1f623783   ld	a5, 502(tp)
0048f0: 02f6b823   sd	a5, 48(a3)
0048f4: 1f726783   lwu	a5, 503(tp)
0048f8: 02f6ac23   sw	a5, 56(a3)
0048fc: 1f823783   ld	a5, 504(tp)
004900: 04f6b023   sd	a5, 64(a3)
004904: 68e53783   ld	a5, 1678(a0)
004908: 00078a63   beqz	a5, 20
00490c: 1cf8b823   sd	a5, 464(a7)
004910: 68f52783   lw	a5, 1679(a0)
004914: 0007879b   sext.w	a5, a5
004918: 1cf8ac23   sw	a5, 472(a7)
00491c: 000b3783   ld	a5, 0(s6)
004920: 04078a63   beqz	a5, 84
004924: 00008737   lui	a4, 8
004928: 00e50533   add	a0, a0, a4
00492c: 70752703   lw	a4, 1799(a0)
004930: 0007071b   sext.w	a4, a4
004934: 1f026603   lwu	a2, 496(tp)
004938: 02061613   slli	a2, a2, 32
00493c: 02065613   srli	a2, a2, 32
004940: 00c23e23   sd	a2, 28(tp)
004944: 10076713   ori	a4, a4, 256
004948: 0ae222a3   sw	a4, 165(tp)
00494c: 31422003   lw	zero, 788(tp)
004950: 1e478613   addi	a2, a5, 484
004954: 8c018593   addi	a1, gp, -1856
004958: 86818793   addi	a5, gp, -1944
00495c: 40d60633   sub	a2, a2, a3
004960: 0007b683   ld	a3, 0(a5)
004964: 00f60733   add	a4, a2, a5
004968: 00878793   addi	a5, a5, 8
00496c: 00d73023   sd	a3, 0(a4)
004970: fef598e3   bne	a1, a5, -16
004974: 2fc040ef   jal	17148
004978: e8cca783   lw	a5, -372(s9)
00497c: 000c8693   mv	a3, s9
004980: 0027f793   andi	a5, a5, 2
004984: e8fca623   sw	a5, -372(s9)
004988: a20d2a23   sw	zero, -1484(s10)
00498c: 1f026783   lwu	a5, 496(tp)
004990: 02079793   slli	a5, a5, 32
004994: 0207d793   srli	a5, a5, 32
004998: 00f23e23   sd	a5, 28(tp)
00499c: 0a0222a3   sw	zero, 165(tp)
0049a0: 31422003   lw	zero, 788(tp)
0049a4: 040227a3   sw	zero, 79(tp)
0049a8: 1fa23783   ld	a5, 506(tp)
0049ac: 0000c637   lui	a2, 12
0049b0: 00fa07b3   add	a5, s4, a5
0049b4: 00c787b3   add	a5, a5, a2
0049b8: 3e07a703   lw	a4, 992(a5)
0049bc: 0147579b   srliw	a5, a4, 20
0049c0: 0017f793   andi	a5, a5, 1
0049c4: 02071713   slli	a4, a4, 32
0049c8: 02075713   srli	a4, a4, 32
0049cc: 00078463   beqz	a5, 8
0049d0: 0640206f   j	8292
0049d4: 00100793   li	a5, 1
0049d8: b6f6a023   sw	a5, -1184(a3)
0049dc: b606a583   lw	a1, -1184(a3)
0049e0: 00f00713   li	a4, 15
0049e4: 00100613   li	a2, 1
0049e8: 00f58e63   beq	a1, a5, 28
0049ec: 00000793   li	a5, 0
0049f0: 0017879b   addiw	a5, a5, 1
0049f4: fef77ee3   bgeu	a4, a5, -4
0049f8: b6c6a023   sw	a2, -1184(a3)
0049fc: b606a783   lw	a5, -1184(a3)
004a00: fec796e3   bne	a5, a2, -20
004a04: 01523703   ld	a4, 21(tp)
004a08: 00377713   andi	a4, a4, 3
004a0c: 00020793   mv	a5, tp
004a10: 00e20633   add	a2, tp, a4
004a14: 00b66803   lwu	a6, 11(a2)
004a18: 04170713   addi	a4, a4, 65
004a1c: 00e20733   add	a4, tp, a4
004a20: 00100613   li	a2, 1
004a24: 00c72023   sw	a2, 0(a4)
004a28: 0a926883   lwu	a7, 169(tp)
004a2c: 00b23603   ld	a2, 11(tp)
004a30: 00060263   beqz	a2, 4
004a34: 00700613   li	a2, 7
004a38: 08c22d23   sw	a2, 154(tp)
004a3c: acc6a603   lw	a2, -1332(a3)
004a40: f1402573   csrr	a0, mhartid
004a44: 0005051b   sext.w	a0, a0
004a48: 0006061b   sext.w	a2, a2
004a4c: 008005b7   lui	a1, 2048
004a50: 7a051263   bnez	a0, 1956
004a54: 00c5e5b3   or	a1, a1, a2
004a58: acb6a623   sw	a1, -1332(a3)
004a5c: acc6a623   sw	a2, -1332(a3)
004a60: acc6e603   lwu	a2, -1332(a3)
004a64: 00060263   beqz	a2, 4
004a68: 09122d23   sw	a7, 154(tp)
004a6c: 01072023   sw	a6, 0(a4)
004a70: 00b00713   li	a4, 11
004a74: b606a023   sw	zero, -1184(a3)
004a78: 08e22ca3   sw	a4, 153(tp)
004a7c: b601a823   sw	zero, -1168(gp)
004a80: 013787b3   add	a5, a5, s3
004a84: af8ff06f   j	-3336
004a88: 00c4569b   srliw	a3, s0, 12
004a8c: f1402373   csrr	t1, mhartid
004a90: 0046969b   slliw	a3, a3, 4
004a94: 0023171b   slliw	a4, t1, 2
004a98: 00c77713   andi	a4, a4, 12
004a9c: 0706f693   andi	a3, a3, 112
004aa0: 00e6e6b3   or	a3, a3, a4
004aa4: 1fa23603   ld	a2, 506(tp)
004aa8: 02469713   slli	a4, a3, 36
004aac: 00e60633   add	a2, a2, a4
004ab0: 0000c8b7   lui	a7, 12
004ab4: 01160633   add	a2, a2, a7
004ab8: 3c062c23   sw	zero, 984(a2)
004abc: 00100e93   li	t4, 1
004ac0: 07d223a3   sw	t4, 103(tp)
004ac4: 00006537   lui	a0, 6
004ac8: 0046de13   srli	t3, a3, 4
004acc: 0001e837   lui	a6, 30
004ad0: 01c56533   or	a0, a0, t3
004ad4: c0480813   addi	a6, a6, -1020
004ad8: 0046d59b   srliw	a1, a3, 4
004adc: 000c8613   mv	a2, s9
004ae0: 0105169b   slliw	a3, a0, 16
004ae4: 010c8833   add	a6, s9, a6
004ae8: 00086503   lwu	a0, 0(a6)
004aec: 00050263   beqz	a0, 4
004af0: 1fa23503   ld	a0, 506(tp)
004af4: 00e50533   add	a0, a0, a4
004af8: 01150533   add	a0, a0, a7
004afc: 34d52423   sw	a3, 840(a0)
004b00: 1fa23683   ld	a3, 506(tp)
004b04: 00e686b3   add	a3, a3, a4
004b08: 00d886b3   add	a3, a7, a3
004b0c: 3486e683   lwu	a3, 840(a3)
004b10: 00068263   beqz	a3, 4
004b14: ec8ca683   lw	a3, -312(s9)
004b18: 80000fb7   lui	t6, 524288
004b1c: 001f8513   addi	a0, t6, 1
004b20: 00a6ff33   and	t5, a3, a0
004b24: 000f0f1b   sext.w	t5, t5
004b28: 0006869b   sext.w	a3, a3
004b2c: 5aaf0ce3   beq	t5, a0, 3512
004b30: 0a06c863   bltz	a3, 176
004b34: 0016ff13   andi	t5, a3, 1
004b38: 0a0f0463   beqz	t5, 168
004b3c: 0086d69b   srliw	a3, a3, 8
004b40: 0016f693   andi	a3, a3, 1
004b44: 08068e63   beqz	a3, 156
004b48: 00df8f13   addi	t5, t6, 13
004b4c: edeca423   sw	t5, -312(s9)
004b50: ec8ce683   lwu	a3, -312(s9)
004b54: 00068263   beqz	a3, 4
004b58: ec8ca683   lw	a3, -312(s9)
004b5c: 01e6f6b3   and	a3, a3, t5
004b60: 0006869b   sext.w	a3, a3
004b64: 07e69e63   bne	a3, t5, 124
004b68: ec8ca683   lw	a3, -312(s9)
004b6c: ac0caf03   lw	t5, -1344(s9)
004b70: 400f8693   addi	a3, t6, 1024
004b74: 0fff7f13   zext.b	t5, t5
004b78: 00df66b3   or	a3, t5, a3
004b7c: 00100f13   li	t5, 1
004b80: b7e1ae23   sw	t5, -1156(gp)
004b84: 0006869b   sext.w	a3, a3
004b88: 1fa23f03   ld	t5, 506(tp)
004b8c: 00ef0f33   add	t5, t5, a4
004b90: 011f08b3   add	a7, t5, a7
004b94: 3cd8ac23   sw	a3, 984(a7)
004b98: 0ffe7e13   zext.b	t3, t3
004b9c: 07d223a3   sw	t4, 103(tp)
004ba0: 00337693   andi	a3, t1, 3
004ba4: 01c6969b   slliw	a3, a3, 28
004ba8: fc8008b7   lui	a7, 1034240
004bac: 00d566b3   or	a3, a0, a3
004bb0: fff88893   addi	a7, a7, -1
004bb4: 001e4513   xori	a0, t3, 1
004bb8: 0175151b   slliw	a0, a0, 23
004bbc: 0116f6b3   and	a3, a3, a7
004bc0: 00a6e6b3   or	a3, a3, a0
004bc4: 0006869b   sext.w	a3, a3
004bc8: e0d62623   sw	a3, -500(a2)
004bcc: e0c62503   lw	a0, -500(a2)
004bd0: 00157513   andi	a0, a0, 1
004bd4: fe050ae3   beqz	a0, -12
004bd8: e0062623   sw	zero, -500(a2)
004bdc: 060223a3   sw	zero, 103(tp)
004be0: ec862683   lw	a3, -312(a2)
004be4: 0006869b   sext.w	a3, a3
004be8: 00086503   lwu	a0, 0(a6)
004bec: 00050263   beqz	a0, 4
004bf0: 1fa23503   ld	a0, 506(tp)
004bf4: 0000c837   lui	a6, 12
004bf8: 00e50533   add	a0, a0, a4
004bfc: 01050533   add	a0, a0, a6
004c00: 200008b7   lui	a7, 131072
004c04: 35152423   sw	a7, 840(a0)
004c08: 1fa23503   ld	a0, 506(tp)
004c0c: 00e50533   add	a0, a0, a4
004c10: 00a80833   add	a6, a6, a0
004c14: 34886503   lwu	a0, 840(a6)
004c18: 00050263   beqz	a0, 4
004c1c: 060223a3   sw	zero, 103(tp)
004c20: 0016f693   andi	a3, a3, 1
004c24: 00068663   beqz	a3, 12
004c28: b7c1a683   lw	a3, -1156(gp)
004c2c: 94069863   bnez	a3, -3760
004c30: 1fa23683   ld	a3, 506(tp)
004c34: 0000c537   lui	a0, 12
004c38: 00d706b3   add	a3, a4, a3
004c3c: 00a686b3   add	a3, a3, a0
004c40: 3806a683   lw	a3, 896(a3)
004c44: 48068863   beqz	a3, 1168
004c48: acc62683   lw	a3, -1332(a2)
004c4c: f1402873   csrr	a6, mhartid
004c50: 00100513   li	a0, 1
004c54: 0006869b   sext.w	a3, a3
004c58: 0106d893   srli	a7, a3, 16
004c5c: 0008081b   sext.w	a6, a6
004c60: 0ff8f893   zext.b	a7, a7
004c64: 00a81463   bne	a6, a0, 8
004c68: 0186d89b   srliw	a7, a3, 24
004c6c: 3005e693   ori	a3, a1, 768
004c70: 0006869b   sext.w	a3, a3
004c74: 1fa23583   ld	a1, 506(tp)
004c78: 0000c537   lui	a0, 12
004c7c: 00b705b3   add	a1, a4, a1
004c80: 00a585b3   add	a1, a1, a0
004c84: 62d5a023   sw	a3, 1568(a1)
004c88: 40000513   li	a0, 1024
004c8c: 01051533   sll	a0, a0, a6
004c90: 0c088a63   beqz	a7, 212
004c94: 1fb26683   lwu	a3, 507(tp)
004c98: 0006869b   sext.w	a3, a3
004c9c: 0c068463   beqz	a3, 200
004ca0: c00056b7   lui	a3, 786437
004ca4: b006869b   addiw	a3, a3, -1280
004ca8: 00d22023   sw	a3, 0(tp)
004cac: 00100693   li	a3, 1
004cb0: 00d22023   sw	a3, 0(tp)
004cb4: c00f16b7   lui	a3, 786673
004cb8: 00d22023   sw	a3, 0(tp)
004cbc: 00022023   sw	zero, 0(tp)
004cc0: 00022023   sw	zero, 0(tp)
004cc4: 00022023   sw	zero, 0(tp)
004cc8: 00022023   sw	zero, 0(tp)
004ccc: 00022023   sw	zero, 0(tp)
004cd0: 00022023   sw	zero, 0(tp)
004cd4: 00022023   sw	zero, 0(tp)
004cd8: 00022023   sw	zero, 0(tp)
004cdc: 00022023   sw	zero, 0(tp)
004ce0: 00022023   sw	zero, 0(tp)
004ce4: 00022023   sw	zero, 0(tp)
004ce8: 00022023   sw	zero, 0(tp)
004cec: 00022023   sw	zero, 0(tp)
004cf0: 00022023   sw	zero, 0(tp)
004cf4: 00022023   sw	zero, 0(tp)
004cf8: 00022023   sw	zero, 0(tp)
004cfc: 31423683   ld	a3, 788(tp)
004d00: 00d576b3   and	a3, a0, a3
004d04: fe069ce3   bnez	a3, -8
004d08: 1fa23683   ld	a3, 506(tp)
004d0c: 0000c837   lui	a6, 12
004d10: 00d706b3   add	a3, a4, a3
004d14: 010686b3   add	a3, a3, a6
004d18: 3bc6a883   lw	a7, 956(a3)
004d1c: 0008889b   sext.w	a7, a7
004d20: 1fa23683   ld	a3, 506(tp)
004d24: 00d706b3   add	a3, a4, a3
004d28: 010686b3   add	a3, a3, a6
004d2c: 3c46a683   lw	a3, 964(a3)
004d30: 00200593   li	a1, 2
004d34: 011595bb   sllw	a1, a1, a7
004d38: fff5859b   addiw	a1, a1, -1
004d3c: 00b6f6b3   and	a3, a3, a1
004d40: 0006869b   sext.w	a3, a3
004d44: 1fa23583   ld	a1, 506(tp)
004d48: 00b705b3   add	a1, a4, a1
004d4c: 010585b3   add	a1, a1, a6
004d50: 3ad5ac23   sw	a3, 952(a1)
004d54: 1fa23583   ld	a1, 506(tp)
004d58: 00b705b3   add	a1, a4, a1
004d5c: 010585b3   add	a1, a1, a6
004d60: 3cd5a023   sw	a3, 960(a1)
004d64: 1fa23583   ld	a1, 506(tp)
004d68: 0000c6b7   lui	a3, 12
004d6c: 00b705b3   add	a1, a4, a1
004d70: 00d585b3   add	a1, a1, a3
004d74: 3e85a583   lw	a1, 1000(a1)
004d78: 0005859b   sext.w	a1, a1
004d7c: 1f026803   lwu	a6, 496(tp)
004d80: 02081813   slli	a6, a6, 32
004d84: 02085813   srli	a6, a6, 32
004d88: 01023e23   sd	a6, 28(tp)
004d8c: 00f5f593   andi	a1, a1, 15
004d90: 1005e593   ori	a1, a1, 256
004d94: 0ab222a3   sw	a1, 165(tp)
004d98: 31422003   lw	zero, 788(tp)
004d9c: 1fa23583   ld	a1, 506(tp)
004da0: 00b705b3   add	a1, a4, a1
004da4: 00d585b3   add	a1, a1, a3
004da8: 3785ae03   lw	t3, 888(a1)
004dac: 000e0e1b   sext.w	t3, t3
004db0: 1fa23583   ld	a1, 506(tp)
004db4: 00b705b3   add	a1, a4, a1
004db8: 00d585b3   add	a1, a1, a3
004dbc: 37c5a803   lw	a6, 892(a1)
004dc0: 020e1313   slli	t1, t3, 32
004dc4: 02035313   srli	t1, t1, 32
004dc8: 02081593   slli	a1, a6, 32
004dcc: 0008089b   sext.w	a7, a6
004dd0: 0065e5b3   or	a1, a1, t1
004dd4: 1fa23803   ld	a6, 506(tp)
004dd8: 01070833   add	a6, a4, a6
004ddc: 00d80833   add	a6, a6, a3
004de0: 3e882803   lw	a6, 1000(a6)
004de4: 0188531b   srliw	t1, a6, 24
004de8: 00337313   andi	t1, t1, 3
004dec: 0008081b   sext.w	a6, a6
004df0: 32622223   sw	t1, 804(tp)
004df4: 21c5a023   sw	t3, 512(a1)
004df8: 2115a223   sw	a7, 516(a1)
004dfc: 1fa23883   ld	a7, 506(tp)
004e00: 011708b3   add	a7, a4, a7
004e04: 00d888b3   add	a7, a7, a3
004e08: 3808a883   lw	a7, 896(a7)
004e0c: 0008889b   sext.w	a7, a7
004e10: 2115a423   sw	a7, 520(a1)
004e14: 1fa23883   ld	a7, 506(tp)
004e18: 011708b3   add	a7, a4, a7
004e1c: 00d888b3   add	a7, a7, a3
004e20: 3848a883   lw	a7, 900(a7)
004e24: 0008889b   sext.w	a7, a7
004e28: 2115a623   sw	a7, 524(a1)
004e2c: 1fa23883   ld	a7, 506(tp)
004e30: 011708b3   add	a7, a4, a7
004e34: 00d888b3   add	a7, a7, a3
004e38: 3908a883   lw	a7, 912(a7)
004e3c: 0008889b   sext.w	a7, a7
004e40: 2115ac23   sw	a7, 536(a1)
004e44: 1fa23883   ld	a7, 506(tp)
004e48: 011708b3   add	a7, a4, a7
004e4c: 00d888b3   add	a7, a7, a3
004e50: 3948a883   lw	a7, 916(a7)
004e54: 0008889b   sext.w	a7, a7
004e58: 2115ae23   sw	a7, 540(a1)
004e5c: 1fa23883   ld	a7, 506(tp)
004e60: 011708b3   add	a7, a4, a7
004e64: 00d888b3   add	a7, a7, a3
004e68: 3988a883   lw	a7, 920(a7)
004e6c: 0008889b   sext.w	a7, a7
004e70: 2315a023   sw	a7, 544(a1)
004e74: 1fa23883   ld	a7, 506(tp)
004e78: 011708b3   add	a7, a4, a7
004e7c: 00d888b3   add	a7, a7, a3
004e80: 39c8a883   lw	a7, 924(a7)
004e84: 0008889b   sext.w	a7, a7
004e88: 2315a223   sw	a7, 548(a1)
004e8c: 2205a423   sw	zero, 552(a1)
004e90: 1fa23883   ld	a7, 506(tp)
004e94: 011708b3   add	a7, a4, a7
004e98: 00d888b3   add	a7, a7, a3
004e9c: 3a48a883   lw	a7, 932(a7)
004ea0: 0008889b   sext.w	a7, a7
004ea4: 2315a623   sw	a7, 556(a1)
004ea8: 1fa23883   ld	a7, 506(tp)
004eac: 011708b3   add	a7, a4, a7
004eb0: 00d888b3   add	a7, a7, a3
004eb4: 3a88a883   lw	a7, 936(a7)
004eb8: 0008889b   sext.w	a7, a7
004ebc: 2315a823   sw	a7, 560(a1)
004ec0: 1fa23883   ld	a7, 506(tp)
004ec4: 011708b3   add	a7, a4, a7
004ec8: 00d888b3   add	a7, a7, a3
004ecc: 3ac8a883   lw	a7, 940(a7)
004ed0: 0008889b   sext.w	a7, a7
004ed4: 2315aa23   sw	a7, 564(a1)
004ed8: 1fa23883   ld	a7, 506(tp)
004edc: 011708b3   add	a7, a4, a7
004ee0: 00d888b3   add	a7, a7, a3
004ee4: 3b08a883   lw	a7, 944(a7)
004ee8: 0008889b   sext.w	a7, a7
004eec: 2315ac23   sw	a7, 568(a1)
004ef0: 1fa23883   ld	a7, 506(tp)
004ef4: 011708b3   add	a7, a4, a7
004ef8: 00d888b3   add	a7, a7, a3
004efc: 3b48a883   lw	a7, 948(a7)
004f00: 0008889b   sext.w	a7, a7
004f04: 2315ae23   sw	a7, 572(a1)
004f08: 1fa23883   ld	a7, 506(tp)
004f0c: 011708b3   add	a7, a4, a7
004f10: 00d888b3   add	a7, a7, a3
004f14: 3b88a883   lw	a7, 952(a7)
004f18: 0008889b   sext.w	a7, a7
004f1c: 2515a023   sw	a7, 576(a1)
004f20: 1fa23883   ld	a7, 506(tp)
004f24: 011708b3   add	a7, a4, a7
004f28: 00d888b3   add	a7, a7, a3
004f2c: 3bc8a883   lw	a7, 956(a7)
004f30: 0008889b   sext.w	a7, a7
004f34: 2515a223   sw	a7, 580(a1)
004f38: 1fa23883   ld	a7, 506(tp)
004f3c: 011708b3   add	a7, a4, a7
004f40: 00d888b3   add	a7, a7, a3
004f44: 3c08a883   lw	a7, 960(a7)
004f48: 0008889b   sext.w	a7, a7
004f4c: 2515a823   sw	a7, 592(a1)
004f50: 1fa23883   ld	a7, 506(tp)
004f54: 011708b3   add	a7, a4, a7
004f58: 00d888b3   add	a7, a7, a3
004f5c: 3c48a883   lw	a7, 964(a7)
004f60: 0008889b   sext.w	a7, a7
004f64: 2515aa23   sw	a7, 596(a1)
004f68: 1fa23883   ld	a7, 506(tp)
004f6c: 011708b3   add	a7, a4, a7
004f70: 00d888b3   add	a7, a7, a3
004f74: 3c88a883   lw	a7, 968(a7)
004f78: 0008889b   sext.w	a7, a7
004f7c: 2515ac23   sw	a7, 600(a1)
004f80: 1fa23883   ld	a7, 506(tp)
004f84: 011708b3   add	a7, a4, a7
004f88: 00d888b3   add	a7, a7, a3
004f8c: 3d08a883   lw	a7, 976(a7)
004f90: 0008889b   sext.w	a7, a7
004f94: 2715a823   sw	a7, 624(a1)
004f98: 1fa23883   ld	a7, 506(tp)
004f9c: 011708b3   add	a7, a4, a7
004fa0: 00d888b3   add	a7, a7, a3
004fa4: 3d48a883   lw	a7, 980(a7)
004fa8: 0008889b   sext.w	a7, a7
004fac: 2715aa23   sw	a7, 628(a1)
004fb0: 1fa23883   ld	a7, 506(tp)
004fb4: 011708b3   add	a7, a4, a7
004fb8: 00d888b3   add	a7, a7, a3
004fbc: 3e08a883   lw	a7, 992(a7)
004fc0: 0008889b   sext.w	a7, a7
004fc4: 2915a023   sw	a7, 640(a1)
004fc8: 1fa23883   ld	a7, 506(tp)
004fcc: 011708b3   add	a7, a4, a7
004fd0: 00d888b3   add	a7, a7, a3
004fd4: 3e48a883   lw	a7, 996(a7)
004fd8: 0008889b   sext.w	a7, a7
004fdc: 2915a223   sw	a7, 644(a1)
004fe0: fffff8b7   lui	a7, 1048575
004fe4: fff88893   addi	a7, a7, -1
004fe8: 01187833   and	a6, a6, a7
004fec: 2905a423   sw	a6, 648(a1)
004ff0: 1fa23803   ld	a6, 506(tp)
004ff4: 01070833   add	a6, a4, a6
004ff8: 00d80833   add	a6, a6, a3
004ffc: 3c082223   sw	zero, 964(a6)
005000: 1fa23803   ld	a6, 506(tp)
005004: 01070833   add	a6, a4, a6
005008: 00d80833   add	a6, a6, a3
00500c: 3c082423   sw	zero, 968(a6)
005010: 1fa23803   ld	a6, 506(tp)
005014: 01070833   add	a6, a4, a6
005018: 00d80833   add	a6, a6, a3
00501c: 3c082023   sw	zero, 960(a6)
005020: 1fa23803   ld	a6, 506(tp)
005024: 01070833   add	a6, a4, a6
005028: 00d806b3   add	a3, a6, a3
00502c: 3a06a023   sw	zero, 928(a3)
005030: c00056b7   lui	a3, 786437
005034: b006869b   addiw	a3, a3, -1280
005038: 00d22023   sw	a3, 0(tp)
00503c: 00100693   li	a3, 1
005040: 00d22023   sw	a3, 0(tp)
005044: c00f16b7   lui	a3, 786673
005048: 00d22023   sw	a3, 0(tp)
00504c: 00022023   sw	zero, 0(tp)
005050: 00022023   sw	zero, 0(tp)
005054: 00022023   sw	zero, 0(tp)
005058: 00022023   sw	zero, 0(tp)
00505c: 00022023   sw	zero, 0(tp)
005060: 00022023   sw	zero, 0(tp)
005064: 00022023   sw	zero, 0(tp)
005068: 00022023   sw	zero, 0(tp)
00506c: 00022023   sw	zero, 0(tp)
005070: 00022023   sw	zero, 0(tp)
005074: 00022023   sw	zero, 0(tp)
005078: 00022023   sw	zero, 0(tp)
00507c: 00022023   sw	zero, 0(tp)
005080: 00022023   sw	zero, 0(tp)
005084: 00022023   sw	zero, 0(tp)
005088: 00022023   sw	zero, 0(tp)
00508c: 31423683   ld	a3, 788(tp)
005090: 00d576b3   and	a3, a0, a3
005094: fe069ce3   bnez	a3, -8
005098: 01226683   lwu	a3, 18(tp)
00509c: 0006869b   sext.w	a3, a3
0050a0: fe069ce3   bnez	a3, -8
0050a4: 2005a423   sw	zero, 520(a1)
0050a8: 1fa23683   ld	a3, 506(tp)
0050ac: 0000c5b7   lui	a1, 12
0050b0: 00d706b3   add	a3, a4, a3
0050b4: 00b686b3   add	a3, a3, a1
0050b8: 3806a023   sw	zero, 896(a3)
0050bc: 1f026683   lwu	a3, 496(tp)
0050c0: 02069693   slli	a3, a3, 32
0050c4: 0206d693   srli	a3, a3, 32
0050c8: 00d23e23   sd	a3, 28(tp)
0050cc: 0a0222a3   sw	zero, 165(tp)
0050d0: 31422003   lw	zero, 788(tp)
0050d4: 1fa23683   ld	a3, 506(tp)
0050d8: 00d70733   add	a4, a4, a3
0050dc: 0000c6b7   lui	a3, 12
0050e0: 00d70733   add	a4, a4, a3
0050e4: 3c072623   sw	zero, 972(a4)
0050e8: 1fb26703   lwu	a4, 507(tp)
0050ec: 0007071b   sext.w	a4, a4
0050f0: 00071463   bnez	a4, 8
0050f4: c89fe06f   j	-4984
0050f8: 00100713   li	a4, 1
0050fc: 02e22823   sw	a4, 48(tp)
005100: 02026703   lwu	a4, 32(tp)
005104: 00277713   andi	a4, a4, 2
005108: fe070ce3   beqz	a4, -8
00510c: acc62703   lw	a4, -1332(a2)
005110: 0007071b   sext.w	a4, a4
005114: 04e12023   sw	a4, 64(sp)
005118: 04012703   lw	a4, 64(sp)
00511c: 02070e63   beqz	a4, 60
005120: f1402773   csrr	a4, mhartid
005124: 00100693   li	a3, 1
005128: 0007071b   sext.w	a4, a4
00512c: 00d71463   bne	a4, a3, 8
005130: 2310106f   j	6704
005134: 04010123   sb	zero, 66(sp)
005138: 04214703   lbu	a4, 66(sp)
00513c: 00071863   bnez	a4, 16
005140: 04314703   lbu	a4, 67(sp)
005144: 00071463   bnez	a4, 8
005148: 04012023   sw	zero, 64(sp)
00514c: 04012703   lw	a4, 64(sp)
005150: 0007071b   sext.w	a4, a4
005154: ace62623   sw	a4, -1332(a2)
005158: 00100713   li	a4, 1
00515c: 02e228a3   sw	a4, 49(tp)
005160: 1e022da3   sw	zero, 507(tp)
005164: c19fe06f   j	-5096
005168: 00900713   li	a4, 9
00516c: 08e22ca3   sw	a4, 153(tp)
005170: c0dfe06f   j	-5108
005174: 4548a803   lw	a6, 1108(a7)
005178: 0008081b   sext.w	a6, a6
00517c: 0a926703   lwu	a4, 169(tp)
005180: 000085b7   lui	a1, 8
005184: 00b505b3   add	a1, a0, a1
005188: 6165a303   lw	t1, 1558(a1)
00518c: f14027f3   csrr	a5, mhartid
005190: 0003031b   sext.w	t1, t1
005194: 1fa23683   ld	a3, 506(tp)
005198: 0027979b   slliw	a5, a5, 2
00519c: 0047171b   slliw	a4, a4, 4
0051a0: 07077713   andi	a4, a4, 112
0051a4: 00c7f793   andi	a5, a5, 12
0051a8: 00e7e7b3   or	a5, a5, a4
0051ac: 02479793   slli	a5, a5, 36
0051b0: 00f686b3   add	a3, a3, a5
0051b4: 0000c737   lui	a4, 12
0051b8: 00e686b3   add	a3, a3, a4
0051bc: 3a66ac23   sw	t1, 952(a3)
0051c0: 6165a583   lw	a1, 1558(a1)
0051c4: 0005859b   sext.w	a1, a1
0051c8: 1fa23683   ld	a3, 506(tp)
0051cc: 00f686b3   add	a3, a3, a5
0051d0: 00e686b3   add	a3, a3, a4
0051d4: 3cb6a023   sw	a1, 960(a3)
0051d8: 1fa23683   ld	a3, 506(tp)
0051dc: 00f687b3   add	a5, a3, a5
0051e0: 00f70733   add	a4, a4, a5
0051e4: 3c076783   lwu	a5, 960(a4)
0051e8: 00078263   beqz	a5, 4
0051ec: 8601a023   sw	zero, -1952(gp)
0051f0: e00ff06f   j	-2560
0051f4: 800005b7   lui	a1, 524288
0051f8: 85dff06f   j	-1956
0051fc: c00097b7   lui	a5, 786441
005200: 4007879b   addiw	a5, a5, 1024
005204: 00f22023   sw	a5, 0(tp)
005208: 00022023   sw	zero, 0(tp)
00520c: c9cff06f   j	-2916
005210: 00100713   li	a4, 1
005214: b8e1a023   sw	a4, -1152(gp)
005218: b65fe06f   j	-5276
00521c: 00700713   li	a4, 7
005220: 08e22ca3   sw	a4, 153(tp)
005224: b61fe06f   j	-5280
005228: 00875713   srli	a4, a4, 8
00522c: 00377713   andi	a4, a4, 3
005230: 00100693   li	a3, 1
005234: 00d71463   bne	a4, a3, 8
005238: 1610106f   j	6496
00523c: 04226703   lwu	a4, 66(tp)
005240: c00006b7   lui	a3, 786432
005244: 00d77733   and	a4, a4, a3
005248: 0007071b   sext.w	a4, a4
00524c: 800006b7   lui	a3, 524288
005250: 00d70463   beq	a4, a3, 8
005254: b29fe06f   j	-5336
005258: c0005737   lui	a4, 786437
00525c: b007071b   addiw	a4, a4, -1280
005260: 00e22023   sw	a4, 0(tp)
005264: 00100713   li	a4, 1
005268: 00e22023   sw	a4, 0(tp)
00526c: c00f1737   lui	a4, 786673
005270: 00e22023   sw	a4, 0(tp)
005274: 00022023   sw	zero, 0(tp)
005278: 00022023   sw	zero, 0(tp)
00527c: 00022023   sw	zero, 0(tp)
005280: 00022023   sw	zero, 0(tp)
005284: 00022023   sw	zero, 0(tp)
005288: 00022023   sw	zero, 0(tp)
00528c: 00022023   sw	zero, 0(tp)
005290: 00022023   sw	zero, 0(tp)
005294: 00022023   sw	zero, 0(tp)
005298: 00022023   sw	zero, 0(tp)
00529c: 00022023   sw	zero, 0(tp)
0052a0: 00022023   sw	zero, 0(tp)
0052a4: 00022023   sw	zero, 0(tp)
0052a8: 00022023   sw	zero, 0(tp)
0052ac: 00022023   sw	zero, 0(tp)
0052b0: 00022023   sw	zero, 0(tp)
0052b4: 40000693   li	a3, 1024
0052b8: 00c696b3   sll	a3, a3, a2
0052bc: 31423703   ld	a4, 788(tp)
0052c0: 00e6f733   and	a4, a3, a4
0052c4: fe071ce3   bnez	a4, -8
0052c8: 04226603   lwu	a2, 66(tp)
0052cc: 00100693   li	a3, 1
0052d0: 01f6571b   srliw	a4, a2, 31
0052d4: 06d223a3   sw	a3, 103(tp)
0052d8: bfff06b7   lui	a3, 786416
0052dc: 01e71713   slli	a4, a4, 30
0052e0: 0ff68693   addi	a3, a3, 255
0052e4: 00c6f6b3   and	a3, a3, a2
0052e8: 20076713   ori	a4, a4, 512
0052ec: 00d76733   or	a4, a4, a3
0052f0: 0007071b   sext.w	a4, a4
0052f4: 000c8593   mv	a1, s9
0052f8: eeeca823   sw	a4, -272(s9)
0052fc: c0000637   lui	a2, 786432
005300: 400006b7   lui	a3, 262144
005304: 04226703   lwu	a4, 66(tp)
005308: 00c77733   and	a4, a4, a2
00530c: 0007071b   sext.w	a4, a4
005310: fed71ae3   bne	a4, a3, -12
005314: ee05a823   sw	zero, -272(a1)
005318: ef05e703   lwu	a4, -272(a1)
00531c: 00070263   beqz	a4, 4
005320: 060223a3   sw	zero, 103(tp)
005324: a59fe06f   j	-5544
005328: 30076f93   ori	t6, a4, 768
00532c: 307fff93   andi	t6, t6, 775
005330: 1fa23e83   ld	t4, 506(tp)
005334: 01d68eb3   add	t4, a3, t4
005338: 00ae8eb3   add	t4, t4, a0
00533c: 63fea023   sw	t6, 1568(t4)
005340: 1fa23e83   ld	t4, 506(tp)
005344: 01d68eb3   add	t4, a3, t4
005348: 00ae8eb3   add	t4, t4, a0
00534c: 3bceae83   lw	t4, 956(t4)
005350: 000e8e9b   sext.w	t4, t4
005354: 1fa23f83   ld	t6, 506(tp)
005358: 01f68fb3   add	t6, a3, t6
00535c: 00af8fb3   add	t6, t6, a0
005360: 3c4faf83   lw	t6, 964(t6)
005364: 00200a13   li	s4, 2
005368: 01da1ebb   sllw	t4, s4, t4
00536c: fffe8e9b   addiw	t4, t4, -1
005370: 01dffeb3   and	t4, t6, t4
005374: 000e8e9b   sext.w	t4, t4
005378: 1fa23f83   ld	t6, 506(tp)
00537c: 01f68fb3   add	t6, a3, t6
005380: 00af8fb3   add	t6, t6, a0
005384: 3bdfac23   sw	t4, 952(t6)
005388: 1fa23f83   ld	t6, 506(tp)
00538c: 01f68fb3   add	t6, a3, t6
005390: 00af8fb3   add	t6, t6, a0
005394: 3ddfa023   sw	t4, 960(t6)
005398: 1fa23e83   ld	t4, 506(tp)
00539c: 01d68eb3   add	t4, a3, t4
0053a0: 00ae8eb3   add	t4, t4, a0
0053a4: 3e8eae83   lw	t4, 1000(t4)
0053a8: 000e8e9b   sext.w	t4, t4
0053ac: 1f026f83   lwu	t6, 496(tp)
0053b0: 020f9f93   slli	t6, t6, 32
0053b4: 020fdf93   srli	t6, t6, 32
0053b8: 01f23e23   sd	t6, 28(tp)
0053bc: 00fefe93   andi	t4, t4, 15
0053c0: 100eee93   ori	t4, t4, 256
0053c4: 0bd222a3   sw	t4, 165(tp)
0053c8: 31422003   lw	zero, 788(tp)
0053cc: 1fa23e83   ld	t4, 506(tp)
0053d0: 01d68eb3   add	t4, a3, t4
0053d4: 00ae8eb3   add	t4, t4, a0
0053d8: 378eae83   lw	t4, 888(t4)
0053dc: 000e8a1b   sext.w	s4, t4
0053e0: 1fa23e83   ld	t4, 506(tp)
0053e4: 01d68eb3   add	t4, a3, t4
0053e8: 00ae8eb3   add	t4, t4, a0
0053ec: 37ceaf83   lw	t6, 892(t4)
0053f0: 01413423   sd	s4, 8(sp)
0053f4: 00816e83   lwu	t4, 8(sp)
0053f8: 020f9a13   slli	s4, t6, 32
0053fc: 000f8f9b   sext.w	t6, t6
005400: 01f13823   sd	t6, 16(sp)
005404: 01da6eb3   or	t4, s4, t4
005408: 1fa23f83   ld	t6, 506(tp)
00540c: 01f68fb3   add	t6, a3, t6
005410: 00af8fb3   add	t6, t6, a0
005414: 3e8faa03   lw	s4, 1000(t6)
005418: 018a5f9b   srliw	t6, s4, 24
00541c: 003fff93   andi	t6, t6, 3
005420: 000a0a1b   sext.w	s4, s4
005424: 33f22223   sw	t6, 804(tp)
005428: 00813f83   ld	t6, 8(sp)
00542c: 21fea023   sw	t6, 512(t4)
005430: 01013f83   ld	t6, 16(sp)
005434: 21fea223   sw	t6, 516(t4)
005438: 1fa23f83   ld	t6, 506(tp)
00543c: 01f68fb3   add	t6, a3, t6
005440: 00af8fb3   add	t6, t6, a0
005444: 380faf83   lw	t6, 896(t6)
005448: 000f8f9b   sext.w	t6, t6
00544c: 21fea423   sw	t6, 520(t4)
005450: 1fa23f83   ld	t6, 506(tp)
005454: 01f68fb3   add	t6, a3, t6
005458: 00af8fb3   add	t6, t6, a0
00545c: 384faf83   lw	t6, 900(t6)
005460: 000f8f9b   sext.w	t6, t6
005464: 21fea623   sw	t6, 524(t4)
005468: 1fa23f83   ld	t6, 506(tp)
00546c: 01f68fb3   add	t6, a3, t6
005470: 00af8fb3   add	t6, t6, a0
005474: 390faf83   lw	t6, 912(t6)
005478: 000f8f9b   sext.w	t6, t6
00547c: 21feac23   sw	t6, 536(t4)
005480: 1fa23f83   ld	t6, 506(tp)
005484: 01f68fb3   add	t6, a3, t6
005488: 00af8fb3   add	t6, t6, a0
00548c: 394faf83   lw	t6, 916(t6)
005490: 000f8f9b   sext.w	t6, t6
005494: 21feae23   sw	t6, 540(t4)
005498: 1fa23f83   ld	t6, 506(tp)
00549c: 01f68fb3   add	t6, a3, t6
0054a0: 00af8fb3   add	t6, t6, a0
0054a4: 398faf83   lw	t6, 920(t6)
0054a8: 000f8f9b   sext.w	t6, t6
0054ac: 23fea023   sw	t6, 544(t4)
0054b0: 1fa23f83   ld	t6, 506(tp)
0054b4: 01f68fb3   add	t6, a3, t6
0054b8: 00af8fb3   add	t6, t6, a0
0054bc: 39cfaf83   lw	t6, 924(t6)
0054c0: 000f8f9b   sext.w	t6, t6
0054c4: 23fea223   sw	t6, 548(t4)
0054c8: 220ea423   sw	zero, 552(t4)
0054cc: 1fa23f83   ld	t6, 506(tp)
0054d0: 01f68fb3   add	t6, a3, t6
0054d4: 00af8fb3   add	t6, t6, a0
0054d8: 3a4faf83   lw	t6, 932(t6)
0054dc: 000f8f9b   sext.w	t6, t6
0054e0: 23fea623   sw	t6, 556(t4)
0054e4: 1fa23f83   ld	t6, 506(tp)
0054e8: 01f68fb3   add	t6, a3, t6
0054ec: 00af8fb3   add	t6, t6, a0
0054f0: 3a8faf83   lw	t6, 936(t6)
0054f4: 000f8f9b   sext.w	t6, t6
0054f8: 23fea823   sw	t6, 560(t4)
0054fc: 1fa23f83   ld	t6, 506(tp)
005500: 01f68fb3   add	t6, a3, t6
005504: 00af8fb3   add	t6, t6, a0
005508: 3acfaf83   lw	t6, 940(t6)
00550c: 000f8f9b   sext.w	t6, t6
005510: 23feaa23   sw	t6, 564(t4)
005514: 1fa23f83   ld	t6, 506(tp)
005518: 01f68fb3   add	t6, a3, t6
00551c: 00af8fb3   add	t6, t6, a0
005520: 3b0faf83   lw	t6, 944(t6)
005524: 000f8f9b   sext.w	t6, t6
005528: 23feac23   sw	t6, 568(t4)
00552c: 1fa23f83   ld	t6, 506(tp)
005530: 01f68fb3   add	t6, a3, t6
005534: 00af8fb3   add	t6, t6, a0
005538: 3b4faf83   lw	t6, 948(t6)
00553c: 000f8f9b   sext.w	t6, t6
005540: 23feae23   sw	t6, 572(t4)
005544: 1fa23f83   ld	t6, 506(tp)
005548: 01f68fb3   add	t6, a3, t6
00554c: 00af8fb3   add	t6, t6, a0
005550: 3b8faf83   lw	t6, 952(t6)
005554: 000f8f9b   sext.w	t6, t6
005558: 25fea023   sw	t6, 576(t4)
00555c: 1fa23f83   ld	t6, 506(tp)
005560: 01f68fb3   add	t6, a3, t6
005564: 00af8fb3   add	t6, t6, a0
005568: 3bcfaf83   lw	t6, 956(t6)
00556c: 000f8f9b   sext.w	t6, t6
005570: 25fea223   sw	t6, 580(t4)
005574: 1fa23f83   ld	t6, 506(tp)
005578: 01f68fb3   add	t6, a3, t6
00557c: 00af8fb3   add	t6, t6, a0
005580: 3c0faf83   lw	t6, 960(t6)
005584: 000f8f9b   sext.w	t6, t6
005588: 25fea823   sw	t6, 592(t4)
00558c: 1fa23f83   ld	t6, 506(tp)
005590: 01f68fb3   add	t6, a3, t6
005594: 00af8fb3   add	t6, t6, a0
005598: 3c4faf83   lw	t6, 964(t6)
00559c: 000f8f9b   sext.w	t6, t6
0055a0: 25feaa23   sw	t6, 596(t4)
0055a4: 1fa23f83   ld	t6, 506(tp)
0055a8: 01f68fb3   add	t6, a3, t6
0055ac: 00af8fb3   add	t6, t6, a0
0055b0: 3c8faf83   lw	t6, 968(t6)
0055b4: 000f8f9b   sext.w	t6, t6
0055b8: 25feac23   sw	t6, 600(t4)
0055bc: 1fa23f83   ld	t6, 506(tp)
0055c0: 01f68fb3   add	t6, a3, t6
0055c4: 00af8fb3   add	t6, t6, a0
0055c8: 3d0faf83   lw	t6, 976(t6)
0055cc: 000f8f9b   sext.w	t6, t6
0055d0: 27fea823   sw	t6, 624(t4)
0055d4: 1fa23f83   ld	t6, 506(tp)
0055d8: 01f68fb3   add	t6, a3, t6
0055dc: 00af8fb3   add	t6, t6, a0
0055e0: 3d4faf83   lw	t6, 980(t6)
0055e4: 000f8f9b   sext.w	t6, t6
0055e8: 27feaa23   sw	t6, 628(t4)
0055ec: 1fa23f83   ld	t6, 506(tp)
0055f0: 01f68fb3   add	t6, a3, t6
0055f4: 00af8fb3   add	t6, t6, a0
0055f8: 3e0faf83   lw	t6, 992(t6)
0055fc: 000f8f9b   sext.w	t6, t6
005600: 29fea023   sw	t6, 640(t4)
005604: 1fa23f83   ld	t6, 506(tp)
005608: 01f68fb3   add	t6, a3, t6
00560c: 00af8fb3   add	t6, t6, a0
005610: 3e4faf83   lw	t6, 996(t6)
005614: 013a7a33   and	s4, s4, s3
005618: 000a0a1b   sext.w	s4, s4
00561c: 000f8f9b   sext.w	t6, t6
005620: 29fea223   sw	t6, 644(t4)
005624: 294ea423   sw	s4, 648(t4)
005628: 1fa23f83   ld	t6, 506(tp)
00562c: 01f68fb3   add	t6, a3, t6
005630: 00af8fb3   add	t6, t6, a0
005634: 3c0fa223   sw	zero, 964(t6)
005638: 1fa23f83   ld	t6, 506(tp)
00563c: 01f68fb3   add	t6, a3, t6
005640: 00af8fb3   add	t6, t6, a0
005644: 3c0fa423   sw	zero, 968(t6)
005648: 1fa23f83   ld	t6, 506(tp)
00564c: 01f68fb3   add	t6, a3, t6
005650: 00af8fb3   add	t6, t6, a0
005654: 3c0fa023   sw	zero, 960(t6)
005658: 1fa23f83   ld	t6, 506(tp)
00565c: 01f68fb3   add	t6, a3, t6
005660: 00af8fb3   add	t6, t6, a0
005664: 3a0fa023   sw	zero, 928(t6)
005668: 00012f83   lw	t6, 0(sp)
00566c: 01f22023   sw	t6, 0(tp)
005670: 00100f93   li	t6, 1
005674: 01f22023   sw	t6, 0(tp)
005678: 01522023   sw	s5, 0(tp)
00567c: 00022023   sw	zero, 0(tp)
005680: 00022023   sw	zero, 0(tp)
005684: 00022023   sw	zero, 0(tp)
005688: 00022023   sw	zero, 0(tp)
00568c: 00022023   sw	zero, 0(tp)
005690: 00022023   sw	zero, 0(tp)
005694: 00022023   sw	zero, 0(tp)
005698: 00022023   sw	zero, 0(tp)
00569c: 00022023   sw	zero, 0(tp)
0056a0: 00022023   sw	zero, 0(tp)
0056a4: 00022023   sw	zero, 0(tp)
0056a8: 00022023   sw	zero, 0(tp)
0056ac: 00022023   sw	zero, 0(tp)
0056b0: 00022023   sw	zero, 0(tp)
0056b4: 00022023   sw	zero, 0(tp)
0056b8: 00022023   sw	zero, 0(tp)
0056bc: 31423f83   ld	t6, 788(tp)
0056c0: 01fe7fb3   and	t6, t3, t6
0056c4: fe0f9ce3   bnez	t6, -8
0056c8: 01226f83   lwu	t6, 18(tp)
0056cc: 000f8f9b   sext.w	t6, t6
0056d0: fe0f9ce3   bnez	t6, -8
0056d4: 200ea423   sw	zero, 520(t4)
0056d8: 1fa23e83   ld	t4, 506(tp)
0056dc: 01d686b3   add	a3, a3, t4
0056e0: 00a686b3   add	a3, a3, a0
0056e4: 3806a023   sw	zero, 896(a3)
0056e8: 1f026683   lwu	a3, 496(tp)
0056ec: 02069693   slli	a3, a3, 32
0056f0: 0206d693   srli	a3, a3, 32
0056f4: 00d23e23   sd	a3, 28(tp)
0056f8: 0a0222a3   sw	zero, 165(tp)
0056fc: 31422003   lw	zero, 788(tp)
005700: 921fe06f   j	-5856
005704: 0016f693   andi	a3, a3, 1
005708: 00069463   bnez	a3, 8
00570c: c55fe06f   j	-5036
005710: 800008b7   lui	a7, 524288
005714: 00d88613   addi	a2, a7, 13
005718: ecc5a423   sw	a2, -312(a1)
00571c: ec85e683   lwu	a3, -312(a1)
005720: 00068263   beqz	a3, 4
005724: ec85a683   lw	a3, -312(a1)
005728: 00c6f6b3   and	a3, a3, a2
00572c: 0006869b   sext.w	a3, a3
005730: 00c68463   beq	a3, a2, 8
005734: c2dfe06f   j	-5076
005738: 00100693   li	a3, 1
00573c: b6d1aa23   sw	a3, -1164(gp)
005740: ac05a683   lw	a3, -1344(a1)
005744: 50088893   addi	a7, a7, 1280
005748: 0ff6f693   zext.b	a3, a3
00574c: 0116e6b3   or	a3, a3, a7
005750: 0006869b   sext.w	a3, a3
005754: 1fa23603   ld	a2, 506(tp)
005758: 0000c8b7   lui	a7, 12
00575c: 00e60633   add	a2, a2, a4
005760: 01160633   add	a2, a2, a7
005764: 3cd62c23   sw	a3, 984(a2)
005768: 00100693   li	a3, 1
00576c: 06d223a3   sw	a3, 103(tp)
005770: 80000637   lui	a2, 524288
005774: d00008b7   lui	a7, 851968
005778: fff88893   addi	a7, a7, -1
00577c: 0016061b   addiw	a2, a2, 1
005780: f14026f3   csrr	a3, mhartid
005784: 0036f693   andi	a3, a3, 3
005788: 01c6969b   slliw	a3, a3, 28
00578c: 01167633   and	a2, a2, a7
005790: fc8008b7   lui	a7, 1034240
005794: 00d66633   or	a2, a2, a3
005798: fff88893   addi	a7, a7, -1
00579c: 00184693   xori	a3, a6, 1
0057a0: 0176969b   slliw	a3, a3, 23
0057a4: 01167633   and	a2, a2, a7
0057a8: 00d66633   or	a2, a2, a3
0057ac: 0006061b   sext.w	a2, a2
0057b0: e0c5a623   sw	a2, -500(a1)
0057b4: e0c5a683   lw	a3, -500(a1)
0057b8: 0016f693   andi	a3, a3, 1
0057bc: fe068ae3   beqz	a3, -12
0057c0: e005a623   sw	zero, -500(a1)
0057c4: 060223a3   sw	zero, 103(tp)
0057c8: 0a926683   lwu	a3, 169(tp)
0057cc: 0006869b   sext.w	a3, a3
0057d0: 01068463   beq	a3, a6, 8
0057d4: b8dfe06f   j	-5236
0057d8: 1fa23683   ld	a3, 506(tp)
0057dc: 0000c637   lui	a2, 12
0057e0: 00e686b3   add	a3, a3, a4
0057e4: 00c686b3   add	a3, a3, a2
0057e8: 3486a683   lw	a3, 840(a3)
0057ec: 00c00613   li	a2, 12
0057f0: 01d68693   addi	a3, a3, 29
0057f4: 01f6f693   andi	a3, a3, 31
0057f8: 00d67463   bgeu	a2, a3, 8
0057fc: b65fe06f   j	-5276
005800: 00700693   li	a3, 7
005804: 08d22ca3   sw	a3, 153(tp)
005808: 00100693   li	a3, 1
00580c: b6d1a823   sw	a3, -1168(gp)
005810: b51fe06f   j	-5296
005814: 00100713   li	a4, 1
005818: fc0fe06f   j	-6208
00581c: 0017d61b   srliw	a2, a5, 1
005820: 00167593   andi	a1, a2, 1
005824: 07f67613   andi	a2, a2, 127
005828: 02059263   bnez	a1, 36
00582c: 4016561b   sraiw	a2, a2, 1
005830: 00367613   andi	a2, a2, 3
005834: 00061c63   bnez	a2, 24
005838: f017f793   andi	a5, a5, -255
00583c: 00c7e793   ori	a5, a5, 12
005840: ecfca423   sw	a5, -312(s9)
005844: ec8ce783   lwu	a5, -312(s9)
005848: 00078263   beqz	a5, 4
00584c: ac06a783   lw	a5, -1344(a3)
005850: 80000637   lui	a2, 524288
005854: 50060613   addi	a2, a2, 1280
005858: 0ff7f793   zext.b	a5, a5
00585c: 00c7e7b3   or	a5, a5, a2
005860: 0007879b   sext.w	a5, a5
005864: 1fa23603   ld	a2, 506(tp)
005868: 0000c5b7   lui	a1, 12
00586c: 00ca0633   add	a2, s4, a2
005870: 00b60633   add	a2, a2, a1
005874: 3cf62c23   sw	a5, 984(a2)
005878: 00475793   srli	a5, a4, 4
00587c: 00100713   li	a4, 1
005880: 06e223a3   sw	a4, 103(tp)
005884: 80000737   lui	a4, 524288
005888: d00005b7   lui	a1, 851968
00588c: 0017071b   addiw	a4, a4, 1
005890: fff58593   addi	a1, a1, -1
005894: f1402673   csrr	a2, mhartid
005898: 00367613   andi	a2, a2, 3
00589c: 01c6161b   slliw	a2, a2, 28
0058a0: 00b77733   and	a4, a4, a1
0058a4: 00c76733   or	a4, a4, a2
0058a8: fc800637   lui	a2, 1034240
0058ac: 0017c793   xori	a5, a5, 1
0058b0: fff60613   addi	a2, a2, -1
0058b4: 0177979b   slliw	a5, a5, 23
0058b8: 00c77733   and	a4, a4, a2
0058bc: 00f76733   or	a4, a4, a5
0058c0: 0007071b   sext.w	a4, a4
0058c4: e0e6a623   sw	a4, -500(a3)
0058c8: e0c6a783   lw	a5, -500(a3)
0058cc: 0017f793   andi	a5, a5, 1
0058d0: fe078ae3   beqz	a5, -12
0058d4: eb5fe06f   j	-4428
0058d8: 0018081b   addiw	a6, a6, 1
0058dc: 4508aa23   sw	a6, 1108(a7)
0058e0: fe1fe06f   j	-4128
0058e4: 0016d51b   srliw	a0, a3, 1
0058e8: 00157893   andi	a7, a0, 1
0058ec: 07f57513   andi	a0, a0, 127
0058f0: 02089263   bnez	a7, 36
0058f4: 4015551b   sraiw	a0, a0, 1
0058f8: 00357513   andi	a0, a0, 3
0058fc: 00051c63   bnez	a0, 24
005900: f016f693   andi	a3, a3, -255
005904: 00c6e693   ori	a3, a3, 12
005908: ecdca423   sw	a3, -312(s9)
00590c: ec8ce683   lwu	a3, -312(s9)
005910: 00068263   beqz	a3, 4
005914: ac062683   lw	a3, -1344(a2)
005918: 80000537   lui	a0, 524288
00591c: 40050513   addi	a0, a0, 1024
005920: 0ff6f693   zext.b	a3, a3
005924: 00a6e6b3   or	a3, a3, a0
005928: 00100513   li	a0, 1
00592c: b6a1ae23   sw	a0, -1156(gp)
005930: 0006869b   sext.w	a3, a3
005934: 1fa23503   ld	a0, 506(tp)
005938: 0000c8b7   lui	a7, 12
00593c: 00e50533   add	a0, a0, a4
005940: 01150533   add	a0, a0, a7
005944: 3cd52c23   sw	a3, 984(a0)
005948: 0075f693   andi	a3, a1, 7
00594c: 00100513   li	a0, 1
005950: 06a223a3   sw	a0, 103(tp)
005954: 80000537   lui	a0, 524288
005958: d0000337   lui	t1, 851968
00595c: 0015051b   addiw	a0, a0, 1
005960: fff30313   addi	t1, t1, -1
005964: f14028f3   csrr	a7, mhartid
005968: 0038f893   andi	a7, a7, 3
00596c: 01c8989b   slliw	a7, a7, 28
005970: 00657533   and	a0, a0, t1
005974: 01156533   or	a0, a0, a7
005978: fc8008b7   lui	a7, 1034240
00597c: 0016c693   xori	a3, a3, 1
005980: fff88893   addi	a7, a7, -1
005984: 0176969b   slliw	a3, a3, 23
005988: 01157533   and	a0, a0, a7
00598c: 00d56533   or	a0, a0, a3
005990: 0005051b   sext.w	a0, a0
005994: e0a62623   sw	a0, -500(a2)
005998: e0c62683   lw	a3, -500(a2)
00599c: 0016f693   andi	a3, a3, 1
0059a0: fe068ae3   beqz	a3, -12
0059a4: a34ff06f   j	-3532
0059a8: 96462783   lw	a5, -1692(a2)
0059ac: b6f1ac23   sw	a5, -1160(gp)
0059b0: ec862783   lw	a5, -312(a2)
0059b4: 01e7d793   srli	a5, a5, 30
0059b8: 0017f793   andi	a5, a5, 1
0059bc: 04079463   bnez	a5, 72
0059c0: 0b126783   lwu	a5, 177(tp)
0059c4: 00010337   lui	t1, 16
0059c8: 0067f7b3   and	a5, a5, t1
0059cc: 00078463   beqz	a5, 8
0059d0: 3010106f   j	6912
0059d4: 40000337   lui	t1, 262144
0059d8: 00010e37   lui	t3, 16
0059dc: 0180006f   j	24
0059e0: 0b126783   lwu	a5, 177(tp)
0059e4: 01c7f7b3   and	a5, a5, t3
0059e8: 0007879b   sext.w	a5, a5
0059ec: 00078463   beqz	a5, 8
0059f0: 2e10106f   j	6880
0059f4: ec862783   lw	a5, -312(a2)
0059f8: 0067f7b3   and	a5, a5, t1
0059fc: 0007879b   sext.w	a5, a5
005a00: fe0780e3   beqz	a5, -32
005a04: ec862783   lw	a5, -312(a2)
005a08: 0007889b   sext.w	a7, a5
005a0c: 01523803   ld	a6, 21(tp)
005a10: 00387813   andi	a6, a6, 3
005a14: 010687b3   add	a5, a3, a6
005a18: 00b7e303   lwu	t1, 11(a5)
005a1c: 04180813   addi	a6, a6, 65
005a20: 010686b3   add	a3, a3, a6
005a24: 00100793   li	a5, 1
005a28: 00f6a023   sw	a5, 0(a3)
005a2c: 01323783   ld	a5, 19(tp)
005a30: fe079ee3   bnez	a5, -4
005a34: ebc63783   ld	a5, -324(a2)
005a38: 00c7d713   srli	a4, a5, 12
005a3c: 00377713   andi	a4, a4, 3
005a40: 02070a63   beqz	a4, 52
005a44: 07f00693   li	a3, 127
005a48: b0002773   csrr	a4, mcycle
005a4c: 00000013   nop
005a50: b00027f3   csrr	a5, mcycle
005a54: 40e787b3   sub	a5, a5, a4
005a58: fef6fae3   bgeu	a3, a5, -12
005a5c: ebcca783   lw	a5, -324(s9)
005a60: 00c7d71b   srliw	a4, a5, 12
005a64: 00377713   andi	a4, a4, 3
005a68: 02079793   slli	a5, a5, 32
005a6c: 0207d793   srli	a5, a5, 32
005a70: fc071ce3   bnez	a4, -40
005a74: 0017f793   andi	a5, a5, 1
005a78: 00078463   beqz	a5, 8
005a7c: ea0cae23   sw	zero, -324(s9)
005a80: 01020833   add	a6, tp, a6
005a84: 00682023   sw	t1, 0(a6)
005a88: 0088d79b   srliw	a5, a7, 8
005a8c: 80000737   lui	a4, 524288
005a90: 0017f793   andi	a5, a5, 1
005a94: 00e7e7b3   or	a5, a5, a4
005a98: 1fa23703   ld	a4, 506(tp)
005a9c: 00100693   li	a3, 1
005aa0: 02469693   slli	a3, a3, 36
005aa4: 0002e637   lui	a2, 46
005aa8: 00d70733   add	a4, a4, a3
005aac: 00c70733   add	a4, a4, a2
005ab0: 08f72023   sw	a5, 128(a4)
005ab4: 0002e837   lui	a6, 46
005ab8: c0000637   lui	a2, 786432
005abc: c0000737   lui	a4, 786432
005ac0: 1fa23783   ld	a5, 506(tp)
005ac4: 00d787b3   add	a5, a5, a3
005ac8: 010787b3   add	a5, a5, a6
005acc: 0807a783   lw	a5, 128(a5)
005ad0: 00c7f7b3   and	a5, a5, a2
005ad4: 0007879b   sext.w	a5, a5
005ad8: fee794e3   bne	a5, a4, -24
005adc: c00057b7   lui	a5, 786437
005ae0: b007879b   addiw	a5, a5, -1280
005ae4: 00f22023   sw	a5, 0(tp)
005ae8: 00100793   li	a5, 1
005aec: 00f22023   sw	a5, 0(tp)
005af0: c00f17b7   lui	a5, 786673
005af4: 00f22023   sw	a5, 0(tp)
005af8: 00022023   sw	zero, 0(tp)
005afc: 00022023   sw	zero, 0(tp)
005b00: 00022023   sw	zero, 0(tp)
005b04: 00022023   sw	zero, 0(tp)
005b08: 00022023   sw	zero, 0(tp)
005b0c: 00022023   sw	zero, 0(tp)
005b10: 00022023   sw	zero, 0(tp)
005b14: 00022023   sw	zero, 0(tp)
005b18: 00022023   sw	zero, 0(tp)
005b1c: 00022023   sw	zero, 0(tp)
005b20: 00022023   sw	zero, 0(tp)
005b24: 00022023   sw	zero, 0(tp)
005b28: 00022023   sw	zero, 0(tp)
005b2c: 00022023   sw	zero, 0(tp)
005b30: 00022023   sw	zero, 0(tp)
005b34: 00022023   sw	zero, 0(tp)
005b38: 40000693   li	a3, 1024
005b3c: f14027f3   csrr	a5, mhartid
005b40: 0007871b   sext.w	a4, a5
005b44: 00f696b3   sll	a3, a3, a5
005b48: 31423783   ld	a5, 788(tp)
005b4c: 00d7f7b3   and	a5, a5, a3
005b50: fe079ce3   bnez	a5, -8
005b54: 04226783   lwu	a5, 66(tp)
005b58: fff74713   not	a4, a4
005b5c: 00177713   andi	a4, a4, 1
005b60: 0047171b   slliw	a4, a4, 4
005b64: 00e7e733   or	a4, a5, a4
005b68: 0ff77713   zext.b	a4, a4
005b6c: f007f793   andi	a5, a5, -256
005b70: 00e7e7b3   or	a5, a5, a4
005b74: 7fff0737   lui	a4, 524272
005b78: 0ff70713   addi	a4, a4, 255
005b7c: 00e7f7b3   and	a5, a5, a4
005b80: 80000737   lui	a4, 524288
005b84: 10070713   addi	a4, a4, 256
005b88: 00e7e7b3   or	a5, a5, a4
005b8c: 0007879b   sext.w	a5, a5
005b90: 000c8613   mv	a2, s9
005b94: eefca823   sw	a5, -272(s9)
005b98: c00008b7   lui	a7, 786432
005b9c: c0000837   lui	a6, 786432
005ba0: 04226783   lwu	a5, 66(tp)
005ba4: 0117f733   and	a4, a5, a7
005ba8: 0007071b   sext.w	a4, a4
005bac: ff071ae3   bne	a4, a6, -12
005bb0: 02179793   slli	a5, a5, 33
005bb4: 0217d793   srli	a5, a5, 33
005bb8: eef62823   sw	a5, -272(a2)
005bbc: 04226783   lwu	a5, 66(tp)
005bc0: 0007879b   sext.w	a5, a5
005bc4: fe079ce3   bnez	a5, -8
005bc8: 06022423   sw	zero, 104(tp)
005bcc: 1fa23783   ld	a5, 506(tp)
005bd0: 00100813   li	a6, 1
005bd4: 02481813   slli	a6, a6, 36
005bd8: 010787b3   add	a5, a5, a6
005bdc: 0002e8b7   lui	a7, 46
005be0: 011787b3   add	a5, a5, a7
005be4: 0807a703   lw	a4, 128(a5)
005be8: 02171713   slli	a4, a4, 33
005bec: 02175713   srli	a4, a4, 33
005bf0: 1fa23783   ld	a5, 506(tp)
005bf4: 010787b3   add	a5, a5, a6
005bf8: 011787b3   add	a5, a5, a7
005bfc: 08e7a023   sw	a4, 128(a5)
005c00: 0002e337   lui	t1, 46
005c04: c00008b7   lui	a7, 786432
005c08: 1fa23783   ld	a5, 506(tp)
005c0c: 010787b3   add	a5, a5, a6
005c10: 006787b3   add	a5, a5, t1
005c14: 0807a703   lw	a4, 128(a5)
005c18: 01177733   and	a4, a4, a7
005c1c: 0007071b   sext.w	a4, a4
005c20: fe0714e3   bnez	a4, -24
005c24: ec862883   lw	a7, -312(a2)
005c28: 0088d89b   srliw	a7, a7, 8
005c2c: 0018f893   andi	a7, a7, 1
005c30: 0018979b   slliw	a5, a7, 1
005c34: 0117e7b3   or	a5, a5, a7
005c38: 06f22323   sw	a5, 102(tp)
005c3c: c00057b7   lui	a5, 786437
005c40: b007879b   addiw	a5, a5, -1280
005c44: 00f22023   sw	a5, 0(tp)
005c48: 00100793   li	a5, 1
005c4c: 00f22023   sw	a5, 0(tp)
005c50: c00f17b7   lui	a5, 786673
005c54: 00f22023   sw	a5, 0(tp)
005c58: 00022023   sw	zero, 0(tp)
005c5c: 00022023   sw	zero, 0(tp)
005c60: 00022023   sw	zero, 0(tp)
005c64: 00022023   sw	zero, 0(tp)
005c68: 00022023   sw	zero, 0(tp)
005c6c: 00022023   sw	zero, 0(tp)
005c70: 00022023   sw	zero, 0(tp)
005c74: 00022023   sw	zero, 0(tp)
005c78: 00022023   sw	zero, 0(tp)
005c7c: 00022023   sw	zero, 0(tp)
005c80: 00022023   sw	zero, 0(tp)
005c84: 00022023   sw	zero, 0(tp)
005c88: 00022023   sw	zero, 0(tp)
005c8c: 00022023   sw	zero, 0(tp)
005c90: 00022023   sw	zero, 0(tp)
005c94: 00022023   sw	zero, 0(tp)
005c98: 31423783   ld	a5, 788(tp)
005c9c: 00f6f7b3   and	a5, a3, a5
005ca0: fe079ce3   bnez	a5, -8
005ca4: c00017b7   lui	a5, 786433
005ca8: e007879b   addiw	a5, a5, -512
005cac: 00f22023   sw	a5, 0(tp)
005cb0: 00020837   lui	a6, 32
005cb4: 0108979b   slliw	a5, a7, 16
005cb8: 00e80813   addi	a6, a6, 14
005cbc: 0107e7b3   or	a5, a5, a6
005cc0: 00f22023   sw	a5, 0(tp)
005cc4: c00f17b7   lui	a5, 786673
005cc8: 00f22023   sw	a5, 0(tp)
005ccc: 00022023   sw	zero, 0(tp)
005cd0: 00022023   sw	zero, 0(tp)
005cd4: 00022023   sw	zero, 0(tp)
005cd8: 00022023   sw	zero, 0(tp)
005cdc: 00022023   sw	zero, 0(tp)
005ce0: 00022023   sw	zero, 0(tp)
005ce4: 00022023   sw	zero, 0(tp)
005ce8: 00022023   sw	zero, 0(tp)
005cec: 00022023   sw	zero, 0(tp)
005cf0: 00022023   sw	zero, 0(tp)
005cf4: 00022023   sw	zero, 0(tp)
005cf8: 00022023   sw	zero, 0(tp)
005cfc: 00022023   sw	zero, 0(tp)
005d00: 00022023   sw	zero, 0(tp)
005d04: 00022023   sw	zero, 0(tp)
005d08: 00022023   sw	zero, 0(tp)
005d0c: 31423783   ld	a5, 788(tp)
005d10: 00f6f7b3   and	a5, a3, a5
005d14: fe079ce3   bnez	a5, -8
005d18: 0c026783   lwu	a5, 192(tp)
005d1c: 0117d79b   srliw	a5, a5, 17
005d20: 02078e63   beqz	a5, 60
005d24: 0017081b   addiw	a6, a4, 1
005d28: 0017f693   andi	a3, a5, 1
005d2c: 0008071b   sext.w	a4, a6
005d30: 02068263   beqz	a3, 36
005d34: 1f026683   lwu	a3, 496(tp)
005d38: 02069693   slli	a3, a3, 32
005d3c: 0206d693   srli	a3, a3, 32
005d40: 00d23e23   sd	a3, 28(tp)
005d44: 10086813   ori	a6, a6, 256
005d48: 0b0222a3   sw	a6, 165(tp)
005d4c: 31422003   lw	zero, 788(tp)
005d50: ee062623   sw	zero, -276(a2)
005d54: 0017d793   srli	a5, a5, 1
005d58: fc0796e3   bnez	a5, -52
005d5c: 1f026783   lwu	a5, 496(tp)
005d60: 02079793   slli	a5, a5, 32
005d64: 0207d793   srli	a5, a5, 32
005d68: 00f23e23   sd	a5, 28(tp)
005d6c: 0a0222a3   sw	zero, 165(tp)
005d70: 31422003   lw	zero, 788(tp)
005d74: 91162e23   sw	a7, -1764(a2)
005d78: ec862783   lw	a5, -312(a2)
005d7c: 02179793   slli	a5, a5, 33
005d80: 0217d793   srli	a5, a5, 33
005d84: ecf62423   sw	a5, -312(a2)
005d88: ec866783   lwu	a5, -312(a2)
005d8c: 00078263   beqz	a5, 4
005d90: 00f4591b   srliw	s2, s0, 15
005d94: 00197913   andi	s2, s2, 1
005d98: 060223a3   sw	zero, 103(tp)
005d9c: 0045151b   slliw	a0, a0, 4
005da0: 00259f93   slli	t6, a1, 2
005da4: 00afefb3   or	t6, t6, a0
005da8: 1fa23783   ld	a5, 506(tp)
005dac: 024f9f93   slli	t6, t6, 36
005db0: 01f787b3   add	a5, a5, t6
005db4: 0000c6b7   lui	a3, 12
005db8: 00d787b3   add	a5, a5, a3
005dbc: 3e87a783   lw	a5, 1000(a5)
005dc0: 00f7f793   andi	a5, a5, 15
005dc4: 1007e713   ori	a4, a5, 256
005dc8: 00e13423   sd	a4, 8(sp)
005dcc: 1f026783   lwu	a5, 496(tp)
005dd0: 02079793   slli	a5, a5, 32
005dd4: 0207d793   srli	a5, a5, 32
005dd8: 00f23e23   sd	a5, 28(tp)
005ddc: 0ae222a3   sw	a4, 165(tp)
005de0: 31422003   lw	zero, 788(tp)
005de4: 1fa23783   ld	a5, 506(tp)
005de8: 01f787b3   add	a5, a5, t6
005dec: 00d787b3   add	a5, a5, a3
005df0: 3787a703   lw	a4, 888(a5)
005df4: 0007071b   sext.w	a4, a4
005df8: 1fa23783   ld	a5, 506(tp)
005dfc: 01f787b3   add	a5, a5, t6
005e00: 00d787b3   add	a5, a5, a3
005e04: 37c7a783   lw	a5, 892(a5)
005e08: 00e7e633   or	a2, a5, a4
005e0c: 0007879b   sext.w	a5, a5
005e10: 00061463   bnez	a2, 8
005e14: 6510206f   j	11856
005e18: 02071713   slli	a4, a4, 32
005e1c: 02075713   srli	a4, a4, 32
005e20: 02079793   slli	a5, a5, 32
005e24: 00e7e7b3   or	a5, a5, a4
005e28: 01c7a703   lw	a4, 28(a5)
005e2c: bd018393   addi	t2, gp, -1072
005e30: 00f3b023   sd	a5, 0(t2)
005e34: 0007061b   sext.w	a2, a4
005e38: 00071c63   bnez	a4, 24
005e3c: 1fa23703   ld	a4, 506(tp)
005e40: 00ef8733   add	a4, t6, a4
005e44: 00d70733   add	a4, a4, a3
005e48: 38472603   lw	a2, 900(a4)
005e4c: 0006061b   sext.w	a2, a2
005e50: 70cba3a3   sw	a2, 1799(s7)
005e54: 1e022fa3   sw	zero, 511(tp)
005e58: 1fa23703   ld	a4, 506(tp)
005e5c: 0000c6b7   lui	a3, 12
005e60: 00ef8733   add	a4, t6, a4
005e64: 00d70733   add	a4, a4, a3
005e68: 3bc72683   lw	a3, 956(a4)
005e6c: 0007b703   ld	a4, 0(a5)
005e70: 0006869b   sext.w	a3, a3
005e74: 00d13823   sd	a3, 16(sp)
005e78: 06e239a3   sd	a4, 115(tp)
005e7c: 07323483   ld	s1, 115(tp)
005e80: 0087b703   ld	a4, 8(a5)
005e84: bc91b423   sd	s1, -1080(gp)
005e88: 06e239a3   sd	a4, 115(tp)
005e8c: 07323703   ld	a4, 115(tp)
005e90: bc018293   addi	t0, gp, -1088
005e94: 0107b683   ld	a3, 16(a5)
005e98: 00e2b023   sd	a4, 0(t0)
005e9c: 06d239a3   sd	a3, 115(tp)
005ea0: 07323503   ld	a0, 115(tp)
005ea4: 0187a783   lw	a5, 24(a5)
005ea8: bb818b13   addi	s6, gp, -1096
005eac: 10066693   ori	a3, a2, 256
005eb0: 00ab3023   sd	a0, 0(s6)
005eb4: 00d13023   sd	a3, 0(sp)
005eb8: 0007879b   sext.w	a5, a5
005ebc: 4a0486e3   beqz	s1, 3244
005ec0: 00100613   li	a2, 1
005ec4: 580784e3   beqz	a5, 3464
005ec8: 01e26783   lwu	a5, 30(tp)
005ecc: 00300693   li	a3, 3
005ed0: 0007879b   sext.w	a5, a5
005ed4: 3cd78663   beq	a5, a3, 972
005ed8: 340484e3   beqz	s1, 2888
005edc: 00100793   li	a5, 1
005ee0: 70fba4a3   sw	a5, 1801(s7)
005ee4: 1e022fa3   sw	zero, 511(tp)
005ee8: 01123783   ld	a5, 17(tp)
005eec: 00079a63   bnez	a5, 20
005ef0: 00022c23   sw	zero, 24(tp)
005ef4: 1f126783   lwu	a5, 497(tp)
005ef8: 00f22023   sw	a5, 0(tp)
005efc: 00022023   sw	zero, 0(tp)
005f00: c00367b7   lui	a5, 786486
005f04: f007869b   addiw	a3, a5, -256
005f08: 00d22023   sw	a3, 0(tp)
005f0c: 0004859b   sext.w	a1, s1
005f10: 00b22023   sw	a1, 0(tp)
005f14: 4204d693   srai	a3, s1, 32
005f18: 00d22023   sw	a3, 0(tp)
005f1c: 00022023   sw	zero, 0(tp)
005f20: 00022023   sw	zero, 0(tp)
005f24: f027879b   addiw	a5, a5, -254
005f28: 00f22023   sw	a5, 0(tp)
005f2c: 00b22023   sw	a1, 0(tp)
005f30: 00d22023   sw	a3, 0(tp)
005f34: 00022023   sw	zero, 0(tp)
005f38: 00022023   sw	zero, 0(tp)
005f3c: 01026783   lwu	a5, 16(tp)
005f40: 0007879b   sext.w	a5, a5
005f44: 00079c63   bnez	a5, 24
005f48: 00022ba3   sw	zero, 23(tp)
005f4c: c00057b7   lui	a5, 786437
005f50: 2007879b   addiw	a5, a5, 512
005f54: 00f22023   sw	a5, 0(tp)
005f58: 00022023   sw	zero, 0(tp)
005f5c: c00366b7   lui	a3, 786486
005f60: 000017b7   lui	a5, 1
005f64: 00f487b3   add	a5, s1, a5
005f68: 1006859b   addiw	a1, a3, 256
005f6c: 00b22023   sw	a1, 0(tp)
005f70: 00f22023   sw	a5, 0(tp)
005f74: 0207d793   srli	a5, a5, 32
005f78: 00f22023   sw	a5, 0(tp)
005f7c: 00022023   sw	zero, 0(tp)
005f80: 00022023   sw	zero, 0(tp)
005f84: 000027b7   lui	a5, 2
005f88: 00f487b3   add	a5, s1, a5
005f8c: e006869b   addiw	a3, a3, -512
005f90: 00d22023   sw	a3, 0(tp)
005f94: 00f22023   sw	a5, 0(tp)
005f98: 0207d793   srli	a5, a5, 32
005f9c: 00f22023   sw	a5, 0(tp)
005fa0: 00022023   sw	zero, 0(tp)
005fa4: 00022023   sw	zero, 0(tp)
005fa8: 04e23ea3   sd	a4, 93(tp)
005fac: 00500793   li	a5, 5
005fb0: 08f22ca3   sw	a5, 153(tp)
005fb4: 320618e3   bnez	a2, 2864
005fb8: 8a01ae23   sw	zero, -1860(gp)
005fbc: 8601b023   sd	zero, -1952(gp)
005fc0: 00000793   li	a5, 0
005fc4: 86818693   addi	a3, gp, -1944
005fc8: 0003b803   ld	a6, 0(t2)
005fcc: 70fba2a3   sw	a5, 1797(s7)
005fd0: 1e022fa3   sw	zero, 511(tp)
005fd4: 1d083583   ld	a1, 464(a6)
005fd8: ffff8737   lui	a4, 1048568
005fdc: 00020793   mv	a5, tp
005fe0: 00eb8733   add	a4, s7, a4
005fe4: 00058e63   beqz	a1, 28
005fe8: 1d882803   lw	a6, 472(a6)
005fec: 68b73723   sd	a1, 1678(a4)
005ff0: 1e022fa3   sw	zero, 511(tp)
005ff4: 0008059b   sext.w	a1, a6
005ff8: 68b727a3   sw	a1, 1679(a4)
005ffc: 1e022fa3   sw	zero, 511(tp)
006000: c0041737   lui	a4, 786497
006004: e007071b   addiw	a4, a4, -512
006008: 00e22023   sw	a4, 0(tp)
00600c: 01422023   sw	s4, 0(tp)
006010: 00a22023   sw	a0, 0(tp)
006014: 02055713   srli	a4, a0, 32
006018: 00e22023   sw	a4, 0(tp)
00601c: 0286b703   ld	a4, 40(a3)
006020: 1ee23a23   sd	a4, 500(tp)
006024: 00e22023   sw	a4, 0(tp)
006028: 02075593   srli	a1, a4, 32
00602c: 00b22023   sw	a1, 0(tp)
006030: 02070063   beqz	a4, 32
006034: 0306a703   lw	a4, 48(a3)
006038: 1ee22b23   sw	a4, 502(tp)
00603c: 0386a583   lw	a1, 56(a3)
006040: 1eb22ba3   sw	a1, 503(tp)
006044: 0406b683   ld	a3, 64(a3)
006048: 1ed23c23   sd	a3, 504(tp)
00604c: 90ed2c23   sw	a4, -1768(s10)
006050: 1f026703   lwu	a4, 496(tp)
006054: 02071713   slli	a4, a4, 32
006058: 02075713   srli	a4, a4, 32
00605c: 00e23e23   sd	a4, 28(tp)
006060: 00013703   ld	a4, 0(sp)
006064: 0ae222a3   sw	a4, 165(tp)
006068: 31422003   lw	zero, 788(tp)
00606c: 08061663   bnez	a2, 140
006070: a34d2683   lw	a3, -1484(s10)
006074: 00069a63   bnez	a3, 20
006078: fff00693   li	a3, -1
00607c: a2dd2c23   sw	a3, -1480(s10)
006080: 00300693   li	a3, 3
006084: a2dd2a23   sw	a3, -1484(s10)
006088: 1fa23703   ld	a4, 506(tp)
00608c: 0000c6b7   lui	a3, 12
006090: 00ef8733   add	a4, t6, a4
006094: 00d70733   add	a4, a4, a3
006098: 3b872703   lw	a4, 952(a4)
00609c: 08e22323   sw	a4, 134(tp)
0060a0: 1f026703   lwu	a4, 496(tp)
0060a4: 02071713   slli	a4, a4, 32
0060a8: 02075713   srli	a4, a4, 32
0060ac: 00e23e23   sd	a4, 28(tp)
0060b0: 0a0222a3   sw	zero, 165(tp)
0060b4: 31422003   lw	zero, 788(tp)
0060b8: 1fa23703   ld	a4, 506(tp)
0060bc: 00ef8733   add	a4, t6, a4
0060c0: 00d70733   add	a4, a4, a3
0060c4: 3e072683   lw	a3, 992(a4)
0060c8: 0146d71b   srliw	a4, a3, 20
0060cc: 00177713   andi	a4, a4, 1
0060d0: 02069693   slli	a3, a3, 32
0060d4: 0206d693   srli	a3, a3, 32
0060d8: 00070463   beqz	a4, 8
0060dc: 3580106f   j	4952
0060e0: 00400713   li	a4, 4
0060e4: 08e22ca3   sw	a4, 153(tp)
0060e8: 01013703   ld	a4, 16(sp)
0060ec: 04e22e23   sw	a4, 92(tp)
0060f0: 013787b3   add	a5, a5, s3
0060f4: c91fd06f   j	-9072
0060f8: 01226783   lwu	a5, 18(tp)
0060fc: 0007879b   sext.w	a5, a5
006100: fe079ce3   bnez	a5, -8
006104: 000037b7   lui	a5, 3
006108: ffffd637   lui	a2, 1048573
00610c: 000fa717   auipc	a4, 250
006110: 09c70713   addi	a4, a4, 156
006114: 000fa597   auipc	a1, 250
006118: 0ec58593   addi	a1, a1, 236
00611c: 00100693   li	a3, 1
006120: c0178793   addi	a5, a5, -1023
006124: 4006061b   addiw	a2, a2, 1024
006128: 0100006f   j	16
00612c: 00072783   lw	a5, 0(a4)
006130: 00472683   lw	a3, 4(a4)
006134: 00870713   addi	a4, a4, 8
006138: 00c787bb   addw	a5, a5, a2
00613c: 0027979b   slliw	a5, a5, 2
006140: 02079793   slli	a5, a5, 32
006144: 0207d793   srli	a5, a5, 32
006148: 009787b3   add	a5, a5, s1
00614c: 00f231a3   sd	a5, 3(tp)
006150: 02069793   slli	a5, a3, 32
006154: 0207d793   srli	a5, a5, 32
006158: 00f231a3   sd	a5, 3(tp)
00615c: fcb718e3   bne	a4, a1, -48
006160: 000037b7   lui	a5, 3
006164: ffffd637   lui	a2, 1048573
006168: 000fa717   auipc	a4, 250
00616c: 0a870713   addi	a4, a4, 168
006170: 000fa597   auipc	a1, 250
006174: 0e858593   addi	a1, a1, 232
006178: 00600693   li	a3, 6
00617c: e0478793   addi	a5, a5, -508
006180: 4006061b   addiw	a2, a2, 1024
006184: 00c0006f   j	12
006188: 00072783   lw	a5, 0(a4)
00618c: 00472683   lw	a3, 4(a4)
006190: 00c787bb   addw	a5, a5, a2
006194: 0027979b   slliw	a5, a5, 2
006198: 02079793   slli	a5, a5, 32
00619c: 0207d793   srli	a5, a5, 32
0061a0: 009787b3   add	a5, a5, s1
0061a4: 00f231a3   sd	a5, 3(tp)
0061a8: 02069793   slli	a5, a3, 32
0061ac: 0207d793   srli	a5, a5, 32
0061b0: 00f231a3   sd	a5, 3(tp)
0061b4: 00870713   addi	a4, a4, 8
0061b8: fcb718e3   bne	a4, a1, -48
0061bc: ffff6637   lui	a2, 1048566
0061c0: 000fa717   auipc	a4, 250
0061c4: 0a070713   addi	a4, a4, 160
0061c8: 000fa597   auipc	a1, 250
0061cc: 26858593   addi	a1, a1, 616
0061d0: 00600693   li	a3, 6
0061d4: 0000a7b7   lui	a5, 10
0061d8: 4006061b   addiw	a2, a2, 1024
0061dc: 0100006f   j	16
0061e0: 00072783   lw	a5, 0(a4)
0061e4: 00472683   lw	a3, 4(a4)
0061e8: 00870713   addi	a4, a4, 8
0061ec: 00c787bb   addw	a5, a5, a2
0061f0: 0027979b   slliw	a5, a5, 2
0061f4: 02079793   slli	a5, a5, 32
0061f8: 0207d793   srli	a5, a5, 32
0061fc: 009787b3   add	a5, a5, s1
006200: 00f231a3   sd	a5, 3(tp)
006204: 02069793   slli	a5, a3, 32
006208: 0207d793   srli	a5, a5, 32
00620c: 00f231a3   sd	a5, 3(tp)
006210: fcb718e3   bne	a4, a1, -48
006214: 0000c7b7   lui	a5, 12
006218: ffff5637   lui	a2, 1048565
00621c: 000fa717   auipc	a4, 250
006220: 47c70713   addi	a4, a4, 1148
006224: 000fa597   auipc	a1, 250
006228: 4b458593   addi	a1, a1, 1204
00622c: 00100693   li	a3, 1
006230: 24278793   addi	a5, a5, 578
006234: 8006061b   addiw	a2, a2, -2048
006238: 00c0006f   j	12
00623c: 00072783   lw	a5, 0(a4)
006240: 00472683   lw	a3, 4(a4)
006244: 00c787bb   addw	a5, a5, a2
006248: 0027979b   slliw	a5, a5, 2
00624c: 02079793   slli	a5, a5, 32
006250: 0207d793   srli	a5, a5, 32
006254: 009787b3   add	a5, a5, s1
006258: 00f231a3   sd	a5, 3(tp)
00625c: 02069793   slli	a5, a3, 32
006260: 0207d793   srli	a5, a5, 32
006264: 00f231a3   sd	a5, 3(tp)
006268: 00870713   addi	a4, a4, 8
00626c: fcb718e3   bne	a4, a1, -48
006270: 01f13423   sd	t6, 8(sp)
006274: 00a13023   sd	a0, 0(sp)
006278: 549020ef   jal	11592
00627c: 00013503   ld	a0, 0(sp)
006280: 00813f83   ld	t6, 8(sp)
006284: 00050463   beqz	a0, 8
006288: 19c0106f   j	4508
00628c: 810187b7   lui	a5, 528408
006290: 0037879b   addiw	a5, a5, 3
006294: 02f22323   sw	a5, 38(tp)
006298: 00020793   mv	a5, tp
00629c: dd5ff06f   j	-556
0062a0: c00017b7   lui	a5, 786433
0062a4: 2007879b   addiw	a5, a5, 512
0062a8: 00f22023   sw	a5, 0(tp)
0062ac: 00022023   sw	zero, 0(tp)
0062b0: 00022ba3   sw	zero, 23(tp)
0062b4: c25ff06f   j	-988
0062b8: 0055d63b   srlw	a2, a1, t0
0062bc: 00167613   andi	a2, a2, 1
0062c0: 02469693   slli	a3, a3, 36
0062c4: 00061463   bnez	a2, 8
0062c8: d81fd06f   j	-8832
0062cc: 1fa23603   ld	a2, 506(tp)
0062d0: 0000c5b7   lui	a1, 12
0062d4: 00d60633   add	a2, a2, a3
0062d8: 00b60633   add	a2, a2, a1
0062dc: 38062603   lw	a2, 896(a2)
0062e0: 00061463   bnez	a2, 8
0062e4: d65fd06f   j	-8860
0062e8: 1fa23603   ld	a2, 506(tp)
0062ec: 00d60633   add	a2, a2, a3
0062f0: 00b60633   add	a2, a2, a1
0062f4: 3ce62623   sw	a4, 972(a2)
0062f8: d51fd06f   j	-8880
0062fc: 0016de13   srli	t3, a3, 1
006300: 0056d69b   srliw	a3, a3, 5
006304: 00ce7e13   andi	t3, t3, 12
006308: 00757813   andi	a6, a0, 7
00630c: 0036f693   andi	a3, a3, 3
006310: 00de66b3   or	a3, t3, a3
006314: 00481813   slli	a6, a6, 4
006318: 00d86833   or	a6, a6, a3
00631c: 1fa23683   ld	a3, 506(tp)
006320: 02481e13   slli	t3, a6, 36
006324: 01c686b3   add	a3, a3, t3
006328: 0000d537   lui	a0, 13
00632c: 00a686b3   add	a3, a3, a0
006330: 8246ae83   lw	t4, -2012(a3)
006334: 000e8e9b   sext.w	t4, t4
006338: 1fa23683   ld	a3, 506(tp)
00633c: 01c686b3   add	a3, a3, t3
006340: 00a686b3   add	a3, a3, a0
006344: 0036151b   slliw	a0, a2, 3
006348: 8286ae03   lw	t3, -2008(a3)
00634c: 40c5053b   subw	a0, a0, a2
006350: 0035151b   slliw	a0, a0, 3
006354: 00367693   andi	a3, a2, 3
006358: 020e9e93   slli	t4, t4, 32
00635c: 02051613   slli	a2, a0, 32
006360: 020e1e13   slli	t3, t3, 32
006364: 020ede93   srli	t4, t4, 32
006368: 02065613   srli	a2, a2, 32
00636c: ff087813   andi	a6, a6, -16
006370: 01de6533   or	a0, t3, t4
006374: 00269693   slli	a3, a3, 2
006378: 47060613   addi	a2, a2, 1136
00637c: 0106e6b3   or	a3, a3, a6
006380: 00c50533   add	a0, a0, a2
006384: 00000813   li	a6, 0
006388: 0000cf37   lui	t5, 12
00638c: 00100e13   li	t3, 1
006390: 0105d63b   srlw	a2, a1, a6
006394: 00167613   andi	a2, a2, 1
006398: 07050e93   addi	t4, a0, 112
00639c: 06060463   beqz	a2, 104
0063a0: f8f6f613   andi	a2, a3, -113
0063a4: 0048169b   slliw	a3, a6, 4
0063a8: 00d66633   or	a2, a2, a3
0063ac: 00060693   mv	a3, a2
0063b0: 1fa23f83   ld	t6, 506(tp)
0063b4: 02461613   slli	a2, a2, 36
0063b8: 01f60633   add	a2, a2, t6
0063bc: 01e60633   add	a2, a2, t5
0063c0: 3e862603   lw	a2, 1000(a2)
0063c4: 0006061b   sext.w	a2, a2
0063c8: 1f026f83   lwu	t6, 496(tp)
0063cc: 020f9f93   slli	t6, t6, 32
0063d0: 020fdf93   srli	t6, t6, 32
0063d4: 01f23e23   sd	t6, 28(tp)
0063d8: 00f67613   andi	a2, a2, 15
0063dc: 10066613   ori	a2, a2, 256
0063e0: 0ac222a3   sw	a2, 165(tp)
0063e4: 31422003   lw	zero, 788(tp)
0063e8: 00052023   sw	zero, 0(a0)
0063ec: 1f026603   lwu	a2, 496(tp)
0063f0: 02061613   slli	a2, a2, 32
0063f4: 02065613   srli	a2, a2, 32
0063f8: 00c23e23   sd	a2, 28(tp)
0063fc: 0a0222a3   sw	zero, 165(tp)
006400: 31422003   lw	zero, 788(tp)
006404: 01c81463   bne	a6, t3, 8
006408: b81fd06f   j	-9344
00640c: 00100813   li	a6, 1
006410: 000e8513   mv	a0, t4
006414: f7dff06f   j	-132
006418: 0000006f   j	0
00641c: 1ee22da3   sw	a4, 507(tp)
006420: 95dfd06f   j	-9892
006424: 00056683   lwu	a3, 0(a0)
006428: 00068263   beqz	a3, 4
00642c: 1fa23683   ld	a3, 506(tp)
006430: 00d706b3   add	a3, a4, a3
006434: 011686b3   add	a3, a3, a7
006438: 20000637   lui	a2, 131072
00643c: 34c6a423   sw	a2, 840(a3)
006440: 1fa23683   ld	a3, 506(tp)
006444: 00d70733   add	a4, a4, a3
006448: 00e888b3   add	a7, a7, a4
00644c: 3488e703   lwu	a4, 840(a7)
006450: 00070263   beqz	a4, 4
006454: 060223a3   sw	zero, 103(tp)
006458: 925fd06f   j	-9948
00645c: 00100e93   li	t4, 1
006460: 07d223a3   sw	t4, 103(tp)
006464: 00006637   lui	a2, 6
006468: 0001e337   lui	t1, 30
00646c: 01c66633   or	a2, a2, t3
006470: c0430313   addi	t1, t1, -1020
006474: 0106161b   slliw	a2, a2, 16
006478: 006c8333   add	t1, s9, t1
00647c: 00036803   lwu	a6, 0(t1)
006480: 00080263   beqz	a6, 4
006484: 1fa23803   ld	a6, 506(tp)
006488: 02471713   slli	a4, a4, 36
00648c: 00e80833   add	a6, a6, a4
006490: 0000ce37   lui	t3, 12
006494: 01c80833   add	a6, a6, t3
006498: 34c82423   sw	a2, 840(a6)
00649c: 1fa23883   ld	a7, 506(tp)
0064a0: 348e0813   addi	a6, t3, 840
0064a4: 01070833   add	a6, a4, a6
0064a8: 011808b3   add	a7, a6, a7
0064ac: 0008e883   lwu	a7, 0(a7)
0064b0: 00088263   beqz	a7, 4
0064b4: ec8ca883   lw	a7, -312(s9)
0064b8: 00088f1b   sext.w	t5, a7
0064bc: 00036883   lwu	a7, 0(t1)
0064c0: 00088263   beqz	a7, 4
0064c4: 1fa23883   ld	a7, 506(tp)
0064c8: 00e888b3   add	a7, a7, a4
0064cc: 01c888b3   add	a7, a7, t3
0064d0: 20000fb7   lui	t6, 131072
0064d4: 35f8a423   sw	t6, 840(a7)
0064d8: 1fa23883   ld	a7, 506(tp)
0064dc: 011808b3   add	a7, a6, a7
0064e0: 0008e883   lwu	a7, 0(a7)
0064e4: 00088263   beqz	a7, 4
0064e8: 060223a3   sw	zero, 103(tp)
0064ec: 001f7893   andi	a7, t5, 1
0064f0: 580892e3   bnez	a7, 3460
0064f4: 1fa23683   ld	a3, 506(tp)
0064f8: 0000c637   lui	a2, 12
0064fc: 00e686b3   add	a3, a3, a4
006500: 00c686b3   add	a3, a3, a2
006504: 3806a683   lw	a3, 896(a3)
006508: 48068863   beqz	a3, 1168
00650c: acc52603   lw	a2, -1332(a0)
006510: f14026f3   csrr	a3, mhartid
006514: 00100893   li	a7, 1
006518: 0006061b   sext.w	a2, a2
00651c: 01065813   srli	a6, a2, 16
006520: 0006869b   sext.w	a3, a3
006524: 0ff87813   zext.b	a6, a6
006528: 01169463   bne	a3, a7, 8
00652c: 0186581b   srliw	a6, a2, 24
006530: 3005e593   ori	a1, a1, 768
006534: 0005859b   sext.w	a1, a1
006538: 1fa23603   ld	a2, 506(tp)
00653c: 0000c8b7   lui	a7, 12
006540: 00e60633   add	a2, a2, a4
006544: 01160633   add	a2, a2, a7
006548: 62b62023   sw	a1, 1568(a2)
00654c: 40000593   li	a1, 1024
006550: 00d595b3   sll	a1, a1, a3
006554: 0c080a63   beqz	a6, 212
006558: 1fb26683   lwu	a3, 507(tp)
00655c: 0006869b   sext.w	a3, a3
006560: 0c068463   beqz	a3, 200
006564: c00056b7   lui	a3, 786437
006568: b006869b   addiw	a3, a3, -1280
00656c: 00d22023   sw	a3, 0(tp)
006570: 00100693   li	a3, 1
006574: 00d22023   sw	a3, 0(tp)
006578: c00f16b7   lui	a3, 786673
00657c: 00d22023   sw	a3, 0(tp)
006580: 00022023   sw	zero, 0(tp)
006584: 00022023   sw	zero, 0(tp)
006588: 00022023   sw	zero, 0(tp)
00658c: 00022023   sw	zero, 0(tp)
006590: 00022023   sw	zero, 0(tp)
006594: 00022023   sw	zero, 0(tp)
006598: 00022023   sw	zero, 0(tp)
00659c: 00022023   sw	zero, 0(tp)
0065a0: 00022023   sw	zero, 0(tp)
0065a4: 00022023   sw	zero, 0(tp)
0065a8: 00022023   sw	zero, 0(tp)
0065ac: 00022023   sw	zero, 0(tp)
0065b0: 00022023   sw	zero, 0(tp)
0065b4: 00022023   sw	zero, 0(tp)
0065b8: 00022023   sw	zero, 0(tp)
0065bc: 00022023   sw	zero, 0(tp)
0065c0: 31423683   ld	a3, 788(tp)
0065c4: 00b6f6b3   and	a3, a3, a1
0065c8: fe069ce3   bnez	a3, -8
0065cc: 1fa23683   ld	a3, 506(tp)
0065d0: 0000c837   lui	a6, 12
0065d4: 00e686b3   add	a3, a3, a4
0065d8: 010686b3   add	a3, a3, a6
0065dc: 3bc6a883   lw	a7, 956(a3)
0065e0: 0008889b   sext.w	a7, a7
0065e4: 1fa23683   ld	a3, 506(tp)
0065e8: 00e686b3   add	a3, a3, a4
0065ec: 010686b3   add	a3, a3, a6
0065f0: 3c46a683   lw	a3, 964(a3)
0065f4: 00200613   li	a2, 2
0065f8: 0116163b   sllw	a2, a2, a7
0065fc: fff6061b   addiw	a2, a2, -1
006600: 00c6f6b3   and	a3, a3, a2
006604: 0006869b   sext.w	a3, a3
006608: 1fa23603   ld	a2, 506(tp)
00660c: 00e60633   add	a2, a2, a4
006610: 01060633   add	a2, a2, a6
006614: 3ad62c23   sw	a3, 952(a2)
006618: 1fa23603   ld	a2, 506(tp)
00661c: 00e60633   add	a2, a2, a4
006620: 01060633   add	a2, a2, a6
006624: 3cd62023   sw	a3, 960(a2)
006628: 1fa23603   ld	a2, 506(tp)
00662c: 0000c6b7   lui	a3, 12
006630: 00e60633   add	a2, a2, a4
006634: 00d60633   add	a2, a2, a3
006638: 3e862603   lw	a2, 1000(a2)
00663c: 0006061b   sext.w	a2, a2
006640: 1f026803   lwu	a6, 496(tp)
006644: 02081813   slli	a6, a6, 32
006648: 02085813   srli	a6, a6, 32
00664c: 01023e23   sd	a6, 28(tp)
006650: 00f67613   andi	a2, a2, 15
006654: 10066613   ori	a2, a2, 256
006658: 0ac222a3   sw	a2, 165(tp)
00665c: 31422003   lw	zero, 788(tp)
006660: 1fa23603   ld	a2, 506(tp)
006664: 00e60633   add	a2, a2, a4
006668: 00d60633   add	a2, a2, a3
00666c: 37862e03   lw	t3, 888(a2)
006670: 000e0e1b   sext.w	t3, t3
006674: 1fa23603   ld	a2, 506(tp)
006678: 00e60633   add	a2, a2, a4
00667c: 00d60633   add	a2, a2, a3
006680: 37c62803   lw	a6, 892(a2)
006684: 020e1313   slli	t1, t3, 32
006688: 02035313   srli	t1, t1, 32
00668c: 02081613   slli	a2, a6, 32
006690: 0008089b   sext.w	a7, a6
006694: 00666633   or	a2, a2, t1
006698: 1fa23803   ld	a6, 506(tp)
00669c: 00e80833   add	a6, a6, a4
0066a0: 00d80833   add	a6, a6, a3
0066a4: 3e882803   lw	a6, 1000(a6)
0066a8: 0188531b   srliw	t1, a6, 24
0066ac: 00337313   andi	t1, t1, 3
0066b0: 0008081b   sext.w	a6, a6
0066b4: 32622223   sw	t1, 804(tp)
0066b8: 21c62023   sw	t3, 512(a2)
0066bc: 21162223   sw	a7, 516(a2)
0066c0: 1fa23883   ld	a7, 506(tp)
0066c4: 00e888b3   add	a7, a7, a4
0066c8: 00d888b3   add	a7, a7, a3
0066cc: 3808a883   lw	a7, 896(a7)
0066d0: 0008889b   sext.w	a7, a7
0066d4: 21162423   sw	a7, 520(a2)
0066d8: 1fa23883   ld	a7, 506(tp)
0066dc: 00e888b3   add	a7, a7, a4
0066e0: 00d888b3   add	a7, a7, a3
0066e4: 3848a883   lw	a7, 900(a7)
0066e8: 0008889b   sext.w	a7, a7
0066ec: 21162623   sw	a7, 524(a2)
0066f0: 1fa23883   ld	a7, 506(tp)
0066f4: 00e888b3   add	a7, a7, a4
0066f8: 00d888b3   add	a7, a7, a3
0066fc: 3908a883   lw	a7, 912(a7)
006700: 0008889b   sext.w	a7, a7
006704: 21162c23   sw	a7, 536(a2)
006708: 1fa23883   ld	a7, 506(tp)
00670c: 00e888b3   add	a7, a7, a4
006710: 00d888b3   add	a7, a7, a3
006714: 3948a883   lw	a7, 916(a7)
006718: 0008889b   sext.w	a7, a7
00671c: 21162e23   sw	a7, 540(a2)
006720: 1fa23883   ld	a7, 506(tp)
006724: 00e888b3   add	a7, a7, a4
006728: 00d888b3   add	a7, a7, a3
00672c: 3988a883   lw	a7, 920(a7)
006730: 0008889b   sext.w	a7, a7
006734: 23162023   sw	a7, 544(a2)
006738: 1fa23883   ld	a7, 506(tp)
00673c: 00e888b3   add	a7, a7, a4
006740: 00d888b3   add	a7, a7, a3
006744: 39c8a883   lw	a7, 924(a7)
006748: 0008889b   sext.w	a7, a7
00674c: 23162223   sw	a7, 548(a2)
006750: 22062423   sw	zero, 552(a2)
006754: 1fa23883   ld	a7, 506(tp)
006758: 00e888b3   add	a7, a7, a4
00675c: 00d888b3   add	a7, a7, a3
006760: 3a48a883   lw	a7, 932(a7)
006764: 0008889b   sext.w	a7, a7
006768: 23162623   sw	a7, 556(a2)
00676c: 1fa23883   ld	a7, 506(tp)
006770: 00e888b3   add	a7, a7, a4
006774: 00d888b3   add	a7, a7, a3
006778: 3a88a883   lw	a7, 936(a7)
00677c: 0008889b   sext.w	a7, a7
006780: 23162823   sw	a7, 560(a2)
006784: 1fa23883   ld	a7, 506(tp)
006788: 00e888b3   add	a7, a7, a4
00678c: 00d888b3   add	a7, a7, a3
006790: 3ac8a883   lw	a7, 940(a7)
006794: 0008889b   sext.w	a7, a7
006798: 23162a23   sw	a7, 564(a2)
00679c: 1fa23883   ld	a7, 506(tp)
0067a0: 00e888b3   add	a7, a7, a4
0067a4: 00d888b3   add	a7, a7, a3
0067a8: 3b08a883   lw	a7, 944(a7)
0067ac: 0008889b   sext.w	a7, a7
0067b0: 23162c23   sw	a7, 568(a2)
0067b4: 1fa23883   ld	a7, 506(tp)
0067b8: 00e888b3   add	a7, a7, a4
0067bc: 00d888b3   add	a7, a7, a3
0067c0: 3b48a883   lw	a7, 948(a7)
0067c4: 0008889b   sext.w	a7, a7
0067c8: 23162e23   sw	a7, 572(a2)
0067cc: 1fa23883   ld	a7, 506(tp)
0067d0: 00e888b3   add	a7, a7, a4
0067d4: 00d888b3   add	a7, a7, a3
0067d8: 3b88a883   lw	a7, 952(a7)
0067dc: 0008889b   sext.w	a7, a7
0067e0: 25162023   sw	a7, 576(a2)
0067e4: 1fa23883   ld	a7, 506(tp)
0067e8: 00e888b3   add	a7, a7, a4
0067ec: 00d888b3   add	a7, a7, a3
0067f0: 3bc8a883   lw	a7, 956(a7)
0067f4: 0008889b   sext.w	a7, a7
0067f8: 25162223   sw	a7, 580(a2)
0067fc: 1fa23883   ld	a7, 506(tp)
006800: 00e888b3   add	a7, a7, a4
006804: 00d888b3   add	a7, a7, a3
006808: 3c08a883   lw	a7, 960(a7)
00680c: 0008889b   sext.w	a7, a7
006810: 25162823   sw	a7, 592(a2)
006814: 1fa23883   ld	a7, 506(tp)
006818: 00e888b3   add	a7, a7, a4
00681c: 00d888b3   add	a7, a7, a3
006820: 3c48a883   lw	a7, 964(a7)
006824: 0008889b   sext.w	a7, a7
006828: 25162a23   sw	a7, 596(a2)
00682c: 1fa23883   ld	a7, 506(tp)
006830: 00e888b3   add	a7, a7, a4
006834: 00d888b3   add	a7, a7, a3
006838: 3c88a883   lw	a7, 968(a7)
00683c: 0008889b   sext.w	a7, a7
006840: 25162c23   sw	a7, 600(a2)
006844: 1fa23883   ld	a7, 506(tp)
006848: 00e888b3   add	a7, a7, a4
00684c: 00d888b3   add	a7, a7, a3
006850: 3d08a883   lw	a7, 976(a7)
006854: 0008889b   sext.w	a7, a7
006858: 27162823   sw	a7, 624(a2)
00685c: 1fa23883   ld	a7, 506(tp)
006860: 00e888b3   add	a7, a7, a4
006864: 00d888b3   add	a7, a7, a3
006868: 3d48a883   lw	a7, 980(a7)
00686c: 0008889b   sext.w	a7, a7
006870: 27162a23   sw	a7, 628(a2)
006874: 1fa23883   ld	a7, 506(tp)
006878: 00e888b3   add	a7, a7, a4
00687c: 00d888b3   add	a7, a7, a3
006880: 3e08a883   lw	a7, 992(a7)
006884: 0008889b   sext.w	a7, a7
006888: 29162023   sw	a7, 640(a2)
00688c: 1fa23883   ld	a7, 506(tp)
006890: 00e888b3   add	a7, a7, a4
006894: 00d888b3   add	a7, a7, a3
006898: 3e48a883   lw	a7, 996(a7)
00689c: 0008889b   sext.w	a7, a7
0068a0: 29162223   sw	a7, 644(a2)
0068a4: fffff8b7   lui	a7, 1048575
0068a8: fff88893   addi	a7, a7, -1
0068ac: 01187833   and	a6, a6, a7
0068b0: 29062423   sw	a6, 648(a2)
0068b4: 1fa23803   ld	a6, 506(tp)
0068b8: 00e80833   add	a6, a6, a4
0068bc: 00d80833   add	a6, a6, a3
0068c0: 3c082223   sw	zero, 964(a6)
0068c4: 1fa23803   ld	a6, 506(tp)
0068c8: 00e80833   add	a6, a6, a4
0068cc: 00d80833   add	a6, a6, a3
0068d0: 3c082423   sw	zero, 968(a6)
0068d4: 1fa23803   ld	a6, 506(tp)
0068d8: 00e80833   add	a6, a6, a4
0068dc: 00d80833   add	a6, a6, a3
0068e0: 3c082023   sw	zero, 960(a6)
0068e4: 1fa23803   ld	a6, 506(tp)
0068e8: 00e80833   add	a6, a6, a4
0068ec: 00d806b3   add	a3, a6, a3
0068f0: 3a06a023   sw	zero, 928(a3)
0068f4: c00056b7   lui	a3, 786437
0068f8: b006869b   addiw	a3, a3, -1280
0068fc: 00d22023   sw	a3, 0(tp)
006900: 00100693   li	a3, 1
006904: 00d22023   sw	a3, 0(tp)
006908: c00f16b7   lui	a3, 786673
00690c: 00d22023   sw	a3, 0(tp)
006910: 00022023   sw	zero, 0(tp)
006914: 00022023   sw	zero, 0(tp)
006918: 00022023   sw	zero, 0(tp)
00691c: 00022023   sw	zero, 0(tp)
006920: 00022023   sw	zero, 0(tp)
006924: 00022023   sw	zero, 0(tp)
006928: 00022023   sw	zero, 0(tp)
00692c: 00022023   sw	zero, 0(tp)
006930: 00022023   sw	zero, 0(tp)
006934: 00022023   sw	zero, 0(tp)
006938: 00022023   sw	zero, 0(tp)
00693c: 00022023   sw	zero, 0(tp)
006940: 00022023   sw	zero, 0(tp)
006944: 00022023   sw	zero, 0(tp)
006948: 00022023   sw	zero, 0(tp)
00694c: 00022023   sw	zero, 0(tp)
006950: 31423683   ld	a3, 788(tp)
006954: 00b6f6b3   and	a3, a3, a1
006958: fe069ce3   bnez	a3, -8
00695c: 01226683   lwu	a3, 18(tp)
006960: 0006869b   sext.w	a3, a3
006964: fe069ce3   bnez	a3, -8
006968: 20062423   sw	zero, 520(a2)
00696c: 1fa23683   ld	a3, 506(tp)
006970: 0000c637   lui	a2, 12
006974: 00e686b3   add	a3, a3, a4
006978: 00c686b3   add	a3, a3, a2
00697c: 3806a023   sw	zero, 896(a3)
006980: 1f026683   lwu	a3, 496(tp)
006984: 02069693   slli	a3, a3, 32
006988: 0206d693   srli	a3, a3, 32
00698c: 00d23e23   sd	a3, 28(tp)
006990: 0a0222a3   sw	zero, 165(tp)
006994: 31422003   lw	zero, 788(tp)
006998: 1fa23683   ld	a3, 506(tp)
00699c: 00e68733   add	a4, a3, a4
0069a0: 0000c6b7   lui	a3, 12
0069a4: 00d70733   add	a4, a4, a3
0069a8: 3c072623   sw	zero, 972(a4)
0069ac: 1fb26703   lwu	a4, 507(tp)
0069b0: 0007071b   sext.w	a4, a4
0069b4: 00071463   bnez	a4, 8
0069b8: bc4fd06f   j	-11324
0069bc: 00100713   li	a4, 1
0069c0: 02e22823   sw	a4, 48(tp)
0069c4: 02026703   lwu	a4, 32(tp)
0069c8: 00277713   andi	a4, a4, 2
0069cc: fe070ce3   beqz	a4, -8
0069d0: acc52703   lw	a4, -1332(a0)
0069d4: 0007071b   sext.w	a4, a4
0069d8: 04e12823   sw	a4, 80(sp)
0069dc: 05012703   lw	a4, 80(sp)
0069e0: 00071463   bnez	a4, 8
0069e4: f74fe06f   j	-6284
0069e8: f1402773   csrr	a4, mhartid
0069ec: 00100693   li	a3, 1
0069f0: 0007071b   sext.w	a4, a4
0069f4: 74d702e3   beq	a4, a3, 3908
0069f8: 04010923   sb	zero, 82(sp)
0069fc: 05214703   lbu	a4, 82(sp)
006a00: 00071863   bnez	a4, 16
006a04: 05314703   lbu	a4, 83(sp)
006a08: 00071463   bnez	a4, 8
006a0c: 04012823   sw	zero, 80(sp)
006a10: 05012703   lw	a4, 80(sp)
006a14: 0007071b   sext.w	a4, a4
006a18: ace52623   sw	a4, -1332(a0)
006a1c: f3cfe06f   j	-6340
006a20: ffe00793   li	a5, -2
006a24: 02f232a3   sd	a5, 37(tp)
006a28: 00300793   li	a5, 3
006a2c: 02f231a3   sd	a5, 35(tp)
006a30: d78ff06f   j	-2696
006a34: 1fa23783   ld	a5, 506(tp)
006a38: 00fa07b3   add	a5, s4, a5
006a3c: 00c787b3   add	a5, a5, a2
006a40: 3b47a783   lw	a5, 948(a5)
006a44: 0007861b   sext.w	a2, a5
006a48: 0a923803   ld	a6, 169(tp)
006a4c: f14028f3   csrr	a7, mhartid
006a50: 02323303   ld	t1, 35(tp)
006a54: f14027f3   csrr	a5, mhartid
006a58: 0007879b   sext.w	a5, a5
006a5c: 000786e3   beqz	a5, 2060
006a60: 10000e37   lui	t3, 65536
006a64: 00c00513   li	a0, 12
006a68: 0aa22323   sw	a0, 166(tp)
006a6c: 02126783   lwu	a5, 33(tp)
006a70: 0007879b   sext.w	a5, a5
006a74: 0180006f   j	24
006a78: 02126783   lwu	a5, 33(tp)
006a7c: 0007879b   sext.w	a5, a5
006a80: 07423583   ld	a1, 116(tp)
006a84: 00058463   beqz	a1, 8
006a88: f4dfd06f   j	-8372
006a8c: 01c7f7b3   and	a5, a5, t3
006a90: fe0784e3   beqz	a5, -24
006a94: 0af26783   lwu	a5, 175(tp)
006a98: 0107f793   andi	a5, a5, 16
006a9c: fe079ce3   bnez	a5, -8
006aa0: 02461793   slli	a5, a2, 36
006aa4: 01575713   srli	a4, a4, 21
006aa8: 03e71713   slli	a4, a4, 62
006aac: 0267d793   srli	a5, a5, 38
006ab0: 00e7e7b3   or	a5, a5, a4
006ab4: 03031313   slli	t1, t1, 48
006ab8: 0067e7b3   or	a5, a5, t1
006abc: 03489893   slli	a7, a7, 52
006ac0: 0117e7b3   or	a5, a5, a7
006ac4: 03681813   slli	a6, a6, 54
006ac8: 00500713   li	a4, 5
006acc: 0107e7b3   or	a5, a5, a6
006ad0: 03b71713   slli	a4, a4, 59
006ad4: 00e7e7b3   or	a5, a5, a4
006ad8: 0af23123   sd	a5, 162(tp)
006adc: 0aa223a3   sw	a0, 167(tp)
006ae0: ef5fd06f   j	-8460
006ae4: 02a13423   sd	a0, 40(sp)
006ae8: 03f13023   sd	t6, 32(sp)
006aec: 00c13c23   sd	a2, 24(sp)
006af0: 460020ef   jal	9312
006af4: 1f026783   lwu	a5, 496(tp)
006af8: 02079793   slli	a5, a5, 32
006afc: 0207d793   srli	a5, a5, 32
006b00: 00f23e23   sd	a5, 28(tp)
006b04: 00013783   ld	a5, 0(sp)
006b08: 0af222a3   sw	a5, 165(tp)
006b0c: 31422003   lw	zero, 788(tp)
006b10: 468020ef   jal	9320
006b14: 1f026783   lwu	a5, 496(tp)
006b18: 02079793   slli	a5, a5, 32
006b1c: 0207d793   srli	a5, a5, 32
006b20: 00f23e23   sd	a5, 28(tp)
006b24: 00813783   ld	a5, 8(sp)
006b28: 0af222a3   sw	a5, 165(tp)
006b2c: 31422003   lw	zero, 788(tp)
006b30: c00017b7   lui	a5, 786433
006b34: 2007879b   addiw	a5, a5, 512
006b38: 00f22023   sw	a5, 0(tp)
006b3c: 00022023   sw	zero, 0(tp)
006b40: 00022ba3   sw	zero, 23(tp)
006b44: 86818693   addi	a3, gp, -1944
006b48: 0546a783   lw	a5, 84(a3)
006b4c: 01813603   ld	a2, 24(sp)
006b50: 02013f83   ld	t6, 32(sp)
006b54: 02813503   ld	a0, 40(sp)
006b58: bd018393   addi	t2, gp, -1072
006b5c: c6cff06f   j	-2964
006b60: 040101a3   sb	zero, 67(sp)
006b64: dd4fe06f   j	-6700
006b68: 01f13c23   sd	t6, 24(sp)
006b6c: 80000a37   lui	s4, 524288
006b70: 100020ef   jal	8448
006b74: 01446a33   or	s4, s0, s4
006b78: bc018293   addi	t0, gp, -1088
006b7c: 000b3503   ld	a0, 0(s6)
006b80: 0002b703   ld	a4, 0(t0)
006b84: 01813f83   ld	t6, 24(sp)
006b88: 000a0a1b   sext.w	s4, s4
006b8c: 00000613   li	a2, 0
006b90: bd018393   addi	t2, gp, -1072
006b94: b34ff06f   j	-3276
006b98: c0005737   lui	a4, 786437
006b9c: b007071b   addiw	a4, a4, -1280
006ba0: 00e22023   sw	a4, 0(tp)
006ba4: 00100713   li	a4, 1
006ba8: 00e22023   sw	a4, 0(tp)
006bac: c00f1737   lui	a4, 786673
006bb0: 00e22023   sw	a4, 0(tp)
006bb4: 00022023   sw	zero, 0(tp)
006bb8: 00022023   sw	zero, 0(tp)
006bbc: 00022023   sw	zero, 0(tp)
006bc0: 00022023   sw	zero, 0(tp)
006bc4: 00022023   sw	zero, 0(tp)
006bc8: 00022023   sw	zero, 0(tp)
006bcc: 00022023   sw	zero, 0(tp)
006bd0: 00022023   sw	zero, 0(tp)
006bd4: 00022023   sw	zero, 0(tp)
006bd8: 00022023   sw	zero, 0(tp)
006bdc: 00022023   sw	zero, 0(tp)
006be0: 00022023   sw	zero, 0(tp)
006be4: 00022023   sw	zero, 0(tp)
006be8: 00022023   sw	zero, 0(tp)
006bec: 00022023   sw	zero, 0(tp)
006bf0: 00022023   sw	zero, 0(tp)
006bf4: 40000693   li	a3, 1024
006bf8: 00c696b3   sll	a3, a3, a2
006bfc: 31423703   ld	a4, 788(tp)
006c00: 00e6f733   and	a4, a3, a4
006c04: fe071ce3   bnez	a4, -8
006c08: 04226703   lwu	a4, 66(tp)
006c0c: 00100693   li	a3, 1
006c10: 06d223a3   sw	a3, 103(tp)
006c14: 400006b7   lui	a3, 262144
006c18: 00d76733   or	a4, a4, a3
006c1c: 0007071b   sext.w	a4, a4
006c20: 000c8593   mv	a1, s9
006c24: eeeca823   sw	a4, -272(s9)
006c28: c0000637   lui	a2, 786432
006c2c: 400006b7   lui	a3, 262144
006c30: 04226703   lwu	a4, 66(tp)
006c34: 00c77733   and	a4, a4, a2
006c38: 0007071b   sext.w	a4, a4
006c3c: fed71ae3   bne	a4, a3, -12
006c40: ed4fe06f   j	-6444
006c44: 02010da3   sb	zero, 59(sp)
006c48: c60fd06f   j	-11168
006c4c: 80000a37   lui	s4, 524288
006c50: 01446a33   or	s4, s0, s4
006c54: 01f13c23   sd	t6, 24(sp)
006c58: 000a0a1b   sext.w	s4, s4
006c5c: 014020ef   jal	8212
006c60: 1f026783   lwu	a5, 496(tp)
006c64: 02079793   slli	a5, a5, 32
006c68: 0207d793   srli	a5, a5, 32
006c6c: 00f23e23   sd	a5, 28(tp)
006c70: 00013783   ld	a5, 0(sp)
006c74: 0af222a3   sw	a5, 165(tp)
006c78: 31422003   lw	zero, 788(tp)
006c7c: 01813f83   ld	t6, 24(sp)
006c80: 000f9897   auipc	a7, 249
006c84: 52088893   addi	a7, a7, 1312
006c88: ffffdeb7   lui	t4, 1048573
006c8c: 00003337   lui	t1, 3
006c90: 00088e13   mv	t3, a7
006c94: 000f9f17   auipc	t5, 249
006c98: 56cf0f13   addi	t5, t5, 1388
006c9c: 00100793   li	a5, 1
006ca0: 00000593   li	a1, 0
006ca4: 400e8e9b   addiw	t4, t4, 1024
006ca8: c003031b   addiw	t1, t1, -1024
006cac: bc018293   addi	t0, gp, -1088
006cb0: bd018393   addi	t2, gp, -1072
006cb4: 04078a63   beqz	a5, 84
006cb8: 000e2703   lw	a4, 0(t3)
006cbc: 01d7883b   addw	a6, a5, t4
006cc0: 00e8083b   addw	a6, a6, a4
006cc4: 00ee87bb   addw	a5, t4, a4
006cc8: 0100006f   j	16
006ccc: 00062023   sw	zero, 0(a2)
006cd0: 0017879b   addiw	a5, a5, 1
006cd4: 02f80a63   beq	a6, a5, 52
006cd8: 00359713   slli	a4, a1, 3
006cdc: 00e88733   add	a4, a7, a4
006ce0: 06072503   lw	a0, 96(a4)
006ce4: 02079693   slli	a3, a5, 32
006ce8: 01e6d613   srli	a2, a3, 30
006cec: 00f306bb   addw	a3, t1, a5
006cf0: 00c48633   add	a2, s1, a2
006cf4: fca69ce3   bne	a3, a0, -40
006cf8: 06472703   lw	a4, 100(a4)
006cfc: 00158593   addi	a1, a1, 1
006d00: 00e62023   sw	a4, 0(a2)
006d04: fcdff06f   j	-52
006d08: 008e0e13   addi	t3, t3, 8
006d0c: 01cf0663   beq	t5, t3, 12
006d10: 004e2783   lw	a5, 4(t3)
006d14: fa1ff06f   j	-96
006d18: ffffdeb7   lui	t4, 1048573
006d1c: 00003337   lui	t1, 3
006d20: 000f9e17   auipc	t3, 249
006d24: 4f0e0e13   addi	t3, t3, 1264
006d28: 000f9f17   auipc	t5, 249
006d2c: 530f0f13   addi	t5, t5, 1328
006d30: 00600793   li	a5, 6
006d34: 400e8e9b   addiw	t4, t4, 1024
006d38: c003031b   addiw	t1, t1, -1024
006d3c: 04078a63   beqz	a5, 84
006d40: 000e2703   lw	a4, 0(t3)
006d44: 01d7883b   addw	a6, a5, t4
006d48: 00e8083b   addw	a6, a6, a4
006d4c: 00ee87bb   addw	a5, t4, a4
006d50: 0100006f   j	16
006d54: 0006a023   sw	zero, 0(a3)
006d58: 0017879b   addiw	a5, a5, 1
006d5c: 02f80a63   beq	a6, a5, 52
006d60: 00359713   slli	a4, a1, 3
006d64: 00e88733   add	a4, a7, a4
006d68: 06072503   lw	a0, 96(a4)
006d6c: 02079613   slli	a2, a5, 32
006d70: 01e65693   srli	a3, a2, 30
006d74: 00f3063b   addw	a2, t1, a5
006d78: 00d486b3   add	a3, s1, a3
006d7c: fcc51ce3   bne	a0, a2, -40
006d80: 06472703   lw	a4, 100(a4)
006d84: 00158593   addi	a1, a1, 1
006d88: 00e6a023   sw	a4, 0(a3)
006d8c: fcdff06f   j	-52
006d90: 008e0e13   addi	t3, t3, 8
006d94: 01cf0663   beq	t5, t3, 12
006d98: 004e2783   lw	a5, 4(t3)
006d9c: fa1ff06f   j	-96
006da0: 000f9e97   auipc	t4, 249
006da4: 4b8e8e93   addi	t4, t4, 1208
006da8: 000f9417   auipc	s0, 249
006dac: 68840413   addi	s0, s0, 1672
006db0: 00600513   li	a0, 6
006db4: 00000813   li	a6, 0
006db8: ffff6f37   lui	t5, 1048566
006dbc: 00001e37   lui	t3, 1
006dc0: 0000a337   lui	t1, 10
006dc4: 04050e63   beqz	a0, 92
006dc8: 000ea783   lw	a5, 0(t4)
006dcc: 00af053b   addw	a0, t5, a0
006dd0: 00ff073b   addw	a4, t5, a5
006dd4: 00f5053b   addw	a0, a0, a5
006dd8: 0100006f   j	16
006ddc: 0007a023   sw	zero, 0(a5)
006de0: 0017071b   addiw	a4, a4, 1
006de4: 02e50e63   beq	a0, a4, 60
006de8: 00381693   slli	a3, a6, 3
006dec: 00d886b3   add	a3, a7, a3
006df0: 02071613   slli	a2, a4, 32
006df4: 2906a583   lw	a1, 656(a3)
006df8: 01e65793   srli	a5, a2, 30
006dfc: 01c787b3   add	a5, a5, t3
006e00: 00e3063b   addw	a2, t1, a4
006e04: 00f487b3   add	a5, s1, a5
006e08: fcc59ae3   bne	a1, a2, -44
006e0c: 2946a683   lw	a3, 660(a3)
006e10: 0017071b   addiw	a4, a4, 1
006e14: 00180813   addi	a6, a6, 1
006e18: 00d7a023   sw	a3, 0(a5)
006e1c: fce516e3   bne	a0, a4, -52
006e20: 008e8e93   addi	t4, t4, 8
006e24: 01d40663   beq	s0, t4, 12
006e28: 004ea503   lw	a0, 4(t4)
006e2c: f99ff06f   j	-104
006e30: 000fae17   auipc	t3, 250
006e34: 868e0e13   addi	t3, t3, -1944
006e38: 000faf17   auipc	t5, 250
006e3c: 8a0f0f13   addi	t5, t5, -1888
006e40: 00100793   li	a5, 1
006e44: 00000593   li	a1, 0
006e48: ffff4eb7   lui	t4, 1048564
006e4c: 000fa317   auipc	t1, 250
006e50: 2b430313   addi	t1, t1, 692
006e54: 000028b7   lui	a7, 2
006e58: 0000c837   lui	a6, 12
006e5c: 04078463   beqz	a5, 72
006e60: 000e2683   lw	a3, 0(t3)
006e64: 00fe87bb   addw	a5, t4, a5
006e68: 00de873b   addw	a4, t4, a3
006e6c: 00d7863b   addw	a2, a5, a3
006e70: 00359793   slli	a5, a1, 3
006e74: 00f307b3   add	a5, t1, a5
006e78: 02071513   slli	a0, a4, 32
006e7c: 0007a683   lw	a3, 0(a5)
006e80: 01e55793   srli	a5, a0, 30
006e84: 011787b3   add	a5, a5, a7
006e88: 00f487b3   add	a5, s1, a5
006e8c: 00e8053b   addw	a0, a6, a4
006e90: 0007a023   sw	zero, 0(a5)
006e94: 00a69463   bne	a3, a0, 8
006e98: 00158593   addi	a1, a1, 1
006e9c: 0017071b   addiw	a4, a4, 1
006ea0: fce618e3   bne	a2, a4, -48
006ea4: 008e0e13   addi	t3, t3, 8
006ea8: 01cf0663   beq	t5, t3, 12
006eac: 004e2783   lw	a5, 4(t3)
006eb0: fadff06f   j	-84
006eb4: 1f026783   lwu	a5, 496(tp)
006eb8: 02079793   slli	a5, a5, 32
006ebc: 0207d793   srli	a5, a5, 32
006ec0: 00f23e23   sd	a5, 28(tp)
006ec4: 00813783   ld	a5, 8(sp)
006ec8: 0af222a3   sw	a5, 165(tp)
006ecc: 31422003   lw	zero, 788(tp)
006ed0: 0003b783   ld	a5, 0(t2)
006ed4: 00100693   li	a3, 1
006ed8: 000b3503   ld	a0, 0(s6)
006edc: 0002b703   ld	a4, 0(t0)
006ee0: 00d7ac23   sw	a3, 24(a5)
006ee4: 00000613   li	a2, 0
006ee8: fe1fe06f   j	-4128
006eec: ec8ca783   lw	a5, -312(s9)
006ef0: 0007861b   sext.w	a2, a5
006ef4: 01523583   ld	a1, 21(tp)
006ef8: 0035f593   andi	a1, a1, 3
006efc: 00b20733   add	a4, tp, a1
006f00: 00b76503   lwu	a0, 11(a4)
006f04: 04158593   addi	a1, a1, 65
006f08: 00b207b3   add	a5, tp, a1
006f0c: 0117a023   sw	a7, 0(a5)
006f10: 01323783   ld	a5, 19(tp)
006f14: fe079ee3   bnez	a5, -4
006f18: ebc6b783   ld	a5, -324(a3)
006f1c: 00c7d713   srli	a4, a5, 12
006f20: 00377713   andi	a4, a4, 3
006f24: 02070a63   beqz	a4, 52
006f28: 07f00693   li	a3, 127
006f2c: b0002773   csrr	a4, mcycle
006f30: 00000013   nop
006f34: b00027f3   csrr	a5, mcycle
006f38: 40e787b3   sub	a5, a5, a4
006f3c: fef6fae3   bgeu	a3, a5, -12
006f40: ebcca783   lw	a5, -324(s9)
006f44: 00c7d71b   srliw	a4, a5, 12
006f48: 00377713   andi	a4, a4, 3
006f4c: 02079793   slli	a5, a5, 32
006f50: 0207d793   srli	a5, a5, 32
006f54: fc071ce3   bnez	a4, -40
006f58: 0017f793   andi	a5, a5, 1
006f5c: 00078463   beqz	a5, 8
006f60: ea0cae23   sw	zero, -324(s9)
006f64: 00b205b3   add	a1, tp, a1
006f68: 00a5a023   sw	a0, 0(a1)
006f6c: 0086579b   srliw	a5, a2, 8
006f70: 80000737   lui	a4, 524288
006f74: 0017f793   andi	a5, a5, 1
006f78: 00e7e7b3   or	a5, a5, a4
006f7c: 1fa23683   ld	a3, 506(tp)
006f80: 00100713   li	a4, 1
006f84: 02471713   slli	a4, a4, 36
006f88: 0002e637   lui	a2, 46
006f8c: 00e686b3   add	a3, a3, a4
006f90: 00c686b3   add	a3, a3, a2
006f94: 08f6a023   sw	a5, 128(a3)
006f98: 0002e5b7   lui	a1, 46
006f9c: c0000637   lui	a2, 786432
006fa0: c00006b7   lui	a3, 786432
006fa4: 1fa23783   ld	a5, 506(tp)
006fa8: 00e787b3   add	a5, a5, a4
006fac: 00b787b3   add	a5, a5, a1
006fb0: 0807a783   lw	a5, 128(a5)
006fb4: 00c7f7b3   and	a5, a5, a2
006fb8: 0007879b   sext.w	a5, a5
006fbc: fed794e3   bne	a5, a3, -24
006fc0: c00057b7   lui	a5, 786437
006fc4: b007879b   addiw	a5, a5, -1280
006fc8: 00f22023   sw	a5, 0(tp)
006fcc: 00100793   li	a5, 1
006fd0: 00f22023   sw	a5, 0(tp)
006fd4: c00f17b7   lui	a5, 786673
006fd8: 00f22023   sw	a5, 0(tp)
006fdc: 00022023   sw	zero, 0(tp)
006fe0: 00022023   sw	zero, 0(tp)
006fe4: 00022023   sw	zero, 0(tp)
006fe8: 00022023   sw	zero, 0(tp)
006fec: 00022023   sw	zero, 0(tp)
006ff0: 00022023   sw	zero, 0(tp)
006ff4: 00022023   sw	zero, 0(tp)
006ff8: 00022023   sw	zero, 0(tp)
006ffc: 00022023   sw	zero, 0(tp)
007000: 00022023   sw	zero, 0(tp)
007004: 00022023   sw	zero, 0(tp)
007008: 00022023   sw	zero, 0(tp)
00700c: 00022023   sw	zero, 0(tp)
007010: 00022023   sw	zero, 0(tp)
007014: 00022023   sw	zero, 0(tp)
007018: 00022023   sw	zero, 0(tp)
00701c: 40000613   li	a2, 1024
007020: f14027f3   csrr	a5, mhartid
007024: 0007871b   sext.w	a4, a5
007028: 00f61633   sll	a2, a2, a5
00702c: 31423783   ld	a5, 788(tp)
007030: 00c7f7b3   and	a5, a5, a2
007034: fe079ce3   bnez	a5, -8
007038: 04226783   lwu	a5, 66(tp)
00703c: fff74713   not	a4, a4
007040: 00177713   andi	a4, a4, 1
007044: 0047171b   slliw	a4, a4, 4
007048: 00e7e733   or	a4, a5, a4
00704c: 0ff77713   zext.b	a4, a4
007050: f007f793   andi	a5, a5, -256
007054: 00e7e7b3   or	a5, a5, a4
007058: 7fff0737   lui	a4, 524272
00705c: 0ff70713   addi	a4, a4, 255
007060: 00e7f7b3   and	a5, a5, a4
007064: 80000737   lui	a4, 524288
007068: 10070713   addi	a4, a4, 256
00706c: 00e7e7b3   or	a5, a5, a4
007070: 0007879b   sext.w	a5, a5
007074: 000c8693   mv	a3, s9
007078: eefca823   sw	a5, -272(s9)
00707c: c0000537   lui	a0, 786432
007080: c00005b7   lui	a1, 786432
007084: 04226703   lwu	a4, 66(tp)
007088: 00a777b3   and	a5, a4, a0
00708c: 0007879b   sext.w	a5, a5
007090: feb79ae3   bne	a5, a1, -12
007094: 02171793   slli	a5, a4, 33
007098: 0217d793   srli	a5, a5, 33
00709c: eef6a823   sw	a5, -272(a3)
0070a0: 04226783   lwu	a5, 66(tp)
0070a4: 0007879b   sext.w	a5, a5
0070a8: fe079ce3   bnez	a5, -8
0070ac: 06022423   sw	zero, 104(tp)
0070b0: 1fa23783   ld	a5, 506(tp)
0070b4: 00100713   li	a4, 1
0070b8: 02471713   slli	a4, a4, 36
0070bc: 00e787b3   add	a5, a5, a4
0070c0: 0002e537   lui	a0, 46
0070c4: 00a787b3   add	a5, a5, a0
0070c8: 0807a583   lw	a1, 128(a5)
0070cc: 02159593   slli	a1, a1, 33
0070d0: 0215d593   srli	a1, a1, 33
0070d4: 1fa23783   ld	a5, 506(tp)
0070d8: 00e787b3   add	a5, a5, a4
0070dc: 00a787b3   add	a5, a5, a0
0070e0: 08b7a023   sw	a1, 128(a5)
0070e4: c00005b7   lui	a1, 786432
0070e8: 1fa23783   ld	a5, 506(tp)
0070ec: 00e787b3   add	a5, a5, a4
0070f0: 00a787b3   add	a5, a5, a0
0070f4: 0807a783   lw	a5, 128(a5)
0070f8: 00b7f7b3   and	a5, a5, a1
0070fc: 0007879b   sext.w	a5, a5
007100: fe0794e3   bnez	a5, -24
007104: ec86a503   lw	a0, -312(a3)
007108: 0085551b   srliw	a0, a0, 8
00710c: 00157513   andi	a0, a0, 1
007110: 0015171b   slliw	a4, a0, 1
007114: 00a76733   or	a4, a4, a0
007118: 06e22323   sw	a4, 102(tp)
00711c: c0005737   lui	a4, 786437
007120: b007071b   addiw	a4, a4, -1280
007124: 00e22023   sw	a4, 0(tp)
007128: 00100713   li	a4, 1
00712c: 00e22023   sw	a4, 0(tp)
007130: c00f1737   lui	a4, 786673
007134: 00e22023   sw	a4, 0(tp)
007138: 00022023   sw	zero, 0(tp)
00713c: 00022023   sw	zero, 0(tp)
007140: 00022023   sw	zero, 0(tp)
007144: 00022023   sw	zero, 0(tp)
007148: 00022023   sw	zero, 0(tp)
00714c: 00022023   sw	zero, 0(tp)
007150: 00022023   sw	zero, 0(tp)
007154: 00022023   sw	zero, 0(tp)
007158: 00022023   sw	zero, 0(tp)
00715c: 00022023   sw	zero, 0(tp)
007160: 00022023   sw	zero, 0(tp)
007164: 00022023   sw	zero, 0(tp)
007168: 00022023   sw	zero, 0(tp)
00716c: 00022023   sw	zero, 0(tp)
007170: 00022023   sw	zero, 0(tp)
007174: 00022023   sw	zero, 0(tp)
007178: 31423703   ld	a4, 788(tp)
00717c: 00e67733   and	a4, a2, a4
007180: fe071ce3   bnez	a4, -8
007184: c0001737   lui	a4, 786433
007188: e007071b   addiw	a4, a4, -512
00718c: 00e22023   sw	a4, 0(tp)
007190: 000205b7   lui	a1, 32
007194: 0105171b   slliw	a4, a0, 16
007198: 00e58593   addi	a1, a1, 14
00719c: 00b76733   or	a4, a4, a1
0071a0: 00e22023   sw	a4, 0(tp)
0071a4: c00f1737   lui	a4, 786673
0071a8: 00e22023   sw	a4, 0(tp)
0071ac: 00022023   sw	zero, 0(tp)
0071b0: 00022023   sw	zero, 0(tp)
0071b4: 00022023   sw	zero, 0(tp)
0071b8: 00022023   sw	zero, 0(tp)
0071bc: 00022023   sw	zero, 0(tp)
0071c0: 00022023   sw	zero, 0(tp)
0071c4: 00022023   sw	zero, 0(tp)
0071c8: 00022023   sw	zero, 0(tp)
0071cc: 00022023   sw	zero, 0(tp)
0071d0: 00022023   sw	zero, 0(tp)
0071d4: 00022023   sw	zero, 0(tp)
0071d8: 00022023   sw	zero, 0(tp)
0071dc: 00022023   sw	zero, 0(tp)
0071e0: 00022023   sw	zero, 0(tp)
0071e4: 00022023   sw	zero, 0(tp)
0071e8: 00022023   sw	zero, 0(tp)
0071ec: 31423703   ld	a4, 788(tp)
0071f0: 00e67733   and	a4, a2, a4
0071f4: fe071ce3   bnez	a4, -8
0071f8: 0c026703   lwu	a4, 192(tp)
0071fc: 0117571b   srliw	a4, a4, 17
007200: 02070e63   beqz	a4, 60
007204: 0017861b   addiw	a2, a5, 1
007208: 00177593   andi	a1, a4, 1
00720c: 0006079b   sext.w	a5, a2
007210: 02058263   beqz	a1, 36
007214: 1f026583   lwu	a1, 496(tp)
007218: 02059593   slli	a1, a1, 32
00721c: 0205d593   srli	a1, a1, 32
007220: 00b23e23   sd	a1, 28(tp)
007224: 10066613   ori	a2, a2, 256
007228: 0ac222a3   sw	a2, 165(tp)
00722c: 31422003   lw	zero, 788(tp)
007230: ee06a623   sw	zero, -276(a3)
007234: 00175713   srli	a4, a4, 1
007238: fc0716e3   bnez	a4, -52
00723c: 1f026783   lwu	a5, 496(tp)
007240: 02079793   slli	a5, a5, 32
007244: 0207d793   srli	a5, a5, 32
007248: 00f23e23   sd	a5, 28(tp)
00724c: 0a0222a3   sw	zero, 165(tp)
007250: 31422003   lw	zero, 788(tp)
007254: 90a6ae23   sw	a0, -1764(a3)
007258: ec06a423   sw	zero, -312(a3)
00725c: ec86e783   lwu	a5, -312(a3)
007260: 00078263   beqz	a5, 4
007264: d2cfd06f   j	-10964
007268: 08000e37   lui	t3, 32768
00726c: 00b00513   li	a0, 11
007270: ff8ff06f   j	-2056
007274: b7c18893   addi	a7, gp, -1156
007278: 0008af03   lw	t5, 0(a7)
00727c: a60f0c63   beqz	t5, -3464
007280: 07d22523   sw	t4, 106(tp)
007284: 1fa23783   ld	a5, 506(tp)
007288: 00e787b3   add	a5, a5, a4
00728c: 01c787b3   add	a5, a5, t3
007290: 3c07ac23   sw	zero, 984(a5)
007294: 1e022fa3   sw	zero, 511(tp)
007298: 1e022fa3   sw	zero, 511(tp)
00729c: 1e022fa3   sw	zero, 511(tp)
0072a0: 1e022fa3   sw	zero, 511(tp)
0072a4: 1e022fa3   sw	zero, 511(tp)
0072a8: 1e022fa3   sw	zero, 511(tp)
0072ac: 1e022fa3   sw	zero, 511(tp)
0072b0: 1e022fa3   sw	zero, 511(tp)
0072b4: 07d223a3   sw	t4, 103(tp)
0072b8: 00036783   lwu	a5, 0(t1)
0072bc: 00078263   beqz	a5, 4
0072c0: 1fa23783   ld	a5, 506(tp)
0072c4: 00f707b3   add	a5, a4, a5
0072c8: 01c787b3   add	a5, a5, t3
0072cc: 34c7a423   sw	a2, 840(a5)
0072d0: 1fa23783   ld	a5, 506(tp)
0072d4: 00f807b3   add	a5, a6, a5
0072d8: 0007e783   lwu	a5, 0(a5)
0072dc: 00078263   beqz	a5, 4
0072e0: ec8ca783   lw	a5, -312(s9)
0072e4: 80000637   lui	a2, 524288
0072e8: 00160613   addi	a2, a2, 1
0072ec: 00c7f333   and	t1, a5, a2
0072f0: 0003031b   sext.w	t1, t1
0072f4: 0007879b   sext.w	a5, a5
0072f8: 0ec31063   bne	t1, a2, 224
0072fc: 01e7d793   srli	a5, a5, 30
007300: 0017f793   andi	a5, a5, 1
007304: 34079ee3   bnez	a5, 2908
007308: ec852783   lw	a5, -312(a0)
00730c: 0027d69b   srliw	a3, a5, 2
007310: 0036f693   andi	a3, a3, 3
007314: 0007879b   sext.w	a5, a5
007318: 02069263   bnez	a3, 36
00731c: 96452683   lw	a3, -1692(a0)
007320: 01c6d693   srli	a3, a3, 28
007324: 0016f693   andi	a3, a3, 1
007328: 00068a63   beqz	a3, 20
00732c: 00c7e793   ori	a5, a5, 12
007330: ecf52423   sw	a5, -312(a0)
007334: ec856783   lwu	a5, -312(a0)
007338: 00078263   beqz	a5, 4
00733c: ac052783   lw	a5, -1344(a0)
007340: 800006b7   lui	a3, 524288
007344: 0008a603   lw	a2, 0(a7)
007348: 50068693   addi	a3, a3, 1280
00734c: 0ff7f793   zext.b	a5, a5
007350: 00d7e7b3   or	a5, a5, a3
007354: 00078693   mv	a3, a5
007358: 00060463   beqz	a2, 8
00735c: 1007c693   xori	a3, a5, 256
007360: 1fa23783   ld	a5, 506(tp)
007364: 0000c637   lui	a2, 12
007368: 00e787b3   add	a5, a5, a4
00736c: 00c787b3   add	a5, a5, a2
007370: 3cd7ac23   sw	a3, 984(a5)
007374: 0075f693   andi	a3, a1, 7
007378: 00100793   li	a5, 1
00737c: 06f223a3   sw	a5, 103(tp)
007380: 800007b7   lui	a5, 524288
007384: d00005b7   lui	a1, 851968
007388: 0017879b   addiw	a5, a5, 1
00738c: fff58593   addi	a1, a1, -1
007390: f1402673   csrr	a2, mhartid
007394: 00367613   andi	a2, a2, 3
007398: 01c6161b   slliw	a2, a2, 28
00739c: 00b7f7b3   and	a5, a5, a1
0073a0: 00c7e7b3   or	a5, a5, a2
0073a4: fc800637   lui	a2, 1034240
0073a8: 0016c693   xori	a3, a3, 1
0073ac: fff60613   addi	a2, a2, -1
0073b0: 0176969b   slliw	a3, a3, 23
0073b4: 00c7f7b3   and	a5, a5, a2
0073b8: 00d7e7b3   or	a5, a5, a3
0073bc: 0007879b   sext.w	a5, a5
0073c0: e0f52623   sw	a5, -500(a0)
0073c4: e0c52683   lw	a3, -500(a0)
0073c8: 0016f693   andi	a3, a3, 1
0073cc: fe068ae3   beqz	a3, -12
0073d0: e0052623   sw	zero, -500(a0)
0073d4: 060223a3   sw	zero, 103(tp)
0073d8: 0001e7b7   lui	a5, 30
0073dc: c0478793   addi	a5, a5, -1020
0073e0: 00fc87b3   add	a5, s9, a5
0073e4: 0007e783   lwu	a5, 0(a5)
0073e8: 00078263   beqz	a5, 4
0073ec: 1fa23783   ld	a5, 506(tp)
0073f0: 00f707b3   add	a5, a4, a5
0073f4: 0000c737   lui	a4, 12
0073f8: 00e787b3   add	a5, a5, a4
0073fc: 20000737   lui	a4, 131072
007400: 34e7a423   sw	a4, 840(a5)
007404: 1fa23783   ld	a5, 506(tp)
007408: 00f807b3   add	a5, a6, a5
00740c: 0007e783   lwu	a5, 0(a5)
007410: 00078263   beqz	a5, 4
007414: 060223a3   sw	zero, 103(tp)
007418: 06022523   sw	zero, 106(tp)
00741c: 013207b3   add	a5, tp, s3
007420: 95dfc06f   j	-13988
007424: 01f13023   sd	t6, 0(sp)
007428: 381010ef   jal	7040
00742c: 00013f83   ld	t6, 0(sp)
007430: e5dfe06f   j	-4516
007434: 0a923583   ld	a1, 169(tp)
007438: f1402873   csrr	a6, mhartid
00743c: 02323503   ld	a0, 35(tp)
007440: f1402773   csrr	a4, mhartid
007444: 0007071b   sext.w	a4, a4
007448: 4e070263   beqz	a4, 1252
00744c: 100008b7   lui	a7, 65536
007450: 00c00613   li	a2, 12
007454: 0ac22323   sw	a2, 166(tp)
007458: 02126703   lwu	a4, 33(tp)
00745c: 0007071b   sext.w	a4, a4
007460: 0180006f   j	24
007464: 02126703   lwu	a4, 33(tp)
007468: 0007071b   sext.w	a4, a4
00746c: 07423303   ld	t1, 116(tp)
007470: 00030463   beqz	t1, 8
007474: c6dfe06f   j	-5012
007478: 01177733   and	a4, a4, a7
00747c: fe0704e3   beqz	a4, -24
007480: 0af26703   lwu	a4, 175(tp)
007484: 01077713   andi	a4, a4, 16
007488: fe071ce3   bnez	a4, -8
00748c: 024a9713   slli	a4, s5, 36
007490: 03481813   slli	a6, a6, 52
007494: 02675713   srli	a4, a4, 38
007498: 0156d693   srli	a3, a3, 21
00749c: 01076733   or	a4, a4, a6
0074a0: 03e69693   slli	a3, a3, 62
0074a4: 00d76733   or	a4, a4, a3
0074a8: 03051693   slli	a3, a0, 48
0074ac: 00d76733   or	a4, a4, a3
0074b0: 03659693   slli	a3, a1, 54
0074b4: 00d76733   or	a4, a4, a3
0074b8: 00b00693   li	a3, 11
0074bc: 03a69693   slli	a3, a3, 58
0074c0: 00d76733   or	a4, a4, a3
0074c4: 0ae23123   sd	a4, 162(tp)
0074c8: 0ac223a3   sw	a2, 167(tp)
0074cc: c15fe06f   j	-5100
0074d0: ac062683   lw	a3, -1344(a2)
0074d4: 800007b7   lui	a5, 524288
0074d8: 50078793   addi	a5, a5, 1280
0074dc: 0ff6f693   zext.b	a3, a3
0074e0: 00f6e6b3   or	a3, a3, a5
0074e4: 0006869b   sext.w	a3, a3
0074e8: 1fa23783   ld	a5, 506(tp)
0074ec: 00f70733   add	a4, a4, a5
0074f0: 0000c7b7   lui	a5, 12
0074f4: 00f707b3   add	a5, a4, a5
0074f8: 3cd7ac23   sw	a3, 984(a5)
0074fc: 00100793   li	a5, 1
007500: 06f223a3   sw	a5, 103(tp)
007504: 80000737   lui	a4, 524288
007508: d00006b7   lui	a3, 851968
00750c: fff68693   addi	a3, a3, -1
007510: 0017071b   addiw	a4, a4, 1
007514: f14027f3   csrr	a5, mhartid
007518: 0037f793   andi	a5, a5, 3
00751c: 01c7979b   slliw	a5, a5, 28
007520: 00d77733   and	a4, a4, a3
007524: fc8006b7   lui	a3, 1034240
007528: 00f76733   or	a4, a4, a5
00752c: fff68693   addi	a3, a3, -1
007530: 00184793   xori	a5, a6, 1
007534: 0177979b   slliw	a5, a5, 23
007538: 00d77733   and	a4, a4, a3
00753c: 00f767b3   or	a5, a4, a5
007540: 0007879b   sext.w	a5, a5
007544: e0f62623   sw	a5, -500(a2)
007548: e0c62703   lw	a4, -500(a2)
00754c: 00177713   andi	a4, a4, 1
007550: fe070ae3   beqz	a4, -12
007554: e0062623   sw	zero, -500(a2)
007558: 060223a3   sw	zero, 103(tp)
00755c: cadfc06f   j	-13140
007560: b701a603   lw	a2, -1168(gp)
007564: 00060463   beqz	a2, 8
007568: fb1fc06f   j	-12368
00756c: ec8ca883   lw	a7, -312(s9)
007570: 0008889b   sext.w	a7, a7
007574: 01523783   ld	a5, 21(tp)
007578: 0037f793   andi	a5, a5, 3
00757c: 00f20633   add	a2, tp, a5
007580: 00b66e03   lwu	t3, 11(a2)
007584: 04178e93   addi	t4, a5, 65
007588: 01d206b3   add	a3, tp, t4
00758c: 0066a023   sw	t1, 0(a3)
007590: 01323783   ld	a5, 19(tp)
007594: fe079ee3   bnez	a5, -4
007598: ebc53783   ld	a5, -324(a0)
00759c: 00c7d693   srli	a3, a5, 12
0075a0: 0036f693   andi	a3, a3, 3
0075a4: 02068a63   beqz	a3, 52
0075a8: 07f00693   li	a3, 127
0075ac: b0002673   csrr	a2, mcycle
0075b0: 00000013   nop
0075b4: b00027f3   csrr	a5, mcycle
0075b8: 40c787b3   sub	a5, a5, a2
0075bc: fef6fae3   bgeu	a3, a5, -12
0075c0: ebcca783   lw	a5, -324(s9)
0075c4: 00c7d61b   srliw	a2, a5, 12
0075c8: 00367613   andi	a2, a2, 3
0075cc: 02079793   slli	a5, a5, 32
0075d0: 0207d793   srli	a5, a5, 32
0075d4: fc061ce3   bnez	a2, -40
0075d8: 0017f793   andi	a5, a5, 1
0075dc: 00078463   beqz	a5, 8
0075e0: ea0cae23   sw	zero, -324(s9)
0075e4: 00020793   mv	a5, tp
0075e8: 01d206b3   add	a3, tp, t4
0075ec: 01c6a023   sw	t3, 0(a3)
0075f0: 0088d69b   srliw	a3, a7, 8
0075f4: 80000637   lui	a2, 524288
0075f8: 0016f693   andi	a3, a3, 1
0075fc: 00c6e6b3   or	a3, a3, a2
007600: 1fa23603   ld	a2, 506(tp)
007604: 00100513   li	a0, 1
007608: 02451513   slli	a0, a0, 36
00760c: 0002e8b7   lui	a7, 46
007610: 00a60633   add	a2, a2, a0
007614: 01160633   add	a2, a2, a7
007618: 08d62023   sw	a3, 128(a2)
00761c: 0002e337   lui	t1, 46
007620: c00008b7   lui	a7, 786432
007624: c0000637   lui	a2, 786432
007628: 1fa23683   ld	a3, 506(tp)
00762c: 00a686b3   add	a3, a3, a0
007630: 006686b3   add	a3, a3, t1
007634: 0806a683   lw	a3, 128(a3)
007638: 0116f6b3   and	a3, a3, a7
00763c: 0006869b   sext.w	a3, a3
007640: fec694e3   bne	a3, a2, -24
007644: c00056b7   lui	a3, 786437
007648: b006869b   addiw	a3, a3, -1280
00764c: 00d22023   sw	a3, 0(tp)
007650: 00100693   li	a3, 1
007654: 00d22023   sw	a3, 0(tp)
007658: c00f16b7   lui	a3, 786673
00765c: 00d22023   sw	a3, 0(tp)
007660: 00022023   sw	zero, 0(tp)
007664: 00022023   sw	zero, 0(tp)
007668: 00022023   sw	zero, 0(tp)
00766c: 00022023   sw	zero, 0(tp)
007670: 00022023   sw	zero, 0(tp)
007674: 00022023   sw	zero, 0(tp)
007678: 00022023   sw	zero, 0(tp)
00767c: 00022023   sw	zero, 0(tp)
007680: 00022023   sw	zero, 0(tp)
007684: 00022023   sw	zero, 0(tp)
007688: 00022023   sw	zero, 0(tp)
00768c: 00022023   sw	zero, 0(tp)
007690: 00022023   sw	zero, 0(tp)
007694: 00022023   sw	zero, 0(tp)
007698: 00022023   sw	zero, 0(tp)
00769c: 00022023   sw	zero, 0(tp)
0076a0: 40000893   li	a7, 1024
0076a4: f14026f3   csrr	a3, mhartid
0076a8: 0006831b   sext.w	t1, a3
0076ac: 00d898b3   sll	a7, a7, a3
0076b0: 31423683   ld	a3, 788(tp)
0076b4: 0116f6b3   and	a3, a3, a7
0076b8: fe069ce3   bnez	a3, -8
0076bc: 04226683   lwu	a3, 66(tp)
0076c0: fff34613   not	a2, t1
0076c4: 00167613   andi	a2, a2, 1
0076c8: 0046161b   slliw	a2, a2, 4
0076cc: 00c6e633   or	a2, a3, a2
0076d0: 0ff67613   zext.b	a2, a2
0076d4: f006f693   andi	a3, a3, -256
0076d8: 00c6e6b3   or	a3, a3, a2
0076dc: 7fff0637   lui	a2, 524272
0076e0: 0ff60613   addi	a2, a2, 255
0076e4: 00c6f6b3   and	a3, a3, a2
0076e8: 80000637   lui	a2, 524288
0076ec: 10060613   addi	a2, a2, 256
0076f0: 00c6e6b3   or	a3, a3, a2
0076f4: 0006869b   sext.w	a3, a3
0076f8: 000c8513   mv	a0, s9
0076fc: eedca823   sw	a3, -272(s9)
007700: c0000eb7   lui	t4, 786432
007704: c0000e37   lui	t3, 786432
007708: 04226683   lwu	a3, 66(tp)
00770c: 01d6f633   and	a2, a3, t4
007710: 0006061b   sext.w	a2, a2
007714: ffc61ae3   bne	a2, t3, -12
007718: 02169693   slli	a3, a3, 33
00771c: 0216d693   srli	a3, a3, 33
007720: eed52823   sw	a3, -272(a0)
007724: 04226683   lwu	a3, 66(tp)
007728: 0006869b   sext.w	a3, a3
00772c: fe069ce3   bnez	a3, -8
007730: 06022423   sw	zero, 104(tp)
007734: 1fa23683   ld	a3, 506(tp)
007738: 00100e13   li	t3, 1
00773c: 024e1e13   slli	t3, t3, 36
007740: 01c686b3   add	a3, a3, t3
007744: 0002eeb7   lui	t4, 46
007748: 01d686b3   add	a3, a3, t4
00774c: 0806a603   lw	a2, 128(a3)
007750: 02161613   slli	a2, a2, 33
007754: 02165613   srli	a2, a2, 33
007758: 1fa23683   ld	a3, 506(tp)
00775c: 01c686b3   add	a3, a3, t3
007760: 01d686b3   add	a3, a3, t4
007764: 08c6a023   sw	a2, 128(a3)
007768: 0002ef37   lui	t5, 46
00776c: c0000637   lui	a2, 786432
007770: 1fa23683   ld	a3, 506(tp)
007774: 01c686b3   add	a3, a3, t3
007778: 01e686b3   add	a3, a3, t5
00777c: 0806ae83   lw	t4, 128(a3)
007780: 00cefeb3   and	t4, t4, a2
007784: 000e8e9b   sext.w	t4, t4
007788: fe0e94e3   bnez	t4, -24
00778c: ec852603   lw	a2, -312(a0)
007790: 0086561b   srliw	a2, a2, 8
007794: 00167613   andi	a2, a2, 1
007798: 0016169b   slliw	a3, a2, 1
00779c: 00c6e6b3   or	a3, a3, a2
0077a0: 06d22323   sw	a3, 102(tp)
0077a4: c00056b7   lui	a3, 786437
0077a8: b006869b   addiw	a3, a3, -1280
0077ac: 00d22023   sw	a3, 0(tp)
0077b0: 00100693   li	a3, 1
0077b4: 00d22023   sw	a3, 0(tp)
0077b8: c00f16b7   lui	a3, 786673
0077bc: 00d22023   sw	a3, 0(tp)
0077c0: 00022023   sw	zero, 0(tp)
0077c4: 00022023   sw	zero, 0(tp)
0077c8: 00022023   sw	zero, 0(tp)
0077cc: 00022023   sw	zero, 0(tp)
0077d0: 00022023   sw	zero, 0(tp)
0077d4: 00022023   sw	zero, 0(tp)
0077d8: 00022023   sw	zero, 0(tp)
0077dc: 00022023   sw	zero, 0(tp)
0077e0: 00022023   sw	zero, 0(tp)
0077e4: 00022023   sw	zero, 0(tp)
0077e8: 00022023   sw	zero, 0(tp)
0077ec: 00022023   sw	zero, 0(tp)
0077f0: 00022023   sw	zero, 0(tp)
0077f4: 00022023   sw	zero, 0(tp)
0077f8: 00022023   sw	zero, 0(tp)
0077fc: 00022023   sw	zero, 0(tp)
007800: 31423683   ld	a3, 788(tp)
007804: 00d8f6b3   and	a3, a7, a3
007808: fe069ce3   bnez	a3, -8
00780c: c00016b7   lui	a3, 786433
007810: e006869b   addiw	a3, a3, -512
007814: 00d22023   sw	a3, 0(tp)
007818: 00020e37   lui	t3, 32
00781c: 0106169b   slliw	a3, a2, 16
007820: 00ee0e13   addi	t3, t3, 14
007824: 01c6e6b3   or	a3, a3, t3
007828: 00d22023   sw	a3, 0(tp)
00782c: c00f16b7   lui	a3, 786673
007830: 00d22023   sw	a3, 0(tp)
007834: 00022023   sw	zero, 0(tp)
007838: 00022023   sw	zero, 0(tp)
00783c: 00022023   sw	zero, 0(tp)
007840: 00022023   sw	zero, 0(tp)
007844: 00022023   sw	zero, 0(tp)
007848: 00022023   sw	zero, 0(tp)
00784c: 00022023   sw	zero, 0(tp)
007850: 00022023   sw	zero, 0(tp)
007854: 00022023   sw	zero, 0(tp)
007858: 00022023   sw	zero, 0(tp)
00785c: 00022023   sw	zero, 0(tp)
007860: 00022023   sw	zero, 0(tp)
007864: 00022023   sw	zero, 0(tp)
007868: 00022023   sw	zero, 0(tp)
00786c: 00022023   sw	zero, 0(tp)
007870: 00022023   sw	zero, 0(tp)
007874: 31423683   ld	a3, 788(tp)
007878: 00d8f6b3   and	a3, a7, a3
00787c: fe069ce3   bnez	a3, -8
007880: 0c026683   lwu	a3, 192(tp)
007884: 0116d69b   srliw	a3, a3, 17
007888: 02068e63   beqz	a3, 60
00788c: 001e8e1b   addiw	t3, t4, 1
007890: 0016ff13   andi	t5, a3, 1
007894: 000e0e9b   sext.w	t4, t3
007898: 020f0263   beqz	t5, 36
00789c: 1f026f03   lwu	t5, 496(tp)
0078a0: 020f1f13   slli	t5, t5, 32
0078a4: 020f5f13   srli	t5, t5, 32
0078a8: 01e23e23   sd	t5, 28(tp)
0078ac: 100e6e13   ori	t3, t3, 256
0078b0: 0bc222a3   sw	t3, 165(tp)
0078b4: 31422003   lw	zero, 788(tp)
0078b8: ee052623   sw	zero, -276(a0)
0078bc: 0016d693   srli	a3, a3, 1
0078c0: fc0696e3   bnez	a3, -52
0078c4: 1f026683   lwu	a3, 496(tp)
0078c8: 02069693   slli	a3, a3, 32
0078cc: 0206d693   srli	a3, a3, 32
0078d0: 00d23e23   sd	a3, 28(tp)
0078d4: 0a0222a3   sw	zero, 165(tp)
0078d8: 31422003   lw	zero, 788(tp)
0078dc: 90c52e23   sw	a2, -1764(a0)
0078e0: ec852603   lw	a2, -312(a0)
0078e4: 0086569b   srliw	a3, a2, 8
0078e8: 0016f693   andi	a3, a3, 1
0078ec: 0006061b   sext.w	a2, a2
0078f0: 6c069ae3   bnez	a3, 3796
0078f4: b7418e93   addi	t4, gp, -1164
0078f8: 000ea683   lw	a3, 0(t4)
0078fc: 62069ce3   bnez	a3, 3640
007900: ec052423   sw	zero, -312(a0)
007904: ec856683   lwu	a3, -312(a0)
007908: 00068263   beqz	a3, 4
00790c: b601ac23   sw	zero, -1160(gp)
007910: b7c1a683   lw	a3, -1156(gp)
007914: 02069663   bnez	a3, 44
007918: 0001e8b7   lui	a7, 30
00791c: c0488893   addi	a7, a7, -1020
007920: 011508b3   add	a7, a0, a7
007924: 013787b3   add	a5, a5, s3
007928: cc1fc06f   j	-13120
00792c: 080008b7   lui	a7, 32768
007930: 00b00613   li	a2, 11
007934: b21ff06f   j	-1248
007938: 040109a3   sb	zero, 83(sp)
00793c: 8c0ff06f   j	-3904
007940: b601ae23   sw	zero, -1156(gp)
007944: 06022523   sw	zero, 106(tp)
007948: 1fa23683   ld	a3, 506(tp)
00794c: 0000c637   lui	a2, 12
007950: 00d706b3   add	a3, a4, a3
007954: 00c686b3   add	a3, a3, a2
007958: 3806a683   lw	a3, 896(a3)
00795c: 48068063   beqz	a3, 1152
007960: acc52683   lw	a3, -1332(a0)
007964: 00100613   li	a2, 1
007968: 0006869b   sext.w	a3, a3
00796c: 00c31463   bne	t1, a2, 8
007970: 06c0106f   j	4204
007974: 0106d693   srli	a3, a3, 16
007978: 0ff6f693   zext.b	a3, a3
00797c: 3005e593   ori	a1, a1, 768
007980: 0005859b   sext.w	a1, a1
007984: 1fa23603   ld	a2, 506(tp)
007988: 0000ce37   lui	t3, 12
00798c: 00c70633   add	a2, a4, a2
007990: 01c60633   add	a2, a2, t3
007994: 62b62023   sw	a1, 1568(a2)
007998: 0c068a63   beqz	a3, 212
00799c: 1fb26683   lwu	a3, 507(tp)
0079a0: 0006869b   sext.w	a3, a3
0079a4: 0c068463   beqz	a3, 200
0079a8: c00056b7   lui	a3, 786437
0079ac: b006869b   addiw	a3, a3, -1280
0079b0: 00d22023   sw	a3, 0(tp)
0079b4: 00100693   li	a3, 1
0079b8: 00d22023   sw	a3, 0(tp)
0079bc: c00f16b7   lui	a3, 786673
0079c0: 00d22023   sw	a3, 0(tp)
0079c4: 00022023   sw	zero, 0(tp)
0079c8: 00022023   sw	zero, 0(tp)
0079cc: 00022023   sw	zero, 0(tp)
0079d0: 00022023   sw	zero, 0(tp)
0079d4: 00022023   sw	zero, 0(tp)
0079d8: 00022023   sw	zero, 0(tp)
0079dc: 00022023   sw	zero, 0(tp)
0079e0: 00022023   sw	zero, 0(tp)
0079e4: 00022023   sw	zero, 0(tp)
0079e8: 00022023   sw	zero, 0(tp)
0079ec: 00022023   sw	zero, 0(tp)
0079f0: 00022023   sw	zero, 0(tp)
0079f4: 00022023   sw	zero, 0(tp)
0079f8: 00022023   sw	zero, 0(tp)
0079fc: 00022023   sw	zero, 0(tp)
007a00: 00022023   sw	zero, 0(tp)
007a04: 31423683   ld	a3, 788(tp)
007a08: 00d8f6b3   and	a3, a7, a3
007a0c: fe069ce3   bnez	a3, -8
007a10: 1fa23683   ld	a3, 506(tp)
007a14: 0000c5b7   lui	a1, 12
007a18: 00d706b3   add	a3, a4, a3
007a1c: 00b686b3   add	a3, a3, a1
007a20: 3bc6ae03   lw	t3, 956(a3)
007a24: 000e0e1b   sext.w	t3, t3
007a28: 1fa23683   ld	a3, 506(tp)
007a2c: 00d706b3   add	a3, a4, a3
007a30: 00b686b3   add	a3, a3, a1
007a34: 3c46a683   lw	a3, 964(a3)
007a38: 00200613   li	a2, 2
007a3c: 01c6163b   sllw	a2, a2, t3
007a40: fff6061b   addiw	a2, a2, -1
007a44: 00c6f6b3   and	a3, a3, a2
007a48: 0006869b   sext.w	a3, a3
007a4c: 1fa23603   ld	a2, 506(tp)
007a50: 00c70633   add	a2, a4, a2
007a54: 00b60633   add	a2, a2, a1
007a58: 3ad62c23   sw	a3, 952(a2)
007a5c: 1fa23603   ld	a2, 506(tp)
007a60: 00c70633   add	a2, a4, a2
007a64: 00b60633   add	a2, a2, a1
007a68: 3cd62023   sw	a3, 960(a2)
007a6c: 1fa23603   ld	a2, 506(tp)
007a70: 0000c6b7   lui	a3, 12
007a74: 00c70633   add	a2, a4, a2
007a78: 00d60633   add	a2, a2, a3
007a7c: 3e862603   lw	a2, 1000(a2)
007a80: 0006061b   sext.w	a2, a2
007a84: 1f026583   lwu	a1, 496(tp)
007a88: 02059593   slli	a1, a1, 32
007a8c: 0205d593   srli	a1, a1, 32
007a90: 00b23e23   sd	a1, 28(tp)
007a94: 00f67613   andi	a2, a2, 15
007a98: 10066613   ori	a2, a2, 256
007a9c: 0ac222a3   sw	a2, 165(tp)
007aa0: 31422003   lw	zero, 788(tp)
007aa4: 1fa23603   ld	a2, 506(tp)
007aa8: 00c70633   add	a2, a4, a2
007aac: 00d60633   add	a2, a2, a3
007ab0: 37862e83   lw	t4, 888(a2)
007ab4: 000e8e9b   sext.w	t4, t4
007ab8: 1fa23603   ld	a2, 506(tp)
007abc: 00c70633   add	a2, a4, a2
007ac0: 00d60633   add	a2, a2, a3
007ac4: 37c62583   lw	a1, 892(a2)
007ac8: 020e9e13   slli	t3, t4, 32
007acc: 020e5e13   srli	t3, t3, 32
007ad0: 02059613   slli	a2, a1, 32
007ad4: 00058f1b   sext.w	t5, a1
007ad8: 01c66633   or	a2, a2, t3
007adc: 1fa23583   ld	a1, 506(tp)
007ae0: 00b705b3   add	a1, a4, a1
007ae4: 00d585b3   add	a1, a1, a3
007ae8: 3e85a583   lw	a1, 1000(a1)
007aec: 0185de1b   srliw	t3, a1, 24
007af0: 003e7e13   andi	t3, t3, 3
007af4: 0005859b   sext.w	a1, a1
007af8: 33c22223   sw	t3, 804(tp)
007afc: 21d62023   sw	t4, 512(a2)
007b00: 21e62223   sw	t5, 516(a2)
007b04: 1fa23e03   ld	t3, 506(tp)
007b08: 01c70e33   add	t3, a4, t3
007b0c: 00de0e33   add	t3, t3, a3
007b10: 380e2e03   lw	t3, 896(t3)
007b14: 000e0e1b   sext.w	t3, t3
007b18: 21c62423   sw	t3, 520(a2)
007b1c: 1fa23e03   ld	t3, 506(tp)
007b20: 01c70e33   add	t3, a4, t3
007b24: 00de0e33   add	t3, t3, a3
007b28: 384e2e03   lw	t3, 900(t3)
007b2c: 000e0e1b   sext.w	t3, t3
007b30: 21c62623   sw	t3, 524(a2)
007b34: 1fa23e03   ld	t3, 506(tp)
007b38: 01c70e33   add	t3, a4, t3
007b3c: 00de0e33   add	t3, t3, a3
007b40: 390e2e03   lw	t3, 912(t3)
007b44: 000e0e1b   sext.w	t3, t3
007b48: 21c62c23   sw	t3, 536(a2)
007b4c: 1fa23e03   ld	t3, 506(tp)
007b50: 01c70e33   add	t3, a4, t3
007b54: 00de0e33   add	t3, t3, a3
007b58: 394e2e03   lw	t3, 916(t3)
007b5c: 000e0e1b   sext.w	t3, t3
007b60: 21c62e23   sw	t3, 540(a2)
007b64: 1fa23e03   ld	t3, 506(tp)
007b68: 01c70e33   add	t3, a4, t3
007b6c: 00de0e33   add	t3, t3, a3
007b70: 398e2e03   lw	t3, 920(t3)
007b74: 000e0e1b   sext.w	t3, t3
007b78: 23c62023   sw	t3, 544(a2)
007b7c: 1fa23e03   ld	t3, 506(tp)
007b80: 01c70e33   add	t3, a4, t3
007b84: 00de0e33   add	t3, t3, a3
007b88: 39ce2e03   lw	t3, 924(t3)
007b8c: 000e0e1b   sext.w	t3, t3
007b90: 23c62223   sw	t3, 548(a2)
007b94: 22062423   sw	zero, 552(a2)
007b98: 1fa23e03   ld	t3, 506(tp)
007b9c: 01c70e33   add	t3, a4, t3
007ba0: 00de0e33   add	t3, t3, a3
007ba4: 3a4e2e03   lw	t3, 932(t3)
007ba8: 000e0e1b   sext.w	t3, t3
007bac: 23c62623   sw	t3, 556(a2)
007bb0: 1fa23e03   ld	t3, 506(tp)
007bb4: 01c70e33   add	t3, a4, t3
007bb8: 00de0e33   add	t3, t3, a3
007bbc: 3a8e2e03   lw	t3, 936(t3)
007bc0: 000e0e1b   sext.w	t3, t3
007bc4: 23c62823   sw	t3, 560(a2)
007bc8: 1fa23e03   ld	t3, 506(tp)
007bcc: 01c70e33   add	t3, a4, t3
007bd0: 00de0e33   add	t3, t3, a3
007bd4: 3ace2e03   lw	t3, 940(t3)
007bd8: 000e0e1b   sext.w	t3, t3
007bdc: 23c62a23   sw	t3, 564(a2)
007be0: 1fa23e03   ld	t3, 506(tp)
007be4: 01c70e33   add	t3, a4, t3
007be8: 00de0e33   add	t3, t3, a3
007bec: 3b0e2e03   lw	t3, 944(t3)
007bf0: 000e0e1b   sext.w	t3, t3
007bf4: 23c62c23   sw	t3, 568(a2)
007bf8: 1fa23e03   ld	t3, 506(tp)
007bfc: 01c70e33   add	t3, a4, t3
007c00: 00de0e33   add	t3, t3, a3
007c04: 3b4e2e03   lw	t3, 948(t3)
007c08: 000e0e1b   sext.w	t3, t3
007c0c: 23c62e23   sw	t3, 572(a2)
007c10: 1fa23e03   ld	t3, 506(tp)
007c14: 01c70e33   add	t3, a4, t3
007c18: 00de0e33   add	t3, t3, a3
007c1c: 3b8e2e03   lw	t3, 952(t3)
007c20: 000e0e1b   sext.w	t3, t3
007c24: 25c62023   sw	t3, 576(a2)
007c28: 1fa23e03   ld	t3, 506(tp)
007c2c: 01c70e33   add	t3, a4, t3
007c30: 00de0e33   add	t3, t3, a3
007c34: 3bce2e03   lw	t3, 956(t3)
007c38: 000e0e1b   sext.w	t3, t3
007c3c: 25c62223   sw	t3, 580(a2)
007c40: 1fa23e03   ld	t3, 506(tp)
007c44: 01c70e33   add	t3, a4, t3
007c48: 00de0e33   add	t3, t3, a3
007c4c: 3c0e2e03   lw	t3, 960(t3)
007c50: 000e0e1b   sext.w	t3, t3
007c54: 25c62823   sw	t3, 592(a2)
007c58: 1fa23e03   ld	t3, 506(tp)
007c5c: 01c70e33   add	t3, a4, t3
007c60: 00de0e33   add	t3, t3, a3
007c64: 3c4e2e03   lw	t3, 964(t3)
007c68: 000e0e1b   sext.w	t3, t3
007c6c: 25c62a23   sw	t3, 596(a2)
007c70: 1fa23e03   ld	t3, 506(tp)
007c74: 01c70e33   add	t3, a4, t3
007c78: 00de0e33   add	t3, t3, a3
007c7c: 3c8e2e03   lw	t3, 968(t3)
007c80: 000e0e1b   sext.w	t3, t3
007c84: 25c62c23   sw	t3, 600(a2)
007c88: 1fa23e03   ld	t3, 506(tp)
007c8c: 01c70e33   add	t3, a4, t3
007c90: 00de0e33   add	t3, t3, a3
007c94: 3d0e2e03   lw	t3, 976(t3)
007c98: 000e0e1b   sext.w	t3, t3
007c9c: 27c62823   sw	t3, 624(a2)
007ca0: 1fa23e03   ld	t3, 506(tp)
007ca4: 01c70e33   add	t3, a4, t3
007ca8: 00de0e33   add	t3, t3, a3
007cac: 3d4e2e03   lw	t3, 980(t3)
007cb0: 000e0e1b   sext.w	t3, t3
007cb4: 27c62a23   sw	t3, 628(a2)
007cb8: 1fa23e03   ld	t3, 506(tp)
007cbc: 01c70e33   add	t3, a4, t3
007cc0: 00de0e33   add	t3, t3, a3
007cc4: 3e0e2e03   lw	t3, 992(t3)
007cc8: 000e0e1b   sext.w	t3, t3
007ccc: 29c62023   sw	t3, 640(a2)
007cd0: 1fa23e03   ld	t3, 506(tp)
007cd4: 01c70e33   add	t3, a4, t3
007cd8: 00de0e33   add	t3, t3, a3
007cdc: 3e4e2e03   lw	t3, 996(t3)
007ce0: 000e0e1b   sext.w	t3, t3
007ce4: 29c62223   sw	t3, 644(a2)
007ce8: fffffe37   lui	t3, 1048575
007cec: fffe0e13   addi	t3, t3, -1
007cf0: 01c5f5b3   and	a1, a1, t3
007cf4: 28b62423   sw	a1, 648(a2)
007cf8: 1fa23583   ld	a1, 506(tp)
007cfc: 00b705b3   add	a1, a4, a1
007d00: 00d585b3   add	a1, a1, a3
007d04: 3c05a223   sw	zero, 964(a1)
007d08: 1fa23583   ld	a1, 506(tp)
007d0c: 00b705b3   add	a1, a4, a1
007d10: 00d585b3   add	a1, a1, a3
007d14: 3c05a423   sw	zero, 968(a1)
007d18: 1fa23583   ld	a1, 506(tp)
007d1c: 00b705b3   add	a1, a4, a1
007d20: 00d585b3   add	a1, a1, a3
007d24: 3c05a023   sw	zero, 960(a1)
007d28: 1fa23583   ld	a1, 506(tp)
007d2c: 00b705b3   add	a1, a4, a1
007d30: 00d586b3   add	a3, a1, a3
007d34: 3a06a023   sw	zero, 928(a3)
007d38: c00056b7   lui	a3, 786437
007d3c: b006869b   addiw	a3, a3, -1280
007d40: 00d22023   sw	a3, 0(tp)
007d44: 00100693   li	a3, 1
007d48: 00d22023   sw	a3, 0(tp)
007d4c: c00f16b7   lui	a3, 786673
007d50: 00d22023   sw	a3, 0(tp)
007d54: 00022023   sw	zero, 0(tp)
007d58: 00022023   sw	zero, 0(tp)
007d5c: 00022023   sw	zero, 0(tp)
007d60: 00022023   sw	zero, 0(tp)
007d64: 00022023   sw	zero, 0(tp)
007d68: 00022023   sw	zero, 0(tp)
007d6c: 00022023   sw	zero, 0(tp)
007d70: 00022023   sw	zero, 0(tp)
007d74: 00022023   sw	zero, 0(tp)
007d78: 00022023   sw	zero, 0(tp)
007d7c: 00022023   sw	zero, 0(tp)
007d80: 00022023   sw	zero, 0(tp)
007d84: 00022023   sw	zero, 0(tp)
007d88: 00022023   sw	zero, 0(tp)
007d8c: 00022023   sw	zero, 0(tp)
007d90: 00022023   sw	zero, 0(tp)
007d94: 31423683   ld	a3, 788(tp)
007d98: 00d8f6b3   and	a3, a7, a3
007d9c: fe069ce3   bnez	a3, -8
007da0: 01226683   lwu	a3, 18(tp)
007da4: 0006869b   sext.w	a3, a3
007da8: fe069ce3   bnez	a3, -8
007dac: 20062423   sw	zero, 520(a2)
007db0: 1fa23683   ld	a3, 506(tp)
007db4: 0000c637   lui	a2, 12
007db8: 00d706b3   add	a3, a4, a3
007dbc: 00c686b3   add	a3, a3, a2
007dc0: 3806a023   sw	zero, 896(a3)
007dc4: 1f026683   lwu	a3, 496(tp)
007dc8: 02069693   slli	a3, a3, 32
007dcc: 0206d693   srli	a3, a3, 32
007dd0: 00d23e23   sd	a3, 28(tp)
007dd4: 0a0222a3   sw	zero, 165(tp)
007dd8: 31422003   lw	zero, 788(tp)
007ddc: 1fa23683   ld	a3, 506(tp)
007de0: 0000c637   lui	a2, 12
007de4: 00d706b3   add	a3, a4, a3
007de8: 00c686b3   add	a3, a3, a2
007dec: 3c06a623   sw	zero, 972(a3)
007df0: 1fb26683   lwu	a3, 507(tp)
007df4: 0006869b   sext.w	a3, a3
007df8: b20680e3   beqz	a3, -1248
007dfc: 00100693   li	a3, 1
007e00: 02d22823   sw	a3, 48(tp)
007e04: 02026683   lwu	a3, 32(tp)
007e08: 0026f693   andi	a3, a3, 2
007e0c: fe068ce3   beqz	a3, -8
007e10: acc52683   lw	a3, -1332(a0)
007e14: 0006869b   sext.w	a3, a3
007e18: 04d12423   sw	a3, 72(sp)
007e1c: 04812683   lw	a3, 72(sp)
007e20: 02068863   beqz	a3, 48
007e24: 00100693   li	a3, 1
007e28: 3ad30ee3   beq	t1, a3, 3004
007e2c: 04010523   sb	zero, 74(sp)
007e30: 04a14683   lbu	a3, 74(sp)
007e34: 00069863   bnez	a3, 16
007e38: 04b14683   lbu	a3, 75(sp)
007e3c: 00069463   bnez	a3, 8
007e40: 04012423   sw	zero, 72(sp)
007e44: 04812683   lw	a3, 72(sp)
007e48: 0006869b   sext.w	a3, a3
007e4c: acd52623   sw	a3, -1332(a0)
007e50: 00100693   li	a3, 1
007e54: 02d228a3   sw	a3, 49(tp)
007e58: 1e022da3   sw	zero, 507(tp)
007e5c: abdff06f   j	-1348
007e60: b701a783   lw	a5, -1168(gp)
007e64: ca079263   bnez	a5, -2908
007e68: ec8ca303   lw	t1, -312(s9)
007e6c: 0003031b   sext.w	t1, t1
007e70: 01523783   ld	a5, 21(tp)
007e74: 0037f793   andi	a5, a5, 3
007e78: 00f20633   add	a2, tp, a5
007e7c: 00b66e03   lwu	t3, 11(a2)
007e80: 04178613   addi	a2, a5, 65
007e84: 00c206b3   add	a3, tp, a2
007e88: 01d6a023   sw	t4, 0(a3)
007e8c: 01323783   ld	a5, 19(tp)
007e90: fe079ee3   bnez	a5, -4
007e94: ebc53783   ld	a5, -324(a0)
007e98: 00c7d693   srli	a3, a5, 12
007e9c: 0036f693   andi	a3, a3, 3
007ea0: 02068a63   beqz	a3, 52
007ea4: 07f00513   li	a0, 127
007ea8: b00026f3   csrr	a3, mcycle
007eac: 00000013   nop
007eb0: b00027f3   csrr	a5, mcycle
007eb4: 40d787b3   sub	a5, a5, a3
007eb8: fef57ae3   bgeu	a0, a5, -12
007ebc: ebcca783   lw	a5, -324(s9)
007ec0: 00c7d69b   srliw	a3, a5, 12
007ec4: 0036f693   andi	a3, a3, 3
007ec8: 02079793   slli	a5, a5, 32
007ecc: 0207d793   srli	a5, a5, 32
007ed0: fc069ce3   bnez	a3, -40
007ed4: 0017f793   andi	a5, a5, 1
007ed8: 00078463   beqz	a5, 8
007edc: ea0cae23   sw	zero, -324(s9)
007ee0: 00020793   mv	a5, tp
007ee4: 00c20633   add	a2, tp, a2
007ee8: 01c62023   sw	t3, 0(a2)
007eec: 0083569b   srliw	a3, t1, 8
007ef0: 80000637   lui	a2, 524288
007ef4: 0016f693   andi	a3, a3, 1
007ef8: 00c6e6b3   or	a3, a3, a2
007efc: 1fa23603   ld	a2, 506(tp)
007f00: 00100513   li	a0, 1
007f04: 02451513   slli	a0, a0, 36
007f08: 0002e337   lui	t1, 46
007f0c: 00a60633   add	a2, a2, a0
007f10: 00660633   add	a2, a2, t1
007f14: 08d62023   sw	a3, 128(a2)
007f18: 0002ee37   lui	t3, 46
007f1c: c0000337   lui	t1, 786432
007f20: c0000637   lui	a2, 786432
007f24: 1fa23683   ld	a3, 506(tp)
007f28: 00a686b3   add	a3, a3, a0
007f2c: 01c686b3   add	a3, a3, t3
007f30: 0806a683   lw	a3, 128(a3)
007f34: 0066f6b3   and	a3, a3, t1
007f38: 0006869b   sext.w	a3, a3
007f3c: fec694e3   bne	a3, a2, -24
007f40: c00056b7   lui	a3, 786437
007f44: b006869b   addiw	a3, a3, -1280
007f48: 00d22023   sw	a3, 0(tp)
007f4c: 00100693   li	a3, 1
007f50: 00d22023   sw	a3, 0(tp)
007f54: c00f16b7   lui	a3, 786673
007f58: 00d22023   sw	a3, 0(tp)
007f5c: 00022023   sw	zero, 0(tp)
007f60: 00022023   sw	zero, 0(tp)
007f64: 00022023   sw	zero, 0(tp)
007f68: 00022023   sw	zero, 0(tp)
007f6c: 00022023   sw	zero, 0(tp)
007f70: 00022023   sw	zero, 0(tp)
007f74: 00022023   sw	zero, 0(tp)
007f78: 00022023   sw	zero, 0(tp)
007f7c: 00022023   sw	zero, 0(tp)
007f80: 00022023   sw	zero, 0(tp)
007f84: 00022023   sw	zero, 0(tp)
007f88: 00022023   sw	zero, 0(tp)
007f8c: 00022023   sw	zero, 0(tp)
007f90: 00022023   sw	zero, 0(tp)
007f94: 00022023   sw	zero, 0(tp)
007f98: 00022023   sw	zero, 0(tp)
007f9c: 40000513   li	a0, 1024
007fa0: f14026f3   csrr	a3, mhartid
007fa4: 0006831b   sext.w	t1, a3
007fa8: 00d51533   sll	a0, a0, a3
007fac: 31423683   ld	a3, 788(tp)
007fb0: 00a6f6b3   and	a3, a3, a0
007fb4: fe069ce3   bnez	a3, -8
007fb8: 04226683   lwu	a3, 66(tp)
007fbc: fff34613   not	a2, t1
007fc0: 00167613   andi	a2, a2, 1
007fc4: 0046161b   slliw	a2, a2, 4
007fc8: 00c6e633   or	a2, a3, a2
007fcc: 0ff67613   zext.b	a2, a2
007fd0: f006f693   andi	a3, a3, -256
007fd4: 00c6e6b3   or	a3, a3, a2
007fd8: 7fff0637   lui	a2, 524272
007fdc: 0ff60613   addi	a2, a2, 255
007fe0: 00c6f6b3   and	a3, a3, a2
007fe4: 80000637   lui	a2, 524288
007fe8: 10060613   addi	a2, a2, 256
007fec: 00c6e6b3   or	a3, a3, a2
007ff0: 0006869b   sext.w	a3, a3
007ff4: 000c8613   mv	a2, s9
007ff8: eedca823   sw	a3, -272(s9)
007ffc: c0000f37   lui	t5, 786432
008000: c0000eb7   lui	t4, 786432
008004: 04226683   lwu	a3, 66(tp)
008008: 01e6fe33   and	t3, a3, t5
00800c: 000e0e1b   sext.w	t3, t3
008010: ffde1ae3   bne	t3, t4, -12
008014: 02169693   slli	a3, a3, 33
008018: 0216d693   srli	a3, a3, 33
00801c: eed62823   sw	a3, -272(a2)
008020: 04226683   lwu	a3, 66(tp)
008024: 0006869b   sext.w	a3, a3
008028: fe069ce3   bnez	a3, -8
00802c: 06022423   sw	zero, 104(tp)
008030: 1fa23683   ld	a3, 506(tp)
008034: 00100e93   li	t4, 1
008038: 024e9e93   slli	t4, t4, 36
00803c: 01d686b3   add	a3, a3, t4
008040: 0002ef37   lui	t5, 46
008044: 01e686b3   add	a3, a3, t5
008048: 0806ae03   lw	t3, 128(a3)
00804c: 021e1e13   slli	t3, t3, 33
008050: 021e5e13   srli	t3, t3, 33
008054: 1fa23683   ld	a3, 506(tp)
008058: 01d686b3   add	a3, a3, t4
00805c: 01e686b3   add	a3, a3, t5
008060: 09c6a023   sw	t3, 128(a3)
008064: 0002efb7   lui	t6, 46
008068: c0000e37   lui	t3, 786432
00806c: 1fa23683   ld	a3, 506(tp)
008070: 01d686b3   add	a3, a3, t4
008074: 01f686b3   add	a3, a3, t6
008078: 0806af03   lw	t5, 128(a3)
00807c: 01cf7f33   and	t5, t5, t3
008080: 000f0f1b   sext.w	t5, t5
008084: fe0f14e3   bnez	t5, -24
008088: ec862e03   lw	t3, -312(a2)
00808c: 008e5e1b   srliw	t3, t3, 8
008090: 001e7e13   andi	t3, t3, 1
008094: 001e169b   slliw	a3, t3, 1
008098: 01c6e6b3   or	a3, a3, t3
00809c: 06d22323   sw	a3, 102(tp)
0080a0: c00056b7   lui	a3, 786437
0080a4: b006869b   addiw	a3, a3, -1280
0080a8: 00d22023   sw	a3, 0(tp)
0080ac: 00100693   li	a3, 1
0080b0: 00d22023   sw	a3, 0(tp)
0080b4: c00f16b7   lui	a3, 786673
0080b8: 00d22023   sw	a3, 0(tp)
0080bc: 00022023   sw	zero, 0(tp)
0080c0: 00022023   sw	zero, 0(tp)
0080c4: 00022023   sw	zero, 0(tp)
0080c8: 00022023   sw	zero, 0(tp)
0080cc: 00022023   sw	zero, 0(tp)
0080d0: 00022023   sw	zero, 0(tp)
0080d4: 00022023   sw	zero, 0(tp)
0080d8: 00022023   sw	zero, 0(tp)
0080dc: 00022023   sw	zero, 0(tp)
0080e0: 00022023   sw	zero, 0(tp)
0080e4: 00022023   sw	zero, 0(tp)
0080e8: 00022023   sw	zero, 0(tp)
0080ec: 00022023   sw	zero, 0(tp)
0080f0: 00022023   sw	zero, 0(tp)
0080f4: 00022023   sw	zero, 0(tp)
0080f8: 00022023   sw	zero, 0(tp)
0080fc: 31423683   ld	a3, 788(tp)
008100: 00d576b3   and	a3, a0, a3
008104: fe069ce3   bnez	a3, -8
008108: c00016b7   lui	a3, 786433
00810c: e006869b   addiw	a3, a3, -512
008110: 00d22023   sw	a3, 0(tp)
008114: 00020eb7   lui	t4, 32
008118: 010e169b   slliw	a3, t3, 16
00811c: 00ee8e93   addi	t4, t4, 14
008120: 01d6e6b3   or	a3, a3, t4
008124: 00d22023   sw	a3, 0(tp)
008128: c00f16b7   lui	a3, 786673
00812c: 00d22023   sw	a3, 0(tp)
008130: 00022023   sw	zero, 0(tp)
008134: 00022023   sw	zero, 0(tp)
008138: 00022023   sw	zero, 0(tp)
00813c: 00022023   sw	zero, 0(tp)
008140: 00022023   sw	zero, 0(tp)
008144: 00022023   sw	zero, 0(tp)
008148: 00022023   sw	zero, 0(tp)
00814c: 00022023   sw	zero, 0(tp)
008150: 00022023   sw	zero, 0(tp)
008154: 00022023   sw	zero, 0(tp)
008158: 00022023   sw	zero, 0(tp)
00815c: 00022023   sw	zero, 0(tp)
008160: 00022023   sw	zero, 0(tp)
008164: 00022023   sw	zero, 0(tp)
008168: 00022023   sw	zero, 0(tp)
00816c: 00022023   sw	zero, 0(tp)
008170: 31423683   ld	a3, 788(tp)
008174: 00d576b3   and	a3, a0, a3
008178: fe069ce3   bnez	a3, -8
00817c: 0c026683   lwu	a3, 192(tp)
008180: 0116d69b   srliw	a3, a3, 17
008184: 02068e63   beqz	a3, 60
008188: 001f0e9b   addiw	t4, t5, 1
00818c: 0016ff93   andi	t6, a3, 1
008190: 000e8f1b   sext.w	t5, t4
008194: 020f8263   beqz	t6, 36
008198: 1f026f83   lwu	t6, 496(tp)
00819c: 020f9f93   slli	t6, t6, 32
0081a0: 020fdf93   srli	t6, t6, 32
0081a4: 01f23e23   sd	t6, 28(tp)
0081a8: 100eee93   ori	t4, t4, 256
0081ac: 0bd222a3   sw	t4, 165(tp)
0081b0: 31422003   lw	zero, 788(tp)
0081b4: ee062623   sw	zero, -276(a2)
0081b8: 0016d693   srli	a3, a3, 1
0081bc: fc0696e3   bnez	a3, -52
0081c0: 1f026683   lwu	a3, 496(tp)
0081c4: 02069693   slli	a3, a3, 32
0081c8: 0206d693   srli	a3, a3, 32
0081cc: 00d23e23   sd	a3, 28(tp)
0081d0: 0a0222a3   sw	zero, 165(tp)
0081d4: 31422003   lw	zero, 788(tp)
0081d8: 91c62e23   sw	t3, -1764(a2)
0081dc: ec862e03   lw	t3, -312(a2)
0081e0: 008e569b   srliw	a3, t3, 8
0081e4: 0016f693   andi	a3, a3, 1
0081e8: 000e0e1b   sext.w	t3, t3
0081ec: 000690e3   bnez	a3, 2048
0081f0: b7418e93   addi	t4, gp, -1164
0081f4: 000ea783   lw	a5, 0(t4)
0081f8: 100798e3   bnez	a5, 2320
0081fc: ec062423   sw	zero, -312(a2)
008200: ec866783   lwu	a5, -312(a2)
008204: 00078263   beqz	a5, 4
008208: b601ac23   sw	zero, -1160(gp)
00820c: 0008a783   lw	a5, 0(a7)
008210: 9c078463   beqz	a5, -3640
008214: b601ae23   sw	zero, -1156(gp)
008218: 06022523   sw	zero, 106(tp)
00821c: 1fa23783   ld	a5, 506(tp)
008220: 0000c6b7   lui	a3, 12
008224: 00e787b3   add	a5, a5, a4
008228: 00d787b3   add	a5, a5, a3
00822c: 3807a783   lw	a5, 896(a5)
008230: 46078e63   beqz	a5, 1148
008234: acc62783   lw	a5, -1332(a2)
008238: 00100693   li	a3, 1
00823c: 0007879b   sext.w	a5, a5
008240: 0cd300e3   beq	t1, a3, 2240
008244: 0107d793   srli	a5, a5, 16
008248: 0ff7f793   zext.b	a5, a5
00824c: 3005e593   ori	a1, a1, 768
008250: 0005859b   sext.w	a1, a1
008254: 1fa23683   ld	a3, 506(tp)
008258: 0000c8b7   lui	a7, 12
00825c: 00e686b3   add	a3, a3, a4
008260: 011686b3   add	a3, a3, a7
008264: 62b6a023   sw	a1, 1568(a3)
008268: 0c078a63   beqz	a5, 212
00826c: 1fb26783   lwu	a5, 507(tp)
008270: 0007879b   sext.w	a5, a5
008274: 0c078463   beqz	a5, 200
008278: c00057b7   lui	a5, 786437
00827c: b007879b   addiw	a5, a5, -1280
008280: 00f22023   sw	a5, 0(tp)
008284: 00100793   li	a5, 1
008288: 00f22023   sw	a5, 0(tp)
00828c: c00f17b7   lui	a5, 786673
008290: 00f22023   sw	a5, 0(tp)
008294: 00022023   sw	zero, 0(tp)
008298: 00022023   sw	zero, 0(tp)
00829c: 00022023   sw	zero, 0(tp)
0082a0: 00022023   sw	zero, 0(tp)
0082a4: 00022023   sw	zero, 0(tp)
0082a8: 00022023   sw	zero, 0(tp)
0082ac: 00022023   sw	zero, 0(tp)
0082b0: 00022023   sw	zero, 0(tp)
0082b4: 00022023   sw	zero, 0(tp)
0082b8: 00022023   sw	zero, 0(tp)
0082bc: 00022023   sw	zero, 0(tp)
0082c0: 00022023   sw	zero, 0(tp)
0082c4: 00022023   sw	zero, 0(tp)
0082c8: 00022023   sw	zero, 0(tp)
0082cc: 00022023   sw	zero, 0(tp)
0082d0: 00022023   sw	zero, 0(tp)
0082d4: 31423783   ld	a5, 788(tp)
0082d8: 00f577b3   and	a5, a0, a5
0082dc: fe079ce3   bnez	a5, -8
0082e0: 1fa23783   ld	a5, 506(tp)
0082e4: 0000c5b7   lui	a1, 12
0082e8: 00e787b3   add	a5, a5, a4
0082ec: 00b787b3   add	a5, a5, a1
0082f0: 3bc7a883   lw	a7, 956(a5)
0082f4: 0008889b   sext.w	a7, a7
0082f8: 1fa23783   ld	a5, 506(tp)
0082fc: 00e787b3   add	a5, a5, a4
008300: 00b787b3   add	a5, a5, a1
008304: 3c47a783   lw	a5, 964(a5)
008308: 00200693   li	a3, 2
00830c: 011696bb   sllw	a3, a3, a7
008310: fff6869b   addiw	a3, a3, -1
008314: 00d7f7b3   and	a5, a5, a3
008318: 0007879b   sext.w	a5, a5
00831c: 1fa23683   ld	a3, 506(tp)
008320: 00e686b3   add	a3, a3, a4
008324: 00b686b3   add	a3, a3, a1
008328: 3af6ac23   sw	a5, 952(a3)
00832c: 1fa23683   ld	a3, 506(tp)
008330: 00e686b3   add	a3, a3, a4
008334: 00b686b3   add	a3, a3, a1
008338: 3cf6a023   sw	a5, 960(a3)
00833c: 1fa23683   ld	a3, 506(tp)
008340: 0000c7b7   lui	a5, 12
008344: 00e686b3   add	a3, a3, a4
008348: 00f686b3   add	a3, a3, a5
00834c: 3e86a683   lw	a3, 1000(a3)
008350: 0006869b   sext.w	a3, a3
008354: 1f026583   lwu	a1, 496(tp)
008358: 02059593   slli	a1, a1, 32
00835c: 0205d593   srli	a1, a1, 32
008360: 00b23e23   sd	a1, 28(tp)
008364: 00f6f693   andi	a3, a3, 15
008368: 1006e693   ori	a3, a3, 256
00836c: 0ad222a3   sw	a3, 165(tp)
008370: 31422003   lw	zero, 788(tp)
008374: 1fa23683   ld	a3, 506(tp)
008378: 00e686b3   add	a3, a3, a4
00837c: 00f686b3   add	a3, a3, a5
008380: 3786ae03   lw	t3, 888(a3)
008384: 000e0e1b   sext.w	t3, t3
008388: 1fa23683   ld	a3, 506(tp)
00838c: 00e686b3   add	a3, a3, a4
008390: 00f686b3   add	a3, a3, a5
008394: 37c6a583   lw	a1, 892(a3)
008398: 020e1e93   slli	t4, t3, 32
00839c: 020ede93   srli	t4, t4, 32
0083a0: 02059693   slli	a3, a1, 32
0083a4: 0005889b   sext.w	a7, a1
0083a8: 01d6e6b3   or	a3, a3, t4
0083ac: 1fa23583   ld	a1, 506(tp)
0083b0: 00e585b3   add	a1, a1, a4
0083b4: 00f585b3   add	a1, a1, a5
0083b8: 3e85a583   lw	a1, 1000(a1)
0083bc: 0185de9b   srliw	t4, a1, 24
0083c0: 003efe93   andi	t4, t4, 3
0083c4: 0005859b   sext.w	a1, a1
0083c8: 33d22223   sw	t4, 804(tp)
0083cc: 21c6a023   sw	t3, 512(a3)
0083d0: 2116a223   sw	a7, 516(a3)
0083d4: 1fa23883   ld	a7, 506(tp)
0083d8: 00e888b3   add	a7, a7, a4
0083dc: 00f888b3   add	a7, a7, a5
0083e0: 3808a883   lw	a7, 896(a7)
0083e4: 0008889b   sext.w	a7, a7
0083e8: 2116a423   sw	a7, 520(a3)
0083ec: 1fa23883   ld	a7, 506(tp)
0083f0: 00e888b3   add	a7, a7, a4
0083f4: 00f888b3   add	a7, a7, a5
0083f8: 3848a883   lw	a7, 900(a7)
0083fc: 0008889b   sext.w	a7, a7
008400: 2116a623   sw	a7, 524(a3)
008404: 1fa23883   ld	a7, 506(tp)
008408: 00e888b3   add	a7, a7, a4
00840c: 00f888b3   add	a7, a7, a5
008410: 3908a883   lw	a7, 912(a7)
008414: 0008889b   sext.w	a7, a7
008418: 2116ac23   sw	a7, 536(a3)
00841c: 1fa23883   ld	a7, 506(tp)
008420: 00e888b3   add	a7, a7, a4
008424: 00f888b3   add	a7, a7, a5
008428: 3948a883   lw	a7, 916(a7)
00842c: 0008889b   sext.w	a7, a7
008430: 2116ae23   sw	a7, 540(a3)
008434: 1fa23883   ld	a7, 506(tp)
008438: 00e888b3   add	a7, a7, a4
00843c: 00f888b3   add	a7, a7, a5
008440: 3988a883   lw	a7, 920(a7)
008444: 0008889b   sext.w	a7, a7
008448: 2316a023   sw	a7, 544(a3)
00844c: 1fa23883   ld	a7, 506(tp)
008450: 00e888b3   add	a7, a7, a4
008454: 00f888b3   add	a7, a7, a5
008458: 39c8a883   lw	a7, 924(a7)
00845c: 0008889b   sext.w	a7, a7
008460: 2316a223   sw	a7, 548(a3)
008464: 2206a423   sw	zero, 552(a3)
008468: 1fa23883   ld	a7, 506(tp)
00846c: 00e888b3   add	a7, a7, a4
008470: 00f888b3   add	a7, a7, a5
008474: 3a48a883   lw	a7, 932(a7)
008478: 0008889b   sext.w	a7, a7
00847c: 2316a623   sw	a7, 556(a3)
008480: 1fa23883   ld	a7, 506(tp)
008484: 00e888b3   add	a7, a7, a4
008488: 00f888b3   add	a7, a7, a5
00848c: 3a88a883   lw	a7, 936(a7)
008490: 0008889b   sext.w	a7, a7
008494: 2316a823   sw	a7, 560(a3)
008498: 1fa23883   ld	a7, 506(tp)
00849c: 00e888b3   add	a7, a7, a4
0084a0: 00f888b3   add	a7, a7, a5
0084a4: 3ac8a883   lw	a7, 940(a7)
0084a8: 0008889b   sext.w	a7, a7
0084ac: 2316aa23   sw	a7, 564(a3)
0084b0: 1fa23883   ld	a7, 506(tp)
0084b4: 00e888b3   add	a7, a7, a4
0084b8: 00f888b3   add	a7, a7, a5
0084bc: 3b08a883   lw	a7, 944(a7)
0084c0: 0008889b   sext.w	a7, a7
0084c4: 2316ac23   sw	a7, 568(a3)
0084c8: 1fa23883   ld	a7, 506(tp)
0084cc: 00e888b3   add	a7, a7, a4
0084d0: 00f888b3   add	a7, a7, a5
0084d4: 3b48a883   lw	a7, 948(a7)
0084d8: 0008889b   sext.w	a7, a7
0084dc: 2316ae23   sw	a7, 572(a3)
0084e0: 1fa23883   ld	a7, 506(tp)
0084e4: 00e888b3   add	a7, a7, a4
0084e8: 00f888b3   add	a7, a7, a5
0084ec: 3b88a883   lw	a7, 952(a7)
0084f0: 0008889b   sext.w	a7, a7
0084f4: 2516a023   sw	a7, 576(a3)
0084f8: 1fa23883   ld	a7, 506(tp)
0084fc: 00e888b3   add	a7, a7, a4
008500: 00f888b3   add	a7, a7, a5
008504: 3bc8a883   lw	a7, 956(a7)
008508: 0008889b   sext.w	a7, a7
00850c: 2516a223   sw	a7, 580(a3)
008510: 1fa23883   ld	a7, 506(tp)
008514: 00e888b3   add	a7, a7, a4
008518: 00f888b3   add	a7, a7, a5
00851c: 3c08a883   lw	a7, 960(a7)
008520: 0008889b   sext.w	a7, a7
008524: 2516a823   sw	a7, 592(a3)
008528: 1fa23883   ld	a7, 506(tp)
00852c: 00e888b3   add	a7, a7, a4
008530: 00f888b3   add	a7, a7, a5
008534: 3c48a883   lw	a7, 964(a7)
008538: 0008889b   sext.w	a7, a7
00853c: 2516aa23   sw	a7, 596(a3)
008540: 1fa23883   ld	a7, 506(tp)
008544: 00e888b3   add	a7, a7, a4
008548: 00f888b3   add	a7, a7, a5
00854c: 3c88a883   lw	a7, 968(a7)
008550: 0008889b   sext.w	a7, a7
008554: 2516ac23   sw	a7, 600(a3)
008558: 1fa23883   ld	a7, 506(tp)
00855c: 00e888b3   add	a7, a7, a4
008560: 00f888b3   add	a7, a7, a5
008564: 3d08a883   lw	a7, 976(a7)
008568: 0008889b   sext.w	a7, a7
00856c: 2716a823   sw	a7, 624(a3)
008570: 1fa23883   ld	a7, 506(tp)
008574: 00e888b3   add	a7, a7, a4
008578: 00f888b3   add	a7, a7, a5
00857c: 3d48a883   lw	a7, 980(a7)
008580: 0008889b   sext.w	a7, a7
008584: 2716aa23   sw	a7, 628(a3)
008588: 1fa23883   ld	a7, 506(tp)
00858c: 00e888b3   add	a7, a7, a4
008590: 00f888b3   add	a7, a7, a5
008594: 3e08a883   lw	a7, 992(a7)
008598: 0008889b   sext.w	a7, a7
00859c: 2916a023   sw	a7, 640(a3)
0085a0: 1fa23883   ld	a7, 506(tp)
0085a4: 00e888b3   add	a7, a7, a4
0085a8: 00f888b3   add	a7, a7, a5
0085ac: 3e48a883   lw	a7, 996(a7)
0085b0: 0008889b   sext.w	a7, a7
0085b4: 2916a223   sw	a7, 644(a3)
0085b8: fffff8b7   lui	a7, 1048575
0085bc: fff88893   addi	a7, a7, -1
0085c0: 0115f5b3   and	a1, a1, a7
0085c4: 28b6a423   sw	a1, 648(a3)
0085c8: 1fa23583   ld	a1, 506(tp)
0085cc: 00e585b3   add	a1, a1, a4
0085d0: 00f585b3   add	a1, a1, a5
0085d4: 3c05a223   sw	zero, 964(a1)
0085d8: 1fa23583   ld	a1, 506(tp)
0085dc: 00e585b3   add	a1, a1, a4
0085e0: 00f585b3   add	a1, a1, a5
0085e4: 3c05a423   sw	zero, 968(a1)
0085e8: 1fa23583   ld	a1, 506(tp)
0085ec: 00e585b3   add	a1, a1, a4
0085f0: 00f585b3   add	a1, a1, a5
0085f4: 3c05a023   sw	zero, 960(a1)
0085f8: 1fa23583   ld	a1, 506(tp)
0085fc: 00e585b3   add	a1, a1, a4
008600: 00f587b3   add	a5, a1, a5
008604: 3a07a023   sw	zero, 928(a5)
008608: c00057b7   lui	a5, 786437
00860c: b007879b   addiw	a5, a5, -1280
008610: 00f22023   sw	a5, 0(tp)
008614: 00100793   li	a5, 1
008618: 00f22023   sw	a5, 0(tp)
00861c: c00f17b7   lui	a5, 786673
008620: 00f22023   sw	a5, 0(tp)
008624: 00022023   sw	zero, 0(tp)
008628: 00022023   sw	zero, 0(tp)
00862c: 00022023   sw	zero, 0(tp)
008630: 00022023   sw	zero, 0(tp)
008634: 00022023   sw	zero, 0(tp)
008638: 00022023   sw	zero, 0(tp)
00863c: 00022023   sw	zero, 0(tp)
008640: 00022023   sw	zero, 0(tp)
008644: 00022023   sw	zero, 0(tp)
008648: 00022023   sw	zero, 0(tp)
00864c: 00022023   sw	zero, 0(tp)
008650: 00022023   sw	zero, 0(tp)
008654: 00022023   sw	zero, 0(tp)
008658: 00022023   sw	zero, 0(tp)
00865c: 00022023   sw	zero, 0(tp)
008660: 00022023   sw	zero, 0(tp)
008664: 31423783   ld	a5, 788(tp)
008668: 00f577b3   and	a5, a0, a5
00866c: fe079ce3   bnez	a5, -8
008670: 01226783   lwu	a5, 18(tp)
008674: 0007879b   sext.w	a5, a5
008678: fe079ce3   bnez	a5, -8
00867c: 2006a423   sw	zero, 520(a3)
008680: 1fa23783   ld	a5, 506(tp)
008684: 0000c6b7   lui	a3, 12
008688: 00e787b3   add	a5, a5, a4
00868c: 00d787b3   add	a5, a5, a3
008690: 3807a023   sw	zero, 896(a5)
008694: 1f026783   lwu	a5, 496(tp)
008698: 02079793   slli	a5, a5, 32
00869c: 0207d793   srli	a5, a5, 32
0086a0: 00f23e23   sd	a5, 28(tp)
0086a4: 0a0222a3   sw	zero, 165(tp)
0086a8: 31422003   lw	zero, 788(tp)
0086ac: 1fa23783   ld	a5, 506(tp)
0086b0: 0000c6b7   lui	a3, 12
0086b4: 00e787b3   add	a5, a5, a4
0086b8: 00d787b3   add	a5, a5, a3
0086bc: 3c07a623   sw	zero, 972(a5)
0086c0: 1fb26783   lwu	a5, 507(tp)
0086c4: 0007879b   sext.w	a5, a5
0086c8: 00079463   bnez	a5, 8
0086cc: d0dfe06f   j	-4852
0086d0: 00100793   li	a5, 1
0086d4: 02f22823   sw	a5, 48(tp)
0086d8: 02026783   lwu	a5, 32(tp)
0086dc: 0027f793   andi	a5, a5, 2
0086e0: fe078ce3   beqz	a5, -8
0086e4: acc62783   lw	a5, -1332(a2)
0086e8: 0007879b   sext.w	a5, a5
0086ec: 04f12c23   sw	a5, 88(sp)
0086f0: 05812783   lw	a5, 88(sp)
0086f4: 02078863   beqz	a5, 48
0086f8: 00100793   li	a5, 1
0086fc: 48f30e63   beq	t1, a5, 1180
008700: 04010d23   sb	zero, 90(sp)
008704: 05a14783   lbu	a5, 90(sp)
008708: 00079863   bnez	a5, 16
00870c: 05b14783   lbu	a5, 91(sp)
008710: 00079463   bnez	a5, 8
008714: 04012c23   sw	zero, 88(sp)
008718: 05812783   lw	a5, 88(sp)
00871c: 0007879b   sext.w	a5, a5
008720: acf62623   sw	a5, -1332(a2)
008724: 00100793   li	a5, 1
008728: 02f228a3   sw	a5, 49(tp)
00872c: 1e022da3   sw	zero, 507(tp)
008730: ca9fe06f   j	-4952
008734: 96452603   lw	a2, -1692(a0)
008738: f00006b7   lui	a3, 983040
00873c: fff68693   addi	a3, a3, -1
008740: 00c6f6b3   and	a3, a3, a2
008744: b781ae03   lw	t3, -1160(gp)
008748: 0006061b   sext.w	a2, a2
00874c: 00de0463   beq	t3, a3, 8
008750: 000e0613   mv	a2, t3
008754: 02461e13   slli	t3, a2, 36
008758: b601ac23   sw	zero, -1160(gp)
00875c: 00cea023   sw	a2, 0(t4)
008760: 027e5e13   srli	t3, t3, 39
008764: 00300693   li	a3, 3
008768: 000e0463   beqz	t3, 8
00876c: 000e0693   mv	a3, t3
008770: 60000e37   lui	t3, 393216
008774: 02469693   slli	a3, a3, 36
008778: 01c67633   and	a2, a2, t3
00877c: 0246d693   srli	a3, a3, 36
008780: 00c6e6b3   or	a3, a3, a2
008784: 0006869b   sext.w	a3, a3
008788: 80000637   lui	a2, 524288
00878c: 96d52223   sw	a3, -1692(a0)
008790: 00c6e6b3   or	a3, a3, a2
008794: 96d52223   sw	a3, -1692(a0)
008798: ec852603   lw	a2, -312(a0)
00879c: 3f000e37   lui	t3, 258048
0087a0: 02861693   slli	a3, a2, 40
0087a4: 0286d693   srli	a3, a3, 40
0087a8: 01c67633   and	a2, a2, t3
0087ac: 00c6e6b3   or	a3, a3, a2
0087b0: 0006869b   sext.w	a3, a3
0087b4: ecd52423   sw	a3, -312(a0)
0087b8: ec856683   lwu	a3, -312(a0)
0087bc: 00068263   beqz	a3, 4
0087c0: 950ff06f   j	-3760
0087c4: 02861693   slli	a3, a2, 40
0087c8: 3f0008b7   lui	a7, 258048
0087cc: 01167633   and	a2, a2, a7
0087d0: 0286d693   srli	a3, a3, 40
0087d4: 00c6e6b3   or	a3, a3, a2
0087d8: 0006869b   sext.w	a3, a3
0087dc: ecd52423   sw	a3, -312(a0)
0087e0: ec856683   lwu	a3, -312(a0)
0087e4: 00068263   beqz	a3, 4
0087e8: b7c18893   addi	a7, gp, -1156
0087ec: 0008a683   lw	a3, 0(a7)
0087f0: 0c068e63   beqz	a3, 220
0087f4: ec852683   lw	a3, -312(a0)
0087f8: 80000e37   lui	t3, 524288
0087fc: 001e0313   addi	t1, t3, 1
008800: 0066f633   and	a2, a3, t1
008804: 0006061b   sext.w	a2, a2
008808: 0006869b   sext.w	a3, a3
00880c: 10660663   beq	a2, t1, 268
008810: 0a06ce63   bltz	a3, 188
008814: 0016f613   andi	a2, a3, 1
008818: 0a060a63   beqz	a2, 180
00881c: 0086d69b   srliw	a3, a3, 8
008820: 0016f693   andi	a3, a3, 1
008824: 0a068463   beqz	a3, 168
008828: 00de0693   addi	a3, t3, 13
00882c: ecd52423   sw	a3, -312(a0)
008830: ec856603   lwu	a2, -312(a0)
008834: 00060263   beqz	a2, 4
008838: ec852603   lw	a2, -312(a0)
00883c: 00d67633   and	a2, a2, a3
008840: 0006061b   sext.w	a2, a2
008844: 08d61463   bne	a2, a3, 136
008848: ec852683   lw	a3, -312(a0)
00884c: ac052603   lw	a2, -1344(a0)
008850: 400e0693   addi	a3, t3, 1024
008854: 0ff67613   zext.b	a2, a2
008858: 00d66633   or	a2, a2, a3
00885c: 00100693   li	a3, 1
008860: 00d8a023   sw	a3, 0(a7)
008864: 0006061b   sext.w	a2, a2
008868: 1fa23683   ld	a3, 506(tp)
00886c: 0000c8b7   lui	a7, 12
008870: 00d706b3   add	a3, a4, a3
008874: 011686b3   add	a3, a3, a7
008878: 3cc6ac23   sw	a2, 984(a3)
00887c: 0075f613   andi	a2, a1, 7
008880: 00100693   li	a3, 1
008884: 06d223a3   sw	a3, 103(tp)
008888: f14026f3   csrr	a3, mhartid
00888c: 0036f693   andi	a3, a3, 3
008890: 01c6969b   slliw	a3, a3, 28
008894: fc8005b7   lui	a1, 1034240
008898: 00d366b3   or	a3, t1, a3
00889c: 00164613   xori	a2, a2, 1
0088a0: fff58593   addi	a1, a1, -1
0088a4: 0176161b   slliw	a2, a2, 23
0088a8: 00b6f6b3   and	a3, a3, a1
0088ac: 00c6e6b3   or	a3, a3, a2
0088b0: 0006869b   sext.w	a3, a3
0088b4: e0d52623   sw	a3, -500(a0)
0088b8: e0c52603   lw	a2, -500(a0)
0088bc: 00167613   andi	a2, a2, 1
0088c0: fe060ae3   beqz	a2, -12
0088c4: e0052623   sw	zero, -500(a0)
0088c8: 060223a3   sw	zero, 103(tp)
0088cc: 0001e6b7   lui	a3, 30
0088d0: c0468693   addi	a3, a3, -1020
0088d4: 00d506b3   add	a3, a0, a3
0088d8: 0006e683   lwu	a3, 0(a3)
0088dc: 00068263   beqz	a3, 4
0088e0: 1fa23683   ld	a3, 506(tp)
0088e4: 00d70733   add	a4, a4, a3
0088e8: 0000c6b7   lui	a3, 12
0088ec: 00d70733   add	a4, a4, a3
0088f0: 200006b7   lui	a3, 131072
0088f4: 34d72423   sw	a3, 840(a4)
0088f8: 1fa23703   ld	a4, 506(tp)
0088fc: 00e80733   add	a4, a6, a4
008900: 00076703   lwu	a4, 0(a4)
008904: 00070263   beqz	a4, 4
008908: 060223a3   sw	zero, 103(tp)
00890c: 06022523   sw	zero, 106(tp)
008910: 013787b3   add	a5, a5, s3
008914: c68fb06f   j	-19352
008918: 0016d61b   srliw	a2, a3, 1
00891c: 00167313   andi	t1, a2, 1
008920: 07f67613   andi	a2, a2, 127
008924: 02031263   bnez	t1, 36
008928: 4016561b   sraiw	a2, a2, 1
00892c: 00367613   andi	a2, a2, 3
008930: 00061c63   bnez	a2, 24
008934: f016f693   andi	a3, a3, -255
008938: 00c6e693   ori	a3, a3, 12
00893c: ecd52423   sw	a3, -312(a0)
008940: ec856683   lwu	a3, -312(a0)
008944: 00068263   beqz	a3, 4
008948: ac052683   lw	a3, -1344(a0)
00894c: 80000637   lui	a2, 524288
008950: 40060613   addi	a2, a2, 1024
008954: 0ff6f693   zext.b	a3, a3
008958: 00c6e6b3   or	a3, a3, a2
00895c: 00100613   li	a2, 1
008960: 00c8a023   sw	a2, 0(a7)
008964: 0006869b   sext.w	a3, a3
008968: 1fa23603   ld	a2, 506(tp)
00896c: 0000c8b7   lui	a7, 12
008970: 00c70633   add	a2, a4, a2
008974: 01160633   add	a2, a2, a7
008978: 3cd62c23   sw	a3, 984(a2)
00897c: 0075f613   andi	a2, a1, 7
008980: 00100693   li	a3, 1
008984: 06d223a3   sw	a3, 103(tp)
008988: 800006b7   lui	a3, 524288
00898c: d00008b7   lui	a7, 851968
008990: 0016869b   addiw	a3, a3, 1
008994: fff88893   addi	a7, a7, -1
008998: f14025f3   csrr	a1, mhartid
00899c: 0035f593   andi	a1, a1, 3
0089a0: 01c5959b   slliw	a1, a1, 28
0089a4: 0116f6b3   and	a3, a3, a7
0089a8: 00b6e6b3   or	a3, a3, a1
0089ac: fc8005b7   lui	a1, 1034240
0089b0: 00164613   xori	a2, a2, 1
0089b4: fff58593   addi	a1, a1, -1
0089b8: 0176161b   slliw	a2, a2, 23
0089bc: 00b6f6b3   and	a3, a3, a1
0089c0: 00c6e6b3   or	a3, a3, a2
0089c4: 0006869b   sext.w	a3, a3
0089c8: e0d52623   sw	a3, -500(a0)
0089cc: e0c52603   lw	a2, -500(a0)
0089d0: 00167613   andi	a2, a2, 1
0089d4: fe060ae3   beqz	a2, -12
0089d8: eedff06f   j	-276
0089dc: 0186d69b   srliw	a3, a3, 24
0089e0: f9dfe06f   j	-4196
0089e4: 040105a3   sb	zero, 75(sp)
0089e8: c48ff06f   j	-3000
0089ec: 028e1693   slli	a3, t3, 40
0089f0: 3f000537   lui	a0, 258048
0089f4: 00ae7e33   and	t3, t3, a0
0089f8: 0286d693   srli	a3, a3, 40
0089fc: 01c6e6b3   or	a3, a3, t3
008a00: 0006869b   sext.w	a3, a3
008a04: ecd62423   sw	a3, -312(a2)
008a08: ec866683   lwu	a3, -312(a2)
008a0c: 00068263   beqz	a3, 4
008a10: 0008a683   lw	a3, 0(a7)
008a14: 0c068e63   beqz	a3, 220
008a18: ec862683   lw	a3, -312(a2)
008a1c: 80000e37   lui	t3, 524288
008a20: 001e0313   addi	t1, t3, 1
008a24: 0066f533   and	a0, a3, t1
008a28: 0005051b   sext.w	a0, a0
008a2c: 0006869b   sext.w	a3, a3
008a30: 16650863   beq	a0, t1, 368
008a34: 0a06ce63   bltz	a3, 188
008a38: 0016f513   andi	a0, a3, 1
008a3c: 0a050a63   beqz	a0, 180
008a40: 0086d69b   srliw	a3, a3, 8
008a44: 0016f693   andi	a3, a3, 1
008a48: 0a068463   beqz	a3, 168
008a4c: 00de0693   addi	a3, t3, 13
008a50: ecd62423   sw	a3, -312(a2)
008a54: ec866503   lwu	a0, -312(a2)
008a58: 00050263   beqz	a0, 4
008a5c: ec862503   lw	a0, -312(a2)
008a60: 00d57533   and	a0, a0, a3
008a64: 0005051b   sext.w	a0, a0
008a68: 08d51463   bne	a0, a3, 136
008a6c: ec862683   lw	a3, -312(a2)
008a70: ac062503   lw	a0, -1344(a2)
008a74: 400e0693   addi	a3, t3, 1024
008a78: 0ff57513   zext.b	a0, a0
008a7c: 00d56533   or	a0, a0, a3
008a80: 00100693   li	a3, 1
008a84: 00d8a023   sw	a3, 0(a7)
008a88: 0005051b   sext.w	a0, a0
008a8c: 1fa23683   ld	a3, 506(tp)
008a90: 0000c8b7   lui	a7, 12
008a94: 00e686b3   add	a3, a3, a4
008a98: 011686b3   add	a3, a3, a7
008a9c: 3ca6ac23   sw	a0, 984(a3)
008aa0: 0075f593   andi	a1, a1, 7
008aa4: 00100693   li	a3, 1
008aa8: 06d223a3   sw	a3, 103(tp)
008aac: f14026f3   csrr	a3, mhartid
008ab0: 0036f693   andi	a3, a3, 3
008ab4: 01c6969b   slliw	a3, a3, 28
008ab8: fc800537   lui	a0, 1034240
008abc: 00d366b3   or	a3, t1, a3
008ac0: 0015c593   xori	a1, a1, 1
008ac4: fff50513   addi	a0, a0, -1
008ac8: 0175959b   slliw	a1, a1, 23
008acc: 00a6f6b3   and	a3, a3, a0
008ad0: 00b6e6b3   or	a3, a3, a1
008ad4: 0006869b   sext.w	a3, a3
008ad8: e0d62623   sw	a3, -500(a2)
008adc: e0c62583   lw	a1, -500(a2)
008ae0: 0015f593   andi	a1, a1, 1
008ae4: fe058ae3   beqz	a1, -12
008ae8: e0062623   sw	zero, -500(a2)
008aec: 060223a3   sw	zero, 103(tp)
008af0: 0001e6b7   lui	a3, 30
008af4: c0468693   addi	a3, a3, -1020
008af8: 00d606b3   add	a3, a2, a3
008afc: dddff06f   j	-548
008b00: 0187d79b   srliw	a5, a5, 24
008b04: f48ff06f   j	-2232
008b08: 96462683   lw	a3, -1692(a2)
008b0c: f00007b7   lui	a5, 983040
008b10: fff78793   addi	a5, a5, -1
008b14: 00d7f7b3   and	a5, a5, a3
008b18: b781ae03   lw	t3, -1160(gp)
008b1c: 0006869b   sext.w	a3, a3
008b20: 00fe0463   beq	t3, a5, 8
008b24: 000e0693   mv	a3, t3
008b28: 02469e13   slli	t3, a3, 36
008b2c: b601ac23   sw	zero, -1160(gp)
008b30: 00dea023   sw	a3, 0(t4)
008b34: 027e5e13   srli	t3, t3, 39
008b38: 00300793   li	a5, 3
008b3c: 000e0463   beqz	t3, 8
008b40: 000e0793   mv	a5, t3
008b44: 60000e37   lui	t3, 393216
008b48: 02479793   slli	a5, a5, 36
008b4c: 01c6f6b3   and	a3, a3, t3
008b50: 0247d793   srli	a5, a5, 36
008b54: 00d7e7b3   or	a5, a5, a3
008b58: 0007879b   sext.w	a5, a5
008b5c: 800006b7   lui	a3, 524288
008b60: 96f62223   sw	a5, -1692(a2)
008b64: 00d7e7b3   or	a5, a5, a3
008b68: 96f62223   sw	a5, -1692(a2)
008b6c: ec862683   lw	a3, -312(a2)
008b70: 3f000e37   lui	t3, 258048
008b74: 02869793   slli	a5, a3, 40
008b78: 0287d793   srli	a5, a5, 40
008b7c: 01c6f6b3   and	a3, a3, t3
008b80: 00d7e7b3   or	a5, a5, a3
008b84: 0007879b   sext.w	a5, a5
008b88: ecf62423   sw	a5, -312(a2)
008b8c: ec866783   lwu	a5, -312(a2)
008b90: 00078263   beqz	a5, 4
008b94: e78ff06f   j	-2440
008b98: 04010da3   sb	zero, 91(sp)
008b9c: b69ff06f   j	-1176
008ba0: 0016d51b   srliw	a0, a3, 1
008ba4: 00157313   andi	t1, a0, 1
008ba8: 07f57513   andi	a0, a0, 127
008bac: 02031263   bnez	t1, 36
008bb0: 4015551b   sraiw	a0, a0, 1
008bb4: 00357513   andi	a0, a0, 3
008bb8: 00051c63   bnez	a0, 24
008bbc: f016f693   andi	a3, a3, -255
008bc0: 00c6e693   ori	a3, a3, 12
008bc4: ecd62423   sw	a3, -312(a2)
008bc8: ec866683   lwu	a3, -312(a2)
008bcc: 00068263   beqz	a3, 4
008bd0: ac062683   lw	a3, -1344(a2)
008bd4: 80000537   lui	a0, 524288
008bd8: 40050513   addi	a0, a0, 1024
008bdc: 0ff6f693   zext.b	a3, a3
008be0: 00a6e6b3   or	a3, a3, a0
008be4: 00100513   li	a0, 1
008be8: 00a8a023   sw	a0, 0(a7)
008bec: 0006869b   sext.w	a3, a3
008bf0: 1fa23503   ld	a0, 506(tp)
008bf4: 0000c8b7   lui	a7, 12
008bf8: 00e50533   add	a0, a0, a4
008bfc: 01150533   add	a0, a0, a7
008c00: 3cd52c23   sw	a3, 984(a0)
008c04: 0075f593   andi	a1, a1, 7
008c08: 00100693   li	a3, 1
008c0c: 06d223a3   sw	a3, 103(tp)
008c10: 800006b7   lui	a3, 524288
008c14: d00008b7   lui	a7, 851968
008c18: 0016869b   addiw	a3, a3, 1
008c1c: fff88893   addi	a7, a7, -1
008c20: f1402573   csrr	a0, mhartid
008c24: 00357513   andi	a0, a0, 3
008c28: 01c5151b   slliw	a0, a0, 28
008c2c: 0116f6b3   and	a3, a3, a7
008c30: 00a6e6b3   or	a3, a3, a0
008c34: fc800537   lui	a0, 1034240
008c38: 0015c593   xori	a1, a1, 1
008c3c: fff50513   addi	a0, a0, -1
008c40: 0175959b   slliw	a1, a1, 23
008c44: 00a6f6b3   and	a3, a3, a0
008c48: 00b6e6b3   or	a3, a3, a1
008c4c: 0006869b   sext.w	a3, a3
008c50: e0d62623   sw	a3, -500(a2)
008c54: e0c62583   lw	a1, -500(a2)
008c58: 0015f593   andi	a1, a1, 1
008c5c: fe058ae3   beqz	a1, -12
008c60: e89ff06f   j	-376
008c64: bc01b823   sd	zero, -1072(gp)
008c68: 01c02783   lw	a5, 28(zero)
008c6c: 00100073   ebreak
008c70: 84018793   addi	a5, gp, -1984
008c74: 8a01ae23   sw	zero, -1860(gp)
008c78: 0007b023   sd	zero, 0(a5)
008c7c: 0007b423   sd	zero, 8(a5)
008c80: 0007b823   sd	zero, 16(a5)
008c84: 0007bc23   sd	zero, 24(a5)
008c88: 0207b023   sd	zero, 32(a5)
008c8c: 020220a3   sw	zero, 33(tp)
008c90: 02022123   sw	zero, 34(tp)
008c94: 700bb0a3   sd	zero, 1793(s7)
008c98: 1e022fa3   sw	zero, 511(tp)
008c9c: 00008067   ret
008ca0: 0a926683   lwu	a3, 169(tp)
008ca4: f1402773   csrr	a4, mhartid
008ca8: 1fa23783   ld	a5, 506(tp)
008cac: 0027171b   slliw	a4, a4, 2
008cb0: 0046969b   slliw	a3, a3, 4
008cb4: 0706f693   andi	a3, a3, 112
008cb8: 00c77713   andi	a4, a4, 12
008cbc: 00d76733   or	a4, a4, a3
008cc0: 02471713   slli	a4, a4, 36
008cc4: 00e787b3   add	a5, a5, a4
008cc8: 0000c6b7   lui	a3, 12
008ccc: 00d787b3   add	a5, a5, a3
008cd0: 3c07a783   lw	a5, 960(a5)
008cd4: 0007879b   sext.w	a5, a5
008cd8: 60fbab23   sw	a5, 1558(s7)
008cdc: 1e022fa3   sw	zero, 511(tp)
008ce0: 00100793   li	a5, 1
008ce4: 04f227a3   sw	a5, 79(tp)
008ce8: 09526783   lwu	a5, 149(tp)
008cec: 0007879b   sext.w	a5, a5
008cf0: fe078ce3   beqz	a5, -8
008cf4: 09226683   lwu	a3, 146(tp)
008cf8: 0006879b   sext.w	a5, a3
008cfc: 02078063   beqz	a5, 32
008d00: 00d22a23   sw	a3, 20(tp)
008d04: 02069693   slli	a3, a3, 32
008d08: 00000793   li	a5, 0
008d0c: 0206d693   srli	a3, a3, 32
008d10: 30226603   lwu	a2, 770(tp)
008d14: 00178793   addi	a5, a5, 1
008d18: fed79ce3   bne	a5, a3, -8
008d1c: 1fa23783   ld	a5, 506(tp)
008d20: 0000c6b7   lui	a3, 12
008d24: 00f707b3   add	a5, a4, a5
008d28: 00d787b3   add	a5, a5, a3
008d2c: 3987a603   lw	a2, 920(a5)
008d30: 0006061b   sext.w	a2, a2
008d34: 1fa23783   ld	a5, 506(tp)
008d38: 00f707b3   add	a5, a4, a5
008d3c: 00d787b3   add	a5, a5, a3
008d40: 38c7ac23   sw	a2, 920(a5)
008d44: 1fa23783   ld	a5, 506(tp)
008d48: 00f70733   add	a4, a4, a5
008d4c: 00d70733   add	a4, a4, a3
008d50: 00100793   li	a5, 1
008d54: 3c072023   sw	zero, 960(a4)
008d58: 86f1a023   sw	a5, -1952(gp)
008d5c: 00008067   ret
008d60: 84018793   addi	a5, gp, -1984
008d64: 00100713   li	a4, 1
008d68: 02e7a223   sw	a4, 36(a5)
008d6c: 01523703   ld	a4, 21(tp)
008d70: fff70693   addi	a3, a4, -1
008d74: 00020513   mv	a0, tp
008d78: 00e20733   add	a4, tp, a4
008d7c: 08576603   lwu	a2, 133(a4)
008d80: 00469713   slli	a4, a3, 4
008d84: 00e78733   add	a4, a5, a4
008d88: 40b6063b   subw	a2, a2, a1
008d8c: 00c72023   sw	a2, 0(a4)
008d90: 01c23703   ld	a4, 28(tp)
008d94: 00e7b423   sd	a4, 8(a5)
008d98: 01d23703   ld	a4, 29(tp)
008d9c: 00e7bc23   sd	a4, 24(a5)
008da0: 0a223783   ld	a5, 162(tp)
008da4: 00100713   li	a4, 1
008da8: 08e22223   sw	a4, 132(tp)
008dac: 0207d613   srli	a2, a5, 32
008db0: 00c22023   sw	a2, 0(tp)
008db4: 00f22023   sw	a5, 0(tp)
008db8: 0ac26783   lwu	a5, 172(tp)
008dbc: 0007879b   sext.w	a5, a5
008dc0: 00078a63   beqz	a5, 20
008dc4: 06e22ea3   sw	a4, 125(tp)
008dc8: 00022023   sw	zero, 0(tp)
008dcc: 00200793   li	a5, 2
008dd0: 00f22023   sw	a5, 0(tp)
008dd4: 0026969b   slliw	a3, a3, 2
008dd8: 0a926603   lwu	a2, 169(tp)
008ddc: f1402773   csrr	a4, mhartid
008de0: 1fa23783   ld	a5, 506(tp)
008de4: 0027171b   slliw	a4, a4, 2
008de8: 0046161b   slliw	a2, a2, 4
008dec: 07067613   andi	a2, a2, 112
008df0: 00c77713   andi	a4, a4, 12
008df4: 00c76733   or	a4, a4, a2
008df8: 02471713   slli	a4, a4, 36
008dfc: 00e787b3   add	a5, a5, a4
008e00: 0000c637   lui	a2, 12
008e04: 00c787b3   add	a5, a5, a2
008e08: 3c07a783   lw	a5, 960(a5)
008e0c: 0036e613   ori	a2, a3, 3
008e10: 0007879b   sext.w	a5, a5
008e14: 60fbab23   sw	a5, 1558(s7)
008e18: 1e052fa3   sw	zero, 511(a0)
008e1c: 04c227a3   sw	a2, 79(tp)
008e20: 09526783   lwu	a5, 149(tp)
008e24: 0007879b   sext.w	a5, a5
008e28: fe078ce3   beqz	a5, -8
008e2c: 0046f693   andi	a3, a3, 4
008e30: 02068463   beqz	a3, 40
008e34: 09426683   lwu	a3, 148(tp)
008e38: 0006879b   sext.w	a5, a3
008e3c: 0e079663   bnez	a5, 236
008e40: 00100793   li	a5, 1
008e44: 04f22723   sw	a5, 78(tp)
008e48: 00200793   li	a5, 2
008e4c: 0af220a3   sw	a5, 161(tp)
008e50: 00100793   li	a5, 1
008e54: 00f23d23   sd	a5, 26(tp)
008e58: 09326683   lwu	a3, 147(tp)
008e5c: 0006879b   sext.w	a5, a3
008e60: 02078063   beqz	a5, 32
008e64: 00d22aa3   sw	a3, 21(tp)
008e68: 02069693   slli	a3, a3, 32
008e6c: 00000793   li	a5, 0
008e70: 0206d693   srli	a3, a3, 32
008e74: 30226603   lwu	a2, 770(tp)
008e78: 00178793   addi	a5, a5, 1
008e7c: fed79ce3   bne	a5, a3, -8
008e80: 00100793   li	a5, 1
008e84: 04f22723   sw	a5, 78(tp)
008e88: 0af220a3   sw	a5, 161(tp)
008e8c: 1f026783   lwu	a5, 496(tp)
008e90: 02079793   slli	a5, a5, 32
008e94: 0207d793   srli	a5, a5, 32
008e98: 00f23e23   sd	a5, 28(tp)
008e9c: 00023d23   sd	zero, 26(tp)
008ea0: 09226683   lwu	a3, 146(tp)
008ea4: 0006879b   sext.w	a5, a3
008ea8: 02078063   beqz	a5, 32
008eac: 00d22a23   sw	a3, 20(tp)
008eb0: 02069693   slli	a3, a3, 32
008eb4: 00000793   li	a5, 0
008eb8: 0206d693   srli	a3, a3, 32
008ebc: 30226603   lwu	a2, 770(tp)
008ec0: 00178793   addi	a5, a5, 1
008ec4: fef69ce3   bne	a3, a5, -8
008ec8: 1fa23783   ld	a5, 506(tp)
008ecc: 0000c6b7   lui	a3, 12
008ed0: 00f707b3   add	a5, a4, a5
008ed4: 00d787b3   add	a5, a5, a3
008ed8: 3987a603   lw	a2, 920(a5)
008edc: 0006061b   sext.w	a2, a2
008ee0: 1fa23783   ld	a5, 506(tp)
008ee4: 00f707b3   add	a5, a4, a5
008ee8: 00d787b3   add	a5, a5, a3
008eec: 38c7ac23   sw	a2, 920(a5)
008ef0: 1fa23783   ld	a5, 506(tp)
008ef4: 00f70733   add	a4, a4, a5
008ef8: 00d70733   add	a4, a4, a3
008efc: 3c072023   sw	zero, 960(a4)
008f00: 03326683   lwu	a3, 51(tp)
008f04: 02326783   lwu	a5, 35(tp)
008f08: 00100713   li	a4, 1
008f0c: 00f717bb   sllw	a5, a4, a5
008f10: 00d7e7b3   or	a5, a5, a3
008f14: 04f22c23   sw	a5, 88(tp)
008f18: 00023d23   sd	zero, 26(tp)
008f1c: 04e22123   sw	a4, 66(tp)
008f20: 04e221a3   sw	a4, 67(tp)
008f24: 00008067   ret
008f28: 00d22b23   sw	a3, 22(tp)
008f2c: 02069693   slli	a3, a3, 32
008f30: 00000793   li	a5, 0
008f34: 0206d693   srli	a3, a3, 32
008f38: 30226603   lwu	a2, 770(tp)
008f3c: 00178793   addi	a5, a5, 1
008f40: fed79ce3   bne	a5, a3, -8
008f44: efdff06f   j	-260
008f48: 00100593   li	a1, 1
008f4c: e15ff06f   j	-492
008f50: bd01b603   ld	a2, -1072(gp)
008f54: 08060793   addi	a5, a2, 128
008f58: 84018713   addi	a4, gp, -1984
008f5c: 0a860613   addi	a2, a2, 168
008f60: 0007b683   ld	a3, 0(a5)
008f64: 00878793   addi	a5, a5, 8
008f68: 00870713   addi	a4, a4, 8
008f6c: fed73c23   sd	a3, -8(a4)
008f70: fec798e3   bne	a5, a2, -16
008f74: 00008067   ret
008f78: bb81b683   ld	a3, -1096(gp)
008f7c: 86818793   addi	a5, gp, -1944
008f80: 1e468693   addi	a3, a3, 484
008f84: 8c018613   addi	a2, gp, -1856
008f88: 40f686b3   sub	a3, a3, a5
008f8c: 00f68733   add	a4, a3, a5
008f90: 00073703   ld	a4, 0(a4)
008f94: 00878793   addi	a5, a5, 8
008f98: fee7bc23   sd	a4, -8(a5)
008f9c: fec798e3   bne	a5, a2, -16
008fa0: 00008067   ret
008fa4: 00000013   nop
008fa8: 02c26783   lwu	a5, 44(tp)
008fac: 00a231a3   sd	a0, 3(tp)
008fb0: 0797e793   ori	a5, a5, 121
008fb4: 00f221a3   sw	a5, 3(tp)
008fb8: 00008067   ret
008fbc: 00000013   nop
008fc0: 84018793   addi	a5, gp, -1984
008fc4: 0007a703   lw	a4, 0(a5)
008fc8: 08e22623   sw	a4, 140(tp)
008fcc: 0107a703   lw	a4, 16(a5)
008fd0: 08e226a3   sw	a4, 141(tp)
008fd4: 0087b703   ld	a4, 8(a5)
008fd8: 02e230a3   sd	a4, 33(tp)
008fdc: 0187b783   ld	a5, 24(a5)
008fe0: 02f23123   sd	a5, 34(tp)
008fe4: 86818793   addi	a5, gp, -1944
008fe8: 0007b703   ld	a4, 0(a5)
008fec: 00e23fa3   sd	a4, 31(tp)
008ff0: 0087b703   ld	a4, 8(a5)
008ff4: 02e23023   sd	a4, 32(tp)
008ff8: 1f026703   lwu	a4, 496(tp)
008ffc: 02071713   slli	a4, a4, 32
009000: 02075713   srli	a4, a4, 32
009004: 00e23e23   sd	a4, 28(tp)
009008: 0187b703   ld	a4, 24(a5)
00900c: 00e23ea3   sd	a4, 29(tp)
009010: 020225a3   sw	zero, 43(tp)
009014: 05778703   lb	a4, 87(a5)
009018: 06074863   bltz	a4, 112
00901c: 00022923   sw	zero, 18(tp)
009020: 31422003   lw	zero, 788(tp)
009024: 04c7a703   lw	a4, 76(a5)
009028: 02e227a3   sw	a4, 47(tp)
00902c: 0507a683   lw	a3, 80(a5)
009030: 0001c737   lui	a4, 28
009034: 00ec8733   add	a4, s9, a4
009038: 28d72423   sw	a3, 648(a4)
00903c: c0018737   lui	a4, 786456
009040: a007071b   addiw	a4, a4, -1536
009044: 00e22023   sw	a4, 0(tp)
009048: 24d00713   li	a4, 589
00904c: 00e22023   sw	a4, 0(tp)
009050: 00d22023   sw	a3, 0(tp)
009054: 0487a703   lw	a4, 72(a5)
009058: 00100793   li	a5, 1
00905c: 00377693   andi	a3, a4, 3
009060: 00d797bb   sllw	a5, a5, a3
009064: 28edaa23   sw	a4, 660(s11)
009068: 0037f793   andi	a5, a5, 3
00906c: 00f22e23   sw	a5, 28(tp)
009070: 1ef22823   sw	a5, 496(tp)
009074: c00037b7   lui	a5, 786435
009078: a007879b   addiw	a5, a5, -1536
00907c: 00f22023   sw	a5, 0(tp)
009080: 00e22023   sw	a4, 0(tp)
009084: 00008067   ret
009088: 000229a3   sw	zero, 19(tp)
00908c: 31422003   lw	zero, 788(tp)
009090: f95ff06f   j	-108
009098: 00a22023   sw	a0, 0(tp)
00909c: 000c3023   sd	zero, 0(s8)
0090a0: 380225a3   sw	zero, 907(tp)
0090a4: 30226503   lwu	a0, 770(tp)
0090a8: 00723783   ld	a5, 7(tp)
0090ac: 00078067   jr	a5
0090b0: 0000006f   j	0
0090b4: 00000013   nop
0090b8: 001007b7   lui	a5, 256
0090bc: fff78793   addi	a5, a5, -1
0090c0: 00008717   auipc	a4, 8
0090c4: 41870713   addi	a4, a4, 1048
0090c8: 00f77733   and	a4, a4, a5
0090cc: 0ae22623   sw	a4, 172(tp)
0090d0: 00009717   auipc	a4, 9
0090d4: 27870713   addi	a4, a4, 632
0090d8: 00f77733   and	a4, a4, a5
0090dc: 004006b7   lui	a3, 1024
0090e0: 00d76733   or	a4, a4, a3
0090e4: 0ae22623   sw	a4, 172(tp)
0090e8: 00009717   auipc	a4, 9
0090ec: fe070713   addi	a4, a4, -32
0090f0: 00f77733   and	a4, a4, a5
0090f4: 00a006b7   lui	a3, 2560
0090f8: 00d76733   or	a4, a4, a3
0090fc: 0ae22623   sw	a4, 172(tp)
009100: 00008717   auipc	a4, 8
009104: 43070713   addi	a4, a4, 1072
009108: 00f77733   and	a4, a4, a5
00910c: 010006b7   lui	a3, 4096
009110: 00d76733   or	a4, a4, a3
009114: 0ae22623   sw	a4, 172(tp)
009118: 00008717   auipc	a4, 8
00911c: 20070713   addi	a4, a4, 512
009120: 00f77733   and	a4, a4, a5
009124: 011006b7   lui	a3, 4352
009128: 00d76733   or	a4, a4, a3
00912c: 0ae22623   sw	a4, 172(tp)
009130: 00008717   auipc	a4, 8
009134: 37870713   addi	a4, a4, 888
009138: 00f77733   and	a4, a4, a5
00913c: 012006b7   lui	a3, 4608
009140: 00d76733   or	a4, a4, a3
009144: 0ae22623   sw	a4, 172(tp)
009148: 00005717   auipc	a4, 5
00914c: 3f870713   addi	a4, a4, 1016
009150: 00f77733   and	a4, a4, a5
009154: 013006b7   lui	a3, 4864
009158: 00d76733   or	a4, a4, a3
00915c: 0ae22623   sw	a4, 172(tp)
009160: 00006717   auipc	a4, 6
009164: 17070713   addi	a4, a4, 368
009168: 00f77733   and	a4, a4, a5
00916c: 015006b7   lui	a3, 5376
009170: 00d76733   or	a4, a4, a3
009174: 0ae22623   sw	a4, 172(tp)
009178: 00006717   auipc	a4, 6
00917c: 17070713   addi	a4, a4, 368
009180: 00f77733   and	a4, a4, a5
009184: 016006b7   lui	a3, 5632
009188: 00d76733   or	a4, a4, a3
00918c: 0ae22623   sw	a4, 172(tp)
009190: 00001717   auipc	a4, 1
009194: 69870713   addi	a4, a4, 1688
009198: 00f77733   and	a4, a4, a5
00919c: 01d006b7   lui	a3, 7424
0091a0: 00d76733   or	a4, a4, a3
0091a4: 0ae22623   sw	a4, 172(tp)
0091a8: 00002717   auipc	a4, 2
0091ac: 96870713   addi	a4, a4, -1688
0091b0: 00f77733   and	a4, a4, a5
0091b4: 01e006b7   lui	a3, 7680
0091b8: 00d76733   or	a4, a4, a3
0091bc: 0ae22623   sw	a4, 172(tp)
0091c0: 00009717   auipc	a4, 9
0091c4: b8070713   addi	a4, a4, -1152
0091c8: 00f77733   and	a4, a4, a5
0091cc: 01f006b7   lui	a3, 7936
0091d0: 00d76733   or	a4, a4, a3
0091d4: 0ae22623   sw	a4, 172(tp)
0091d8: 00009717   auipc	a4, 9
0091dc: bf070713   addi	a4, a4, -1040
0091e0: 00f77733   and	a4, a4, a5
0091e4: 020006b7   lui	a3, 8192
0091e8: 00d76733   or	a4, a4, a3
0091ec: 0ae22623   sw	a4, 172(tp)
0091f0: 0000a717   auipc	a4, 10
0091f4: e0870713   addi	a4, a4, -504
0091f8: 00f77733   and	a4, a4, a5
0091fc: 021006b7   lui	a3, 8448
009200: 00d76733   or	a4, a4, a3
009204: 0ae22623   sw	a4, 172(tp)
009208: 00008717   auipc	a4, 8
00920c: 34070713   addi	a4, a4, 832
009210: 00f77733   and	a4, a4, a5
009214: 022006b7   lui	a3, 8704
009218: 00d76733   or	a4, a4, a3
00921c: 0ae22623   sw	a4, 172(tp)
009220: 00008717   auipc	a4, 8
009224: 62870713   addi	a4, a4, 1576
009228: 00f77733   and	a4, a4, a5
00922c: 023006b7   lui	a3, 8960
009230: 00d76733   or	a4, a4, a3
009234: 0ae22623   sw	a4, 172(tp)
009238: 00005717   auipc	a4, 5
00923c: 63070713   addi	a4, a4, 1584
009240: 00f77733   and	a4, a4, a5
009244: 024006b7   lui	a3, 9216
009248: 00d76733   or	a4, a4, a3
00924c: 0ae22623   sw	a4, 172(tp)
009250: 00005717   auipc	a4, 5
009254: 69870713   addi	a4, a4, 1688
009258: 00f77733   and	a4, a4, a5
00925c: 025006b7   lui	a3, 9472
009260: 00d76733   or	a4, a4, a3
009264: 0ae22623   sw	a4, 172(tp)
009268: 00005717   auipc	a4, 5
00926c: 2a070713   addi	a4, a4, 672
009270: 00f77733   and	a4, a4, a5
009274: 026006b7   lui	a3, 9728
009278: 00d76733   or	a4, a4, a3
00927c: 0ae22623   sw	a4, 172(tp)
009280: 00005717   auipc	a4, 5
009284: 70070713   addi	a4, a4, 1792
009288: 00f77733   and	a4, a4, a5
00928c: 027006b7   lui	a3, 9984
009290: 00d76733   or	a4, a4, a3
009294: 0ae22623   sw	a4, 172(tp)
009298: 00008717   auipc	a4, 8
00929c: 02870713   addi	a4, a4, 40
0092a0: 00f77733   and	a4, a4, a5
0092a4: 028006b7   lui	a3, 10240
0092a8: 00d76733   or	a4, a4, a3
0092ac: 0ae22623   sw	a4, 172(tp)
0092b0: 00006717   auipc	a4, 6
0092b4: 08070713   addi	a4, a4, 128
0092b8: 00f77733   and	a4, a4, a5
0092bc: 02a006b7   lui	a3, 10752
0092c0: 00d76733   or	a4, a4, a3
0092c4: 0ae22623   sw	a4, 172(tp)
0092c8: 00005717   auipc	a4, 5
0092cc: 29070713   addi	a4, a4, 656
0092d0: 00f77733   and	a4, a4, a5
0092d4: 02c006b7   lui	a3, 11264
0092d8: 00d76733   or	a4, a4, a3
0092dc: 0ae22623   sw	a4, 172(tp)
0092e0: 00009717   auipc	a4, 9
0092e4: 4c870713   addi	a4, a4, 1224
0092e8: 00f77733   and	a4, a4, a5
0092ec: 02f006b7   lui	a3, 12032
0092f0: 00d76733   or	a4, a4, a3
0092f4: 0ae22623   sw	a4, 172(tp)
0092f8: 00006717   auipc	a4, 6
0092fc: 9c870713   addi	a4, a4, -1592
009300: 00f77733   and	a4, a4, a5
009304: 030006b7   lui	a3, 12288
009308: 00d76733   or	a4, a4, a3
00930c: 0ae22623   sw	a4, 172(tp)
009310: 00006717   auipc	a4, 6
009314: a2070713   addi	a4, a4, -1504
009318: 00f77733   and	a4, a4, a5
00931c: 035006b7   lui	a3, 13568
009320: 00d76733   or	a4, a4, a3
009324: 0ae22623   sw	a4, 172(tp)
009328: 00001717   auipc	a4, 1
00932c: a4870713   addi	a4, a4, -1464
009330: 00f77733   and	a4, a4, a5
009334: 037006b7   lui	a3, 14080
009338: 00d76733   or	a4, a4, a3
00933c: 0ae22623   sw	a4, 172(tp)
009340: 00006717   auipc	a4, 6
009344: a3870713   addi	a4, a4, -1480
009348: 00f77733   and	a4, a4, a5
00934c: 038006b7   lui	a3, 14336
009350: 00d76733   or	a4, a4, a3
009354: 0ae22623   sw	a4, 172(tp)
009358: 0000b717   auipc	a4, 11
00935c: 84870713   addi	a4, a4, -1976
009360: 00f77733   and	a4, a4, a5
009364: 03c006b7   lui	a3, 15360
009368: 00d76733   or	a4, a4, a3
00936c: 0ae22623   sw	a4, 172(tp)
009370: 00007717   auipc	a4, 7
009374: 49870713   addi	a4, a4, 1176
009378: 00f77733   and	a4, a4, a5
00937c: 03f006b7   lui	a3, 16128
009380: 00d76733   or	a4, a4, a3
009384: 0ae22623   sw	a4, 172(tp)
009388: 00001717   auipc	a4, 1
00938c: b5070713   addi	a4, a4, -1200
009390: 00f77733   and	a4, a4, a5
009394: 040006b7   lui	a3, 16384
009398: 00d76733   or	a4, a4, a3
00939c: 0ae22623   sw	a4, 172(tp)
0093a0: 0000a717   auipc	a4, 10
0093a4: 79070713   addi	a4, a4, 1936
0093a8: 00f77733   and	a4, a4, a5
0093ac: 042006b7   lui	a3, 16896
0093b0: 00d76733   or	a4, a4, a3
0093b4: 0ae22623   sw	a4, 172(tp)
0093b8: 00002717   auipc	a4, 2
0093bc: 9c870713   addi	a4, a4, -1592
0093c0: 00f77733   and	a4, a4, a5
0093c4: 045006b7   lui	a3, 17664
0093c8: 00d76733   or	a4, a4, a3
0093cc: 0ae22623   sw	a4, 172(tp)
0093d0: 0000a717   auipc	a4, 10
0093d4: 41870713   addi	a4, a4, 1048
0093d8: 00f77733   and	a4, a4, a5
0093dc: 049006b7   lui	a3, 18688
0093e0: 00d76733   or	a4, a4, a3
0093e4: 0ae22623   sw	a4, 172(tp)
0093e8: 00008717   auipc	a4, 8
0093ec: 4e070713   addi	a4, a4, 1248
0093f0: 00f77733   and	a4, a4, a5
0093f4: 04a006b7   lui	a3, 18944
0093f8: 00d76733   or	a4, a4, a3
0093fc: 0ae22623   sw	a4, 172(tp)
009400: 00006717   auipc	a4, 6
009404: 00870713   addi	a4, a4, 8
009408: 00f77733   and	a4, a4, a5
00940c: 04c006b7   lui	a3, 19456
009410: 00d76733   or	a4, a4, a3
009414: 0ae22623   sw	a4, 172(tp)
009418: 00006717   auipc	a4, 6
00941c: 2d070713   addi	a4, a4, 720
009420: 00f77733   and	a4, a4, a5
009424: 04d006b7   lui	a3, 19712
009428: 00d76733   or	a4, a4, a3
00942c: 0ae22623   sw	a4, 172(tp)
009430: 00001717   auipc	a4, 1
009434: d7870713   addi	a4, a4, -648
009438: 00f77733   and	a4, a4, a5
00943c: 050006b7   lui	a3, 20480
009440: 00d76733   or	a4, a4, a3
009444: 0ae22623   sw	a4, 172(tp)
009448: 0000a717   auipc	a4, 10
00944c: b6070713   addi	a4, a4, -1184
009450: 00f77733   and	a4, a4, a5
009454: 051006b7   lui	a3, 20736
009458: 00d76733   or	a4, a4, a3
00945c: 0ae22623   sw	a4, 172(tp)
009460: 0000a717   auipc	a4, 10
009464: 0f870713   addi	a4, a4, 248
009468: 00f77733   and	a4, a4, a5
00946c: 058006b7   lui	a3, 22528
009470: 00d76733   or	a4, a4, a3
009474: 0ae22623   sw	a4, 172(tp)
009478: 00009717   auipc	a4, 9
00947c: 8a870713   addi	a4, a4, -1880
009480: 00f77733   and	a4, a4, a5
009484: 059006b7   lui	a3, 22784
009488: 00d76733   or	a4, a4, a3
00948c: 0ae22623   sw	a4, 172(tp)
009490: 00002717   auipc	a4, 2
009494: 86070713   addi	a4, a4, -1952
009498: 00f77733   and	a4, a4, a5
00949c: 05d006b7   lui	a3, 23808
0094a0: 00d76733   or	a4, a4, a3
0094a4: 0ae22623   sw	a4, 172(tp)
0094a8: 00009717   auipc	a4, 9
0094ac: 34070713   addi	a4, a4, 832
0094b0: 00f77733   and	a4, a4, a5
0094b4: 05e006b7   lui	a3, 24064
0094b8: 00d76733   or	a4, a4, a3
0094bc: 0ae22623   sw	a4, 172(tp)
0094c0: 00009717   auipc	a4, 9
0094c4: 40070713   addi	a4, a4, 1024
0094c8: 00f77733   and	a4, a4, a5
0094cc: 05f006b7   lui	a3, 24320
0094d0: 00d76733   or	a4, a4, a3
0094d4: 0ae22623   sw	a4, 172(tp)
0094d8: 00009717   auipc	a4, 9
0094dc: 5c870713   addi	a4, a4, 1480
0094e0: 00f77733   and	a4, a4, a5
0094e4: 060006b7   lui	a3, 24576
0094e8: 00d76733   or	a4, a4, a3
0094ec: 0ae22623   sw	a4, 172(tp)
0094f0: 00009717   auipc	a4, 9
0094f4: 68070713   addi	a4, a4, 1664
0094f8: 00f77733   and	a4, a4, a5
0094fc: 061006b7   lui	a3, 24832
009500: 00d76733   or	a4, a4, a3
009504: 0ae22623   sw	a4, 172(tp)
009508: 0000a717   auipc	a4, 10
00950c: 8c070713   addi	a4, a4, -1856
009510: 00f77733   and	a4, a4, a5
009514: 063006b7   lui	a3, 25344
009518: 00d76733   or	a4, a4, a3
00951c: 0ae22623   sw	a4, 172(tp)
009520: 0000a717   auipc	a4, 10
009524: 9d070713   addi	a4, a4, -1584
009528: 00f77733   and	a4, a4, a5
00952c: 064006b7   lui	a3, 25600
009530: 00d76733   or	a4, a4, a3
009534: 0ae22623   sw	a4, 172(tp)
009538: 00009717   auipc	a4, 9
00953c: 17070713   addi	a4, a4, 368
009540: 00f77733   and	a4, a4, a5
009544: 068006b7   lui	a3, 26624
009548: 00d76733   or	a4, a4, a3
00954c: 0ae22623   sw	a4, 172(tp)
009550: 0000a717   auipc	a4, 10
009554: db870713   addi	a4, a4, -584
009558: 00f77733   and	a4, a4, a5
00955c: 077006b7   lui	a3, 30464
009560: 00d76733   or	a4, a4, a3
009564: 0ae22623   sw	a4, 172(tp)
009568: 00009717   auipc	a4, 9
00956c: 18070713   addi	a4, a4, 384
009570: 00f77733   and	a4, a4, a5
009574: 07a006b7   lui	a3, 31232
009578: 00d76733   or	a4, a4, a3
00957c: 0ae22623   sw	a4, 172(tp)
009580: 00002717   auipc	a4, 2
009584: a9870713   addi	a4, a4, -1384
009588: 00f77733   and	a4, a4, a5
00958c: 07d006b7   lui	a3, 32000
009590: 00d76733   or	a4, a4, a3
009594: 0ae22623   sw	a4, 172(tp)
009598: 00002717   auipc	a4, 2
00959c: a2070713   addi	a4, a4, -1504
0095a0: 00f77733   and	a4, a4, a5
0095a4: 07e006b7   lui	a3, 32256
0095a8: 00d76733   or	a4, a4, a3
0095ac: 0ae22623   sw	a4, 172(tp)
0095b0: 00008717   auipc	a4, 8
0095b4: b6870713   addi	a4, a4, -1176
0095b8: 00f77733   and	a4, a4, a5
0095bc: 08b006b7   lui	a3, 35584
0095c0: 00d76733   or	a4, a4, a3
0095c4: 0ae22623   sw	a4, 172(tp)
0095c8: 00005717   auipc	a4, 5
0095cc: 5f870713   addi	a4, a4, 1528
0095d0: 00f77733   and	a4, a4, a5
0095d4: 091006b7   lui	a3, 37120
0095d8: 00d76733   or	a4, a4, a3
0095dc: 0ae22623   sw	a4, 172(tp)
0095e0: 0000b717   auipc	a4, 11
0095e4: cf870713   addi	a4, a4, -776
0095e8: 00f77733   and	a4, a4, a5
0095ec: 093006b7   lui	a3, 37632
0095f0: 00d76733   or	a4, a4, a3
0095f4: 0ae22623   sw	a4, 172(tp)
0095f8: 00002717   auipc	a4, 2
0095fc: 9a870713   addi	a4, a4, -1624
009600: 00f77733   and	a4, a4, a5
009604: 095006b7   lui	a3, 38144
009608: 00d76733   or	a4, a4, a3
00960c: 0ae22623   sw	a4, 172(tp)
009610: 00001717   auipc	a4, 1
009614: 0d070713   addi	a4, a4, 208
009618: 00f77733   and	a4, a4, a5
00961c: 09a006b7   lui	a3, 39424
009620: 00d76733   or	a4, a4, a3
009624: 0ae22623   sw	a4, 172(tp)
009628: 0000a717   auipc	a4, 10
00962c: e1870713   addi	a4, a4, -488
009630: 00f77733   and	a4, a4, a5
009634: 09b006b7   lui	a3, 39680
009638: 00d76733   or	a4, a4, a3
00963c: 0ae22623   sw	a4, 172(tp)
009640: 00009717   auipc	a4, 9
009644: 6c070713   addi	a4, a4, 1728
009648: 00f77733   and	a4, a4, a5
00964c: 09f006b7   lui	a3, 40704
009650: 00d76733   or	a4, a4, a3
009654: 0ae22623   sw	a4, 172(tp)
009658: 00006717   auipc	a4, 6
00965c: d1870713   addi	a4, a4, -744
009660: 00f77733   and	a4, a4, a5
009664: 0a9006b7   lui	a3, 43264
009668: 00d76733   or	a4, a4, a3
00966c: 0ae22623   sw	a4, 172(tp)
009670: 00008717   auipc	a4, 8
009674: e7870713   addi	a4, a4, -392
009678: 00f77733   and	a4, a4, a5
00967c: 0fd006b7   lui	a3, 64768
009680: 00d76733   or	a4, a4, a3
009684: 0ae22623   sw	a4, 172(tp)
009688: 00008717   auipc	a4, 8
00968c: e9070713   addi	a4, a4, -368
009690: 00f77733   and	a4, a4, a5
009694: 0fc006b7   lui	a3, 64512
009698: 00d76733   or	a4, a4, a3
00969c: 0ae22623   sw	a4, 172(tp)
0096a0: 0000a717   auipc	a4, 10
0096a4: b5870713   addi	a4, a4, -1192
0096a8: 00f77733   and	a4, a4, a5
0096ac: 0007071b   sext.w	a4, a4
0096b0: 006006b7   lui	a3, 1536
0096b4: 00d766b3   or	a3, a4, a3
0096b8: 0ad22623   sw	a3, 172(tp)
0096bc: 01b006b7   lui	a3, 6912
0096c0: 00d76733   or	a4, a4, a3
0096c4: 0ae22623   sw	a4, 172(tp)
0096c8: 0000a717   auipc	a4, 10
0096cc: b4870713   addi	a4, a4, -1208
0096d0: 00f77733   and	a4, a4, a5
0096d4: 008006b7   lui	a3, 2048
0096d8: 00d76733   or	a4, a4, a3
0096dc: 0ae22623   sw	a4, 172(tp)
0096e0: 0000a717   auipc	a4, 10
0096e4: b5070713   addi	a4, a4, -1200
0096e8: 00f77733   and	a4, a4, a5
0096ec: 009006b7   lui	a3, 2304
0096f0: 00d76733   or	a4, a4, a3
0096f4: 0ae22623   sw	a4, 172(tp)
0096f8: 0000a717   auipc	a4, 10
0096fc: cd870713   addi	a4, a4, -808
009700: 00f77733   and	a4, a4, a5
009704: 014006b7   lui	a3, 5120
009708: 00d76733   or	a4, a4, a3
00970c: 0ae22623   sw	a4, 172(tp)
009710: ffffa717   auipc	a4, 1048570
009714: 5e870713   addi	a4, a4, 1512
009718: 00f77733   and	a4, a4, a5
00971c: 00e006b7   lui	a3, 3584
009720: 00d76733   or	a4, a4, a3
009724: 0ae22623   sw	a4, 172(tp)
009728: 00007717   auipc	a4, 7
00972c: bf070713   addi	a4, a4, -1040
009730: 00f77733   and	a4, a4, a5
009734: 017006b7   lui	a3, 5888
009738: 00d76733   or	a4, a4, a3
00973c: 0ae22623   sw	a4, 172(tp)
009740: 00000717   auipc	a4, 0
009744: 80870713   addi	a4, a4, -2040
009748: 00f77733   and	a4, a4, a5
00974c: 00d006b7   lui	a3, 3328
009750: 00d76733   or	a4, a4, a3
009754: 0ae22623   sw	a4, 172(tp)
009758: 00002717   auipc	a4, 2
00975c: 91870713   addi	a4, a4, -1768
009760: 00f77733   and	a4, a4, a5
009764: 0ae006b7   lui	a3, 44544
009768: 00d76733   or	a4, a4, a3
00976c: 0ae22623   sw	a4, 172(tp)
009770: 00007717   auipc	a4, 7
009774: b4870713   addi	a4, a4, -1208
009778: 00f77733   and	a4, a4, a5
00977c: 04e006b7   lui	a3, 19968
009780: 00d76733   or	a4, a4, a3
009784: 0ae22623   sw	a4, 172(tp)
009788: 00002717   auipc	a4, 2
00978c: b8870713   addi	a4, a4, -1144
009790: 00f77733   and	a4, a4, a5
009794: 0af006b7   lui	a3, 44800
009798: 00d76733   or	a4, a4, a3
00979c: 0ae22623   sw	a4, 172(tp)
0097a0: 0000a717   auipc	a4, 10
0097a4: 27070713   addi	a4, a4, 624
0097a8: 00f77733   and	a4, a4, a5
0097ac: 046006b7   lui	a3, 17920
0097b0: 00d76733   or	a4, a4, a3
0097b4: 0ae22623   sw	a4, 172(tp)
0097b8: 00001717   auipc	a4, 1
0097bc: 77070713   addi	a4, a4, 1904
0097c0: 00f77733   and	a4, a4, a5
0097c4: 098006b7   lui	a3, 38912
0097c8: 00d76733   or	a4, a4, a3
0097cc: 0ae22623   sw	a4, 172(tp)
0097d0: 00008717   auipc	a4, 8
0097d4: 53870713   addi	a4, a4, 1336
0097d8: 00f77733   and	a4, a4, a5
0097dc: 0b7006b7   lui	a3, 46848
0097e0: 00d76733   or	a4, a4, a3
0097e4: 0ae22623   sw	a4, 172(tp)
0097e8: 0000a717   auipc	a4, 10
0097ec: 86070713   addi	a4, a4, -1952
0097f0: 00f77733   and	a4, a4, a5
0097f4: 0b8006b7   lui	a3, 47104
0097f8: 00d76733   or	a4, a4, a3
0097fc: 0ae22623   sw	a4, 172(tp)
009800: 0000a717   auipc	a4, 10
009804: 8b870713   addi	a4, a4, -1864
009808: 00f77733   and	a4, a4, a5
00980c: 0b9006b7   lui	a3, 47360
009810: 00d76733   or	a4, a4, a3
009814: 0ae22623   sw	a4, 172(tp)
009818: 0000a717   auipc	a4, 10
00981c: 90070713   addi	a4, a4, -1792
009820: 00f77733   and	a4, a4, a5
009824: 0ba006b7   lui	a3, 47616
009828: 00d76733   or	a4, a4, a3
00982c: 0ae22623   sw	a4, 172(tp)
009830: 0000a717   auipc	a4, 10
009834: 95870713   addi	a4, a4, -1704
009838: 00f77733   and	a4, a4, a5
00983c: 0bb006b7   lui	a3, 47872
009840: 00d76733   or	a4, a4, a3
009844: 0ae22623   sw	a4, 172(tp)
009848: 0000a717   auipc	a4, 10
00984c: 97070713   addi	a4, a4, -1680
009850: 00f77733   and	a4, a4, a5
009854: 0bd006b7   lui	a3, 48384
009858: 00d76733   or	a4, a4, a3
00985c: 0ae22623   sw	a4, 172(tp)
009860: 0000a717   auipc	a4, 10
009864: 17870713   addi	a4, a4, 376
009868: 00f77733   and	a4, a4, a5
00986c: 0b1006b7   lui	a3, 45312
009870: 00d76733   or	a4, a4, a3
009874: 0ae22623   sw	a4, 172(tp)
009878: 00008717   auipc	a4, 8
00987c: 8b870713   addi	a4, a4, -1864
009880: 00f77733   and	a4, a4, a5
009884: 0f0006b7   lui	a3, 61440
009888: 00d76733   or	a4, a4, a3
00988c: 0ae22623   sw	a4, 172(tp)
009890: 0000a717   auipc	a4, 10
009894: c1870713   addi	a4, a4, -1000
009898: 00f77733   and	a4, a4, a5
00989c: 034006b7   lui	a3, 13312
0098a0: 00d76733   or	a4, a4, a3
0098a4: 0ae22623   sw	a4, 172(tp)
0098a8: 00002717   auipc	a4, 2
0098ac: b9070713   addi	a4, a4, -1136
0098b0: 00f77733   and	a4, a4, a5
0098b4: 0b4006b7   lui	a3, 46080
0098b8: 00d76733   or	a4, a4, a3
0098bc: 0ae22623   sw	a4, 172(tp)
0098c0: 0000d717   auipc	a4, 13
0098c4: de870713   addi	a4, a4, -536
0098c8: 00f77733   and	a4, a4, a5
0098cc: 0b0006b7   lui	a3, 45056
0098d0: 00d76733   or	a4, a4, a3
0098d4: 0ae22623   sw	a4, 172(tp)
0098d8: 0000b717   auipc	a4, 11
0098dc: 6a070713   addi	a4, a4, 1696
0098e0: 00f77733   and	a4, a4, a5
0098e4: 0d0006b7   lui	a3, 53248
0098e8: 00d76733   or	a4, a4, a3
0098ec: 0ae22623   sw	a4, 172(tp)
0098f0: 0000b717   auipc	a4, 11
0098f4: 13070713   addi	a4, a4, 304
0098f8: 00f77733   and	a4, a4, a5
0098fc: 0d1006b7   lui	a3, 53504
009900: 00d76733   or	a4, a4, a3
009904: 0ae22623   sw	a4, 172(tp)
009908: 00009717   auipc	a4, 9
00990c: cc870713   addi	a4, a4, -824
009910: 00f77733   and	a4, a4, a5
009914: 03d006b7   lui	a3, 15616
009918: 00d76733   or	a4, a4, a3
00991c: 0ae22623   sw	a4, 172(tp)
009920: 00009717   auipc	a4, 9
009924: cc870713   addi	a4, a4, -824
009928: 00f77733   and	a4, a4, a5
00992c: 0d2006b7   lui	a3, 53760
009930: 00d76733   or	a4, a4, a3
009934: 0ae22623   sw	a4, 172(tp)
009938: fffff717   auipc	a4, 1048575
00993c: 76070713   addi	a4, a4, 1888
009940: 00f777b3   and	a5, a4, a5
009944: 00f00737   lui	a4, 3840
009948: 00e7e7b3   or	a5, a5, a4
00994c: 0007879b   sext.w	a5, a5
009950: 0af22623   sw	a5, 172(tp)
009954: 0af22623   sw	a5, 172(tp)
009958: 0af22623   sw	a5, 172(tp)
00995c: 0af22623   sw	a5, 172(tp)
009960: 0af22623   sw	a5, 172(tp)
009964: 0af22623   sw	a5, 172(tp)
009968: 0af22623   sw	a5, 172(tp)
00996c: 0af22623   sw	a5, 172(tp)
009970: 0af22623   sw	a5, 172(tp)
009974: 0af22623   sw	a5, 172(tp)
009978: 0af22623   sw	a5, 172(tp)
00997c: 0af22623   sw	a5, 172(tp)
009980: 0af22623   sw	a5, 172(tp)
009984: 0af22623   sw	a5, 172(tp)
009988: 0af22623   sw	a5, 172(tp)
00998c: 0af22623   sw	a5, 172(tp)
009990: 0af22623   sw	a5, 172(tp)
009994: 0af22623   sw	a5, 172(tp)
009998: 0af22623   sw	a5, 172(tp)
00999c: 0af22623   sw	a5, 172(tp)
0099a0: 0af22623   sw	a5, 172(tp)
0099a4: 0af22623   sw	a5, 172(tp)
0099a8: 0af22623   sw	a5, 172(tp)
0099ac: 0af22623   sw	a5, 172(tp)
0099b0: 0af22623   sw	a5, 172(tp)
0099b4: 0af22623   sw	a5, 172(tp)
0099b8: 0af22623   sw	a5, 172(tp)
0099bc: 0af22623   sw	a5, 172(tp)
0099c0: 0af22623   sw	a5, 172(tp)
0099c4: 0af22623   sw	a5, 172(tp)
0099c8: 0af22623   sw	a5, 172(tp)
0099cc: 0af22623   sw	a5, 172(tp)
0099d0: 0af22623   sw	a5, 172(tp)
0099d4: 0af22623   sw	a5, 172(tp)
0099d8: 0af22623   sw	a5, 172(tp)
0099dc: 0af22623   sw	a5, 172(tp)
0099e0: 0af22623   sw	a5, 172(tp)
0099e4: 00008067   ret
0099e8: ff010113   addi	sp, sp, -16
0099ec: 00813023   sd	s0, 0(sp)
0099f0: 00113423   sd	ra, 8(sp)
0099f4: 00050413   mv	s0, a0
0099f8: 1f026783   lwu	a5, 496(tp)
0099fc: 02079793   slli	a5, a5, 32
009a00: 0207d793   srli	a5, a5, 32
009a04: 00f23e23   sd	a5, 28(tp)
009a08: 10000793   li	a5, 256
009a0c: 0af222a3   sw	a5, 165(tp)
009a10: 31422003   lw	zero, 788(tp)
009a14: 100017b7   lui	a5, 65537
009a18: 01479793   slli	a5, a5, 20
009a1c: 1ef23ca3   sd	a5, 505(tp)
009a20: 108017b7   lui	a5, 67585
009a24: 01479793   slli	a5, a5, 20
009a28: 1ef23d23   sd	a5, 506(tp)
009a2c: ba01b823   sd	zero, -1104(gp)
009a30: ba01b423   sd	zero, -1112(gp)
009a34: b801a023   sw	zero, -1152(gp)
009a38: ba01a223   sw	zero, -1116(gp)
009a3c: ba01a023   sw	zero, -1120(gp)
009a40: b801ae23   sw	zero, -1124(gp)
009a44: b801ac23   sw	zero, -1128(gp)
009a48: b801b823   sd	zero, -1136(gp)
009a4c: b801a423   sw	zero, -1144(gp)
009a50: b601ae23   sw	zero, -1156(gp)
009a54: b601ac23   sw	zero, -1160(gp)
009a58: b601aa23   sw	zero, -1164(gp)
009a5c: b801a223   sw	zero, -1148(gp)
009a60: b601a823   sw	zero, -1168(gp)
009a64: 84018793   addi	a5, gp, -1984
009a68: 86818713   addi	a4, gp, -1944
009a6c: 00078023   sb	zero, 0(a5)
009a70: 00178793   addi	a5, a5, 1
009a74: fef71ce3   bne	a4, a5, -8
009a78: 86818793   addi	a5, gp, -1944
009a7c: 8c018713   addi	a4, gp, -1856
009a80: 00078023   sb	zero, 0(a5)
009a84: 00178793   addi	a5, a5, 1
009a88: fee79ce3   bne	a5, a4, -8
009a8c: ffff87b7   lui	a5, 1048568
009a90: 00fb86b3   add	a3, s7, a5
009a94: 00041e63   bnez	s0, 28
009a98: 700bb0a3   sd	zero, 1793(s7)
009a9c: 1e022fa3   sw	zero, 511(tp)
009aa0: 6806b723   sd	zero, 1678(a3)
009aa4: 1e022fa3   sw	zero, 511(tp)
009aa8: 6806b7a3   sd	zero, 1679(a3)
009aac: 1e022fa3   sw	zero, 511(tp)
009ab0: 00002637   lui	a2, 2
009ab4: d0460793   addi	a5, a2, -764
009ab8: fff00593   li	a1, -1
009abc: dc460613   addi	a2, a2, -572
009ac0: 1f923703   ld	a4, 505(tp)
009ac4: 00f70733   add	a4, a4, a5
009ac8: 00b72023   sw	a1, 0(a4)
009acc: 00c78793   addi	a5, a5, 12
009ad0: fec798e3   bne	a5, a2, -16
009ad4: 1e022823   sw	zero, 496(tp)
009ad8: 000f7797   auipc	a5, 247
009adc: 6307b783   ld	a5, 1584(a5)
009ae0: 1ef239a3   sd	a5, 499(tp)
009ae4: 00730c37   lui	s8, 1840
009ae8: 001c0c1b   addiw	s8, s8, 1
009aec: 020c1c13   slli	s8, s8, 32
009af0: 00c007b7   lui	a5, 3072
009af4: 05378793   addi	a5, a5, 83
009af8: 00879793   slli	a5, a5, 8
009afc: 1ef238a3   sd	a5, 497(tp)
009b00: c00127b7   lui	a5, 786450
009b04: 7007879b   addiw	a5, a5, 1792
009b08: 1ef22923   sw	a5, 498(tp)
009b0c: 000f7797   auipc	a5, 247
009b10: 6047b783   ld	a5, 1540(a5)
009b14: 1ef23aa3   sd	a5, 501(tp)
009b18: 000087b7   lui	a5, 8
009b1c: 00f687b3   add	a5, a3, a5
009b20: 6007b023   sd	zero, 1536(a5)
009b24: 1e022fa3   sw	zero, 511(tp)
009b28: 6007b123   sd	zero, 1538(a5)
009b2c: 1e022fa3   sw	zero, 511(tp)
009b30: 6007b223   sd	zero, 1540(a5)
009b34: 1e022fa3   sw	zero, 511(tp)
009b38: 6007b323   sd	zero, 1542(a5)
009b3c: 1e022fa3   sw	zero, 511(tp)
009b40: 6007b423   sd	zero, 1544(a5)
009b44: 1e022fa3   sw	zero, 511(tp)
009b48: 6007b523   sd	zero, 1546(a5)
009b4c: 1e022fa3   sw	zero, 511(tp)
009b50: 6007b623   sd	zero, 1548(a5)
009b54: 1e022fa3   sw	zero, 511(tp)
009b58: 6007b723   sd	zero, 1550(a5)
009b5c: 1e022fa3   sw	zero, 511(tp)
009b60: 6007b823   sd	zero, 1552(a5)
009b64: 1e022fa3   sw	zero, 511(tp)
009b68: 6007bc23   sd	zero, 1560(a5)
009b6c: 1e022fa3   sw	zero, 511(tp)
009b70: 7007b5a3   sd	zero, 1803(a5)
009b74: 1e022fa3   sw	zero, 511(tp)
009b78: 7007b6a3   sd	zero, 1805(a5)
009b7c: 1e022fa3   sw	zero, 511(tp)
009b80: 7007b7a3   sd	zero, 1807(a5)
009b84: 1e022fa3   sw	zero, 511(tp)
009b88: 7007b8a3   sd	zero, 1809(a5)
009b8c: 1e022fa3   sw	zero, 511(tp)
009b90: 7007a1a3   sw	zero, 1795(a5)
009b94: 1e022fa3   sw	zero, 511(tp)
009b98: 7007a4a3   sw	zero, 1801(a5)
009b9c: 1e022fa3   sw	zero, 511(tp)
009ba0: 6607b023   sd	zero, 1632(a5)
009ba4: 1e022fa3   sw	zero, 511(tp)
009ba8: 6607b123   sd	zero, 1634(a5)
009bac: 1e022fa3   sw	zero, 511(tp)
009bb0: 6607b223   sd	zero, 1636(a5)
009bb4: 1e022fa3   sw	zero, 511(tp)
009bb8: 6607b323   sd	zero, 1638(a5)
009bbc: 1e022fa3   sw	zero, 511(tp)
009bc0: 6607b523   sd	zero, 1642(a5)
009bc4: 1e022fa3   sw	zero, 511(tp)
009bc8: 6607b623   sd	zero, 1644(a5)
009bcc: 1e022fa3   sw	zero, 511(tp)
009bd0: 1e022da3   sw	zero, 507(tp)
009bd4: ce4ff0ef   jal	-2844
009bd8: 000107b7   lui	a5, 16
009bdc: 0017879b   addiw	a5, a5, 1
009be0: 008797bb   sllw	a5, a5, s0
009be4: ccfca623   sw	a5, -820(s9)
009be8: 1f026783   lwu	a5, 496(tp)
009bec: 02079793   slli	a5, a5, 32
009bf0: 0207d793   srli	a5, a5, 32
009bf4: 00f23e23   sd	a5, 28(tp)
009bf8: 0a0222a3   sw	zero, 165(tp)
009bfc: 31422003   lw	zero, 788(tp)
009c00: f14027f3   csrr	a5, mhartid
009c04: 00100713   li	a4, 1
009c08: 06e223a3   sw	a4, 103(tp)
009c0c: 0037f793   andi	a5, a5, 3
009c10: 00279793   slli	a5, a5, 2
009c14: 1fa23703   ld	a4, 506(tp)
009c18: 02479593   slli	a1, a5, 36
009c1c: 00e58733   add	a4, a1, a4
009c20: 0000c6b7   lui	a3, 12
009c24: 00d70733   add	a4, a4, a3
009c28: 3bc72603   lw	a2, 956(a4)
009c2c: 08066613   ori	a2, a2, 128
009c30: 1fa23703   ld	a4, 506(tp)
009c34: 00b70733   add	a4, a4, a1
009c38: 00d70733   add	a4, a4, a3
009c3c: 3ac72e23   sw	a2, 956(a4)
009c40: 0107e793   ori	a5, a5, 16
009c44: 1fa23703   ld	a4, 506(tp)
009c48: 02479793   slli	a5, a5, 36
009c4c: 00f70733   add	a4, a4, a5
009c50: 00d70733   add	a4, a4, a3
009c54: 3bc72603   lw	a2, 956(a4)
009c58: 08066613   ori	a2, a2, 128
009c5c: 1fa23703   ld	a4, 506(tp)
009c60: 00f707b3   add	a5, a4, a5
009c64: 00d787b3   add	a5, a5, a3
009c68: 3ac7ae23   sw	a2, 956(a5)
009c6c: 060223a3   sw	zero, 103(tp)
009c70: 0000d7b7   lui	a5, 13
009c74: a3e7879b   addiw	a5, a5, -1474
009c78: 00f407bb   addw	a5, s0, a5
009c7c: 02079713   slli	a4, a5, 32
009c80: 01e75793   srli	a5, a4, 30
009c84: 00100713   li	a4, 1
009c88: 03071713   slli	a4, a4, 48
009c8c: 00e787b3   add	a5, a5, a4
009c90: 0000d737   lui	a4, 13
009c94: afe70713   addi	a4, a4, -1282
009c98: 00e7a023   sw	a4, 0(a5)
009c9c: 05100693   li	a3, 81
009ca0: 0007a703   lw	a4, 0(a5)
009ca4: fed71ee3   bne	a4, a3, -4
009ca8: 00813083   ld	ra, 8(sp)
009cac: 00013403   ld	s0, 0(sp)
009cb0: 01010113   addi	sp, sp, 16
009cb4: 00008067   ret
009cb8: 30226503   lwu	a0, 770(tp)
009cbc: 00723783   ld	a5, 7(tp)
009cc0: 000780e7   jalr	a5
009cc4: ff5ff06f   j	-12
009cc8: 02058663   beqz	a1, 44
009ccc: 00100793   li	a5, 1
009cd0: b8f1a223   sw	a5, -1148(gp)
009cd4: 00357513   andi	a0, a0, 3
009cd8: 00f50463   beq	a0, a5, 8
009cdc: fddff0ef   jal	-36
009ce0: 31c23783   ld	a5, 796(tp)
009ce4: fe079ce3   bnez	a5, -8
009ce8: 31c23783   ld	a5, 796(tp)
009cec: fe078ae3   beqz	a5, -12
009cf0: fedff06f   j	-20
009cf4: b801a223   sw	zero, -1148(gp)
009cf8: 00100793   li	a5, 1
009cfc: 00f50463   beq	a0, a5, 8
009d00: 30f236a3   sd	a5, 781(tp)
009d04: 1f923783   ld	a5, 505(tp)
009d08: 00001737   lui	a4, 1
009d0c: 00e787b3   add	a5, a5, a4
009d10: 00004737   lui	a4, 4
009d14: 01170713   addi	a4, a4, 17
009d18: c0e7a823   sw	a4, -1008(a5)
009d1c: 00b23783   ld	a5, 11(tp)
009d20: 00078263   beqz	a5, 4
009d24: 0000000b   .word 0x0000000b
009d28: 01523783   ld	a5, 21(tp)
009d2c: 0037f793   andi	a5, a5, 3
009d30: 00f206b3   add	a3, tp, a5
009d34: 00b6e583   lwu	a1, 11(a3)
009d38: 04178793   addi	a5, a5, 65
009d3c: 00f20633   add	a2, tp, a5
009d40: 00100793   li	a5, 1
009d44: 00f62023   sw	a5, 0(a2)
009d48: 000806b7   lui	a3, 128
009d4c: 000c8713   mv	a4, s9
009d50: 92872783   lw	a5, -1752(a4)
009d54: 00d7f7b3   and	a5, a5, a3
009d58: 0007879b   sext.w	a5, a5
009d5c: fe079ae3   bnez	a5, -12
009d60: 00b62023   sw	a1, 0(a2)
009d64: f79ff06f   j	-136
009d70: 30226803   lwu	a6, 770(tp)
009d74: 01e8571b   srliw	a4, a6, 30
009d78: 00177713   andi	a4, a4, 1
009d7c: 06070e63   beqz	a4, 124
009d80: 30223603   ld	a2, 770(tp)
009d84: 30223583   ld	a1, 770(tp)
009d88: 02251793   slli	a5, a0, 34
009d8c: 4108569b   sraiw	a3, a6, 16
009d90: 0327d793   srli	a5, a5, 50
009d94: 0016c693   xori	a3, a3, 1
009d98: 0068571b   srliw	a4, a6, 6
009d9c: ffe7879b   addiw	a5, a5, -2
009da0: 0016f693   andi	a3, a3, 1
009da4: 03c77713   andi	a4, a4, 60
009da8: 00000297   auipc	t0, 0
009dac: 00e282b3   add	t0, t0, a4
009db0: 00c28067   jr	12(t0)
009db4: 09c0006f   j	156
009db8: 03c0006f   j	60
009dbc: 0580006f   j	88
009dc0: 0340006f   j	52
009dc4: 0300006f   j	48
009dc8: 04c0006f   j	76
009dcc: 0280006f   j	40
009dd0: 0240006f   j	36
009dd4: 0200006f   j	32
009dd8: 01c0006f   j	28
009ddc: 0180006f   j	24
009de0: 0140006f   j	20
009de4: 0100006f   j	16
009de8: 00c0006f   j	12
009dec: 0080006f   j	8
009df0: 0040006f   j	4
009df4: 0000006f   j	0
009df8: 00a22023   sw	a0, 0(tp)
009dfc: 01022023   sw	a6, 0(tp)
009e00: 000c3023   sd	zero, 0(s8)
009e04: 380225a3   sw	zero, 907(tp)
009e08: 30226503   lwu	a0, 770(tp)
009e0c: 00723783   ld	a5, 7(tp)
009e10: 00078067   jr	a5
009e14: 02059713   slli	a4, a1, 32
009e18: 00c76733   or	a4, a4, a2
009e1c: 06e239a3   sd	a4, 115(tp)
009e20: 07323603   ld	a2, 115(tp)
009e24: 0198571b   srliw	a4, a6, 25
009e28: 00377713   andi	a4, a4, 3
009e2c: 32e22223   sw	a4, 804(tp)
009e30: 00000713   li	a4, 0
009e34: 00269693   slli	a3, a3, 2
009e38: 04f77863   bgeu	a4, a5, 80
009e3c: 30226583   lwu	a1, 770(tp)
009e40: 00b62023   sw	a1, 0(a2)
009e44: 00170713   addi	a4, a4, 1
009e48: 00d60633   add	a2, a2, a3
009e4c: fedff06f   j	-20
009e50: 02e61713   slli	a4, a2, 46
009e54: 02e75713   srli	a4, a4, 46
009e58: 00100613   li	a2, 1
009e5c: 00070513   mv	a0, a4
009e60: 00000593   li	a1, 0
009e64: 03061613   slli	a2, a2, 48
009e68: 02f5fc63   bgeu	a1, a5, 56
009e6c: 30226303   lwu	t1, 770(tp)
009e70: 00251893   slli	a7, a0, 2
009e74: 00c888b3   add	a7, a7, a2
009e78: 0068a023   sw	t1, 0(a7)
009e7c: 00d50533   add	a0, a0, a3
009e80: 00158593   addi	a1, a1, 1
009e84: fe5ff06f   j	-28
009e88: 001007b7   lui	a5, 256
009e8c: 00f877b3   and	a5, a6, a5
009e90: 02079c63   bnez	a5, 56
009e94: 30226503   lwu	a0, 770(tp)
009e98: 00723783   ld	a5, 7(tp)
009e9c: 00078067   jr	a5
009ea0: 001007b7   lui	a5, 256
009ea4: 00f877b3   and	a5, a6, a5
009ea8: fe0786e3   beqz	a5, -20
009eac: 00271793   slli	a5, a4, 2
009eb0: 00100713   li	a4, 1
009eb4: 03071713   slli	a4, a4, 48
009eb8: 00e787b3   add	a5, a5, a4
009ebc: 0007e783   lwu	a5, 0(a5)
009ec0: 00078263   beqz	a5, 4
009ec4: fd1ff06f   j	-48
009ec8: 32423783   ld	a5, 804(tp)
009ecc: fe079ee3   bnez	a5, -4
009ed0: fc5ff06f   j	-60
009ed4: 00000013   nop
009ed8: 30226683   lwu	a3, 770(tp)
009edc: c00007b7   lui	a5, 786432
009ee0: 00f6f7b3   and	a5, a3, a5
009ee4: 0007879b   sext.w	a5, a5
009ee8: 40000737   lui	a4, 262144
009eec: 1ee79a63   bne	a5, a4, 500
009ef0: 30226703   lwu	a4, 770(tp)
009ef4: 30226603   lwu	a2, 770(tp)
009ef8: 30226583   lwu	a1, 770(tp)
009efc: 30226503   lwu	a0, 770(tp)
009f00: 00f6f793   andi	a5, a3, 15
009f04: 0027979b   slliw	a5, a5, 2
009f08: 00000297   auipc	t0, 0
009f0c: 00f282b3   add	t0, t0, a5
009f10: 00c28067   jr	12(t0)
009f14: 0440006f   j	68
009f18: 0ac0006f   j	172
009f1c: 0a80006f   j	168
009f20: 0340006f   j	52
009f24: 0300006f   j	48
009f28: 0fc0006f   j	252
009f2c: 0280006f   j	40
009f30: 0240006f   j	36
009f34: 0200006f   j	32
009f38: 01c0006f   j	28
009f3c: 0180006f   j	24
009f40: 0140006f   j	20
009f44: 0b80006f   j	184
009f48: 00c0006f   j	12
009f4c: 0080006f   j	8
009f50: 0040006f   j	4
009f54: 0000006f   j	0
009f58: 02e71713   slli	a4, a4, 46
009f5c: 00100813   li	a6, 1
009f60: 02c75793   srli	a5, a4, 44
009f64: 03081813   slli	a6, a6, 48
009f68: 010787b3   add	a5, a5, a6
009f6c: 0007a603   lw	a2, 0(a5)
009f70: 000107b7   lui	a5, 16
009f74: 00f6f7b3   and	a5, a3, a5
009f78: 02e75713   srli	a4, a4, 46
009f7c: 0006061b   sext.w	a2, a2
009f80: 0c079e63   bnez	a5, 220
009f84: 02061713   slli	a4, a2, 32
009f88: 02075713   srli	a4, a4, 32
009f8c: 0066d79b   srliw	a5, a3, 6
009f90: 01c7f793   andi	a5, a5, 28
009f94: 00000297   auipc	t0, 0
009f98: 00f282b3   add	t0, t0, a5
009f9c: 00c28067   jr	12(t0)
009fa0: 0e00006f   j	224
009fa4: 01c0006f   j	28
009fa8: 19c0006f   j	412
009fac: 0140006f   j	20
009fb0: 0100006f   j	16
009fb4: 1900006f   j	400
009fb8: 0080006f   j	8
009fbc: 1400006f   j	320
009fc0: 0000006f   j	0
009fc4: 00d6d79b   srliw	a5, a3, 13
009fc8: 0037f793   andi	a5, a5, 3
009fcc: 30f22da3   sw	a5, 795(tp)
009fd0: 02061793   slli	a5, a2, 32
009fd4: 02071713   slli	a4, a4, 32
009fd8: 00010637   lui	a2, 16
009fdc: 02075713   srli	a4, a4, 32
009fe0: 00c6f633   and	a2, a3, a2
009fe4: 00e7e7b3   or	a5, a5, a4
009fe8: 04060e63   beqz	a2, 92
009fec: 06f239a3   sd	a5, 115(tp)
009ff0: 07323783   ld	a5, 115(tp)
009ff4: 0007b703   ld	a4, 0(a5)
009ff8: f95ff06f   j	-108
009ffc: 00d6d79b   srliw	a5, a3, 13
00a000: 0037f793   andi	a5, a5, 3
00a004: 30f22da3   sw	a5, 795(tp)
00a008: 600bb803   ld	a6, 1536(s7)
00a00c: 02071713   slli	a4, a4, 32
00a010: 02061793   slli	a5, a2, 32
00a014: 02075713   srli	a4, a4, 32
00a018: 00e7e7b3   or	a5, a5, a4
00a01c: 010787b3   add	a5, a5, a6
00a020: fcdff06f   j	-52
00a024: 000107b7   lui	a5, 16
00a028: 02071713   slli	a4, a4, 32
00a02c: 00f6f7b3   and	a5, a3, a5
00a030: 02075713   srli	a4, a4, 32
00a034: f4078ce3   beqz	a5, -168
00a038: 02061613   slli	a2, a2, 32
00a03c: 00c76733   or	a4, a4, a2
00a040: f4dff06f   j	-180
00a044: 06f239a3   sd	a5, 115(tp)
00a048: 07323783   ld	a5, 115(tp)
00a04c: 0007a703   lw	a4, 0(a5)
00a050: 02071713   slli	a4, a4, 32
00a054: 02075713   srli	a4, a4, 32
00a058: f35ff06f   j	-204
00a05c: 00170793   addi	a5, a4, 1
00a060: 00279793   slli	a5, a5, 2
00a064: 010787b3   add	a5, a5, a6
00a068: 0007a703   lw	a4, 0(a5)
00a06c: 02061613   slli	a2, a2, 32
00a070: 02065613   srli	a2, a2, 32
00a074: 02071713   slli	a4, a4, 32
00a078: 00c76733   or	a4, a4, a2
00a07c: f11ff06f   j	-240
00a080: 02e59593   slli	a1, a1, 46
00a084: 00100613   li	a2, 1
00a088: 02c5d513   srli	a0, a1, 44
00a08c: 03061613   slli	a2, a2, 48
00a090: 0007079b   sext.w	a5, a4
00a094: 00c50533   add	a0, a0, a2
00a098: 00010837   lui	a6, 16
00a09c: 00f52023   sw	a5, 0(a0)
00a0a0: 0106f833   and	a6, a3, a6
00a0a4: 02e5d793   srli	a5, a1, 46
00a0a8: 00080c63   beqz	a6, 24
00a0ac: 00178793   addi	a5, a5, 1
00a0b0: 00279793   slli	a5, a5, 2
00a0b4: 42075713   srai	a4, a4, 32
00a0b8: 00c787b3   add	a5, a5, a2
00a0bc: 00e7a023   sw	a4, 0(a5)
00a0c0: 001007b7   lui	a5, 256
00a0c4: 00f6f7b3   and	a5, a3, a5
00a0c8: 00078663   beqz	a5, 12
00a0cc: 00056783   lwu	a5, 0(a0)
00a0d0: 00078263   beqz	a5, 4
00a0d4: 30226503   lwu	a0, 770(tp)
00a0d8: 00723783   ld	a5, 7(tp)
00a0dc: 00078067   jr	a5
00a0e0: 00a22023   sw	a0, 0(tp)
00a0e4: 00d22023   sw	a3, 0(tp)
00a0e8: 000c3023   sd	zero, 0(s8)
00a0ec: 380225a3   sw	zero, 907(tp)
00a0f0: 30226503   lwu	a0, 770(tp)
00a0f4: 00723783   ld	a5, 7(tp)
00a0f8: 00078067   jr	a5
00a0fc: 0196d79b   srliw	a5, a3, 25
00a100: 0037f793   andi	a5, a5, 3
00a104: 32f22223   sw	a5, 804(tp)
00a108: 602bb603   ld	a2, 1538(s7)
00a10c: 02059593   slli	a1, a1, 32
00a110: 02051793   slli	a5, a0, 32
00a114: 0205d593   srli	a1, a1, 32
00a118: 00b7e7b3   or	a5, a5, a1
00a11c: 00c787b3   add	a5, a5, a2
00a120: 06f239a3   sd	a5, 115(tp)
00a124: 07323783   ld	a5, 115(tp)
00a128: 00e7b023   sd	a4, 0(a5)
00a12c: 001007b7   lui	a5, 256
00a130: 00f6f7b3   and	a5, a3, a5
00a134: fa0780e3   beqz	a5, -96
00a138: 32423783   ld	a5, 804(tp)
00a13c: fe079ee3   bnez	a5, -4
00a140: f95ff06f   j	-108
00a144: 0196d79b   srliw	a5, a3, 25
00a148: 0037f793   andi	a5, a5, 3
00a14c: 32f22223   sw	a5, 804(tp)
00a150: 00010637   lui	a2, 16
00a154: 02059593   slli	a1, a1, 32
00a158: 02051793   slli	a5, a0, 32
00a15c: 0205d593   srli	a1, a1, 32
00a160: 00c6f633   and	a2, a3, a2
00a164: 00b7e7b3   or	a5, a5, a1
00a168: 02060463   beqz	a2, 40
00a16c: 06f239a3   sd	a5, 115(tp)
00a170: 07323783   ld	a5, 115(tp)
00a174: 00e7b023   sd	a4, 0(a5)
00a178: 001007b7   lui	a5, 256
00a17c: 00f6f7b3   and	a5, a3, a5
00a180: f4078ae3   beqz	a5, -172
00a184: 32423783   ld	a5, 804(tp)
00a188: fe079ee3   bnez	a5, -4
00a18c: f49ff06f   j	-184
00a190: 06f239a3   sd	a5, 115(tp)
00a194: 07323783   ld	a5, 115(tp)
00a198: 0007071b   sext.w	a4, a4
00a19c: 00e7a023   sw	a4, 0(a5)
00a1a0: fd9ff06f   j	-40
00a1a4: 00000013   nop
00a1a8: 30226583   lwu	a1, 770(tp)
00a1ac: 0015f793   andi	a5, a1, 1
00a1b0: 2a078463   beqz	a5, 680
00a1b4: 003007b7   lui	a5, 768
00a1b8: 00f5f7b3   and	a5, a1, a5
00a1bc: 00200737   lui	a4, 512
00a1c0: 22e78c63   beq	a5, a4, 568
00a1c4: 30226e83   lwu	t4, 770(tp)
00a1c8: 30226503   lwu	a0, 770(tp)
00a1cc: 30226e03   lwu	t3, 770(tp)
00a1d0: 30226803   lwu	a6, 770(tp)
00a1d4: 30226303   lwu	t1, 770(tp)
00a1d8: 02631713   slli	a4, t1, 38
00a1dc: 600006b7   lui	a3, 393216
00a1e0: 02675713   srli	a4, a4, 38
00a1e4: 00008637   lui	a2, 8
00a1e8: 00d5f6b3   and	a3, a1, a3
00a1ec: 2ac76063   bltu	a4, a2, 672
00a1f0: 60000737   lui	a4, 393216
00a1f4: 00e68c63   beq	a3, a4, 24
00a1f8: 10000737   lui	a4, 65536
00a1fc: 00e37733   and	a4, t1, a4
00a200: 00d76733   or	a4, a4, a3
00a204: 0007071b   sext.w	a4, a4
00a208: 28071263   bnez	a4, 644
00a20c: 00300737   lui	a4, 768
00a210: 00e78c63   beq	a5, a4, 24
00a214: 20000737   lui	a4, 131072
00a218: 00e37733   and	a4, t1, a4
00a21c: 00f76733   or	a4, a4, a5
00a220: 0007071b   sext.w	a4, a4
00a224: 26071463   bnez	a4, 616
00a228: 01523603   ld	a2, 21(tp)
00a22c: 00367613   andi	a2, a2, 3
00a230: 00c20733   add	a4, tp, a2
00a234: 00b76883   lwu	a7, 11(a4)
00a238: 04160613   addi	a2, a2, 65
00a23c: 00c207b3   add	a5, tp, a2
00a240: 00100713   li	a4, 1
00a244: 00e7a023   sw	a4, 0(a5)
00a248: ebcca783   lw	a5, -324(s9)
00a24c: 00100f13   li	t5, 1
00a250: 0007879b   sext.w	a5, a5
00a254: 00c7d69b   srliw	a3, a5, 12
00a258: 0036f693   andi	a3, a3, 3
00a25c: 00078713   mv	a4, a5
00a260: 02df7c63   bgeu	t5, a3, 56
00a264: 07f00693   li	a3, 127
00a268: 00100f93   li	t6, 1
00a26c: b0002773   csrr	a4, mcycle
00a270: 00000013   nop
00a274: b00027f3   csrr	a5, mcycle
00a278: 40e787b3   sub	a5, a5, a4
00a27c: fef6fae3   bgeu	a3, a5, -12
00a280: ebcca783   lw	a5, -324(s9)
00a284: 0007879b   sext.w	a5, a5
00a288: 00c7df1b   srliw	t5, a5, 12
00a28c: 003f7f13   andi	t5, t5, 3
00a290: 00078713   mv	a4, a5
00a294: fdefece3   bltu	t6, t5, -40
00a298: 00100693   li	a3, 1
00a29c: eadcae23   sw	a3, -324(s9)
00a2a0: 0001e6b7   lui	a3, 30
00a2a4: 00dc86b3   add	a3, s9, a3
00a2a8: c006a223   sw	zero, -1020(a3)
00a2ac: 0017f793   andi	a5, a5, 1
00a2b0: 07f00693   li	a3, 127
00a2b4: 02079663   bnez	a5, 44
00a2b8: b0002773   csrr	a4, mcycle
00a2bc: 00000013   nop
00a2c0: b00027f3   csrr	a5, mcycle
00a2c4: 40e787b3   sub	a5, a5, a4
00a2c8: fef6fae3   bgeu	a3, a5, -12
00a2cc: ebcca783   lw	a5, -324(s9)
00a2d0: 0007879b   sext.w	a5, a5
00a2d4: 0017ff13   andi	t5, a5, 1
00a2d8: 00078713   mv	a4, a5
00a2dc: fc0f0ee3   beqz	t5, -36
00a2e0: 440007b7   lui	a5, 278528
00a2e4: fff78793   addi	a5, a5, -1
00a2e8: 0067f7b3   and	a5, a5, t1
00a2ec: 0007869b   sext.w	a3, a5
00a2f0: 0a223783   ld	a5, 162(tp)
00a2f4: 0007831b   sext.w	t1, a5
00a2f8: a66d2c23   sw	t1, -1416(s10)
00a2fc: 020e9e93   slli	t4, t4, 32
00a300: 4207d313   srai	t1, a5, 32
00a304: 020e1e13   slli	t3, t3, 32
00a308: 0047579b   srliw	a5, a4, 4
00a30c: 02051513   slli	a0, a0, 32
00a310: 020ede93   srli	t4, t4, 32
00a314: 02081813   slli	a6, a6, 32
00a318: 020e5e13   srli	t3, t3, 32
00a31c: a66d2e23   sw	t1, -1412(s10)
00a320: 00f7f793   andi	a5, a5, 15
00a324: 00200713   li	a4, 2
00a328: 01d56533   or	a0, a0, t4
00a32c: 01c86833   or	a6, a6, t3
00a330: 06e78063   beq	a5, a4, 96
00a334: 04f76a63   bltu	a4, a5, 84
00a338: 0e078663   beqz	a5, 236
00a33c: ffffa7b7   lui	a5, 1048570
00a340: 00fc87b3   add	a5, s9, a5
00a344: 9ab7a823   sw	a1, -1616(a5)
00a348: 0005071b   sext.w	a4, a0
00a34c: 9ce7a223   sw	a4, -1596(a5)
00a350: 42055513   srai	a0, a0, 32
00a354: 9ca7a423   sw	a0, -1592(a5)
00a358: 0008071b   sext.w	a4, a6
00a35c: 9ce7a623   sw	a4, -1588(a5)
00a360: 42085813   srai	a6, a6, 32
00a364: 9d07a823   sw	a6, -1584(a5)
00a368: 9cd7aa23   sw	a3, -1580(a5)
00a36c: 30226503   lwu	a0, 770(tp)
00a370: 00723803   ld	a6, 7(tp)
00a374: 0005859b   sext.w	a1, a1
00a378: 0205c063   bltz	a1, 32
00a37c: 00c20633   add	a2, tp, a2
00a380: 01162023   sw	a7, 0(a2)
00a384: 00080067   jr	a6
00a388: 00300713   li	a4, 3
00a38c: fee790e3   bne	a5, a4, -32
00a390: 929ff06f   j	-1752
00a394: c0001073   unimp
00a398: ebccb783   ld	a5, -324(s9)
00a39c: 00c7d713   srli	a4, a5, 12
00a3a0: 00377713   andi	a4, a4, 3
00a3a4: 02070a63   beqz	a4, 52
00a3a8: 07f00693   li	a3, 127
00a3ac: b0002773   csrr	a4, mcycle
00a3b0: 00000013   nop
00a3b4: b00027f3   csrr	a5, mcycle
00a3b8: 40e787b3   sub	a5, a5, a4
00a3bc: fef6fae3   bgeu	a3, a5, -12
00a3c0: ebcca783   lw	a5, -324(s9)
00a3c4: 00c7d71b   srliw	a4, a5, 12
00a3c8: 00377713   andi	a4, a4, 3
00a3cc: 02079793   slli	a5, a5, 32
00a3d0: 0207d793   srli	a5, a5, 32
00a3d4: fc071ce3   bnez	a4, -40
00a3d8: 0017f793   andi	a5, a5, 1
00a3dc: 00078463   beqz	a5, 8
00a3e0: ea0cae23   sw	zero, -324(s9)
00a3e4: 01323783   ld	a5, 19(tp)
00a3e8: f8078ae3   beqz	a5, -108
00a3ec: 01323783   ld	a5, 19(tp)
00a3f0: fe079ae3   bnez	a5, -12
00a3f4: f89ff06f   j	-120
00a3f8: 01323683   ld	a3, 19(tp)
00a3fc: 00200713   li	a4, 2
00a400: dcd772e3   bgeu	a4, a3, -572
00a404: 1f323783   ld	a5, 499(tp)
00a408: 0007b023   sd	zero, 0(a5)
00a40c: 380225a3   sw	zero, 907(tp)
00a410: 0005859b   sext.w	a1, a1
00a414: 1805cc63   bltz	a1, 408
00a418: 30226503   lwu	a0, 770(tp)
00a41c: 00723783   ld	a5, 7(tp)
00a420: 00078067   jr	a5
00a424: ffff87b7   lui	a5, 1048568
00a428: 00fc87b3   add	a5, s9, a5
00a42c: 1ab7a823   sw	a1, 432(a5)
00a430: 0005071b   sext.w	a4, a0
00a434: 1ce7a223   sw	a4, 452(a5)
00a438: 42055513   srai	a0, a0, 32
00a43c: 1ca7a423   sw	a0, 456(a5)
00a440: 0008071b   sext.w	a4, a6
00a444: 1ce7a623   sw	a4, 460(a5)
00a448: 42085813   srai	a6, a6, 32
00a44c: 1d07a823   sw	a6, 464(a5)
00a450: 1cd7aa23   sw	a3, 468(a5)
00a454: f19ff06f   j	-232
00a458: 0a223783   ld	a5, 162(tp)
00a45c: 00100713   li	a4, 1
00a460: 08e22223   sw	a4, 132(tp)
00a464: 0207d713   srli	a4, a5, 32
00a468: 00e22023   sw	a4, 0(tp)
00a46c: 00f22023   sw	a5, 0(tp)
00a470: 00a22023   sw	a0, 0(tp)
00a474: 00b22023   sw	a1, 0(tp)
00a478: 000c3023   sd	zero, 0(s8)
00a47c: 380225a3   sw	zero, 907(tp)
00a480: 30226503   lwu	a0, 770(tp)
00a484: 00723783   ld	a5, 7(tp)
00a488: 00078067   jr	a5
00a48c: 00f00713   li	a4, 15
00a490: 01323603   ld	a2, 19(tp)
00a494: fec76ee3   bltu	a4, a2, -4
00a498: 020224a3   sw	zero, 41(tp)
00a49c: 0a223703   ld	a4, 162(tp)
00a4a0: 0007061b   sext.w	a2, a4
00a4a4: a6cd2c23   sw	a2, -1416(s10)
00a4a8: 42075713   srai	a4, a4, 32
00a4ac: 01d5d61b   srliw	a2, a1, 29
00a4b0: a6ed2e23   sw	a4, -1412(s10)
00a4b4: 60000f37   lui	t5, 393216
00a4b8: 000d0893   mv	a7, s10
00a4bc: 00000713   li	a4, 0
00a4c0: 00367613   andi	a2, a2, 3
00a4c4: 1de68863   beq	a3, t5, 464
00a4c8: 01a3569b   srliw	a3, t1, 26
00a4cc: 0016f693   andi	a3, a3, 1
00a4d0: 00c6e6b3   or	a3, a3, a2
00a4d4: 1c068063   beqz	a3, 448
00a4d8: a1dd2a23   sw	t4, -1516(s10)
00a4dc: a0ad2c23   sw	a0, -1512(s10)
00a4e0: 0145d69b   srliw	a3, a1, 20
00a4e4: 00300537   lui	a0, 768
00a4e8: 0036f693   andi	a3, a3, 3
00a4ec: 14a78863   beq	a5, a0, 336
00a4f0: 01b3579b   srliw	a5, t1, 27
00a4f4: 0017f793   andi	a5, a5, 1
00a4f8: 00d7e7b3   or	a5, a5, a3
00a4fc: 14078063   beqz	a5, 320
00a500: a1c8ae23   sw	t3, -1508(a7)
00a504: a308a023   sw	a6, -1504(a7)
00a508: ffd007b7   lui	a5, 1047808
00a50c: fff78793   addi	a5, a5, -1
00a510: 0146969b   slliw	a3, a3, 20
00a514: 00f777b3   and	a5, a4, a5
00a518: a0000737   lui	a4, 655360
00a51c: 00d7e7b3   or	a5, a5, a3
00a520: fff70713   addi	a4, a4, -1
00a524: 01d6161b   slliw	a2, a2, 29
00a528: 00e7f7b3   and	a5, a5, a4
00a52c: 00c7e7b3   or	a5, a5, a2
00a530: 30226503   lwu	a0, 770(tp)
00a534: 00723803   ld	a6, 7(tp)
00a538: 0007879b   sext.w	a5, a5
00a53c: 9cfd2e23   sw	a5, -1572(s10)
00a540: a26d2223   sw	t1, -1500(s10)
00a544: 0005859b   sext.w	a1, a1
00a548: e205dee3   bgez	a1, -452
00a54c: 01523783   ld	a5, 21(tp)
00a550: 0037f793   andi	a5, a5, 3
00a554: 00f206b3   add	a3, tp, a5
00a558: 00b6e603   lwu	a2, 11(a3)
00a55c: 04178793   addi	a5, a5, 65
00a560: 00f20733   add	a4, tp, a5
00a564: 00100693   li	a3, 1
00a568: 00d72023   sw	a3, 0(a4)
00a56c: 01323703   ld	a4, 19(tp)
00a570: fe071ee3   bnez	a4, -4
00a574: ebccb703   ld	a4, -324(s9)
00a578: 07f00593   li	a1, 127
00a57c: 00c75693   srli	a3, a4, 12
00a580: 0036f693   andi	a3, a3, 3
00a584: 08068463   beqz	a3, 136
00a588: b00026f3   csrr	a3, mcycle
00a58c: 00000013   nop
00a590: b0002773   csrr	a4, mcycle
00a594: 40d70733   sub	a4, a4, a3
00a598: fee5fae3   bgeu	a1, a4, -12
00a59c: ebcca703   lw	a4, -324(s9)
00a5a0: 02071713   slli	a4, a4, 32
00a5a4: 02075713   srli	a4, a4, 32
00a5a8: fd5ff06f   j	-44
00a5ac: 01523783   ld	a5, 21(tp)
00a5b0: 0037f793   andi	a5, a5, 3
00a5b4: 00f206b3   add	a3, tp, a5
00a5b8: 00b6e603   lwu	a2, 11(a3)
00a5bc: 04178793   addi	a5, a5, 65
00a5c0: 00f20733   add	a4, tp, a5
00a5c4: 00100693   li	a3, 1
00a5c8: 00d72023   sw	a3, 0(a4)
00a5cc: 01323703   ld	a4, 19(tp)
00a5d0: fe071ee3   bnez	a4, -4
00a5d4: ebccb703   ld	a4, -324(s9)
00a5d8: 07f00593   li	a1, 127
00a5dc: 00c75693   srli	a3, a4, 12
00a5e0: 0036f693   andi	a3, a3, 3
00a5e4: 04068063   beqz	a3, 64
00a5e8: b00026f3   csrr	a3, mcycle
00a5ec: 00000013   nop
00a5f0: b0002773   csrr	a4, mcycle
00a5f4: 40d70733   sub	a4, a4, a3
00a5f8: fee5fae3   bgeu	a1, a4, -12
00a5fc: ebcca703   lw	a4, -324(s9)
00a600: 02071713   slli	a4, a4, 32
00a604: 02075713   srli	a4, a4, 32
00a608: fd5ff06f   j	-44
00a60c: 00177713   andi	a4, a4, 1
00a610: 00070463   beqz	a4, 8
00a614: ea0cae23   sw	zero, -324(s9)
00a618: 00f207b3   add	a5, tp, a5
00a61c: 00c7a023   sw	a2, 0(a5)
00a620: d65ff06f   j	-668
00a624: 00177713   andi	a4, a4, 1
00a628: 00070463   beqz	a4, 8
00a62c: ea0cae23   sw	zero, -324(s9)
00a630: 00f207b3   add	a5, tp, a5
00a634: 00c7a023   sw	a2, 0(a5)
00a638: de1ff06f   j	-544
00a63c: 020e1e13   slli	t3, t3, 32
00a640: 02081793   slli	a5, a6, 32
00a644: 020e5e13   srli	t3, t3, 32
00a648: 0045f513   andi	a0, a1, 4
00a64c: 01c7e7b3   or	a5, a5, t3
00a650: 00050663   beqz	a0, 12
00a654: 602bb503   ld	a0, 1538(s7)
00a658: 00a787b3   add	a5, a5, a0
00a65c: 06f239a3   sd	a5, 115(tp)
00a660: 07323503   ld	a0, 115(tp)
00a664: 00050e1b   sext.w	t3, a0
00a668: 42055813   srai	a6, a0, 32
00a66c: 0195d79b   srliw	a5, a1, 25
00a670: fa000537   lui	a0, 1024000
00a674: 0037f793   andi	a5, a5, 3
00a678: fff50513   addi	a0, a0, -1
00a67c: a1c8ae23   sw	t3, -1508(a7)
00a680: 0197979b   slliw	a5, a5, 25
00a684: 00a77733   and	a4, a4, a0
00a688: a308a023   sw	a6, -1504(a7)
00a68c: 00f76733   or	a4, a4, a5
00a690: e79ff06f   j	-392
00a694: 020e9e93   slli	t4, t4, 32
00a698: 02051713   slli	a4, a0, 32
00a69c: 020ede93   srli	t4, t4, 32
00a6a0: 0025f693   andi	a3, a1, 2
00a6a4: 01d76733   or	a4, a4, t4
00a6a8: 00068663   beqz	a3, 12
00a6ac: 600bb683   ld	a3, 1536(s7)
00a6b0: 00d70733   add	a4, a4, a3
00a6b4: 06e239a3   sd	a4, 115(tp)
00a6b8: 07323683   ld	a3, 115(tp)
00a6bc: 0006851b   sext.w	a0, a3
00a6c0: 00d5d71b   srliw	a4, a1, 13
00a6c4: 4206d693   srai	a3, a3, 32
00a6c8: a0a8aa23   sw	a0, -1516(a7)
00a6cc: 00377713   andi	a4, a4, 3
00a6d0: a0d8ac23   sw	a3, -1512(a7)
00a6d4: 00d7171b   slliw	a4, a4, 13
00a6d8: e09ff06f   j	-504
00a6dc: 00000013   nop
00a6e0: 30226883   lwu	a7, 770(tp)
00a6e4: 0018f793   andi	a5, a7, 1
00a6e8: 00088e9b   sext.w	t4, a7
00a6ec: 02079a63   bnez	a5, 52
00a6f0: 0a223783   ld	a5, 162(tp)
00a6f4: 00100713   li	a4, 1
00a6f8: 08e22223   sw	a4, 132(tp)
00a6fc: 0207d713   srli	a4, a5, 32
00a700: 00e22023   sw	a4, 0(tp)
00a704: 00f22023   sw	a5, 0(tp)
00a708: 00a22023   sw	a0, 0(tp)
00a70c: 01122023   sw	a7, 0(tp)
00a710: 000c3023   sd	zero, 0(s8)
00a714: 380225a3   sw	zero, 907(tp)
00a718: da0ff06f   j	-2656
00a71c: c0001073   unimp
00a720: 30226303   lwu	t1, 770(tp)
00a724: 30226803   lwu	a6, 770(tp)
00a728: 02081813   slli	a6, a6, 32
00a72c: 02085813   srli	a6, a6, 32
00a730: 30223783   ld	a5, 770(tp)
00a734: 30223683   ld	a3, 770(tp)
00a738: 02069693   slli	a3, a3, 32
00a73c: 00f6e6b3   or	a3, a3, a5
00a740: 30226f03   lwu	t5, 770(tp)
00a744: 00f00713   li	a4, 15
00a748: 01323783   ld	a5, 19(tp)
00a74c: fef76ee3   bltu	a4, a5, -4
00a750: 020224a3   sw	zero, 41(tp)
00a754: fff80813   addi	a6, a6, -1
00a758: 00080593   mv	a1, a6
00a75c: 06d239a3   sd	a3, 115(tp)
00a760: 07323f83   ld	t6, 115(tp)
00a764: 0a223503   ld	a0, 162(tp)
00a768: 06080e63   beqz	a6, 124
00a76c: 80000e37   lui	t3, 524288
00a770: 01cf6e33   or	t3, t5, t3
00a774: 02031313   slli	t1, t1, 32
00a778: 02055393   srli	t2, a0, 32
00a77c: 42055293   srai	t0, a0, 32
00a780: 000d0693   mv	a3, s10
00a784: 000e0e1b   sext.w	t3, t3
00a788: 02035313   srli	t1, t1, 32
00a78c: 0005051b   sext.w	a0, a0
00a790: 000f8613   mv	a2, t6
00a794: 00f00713   li	a4, 15
00a798: a006aa23   sw	zero, -1516(a3)
00a79c: a006ac23   sw	zero, -1512(a3)
00a7a0: 0006079b   sext.w	a5, a2
00a7a4: a0f6ae23   sw	a5, -1508(a3)
00a7a8: 42065793   srai	a5, a2, 32
00a7ac: a2f6a023   sw	a5, -1504(a3)
00a7b0: 9dd6ae23   sw	t4, -1572(a3)
00a7b4: a6a6ac23   sw	a0, -1416(a3)
00a7b8: a656ae23   sw	t0, -1412(a3)
00a7bc: fff58593   addi	a1, a1, -1
00a7c0: a3c6a223   sw	t3, -1500(a3)
00a7c4: 01323783   ld	a5, 19(tp)
00a7c8: fef76ee3   bltu	a4, a5, -4
00a7cc: 020224a3   sw	zero, 41(tp)
00a7d0: 00660633   add	a2, a2, t1
00a7d4: fc0592e3   bnez	a1, -60
00a7d8: 02680833   mul	a6, a6, t1
00a7dc: 010f8fb3   add	t6, t6, a6
00a7e0: 00c0006f   j	12
00a7e4: 02055393   srli	t2, a0, 32
00a7e8: 0005051b   sext.w	a0, a0
00a7ec: a00d2a23   sw	zero, -1516(s10)
00a7f0: a00d2c23   sw	zero, -1512(s10)
00a7f4: 000f879b   sext.w	a5, t6
00a7f8: a0fd2e23   sw	a5, -1508(s10)
00a7fc: 420fdf93   srai	t6, t6, 32
00a800: a3fd2023   sw	t6, -1504(s10)
00a804: 9d1d2e23   sw	a7, -1572(s10)
00a808: a6ad2c23   sw	a0, -1416(s10)
00a80c: 0003879b   sext.w	a5, t2
00a810: a6fd2e23   sw	a5, -1412(s10)
00a814: a3ed2223   sw	t5, -1500(s10)
00a818: 01323783   ld	a5, 19(tp)
00a81c: fe079ee3   bnez	a5, -4
00a820: c98ff06f   j	-2920
00a824: c0001073   unimp
00a828: 30226303   lwu	t1, 770(tp)
00a82c: c00007b7   lui	a5, 786432
00a830: 00f377b3   and	a5, t1, a5
00a834: 0007879b   sext.w	a5, a5
00a838: 40000737   lui	a4, 262144
00a83c: 0003061b   sext.w	a2, t1
00a840: 24e79063   bne	a5, a4, 576
00a844: f14027f3   csrr	a5, mhartid
00a848: 0007879b   sext.w	a5, a5
00a84c: 16079c63   bnez	a5, 376
00a850: 02000737   lui	a4, 8192
00a854: 00900413   li	s0, 9
00a858: 0a822323   sw	s0, 166(tp)
00a85c: 07426783   lwu	a5, 116(tp)
00a860: 0007879b   sext.w	a5, a5
00a864: 1c079e63   bnez	a5, 476
00a868: 02123783   ld	a5, 33(tp)
00a86c: 00f777b3   and	a5, a4, a5
00a870: fe0786e3   beqz	a5, -20
00a874: 30226703   lwu	a4, 770(tp)
00a878: 000257b7   lui	a5, 37
00a87c: 00fc87b3   add	a5, s9, a5
00a880: 000c8693   mv	a3, s9
00a884: 82e7a423   sw	a4, -2008(a5)
00a888: 30226703   lwu	a4, 770(tp)
00a88c: 82e7a823   sw	a4, -2000(a5)
00a890: 30226703   lwu	a4, 770(tp)
00a894: 82e7aa23   sw	a4, -1996(a5)
00a898: 30226703   lwu	a4, 770(tp)
00a89c: 0ff37813   zext.b	a6, t1
00a8a0: 01075593   srli	a1, a4, 16
00a8a4: 8507a223   sw	a6, -1980(a5)
00a8a8: 0ff5f593   zext.b	a1, a1
00a8ac: 82b7ae23   sw	a1, -1988(a5)
00a8b0: 0ff77713   zext.b	a4, a4
00a8b4: 82e7ac23   sw	a4, -1992(a5)
00a8b8: 30226703   lwu	a4, 770(tp)
00a8bc: 84e7a023   sw	a4, -1984(a5)
00a8c0: 30226703   lwu	a4, 770(tp)
00a8c4: 00070f1b   sext.w	t5, a4
00a8c8: 30226e83   lwu	t4, 770(tp)
00a8cc: 0133581b   srliw	a6, t1, 19
00a8d0: 00287893   andi	a7, a6, 2
00a8d4: 000e829b   sext.w	t0, t4
00a8d8: 00187813   andi	a6, a6, 1
00a8dc: 30226e03   lwu	t3, 770(tp)
00a8e0: 000e0e1b   sext.w	t3, t3
00a8e4: 30226783   lwu	a5, 770(tp)
00a8e8: 01000593   li	a1, 16
00a8ec: 09e67613   andi	a2, a2, 158
00a8f0: 0007879b   sext.w	a5, a5
00a8f4: 14b60063   beq	a2, a1, 320
00a8f8: 00078593   mv	a1, a5
00a8fc: 000e0f93   mv	t6, t3
00a900: 00028793   mv	a5, t0
00a904: 000f0e13   mv	t3, t5
00a908: 00025637   lui	a2, 37
00a90c: 00c686b3   add	a3, a3, a2
00a910: 85f6a823   sw	t6, -1968(a3)
00a914: 84b6aa23   sw	a1, -1964(a3)
00a918: 84f6a623   sw	a5, -1972(a3)
00a91c: 07426783   lwu	a5, 116(tp)
00a920: 0007879b   sext.w	a5, a5
00a924: 08079a63   bnez	a5, 148
00a928: 000407b7   lui	a5, 64
00a92c: 85c6a423   sw	t3, -1976(a3)
00a930: 00f377b3   and	a5, t1, a5
00a934: 12078a63   beqz	a5, 308
00a938: 02071713   slli	a4, a4, 32
00a93c: 020e9e93   slli	t4, t4, 32
00a940: 02075713   srli	a4, a4, 32
00a944: 000107b7   lui	a5, 16
00a948: 00eeeeb3   or	t4, t4, a4
00a94c: 00f37333   and	t1, t1, a5
00a950: 0a088463   beqz	a7, 168
00a954: 85c6a583   lw	a1, -1956(a3)
00a958: 8586a783   lw	a5, -1960(a3)
00a95c: 02059593   slli	a1, a1, 32
00a960: 0007879b   sext.w	a5, a5
00a964: 0a080c63   beqz	a6, 184
00a968: 8646af83   lw	t6, -1948(a3)
00a96c: 020f9f93   slli	t6, t6, 32
00a970: 8606a603   lw	a2, -1952(a3)
00a974: 0006061b   sext.w	a2, a2
00a978: 02079713   slli	a4, a5, 32
00a97c: 02075713   srli	a4, a4, 32
00a980: 00b76733   or	a4, a4, a1
00a984: 02e23a23   sd	a4, 52(tp)
00a988: 04081463   bnez	a6, 72
00a98c: 02030663   beqz	t1, 44
00a990: 08089263   bnez	a7, 132
00a994: 02ff0263   beq	t5, a5, 36
00a998: 01523783   ld	a5, 21(tp)
00a99c: 04078463   beqz	a5, 72
00a9a0: 03223783   ld	a5, 50(tp)
00a9a4: 04078063   beqz	a5, 64
00a9a8: 03523783   ld	a5, 53(tp)
00a9ac: 02078c63   beqz	a5, 56
00a9b0: 00b00593   li	a1, 11
00a9b4: bacfe0ef   jal	-7252
00a9b8: 0a8223a3   sw	s0, 167(tp)
00a9bc: afcff06f   j	-3332
00a9c0: c0001073   unimp
00a9c4: 04000737   lui	a4, 16384
00a9c8: 00a00413   li	s0, 10
00a9cc: e8dff06f   j	-372
00a9d0: 02061613   slli	a2, a2, 32
00a9d4: 02065613   srli	a2, a2, 32
00a9d8: 01f66633   or	a2, a2, t6
00a9dc: 02c23aa3   sd	a2, 53(tp)
00a9e0: fadff06f   j	-84
00a9e4: 07426783   lwu	a5, 116(tp)
00a9e8: 0007879b   sext.w	a5, a5
00a9ec: fc0796e3   bnez	a5, -52
00a9f0: 85c6a423   sw	t3, -1976(a3)
00a9f4: f60890e3   bnez	a7, -160
00a9f8: 8586a783   lw	a5, -1960(a3)
00a9fc: 0007879b   sext.w	a5, a5
00aa00: 02081463   bnez	a6, 40
00aa04: 00000613   li	a2, 0
00aa08: 00000593   li	a1, 0
00aa0c: 00000f93   li	t6, 0
00aa10: f69ff06f   j	-152
00aa14: f8ee92e3   bne	t4, a4, -124
00aa18: fa1ff06f   j	-96
00aa1c: 00000613   li	a2, 0
00aa20: 00000f93   li	t6, 0
00aa24: f55ff06f   j	-172
00aa28: 00000593   li	a1, 0
00aa2c: 00000f93   li	t6, 0
00aa30: f41ff06f   j	-192
00aa34: 00028593   mv	a1, t0
00aa38: 000f0f93   mv	t6, t5
00aa3c: ecdff06f   j	-308
00aa40: 00a22023   sw	a0, 0(tp)
00aa44: 00622023   sw	t1, 0(tp)
00aa48: 02251713   slli	a4, a0, 34
00aa4c: 03275713   srli	a4, a4, 50
00aa50: 0017071b   addiw	a4, a4, 1
00aa54: 00200793   li	a5, 2
00aa58: f6f740e3   blt	a4, a5, -160
00aa5c: 30226683   lwu	a3, 770(tp)
00aa60: 0017879b   addiw	a5, a5, 1
00aa64: ff5ff06f   j	-12
00aa68: 000207b7   lui	a5, 32
00aa6c: 00f37333   and	t1, t1, a5
00aa70: f40304e3   beqz	t1, -184
00aa74: 82c6a783   lw	a5, -2004(a3)
00aa78: fe078ee3   beqz	a5, -4
00aa7c: f3dff06f   j	-196
00aa80: 00a22023   sw	a0, 0(tp)
00aa84: 00622023   sw	t1, 0(tp)
00aa88: 000c3023   sd	zero, 0(s8)
00aa8c: 380225a3   sw	zero, 907(tp)
00aa90: 03226783   lwu	a5, 50(tp)
00aa94: 0007879b   sext.w	a5, a5
00aa98: f20782e3   beqz	a5, -220
00aa9c: c00f17b7   lui	a5, 786673
00aaa0: 00f22023   sw	a5, 0(tp)
00aaa4: 00022023   sw	zero, 0(tp)
00aaa8: 00022023   sw	zero, 0(tp)
00aaac: 00022023   sw	zero, 0(tp)
00aab0: 00022023   sw	zero, 0(tp)
00aab4: 00022023   sw	zero, 0(tp)
00aab8: 00022023   sw	zero, 0(tp)
00aabc: 00022023   sw	zero, 0(tp)
00aac0: 00022023   sw	zero, 0(tp)
00aac4: 00022023   sw	zero, 0(tp)
00aac8: 00022023   sw	zero, 0(tp)
00aacc: 00022023   sw	zero, 0(tp)
00aad0: 00022023   sw	zero, 0(tp)
00aad4: 00022023   sw	zero, 0(tp)
00aad8: 00022023   sw	zero, 0(tp)
00aadc: 00022023   sw	zero, 0(tp)
00aae0: 00022023   sw	zero, 0(tp)
00aae4: 40000793   li	a5, 1024
00aae8: f1402773   csrr	a4, mhartid
00aaec: 00e797b3   sll	a5, a5, a4
00aaf0: 31423703   ld	a4, 788(tp)
00aaf4: 00e7f733   and	a4, a5, a4
00aaf8: fe071ce3   bnez	a4, -8
00aafc: 701bb783   ld	a5, 1793(s7)
00ab00: ea078ee3   beqz	a5, -324
00ab04: 00b00593   li	a1, 11
00ab08: a58fe0ef   jal	-7592
00ab0c: eb1ff06f   j	-336
00ab10: 30226703   lwu	a4, 770(tp)
00ab14: c00007b7   lui	a5, 786432
00ab18: 00f777b3   and	a5, a4, a5
00ab1c: 0007879b   sext.w	a5, a5
00ab20: 14078063   beqz	a5, 320
00ab24: 400006b7   lui	a3, 262144
00ab28: 00d78c63   beq	a5, a3, 24
00ab2c: 1f323783   ld	a5, 499(tp)
00ab30: 0007b023   sd	zero, 0(a5)
00ab34: 380225a3   sw	zero, 907(tp)
00ab38: 980ff06f   j	-3712
00ab3c: c0001073   unimp
00ab40: 30223683   ld	a3, 770(tp)
00ab44: 30223783   ld	a5, 770(tp)
00ab48: 02079793   slli	a5, a5, 32
00ab4c: 00d7e7b3   or	a5, a5, a3
00ab50: 06f239a3   sd	a5, 115(tp)
00ab54: 07323883   ld	a7, 115(tp)
00ab58: 0127569b   srliw	a3, a4, 18
00ab5c: 1806f693   andi	a3, a3, 384
00ab60: 30223503   ld	a0, 770(tp)
00ab64: 30223803   ld	a6, 770(tp)
00ab68: 30223583   ld	a1, 770(tp)
00ab6c: 30223603   ld	a2, 770(tp)
00ab70: 02061613   slli	a2, a2, 32
00ab74: 07f77793   andi	a5, a4, 127
00ab78: 00b66633   or	a2, a2, a1
00ab7c: 0c078a63   beqz	a5, 212
00ab80: 02081813   slli	a6, a6, 32
00ab84: 00a86833   or	a6, a6, a0
00ab88: 30226783   lwu	a5, 770(tp)
00ab8c: 00300513   li	a0, 3
00ab90: 03379793   slli	a5, a5, 51
00ab94: 07f77593   andi	a1, a4, 127
00ab98: 0337d793   srli	a5, a5, 51
00ab9c: 0087571b   srliw	a4, a4, 8
00aba0: 02151513   slli	a0, a0, 33
00aba4: 00b6e6b3   or	a3, a3, a1
00aba8: 00f77713   andi	a4, a4, 15
00abac: 0067979b   slliw	a5, a5, 6
00abb0: 00150513   addi	a0, a0, 1
00abb4: 30d22da3   sw	a3, 795(tp)
00abb8: 31123e23   sd	a7, 796(tp)
00abbc: 31023ea3   sd	a6, 797(tp)
00abc0: 30c23f23   sd	a2, 798(tp)
00abc4: 00100693   li	a3, 1
00abc8: 00200893   li	a7, 2
00abcc: 36a23823   sd	a0, 880(tp)
00abd0: 32d220a3   sw	a3, 801(tp)
00abd4: 06e88663   beq	a7, a4, 108
00abd8: 04e69a63   bne	a3, a4, 84
00abdc: 00278793   addi	a5, a5, 2
00abe0: 07423803   ld	a6, 116(tp)
00abe4: 32123883   ld	a7, 801(tp)
00abe8: 06081063   bnez	a6, 96
00abec: fe089ae3   bnez	a7, -12
00abf0: 32223803   ld	a6, 802(tp)
00abf4: 04c80a63   beq	a6, a2, 84
00abf8: 01523503   ld	a0, 21(tp)
00abfc: 00050e63   beqz	a0, 28
00ac00: 03226803   lwu	a6, 50(tp)
00ac04: 00080a63   beqz	a6, 20
00ac08: 03526503   lwu	a0, 53(tp)
00ac0c: 00050663   beqz	a0, 12
00ac10: 00900593   li	a1, 9
00ac14: 94cfe06f   j	-7860
00ac18: 00168693   addi	a3, a3, 1
00ac1c: fef69ee3   bne	a3, a5, -4
00ac20: 00100693   li	a3, 1
00ac24: 32d220a3   sw	a3, 801(tp)
00ac28: fb9ff06f   j	-72
00ac2c: 07423803   ld	a6, 116(tp)
00ac30: 32123883   ld	a7, 801(tp)
00ac34: 00081a63   bnez	a6, 20
00ac38: fe089ae3   bnez	a7, -12
00ac3c: 00c0006f   j	12
00ac40: 32323803   ld	a6, 803(tp)
00ac44: fe081ee3   bnez	a6, -4
00ac48: 870ff06f   j	-3984
00ac4c: c0001073   unimp
00ac50: f8077713   andi	a4, a4, -128
00ac54: 06f76713   ori	a4, a4, 111
00ac58: 00000813   li	a6, 0
00ac5c: f2dff06f   j	-212
00ac60: 00a22023   sw	a0, 0(tp)
00ac64: 00e22023   sw	a4, 0(tp)
00ac68: 000c3023   sd	zero, 0(s8)
00ac6c: 380225a3   sw	zero, 907(tp)
00ac70: 03226783   lwu	a5, 50(tp)
00ac74: 0007879b   sext.w	a5, a5
00ac78: ec0780e3   beqz	a5, -320
00ac7c: c00f17b7   lui	a5, 786673
00ac80: 00f22023   sw	a5, 0(tp)
00ac84: 00022023   sw	zero, 0(tp)
00ac88: 00022023   sw	zero, 0(tp)
00ac8c: 00022023   sw	zero, 0(tp)
00ac90: 00022023   sw	zero, 0(tp)
00ac94: 00022023   sw	zero, 0(tp)
00ac98: 00022023   sw	zero, 0(tp)
00ac9c: 00022023   sw	zero, 0(tp)
00aca0: 00022023   sw	zero, 0(tp)
00aca4: 00022023   sw	zero, 0(tp)
00aca8: 00022023   sw	zero, 0(tp)
00acac: 00022023   sw	zero, 0(tp)
00acb0: 00022023   sw	zero, 0(tp)
00acb4: 00022023   sw	zero, 0(tp)
00acb8: 00022023   sw	zero, 0(tp)
00acbc: 00022023   sw	zero, 0(tp)
00acc0: 00022023   sw	zero, 0(tp)
00acc4: 40000793   li	a5, 1024
00acc8: f1402773   csrr	a4, mhartid
00accc: 00e797b3   sll	a5, a5, a4
00acd0: 31423703   ld	a4, 788(tp)
00acd4: 00e7f733   and	a4, a5, a4
00acd8: fe071ce3   bnez	a4, -8
00acdc: 701bb783   ld	a5, 1793(s7)
00ace0: e4078ce3   beqz	a5, -424
00ace4: 00900593   li	a1, 9
00ace8: 878fe0ef   jal	-8072
00acec: e4dff06f   j	-436
00acf0: 02251593   slli	a1, a0, 34
00acf4: 0325d593   srli	a1, a1, 50
00acf8: 00158593   addi	a1, a1, 1
00acfc: 00000613   li	a2, 0
00ad00: 00c0006f   j	12
00ad04: 00460613   addi	a2, a2, 4
00ad08: 06b67463   bgeu	a2, a1, 104
00ad0c: 30226783   lwu	a5, 770(tp)
00ad10: 0017979b   slliw	a5, a5, 1
00ad14: 30223683   ld	a3, 770(tp)
00ad18: 30223703   ld	a4, 770(tp)
00ad1c: 02071713   slli	a4, a4, 32
00ad20: 00d76733   or	a4, a4, a3
00ad24: 06e239a3   sd	a4, 115(tp)
00ad28: 07323703   ld	a4, 115(tp)
00ad2c: 32022223   sw	zero, 804(tp)
00ad30: 32e232a3   sd	a4, 805(tp)
00ad34: 30226683   lwu	a3, 770(tp)
00ad38: 00a6969b   slliw	a3, a3, 10
00ad3c: 0017e713   ori	a4, a5, 1
00ad40: 02069693   slli	a3, a3, 32
00ad44: 0206d693   srli	a3, a3, 32
00ad48: 02071713   slli	a4, a4, 32
00ad4c: 00d76733   or	a4, a4, a3
00ad50: 0ae23d23   sd	a4, 186(tp)
00ad54: 0107f793   andi	a5, a5, 16
00ad58: fa0786e3   beqz	a5, -84
00ad5c: 0ba23783   ld	a5, 186(tp)
00ad60: fa0782e3   beqz	a5, -92
00ad64: 0ba23783   ld	a5, 186(tp)
00ad68: fe079ae3   bnez	a5, -12
00ad6c: f99ff06f   j	-104
00ad70: f49fe06f   j	-4280
00ad74: c0001073   unimp
00ad78: f41fe06f   j	-4288
00ad7c: c0001073   unimp
00ad80: 30226783   lwu	a5, 770(tp)
00ad84: 01e7d71b   srliw	a4, a5, 30
00ad88: 00071e63   bnez	a4, 28
00ad8c: 00a22023   sw	a0, 0(tp)
00ad90: 00f22023   sw	a5, 0(tp)
00ad94: 000c3023   sd	zero, 0(s8)
00ad98: 380225a3   sw	zero, 907(tp)
00ad9c: f1dfe06f   j	-4324
00ada0: c0001073   unimp
00ada4: 30226703   lwu	a4, 770(tp)
00ada8: 30226583   lwu	a1, 770(tp)
00adac: 30226603   lwu	a2, 770(tp)
00adb0: 30226683   lwu	a3, 770(tp)
00adb4: 0107f513   andi	a0, a5, 16
00adb8: 06050a63   beqz	a0, 116
00adbc: 0197d51b   srliw	a0, a5, 25
00adc0: 00357513   andi	a0, a0, 3
00adc4: 30a22da3   sw	a0, 795(tp)
00adc8: 02071713   slli	a4, a4, 32
00adcc: 02075713   srli	a4, a4, 32
00add0: 02059593   slli	a1, a1, 32
00add4: 00e5e5b3   or	a1, a1, a4
00add8: 06b239a3   sd	a1, 115(tp)
00addc: 07323703   ld	a4, 115(tp)
00ade0: 00073583   ld	a1, 0(a4)
00ade4: 0077f713   andi	a4, a5, 7
00ade8: fff7071b   addiw	a4, a4, -1
00adec: 02069693   slli	a3, a3, 32
00adf0: 0206d693   srli	a3, a3, 32
00adf4: 0007081b   sext.w	a6, a4
00adf8: 00500513   li	a0, 5
00adfc: 00b6f6b3   and	a3, a3, a1
00ae00: 05056a63   bltu	a0, a6, 84
00ae04: 02071513   slli	a0, a4, 32
00ae08: 000f6597   auipc	a1, 246
00ae0c: 8d058593   addi	a1, a1, -1840
00ae10: 01e55713   srli	a4, a0, 30
00ae14: 00b70733   add	a4, a4, a1
00ae18: 00072703   lw	a4, 0(a4)
00ae1c: 02061613   slli	a2, a2, 32
00ae20: 02065613   srli	a2, a2, 32
00ae24: 00b70733   add	a4, a4, a1
00ae28: 00070067   jr	a4
00ae2c: 02071593   slli	a1, a4, 32
00ae30: 01e5d713   srli	a4, a1, 30
00ae34: 00100593   li	a1, 1
00ae38: 03059593   slli	a1, a1, 48
00ae3c: 00b70733   add	a4, a4, a1
00ae40: 00072583   lw	a1, 0(a4)
00ae44: 02059593   slli	a1, a1, 32
00ae48: 0205d593   srli	a1, a1, 32
00ae4c: f99ff06f   j	-104
00ae50: 02d60c63   beq	a2, a3, 56
00ae54: 0087d69b   srliw	a3, a5, 8
00ae58: 02079793   slli	a5, a5, 32
00ae5c: 0207d793   srli	a5, a5, 32
00ae60: 0036f693   andi	a3, a3, 3
00ae64: 30226703   lwu	a4, 770(tp)
00ae68: 30226503   lwu	a0, 770(tp)
00ae6c: 30226583   lwu	a1, 770(tp)
00ae70: 0147d613   srli	a2, a5, 20
00ae74: 0005881b   sext.w	a6, a1
00ae78: 00167613   andi	a2, a2, 1
00ae7c: 04068c63   beqz	a3, 88
00ae80: 00100813   li	a6, 1
00ae84: 01068c63   beq	a3, a6, 24
00ae88: 30226783   lwu	a5, 770(tp)
00ae8c: 30226783   lwu	a5, 770(tp)
00ae90: 30226783   lwu	a5, 770(tp)
00ae94: e25fe06f   j	-4572
00ae98: c0001073   unimp
00ae9c: 0197d793   srli	a5, a5, 25
00aea0: 0037f793   andi	a5, a5, 3
00aea4: 32f22223   sw	a5, 804(tp)
00aea8: 02071713   slli	a4, a4, 32
00aeac: 02075713   srli	a4, a4, 32
00aeb0: 02051513   slli	a0, a0, 32
00aeb4: 00e56533   or	a0, a0, a4
00aeb8: 06a239a3   sd	a0, 115(tp)
00aebc: 07323783   ld	a5, 115(tp)
00aec0: 00b7a023   sw	a1, 0(a5)
00aec4: fc0608e3   beqz	a2, -48
00aec8: 32423783   ld	a5, 804(tp)
00aecc: fe079ee3   bnez	a5, -4
00aed0: fc5ff06f   j	-60
00aed4: 02071693   slli	a3, a4, 32
00aed8: 00100713   li	a4, 1
00aedc: 01e6d793   srli	a5, a3, 30
00aee0: 03071713   slli	a4, a4, 48
00aee4: 00e787b3   add	a5, a5, a4
00aee8: 00b7a023   sw	a1, 0(a5)
00aeec: fa0604e3   beqz	a2, -88
00aef0: 0007a703   lw	a4, 0(a5)
00aef4: fee81ee3   bne	a6, a4, -4
00aef8: f9dff06f   j	-100
00aefc: f4c6fce3   bgeu	a3, a2, -168
00af00: f89ff06f   j	-120
00af04: f8d612e3   bne	a2, a3, -124
00af08: f4dff06f   j	-180
00af0c: f4d674e3   bgeu	a2, a3, -184
00af10: f79ff06f   j	-136
00af14: f4c6e0e3   bltu	a3, a2, -192
00af18: f71ff06f   j	-144
00af1c: f6d676e3   bgeu	a2, a3, -148
00af20: f35ff06f   j	-204
00af24: 00000013   nop
00af28: 30226783   lwu	a5, 770(tp)
00af2c: 00a22023   sw	a0, 0(tp)
00af30: 02326783   lwu	a5, 35(tp)
00af34: 00f22023   sw	a5, 0(tp)
00af38: c00f17b7   lui	a5, 786673
00af3c: 00f22023   sw	a5, 0(tp)
00af40: 00022023   sw	zero, 0(tp)
00af44: 00022023   sw	zero, 0(tp)
00af48: 00022023   sw	zero, 0(tp)
00af4c: 00022023   sw	zero, 0(tp)
00af50: 00022023   sw	zero, 0(tp)
00af54: 00022023   sw	zero, 0(tp)
00af58: 00022023   sw	zero, 0(tp)
00af5c: 00022023   sw	zero, 0(tp)
00af60: 00022023   sw	zero, 0(tp)
00af64: 00022023   sw	zero, 0(tp)
00af68: 00022023   sw	zero, 0(tp)
00af6c: 00022023   sw	zero, 0(tp)
00af70: 00022023   sw	zero, 0(tp)
00af74: 00022023   sw	zero, 0(tp)
00af78: 00022023   sw	zero, 0(tp)
00af7c: 00022023   sw	zero, 0(tp)
00af80: 40000713   li	a4, 1024
00af84: f14027f3   csrr	a5, mhartid
00af88: 00f71733   sll	a4, a4, a5
00af8c: 31423783   ld	a5, 788(tp)
00af90: 00f777b3   and	a5, a4, a5
00af94: fe079ce3   bnez	a5, -8
00af98: d21fe06f   j	-4832
00af9c: c0001073   unimp
00afa0: 30226783   lwu	a5, 770(tp)
00afa4: 00a22023   sw	a0, 0(tp)
00afa8: 00f22023   sw	a5, 0(tp)
00afac: d0dfe06f   j	-4852
00afb0: c0001073   unimp
00afb4: 00000013   nop
00afb8: 30226783   lwu	a5, 770(tp)
00afbc: 00300693   li	a3, 3
00afc0: 0ff7f793   zext.b	a5, a5
00afc4: 60078713   addi	a4, a5, 1536
00afc8: 03069693   slli	a3, a3, 48
00afcc: 00d70733   add	a4, a4, a3
00afd0: 00072703   lw	a4, 0(a4)
00afd4: 0007071b   sext.w	a4, a4
00afd8: 00a22023   sw	a0, 0(tp)
00afdc: 00f22023   sw	a5, 0(tp)
00afe0: 0000c6b7   lui	a3, 12
00afe4: 0416869b   addiw	a3, a3, 65
00afe8: f14027f3   csrr	a5, mhartid
00afec: 0037f793   andi	a5, a5, 3
00aff0: 00d787bb   addw	a5, a5, a3
00aff4: 02079793   slli	a5, a5, 32
00aff8: 00100693   li	a3, 1
00affc: 03069693   slli	a3, a3, 48
00b000: 01e7d793   srli	a5, a5, 30
00b004: 00d787b3   add	a5, a5, a3
00b008: 00e7a023   sw	a4, 0(a5)
00b00c: cadfe06f   j	-4948
00b010: c0001073   unimp
00b014: 00000013   nop
00b018: 30226703   lwu	a4, 770(tp)
00b01c: 30226683   lwu	a3, 770(tp)
00b020: c00007b7   lui	a5, 786432
00b024: 00f777b3   and	a5, a4, a5
00b028: 0007879b   sext.w	a5, a5
00b02c: 00079e63   bnez	a5, 28
00b030: 00a22023   sw	a0, 0(tp)
00b034: 0ff77713   zext.b	a4, a4
00b038: 00e22023   sw	a4, 0(tp)
00b03c: 00d22023   sw	a3, 0(tp)
00b040: c79fe06f   j	-5000
00b044: c0001073   unimp
00b048: 40000637   lui	a2, 262144
00b04c: fec79ae3   bne	a5, a2, -12
00b050: 0ff77713   zext.b	a4, a4
00b054: 00300793   li	a5, 3
00b058: 60070713   addi	a4, a4, 1536
00b05c: 03079793   slli	a5, a5, 48
00b060: 00f70733   add	a4, a4, a5
00b064: 00d72023   sw	a3, 0(a4)
00b068: 1e022fa3   sw	zero, 511(tp)
00b06c: fd5ff06f   j	-44
00b070: 30223503   ld	a0, 770(tp)
00b074: 30223583   ld	a1, 770(tp)
00b078: 30226703   lwu	a4, 770(tp)
00b07c: 30226783   lwu	a5, 770(tp)
00b080: 0007881b   sext.w	a6, a5
00b084: 02079793   slli	a5, a5, 32
00b088: 0207d793   srli	a5, a5, 32
00b08c: 30223883   ld	a7, 770(tp)
00b090: 30223603   ld	a2, 770(tp)
00b094: 008006b7   lui	a3, 2048
00b098: 00d776b3   and	a3, a4, a3
00b09c: 02068063   beqz	a3, 32
00b0a0: 02061613   slli	a2, a2, 32
00b0a4: 01166633   or	a2, a2, a7
00b0a8: 06c239a3   sd	a2, 115(tp)
00b0ac: 07323683   ld	a3, 115(tp)
00b0b0: 0006a683   lw	a3, 0(a3)
00b0b4: 0006861b   sext.w	a2, a3
00b0b8: 2106e863   bltu	a3, a6, 528
00b0bc: 00079c63   bnez	a5, 24
00b0c0: 1f323783   ld	a5, 499(tp)
00b0c4: 0007b023   sd	zero, 0(a5)
00b0c8: 380225a3   sw	zero, 907(tp)
00b0cc: bedfe06f   j	-5140
00b0d0: c0001073   unimp
00b0d4: 02c71713   slli	a4, a4, 44
00b0d8: 02c75813   srli	a6, a4, 44
00b0dc: 00080613   mv	a2, a6
00b0e0: 03226703   lwu	a4, 50(tp)
00b0e4: 02071713   slli	a4, a4, 32
00b0e8: 01076733   or	a4, a4, a6
00b0ec: 60ebb623   sd	a4, 1548(s7)
00b0f0: 1e022fa3   sw	zero, 511(tp)
00b0f4: 60fbb223   sd	a5, 1540(s7)
00b0f8: 1e022fa3   sw	zero, 511(tp)
00b0fc: 30226683   lwu	a3, 770(tp)
00b100: 30226883   lwu	a7, 770(tp)
00b104: 30226783   lwu	a5, 770(tp)
00b108: 0107d71b   srliw	a4, a5, 16
00b10c: 02069693   slli	a3, a3, 32
00b110: 0206d693   srli	a3, a3, 32
00b114: 02071713   slli	a4, a4, 32
00b118: 00d76733   or	a4, a4, a3
00b11c: 60ebb323   sd	a4, 1542(s7)
00b120: 0007869b   sext.w	a3, a5
00b124: 1e022fa3   sw	zero, 511(tp)
00b128: 30226f03   lwu	t5, 770(tp)
00b12c: 30226e03   lwu	t3, 770(tp)
00b130: 02089793   slli	a5, a7, 32
00b134: 03069693   slli	a3, a3, 48
00b138: 0207d793   srli	a5, a5, 32
00b13c: 0106d693   srli	a3, a3, 16
00b140: 000e089b   sext.w	a7, t3
00b144: 00f6e6b3   or	a3, a3, a5
00b148: 30226703   lwu	a4, 770(tp)
00b14c: 30226783   lwu	a5, 770(tp)
00b150: 0007879b   sext.w	a5, a5
00b154: 30226e83   lwu	t4, 770(tp)
00b158: 03089893   slli	a7, a7, 48
00b15c: 020f1f13   slli	t5, t5, 32
00b160: 020f5f13   srli	t5, t5, 32
00b164: 0108d893   srli	a7, a7, 16
00b168: 0107d31b   srliw	t1, a5, 16
00b16c: 01e8e8b3   or	a7, a7, t5
00b170: 03079f13   slli	t5, a5, 48
00b174: 030f5f13   srli	t5, t5, 48
00b178: 0107d79b   srliw	a5, a5, 16
00b17c: 00030463   beqz	t1, 8
00b180: fff7831b   addiw	t1, a5, -1
00b184: 02059793   slli	a5, a1, 32
00b188: 00a7e7b3   or	a5, a5, a0
00b18c: 02031313   slli	t1, t1, 32
00b190: 02035313   srli	t1, t1, 32
00b194: 606bb823   sd	t1, 1552(s7)
00b198: 02071513   slli	a0, a4, 32
00b19c: 1e022fa3   sw	zero, 511(tp)
00b1a0: 01055713   srli	a4, a0, 16
00b1a4: 010e5e1b   srliw	t3, t3, 16
00b1a8: 611bb723   sd	a7, 1550(s7)
00b1ac: 030f1513   slli	a0, t5, 48
00b1b0: 01c76733   or	a4, a4, t3
00b1b4: 1e022fa3   sw	zero, 511(tp)
00b1b8: 00a76733   or	a4, a4, a0
00b1bc: 60ebb423   sd	a4, 1544(s7)
00b1c0: 020e9e93   slli	t4, t4, 32
00b1c4: 1e022fa3   sw	zero, 511(tp)
00b1c8: 020ede93   srli	t4, t4, 32
00b1cc: 61dbbc23   sd	t4, 1560(s7)
00b1d0: 1e022fa3   sw	zero, 511(tp)
00b1d4: 04022423   sw	zero, 72(tp)
00b1d8: 31422003   lw	zero, 788(tp)
00b1dc: c000b737   lui	a4, 786443
00b1e0: e007071b   addiw	a4, a4, -512
00b1e4: 00e22023   sw	a4, 0(tp)
00b1e8: 00022023   sw	zero, 0(tp)
00b1ec: 080226a3   sw	zero, 141(tp)
00b1f0: 010228a3   sw	a6, 17(tp)
00b1f4: 02f23123   sd	a5, 34(tp)
00b1f8: 06f239a3   sd	a5, 115(tp)
00b1fc: 07323783   ld	a5, 115(tp)
00b200: 60fbb523   sd	a5, 1546(s7)
00b204: 1e022fa3   sw	zero, 511(tp)
00b208: 00f23123   sd	a5, 2(tp)
00b20c: 00100793   li	a5, 1
00b210: 02079793   slli	a5, a5, 32
00b214: 00f66633   or	a2, a2, a5
00b218: 00c23123   sd	a2, 2(tp)
00b21c: c00247b7   lui	a5, 786468
00b220: f007879b   addiw	a5, a5, -256
00b224: 00f22523   sw	a5, 10(tp)
00b228: 00022023   sw	zero, 0(tp)
00b22c: 00022023   sw	zero, 0(tp)
00b230: 00022023   sw	zero, 0(tp)
00b234: 00200793   li	a5, 2
00b238: 00f23d23   sd	a5, 26(tp)
00b23c: 608bb783   ld	a5, 1544(s7)
00b240: 0008881b   sext.w	a6, a7
00b244: 618bb703   ld	a4, 1560(s7)
00b248: 00a26603   lwu	a2, 10(tp)
00b24c: 0106561b   srliw	a2, a2, 16
00b250: 00167613   andi	a2, a2, 1
00b254: 01123583   ld	a1, 17(tp)
00b258: 00059a63   bnez	a1, 20
00b25c: 00022c23   sw	zero, 24(tp)
00b260: 1f126583   lwu	a1, 497(tp)
00b264: 00b22023   sw	a1, 0(tp)
00b268: 00022023   sw	zero, 0(tp)
00b26c: 06071463   bnez	a4, 104
00b270: 02078863   beqz	a5, 48
00b274: c0017537   lui	a0, 786455
00b278: 000105b7   lui	a1, 16
00b27c: 6005051b   addiw	a0, a0, 1536
00b280: fff58593   addi	a1, a1, -1
00b284: 02c22423   sw	a2, 40(tp)
00b288: 00a22023   sw	a0, 0(tp)
00b28c: 00b7f733   and	a4, a5, a1
00b290: 00e22023   sw	a4, 0(tp)
00b294: 01022023   sw	a6, 0(tp)
00b298: 0107d793   srli	a5, a5, 16
00b29c: fe0794e3   bnez	a5, -24
00b2a0: 611bb123   sd	a7, 1538(s7)
00b2a4: 1e022fa3   sw	zero, 511(tp)
00b2a8: 60dbb023   sd	a3, 1536(s7)
00b2ac: 1e022fa3   sw	zero, 511(tp)
00b2b0: 00d23fa3   sd	a3, 31(tp)
00b2b4: 02d23023   sd	a3, 32(tp)
00b2b8: 88d1b423   sd	a3, -1912(gp)
00b2bc: 30226503   lwu	a0, 770(tp)
00b2c0: 00723783   ld	a5, 7(tp)
00b2c4: 00078067   jr	a5
00b2c8: 02061793   slli	a5, a2, 32
00b2cc: 0207d793   srli	a5, a5, 32
00b2d0: dedff06f   j	-532
00b2d4: 02c22423   sw	a2, 40(tp)
00b2d8: c00175b7   lui	a1, 786455
00b2dc: 6005859b   addiw	a1, a1, 1536
00b2e0: 00b22023   sw	a1, 0(tp)
00b2e4: 000105b7   lui	a1, 16
00b2e8: fff58593   addi	a1, a1, -1
00b2ec: 00b77533   and	a0, a4, a1
00b2f0: 00a22023   sw	a0, 0(tp)
00b2f4: 01022023   sw	a6, 0(tp)
00b2f8: 01075713   srli	a4, a4, 16
00b2fc: 00b77733   and	a4, a4, a1
00b300: 0107083b   addw	a6, a4, a6
00b304: f60798e3   bnez	a5, -144
00b308: f99ff06f   j	-104
00b30c: 00000013   nop
00b310: 30226603   lwu	a2, 770(tp)
00b314: 00167793   andi	a5, a2, 1
00b318: 0c078463   beqz	a5, 200
00b31c: 600bb783   ld	a5, 1536(s7)
00b320: 30226703   lwu	a4, 770(tp)
00b324: 30226703   lwu	a4, 770(tp)
00b328: 02071713   slli	a4, a4, 32
00b32c: 02075713   srli	a4, a4, 32
00b330: 00f70733   add	a4, a4, a5
00b334: 30226783   lwu	a5, 770(tp)
00b338: 30226783   lwu	a5, 770(tp)
00b33c: 602bb683   ld	a3, 1538(s7)
00b340: 30226783   lwu	a5, 770(tp)
00b344: 02079793   slli	a5, a5, 32
00b348: 0207d793   srli	a5, a5, 32
00b34c: 00d787b3   add	a5, a5, a3
00b350: 06e239a3   sd	a4, 115(tp)
00b354: 07323583   ld	a1, 115(tp)
00b358: 30226703   lwu	a4, 770(tp)
00b35c: 0005a503   lw	a0, 0(a1)
00b360: 0007081b   sext.w	a6, a4
00b364: 06f239a3   sd	a5, 115(tp)
00b368: 07323683   ld	a3, 115(tp)
00b36c: 0045d783   lhu	a5, 4(a1)
00b370: 00a7e733   or	a4, a5, a0
00b374: 00078313   mv	t1, a5
00b378: 02071863   bnez	a4, 48
00b37c: 00000513   li	a0, 0
00b380: 00000793   li	a5, 0
00b384: 00000893   li	a7, 0
00b388: 00a6a023   sw	a0, 0(a3)
00b38c: 00f6a223   sw	a5, 4(a3)
00b390: 0116a423   sw	a7, 8(a3)
00b394: 00e6a623   sw	a4, 12(a3)
00b398: 32423783   ld	a5, 804(tp)
00b39c: fe079ee3   bnez	a5, -4
00b3a0: 919fe06f   j	-5864
00b3a4: c0001073   unimp
00b3a8: 00267613   andi	a2, a2, 2
00b3ac: 0085a883   lw	a7, 8(a1)
00b3b0: 00c5a703   lw	a4, 12(a1)
00b3b4: fc061ae3   bnez	a2, -44
00b3b8: 3fff0637   lui	a2, 262128
00b3bc: 0107179b   slliw	a5, a4, 16
00b3c0: 00c7f7b3   and	a5, a5, a2
00b3c4: 0067e7b3   or	a5, a5, t1
00b3c8: 00100613   li	a2, 1
00b3cc: 0007879b   sext.w	a5, a5
00b3d0: 00e67463   bgeu	a2, a4, 8
00b3d4: 02e8d8bb   divuw	a7, a7, a4
00b3d8: 00080713   mv	a4, a6
00b3dc: fadff06f   j	-84
00b3e0: 30226683   lwu	a3, 770(tp)
00b3e4: 30226783   lwu	a5, 770(tp)
00b3e8: ff067713   andi	a4, a2, -16
00b3ec: 02071713   slli	a4, a4, 32
00b3f0: 02069693   slli	a3, a3, 32
00b3f4: 02075713   srli	a4, a4, 32
00b3f8: 02079793   slli	a5, a5, 32
00b3fc: 00d76733   or	a4, a4, a3
00b400: 0207d793   srli	a5, a5, 32
00b404: 00f70733   add	a4, a4, a5
00b408: 30226583   lwu	a1, 770(tp)
00b40c: 30226783   lwu	a5, 770(tp)
00b410: 30226683   lwu	a3, 770(tp)
00b414: 02059593   slli	a1, a1, 32
00b418: 02079793   slli	a5, a5, 32
00b41c: 0205d593   srli	a1, a1, 32
00b420: 02069693   slli	a3, a3, 32
00b424: 00b7e7b3   or	a5, a5, a1
00b428: 0206d693   srli	a3, a3, 32
00b42c: 00d787b3   add	a5, a5, a3
00b430: f21ff06f   j	-224
00b434: 00000013   nop
00b438: 00050713   mv	a4, a0
00b43c: 30226783   lwu	a5, 770(tp)
00b440: 00078b1b   sext.w	s6, a5
00b444: 30223883   ld	a7, 770(tp)
00b448: 30223583   ld	a1, 770(tp)
00b44c: 0137d81b   srliw	a6, a5, 19
00b450: 00787693   andi	a3, a6, 7
00b454: 00300613   li	a2, 3
00b458: 6a06869b   addiw	a3, a3, 1696
00b45c: 03061613   slli	a2, a2, 48
00b460: 00c686b3   add	a3, a3, a2
00b464: 0006b503   ld	a0, 0(a3)
00b468: 0017f693   andi	a3, a5, 1
00b46c: 12069c63   bnez	a3, 312
00b470: 0177df9b   srliw	t6, a5, 23
00b474: 007ff693   andi	a3, t6, 7
00b478: 00100893   li	a7, 1
00b47c: 01055293   srli	t0, a0, 16
00b480: 00d898b3   sll	a7, a7, a3
00b484: 0112f633   and	a2, t0, a7
00b488: 03e7f693   andi	a3, a5, 62
00b48c: 00163613   seqz	a2, a2
00b490: 0016b693   seqz	a3, a3
00b494: 00c6f6b3   and	a3, a3, a2
00b498: 00d898b3   sll	a7, a7, a3
00b49c: 0017d31b   srliw	t1, a5, 1
00b4a0: fff88613   addi	a2, a7, -1
00b4a4: 01455593   srli	a1, a0, 20
00b4a8: 0067d41b   srliw	s0, a5, 6
00b4ac: 01f37393   andi	t2, t1, 31
00b4b0: 00567633   and	a2, a2, t0
00b4b4: 00f57e93   andi	t4, a0, 15
00b4b8: 00147f13   andi	t5, s0, 1
00b4bc: 00d7d69b   srliw	a3, a5, 13
00b4c0: 00455993   srli	s3, a0, 4
00b4c4: 02055e13   srli	t3, a0, 32
00b4c8: 00400a13   li	s4, 4
00b4cc: 1ff5f593   andi	a1, a1, 511
00b4d0: 01df1f33   sll	t5, t5, t4
00b4d4: 00855913   srli	s2, a0, 8
00b4d8: 00165493   srli	s1, a2, 1
00b4dc: 007585b3   add	a1, a1, t2
00b4e0: 0076f093   andi	ra, a3, 7
00b4e4: 00f9f993   andi	s3, s3, 15
00b4e8: 0167de9b   srliw	t4, a5, 22
00b4ec: 00fe7e33   and	t3, t3, a5
00b4f0: 007a33b3   sltu	t2, s4, t2
00b4f4: 0112f8b3   and	a7, t0, a7
00b4f8: 01e585b3   add	a1, a1, t5
00b4fc: 013090b3   sll	ra, ra, s3
00b500: 00f97293   andi	t0, s2, 15
00b504: 0014ff13   andi	t5, s1, 1
00b508: 007e6e33   or	t3, t3, t2
00b50c: 0018b893   seqz	a7, a7
00b510: 001efe93   andi	t4, t4, 1
00b514: 00167613   andi	a2, a2, 1
00b518: 00c55513   srli	a0, a0, 12
00b51c: 001585b3   add	a1, a1, ra
00b520: 005e9eb3   sll	t4, t4, t0
00b524: 01e6063b   addw	a2, a2, t5
00b528: 00f57513   andi	a0, a0, 15
00b52c: 011e6e33   or	t3, t3, a7
00b530: 01d585b3   add	a1, a1, t4
00b534: 00a61633   sll	a2, a2, a0
00b538: 01c03533   snez	a0, t3
00b53c: 00c58633   add	a2, a1, a2
00b540: 40a00533   neg	a0, a0
00b544: 00a66ab3   or	s5, a2, a0
00b548: 30226503   lwu	a0, 770(tp)
00b54c: 00f87813   andi	a6, a6, 15
00b550: 0005051b   sext.w	a0, a0
00b554: 0028181b   slliw	a6, a6, 2
00b558: 00000297   auipc	t0, 0
00b55c: 010282b3   add	t0, t0, a6
00b560: 00c28067   jr	12(t0)
00b564: 1500006f   j	336
00b568: 1e00006f   j	480
00b56c: 2700006f   j	624
00b570: 3000006f   j	768
00b574: 3900006f   j	912
00b578: 1380006f   j	312
00b57c: 1340006f   j	308
00b580: 1300006f   j	304
00b584: 12c0006f   j	300
00b588: 3800006f   j	896
00b58c: 1240006f   j	292
00b590: 1200006f   j	288
00b594: 11c0006f   j	284
00b598: 1180006f   j	280
00b59c: 1140006f   j	276
00b5a0: 1100006f   j	272
00b5a4: 02059593   slli	a1, a1, 32
00b5a8: 0115e5b3   or	a1, a1, a7
00b5ac: 06b239a3   sd	a1, 115(tp)
00b5b0: 07323683   ld	a3, 115(tp)
00b5b4: 0006e583   lwu	a1, 0(a3)
00b5b8: 0177df9b   srliw	t6, a5, 23
00b5bc: 007ff693   andi	a3, t6, 7
00b5c0: 00100e13   li	t3, 1
00b5c4: 01055293   srli	t0, a0, 16
00b5c8: 00de1e33   sll	t3, t3, a3
00b5cc: 01c2f633   and	a2, t0, t3
00b5d0: 03e7f693   andi	a3, a5, 62
00b5d4: 00163613   seqz	a2, a2
00b5d8: 0016b693   seqz	a3, a3
00b5dc: 00c6f6b3   and	a3, a3, a2
00b5e0: 00de1e33   sll	t3, t3, a3
00b5e4: fffe0893   addi	a7, t3, -1
00b5e8: 01455613   srli	a2, a0, 20
00b5ec: 0017d31b   srliw	t1, a5, 1
00b5f0: 0067d41b   srliw	s0, a5, 6
00b5f4: 0058f8b3   and	a7, a7, t0
00b5f8: 00f57f13   andi	t5, a0, 15
00b5fc: 01f37393   andi	t2, t1, 31
00b600: 00455993   srli	s3, a0, 4
00b604: 02055e93   srli	t4, a0, 32
00b608: 00400a93   li	s5, 4
00b60c: 1ff67613   andi	a2, a2, 511
00b610: 00147a13   andi	s4, s0, 1
00b614: 00d7d69b   srliw	a3, a5, 13
00b618: 00760633   add	a2, a2, t2
00b61c: 01ea1a33   sll	s4, s4, t5
00b620: 00855493   srli	s1, a0, 8
00b624: 0018d093   srli	ra, a7, 1
00b628: 00fefeb3   and	t4, t4, a5
00b62c: 007ab3b3   sltu	t2, s5, t2
00b630: 01c2f2b3   and	t0, t0, t3
00b634: 0076f913   andi	s2, a3, 7
00b638: 00f9f993   andi	s3, s3, 15
00b63c: 0167df1b   srliw	t5, a5, 22
00b640: 00c55e13   srli	t3, a0, 12
00b644: 01460633   add	a2, a2, s4
00b648: 007ee533   or	a0, t4, t2
00b64c: 01391933   sll	s2, s2, s3
00b650: 001f7f13   andi	t5, t5, 1
00b654: 00f4f493   andi	s1, s1, 15
00b658: 0010f093   andi	ra, ra, 1
00b65c: 0018f893   andi	a7, a7, 1
00b660: 0012b293   seqz	t0, t0
00b664: 01260633   add	a2, a2, s2
00b668: 009f1eb3   sll	t4, t5, s1
00b66c: 001888bb   addw	a7, a7, ra
00b670: 00fe7e13   andi	t3, t3, 15
00b674: 00556533   or	a0, a0, t0
00b678: 01c898b3   sll	a7, a7, t3
00b67c: 01d60633   add	a2, a2, t4
00b680: 00a03533   snez	a0, a0
00b684: 01160633   add	a2, a2, a7
00b688: 40a00533   neg	a0, a0
00b68c: 0005889b   sext.w	a7, a1
00b690: 00a66ab3   or	s5, a2, a0
00b694: 00089463   bnez	a7, 8
00b698: 65d0206f   j	11868
00b69c: 30226503   lwu	a0, 770(tp)
00b6a0: 0005061b   sext.w	a2, a0
00b6a4: eac8f4e3   bgeu	a7, a2, -344
00b6a8: 00058513   mv	a0, a1
00b6ac: ea1ff06f   j	-352
00b6b0: 0000006f   j	0
00b6b4: 00a7df1b   srliw	t5, a5, 10
00b6b8: 0107de9b   srliw	t4, a5, 16
00b6bc: 007f7f13   andi	t5, t5, 7
00b6c0: 007efe93   andi	t4, t4, 7
00b6c4: 0076f693   andi	a3, a3, 7
00b6c8: 00100593   li	a1, 1
00b6cc: 00d5b5b3   sltu	a1, a1, a3
00b6d0: 01eee633   or	a2, t4, t5
00b6d4: 00b66633   or	a2, a2, a1
00b6d8: 0006061b   sext.w	a2, a2
00b6dc: 0000e5b7   lui	a1, 14
00b6e0: 00002837   lui	a6, 2
00b6e4: 00c03633   snez	a2, a2
00b6e8: 41f7de1b   sraiw	t3, a5, 31
00b6ec: 00b7f5b3   and	a1, a5, a1
00b6f0: 410585b3   sub	a1, a1, a6
00b6f4: 0016161b   slliw	a2, a2, 1
00b6f8: 003e7e13   andi	t3, t3, 3
00b6fc: 00ce6e33   or	t3, t3, a2
00b700: 0015b613   seqz	a2, a1
00b704: 00ce6e33   or	t3, t3, a2
00b708: 0077d81b   srliw	a6, a5, 7
00b70c: 0087d59b   srliw	a1, a5, 8
00b710: 01f37893   andi	a7, t1, 31
00b714: 00147613   andi	a2, s0, 1
00b718: 00187813   andi	a6, a6, 1
00b71c: 0035f593   andi	a1, a1, 3
00b720: 007fff93   andi	t6, t6, 7
00b724: 002e131b   slliw	t1, t3, 2
00b728: 00000297   auipc	t0, 0
00b72c: 006282b3   add	t0, t0, t1
00b730: 00c28067   jr	12(t0)
00b734: 34c0106f   j	4940
00b738: 6700106f   j	5744
00b73c: 63d0006f   j	3644
00b740: 6390006f   j	3640
00b744: 0000006f   j	0
00b748: 00a7df1b   srliw	t5, a5, 10
00b74c: 0107de9b   srliw	t4, a5, 16
00b750: 0076f593   andi	a1, a3, 7
00b754: 007f7f13   andi	t5, t5, 7
00b758: 007efe93   andi	t4, t4, 7
00b75c: 00100613   li	a2, 1
00b760: 00b63633   sltu	a2, a2, a1
00b764: 01eee6b3   or	a3, t4, t5
00b768: 00c6e6b3   or	a3, a3, a2
00b76c: 0006869b   sext.w	a3, a3
00b770: 0000e637   lui	a2, 14
00b774: 00002837   lui	a6, 2
00b778: 00d036b3   snez	a3, a3
00b77c: 41f7d89b   sraiw	a7, a5, 31
00b780: 00c7f633   and	a2, a5, a2
00b784: 41060633   sub	a2, a2, a6
00b788: 0016969b   slliw	a3, a3, 1
00b78c: 0038f893   andi	a7, a7, 3
00b790: 00d8e8b3   or	a7, a7, a3
00b794: 00163693   seqz	a3, a2
00b798: 00d8e8b3   or	a7, a7, a3
00b79c: 0077d81b   srliw	a6, a5, 7
00b7a0: 0087d61b   srliw	a2, a5, 8
00b7a4: 01f37313   andi	t1, t1, 31
00b7a8: 00147693   andi	a3, s0, 1
00b7ac: 00187813   andi	a6, a6, 1
00b7b0: 00367613   andi	a2, a2, 3
00b7b4: 007ffe13   andi	t3, t6, 7
00b7b8: 0028989b   slliw	a7, a7, 2
00b7bc: 00000297   auipc	t0, 0
00b7c0: 011282b3   add	t0, t0, a7
00b7c4: 00c28067   jr	12(t0)
00b7c8: 0c80106f   j	4296
00b7cc: 3b40106f   j	5044
00b7d0: 1750006f   j	2420
00b7d4: 1710006f   j	2416
00b7d8: 0000006f   j	0
00b7dc: 00a7df1b   srliw	t5, a5, 10
00b7e0: 0107de9b   srliw	t4, a5, 16
00b7e4: 007f7f13   andi	t5, t5, 7
00b7e8: 007efe93   andi	t4, t4, 7
00b7ec: 0076f693   andi	a3, a3, 7
00b7f0: 00100593   li	a1, 1
00b7f4: 00d5b5b3   sltu	a1, a1, a3
00b7f8: 01df6633   or	a2, t5, t4
00b7fc: 00b66633   or	a2, a2, a1
00b800: 0006061b   sext.w	a2, a2
00b804: 0000e5b7   lui	a1, 14
00b808: 00c03633   snez	a2, a2
00b80c: 41f7d81b   sraiw	a6, a5, 31
00b810: 00b7f5b3   and	a1, a5, a1
00b814: 000028b7   lui	a7, 2
00b818: 0016161b   slliw	a2, a2, 1
00b81c: 411585b3   sub	a1, a1, a7
00b820: 00387813   andi	a6, a6, 3
00b824: 00c86833   or	a6, a6, a2
00b828: 0015b613   seqz	a2, a1
00b82c: 00c86833   or	a6, a6, a2
00b830: 0077de1b   srliw	t3, a5, 7
00b834: 0087d59b   srliw	a1, a5, 8
00b838: 01f37313   andi	t1, t1, 31
00b83c: 00147613   andi	a2, s0, 1
00b840: 001e7e13   andi	t3, t3, 1
00b844: 0035f593   andi	a1, a1, 3
00b848: 007ff393   andi	t2, t6, 7
00b84c: 0028181b   slliw	a6, a6, 2
00b850: 00000297   auipc	t0, 0
00b854: 010282b3   add	t0, t0, a6
00b858: 00c28067   jr	12(t0)
00b85c: 1340106f   j	4404
00b860: 43c0106f   j	5180
00b864: 3010006f   j	2816
00b868: 2fd0006f   j	2812
00b86c: 0000006f   j	0
00b870: 00a7df1b   srliw	t5, a5, 10
00b874: 0107de9b   srliw	t4, a5, 16
00b878: 0076f613   andi	a2, a3, 7
00b87c: 007f7f13   andi	t5, t5, 7
00b880: 007efe93   andi	t4, t4, 7
00b884: 00100593   li	a1, 1
00b888: 00c5b5b3   sltu	a1, a1, a2
00b88c: 01df66b3   or	a3, t5, t4
00b890: 00b6e6b3   or	a3, a3, a1
00b894: 0006869b   sext.w	a3, a3
00b898: 0000e5b7   lui	a1, 14
00b89c: 00002837   lui	a6, 2
00b8a0: 00d036b3   snez	a3, a3
00b8a4: 41f7d89b   sraiw	a7, a5, 31
00b8a8: 00b7f5b3   and	a1, a5, a1
00b8ac: 410585b3   sub	a1, a1, a6
00b8b0: 0016969b   slliw	a3, a3, 1
00b8b4: 0038f893   andi	a7, a7, 3
00b8b8: 00d8e8b3   or	a7, a7, a3
00b8bc: 0015b693   seqz	a3, a1
00b8c0: 00d8e8b3   or	a7, a7, a3
00b8c4: 0077d81b   srliw	a6, a5, 7
00b8c8: 0087d59b   srliw	a1, a5, 8
00b8cc: 01f37313   andi	t1, t1, 31
00b8d0: 00147693   andi	a3, s0, 1
00b8d4: 00187813   andi	a6, a6, 1
00b8d8: 0035f593   andi	a1, a1, 3
00b8dc: 007ffe13   andi	t3, t6, 7
00b8e0: 0028989b   slliw	a7, a7, 2
00b8e4: 00000297   auipc	t0, 0
00b8e8: 011282b3   add	t0, t0, a7
00b8ec: 00c28067   jr	12(t0)
00b8f0: 6a10006f   j	3744
00b8f4: 7300006f   j	1840
00b8f8: 5100006f   j	1296
00b8fc: 50c0006f   j	1292
00b900: 0000006f   j	0
00b904: 0000006f   j	0
00b908: 00a7d89b   srliw	a7, a5, 10
00b90c: 0107d81b   srliw	a6, a5, 16
00b910: 0076f593   andi	a1, a3, 7
00b914: 0078f893   andi	a7, a7, 7
00b918: 00787813   andi	a6, a6, 7
00b91c: 00100693   li	a3, 1
00b920: 00b6b6b3   sltu	a3, a3, a1
00b924: 01186633   or	a2, a6, a7
00b928: 00d66633   or	a2, a2, a3
00b92c: 0006061b   sext.w	a2, a2
00b930: 0000ee37   lui	t3, 14
00b934: 00c03633   snez	a2, a2
00b938: 41f7d69b   sraiw	a3, a5, 31
00b93c: 01c7fe33   and	t3, a5, t3
00b940: 00002eb7   lui	t4, 2
00b944: 0016161b   slliw	a2, a2, 1
00b948: 0036f693   andi	a3, a3, 3
00b94c: 41de0e33   sub	t3, t3, t4
00b950: 00c6e6b3   or	a3, a3, a2
00b954: 001e3613   seqz	a2, t3
00b958: 0077d09b   srliw	ra, a5, 7
00b95c: 0087d39b   srliw	t2, a5, 8
00b960: 00c6e6b3   or	a3, a3, a2
00b964: 01f37313   andi	t1, t1, 31
00b968: 00147f13   andi	t5, s0, 1
00b96c: 0010f093   andi	ra, ra, 1
00b970: 0033f393   andi	t2, t2, 3
00b974: 007fff93   andi	t6, t6, 7
00b978: 0026969b   slliw	a3, a3, 2
00b97c: 00000297   auipc	t0, 0
00b980: 00d282b3   add	t0, t0, a3
00b984: 00c28067   jr	12(t0)
00b988: 31c0006f   j	796
00b98c: 1b40006f   j	436
00b990: 00c0006f   j	12
00b994: 0080006f   j	8
00b998: 0000006f   j	0
00b99c: 0008889b   sext.w	a7, a7
00b9a0: 0008081b   sext.w	a6, a6
00b9a4: 30226983   lwu	s3, 770(tp)
00b9a8: 30223e03   ld	t3, 770(tp)
00b9ac: 30223603   ld	a2, 770(tp)
00b9b0: 03061693   slli	a3, a2, 48
00b9b4: 0106d693   srli	a3, a3, 16
00b9b8: 01065613   srli	a2, a2, 16
00b9bc: 00c13423   sd	a2, 8(sp)
00b9c0: 01c6e6b3   or	a3, a3, t3
00b9c4: 06d239a3   sd	a3, 115(tp)
00b9c8: 07323603   ld	a2, 115(tp)
00b9cc: 30226283   lwu	t0, 770(tp)
00b9d0: 02512823   sw	t0, 48(sp)
00b9d4: 30223e03   ld	t3, 770(tp)
00b9d8: 30223683   ld	a3, 770(tp)
00b9dc: 02069693   slli	a3, a3, 32
00b9e0: 01c6e6b3   or	a3, a3, t3
00b9e4: 06d239a3   sd	a3, 115(tp)
00b9e8: 07323e83   ld	t4, 115(tp)
00b9ec: 00028e13   mv	t3, t0
00b9f0: 010e5e1b   srliw	t3, t3, 16
00b9f4: 00100693   li	a3, 1
00b9f8: 03c13423   sd	t3, 40(sp)
00b9fc: 0003029b   sext.w	t0, t1
00ba00: 00df9463   bne	t6, a3, 8
00ba04: 7780206f   j	10104
00ba08: 00200693   li	a3, 2
00ba0c: 00df9463   bne	t6, a3, 8
00ba10: 0090206f   j	10248
00ba14: 00158e13   addi	t3, a1, 1
00ba18: 00188913   addi	s2, a7, 1
00ba1c: 00180493   addi	s1, a6, 1
00ba20: 00330693   addi	a3, t1, 3
00ba24: 001e5e13   srli	t3, t3, 1
00ba28: 00195913   srli	s2, s2, 1
00ba2c: 0014d493   srli	s1, s1, 1
00ba30: 0026d693   srli	a3, a3, 2
00ba34: 30226f83   lwu	t6, 770(tp)
00ba38: 05f12023   sw	t6, 64(sp)
00ba3c: 30226f83   lwu	t6, 770(tp)
00ba40: 05f12623   sw	t6, 76(sp)
00ba44: 00a23f83   ld	t6, 10(tp)
00ba48: 005f02bb   addw	t0, t5, t0
00ba4c: 02ff9f93   slli	t6, t6, 47
00ba50: 02029293   slli	t0, t0, 32
00ba54: 43ffdf13   srai	t5, t6, 63
00ba58: 007083b3   add	t2, ra, t2
00ba5c: 0202d293   srli	t0, t0, 32
00ba60: 002f7f93   andi	t6, t5, 2
00ba64: 005383b3   add	t2, t2, t0
00ba68: 01f13823   sd	t6, 16(sp)
00ba6c: 01f38fb3   add	t6, t2, t6
00ba70: 01efff33   and	t5, t6, t5
00ba74: 03e13023   sd	t5, 32(sp)
00ba78: 02023423   sd	zero, 40(tp)
00ba7c: 00813f83   ld	t6, 8(sp)
00ba80: 02051393   slli	t2, a0, 32
00ba84: 3ff00f13   li	t5, 1023
00ba88: 0203d393   srli	t2, t2, 32
00ba8c: 00cf8a33   add	s4, t6, a2
00ba90: 40000093   li	ra, 1024
00ba94: 007f6463   bltu	t5, t2, 8
00ba98: 00038093   mv	ra, t2
00ba9c: ffff8f37   lui	t5, 1048568
00baa0: 01eb8f33   add	t5, s7, t5
00baa4: 638f3f83   ld	t6, 1592(t5)
00baa8: 03e13c23   sd	t5, 56(sp)
00baac: 080226a3   sw	zero, 141(tp)
00bab0: 004f8f13   addi	t5, t6, 4
00bab4: 03e23123   sd	t5, 34(tp)
00bab8: 3ff57f13   andi	t5, a0, 1023
00babc: 01e03f33   snez	t5, t5
00bac0: 00a3d293   srli	t0, t2, 10
00bac4: 005f02b3   add	t0, t5, t0
00bac8: 00251f1b   slliw	t5, a0, 2
00bacc: 005f0f3b   addw	t5, t5, t0
00bad0: 020f1f13   slli	t5, t5, 32
00bad4: 020f5f13   srli	t5, t5, 32
00bad8: 01e13c23   sd	t5, 24(sp)
00badc: 01e238a3   sd	t5, 17(tp)
00bae0: 00209f1b   slliw	t5, ra, 2
00bae4: 020f1f13   slli	t5, t5, 32
00bae8: 020f5f13   srli	t5, t5, 32
00baec: 01ff0f33   add	t5, t5, t6
00baf0: 01e23123   sd	t5, 2(tp)
00baf4: 00100f13   li	t5, 1
00baf8: 01e23123   sd	t5, 2(tp)
00bafc: 00400f13   li	t5, 4
00bb00: 0005041b   sext.w	s0, a0
00bb04: 00af7463   bgeu	t5, a0, 8
00bb08: 00400413   li	s0, 4
00bb0c: 02099093   slli	ra, s3, 32
00bb10: 0200d093   srli	ra, ra, 32
00bb14: 000a0f13   mv	t5, s4
00bb18: 00000293   li	t0, 0
00bb1c: 00400993   li	s3, 4
00bb20: 01e08fb3   add	t6, ra, t5
00bb24: 00541463   bne	s0, t0, 8
00bb28: 5750106f   j	7540
00bb2c: 01e23123   sd	t5, 2(tp)
00bb30: 01323123   sd	s3, 2(tp)
00bb34: 0012829b   addiw	t0, t0, 1
00bb38: 000f8f13   mv	t5, t6
00bb3c: fe5ff06f   j	-28
00bb40: 30226e83   lwu	t4, 770(tp)
00bb44: 30223603   ld	a2, 770(tp)
00bb48: 30223583   ld	a1, 770(tp)
00bb4c: 03059693   slli	a3, a1, 48
00bb50: 0106d693   srli	a3, a3, 16
00bb54: 0105d593   srli	a1, a1, 16
00bb58: 00c6e6b3   or	a3, a3, a2
00bb5c: 06d239a3   sd	a3, 115(tp)
00bb60: 07323603   ld	a2, 115(tp)
00bb64: 30226483   lwu	s1, 770(tp)
00bb68: 30223803   ld	a6, 770(tp)
00bb6c: 30223683   ld	a3, 770(tp)
00bb70: 02069693   slli	a3, a3, 32
00bb74: 0106e6b3   or	a3, a3, a6
00bb78: 06d239a3   sd	a3, 115(tp)
00bb7c: 07323403   ld	s0, 115(tp)
00bb80: 0104d69b   srliw	a3, s1, 16
00bb84: 00d13423   sd	a3, 8(sp)
00bb88: 00100813   li	a6, 1
00bb8c: 0003069b   sext.w	a3, t1
00bb90: 010f9463   bne	t6, a6, 8
00bb94: 6700206f   j	9840
00bb98: 00200813   li	a6, 2
00bb9c: 010f9463   bne	t6, a6, 8
00bba0: 64c0206f   j	9804
00bba4: 00330293   addi	t0, t1, 3
00bba8: 0022d293   srli	t0, t0, 2
00bbac: 30226803   lwu	a6, 770(tp)
00bbb0: 01012823   sw	a6, 16(sp)
00bbb4: 30226803   lwu	a6, 770(tp)
00bbb8: 01012c23   sw	a6, 24(sp)
00bbbc: 00a23883   ld	a7, 10(tp)
00bbc0: 00df06bb   addw	a3, t5, a3
00bbc4: 02f89893   slli	a7, a7, 47
00bbc8: 02069693   slli	a3, a3, 32
00bbcc: 43f8d893   srai	a7, a7, 63
00bbd0: 00708833   add	a6, ra, t2
00bbd4: 0206d693   srli	a3, a3, 32
00bbd8: 0028f913   andi	s2, a7, 2
00bbdc: 00d80833   add	a6, a6, a3
00bbe0: 01280833   add	a6, a6, s2
00bbe4: 01187833   and	a6, a6, a7
00bbe8: 02023423   sd	zero, 40(tp)
00bbec: 02051e13   slli	t3, a0, 32
00bbf0: 3ff00893   li	a7, 1023
00bbf4: 020e5e13   srli	t3, t3, 32
00bbf8: 00c580b3   add	ra, a1, a2
00bbfc: 40000693   li	a3, 1024
00bc00: 01c8e463   bltu	a7, t3, 8
00bc04: 000e0693   mv	a3, t3
00bc08: ffff8fb7   lui	t6, 1048568
00bc0c: 01fb8fb3   add	t6, s7, t6
00bc10: 638fbf03   ld	t5, 1592(t6)
00bc14: 080226a3   sw	zero, 141(tp)
00bc18: 004f0893   addi	a7, t5, 4
00bc1c: 03123123   sd	a7, 34(tp)
00bc20: 3ff57893   andi	a7, a0, 1023
00bc24: 011038b3   snez	a7, a7
00bc28: 00ae5393   srli	t2, t3, 10
00bc2c: 007883b3   add	t2, a7, t2
00bc30: 0025189b   slliw	a7, a0, 2
00bc34: 007888bb   addw	a7, a7, t2
00bc38: 02089393   slli	t2, a7, 32
00bc3c: 0203d393   srli	t2, t2, 32
00bc40: 007238a3   sd	t2, 17(tp)
00bc44: 0026969b   slliw	a3, a3, 2
00bc48: 02069693   slli	a3, a3, 32
00bc4c: 0206d693   srli	a3, a3, 32
00bc50: 01e686b3   add	a3, a3, t5
00bc54: 00d23123   sd	a3, 2(tp)
00bc58: 00100693   li	a3, 1
00bc5c: 00d23123   sd	a3, 2(tp)
00bc60: 00400693   li	a3, 4
00bc64: 0005099b   sext.w	s3, a0
00bc68: 00a6f463   bgeu	a3, a0, 8
00bc6c: 00400993   li	s3, 4
00bc70: 020e9e93   slli	t4, t4, 32
00bc74: 020ede93   srli	t4, t4, 32
00bc78: 00008693   mv	a3, ra
00bc7c: 00000893   li	a7, 0
00bc80: 00400a13   li	s4, 4
00bc84: 01d68f33   add	t5, a3, t4
00bc88: 01199463   bne	s3, a7, 8
00bc8c: 57d0106f   j	7548
00bc90: 00d23123   sd	a3, 2(tp)
00bc94: 01423123   sd	s4, 2(tp)
00bc98: 0018889b   addiw	a7, a7, 1
00bc9c: 000f0693   mv	a3, t5
00bca0: fe5ff06f   j	-28
00bca4: 30226e03   lwu	t3, 770(tp)
00bca8: 30223603   ld	a2, 770(tp)
00bcac: 30223483   ld	s1, 770(tp)
00bcb0: 03049693   slli	a3, s1, 48
00bcb4: 0106d693   srli	a3, a3, 16
00bcb8: 0104d493   srli	s1, s1, 16
00bcbc: 00c6e6b3   or	a3, a3, a2
00bcc0: 06d239a3   sd	a3, 115(tp)
00bcc4: 07323583   ld	a1, 115(tp)
00bcc8: 30226903   lwu	s2, 770(tp)
00bccc: 30223603   ld	a2, 770(tp)
00bcd0: 30223683   ld	a3, 770(tp)
00bcd4: 02069693   slli	a3, a3, 32
00bcd8: 00c6e6b3   or	a3, a3, a2
00bcdc: 06d239a3   sd	a3, 115(tp)
00bce0: 07323283   ld	t0, 115(tp)
00bce4: 0109569b   srliw	a3, s2, 16
00bce8: 00d13423   sd	a3, 8(sp)
00bcec: 00100613   li	a2, 1
00bcf0: 0003069b   sext.w	a3, t1
00bcf4: 00cf9463   bne	t6, a2, 8
00bcf8: 4e00206f   j	9440
00bcfc: 00200613   li	a2, 2
00bd00: 00cf9463   bne	t6, a2, 8
00bd04: 4a40206f   j	9380
00bd08: 00330613   addi	a2, t1, 3
00bd0c: 00265613   srli	a2, a2, 2
00bd10: 30226803   lwu	a6, 770(tp)
00bd14: 01012823   sw	a6, 16(sp)
00bd18: 30226803   lwu	a6, 770(tp)
00bd1c: 01012c23   sw	a6, 24(sp)
00bd20: 00a23803   ld	a6, 10(tp)
00bd24: 00df0ebb   addw	t4, t5, a3
00bd28: 02f81813   slli	a6, a6, 47
00bd2c: 43f85813   srai	a6, a6, 63
00bd30: 020e9e93   slli	t4, t4, 32
00bd34: 00287f93   andi	t6, a6, 2
00bd38: 020ede93   srli	t4, t4, 32
00bd3c: 01fe8eb3   add	t4, t4, t6
00bd40: 007086b3   add	a3, ra, t2
00bd44: 010efeb3   and	t4, t4, a6
00bd48: 0106f6b3   and	a3, a3, a6
00bd4c: 02d23423   sd	a3, 40(tp)
00bd50: 02051893   slli	a7, a0, 32
00bd54: 3ff00813   li	a6, 1023
00bd58: 0208d893   srli	a7, a7, 32
00bd5c: 00b480b3   add	ra, s1, a1
00bd60: 40000693   li	a3, 1024
00bd64: 01186463   bltu	a6, a7, 8
00bd68: 00088693   mv	a3, a7
00bd6c: ffff8437   lui	s0, 1048568
00bd70: 008b8433   add	s0, s7, s0
00bd74: 63843f03   ld	t5, 1592(s0)
00bd78: 080226a3   sw	zero, 141(tp)
00bd7c: 004f0813   addi	a6, t5, 4
00bd80: 03023123   sd	a6, 34(tp)
00bd84: 3ff57813   andi	a6, a0, 1023
00bd88: 01003833   snez	a6, a6
00bd8c: 00a8d393   srli	t2, a7, 10
00bd90: 007803b3   add	t2, a6, t2
00bd94: 0025181b   slliw	a6, a0, 2
00bd98: 0078083b   addw	a6, a6, t2
00bd9c: 02081393   slli	t2, a6, 32
00bda0: 0203d393   srli	t2, t2, 32
00bda4: 007238a3   sd	t2, 17(tp)
00bda8: 0026969b   slliw	a3, a3, 2
00bdac: 02069693   slli	a3, a3, 32
00bdb0: 0206d693   srli	a3, a3, 32
00bdb4: 01e686b3   add	a3, a3, t5
00bdb8: 00d23123   sd	a3, 2(tp)
00bdbc: 00100693   li	a3, 1
00bdc0: 00d23123   sd	a3, 2(tp)
00bdc4: 00400693   li	a3, 4
00bdc8: 0005099b   sext.w	s3, a0
00bdcc: 00a6f463   bgeu	a3, a0, 8
00bdd0: 00400993   li	s3, 4
00bdd4: 020e1e13   slli	t3, t3, 32
00bdd8: 020e5e13   srli	t3, t3, 32
00bddc: 00008693   mv	a3, ra
00bde0: 00000813   li	a6, 0
00bde4: 00400a13   li	s4, 4
00bde8: 00de0f33   add	t5, t3, a3
00bdec: 01099463   bne	s3, a6, 8
00bdf0: 4a50106f   j	7332
00bdf4: 00d23123   sd	a3, 2(tp)
00bdf8: 01423123   sd	s4, 2(tp)
00bdfc: 0018081b   addiw	a6, a6, 1
00be00: 000f0693   mv	a3, t5
00be04: fe5ff06f   j	-28
00be08: 000f0f1b   sext.w	t5, t5
00be0c: 000e8e9b   sext.w	t4, t4
00be10: 30226883   lwu	a7, 770(tp)
00be14: 0008889b   sext.w	a7, a7
00be18: 01113423   sd	a7, 8(sp)
00be1c: 30223f83   ld	t6, 770(tp)
00be20: 30223883   ld	a7, 770(tp)
00be24: 03089893   slli	a7, a7, 48
00be28: 0108d893   srli	a7, a7, 16
00be2c: 01f8e8b3   or	a7, a7, t6
00be30: 071239a3   sd	a7, 115(tp)
00be34: 07323883   ld	a7, 115(tp)
00be38: 30226483   lwu	s1, 770(tp)
00be3c: 30223283   ld	t0, 770(tp)
00be40: 30223f83   ld	t6, 770(tp)
00be44: 020f9f93   slli	t6, t6, 32
00be48: 005fefb3   or	t6, t6, t0
00be4c: 07f239a3   sd	t6, 115(tp)
00be50: 07323f83   ld	t6, 115(tp)
00be54: 0104d39b   srliw	t2, s1, 16
00be58: 00713823   sd	t2, 16(sp)
00be5c: 00100293   li	t0, 1
00be60: 0003039b   sext.w	t2, t1
00be64: 005e1463   bne	t3, t0, 8
00be68: 4f00206f   j	9456
00be6c: 00200293   li	t0, 2
00be70: 005e1463   bne	t3, t0, 8
00be74: 4b40206f   j	9396
00be78: 00160093   addi	ra, a2, 1
00be7c: 001f0293   addi	t0, t5, 1
00be80: 001e8413   addi	s0, t4, 1
00be84: 00330e13   addi	t3, t1, 3
00be88: 0010d093   srli	ra, ra, 1
00be8c: 0012d293   srli	t0, t0, 1
00be90: 00145413   srli	s0, s0, 1
00be94: 002e5e13   srli	t3, t3, 2
00be98: 30226983   lwu	s3, 770(tp)
00be9c: 30226903   lwu	s2, 770(tp)
00bea0: 00a23a03   ld	s4, 10(tp)
00bea4: 007683bb   addw	t2, a3, t2
00bea8: 02fa1a13   slli	s4, s4, 47
00beac: 02039393   slli	t2, t2, 32
00beb0: 43fa5a13   srai	s4, s4, 63
00beb4: 00b805b3   add	a1, a6, a1
00beb8: 0203d393   srli	t2, t2, 32
00bebc: 007583b3   add	t2, a1, t2
00bec0: 003a7693   andi	a3, s4, 3
00bec4: 00d383b3   add	t2, t2, a3
00bec8: 0143f3b3   and	t2, t2, s4
00becc: 02023423   sd	zero, 40(tp)
00bed0: 00022ca3   sw	zero, 25(tp)
00bed4: 31422003   lw	zero, 788(tp)
00bed8: 001e06bb   addw	a3, t3, ra
00bedc: 008285bb   addw	a1, t0, s0
00bee0: 0015959b   slliw	a1, a1, 1
00bee4: 0096869b   addiw	a3, a3, 9
00bee8: 00b686bb   addw	a3, a3, a1
00beec: c00105b7   lui	a1, 786448
00bef0: fff58593   addi	a1, a1, -1
00bef4: 00e5f733   and	a4, a1, a4
00bef8: 0106969b   slliw	a3, a3, 16
00befc: 00d76733   or	a4, a4, a3
00bf00: 00e22023   sw	a4, 0(tp)
00bf04: 00f22023   sw	a5, 0(tp)
00bf08: 00a22023   sw	a0, 0(tp)
00bf0c: 01522023   sw	s5, 0(tp)
00bf10: 00922023   sw	s1, 0(tp)
00bf14: 01f22023   sw	t6, 0(tp)
00bf18: 020fd793   srli	a5, t6, 32
00bf1c: 00f22023   sw	a5, 0(tp)
00bf20: 01322023   sw	s3, 0(tp)
00bf24: 01222023   sw	s2, 0(tp)
00bf28: 00300793   li	a5, 3
00bf2c: 03079793   slli	a5, a5, 48
00bf30: 00020693   mv	a3, tp
00bf34: 67078793   addi	a5, a5, 1648
00bf38: 0340006f   j	52
00bf3c: 30226583   lwu	a1, 770(tp)
00bf40: 30226483   lwu	s1, 770(tp)
00bf44: 30226803   lwu	a6, 770(tp)
00bf48: 02059593   slli	a1, a1, 32
00bf4c: 02081713   slli	a4, a6, 32
00bf50: 0205d593   srli	a1, a1, 32
00bf54: 00b76733   or	a4, a4, a1
00bf58: 00e7b023   sd	a4, 0(a5)
00bf5c: 1e06afa3   sw	zero, 511(a3)
00bf60: 00922023   sw	s1, 0(tp)
00bf64: 01022023   sw	a6, 0(tp)
00bf68: 00178793   addi	a5, a5, 1
00bf6c: 9907871b   addiw	a4, a5, -1648
00bf70: fc5766e3   bltu	a4, t0, -52
00bf74: 00300493   li	s1, 3
00bf78: 03049493   slli	s1, s1, 48
00bf7c: 67048493   addi	s1, s1, 1648
00bf80: 67028a93   addi	s5, t0, 1648
00bf84: 00000793   li	a5, 0
00bf88: 009284b3   add	s1, t0, s1
00bf8c: 0380006f   j	56
00bf90: 30226583   lwu	a1, 770(tp)
00bf94: 30226283   lwu	t0, 770(tp)
00bf98: 30226803   lwu	a6, 770(tp)
00bf9c: 02059593   slli	a1, a1, 32
00bfa0: 02081713   slli	a4, a6, 32
00bfa4: 0205d593   srli	a1, a1, 32
00bfa8: 00b76733   or	a4, a4, a1
00bfac: 00f485b3   add	a1, s1, a5
00bfb0: 00e5b023   sd	a4, 0(a1)
00bfb4: 1e06afa3   sw	zero, 511(a3)
00bfb8: 00522023   sw	t0, 0(tp)
00bfbc: 01022023   sw	a6, 0(tp)
00bfc0: 00178793   addi	a5, a5, 1
00bfc4: 0007871b   sext.w	a4, a5
00bfc8: fc8764e3   bltu	a4, s0, -56
00bfcc: 00300293   li	t0, 3
00bfd0: 01540433   add	s0, s0, s5
00bfd4: 03029293   slli	t0, t0, 48
00bfd8: 00000793   li	a5, 0
00bfdc: 005402b3   add	t0, s0, t0
00bfe0: 0200006f   j	32
00bfe4: 30226803   lwu	a6, 770(tp)
00bfe8: 30226703   lwu	a4, 770(tp)
00bfec: 00f285b3   add	a1, t0, a5
00bff0: 0105a023   sw	a6, 0(a1)
00bff4: 1e06afa3   sw	zero, 511(a3)
00bff8: 00e22023   sw	a4, 0(tp)
00bffc: 00178793   addi	a5, a5, 1
00c000: 0007871b   sext.w	a4, a5
00c004: fe1760e3   bltu	a4, ra, -32
00c008: 00000793   li	a5, 0
00c00c: 00fe1463   bne	t3, a5, 8
00c010: 2b80106f   j	4792
00c014: 30226703   lwu	a4, 770(tp)
00c018: 00e22023   sw	a4, 0(tp)
00c01c: 0017879b   addiw	a5, a5, 1
00c020: fedff06f   j	-20
00c024: 30226283   lwu	t0, 770(tp)
00c028: 0002829b   sext.w	t0, t0
00c02c: 30223883   ld	a7, 770(tp)
00c030: 30223603   ld	a2, 770(tp)
00c034: 03061613   slli	a2, a2, 48
00c038: 01065613   srli	a2, a2, 16
00c03c: 01166633   or	a2, a2, a7
00c040: 06c239a3   sd	a2, 115(tp)
00c044: 07323603   ld	a2, 115(tp)
00c048: 30226f83   lwu	t6, 770(tp)
00c04c: 30223e83   ld	t4, 770(tp)
00c050: 30223883   ld	a7, 770(tp)
00c054: 02089893   slli	a7, a7, 32
00c058: 01d8e8b3   or	a7, a7, t4
00c05c: 071239a3   sd	a7, 115(tp)
00c060: 07323f03   ld	t5, 115(tp)
00c064: 00100893   li	a7, 1
00c068: 010fde9b   srliw	t4, t6, 16
00c06c: 0003041b   sext.w	s0, t1
00c070: 011e1463   bne	t3, a7, 8
00c074: 2a00206f   j	8864
00c078: 00200893   li	a7, 2
00c07c: 011e1463   bne	t3, a7, 8
00c080: 27c0206f   j	8828
00c084: 00330893   addi	a7, t1, 3
00c088: 0028d893   srli	a7, a7, 2
00c08c: 30226083   lwu	ra, 770(tp)
00c090: 30226383   lwu	t2, 770(tp)
00c094: 00a23e03   ld	t3, 10(tp)
00c098: 0086843b   addw	s0, a3, s0
00c09c: 02fe1e13   slli	t3, t3, 47
00c0a0: 00b806b3   add	a3, a6, a1
00c0a4: 02041593   slli	a1, s0, 32
00c0a8: 43fe5e13   srai	t3, t3, 63
00c0ac: 0205d593   srli	a1, a1, 32
00c0b0: 00b686b3   add	a3, a3, a1
00c0b4: 003e7593   andi	a1, t3, 3
00c0b8: 00b686b3   add	a3, a3, a1
00c0bc: 01c6f6b3   and	a3, a3, t3
00c0c0: 02023423   sd	zero, 40(tp)
00c0c4: 00022ca3   sw	zero, 25(tp)
00c0c8: 31422003   lw	zero, 788(tp)
00c0cc: c00105b7   lui	a1, 786448
00c0d0: 00a8881b   addiw	a6, a7, 10
00c0d4: fff58593   addi	a1, a1, -1
00c0d8: 00e5f733   and	a4, a1, a4
00c0dc: 0108159b   slliw	a1, a6, 16
00c0e0: 00b76733   or	a4, a4, a1
00c0e4: 00e22023   sw	a4, 0(tp)
00c0e8: 00f22023   sw	a5, 0(tp)
00c0ec: 00a22023   sw	a0, 0(tp)
00c0f0: 01522023   sw	s5, 0(tp)
00c0f4: 01f22023   sw	t6, 0(tp)
00c0f8: 01e22023   sw	t5, 0(tp)
00c0fc: 020f5f13   srli	t5, t5, 32
00c100: 01e22023   sw	t5, 0(tp)
00c104: 00122023   sw	ra, 0(tp)
00c108: 00722023   sw	t2, 0(tp)
00c10c: 30226703   lwu	a4, 770(tp)
00c110: 30226783   lwu	a5, 770(tp)
00c114: ffff8837   lui	a6, 1048568
00c118: 010b8833   add	a6, s7, a6
00c11c: 66e82823   sw	a4, 1648(a6)
00c120: 1e022fa3   sw	zero, 511(tp)
00c124: 00f22023   sw	a5, 0(tp)
00c128: 00000793   li	a5, 0
00c12c: 00f89463   bne	a7, a5, 8
00c130: 0080106f   j	4104
00c134: 30226703   lwu	a4, 770(tp)
00c138: 00e22023   sw	a4, 0(tp)
00c13c: 0017879b   addiw	a5, a5, 1
00c140: fedff06f   j	-20
00c144: 000f0f1b   sext.w	t5, t5
00c148: 000e8e9b   sext.w	t4, t4
00c14c: 30226883   lwu	a7, 770(tp)
00c150: 0008899b   sext.w	s3, a7
00c154: 30223f83   ld	t6, 770(tp)
00c158: 30223883   ld	a7, 770(tp)
00c15c: 03089893   slli	a7, a7, 48
00c160: 0108d893   srli	a7, a7, 16
00c164: 01f8e8b3   or	a7, a7, t6
00c168: 071239a3   sd	a7, 115(tp)
00c16c: 07323883   ld	a7, 115(tp)
00c170: 30226483   lwu	s1, 770(tp)
00c174: 30223283   ld	t0, 770(tp)
00c178: 30223f83   ld	t6, 770(tp)
00c17c: 020f9f93   slli	t6, t6, 32
00c180: 005fefb3   or	t6, t6, t0
00c184: 07f239a3   sd	t6, 115(tp)
00c188: 07323f83   ld	t6, 115(tp)
00c18c: 0104d39b   srliw	t2, s1, 16
00c190: 00713423   sd	t2, 8(sp)
00c194: 00100293   li	t0, 1
00c198: 0003039b   sext.w	t2, t1
00c19c: 005e1463   bne	t3, t0, 8
00c1a0: 1300206f   j	8496
00c1a4: 00200293   li	t0, 2
00c1a8: 005e1463   bne	t3, t0, 8
00c1ac: 0f40206f   j	8436
00c1b0: 00158093   addi	ra, a1, 1
00c1b4: 001f0293   addi	t0, t5, 1
00c1b8: 001e8413   addi	s0, t4, 1
00c1bc: 00330e13   addi	t3, t1, 3
00c1c0: 0010d093   srli	ra, ra, 1
00c1c4: 0012d293   srli	t0, t0, 1
00c1c8: 00145413   srli	s0, s0, 1
00c1cc: 002e5e13   srli	t3, t3, 2
00c1d0: 30226903   lwu	s2, 770(tp)
00c1d4: 01212823   sw	s2, 16(sp)
00c1d8: 30226903   lwu	s2, 770(tp)
00c1dc: 00a23a03   ld	s4, 10(tp)
00c1e0: 007683bb   addw	t2, a3, t2
00c1e4: 02fa1a13   slli	s4, s4, 47
00c1e8: 02039393   slli	t2, t2, 32
00c1ec: 43fa5a13   srai	s4, s4, 63
00c1f0: 00c80633   add	a2, a6, a2
00c1f4: 0203d393   srli	t2, t2, 32
00c1f8: 002a7693   andi	a3, s4, 2
00c1fc: 00760633   add	a2, a2, t2
00c200: 00d603b3   add	t2, a2, a3
00c204: 0143f3b3   and	t2, t2, s4
00c208: 02023423   sd	zero, 40(tp)
00c20c: 00022ca3   sw	zero, 25(tp)
00c210: 31422003   lw	zero, 788(tp)
00c214: 0082863b   addw	a2, t0, s0
00c218: 001e083b   addw	a6, t3, ra
00c21c: 0098081b   addiw	a6, a6, 9
00c220: 0016161b   slliw	a2, a2, 1
00c224: 0106063b   addw	a2, a2, a6
00c228: c0010837   lui	a6, 786448
00c22c: fff80813   addi	a6, a6, -1
00c230: 00e87733   and	a4, a6, a4
00c234: 0106161b   slliw	a2, a2, 16
00c238: 00c76733   or	a4, a4, a2
00c23c: 00e22023   sw	a4, 0(tp)
00c240: 00f22023   sw	a5, 0(tp)
00c244: 00a22023   sw	a0, 0(tp)
00c248: 01522023   sw	s5, 0(tp)
00c24c: 00922023   sw	s1, 0(tp)
00c250: 01f22023   sw	t6, 0(tp)
00c254: 020fd793   srli	a5, t6, 32
00c258: 00f22023   sw	a5, 0(tp)
00c25c: 01012783   lw	a5, 16(sp)
00c260: 00f22023   sw	a5, 0(tp)
00c264: 01222023   sw	s2, 0(tp)
00c268: 00300793   li	a5, 3
00c26c: 03079793   slli	a5, a5, 48
00c270: 00020613   mv	a2, tp
00c274: 67078793   addi	a5, a5, 1648
00c278: 0340006f   j	52
00c27c: 30226803   lwu	a6, 770(tp)
00c280: 30226903   lwu	s2, 770(tp)
00c284: 30226483   lwu	s1, 770(tp)
00c288: 02081813   slli	a6, a6, 32
00c28c: 02049713   slli	a4, s1, 32
00c290: 02085813   srli	a6, a6, 32
00c294: 01076733   or	a4, a4, a6
00c298: 00e7b023   sd	a4, 0(a5)
00c29c: 1e062fa3   sw	zero, 511(a2)
00c2a0: 01222023   sw	s2, 0(tp)
00c2a4: 00922023   sw	s1, 0(tp)
00c2a8: 00178793   addi	a5, a5, 1
00c2ac: 9907871b   addiw	a4, a5, -1648
00c2b0: fc5766e3   bltu	a4, t0, -52
00c2b4: 00300493   li	s1, 3
00c2b8: 03049493   slli	s1, s1, 48
00c2bc: 67048493   addi	s1, s1, 1648
00c2c0: 67028a13   addi	s4, t0, 1648
00c2c4: 00000793   li	a5, 0
00c2c8: 009284b3   add	s1, t0, s1
00c2cc: 0380006f   j	56
00c2d0: 30226803   lwu	a6, 770(tp)
00c2d4: 30226903   lwu	s2, 770(tp)
00c2d8: 30226283   lwu	t0, 770(tp)
00c2dc: 02081813   slli	a6, a6, 32
00c2e0: 02029713   slli	a4, t0, 32
00c2e4: 02085813   srli	a6, a6, 32
00c2e8: 01076733   or	a4, a4, a6
00c2ec: 00f48833   add	a6, s1, a5
00c2f0: 00e83023   sd	a4, 0(a6)
00c2f4: 1e062fa3   sw	zero, 511(a2)
00c2f8: 01222023   sw	s2, 0(tp)
00c2fc: 00522023   sw	t0, 0(tp)
00c300: 00178793   addi	a5, a5, 1
00c304: 0007871b   sext.w	a4, a5
00c308: fc8764e3   bltu	a4, s0, -56
00c30c: 00300493   li	s1, 3
00c310: 01440433   add	s0, s0, s4
00c314: 03049493   slli	s1, s1, 48
00c318: 00000793   li	a5, 0
00c31c: 009404b3   add	s1, s0, s1
00c320: 0200006f   j	32
00c324: 30226283   lwu	t0, 770(tp)
00c328: 30226703   lwu	a4, 770(tp)
00c32c: 00f48833   add	a6, s1, a5
00c330: 00582023   sw	t0, 0(a6)
00c334: 1e062fa3   sw	zero, 511(a2)
00c338: 00e22023   sw	a4, 0(tp)
00c33c: 00178793   addi	a5, a5, 1
00c340: 0007871b   sext.w	a4, a5
00c344: fe1760e3   bltu	a4, ra, -32
00c348: 00000793   li	a5, 0
00c34c: 00fe1463   bne	t3, a5, 8
00c350: 2cc0106f   j	4812
00c354: 30226703   lwu	a4, 770(tp)
00c358: 00e22023   sw	a4, 0(tp)
00c35c: 0017879b   addiw	a5, a5, 1
00c360: fedff06f   j	-20
00c364: 000f0f1b   sext.w	t5, t5
00c368: 000e8e9b   sext.w	t4, t4
00c36c: 30226483   lwu	s1, 770(tp)
00c370: 0004849b   sext.w	s1, s1
00c374: 30223883   ld	a7, 770(tp)
00c378: 30223803   ld	a6, 770(tp)
00c37c: 03081813   slli	a6, a6, 48
00c380: 01085813   srli	a6, a6, 16
00c384: 01186833   or	a6, a6, a7
00c388: 070239a3   sd	a6, 115(tp)
00c38c: 07323883   ld	a7, 115(tp)
00c390: 30226083   lwu	ra, 770(tp)
00c394: 00112423   sw	ra, 8(sp)
00c398: 30223f83   ld	t6, 770(tp)
00c39c: 30223803   ld	a6, 770(tp)
00c3a0: 02081813   slli	a6, a6, 32
00c3a4: 01f86833   or	a6, a6, t6
00c3a8: 070239a3   sd	a6, 115(tp)
00c3ac: 07323f83   ld	t6, 115(tp)
00c3b0: 00100293   li	t0, 1
00c3b4: 00008813   mv	a6, ra
00c3b8: 0108581b   srliw	a6, a6, 16
00c3bc: 0003041b   sext.w	s0, t1
00c3c0: 00539463   bne	t2, t0, 8
00c3c4: 6b50106f   j	7860
00c3c8: 00200293   li	t0, 2
00c3cc: 00539463   bne	t2, t0, 8
00c3d0: 6790106f   j	7800
00c3d4: 00168913   addi	s2, a3, 1
00c3d8: 001f0293   addi	t0, t5, 1
00c3dc: 001e8093   addi	ra, t4, 1
00c3e0: 00130393   addi	t2, t1, 1
00c3e4: 00195913   srli	s2, s2, 1
00c3e8: 0012d293   srli	t0, t0, 1
00c3ec: 0010d093   srli	ra, ra, 1
00c3f0: 0013d393   srli	t2, t2, 1
00c3f4: 30226a03   lwu	s4, 770(tp)
00c3f8: 01412823   sw	s4, 16(sp)
00c3fc: 30226a03   lwu	s4, 770(tp)
00c400: 00a23983   ld	s3, 10(tp)
00c404: 0086043b   addw	s0, a2, s0
00c408: 02041413   slli	s0, s0, 32
00c40c: 02f99613   slli	a2, s3, 47
00c410: 00be05b3   add	a1, t3, a1
00c414: 02045413   srli	s0, s0, 32
00c418: 43f65613   srai	a2, a2, 63
00c41c: 008585b3   add	a1, a1, s0
00c420: 00b67433   and	s0, a2, a1
00c424: 02023423   sd	zero, 40(tp)
00c428: 0012863b   addw	a2, t0, ra
00c42c: 012385bb   addw	a1, t2, s2
00c430: 0095859b   addiw	a1, a1, 9
00c434: 0016161b   slliw	a2, a2, 1
00c438: 00b6063b   addw	a2, a2, a1
00c43c: c00105b7   lui	a1, 786448
00c440: fff58593   addi	a1, a1, -1
00c444: 00e5f733   and	a4, a1, a4
00c448: 0106161b   slliw	a2, a2, 16
00c44c: 00c76733   or	a4, a4, a2
00c450: 00e22023   sw	a4, 0(tp)
00c454: 00f22023   sw	a5, 0(tp)
00c458: 00a22023   sw	a0, 0(tp)
00c45c: 01522023   sw	s5, 0(tp)
00c460: 00812783   lw	a5, 8(sp)
00c464: 00f22023   sw	a5, 0(tp)
00c468: 01f22023   sw	t6, 0(tp)
00c46c: 020fd793   srli	a5, t6, 32
00c470: 00f22023   sw	a5, 0(tp)
00c474: 01012783   lw	a5, 16(sp)
00c478: 00f22023   sw	a5, 0(tp)
00c47c: 01422023   sw	s4, 0(tp)
00c480: 00300793   li	a5, 3
00c484: 03079793   slli	a5, a5, 48
00c488: 00020613   mv	a2, tp
00c48c: 67078793   addi	a5, a5, 1648
00c490: 0340006f   j	52
00c494: 30226583   lwu	a1, 770(tp)
00c498: 30226983   lwu	s3, 770(tp)
00c49c: 30226e03   lwu	t3, 770(tp)
00c4a0: 02059593   slli	a1, a1, 32
00c4a4: 020e1713   slli	a4, t3, 32
00c4a8: 0205d593   srli	a1, a1, 32
00c4ac: 00b76733   or	a4, a4, a1
00c4b0: 00e7b023   sd	a4, 0(a5)
00c4b4: 1e062fa3   sw	zero, 511(a2)
00c4b8: 01322023   sw	s3, 0(tp)
00c4bc: 01c22023   sw	t3, 0(tp)
00c4c0: 00178793   addi	a5, a5, 1
00c4c4: 9907871b   addiw	a4, a5, -1648
00c4c8: fc5766e3   bltu	a4, t0, -52
00c4cc: 00300993   li	s3, 3
00c4d0: 03099993   slli	s3, s3, 48
00c4d4: 67098993   addi	s3, s3, 1648
00c4d8: 67028a93   addi	s5, t0, 1648
00c4dc: 00000793   li	a5, 0
00c4e0: 013289b3   add	s3, t0, s3
00c4e4: 0380006f   j	56
00c4e8: 30226583   lwu	a1, 770(tp)
00c4ec: 30226283   lwu	t0, 770(tp)
00c4f0: 30226e03   lwu	t3, 770(tp)
00c4f4: 02059593   slli	a1, a1, 32
00c4f8: 020e1713   slli	a4, t3, 32
00c4fc: 0205d593   srli	a1, a1, 32
00c500: 00b76733   or	a4, a4, a1
00c504: 00f985b3   add	a1, s3, a5
00c508: 00e5b023   sd	a4, 0(a1)
00c50c: 1e062fa3   sw	zero, 511(a2)
00c510: 00522023   sw	t0, 0(tp)
00c514: 01c22023   sw	t3, 0(tp)
00c518: 00178793   addi	a5, a5, 1
00c51c: 0007871b   sext.w	a4, a5
00c520: fc1764e3   bltu	a4, ra, -56
00c524: 00300293   li	t0, 3
00c528: 015080b3   add	ra, ra, s5
00c52c: 03029293   slli	t0, t0, 48
00c530: 00000793   li	a5, 0
00c534: 005082b3   add	t0, ra, t0
00c538: 0200006f   j	32
00c53c: 30226e03   lwu	t3, 770(tp)
00c540: 30226703   lwu	a4, 770(tp)
00c544: 00f285b3   add	a1, t0, a5
00c548: 01c5a023   sw	t3, 0(a1)
00c54c: 1e062fa3   sw	zero, 511(a2)
00c550: 00e22023   sw	a4, 0(tp)
00c554: 00178793   addi	a5, a5, 1
00c558: 0007871b   sext.w	a4, a5
00c55c: ff2760e3   bltu	a4, s2, -32
00c560: 00000793   li	a5, 0
00c564: 16f380e3   beq	t2, a5, 2400
00c568: 30226703   lwu	a4, 770(tp)
00c56c: 00e22023   sw	a4, 0(tp)
00c570: 0017879b   addiw	a5, a5, 1
00c574: ff1ff06f   j	-16
00c578: 000f0f1b   sext.w	t5, t5
00c57c: 000e8e9b   sext.w	t4, t4
00c580: 30226303   lwu	t1, 770(tp)
00c584: 0003031b   sext.w	t1, t1
00c588: 00613423   sd	t1, 8(sp)
00c58c: 30223e03   ld	t3, 770(tp)
00c590: 30223303   ld	t1, 770(tp)
00c594: 03031313   slli	t1, t1, 48
00c598: 01035313   srli	t1, t1, 16
00c59c: 01c36333   or	t1, t1, t3
00c5a0: 066239a3   sd	t1, 115(tp)
00c5a4: 07323303   ld	t1, 115(tp)
00c5a8: 30226483   lwu	s1, 770(tp)
00c5ac: 30223283   ld	t0, 770(tp)
00c5b0: 30223e03   ld	t3, 770(tp)
00c5b4: 020e1e13   slli	t3, t3, 32
00c5b8: 005e6e33   or	t3, t3, t0
00c5bc: 07c239a3   sd	t3, 115(tp)
00c5c0: 07323283   ld	t0, 115(tp)
00c5c4: 0104d39b   srliw	t2, s1, 16
00c5c8: 00713823   sd	t2, 16(sp)
00c5cc: 00100e13   li	t3, 1
00c5d0: 0008839b   sext.w	t2, a7
00c5d4: 01cf9463   bne	t6, t3, 8
00c5d8: 65d0106f   j	7772
00c5dc: 00200e13   li	t3, 2
00c5e0: 01cf9463   bne	t6, t3, 8
00c5e4: 6210106f   j	7712
00c5e8: 00168093   addi	ra, a3, 1
00c5ec: 001f0f93   addi	t6, t5, 1
00c5f0: 001e8413   addi	s0, t4, 1
00c5f4: 00388e13   addi	t3, a7, 3
00c5f8: 0010d093   srli	ra, ra, 1
00c5fc: 001fdf93   srli	t6, t6, 1
00c600: 00145413   srli	s0, s0, 1
00c604: 002e5e13   srli	t3, t3, 2
00c608: 30226983   lwu	s3, 770(tp)
00c60c: 30226903   lwu	s2, 770(tp)
00c610: 00a23a03   ld	s4, 10(tp)
00c614: 007603bb   addw	t2, a2, t2
00c618: 02fa1a13   slli	s4, s4, 47
00c61c: 02039393   slli	t2, t2, 32
00c620: 43fa5a13   srai	s4, s4, 63
00c624: 00b805b3   add	a1, a6, a1
00c628: 0203d393   srli	t2, t2, 32
00c62c: 002a7613   andi	a2, s4, 2
00c630: 007585b3   add	a1, a1, t2
00c634: 00c583b3   add	t2, a1, a2
00c638: 0143f3b3   and	t2, t2, s4
00c63c: 02023423   sd	zero, 40(tp)
00c640: 00022ca3   sw	zero, 25(tp)
00c644: 31422003   lw	zero, 788(tp)
00c648: 008f85bb   addw	a1, t6, s0
00c64c: 001e083b   addw	a6, t3, ra
00c650: 0098081b   addiw	a6, a6, 9
00c654: 0015959b   slliw	a1, a1, 1
00c658: 010585bb   addw	a1, a1, a6
00c65c: c0010837   lui	a6, 786448
00c660: fff80813   addi	a6, a6, -1
00c664: 00e87733   and	a4, a6, a4
00c668: 0105959b   slliw	a1, a1, 16
00c66c: 00b76733   or	a4, a4, a1
00c670: 00e22023   sw	a4, 0(tp)
00c674: 00f22023   sw	a5, 0(tp)
00c678: 00a22023   sw	a0, 0(tp)
00c67c: 01522023   sw	s5, 0(tp)
00c680: 00922023   sw	s1, 0(tp)
00c684: 00522023   sw	t0, 0(tp)
00c688: 0202d793   srli	a5, t0, 32
00c68c: 00f22023   sw	a5, 0(tp)
00c690: 01322023   sw	s3, 0(tp)
00c694: 01222023   sw	s2, 0(tp)
00c698: 00300793   li	a5, 3
00c69c: 03079793   slli	a5, a5, 48
00c6a0: 00020593   mv	a1, tp
00c6a4: 67078793   addi	a5, a5, 1648
00c6a8: 0340006f   j	52
00c6ac: 30226803   lwu	a6, 770(tp)
00c6b0: 30226903   lwu	s2, 770(tp)
00c6b4: 30226483   lwu	s1, 770(tp)
00c6b8: 02081813   slli	a6, a6, 32
00c6bc: 02049713   slli	a4, s1, 32
00c6c0: 02085813   srli	a6, a6, 32
00c6c4: 01076733   or	a4, a4, a6
00c6c8: 00e7b023   sd	a4, 0(a5)
00c6cc: 1e05afa3   sw	zero, 511(a1)
00c6d0: 01222023   sw	s2, 0(tp)
00c6d4: 00922023   sw	s1, 0(tp)
00c6d8: 00178793   addi	a5, a5, 1
00c6dc: 9907871b   addiw	a4, a5, -1648
00c6e0: fdf766e3   bltu	a4, t6, -52
00c6e4: 00300493   li	s1, 3
00c6e8: 03049493   slli	s1, s1, 48
00c6ec: 67048493   addi	s1, s1, 1648
00c6f0: 670f8a93   addi	s5, t6, 1648
00c6f4: 00000793   li	a5, 0
00c6f8: 009f84b3   add	s1, t6, s1
00c6fc: 0380006f   j	56
00c700: 30226803   lwu	a6, 770(tp)
00c704: 30226903   lwu	s2, 770(tp)
00c708: 30226f83   lwu	t6, 770(tp)
00c70c: 02081813   slli	a6, a6, 32
00c710: 020f9713   slli	a4, t6, 32
00c714: 02085813   srli	a6, a6, 32
00c718: 01076733   or	a4, a4, a6
00c71c: 00f48833   add	a6, s1, a5
00c720: 00e83023   sd	a4, 0(a6)
00c724: 1e05afa3   sw	zero, 511(a1)
00c728: 01222023   sw	s2, 0(tp)
00c72c: 01f22023   sw	t6, 0(tp)
00c730: 00178793   addi	a5, a5, 1
00c734: 0007871b   sext.w	a4, a5
00c738: fc8764e3   bltu	a4, s0, -56
00c73c: 00300493   li	s1, 3
00c740: 01540433   add	s0, s0, s5
00c744: 03049493   slli	s1, s1, 48
00c748: 00000793   li	a5, 0
00c74c: 009404b3   add	s1, s0, s1
00c750: 0200006f   j	32
00c754: 30226f83   lwu	t6, 770(tp)
00c758: 30226703   lwu	a4, 770(tp)
00c75c: 00f48833   add	a6, s1, a5
00c760: 01f82023   sw	t6, 0(a6)
00c764: 1e05afa3   sw	zero, 511(a1)
00c768: 00e22023   sw	a4, 0(tp)
00c76c: 00178793   addi	a5, a5, 1
00c770: 0007871b   sext.w	a4, a5
00c774: fe1760e3   bltu	a4, ra, -32
00c778: 00000793   li	a5, 0
00c77c: 4afe0ae3   beq	t3, a5, 3252
00c780: 30226703   lwu	a4, 770(tp)
00c784: 00e22023   sw	a4, 0(tp)
00c788: 0017879b   addiw	a5, a5, 1
00c78c: ff1ff06f   j	-16
00c790: 30226883   lwu	a7, 770(tp)
00c794: 00088e9b   sext.w	t4, a7
00c798: 30223883   ld	a7, 770(tp)
00c79c: 30223603   ld	a2, 770(tp)
00c7a0: 03061613   slli	a2, a2, 48
00c7a4: 01065613   srli	a2, a2, 16
00c7a8: 01166633   or	a2, a2, a7
00c7ac: 06c239a3   sd	a2, 115(tp)
00c7b0: 07323603   ld	a2, 115(tp)
00c7b4: 30226283   lwu	t0, 770(tp)
00c7b8: 30223f03   ld	t5, 770(tp)
00c7bc: 30223883   ld	a7, 770(tp)
00c7c0: 02089893   slli	a7, a7, 32
00c7c4: 01e8e8b3   or	a7, a7, t5
00c7c8: 071239a3   sd	a7, 115(tp)
00c7cc: 07323f83   ld	t6, 115(tp)
00c7d0: 00100893   li	a7, 1
00c7d4: 0102df1b   srliw	t5, t0, 16
00c7d8: 0003041b   sext.w	s0, t1
00c7dc: 011e1463   bne	t3, a7, 8
00c7e0: 4110106f   j	7184
00c7e4: 00200893   li	a7, 2
00c7e8: 011e1463   bne	t3, a7, 8
00c7ec: 3ed0106f   j	7148
00c7f0: 00330893   addi	a7, t1, 3
00c7f4: 0028d893   srli	a7, a7, 2
00c7f8: 30226083   lwu	ra, 770(tp)
00c7fc: 30226383   lwu	t2, 770(tp)
00c800: 00a23483   ld	s1, 10(tp)
00c804: 008686bb   addw	a3, a3, s0
00c808: 02f49493   slli	s1, s1, 47
00c80c: 43f4d493   srai	s1, s1, 63
00c810: 02069693   slli	a3, a3, 32
00c814: 0034fe13   andi	t3, s1, 3
00c818: 0206d693   srli	a3, a3, 32
00c81c: 00de0e33   add	t3, t3, a3
00c820: 00b806b3   add	a3, a6, a1
00c824: 009e7e33   and	t3, t3, s1
00c828: 0096f6b3   and	a3, a3, s1
00c82c: 02d23423   sd	a3, 40(tp)
00c830: 00022ca3   sw	zero, 25(tp)
00c834: 31422003   lw	zero, 788(tp)
00c838: c00106b7   lui	a3, 786448
00c83c: 0098859b   addiw	a1, a7, 9
00c840: fff68693   addi	a3, a3, -1
00c844: 00e6f733   and	a4, a3, a4
00c848: 0105969b   slliw	a3, a1, 16
00c84c: 00d76733   or	a4, a4, a3
00c850: 00e22023   sw	a4, 0(tp)
00c854: 00f22023   sw	a5, 0(tp)
00c858: 00a22023   sw	a0, 0(tp)
00c85c: 01522023   sw	s5, 0(tp)
00c860: 00522023   sw	t0, 0(tp)
00c864: 01f22023   sw	t6, 0(tp)
00c868: 020fdf93   srli	t6, t6, 32
00c86c: 01f22023   sw	t6, 0(tp)
00c870: 00122023   sw	ra, 0(tp)
00c874: 00722023   sw	t2, 0(tp)
00c878: 00000793   li	a5, 0
00c87c: 14f884e3   beq	a7, a5, 2376
00c880: 30226703   lwu	a4, 770(tp)
00c884: 00e22023   sw	a4, 0(tp)
00c888: 0017879b   addiw	a5, a5, 1
00c88c: ff1ff06f   j	-16
00c890: 30226e83   lwu	t4, 770(tp)
00c894: 000e8e9b   sext.w	t4, t4
00c898: 30223883   ld	a7, 770(tp)
00c89c: 30223583   ld	a1, 770(tp)
00c8a0: 03059593   slli	a1, a1, 48
00c8a4: 0105d593   srli	a1, a1, 16
00c8a8: 0115e5b3   or	a1, a1, a7
00c8ac: 06b239a3   sd	a1, 115(tp)
00c8b0: 07323583   ld	a1, 115(tp)
00c8b4: 30226383   lwu	t2, 770(tp)
00c8b8: 30223f03   ld	t5, 770(tp)
00c8bc: 30223883   ld	a7, 770(tp)
00c8c0: 02089893   slli	a7, a7, 32
00c8c4: 01e8e8b3   or	a7, a7, t5
00c8c8: 071239a3   sd	a7, 115(tp)
00c8cc: 07323283   ld	t0, 115(tp)
00c8d0: 00100893   li	a7, 1
00c8d4: 0103df1b   srliw	t5, t2, 16
00c8d8: 00030f9b   sext.w	t6, t1
00c8dc: 011e1463   bne	t3, a7, 8
00c8e0: 2e50106f   j	6884
00c8e4: 00200893   li	a7, 2
00c8e8: 011e1463   bne	t3, a7, 8
00c8ec: 2c10106f   j	6848
00c8f0: 00330893   addi	a7, t1, 3
00c8f4: 0028d893   srli	a7, a7, 2
00c8f8: 30226403   lwu	s0, 770(tp)
00c8fc: 30226083   lwu	ra, 770(tp)
00c900: 00a23483   ld	s1, 10(tp)
00c904: 01f686bb   addw	a3, a3, t6
00c908: 02f49493   slli	s1, s1, 47
00c90c: 43f4d493   srai	s1, s1, 63
00c910: 02069693   slli	a3, a3, 32
00c914: 0024fe13   andi	t3, s1, 2
00c918: 0206d693   srli	a3, a3, 32
00c91c: 01c686b3   add	a3, a3, t3
00c920: 00c80633   add	a2, a6, a2
00c924: 0096f6b3   and	a3, a3, s1
00c928: 00967633   and	a2, a2, s1
00c92c: 02c23423   sd	a2, 40(tp)
00c930: 00022ca3   sw	zero, 25(tp)
00c934: 31422003   lw	zero, 788(tp)
00c938: c0010637   lui	a2, 786448
00c93c: 0098881b   addiw	a6, a7, 9
00c940: fff60613   addi	a2, a2, -1
00c944: 00e67733   and	a4, a2, a4
00c948: 0108161b   slliw	a2, a6, 16
00c94c: 00c76733   or	a4, a4, a2
00c950: 00e22023   sw	a4, 0(tp)
00c954: 00f22023   sw	a5, 0(tp)
00c958: 00a22023   sw	a0, 0(tp)
00c95c: 01522023   sw	s5, 0(tp)
00c960: 00722023   sw	t2, 0(tp)
00c964: 00522023   sw	t0, 0(tp)
00c968: 0202d293   srli	t0, t0, 32
00c96c: 00522023   sw	t0, 0(tp)
00c970: 00822023   sw	s0, 0(tp)
00c974: 00122023   sw	ra, 0(tp)
00c978: 00000793   li	a5, 0
00c97c: 60f88ee3   beq	a7, a5, 3612
00c980: 30226703   lwu	a4, 770(tp)
00c984: 00e22023   sw	a4, 0(tp)
00c988: 0017879b   addiw	a5, a5, 1
00c98c: ff1ff06f   j	-16
00c990: 30226883   lwu	a7, 770(tp)
00c994: 0008889b   sext.w	a7, a7
00c998: 30223803   ld	a6, 770(tp)
00c99c: 30223683   ld	a3, 770(tp)
00c9a0: 03069693   slli	a3, a3, 48
00c9a4: 0106d693   srli	a3, a3, 16
00c9a8: 0106e6b3   or	a3, a3, a6
00c9ac: 06d239a3   sd	a3, 115(tp)
00c9b0: 07323683   ld	a3, 115(tp)
00c9b4: 30226283   lwu	t0, 770(tp)
00c9b8: 30223e83   ld	t4, 770(tp)
00c9bc: 30223803   ld	a6, 770(tp)
00c9c0: 02081813   slli	a6, a6, 32
00c9c4: 01d86833   or	a6, a6, t4
00c9c8: 070239a3   sd	a6, 115(tp)
00c9cc: 07323f83   ld	t6, 115(tp)
00c9d0: 00100813   li	a6, 1
00c9d4: 0102de9b   srliw	t4, t0, 16
00c9d8: 0003041b   sext.w	s0, t1
00c9dc: 01039463   bne	t2, a6, 8
00c9e0: 1bd0106f   j	6588
00c9e4: 00200813   li	a6, 2
00c9e8: 01039463   bne	t2, a6, 8
00c9ec: 1990106f   j	6552
00c9f0: 00130813   addi	a6, t1, 1
00c9f4: 00185813   srli	a6, a6, 1
00c9f8: 30226083   lwu	ra, 770(tp)
00c9fc: 30226383   lwu	t2, 770(tp)
00ca00: 00a23f03   ld	t5, 10(tp)
00ca04: 0086063b   addw	a2, a2, s0
00ca08: 02ff1f13   slli	t5, t5, 47
00ca0c: 02061613   slli	a2, a2, 32
00ca10: 43ff5f13   srai	t5, t5, 63
00ca14: 00be05b3   add	a1, t3, a1
00ca18: 02065613   srli	a2, a2, 32
00ca1c: 01e67633   and	a2, a2, t5
00ca20: 01e5f5b3   and	a1, a1, t5
00ca24: 02b23423   sd	a1, 40(tp)
00ca28: c00105b7   lui	a1, 786448
00ca2c: 00980e1b   addiw	t3, a6, 9
00ca30: fff58593   addi	a1, a1, -1
00ca34: 00e5f733   and	a4, a1, a4
00ca38: 010e159b   slliw	a1, t3, 16
00ca3c: 00b76733   or	a4, a4, a1
00ca40: 00e22023   sw	a4, 0(tp)
00ca44: 00f22023   sw	a5, 0(tp)
00ca48: 00a22023   sw	a0, 0(tp)
00ca4c: 01522023   sw	s5, 0(tp)
00ca50: 00522023   sw	t0, 0(tp)
00ca54: 01f22023   sw	t6, 0(tp)
00ca58: 020fdf93   srli	t6, t6, 32
00ca5c: 01f22023   sw	t6, 0(tp)
00ca60: 00122023   sw	ra, 0(tp)
00ca64: 00722023   sw	t2, 0(tp)
00ca68: 00000793   li	a5, 0
00ca6c: 5cf80663   beq	a6, a5, 1484
00ca70: 30226703   lwu	a4, 770(tp)
00ca74: 00e22023   sw	a4, 0(tp)
00ca78: 0017879b   addiw	a5, a5, 1
00ca7c: ff1ff06f   j	-16
00ca80: 30226e83   lwu	t4, 770(tp)
00ca84: 000e8e9b   sext.w	t4, t4
00ca88: 30223303   ld	t1, 770(tp)
00ca8c: 30223683   ld	a3, 770(tp)
00ca90: 03069693   slli	a3, a3, 48
00ca94: 0106d693   srli	a3, a3, 16
00ca98: 0066e6b3   or	a3, a3, t1
00ca9c: 06d239a3   sd	a3, 115(tp)
00caa0: 07323683   ld	a3, 115(tp)
00caa4: 30226383   lwu	t2, 770(tp)
00caa8: 30223e03   ld	t3, 770(tp)
00caac: 30223303   ld	t1, 770(tp)
00cab0: 02031313   slli	t1, t1, 32
00cab4: 01c36333   or	t1, t1, t3
00cab8: 066239a3   sd	t1, 115(tp)
00cabc: 07323283   ld	t0, 115(tp)
00cac0: 00100313   li	t1, 1
00cac4: 0103df1b   srliw	t5, t2, 16
00cac8: 00088e1b   sext.w	t3, a7
00cacc: 006f9463   bne	t6, t1, 8
00cad0: 1c10106f   j	6592
00cad4: 00200313   li	t1, 2
00cad8: 006f9463   bne	t6, t1, 8
00cadc: 19d0106f   j	6556
00cae0: 00388313   addi	t1, a7, 3
00cae4: 00235313   srli	t1, t1, 2
00cae8: 30226083   lwu	ra, 770(tp)
00caec: 30226f83   lwu	t6, 770(tp)
00caf0: 00a23403   ld	s0, 10(tp)
00caf4: 01c6063b   addw	a2, a2, t3
00caf8: 02f41413   slli	s0, s0, 47
00cafc: 43f45413   srai	s0, s0, 63
00cb00: 02061613   slli	a2, a2, 32
00cb04: 00247e13   andi	t3, s0, 2
00cb08: 02065613   srli	a2, a2, 32
00cb0c: 01c60633   add	a2, a2, t3
00cb10: 00b805b3   add	a1, a6, a1
00cb14: 00867633   and	a2, a2, s0
00cb18: 0085f5b3   and	a1, a1, s0
00cb1c: 02b23423   sd	a1, 40(tp)
00cb20: 00022ca3   sw	zero, 25(tp)
00cb24: 31422003   lw	zero, 788(tp)
00cb28: c00105b7   lui	a1, 786448
00cb2c: 0093081b   addiw	a6, t1, 9
00cb30: fff58593   addi	a1, a1, -1
00cb34: 00e5f733   and	a4, a1, a4
00cb38: 0108159b   slliw	a1, a6, 16
00cb3c: 00b76733   or	a4, a4, a1
00cb40: 00e22023   sw	a4, 0(tp)
00cb44: 00f22023   sw	a5, 0(tp)
00cb48: 00a22023   sw	a0, 0(tp)
00cb4c: 01522023   sw	s5, 0(tp)
00cb50: 00722023   sw	t2, 0(tp)
00cb54: 00522023   sw	t0, 0(tp)
00cb58: 0202d293   srli	t0, t0, 32
00cb5c: 00522023   sw	t0, 0(tp)
00cb60: 00122023   sw	ra, 0(tp)
00cb64: 01f22023   sw	t6, 0(tp)
00cb68: 00000793   li	a5, 0
00cb6c: 22f30ce3   beq	t1, a5, 2616
00cb70: 30226703   lwu	a4, 770(tp)
00cb74: 00e22023   sw	a4, 0(tp)
00cb78: 0017879b   addiw	a5, a5, 1
00cb7c: ff1ff06f   j	-16
00cb80: 30226f03   lwu	t5, 770(tp)
00cb84: 000f0f1b   sext.w	t5, t5
00cb88: 30223883   ld	a7, 770(tp)
00cb8c: 30223583   ld	a1, 770(tp)
00cb90: 03059593   slli	a1, a1, 48
00cb94: 0105d593   srli	a1, a1, 16
00cb98: 0115e5b3   or	a1, a1, a7
00cb9c: 06b239a3   sd	a1, 115(tp)
00cba0: 07323583   ld	a1, 115(tp)
00cba4: 30226283   lwu	t0, 770(tp)
00cba8: 30223e83   ld	t4, 770(tp)
00cbac: 30223883   ld	a7, 770(tp)
00cbb0: 02089893   slli	a7, a7, 32
00cbb4: 01d8e8b3   or	a7, a7, t4
00cbb8: 071239a3   sd	a7, 115(tp)
00cbbc: 07323f83   ld	t6, 115(tp)
00cbc0: 00100893   li	a7, 1
00cbc4: 0102de9b   srliw	t4, t0, 16
00cbc8: 0003041b   sext.w	s0, t1
00cbcc: 011e1463   bne	t3, a7, 8
00cbd0: 0e90106f   j	6376
00cbd4: 00200893   li	a7, 2
00cbd8: 011e1463   bne	t3, a7, 8
00cbdc: 5e40106f   j	5604
00cbe0: 00330893   addi	a7, t1, 3
00cbe4: 0028d893   srli	a7, a7, 2
00cbe8: 30226383   lwu	t2, 770(tp)
00cbec: 30226e03   lwu	t3, 770(tp)
00cbf0: 00a23083   ld	ra, 10(tp)
00cbf4: 0086843b   addw	s0, a3, s0
00cbf8: 02f09093   slli	ra, ra, 47
00cbfc: 00c806b3   add	a3, a6, a2
00cc00: 02041613   slli	a2, s0, 32
00cc04: 43f0d093   srai	ra, ra, 63
00cc08: 02065613   srli	a2, a2, 32
00cc0c: 0020f813   andi	a6, ra, 2
00cc10: 00c686b3   add	a3, a3, a2
00cc14: 010686b3   add	a3, a3, a6
00cc18: 0016f6b3   and	a3, a3, ra
00cc1c: 02023423   sd	zero, 40(tp)
00cc20: 00022ca3   sw	zero, 25(tp)
00cc24: 31422003   lw	zero, 788(tp)
00cc28: c0010637   lui	a2, 786448
00cc2c: 00a8809b   addiw	ra, a7, 10
00cc30: fff60613   addi	a2, a2, -1
00cc34: 00e67733   and	a4, a2, a4
00cc38: 0100961b   slliw	a2, ra, 16
00cc3c: 00c76733   or	a4, a4, a2
00cc40: 00e22023   sw	a4, 0(tp)
00cc44: 00f22023   sw	a5, 0(tp)
00cc48: 00a22023   sw	a0, 0(tp)
00cc4c: 01522023   sw	s5, 0(tp)
00cc50: 00522023   sw	t0, 0(tp)
00cc54: 01f22023   sw	t6, 0(tp)
00cc58: 020fdf93   srli	t6, t6, 32
00cc5c: 01f22023   sw	t6, 0(tp)
00cc60: 00722023   sw	t2, 0(tp)
00cc64: 01c22023   sw	t3, 0(tp)
00cc68: 30226703   lwu	a4, 770(tp)
00cc6c: 30226783   lwu	a5, 770(tp)
00cc70: ffff8e37   lui	t3, 1048568
00cc74: 01cb8e33   add	t3, s7, t3
00cc78: 66ee2823   sw	a4, 1648(t3)
00cc7c: 1e022fa3   sw	zero, 511(tp)
00cc80: 00f22023   sw	a5, 0(tp)
00cc84: 00000793   li	a5, 0
00cc88: 5af88463   beq	a7, a5, 1448
00cc8c: 30226703   lwu	a4, 770(tp)
00cc90: 00e22023   sw	a4, 0(tp)
00cc94: 0017879b   addiw	a5, a5, 1
00cc98: ff1ff06f   j	-16
00cc9c: 30226283   lwu	t0, 770(tp)
00cca0: 0002829b   sext.w	t0, t0
00cca4: 30223803   ld	a6, 770(tp)
00cca8: 30223683   ld	a3, 770(tp)
00ccac: 03069693   slli	a3, a3, 48
00ccb0: 0106d693   srli	a3, a3, 16
00ccb4: 0106e6b3   or	a3, a3, a6
00ccb8: 06d239a3   sd	a3, 115(tp)
00ccbc: 07323683   ld	a3, 115(tp)
00ccc0: 30226f83   lwu	t6, 770(tp)
00ccc4: 30223883   ld	a7, 770(tp)
00ccc8: 30223803   ld	a6, 770(tp)
00cccc: 02081813   slli	a6, a6, 32
00ccd0: 01186833   or	a6, a6, a7
00ccd4: 070239a3   sd	a6, 115(tp)
00ccd8: 07323f03   ld	t5, 115(tp)
00ccdc: 00100813   li	a6, 1
00cce0: 010fde9b   srliw	t4, t6, 16
00cce4: 0003089b   sext.w	a7, t1
00cce8: 01039463   bne	t2, a6, 8
00ccec: 7f80106f   j	6136
00ccf0: 00200813   li	a6, 2
00ccf4: 01039463   bne	t2, a6, 8
00ccf8: 7d40106f   j	6100
00ccfc: 00130813   addi	a6, t1, 1
00cd00: 00185813   srli	a6, a6, 1
00cd04: 30226083   lwu	ra, 770(tp)
00cd08: 30226383   lwu	t2, 770(tp)
00cd0c: 00a23403   ld	s0, 10(tp)
00cd10: 011608bb   addw	a7, a2, a7
00cd14: 02089893   slli	a7, a7, 32
00cd18: 02f41613   slli	a2, s0, 47
00cd1c: 00be05b3   add	a1, t3, a1
00cd20: 0208d893   srli	a7, a7, 32
00cd24: 011585b3   add	a1, a1, a7
00cd28: 43f65613   srai	a2, a2, 63
00cd2c: 00b67633   and	a2, a2, a1
00cd30: 02023423   sd	zero, 40(tp)
00cd34: c00105b7   lui	a1, 786448
00cd38: 00a8089b   addiw	a7, a6, 10
00cd3c: fff58593   addi	a1, a1, -1
00cd40: 00e5f733   and	a4, a1, a4
00cd44: 0108959b   slliw	a1, a7, 16
00cd48: 00b76733   or	a4, a4, a1
00cd4c: 00e22023   sw	a4, 0(tp)
00cd50: 00f22023   sw	a5, 0(tp)
00cd54: 00a22023   sw	a0, 0(tp)
00cd58: 01522023   sw	s5, 0(tp)
00cd5c: 01f22023   sw	t6, 0(tp)
00cd60: 01e22023   sw	t5, 0(tp)
00cd64: 020f5f13   srli	t5, t5, 32
00cd68: 01e22023   sw	t5, 0(tp)
00cd6c: 00122023   sw	ra, 0(tp)
00cd70: 00722023   sw	t2, 0(tp)
00cd74: 30226703   lwu	a4, 770(tp)
00cd78: 30226783   lwu	a5, 770(tp)
00cd7c: ffff88b7   lui	a7, 1048568
00cd80: 011b88b3   add	a7, s7, a7
00cd84: 66e8a823   sw	a4, 1648(a7)
00cd88: 1e022fa3   sw	zero, 511(tp)
00cd8c: 00f22023   sw	a5, 0(tp)
00cd90: 00000793   li	a5, 0
00cd94: 26f80ee3   beq	a6, a5, 2684
00cd98: 30226703   lwu	a4, 770(tp)
00cd9c: 00e22023   sw	a4, 0(tp)
00cda0: 0017879b   addiw	a5, a5, 1
00cda4: ff1ff06f   j	-16
00cda8: 30226e03   lwu	t3, 770(tp)
00cdac: 000e0e1b   sext.w	t3, t3
00cdb0: 30223303   ld	t1, 770(tp)
00cdb4: 30223683   ld	a3, 770(tp)
00cdb8: 03069693   slli	a3, a3, 48
00cdbc: 0106d693   srli	a3, a3, 16
00cdc0: 0066e6b3   or	a3, a3, t1
00cdc4: 06d239a3   sd	a3, 115(tp)
00cdc8: 07323683   ld	a3, 115(tp)
00cdcc: 30226283   lwu	t0, 770(tp)
00cdd0: 30223e83   ld	t4, 770(tp)
00cdd4: 30223303   ld	t1, 770(tp)
00cdd8: 02031313   slli	t1, t1, 32
00cddc: 01d36333   or	t1, t1, t4
00cde0: 066239a3   sd	t1, 115(tp)
00cde4: 07323f03   ld	t5, 115(tp)
00cde8: 00100313   li	t1, 1
00cdec: 0102de9b   srliw	t4, t0, 16
00cdf0: 0008841b   sext.w	s0, a7
00cdf4: 006f9463   bne	t6, t1, 8
00cdf8: 6ac0106f   j	5804
00cdfc: 00200313   li	t1, 2
00ce00: 006f9463   bne	t6, t1, 8
00ce04: 65c0106f   j	5724
00ce08: 00388313   addi	t1, a7, 3
00ce0c: 00235313   srli	t1, t1, 2
00ce10: 30226383   lwu	t2, 770(tp)
00ce14: 30226f83   lwu	t6, 770(tp)
00ce18: 00a23083   ld	ra, 10(tp)
00ce1c: 0086043b   addw	s0, a2, s0
00ce20: 00b805b3   add	a1, a6, a1
00ce24: 02f09093   slli	ra, ra, 47
00ce28: 02041813   slli	a6, s0, 32
00ce2c: 43f0d093   srai	ra, ra, 63
00ce30: 02085813   srli	a6, a6, 32
00ce34: 0020f613   andi	a2, ra, 2
00ce38: 010585b3   add	a1, a1, a6
00ce3c: 00c585b3   add	a1, a1, a2
00ce40: 0015f5b3   and	a1, a1, ra
00ce44: 02023423   sd	zero, 40(tp)
00ce48: 00022ca3   sw	zero, 25(tp)
00ce4c: 31422003   lw	zero, 788(tp)
00ce50: c0010837   lui	a6, 786448
00ce54: 00a3009b   addiw	ra, t1, 10
00ce58: fff80813   addi	a6, a6, -1
00ce5c: 00e87733   and	a4, a6, a4
00ce60: 0100981b   slliw	a6, ra, 16
00ce64: 01076733   or	a4, a4, a6
00ce68: 00e22023   sw	a4, 0(tp)
00ce6c: 00f22023   sw	a5, 0(tp)
00ce70: 00a22023   sw	a0, 0(tp)
00ce74: 01522023   sw	s5, 0(tp)
00ce78: 00522023   sw	t0, 0(tp)
00ce7c: 01e22023   sw	t5, 0(tp)
00ce80: 020f5f13   srli	t5, t5, 32
00ce84: 01e22023   sw	t5, 0(tp)
00ce88: 00722023   sw	t2, 0(tp)
00ce8c: 01f22023   sw	t6, 0(tp)
00ce90: 30226703   lwu	a4, 770(tp)
00ce94: 30226783   lwu	a5, 770(tp)
00ce98: ffff8f37   lui	t5, 1048568
00ce9c: 01eb8f33   add	t5, s7, t5
00cea0: 66ef2823   sw	a4, 1648(t5)
00cea4: 1e022fa3   sw	zero, 511(tp)
00cea8: 00f22023   sw	a5, 0(tp)
00ceac: 00000793   li	a5, 0
00ceb0: 1ef30a63   beq	t1, a5, 500
00ceb4: 30226703   lwu	a4, 770(tp)
00ceb8: 00e22023   sw	a4, 0(tp)
00cebc: 0017879b   addiw	a5, a5, 1
00cec0: ff1ff06f   j	-16
00cec4: 30226903   lwu	s2, 770(tp)
00cec8: 0009091b   sext.w	s2, s2
00cecc: 30226703   lwu	a4, 770(tp)
00ced0: 30226783   lwu	a5, 770(tp)
00ced4: 00e22023   sw	a4, 0(tp)
00ced8: 00f22023   sw	a5, 0(tp)
00cedc: 02081793   slli	a5, a6, 32
00cee0: 00300993   li	s3, 3
00cee4: 02091913   slli	s2, s2, 32
00cee8: 02049493   slli	s1, s1, 32
00ceec: 00010637   lui	a2, 16
00cef0: 0207d793   srli	a5, a5, 32
00cef4: 00000393   li	t2, 0
00cef8: 02095913   srli	s2, s2, 32
00cefc: 0204d493   srli	s1, s1, 32
00cf00: 03099e13   slli	t3, s3, 48
00cf04: fff60613   addi	a2, a2, -1
00cf08: 00400293   li	t0, 4
00cf0c: 03eb7a13   andi	s4, s6, 62
00cf10: 00f13423   sd	a5, 8(sp)
00cf14: 02823423   sd	s0, 40(tp)
00cf18: 040f0a63   beqz	t5, 84
00cf1c: 00000813   li	a6, 0
00cf20: 67000b13   li	s6, 1648
00cf24: 00000593   li	a1, 0
00cf28: 0015f793   andi	a5, a1, 1
00cf2c: 00079863   bnez	a5, 16
00cf30: 01cb0733   add	a4, s6, t3
00cf34: 00073803   ld	a6, 0(a4)
00cf38: 001b0b13   addi	s6, s6, 1
00cf3c: 00479713   slli	a4, a5, 4
00cf40: 00e85733   srl	a4, a6, a4
00cf44: 00c77733   and	a4, a4, a2
00cf48: 0047979b   slliw	a5, a5, 4
00cf4c: 01f70733   add	a4, a4, t6
00cf50: 00e231a3   sd	a4, 3(tp)
00cf54: 0207879b   addiw	a5, a5, 32
00cf58: 00f857b3   srl	a5, a6, a5
00cf5c: 00c7f7b3   and	a5, a5, a2
00cf60: 00f231a3   sd	a5, 3(tp)
00cf64: 0015859b   addiw	a1, a1, 1
00cf68: fcbf10e3   bne	t5, a1, -64
00cf6c: 040e8a63   beqz	t4, 84
00cf70: 000a8b13   mv	s6, s5
00cf74: 00000813   li	a6, 0
00cf78: 00000593   li	a1, 0
00cf7c: 0015f793   andi	a5, a1, 1
00cf80: 00079863   bnez	a5, 16
00cf84: 01cb0733   add	a4, s6, t3
00cf88: 00073803   ld	a6, 0(a4)
00cf8c: 001b0b13   addi	s6, s6, 1
00cf90: 00479713   slli	a4, a5, 4
00cf94: 00e85733   srl	a4, a6, a4
00cf98: 00c77733   and	a4, a4, a2
00cf9c: 0047979b   slliw	a5, a5, 4
00cfa0: 01170733   add	a4, a4, a7
00cfa4: 00e231a3   sd	a4, 3(tp)
00cfa8: 0207879b   addiw	a5, a5, 32
00cfac: 00f857b3   srl	a5, a6, a5
00cfb0: 00c7f7b3   and	a5, a5, a2
00cfb4: 00f231a3   sd	a5, 3(tp)
00cfb8: 0015859b   addiw	a1, a1, 1
00cfbc: fcbe90e3   bne	t4, a1, -64
00cfc0: 04068263   beqz	a3, 68
00cfc4: 00008813   mv	a6, ra
00cfc8: 00000593   li	a1, 0
00cfcc: 00000713   li	a4, 0
00cfd0: 00177793   andi	a5, a4, 1
00cfd4: 00079863   bnez	a5, 16
00cfd8: 01c805b3   add	a1, a6, t3
00cfdc: 0005b583   ld	a1, 0(a1)
00cfe0: 00180813   addi	a6, a6, 1
00cfe4: 0047979b   slliw	a5, a5, 4
00cfe8: 00f5d7b3   srl	a5, a1, a5
00cfec: 00c7f7b3   and	a5, a5, a2
00cff0: 011787b3   add	a5, a5, a7
00cff4: 00f231a3   sd	a5, 3(tp)
00cff8: 005231a3   sd	t0, 3(tp)
00cffc: 0017071b   addiw	a4, a4, 1
00d000: fce698e3   bne	a3, a4, -48
00d004: 000a0a63   beqz	s4, 20
00d008: 00813783   ld	a5, 8(sp)
00d00c: 011787b3   add	a5, a5, a7
00d010: 00f231a3   sd	a5, 3(tp)
00d014: 006231a3   sd	t1, 3(tp)
00d018: 011907b3   add	a5, s2, a7
00d01c: 00f231a3   sd	a5, 3(tp)
00d020: 013231a3   sd	s3, 3(tp)
00d024: 0013839b   addiw	t2, t2, 1
00d028: 009888b3   add	a7, a7, s1
00d02c: eea3e4e3   bltu	t2, a0, -280
00d030: c89fc06f   j	-13176
00d034: c0001073   unimp
00d038: 30226583   lwu	a1, 770(tp)
00d03c: 0005859b   sext.w	a1, a1
00d040: 30226703   lwu	a4, 770(tp)
00d044: 30226783   lwu	a5, 770(tp)
00d048: 00e22023   sw	a4, 0(tp)
00d04c: 00f22023   sw	a5, 0(tp)
00d050: 02089e13   slli	t3, a7, 32
00d054: 02059593   slli	a1, a1, 32
00d058: 020e9e93   slli	t4, t4, 32
00d05c: 00000793   li	a5, 0
00d060: 0205d593   srli	a1, a1, 32
00d064: 020e5e13   srli	t3, t3, 32
00d068: 03eb7893   andi	a7, s6, 62
00d06c: 020ede93   srli	t4, t4, 32
00d070: 00300813   li	a6, 3
00d074: 02c23423   sd	a2, 40(tp)
00d078: 00088863   beqz	a7, 16
00d07c: 00de8733   add	a4, t4, a3
00d080: 00e231a3   sd	a4, 3(tp)
00d084: 006231a3   sd	t1, 3(tp)
00d088: 00d58733   add	a4, a1, a3
00d08c: 00e231a3   sd	a4, 3(tp)
00d090: 010231a3   sd	a6, 3(tp)
00d094: 0017879b   addiw	a5, a5, 1
00d098: 01c686b3   add	a3, a3, t3
00d09c: fca7ece3   bltu	a5, a0, -40
00d0a0: f91ff06f   j	-112
00d0a4: 30226303   lwu	t1, 770(tp)
00d0a8: 0003031b   sext.w	t1, t1
00d0ac: 30226703   lwu	a4, 770(tp)
00d0b0: 30226783   lwu	a5, 770(tp)
00d0b4: 00e22023   sw	a4, 0(tp)
00d0b8: 00f22023   sw	a5, 0(tp)
00d0bc: 00010fb7   lui	t6, 16
00d0c0: 01461613   slli	a2, a2, 20
00d0c4: 02031313   slli	t1, t1, 32
00d0c8: 020e1e13   slli	t3, t3, 32
00d0cc: 020e9e93   slli	t4, t4, 32
00d0d0: 00166813   ori	a6, a2, 1
00d0d4: 00000713   li	a4, 0
00d0d8: 02035313   srli	t1, t1, 32
00d0dc: 020e5e13   srli	t3, t3, 32
00d0e0: ffff8f93   addi	t6, t6, -1
00d0e4: 00400613   li	a2, 4
00d0e8: 03eb7293   andi	t0, s6, 62
00d0ec: 020ede93   srli	t4, t4, 32
00d0f0: 02b23423   sd	a1, 40(tp)
00d0f4: 670f3783   ld	a5, 1648(t5)
00d0f8: 01f7f7b3   and	a5, a5, t6
00d0fc: 00d787b3   add	a5, a5, a3
00d100: 00f231a3   sd	a5, 3(tp)
00d104: 00c231a3   sd	a2, 3(tp)
00d108: 00028863   beqz	t0, 16
00d10c: 00de87b3   add	a5, t4, a3
00d110: 00f231a3   sd	a5, 3(tp)
00d114: 011231a3   sd	a7, 3(tp)
00d118: 00d307b3   add	a5, t1, a3
00d11c: 08f23923   sd	a5, 146(tp)
00d120: 08c23923   sd	a2, 146(tp)
00d124: 03023623   sd	a6, 44(tp)
00d128: 0017071b   addiw	a4, a4, 1
00d12c: 01c686b3   add	a3, a3, t3
00d130: fca760e3   bltu	a4, a0, -64
00d134: efdff06f   j	-260
00d138: 30226583   lwu	a1, 770(tp)
00d13c: 0005859b   sext.w	a1, a1
00d140: 30226703   lwu	a4, 770(tp)
00d144: 30226783   lwu	a5, 770(tp)
00d148: 00e22023   sw	a4, 0(tp)
00d14c: 00f22023   sw	a5, 0(tp)
00d150: 000108b7   lui	a7, 16
00d154: 02059593   slli	a1, a1, 32
00d158: 02029293   slli	t0, t0, 32
00d15c: 020e9e93   slli	t4, t4, 32
00d160: 00000713   li	a4, 0
00d164: 0205d593   srli	a1, a1, 32
00d168: 0202d293   srli	t0, t0, 32
00d16c: fff88893   addi	a7, a7, -1
00d170: 00400f93   li	t6, 4
00d174: 03eb7f13   andi	t5, s6, 62
00d178: 020ede93   srli	t4, t4, 32
00d17c: 00300e13   li	t3, 3
00d180: 02d23423   sd	a3, 40(tp)
00d184: 67083783   ld	a5, 1648(a6)
00d188: 0117f7b3   and	a5, a5, a7
00d18c: 00c787b3   add	a5, a5, a2
00d190: 00f231a3   sd	a5, 3(tp)
00d194: 01f231a3   sd	t6, 3(tp)
00d198: 000f0863   beqz	t5, 16
00d19c: 00ce87b3   add	a5, t4, a2
00d1a0: 00f231a3   sd	a5, 3(tp)
00d1a4: 006231a3   sd	t1, 3(tp)
00d1a8: 00c587b3   add	a5, a1, a2
00d1ac: 00f231a3   sd	a5, 3(tp)
00d1b0: 01c231a3   sd	t3, 3(tp)
00d1b4: 0017071b   addiw	a4, a4, 1
00d1b8: 00560633   add	a2, a2, t0
00d1bc: fca762e3   bltu	a4, a0, -60
00d1c0: e71ff06f   j	-400
00d1c4: 30226683   lwu	a3, 770(tp)
00d1c8: 0006869b   sext.w	a3, a3
00d1cc: 30226703   lwu	a4, 770(tp)
00d1d0: 30226783   lwu	a5, 770(tp)
00d1d4: 00e22023   sw	a4, 0(tp)
00d1d8: 00f22023   sw	a5, 0(tp)
00d1dc: 02069693   slli	a3, a3, 32
00d1e0: 020e9893   slli	a7, t4, 32
00d1e4: 020f1f13   slli	t5, t5, 32
00d1e8: 00000793   li	a5, 0
00d1ec: 0206d693   srli	a3, a3, 32
00d1f0: 0208d893   srli	a7, a7, 32
00d1f4: 03eb7813   andi	a6, s6, 62
00d1f8: 020f5f13   srli	t5, t5, 32
00d1fc: 00300593   li	a1, 3
00d200: 03c23423   sd	t3, 40(tp)
00d204: 00080863   beqz	a6, 16
00d208: 00cf0733   add	a4, t5, a2
00d20c: 00e231a3   sd	a4, 3(tp)
00d210: 006231a3   sd	t1, 3(tp)
00d214: 00c68733   add	a4, a3, a2
00d218: 00e231a3   sd	a4, 3(tp)
00d21c: 00b231a3   sd	a1, 3(tp)
00d220: 0017879b   addiw	a5, a5, 1
00d224: 01160633   add	a2, a2, a7
00d228: fca7ece3   bltu	a5, a0, -40
00d22c: e05ff06f   j	-508
00d230: 30226783   lwu	a5, 770(tp)
00d234: 0007879b   sext.w	a5, a5
00d238: 30226603   lwu	a2, 770(tp)
00d23c: 30226703   lwu	a4, 770(tp)
00d240: 00c22023   sw	a2, 0(tp)
00d244: 00e22023   sw	a4, 0(tp)
00d248: 000108b7   lui	a7, 16
00d24c: 01481613   slli	a2, a6, 20
00d250: 020f1f13   slli	t5, t5, 32
00d254: 02079813   slli	a6, a5, 32
00d258: 020e9e93   slli	t4, t4, 32
00d25c: 00166613   ori	a2, a2, 1
00d260: 00000713   li	a4, 0
00d264: 02085813   srli	a6, a6, 32
00d268: 020f5f13   srli	t5, t5, 32
00d26c: fff88893   addi	a7, a7, -1
00d270: 00400393   li	t2, 4
00d274: 03eb7293   andi	t0, s6, 62
00d278: 020ede93   srli	t4, t4, 32
00d27c: 00500f93   li	t6, 5
00d280: 02d23423   sd	a3, 40(tp)
00d284: 670e3783   ld	a5, 1648(t3)
00d288: 0117f7b3   and	a5, a5, a7
00d28c: 00b787b3   add	a5, a5, a1
00d290: 00f231a3   sd	a5, 3(tp)
00d294: 007231a3   sd	t2, 3(tp)
00d298: 00028863   beqz	t0, 16
00d29c: 00be87b3   add	a5, t4, a1
00d2a0: 00f231a3   sd	a5, 3(tp)
00d2a4: 006231a3   sd	t1, 3(tp)
00d2a8: 00b807b3   add	a5, a6, a1
00d2ac: 08f23923   sd	a5, 146(tp)
00d2b0: 09f23923   sd	t6, 146(tp)
00d2b4: 02c236a3   sd	a2, 45(tp)
00d2b8: 0017071b   addiw	a4, a4, 1
00d2bc: 01e585b3   add	a1, a1, t5
00d2c0: fca760e3   bltu	a4, a0, -64
00d2c4: d6dff06f   j	-660
00d2c8: 30226483   lwu	s1, 770(tp)
00d2cc: 0004849b   sext.w	s1, s1
00d2d0: 30226703   lwu	a4, 770(tp)
00d2d4: 30226783   lwu	a5, 770(tp)
00d2d8: 00e22023   sw	a4, 0(tp)
00d2dc: 00f22023   sw	a5, 0(tp)
00d2e0: 01016783   lwu	a5, 16(sp)
00d2e4: 00300913   li	s2, 3
00d2e8: 02049493   slli	s1, s1, 32
00d2ec: 000106b7   lui	a3, 16
00d2f0: 00816a03   lwu	s4, 8(sp)
00d2f4: 00000093   li	ra, 0
00d2f8: 0204d493   srli	s1, s1, 32
00d2fc: 03091e13   slli	t3, s2, 48
00d300: fff68693   addi	a3, a3, -1
00d304: 00400293   li	t0, 4
00d308: 03eb7993   andi	s3, s6, 62
00d30c: 00f13423   sd	a5, 8(sp)
00d310: 02723423   sd	t2, 40(tp)
00d314: 040f0a63   beqz	t5, 84
00d318: 00000813   li	a6, 0
00d31c: 67000b13   li	s6, 1648
00d320: 00000593   li	a1, 0
00d324: 0015f793   andi	a5, a1, 1
00d328: 00079863   bnez	a5, 16
00d32c: 01cb0733   add	a4, s6, t3
00d330: 00073803   ld	a6, 0(a4)
00d334: 001b0b13   addi	s6, s6, 1
00d338: 00479713   slli	a4, a5, 4
00d33c: 00e85733   srl	a4, a6, a4
00d340: 00d77733   and	a4, a4, a3
00d344: 0047979b   slliw	a5, a5, 4
00d348: 01f70733   add	a4, a4, t6
00d34c: 00e231a3   sd	a4, 3(tp)
00d350: 0207879b   addiw	a5, a5, 32
00d354: 00f857b3   srl	a5, a6, a5
00d358: 00d7f7b3   and	a5, a5, a3
00d35c: 00f231a3   sd	a5, 3(tp)
00d360: 0015859b   addiw	a1, a1, 1
00d364: fcbf10e3   bne	t5, a1, -64
00d368: 040e8a63   beqz	t4, 84
00d36c: 000a8b13   mv	s6, s5
00d370: 00000813   li	a6, 0
00d374: 00000593   li	a1, 0
00d378: 0015f793   andi	a5, a1, 1
00d37c: 00079863   bnez	a5, 16
00d380: 01cb0733   add	a4, s6, t3
00d384: 00073803   ld	a6, 0(a4)
00d388: 001b0b13   addi	s6, s6, 1
00d38c: 00479713   slli	a4, a5, 4
00d390: 00e85733   srl	a4, a6, a4
00d394: 00d77733   and	a4, a4, a3
00d398: 0047979b   slliw	a5, a5, 4
00d39c: 01170733   add	a4, a4, a7
00d3a0: 00e231a3   sd	a4, 3(tp)
00d3a4: 0207879b   addiw	a5, a5, 32
00d3a8: 00f857b3   srl	a5, a6, a5
00d3ac: 00d7f7b3   and	a5, a5, a3
00d3b0: 00f231a3   sd	a5, 3(tp)
00d3b4: 0015859b   addiw	a1, a1, 1
00d3b8: fcbe90e3   bne	t4, a1, -64
00d3bc: 04060263   beqz	a2, 68
00d3c0: 00040813   mv	a6, s0
00d3c4: 00000593   li	a1, 0
00d3c8: 00000713   li	a4, 0
00d3cc: 00177793   andi	a5, a4, 1
00d3d0: 00079863   bnez	a5, 16
00d3d4: 01c805b3   add	a1, a6, t3
00d3d8: 0005b583   ld	a1, 0(a1)
00d3dc: 00180813   addi	a6, a6, 1
00d3e0: 0047979b   slliw	a5, a5, 4
00d3e4: 00f5d7b3   srl	a5, a1, a5
00d3e8: 00d7f7b3   and	a5, a5, a3
00d3ec: 011787b3   add	a5, a5, a7
00d3f0: 00f231a3   sd	a5, 3(tp)
00d3f4: 005231a3   sd	t0, 3(tp)
00d3f8: 0017071b   addiw	a4, a4, 1
00d3fc: fce618e3   bne	a2, a4, -48
00d400: 00098a63   beqz	s3, 20
00d404: 00813783   ld	a5, 8(sp)
00d408: 011787b3   add	a5, a5, a7
00d40c: 00f231a3   sd	a5, 3(tp)
00d410: 006231a3   sd	t1, 3(tp)
00d414: 011487b3   add	a5, s1, a7
00d418: 00f231a3   sd	a5, 3(tp)
00d41c: 012231a3   sd	s2, 3(tp)
00d420: 0010809b   addiw	ra, ra, 1
00d424: 014888b3   add	a7, a7, s4
00d428: eea0e4e3   bltu	ra, a0, -280
00d42c: c05ff06f   j	-1020
00d430: 30226903   lwu	s2, 770(tp)
00d434: 0009091b   sext.w	s2, s2
00d438: 30226703   lwu	a4, 770(tp)
00d43c: 30226783   lwu	a5, 770(tp)
00d440: 00e22023   sw	a4, 0(tp)
00d444: 00f22023   sw	a5, 0(tp)
00d448: 01016783   lwu	a5, 16(sp)
00d44c: 01461613   slli	a2, a2, 20
00d450: 00166493   ori	s1, a2, 1
00d454: 02091913   slli	s2, s2, 32
00d458: 00300e13   li	t3, 3
00d45c: 00010637   lui	a2, 16
00d460: 00816a03   lwu	s4, 8(sp)
00d464: 00000093   li	ra, 0
00d468: 02095913   srli	s2, s2, 32
00d46c: 030e1e13   slli	t3, t3, 48
00d470: fff60613   addi	a2, a2, -1
00d474: 00400f93   li	t6, 4
00d478: 03eb7993   andi	s3, s6, 62
00d47c: 00f13423   sd	a5, 8(sp)
00d480: 02723423   sd	t2, 40(tp)
00d484: 040f0a63   beqz	t5, 84
00d488: 00000813   li	a6, 0
00d48c: 67000b13   li	s6, 1648
00d490: 00000593   li	a1, 0
00d494: 0015f793   andi	a5, a1, 1
00d498: 00079863   bnez	a5, 16
00d49c: 01cb0733   add	a4, s6, t3
00d4a0: 00073803   ld	a6, 0(a4)
00d4a4: 001b0b13   addi	s6, s6, 1
00d4a8: 00479713   slli	a4, a5, 4
00d4ac: 00e85733   srl	a4, a6, a4
00d4b0: 00c77733   and	a4, a4, a2
00d4b4: 0047979b   slliw	a5, a5, 4
00d4b8: 00570733   add	a4, a4, t0
00d4bc: 00e231a3   sd	a4, 3(tp)
00d4c0: 0207879b   addiw	a5, a5, 32
00d4c4: 00f857b3   srl	a5, a6, a5
00d4c8: 00c7f7b3   and	a5, a5, a2
00d4cc: 00f231a3   sd	a5, 3(tp)
00d4d0: 0015859b   addiw	a1, a1, 1
00d4d4: fcbf10e3   bne	t5, a1, -64
00d4d8: 040e8a63   beqz	t4, 84
00d4dc: 000a8b13   mv	s6, s5
00d4e0: 00000813   li	a6, 0
00d4e4: 00000593   li	a1, 0
00d4e8: 0015f793   andi	a5, a1, 1
00d4ec: 00079863   bnez	a5, 16
00d4f0: 01cb0733   add	a4, s6, t3
00d4f4: 00073803   ld	a6, 0(a4)
00d4f8: 001b0b13   addi	s6, s6, 1
00d4fc: 00479713   slli	a4, a5, 4
00d500: 00e85733   srl	a4, a6, a4
00d504: 00c77733   and	a4, a4, a2
00d508: 0047979b   slliw	a5, a5, 4
00d50c: 00670733   add	a4, a4, t1
00d510: 00e231a3   sd	a4, 3(tp)
00d514: 0207879b   addiw	a5, a5, 32
00d518: 00f857b3   srl	a5, a6, a5
00d51c: 00c7f7b3   and	a5, a5, a2
00d520: 00f231a3   sd	a5, 3(tp)
00d524: 0015859b   addiw	a1, a1, 1
00d528: fcbe90e3   bne	t4, a1, -64
00d52c: 04068263   beqz	a3, 68
00d530: 00040813   mv	a6, s0
00d534: 00000593   li	a1, 0
00d538: 00000713   li	a4, 0
00d53c: 00177793   andi	a5, a4, 1
00d540: 00079863   bnez	a5, 16
00d544: 01c805b3   add	a1, a6, t3
00d548: 0005b583   ld	a1, 0(a1)
00d54c: 00180813   addi	a6, a6, 1
00d550: 0047979b   slliw	a5, a5, 4
00d554: 00f5d7b3   srl	a5, a1, a5
00d558: 00c7f7b3   and	a5, a5, a2
00d55c: 006787b3   add	a5, a5, t1
00d560: 00f231a3   sd	a5, 3(tp)
00d564: 01f231a3   sd	t6, 3(tp)
00d568: 0017071b   addiw	a4, a4, 1
00d56c: fce698e3   bne	a3, a4, -48
00d570: 00098a63   beqz	s3, 20
00d574: 00813783   ld	a5, 8(sp)
00d578: 006787b3   add	a5, a5, t1
00d57c: 00f231a3   sd	a5, 3(tp)
00d580: 011231a3   sd	a7, 3(tp)
00d584: 006907b3   add	a5, s2, t1
00d588: 08f23923   sd	a5, 146(tp)
00d58c: 09f23923   sd	t6, 146(tp)
00d590: 02923623   sd	s1, 44(tp)
00d594: 0010809b   addiw	ra, ra, 1
00d598: 01430333   add	t1, t1, s4
00d59c: eea0e2e3   bltu	ra, a0, -284
00d5a0: a91ff06f   j	-1392
00d5a4: 30226803   lwu	a6, 770(tp)
00d5a8: 0008081b   sext.w	a6, a6
00d5ac: 30226703   lwu	a4, 770(tp)
00d5b0: 30226783   lwu	a5, 770(tp)
00d5b4: 00e22023   sw	a4, 0(tp)
00d5b8: 00f22023   sw	a5, 0(tp)
00d5bc: 014e1593   slli	a1, t3, 20
00d5c0: 02081813   slli	a6, a6, 32
00d5c4: 020e9e93   slli	t4, t4, 32
00d5c8: 020f1f13   slli	t5, t5, 32
00d5cc: 0015e593   ori	a1, a1, 1
00d5d0: 00000793   li	a5, 0
00d5d4: 02085813   srli	a6, a6, 32
00d5d8: 020ede93   srli	t4, t4, 32
00d5dc: 03eb7e13   andi	t3, s6, 62
00d5e0: 020f5f13   srli	t5, t5, 32
00d5e4: 00400313   li	t1, 4
00d5e8: 02c23423   sd	a2, 40(tp)
00d5ec: 000e0863   beqz	t3, 16
00d5f0: 00df0733   add	a4, t5, a3
00d5f4: 00e231a3   sd	a4, 3(tp)
00d5f8: 011231a3   sd	a7, 3(tp)
00d5fc: 00d80733   add	a4, a6, a3
00d600: 08e23923   sd	a4, 146(tp)
00d604: 08623923   sd	t1, 146(tp)
00d608: 02b23623   sd	a1, 44(tp)
00d60c: 0017879b   addiw	a5, a5, 1
00d610: 01d686b3   add	a3, a3, t4
00d614: fca7eae3   bltu	a5, a0, -44
00d618: a19ff06f   j	-1512
00d61c: 30226903   lwu	s2, 770(tp)
00d620: 0009091b   sext.w	s2, s2
00d624: 30226703   lwu	a4, 770(tp)
00d628: 30226783   lwu	a5, 770(tp)
00d62c: 00e22023   sw	a4, 0(tp)
00d630: 00f22023   sw	a5, 0(tp)
00d634: 00816783   lwu	a5, 8(sp)
00d638: 01469693   slli	a3, a3, 20
00d63c: 0016e493   ori	s1, a3, 1
00d640: 02091913   slli	s2, s2, 32
00d644: 02099993   slli	s3, s3, 32
00d648: 00300e13   li	t3, 3
00d64c: 000106b7   lui	a3, 16
00d650: 00000093   li	ra, 0
00d654: 02095913   srli	s2, s2, 32
00d658: 0209d993   srli	s3, s3, 32
00d65c: 030e1e13   slli	t3, t3, 48
00d660: fff68693   addi	a3, a3, -1
00d664: 00400293   li	t0, 4
00d668: 03eb7a93   andi	s5, s6, 62
00d66c: 00f13423   sd	a5, 8(sp)
00d670: 02723423   sd	t2, 40(tp)
00d674: 040f0a63   beqz	t5, 84
00d678: 00000813   li	a6, 0
00d67c: 67000b13   li	s6, 1648
00d680: 00000613   li	a2, 0
00d684: 00167793   andi	a5, a2, 1
00d688: 00079863   bnez	a5, 16
00d68c: 01cb0733   add	a4, s6, t3
00d690: 00073803   ld	a6, 0(a4)
00d694: 001b0b13   addi	s6, s6, 1
00d698: 00479713   slli	a4, a5, 4
00d69c: 00e85733   srl	a4, a6, a4
00d6a0: 00d77733   and	a4, a4, a3
00d6a4: 0047979b   slliw	a5, a5, 4
00d6a8: 01f70733   add	a4, a4, t6
00d6ac: 00e231a3   sd	a4, 3(tp)
00d6b0: 0207879b   addiw	a5, a5, 32
00d6b4: 00f857b3   srl	a5, a6, a5
00d6b8: 00d7f7b3   and	a5, a5, a3
00d6bc: 00f231a3   sd	a5, 3(tp)
00d6c0: 0016061b   addiw	a2, a2, 1
00d6c4: fccf10e3   bne	t5, a2, -64
00d6c8: 040e8a63   beqz	t4, 84
00d6cc: 000a0b13   mv	s6, s4
00d6d0: 00000813   li	a6, 0
00d6d4: 00000613   li	a2, 0
00d6d8: 00167793   andi	a5, a2, 1
00d6dc: 00079863   bnez	a5, 16
00d6e0: 01cb0733   add	a4, s6, t3
00d6e4: 00073803   ld	a6, 0(a4)
00d6e8: 001b0b13   addi	s6, s6, 1
00d6ec: 00479713   slli	a4, a5, 4
00d6f0: 00e85733   srl	a4, a6, a4
00d6f4: 00d77733   and	a4, a4, a3
00d6f8: 0047979b   slliw	a5, a5, 4
00d6fc: 01170733   add	a4, a4, a7
00d700: 00e231a3   sd	a4, 3(tp)
00d704: 0207879b   addiw	a5, a5, 32
00d708: 00f857b3   srl	a5, a6, a5
00d70c: 00d7f7b3   and	a5, a5, a3
00d710: 00f231a3   sd	a5, 3(tp)
00d714: 0016061b   addiw	a2, a2, 1
00d718: fcce90e3   bne	t4, a2, -64
00d71c: 04058263   beqz	a1, 68
00d720: 00040813   mv	a6, s0
00d724: 00000613   li	a2, 0
00d728: 00000713   li	a4, 0
00d72c: 00177793   andi	a5, a4, 1
00d730: 00079863   bnez	a5, 16
00d734: 01c80633   add	a2, a6, t3
00d738: 00063603   ld	a2, 0(a2)
00d73c: 00180813   addi	a6, a6, 1
00d740: 0047979b   slliw	a5, a5, 4
00d744: 00f657b3   srl	a5, a2, a5
00d748: 00d7f7b3   and	a5, a5, a3
00d74c: 011787b3   add	a5, a5, a7
00d750: 00f231a3   sd	a5, 3(tp)
00d754: 005231a3   sd	t0, 3(tp)
00d758: 0017071b   addiw	a4, a4, 1
00d75c: fce598e3   bne	a1, a4, -48
00d760: 000a8a63   beqz	s5, 20
00d764: 00813783   ld	a5, 8(sp)
00d768: 011787b3   add	a5, a5, a7
00d76c: 00f231a3   sd	a5, 3(tp)
00d770: 006231a3   sd	t1, 3(tp)
00d774: 011907b3   add	a5, s2, a7
00d778: 08f23923   sd	a5, 146(tp)
00d77c: 00500793   li	a5, 5
00d780: 08f23923   sd	a5, 146(tp)
00d784: 029236a3   sd	s1, 45(tp)
00d788: 0010809b   addiw	ra, ra, 1
00d78c: 013888b3   add	a7, a7, s3
00d790: eea0e0e3   bltu	ra, a0, -288
00d794: 89dff06f   j	-1892
00d798: 30226803   lwu	a6, 770(tp)
00d79c: 0008081b   sext.w	a6, a6
00d7a0: 30226703   lwu	a4, 770(tp)
00d7a4: 30226783   lwu	a5, 770(tp)
00d7a8: 00e22023   sw	a4, 0(tp)
00d7ac: 00f22023   sw	a5, 0(tp)
00d7b0: 014e1613   slli	a2, t3, 20
00d7b4: 02081813   slli	a6, a6, 32
00d7b8: 020e9e93   slli	t4, t4, 32
00d7bc: 020f1f13   slli	t5, t5, 32
00d7c0: 00166613   ori	a2, a2, 1
00d7c4: 00000793   li	a5, 0
00d7c8: 02085813   srli	a6, a6, 32
00d7cc: 020ede93   srli	t4, t4, 32
00d7d0: 03eb7e13   andi	t3, s6, 62
00d7d4: 020f5f13   srli	t5, t5, 32
00d7d8: 00500893   li	a7, 5
00d7dc: 02d23423   sd	a3, 40(tp)
00d7e0: 000e0863   beqz	t3, 16
00d7e4: 00bf0733   add	a4, t5, a1
00d7e8: 00e231a3   sd	a4, 3(tp)
00d7ec: 006231a3   sd	t1, 3(tp)
00d7f0: 00b80733   add	a4, a6, a1
00d7f4: 08e23923   sd	a4, 146(tp)
00d7f8: 09123923   sd	a7, 146(tp)
00d7fc: 02c236a3   sd	a2, 45(tp)
00d800: 0017879b   addiw	a5, a5, 1
00d804: 01d585b3   add	a1, a1, t4
00d808: fca7eae3   bltu	a5, a0, -44
00d80c: 825ff06f   j	-2012
00d810: 30226583   lwu	a1, 770(tp)
00d814: 0005859b   sext.w	a1, a1
00d818: 30226703   lwu	a4, 770(tp)
00d81c: 30226783   lwu	a5, 770(tp)
00d820: 00e22023   sw	a4, 0(tp)
00d824: 00f22023   sw	a5, 0(tp)
00d828: 00010837   lui	a6, 16
00d82c: 02059593   slli	a1, a1, 32
00d830: 02029293   slli	t0, t0, 32
00d834: 020e9e93   slli	t4, t4, 32
00d838: 00000713   li	a4, 0
00d83c: 0205d593   srli	a1, a1, 32
00d840: 0202d293   srli	t0, t0, 32
00d844: fff80813   addi	a6, a6, -1
00d848: 00400f93   li	t6, 4
00d84c: 03eb7f13   andi	t5, s6, 62
00d850: 020ede93   srli	t4, t4, 32
00d854: 00300e13   li	t3, 3
00d858: 02c23423   sd	a2, 40(tp)
00d85c: 6708b783   ld	a5, 1648(a7)
00d860: 0107f7b3   and	a5, a5, a6
00d864: 00d787b3   add	a5, a5, a3
00d868: 00f231a3   sd	a5, 3(tp)
00d86c: 01f231a3   sd	t6, 3(tp)
00d870: 000f0863   beqz	t5, 16
00d874: 00de87b3   add	a5, t4, a3
00d878: 00f231a3   sd	a5, 3(tp)
00d87c: 006231a3   sd	t1, 3(tp)
00d880: 00d587b3   add	a5, a1, a3
00d884: 00f231a3   sd	a5, 3(tp)
00d888: 01c231a3   sd	t3, 3(tp)
00d88c: 0017071b   addiw	a4, a4, 1
00d890: 005686b3   add	a3, a3, t0
00d894: fca762e3   bltu	a4, a0, -60
00d898: f98ff06f   j	-2152
00d89c: 02029f93   slli	t6, t0, 32
00d8a0: 020fdf93   srli	t6, t6, 32
00d8a4: 021f8433   mul	s0, t6, ra
00d8a8: 01440433   add	s0, s0, s4
00d8ac: 00022ca3   sw	zero, 25(tp)
00d8b0: 31422003   lw	zero, 788(tp)
00d8b4: 01c68f3b   addw	t5, a3, t3
00d8b8: 009909bb   addw	s3, s2, s1
00d8bc: 0019999b   slliw	s3, s3, 1
00d8c0: 009f0f1b   addiw	t5, t5, 9
00d8c4: 013f0f3b   addw	t5, t5, s3
00d8c8: c00109b7   lui	s3, 786448
00d8cc: fff98993   addi	s3, s3, -1
00d8d0: 00e9f9b3   and	s3, s3, a4
00d8d4: 010f1f1b   slliw	t5, t5, 16
00d8d8: 01e9e9b3   or	s3, s3, t5
00d8dc: 01322023   sw	s3, 0(tp)
00d8e0: 00f22023   sw	a5, 0(tp)
00d8e4: 00a22023   sw	a0, 0(tp)
00d8e8: 01522023   sw	s5, 0(tp)
00d8ec: 03012783   lw	a5, 48(sp)
00d8f0: 00f22023   sw	a5, 0(tp)
00d8f4: 01d22023   sw	t4, 0(tp)
00d8f8: 020ed793   srli	a5, t4, 32
00d8fc: 00f22023   sw	a5, 0(tp)
00d900: 04012783   lw	a5, 64(sp)
00d904: 00f22023   sw	a5, 0(tp)
00d908: 04c12783   lw	a5, 76(sp)
00d90c: 00f22023   sw	a5, 0(tp)
00d910: 00300793   li	a5, 3
00d914: 03079793   slli	a5, a5, 48
00d918: 00020f13   mv	t5, tp
00d91c: 67078793   addi	a5, a5, 1648
00d920: 0340006f   j	52
00d924: 30226503   lwu	a0, 770(tp)
00d928: 30226a03   lwu	s4, 770(tp)
00d92c: 30226983   lwu	s3, 770(tp)
00d930: 02051513   slli	a0, a0, 32
00d934: 02099713   slli	a4, s3, 32
00d938: 02055513   srli	a0, a0, 32
00d93c: 00a76733   or	a4, a4, a0
00d940: 00e7b023   sd	a4, 0(a5)
00d944: 1e0f2fa3   sw	zero, 511(t5)
00d948: 01422023   sw	s4, 0(tp)
00d94c: 01322023   sw	s3, 0(tp)
00d950: 00178793   addi	a5, a5, 1
00d954: 9907871b   addiw	a4, a5, -1648
00d958: fd2766e3   bltu	a4, s2, -52
00d95c: 00300793   li	a5, 3
00d960: 03079793   slli	a5, a5, 48
00d964: 67078793   addi	a5, a5, 1648
00d968: 67090a13   addi	s4, s2, 1648
00d96c: 00000713   li	a4, 0
00d970: 00f90533   add	a0, s2, a5
00d974: 0380006f   j	56
00d978: 30226a83   lwu	s5, 770(tp)
00d97c: 30226983   lwu	s3, 770(tp)
00d980: 30226903   lwu	s2, 770(tp)
00d984: 020a9a93   slli	s5, s5, 32
00d988: 02091793   slli	a5, s2, 32
00d98c: 020ada93   srli	s5, s5, 32
00d990: 0157e7b3   or	a5, a5, s5
00d994: 00e50ab3   add	s5, a0, a4
00d998: 00fab023   sd	a5, 0(s5)
00d99c: 1e0f2fa3   sw	zero, 511(t5)
00d9a0: 01322023   sw	s3, 0(tp)
00d9a4: 01222023   sw	s2, 0(tp)
00d9a8: 00170713   addi	a4, a4, 1
00d9ac: 0007079b   sext.w	a5, a4
00d9b0: fc97e4e3   bltu	a5, s1, -56
00d9b4: 00300993   li	s3, 3
00d9b8: 014484b3   add	s1, s1, s4
00d9bc: 03099993   slli	s3, s3, 48
00d9c0: 00000793   li	a5, 0
00d9c4: 013489b3   add	s3, s1, s3
00d9c8: 0200006f   j	32
00d9cc: 30226903   lwu	s2, 770(tp)
00d9d0: 30226703   lwu	a4, 770(tp)
00d9d4: 00f98533   add	a0, s3, a5
00d9d8: 01252023   sw	s2, 0(a0)
00d9dc: 1e0f2fa3   sw	zero, 511(t5)
00d9e0: 00e22023   sw	a4, 0(tp)
00d9e4: 00178793   addi	a5, a5, 1
00d9e8: 0007871b   sext.w	a4, a5
00d9ec: ffc760e3   bltu	a4, t3, -32
00d9f0: 00000793   li	a5, 0
00d9f4: 10f68c63   beq	a3, a5, 280
00d9f8: 30226703   lwu	a4, 770(tp)
00d9fc: 00e22023   sw	a4, 0(tp)
00da00: 0017879b   addiw	a5, a5, 1
00da04: ff1ff06f   j	-16
00da08: 02089693   slli	a3, a7, 32
00da0c: 0206d693   srli	a3, a3, 32
00da10: 03d68f33   mul	t5, a3, t4
00da14: 001f0f33   add	t5, t5, ra
00da18: 00022ca3   sw	zero, 25(tp)
00da1c: 31422003   lw	zero, 788(tp)
00da20: c00100b7   lui	ra, 786448
00da24: 00a2899b   addiw	s3, t0, 10
00da28: fff08093   addi	ra, ra, -1
00da2c: 00e0f0b3   and	ra, ra, a4
00da30: 0109971b   slliw	a4, s3, 16
00da34: 00e0e0b3   or	ra, ra, a4
00da38: 00122023   sw	ra, 0(tp)
00da3c: 00f22023   sw	a5, 0(tp)
00da40: 00a22023   sw	a0, 0(tp)
00da44: 01522023   sw	s5, 0(tp)
00da48: 00922023   sw	s1, 0(tp)
00da4c: 00822023   sw	s0, 0(tp)
00da50: 02045413   srli	s0, s0, 32
00da54: 00822023   sw	s0, 0(tp)
00da58: 01012783   lw	a5, 16(sp)
00da5c: 00f22023   sw	a5, 0(tp)
00da60: 01812783   lw	a5, 24(sp)
00da64: 00f22023   sw	a5, 0(tp)
00da68: 30226703   lwu	a4, 770(tp)
00da6c: 30226783   lwu	a5, 770(tp)
00da70: 66efa823   sw	a4, 1648(t6)
00da74: 1e022fa3   sw	zero, 511(tp)
00da78: 00f22023   sw	a5, 0(tp)
00da7c: 00000793   li	a5, 0
00da80: 36f28463   beq	t0, a5, 872
00da84: 30226703   lwu	a4, 770(tp)
00da88: 00e22023   sw	a4, 0(tp)
00da8c: 0017879b   addiw	a5, a5, 1
00da90: ff1ff06f   j	-16
00da94: 02081693   slli	a3, a6, 32
00da98: 0206d693   srli	a3, a3, 32
00da9c: 03c68f33   mul	t5, a3, t3
00daa0: 001f0f33   add	t5, t5, ra
00daa4: 00022ca3   sw	zero, 25(tp)
00daa8: 31422003   lw	zero, 788(tp)
00daac: c00100b7   lui	ra, 786448
00dab0: 0096099b   addiw	s3, a2, 9
00dab4: fff08093   addi	ra, ra, -1
00dab8: 00e0f0b3   and	ra, ra, a4
00dabc: 0109971b   slliw	a4, s3, 16
00dac0: 00e0e0b3   or	ra, ra, a4
00dac4: 00122023   sw	ra, 0(tp)
00dac8: 00f22023   sw	a5, 0(tp)
00dacc: 00a22023   sw	a0, 0(tp)
00dad0: 01522023   sw	s5, 0(tp)
00dad4: 01222023   sw	s2, 0(tp)
00dad8: 00522023   sw	t0, 0(tp)
00dadc: 0202d293   srli	t0, t0, 32
00dae0: 00522023   sw	t0, 0(tp)
00dae4: 01012783   lw	a5, 16(sp)
00dae8: 00f22023   sw	a5, 0(tp)
00daec: 01812783   lw	a5, 24(sp)
00daf0: 00f22023   sw	a5, 0(tp)
00daf4: 00000793   li	a5, 0
00daf8: 4cf60663   beq	a2, a5, 1228
00dafc: 30226703   lwu	a4, 770(tp)
00db00: 00e22023   sw	a4, 0(tp)
00db04: 0017879b   addiw	a5, a5, 1
00db08: ff1ff06f   j	-16
00db0c: 30226783   lwu	a5, 770(tp)
00db10: 0007879b   sext.w	a5, a5
00db14: 30226683   lwu	a3, 770(tp)
00db18: 30226703   lwu	a4, 770(tp)
00db1c: 00d22023   sw	a3, 0(tp)
00db20: 01523683   ld	a3, 21(tp)
00db24: 04d13023   sd	a3, 64(sp)
00db28: 08126683   lwu	a3, 129(tp)
00db2c: 04d12623   sw	a3, 76(sp)
00db30: 00100693   li	a3, 1
00db34: 0ad23ea3   sd	a3, 189(tp)
00db38: 01813683   ld	a3, 24(sp)
00db3c: 00d23b23   sd	a3, 22(tp)
00db40: 1e023fa3   sd	zero, 511(tp)
00db44: 1e023fa3   sd	zero, 511(tp)
00db48: 00200693   li	a3, 2
00db4c: 00d23d23   sd	a3, 26(tp)
00db50: 1e023fa3   sd	zero, 511(tp)
00db54: 1e023fa3   sd	zero, 511(tp)
00db58: 00e22023   sw	a4, 0(tp)
00db5c: 02079793   slli	a5, a5, 32
00db60: 01013703   ld	a4, 16(sp)
00db64: 00813683   ld	a3, 8(sp)
00db68: 0207d793   srli	a5, a5, 32
00db6c: 00f13c23   sd	a5, 24(sp)
00db70: 03eb7793   andi	a5, s6, 62
00db74: 00f13423   sd	a5, 8(sp)
00db78: 02816783   lwu	a5, 40(sp)
00db7c: 00c68693   addi	a3, a3, 12
00db80: 01471713   slli	a4, a4, 20
00db84: 00176713   ori	a4, a4, 1
00db88: 00d13823   sd	a3, 16(sp)
00db8c: 00300513   li	a0, 3
00db90: 000106b7   lui	a3, 16
00db94: 02613823   sd	t1, 48(sp)
00db98: 000d8993   mv	s3, s11
00db9c: 00000f13   li	t5, 0
00dba0: 00400e13   li	t3, 4
00dba4: 00100913   li	s2, 1
00dba8: 03051513   slli	a0, a0, 48
00dbac: fff68693   addi	a3, a3, -1
00dbb0: 02f13423   sd	a5, 40(sp)
00dbb4: 00070313   mv	t1, a4
00dbb8: 047ff663   bgeu	t6, t2, 76
00dbbc: 3ff2f793   andi	a5, t0, 1023
00dbc0: 02079a63   bnez	a5, 52
00dbc4: 41f38fb3   sub	t6, t2, t6
00dbc8: 3ff00793   li	a5, 1023
00dbcc: 01f7f463   bgeu	a5, t6, 8
00dbd0: 40000f93   li	t6, 1024
00dbd4: 03813783   ld	a5, 56(sp)
00dbd8: 002f9f9b   slliw	t6, t6, 2
00dbdc: 020f9713   slli	a4, t6, 32
00dbe0: 6387b783   ld	a5, 1592(a5)
00dbe4: 02075713   srli	a4, a4, 32
00dbe8: 00f70733   add	a4, a4, a5
00dbec: 00e23123   sd	a4, 2(tp)
00dbf0: 01223123   sd	s2, 2(tp)
00dbf4: 00823123   sd	s0, 2(tp)
00dbf8: 01c23123   sd	t3, 2(tp)
00dbfc: 00140433   add	s0, s0, ra
00dc00: 0012829b   addiw	t0, t0, 1
00dc04: 02013783   ld	a5, 32(sp)
00dc08: 02f23423   sd	a5, 40(tp)
00dc0c: 04088a63   beqz	a7, 84
00dc10: 00000a93   li	s5, 0
00dc14: 67000b13   li	s6, 1648
00dc18: 00000f93   li	t6, 0
00dc1c: 001ff793   andi	a5, t6, 1
00dc20: 00079863   bnez	a5, 16
00dc24: 00ab0733   add	a4, s6, a0
00dc28: 00073a83   ld	s5, 0(a4)
00dc2c: 001b0b13   addi	s6, s6, 1
00dc30: 00479713   slli	a4, a5, 4
00dc34: 00ead733   srl	a4, s5, a4
00dc38: 00d77733   and	a4, a4, a3
00dc3c: 0047979b   slliw	a5, a5, 4
00dc40: 01d70733   add	a4, a4, t4
00dc44: 00e231a3   sd	a4, 3(tp)
00dc48: 0207879b   addiw	a5, a5, 32
00dc4c: 00fad7b3   srl	a5, s5, a5
00dc50: 00d7f7b3   and	a5, a5, a3
00dc54: 00f231a3   sd	a5, 3(tp)
00dc58: 001f8f9b   addiw	t6, t6, 1
00dc5c: fdf890e3   bne	a7, t6, -64
00dc60: 04080a63   beqz	a6, 84
00dc64: 000a0b13   mv	s6, s4
00dc68: 00000a93   li	s5, 0
00dc6c: 00000f93   li	t6, 0
00dc70: 001ff793   andi	a5, t6, 1
00dc74: 00079863   bnez	a5, 16
00dc78: 00ab0733   add	a4, s6, a0
00dc7c: 00073a83   ld	s5, 0(a4)
00dc80: 001b0b13   addi	s6, s6, 1
00dc84: 00479713   slli	a4, a5, 4
00dc88: 00ead733   srl	a4, s5, a4
00dc8c: 00d77733   and	a4, a4, a3
00dc90: 0047979b   slliw	a5, a5, 4
00dc94: 00c70733   add	a4, a4, a2
00dc98: 00e231a3   sd	a4, 3(tp)
00dc9c: 0207879b   addiw	a5, a5, 32
00dca0: 00fad7b3   srl	a5, s5, a5
00dca4: 00d7f7b3   and	a5, a5, a3
00dca8: 00f231a3   sd	a5, 3(tp)
00dcac: 001f8f9b   addiw	t6, t6, 1
00dcb0: fdf810e3   bne	a6, t6, -64
00dcb4: 04058263   beqz	a1, 68
00dcb8: 00048a93   mv	s5, s1
00dcbc: 00000f93   li	t6, 0
00dcc0: 00000713   li	a4, 0
00dcc4: 00177793   andi	a5, a4, 1
00dcc8: 00079863   bnez	a5, 16
00dccc: 00aa8fb3   add	t6, s5, a0
00dcd0: 000fbf83   ld	t6, 0(t6)
00dcd4: 001a8a93   addi	s5, s5, 1
00dcd8: 0047979b   slliw	a5, a5, 4
00dcdc: 00ffd7b3   srl	a5, t6, a5
00dce0: 00d7f7b3   and	a5, a5, a3
00dce4: 00c787b3   add	a5, a5, a2
00dce8: 00f231a3   sd	a5, 3(tp)
00dcec: 01c231a3   sd	t3, 3(tp)
00dcf0: 0017071b   addiw	a4, a4, 1
00dcf4: fce598e3   bne	a1, a4, -48
00dcf8: 00813783   ld	a5, 8(sp)
00dcfc: 00078c63   beqz	a5, 24
00dd00: 02813783   ld	a5, 40(sp)
00dd04: 00c787b3   add	a5, a5, a2
00dd08: 00f231a3   sd	a5, 3(tp)
00dd0c: 03013783   ld	a5, 48(sp)
00dd10: 00f231a3   sd	a5, 3(tp)
00dd14: 3fff7793   andi	a5, t5, 1023
00dd18: 00079463   bnez	a5, 8
00dd1c: 30226783   lwu	a5, 770(tp)
00dd20: 30226a83   lwu	s5, 770(tp)
00dd24: 30226783   lwu	a5, 770(tp)
00dd28: 30226703   lwu	a4, 770(tp)
00dd2c: 30226f83   lwu	t6, 770(tp)
00dd30: 020a9a93   slli	s5, s5, 32
00dd34: 020ada93   srli	s5, s5, 32
00dd38: 02079793   slli	a5, a5, 32
00dd3c: 0157e7b3   or	a5, a5, s5
00dd40: 06f239a3   sd	a5, 115(tp)
00dd44: 07323a83   ld	s5, 115(tp)
00dd48: 1f026783   lwu	a5, 496(tp)
00dd4c: 02079793   slli	a5, a5, 32
00dd50: 0207d793   srli	a5, a5, 32
00dd54: 00f23e23   sd	a5, 28(tp)
00dd58: 01523ea3   sd	s5, 29(tp)
00dd5c: 020225a3   sw	zero, 43(tp)
00dd60: 02e227a3   sw	a4, 47(tp)
00dd64: 002fda9b   srliw	s5, t6, 2
00dd68: 00dfd71b   srliw	a4, t6, 13
00dd6c: 003fd79b   srliw	a5, t6, 3
00dd70: 001afa93   andi	s5, s5, 1
00dd74: 01f7c7b3   xor	a5, a5, t6
00dd78: 00377713   andi	a4, a4, 3
00dd7c: 00eae733   or	a4, s5, a4
00dd80: 0017f793   andi	a5, a5, 1
00dd84: 00f767b3   or	a5, a4, a5
00dd88: 00100713   li	a4, 1
00dd8c: 00f7173b   sllw	a4, a4, a5
00dd90: 28f9aa23   sw	a5, 660(s3)
00dd94: 00377713   andi	a4, a4, 3
00dd98: 00e22e23   sw	a4, 28(tp)
00dd9c: 1ee22823   sw	a4, 496(tp)
00dda0: 01013783   ld	a5, 16(sp)
00dda4: 00c787b3   add	a5, a5, a2
00dda8: 00f231a3   sd	a5, 3(tp)
00ddac: 012231a3   sd	s2, 3(tp)
00ddb0: 01813783   ld	a5, 24(sp)
00ddb4: 00c787b3   add	a5, a5, a2
00ddb8: 08f23923   sd	a5, 146(tp)
00ddbc: 00500793   li	a5, 5
00ddc0: 08f23923   sd	a5, 146(tp)
00ddc4: 026236a3   sd	t1, 45(tp)
00ddc8: 001f0f1b   addiw	t5, t5, 1
00ddcc: 020f1793   slli	a5, t5, 32
00ddd0: 0207d793   srli	a5, a5, 32
00ddd4: 00160633   add	a2, a2, ra
00ddd8: 3877f663   bgeu	a5, t2, 908
00dddc: 02029f93   slli	t6, t0, 32
00dde0: 020fdf93   srli	t6, t6, 32
00dde4: dd5ff06f   j	-556
00dde8: 30226083   lwu	ra, 770(tp)
00ddec: 0000809b   sext.w	ra, ra
00ddf0: 30226703   lwu	a4, 770(tp)
00ddf4: 30226783   lwu	a5, 770(tp)
00ddf8: 00e22023   sw	a4, 0(tp)
00ddfc: 01523703   ld	a4, 21(tp)
00de00: 00e13823   sd	a4, 16(sp)
00de04: 08126703   lwu	a4, 129(tp)
00de08: 00e12c23   sw	a4, 24(sp)
00de0c: 00100713   li	a4, 1
00de10: 0ae23ea3   sd	a4, 189(tp)
00de14: 00723b23   sd	t2, 22(tp)
00de18: 1e023fa3   sd	zero, 511(tp)
00de1c: 1e023fa3   sd	zero, 511(tp)
00de20: 00200713   li	a4, 2
00de24: 00e23d23   sd	a4, 26(tp)
00de28: 1e023fa3   sd	zero, 511(tp)
00de2c: 1e023fa3   sd	zero, 511(tp)
00de30: 00f22023   sw	a5, 0(tp)
00de34: 00816783   lwu	a5, 8(sp)
00de38: 01491393   slli	t2, s2, 20
00de3c: 02009093   slli	ra, ra, 32
00de40: 000104b7   lui	s1, 16
00de44: 000d8a13   mv	s4, s11
00de48: 0013e393   ori	t2, t2, 1
00de4c: 00000713   li	a4, 0
00de50: 00c58513   addi	a0, a1, 12
00de54: 0200d093   srli	ra, ra, 32
00de58: 00400293   li	t0, 4
00de5c: 00100413   li	s0, 1
00de60: fff48493   addi	s1, s1, -1
00de64: 03eb7a93   andi	s5, s6, 62
00de68: 00f13423   sd	a5, 8(sp)
00de6c: 00100993   li	s3, 1
00de70: 00500913   li	s2, 5
00de74: 05c6f463   bgeu	a3, t3, 72
00de78: 3ff8f793   andi	a5, a7, 1023
00de7c: 02079863   bnez	a5, 48
00de80: 40de06b3   sub	a3, t3, a3
00de84: 3ff00793   li	a5, 1023
00de88: 00d7f463   bgeu	a5, a3, 8
00de8c: 40000693   li	a3, 1024
00de90: 638fb583   ld	a1, 1592(t6)
00de94: 0026979b   slliw	a5, a3, 2
00de98: 02079793   slli	a5, a5, 32
00de9c: 0207d793   srli	a5, a5, 32
00dea0: 00b787b3   add	a5, a5, a1
00dea4: 00f23123   sd	a5, 2(tp)
00dea8: 00823123   sd	s0, 2(tp)
00deac: 01e23123   sd	t5, 2(tp)
00deb0: 00523123   sd	t0, 2(tp)
00deb4: 01df0f33   add	t5, t5, t4
00deb8: 0018889b   addiw	a7, a7, 1
00debc: 03023423   sd	a6, 40(tp)
00dec0: 670fb783   ld	a5, 1648(t6)
00dec4: 0097f7b3   and	a5, a5, s1
00dec8: 00c787b3   add	a5, a5, a2
00decc: 00f231a3   sd	a5, 3(tp)
00ded0: 005231a3   sd	t0, 3(tp)
00ded4: 000a8a63   beqz	s5, 20
00ded8: 00813783   ld	a5, 8(sp)
00dedc: 00c787b3   add	a5, a5, a2
00dee0: 00f231a3   sd	a5, 3(tp)
00dee4: 006231a3   sd	t1, 3(tp)
00dee8: 3ff77793   andi	a5, a4, 1023
00deec: 00079463   bnez	a5, 8
00def0: 30226783   lwu	a5, 770(tp)
00def4: 30226b03   lwu	s6, 770(tp)
00def8: 30226783   lwu	a5, 770(tp)
00defc: 30226683   lwu	a3, 770(tp)
00df00: 30226583   lwu	a1, 770(tp)
00df04: 020b1b13   slli	s6, s6, 32
00df08: 020b5b13   srli	s6, s6, 32
00df0c: 02079793   slli	a5, a5, 32
00df10: 0167e7b3   or	a5, a5, s6
00df14: 06f239a3   sd	a5, 115(tp)
00df18: 07323b03   ld	s6, 115(tp)
00df1c: 1f026783   lwu	a5, 496(tp)
00df20: 02079793   slli	a5, a5, 32
00df24: 0207d793   srli	a5, a5, 32
00df28: 00f23e23   sd	a5, 28(tp)
00df2c: 01623ea3   sd	s6, 29(tp)
00df30: 020225a3   sw	zero, 43(tp)
00df34: 02d227a3   sw	a3, 47(tp)
00df38: 0025d79b   srliw	a5, a1, 2
00df3c: 00d5db1b   srliw	s6, a1, 13
00df40: 0035d69b   srliw	a3, a1, 3
00df44: 003b7b13   andi	s6, s6, 3
00df48: 00b6c6b3   xor	a3, a3, a1
00df4c: 0017f793   andi	a5, a5, 1
00df50: 0167e7b3   or	a5, a5, s6
00df54: 0016f693   andi	a3, a3, 1
00df58: 00d7e7b3   or	a5, a5, a3
00df5c: 00f996bb   sllw	a3, s3, a5
00df60: 28fa2a23   sw	a5, 660(s4)
00df64: 0036f793   andi	a5, a3, 3
00df68: 00f22e23   sw	a5, 28(tp)
00df6c: 1ef22823   sw	a5, 496(tp)
00df70: 00c507b3   add	a5, a0, a2
00df74: 00f231a3   sd	a5, 3(tp)
00df78: 008231a3   sd	s0, 3(tp)
00df7c: 00c087b3   add	a5, ra, a2
00df80: 08f23923   sd	a5, 146(tp)
00df84: 09223923   sd	s2, 146(tp)
00df88: 027236a3   sd	t2, 45(tp)
00df8c: 0017071b   addiw	a4, a4, 1
00df90: 02071793   slli	a5, a4, 32
00df94: 0207d793   srli	a5, a5, 32
00df98: 01d60633   add	a2, a2, t4
00df9c: 01c7f863   bgeu	a5, t3, 16
00dfa0: 02089693   slli	a3, a7, 32
00dfa4: 0206d693   srli	a3, a3, 32
00dfa8: ecdff06f   j	-308
00dfac: 01013783   ld	a5, 16(sp)
00dfb0: 00f23d23   sd	a5, 26(tp)
00dfb4: 01816783   lwu	a5, 24(sp)
00dfb8: 00f23aa3   sd	a5, 21(tp)
00dfbc: 0a023ea3   sd	zero, 189(tp)
00dfc0: 870ff06f   j	-3984
00dfc4: 30226283   lwu	t0, 770(tp)
00dfc8: 0002829b   sext.w	t0, t0
00dfcc: 30226703   lwu	a4, 770(tp)
00dfd0: 30226783   lwu	a5, 770(tp)
00dfd4: 00e22023   sw	a4, 0(tp)
00dfd8: 01523703   ld	a4, 21(tp)
00dfdc: 00e13823   sd	a4, 16(sp)
00dfe0: 08126703   lwu	a4, 129(tp)
00dfe4: 00e12c23   sw	a4, 24(sp)
00dfe8: 00100713   li	a4, 1
00dfec: 0ae23ea3   sd	a4, 189(tp)
00dff0: 00723b23   sd	t2, 22(tp)
00dff4: 1e023fa3   sd	zero, 511(tp)
00dff8: 1e023fa3   sd	zero, 511(tp)
00dffc: 00200713   li	a4, 2
00e000: 00e23d23   sd	a4, 26(tp)
00e004: 1e023fa3   sd	zero, 511(tp)
00e008: 1e023fa3   sd	zero, 511(tp)
00e00c: 00f22023   sw	a5, 0(tp)
00e010: 00816a83   lwu	s5, 8(sp)
00e014: 014f9f93   slli	t6, t6, 20
00e018: 02029293   slli	t0, t0, 32
00e01c: 00c48513   addi	a0, s1, 12
00e020: 000d8993   mv	s3, s11
00e024: 001fef93   ori	t6, t6, 1
00e028: 00000713   li	a4, 0
00e02c: 0202d293   srli	t0, t0, 32
00e030: 00400a13   li	s4, 4
00e034: 00100393   li	t2, 1
00e038: 03eb7913   andi	s2, s6, 62
00e03c: 00100493   li	s1, 1
00e040: 00500093   li	ra, 5
00e044: 0516f463   bgeu	a3, a7, 72
00e048: 3ff87793   andi	a5, a6, 1023
00e04c: 02079863   bnez	a5, 48
00e050: 40d886b3   sub	a3, a7, a3
00e054: 3ff00793   li	a5, 1023
00e058: 00d7f463   bgeu	a5, a3, 8
00e05c: 40000693   li	a3, 1024
00e060: 63843603   ld	a2, 1592(s0)
00e064: 0026979b   slliw	a5, a3, 2
00e068: 02079793   slli	a5, a5, 32
00e06c: 0207d793   srli	a5, a5, 32
00e070: 00c787b3   add	a5, a5, a2
00e074: 00f23123   sd	a5, 2(tp)
00e078: 00723123   sd	t2, 2(tp)
00e07c: 01e23123   sd	t5, 2(tp)
00e080: 01423123   sd	s4, 2(tp)
00e084: 01cf0f33   add	t5, t5, t3
00e088: 0018081b   addiw	a6, a6, 1
00e08c: 03d23423   sd	t4, 40(tp)
00e090: 00090863   beqz	s2, 16
00e094: 00ba87b3   add	a5, s5, a1
00e098: 00f231a3   sd	a5, 3(tp)
00e09c: 006231a3   sd	t1, 3(tp)
00e0a0: 3ff77793   andi	a5, a4, 1023
00e0a4: 00079463   bnez	a5, 8
00e0a8: 30226783   lwu	a5, 770(tp)
00e0ac: 30226603   lwu	a2, 770(tp)
00e0b0: 30226783   lwu	a5, 770(tp)
00e0b4: 30226683   lwu	a3, 770(tp)
00e0b8: 30226b03   lwu	s6, 770(tp)
00e0bc: 02061613   slli	a2, a2, 32
00e0c0: 02065613   srli	a2, a2, 32
00e0c4: 02079793   slli	a5, a5, 32
00e0c8: 00c7e7b3   or	a5, a5, a2
00e0cc: 06f239a3   sd	a5, 115(tp)
00e0d0: 07323603   ld	a2, 115(tp)
00e0d4: 1f026783   lwu	a5, 496(tp)
00e0d8: 02079793   slli	a5, a5, 32
00e0dc: 0207d793   srli	a5, a5, 32
00e0e0: 00f23e23   sd	a5, 28(tp)
00e0e4: 00c23ea3   sd	a2, 29(tp)
00e0e8: 020225a3   sw	zero, 43(tp)
00e0ec: 02d227a3   sw	a3, 47(tp)
00e0f0: 002b579b   srliw	a5, s6, 2
00e0f4: 00db561b   srliw	a2, s6, 13
00e0f8: 003b569b   srliw	a3, s6, 3
00e0fc: 00367613   andi	a2, a2, 3
00e100: 0166c6b3   xor	a3, a3, s6
00e104: 0017f793   andi	a5, a5, 1
00e108: 00c7e7b3   or	a5, a5, a2
00e10c: 0016f693   andi	a3, a3, 1
00e110: 00d7e7b3   or	a5, a5, a3
00e114: 00f496bb   sllw	a3, s1, a5
00e118: 28f9aa23   sw	a5, 660(s3)
00e11c: 0036f793   andi	a5, a3, 3
00e120: 00f22e23   sw	a5, 28(tp)
00e124: 1ef22823   sw	a5, 496(tp)
00e128: 00b507b3   add	a5, a0, a1
00e12c: 00f231a3   sd	a5, 3(tp)
00e130: 007231a3   sd	t2, 3(tp)
00e134: 00b287b3   add	a5, t0, a1
00e138: 08f23923   sd	a5, 146(tp)
00e13c: 08123923   sd	ra, 146(tp)
00e140: 03f236a3   sd	t6, 45(tp)
00e144: 0017071b   addiw	a4, a4, 1
00e148: 02071793   slli	a5, a4, 32
00e14c: 0207d793   srli	a5, a5, 32
00e150: 01c585b3   add	a1, a1, t3
00e154: e517fce3   bgeu	a5, a7, -424
00e158: 02081693   slli	a3, a6, 32
00e15c: 0206d693   srli	a3, a3, 32
00e160: ee5ff06f   j	-284
00e164: 04013783   ld	a5, 64(sp)
00e168: 00f23d23   sd	a5, 26(tp)
00e16c: 04c16783   lwu	a5, 76(sp)
00e170: 00f23aa3   sd	a5, 21(tp)
00e174: 0a023ea3   sd	zero, 189(tp)
00e178: eb9fe06f   j	-4424
00e17c: 0033069b   addiw	a3, t1, 3
00e180: 00158e13   addi	t3, a1, 1
00e184: 00188413   addi	s0, a7, 1
00e188: 00180f93   addi	t6, a6, 1
00e18c: 4026d69b   sraiw	a3, a3, 2
00e190: 0012929b   slliw	t0, t0, 1
00e194: 001e5e13   srli	t3, t3, 1
00e198: 00145913   srli	s2, s0, 1
00e19c: 001fd493   srli	s1, t6, 1
00e1a0: 0016969b   slliw	a3, a3, 1
00e1a4: 891fd06f   j	-10096
00e1a8: 0033061b   addiw	a2, t1, 3
00e1ac: 00300813   li	a6, 3
00e1b0: 4026561b   sraiw	a2, a2, 2
00e1b4: 02d806bb   mulw	a3, a6, a3
00e1b8: 0306063b   mulw	a2, a2, a6
00e1bc: b55fd06f   j	-9388
00e1c0: 0033089b   addiw	a7, t1, 3
00e1c4: 00300e13   li	t3, 3
00e1c8: 4028d89b   sraiw	a7, a7, 2
00e1cc: 028e043b   mulw	s0, t3, s0
00e1d0: 03c888bb   mulw	a7, a7, t3
00e1d4: a15fe06f   j	-5612
00e1d8: 0033061b   addiw	a2, t1, 3
00e1dc: 4026561b   sraiw	a2, a2, 2
00e1e0: 0016969b   slliw	a3, a3, 1
00e1e4: 0016161b   slliw	a2, a2, 1
00e1e8: b29fd06f   j	-9432
00e1ec: 0033029b   addiw	t0, t1, 3
00e1f0: 00300813   li	a6, 3
00e1f4: 4022d29b   sraiw	t0, t0, 2
00e1f8: 02d806bb   mulw	a3, a6, a3
00e1fc: 030282bb   mulw	t0, t0, a6
00e200: 9adfd06f   j	-9812
00e204: 0033029b   addiw	t0, t1, 3
00e208: 4022d29b   sraiw	t0, t0, 2
00e20c: 0016969b   slliw	a3, a3, 1
00e210: 0012929b   slliw	t0, t0, 1
00e214: 999fd06f   j	-9832
00e218: 00330e1b   addiw	t3, t1, 3
00e21c: 00300693   li	a3, 3
00e220: 402e5f9b   sraiw	t6, t3, 2
00e224: 00188913   addi	s2, a7, 1
00e228: 00158e13   addi	t3, a1, 1
00e22c: 00180493   addi	s1, a6, 1
00e230: 025682bb   mulw	t0, a3, t0
00e234: 001e5e13   srli	t3, t3, 1
00e238: 00195913   srli	s2, s2, 1
00e23c: 0014d493   srli	s1, s1, 1
00e240: 02df86bb   mulw	a3, t6, a3
00e244: ff0fd06f   j	-10256
00e248: 0013039b   addiw	t2, t1, 1
00e24c: 00300a13   li	s4, 3
00e250: 4013d39b   sraiw	t2, t2, 1
00e254: 00168913   addi	s2, a3, 1
00e258: 001f0293   addi	t0, t5, 1
00e25c: 001e8093   addi	ra, t4, 1
00e260: 028a043b   mulw	s0, s4, s0
00e264: 00195913   srli	s2, s2, 1
00e268: 0012d293   srli	t0, t0, 1
00e26c: 0010d093   srli	ra, ra, 1
00e270: 034383bb   mulw	t2, t2, s4
00e274: 980fe06f   j	-7808
00e278: 00168913   addi	s2, a3, 1
00e27c: 001f0293   addi	t0, t5, 1
00e280: 001e8093   addi	ra, t4, 1
00e284: 0013039b   addiw	t2, t1, 1
00e288: 0014141b   slliw	s0, s0, 1
00e28c: 00195913   srli	s2, s2, 1
00e290: 0012d293   srli	t0, t0, 1
00e294: 0010d093   srli	ra, ra, 1
00e298: 03e3f393   andi	t2, t2, 62
00e29c: 958fe06f   j	-7848
00e2a0: 00330e1b   addiw	t3, t1, 3
00e2a4: 00300913   li	s2, 3
00e2a8: 402e5e1b   sraiw	t3, t3, 2
00e2ac: 00158093   addi	ra, a1, 1
00e2b0: 001f0293   addi	t0, t5, 1
00e2b4: 001e8413   addi	s0, t4, 1
00e2b8: 027903bb   mulw	t2, s2, t2
00e2bc: 0010d093   srli	ra, ra, 1
00e2c0: 0012d293   srli	t0, t0, 1
00e2c4: 00145413   srli	s0, s0, 1
00e2c8: 032e0e3b   mulw	t3, t3, s2
00e2cc: f05fd06f   j	-8444
00e2d0: 00330e1b   addiw	t3, t1, 3
00e2d4: 00158093   addi	ra, a1, 1
00e2d8: 001f0293   addi	t0, t5, 1
00e2dc: 001e8413   addi	s0, t4, 1
00e2e0: 402e5e1b   sraiw	t3, t3, 2
00e2e4: 0013939b   slliw	t2, t2, 1
00e2e8: 0010d093   srli	ra, ra, 1
00e2ec: 0012d293   srli	t0, t0, 1
00e2f0: 00145413   srli	s0, s0, 1
00e2f4: 001e1e1b   slliw	t3, t3, 1
00e2f8: ed9fd06f   j	-8488
00e2fc: 0033089b   addiw	a7, t1, 3
00e300: 00300e13   li	t3, 3
00e304: 4028d89b   sraiw	a7, a7, 2
00e308: 028e043b   mulw	s0, t3, s0
00e30c: 03c888bb   mulw	a7, a7, t3
00e310: d7dfd06f   j	-8836
00e314: 0033089b   addiw	a7, t1, 3
00e318: 4028d89b   sraiw	a7, a7, 2
00e31c: 0014141b   slliw	s0, s0, 1
00e320: 0018989b   slliw	a7, a7, 1
00e324: d69fd06f   j	-8856
00e328: 00330e1b   addiw	t3, t1, 3
00e32c: 00300913   li	s2, 3
00e330: 402e5e1b   sraiw	t3, t3, 2
00e334: 00160093   addi	ra, a2, 1
00e338: 001f0293   addi	t0, t5, 1
00e33c: 001e8413   addi	s0, t4, 1
00e340: 027903bb   mulw	t2, s2, t2
00e344: 0010d093   srli	ra, ra, 1
00e348: 0012d293   srli	t0, t0, 1
00e34c: 00145413   srli	s0, s0, 1
00e350: 032e0e3b   mulw	t3, t3, s2
00e354: b45fd06f   j	-9404
00e358: 00330e1b   addiw	t3, t1, 3
00e35c: 00160093   addi	ra, a2, 1
00e360: 001f0293   addi	t0, t5, 1
00e364: 001e8413   addi	s0, t4, 1
00e368: 402e5e1b   sraiw	t3, t3, 2
00e36c: 0013939b   slliw	t2, t2, 1
00e370: 0010d093   srli	ra, ra, 1
00e374: 0012d293   srli	t0, t0, 1
00e378: 00145413   srli	s0, s0, 1
00e37c: 001e1e1b   slliw	t3, t3, 1
00e380: b19fd06f   j	-9448
00e384: 0013081b   addiw	a6, t1, 1
00e388: 00300f13   li	t5, 3
00e38c: 4018581b   sraiw	a6, a6, 1
00e390: 028f043b   mulw	s0, t5, s0
00e394: 03e8083b   mulw	a6, a6, t5
00e398: e60fe06f   j	-6560
00e39c: 0013081b   addiw	a6, t1, 1
00e3a0: 0014141b   slliw	s0, s0, 1
00e3a4: 03e87813   andi	a6, a6, 62
00e3a8: e50fe06f   j	-6576
00e3ac: 0033089b   addiw	a7, t1, 3
00e3b0: 00300e13   li	t3, 3
00e3b4: 4028d89b   sraiw	a7, a7, 2
00e3b8: 03fe0fbb   mulw	t6, t3, t6
00e3bc: 03c888bb   mulw	a7, a7, t3
00e3c0: d38fe06f   j	-6856
00e3c4: 0033089b   addiw	a7, t1, 3
00e3c8: 4028d89b   sraiw	a7, a7, 2
00e3cc: 001f9f9b   slliw	t6, t6, 1
00e3d0: 0018989b   slliw	a7, a7, 1
00e3d4: d24fe06f   j	-6876
00e3d8: 0033089b   addiw	a7, t1, 3
00e3dc: 00300e13   li	t3, 3
00e3e0: 4028d89b   sraiw	a7, a7, 2
00e3e4: 028e043b   mulw	s0, t3, s0
00e3e8: 03c888bb   mulw	a7, a7, t3
00e3ec: c0cfe06f   j	-7156
00e3f0: 0033089b   addiw	a7, t1, 3
00e3f4: 4028d89b   sraiw	a7, a7, 2
00e3f8: 0014141b   slliw	s0, s0, 1
00e3fc: 0018989b   slliw	a7, a7, 1
00e400: bf8fe06f   j	-7176
00e404: 00388e1b   addiw	t3, a7, 3
00e408: 00300913   li	s2, 3
00e40c: 402e5e1b   sraiw	t3, t3, 2
00e410: 00168093   addi	ra, a3, 1
00e414: 001f0f93   addi	t6, t5, 1
00e418: 001e8413   addi	s0, t4, 1
00e41c: 027903bb   mulw	t2, s2, t2
00e420: 0010d093   srli	ra, ra, 1
00e424: 001fdf93   srli	t6, t6, 1
00e428: 00145413   srli	s0, s0, 1
00e42c: 032e0e3b   mulw	t3, t3, s2
00e430: 9d8fe06f   j	-7720
00e434: 00388e1b   addiw	t3, a7, 3
00e438: 00168093   addi	ra, a3, 1
00e43c: 001f0f93   addi	t6, t5, 1
00e440: 001e8413   addi	s0, t4, 1
00e444: 402e5e1b   sraiw	t3, t3, 2
00e448: 0013939b   slliw	t2, t2, 1
00e44c: 0010d093   srli	ra, ra, 1
00e450: 001fdf93   srli	t6, t6, 1
00e454: 00145413   srli	s0, s0, 1
00e458: 001e1e1b   slliw	t3, t3, 1
00e45c: 9acfe06f   j	-7764
00e460: 0038831b   addiw	t1, a7, 3
00e464: 00300f93   li	t6, 3
00e468: 4023531b   sraiw	t1, t1, 2
00e46c: 028f843b   mulw	s0, t6, s0
00e470: 03f3033b   mulw	t1, t1, t6
00e474: 99dfe06f   j	-5732
00e478: 0038831b   addiw	t1, a7, 3
00e47c: 00300f93   li	t6, 3
00e480: 4023531b   sraiw	t1, t1, 2
00e484: 03cf8e3b   mulw	t3, t6, t3
00e488: 03f3033b   mulw	t1, t1, t6
00e48c: e5cfe06f   j	-6564
00e490: 0038831b   addiw	t1, a7, 3
00e494: 4023531b   sraiw	t1, t1, 2
00e498: 001e1e1b   slliw	t3, t3, 1
00e49c: 0013131b   slliw	t1, t1, 1
00e4a0: e48fe06f   j	-6584
00e4a4: 0038831b   addiw	t1, a7, 3
00e4a8: 4023531b   sraiw	t1, t1, 2
00e4ac: 0014141b   slliw	s0, s0, 1
00e4b0: 0013131b   slliw	t1, t1, 1
00e4b4: 95dfe06f   j	-5796
00e4b8: 0033089b   addiw	a7, t1, 3
00e4bc: 4028d89b   sraiw	a7, a7, 2
00e4c0: 0014141b   slliw	s0, s0, 1
00e4c4: 0018989b   slliw	a7, a7, 1
00e4c8: f20fe06f   j	-6368
00e4cc: 0013081b   addiw	a6, t1, 1
00e4d0: 00300393   li	t2, 3
00e4d4: 4018581b   sraiw	a6, a6, 1
00e4d8: 031388bb   mulw	a7, t2, a7
00e4dc: 0278083b   mulw	a6, a6, t2
00e4e0: 825fe06f   j	-6108
00e4e4: 0013081b   addiw	a6, t1, 1
00e4e8: 0018989b   slliw	a7, a7, 1
00e4ec: 03e87813   andi	a6, a6, 62
00e4f0: 815fe06f   j	-6124
00e4f4: 1f323783   ld	a5, 499(tp)
00e4f8: 0007b023   sd	zero, 0(a5)
00e4fc: 380225a3   sw	zero, 907(tp)
00e500: fb8fb06f   j	-18504
00e504: c0001073   unimp
00e508: 30223703   ld	a4, 770(tp)
00e50c: 30223783   ld	a5, 770(tp)
00e510: 02079793   slli	a5, a5, 32
00e514: 00e7e7b3   or	a5, a5, a4
00e518: 06f239a3   sd	a5, 115(tp)
00e51c: 07323703   ld	a4, 115(tp)
00e520: 1f026783   lwu	a5, 496(tp)
00e524: 02079793   slli	a5, a5, 32
00e528: 0207d793   srli	a5, a5, 32
00e52c: 00f23e23   sd	a5, 28(tp)
00e530: 00e23ea3   sd	a4, 29(tp)
00e534: 020225a3   sw	zero, 43(tp)
00e538: f80fb06f   j	-18560
00e53c: c0001073   unimp
00e540: 30226783   lwu	a5, 770(tp)
00e544: 02f227a3   sw	a5, 47(tp)
00e548: 8af1aa23   sw	a5, -1868(gp)
00e54c: f6cfb06f   j	-18580
00e550: c0001073   unimp
00e554: 00000013   nop
00e558: 00050793   mv	a5, a0
00e55c: 01a23703   ld	a4, 26(tp)
00e560: 30226f03   lwu	t5, 770(tp)
00e564: 020f1f13   slli	t5, t5, 32
00e568: 020f5f13   srli	t5, t5, 32
00e56c: 00ef0f33   add	t5, t5, a4
00e570: 30226e03   lwu	t3, 770(tp)
00e574: 30226803   lwu	a6, 770(tp)
00e578: 30226083   lwu	ra, 770(tp)
00e57c: 30226703   lwu	a4, 770(tp)
00e580: 0007059b   sext.w	a1, a4
00e584: 00058293   mv	t0, a1
00e588: 30223503   ld	a0, 770(tp)
00e58c: 30223683   ld	a3, 770(tp)
00e590: 01e0d61b   srliw	a2, ra, 30
00e594: 00167613   andi	a2, a2, 1
00e598: 02060263   beqz	a2, 36
00e59c: 02069693   slli	a3, a3, 32
00e5a0: 00a6e6b3   or	a3, a3, a0
00e5a4: 06d239a3   sd	a3, 115(tp)
00e5a8: 07323683   ld	a3, 115(tp)
00e5ac: 0006a683   lw	a3, 0(a3)
00e5b0: 0006861b   sext.w	a2, a3
00e5b4: 1ab6e663   bltu	a3, a1, 428
00e5b8: 0007029b   sext.w	t0, a4
00e5bc: 30226583   lwu	a1, 770(tp)
00e5c0: 0005831b   sext.w	t1, a1
00e5c4: 30226703   lwu	a4, 770(tp)
00e5c8: 0007089b   sext.w	a7, a4
00e5cc: 14028263   beqz	t0, 324
00e5d0: 00a26383   lwu	t2, 10(tp)
00e5d4: 01b0d61b   srliw	a2, ra, 27
00e5d8: 00167613   andi	a2, a2, 1
00e5dc: 0103d39b   srliw	t2, t2, 16
00e5e0: 00163e93   seqz	t4, a2
00e5e4: 01f0df9b   srliw	t6, ra, 31
00e5e8: 01f0d51b   srliw	a0, ra, 31
00e5ec: 00164693   xori	a3, a2, 1
00e5f0: 007efeb3   and	t4, t4, t2
00e5f4: 00022ca3   sw	zero, 25(tp)
00e5f8: 31422003   lw	zero, 788(tp)
00e5fc: 140e9863   bnez	t4, 336
00e600: 03d503bb   mulw	t2, a0, t4
00e604: 00100e93   li	t4, 1
00e608: 1fd28263   beq	t0, t4, 484
00e60c: ffe6f693   andi	a3, a3, -2
00e610: 00068f9b   sext.w	t6, a3
00e614: 00200693   li	a3, 2
00e618: 06d22f23   sw	a3, 126(tp)
00e61c: 01c22023   sw	t3, 0(tp)
00e620: 01022023   sw	a6, 0(tp)
00e624: 00122023   sw	ra, 0(tp)
00e628: 01d0d69b   srliw	a3, ra, 29
00e62c: 0016f693   andi	a3, a3, 1
00e630: 0016c693   xori	a3, a3, 1
00e634: 00d66633   or	a2, a2, a3
00e638: 02c26683   lwu	a3, 44(tp)
00e63c: 0057581b   srliw	a6, a4, 5
00e640: 00c86833   or	a6, a6, a2
00e644: 80000737   lui	a4, 524288
00e648: 01f8181b   slliw	a6, a6, 31
00e64c: 00e84833   xor	a6, a6, a4
00e650: c0010737   lui	a4, 786448
00e654: fff70713   addi	a4, a4, -1
00e658: 00e7f7b3   and	a5, a5, a4
00e65c: 00020637   lui	a2, 32
00e660: 01000713   li	a4, 16
00e664: 0006851b   sext.w	a0, a3
00e668: 0008081b   sext.w	a6, a6
00e66c: 00c7e7b3   or	a5, a5, a2
00e670: 0ee30c63   beq	t1, a4, 248
00e674: 0046e693   ori	a3, a3, 4
00e678: 02069313   slli	t1, a3, 32
00e67c: 02059593   slli	a1, a1, 32
00e680: 02035313   srli	t1, t1, 32
00e684: 0007851b   sext.w	a0, a5
00e688: 0205d593   srli	a1, a1, 32
00e68c: 00186813   ori	a6, a6, 1
00e690: 00028e13   mv	t3, t0
00e694: 40000413   li	s0, 1024
00e698: 000e0793   mv	a5, t3
00e69c: 01c47463   bgeu	s0, t3, 8
00e6a0: 40000793   li	a5, 1024
00e6a4: 00078e9b   sext.w	t4, a5
00e6a8: 00ffe733   or	a4, t6, a5
00e6ac: 02e22623   sw	a4, 44(tp)
00e6b0: 02f387bb   mulw	a5, t2, a5
00e6b4: 02f22423   sw	a5, 40(tp)
00e6b8: 41ce863b   subw	a2, t4, t3
00e6bc: 000e8793   mv	a5, t4
00e6c0: 000f0713   mv	a4, t5
00e6c4: 0056063b   addw	a2, a2, t0
00e6c8: 08e23923   sd	a4, 146(tp)
00e6cc: 08623923   sd	t1, 146(tp)
00e6d0: 00b70733   add	a4, a4, a1
00e6d4: 00a22023   sw	a0, 0(tp)
00e6d8: 01022023   sw	a6, 0(tp)
00e6dc: 40f606bb   subw	a3, a2, a5
00e6e0: 00d22023   sw	a3, 0(tp)
00e6e4: 01122023   sw	a7, 0(tp)
00e6e8: fff7879b   addiw	a5, a5, -1
00e6ec: fc079ee3   bnez	a5, -36
00e6f0: 020e9793   slli	a5, t4, 32
00e6f4: 0207d793   srli	a5, a5, 32
00e6f8: 02b787b3   mul	a5, a5, a1
00e6fc: 41de0e3b   subw	t3, t3, t4
00e700: 00ff0f33   add	t5, t5, a5
00e704: 07423783   ld	a5, 116(tp)
00e708: 02079e63   bnez	a5, 60
00e70c: f80e16e3   bnez	t3, -116
00e710: 0ac23783   ld	a5, 172(tp)
00e714: 02078863   beqz	a5, 48
00e718: 00100793   li	a5, 1
00e71c: 06f22ea3   sw	a5, 125(tp)
00e720: 00022023   sw	zero, 0(tp)
00e724: 00200793   li	a5, 2
00e728: 00f22023   sw	a5, 0(tp)
00e72c: 200007b7   lui	a5, 131072
00e730: 00f0f0b3   and	ra, ra, a5
00e734: 00008863   beqz	ra, 16
00e738: 080221a3   sw	zero, 131(tp)
00e73c: 03500793   li	a5, 53
00e740: 00f22023   sw	a5, 0(tp)
00e744: d74fb06f   j	-19084
00e748: c0001073   unimp
00e74c: 002f851b   addiw	a0, t6, 2
00e750: 0145169b   slliw	a3, a0, 20
00e754: 0016e693   ori	a3, a3, 1
00e758: 0006869b   sext.w	a3, a3
00e75c: ea5ff06f   j	-348
00e760: 00060713   mv	a4, a2
00e764: e55ff06f   j	-428
00e768: 0007879b   sext.w	a5, a5
00e76c: 00028613   mv	a2, t0
00e770: 40000313   li	t1, 1024
00e774: 0080006f   j	8
00e778: f8060ce3   beqz	a2, -104
00e77c: 00060693   mv	a3, a2
00e780: 00c37463   bgeu	t1, a2, 8
00e784: 40000693   li	a3, 1024
00e788: 0026971b   slliw	a4, a3, 2
00e78c: 00dfe5b3   or	a1, t6, a3
00e790: 02b22623   sw	a1, 44(tp)
00e794: 02d385bb   mulw	a1, t2, a3
00e798: 02059593   slli	a1, a1, 32
00e79c: 0205d593   srli	a1, a1, 32
00e7a0: 02b23423   sd	a1, 40(tp)
00e7a4: 09e23923   sd	t5, 146(tp)
00e7a8: 00e565b3   or	a1, a0, a4
00e7ac: 02059593   slli	a1, a1, 32
00e7b0: 0205d593   srli	a1, a1, 32
00e7b4: 08b23923   sd	a1, 146(tp)
00e7b8: 00f22023   sw	a5, 0(tp)
00e7bc: 00d865b3   or	a1, a6, a3
00e7c0: 00b22023   sw	a1, 0(tp)
00e7c4: 40c285bb   subw	a1, t0, a2
00e7c8: 00b22023   sw	a1, 0(tp)
00e7cc: 01122023   sw	a7, 0(tp)
00e7d0: 02071713   slli	a4, a4, 32
00e7d4: 01e75713   srli	a4, a4, 30
00e7d8: 00ef0f33   add	t5, t5, a4
00e7dc: 40d6063b   subw	a2, a2, a3
00e7e0: 07423703   ld	a4, 116(tp)
00e7e4: f8070ae3   beqz	a4, -108
00e7e8: f5dff06f   j	-164
00e7ec: 02c26603   lwu	a2, 44(tp)
00e7f0: 09e23923   sd	t5, 146(tp)
00e7f4: 00466613   ori	a2, a2, 4
00e7f8: 02061613   slli	a2, a2, 32
00e7fc: 02065613   srli	a2, a2, 32
00e800: 08c23923   sd	a2, 146(tp)
00e804: 02722423   sw	t2, 40(tp)
00e808: 0016e693   ori	a3, a3, 1
00e80c: 02d22623   sw	a3, 44(tp)
00e810: 0ac23603   ld	a2, 172(tp)
00e814: c00006b7   lui	a3, 786432
00e818: 0ff68693   addi	a3, a3, 255
00e81c: 00d7f6b3   and	a3, a5, a3
00e820: 000397b7   lui	a5, 57
00e824: 90078793   addi	a5, a5, -1792
00e828: 00f6e7b3   or	a5, a3, a5
00e82c: 00f22023   sw	a5, 0(tp)
00e830: 00122023   sw	ra, 0(tp)
00e834: 01c22023   sw	t3, 0(tp)
00e838: 01022023   sw	a6, 0(tp)
00e83c: 00e22023   sw	a4, 0(tp)
00e840: 00060c63   beqz	a2, 24
00e844: 00100793   li	a5, 1
00e848: 06f22ea3   sw	a5, 125(tp)
00e84c: 00022023   sw	zero, 0(tp)
00e850: 00200793   li	a5, 2
00e854: 00f22023   sw	a5, 0(tp)
00e858: 200007b7   lui	a5, 131072
00e85c: 00f0f7b3   and	a5, ra, a5
00e860: ee0782e3   beqz	a5, -284
00e864: ed5ff06f   j	-300
00e868: 01a23603   ld	a2, 26(tp)
00e86c: 30223683   ld	a3, 770(tp)
00e870: 02c23703   ld	a4, 44(tp)
00e874: 00a26783   lwu	a5, 10(tp)
00e878: 00c686b3   add	a3, a3, a2
00e87c: 08d23923   sd	a3, 146(tp)
00e880: 00476713   ori	a4, a4, 4
00e884: 08e23923   sd	a4, 146(tp)
00e888: 00022ca3   sw	zero, 25(tp)
00e88c: 31422003   lw	zero, 788(tp)
00e890: 00f7d79b   srliw	a5, a5, 15
00e894: 0027f793   andi	a5, a5, 2
00e898: 02f22423   sw	a5, 40(tp)
00e89c: 0147979b   slliw	a5, a5, 20
00e8a0: 0017e793   ori	a5, a5, 1
00e8a4: 02f22623   sw	a5, 44(tp)
00e8a8: c00107b7   lui	a5, 786448
00e8ac: fff78793   addi	a5, a5, -1
00e8b0: 00f577b3   and	a5, a0, a5
00e8b4: 00020737   lui	a4, 32
00e8b8: 00e7e7b3   or	a5, a5, a4
00e8bc: 00f22023   sw	a5, 0(tp)
00e8c0: 30226783   lwu	a5, 770(tp)
00e8c4: 00f22023   sw	a5, 0(tp)
00e8c8: 30226783   lwu	a5, 770(tp)
00e8cc: 00f22023   sw	a5, 0(tp)
00e8d0: 30226783   lwu	a5, 770(tp)
00e8d4: 00f22023   sw	a5, 0(tp)
00e8d8: 30226503   lwu	a0, 770(tp)
00e8dc: 00723783   ld	a5, 7(tp)
00e8e0: 00078067   jr	a5
00e8e4: 00000013   nop
00e8e8: 01a23703   ld	a4, 26(tp)
00e8ec: 30223783   ld	a5, 770(tp)
00e8f0: 00e787b3   add	a5, a5, a4
00e8f4: 08f23923   sd	a5, 146(tp)
00e8f8: 30223803   ld	a6, 770(tp)
00e8fc: 30223603   ld	a2, 770(tp)
00e900: 02c23783   ld	a5, 44(tp)
00e904: 0057e793   ori	a5, a5, 5
00e908: 08f23923   sd	a5, 146(tp)
00e90c: 00022ca3   sw	zero, 25(tp)
00e910: 31422003   lw	zero, 788(tp)
00e914: 01c65793   srli	a5, a2, 28
00e918: 0017f793   andi	a5, a5, 1
00e91c: 01f79713   slli	a4, a5, 31
00e920: 00a23683   ld	a3, 10(tp)
00e924: 000105b7   lui	a1, 16
00e928: 00b6f6b3   and	a3, a3, a1
00e92c: 00068a63   beqz	a3, 20
00e930: 00278693   addi	a3, a5, 2
00e934: 02d23423   sd	a3, 40(tp)
00e938: 01469693   slli	a3, a3, 20
00e93c: 00d76733   or	a4, a4, a3
00e940: 00a22023   sw	a0, 0(tp)
00e944: 0017c793   xori	a5, a5, 1
00e948: 00176713   ori	a4, a4, 1
00e94c: 02e236a3   sd	a4, 45(tp)
00e950: 30226703   lwu	a4, 770(tp)
00e954: 30226503   lwu	a0, 770(tp)
00e958: 00723583   ld	a1, 7(tp)
00e95c: 00179693   slli	a3, a5, 1
00e960: 00f687b3   add	a5, a3, a5
00e964: 00f23023   sd	a5, 0(tp)
00e968: 01023023   sd	a6, 0(tp)
00e96c: 00c23023   sd	a2, 0(tp)
00e970: 02071793   slli	a5, a4, 32
00e974: 0207d793   srli	a5, a5, 32
00e978: 00f23023   sd	a5, 0(tp)
00e97c: 00058067   jr	a1
00e980: 1f226683   lwu	a3, 498(tp)
00e984: 30226703   lwu	a4, 770(tp)
00e988: 30223603   ld	a2, 770(tp)
00e98c: 30223783   ld	a5, 770(tp)
00e990: 02079793   slli	a5, a5, 32
00e994: 00c7e7b3   or	a5, a5, a2
00e998: 00d22023   sw	a3, 0(tp)
00e99c: 28eda823   sw	a4, 656(s11)
00e9a0: 30226703   lwu	a4, 770(tp)
00e9a4: 30226603   lwu	a2, 770(tp)
00e9a8: 30226503   lwu	a0, 770(tp)
00e9ac: 00723683   ld	a3, 7(tp)
00e9b0: 00fdb023   sd	a5, 0(s11)
00e9b4: 28eda623   sw	a4, 652(s11)
00e9b8: 00e22023   sw	a4, 0(tp)
00e9bc: 00c22023   sw	a2, 0(tp)
00e9c0: 00068067   jr	a3
00e9c4: 00000013   nop
00e9c8: af0fb06f   j	-19728
00e9cc: c0001073   unimp
00e9d0: 30226783   lwu	a5, 770(tp)
00e9d4: 30226783   lwu	a5, 770(tp)
00e9d8: 30226783   lwu	a5, 770(tp)
00e9dc: 0007879b   sext.w	a5, a5
00e9e0: 30226883   lwu	a7, 770(tp)
00e9e4: 00001737   lui	a4, 1
00e9e8: 21270693   addi	a3, a4, 530
00e9ec: 00d78663   beq	a5, a3, 12
00e9f0: ac8fb06f   j	-19768
00e9f4: c0001073   unimp
00e9f8: 1f923783   ld	a5, 505(tp)
00e9fc: 00e787b3   add	a5, a5, a4
00ea00: 00004737   lui	a4, 4
00ea04: 10170713   addi	a4, a4, 257
00ea08: c0e7a823   sw	a4, -1008(a5)
00ea0c: 0028d89b   srliw	a7, a7, 2
00ea10: 18088863   beqz	a7, 400
00ea14: c017b337   lui	t1, 786811
00ea18: 000d8793   mv	a5, s11
00ea1c: 00000693   li	a3, 0
00ea20: 3003031b   addiw	t1, t1, 768
00ea24: 00622023   sw	t1, 0(tp)
00ea28: 30226703   lwu	a4, 770(tp)
00ea2c: 30226f03   lwu	t5, 770(tp)
00ea30: 30226e83   lwu	t4, 770(tp)
00ea34: 30226703   lwu	a4, 770(tp)
00ea38: 30226e03   lwu	t3, 770(tp)
00ea3c: 30226803   lwu	a6, 770(tp)
00ea40: 30226703   lwu	a4, 770(tp)
00ea44: 30226503   lwu	a0, 770(tp)
00ea48: 30223603   ld	a2, 770(tp)
00ea4c: 30223703   ld	a4, 770(tp)
00ea50: 02071713   slli	a4, a4, 32
00ea54: 00c76733   or	a4, a4, a2
00ea58: 30226603   lwu	a2, 770(tp)
00ea5c: 30226583   lwu	a1, 770(tp)
00ea60: 01e22023   sw	t5, 0(tp)
00ea64: 01d22023   sw	t4, 0(tp)
00ea68: 01c22023   sw	t3, 0(tp)
00ea6c: 01022023   sw	a6, 0(tp)
00ea70: 28a7a823   sw	a0, 656(a5)
00ea74: 00e7b023   sd	a4, 0(a5)
00ea78: 28c7a623   sw	a2, 652(a5)
00ea7c: 00c22023   sw	a2, 0(tp)
00ea80: 00b22023   sw	a1, 0(tp)
00ea84: 30226703   lwu	a4, 770(tp)
00ea88: 30226f03   lwu	t5, 770(tp)
00ea8c: 30226e83   lwu	t4, 770(tp)
00ea90: 30226703   lwu	a4, 770(tp)
00ea94: 30226e03   lwu	t3, 770(tp)
00ea98: 30226803   lwu	a6, 770(tp)
00ea9c: 30226703   lwu	a4, 770(tp)
00eaa0: 30226503   lwu	a0, 770(tp)
00eaa4: 30223603   ld	a2, 770(tp)
00eaa8: 30223703   ld	a4, 770(tp)
00eaac: 02071713   slli	a4, a4, 32
00eab0: 00c76733   or	a4, a4, a2
00eab4: 30226603   lwu	a2, 770(tp)
00eab8: 30226583   lwu	a1, 770(tp)
00eabc: 01e22023   sw	t5, 0(tp)
00eac0: 01d22023   sw	t4, 0(tp)
00eac4: 01c22023   sw	t3, 0(tp)
00eac8: 01022023   sw	a6, 0(tp)
00eacc: 28a7a823   sw	a0, 656(a5)
00ead0: 00e7b023   sd	a4, 0(a5)
00ead4: 28c7a623   sw	a2, 652(a5)
00ead8: 00c22023   sw	a2, 0(tp)
00eadc: 00b22023   sw	a1, 0(tp)
00eae0: 30226703   lwu	a4, 770(tp)
00eae4: 30226f03   lwu	t5, 770(tp)
00eae8: 30226e83   lwu	t4, 770(tp)
00eaec: 30226703   lwu	a4, 770(tp)
00eaf0: 30226e03   lwu	t3, 770(tp)
00eaf4: 30226803   lwu	a6, 770(tp)
00eaf8: 30226703   lwu	a4, 770(tp)
00eafc: 30226503   lwu	a0, 770(tp)
00eb00: 30223603   ld	a2, 770(tp)
00eb04: 30223703   ld	a4, 770(tp)
00eb08: 02071713   slli	a4, a4, 32
00eb0c: 00c76733   or	a4, a4, a2
00eb10: 30226603   lwu	a2, 770(tp)
00eb14: 30226583   lwu	a1, 770(tp)
00eb18: 01e22023   sw	t5, 0(tp)
00eb1c: 01d22023   sw	t4, 0(tp)
00eb20: 01c22023   sw	t3, 0(tp)
00eb24: 01022023   sw	a6, 0(tp)
00eb28: 28a7a823   sw	a0, 656(a5)
00eb2c: 00e7b023   sd	a4, 0(a5)
00eb30: 28c7a623   sw	a2, 652(a5)
00eb34: 00c22023   sw	a2, 0(tp)
00eb38: 00b22023   sw	a1, 0(tp)
00eb3c: 30226703   lwu	a4, 770(tp)
00eb40: 30226f03   lwu	t5, 770(tp)
00eb44: 30226e83   lwu	t4, 770(tp)
00eb48: 30226703   lwu	a4, 770(tp)
00eb4c: 30226e03   lwu	t3, 770(tp)
00eb50: 30226803   lwu	a6, 770(tp)
00eb54: 30226703   lwu	a4, 770(tp)
00eb58: 30226503   lwu	a0, 770(tp)
00eb5c: 30223603   ld	a2, 770(tp)
00eb60: 30223703   ld	a4, 770(tp)
00eb64: 02071713   slli	a4, a4, 32
00eb68: 00c76733   or	a4, a4, a2
00eb6c: 30226603   lwu	a2, 770(tp)
00eb70: 30226583   lwu	a1, 770(tp)
00eb74: 01e22023   sw	t5, 0(tp)
00eb78: 01d22023   sw	t4, 0(tp)
00eb7c: 01c22023   sw	t3, 0(tp)
00eb80: 01022023   sw	a6, 0(tp)
00eb84: 28a7a823   sw	a0, 656(a5)
00eb88: 00e7b023   sd	a4, 0(a5)
00eb8c: 28c7a623   sw	a2, 652(a5)
00eb90: 00c22023   sw	a2, 0(tp)
00eb94: 00b22023   sw	a1, 0(tp)
00eb98: 0016869b   addiw	a3, a3, 1
00eb9c: e91694e3   bne	a3, a7, -376
00eba0: 1f923783   ld	a5, 505(tp)
00eba4: 00001737   lui	a4, 1
00eba8: 00e787b3   add	a5, a5, a4
00ebac: 00004737   lui	a4, 4
00ebb0: 00170713   addi	a4, a4, 1
00ebb4: c0e7a823   sw	a4, -1008(a5)
00ebb8: e39ff06f   j	-456
00ebbc: 00000013   nop
00ebc0: 30226683   lwu	a3, 770(tp)
00ebc4: 30226703   lwu	a4, 770(tp)
00ebc8: 30226783   lwu	a5, 770(tp)
00ebcc: 0016f593   andi	a1, a3, 1
00ebd0: 0c058e63   beqz	a1, 220
00ebd4: 01a23683   ld	a3, 26(tp)
00ebd8: 02071713   slli	a4, a4, 32
00ebdc: 02075713   srli	a4, a4, 32
00ebe0: 00d70733   add	a4, a4, a3
00ebe4: 0047979b   slliw	a5, a5, 4
00ebe8: 02079793   slli	a5, a5, 32
00ebec: 0207d793   srli	a5, a5, 32
00ebf0: 00e787b3   add	a5, a5, a4
00ebf4: 06f239a3   sd	a5, 115(tp)
00ebf8: 07323683   ld	a3, 115(tp)
00ebfc: 0006a703   lw	a4, 0(a3)
00ec00: 0046a783   lw	a5, 4(a3)
00ec04: 0007071b   sext.w	a4, a4
00ec08: 0007879b   sext.w	a5, a5
00ec0c: 1f026603   lwu	a2, 496(tp)
00ec10: 02061613   slli	a2, a2, 32
00ec14: 02065613   srli	a2, a2, 32
00ec18: 00c23e23   sd	a2, 28(tp)
00ec1c: 02071713   slli	a4, a4, 32
00ec20: 02075713   srli	a4, a4, 32
00ec24: 02079793   slli	a5, a5, 32
00ec28: 00e7e7b3   or	a5, a5, a4
00ec2c: 00f23ea3   sd	a5, 29(tp)
00ec30: 020225a3   sw	zero, 43(tp)
00ec34: 0086a783   lw	a5, 8(a3)
00ec38: 0007879b   sext.w	a5, a5
00ec3c: 02f227a3   sw	a5, 47(tp)
00ec40: 86818613   addi	a2, gp, -1944
00ec44: 04f62623   sw	a5, 76(a2)
00ec48: 00c6a783   lw	a5, 12(a3)
00ec4c: 0007879b   sext.w	a5, a5
00ec50: 02058263   beqz	a1, 36
00ec54: 00300713   li	a4, 3
00ec58: 00f77e63   bgeu	a4, a5, 28
00ec5c: 03d00713   li	a4, 61
00ec60: 00f73733   sltu	a4, a4, a5
00ec64: 0017171b   slliw	a4, a4, 1
00ec68: 0397b793   sltiu	a5, a5, 57
00ec6c: 00f767b3   or	a5, a4, a5
00ec70: 0007879b   sext.w	a5, a5
00ec74: 0037f693   andi	a3, a5, 3
00ec78: 00100713   li	a4, 1
00ec7c: 00d7173b   sllw	a4, a4, a3
00ec80: 28fdaa23   sw	a5, 660(s11)
00ec84: 00377713   andi	a4, a4, 3
00ec88: 00e22e23   sw	a4, 28(tp)
00ec8c: 1ee22823   sw	a4, 496(tp)
00ec90: c0003737   lui	a4, 786435
00ec94: a007071b   addiw	a4, a4, -1536
00ec98: 00e22023   sw	a4, 0(tp)
00ec9c: 00f22023   sw	a5, 0(tp)
00eca0: 04f62423   sw	a5, 72(a2)
00eca4: 814fb06f   j	-20460
00eca8: c0001073   unimp
00ecac: 02069693   slli	a3, a3, 32
00ecb0: 02071713   slli	a4, a4, 32
00ecb4: 0206d693   srli	a3, a3, 32
00ecb8: 00d76733   or	a4, a4, a3
00ecbc: f29ff06f   j	-216
00ecc0: 30226603   lwu	a2, 770(tp)
00ecc4: 30226783   lwu	a5, 770(tp)
00ecc8: 00a22023   sw	a0, 0(tp)
00eccc: 00c22023   sw	a2, 0(tp)
00ecd0: 00f22023   sw	a5, 0(tp)
00ecd4: 0ac26703   lwu	a4, 172(tp)
00ecd8: 0057d79b   srliw	a5, a5, 5
00ecdc: 0007071b   sext.w	a4, a4
00ece0: 0017f793   andi	a5, a5, 1
00ece4: 04071263   bnez	a4, 68
00ece8: 0a223703   ld	a4, 162(tp)
00ecec: 02079e63   bnez	a5, 60
00ecf0: 02061613   slli	a2, a2, 32
00ecf4: 02065613   srli	a2, a2, 32
00ecf8: 00800593   li	a1, 8
00ecfc: 00060693   mv	a3, a2
00ed00: 00c5f463   bgeu	a1, a2, 8
00ed04: 00800693   li	a3, 8
00ed08: 02060063   beqz	a2, 32
00ed0c: 00000793   li	a5, 0
00ed10: 30226703   lwu	a4, 770(tp)
00ed14: 00e22023   sw	a4, 0(tp)
00ed18: 00178793   addi	a5, a5, 1
00ed1c: fed7eae3   bltu	a5, a3, -12
00ed20: 40d60633   sub	a2, a2, a3
00ed24: fc061ce3   bnez	a2, -40
00ed28: f91fa06f   j	-20592
00ed2c: c0001073   unimp
00ed30: 01823703   ld	a4, 24(tp)
00ed34: 01723683   ld	a3, 23(tp)
00ed38: c00137b7   lui	a5, 786451
00ed3c: 5007879b   addiw	a5, a5, 1280
00ed40: 00f22023   sw	a5, 0(tp)
00ed44: 30226783   lwu	a5, 770(tp)
00ed48: 28fda823   sw	a5, 656(s11)
00ed4c: 30223783   ld	a5, 770(tp)
00ed50: 00d797b3   sll	a5, a5, a3
00ed54: 00e787b3   add	a5, a5, a4
00ed58: 00fdb023   sd	a5, 0(s11)
00ed5c: 30226783   lwu	a5, 770(tp)
00ed60: 28fda623   sw	a5, 652(s11)
00ed64: 00f22023   sw	a5, 0(tp)
00ed68: 30226783   lwu	a5, 770(tp)
00ed6c: 00f22023   sw	a5, 0(tp)
00ed70: f49fa06f   j	-20664
00ed74: c0001073   unimp
00ed78: 01a23303   ld	t1, 26(tp)
00ed7c: 30226883   lwu	a7, 770(tp)
00ed80: 30226083   lwu	ra, 770(tp)
00ed84: 30226403   lwu	s0, 770(tp)
00ed88: 30226383   lwu	t2, 770(tp)
00ed8c: 30226703   lwu	a4, 770(tp)
00ed90: 0007061b   sext.w	a2, a4
00ed94: 00060f93   mv	t6, a2
00ed98: 30223583   ld	a1, 770(tp)
00ed9c: 30223683   ld	a3, 770(tp)
00eda0: 400007b7   lui	a5, 262144
00eda4: 00f3f7b3   and	a5, t2, a5
00eda8: 02078263   beqz	a5, 36
00edac: 02069793   slli	a5, a3, 32
00edb0: 00b7e7b3   or	a5, a5, a1
00edb4: 06f239a3   sd	a5, 115(tp)
00edb8: 07323783   ld	a5, 115(tp)
00edbc: 0007a783   lw	a5, 0(a5)
00edc0: 0007869b   sext.w	a3, a5
00edc4: 30c7ee63   bltu	a5, a2, 796
00edc8: 00070f9b   sext.w	t6, a4
00edcc: 30226583   lwu	a1, 770(tp)
00edd0: 0005871b   sext.w	a4, a1
00edd4: 30226783   lwu	a5, 770(tp)
00edd8: 0007881b   sext.w	a6, a5
00eddc: 00a26683   lwu	a3, 10(tp)
00ede0: 2c0f8463   beqz	t6, 712
00ede4: 01b3de1b   srliw	t3, t2, 27
00ede8: 02089f13   slli	t5, a7, 32
00edec: 001e7e13   andi	t3, t3, 1
00edf0: 020008b7   lui	a7, 8192
00edf4: 020f5f13   srli	t5, t5, 32
00edf8: 001e4293   xori	t0, t3, 1
00edfc: 0106d69b   srliw	a3, a3, 16
00ee00: 0113f8b3   and	a7, t2, a7
00ee04: 006f0f33   add	t5, t5, t1
00ee08: 00d2f2b3   and	t0, t0, a3
00ee0c: 14088c63   beqz	a7, 344
00ee10: 100006b7   lui	a3, 65536
00ee14: 00d3e6b3   or	a3, t2, a3
00ee18: 00022ca3   sw	zero, 25(tp)
00ee1c: 31422003   lw	zero, 788(tp)
00ee20: 02c26603   lwu	a2, 44(tp)
00ee24: 0006089b   sext.w	a7, a2
00ee28: 01f6d31b   srliw	t1, a3, 31
00ee2c: 2a028e63   beqz	t0, 700
00ee30: 00330313   addi	t1, t1, 3
00ee34: 01431393   slli	t2, t1, 20
00ee38: 00100e93   li	t4, 1
00ee3c: 026282b3   mul	t0, t0, t1
00ee40: 0006831b   sext.w	t1, a3
00ee44: 41df8c63   beq	t6, t4, 1048
00ee48: 00200e93   li	t4, 2
00ee4c: 07d22f23   sw	t4, 126(tp)
00ee50: 00122023   sw	ra, 0(tp)
00ee54: 00822023   sw	s0, 0(tp)
00ee58: 00622023   sw	t1, 0(tp)
00ee5c: 01d6d69b   srliw	a3, a3, 29
00ee60: 0016f693   andi	a3, a3, 1
00ee64: 0016c693   xori	a3, a3, 1
00ee68: 0057d79b   srliw	a5, a5, 5
00ee6c: 00de66b3   or	a3, t3, a3
00ee70: 00d7e6b3   or	a3, a5, a3
00ee74: c00107b7   lui	a5, 786448
00ee78: fff78793   addi	a5, a5, -1
00ee7c: 01f6969b   slliw	a3, a3, 31
00ee80: 00f577b3   and	a5, a0, a5
00ee84: 80000537   lui	a0, 524288
00ee88: 00a6c533   xor	a0, a3, a0
00ee8c: 00020337   lui	t1, 32
00ee90: 02000693   li	a3, 32
00ee94: 0067e7b3   or	a5, a5, t1
00ee98: 0005051b   sext.w	a0, a0
00ee9c: 2ed70063   beq	a4, a3, 736
00eea0: 00866613   ori	a2, a2, 8
00eea4: 02061313   slli	t1, a2, 32
00eea8: 02059593   slli	a1, a1, 32
00eeac: 02035313   srli	t1, t1, 32
00eeb0: 0007889b   sext.w	a7, a5
00eeb4: 0205d593   srli	a1, a1, 32
00eeb8: 00156513   ori	a0, a0, 1
00eebc: 000f8e93   mv	t4, t6
00eec0: 40000093   li	ra, 1024
00eec4: 000e8e1b   sext.w	t3, t4
00eec8: 01d0f463   bgeu	ra, t4, 8
00eecc: 40000e13   li	t3, 1024
00eed0: 020e1793   slli	a5, t3, 32
00eed4: 0207d793   srli	a5, a5, 32
00eed8: 0077e733   or	a4, a5, t2
00eedc: 08e23023   sd	a4, 128(tp)
00eee0: 025787b3   mul	a5, a5, t0
00eee4: 02f23423   sd	a5, 40(tp)
00eee8: 41de063b   subw	a2, t3, t4
00eeec: 000e0793   mv	a5, t3
00eef0: 000f0713   mv	a4, t5
00eef4: 01f6063b   addw	a2, a2, t6
00eef8: 08e23923   sd	a4, 146(tp)
00eefc: 08623923   sd	t1, 146(tp)
00ef00: 00b70733   add	a4, a4, a1
00ef04: 01122023   sw	a7, 0(tp)
00ef08: 00a22023   sw	a0, 0(tp)
00ef0c: 40f606bb   subw	a3, a2, a5
00ef10: 00d22023   sw	a3, 0(tp)
00ef14: 01022023   sw	a6, 0(tp)
00ef18: fff7879b   addiw	a5, a5, -1
00ef1c: fc079ee3   bnez	a5, -36
00ef20: 020e1793   slli	a5, t3, 32
00ef24: 0207d793   srli	a5, a5, 32
00ef28: 02b787b3   mul	a5, a5, a1
00ef2c: 41ce8ebb   subw	t4, t4, t3
00ef30: 00ff0f33   add	t5, t5, a5
00ef34: 07423783   ld	a5, 116(tp)
00ef38: 02079263   bnez	a5, 36
00ef3c: f80e94e3   bnez	t4, -120
00ef40: 0ac23783   ld	a5, 172(tp)
00ef44: 00078c63   beqz	a5, 24
00ef48: 00100793   li	a5, 1
00ef4c: 06f22ea3   sw	a5, 125(tp)
00ef50: 00022023   sw	zero, 0(tp)
00ef54: 00200793   li	a5, 2
00ef58: 00f22023   sw	a5, 0(tp)
00ef5c: d5dfa06f   j	-21156
00ef60: c0001073   unimp
00ef64: 01c3d69b   srliw	a3, t2, 28
00ef68: 0016f693   andi	a3, a3, 1
00ef6c: 00022ca3   sw	zero, 25(tp)
00ef70: 31422003   lw	zero, 788(tp)
00ef74: 02c26603   lwu	a2, 44(tp)
00ef78: 01f69e9b   slliw	t4, a3, 31
00ef7c: 0006031b   sext.w	t1, a2
00ef80: 02028063   beqz	t0, 32
00ef84: 01f3d89b   srliw	a7, t2, 31
00ef88: 00d888bb   addw	a7, a7, a3
00ef8c: 0028889b   addiw	a7, a7, 2
00ef90: 0148969b   slliw	a3, a7, 20
00ef94: 02069693   slli	a3, a3, 32
00ef98: 0206d693   srli	a3, a3, 32
00ef9c: 00deeeb3   or	t4, t4, a3
00efa0: 00100693   li	a3, 1
00efa4: 24df8e63   beq	t6, a3, 604
00efa8: 00200693   li	a3, 2
00efac: 06d22f23   sw	a3, 126(tp)
00efb0: 00122023   sw	ra, 0(tp)
00efb4: 00822023   sw	s0, 0(tp)
00efb8: 00722023   sw	t2, 0(tp)
00efbc: 01d3d29b   srliw	t0, t2, 29
00efc0: 0012f293   andi	t0, t0, 1
00efc4: 0057d69b   srliw	a3, a5, 5
00efc8: 0012c293   xori	t0, t0, 1
00efcc: 005e67b3   or	a5, t3, t0
00efd0: 0016f693   andi	a3, a3, 1
00efd4: 00f6e6b3   or	a3, a3, a5
00efd8: c00107b7   lui	a5, 786448
00efdc: 0016c693   xori	a3, a3, 1
00efe0: fff78793   addi	a5, a5, -1
00efe4: 00f577b3   and	a5, a0, a5
00efe8: 01f6969b   slliw	a3, a3, 31
00efec: 00020537   lui	a0, 32
00eff0: 01400e13   li	t3, 20
00eff4: 00a7e7b3   or	a5, a5, a0
00eff8: 0006851b   sext.w	a0, a3
00effc: 0fc70a63   beq	a4, t3, 244
00f000: 00566613   ori	a2, a2, 5
00f004: 02061093   slli	ra, a2, 32
00f008: 0016e693   ori	a3, a3, 1
00f00c: 02089413   slli	s0, a7, 32
00f010: 02059513   slli	a0, a1, 32
00f014: 0200d093   srli	ra, ra, 32
00f018: 0007829b   sext.w	t0, a5
00f01c: 02045413   srli	s0, s0, 32
00f020: 0006861b   sext.w	a2, a3
00f024: 02055513   srli	a0, a0, 32
00f028: 000f8e13   mv	t3, t6
00f02c: 40000493   li	s1, 1024
00f030: 000e0713   mv	a4, t3
00f034: 01c4f463   bgeu	s1, t3, 8
00f038: 40000713   li	a4, 1024
00f03c: 02071893   slli	a7, a4, 32
00f040: 0208d893   srli	a7, a7, 32
00f044: 0007031b   sext.w	t1, a4
00f048: 01d8e7b3   or	a5, a7, t4
00f04c: 02f236a3   sd	a5, 45(tp)
00f050: 028887b3   mul	a5, a7, s0
00f054: 02f23423   sd	a5, 40(tp)
00f058: 41c305bb   subw	a1, t1, t3
00f05c: 00088793   mv	a5, a7
00f060: 000f0713   mv	a4, t5
00f064: 01f585bb   addw	a1, a1, t6
00f068: 08e23923   sd	a4, 146(tp)
00f06c: 08123923   sd	ra, 146(tp)
00f070: 00a70733   add	a4, a4, a0
00f074: 00522023   sw	t0, 0(tp)
00f078: 00c22023   sw	a2, 0(tp)
00f07c: 40f586bb   subw	a3, a1, a5
00f080: 00d22023   sw	a3, 0(tp)
00f084: 01022023   sw	a6, 0(tp)
00f088: fff78793   addi	a5, a5, -1
00f08c: fc079ee3   bnez	a5, -36
00f090: 031508b3   mul	a7, a0, a7
00f094: 406e0e3b   subw	t3, t3, t1
00f098: 011f0f33   add	t5, t5, a7
00f09c: 07423783   ld	a5, 116(tp)
00f0a0: ea079ee3   bnez	a5, -324
00f0a4: f80e16e3   bnez	t3, -116
00f0a8: 0ac23783   ld	a5, 172(tp)
00f0ac: ea0788e3   beqz	a5, -336
00f0b0: 00100793   li	a5, 1
00f0b4: 06f22ea3   sw	a5, 125(tp)
00f0b8: 00022023   sw	zero, 0(tp)
00f0bc: 00200793   li	a5, 2
00f0c0: 00f22023   sw	a5, 0(tp)
00f0c4: 200007b7   lui	a5, 131072
00f0c8: 00f3f7b3   and	a5, t2, a5
00f0cc: e80788e3   beqz	a5, -368
00f0d0: 080221a3   sw	zero, 131(tp)
00f0d4: 03500793   li	a5, 53
00f0d8: 00f22023   sw	a5, 0(tp)
00f0dc: e81ff06f   j	-384
00f0e0: 00068713   mv	a4, a3
00f0e4: ce5ff06f   j	-796
00f0e8: 00000393   li	t2, 0
00f0ec: d4dff06f   j	-692
00f0f0: 0007879b   sext.w	a5, a5
00f0f4: 000f8613   mv	a2, t6
00f0f8: 40000e13   li	t3, 1024
00f0fc: 00060713   mv	a4, a2
00f100: 00ce7463   bgeu	t3, a2, 8
00f104: 40000713   li	a4, 1024
00f108: 0027169b   slliw	a3, a4, 2
00f10c: 00e686bb   addw	a3, a3, a4
00f110: 09e23923   sd	t5, 146(tp)
00f114: 00d365b3   or	a1, t1, a3
00f118: 02059593   slli	a1, a1, 32
00f11c: 0205d593   srli	a1, a1, 32
00f120: 08b23923   sd	a1, 146(tp)
00f124: 02071593   slli	a1, a4, 32
00f128: 0205d593   srli	a1, a1, 32
00f12c: 01d5e5b3   or	a1, a1, t4
00f130: 02b236a3   sd	a1, 45(tp)
00f134: 031705bb   mulw	a1, a4, a7
00f138: 02059593   slli	a1, a1, 32
00f13c: 0205d593   srli	a1, a1, 32
00f140: 02b23423   sd	a1, 40(tp)
00f144: 00f22023   sw	a5, 0(tp)
00f148: 00e565b3   or	a1, a0, a4
00f14c: 00b22023   sw	a1, 0(tp)
00f150: 40cf85bb   subw	a1, t6, a2
00f154: 00b22023   sw	a1, 0(tp)
00f158: 01022023   sw	a6, 0(tp)
00f15c: 02069593   slli	a1, a3, 32
00f160: 01e5d693   srli	a3, a1, 30
00f164: 00df0f33   add	t5, t5, a3
00f168: 40e6063b   subw	a2, a2, a4
00f16c: 07423703   ld	a4, 116(tp)
00f170: de0716e3   bnez	a4, -532
00f174: f80614e3   bnez	a2, -120
00f178: f31ff06f   j	-208
00f17c: 0007879b   sext.w	a5, a5
00f180: 000f8693   mv	a3, t6
00f184: 40000e13   li	t3, 1024
00f188: 0080006f   j	8
00f18c: da068ae3   beqz	a3, -588
00f190: 00068613   mv	a2, a3
00f194: 00de7463   bgeu	t3, a3, 8
00f198: 40000613   li	a2, 1024
00f19c: 0036171b   slliw	a4, a2, 3
00f1a0: 09e23923   sd	t5, 146(tp)
00f1a4: 00e8e5b3   or	a1, a7, a4
00f1a8: 02059593   slli	a1, a1, 32
00f1ac: 0205d593   srli	a1, a1, 32
00f1b0: 08b23923   sd	a1, 146(tp)
00f1b4: 02061593   slli	a1, a2, 32
00f1b8: 0205d593   srli	a1, a1, 32
00f1bc: 0075e333   or	t1, a1, t2
00f1c0: 08623023   sd	t1, 128(tp)
00f1c4: 025585b3   mul	a1, a1, t0
00f1c8: 02b23423   sd	a1, 40(tp)
00f1cc: 00f22023   sw	a5, 0(tp)
00f1d0: 00c565b3   or	a1, a0, a2
00f1d4: 00b22023   sw	a1, 0(tp)
00f1d8: 40df85bb   subw	a1, t6, a3
00f1dc: 00b22023   sw	a1, 0(tp)
00f1e0: 01022023   sw	a6, 0(tp)
00f1e4: 02071713   slli	a4, a4, 32
00f1e8: 01e75713   srli	a4, a4, 30
00f1ec: 00ef0f33   add	t5, t5, a4
00f1f0: 40c686bb   subw	a3, a3, a2
00f1f4: 07423703   ld	a4, 116(tp)
00f1f8: f8070ae3   beqz	a4, -108
00f1fc: d61ff06f   j	-672
00f200: 03122423   sw	a7, 40(tp)
00f204: 09e23923   sd	t5, 146(tp)
00f208: 00566713   ori	a4, a2, 5
00f20c: 02071713   slli	a4, a4, 32
00f210: 02075713   srli	a4, a4, 32
00f214: 08e23923   sd	a4, 146(tp)
00f218: 001eee93   ori	t4, t4, 1
00f21c: 03d236a3   sd	t4, 45(tp)
00f220: 0ac23683   ld	a3, 172(tp)
00f224: 0207f713   andi	a4, a5, 32
00f228: 00070463   beqz	a4, 8
00f22c: 00100693   li	a3, 1
00f230: c0039737   lui	a4, 786489
00f234: a0070713   addi	a4, a4, -1536
00f238: 0ff57513   zext.b	a0, a0
00f23c: 00e56533   or	a0, a0, a4
00f240: 00a22023   sw	a0, 0(tp)
00f244: 00722023   sw	t2, 0(tp)
00f248: 00122023   sw	ra, 0(tp)
00f24c: 00822023   sw	s0, 0(tp)
00f250: 00f22023   sw	a5, 0(tp)
00f254: e4069ee3   bnez	a3, -420
00f258: e6dff06f   j	-404
00f25c: 02523423   sd	t0, 40(tp)
00f260: 09e23923   sd	t5, 146(tp)
00f264: 00866713   ori	a4, a2, 8
00f268: 02071713   slli	a4, a4, 32
00f26c: 02075713   srli	a4, a4, 32
00f270: 08e23923   sd	a4, 146(tp)
00f274: 0013e393   ori	t2, t2, 1
00f278: 08723023   sd	t2, 128(tp)
00f27c: 0ac23683   ld	a3, 172(tp)
00f280: c0039737   lui	a4, 786489
00f284: a0070713   addi	a4, a4, -1536
00f288: 0ff57513   zext.b	a0, a0
00f28c: 00e56533   or	a0, a0, a4
00f290: 00a22023   sw	a0, 0(tp)
00f294: 00622023   sw	t1, 0(tp)
00f298: 00122023   sw	ra, 0(tp)
00f29c: 00822023   sw	s0, 0(tp)
00f2a0: 00f22023   sw	a5, 0(tp)
00f2a4: 00068c63   beqz	a3, 24
00f2a8: 00100793   li	a5, 1
00f2ac: 06f22ea3   sw	a5, 125(tp)
00f2b0: 00022023   sw	zero, 0(tp)
00f2b4: 00200793   li	a5, 2
00f2b8: 00f22023   sw	a5, 0(tp)
00f2bc: 01d35793   srli	a5, t1, 29
00f2c0: 0017f793   andi	a5, a5, 1
00f2c4: c8078ce3   beqz	a5, -872
00f2c8: e09ff06f   j	-504
00f2cc: 00000013   nop
00f2d0: 00a22023   sw	a0, 0(tp)
00f2d4: 000c3023   sd	zero, 0(s8)
00f2d8: 380225a3   sw	zero, 907(tp)
00f2dc: 9ddfa06f   j	-22052
00f2e0: c0001073   unimp
00f2e4: 00000013   nop
00f2e8: 01b23683   ld	a3, 27(tp)
00f2ec: 30226703   lwu	a4, 770(tp)
00f2f0: 02c26783   lwu	a5, 44(tp)
00f2f4: 02071713   slli	a4, a4, 32
00f2f8: 02075713   srli	a4, a4, 32
00f2fc: 00d70733   add	a4, a4, a3
00f300: 00e231a3   sd	a4, 3(tp)
00f304: 0037e793   ori	a5, a5, 3
00f308: 02079793   slli	a5, a5, 32
00f30c: 0207d793   srli	a5, a5, 32
00f310: 00f231a3   sd	a5, 3(tp)
00f314: 00a22023   sw	a0, 0(tp)
00f318: 00022023   sw	zero, 0(tp)
00f31c: 30226783   lwu	a5, 770(tp)
00f320: 00f22023   sw	a5, 0(tp)
00f324: 995fa06f   j	-22124
00f328: c0001073   unimp
00f32c: 00000013   nop
00f330: 30226703   lwu	a4, 770(tp)
00f334: 00100793   li	a5, 1
00f338: 00377693   andi	a3, a4, 3
00f33c: 00d797bb   sllw	a5, a5, a3
00f340: 28edaa23   sw	a4, 660(s11)
00f344: 0037f793   andi	a5, a5, 3
00f348: 00f22e23   sw	a5, 28(tp)
00f34c: 1ef22823   sw	a5, 496(tp)
00f350: c00037b7   lui	a5, 786435
00f354: a007879b   addiw	a5, a5, -1536
00f358: 00f22023   sw	a5, 0(tp)
00f35c: 00e22023   sw	a4, 0(tp)
00f360: 8ae1a823   sw	a4, -1872(gp)
00f364: 955fa06f   j	-22188
00f368: c0001073   unimp
00f36c: 00000013   nop
00f370: 30226703   lwu	a4, 770(tp)
00f374: 30226783   lwu	a5, 770(tp)
00f378: 00a22023   sw	a0, 0(tp)
00f37c: 00e22023   sw	a4, 0(tp)
00f380: 00f22023   sw	a5, 0(tp)
00f384: 02071713   slli	a4, a4, 32
00f388: 02075713   srli	a4, a4, 32
00f38c: 02079793   slli	a5, a5, 32
00f390: 00e7e7b3   or	a5, a5, a4
00f394: 06f239a3   sd	a5, 115(tp)
00f398: 07323783   ld	a5, 115(tp)
00f39c: 0007a583   lw	a1, 0(a5)
00f3a0: 0087a703   lw	a4, 8(a5)
00f3a4: 0187a603   lw	a2, 24(a5)
00f3a8: 01c7a503   lw	a0, 28(a5)
00f3ac: 0207a683   lw	a3, 32(a5)
00f3b0: 0005859b   sext.w	a1, a1
00f3b4: 02051513   slli	a0, a0, 32
00f3b8: 02055513   srli	a0, a0, 32
00f3bc: 02069693   slli	a3, a3, 32
00f3c0: 0007071b   sext.w	a4, a4
00f3c4: 0006061b   sext.w	a2, a2
00f3c8: 00a6e6b3   or	a3, a3, a0
00f3cc: 06d239a3   sd	a3, 115(tp)
00f3d0: 07323503   ld	a0, 115(tp)
00f3d4: 000106b7   lui	a3, 16
00f3d8: 00b686bb   addw	a3, a3, a1
00f3dc: 00070593   mv	a1, a4
00f3e0: 00e6f663   bgeu	a3, a4, 12
00f3e4: 100005b7   lui	a1, 65536
00f3e8: 00e585bb   addw	a1, a1, a4
00f3ec: 1ef23a23   sd	a5, 500(tp)
00f3f0: 1eb22b23   sw	a1, 502(tp)
00f3f4: 1ec22ba3   sw	a2, 503(tp)
00f3f8: 1ea23c23   sd	a0, 504(tp)
00f3fc: 90ed2c23   sw	a4, -1768(s10)
00f400: 8b9fa06f   j	-22344
00f404: c0001073   unimp
00f408: 00050f93   mv	t6, a0
00f40c: 30226803   lwu	a6, 770(tp)
00f410: 30226303   lwu	t1, 770(tp)
00f414: 0003031b   sext.w	t1, t1
00f418: 01a23783   ld	a5, 26(tp)
00f41c: 02081813   slli	a6, a6, 32
00f420: 02085813   srli	a6, a6, 32
00f424: 00f80833   add	a6, a6, a5
00f428: 30226f03   lwu	t5, 770(tp)
00f42c: 30226583   lwu	a1, 770(tp)
00f430: 0005889b   sext.w	a7, a1
00f434: 00088e13   mv	t3, a7
00f438: 30223283   ld	t0, 770(tp)
00f43c: 30223503   ld	a0, 770(tp)
00f440: 01cf571b   srliw	a4, t5, 28
00f444: 01ff569b   srliw	a3, t5, 31
00f448: 01df561b   srliw	a2, t5, 29
00f44c: 00177e93   andi	t4, a4, 1
00f450: 0016939b   slliw	t2, a3, 1
00f454: 0026161b   slliw	a2, a2, 2
00f458: 01bf579b   srliw	a5, t5, 27
00f45c: 007eeeb3   or	t4, t4, t2
00f460: 00467613   andi	a2, a2, 4
00f464: 0037979b   slliw	a5, a5, 3
00f468: 0087f793   andi	a5, a5, 8
00f46c: 00ceeeb3   or	t4, t4, a2
00f470: 00feeeb3   or	t4, t4, a5
00f474: 400007b7   lui	a5, 262144
00f478: 00ff77b3   and	a5, t5, a5
00f47c: 000e8e9b   sext.w	t4, t4
00f480: 02078263   beqz	a5, 36
00f484: 02051793   slli	a5, a0, 32
00f488: 0057e7b3   or	a5, a5, t0
00f48c: 06f239a3   sd	a5, 115(tp)
00f490: 07323783   ld	a5, 115(tp)
00f494: 0007a783   lw	a5, 0(a5)
00f498: 0007861b   sext.w	a2, a5
00f49c: 1317ea63   bltu	a5, a7, 308
00f4a0: 00058e1b   sext.w	t3, a1
00f4a4: 30226503   lwu	a0, 770(tp)
00f4a8: 0005051b   sext.w	a0, a0
00f4ac: 30226403   lwu	s0, 770(tp)
00f4b0: 0004041b   sext.w	s0, s0
00f4b4: 200e0263   beqz	t3, 516
00f4b8: 00a26283   lwu	t0, 10(tp)
00f4bc: c0010637   lui	a2, 786448
00f4c0: 01ff579b   srliw	a5, t5, 31
00f4c4: 00378793   addi	a5, a5, 3
00f4c8: 0102d29b   srliw	t0, t0, 16
00f4cc: fff60613   addi	a2, a2, -1
00f4d0: 0107979b   slliw	a5, a5, 16
00f4d4: 00cfffb3   and	t6, t6, a2
00f4d8: 0012f293   andi	t0, t0, 1
00f4dc: 000f0f1b   sext.w	t5, t5
00f4e0: 00ffefb3   or	t6, t6, a5
00f4e4: 0c029c63   bnez	t0, 216
00f4e8: 00022ca3   sw	zero, 25(tp)
00f4ec: 31422003   lw	zero, 788(tp)
00f4f0: 32023783   ld	a5, 800(tp)
00f4f4: 0047f793   andi	a5, a5, 4
00f4f8: fe079ce3   bnez	a5, -8
00f4fc: f1402773   csrr	a4, mhartid
00f500: 30e7071b   addiw	a4, a4, 782
00f504: 02071713   slli	a4, a4, 32
00f508: 00c00793   li	a5, 12
00f50c: 000f8f9b   sext.w	t6, t6
00f510: 02075713   srli	a4, a4, 32
00f514: 0cf50263   beq	a0, a5, 196
00f518: 0103509b   srliw	ra, t1, 16
00f51c: 02051513   slli	a0, a0, 32
00f520: 03031313   slli	t1, t1, 48
00f524: 00000693   li	a3, 0
00f528: 00300893   li	a7, 3
00f52c: 00e20733   add	a4, tp, a4
00f530: 03035313   srli	t1, t1, 48
00f534: 02055513   srli	a0, a0, 32
00f538: 09023923   sd	a6, 146(tp)
00f53c: 09123923   sd	a7, 146(tp)
00f540: 00076583   lwu	a1, 0(a4)
00f544: 0005839b   sext.w	t2, a1
00f548: 00076603   lwu	a2, 0(a4)
00f54c: 0006049b   sext.w	s1, a2
00f550: 00076783   lwu	a5, 0(a4)
00f554: 0007891b   sext.w	s2, a5
00f558: 04038063   beqz	t2, 64
00f55c: 02048e63   beqz	s1, 60
00f560: 02090c63   beqz	s2, 56
00f564: 02522423   sw	t0, 40(tp)
00f568: 01f22023   sw	t6, 0(tp)
00f56c: 0085959b   slliw	a1, a1, 8
00f570: 00bee5b3   or	a1, t4, a1
00f574: 00b22023   sw	a1, 0(tp)
00f578: 00a6161b   slliw	a2, a2, 10
00f57c: 00166633   or	a2, a2, ra
00f580: 00c22023   sw	a2, 0(tp)
00f584: 00a7979b   slliw	a5, a5, 10
00f588: 00f367b3   or	a5, t1, a5
00f58c: 00f22023   sw	a5, 0(tp)
00f590: 020f4263   bltz	t5, 36
00f594: 00822023   sw	s0, 0(tp)
00f598: 07426783   lwu	a5, 116(tp)
00f59c: 0007879b   sext.w	a5, a5
00f5a0: 12079a63   bnez	a5, 308
00f5a4: 0016869b   addiw	a3, a3, 1
00f5a8: 10de0863   beq	t3, a3, 272
00f5ac: 00a80833   add	a6, a6, a0
00f5b0: f89ff06f   j	-120
00f5b4: 00d22023   sw	a3, 0(tp)
00f5b8: fddff06f   j	-36
00f5bc: 00177793   andi	a5, a4, 1
00f5c0: 00300713   li	a4, 3
00f5c4: 02e787bb   mulw	a5, a5, a4
00f5c8: 00d782bb   addw	t0, a5, a3
00f5cc: f1dff06f   j	-228
00f5d0: 00060593   mv	a1, a2
00f5d4: ecdff06f   j	-308
00f5d8: 00010937   lui	s2, 16
00f5dc: 03031393   slli	t2, t1, 48
00f5e0: 000e0513   mv	a0, t3
00f5e4: fff9091b   addiw	s2, s2, -1
00f5e8: 00e20733   add	a4, tp, a4
00f5ec: 0103509b   srliw	ra, t1, 16
00f5f0: 000104b7   lui	s1, 16
00f5f4: 0303d393   srli	t2, t2, 48
00f5f8: 00050693   mv	a3, a0
00f5fc: 00956463   bltu	a0, s1, 8
00f600: 00090693   mv	a3, s2
00f604: 0006889b   sext.w	a7, a3
00f608: 09023923   sd	a6, 146(tp)
00f60c: 0016979b   slliw	a5, a3, 1
00f610: 00d787bb   addw	a5, a5, a3
00f614: 02079793   slli	a5, a5, 32
00f618: 0207d793   srli	a5, a5, 32
00f61c: 08f23923   sd	a5, 146(tp)
00f620: 40a8833b   subw	t1, a7, a0
00f624: 00088793   mv	a5, a7
00f628: 01c3033b   addw	t1, t1, t3
00f62c: 00076583   lwu	a1, 0(a4)
00f630: 0005899b   sext.w	s3, a1
00f634: 00076603   lwu	a2, 0(a4)
00f638: 00060a1b   sext.w	s4, a2
00f63c: 00076683   lwu	a3, 0(a4)
00f640: 00068a9b   sext.w	s5, a3
00f644: 04098063   beqz	s3, 64
00f648: 020a0e63   beqz	s4, 60
00f64c: 020a8c63   beqz	s5, 56
00f650: 02522423   sw	t0, 40(tp)
00f654: 01f22023   sw	t6, 0(tp)
00f658: 0085959b   slliw	a1, a1, 8
00f65c: 00bee5b3   or	a1, t4, a1
00f660: 00b22023   sw	a1, 0(tp)
00f664: 00a6161b   slliw	a2, a2, 10
00f668: 00166633   or	a2, a2, ra
00f66c: 00c22023   sw	a2, 0(tp)
00f670: 00a6969b   slliw	a3, a3, 10
00f674: 00d3e6b3   or	a3, t2, a3
00f678: 00d22023   sw	a3, 0(tp)
00f67c: 060f4063   bltz	t5, 96
00f680: 00822023   sw	s0, 0(tp)
00f684: fff7879b   addiw	a5, a5, -1
00f688: fa0792e3   bnez	a5, -92
00f68c: 02089693   slli	a3, a7, 32
00f690: 0206d693   srli	a3, a3, 32
00f694: 00169793   slli	a5, a3, 1
00f698: 00d787b3   add	a5, a5, a3
00f69c: 00279793   slli	a5, a5, 2
00f6a0: 4115053b   subw	a0, a0, a7
00f6a4: 00f80833   add	a6, a6, a5
00f6a8: 07426783   lwu	a5, 116(tp)
00f6ac: 0007879b   sext.w	a5, a5
00f6b0: 02079263   bnez	a5, 36
00f6b4: f40512e3   bnez	a0, -188
00f6b8: 0ac26783   lwu	a5, 172(tp)
00f6bc: 0007879b   sext.w	a5, a5
00f6c0: 00078a63   beqz	a5, 20
00f6c4: 06022ea3   sw	zero, 125(tp)
00f6c8: 00022023   sw	zero, 0(tp)
00f6cc: 00200793   li	a5, 2
00f6d0: 00f22023   sw	a5, 0(tp)
00f6d4: de4fa06f   j	-23068
00f6d8: c0001073   unimp
00f6dc: 40f306bb   subw	a3, t1, a5
00f6e0: 00d22023   sw	a3, 0(tp)
00f6e4: f9dff06f   j	-100
00f6e8: 32023783   ld	a5, 800(tp)
00f6ec: 0047f793   andi	a5, a5, 4
00f6f0: fe079ce3   bnez	a5, -8
00f6f4: 1f423783   ld	a5, 500(tp)
00f6f8: 1f626803   lwu	a6, 502(tp)
00f6fc: 1f823703   ld	a4, 504(tp)
00f700: 30226883   lwu	a7, 770(tp)
00f704: 00088e1b   sext.w	t3, a7
00f708: 30226e83   lwu	t4, 770(tp)
00f70c: 30226303   lwu	t1, 770(tp)
00f710: 0003061b   sext.w	a2, t1
00f714: 1f726783   lwu	a5, 503(tp)
00f718: fff7859b   addiw	a1, a5, -1
00f71c: 0105f5b3   and	a1, a1, a6
00f720: 0107f6b3   and	a3, a5, a6
00f724: 02059793   slli	a5, a1, 32
00f728: 0006869b   sext.w	a3, a3
00f72c: 01c7d593   srli	a1, a5, 28
00f730: 00d036b3   snez	a3, a3
00f734: 00b705b3   add	a1, a4, a1
00f738: 00c5a783   lw	a5, 12(a1)
00f73c: 0007851b   sext.w	a0, a5
00f740: 07426783   lwu	a5, 116(tp)
00f744: 0007879b   sext.w	a5, a5
00f748: 1a079663   bnez	a5, 428
00f74c: 00157793   andi	a5, a0, 1
00f750: fef694e3   bne	a3, a5, -24
00f754: ff0007b7   lui	a5, 1044480
00f758: 00fef7b3   and	a5, t4, a5
00f75c: 018ede9b   srliw	t4, t4, 24
00f760: 00078b1b   sext.w	s6, a5
00f764: 0a0efe93   andi	t4, t4, 160
00f768: 1f726383   lwu	t2, 503(tp)
00f76c: 0003839b   sext.w	t2, t2
00f770: 00022ca3   sw	zero, 25(tp)
00f774: 31422003   lw	zero, 788(tp)
00f778: 918d2683   lw	a3, -1768(s10)
00f77c: 02081793   slli	a5, a6, 32
00f780: 000105b7   lui	a1, 16
00f784: 02069693   slli	a3, a3, 32
00f788: 0206d693   srli	a3, a3, 32
00f78c: 0207d793   srli	a5, a5, 32
00f790: 00b686b3   add	a3, a3, a1
00f794: 00f6f863   bgeu	a3, a5, 16
00f798: ff100693   li	a3, -15
00f79c: 01c69693   slli	a3, a3, 28
00f7a0: 00d787b3   add	a5, a5, a3
00f7a4: 0007879b   sext.w	a5, a5
00f7a8: 00200693   li	a3, 2
00f7ac: 06d22f23   sw	a3, 126(tp)
00f7b0: 03089893   slli	a7, a7, 48
00f7b4: 0308d893   srli	a7, a7, 48
00f7b8: 01122023   sw	a7, 0(tp)
00f7bc: 010e5e1b   srliw	t3, t3, 16
00f7c0: 01c22023   sw	t3, 0(tp)
00f7c4: 01622023   sw	s6, 0(tp)
00f7c8: 0095559b   srliw	a1, a0, 9
00f7cc: 00f586bb   addw	a3, a1, a5
00f7d0: 00068593   mv	a1, a3
00f7d4: 00257813   andi	a6, a0, 2
00f7d8: 120e9263   bnez	t4, 292
00f7dc: 0085551b   srliw	a0, a0, 8
00f7e0: 00157513   andi	a0, a0, 1
00f7e4: 3c051e63   bnez	a0, 988
00f7e8: 0c081c63   bnez	a6, 216
00f7ec: f1402573   csrr	a0, mhartid
00f7f0: 30e5051b   addiw	a0, a0, 782
00f7f4: 02051513   slli	a0, a0, 32
00f7f8: 02055513   srli	a0, a0, 32
00f7fc: c00559b7   lui	s3, 786517
00f800: 00020a93   mv	s5, tp
00f804: 00010937   lui	s2, 16
00f808: d009899b   addiw	s3, s3, -768
00f80c: 00a20533   add	a0, tp, a0
00f810: 001b6a13   ori	s4, s6, 1
00f814: 918d2583   lw	a1, -1768(s10)
00f818: 0005889b   sext.w	a7, a1
00f81c: 48b7f063   bgeu	a5, a1, 1152
00f820: 5716ec63   bltu	a3, a7, 1400
00f824: 40f8883b   subw	a6, a7, a5
00f828: 010b6333   or	t1, s6, a6
00f82c: 0003031b   sext.w	t1, t1
00f830: 1f726e03   lwu	t3, 503(tp)
00f834: fffe059b   addiw	a1, t3, -1
00f838: 00b7f5b3   and	a1, a5, a1
00f83c: 00b80f3b   addw	t5, a6, a1
00f840: 000e0e9b   sext.w	t4, t3
00f844: 0005859b   sext.w	a1, a1
00f848: 6ddf7263   bgeu	t5, t4, 1732
00f84c: 02059e13   slli	t3, a1, 32
00f850: 01ce5593   srli	a1, t3, 28
00f854: 00b705b3   add	a1, a4, a1
00f858: 00b231a3   sd	a1, 3(tp)
00f85c: 0028159b   slliw	a1, a6, 2
00f860: 02059593   slli	a1, a1, 32
00f864: 0205d593   srli	a1, a1, 32
00f868: 00b231a3   sd	a1, 3(tp)
00f86c: 1f526583   lwu	a1, 501(tp)
00f870: 00b22023   sw	a1, 0(tp)
00f874: 01236333   or	t1, t1, s2
00f878: 00622023   sw	t1, 0(tp)
00f87c: 00f22023   sw	a5, 0(tp)
00f880: 00c22023   sw	a2, 0(tp)
00f884: 0113f7b3   and	a5, t2, a7
00f888: 00f035b3   snez	a1, a5
00f88c: fff5c593   not	a1, a1
00f890: 00f03833   snez	a6, a5
00f894: 0005859b   sext.w	a1, a1
00f898: 00088793   mv	a5, a7
00f89c: 0015f893   andi	a7, a1, 1
00f8a0: 2d089e63   bne	a7, a6, 732
00f8a4: 56d7fa63   bgeu	a5, a3, 1396
00f8a8: 1f523803   ld	a6, 501(tp)
00f8ac: 02085813   srli	a6, a6, 32
00f8b0: 01022023   sw	a6, 0(tp)
00f8b4: 00f22023   sw	a5, 0(tp)
00f8b8: 0025f593   andi	a1, a1, 2
00f8bc: f4058ce3   beqz	a1, -168
00f8c0: 0017879b   addiw	a5, a5, 1
00f8c4: 1f423683   ld	a3, 500(tp)
00f8c8: 02079713   slli	a4, a5, 32
00f8cc: 00f6a423   sw	a5, 8(a3)
00f8d0: 00100693   li	a3, 1
00f8d4: 02069693   slli	a3, a3, 32
00f8d8: 02075713   srli	a4, a4, 32
00f8dc: 00d76733   or	a4, a4, a3
00f8e0: 1ee23b23   sd	a4, 502(tp)
00f8e4: 1f523703   ld	a4, 501(tp)
00f8e8: 02075713   srli	a4, a4, 32
00f8ec: 00e22023   sw	a4, 0(tp)
00f8f0: 00f22023   sw	a5, 0(tp)
00f8f4: bc4fa06f   j	-23612
00f8f8: c0001073   unimp
00f8fc: fc0812e3   bnez	a6, -60
00f900: f1402573   csrr	a0, mhartid
00f904: 30e5051b   addiw	a0, a0, 782
00f908: 02051513   slli	a0, a0, 32
00f90c: 02055513   srli	a0, a0, 32
00f910: c00552b7   lui	t0, 786517
00f914: 00020093   mv	ra, tp
00f918: 02000493   li	s1, 32
00f91c: d002829b   addiw	t0, t0, -768
00f920: 00a20533   add	a0, tp, a0
00f924: 000f1417   auipc	s0, 241
00f928: 7f443403   ld	s0, 2036(s0)
00f92c: 001b6913   ori	s2, s6, 1
00f930: 918d2803   lw	a6, -1768(s10)
00f934: 40f688bb   subw	a7, a3, a5
00f938: 00088593   mv	a1, a7
00f93c: 0114f663   bgeu	s1, a7, 12
00f940: 02000593   li	a1, 32
00f944: 02000893   li	a7, 32
00f948: 1f726e03   lwu	t3, 503(tp)
00f94c: fffe0e9b   addiw	t4, t3, -1
00f950: 00f5833b   addw	t1, a1, a5
00f954: 01d7f833   and	a6, a5, t4
00f958: 01d37333   and	t1, t1, t4
00f95c: 0008081b   sext.w	a6, a6
00f960: 0003031b   sext.w	t1, t1
00f964: 000e0f1b   sext.w	t5, t3
00f968: 000e8f9b   sext.w	t6, t4
00f96c: 0015899b   addiw	s3, a1, 1
00f970: 1d036263   bltu	t1, a6, 452
00f974: 02081593   slli	a1, a6, 32
00f978: 01c5d813   srli	a6, a1, 28
00f97c: 01070833   add	a6, a4, a6
00f980: 09023923   sd	a6, 146(tp)
00f984: 0029999b   slliw	s3, s3, 2
00f988: 02099993   slli	s3, s3, 32
00f98c: 0209d993   srli	s3, s3, 32
00f990: 09323923   sd	s3, 146(tp)
00f994: 00ff7ab3   and	s5, t5, a5
00f998: 00056983   lwu	s3, 0(a0)
00f99c: 0009859b   sext.w	a1, s3
00f9a0: 00056e83   lwu	t4, 0(a0)
00f9a4: 000e8a1b   sext.w	s4, t4
00f9a8: 00056e03   lwu	t3, 0(a0)
00f9ac: 000e031b   sext.w	t1, t3
00f9b0: 00056803   lwu	a6, 0(a0)
00f9b4: 000a8b1b   sext.w	s6, s5
00f9b8: 01603b33   snez	s6, s6
00f9bc: 00187813   andi	a6, a6, 1
00f9c0: 0d0b1c63   bne	s6, a6, 216
00f9c4: 0015b593   seqz	a1, a1
00f9c8: 001a3a13   seqz	s4, s4
00f9cc: 014585bb   addw	a1, a1, s4
00f9d0: 00133313   seqz	t1, t1
00f9d4: 006585bb   addw	a1, a1, t1
00f9d8: 02059063   bnez	a1, 32
00f9dc: 00522023   sw	t0, 0(tp)
00f9e0: 01222023   sw	s2, 0(tp)
00f9e4: 00f22023   sw	a5, 0(tp)
00f9e8: 00c22023   sw	a2, 0(tp)
00f9ec: 01322023   sw	s3, 0(tp)
00f9f0: 01d22023   sw	t4, 0(tp)
00f9f4: 01c22023   sw	t3, 0(tp)
00f9f8: fff8889b   addiw	a7, a7, -1
00f9fc: 0017879b   addiw	a5, a5, 1
00fa00: f8089ae3   bnez	a7, -108
00fa04: 00056583   lwu	a1, 0(a0)
00fa08: 00056583   lwu	a1, 0(a0)
00fa0c: 00056583   lwu	a1, 0(a0)
00fa10: 00056583   lwu	a1, 0(a0)
00fa14: 00f3f833   and	a6, t2, a5
00fa18: 0008081b   sext.w	a6, a6
00fa1c: 0015f893   andi	a7, a1, 1
00fa20: 01003833   snez	a6, a6
00fa24: 0005859b   sext.w	a1, a1
00fa28: 03181663   bne	a6, a7, 44
00fa2c: 00d7e663   bltu	a5, a3, 12
00fa30: 0095d69b   srliw	a3, a1, 9
00fa34: 00f686bb   addw	a3, a3, a5
00fa38: 1f523803   ld	a6, 501(tp)
00fa3c: 02085813   srli	a6, a6, 32
00fa40: 01022023   sw	a6, 0(tp)
00fa44: 00f22023   sw	a5, 0(tp)
00fa48: 0025f593   andi	a1, a1, 2
00fa4c: ee0582e3   beqz	a1, -284
00fa50: e71ff06f   j	-400
00fa54: 1f726583   lwu	a1, 503(tp)
00fa58: fff5831b   addiw	t1, a1, -1
00fa5c: 0067f333   and	t1, a5, t1
00fa60: 00b7f8b3   and	a7, a5, a1
00fa64: 02031593   slli	a1, t1, 32
00fa68: 0008889b   sext.w	a7, a7
00fa6c: 01c5d313   srli	t1, a1, 28
00fa70: 011038b3   snez	a7, a7
00fa74: 00670333   add	t1, a4, t1
00fa78: 00c32583   lw	a1, 12(t1)
00fa7c: 0005859b   sext.w	a1, a1
00fa80: 07426803   lwu	a6, 116(tp)
00fa84: 0008081b   sext.w	a6, a6
00fa88: e60816e3   bnez	a6, -404
00fa8c: 0015f813   andi	a6, a1, 1
00fa90: ff0894e3   bne	a7, a6, -24
00fa94: f99ff06f   j	-104
00fa98: 0028931b   slliw	t1, a7, 2
00fa9c: 306225a3   sw	t1, 779(tp)
00faa0: 00b0b583   ld	a1, 11(ra)
00faa4: 00058263   beqz	a1, 4
00faa8: 00042023   sw	zero, 0(s0)
00faac: 30123583   ld	a1, 769(tp)
00fab0: 00058863   beqz	a1, 16
00fab4: 00000013   nop
00fab8: 30123583   ld	a1, 769(tp)
00fabc: fe059ce3   bnez	a1, -8
00fac0: 00fff5b3   and	a1, t6, a5
00fac4: 00f8883b   addw	a6, a7, a5
00fac8: 02059e93   slli	t4, a1, 32
00facc: 010ff833   and	a6, t6, a6
00fad0: 01cede13   srli	t3, t4, 28
00fad4: 0005859b   sext.w	a1, a1
00fad8: 0008081b   sext.w	a6, a6
00fadc: 01c70e33   add	t3, a4, t3
00fae0: 00b86e63   bltu	a6, a1, 28
00fae4: 09c23923   sd	t3, 146(tp)
00fae8: 0043031b   addiw	t1, t1, 4
00faec: 02031313   slli	t1, t1, 32
00faf0: 02035313   srli	t1, t1, 32
00faf4: 08623923   sd	t1, 146(tp)
00faf8: ea1ff06f   j	-352
00fafc: 09c23923   sd	t3, 146(tp)
00fb00: 40bf083b   subw	a6, t5, a1
00fb04: 0028181b   slliw	a6, a6, 2
00fb08: 02081813   slli	a6, a6, 32
00fb0c: 02085813   srli	a6, a6, 32
00fb10: 09023923   sd	a6, 146(tp)
00fb14: 08e23923   sd	a4, 146(tp)
00fb18: 41f8883b   subw	a6, a7, t6
00fb1c: 00b805bb   addw	a1, a6, a1
00fb20: 0025959b   slliw	a1, a1, 2
00fb24: 02059593   slli	a1, a1, 32
00fb28: 0205d593   srli	a1, a1, 32
00fb2c: 08b23923   sd	a1, 146(tp)
00fb30: e69ff06f   j	-408
00fb34: 02081993   slli	s3, a6, 32
00fb38: 01c9d313   srli	t1, s3, 28
00fb3c: 00670333   add	t1, a4, t1
00fb40: 08623923   sd	t1, 146(tp)
00fb44: 410e033b   subw	t1, t3, a6
00fb48: 0023131b   slliw	t1, t1, 2
00fb4c: 02031313   slli	t1, t1, 32
00fb50: 02035313   srli	t1, t1, 32
00fb54: 08623923   sd	t1, 146(tp)
00fb58: 08e23923   sd	a4, 146(tp)
00fb5c: 010585bb   addw	a1, a1, a6
00fb60: 41d585bb   subw	a1, a1, t4
00fb64: 0025959b   slliw	a1, a1, 2
00fb68: 02059593   slli	a1, a1, 32
00fb6c: 0205d593   srli	a1, a1, 32
00fb70: 08b23923   sd	a1, 146(tp)
00fb74: e21ff06f   j	-480
00fb78: 00068793   mv	a5, a3
00fb7c: 1f726583   lwu	a1, 503(tp)
00fb80: fff5831b   addiw	t1, a1, -1
00fb84: 0067f333   and	t1, a5, t1
00fb88: 00b7f8b3   and	a7, a5, a1
00fb8c: 02031593   slli	a1, t1, 32
00fb90: 0008889b   sext.w	a7, a7
00fb94: 01c5d313   srli	t1, a1, 28
00fb98: 011038b3   snez	a7, a7
00fb9c: 00670333   add	t1, a4, t1
00fba0: 00c32583   lw	a1, 12(t1)
00fba4: 0005859b   sext.w	a1, a1
00fba8: 07426803   lwu	a6, 116(tp)
00fbac: 0008081b   sext.w	a6, a6
00fbb0: d40812e3   bnez	a6, -700
00fbb4: 0015f813   andi	a6, a1, 1
00fbb8: ff0894e3   bne	a7, a6, -24
00fbbc: ce9ff06f   j	-792
00fbc0: c00558b7   lui	a7, 786517
00fbc4: f1402573   csrr	a0, mhartid
00fbc8: 30e5051b   addiw	a0, a0, 782
00fbcc: d008889b   addiw	a7, a7, -768
00fbd0: 02051513   slli	a0, a0, 32
00fbd4: 02055513   srli	a0, a0, 32
00fbd8: 01112223   sw	a7, 4(sp)
00fbdc: 001b6893   ori	a7, s6, 1
00fbe0: 00020413   mv	s0, tp
00fbe4: 00010ab7   lui	s5, 16
00fbe8: 00a20533   add	a0, tp, a0
00fbec: 01113423   sd	a7, 8(sp)
00fbf0: cc0818e3   bnez	a6, -816
00fbf4: 918d2803   lw	a6, -1768(s10)
00fbf8: 00080e1b   sext.w	t3, a6
00fbfc: 4107f063   bgeu	a5, a6, 1024
00fc00: 39c6e863   bltu	a3, t3, 912
00fc04: 40fe08bb   subw	a7, t3, a5
00fc08: 011b6eb3   or	t4, s6, a7
00fc0c: 000e8e9b   sext.w	t4, t4
00fc10: 1f726f03   lwu	t5, 503(tp)
00fc14: ffff081b   addiw	a6, t5, -1
00fc18: 0107f833   and	a6, a5, a6
00fc1c: 010882bb   addw	t0, a7, a6
00fc20: 000f0f9b   sext.w	t6, t5
00fc24: 0008081b   sext.w	a6, a6
00fc28: 5df2fa63   bgeu	t0, t6, 1492
00fc2c: 02081f13   slli	t5, a6, 32
00fc30: 01cf5813   srli	a6, t5, 28
00fc34: 01070833   add	a6, a4, a6
00fc38: 010231a3   sd	a6, 3(tp)
00fc3c: 0028981b   slliw	a6, a7, 2
00fc40: 02081813   slli	a6, a6, 32
00fc44: 02085813   srli	a6, a6, 32
00fc48: 010231a3   sd	a6, 3(tp)
00fc4c: 1f526803   lwu	a6, 501(tp)
00fc50: 01022023   sw	a6, 0(tp)
00fc54: 015eeeb3   or	t4, t4, s5
00fc58: 01d22023   sw	t4, 0(tp)
00fc5c: 00f22023   sw	a5, 0(tp)
00fc60: 00c22023   sw	a2, 0(tp)
00fc64: 01c3f8b3   and	a7, t2, t3
00fc68: 01103833   snez	a6, a7
00fc6c: fff84813   not	a6, a6
00fc70: 011038b3   snez	a7, a7
00fc74: 0008081b   sext.w	a6, a6
00fc78: 000e0793   mv	a5, t3
00fc7c: 00187e13   andi	t3, a6, 1
00fc80: 531e1a63   bne	t3, a7, 1332
00fc84: 1f523883   ld	a7, 501(tp)
00fc88: 0208d893   srli	a7, a7, 32
00fc8c: 01122023   sw	a7, 0(tp)
00fc90: 00f22023   sw	a5, 0(tp)
00fc94: 00287813   andi	a6, a6, 2
00fc98: f59ff06f   j	-168
00fc9c: 0f16ee63   bltu	a3, a7, 252
00fca0: 40f6833b   subw	t1, a3, a5
00fca4: 02000593   li	a1, 32
00fca8: 00030e13   mv	t3, t1
00fcac: 0065f663   bgeu	a1, t1, 12
00fcb0: 02000e13   li	t3, 32
00fcb4: 02000313   li	t1, 32
00fcb8: 1f726883   lwu	a7, 503(tp)
00fcbc: fff88e9b   addiw	t4, a7, -1
00fcc0: 00fe083b   addw	a6, t3, a5
00fcc4: 01d7f5b3   and	a1, a5, t4
00fcc8: 01d87833   and	a6, a6, t4
00fccc: 0005859b   sext.w	a1, a1
00fcd0: 0008081b   sext.w	a6, a6
00fcd4: 00088f1b   sext.w	t5, a7
00fcd8: 000e8f9b   sext.w	t6, t4
00fcdc: 001e029b   addiw	t0, t3, 1
00fce0: 26b86663   bltu	a6, a1, 620
00fce4: 02059813   slli	a6, a1, 32
00fce8: 01c85593   srli	a1, a6, 28
00fcec: 00b705b3   add	a1, a4, a1
00fcf0: 08b23923   sd	a1, 146(tp)
00fcf4: 0022959b   slliw	a1, t0, 2
00fcf8: 02059593   slli	a1, a1, 32
00fcfc: 0205d593   srli	a1, a1, 32
00fd00: 08b23923   sd	a1, 146(tp)
00fd04: 00ff7433   and	s0, t5, a5
00fd08: 00056283   lwu	t0, 0(a0)
00fd0c: 0002859b   sext.w	a1, t0
00fd10: 00056e83   lwu	t4, 0(a0)
00fd14: 000e809b   sext.w	ra, t4
00fd18: 00056e03   lwu	t3, 0(a0)
00fd1c: 000e089b   sext.w	a7, t3
00fd20: 00056803   lwu	a6, 0(a0)
00fd24: 0004049b   sext.w	s1, s0
00fd28: 009034b3   snez	s1, s1
00fd2c: 00187813   andi	a6, a6, 1
00fd30: 0f049a63   bne	s1, a6, 244
00fd34: 0015b593   seqz	a1, a1
00fd38: 0010b093   seqz	ra, ra
00fd3c: 001585bb   addw	a1, a1, ra
00fd40: 0018b893   seqz	a7, a7
00fd44: 011585bb   addw	a1, a1, a7
00fd48: 02059063   bnez	a1, 32
00fd4c: 01322023   sw	s3, 0(tp)
00fd50: 01422023   sw	s4, 0(tp)
00fd54: 00f22023   sw	a5, 0(tp)
00fd58: 00c22023   sw	a2, 0(tp)
00fd5c: 00522023   sw	t0, 0(tp)
00fd60: 01d22023   sw	t4, 0(tp)
00fd64: 01c22023   sw	t3, 0(tp)
00fd68: fff3031b   addiw	t1, t1, -1
00fd6c: 0017879b   addiw	a5, a5, 1
00fd70: f8031ae3   bnez	t1, -108
00fd74: 00056583   lwu	a1, 0(a0)
00fd78: 00056583   lwu	a1, 0(a0)
00fd7c: 00056583   lwu	a1, 0(a0)
00fd80: 00056583   lwu	a1, 0(a0)
00fd84: 00f3f833   and	a6, t2, a5
00fd88: 0008081b   sext.w	a6, a6
00fd8c: 0005859b   sext.w	a1, a1
00fd90: 01003833   snez	a6, a6
00fd94: b09ff06f   j	-1272
00fd98: 40f6883b   subw	a6, a3, a5
00fd9c: 010b68b3   or	a7, s6, a6
00fda0: 0008889b   sext.w	a7, a7
00fda4: 1f726303   lwu	t1, 503(tp)
00fda8: fff3059b   addiw	a1, t1, -1
00fdac: 00b7f5b3   and	a1, a5, a1
00fdb0: 00b80ebb   addw	t4, a6, a1
00fdb4: 00030e1b   sext.w	t3, t1
00fdb8: 0005859b   sext.w	a1, a1
00fdbc: 0dcefc63   bgeu	t4, t3, 216
00fdc0: 02059313   slli	t1, a1, 32
00fdc4: 01c35593   srli	a1, t1, 28
00fdc8: 00b705b3   add	a1, a4, a1
00fdcc: 00b231a3   sd	a1, 3(tp)
00fdd0: 0028159b   slliw	a1, a6, 2
00fdd4: 02059593   slli	a1, a1, 32
00fdd8: 0205d593   srli	a1, a1, 32
00fddc: 00b231a3   sd	a1, 3(tp)
00fde0: 1f526583   lwu	a1, 501(tp)
00fde4: 00b22023   sw	a1, 0(tp)
00fde8: 0128e8b3   or	a7, a7, s2
00fdec: 01122023   sw	a7, 0(tp)
00fdf0: 00f22023   sw	a5, 0(tp)
00fdf4: 00c22023   sw	a2, 0(tp)
00fdf8: 00d3f7b3   and	a5, t2, a3
00fdfc: 00f035b3   snez	a1, a5
00fe00: 0017b813   seqz	a6, a5
00fe04: 0017b793   seqz	a5, a5
00fe08: d6b818e3   bne	a6, a1, -656
00fe0c: fff7c793   not	a5, a5
00fe10: 0007859b   sext.w	a1, a5
00fe14: 00068793   mv	a5, a3
00fe18: 0095d69b   srliw	a3, a1, 9
00fe1c: 00f686bb   addw	a3, a3, a5
00fe20: a89ff06f   j	-1400
00fe24: 0023189b   slliw	a7, t1, 2
00fe28: 311225a3   sw	a7, 779(tp)
00fe2c: 00bab583   ld	a1, 11(s5)
00fe30: 00058263   beqz	a1, 4
00fe34: 000f1597   auipc	a1, 241
00fe38: 2e458593   addi	a1, a1, 740
00fe3c: 0005b583   ld	a1, 0(a1)
00fe40: 0005a023   sw	zero, 0(a1)
00fe44: 30123583   ld	a1, 769(tp)
00fe48: 00058863   beqz	a1, 16
00fe4c: 00000013   nop
00fe50: 30123583   ld	a1, 769(tp)
00fe54: fe059ce3   bnez	a1, -8
00fe58: 00fff833   and	a6, t6, a5
00fe5c: 00f305bb   addw	a1, t1, a5
00fe60: 02081e93   slli	t4, a6, 32
00fe64: 00bff5b3   and	a1, t6, a1
00fe68: 01cede13   srli	t3, t4, 28
00fe6c: 0008081b   sext.w	a6, a6
00fe70: 0005859b   sext.w	a1, a1
00fe74: 01c70e33   add	t3, a4, t3
00fe78: 0505ee63   bltu	a1, a6, 92
00fe7c: 09c23923   sd	t3, 146(tp)
00fe80: 0048859b   addiw	a1, a7, 4
00fe84: 02059593   slli	a1, a1, 32
00fe88: 0205d593   srli	a1, a1, 32
00fe8c: 08b23923   sd	a1, 146(tp)
00fe90: e79ff06f   j	-392
00fe94: 40b3033b   subw	t1, t1, a1
00fe98: 02059e13   slli	t3, a1, 32
00fe9c: 01ce5593   srli	a1, t3, 28
00fea0: 02031313   slli	t1, t1, 32
00fea4: 02035313   srli	t1, t1, 32
00fea8: 00b705b3   add	a1, a4, a1
00feac: 00b231a3   sd	a1, 3(tp)
00feb0: 00231593   slli	a1, t1, 2
00feb4: 00b231a3   sd	a1, 3(tp)
00feb8: 00e231a3   sd	a4, 3(tp)
00febc: 02081593   slli	a1, a6, 32
00fec0: 0205d593   srli	a1, a1, 32
00fec4: 406585b3   sub	a1, a1, t1
00fec8: 00259593   slli	a1, a1, 2
00fecc: 00b231a3   sd	a1, 3(tp)
00fed0: f11ff06f   j	-240
00fed4: 09c23923   sd	t3, 146(tp)
00fed8: 410f05bb   subw	a1, t5, a6
00fedc: 0025959b   slliw	a1, a1, 2
00fee0: 02059593   slli	a1, a1, 32
00fee4: 0205d593   srli	a1, a1, 32
00fee8: 08b23923   sd	a1, 146(tp)
00feec: 08e23923   sd	a4, 146(tp)
00fef0: 41f305bb   subw	a1, t1, t6
00fef4: 010585bb   addw	a1, a1, a6
00fef8: 0025959b   slliw	a1, a1, 2
00fefc: 02059593   slli	a1, a1, 32
00ff00: 0205d593   srli	a1, a1, 32
00ff04: 08b23923   sd	a1, 146(tp)
00ff08: e01ff06f   j	-512
00ff0c: 40be0e3b   subw	t3, t3, a1
00ff10: 02059e93   slli	t4, a1, 32
00ff14: 01ced593   srli	a1, t4, 28
00ff18: 020e1e13   slli	t3, t3, 32
00ff1c: 020e5e13   srli	t3, t3, 32
00ff20: 00b705b3   add	a1, a4, a1
00ff24: 00b231a3   sd	a1, 3(tp)
00ff28: 002e1593   slli	a1, t3, 2
00ff2c: 00b231a3   sd	a1, 3(tp)
00ff30: 00e231a3   sd	a4, 3(tp)
00ff34: 02081593   slli	a1, a6, 32
00ff38: 0205d593   srli	a1, a1, 32
00ff3c: 41c585b3   sub	a1, a1, t3
00ff40: 00259593   slli	a1, a1, 2
00ff44: 00b231a3   sd	a1, 3(tp)
00ff48: 925ff06f   j	-1756
00ff4c: 02059293   slli	t0, a1, 32
00ff50: 01c2d813   srli	a6, t0, 28
00ff54: 01070833   add	a6, a4, a6
00ff58: 09023923   sd	a6, 146(tp)
00ff5c: 40b8883b   subw	a6, a7, a1
00ff60: 0028181b   slliw	a6, a6, 2
00ff64: 02081813   slli	a6, a6, 32
00ff68: 02085813   srli	a6, a6, 32
00ff6c: 09023923   sd	a6, 146(tp)
00ff70: 08e23923   sd	a4, 146(tp)
00ff74: 41d585bb   subw	a1, a1, t4
00ff78: 01c585bb   addw	a1, a1, t3
00ff7c: 0025959b   slliw	a1, a1, 2
00ff80: 02059593   slli	a1, a1, 32
00ff84: 0205d593   srli	a1, a1, 32
00ff88: 08b23923   sd	a1, 146(tp)
00ff8c: d79ff06f   j	-648
00ff90: 40f585bb   subw	a1, a1, a5
00ff94: 00bb6833   or	a6, s6, a1
00ff98: 0008081b   sext.w	a6, a6
00ff9c: 1f726503   lwu	a0, 503(tp)
00ffa0: fff5061b   addiw	a2, a0, -1
00ffa4: 00c7f633   and	a2, a5, a2
00ffa8: 00c58e3b   addw	t3, a1, a2
00ffac: 0005089b   sext.w	a7, a0
00ffb0: 0006061b   sext.w	a2, a2
00ffb4: 1d1e7063   bgeu	t3, a7, 448
00ffb8: 02061513   slli	a0, a2, 32
00ffbc: 01c55613   srli	a2, a0, 28
00ffc0: 00c70733   add	a4, a4, a2
00ffc4: 00e231a3   sd	a4, 3(tp)
00ffc8: 0025959b   slliw	a1, a1, 2
00ffcc: 02059713   slli	a4, a1, 32
00ffd0: 02075713   srli	a4, a4, 32
00ffd4: 00e231a3   sd	a4, 3(tp)
00ffd8: 1f526703   lwu	a4, 501(tp)
00ffdc: 00e22023   sw	a4, 0(tp)
00ffe0: 00010737   lui	a4, 16
00ffe4: 00e86733   or	a4, a6, a4
00ffe8: 00e22023   sw	a4, 0(tp)
00ffec: 00f22023   sw	a5, 0(tp)
00fff0: 00622023   sw	t1, 0(tp)
00fff4: 00068793   mv	a5, a3
00fff8: 8c9ff06f   j	-1848
00fffc: f9c6eae3   bltu	a3, t3, -108
010000: 40f688bb   subw	a7, a3, a5
010004: 02000813   li	a6, 32
010008: 00088293   mv	t0, a7
01000c: 01187663   bgeu	a6, a7, 12
010010: 02000293   li	t0, 32
010014: 02000893   li	a7, 32
010018: 1f726e03   lwu	t3, 503(tp)
01001c: fffe009b   addiw	ra, t3, -1
010020: 00f28fbb   addw	t6, t0, a5
010024: 0017f833   and	a6, a5, ra
010028: 001fffb3   and	t6, t6, ra
01002c: 0008081b   sext.w	a6, a6
010030: 000f8f9b   sext.w	t6, t6
010034: 000e0e9b   sext.w	t4, t3
010038: 00008f1b   sext.w	t5, ra
01003c: 0012849b   addiw	s1, t0, 1
010040: 230fea63   bltu	t6, a6, 564
010044: 02081e13   slli	t3, a6, 32
010048: 01ce5813   srli	a6, t3, 28
01004c: 01070833   add	a6, a4, a6
010050: 09023923   sd	a6, 146(tp)
010054: 0024981b   slliw	a6, s1, 2
010058: 02081813   slli	a6, a6, 32
01005c: 02085813   srli	a6, a6, 32
010060: 09023923   sd	a6, 146(tp)
010064: 00feffb3   and	t6, t4, a5
010068: 00056483   lwu	s1, 0(a0)
01006c: 0004881b   sext.w	a6, s1
010070: 00056083   lwu	ra, 0(a0)
010074: 0000891b   sext.w	s2, ra
010078: 00056283   lwu	t0, 0(a0)
01007c: 00028e1b   sext.w	t3, t0
010080: 00056983   lwu	s3, 0(a0)
010084: 000f8a1b   sext.w	s4, t6
010088: 01403a33   snez	s4, s4
01008c: 0019f993   andi	s3, s3, 1
010090: 073a1a63   bne	s4, s3, 116
010094: 00183813   seqz	a6, a6
010098: 00193f93   seqz	t6, s2
01009c: 01f8083b   addw	a6, a6, t6
0100a0: 001e3e13   seqz	t3, t3
0100a4: 01c8083b   addw	a6, a6, t3
0100a8: 02081463   bnez	a6, 40
0100ac: 00412803   lw	a6, 4(sp)
0100b0: 01022023   sw	a6, 0(tp)
0100b4: 00813803   ld	a6, 8(sp)
0100b8: 01022023   sw	a6, 0(tp)
0100bc: 00f22023   sw	a5, 0(tp)
0100c0: 00c22023   sw	a2, 0(tp)
0100c4: 00922023   sw	s1, 0(tp)
0100c8: 00122023   sw	ra, 0(tp)
0100cc: 00522023   sw	t0, 0(tp)
0100d0: fff8889b   addiw	a7, a7, -1
0100d4: 0017879b   addiw	a5, a5, 1
0100d8: f80896e3   bnez	a7, -116
0100dc: 00056803   lwu	a6, 0(a0)
0100e0: 00056803   lwu	a6, 0(a0)
0100e4: 00056803   lwu	a6, 0(a0)
0100e8: 00056803   lwu	a6, 0(a0)
0100ec: 00f3f8b3   and	a7, t2, a5
0100f0: 0008889b   sext.w	a7, a7
0100f4: 0008081b   sext.w	a6, a6
0100f8: 011038b3   snez	a7, a7
0100fc: b8d7e0e3   bltu	a5, a3, -1152
010100: fc0ff06f   j	-2112
010104: 0028929b   slliw	t0, a7, 2
010108: 305225a3   sw	t0, 779(tp)
01010c: 00b43803   ld	a6, 11(s0)
010110: 00080263   beqz	a6, 4
010114: 000f1817   auipc	a6, 241
010118: 00480813   addi	a6, a6, 4
01011c: 00083803   ld	a6, 0(a6)
010120: 00082023   sw	zero, 0(a6)
010124: 30123803   ld	a6, 769(tp)
010128: 00080863   beqz	a6, 16
01012c: 00000013   nop
010130: 30123803   ld	a6, 769(tp)
010134: fe081ce3   bnez	a6, -8
010138: 00ff7833   and	a6, t5, a5
01013c: 00f88e3b   addw	t3, a7, a5
010140: 02081493   slli	s1, a6, 32
010144: 01cf7e33   and	t3, t5, t3
010148: 01c4d093   srli	ra, s1, 28
01014c: 0008081b   sext.w	a6, a6
010150: 000e0e1b   sext.w	t3, t3
010154: 001700b3   add	ra, a4, ra
010158: 0f0e6263   bltu	t3, a6, 228
01015c: 08123923   sd	ra, 146(tp)
010160: 0042881b   addiw	a6, t0, 4
010164: 02081813   slli	a6, a6, 32
010168: 02085813   srli	a6, a6, 32
01016c: 09023923   sd	a6, 146(tp)
010170: ef9ff06f   j	-264
010174: 40c5053b   subw	a0, a0, a2
010178: 02061893   slli	a7, a2, 32
01017c: 01c8d613   srli	a2, a7, 28
010180: 02051513   slli	a0, a0, 32
010184: 02055513   srli	a0, a0, 32
010188: 00c70633   add	a2, a4, a2
01018c: 00c231a3   sd	a2, 3(tp)
010190: 00251613   slli	a2, a0, 2
010194: 00c231a3   sd	a2, 3(tp)
010198: 00e231a3   sd	a4, 3(tp)
01019c: 02059713   slli	a4, a1, 32
0101a0: 02075713   srli	a4, a4, 32
0101a4: 40a70733   sub	a4, a4, a0
0101a8: 00271713   slli	a4, a4, 2
0101ac: 00e231a3   sd	a4, 3(tp)
0101b0: e29ff06f   j	-472
0101b4: 1f726803   lwu	a6, 503(tp)
0101b8: fff80e9b   addiw	t4, a6, -1
0101bc: 01d7feb3   and	t4, a5, t4
0101c0: 0107fe33   and	t3, a5, a6
0101c4: 020e9813   slli	a6, t4, 32
0101c8: 000e0e1b   sext.w	t3, t3
0101cc: 01c85e93   srli	t4, a6, 28
0101d0: 01c03e33   snez	t3, t3
0101d4: 01d70eb3   add	t4, a4, t4
0101d8: 00c0006f   j	12
0101dc: 00187893   andi	a7, a6, 1
0101e0: ab1e02e3   beq	t3, a7, -1372
0101e4: 00cea803   lw	a6, 12(t4)
0101e8: 0008081b   sext.w	a6, a6
0101ec: 07426883   lwu	a7, 116(tp)
0101f0: 0008889b   sext.w	a7, a7
0101f4: fe0884e3   beqz	a7, -24
0101f8: efcff06f   j	-2308
0101fc: 410f0f3b   subw	t5, t5, a6
010200: 02081f93   slli	t6, a6, 32
010204: 01cfd813   srli	a6, t6, 28
010208: 020f1f13   slli	t5, t5, 32
01020c: 020f5f13   srli	t5, t5, 32
010210: 01070833   add	a6, a4, a6
010214: 010231a3   sd	a6, 3(tp)
010218: 002f1813   slli	a6, t5, 2
01021c: 010231a3   sd	a6, 3(tp)
010220: 00e231a3   sd	a4, 3(tp)
010224: 02089813   slli	a6, a7, 32
010228: 02085813   srli	a6, a6, 32
01022c: 41e80833   sub	a6, a6, t5
010230: 00281813   slli	a6, a6, 2
010234: 010231a3   sd	a6, 3(tp)
010238: a15ff06f   j	-1516
01023c: 08123923   sd	ra, 146(tp)
010240: 410e8e3b   subw	t3, t4, a6
010244: 002e1e1b   slliw	t3, t3, 2
010248: 020e1e13   slli	t3, t3, 32
01024c: 020e5e13   srli	t3, t3, 32
010250: 09c23923   sd	t3, 146(tp)
010254: 08e23923   sd	a4, 146(tp)
010258: 41e88e3b   subw	t3, a7, t5
01025c: 010e083b   addw	a6, t3, a6
010260: 0028181b   slliw	a6, a6, 2
010264: 02081813   slli	a6, a6, 32
010268: 02085813   srli	a6, a6, 32
01026c: 09023923   sd	a6, 146(tp)
010270: df9ff06f   j	-520
010274: 02081493   slli	s1, a6, 32
010278: 01c4df93   srli	t6, s1, 28
01027c: 01f70fb3   add	t6, a4, t6
010280: 09f23923   sd	t6, 146(tp)
010284: 410e0e3b   subw	t3, t3, a6
010288: 002e1e1b   slliw	t3, t3, 2
01028c: 020e1e13   slli	t3, t3, 32
010290: 020e5e13   srli	t3, t3, 32
010294: 09c23923   sd	t3, 146(tp)
010298: 08e23923   sd	a4, 146(tp)
01029c: 4018083b   subw	a6, a6, ra
0102a0: 0058083b   addw	a6, a6, t0
0102a4: 0028181b   slliw	a6, a6, 2
0102a8: 02081813   slli	a6, a6, 32
0102ac: 02085813   srli	a6, a6, 32
0102b0: 09023923   sd	a6, 146(tp)
0102b4: db1ff06f   j	-592
0102b8: 30226683   lwu	a3, 770(tp)
0102bc: 0006861b   sext.w	a2, a3
0102c0: 30226783   lwu	a5, 770(tp)
0102c4: 0007859b   sext.w	a1, a5
0102c8: 30226703   lwu	a4, 770(tp)
0102cc: 0007081b   sext.w	a6, a4
0102d0: 30226883   lwu	a7, 770(tp)
0102d4: 02060c63   beqz	a2, 56
0102d8: 02058a63   beqz	a1, 52
0102dc: 02080863   beqz	a6, 48
0102e0: c0010637   lui	a2, 786448
0102e4: fff60613   addi	a2, a2, -1
0102e8: 00c57533   and	a0, a0, a2
0102ec: 00020637   lui	a2, 32
0102f0: 00c56533   or	a0, a0, a2
0102f4: 00a22023   sw	a0, 0(tp)
0102f8: 0107979b   slliw	a5, a5, 16
0102fc: 00d7e7b3   or	a5, a5, a3
010300: 00f22023   sw	a5, 0(tp)
010304: 00e22023   sw	a4, 0(tp)
010308: 01122023   sw	a7, 0(tp)
01030c: 9adf906f   j	-26196
010310: c0001073   unimp
010318: b841a703   lw	a4, -1148(gp)
01031c: 00100793   li	a5, 1
010320: 26f70e63   beq	a4, a5, 636
010324: 60abb603   ld	a2, 1546(s7)
010328: ffff88b7   lui	a7, 1048568
01032c: 011b88b3   add	a7, s7, a7
010330: 06060263   beqz	a2, 100
010334: 08423703   ld	a4, 132(tp)
010338: 2c071a63   bnez	a4, 724
01033c: 604bb703   ld	a4, 1540(s7)
010340: 02075693   srli	a3, a4, 32
010344: 0016869b   addiw	a3, a3, 1
010348: 02071313   slli	t1, a4, 32
01034c: 02069593   slli	a1, a3, 32
010350: 02035313   srli	t1, t1, 32
010354: 0065e5b3   or	a1, a1, t1
010358: 60bbb223   sd	a1, 1540(s7)
01035c: 1e022fa3   sw	zero, 511(tp)
010360: 0006859b   sext.w	a1, a3
010364: 0007071b   sext.w	a4, a4
010368: 2ae5e863   bltu	a1, a4, 688
01036c: 600bb523   sd	zero, 1546(s7)
010370: 1e022fa3   sw	zero, 511(tp)
010374: 60cbb783   ld	a5, 1548(s7)
010378: c000b737   lui	a4, 786443
01037c: e007071b   addiw	a4, a4, -512
010380: 4207d793   srai	a5, a5, 32
010384: 00e22023   sw	a4, 0(tp)
010388: 00f22023   sw	a5, 0(tp)
01038c: 04f22423   sw	a5, 72(tp)
010390: 31422003   lw	zero, 788(tp)
010394: 1f026783   lwu	a5, 496(tp)
010398: 02079793   slli	a5, a5, 32
01039c: 0207d793   srli	a5, a5, 32
0103a0: 00f23e23   sd	a5, 28(tp)
0103a4: 01523783   ld	a5, 21(tp)
0103a8: 0037f793   andi	a5, a5, 3
0103ac: 00020313   mv	t1, tp
0103b0: 00f206b3   add	a3, tp, a5
0103b4: 0826e603   lwu	a2, 130(a3)
0103b8: 0006061b   sext.w	a2, a2
0103bc: 30226703   lwu	a4, 770(tp)
0103c0: ffe77713   andi	a4, a4, -2
0103c4: 0007071b   sext.w	a4, a4
0103c8: 0e078263   beqz	a5, 228
0103cc: 0e061063   bnez	a2, 224
0103d0: fff78593   addi	a1, a5, -1
0103d4: 00b23d23   sd	a1, 26(tp)
0103d8: b801a603   lw	a2, -1152(gp)
0103dc: 0c061c63   bnez	a2, 216
0103e0: 00d6ee03   lwu	t3, 13(a3)
0103e4: 00a78813   addi	a6, a5, 10
0103e8: 01030833   add	a6, t1, a6
0103ec: 00086603   lwu	a2, 0(a6)
0103f0: 01c66633   or	a2, a2, t3
0103f4: 0006061b   sext.w	a2, a2
0103f8: 18061a63   bnez	a2, 404
0103fc: 00878793   addi	a5, a5, 8
010400: 00f307b3   add	a5, t1, a5
010404: 00a7a023   sw	a0, 0(a5)
010408: 00e7a023   sw	a4, 0(a5)
01040c: 84018613   addi	a2, gp, -1984
010410: 06059863   bnez	a1, 112
010414: 00200793   li	a5, 2
010418: 02f62223   sw	a5, 36(a2)
01041c: 040225a3   sw	zero, 75(tp)
010420: c00f17b7   lui	a5, 786673
010424: 00f22023   sw	a5, 0(tp)
010428: 00022023   sw	zero, 0(tp)
01042c: 00022023   sw	zero, 0(tp)
010430: 00022023   sw	zero, 0(tp)
010434: 00022023   sw	zero, 0(tp)
010438: 00022023   sw	zero, 0(tp)
01043c: 00022023   sw	zero, 0(tp)
010440: 00022023   sw	zero, 0(tp)
010444: 00022023   sw	zero, 0(tp)
010448: 00022023   sw	zero, 0(tp)
01044c: 00022023   sw	zero, 0(tp)
010450: 00022023   sw	zero, 0(tp)
010454: 00022023   sw	zero, 0(tp)
010458: 00022023   sw	zero, 0(tp)
01045c: 00022023   sw	zero, 0(tp)
010460: 00022023   sw	zero, 0(tp)
010464: 00022023   sw	zero, 0(tp)
010468: 40000713   li	a4, 1024
01046c: f14027f3   csrr	a5, mhartid
010470: 00f71733   sll	a4, a4, a5
010474: 31423783   ld	a5, 788(tp)
010478: 00f777b3   and	a5, a4, a5
01047c: fe079ce3   bnez	a5, -8
010480: 00459793   slli	a5, a1, 4
010484: 00f60633   add	a2, a2, a5
010488: 00063023   sd	zero, 0(a2)
01048c: 0406a8a3   sw	zero, 81(a3)
010490: 0406a9a3   sw	zero, 83(a3)
010494: 0806baa3   sd	zero, 149(a3)
010498: 000087b7   lui	a5, 8
01049c: 00f887b3   add	a5, a7, a5
0104a0: 70b7b703   ld	a4, 1803(a5)
0104a4: 0c071a63   bnez	a4, 212
0104a8: 00058e63   beqz	a1, 28
0104ac: 80df906f   j	-26612
0104b0: c0001073   unimp
0104b4: 00a00613   li	a2, 10
0104b8: 08c22ca3   sw	a2, 153(tp)
0104bc: b801a023   sw	zero, -1152(gp)
0104c0: f21ff06f   j	-224
0104c4: ba41a783   lw	a5, -1116(gp)
0104c8: 04078c63   beqz	a5, 88
0104cc: ba01a223   sw	zero, -1116(gp)
0104d0: 0a926783   lwu	a5, 169(tp)
0104d4: f1402773   csrr	a4, mhartid
0104d8: 0077f793   andi	a5, a5, 7
0104dc: 00377713   andi	a4, a4, 3
0104e0: 0027171b   slliw	a4, a4, 2
0104e4: 0047979b   slliw	a5, a5, 4
0104e8: 00e7e7b3   or	a5, a5, a4
0104ec: 1fa23703   ld	a4, 506(tp)
0104f0: 02479793   slli	a5, a5, 36
0104f4: 00f70733   add	a4, a4, a5
0104f8: 0000c637   lui	a2, 12
0104fc: 00c70733   add	a4, a4, a2
010500: 3bc72683   lw	a3, 956(a4)
010504: f8000737   lui	a4, 1015808
010508: fff70713   addi	a4, a4, -1
01050c: 00e6f6b3   and	a3, a3, a4
010510: 1fa23703   ld	a4, 506(tp)
010514: 00f707b3   add	a5, a4, a5
010518: 00c787b3   add	a5, a5, a2
01051c: 3ad7ae23   sw	a3, 956(a5)
010520: 1f923783   ld	a5, 505(tp)
010524: 0000c737   lui	a4, 12
010528: 00e787b3   add	a5, a5, a4
01052c: 1c87a783   lw	a5, 456(a5)
010530: f6078ee3   beqz	a5, -132
010534: 1f923783   ld	a5, 505(tp)
010538: 00e787b3   add	a5, a5, a4
01053c: 1c07a423   sw	zero, 456(a5)
010540: 1f923783   ld	a5, 505(tp)
010544: 00f70733   add	a4, a4, a5
010548: 1c876783   lwu	a5, 456(a4)
01054c: 00078263   beqz	a5, 4
010550: 0000c737   lui	a4, 12
010554: 1f923783   ld	a5, 505(tp)
010558: 00e787b3   add	a5, a5, a4
01055c: 1c87a783   lw	a5, 456(a5)
010560: fe079ae3   bnez	a5, -12
010564: 00023d23   sd	zero, 26(tp)
010568: 00b23783   ld	a5, 11(tp)
01056c: 00078263   beqz	a5, 4
010570: 0000000b   .word 0x0000000b
010574: f39ff06f   j	-200
010578: 7007b5a3   sd	zero, 1803(a5)
01057c: 1e032fa3   sw	zero, 511(t1)
010580: 00100593   li	a1, 1
010584: b0018513   addi	a0, gp, -1280
010588: 1c0050ef   jal	20928
01058c: 00a82023   sw	a0, 0(a6)
010590: 00176713   ori	a4, a4, 1
010594: 00e82023   sw	a4, 0(a6)
010598: e75ff06f   j	-396
01059c: 1f923783   ld	a5, 505(tp)
0105a0: 0000c737   lui	a4, 12
0105a4: 00e787b3   add	a5, a5, a4
0105a8: 1c87a783   lw	a5, 456(a5)
0105ac: d6078ce3   beqz	a5, -648
0105b0: 30226783   lwu	a5, 770(tp)
0105b4: 1f923783   ld	a5, 505(tp)
0105b8: 00e787b3   add	a5, a5, a4
0105bc: 1c07a423   sw	zero, 456(a5)
0105c0: 0001e7b7   lui	a5, 30
0105c4: 00fc87b3   add	a5, s9, a5
0105c8: c007a223   sw	zero, -1020(a5)
0105cc: 1f923783   ld	a5, 505(tp)
0105d0: 00e787b3   add	a5, a5, a4
0105d4: 1c87a783   lw	a5, 456(a5)
0105d8: fe079ae3   bnez	a5, -12
0105dc: 00023d23   sd	zero, 26(tp)
0105e0: c00017b7   lui	a5, 786433
0105e4: e007879b   addiw	a5, a5, -512
0105e8: 00f22023   sw	a5, 0(tp)
0105ec: 0ff00793   li	a5, 255
0105f0: 00f22023   sw	a5, 0(tp)
0105f4: f1402573   csrr	a0, mhartid
0105f8: 00000593   li	a1, 0
0105fc: ffff3097   auipc	ra, 1048563
010600: b0408093   addi	ra, ra, -1276
010604: ec4f906f   j	-26940
010608: c0001073   unimp
01060c: 30226783   lwu	a5, 770(tp)
010610: ea8f906f   j	-26968
010614: c0001073   unimp
010618: 60cba703   lw	a4, 1548(s7)
01061c: 0007071b   sext.w	a4, a4
010620: 080226a3   sw	zero, 141(tp)
010624: 00e228a3   sw	a4, 17(tp)
010628: 00c23123   sd	a2, 2(tp)
01062c: 00100613   li	a2, 1
010630: 02071713   slli	a4, a4, 32
010634: 02061613   slli	a2, a2, 32
010638: 02075713   srli	a4, a4, 32
01063c: 00c76733   or	a4, a4, a2
010640: 00e23123   sd	a4, 2(tp)
010644: 60ebb603   ld	a2, 1550(s7)
010648: 600bb503   ld	a0, 1536(s7)
01064c: 606bb583   ld	a1, 1542(s7)
010650: 610bb783   ld	a5, 1552(s7)
010654: 0007879b   sext.w	a5, a5
010658: 0c078e63   beqz	a5, 220
01065c: 00d7f7b3   and	a5, a5, a3
010660: 0007879b   sext.w	a5, a5
010664: 0a079e63   bnez	a5, 188
010668: 080221a3   sw	zero, 131(tp)
01066c: 40700713   li	a4, 1031
010670: 00e22023   sw	a4, 0(tp)
010674: 080221a3   sw	zero, 131(tp)
010678: 40f00713   li	a4, 1039
01067c: 00e22023   sw	a4, 0(tp)
010680: 080221a3   sw	zero, 131(tp)
010684: 41000713   li	a4, 1040
010688: 00e22023   sw	a4, 0(tp)
01068c: c0066737   lui	a4, 786534
010690: 8007071b   addiw	a4, a4, -2048
010694: 00e22023   sw	a4, 0(tp)
010698: 80000737   lui	a4, 524288
01069c: 00e22023   sw	a4, 0(tp)
0106a0: 00022023   sw	zero, 0(tp)
0106a4: 00022023   sw	zero, 0(tp)
0106a8: 00022023   sw	zero, 0(tp)
0106ac: 00022023   sw	zero, 0(tp)
0106b0: 00022023   sw	zero, 0(tp)
0106b4: 00010737   lui	a4, 16
0106b8: 2807071b   addiw	a4, a4, 640
0106bc: 00e22023   sw	a4, 0(tp)
0106c0: c00f1737   lui	a4, 786673
0106c4: 00e22023   sw	a4, 0(tp)
0106c8: 00022023   sw	zero, 0(tp)
0106cc: 00022023   sw	zero, 0(tp)
0106d0: 00022023   sw	zero, 0(tp)
0106d4: 00022023   sw	zero, 0(tp)
0106d8: 00022023   sw	zero, 0(tp)
0106dc: 00022023   sw	zero, 0(tp)
0106e0: 00022023   sw	zero, 0(tp)
0106e4: 00022023   sw	zero, 0(tp)
0106e8: 00022023   sw	zero, 0(tp)
0106ec: 00022023   sw	zero, 0(tp)
0106f0: 00022023   sw	zero, 0(tp)
0106f4: 00022023   sw	zero, 0(tp)
0106f8: 00022023   sw	zero, 0(tp)
0106fc: 00022023   sw	zero, 0(tp)
010700: 00022023   sw	zero, 0(tp)
010704: 00022023   sw	zero, 0(tp)
010708: 40000713   li	a4, 1024
01070c: f14026f3   csrr	a3, mhartid
010710: 00d71733   sll	a4, a4, a3
010714: 31423683   ld	a3, 788(tp)
010718: 00d776b3   and	a3, a4, a3
01071c: fe069ce3   bnez	a3, -8
010720: 0205d713   srli	a4, a1, 32
010724: 02f707bb   mulw	a5, a4, a5
010728: 02079793   slli	a5, a5, 32
01072c: 0207d793   srli	a5, a5, 32
010730: 00f60633   add	a2, a2, a5
010734: 30226783   lwu	a5, 770(tp)
010738: 00008737   lui	a4, 8
01073c: 02059793   slli	a5, a1, 32
010740: 00e88733   add	a4, a7, a4
010744: 0207d793   srli	a5, a5, 32
010748: 60873803   ld	a6, 1544(a4)
01074c: 00a787b3   add	a5, a5, a0
010750: 61873703   ld	a4, 1560(a4)
010754: 0006059b   sext.w	a1, a2
010758: 00a26683   lwu	a3, 10(tp)
01075c: 0106d69b   srliw	a3, a3, 16
010760: 0016f693   andi	a3, a3, 1
010764: 01123503   ld	a0, 17(tp)
010768: 00051a63   bnez	a0, 20
01076c: 00022c23   sw	zero, 24(tp)
010770: 1f126503   lwu	a0, 497(tp)
010774: 00a22023   sw	a0, 0(tp)
010778: 00022023   sw	zero, 0(tp)
01077c: 02071a63   bnez	a4, 52
010780: c0017537   lui	a0, 786455
010784: 00010737   lui	a4, 16
010788: 6005051b   addiw	a0, a0, 1536
01078c: fff70713   addi	a4, a4, -1
010790: 04080a63   beqz	a6, 84
010794: 02d22423   sw	a3, 40(tp)
010798: 00a22023   sw	a0, 0(tp)
01079c: 00e878b3   and	a7, a6, a4
0107a0: 01122023   sw	a7, 0(tp)
0107a4: 00b22023   sw	a1, 0(tp)
0107a8: 01085813   srli	a6, a6, 16
0107ac: fe5ff06f   j	-28
0107b0: 02d22423   sw	a3, 40(tp)
0107b4: c0017537   lui	a0, 786455
0107b8: 6005051b   addiw	a0, a0, 1536
0107bc: 00a22023   sw	a0, 0(tp)
0107c0: 00010537   lui	a0, 16
0107c4: fff50513   addi	a0, a0, -1
0107c8: 00a778b3   and	a7, a4, a0
0107cc: 01122023   sw	a7, 0(tp)
0107d0: 00b22023   sw	a1, 0(tp)
0107d4: 01075713   srli	a4, a4, 16
0107d8: 00a77733   and	a4, a4, a0
0107dc: 00b705bb   addw	a1, a4, a1
0107e0: fa1ff06f   j	-96
0107e4: 60cbb123   sd	a2, 1538(s7)
0107e8: 1e022fa3   sw	zero, 511(tp)
0107ec: 60fbb023   sd	a5, 1536(s7)
0107f0: 1e022fa3   sw	zero, 511(tp)
0107f4: 00f23fa3   sd	a5, 31(tp)
0107f8: 02f23023   sd	a5, 32(tp)
0107fc: 88f1b423   sd	a5, -1912(gp)
010800: cb8f906f   j	-27464
010804: c0001073   unimp
010808: 00000893   li	a7, 0
01080c: 01523783   ld	a5, 21(tp)
010810: 0037f793   andi	a5, a5, 3
010814: 02079c63   bnez	a5, 56
010818: f1402773   csrr	a4, mhartid
01081c: 00377713   andi	a4, a4, 3
010820: 00271713   slli	a4, a4, 2
010824: 00070893   mv	a7, a4
010828: 1fa23683   ld	a3, 506(tp)
01082c: 02471713   slli	a4, a4, 36
010830: 00d70733   add	a4, a4, a3
010834: 0000c6b7   lui	a3, 12
010838: 00d70733   add	a4, a4, a3
01083c: 01000693   li	a3, 16
010840: 3ed72223   sw	a3, 996(a4)
010844: 00100713   li	a4, 1
010848: 04e22523   sw	a4, 74(tp)
01084c: 30226603   lwu	a2, 770(tp)
010850: 00b78313   addi	t1, a5, 11
010854: 00020693   mv	a3, tp
010858: 00620eb3   add	t4, tp, t1
01085c: 000eef03   lwu	t5, 0(t4)
010860: 04178593   addi	a1, a5, 65
010864: 00b205b3   add	a1, tp, a1
010868: 00100713   li	a4, 1
01086c: 00e5a023   sw	a4, 0(a1)
010870: 8c8ca803   lw	a6, -1848(s9)
010874: 8ccca703   lw	a4, -1844(s9)
010878: 000c8e13   mv	t3, s9
01087c: 02081813   slli	a6, a6, 32
010880: 02085813   srli	a6, a6, 32
010884: 02071713   slli	a4, a4, 32
010888: 01076733   or	a4, a4, a6
01088c: 06e239a3   sd	a4, 115(tp)
010890: 07323803   ld	a6, 115(tp)
010894: ffff8737   lui	a4, 1048568
010898: 00eb8733   add	a4, s7, a4
01089c: 14080c63   beqz	a6, 344
0108a0: 1f026f83   lwu	t6, 496(tp)
0108a4: 020f9f93   slli	t6, t6, 32
0108a8: 020fdf93   srli	t6, t6, 32
0108ac: 01f23e23   sd	t6, 28(tp)
0108b0: 10000f93   li	t6, 256
0108b4: 0bf222a3   sw	t6, 165(tp)
0108b8: 31422003   lw	zero, 788(tp)
0108bc: 00082803   lw	a6, 0(a6)
0108c0: 0008081b   sext.w	a6, a6
0108c4: 71072023   sw	a6, 1792(a4)
0108c8: 1e022fa3   sw	zero, 511(tp)
0108cc: 1f026703   lwu	a4, 496(tp)
0108d0: 02071713   slli	a4, a4, 32
0108d4: 02075713   srli	a4, a4, 32
0108d8: 00e23e23   sd	a4, 28(tp)
0108dc: 0a0222a3   sw	zero, 165(tp)
0108e0: 31422003   lw	zero, 788(tp)
0108e4: 01e5a023   sw	t5, 0(a1)
0108e8: 00367f13   andi	t5, a2, 3
0108ec: 240f1463   bnez	t5, 584
0108f0: 30226f83   lwu	t6, 770(tp)
0108f4: 30226703   lwu	a4, 770(tp)
0108f8: 0167559b   srliw	a1, a4, 22
0108fc: 0015f593   andi	a1, a1, 1
010900: 02058063   beqz	a1, 32
010904: 02326583   lwu	a1, 35(tp)
010908: f1000837   lui	a6, 987136
01090c: 00f5f593   andi	a1, a1, 15
010910: fff80813   addi	a6, a6, -1
010914: 0185959b   slliw	a1, a1, 24
010918: 00e87733   and	a4, a6, a4
01091c: 00b76733   or	a4, a4, a1
010920: 001005b7   lui	a1, 256
010924: 00b775b3   and	a1, a4, a1
010928: 08059463   bnez	a1, 136
01092c: 0017881b   addiw	a6, a5, 1
010930: 0b0220a3   sw	a6, 161(tp)
010934: 84018293   addi	t0, gp, -1984
010938: 0242ae83   lw	t4, 36(t0)
01093c: 00200813   li	a6, 2
010940: 010e9463   bne	t4, a6, 8
010944: 8601a223   sw	zero, -1948(gp)
010948: 02061613   slli	a2, a2, 32
01094c: 020f9f93   slli	t6, t6, 32
010950: 02065613   srli	a2, a2, 32
010954: 00cfe633   or	a2, t6, a2
010958: 00668333   add	t1, a3, t1
01095c: 00036803   lwu	a6, 0(t1)
010960: 0242af83   lw	t6, 36(t0)
010964: 00100e93   li	t4, 1
010968: 0008039b   sext.w	t2, a6
01096c: 01df8a63   beq	t6, t4, 20
010970: 00300093   li	ra, 3
010974: 081f8863   beq	t6, ra, 144
010978: 00f68eb3   add	t4, a3, a5
01097c: 02ceb0a3   sd	a2, 33(t4)
010980: 00100e93   li	t4, 1
010984: 09d78663   beq	a5, t4, 140
010988: 06c239a3   sd	a2, 115(tp)
01098c: 07323583   ld	a1, 115(tp)
010990: 0007061b   sext.w	a2, a4
010994: 3a065c63   bgez	a2, 952
010998: 22039463   bnez	t2, 552
01099c: 00100793   li	a5, 1
0109a0: 04f220a3   sw	a5, 65(tp)
0109a4: 004007b7   lui	a5, 1024
0109a8: 92fe2423   sw	a5, -1752(t3)
0109ac: 0000006f   j	0
0109b0: 0007081b   sext.w	a6, a4
0109b4: 08084863   bltz	a6, 144
0109b8: fff78313   addi	t1, a5, -1
0109bc: 00f687b3   add	a5, a3, a5
0109c0: 0827e783   lwu	a5, 130(a5)
0109c4: 0007879b   sext.w	a5, a5
0109c8: 08079e63   bnez	a5, 156
0109cc: 30226783   lwu	a5, 770(tp)
0109d0: 30226783   lwu	a5, 770(tp)
0109d4: 03223783   ld	a5, 50(tp)
0109d8: 12078063   beqz	a5, 288
0109dc: 03523783   ld	a5, 53(tp)
0109e0: 10078c63   beqz	a5, 280
0109e4: 00400593   li	a1, 4
0109e8: b78f80ef   jal	-31880
0109ec: accf906f   j	-27956
0109f0: c0001073   unimp
0109f4: fff00813   li	a6, -1
0109f8: 71072023   sw	a6, 1792(a4)
0109fc: 1e022fa3   sw	zero, 511(tp)
010a00: ee5ff06f   j	-284
010a04: f7d79ae3   bne	a5, t4, -140
010a08: 0102ae83   lw	t4, 16(t0)
010a0c: f60e86e3   beqz	t4, -148
010a10: f6059ce3   bnez	a1, -136
010a14: 02171713   slli	a4, a4, 33
010a18: 01f8181b   slliw	a6, a6, 31
010a1c: 02175713   srli	a4, a4, 33
010a20: 01076733   or	a4, a4, a6
010a24: 03223583   ld	a1, 50(tp)
010a28: 00058663   beqz	a1, 12
010a2c: 03523583   ld	a1, 53(tp)
010a30: fa059ae3   bnez	a1, -76
010a34: 08626583   lwu	a1, 134(tp)
010a38: ffc5859b   addiw	a1, a1, -4
010a3c: 00b2a023   sw	a1, 0(t0)
010a40: f49ff06f   j	-184
010a44: 000ee803   lwu	a6, 0(t4)
010a48: 0008081b   sext.w	a6, a6
010a4c: f60816e3   bnez	a6, -148
010a50: 00100793   li	a5, 1
010a54: 04f220a3   sw	a5, 65(tp)
010a58: 004007b7   lui	a5, 1024
010a5c: 92fe2423   sw	a5, -1752(t3)
010a60: 0000006f   j	0
010a64: 00100793   li	a5, 1
010a68: 04f224a3   sw	a5, 73(tp)
010a6c: 04f22523   sw	a5, 74(tp)
010a70: 00200e93   li	t4, 2
010a74: 00030463   beqz	t1, 8
010a78: 00400e93   li	t4, 4
010a7c: 05d227a3   sw	t4, 79(tp)
010a80: 09526783   lwu	a5, 149(tp)
010a84: 0007879b   sext.w	a5, a5
010a88: fe078ce3   beqz	a5, -8
010a8c: 02030463   beqz	t1, 40
010a90: 09426783   lwu	a5, 148(tp)
010a94: 0007881b   sext.w	a6, a5
010a98: 08081263   bnez	a6, 132
010a9c: 00100793   li	a5, 1
010aa0: 04f22723   sw	a5, 78(tp)
010aa4: 00200793   li	a5, 2
010aa8: 0af220a3   sw	a5, 161(tp)
010aac: 00400793   li	a5, 4
010ab0: 02fe8c63   beq	t4, a5, 56
010ab4: 00100793   li	a5, 1
010ab8: 00f23d23   sd	a5, 26(tp)
010abc: 09326783   lwu	a5, 147(tp)
010ac0: 0007881b   sext.w	a6, a5
010ac4: 00080c63   beqz	a6, 24
010ac8: 00f22aa3   sw	a5, 21(tp)
010acc: 00000793   li	a5, 0
010ad0: 30226e83   lwu	t4, 770(tp)
010ad4: 0017879b   addiw	a5, a5, 1
010ad8: fef81ce3   bne	a6, a5, -8
010adc: 00100793   li	a5, 1
010ae0: 0af220a3   sw	a5, 161(tp)
010ae4: 04f22723   sw	a5, 78(tp)
010ae8: 040225a3   sw	zero, 75(tp)
010aec: 040224a3   sw	zero, 73(tp)
010af0: 040227a3   sw	zero, 79(tp)
010af4: ee1ff06f   j	-288
010af8: 00431e93   slli	t4, t1, 4
010afc: 84018293   addi	t0, gp, -1984
010b00: 02c71813   slli	a6, a4, 44
010b04: 01d28eb3   add	t4, t0, t4
010b08: 02c85813   srli	a6, a6, 44
010b0c: 00030793   mv	a5, t1
010b10: 010ea223   sw	a6, 4(t4)
010b14: 00b30313   addi	t1, t1, 11
010b18: e31ff06f   j	-464
010b1c: 00f22b23   sw	a5, 22(tp)
010b20: 00000793   li	a5, 0
010b24: 30226283   lwu	t0, 770(tp)
010b28: 0017879b   addiw	a5, a5, 1
010b2c: fef81ce3   bne	a6, a5, -8
010b30: f6dff06f   j	-148
010b34: 01523703   ld	a4, 21(tp)
010b38: 5a070a63   beqz	a4, 1460
010b3c: 30226583   lwu	a1, 770(tp)
010b40: 30226703   lwu	a4, 770(tp)
010b44: 02059593   slli	a1, a1, 32
010b48: 0205d593   srli	a1, a1, 32
010b4c: 02071713   slli	a4, a4, 32
010b50: 00b76733   or	a4, a4, a1
010b54: 06e239a3   sd	a4, 115(tp)
010b58: 07323703   ld	a4, 115(tp)
010b5c: 00073583   ld	a1, 0(a4)
010b60: 30223703   ld	a4, 770(tp)
010b64: 30223503   ld	a0, 770(tp)
010b68: 02051513   slli	a0, a0, 32
010b6c: 00e56533   or	a0, a0, a4
010b70: 30226803   lwu	a6, 770(tp)
010b74: 30226703   lwu	a4, 770(tp)
010b78: 0086561b   srliw	a2, a2, 8
010b7c: 02081813   slli	a6, a6, 32
010b80: 02085813   srli	a6, a6, 32
010b84: 02071713   slli	a4, a4, 32
010b88: 00760613   addi	a2, a2, 7
010b8c: 01076733   or	a4, a4, a6
010b90: 00767613   andi	a2, a2, 7
010b94: 00500813   li	a6, 5
010b98: 00a77733   and	a4, a4, a0
010b9c: 00a5f5b3   and	a1, a1, a0
010ba0: 22c86863   bltu	a6, a2, 560
010ba4: 000f0517   auipc	a0, 240
010ba8: b4c50513   addi	a0, a0, -1204
010bac: 00261613   slli	a2, a2, 2
010bb0: 00a60633   add	a2, a2, a0
010bb4: 00062603   lw	a2, 0(a2)
010bb8: 00a60633   add	a2, a2, a0
010bbc: 00060067   jr	a2
010bc0: 00a32023   sw	a0, 0(t1)
010bc4: 00f68eb3   add	t4, a3, a5
010bc8: 00178813   addi	a6, a5, 1
010bcc: 01023d23   sd	a6, 26(tp)
010bd0: 01465513   srli	a0, a2, 20
010bd4: 00157513   andi	a0, a0, 1
010bd8: 02051a63   bnez	a0, 52
010bdc: 02079863   bnez	a5, 48
010be0: 0157551b   srliw	a0, a4, 21
010be4: 00157513   andi	a0, a0, 1
010be8: 04a22423   sw	a0, 72(tp)
010bec: 31422003   lw	zero, 788(tp)
010bf0: 0186551b   srliw	a0, a2, 24
010bf4: 00a22723   sw	a0, 14(tp)
010bf8: ba018513   addi	a0, gp, -1120
010bfc: 00052303   lw	t1, 0(a0)
010c00: 14031c63   bnez	t1, 344
010c04: 00100613   li	a2, 1
010c08: 00c52023   sw	a2, 0(a0)
010c0c: 00100613   li	a2, 1
010c10: 14cf8c63   beq	t6, a2, 344
010c14: 00300513   li	a0, 3
010c18: 0eaf8a63   beq	t6, a0, 244
010c1c: 3f400637   lui	a2, 259072
010c20: fff60613   addi	a2, a2, -1
010c24: 00e67633   and	a2, a2, a4
010c28: 0006061b   sext.w	a2, a2
010c2c: 0007071b   sext.w	a4, a4
010c30: 09eea623   sw	t5, 140(t4)
010c34: 00cea823   sw	a2, 16(t4)
010c38: 00100513   li	a0, 1
010c3c: ffe78313   addi	t1, a5, -2
010c40: 00656463   bltu	a0, t1, 8
010c44: 31422003   lw	zero, 788(tp)
010c48: 01068833   add	a6, a3, a6
010c4c: 00b83023   sd	a1, 0(a6)
010c50: 02061693   slli	a3, a2, 32
010c54: 00100613   li	a2, 1
010c58: 02061613   slli	a2, a2, 32
010c5c: 0206d693   srli	a3, a3, 32
010c60: 00c6e6b3   or	a3, a3, a2
010c64: 00d83023   sd	a3, 0(a6)
010c68: 00022023   sw	zero, 0(tp)
010c6c: 00022023   sw	zero, 0(tp)
010c70: 0147569b   srliw	a3, a4, 20
010c74: 00d22023   sw	a3, 0(tp)
010c78: 01475713   srli	a4, a4, 20
010c7c: 00177713   andi	a4, a4, 1
010c80: 20071a63   bnez	a4, 532
010c84: 08079063   bnez	a5, 128
010c88: 00022ba3   sw	zero, 23(tp)
010c8c: c00f17b7   lui	a5, 786673
010c90: 00f22023   sw	a5, 0(tp)
010c94: 00022023   sw	zero, 0(tp)
010c98: 00022023   sw	zero, 0(tp)
010c9c: 00022023   sw	zero, 0(tp)
010ca0: 00022023   sw	zero, 0(tp)
010ca4: 00022023   sw	zero, 0(tp)
010ca8: 00022023   sw	zero, 0(tp)
010cac: 00022023   sw	zero, 0(tp)
010cb0: 00022023   sw	zero, 0(tp)
010cb4: 00022023   sw	zero, 0(tp)
010cb8: 00022023   sw	zero, 0(tp)
010cbc: 00022023   sw	zero, 0(tp)
010cc0: 00022023   sw	zero, 0(tp)
010cc4: 00022023   sw	zero, 0(tp)
010cc8: 00022023   sw	zero, 0(tp)
010ccc: 00022023   sw	zero, 0(tp)
010cd0: 00022023   sw	zero, 0(tp)
010cd4: 40000793   li	a5, 1024
010cd8: f1402773   csrr	a4, mhartid
010cdc: 00e797b3   sll	a5, a5, a4
010ce0: 31423703   ld	a4, 788(tp)
010ce4: 00e7f733   and	a4, a5, a4
010ce8: fe071ce3   bnez	a4, -8
010cec: 1fa23703   ld	a4, 506(tp)
010cf0: 02489793   slli	a5, a7, 36
010cf4: 00e787b3   add	a5, a5, a4
010cf8: 0000c737   lui	a4, 12
010cfc: 00e787b3   add	a5, a5, a4
010d00: 3e07a223   sw	zero, 996(a5)
010d04: fb5f806f   j	-28748
010d08: c0001073   unimp
010d0c: f0c798e3   bne	a5, a2, -240
010d10: 0102af03   lw	t5, 16(t0)
010d14: f00f04e3   beqz	t5, -248
010d18: 0142a603   lw	a2, 20(t0)
010d1c: 01000513   li	a0, 16
010d20: 04061c63   bnez	a2, 88
010d24: 002f161b   slliw	a2, t5, 2
010d28: 02cf1513   slli	a0, t5, 44
010d2c: 02061613   slli	a2, a2, 32
010d30: 02c55513   srli	a0, a0, 44
010d34: 02065613   srli	a2, a2, 32
010d38: 40a7073b   subw	a4, a4, a0
010d3c: 00c585b3   add	a1, a1, a2
010d40: 03f2a223   sw	t6, 36(t0)
010d44: 8401a823   sw	zero, -1968(gp)
010d48: ed5ff06f   j	-300
010d4c: 00f68eb3   add	t4, a3, a5
010d50: 00aea4a3   sw	a0, 9(t4)
010d54: e75ff06f   j	-396
010d58: 02426703   lwu	a4, 36(tp)
010d5c: 0177171b   slliw	a4, a4, 23
010d60: 00e66733   or	a4, a2, a4
010d64: ea9ff06f   j	-344
010d68: 00479513   slli	a0, a5, 4
010d6c: 00a28633   add	a2, t0, a0
010d70: 00462603   lw	a2, 4(a2)
010d74: 02060063   beqz	a2, 32
010d78: 00a285b3   add	a1, t0, a0
010d7c: 02c61613   slli	a2, a2, 44
010d80: fff00337   lui	t1, 1048320
010d84: 0085b583   ld	a1, 8(a1)
010d88: 02c65613   srli	a2, a2, 44
010d8c: 00677733   and	a4, a4, t1
010d90: 00c76733   or	a4, a4, a2
010d94: 00a28533   add	a0, t0, a0
010d98: 00052f03   lw	t5, 0(a0)
010d9c: 00300613   li	a2, 3
010da0: 02c2a223   sw	a2, 36(t0)
010da4: 002f161b   slliw	a2, t5, 2
010da8: 02cf1513   slli	a0, t5, 44
010dac: 02061613   slli	a2, a2, 32
010db0: 02c55513   srli	a0, a0, 44
010db4: 02065613   srli	a2, a2, 32
010db8: 00100313   li	t1, 1
010dbc: 40a7073b   subw	a4, a4, a0
010dc0: 00c585b3   add	a1, a1, a2
010dc4: e4679ce3   bne	a5, t1, -424
010dc8: f7dff06f   j	-132
010dcc: 0ce5fa63   bgeu	a1, a4, 212
010dd0: 30226503   lwu	a0, 770(tp)
010dd4: 30226583   lwu	a1, 770(tp)
010dd8: 30226603   lwu	a2, 770(tp)
010ddc: 30226703   lwu	a4, 770(tp)
010de0: 30226703   lwu	a4, 770(tp)
010de4: 30226703   lwu	a4, 770(tp)
010de8: 00003737   lui	a4, 3
010dec: 0106581b   srliw	a6, a2, 16
010df0: 00f70713   addi	a4, a4, 15
010df4: 01077733   and	a4, a4, a6
010df8: 03061613   slli	a2, a2, 48
010dfc: 03065613   srli	a2, a2, 48
010e00: 0107171b   slliw	a4, a4, 16
010e04: 02051513   slli	a0, a0, 32
010e08: 02055513   srli	a0, a0, 32
010e0c: 00e66733   or	a4, a2, a4
010e10: 02059593   slli	a1, a1, 32
010e14: 00a5e5b3   or	a1, a1, a0
010e18: 0007071b   sext.w	a4, a4
010e1c: 01523603   ld	a2, 21(tp)
010e20: fff60613   addi	a2, a2, -1
010e24: 00367613   andi	a2, a2, 3
010e28: 00c68333   add	t1, a3, a2
010e2c: 08336503   lwu	a0, 131(t1)
010e30: 0005051b   sext.w	a0, a0
010e34: 20051463   bnez	a0, 520
010e38: 30226503   lwu	a0, 770(tp)
010e3c: 30226503   lwu	a0, 770(tp)
010e40: 02b330a3   sd	a1, 33(t1)
010e44: 06b239a3   sd	a1, 115(tp)
010e48: 07323803   ld	a6, 115(tp)
010e4c: 00100593   li	a1, 1
010e50: 02059513   slli	a0, a1, 32
010e54: 00a76533   or	a0, a4, a0
010e58: 08032623   sw	zero, 140(t1)
010e5c: 00e32823   sw	a4, 16(t1)
010e60: ffe60313   addi	t1, a2, -2
010e64: 0065e463   bltu	a1, t1, 8
010e68: 31422003   lw	zero, 788(tp)
010e6c: 00160593   addi	a1, a2, 1
010e70: 00b686b3   add	a3, a3, a1
010e74: 0106b023   sd	a6, 0(a3)
010e78: 00a6b023   sd	a0, 0(a3)
010e7c: 84018693   addi	a3, gp, -1984
010e80: 00461613   slli	a2, a2, 4
010e84: 02c71713   slli	a4, a4, 44
010e88: 00c686b3   add	a3, a3, a2
010e8c: 02c75713   srli	a4, a4, 44
010e90: 00e6a223   sw	a4, 4(a3)
010e94: e4078ce3   beqz	a5, -424
010e98: e6dff06f   j	-404
010e9c: f2e5fae3   bgeu	a1, a4, -204
010ea0: 00100713   li	a4, 1
010ea4: 16ef0c63   beq	t5, a4, 376
010ea8: 30226703   lwu	a4, 770(tp)
010eac: 30226703   lwu	a4, 770(tp)
010eb0: 30226703   lwu	a4, 770(tp)
010eb4: 30226583   lwu	a1, 770(tp)
010eb8: 30226503   lwu	a0, 770(tp)
010ebc: 30226603   lwu	a2, 770(tp)
010ec0: 00003737   lui	a4, 3
010ec4: 0106581b   srliw	a6, a2, 16
010ec8: 00f70713   addi	a4, a4, 15
010ecc: 01077733   and	a4, a4, a6
010ed0: 03061613   slli	a2, a2, 48
010ed4: 03065613   srli	a2, a2, 48
010ed8: 0107171b   slliw	a4, a4, 16
010edc: 02059593   slli	a1, a1, 32
010ee0: 02051513   slli	a0, a0, 32
010ee4: 0205d593   srli	a1, a1, 32
010ee8: 00e66733   or	a4, a2, a4
010eec: 0007071b   sext.w	a4, a4
010ef0: 00b56633   or	a2, a0, a1
010ef4: 01523503   ld	a0, 21(tp)
010ef8: fff50513   addi	a0, a0, -1
010efc: 00357513   andi	a0, a0, 3
010f00: 00a68333   add	t1, a3, a0
010f04: 08336583   lwu	a1, 131(t1)
010f08: 0005859b   sext.w	a1, a1
010f0c: 06059463   bnez	a1, 104
010f10: 30226583   lwu	a1, 770(tp)
010f14: 30226583   lwu	a1, 770(tp)
010f18: 02c330a3   sd	a2, 33(t1)
010f1c: 06c239a3   sd	a2, 115(tp)
010f20: 07323803   ld	a6, 115(tp)
010f24: 00100613   li	a2, 1
010f28: 02061593   slli	a1, a2, 32
010f2c: 00b765b3   or	a1, a4, a1
010f30: 08032623   sw	zero, 140(t1)
010f34: 00e32823   sw	a4, 16(t1)
010f38: ffe50313   addi	t1, a0, -2
010f3c: 00666463   bltu	a2, t1, 8
010f40: 31422003   lw	zero, 788(tp)
010f44: 00150613   addi	a2, a0, 1
010f48: 00c686b3   add	a3, a3, a2
010f4c: 0106b023   sd	a6, 0(a3)
010f50: 00b6b023   sd	a1, 0(a3)
010f54: 84018693   addi	a3, gp, -1984
010f58: 00451513   slli	a0, a0, 4
010f5c: 02c71713   slli	a4, a4, 44
010f60: 00a686b3   add	a3, a3, a0
010f64: 02c75713   srli	a4, a4, 44
010f68: 00e6a223   sw	a4, 4(a3)
010f6c: d80780e3   beqz	a5, -640
010f70: d95ff06f   j	-620
010f74: 00100593   li	a1, 1
010f78: 04b224a3   sw	a1, 73(tp)
010f7c: 04b22523   sw	a1, 74(tp)
010f80: 00200593   li	a1, 2
010f84: 00050463   beqz	a0, 8
010f88: 00400593   li	a1, 4
010f8c: 04b227a3   sw	a1, 79(tp)
010f90: 09526803   lwu	a6, 149(tp)
010f94: 0008081b   sext.w	a6, a6
010f98: fe080ce3   beqz	a6, -8
010f9c: 02050e63   beqz	a0, 60
010fa0: 09426803   lwu	a6, 148(tp)
010fa4: 00080e1b   sext.w	t3, a6
010fa8: 000e0c63   beqz	t3, 24
010fac: 01022b23   sw	a6, 22(tp)
010fb0: 00000813   li	a6, 0
010fb4: 30226e83   lwu	t4, 770(tp)
010fb8: 0018081b   addiw	a6, a6, 1
010fbc: ff0e1ce3   bne	t3, a6, -8
010fc0: 00100813   li	a6, 1
010fc4: 05022723   sw	a6, 78(tp)
010fc8: 00200813   li	a6, 2
010fcc: 0b0220a3   sw	a6, 161(tp)
010fd0: 00400813   li	a6, 4
010fd4: 03058c63   beq	a1, a6, 56
010fd8: 00100593   li	a1, 1
010fdc: 00b23d23   sd	a1, 26(tp)
010fe0: 09326583   lwu	a1, 147(tp)
010fe4: 0005881b   sext.w	a6, a1
010fe8: 00080c63   beqz	a6, 24
010fec: 00b22aa3   sw	a1, 21(tp)
010ff0: 00000593   li	a1, 0
010ff4: 30226e03   lwu	t3, 770(tp)
010ff8: 0015859b   addiw	a1, a1, 1
010ffc: feb81ce3   bne	a6, a1, -8
011000: 00100593   li	a1, 1
011004: 0ab220a3   sw	a1, 161(tp)
011008: 04b22723   sw	a1, 78(tp)
01100c: 040225a3   sw	zero, 75(tp)
011010: 040224a3   sw	zero, 73(tp)
011014: 040227a3   sw	zero, 79(tp)
011018: f01ff06f   j	-256
01101c: 30226703   lwu	a4, 770(tp)
011020: 30226703   lwu	a4, 770(tp)
011024: 30226703   lwu	a4, 770(tp)
011028: 30226703   lwu	a4, 770(tp)
01102c: 30226703   lwu	a4, 770(tp)
011030: 30226703   lwu	a4, 770(tp)
011034: ca078ce3   beqz	a5, -840
011038: ccdff06f   j	-820
01103c: 00100513   li	a0, 1
011040: 04a224a3   sw	a0, 73(tp)
011044: 04a22523   sw	a0, 74(tp)
011048: 00200513   li	a0, 2
01104c: 00060463   beqz	a2, 8
011050: 00400513   li	a0, 4
011054: 04a227a3   sw	a0, 79(tp)
011058: 09526803   lwu	a6, 149(tp)
01105c: 0008081b   sext.w	a6, a6
011060: fe080ce3   beqz	a6, -8
011064: 02060e63   beqz	a2, 60
011068: 09426803   lwu	a6, 148(tp)
01106c: 00080e1b   sext.w	t3, a6
011070: 000e0c63   beqz	t3, 24
011074: 01022b23   sw	a6, 22(tp)
011078: 00000813   li	a6, 0
01107c: 30226e83   lwu	t4, 770(tp)
011080: 0018081b   addiw	a6, a6, 1
011084: ff0e1ce3   bne	t3, a6, -8
011088: 00100813   li	a6, 1
01108c: 05022723   sw	a6, 78(tp)
011090: 00200813   li	a6, 2
011094: 0b0220a3   sw	a6, 161(tp)
011098: 00400813   li	a6, 4
01109c: 03050c63   beq	a0, a6, 56
0110a0: 00100513   li	a0, 1
0110a4: 00a23d23   sd	a0, 26(tp)
0110a8: 09326503   lwu	a0, 147(tp)
0110ac: 0005081b   sext.w	a6, a0
0110b0: 00080c63   beqz	a6, 24
0110b4: 00a22aa3   sw	a0, 21(tp)
0110b8: 00000513   li	a0, 0
0110bc: 30226e03   lwu	t3, 770(tp)
0110c0: 0015051b   addiw	a0, a0, 1
0110c4: fea81ce3   bne	a6, a0, -8
0110c8: 00100513   li	a0, 1
0110cc: 0aa220a3   sw	a0, 161(tp)
0110d0: 04a22723   sw	a0, 78(tp)
0110d4: 040225a3   sw	zero, 75(tp)
0110d8: 040224a3   sw	zero, 73(tp)
0110dc: 040227a3   sw	zero, 79(tp)
0110e0: d61ff06f   j	-672
0110e4: dab77ee3   bgeu	a4, a1, -580
0110e8: ce9ff06f   j	-792
0110ec: 1f323703   ld	a4, 499(tp)
0110f0: 00073023   sd	zero, 0(a4)
0110f4: 380225a3   sw	zero, 907(tp)
0110f8: be078ae3   beqz	a5, -1036
0110fc: c09ff06f   j	-1016
011100: dab710e3   bne	a4, a1, -608
011104: ccdff06f   j	-820
011108: ccb714e3   bne	a4, a1, -824
01110c: d95ff06f   j	-620
011110: ccb770e3   bgeu	a4, a1, -832
011114: d8dff06f   j	-628
011118: 1f323783   ld	a5, 499(tp)
01111c: 0007b023   sd	zero, 0(a5)
011120: 380225a3   sw	zero, 907(tp)
011124: b95f806f   j	-29804
011128: c0001073   unimp
011130: 30226e03   lwu	t3, 770(tp)
011134: 30226503   lwu	a0, 770(tp)
011138: 30226303   lwu	t1, 770(tp)
01113c: 30226583   lwu	a1, 770(tp)
011140: 30226883   lwu	a7, 770(tp)
011144: 30226603   lwu	a2, 770(tp)
011148: 30226803   lwu	a6, 770(tp)
01114c: 30226683   lwu	a3, 770(tp)
011150: 0006869b   sext.w	a3, a3
011154: 0a926e83   lwu	t4, 169(tp)
011158: f14027f3   csrr	a5, mhartid
01115c: 1fa23703   ld	a4, 506(tp)
011160: 0027979b   slliw	a5, a5, 2
011164: 004e9e9b   slliw	t4, t4, 4
011168: 070efe93   andi	t4, t4, 112
01116c: 00c7f793   andi	a5, a5, 12
011170: 01d7e7b3   or	a5, a5, t4
011174: 02479793   slli	a5, a5, 36
011178: 00f70733   add	a4, a4, a5
01117c: 0000cf37   lui	t5, 12
011180: 01e70733   add	a4, a4, t5
011184: 3e872703   lw	a4, 1000(a4)
011188: 0007071b   sext.w	a4, a4
01118c: 1f026e83   lwu	t4, 496(tp)
011190: 020e9e93   slli	t4, t4, 32
011194: 020ede93   srli	t4, t4, 32
011198: 01d23e23   sd	t4, 28(tp)
01119c: 00f77713   andi	a4, a4, 15
0111a0: 10076713   ori	a4, a4, 256
0111a4: 0ae222a3   sw	a4, 165(tp)
0111a8: 31422003   lw	zero, 788(tp)
0111ac: bd01b703   ld	a4, -1072(gp)
0111b0: 1fa23e83   ld	t4, 506(tp)
0111b4: 00fe87b3   add	a5, t4, a5
0111b8: 01e787b3   add	a5, a5, t5
0111bc: 3e87a783   lw	a5, 1000(a5)
0111c0: 0187d79b   srliw	a5, a5, 24
0111c4: 0037f793   andi	a5, a5, 3
0111c8: 32f22223   sw	a5, 804(tp)
0111cc: 020e1e13   slli	t3, t3, 32
0111d0: 02051793   slli	a5, a0, 32
0111d4: 020e5e13   srli	t3, t3, 32
0111d8: 02031313   slli	t1, t1, 32
0111dc: 01c7e7b3   or	a5, a5, t3
0111e0: 02035313   srli	t1, t1, 32
0111e4: 02059593   slli	a1, a1, 32
0111e8: 02089893   slli	a7, a7, 32
0111ec: 00f73023   sd	a5, 0(a4)
0111f0: 0065e5b3   or	a1, a1, t1
0111f4: 02061793   slli	a5, a2, 32
0111f8: 0208d893   srli	a7, a7, 32
0111fc: 00b73423   sd	a1, 8(a4)
011200: 0117e7b3   or	a5, a5, a7
011204: 00f73823   sd	a5, 16(a4)
011208: 0016b693   seqz	a3, a3
01120c: 00d72c23   sw	a3, 24(a4)
011210: 01072e23   sw	a6, 28(a4)
011214: 1f026783   lwu	a5, 496(tp)
011218: 02079793   slli	a5, a5, 32
01121c: 0207d793   srli	a5, a5, 32
011220: 00f23e23   sd	a5, 28(tp)
011224: 0a0222a3   sw	zero, 165(tp)
011228: 31422003   lw	zero, 788(tp)
01122c: 32423783   ld	a5, 804(tp)
011230: fe079ee3   bnez	a5, -4
011234: 1f923783   ld	a5, 505(tp)
011238: 0000c737   lui	a4, 12
01123c: 00e787b3   add	a5, a5, a4
011240: 3487a783   lw	a5, 840(a5)
011244: 00800713   li	a4, 8
011248: 01f7f793   andi	a5, a5, 31
01124c: 04f76063   bltu	a4, a5, 64
011250: 00700513   li	a0, 7
011254: 07e00693   li	a3, 126
011258: 0000c5b7   lui	a1, 12
01125c: 00800613   li	a2, 8
011260: 08a22ca3   sw	a0, 153(tp)
011264: b0002773   csrr	a4, mcycle
011268: 00000013   nop
01126c: b00027f3   csrr	a5, mcycle
011270: 40e787b3   sub	a5, a5, a4
011274: fef6fae3   bgeu	a3, a5, -12
011278: 1f923783   ld	a5, 505(tp)
01127c: 00b787b3   add	a5, a5, a1
011280: 3487a783   lw	a5, 840(a5)
011284: 01f7f793   andi	a5, a5, 31
011288: fcf67ce3   bgeu	a2, a5, -40
01128c: 07e00693   li	a3, 126
011290: ad8ca783   lw	a5, -1320(s9)
011294: 0007861b   sext.w	a2, a5
011298: b0002773   csrr	a4, mcycle
01129c: 00000013   nop
0112a0: b00027f3   csrr	a5, mcycle
0112a4: 40e787b3   sub	a5, a5, a4
0112a8: fef6fae3   bgeu	a3, a5, -12
0112ac: 03061793   slli	a5, a2, 48
0112b0: 0307d793   srli	a5, a5, 48
0112b4: fc078ee3   beqz	a5, -36
0112b8: a01f806f   j	-30208
0112bc: c0001073   unimp
0112c0: 30226703   lwu	a4, 770(tp)
0112c4: 709bb783   ld	a5, 1801(s7)
0112c8: 02078e63   beqz	a5, 60
0112cc: 30226783   lwu	a5, 770(tp)
0112d0: 0007879b   sext.w	a5, a5
0112d4: 01e23683   ld	a3, 30(tp)
0112d8: 00069863   bnez	a3, 16
0112dc: 01f7569b   srliw	a3, a4, 31
0112e0: 00068463   beqz	a3, 8
0112e4: 02e222a3   sw	a4, 37(tp)
0112e8: 0007da63   bgez	a5, 20
0112ec: 00a22023   sw	a0, 0(tp)
0112f0: 00e22023   sw	a4, 0(tp)
0112f4: 00f22023   sw	a5, 0(tp)
0112f8: 02f22323   sw	a5, 38(tp)
0112fc: 9bdf806f   j	-30276
011300: c0001073   unimp
011304: 30226783   lwu	a5, 770(tp)
011308: ffe7f793   andi	a5, a5, -2
01130c: 0007879b   sext.w	a5, a5
011310: fc5ff06f   j	-60
011314: 00000013   nop
011318: 30226783   lwu	a5, 770(tp)
01131c: 30223683   ld	a3, 770(tp)
011320: 30223703   ld	a4, 770(tp)
011324: 02071713   slli	a4, a4, 32
011328: 00d76733   or	a4, a4, a3
01132c: 06e239a3   sd	a4, 115(tp)
011330: 07323703   ld	a4, 115(tp)
011334: 0077f793   andi	a5, a5, 7
011338: 0027979b   slliw	a5, a5, 2
01133c: 00000297   auipc	t0, 0
011340: 00f282b3   add	t0, t0, a5
011344: 00c28067   jr	12(t0)
011348: 1440006f   j	324
01134c: 0200006f   j	32
011350: 0180006f   j	24
011354: 0140006f   j	20
011358: 0780006f   j	120
01135c: 13c0006f   j	316
011360: 0340006f   j	52
011364: 0040006f   j	4
011368: 0000006f   j	0
01136c: 00257513   andi	a0, a0, 2
011370: 04051063   bnez	a0, 64
011374: 00e23fa3   sd	a4, 31(tp)
011378: 86818713   addi	a4, gp, -1944
01137c: 05472783   lw	a5, 84(a4)
011380: 200006b7   lui	a3, 131072
011384: 00d7e7b3   or	a5, a5, a3
011388: 04f72a23   sw	a5, 84(a4)
01138c: 92df806f   j	-30420
011390: c0001073   unimp
011394: 00101637   lui	a2, 257
011398: fff60793   addi	a5, a2, -1
01139c: 00f707b3   add	a5, a4, a5
0113a0: 02075693   srli	a3, a4, 32
0113a4: 0207d793   srli	a5, a5, 32
0113a8: 02f68a63   beq	a3, a5, 52
0113ac: 0000006f   j	0
0113b0: 02e23023   sd	a4, 32(tp)
0113b4: 86818713   addi	a4, gp, -1944
0113b8: 05472783   lw	a5, 84(a4)
0113bc: 400006b7   lui	a3, 262144
0113c0: 00d7e7b3   or	a5, a5, a3
0113c4: 04f72a23   sw	a5, 84(a4)
0113c8: 8f1f806f   j	-30480
0113cc: c0001073   unimp
0113d0: 88e1b423   sd	a4, -1912(gp)
0113d4: 8e5f806f   j	-30492
0113d8: c0001073   unimp
0113dc: ffff87b7   lui	a5, 1048568
0113e0: 00fb87b3   add	a5, s7, a5
0113e4: 68e7b723   sd	a4, 1678(a5)
0113e8: 1e022fa3   sw	zero, 511(tp)
0113ec: 6807b7a3   sd	zero, 1679(a5)
0113f0: 1e022fa3   sw	zero, 511(tp)
0113f4: 000f0597   auipc	a1, 240
0113f8: d2c5b583   ld	a1, -724(a1)
0113fc: 6ab7b023   sd	a1, 1696(a5)
011400: 1e022fa3   sw	zero, 511(tp)
011404: 000f0597   auipc	a1, 240
011408: d245b583   ld	a1, -732(a1)
01140c: 6ab7b0a3   sd	a1, 1697(a5)
011410: 1e022fa3   sw	zero, 511(tp)
011414: 000f0597   auipc	a1, 240
011418: d1c5b583   ld	a1, -740(a1)
01141c: 6ab7b123   sd	a1, 1698(a5)
011420: 1e022fa3   sw	zero, 511(tp)
011424: 000f0597   auipc	a1, 240
011428: d145b583   ld	a1, -748(a1)
01142c: 6ab7b1a3   sd	a1, 1699(a5)
011430: ffc60593   addi	a1, a2, -4
011434: 00b705b3   add	a1, a4, a1
011438: 1e022fa3   sw	zero, 511(tp)
01143c: 62b7bc23   sd	a1, 1592(a5)
011440: 001025b7   lui	a1, 258
011444: 00b705b3   add	a1, a4, a1
011448: 1e022fa3   sw	zero, 511(tp)
01144c: 00c70733   add	a4, a4, a2
011450: 000307b7   lui	a5, 48
011454: c0001837   lui	a6, 786433
011458: 00040537   lui	a0, 64
01145c: 10030637   lui	a2, 65584
011460: 0107e6b3   or	a3, a5, a6
011464: 0006869b   sext.w	a3, a3
011468: 00d72023   sw	a3, 0(a4)
01146c: 00f507bb   addw	a5, a0, a5
011470: 00470713   addi	a4, a4, 4
011474: fec796e3   bne	a5, a2, -20
011478: 32423783   ld	a5, 804(tp)
01147c: fe079ee3   bnez	a5, -4
011480: 1eb23fa3   sd	a1, 511(tp)
011484: 835f806f   j	-30668
011488: c0001073   unimp
01148c: 00e23f23   sd	a4, 30(tp)
011490: 829f806f   j	-30680
011494: c0001073   unimp
011498: 86e1bc23   sd	a4, -1928(gp)
01149c: 81df806f   j	-30692
0114a0: c0001073   unimp
0114a4: 00000013   nop
0114a8: 00a22023   sw	a0, 0(tp)
0114ac: 30226783   lwu	a5, 770(tp)
0114b0: 00f7f713   andi	a4, a5, 15
0114b4: 00f7f793   andi	a5, a5, 15
0114b8: 00f22023   sw	a5, 0(tp)
0114bc: 00100793   li	a5, 1
0114c0: 00f70663   beq	a4, a5, 12
0114c4: 00022ba3   sw	zero, 23(tp)
0114c8: ba01a023   sw	zero, -1120(gp)
0114cc: fecf806f   j	-30740
0114d0: c0001073   unimp
0114d4: 00000013   nop
0114d8: 30226503   lwu	a0, 770(tp)
0114dc: 00723783   ld	a5, 7(tp)
0114e0: 00078067   jr	a5
0114e4: 00000013   nop
0114e8: 01523783   ld	a5, 21(tp)
0114ec: 040225a3   sw	zero, 75(tp)
0114f0: 0037f793   andi	a5, a5, 3
0114f4: 00f207b3   add	a5, tp, a5
0114f8: 0007aa23   sw	zero, 20(a5)
0114fc: 0a022523   sw	zero, 170(tp)
011500: 00b23783   ld	a5, 11(tp)
011504: 00078263   beqz	a5, 4
011508: 30226503   lwu	a0, 770(tp)
01150c: 00723783   ld	a5, 7(tp)
011510: 00078067   jr	a5
011514: 00000013   nop
011518: 1f323783   ld	a5, 499(tp)
01151c: 0007b023   sd	zero, 0(a5)
011520: 380225a3   sw	zero, 907(tp)
011524: 30226503   lwu	a0, 770(tp)
011528: 00723783   ld	a5, 7(tp)
01152c: 00078067   jr	a5
011530: 3fff07b7   lui	a5, 262128
011534: 00f577b3   and	a5, a0, a5
011538: 3fff0737   lui	a4, 262128
01153c: 00e78463   beq	a5, a4, 8
011540: fd9ff0ef   jal	-40
011544: fa5ff0ef   jal	-92
011548: 01523683   ld	a3, 21(tp)
01154c: 00100793   li	a5, 1
011550: 0036f693   andi	a3, a3, 3
011554: 04f22523   sw	a5, 74(tp)
011558: 30226603   lwu	a2, 770(tp)
01155c: 30226703   lwu	a4, 770(tp)
011560: 02022223   sw	zero, 36(tp)
011564: 01f23783   ld	a5, 31(tp)
011568: fe079ee3   bnez	a5, -4
01156c: 02061613   slli	a2, a2, 32
011570: 02065613   srli	a2, a2, 32
011574: 02071713   slli	a4, a4, 32
011578: 00c76733   or	a4, a4, a2
01157c: 06e239a3   sd	a4, 115(tp)
011580: 07323583   ld	a1, 115(tp)
011584: 30226703   lwu	a4, 770(tp)
011588: 30226603   lwu	a2, 770(tp)
01158c: 0c069e63   bnez	a3, 220
011590: 03126703   lwu	a4, 49(tp)
011594: 000107b7   lui	a5, 16
011598: 0007071b   sext.w	a4, a4
01159c: fff78793   addi	a5, a5, -1
0115a0: 0af70e63   beq	a4, a5, 188
0115a4: 0005a783   lw	a5, 0(a1)
0115a8: 0007871b   sext.w	a4, a5
0115ac: 07426783   lwu	a5, 116(tp)
0115b0: 0007879b   sext.w	a5, a5
0115b4: 0017b793   seqz	a5, a5
0115b8: 40f007b3   neg	a5, a5
0115bc: 0077f793   andi	a5, a5, 7
0115c0: 00f777b3   and	a5, a4, a5
0115c4: 0027979b   slliw	a5, a5, 2
0115c8: 00000297   auipc	t0, 0
0115cc: 00f282b3   add	t0, t0, a5
0115d0: 00c28067   jr	12(t0)
0115d4: 0440006f   j	68
0115d8: 0200006f   j	32
0115dc: 0180006f   j	24
0115e0: 1ec0006f   j	492
0115e4: 0b80006f   j	184
0115e8: 1480006f   j	328
0115ec: 0080006f   j	8
0115f0: 0040006f   j	4
0115f4: 0000006f   j	0
0115f8: 00100793   li	a5, 1
0115fc: 02f22223   sw	a5, 36(tp)
011600: 00100793   li	a5, 1
011604: 01f23703   ld	a4, 31(tp)
011608: fef71ee3   bne	a4, a5, -4
01160c: 040225a3   sw	zero, 75(tp)
011610: ea8f806f   j	-31064
011614: c0001073   unimp
011618: 03261613   slli	a2, a2, 50
01161c: 03265713   srli	a4, a2, 50
011620: 00070613   mv	a2, a4
011624: 01523783   ld	a5, 21(tp)
011628: 0037f793   andi	a5, a5, 3
01162c: 00f207b3   add	a5, tp, a5
011630: 00e7aa23   sw	a4, 20(a5)
011634: 00100793   li	a5, 1
011638: 02f22223   sw	a5, 36(tp)
01163c: 00100793   li	a5, 1
011640: 01f23703   ld	a4, 31(tp)
011644: fef71ee3   bne	a4, a5, -4
011648: 00000793   li	a5, 0
01164c: 14c7f263   bgeu	a5, a2, 324
011650: 30226703   lwu	a4, 770(tp)
011654: 0017879b   addiw	a5, a5, 1
011658: ff5ff06f   j	-12
01165c: e44f70ef   jal	-35260
011660: e58f806f   j	-31144
011664: c0001073   unimp
011668: 0005a703   lw	a4, 0(a1)
01166c: 0007071b   sext.w	a4, a4
011670: 07426583   lwu	a1, 116(tp)
011674: 0005859b   sext.w	a1, a1
011678: 18059a63   bnez	a1, 404
01167c: 00777713   andi	a4, a4, 7
011680: 18070663   beqz	a4, 396
011684: 00100793   li	a5, 1
011688: 02f22223   sw	a5, 36(tp)
01168c: 00100793   li	a5, 1
011690: 01f23703   ld	a4, 31(tp)
011694: fef71ee3   bne	a4, a5, -4
011698: f75ff06f   j	-140
01169c: f14027f3   csrr	a5, mhartid
0116a0: 0007879b   sext.w	a5, a5
0116a4: 00079863   bnez	a5, 16
0116a8: 080221a3   sw	zero, 131(tp)
0116ac: 40700793   li	a5, 1031
0116b0: 00f22023   sw	a5, 0(tp)
0116b4: 080221a3   sw	zero, 131(tp)
0116b8: 40f00793   li	a5, 1039
0116bc: 00f22023   sw	a5, 0(tp)
0116c0: 080221a3   sw	zero, 131(tp)
0116c4: 41000793   li	a5, 1040
0116c8: 00f22023   sw	a5, 0(tp)
0116cc: c00f17b7   lui	a5, 786673
0116d0: 00f22023   sw	a5, 0(tp)
0116d4: 00022023   sw	zero, 0(tp)
0116d8: 00022023   sw	zero, 0(tp)
0116dc: 00022023   sw	zero, 0(tp)
0116e0: 00022023   sw	zero, 0(tp)
0116e4: 00022023   sw	zero, 0(tp)
0116e8: 00022023   sw	zero, 0(tp)
0116ec: 00022023   sw	zero, 0(tp)
0116f0: 00022023   sw	zero, 0(tp)
0116f4: 00022023   sw	zero, 0(tp)
0116f8: 00022023   sw	zero, 0(tp)
0116fc: 00022023   sw	zero, 0(tp)
011700: 00022023   sw	zero, 0(tp)
011704: 00022023   sw	zero, 0(tp)
011708: 00022023   sw	zero, 0(tp)
01170c: 00022023   sw	zero, 0(tp)
011710: 00022023   sw	zero, 0(tp)
011714: 40000793   li	a5, 1024
011718: f1402773   csrr	a4, mhartid
01171c: 00e797b3   sll	a5, a5, a4
011720: 31423703   ld	a4, 788(tp)
011724: 00e7f733   and	a4, a5, a4
011728: fe071ce3   bnez	a4, -8
01172c: 0a00006f   j	160
011730: 01523783   ld	a5, 21(tp)
011734: 0037f793   andi	a5, a5, 3
011738: 00f206b3   add	a3, tp, a5
01173c: 00b6e603   lwu	a2, 11(a3)
011740: 04178793   addi	a5, a5, 65
011744: 00f20733   add	a4, tp, a5
011748: 00100693   li	a3, 1
01174c: 00d72023   sw	a3, 0(a4)
011750: 01323703   ld	a4, 19(tp)
011754: fe071ee3   bnez	a4, -4
011758: ebccb703   ld	a4, -324(s9)
01175c: 07f00513   li	a0, 127
011760: 00c75693   srli	a3, a4, 12
011764: 0036f693   andi	a3, a3, 3
011768: 04068063   beqz	a3, 64
01176c: b00026f3   csrr	a3, mcycle
011770: 00000013   nop
011774: b0002773   csrr	a4, mcycle
011778: 40d70733   sub	a4, a4, a3
01177c: fee57ae3   bgeu	a0, a4, -12
011780: ebcca703   lw	a4, -324(s9)
011784: 02071713   slli	a4, a4, 32
011788: 02075713   srli	a4, a4, 32
01178c: fd5ff06f   j	-44
011790: 00100793   li	a5, 1
011794: 02f22223   sw	a5, 36(tp)
011798: 00100793   li	a5, 1
01179c: 01f23703   ld	a4, 31(tp)
0117a0: fef71ee3   bne	a4, a5, -4
0117a4: e69ff06f   j	-408
0117a8: 00177713   andi	a4, a4, 1
0117ac: 00070463   beqz	a4, 8
0117b0: ea0cae23   sw	zero, -324(s9)
0117b4: 00f207b3   add	a5, tp, a5
0117b8: 00c7a023   sw	a2, 0(a5)
0117bc: c00057b7   lui	a5, 786437
0117c0: b007879b   addiw	a5, a5, -1280
0117c4: 00f22023   sw	a5, 0(tp)
0117c8: 00022023   sw	zero, 0(tp)
0117cc: 00100793   li	a5, 1
0117d0: 00f5a223   sw	a5, 4(a1)
0117d4: 0005a783   lw	a5, 0(a1)
0117d8: 0007879b   sext.w	a5, a5
0117dc: 07426703   lwu	a4, 116(tp)
0117e0: 0007071b   sext.w	a4, a4
0117e4: 00070e63   beqz	a4, 28
0117e8: 00100793   li	a5, 1
0117ec: 02f22223   sw	a5, 36(tp)
0117f0: 00100793   li	a5, 1
0117f4: 01f23703   ld	a4, 31(tp)
0117f8: fef71ee3   bne	a4, a5, -4
0117fc: e11ff06f   j	-496
011800: 0067f793   andi	a5, a5, 6
011804: fc0798e3   bnez	a5, -48
011808: fe1ff06f   j	-32
01180c: 03261613   slli	a2, a2, 50
011810: 01468713   addi	a4, a3, 20
011814: 03265593   srli	a1, a2, 50
011818: 00058693   mv	a3, a1
01181c: 00e20733   add	a4, tp, a4
011820: 00d72023   sw	a3, 0(a4)
011824: 00100713   li	a4, 1
011828: 02e22223   sw	a4, 36(tp)
01182c: 00100713   li	a4, 1
011830: 01f23683   ld	a3, 31(tp)
011834: fee69ee3   bne	a3, a4, -4
011838: dcb7fae3   bgeu	a5, a1, -556
01183c: 30226703   lwu	a4, 770(tp)
011840: 00178793   addi	a5, a5, 1
011844: ff5ff06f   j	-12
011848: 02022223   sw	zero, 36(tp)
01184c: 01f23783   ld	a5, 31(tp)
011850: fe079ee3   bnez	a5, -4
011854: 30226703   lwu	a4, 770(tp)
011858: 0007079b   sext.w	a5, a4
01185c: 01626683   lwu	a3, 22(tp)
011860: 0187d79b   srliw	a5, a5, 24
011864: 00d7f7b3   and	a5, a5, a3
011868: 02078063   beqz	a5, 32
01186c: 00100793   li	a5, 1
011870: 02f22223   sw	a5, 36(tp)
011874: 00100713   li	a4, 1
011878: 01f23783   ld	a5, 31(tp)
01187c: fee79ee3   bne	a5, a4, -4
011880: c38f806f   j	-31688
011884: c0001073   unimp
011888: 01523783   ld	a5, 21(tp)
01188c: 03271713   slli	a4, a4, 50
011890: 0037f793   andi	a5, a5, 3
011894: 03275713   srli	a4, a4, 50
011898: 00f207b3   add	a5, tp, a5
01189c: 00e7aa23   sw	a4, 20(a5)
0118a0: 00100793   li	a5, 1
0118a4: 02f22223   sw	a5, 36(tp)
0118a8: 00100713   li	a4, 1
0118ac: 01f23783   ld	a5, 31(tp)
0118b0: fee79ee3   bne	a5, a4, -4
0118b4: 1f323783   ld	a5, 499(tp)
0118b8: 0007b023   sd	zero, 0(a5)
0118bc: 380225a3   sw	zero, 907(tp)
0118c0: fc1ff06f   j	-64
0118c4: 00000013   nop
0118c8: 00050413   mv	s0, a0
0118cc: 30226483   lwu	s1, 770(tp)
0118d0: 00500713   li	a4, 5
0118d4: 01c4d79b   srliw	a5, s1, 28
0118d8: 00048693   mv	a3, s1
0118dc: 02f76063   bltu	a4, a5, 32
0118e0: 000ef717   auipc	a4, 239
0118e4: e2870713   addi	a4, a4, -472
0118e8: 00279793   slli	a5, a5, 2
0118ec: 00e787b3   add	a5, a5, a4
0118f0: 0007a783   lw	a5, 0(a5)
0118f4: 00e787b3   add	a5, a5, a4
0118f8: 00078067   jr	a5
0118fc: 0000006f   j	0
011900: 00100793   li	a5, 1
011904: 01e26703   lwu	a4, 30(tp)
011908: 00300613   li	a2, 3
01190c: 0007059b   sext.w	a1, a4
011910: 00c58463   beq	a1, a2, 8
011914: 00e4e6b3   or	a3, s1, a4
011918: 02f22523   sw	a5, 42(tp)
01191c: 31422003   lw	zero, 788(tp)
011920: 00822023   sw	s0, 0(tp)
011924: 00d22023   sw	a3, 0(tp)
011928: b90f806f   j	-31856
01192c: c0001073   unimp
011930: 00000693   li	a3, 0
011934: 01523783   ld	a5, 21(tp)
011938: 0037f793   andi	a5, a5, 3
01193c: fe0786e3   beqz	a5, -20
011940: 00f207b3   add	a5, tp, a5
011944: 0857e703   lwu	a4, 133(a5)
011948: 3a068a63   beqz	a3, 948
01194c: ffe7071b   addiw	a4, a4, -2
011950: 04e7a9a3   sw	a4, 83(a5)
011954: 01b7b703   ld	a4, 27(a5)
011958: 08e7baa3   sd	a4, 149(a5)
01195c: fcdff06f   j	-52
011960: 00100693   li	a3, 1
011964: fd1ff06f   j	-48
011968: 00000793   li	a5, 0
01196c: f99ff06f   j	-104
011970: 0a926703   lwu	a4, 169(tp)
011974: f14027f3   csrr	a5, mhartid
011978: 1fa23683   ld	a3, 506(tp)
01197c: 0027979b   slliw	a5, a5, 2
011980: 0047171b   slliw	a4, a4, 4
011984: 07077713   andi	a4, a4, 112
011988: 00c7f793   andi	a5, a5, 12
01198c: 00e7e7b3   or	a5, a5, a4
011990: 02479793   slli	a5, a5, 36
011994: 00d787b3   add	a5, a5, a3
011998: 0000c737   lui	a4, 12
01199c: 00e787b3   add	a5, a5, a4
0119a0: 3e87a783   lw	a5, 1000(a5)
0119a4: 0007879b   sext.w	a5, a5
0119a8: 1f026703   lwu	a4, 496(tp)
0119ac: 02071713   slli	a4, a4, 32
0119b0: 02075713   srli	a4, a4, 32
0119b4: 00e23e23   sd	a4, 28(tp)
0119b8: 00f7f793   andi	a5, a5, 15
0119bc: 1007e793   ori	a5, a5, 256
0119c0: 0af222a3   sw	a5, 165(tp)
0119c4: 31422003   lw	zero, 788(tp)
0119c8: 03623783   ld	a5, 54(tp)
0119cc: 00078863   beqz	a5, 16
0119d0: 080221a3   sw	zero, 131(tp)
0119d4: 41000793   li	a5, 1040
0119d8: 00f22023   sw	a5, 0(tp)
0119dc: 00822023   sw	s0, 0(tp)
0119e0: 00922023   sw	s1, 0(tp)
0119e4: 03926683   lwu	a3, 57(tp)
0119e8: 86818793   addi	a5, gp, -1944
0119ec: 0547a703   lw	a4, 84(a5)
0119f0: 01f6969b   slliw	a3, a3, 31
0119f4: 02171713   slli	a4, a4, 33
0119f8: 02175713   srli	a4, a4, 33
0119fc: 00d76733   or	a4, a4, a3
011a00: 04e7aa23   sw	a4, 84(a5)
011a04: 01a23703   ld	a4, 26(tp)
011a08: 00e7b023   sd	a4, 0(a5)
011a0c: 01b23703   ld	a4, 27(tp)
011a10: 00e7b423   sd	a4, 8(a5)
011a14: 01823703   ld	a4, 24(tp)
011a18: 00e7bc23   sd	a4, 24(a5)
011a1c: c00f1737   lui	a4, 786673
011a20: 00e22023   sw	a4, 0(tp)
011a24: 00022023   sw	zero, 0(tp)
011a28: 00022023   sw	zero, 0(tp)
011a2c: 00022023   sw	zero, 0(tp)
011a30: 00022023   sw	zero, 0(tp)
011a34: 00022023   sw	zero, 0(tp)
011a38: 00022023   sw	zero, 0(tp)
011a3c: 00022023   sw	zero, 0(tp)
011a40: 00022023   sw	zero, 0(tp)
011a44: 00022023   sw	zero, 0(tp)
011a48: 00022023   sw	zero, 0(tp)
011a4c: 00022023   sw	zero, 0(tp)
011a50: 00022023   sw	zero, 0(tp)
011a54: 00022023   sw	zero, 0(tp)
011a58: 00022023   sw	zero, 0(tp)
011a5c: 00022023   sw	zero, 0(tp)
011a60: 00022023   sw	zero, 0(tp)
011a64: 40000713   li	a4, 1024
011a68: f14026f3   csrr	a3, mhartid
011a6c: 00d71733   sll	a4, a4, a3
011a70: 31423683   ld	a3, 788(tp)
011a74: 00d776b3   and	a3, a4, a3
011a78: fe069ce3   bnez	a3, -8
011a7c: 705ba683   lw	a3, 1797(s7)
011a80: 0547a703   lw	a4, 84(a5)
011a84: fc000637   lui	a2, 1032192
011a88: 02669693   slli	a3, a3, 38
011a8c: 00c77733   and	a4, a4, a2
011a90: 0266d693   srli	a3, a3, 38
011a94: bd01b603   ld	a2, -1072(gp)
011a98: 00d76733   or	a4, a4, a3
011a9c: 04e7aa23   sw	a4, 84(a5)
011aa0: 08060793   addi	a5, a2, 128
011aa4: 84018713   addi	a4, gp, -1984
011aa8: 0a860613   addi	a2, a2, 168
011aac: 00073583   ld	a1, 0(a4)
011ab0: 00078693   mv	a3, a5
011ab4: 00878793   addi	a5, a5, 8
011ab8: 00b6b023   sd	a1, 0(a3)
011abc: 00870713   addi	a4, a4, 8
011ac0: fec796e3   bne	a5, a2, -20
011ac4: 1f026783   lwu	a5, 496(tp)
011ac8: 02079793   slli	a5, a5, 32
011acc: 0207d793   srli	a5, a5, 32
011ad0: 00f23e23   sd	a5, 28(tp)
011ad4: 0a0222a3   sw	zero, 165(tp)
011ad8: 31422003   lw	zero, 788(tp)
011adc: 9dcf806f   j	-32292
011ae0: c0001073   unimp
011ae4: 0a926703   lwu	a4, 169(tp)
011ae8: f14027f3   csrr	a5, mhartid
011aec: 1fa23683   ld	a3, 506(tp)
011af0: 0027979b   slliw	a5, a5, 2
011af4: 0047171b   slliw	a4, a4, 4
011af8: 07077713   andi	a4, a4, 112
011afc: 00c7f793   andi	a5, a5, 12
011b00: 00e7e7b3   or	a5, a5, a4
011b04: 02479793   slli	a5, a5, 36
011b08: 00d787b3   add	a5, a5, a3
011b0c: 0000c737   lui	a4, 12
011b10: 00e787b3   add	a5, a5, a4
011b14: 3e87a783   lw	a5, 1000(a5)
011b18: 0007879b   sext.w	a5, a5
011b1c: 1f026703   lwu	a4, 496(tp)
011b20: 02071713   slli	a4, a4, 32
011b24: 02075713   srli	a4, a4, 32
011b28: 00e23e23   sd	a4, 28(tp)
011b2c: 00f7f793   andi	a5, a5, 15
011b30: 1007e793   ori	a5, a5, 256
011b34: 0af222a3   sw	a5, 165(tp)
011b38: 31422003   lw	zero, 788(tp)
011b3c: bc81b903   ld	s2, -1080(gp)
011b40: bb81b983   ld	s3, -1096(gp)
011b44: 02091663   bnez	s2, 44
011b48: 1f026783   lwu	a5, 496(tp)
011b4c: 02079793   slli	a5, a5, 32
011b50: 0207d793   srli	a5, a5, 32
011b54: 00f23e23   sd	a5, 28(tp)
011b58: 0a0222a3   sw	zero, 165(tp)
011b5c: 31422003   lw	zero, 788(tp)
011b60: 00822023   sw	s0, 0(tp)
011b64: 00922023   sw	s1, 0(tp)
011b68: 950f806f   j	-32432
011b6c: c0001073   unimp
011b70: c08f70ef   jal	-35832
011b74: 8bc1a783   lw	a5, -1860(gp)
011b78: 70fba2a3   sw	a5, 1797(s7)
011b7c: 1e022fa3   sw	zero, 511(tp)
011b80: 707ba783   lw	a5, 1799(s7)
011b84: 0007879b   sext.w	a5, a5
011b88: 1f026703   lwu	a4, 496(tp)
011b8c: 02071713   slli	a4, a4, 32
011b90: 02075713   srli	a4, a4, 32
011b94: 00e23e23   sd	a4, 28(tp)
011b98: 1007e793   ori	a5, a5, 256
011b9c: 0af222a3   sw	a5, 165(tp)
011ba0: 31422003   lw	zero, 788(tp)
011ba4: 01123783   ld	a5, 17(tp)
011ba8: 00079a63   bnez	a5, 20
011bac: 00022c23   sw	zero, 24(tp)
011bb0: 1f126783   lwu	a5, 497(tp)
011bb4: 00f22023   sw	a5, 0(tp)
011bb8: 00022023   sw	zero, 0(tp)
011bbc: 01026783   lwu	a5, 16(tp)
011bc0: 0007879b   sext.w	a5, a5
011bc4: 00079c63   bnez	a5, 24
011bc8: 00022ba3   sw	zero, 23(tp)
011bcc: c00057b7   lui	a5, 786437
011bd0: 2007879b   addiw	a5, a5, 512
011bd4: 00f22023   sw	a5, 0(tp)
011bd8: 00022023   sw	zero, 0(tp)
011bdc: ffffd6b7   lui	a3, 1048573
011be0: 000ef717   auipc	a4, 239
011be4: b4070713   addi	a4, a4, -1216
011be8: 000ef617   auipc	a2, 239
011bec: b9860613   addi	a2, a2, -1128
011bf0: 4006869b   addiw	a3, a3, 1024
011bf4: 00072783   lw	a5, 0(a4)
011bf8: 00f687bb   addw	a5, a3, a5
011bfc: 0027979b   slliw	a5, a5, 2
011c00: 02079793   slli	a5, a5, 32
011c04: 0207d793   srli	a5, a5, 32
011c08: 012787b3   add	a5, a5, s2
011c0c: 00f231a3   sd	a5, 3(tp)
011c10: 00476783   lwu	a5, 4(a4)
011c14: 00f231a3   sd	a5, 3(tp)
011c18: 00870713   addi	a4, a4, 8
011c1c: fcc71ce3   bne	a4, a2, -40
011c20: ffffd6b7   lui	a3, 1048573
011c24: 000ef717   auipc	a4, 239
011c28: b5c70713   addi	a4, a4, -1188
011c2c: 000ef617   auipc	a2, 239
011c30: b9c60613   addi	a2, a2, -1124
011c34: 4006869b   addiw	a3, a3, 1024
011c38: 00072783   lw	a5, 0(a4)
011c3c: 00f687bb   addw	a5, a3, a5
011c40: 0027979b   slliw	a5, a5, 2
011c44: 02079793   slli	a5, a5, 32
011c48: 0207d793   srli	a5, a5, 32
011c4c: 012787b3   add	a5, a5, s2
011c50: 00f231a3   sd	a5, 3(tp)
011c54: 00476783   lwu	a5, 4(a4)
011c58: 00f231a3   sd	a5, 3(tp)
011c5c: 00870713   addi	a4, a4, 8
011c60: fce61ce3   bne	a2, a4, -40
011c64: ffff66b7   lui	a3, 1048566
011c68: 000ef717   auipc	a4, 239
011c6c: b6070713   addi	a4, a4, -1184
011c70: 000ef617   auipc	a2, 239
011c74: d3060613   addi	a2, a2, -720
011c78: 4006869b   addiw	a3, a3, 1024
011c7c: 00072783   lw	a5, 0(a4)
011c80: 00f687bb   addw	a5, a3, a5
011c84: 0027979b   slliw	a5, a5, 2
011c88: 02079793   slli	a5, a5, 32
011c8c: 0207d793   srli	a5, a5, 32
011c90: 012787b3   add	a5, a5, s2
011c94: 00f231a3   sd	a5, 3(tp)
011c98: 00476783   lwu	a5, 4(a4)
011c9c: 00f231a3   sd	a5, 3(tp)
011ca0: 00870713   addi	a4, a4, 8
011ca4: fce61ce3   bne	a2, a4, -40
011ca8: ffff56b7   lui	a3, 1048565
011cac: 000ef717   auipc	a4, 239
011cb0: cf470713   addi	a4, a4, -780
011cb4: 000ef617   auipc	a2, 239
011cb8: d2c60613   addi	a2, a2, -724
011cbc: 8006869b   addiw	a3, a3, -2048
011cc0: 00072783   lw	a5, 0(a4)
011cc4: 00f687bb   addw	a5, a3, a5
011cc8: 0027979b   slliw	a5, a5, 2
011ccc: 02079793   slli	a5, a5, 32
011cd0: 0207d793   srli	a5, a5, 32
011cd4: 012787b3   add	a5, a5, s2
011cd8: 00f231a3   sd	a5, 3(tp)
011cdc: 00476783   lwu	a5, 4(a4)
011ce0: 00f231a3   sd	a5, 3(tp)
011ce4: 00870713   addi	a4, a4, 8
011ce8: fce61ce3   bne	a2, a4, -40
011cec: e4098ee3   beqz	s3, -420
011cf0: 00098513   mv	a0, s3
011cf4: ab4f70ef   jal	-36172
011cf8: e51ff06f   j	-432
011cfc: 04e7a8a3   sw	a4, 81(a5)
011d00: c29ff06f   j	-984
011d04: 00000013   nop
011d08: 30226783   lwu	a5, 770(tp)
011d0c: 00a22023   sw	a0, 0(tp)
011d10: 00f22023   sw	a5, 0(tp)
011d14: fa5f706f   j	-32860
011d18: c0001073   unimp
011d1c: 00000013   nop
011d20: 040220a3   sw	zero, 65(tp)
011d24: 01000737   lui	a4, 4096
011d28: 02c09793   slli	a5, ra, 44
011d2c: 92eca423   sw	a4, -1752(s9)
011d30: 02c7d793   srli	a5, a5, 44
011d34: 90fd2823   sw	a5, -1776(s10)
011d38: 0000006f   j	0
011d3c: 00000013   nop
011d40: 30223703   ld	a4, 770(tp)
011d44: 30223783   ld	a5, 770(tp)
011d48: 02079793   slli	a5, a5, 32
011d4c: 00e7e7b3   or	a5, a5, a4
011d50: 06f239a3   sd	a5, 115(tp)
011d54: 07323883   ld	a7, 115(tp)
011d58: 30223703   ld	a4, 770(tp)
011d5c: 30223783   ld	a5, 770(tp)
011d60: 02079793   slli	a5, a5, 32
011d64: 00e7e7b3   or	a5, a5, a4
011d68: 06f239a3   sd	a5, 115(tp)
011d6c: 07323e03   ld	t3, 115(tp)
011d70: fff00313   li	t1, -1
011d74: 18088813   addi	a6, a7, 384
011d78: 00088793   mv	a5, a7
011d7c: 00000593   li	a1, 0
011d80: 03f31613   slli	a2, t1, 63
011d84: 0007b683   ld	a3, 0(a5)
011d88: 0087b703   ld	a4, 8(a5)
011d8c: 01078793   addi	a5, a5, 16
011d90: 40d70533   sub	a0, a4, a3
011d94: 00d77733   and	a4, a4, a3
011d98: 00a585b3   add	a1, a1, a0
011d9c: 00e67633   and	a2, a2, a4
011da0: fef812e3   bne	a6, a5, -28
011da4: 07426783   lwu	a5, 116(tp)
011da8: 0007879b   sext.w	a5, a5
011dac: 00079a63   bnez	a5, 20
011db0: fc0654e3   bgez	a2, -56
011db4: 000e3783   ld	a5, 0(t3)
011db8: 00f585b3   add	a1, a1, a5
011dbc: 00be3023   sd	a1, 0(t3)
011dc0: ef9f706f   j	-33032
011dc4: c0001073   unimp
011dc8: 30226603   lwu	a2, 770(tp)
011dcc: 30223583   ld	a1, 770(tp)
011dd0: 30223703   ld	a4, 770(tp)
011dd4: 000706b7   lui	a3, 112
011dd8: 00d676b3   and	a3, a2, a3
011ddc: fffd07b7   lui	a5, 1048528
011de0: 00d787bb   addw	a5, a5, a3
011de4: fffe0537   lui	a0, 1048544
011de8: 00a7f7b3   and	a5, a5, a0
011dec: 02071713   slli	a4, a4, 32
011df0: 0007879b   sext.w	a5, a5
011df4: 00b76733   or	a4, a4, a1
011df8: 14078063   beqz	a5, 320
011dfc: 06e239a3   sd	a4, 115(tp)
011e00: 07323583   ld	a1, 115(tp)
011e04: b8b1b823   sd	a1, -1136(gp)
011e08: 08b23923   sd	a1, 146(tp)
011e0c: 0006079b   sext.w	a5, a2
011e10: 0007c463   bltz	a5, 8
011e14: b801a423   sw	zero, -1144(gp)
011e18: 00069c63   bnez	a3, 24
011e1c: 08023923   sd	zero, 146(tp)
011e20: 00022923   sw	zero, 18(tp)
011e24: 31422003   lw	zero, 788(tp)
011e28: e91f706f   j	-33136
011e2c: c0001073   unimp
011e30: 000207b7   lui	a5, 32
011e34: 16f68263   beq	a3, a5, 356
011e38: 000107b7   lui	a5, 16
011e3c: fef696e3   bne	a3, a5, -20
011e40: b8818513   addi	a0, gp, -1144
011e44: 00052783   lw	a5, 0(a0)
011e48: 01f6571b   srliw	a4, a2, 31
011e4c: 00e7f7b3   and	a5, a5, a4
011e50: 0007879b   sext.w	a5, a5
011e54: 12079863   bnez	a5, 304
011e58: 00865f1b   srliw	t5, a2, 8
011e5c: 00c6561b   srliw	a2, a2, 12
011e60: 001f7f13   andi	t5, t5, 1
011e64: 00167613   andi	a2, a2, 1
011e68: 06000793   li	a5, 96
011e6c: 08f23923   sd	a5, 146(tp)
011e70: 32026783   lwu	a5, 800(tp)
011e74: 0047f793   andi	a5, a5, 4
011e78: fe079ce3   bnez	a5, -8
011e7c: f14028f3   csrr	a7, mhartid
011e80: 30e8889b   addiw	a7, a7, 782
011e84: 02089893   slli	a7, a7, 32
011e88: 0208d893   srli	a7, a7, 32
011e8c: 00020e93   mv	t4, tp
011e90: 06000293   li	t0, 96
011e94: 011208b3   add	a7, tp, a7
011e98: 00100f93   li	t6, 1
011e9c: 06000813   li	a6, 96
011ea0: 00100e13   li	t3, 1
011ea4: 0080006f   j	8
011ea8: 1c080863   beqz	a6, 464
011eac: 0008e683   lwu	a3, 0(a7)
011eb0: 0006869b   sext.w	a3, a3
011eb4: 0008e383   lwu	t2, 0(a7)
011eb8: 0003879b   sext.w	a5, t2
011ebc: 0008e303   lwu	t1, 0(a7)
011ec0: 0003031b   sext.w	t1, t1
011ec4: 0008e703   lwu	a4, 0(a7)
011ec8: 0007009b   sext.w	ra, a4
011ecc: 401787b3   sub	a5, a5, ra
011ed0: 406686b3   sub	a3, a3, t1
011ed4: 00777733   and	a4, a4, t2
011ed8: 00f037b3   snez	a5, a5
011edc: 00d036b3   snez	a3, a3
011ee0: 01f7571b   srliw	a4, a4, 31
011ee4: 00d7e7b3   or	a5, a5, a3
011ee8: 00f777b3   and	a5, a4, a5
011eec: 00f52023   sw	a5, 0(a0)
011ef0: 00ee7e33   and	t3, t3, a4
011ef4: ffc8081b   addiw	a6, a6, -4
011ef8: fa0788e3   beqz	a5, -80
011efc: 00022923   sw	zero, 18(tp)
011f00: 31422003   lw	zero, 788(tp)
011f04: 000f1863   bnez	t5, 16
011f08: 000229a3   sw	zero, 19(tp)
011f0c: 31422003   lw	zero, 788(tp)
011f10: b801a423   sw	zero, -1144(gp)
011f14: f14027f3   csrr	a5, mhartid
011f18: 30e7879b   addiw	a5, a5, 782
011f1c: 02079793   slli	a5, a5, 32
011f20: 0207d793   srli	a5, a5, 32
011f24: 00fe8eb3   add	t4, t4, a5
011f28: f00800e3   beqz	a6, -256
011f2c: 000ee783   lwu	a5, 0(t4)
011f30: fff8081b   addiw	a6, a6, -1
011f34: ff5ff06f   j	-12
011f38: 06e239a3   sd	a4, 115(tp)
011f3c: 07323783   ld	a5, 115(tp)
011f40: 00030737   lui	a4, 48
011f44: 04e68463   beq	a3, a4, 72
011f48: 0007e783   lwu	a5, 0(a5)
011f4c: 00f037b3   snez	a5, a5
011f50: 4086561b   sraiw	a2, a2, 8
011f54: 00167613   andi	a2, a2, 1
011f58: ecf604e3   beq	a2, a5, -312
011f5c: 000229a3   sw	zero, 19(tp)
011f60: 31422003   lw	zero, 788(tp)
011f64: ec5ff06f   j	-316
011f68: 08b23923   sd	a1, 146(tp)
011f6c: 07426783   lwu	a5, 116(tp)
011f70: 0007879b   sext.w	a5, a5
011f74: 06078063   beqz	a5, 96
011f78: 000229a3   sw	zero, 19(tp)
011f7c: 31422003   lw	zero, 788(tp)
011f80: b801a423   sw	zero, -1144(gp)
011f84: 08023923   sd	zero, 146(tp)
011f88: ea1ff06f   j	-352
011f8c: 0007b783   ld	a5, 0(a5)
011f90: 00f037b3   snez	a5, a5
011f94: fbdff06f   j	-68
011f98: b8818513   addi	a0, gp, -1144
011f9c: 00052783   lw	a5, 0(a0)
011fa0: 01f6571b   srliw	a4, a2, 31
011fa4: 0017c793   xori	a5, a5, 1
011fa8: 00e7f7b3   and	a5, a5, a4
011fac: 0007879b   sext.w	a5, a5
011fb0: fc079ae3   bnez	a5, -44
011fb4: f14026f3   csrr	a3, mhartid
011fb8: 30e6869b   addiw	a3, a3, 782
011fbc: 02069693   slli	a3, a3, 32
011fc0: 0086571b   srliw	a4, a2, 8
011fc4: 0206d693   srli	a3, a3, 32
011fc8: 00177713   andi	a4, a4, 1
011fcc: 00800e93   li	t4, 8
011fd0: 00d206b3   add	a3, tp, a3
011fd4: 09d23923   sd	t4, 146(tp)
011fd8: 32026783   lwu	a5, 800(tp)
011fdc: 0047f793   andi	a5, a5, 4
011fe0: fe079ce3   bnez	a5, -8
011fe4: 0006e303   lwu	t1, 0(a3)
011fe8: 0003031b   sext.w	t1, t1
011fec: 0006e783   lwu	a5, 0(a3)
011ff0: 00078f1b   sext.w	t5, a5
011ff4: 0006e603   lwu	a2, 0(a3)
011ff8: 00060e1b   sext.w	t3, a2
011ffc: 0006e083   lwu	ra, 0(a3)
012000: 0000829b   sext.w	t0, ra
012004: 0006e603   lwu	a2, 0(a3)
012008: 0006089b   sext.w	a7, a2
01200c: 0006e383   lwu	t2, 0(a3)
012010: 00038f9b   sext.w	t6, t2
012014: 0006e603   lwu	a2, 0(a3)
012018: 0006081b   sext.w	a6, a2
01201c: 0006e603   lwu	a2, 0(a3)
012020: 0017f7b3   and	a5, a5, ra
012024: 0077f7b3   and	a5, a5, t2
012028: 00c7f7b3   and	a5, a5, a2
01202c: 01f7d79b   srliw	a5, a5, 31
012030: 0006061b   sext.w	a2, a2
012034: f2078ae3   beqz	a5, -204
012038: 405607bb   subw	a5, a2, t0
01203c: 41c806bb   subw	a3, a6, t3
012040: 406888bb   subw	a7, a7, t1
012044: 41ef8fbb   subw	t6, t6, t5
012048: 411686b3   sub	a3, a3, a7
01204c: 41f787b3   sub	a5, a5, t6
012050: 0017b793   seqz	a5, a5
012054: 0016b693   seqz	a3, a3
012058: 00f6f633   and	a2, a3, a5
01205c: 00c52023   sw	a2, 0(a0)
012060: 00071463   bnez	a4, 8
012064: 00164613   xori	a2, a2, 1
012068: 00022923   sw	zero, 18(tp)
01206c: 31422003   lw	zero, 788(tp)
012070: da061ce3   bnez	a2, -584
012074: ee9ff06f   j	-280
012078: 020e1663   bnez	t3, 44
01207c: 00022923   sw	zero, 18(tp)
012080: 31422003   lw	zero, 788(tp)
012084: 01f52023   sw	t6, 0(a0)
012088: da0610e3   bnez	a2, -608
01208c: 07426783   lwu	a5, 116(tp)
012090: 0007879b   sext.w	a5, a5
012094: 02079263   bnez	a5, 36
012098: 08b23923   sd	a1, 146(tp)
01209c: 08523923   sd	t0, 146(tp)
0120a0: dfdff06f   j	-516
0120a4: 00022923   sw	zero, 18(tp)
0120a8: 31422003   lw	zero, 788(tp)
0120ac: 00100793   li	a5, 1
0120b0: 00f52023   sw	a5, 0(a0)
0120b4: d60f0ae3   beqz	t5, -652
0120b8: 000229a3   sw	zero, 19(tp)
0120bc: 31422003   lw	zero, 788(tp)
0120c0: b801a423   sw	zero, -1144(gp)
0120c4: d65ff06f   j	-668
0120c8: 30226783   lwu	a5, 770(tp)
0120cc: 080221a3   sw	zero, 131(tp)
0120d0: 00f22023   sw	a5, 0(tp)
0120d4: be5f706f   j	-33820
0120d8: c0001073   unimp
0120dc: 00000013   nop
0120e0: bd9f706f   j	-33832
0120e4: c0001073   unimp
0120e8: bd1f706f   j	-33840
0120ec: c0001073   unimp
0120f0: bc9f706f   j	-33848
0120f4: c0001073   unimp
0120f8: 30226783   lwu	a5, 770(tp)
0120fc: 0007871b   sext.w	a4, a5
012100: 02071463   bnez	a4, 40
012104: 30223703   ld	a4, 770(tp)
012108: 30223783   ld	a5, 770(tp)
01210c: 02079793   slli	a5, a5, 32
012110: 00e7e7b3   or	a5, a5, a4
012114: 06f239a3   sd	a5, 115(tp)
012118: 07323703   ld	a4, 115(tp)
01211c: 00072783   lw	a5, 0(a4)
012120: fe078ee3   beqz	a5, -4
012124: 00008067   ret
012128: 00a22023   sw	a0, 0(tp)
01212c: 00b22023   sw	a1, 0(tp)
012130: 00f22023   sw	a5, 0(tp)
012134: 000c3023   sd	zero, 0(s8)
012138: 380225a3   sw	zero, 907(tp)
01213c: 00008067   ret
012140: 30226703   lwu	a4, 770(tp)
012144: 0007079b   sext.w	a5, a4
012148: 00f037b3   snez	a5, a5
01214c: 0af229a3   sw	a5, 179(tp)
012150: 00a22023   sw	a0, 0(tp)
012154: 00b22023   sw	a1, 0(tp)
012158: 00e22023   sw	a4, 0(tp)
01215c: 00008067   ret
012160: 00a22023   sw	a0, 0(tp)
012164: 00b22023   sw	a1, 0(tp)
012168: 000c3023   sd	zero, 0(s8)
01216c: 380225a3   sw	zero, 907(tp)
012170: 00008067   ret
012174: 00000013   nop
012178: 00000e93   li	t4, 0
01217c: 30226303   lwu	t1, 770(tp)
012180: 30226803   lwu	a6, 770(tp)
012184: ec8ca783   lw	a5, -312(s9)
012188: 0008061b   sext.w	a2, a6
01218c: 000c8693   mv	a3, s9
012190: 0087d79b   srliw	a5, a5, 8
012194: 0037f713   andi	a4, a5, 3
012198: 0037f793   andi	a5, a5, 3
01219c: 18c70e63   beq	a4, a2, 412
0121a0: 00100793   li	a5, 1
0121a4: 30f220a3   sw	a5, 769(tp)
0121a8: 00000513   li	a0, 0
0121ac: 0000c5b7   lui	a1, 12
0121b0: 00100893   li	a7, 1
0121b4: 00251713   slli	a4, a0, 2
0121b8: f83ef793   andi	a5, t4, -125
0121bc: 00e7e7b3   or	a5, a5, a4
0121c0: 1fa23703   ld	a4, 506(tp)
0121c4: 02479e93   slli	t4, a5, 36
0121c8: 00ee8733   add	a4, t4, a4
0121cc: 00b70733   add	a4, a4, a1
0121d0: 3bc72e03   lw	t3, 956(a4)
0121d4: 080e6e13   ori	t3, t3, 128
0121d8: 1fa23703   ld	a4, 506(tp)
0121dc: 01d70733   add	a4, a4, t4
0121e0: 00b70733   add	a4, a4, a1
0121e4: 0107e793   ori	a5, a5, 16
0121e8: 3bc72e23   sw	t3, 956(a4)
0121ec: 00078e93   mv	t4, a5
0121f0: 1fa23703   ld	a4, 506(tp)
0121f4: 02479793   slli	a5, a5, 36
0121f8: 00f70733   add	a4, a4, a5
0121fc: 00b70733   add	a4, a4, a1
012200: 3bc72e03   lw	t3, 956(a4)
012204: 080e6e13   ori	t3, t3, 128
012208: 1fa23703   ld	a4, 506(tp)
01220c: 00f707b3   add	a5, a4, a5
012210: 00b787b3   add	a5, a5, a1
012214: 3bc7ae23   sw	t3, 956(a5)
012218: 09151863   bne	a0, a7, 144
01221c: 1f923783   ld	a5, 505(tp)
012220: 0003f737   lui	a4, 63
012224: 00e787b3   add	a5, a5, a4
012228: 0467ac23   sw	t1, 88(a5)
01222c: 000337b7   lui	a5, 51
012230: 00f687b3   add	a5, a3, a5
012234: 8f47a583   lw	a1, -1804(a5)
012238: 00300893   li	a7, 3
01223c: 00000793   li	a5, 0
012240: 0105d59b   srliw	a1, a1, 16
012244: 01000513   li	a0, 16
012248: 0480006f   j	72
01224c: 06022323   sw	zero, 102(tp)
012250: 1f026703   lwu	a4, 496(tp)
012254: 02071713   slli	a4, a4, 32
012258: 02075713   srli	a4, a4, 32
01225c: 00e23e23   sd	a4, 28(tp)
012260: 1007e713   ori	a4, a5, 256
012264: 0ae232a3   sd	a4, 165(tp)
012268: 31422003   lw	zero, 788(tp)
01226c: ee06a623   sw	zero, -276(a3)
012270: 1f026703   lwu	a4, 496(tp)
012274: 02071713   slli	a4, a4, 32
012278: 02075713   srli	a4, a4, 32
01227c: 00e23e23   sd	a4, 28(tp)
012280: 0a0222a3   sw	zero, 165(tp)
012284: 31422003   lw	zero, 788(tp)
012288: 00178793   addi	a5, a5, 1
01228c: 02a78263   beq	a5, a0, 36
012290: 40f5d73b   sraw	a4, a1, a5
012294: 00177713   andi	a4, a4, 1
012298: fa060ae3   beqz	a2, -76
01229c: fc070ae3   beqz	a4, -44
0122a0: 07122323   sw	a7, 102(tp)
0122a4: fadff06f   j	-84
0122a8: 00100513   li	a0, 1
0122ac: f09ff06f   j	-248
0122b0: 06061a63   bnez	a2, 116
0122b4: eec6a783   lw	a5, -276(a3)
0122b8: fe079ee3   bnez	a5, -4
0122bc: 800007b7   lui	a5, 524288
0122c0: 0018131b   slliw	t1, a6, 1
0122c4: 00178713   addi	a4, a5, 1
0122c8: 0ff37893   zext.b	a7, t1
0122cc: 00e8e8b3   or	a7, a7, a4
0122d0: 0ff78793   addi	a5, a5, 255
0122d4: 00f8f8b3   and	a7, a7, a5
0122d8: 40000537   lui	a0, 262144
0122dc: 0008859b   sext.w	a1, a7
0122e0: 00150513   addi	a0, a0, 1
0122e4: ecb6a423   sw	a1, -312(a3)
0122e8: ec86a783   lw	a5, -312(a3)
0122ec: 0087d71b   srliw	a4, a5, 8
0122f0: 00377713   andi	a4, a4, 3
0122f4: 0007879b   sext.w	a5, a5
0122f8: fec716e3   bne	a4, a2, -20
0122fc: 00a7f7b3   and	a5, a5, a0
012300: 0007879b   sext.w	a5, a5
012304: fea790e3   bne	a5, a0, -32
012308: 02189893   slli	a7, a7, 33
01230c: 0218d893   srli	a7, a7, 33
012310: ed16a423   sw	a7, -312(a3)
012314: 0103033b   addw	t1, t1, a6
012318: 06622323   sw	t1, 102(tp)
01231c: 300220a3   sw	zero, 769(tp)
012320: 00008067   ret
012324: eec6a783   lw	a5, -276(a3)
012328: f8079ae3   bnez	a5, -108
01232c: eec6a783   lw	a5, -276(a3)
012330: fe078ae3   beqz	a5, -12
012334: f89ff06f   j	-120
012338: 0017971b   slliw	a4, a5, 1
01233c: 00f707bb   addw	a5, a4, a5
012340: 06f22323   sw	a5, 102(tp)
012344: 00008067   ret
012348: 30226783   lwu	a5, 770(tp)
01234c: 01600713   li	a4, 22
012350: 0007879b   sext.w	a5, a5
012354: 1ae78463   beq	a5, a4, 424
012358: 02f76c63   bltu	a4, a5, 56
01235c: 00b00713   li	a4, 11
012360: 16e78663   beq	a5, a4, 364
012364: 01500713   li	a4, 21
012368: 16e79063   bne	a5, a4, 352
01236c: 30226703   lwu	a4, 770(tp)
012370: 0007079b   sext.w	a5, a4
012374: 00f037b3   snez	a5, a5
012378: 0af229a3   sw	a5, 179(tp)
01237c: 00a22023   sw	a0, 0(tp)
012380: 01500793   li	a5, 21
012384: 00f22023   sw	a5, 0(tp)
012388: 00e22023   sw	a4, 0(tp)
01238c: 00008067   ret
012390: 01c00713   li	a4, 28
012394: 12e79a63   bne	a5, a4, 308
012398: 00000513   li	a0, 0
01239c: 30226883   lwu	a7, 770(tp)
0123a0: 30226583   lwu	a1, 770(tp)
0123a4: ec8ca783   lw	a5, -312(s9)
0123a8: 0005861b   sext.w	a2, a1
0123ac: 000c8693   mv	a3, s9
0123b0: 0087d79b   srliw	a5, a5, 8
0123b4: 0037f713   andi	a4, a5, 3
0123b8: 0037f793   andi	a5, a5, 3
0123bc: 20c70263   beq	a4, a2, 516
0123c0: 00100793   li	a5, 1
0123c4: 30f220a3   sw	a5, 769(tp)
0123c8: 00000313   li	t1, 0
0123cc: 0000c837   lui	a6, 12
0123d0: 00100e13   li	t3, 1
0123d4: 00231713   slli	a4, t1, 2
0123d8: f8357793   andi	a5, a0, -125
0123dc: 00e7e7b3   or	a5, a5, a4
0123e0: 1fa23503   ld	a0, 506(tp)
0123e4: 02479713   slli	a4, a5, 36
0123e8: 00e50533   add	a0, a0, a4
0123ec: 01050533   add	a0, a0, a6
0123f0: 3bc52503   lw	a0, 956(a0)
0123f4: 08056513   ori	a0, a0, 128
0123f8: 1fa23e83   ld	t4, 506(tp)
0123fc: 01d70733   add	a4, a4, t4
012400: 01070733   add	a4, a4, a6
012404: 0107e793   ori	a5, a5, 16
012408: 3aa72e23   sw	a0, 956(a4)
01240c: 00078513   mv	a0, a5
012410: 1fa23703   ld	a4, 506(tp)
012414: 02479793   slli	a5, a5, 36
012418: 00f70733   add	a4, a4, a5
01241c: 01070733   add	a4, a4, a6
012420: 3bc72703   lw	a4, 956(a4)
012424: 08076713   ori	a4, a4, 128
012428: 1fa23e83   ld	t4, 506(tp)
01242c: 01d787b3   add	a5, a5, t4
012430: 010787b3   add	a5, a5, a6
012434: 3ae7ae23   sw	a4, 956(a5)
012438: 19c31063   bne	t1, t3, 384
01243c: 1f923783   ld	a5, 505(tp)
012440: 0003f737   lui	a4, 63
012444: 00e787b3   add	a5, a5, a4
012448: 0517ac23   sw	a7, 88(a5)
01244c: 000337b7   lui	a5, 51
012450: 00f687b3   add	a5, a3, a5
012454: 8f47a503   lw	a0, -1804(a5)
012458: 00300893   li	a7, 3
01245c: 00000793   li	a5, 0
012460: 0105551b   srliw	a0, a0, 16
012464: 01000813   li	a6, 16
012468: 0480006f   j	72
01246c: 06022323   sw	zero, 102(tp)
012470: 1f026703   lwu	a4, 496(tp)
012474: 02071713   slli	a4, a4, 32
012478: 02075713   srli	a4, a4, 32
01247c: 00e23e23   sd	a4, 28(tp)
012480: 1007e713   ori	a4, a5, 256
012484: 0ae232a3   sd	a4, 165(tp)
012488: 31422003   lw	zero, 788(tp)
01248c: ee06a623   sw	zero, -276(a3)
012490: 1f026703   lwu	a4, 496(tp)
012494: 02071713   slli	a4, a4, 32
012498: 02075713   srli	a4, a4, 32
01249c: 00e23e23   sd	a4, 28(tp)
0124a0: 0a0222a3   sw	zero, 165(tp)
0124a4: 31422003   lw	zero, 788(tp)
0124a8: 00178793   addi	a5, a5, 1
0124ac: 09078263   beq	a5, a6, 132
0124b0: 40f5573b   sraw	a4, a0, a5
0124b4: 00177713   andi	a4, a4, 1
0124b8: fa060ae3   beqz	a2, -76
0124bc: fc070ae3   beqz	a4, -44
0124c0: 07122323   sw	a7, 102(tp)
0124c4: fadff06f   j	-84
0124c8: be9f606f   j	-37912
0124cc: 30226783   lwu	a5, 770(tp)
0124d0: 0007871b   sext.w	a4, a5
0124d4: 04071063   bnez	a4, 64
0124d8: 30223703   ld	a4, 770(tp)
0124dc: 30223783   ld	a5, 770(tp)
0124e0: 02079793   slli	a5, a5, 32
0124e4: 00e7e7b3   or	a5, a5, a4
0124e8: 06f239a3   sd	a5, 115(tp)
0124ec: 07323703   ld	a4, 115(tp)
0124f0: 00072783   lw	a5, 0(a4)
0124f4: fe078ee3   beqz	a5, -4
0124f8: 00008067   ret
0124fc: 00a22023   sw	a0, 0(tp)
012500: 01600793   li	a5, 22
012504: 00f22023   sw	a5, 0(tp)
012508: 000c3023   sd	zero, 0(s8)
01250c: 380225a3   sw	zero, 907(tp)
012510: 00008067   ret
012514: 00a22023   sw	a0, 0(tp)
012518: 00b00713   li	a4, 11
01251c: 00e22023   sw	a4, 0(tp)
012520: 00f22023   sw	a5, 0(tp)
012524: 000c3023   sd	zero, 0(s8)
012528: 380225a3   sw	zero, 907(tp)
01252c: 00008067   ret
012530: 06061a63   bnez	a2, 116
012534: eec6a783   lw	a5, -276(a3)
012538: fe079ee3   bnez	a5, -4
01253c: 800007b7   lui	a5, 524288
012540: 0015931b   slliw	t1, a1, 1
012544: 00178713   addi	a4, a5, 1
012548: 0ff37893   zext.b	a7, t1
01254c: 00e8e8b3   or	a7, a7, a4
012550: 0ff78793   addi	a5, a5, 255
012554: 00f8f8b3   and	a7, a7, a5
012558: 40000837   lui	a6, 262144
01255c: 0008851b   sext.w	a0, a7
012560: 00180813   addi	a6, a6, 1
012564: eca6a423   sw	a0, -312(a3)
012568: ec86a783   lw	a5, -312(a3)
01256c: 0087d71b   srliw	a4, a5, 8
012570: 00377713   andi	a4, a4, 3
012574: 0007879b   sext.w	a5, a5
012578: fec716e3   bne	a4, a2, -20
01257c: 0107f7b3   and	a5, a5, a6
012580: 0007879b   sext.w	a5, a5
012584: ff0790e3   bne	a5, a6, -32
012588: 02189893   slli	a7, a7, 33
01258c: 0218d893   srli	a7, a7, 33
012590: ed16a423   sw	a7, -312(a3)
012594: 00b3033b   addw	t1, t1, a1
012598: 06622323   sw	t1, 102(tp)
01259c: 300220a3   sw	zero, 769(tp)
0125a0: 00008067   ret
0125a4: eec6a783   lw	a5, -276(a3)
0125a8: f8079ae3   bnez	a5, -108
0125ac: eec6a783   lw	a5, -276(a3)
0125b0: fe078ae3   beqz	a5, -12
0125b4: f89ff06f   j	-120
0125b8: 00100313   li	t1, 1
0125bc: e19ff06f   j	-488
0125c0: 0017971b   slliw	a4, a5, 1
0125c4: 00f707bb   addw	a5, a4, a5
0125c8: 06f22323   sw	a5, 102(tp)
0125cc: 00008067   ret
0125d0: 30226783   lwu	a5, 770(tp)
0125d4: 0037f793   andi	a5, a5, 3
0125d8: 06f224a3   sw	a5, 105(tp)
0125dc: 31422003   lw	zero, 788(tp)
0125e0: ed8f706f   j	-35112
0125e4: c0001073   unimp
0125e8: 30226783   lwu	a5, 770(tp)
0125ec: 01523783   ld	a5, 21(tp)
0125f0: 0037f793   andi	a5, a5, 3
0125f4: 00f207b3   add	a5, tp, a5
0125f8: 00b7e583   lwu	a1, 11(a5)
0125fc: 00100713   li	a4, 1
012600: 04e7a0a3   sw	a4, 65(a5)
012604: 06e223a3   sw	a4, 103(tp)
012608: 80000737   lui	a4, 524288
01260c: 0067071b   addiw	a4, a4, 6
012610: 1fa23783   ld	a5, 506(tp)
012614: 00100693   li	a3, 1
012618: 02469693   slli	a3, a3, 36
01261c: 00d787b3   add	a5, a5, a3
012620: 0002e637   lui	a2, 46
012624: 00c787b3   add	a5, a5, a2
012628: 08e7a023   sw	a4, 128(a5)
01262c: c0000837   lui	a6, 786432
012630: c0000537   lui	a0, 786432
012634: 1fa23783   ld	a5, 506(tp)
012638: 00d787b3   add	a5, a5, a3
01263c: 00c787b3   add	a5, a5, a2
012640: 0807a783   lw	a5, 128(a5)
012644: 0007879b   sext.w	a5, a5
012648: 0107f733   and	a4, a5, a6
01264c: 0007071b   sext.w	a4, a4
012650: fea712e3   bne	a4, a0, -28
012654: 02179793   slli	a5, a5, 33
012658: 0217d793   srli	a5, a5, 33
01265c: 1fa23703   ld	a4, 506(tp)
012660: 00d70733   add	a4, a4, a3
012664: 00c70733   add	a4, a4, a2
012668: 08f72023   sw	a5, 128(a4)
01266c: 00100713   li	a4, 1
012670: 02471713   slli	a4, a4, 36
012674: 0002e637   lui	a2, 46
012678: c00006b7   lui	a3, 786432
01267c: 1fa23783   ld	a5, 506(tp)
012680: 00e787b3   add	a5, a5, a4
012684: 00c787b3   add	a5, a5, a2
012688: 0807a783   lw	a5, 128(a5)
01268c: 00d7f7b3   and	a5, a5, a3
012690: 0007879b   sext.w	a5, a5
012694: fe0794e3   bnez	a5, -24
012698: 060223a3   sw	zero, 103(tp)
01269c: 04b220a3   sw	a1, 65(tp)
0126a0: e18f706f   j	-35304
0126a4: c0001073   unimp
0126a8: 709ba783   lw	a5, 1801(s7)
0126ac: 0007879b   sext.w	a5, a5
0126b0: 00a26703   lwu	a4, 10(tp)
0126b4: 00e7f7b3   and	a5, a5, a4
0126b8: 0017f793   andi	a5, a5, 1
0126bc: 00078c63   beqz	a5, 24
0126c0: 02251713   slli	a4, a0, 34
0126c4: 03275713   srli	a4, a4, 50
0126c8: 000107b7   lui	a5, 16
0126cc: 40e787bb   subw	a5, a5, a4
0126d0: 02f22423   sw	a5, 40(tp)
0126d4: 00a22023   sw	a0, 0(tp)
0126d8: 000c3023   sd	zero, 0(s8)
0126dc: 380225a3   sw	zero, 907(tp)
0126e0: dd8f706f   j	-35368
0126e4: c0001073   unimp
0126e8: 30226703   lwu	a4, 770(tp)
0126ec: 00100693   li	a3, 1
0126f0: 01c7579b   srliw	a5, a4, 28
0126f4: 00f6fe63   bgeu	a3, a5, 28
0126f8: 30226603   lwu	a2, 770(tp)
0126fc: 00200693   li	a3, 2
012700: 08d78263   beq	a5, a3, 132
012704: 00300693   li	a3, 3
012708: 04d78063   beq	a5, a3, 64
01270c: 0000006f   j	0
012710: ffff07b7   lui	a5, 1048560
012714: 0ff78793   addi	a5, a5, 255
012718: 00f57533   and	a0, a0, a5
01271c: 000087b7   lui	a5, 8
012720: 90078793   addi	a5, a5, -1792
012724: 00f567b3   or	a5, a0, a5
012728: 00f22023   sw	a5, 0(tp)
01272c: 03071713   slli	a4, a4, 48
012730: 03075713   srli	a4, a4, 48
012734: 00e22023   sw	a4, 0(tp)
012738: 000c3023   sd	zero, 0(s8)
01273c: 380225a3   sw	zero, 907(tp)
012740: d78f706f   j	-35464
012744: c0001073   unimp
012748: 2acda023   sw	a2, 672(s11)
01274c: 8ac1ac23   sw	a2, -1864(gp)
012750: 00a26783   lwu	a5, 10(tp)
012754: 000086b7   lui	a3, 8
012758: 00d7f7b3   and	a5, a5, a3
01275c: 00078863   beqz	a5, 16
012760: 000107b7   lui	a5, 16
012764: fff7879b   addiw	a5, a5, -1
012768: 02f22423   sw	a5, 40(tp)
01276c: 00a22023   sw	a0, 0(tp)
012770: 03071713   slli	a4, a4, 48
012774: 03075713   srli	a4, a4, 48
012778: 00e22023   sw	a4, 0(tp)
01277c: 00c22023   sw	a2, 0(tp)
012780: fc1ff06f   j	-64
012784: 00367693   andi	a3, a2, 3
012788: 00100793   li	a5, 1
01278c: 00d797bb   sllw	a5, a5, a3
012790: 28cdaa23   sw	a2, 660(s11)
012794: 0037f793   andi	a5, a5, 3
012798: 00f22e23   sw	a5, 28(tp)
01279c: 1ef22823   sw	a5, 496(tp)
0127a0: 8ac1a823   sw	a2, -1872(gp)
0127a4: fadff06f   j	-84
0127a8: 30226703   lwu	a4, 770(tp)
0127ac: 2aeda023   sw	a4, 672(s11)
0127b0: 00a26783   lwu	a5, 10(tp)
0127b4: 00f7d79b   srliw	a5, a5, 15
0127b8: 0017f793   andi	a5, a5, 1
0127bc: 02f22423   sw	a5, 40(tp)
0127c0: c00187b7   lui	a5, 786456
0127c4: 9007879b   addiw	a5, a5, -1792
0127c8: 00f22023   sw	a5, 0(tp)
0127cc: 24d00793   li	a5, 589
0127d0: 00f22023   sw	a5, 0(tp)
0127d4: 00e22023   sw	a4, 0(tp)
0127d8: 8ae1ac23   sw	a4, -1864(gp)
0127dc: cdcf706f   j	-35620
0127e0: c0001073   unimp
0127e4: 00000013   nop
0127e8: 30226783   lwu	a5, 770(tp)
0127ec: 0007889b   sext.w	a7, a5
0127f0: 30226583   lwu	a1, 770(tp)
0127f4: 02079793   slli	a5, a5, 32
0127f8: 02059713   slli	a4, a1, 32
0127fc: 0207d793   srli	a5, a5, 32
012800: 0005859b   sext.w	a1, a1
012804: 00f767b3   or	a5, a4, a5
012808: 06f239a3   sd	a5, 115(tp)
01280c: 07323303   ld	t1, 115(tp)
012810: 020221a3   sw	zero, 35(tp)
012814: 00926783   lwu	a5, 9(tp)
012818: 00008737   lui	a4, 8
01281c: 00e7f7b3   and	a5, a5, a4
012820: 02251713   slli	a4, a0, 34
012824: 03275713   srli	a4, a4, 50
012828: 06078e63   beqz	a5, 124
01282c: 709bb783   ld	a5, 1801(s7)
012830: 06079a63   bnez	a5, 116
012834: fff7071b   addiw	a4, a4, -1
012838: 06070263   beqz	a4, 100
01283c: c0010837   lui	a6, 786448
012840: fff80813   addi	a6, a6, -1
012844: 00030e37   lui	t3, 48
012848: 30226603   lwu	a2, 770(tp)
01284c: 30226683   lwu	a3, 770(tp)
012850: 01223783   ld	a5, 18(tp)
012854: fe079ee3   bnez	a5, -4
012858: 0026179b   slliw	a5, a2, 2
01285c: 02079793   slli	a5, a5, 32
012860: 01057533   and	a0, a0, a6
012864: 0207d793   srli	a5, a5, 32
012868: 01c56533   or	a0, a0, t3
01286c: 006787b3   add	a5, a5, t1
012870: 00f231a3   sd	a5, 3(tp)
012874: 02069793   slli	a5, a3, 32
012878: 0207d793   srli	a5, a5, 32
01287c: 00f231a3   sd	a5, 3(tp)
012880: 00a22023   sw	a0, 0(tp)
012884: 01122023   sw	a7, 0(tp)
012888: 00b22023   sw	a1, 0(tp)
01288c: 00c22023   sw	a2, 0(tp)
012890: 00d22023   sw	a3, 0(tp)
012894: ffe7071b   addiw	a4, a4, -2
012898: fa0718e3   bnez	a4, -80
01289c: c1cf706f   j	-35812
0128a0: c0001073   unimp
0128a4: ffe7071b   addiw	a4, a4, -2
0128a8: 00000793   li	a5, 0
0128ac: 30226683   lwu	a3, 770(tp)
0128b0: 0017879b   addiw	a5, a5, 1
0128b4: fef77ce3   bgeu	a4, a5, -8
0128b8: fe5ff06f   j	-28
0128bc: 00000013   nop
0128c0: 00257793   andi	a5, a0, 2
0128c4: 0e079063   bnez	a5, 224
0128c8: 01123703   ld	a4, 17(tp)
0128cc: 0c070263   beqz	a4, 196
0128d0: 00050593   mv	a1, a0
0128d4: 30226703   lwu	a4, 770(tp)
0128d8: 0007089b   sext.w	a7, a4
0128dc: 30226803   lwu	a6, 770(tp)
0128e0: 02071713   slli	a4, a4, 32
0128e4: 02081693   slli	a3, a6, 32
0128e8: 02075713   srli	a4, a4, 32
0128ec: 0008081b   sext.w	a6, a6
0128f0: 00e6e733   or	a4, a3, a4
0128f4: 06e239a3   sd	a4, 115(tp)
0128f8: 07323303   ld	t1, 115(tp)
0128fc: 020221a3   sw	zero, 35(tp)
012900: 00926703   lwu	a4, 9(tp)
012904: 000106b7   lui	a3, 16
012908: 00d77733   and	a4, a4, a3
01290c: 14070a63   beqz	a4, 340
012910: 709bb703   ld	a4, 1801(s7)
012914: 14071663   bnez	a4, 332
012918: 02259713   slli	a4, a1, 34
01291c: 03275713   srli	a4, a4, 50
012920: fff7071b   addiw	a4, a4, -1
012924: 06070263   beqz	a4, 100
012928: c0010537   lui	a0, 786448
01292c: fff50513   addi	a0, a0, -1
012930: 00030e37   lui	t3, 48
012934: 30226603   lwu	a2, 770(tp)
012938: 30226683   lwu	a3, 770(tp)
01293c: 01223783   ld	a5, 18(tp)
012940: fe079ee3   bnez	a5, -4
012944: 0026179b   slliw	a5, a2, 2
012948: 02079793   slli	a5, a5, 32
01294c: 00a5f5b3   and	a1, a1, a0
012950: 0207d793   srli	a5, a5, 32
012954: 01c5e5b3   or	a1, a1, t3
012958: 006787b3   add	a5, a5, t1
01295c: 00f231a3   sd	a5, 3(tp)
012960: 02069793   slli	a5, a3, 32
012964: 0207d793   srli	a5, a5, 32
012968: 00f231a3   sd	a5, 3(tp)
01296c: 00b22023   sw	a1, 0(tp)
012970: 01122023   sw	a7, 0(tp)
012974: 01022023   sw	a6, 0(tp)
012978: 00c22023   sw	a2, 0(tp)
01297c: 00d22023   sw	a3, 0(tp)
012980: ffe7071b   addiw	a4, a4, -2
012984: fa0718e3   bnez	a4, -80
012988: b30f706f   j	-36048
01298c: c0001073   unimp
012990: 00022c23   sw	zero, 24(tp)
012994: 1f126703   lwu	a4, 497(tp)
012998: 00e22023   sw	a4, 0(tp)
01299c: 00022023   sw	zero, 0(tp)
0129a0: f31ff06f   j	-208
0129a4: 00050593   mv	a1, a0
0129a8: 30226783   lwu	a5, 770(tp)
0129ac: 0007889b   sext.w	a7, a5
0129b0: 30226303   lwu	t1, 770(tp)
0129b4: 02079793   slli	a5, a5, 32
0129b8: 02031713   slli	a4, t1, 32
0129bc: 0207d793   srli	a5, a5, 32
0129c0: 0003031b   sext.w	t1, t1
0129c4: 00f767b3   or	a5, a4, a5
0129c8: 06f239a3   sd	a5, 115(tp)
0129cc: 07323803   ld	a6, 115(tp)
0129d0: 020221a3   sw	zero, 35(tp)
0129d4: 00926783   lwu	a5, 9(tp)
0129d8: 01000737   lui	a4, 4096
0129dc: 00e7f7b3   and	a5, a5, a4
0129e0: 08078e63   beqz	a5, 156
0129e4: 709bb783   ld	a5, 1801(s7)
0129e8: 08079a63   bnez	a5, 148
0129ec: 02259713   slli	a4, a1, 34
0129f0: 03275713   srli	a4, a4, 50
0129f4: fff7071b   addiw	a4, a4, -1
0129f8: f80708e3   beqz	a4, -112
0129fc: c0010537   lui	a0, 786448
012a00: fff50513   addi	a0, a0, -1
012a04: 00030e37   lui	t3, 48
012a08: 30226603   lwu	a2, 770(tp)
012a0c: 30226683   lwu	a3, 770(tp)
012a10: 01223783   ld	a5, 18(tp)
012a14: fe079ee3   bnez	a5, -4
012a18: 0026179b   slliw	a5, a2, 2
012a1c: 02079793   slli	a5, a5, 32
012a20: 00a5f5b3   and	a1, a1, a0
012a24: 0207d793   srli	a5, a5, 32
012a28: 01c5e5b3   or	a1, a1, t3
012a2c: 010787b3   add	a5, a5, a6
012a30: 00f231a3   sd	a5, 3(tp)
012a34: 02069793   slli	a5, a3, 32
012a38: 0207d793   srli	a5, a5, 32
012a3c: 00f231a3   sd	a5, 3(tp)
012a40: 00b22023   sw	a1, 0(tp)
012a44: 01122023   sw	a7, 0(tp)
012a48: 00622023   sw	t1, 0(tp)
012a4c: 00c22023   sw	a2, 0(tp)
012a50: 00d22023   sw	a3, 0(tp)
012a54: ffe7071b   addiw	a4, a4, -2
012a58: fa0718e3   bnez	a4, -80
012a5c: f2dff06f   j	-212
012a60: 02251713   slli	a4, a0, 34
012a64: 03275713   srli	a4, a4, 50
012a68: ffe7071b   addiw	a4, a4, -2
012a6c: 30226683   lwu	a3, 770(tp)
012a70: 0017879b   addiw	a5, a5, 1
012a74: fef77ce3   bgeu	a4, a5, -8
012a78: f11ff06f   j	-240
012a7c: 02251793   slli	a5, a0, 34
012a80: 0327d793   srli	a5, a5, 50
012a84: ffe7879b   addiw	a5, a5, -2
012a88: 00000713   li	a4, 0
012a8c: 30226683   lwu	a3, 770(tp)
012a90: 0017071b   addiw	a4, a4, 1
012a94: fee7fce3   bgeu	a5, a4, -8
012a98: ef1ff06f   j	-272
012a9c: 00000013   nop
012aa0: 30226783   lwu	a5, 770(tp)
012aa4: 0007889b   sext.w	a7, a5
012aa8: 30226583   lwu	a1, 770(tp)
012aac: 02079793   slli	a5, a5, 32
012ab0: 02059713   slli	a4, a1, 32
012ab4: 0207d793   srli	a5, a5, 32
012ab8: 0005859b   sext.w	a1, a1
012abc: 00f767b3   or	a5, a4, a5
012ac0: 06f239a3   sd	a5, 115(tp)
012ac4: 07323303   ld	t1, 115(tp)
012ac8: 020221a3   sw	zero, 35(tp)
012acc: 00926783   lwu	a5, 9(tp)
012ad0: 02251713   slli	a4, a0, 34
012ad4: 0017f793   andi	a5, a5, 1
012ad8: 03275713   srli	a4, a4, 50
012adc: 06078e63   beqz	a5, 124
012ae0: 709bb783   ld	a5, 1801(s7)
012ae4: 06079a63   bnez	a5, 116
012ae8: fff7071b   addiw	a4, a4, -1
012aec: 06070263   beqz	a4, 100
012af0: c0010837   lui	a6, 786448
012af4: fff80813   addi	a6, a6, -1
012af8: 00030e37   lui	t3, 48
012afc: 30226603   lwu	a2, 770(tp)
012b00: 30226683   lwu	a3, 770(tp)
012b04: 01223783   ld	a5, 18(tp)
012b08: fe079ee3   bnez	a5, -4
012b0c: 0026179b   slliw	a5, a2, 2
012b10: 02079793   slli	a5, a5, 32
012b14: 01057533   and	a0, a0, a6
012b18: 0207d793   srli	a5, a5, 32
012b1c: 01c56533   or	a0, a0, t3
012b20: 006787b3   add	a5, a5, t1
012b24: 00f231a3   sd	a5, 3(tp)
012b28: 02069793   slli	a5, a3, 32
012b2c: 0207d793   srli	a5, a5, 32
012b30: 00f231a3   sd	a5, 3(tp)
012b34: 00a22023   sw	a0, 0(tp)
012b38: 01122023   sw	a7, 0(tp)
012b3c: 00b22023   sw	a1, 0(tp)
012b40: 00c22023   sw	a2, 0(tp)
012b44: 00d22023   sw	a3, 0(tp)
012b48: ffe7071b   addiw	a4, a4, -2
012b4c: fa0718e3   bnez	a4, -80
012b50: 968f706f   j	-36504
012b54: c0001073   unimp
012b58: ffe7071b   addiw	a4, a4, -2
012b5c: 00000793   li	a5, 0
012b60: 30226683   lwu	a3, 770(tp)
012b64: 0017879b   addiw	a5, a5, 1
012b68: fef77ce3   bgeu	a4, a5, -8
012b6c: fe5ff06f   j	-28
012b70: 01023783   ld	a5, 16(tp)
012b74: 00079c63   bnez	a5, 24
012b78: 00022ba3   sw	zero, 23(tp)
012b7c: c00057b7   lui	a5, 786437
012b80: 2007879b   addiw	a5, a5, 512
012b84: 00f22023   sw	a5, 0(tp)
012b88: 00022023   sw	zero, 0(tp)
012b8c: 00050713   mv	a4, a0
012b90: 30226783   lwu	a5, 770(tp)
012b94: 0007889b   sext.w	a7, a5
012b98: 30226803   lwu	a6, 770(tp)
012b9c: 02079793   slli	a5, a5, 32
012ba0: 02081693   slli	a3, a6, 32
012ba4: 0207d793   srli	a5, a5, 32
012ba8: 0008081b   sext.w	a6, a6
012bac: 00f6e7b3   or	a5, a3, a5
012bb0: 06f239a3   sd	a5, 115(tp)
012bb4: 07323303   ld	t1, 115(tp)
012bb8: 020221a3   sw	zero, 35(tp)
012bbc: 00926783   lwu	a5, 9(tp)
012bc0: 0027f793   andi	a5, a5, 2
012bc4: 08078263   beqz	a5, 132
012bc8: 709bb783   ld	a5, 1801(s7)
012bcc: 06079e63   bnez	a5, 124
012bd0: 02271693   slli	a3, a4, 34
012bd4: 0326d693   srli	a3, a3, 50
012bd8: fff6869b   addiw	a3, a3, -1
012bdc: 06068263   beqz	a3, 100
012be0: c0010537   lui	a0, 786448
012be4: fff50513   addi	a0, a0, -1
012be8: 00030e37   lui	t3, 48
012bec: 30226583   lwu	a1, 770(tp)
012bf0: 30226603   lwu	a2, 770(tp)
012bf4: 01223783   ld	a5, 18(tp)
012bf8: fe079ee3   bnez	a5, -4
012bfc: 0025979b   slliw	a5, a1, 2
012c00: 02079793   slli	a5, a5, 32
012c04: 00a77733   and	a4, a4, a0
012c08: 0207d793   srli	a5, a5, 32
012c0c: 01c76733   or	a4, a4, t3
012c10: 006787b3   add	a5, a5, t1
012c14: 00f231a3   sd	a5, 3(tp)
012c18: 02061793   slli	a5, a2, 32
012c1c: 0207d793   srli	a5, a5, 32
012c20: 00f231a3   sd	a5, 3(tp)
012c24: 00e22023   sw	a4, 0(tp)
012c28: 01122023   sw	a7, 0(tp)
012c2c: 01022023   sw	a6, 0(tp)
012c30: 00b22023   sw	a1, 0(tp)
012c34: 00c22023   sw	a2, 0(tp)
012c38: ffe6869b   addiw	a3, a3, -2
012c3c: fa0698e3   bnez	a3, -80
012c40: 878f706f   j	-36744
012c44: c0001073   unimp
012c48: 02251713   slli	a4, a0, 34
012c4c: 03275713   srli	a4, a4, 50
012c50: ffe7071b   addiw	a4, a4, -2
012c54: 00000793   li	a5, 0
012c58: 30226683   lwu	a3, 770(tp)
012c5c: 0017879b   addiw	a5, a5, 1
012c60: fef77ce3   bgeu	a4, a5, -8
012c64: fddff06f   j	-36
012c68: 03271713   slli	a4, a4, 50
012c6c: 03275713   srli	a4, a4, 50
012c70: 00a26803   lwu	a6, 10(tp)
012c74: 0107f7b3   and	a5, a5, a6
012c78: 02061613   slli	a2, a2, 32
012c7c: 0015f813   andi	a6, a1, 1
012c80: 0007879b   sext.w	a5, a5
012c84: 02065613   srli	a2, a2, 32
012c88: 06081463   bnez	a6, 104
012c8c: 02059593   slli	a1, a1, 32
012c90: 0205d593   srli	a1, a1, 32
012c94: 02061613   slli	a2, a2, 32
012c98: 00b66633   or	a2, a2, a1
012c9c: 06c239a3   sd	a2, 115(tp)
012ca0: 07323603   ld	a2, 115(tp)
012ca4: 0007071b   sext.w	a4, a4
012ca8: 00078463   beqz	a5, 8
012cac: 02e22423   sw	a4, 40(tp)
012cb0: 0006879b   sext.w	a5, a3
012cb4: 0007d463   bgez	a5, 8
012cb8: 0017171b   slliw	a4, a4, 1
012cbc: 00c231a3   sd	a2, 3(tp)
012cc0: 02071793   slli	a5, a4, 32
012cc4: 0207d793   srli	a5, a5, 32
012cc8: 00f231a3   sd	a5, 3(tp)
012ccc: c00107b7   lui	a5, 786448
012cd0: fff78793   addi	a5, a5, -1
012cd4: 00f577b3   and	a5, a0, a5
012cd8: 00010537   lui	a0, 16
012cdc: 00a7e533   or	a0, a5, a0
012ce0: 00a22023   sw	a0, 0(tp)
012ce4: 00d22023   sw	a3, 0(tp)
012ce8: 00e22023   sw	a4, 0(tp)
012cec: 00008067   ret
012cf0: 8881b583   ld	a1, -1912(gp)
012cf4: 00b60633   add	a2, a2, a1
012cf8: fadff06f   j	-84
012cfc: 00000013   nop
012d00: 30226683   lwu	a3, 770(tp)
012d04: 30226703   lwu	a4, 770(tp)
012d08: 30226803   lwu	a6, 770(tp)
012d0c: 30226783   lwu	a5, 770(tp)
012d10: 03279613   slli	a2, a5, 50
012d14: 08060863   beqz	a2, 144
012d18: 01023603   ld	a2, 16(tp)
012d1c: 00061c63   bnez	a2, 24
012d20: 00022ba3   sw	zero, 23(tp)
012d24: c0005637   lui	a2, 786437
012d28: 2006061b   addiw	a2, a2, 512
012d2c: 00c22023   sw	a2, 0(tp)
012d30: 00022023   sw	zero, 0(tp)
012d34: 03279793   slli	a5, a5, 50
012d38: 0327d793   srli	a5, a5, 50
012d3c: 00a26603   lwu	a2, 10(tp)
012d40: 02071713   slli	a4, a4, 32
012d44: 0016f593   andi	a1, a3, 1
012d48: 00267613   andi	a2, a2, 2
012d4c: 02075713   srli	a4, a4, 32
012d50: 04058e63   beqz	a1, 92
012d54: 8881b683   ld	a3, -1912(gp)
012d58: 00d70733   add	a4, a4, a3
012d5c: 0007879b   sext.w	a5, a5
012d60: 00060463   beqz	a2, 8
012d64: 02f22423   sw	a5, 40(tp)
012d68: 0008069b   sext.w	a3, a6
012d6c: 0006d463   bgez	a3, 8
012d70: 0017979b   slliw	a5, a5, 1
012d74: 00e231a3   sd	a4, 3(tp)
012d78: 02079713   slli	a4, a5, 32
012d7c: 02075713   srli	a4, a4, 32
012d80: 00e231a3   sd	a4, 3(tp)
012d84: c0010737   lui	a4, 786448
012d88: fff70713   addi	a4, a4, -1
012d8c: 00a77533   and	a0, a4, a0
012d90: 00010737   lui	a4, 16
012d94: 00e56533   or	a0, a0, a4
012d98: 00a22023   sw	a0, 0(tp)
012d9c: 01022023   sw	a6, 0(tp)
012da0: 00f22023   sw	a5, 0(tp)
012da4: f15f606f   j	-37100
012da8: c0001073   unimp
012dac: 02069693   slli	a3, a3, 32
012db0: 0206d693   srli	a3, a3, 32
012db4: 02071713   slli	a4, a4, 32
012db8: 00d76733   or	a4, a4, a3
012dbc: 06e239a3   sd	a4, 115(tp)
012dc0: 07323703   ld	a4, 115(tp)
012dc4: f99ff06f   j	-104
012dc8: 30226603   lwu	a2, 770(tp)
012dcc: 30226683   lwu	a3, 770(tp)
012dd0: 30226583   lwu	a1, 770(tp)
012dd4: 30226783   lwu	a5, 770(tp)
012dd8: 00a26703   lwu	a4, 10(tp)
012ddc: 00257813   andi	a6, a0, 2
012de0: 08080463   beqz	a6, 136
012de4: 0187571b   srliw	a4, a4, 24
012de8: 00177713   andi	a4, a4, 1
012dec: 03279793   slli	a5, a5, 50
012df0: 0327d813   srli	a6, a5, 50
012df4: 00080793   mv	a5, a6
012df8: 00070463   beqz	a4, 8
012dfc: 03022423   sw	a6, 40(tp)
012e00: 00367713   andi	a4, a2, 3
012e04: 00100893   li	a7, 1
012e08: 0d170863   beq	a4, a7, 208
012e0c: 00200893   li	a7, 2
012e10: 09170e63   beq	a4, a7, 156
012e14: 06070c63   beqz	a4, 120
012e18: 00000693   li	a3, 0
012e1c: c0010737   lui	a4, 786448
012e20: fff70713   addi	a4, a4, -1
012e24: 00e57733   and	a4, a0, a4
012e28: 00010537   lui	a0, 16
012e2c: 00a76533   or	a0, a4, a0
012e30: 02c26703   lwu	a4, 44(tp)
012e34: 0005861b   sext.w	a2, a1
012e38: 00065463   bgez	a2, 8
012e3c: 0018179b   slliw	a5, a6, 1
012e40: 00d231a3   sd	a3, 3(tp)
012e44: 00e7e733   or	a4, a5, a4
012e48: 02071713   slli	a4, a4, 32
012e4c: 02075713   srli	a4, a4, 32
012e50: 00e231a3   sd	a4, 3(tp)
012e54: 00a22023   sw	a0, 0(tp)
012e58: 00b22023   sw	a1, 0(tp)
012e5c: 00f22023   sw	a5, 0(tp)
012e60: e59f606f   j	-37288
012e64: c0001073   unimp
012e68: 0107571b   srliw	a4, a4, 16
012e6c: 00177713   andi	a4, a4, 1
012e70: 01123803   ld	a6, 17(tp)
012e74: f6081ce3   bnez	a6, -136
012e78: 00022c23   sw	zero, 24(tp)
012e7c: 1f126803   lwu	a6, 497(tp)
012e80: 01022023   sw	a6, 0(tp)
012e84: 00022023   sw	zero, 0(tp)
012e88: f65ff06f   j	-156
012e8c: ffc67613   andi	a2, a2, -4
012e90: 02061613   slli	a2, a2, 32
012e94: 02069693   slli	a3, a3, 32
012e98: 02065613   srli	a2, a2, 32
012e9c: 00d66633   or	a2, a2, a3
012ea0: 06c239a3   sd	a2, 115(tp)
012ea4: 07323683   ld	a3, 115(tp)
012ea8: f75ff06f   j	-140
012eac: ffc67613   andi	a2, a2, -4
012eb0: 02061613   slli	a2, a2, 32
012eb4: 02069693   slli	a3, a3, 32
012eb8: 02065613   srli	a2, a2, 32
012ebc: 00d66633   or	a2, a2, a3
012ec0: 06c239a3   sd	a2, 115(tp)
012ec4: 07323703   ld	a4, 115(tp)
012ec8: 00073703   ld	a4, 0(a4)
012ecc: 06e239a3   sd	a4, 115(tp)
012ed0: 07323683   ld	a3, 115(tp)
012ed4: f49ff06f   j	-184
012ed8: 02069693   slli	a3, a3, 32
012edc: 0206d693   srli	a3, a3, 32
012ee0: 8881b703   ld	a4, -1912(gp)
012ee4: 00e686b3   add	a3, a3, a4
012ee8: f35ff06f   j	-204
012eec: 00000013   nop
012ef0: 30226683   lwu	a3, 770(tp)
012ef4: 30226703   lwu	a4, 770(tp)
012ef8: 30226803   lwu	a6, 770(tp)
012efc: 30226783   lwu	a5, 770(tp)
012f00: 03279613   slli	a2, a5, 50
012f04: 08060463   beqz	a2, 136
012f08: 00a26603   lwu	a2, 10(tp)
012f0c: 000088b7   lui	a7, 8
012f10: 02071713   slli	a4, a4, 32
012f14: 0016f593   andi	a1, a3, 1
012f18: 01167633   and	a2, a2, a7
012f1c: 02075713   srli	a4, a4, 32
012f20: 06058a63   beqz	a1, 116
012f24: 8881b683   ld	a3, -1912(gp)
012f28: 00d70733   add	a4, a4, a3
012f2c: 06e239a3   sd	a4, 115(tp)
012f30: 07323683   ld	a3, 115(tp)
012f34: 03279793   slli	a5, a5, 50
012f38: 0327d593   srli	a1, a5, 50
012f3c: 00058793   mv	a5, a1
012f40: 00060463   beqz	a2, 8
012f44: 02b22423   sw	a1, 40(tp)
012f48: 0008071b   sext.w	a4, a6
012f4c: 00075463   bgez	a4, 8
012f50: 0015979b   slliw	a5, a1, 1
012f54: 02c26703   lwu	a4, 44(tp)
012f58: 00d231a3   sd	a3, 3(tp)
012f5c: 00e7e733   or	a4, a5, a4
012f60: 02071713   slli	a4, a4, 32
012f64: 02075713   srli	a4, a4, 32
012f68: 00e231a3   sd	a4, 3(tp)
012f6c: c0010737   lui	a4, 786448
012f70: fff70713   addi	a4, a4, -1
012f74: 00e57733   and	a4, a0, a4
012f78: 00010537   lui	a0, 16
012f7c: 00a76533   or	a0, a4, a0
012f80: 00a22023   sw	a0, 0(tp)
012f84: 01022023   sw	a6, 0(tp)
012f88: 00f22023   sw	a5, 0(tp)
012f8c: d2df606f   j	-37588
012f90: c0001073   unimp
012f94: 02069693   slli	a3, a3, 32
012f98: 02071713   slli	a4, a4, 32
012f9c: 0206d693   srli	a3, a3, 32
012fa0: 00d76733   or	a4, a4, a3
012fa4: f89ff06f   j	-120
012fa8: 01226783   lwu	a5, 18(tp)
012fac: 0007879b   sext.w	a5, a5
012fb0: fe079ce3   bnez	a5, -8
012fb4: 01023783   ld	a5, 16(tp)
012fb8: 00079c63   bnez	a5, 24
012fbc: 00022ba3   sw	zero, 23(tp)
012fc0: c00057b7   lui	a5, 786437
012fc4: 2007879b   addiw	a5, a5, 512
012fc8: 00f22023   sw	a5, 0(tp)
012fcc: 00022023   sw	zero, 0(tp)
012fd0: 00a26783   lwu	a5, 10(tp)
012fd4: 0017d79b   srliw	a5, a5, 1
012fd8: 0017f793   andi	a5, a5, 1
012fdc: 02f22423   sw	a5, 40(tp)
012fe0: 00a22023   sw	a0, 0(tp)
012fe4: 000c3023   sd	zero, 0(s8)
012fe8: 380225a3   sw	zero, 907(tp)
012fec: ccdf606f   j	-37684
012ff0: c0001073   unimp
012ff4: 00000013   nop
012ff8: 30226703   lwu	a4, 770(tp)
012ffc: 30226603   lwu	a2, 770(tp)
013000: 30226683   lwu	a3, 770(tp)
013004: 030007b7   lui	a5, 12288
013008: 00f777b3   and	a5, a4, a5
01300c: 010005b7   lui	a1, 4096
013010: 00b78e63   beq	a5, a1, 28
013014: 00a22023   sw	a0, 0(tp)
013018: 00e22023   sw	a4, 0(tp)
01301c: 00c22023   sw	a2, 0(tp)
013020: 00d22023   sw	a3, 0(tp)
013024: c95f606f   j	-37740
013028: c0001073   unimp
01302c: 00a26783   lwu	a5, 10(tp)
013030: 000085b7   lui	a1, 8
013034: 00b7f7b3   and	a5, a5, a1
013038: fc078ee3   beqz	a5, -36
01303c: 00100793   li	a5, 1
013040: 02f22423   sw	a5, 40(tp)
013044: fd1ff06f   j	-48
013048: 000107b7   lui	a5, 16
01304c: e007879b   addiw	a5, a5, -512
013050: 00f5053b   addw	a0, a0, a5
013054: 02251793   slli	a5, a0, 34
013058: 0337d693   srli	a3, a5, 51
01305c: 00a26783   lwu	a5, 10(tp)
013060: 01023603   ld	a2, 16(tp)
013064: 0017d79b   srliw	a5, a5, 1
013068: 0046161b   slliw	a2, a2, 4
01306c: 0017f793   andi	a5, a5, 1
013070: 0a800713   li	a4, 168
013074: 00c7573b   srlw	a4, a4, a2
013078: 0017b793   seqz	a5, a5
01307c: 00026637   lui	a2, 38
013080: 4c86061b   addiw	a2, a2, 1224
013084: 00479793   slli	a5, a5, 4
013088: 00c7073b   addw	a4, a4, a2
01308c: 00f6d7bb   srlw	a5, a3, a5
013090: 02f22423   sw	a5, 40(tp)
013094: 00a22023   sw	a0, 0(tp)
013098: 00e22023   sw	a4, 0(tp)
01309c: 000c3023   sd	zero, 0(s8)
0130a0: 380225a3   sw	zero, 907(tp)
0130a4: 00022ba3   sw	zero, 23(tp)
0130a8: 30226503   lwu	a0, 770(tp)
0130ac: 00723783   ld	a5, 7(tp)
0130b0: 00078067   jr	a5
0130b4: 00000013   nop
0130b8: d005051b   addiw	a0, a0, -768
0130bc: 30223683   ld	a3, 770(tp)
0130c0: 00a26783   lwu	a5, 10(tp)
0130c4: 01023603   ld	a2, 16(tp)
0130c8: 0017d79b   srliw	a5, a5, 1
0130cc: 0046161b   slliw	a2, a2, 4
0130d0: 0017f793   andi	a5, a5, 1
0130d4: 11800713   li	a4, 280
0130d8: 00c7573b   srlw	a4, a4, a2
0130dc: 0017b793   seqz	a5, a5
0130e0: 00026637   lui	a2, 38
0130e4: 6486061b   addiw	a2, a2, 1608
0130e8: 00479793   slli	a5, a5, 4
0130ec: 00c7073b   addw	a4, a4, a2
0130f0: 00f6d7b3   srl	a5, a3, a5
0130f4: 02f23423   sd	a5, 40(tp)
0130f8: 00a22023   sw	a0, 0(tp)
0130fc: 00e22023   sw	a4, 0(tp)
013100: 000c3023   sd	zero, 0(s8)
013104: 380225a3   sw	zero, 907(tp)
013108: 00022ba3   sw	zero, 23(tp)
01310c: 30226503   lwu	a0, 770(tp)
013110: 00723783   ld	a5, 7(tp)
013114: 00078067   jr	a5
013118: 000107b7   lui	a5, 16
01311c: c007879b   addiw	a5, a5, -1024
013120: 00f5053b   addw	a0, a0, a5
013124: 00a26783   lwu	a5, 10(tp)
013128: 01123603   ld	a2, 17(tp)
01312c: 0107d79b   srliw	a5, a5, 16
013130: 0046161b   slliw	a2, a2, 4
013134: 0017f793   andi	a5, a5, 1
013138: 0a800713   li	a4, 168
01313c: 02251693   slli	a3, a0, 34
013140: 00c7573b   srlw	a4, a4, a2
013144: 0017b793   seqz	a5, a5
013148: 00027637   lui	a2, 39
01314c: 0336d693   srli	a3, a3, 51
013150: 8a06061b   addiw	a2, a2, -1888
013154: 00479793   slli	a5, a5, 4
013158: 00c7073b   addw	a4, a4, a2
01315c: 00f6d7b3   srl	a5, a3, a5
013160: 02f23423   sd	a5, 40(tp)
013164: 00a22023   sw	a0, 0(tp)
013168: 00e22023   sw	a4, 0(tp)
01316c: 000c3023   sd	zero, 0(s8)
013170: 380225a3   sw	zero, 907(tp)
013174: 00022c23   sw	zero, 24(tp)
013178: 30226503   lwu	a0, 770(tp)
01317c: 00723783   ld	a5, 7(tp)
013180: 00078067   jr	a5
013184: 00000013   nop
013188: 30223703   ld	a4, 770(tp)
01318c: 01123783   ld	a5, 17(tp)
013190: 0087979b   slliw	a5, a5, 8
013194: 00a7853b   addw	a0, a5, a0
013198: 00a22023   sw	a0, 0(tp)
01319c: 00022023   sw	zero, 0(tp)
0131a0: 000c3023   sd	zero, 0(s8)
0131a4: 00022c23   sw	zero, 24(tp)
0131a8: 30226503   lwu	a0, 770(tp)
0131ac: 00723783   ld	a5, 7(tp)
0131b0: 02e23423   sd	a4, 40(tp)
0131b4: 00078067   jr	a5
0131b8: 01123783   ld	a5, 17(tp)
0131bc: 30223683   ld	a3, 770(tp)
0131c0: 0087979b   slliw	a5, a5, 8
0131c4: ffe6871b   addiw	a4, a3, -2
0131c8: 00a7853b   addw	a0, a5, a0
0131cc: 0087179b   slliw	a5, a4, 8
0131d0: 00f5053b   addw	a0, a0, a5
0131d4: 00a22023   sw	a0, 0(tp)
0131d8: 00022023   sw	zero, 0(tp)
0131dc: 000c3023   sd	zero, 0(s8)
0131e0: 00022c23   sw	zero, 24(tp)
0131e4: 30226503   lwu	a0, 770(tp)
0131e8: 00723783   ld	a5, 7(tp)
0131ec: 02d23423   sd	a3, 40(tp)
0131f0: 00078067   jr	a5
0131f4: 00000013   nop
0131f8: 6005051b   addiw	a0, a0, 1536
0131fc: 00a22023   sw	a0, 0(tp)
013200: 000c3023   sd	zero, 0(s8)
013204: 380225a3   sw	zero, 907(tp)
013208: ab1f606f   j	-38224
01320c: c0001073   unimp
013210: 5005051b   addiw	a0, a0, 1280
013214: 00a22023   sw	a0, 0(tp)
013218: 000c3023   sd	zero, 0(s8)
01321c: 380225a3   sw	zero, 907(tp)
013220: 30226503   lwu	a0, 770(tp)
013224: 00723783   ld	a5, 7(tp)
013228: 00078067   jr	a5
01322c: 00000013   nop
013230: 1f126783   lwu	a5, 497(tp)
013234: 00f22023   sw	a5, 0(tp)
013238: 00022023   sw	zero, 0(tp)
01323c: 30226603   lwu	a2, 770(tp)
013240: 30226783   lwu	a5, 770(tp)
013244: 30226683   lwu	a3, 770(tp)
013248: c0000737   lui	a4, 786432
01324c: 00e67733   and	a4, a2, a4
013250: 0007071b   sext.w	a4, a4
013254: 0006869b   sext.w	a3, a3
013258: 04071a63   bnez	a4, 84
01325c: 01523703   ld	a4, 21(tp)
013260: 04070063   beqz	a4, 64
013264: 00e20733   add	a4, tp, a4
013268: 01b73703   ld	a4, 27(a4)
01326c: 02079793   slli	a5, a5, 32
013270: 0207d793   srli	a5, a5, 32
013274: 00e787b3   add	a5, a5, a4
013278: 00a22023   sw	a0, 0(tp)
01327c: 00c22023   sw	a2, 0(tp)
013280: 00f22023   sw	a5, 0(tp)
013284: 0207d793   srli	a5, a5, 32
013288: 0106d69b   srliw	a3, a3, 16
01328c: 03079793   slli	a5, a5, 48
013290: 0106969b   slliw	a3, a3, 16
013294: 0307d793   srli	a5, a5, 48
013298: 00d7e7b3   or	a5, a5, a3
01329c: 00f22023   sw	a5, 0(tp)
0132a0: 30226503   lwu	a0, 770(tp)
0132a4: 00723783   ld	a5, 7(tp)
0132a8: 00078067   jr	a5
0132ac: 02079793   slli	a5, a5, 32
0132b0: 0207d793   srli	a5, a5, 32
0132b4: 8781b583   ld	a1, -1928(gp)
0132b8: 800006b7   lui	a3, 524288
0132bc: 00b787b3   add	a5, a5, a1
0132c0: 02d70063   beq	a4, a3, 32
0132c4: 00a22023   sw	a0, 0(tp)
0132c8: 00c22023   sw	a2, 0(tp)
0132cc: 0087d713   srli	a4, a5, 8
0132d0: 00e22023   sw	a4, 0(tp)
0132d4: 0287d793   srli	a5, a5, 40
0132d8: 00f22023   sw	a5, 0(tp)
0132dc: fc5ff06f   j	-60
0132e0: c0010737   lui	a4, 786448
0132e4: fff70713   addi	a4, a4, -1
0132e8: 00e57533   and	a0, a0, a4
0132ec: 00010737   lui	a4, 16
0132f0: 00e56533   or	a0, a0, a4
0132f4: 00a22023   sw	a0, 0(tp)
0132f8: 00c22023   sw	a2, 0(tp)
0132fc: 00f22023   sw	a5, 0(tp)
013300: fa1ff06f   j	-96
013304: 00000013   nop
013308: 30226603   lwu	a2, 770(tp)
01330c: 30226783   lwu	a5, 770(tp)
013310: 30226683   lwu	a3, 770(tp)
013314: c0000737   lui	a4, 786432
013318: 00e67733   and	a4, a2, a4
01331c: 0007071b   sext.w	a4, a4
013320: 0006869b   sext.w	a3, a3
013324: 04071a63   bnez	a4, 84
013328: 01523703   ld	a4, 21(tp)
01332c: 04070063   beqz	a4, 64
013330: 00e20733   add	a4, tp, a4
013334: 01b73703   ld	a4, 27(a4)
013338: 02079793   slli	a5, a5, 32
01333c: 0207d793   srli	a5, a5, 32
013340: 00e787b3   add	a5, a5, a4
013344: 00a22023   sw	a0, 0(tp)
013348: 00c22023   sw	a2, 0(tp)
01334c: 00f22023   sw	a5, 0(tp)
013350: 0207d793   srli	a5, a5, 32
013354: 0106d69b   srliw	a3, a3, 16
013358: 03079793   slli	a5, a5, 48
01335c: 0106969b   slliw	a3, a3, 16
013360: 0307d793   srli	a5, a5, 48
013364: 00d7e7b3   or	a5, a5, a3
013368: 00f22023   sw	a5, 0(tp)
01336c: 30226503   lwu	a0, 770(tp)
013370: 00723783   ld	a5, 7(tp)
013374: 00078067   jr	a5
013378: 02079793   slli	a5, a5, 32
01337c: 0207d793   srli	a5, a5, 32
013380: 8781b583   ld	a1, -1928(gp)
013384: 800006b7   lui	a3, 524288
013388: 00b787b3   add	a5, a5, a1
01338c: 02d70063   beq	a4, a3, 32
013390: 00a22023   sw	a0, 0(tp)
013394: 00c22023   sw	a2, 0(tp)
013398: 0087d713   srli	a4, a5, 8
01339c: 00e22023   sw	a4, 0(tp)
0133a0: 0287d793   srli	a5, a5, 40
0133a4: 00f22023   sw	a5, 0(tp)
0133a8: fc5ff06f   j	-60
0133ac: c0010737   lui	a4, 786448
0133b0: fff70713   addi	a4, a4, -1
0133b4: 00e57533   and	a0, a0, a4
0133b8: 00010737   lui	a4, 16
0133bc: 00e56533   or	a0, a0, a4
0133c0: 00a22023   sw	a0, 0(tp)
0133c4: 00c22023   sw	a2, 0(tp)
0133c8: 00f22023   sw	a5, 0(tp)
0133cc: fa1ff06f   j	-96
0133d0: 1f126783   lwu	a5, 497(tp)
0133d4: 00f22023   sw	a5, 0(tp)
0133d8: 00022023   sw	zero, 0(tp)
0133dc: 02251793   slli	a5, a0, 34
0133e0: 0327d713   srli	a4, a5, 50
0133e4: 30226683   lwu	a3, 770(tp)
0133e8: f00007b7   lui	a5, 983040
0133ec: 00f6f7b3   and	a5, a3, a5
0133f0: 0007879b   sext.w	a5, a5
0133f4: 30000637   lui	a2, 196608
0133f8: 02c79c63   bne	a5, a2, 56
0133fc: 00a26783   lwu	a5, 10(tp)
013400: 00010637   lui	a2, 16
013404: 00c7f7b3   and	a5, a5, a2
013408: 02079063   bnez	a5, 32
01340c: 00a22023   sw	a0, 0(tp)
013410: 00d22023   sw	a3, 0(tp)
013414: 000c3023   sd	zero, 0(s8)
013418: 380225a3   sw	zero, 907(tp)
01341c: 30226503   lwu	a0, 770(tp)
013420: 00723783   ld	a5, 7(tp)
013424: 00078067   jr	a5
013428: 02e22423   sw	a4, 40(tp)
01342c: fe1ff06f   j	-32
013430: 1f323783   ld	a5, 499(tp)
013434: 0007b023   sd	zero, 0(a5)
013438: 380225a3   sw	zero, 907(tp)
01343c: fe1ff06f   j	-32
013440: 02251793   slli	a5, a0, 34
013444: 0327d713   srli	a4, a5, 50
013448: 30226683   lwu	a3, 770(tp)
01344c: f00007b7   lui	a5, 983040
013450: 00f6f7b3   and	a5, a3, a5
013454: 0007879b   sext.w	a5, a5
013458: 30000637   lui	a2, 196608
01345c: 02c79c63   bne	a5, a2, 56
013460: 00a26783   lwu	a5, 10(tp)
013464: 00010637   lui	a2, 16
013468: 00c7f7b3   and	a5, a5, a2
01346c: 02079063   bnez	a5, 32
013470: 00a22023   sw	a0, 0(tp)
013474: 00d22023   sw	a3, 0(tp)
013478: 000c3023   sd	zero, 0(s8)
01347c: 380225a3   sw	zero, 907(tp)
013480: 30226503   lwu	a0, 770(tp)
013484: 00723783   ld	a5, 7(tp)
013488: 00078067   jr	a5
01348c: 02e22423   sw	a4, 40(tp)
013490: fe1ff06f   j	-32
013494: 1f323783   ld	a5, 499(tp)
013498: 0007b023   sd	zero, 0(a5)
01349c: 380225a3   sw	zero, 907(tp)
0134a0: fe1ff06f   j	-32
0134a4: 00000013   nop
0134a8: 00a22023   sw	a0, 0(tp)
0134ac: 000c3023   sd	zero, 0(s8)
0134b0: 380225a3   sw	zero, 907(tp)
0134b4: 01523783   ld	a5, 21(tp)
0134b8: 06078c63   beqz	a5, 120
0134bc: 03226783   lwu	a5, 50(tp)
0134c0: 0007879b   sext.w	a5, a5
0134c4: 06078663   beqz	a5, 108
0134c8: c00f17b7   lui	a5, 786673
0134cc: 00f22023   sw	a5, 0(tp)
0134d0: 00022023   sw	zero, 0(tp)
0134d4: 00022023   sw	zero, 0(tp)
0134d8: 00022023   sw	zero, 0(tp)
0134dc: 00022023   sw	zero, 0(tp)
0134e0: 00022023   sw	zero, 0(tp)
0134e4: 00022023   sw	zero, 0(tp)
0134e8: 00022023   sw	zero, 0(tp)
0134ec: 00022023   sw	zero, 0(tp)
0134f0: 00022023   sw	zero, 0(tp)
0134f4: 00022023   sw	zero, 0(tp)
0134f8: 00022023   sw	zero, 0(tp)
0134fc: 00022023   sw	zero, 0(tp)
013500: 00022023   sw	zero, 0(tp)
013504: 00022023   sw	zero, 0(tp)
013508: 00022023   sw	zero, 0(tp)
01350c: 00022023   sw	zero, 0(tp)
013510: 40000713   li	a4, 1024
013514: f14027f3   csrr	a5, mhartid
013518: 00f71733   sll	a4, a4, a5
01351c: 31423783   ld	a5, 788(tp)
013520: 00f777b3   and	a5, a4, a5
013524: fe079ce3   bnez	a5, -8
013528: 701bb783   ld	a5, 1793(s7)
01352c: 00079663   bnez	a5, 12
013530: f88f606f   j	-39032
013534: c0001073   unimp
013538: 02251593   slli	a1, a0, 34
01353c: 0325d593   srli	a1, a1, 50
013540: 0025859b   addiw	a1, a1, 2
013544: 81df50ef   jal	-42980
013548: f70f606f   j	-39056
01354c: c0001073   unimp
013558: 30226703   lwu	a4, 770(tp)
01355c: 00070f13   mv	t5, a4
013560: 30226e83   lwu	t4, 770(tp)
013564: 30226e03   lwu	t3, 770(tp)
013568: 30226303   lwu	t1, 770(tp)
01356c: 30226883   lwu	a7, 770(tp)
013570: 30226583   lwu	a1, 770(tp)
013574: 30226803   lwu	a6, 770(tp)
013578: 0005861b   sext.w	a2, a1
01357c: 14064c63   bltz	a2, 344
013580: 01023783   ld	a5, 16(tp)
013584: 12078e63   beqz	a5, 316
013588: c00017b7   lui	a5, 786433
01358c: c007879b   addiw	a5, a5, -1024
013590: 00f22023   sw	a5, 0(tp)
013594: 00022023   sw	zero, 0(tp)
013598: 00a22023   sw	a0, 0(tp)
01359c: 000f069b   sext.w	a3, t5
0135a0: 01e22023   sw	t5, 0(tp)
0135a4: 01d22023   sw	t4, 0(tp)
0135a8: 01c22023   sw	t3, 0(tp)
0135ac: 00622023   sw	t1, 0(tp)
0135b0: 01122023   sw	a7, 0(tp)
0135b4: 00b22023   sw	a1, 0(tp)
0135b8: 01022023   sw	a6, 0(tp)
0135bc: 0606c263   bltz	a3, 100
0135c0: c00f17b7   lui	a5, 786673
0135c4: 00f22023   sw	a5, 0(tp)
0135c8: 00022023   sw	zero, 0(tp)
0135cc: 00022023   sw	zero, 0(tp)
0135d0: 00022023   sw	zero, 0(tp)
0135d4: 00022023   sw	zero, 0(tp)
0135d8: 00022023   sw	zero, 0(tp)
0135dc: 00022023   sw	zero, 0(tp)
0135e0: 00022023   sw	zero, 0(tp)
0135e4: 00022023   sw	zero, 0(tp)
0135e8: 00022023   sw	zero, 0(tp)
0135ec: 00022023   sw	zero, 0(tp)
0135f0: 00022023   sw	zero, 0(tp)
0135f4: 00022023   sw	zero, 0(tp)
0135f8: 00022023   sw	zero, 0(tp)
0135fc: 00022023   sw	zero, 0(tp)
013600: 00022023   sw	zero, 0(tp)
013604: 00022023   sw	zero, 0(tp)
013608: 40000713   li	a4, 1024
01360c: f14027f3   csrr	a5, mhartid
013610: 00f71733   sll	a4, a4, a5
013614: 31423783   ld	a5, 788(tp)
013618: 00f777b3   and	a5, a4, a5
01361c: fe079ce3   bnez	a5, -8
013620: 08065c63   bgez	a2, 152
013624: 000047b7   lui	a5, 4
013628: 80078793   addi	a5, a5, -2048
01362c: 00f6f6b3   and	a3, a3, a5
013630: 000037b7   lui	a5, 3
013634: 80078793   addi	a5, a5, -2048
013638: 08f69063   bne	a3, a5, 128
01363c: 01523783   ld	a5, 21(tp)
013640: 06078c63   beqz	a5, 120
013644: 03226783   lwu	a5, 50(tp)
013648: 0007879b   sext.w	a5, a5
01364c: 06078663   beqz	a5, 108
013650: c00f17b7   lui	a5, 786673
013654: 00f22023   sw	a5, 0(tp)
013658: 00022023   sw	zero, 0(tp)
01365c: 00022023   sw	zero, 0(tp)
013660: 00022023   sw	zero, 0(tp)
013664: 00022023   sw	zero, 0(tp)
013668: 00022023   sw	zero, 0(tp)
01366c: 00022023   sw	zero, 0(tp)
013670: 00022023   sw	zero, 0(tp)
013674: 00022023   sw	zero, 0(tp)
013678: 00022023   sw	zero, 0(tp)
01367c: 00022023   sw	zero, 0(tp)
013680: 00022023   sw	zero, 0(tp)
013684: 00022023   sw	zero, 0(tp)
013688: 00022023   sw	zero, 0(tp)
01368c: 00022023   sw	zero, 0(tp)
013690: 00022023   sw	zero, 0(tp)
013694: 00022023   sw	zero, 0(tp)
013698: 40000713   li	a4, 1024
01369c: f14027f3   csrr	a5, mhartid
0136a0: 00f71733   sll	a4, a4, a5
0136a4: 31423783   ld	a5, 788(tp)
0136a8: 00f777b3   and	a5, a4, a5
0136ac: fe079ce3   bnez	a5, -8
0136b0: 701bb783   ld	a5, 1793(s7)
0136b4: 0a079263   bnez	a5, 164
0136b8: e00f606f   j	-39424
0136bc: c0001073   unimp
0136c0: 00022ba3   sw	zero, 23(tp)
0136c4: 000017b7   lui	a5, 1
0136c8: d007879b   addiw	a5, a5, -768
0136cc: 00f5053b   addw	a0, a0, a5
0136d0: ec9ff06f   j	-312
0136d4: 000047b7   lui	a5, 4
0136d8: 80078793   addi	a5, a5, -2048
0136dc: 00003f37   lui	t5, 3
0136e0: 00e7f7b3   and	a5, a5, a4
0136e4: 01e77f33   and	t5, a4, t5
0136e8: 00001fb7   lui	t6, 1
0136ec: 0007869b   sext.w	a3, a5
0136f0: 09ff0063   beq	t5, t6, 128
0136f4: 00002fb7   lui	t6, 2
0136f8: 41f687b3   sub	a5, a3, t6
0136fc: 00f037b3   snez	a5, a5
013700: 01f7569b   srliw	a3, a4, 31
013704: 00f6e6b3   or	a3, a3, a5
013708: 02171793   slli	a5, a4, 33
01370c: 0217d793   srli	a5, a5, 33
013710: 01f6971b   slliw	a4, a3, 31
013714: 00e7e7b3   or	a5, a5, a4
013718: 00004737   lui	a4, 4
01371c: 0007869b   sext.w	a3, a5
013720: 80070713   addi	a4, a4, -2048
013724: 00e6f733   and	a4, a3, a4
013728: 00078f13   mv	t5, a5
01372c: e7f716e3   bne	a4, t6, -404
013730: 0156e693   ori	a3, a3, 21
013734: 06d226a3   sw	a3, 109(tp)
013738: 05123783   ld	a5, 81(tp)
01373c: e4078ee3   beqz	a5, -420
013740: 01523783   ld	a5, 21(tp)
013744: fe078ae3   beqz	a5, -12
013748: 03223783   ld	a5, 50(tp)
01374c: fe0786e3   beqz	a5, -20
013750: 03523783   ld	a5, 53(tp)
013754: fe0782e3   beqz	a5, -28
013758: 02251593   slli	a1, a0, 34
01375c: 0325d593   srli	a1, a1, 50
013760: 0025859b   addiw	a1, a1, 2
013764: dfcf50ef   jal	-43524
013768: d50f606f   j	-39600
01376c: c0001073   unimp
013770: 00022c23   sw	zero, 24(tp)
013774: 1f126783   lwu	a5, 497(tp)
013778: 00f22023   sw	a5, 0(tp)
01377c: 00022023   sw	zero, 0(tp)
013780: c00f17b7   lui	a5, 786673
013784: 00f22023   sw	a5, 0(tp)
013788: 00022023   sw	zero, 0(tp)
01378c: 00022023   sw	zero, 0(tp)
013790: 00022023   sw	zero, 0(tp)
013794: 00022023   sw	zero, 0(tp)
013798: 00022023   sw	zero, 0(tp)
01379c: 00022023   sw	zero, 0(tp)
0137a0: 00022023   sw	zero, 0(tp)
0137a4: 00022023   sw	zero, 0(tp)
0137a8: 00022023   sw	zero, 0(tp)
0137ac: 00022023   sw	zero, 0(tp)
0137b0: 00022023   sw	zero, 0(tp)
0137b4: 00022023   sw	zero, 0(tp)
0137b8: 00022023   sw	zero, 0(tp)
0137bc: 00022023   sw	zero, 0(tp)
0137c0: 00022023   sw	zero, 0(tp)
0137c4: 00022023   sw	zero, 0(tp)
0137c8: 40000f13   li	t5, 1024
0137cc: f14027f3   csrr	a5, mhartid
0137d0: 00ff1f33   sll	t5, t5, a5
0137d4: 31423783   ld	a5, 788(tp)
0137d8: 00ff77b3   and	a5, t5, a5
0137dc: fe079ce3   bnez	a5, -8
0137e0: f15ff06f   j	-236
0137e4: 00000013   nop
0137e8: 30226603   lwu	a2, 770(tp)
0137ec: 0156579b   srliw	a5, a2, 21
0137f0: 03f67713   andi	a4, a2, 63
0137f4: 4007f793   andi	a5, a5, 1024
0137f8: 00e7e7b3   or	a5, a5, a4
0137fc: 06f226a3   sw	a5, 109(tp)
013800: 000017b7   lui	a5, 1
013804: f0078793   addi	a5, a5, -256
013808: 00c7f7b3   and	a5, a5, a2
01380c: 0007879b   sext.w	a5, a5
013810: 50000713   li	a4, 1280
013814: 02e78a63   beq	a5, a4, 52
013818: 0a223783   ld	a5, 162(tp)
01381c: 00100713   li	a4, 1
013820: 08e22223   sw	a4, 132(tp)
013824: 0207d713   srli	a4, a5, 32
013828: 00e22023   sw	a4, 0(tp)
01382c: 00f22023   sw	a5, 0(tp)
013830: 00a22023   sw	a0, 0(tp)
013834: 00c22023   sw	a2, 0(tp)
013838: 000c3023   sd	zero, 0(s8)
01383c: 380225a3   sw	zero, 907(tp)
013840: c78f606f   j	-39816
013844: c0001073   unimp
013848: 08067793   andi	a5, a2, 128
01384c: 08078063   beqz	a5, 128
013850: 01523783   ld	a5, 21(tp)
013854: 0037f793   andi	a5, a5, 3
013858: 00f206b3   add	a3, tp, a5
01385c: 00b6e803   lwu	a6, 11(a3)
013860: 04178593   addi	a1, a5, 65
013864: 00b20733   add	a4, tp, a1
013868: 00100793   li	a5, 1
01386c: 00f72023   sw	a5, 0(a4)
013870: 01323783   ld	a5, 19(tp)
013874: fe079ee3   bnez	a5, -4
013878: ebccb783   ld	a5, -324(s9)
01387c: 00c7d713   srli	a4, a5, 12
013880: 00377713   andi	a4, a4, 3
013884: 02070a63   beqz	a4, 52
013888: 07f00693   li	a3, 127
01388c: b0002773   csrr	a4, mcycle
013890: 00000013   nop
013894: b00027f3   csrr	a5, mcycle
013898: 40e787b3   sub	a5, a5, a4
01389c: fef6fae3   bgeu	a3, a5, -12
0138a0: ebcca783   lw	a5, -324(s9)
0138a4: 00c7d71b   srliw	a4, a5, 12
0138a8: 00377713   andi	a4, a4, 3
0138ac: 02079793   slli	a5, a5, 32
0138b0: 0207d793   srli	a5, a5, 32
0138b4: fc071ce3   bnez	a4, -40
0138b8: 0017f793   andi	a5, a5, 1
0138bc: 00078463   beqz	a5, 8
0138c0: ea0cae23   sw	zero, -324(s9)
0138c4: 00b207b3   add	a5, tp, a1
0138c8: 0107a023   sw	a6, 0(a5)
0138cc: 30226783   lwu	a5, 770(tp)
0138d0: 0167d71b   srliw	a4, a5, 22
0138d4: 00377713   andi	a4, a4, 3
0138d8: 00100693   li	a3, 1
0138dc: 0ee6f063   bgeu	a3, a4, 224
0138e0: 0a926683   lwu	a3, 169(tp)
0138e4: f1402773   csrr	a4, mhartid
0138e8: 02326803   lwu	a6, 35(tp)
0138ec: 0187d59b   srliw	a1, a5, 24
0138f0: 0066969b   slliw	a3, a3, 6
0138f4: 0106e6b3   or	a3, a3, a6
0138f8: 0047189b   slliw	a7, a4, 4
0138fc: 0185f813   andi	a6, a1, 24
013900: 02879793   slli	a5, a5, 40
013904: 0116e6b3   or	a3, a3, a7
013908: 0188181b   slliw	a6, a6, 24
01390c: 0287d793   srli	a5, a5, 40
013910: 0006869b   sext.w	a3, a3
013914: 0075f593   andi	a1, a1, 7
013918: 0107e7b3   or	a5, a5, a6
01391c: 30226883   lwu	a7, 770(tp)
013920: 30226803   lwu	a6, 770(tp)
013924: 00a22023   sw	a0, 0(tp)
013928: 00c22023   sw	a2, 0(tp)
01392c: 00f22023   sw	a5, 0(tp)
013930: 01122023   sw	a7, 0(tp)
013934: 01022023   sw	a6, 0(tp)
013938: 00300813   li	a6, 3
01393c: 02251793   slli	a5, a0, 34
013940: 0327d613   srli	a2, a5, 50
013944: 07058463   beq	a1, a6, 104
013948: 0a926583   lwu	a1, 169(tp)
01394c: 1fa23503   ld	a0, 506(tp)
013950: 0027179b   slliw	a5, a4, 2
013954: 0045971b   slliw	a4, a1, 4
013958: 07077713   andi	a4, a4, 112
01395c: 00c7f793   andi	a5, a5, 12
013960: 00e7e7b3   or	a5, a5, a4
013964: 02479793   slli	a5, a5, 36
013968: 00a787b3   add	a5, a5, a0
01396c: 0000c737   lui	a4, 12
013970: 00e787b3   add	a5, a5, a4
013974: 3b47a783   lw	a5, 948(a5)
013978: 0007879b   sext.w	a5, a5
01397c: 30226703   lwu	a4, 770(tp)
013980: 00e22023   sw	a4, 0(tp)
013984: 0047979b   slliw	a5, a5, 4
013988: 0067d79b   srliw	a5, a5, 6
01398c: 00f22023   sw	a5, 0(tp)
013990: ffc6079b   addiw	a5, a2, -4
013994: 00d22023   sw	a3, 0(tp)
013998: ea0784e3   beqz	a5, -344
01399c: 1f323783   ld	a5, 499(tp)
0139a0: 0007b023   sd	zero, 0(a5)
0139a4: 380225a3   sw	zero, 907(tp)
0139a8: e99ff06f   j	-360
0139ac: 00022023   sw	zero, 0(tp)
0139b0: 00022023   sw	zero, 0(tp)
0139b4: ffd6079b   addiw	a5, a2, -3
0139b8: fddff06f   j	-36
0139bc: 00a22023   sw	a0, 0(tp)
0139c0: 00c22023   sw	a2, 0(tp)
0139c4: 00f22023   sw	a5, 0(tp)
0139c8: 000c3023   sd	zero, 0(s8)
0139cc: 380225a3   sw	zero, 907(tp)
0139d0: e71ff06f   j	-400
0139d4: 00000013   nop
0139d8: 00a22023   sw	a0, 0(tp)
0139dc: 30223703   ld	a4, 770(tp)
0139e0: 30223783   ld	a5, 770(tp)
0139e4: 02079793   slli	a5, a5, 32
0139e8: 00e7e7b3   or	a5, a5, a4
0139ec: 080006b7   lui	a3, 32768
0139f0: c0068693   addi	a3, a3, -1024
0139f4: 0157d793   srli	a5, a5, 21
0139f8: 00d7f7b3   and	a5, a5, a3
0139fc: 00f22023   sw	a5, 0(tp)
013a00: 00375713   srli	a4, a4, 3
013a04: 00e22023   sw	a4, 0(tp)
013a08: ab0f606f   j	-40272
013a0c: c0001073   unimp
013a10: 30226703   lwu	a4, 770(tp)
013a14: 00a22023   sw	a0, 0(tp)
013a18: 00e22023   sw	a4, 0(tp)
013a1c: 0087579b   srliw	a5, a4, 8
013a20: 00f7f793   andi	a5, a5, 15
013a24: 00100693   li	a3, 1
013a28: 04d79463   bne	a5, a3, 72
013a2c: 30223683   ld	a3, 770(tp)
013a30: 30223783   ld	a5, 770(tp)
013a34: 02079793   slli	a5, a5, 32
013a38: 00d7e7b3   or	a5, a5, a3
013a3c: 08000637   lui	a2, 32768
013a40: c0060613   addi	a2, a2, -1024
013a44: 0157d793   srli	a5, a5, 21
013a48: 00c7f7b3   and	a5, a5, a2
013a4c: 03f77713   andi	a4, a4, 63
013a50: 00e7e7b3   or	a5, a5, a4
013a54: 08000737   lui	a4, 32768
013a58: 00e7e7b3   or	a5, a5, a4
013a5c: 00f22023   sw	a5, 0(tp)
013a60: 0036d693   srli	a3, a3, 3
013a64: 00d22023   sw	a3, 0(tp)
013a68: a50f606f   j	-40368
013a6c: c0001073   unimp
013a70: 02251593   slli	a1, a0, 34
013a74: 0325d593   srli	a1, a1, 50
013a78: 00000713   li	a4, 0
013a7c: 00058a63   beqz	a1, 20
013a80: 30226683   lwu	a3, 770(tp)
013a84: 00d22023   sw	a3, 0(tp)
013a88: 00170713   addi	a4, a4, 1
013a8c: feb71ae3   bne	a4, a1, -12
013a90: 00001737   lui	a4, 1
013a94: f1070713   addi	a4, a4, -240
013a98: 00f757b3   srl	a5, a4, a5
013a9c: 0017f793   andi	a5, a5, 1
013aa0: fc0784e3   beqz	a5, -56
013aa4: 01523783   ld	a5, 21(tp)
013aa8: fc0780e3   beqz	a5, -64
013aac: 03226783   lwu	a5, 50(tp)
013ab0: 0007879b   sext.w	a5, a5
013ab4: fa078ae3   beqz	a5, -76
013ab8: c00f17b7   lui	a5, 786673
013abc: 00f22023   sw	a5, 0(tp)
013ac0: 00022023   sw	zero, 0(tp)
013ac4: 00022023   sw	zero, 0(tp)
013ac8: 00022023   sw	zero, 0(tp)
013acc: 00022023   sw	zero, 0(tp)
013ad0: 00022023   sw	zero, 0(tp)
013ad4: 00022023   sw	zero, 0(tp)
013ad8: 00022023   sw	zero, 0(tp)
013adc: 00022023   sw	zero, 0(tp)
013ae0: 00022023   sw	zero, 0(tp)
013ae4: 00022023   sw	zero, 0(tp)
013ae8: 00022023   sw	zero, 0(tp)
013aec: 00022023   sw	zero, 0(tp)
013af0: 00022023   sw	zero, 0(tp)
013af4: 00022023   sw	zero, 0(tp)
013af8: 00022023   sw	zero, 0(tp)
013afc: 00022023   sw	zero, 0(tp)
013b00: 40000713   li	a4, 1024
013b04: f14027f3   csrr	a5, mhartid
013b08: 00f71733   sll	a4, a4, a5
013b0c: 31423783   ld	a5, 788(tp)
013b10: 00f777b3   and	a5, a4, a5
013b14: fe079ce3   bnez	a5, -8
013b18: 701bb783   ld	a5, 1793(s7)
013b1c: f40786e3   beqz	a5, -180
013b20: 00258593   addi	a1, a1, 2
013b24: a3cf50ef   jal	-44484
013b28: 990f606f   j	-40560
013b2c: c0001073   unimp
013b30: 30226783   lwu	a5, 770(tp)
013b34: c00f17b7   lui	a5, 786673
013b38: 00f22023   sw	a5, 0(tp)
013b3c: 00022023   sw	zero, 0(tp)
013b40: 00022023   sw	zero, 0(tp)
013b44: 00022023   sw	zero, 0(tp)
013b48: 00022023   sw	zero, 0(tp)
013b4c: 00022023   sw	zero, 0(tp)
013b50: 00022023   sw	zero, 0(tp)
013b54: 00022023   sw	zero, 0(tp)
013b58: 00022023   sw	zero, 0(tp)
013b5c: 00022023   sw	zero, 0(tp)
013b60: 00022023   sw	zero, 0(tp)
013b64: 00022023   sw	zero, 0(tp)
013b68: 00022023   sw	zero, 0(tp)
013b6c: 00022023   sw	zero, 0(tp)
013b70: 00022023   sw	zero, 0(tp)
013b74: 00022023   sw	zero, 0(tp)
013b78: 00022023   sw	zero, 0(tp)
013b7c: 40000713   li	a4, 1024
013b80: f14027f3   csrr	a5, mhartid
013b84: 00f71733   sll	a4, a4, a5
013b88: 31423783   ld	a5, 788(tp)
013b8c: 00f777b3   and	a5, a4, a5
013b90: fe079ce3   bnez	a5, -8
013b94: 924f606f   j	-40668
013b98: c0001073   unimp
013b9c: 00000013   nop
013ba0: 00100793   li	a5, 1
013ba4: 04f22523   sw	a5, 74(tp)
013ba8: 30226583   lwu	a1, 770(tp)
013bac: 0085d79b   srliw	a5, a1, 8
013bb0: 0037f793   andi	a5, a5, 3
013bb4: 00100713   li	a4, 1
013bb8: 0305f813   andi	a6, a1, 48
013bbc: 0ae78263   beq	a5, a4, 164
013bc0: 2af76e63   bltu	a4, a5, 700
013bc4: 00a22023   sw	a0, 0(tp)
013bc8: 00b22023   sw	a1, 0(tp)
013bcc: 000c3023   sd	zero, 0(s8)
013bd0: 380225a3   sw	zero, 907(tp)
013bd4: 08080063   beqz	a6, 128
013bd8: 01523783   ld	a5, 21(tp)
013bdc: 2a079863   bnez	a5, 688
013be0: 0c05f593   andi	a1, a1, 192
013be4: 0c000793   li	a5, 192
013be8: 06f59663   bne	a1, a5, 108
013bec: c00f17b7   lui	a5, 786673
013bf0: 00f22023   sw	a5, 0(tp)
013bf4: 00022023   sw	zero, 0(tp)
013bf8: 00022023   sw	zero, 0(tp)
013bfc: 00022023   sw	zero, 0(tp)
013c00: 00022023   sw	zero, 0(tp)
013c04: 00022023   sw	zero, 0(tp)
013c08: 00022023   sw	zero, 0(tp)
013c0c: 00022023   sw	zero, 0(tp)
013c10: 00022023   sw	zero, 0(tp)
013c14: 00022023   sw	zero, 0(tp)
013c18: 00022023   sw	zero, 0(tp)
013c1c: 00022023   sw	zero, 0(tp)
013c20: 00022023   sw	zero, 0(tp)
013c24: 00022023   sw	zero, 0(tp)
013c28: 00022023   sw	zero, 0(tp)
013c2c: 00022023   sw	zero, 0(tp)
013c30: 00022023   sw	zero, 0(tp)
013c34: 40000713   li	a4, 1024
013c38: f14027f3   csrr	a5, mhartid
013c3c: 00f71733   sll	a4, a4, a5
013c40: 31423783   ld	a5, 788(tp)
013c44: 00f777b3   and	a5, a4, a5
013c48: fe079ce3   bnez	a5, -8
013c4c: 701bb783   ld	a5, 1793(s7)
013c50: 64079663   bnez	a5, 1612
013c54: 040225a3   sw	zero, 75(tp)
013c58: 860f606f   j	-40864
013c5c: c0001073   unimp
013c60: 30226703   lwu	a4, 770(tp)
013c64: 30226883   lwu	a7, 770(tp)
013c68: 30226e83   lwu	t4, 770(tp)
013c6c: 30226683   lwu	a3, 770(tp)
013c70: 0006849b   sext.w	s1, a3
013c74: 30226303   lwu	t1, 770(tp)
013c78: 04000e13   li	t3, 64
013c7c: 0c05fa93   andi	s5, a1, 192
013c80: 0003061b   sext.w	a2, t1
013c84: 5bca8863   beq	s5, t3, 1456
013c88: 3c081463   bnez	a6, 968
013c8c: 02e71713   slli	a4, a4, 46
013c90: 02e75893   srli	a7, a4, 46
013c94: 00000a13   li	s4, 0
013c98: 03061793   slli	a5, a2, 48
013c9c: 0307d793   srli	a5, a5, 48
013ca0: 00300613   li	a2, 3
013ca4: 00800713   li	a4, 8
013ca8: 00f67663   bgeu	a2, a5, 12
013cac: 03031313   slli	t1, t1, 48
013cb0: 02f35713   srli	a4, t1, 47
013cb4: 0185d79b   srliw	a5, a1, 24
013cb8: 0017f793   andi	a5, a5, 1
013cbc: 66fbb623   sd	a5, 1644(s7)
013cc0: 1e022fa3   sw	zero, 511(tp)
013cc4: 660bb523   sd	zero, 1642(s7)
013cc8: 010007b7   lui	a5, 4096
013ccc: 00defeb3   and	t4, t4, a3
013cd0: 1e022fa3   sw	zero, 511(tp)
013cd4: ffff86b7   lui	a3, 1048568
013cd8: 00f5f7b3   and	a5, a1, a5
013cdc: 00020313   mv	t1, tp
013ce0: 000e8e9b   sext.w	t4, t4
013ce4: 00db80b3   add	ra, s7, a3
013ce8: 0e078863   beqz	a5, 240
013cec: 0a926603   lwu	a2, 169(tp)
013cf0: f14026f3   csrr	a3, mhartid
013cf4: 1fa23e03   ld	t3, 506(tp)
013cf8: 0026979b   slliw	a5, a3, 2
013cfc: 0046161b   slliw	a2, a2, 4
013d00: 07067613   andi	a2, a2, 112
013d04: 00c7f793   andi	a5, a5, 12
013d08: 00c7e7b3   or	a5, a5, a2
013d0c: 02479793   slli	a5, a5, 36
013d10: 01c787b3   add	a5, a5, t3
013d14: 0000c637   lui	a2, 12
013d18: 00c787b3   add	a5, a5, a2
013d1c: 3b47a783   lw	a5, 948(a5)
013d20: 000a0e13   mv	t3, s4
013d24: 02479793   slli	a5, a5, 36
013d28: 0267d793   srli	a5, a5, 38
013d2c: 00081663   bnez	a6, 12
013d30: 02089e13   slli	t3, a7, 32
013d34: 020e5e13   srli	t3, t3, 32
013d38: 0165df9b   srliw	t6, a1, 22
013d3c: 03ef9f93   slli	t6, t6, 62
013d40: 0a923283   ld	t0, 169(tp)
013d44: 02323f03   ld	t5, 35(tp)
013d48: 03469613   slli	a2, a3, 52
013d4c: 01f66633   or	a2, a2, t6
013d50: 03629693   slli	a3, t0, 54
013d54: 00d66633   or	a2, a2, a3
013d58: 030f1693   slli	a3, t5, 48
013d5c: 00d66633   or	a2, a2, a3
013d60: 00100693   li	a3, 1
013d64: 00c7e2b3   or	t0, a5, a2
013d68: 00008f37   lui	t5, 8
013d6c: 03d69693   slli	a3, a3, 61
013d70: 01e08f33   add	t5, ra, t5
013d74: 00d2e6b3   or	a3, t0, a3
013d78: 66df3223   sd	a3, 1636(t5)
013d7c: 00900693   li	a3, 9
013d80: 03a69693   slli	a3, a3, 58
013d84: 00d2e2b3   or	t0, t0, a3
013d88: 01f7e6b3   or	a3, a5, t6
013d8c: 020e9f93   slli	t6, t4, 32
013d90: 006fd793   srli	a5, t6, 6
013d94: 1e032fa3   sw	zero, 511(t1)
013d98: 00f6e6b3   or	a3, a3, a5
013d9c: 010e1793   slli	a5, t3, 16
013da0: 00300e13   li	t3, 3
013da4: 665f3323   sd	t0, 1638(t5)
013da8: 03be1e13   slli	t3, t3, 59
013dac: 1e032fa3   sw	zero, 511(t1)
013db0: 01c6e6b3   or	a3, a3, t3
013db4: 66df3023   sd	a3, 1632(t5)
013db8: 0107d793   srli	a5, a5, 16
013dbc: 00700693   li	a3, 7
013dc0: 00c7e7b3   or	a5, a5, a2
013dc4: 03a69693   slli	a3, a3, 58
013dc8: 1e032fa3   sw	zero, 511(t1)
013dcc: 00d7e7b3   or	a5, a5, a3
013dd0: 66ff3123   sd	a5, 1634(t5)
013dd4: 1e032fa3   sw	zero, 511(t1)
013dd8: 07426783   lwu	a5, 116(tp)
013ddc: 0007879b   sext.w	a5, a5
013de0: e6079ae3   bnez	a5, -396
013de4: 02089793   slli	a5, a7, 32
013de8: 01e7d893   srli	a7, a5, 30
013dec: 00100793   li	a5, 1
013df0: 03079793   slli	a5, a5, 48
013df4: 00f888b3   add	a7, a7, a5
013df8: 010187b7   lui	a5, 4120
013dfc: 00278793   addi	a5, a5, 2
013e00: 000106b7   lui	a3, 16
013e04: 0075f393   andi	t2, a1, 7
013e08: 00f13023   sd	a5, 0(sp)
013e0c: 00868793   addi	a5, a3, 8
013e10: 0195df9b   srliw	t6, a1, 25
013e14: 00239f13   slli	t5, t2, 2
013e18: 000ed297   auipc	t0, 237
013e1c: bc828293   addi	t0, t0, -1080
013e20: 00008e37   lui	t3, 8
013e24: 00f13423   sd	a5, 8(sp)
013e28: 003fff93   andi	t6, t6, 3
013e2c: 00100913   li	s2, 1
013e30: 00600413   li	s0, 6
013e34: 005f0f33   add	t5, t5, t0
013e38: 01c08e33   add	t3, ra, t3
013e3c: 10081a63   bnez	a6, 276
013e40: 01523683   ld	a3, 21(tp)
013e44: 0036f693   andi	a3, a3, 3
013e48: 00d307b3   add	a5, t1, a3
013e4c: 00b7e603   lwu	a2, 11(a5)
013e50: 04168693   addi	a3, a3, 65
013e54: 00d306b3   add	a3, t1, a3
013e58: 0126a023   sw	s2, 0(a3)
013e5c: 0008a783   lw	a5, 0(a7)
013e60: 0007879b   sext.w	a5, a5
013e64: 00c6a023   sw	a2, 0(a3)
013e68: 00f4f7b3   and	a5, s1, a5
013e6c: 2a746263   bltu	s0, t2, 676
013e70: 000f2683   lw	a3, 0(t5)
013e74: 005686b3   add	a3, a3, t0
013e78: 00068067   jr	a3
013e7c: 1f323783   ld	a5, 499(tp)
013e80: 0007b023   sd	zero, 0(a5)
013e84: 380225a3   sw	zero, 907(tp)
013e88: dd1ff06f   j	-560
013e8c: 03226783   lwu	a5, 50(tp)
013e90: 0007879b   sext.w	a5, a5
013e94: dc0780e3   beqz	a5, -576
013e98: c00f17b7   lui	a5, 786673
013e9c: 00f22023   sw	a5, 0(tp)
013ea0: 00022023   sw	zero, 0(tp)
013ea4: 00022023   sw	zero, 0(tp)
013ea8: 00022023   sw	zero, 0(tp)
013eac: 00022023   sw	zero, 0(tp)
013eb0: 00022023   sw	zero, 0(tp)
013eb4: 00022023   sw	zero, 0(tp)
013eb8: 00022023   sw	zero, 0(tp)
013ebc: 00022023   sw	zero, 0(tp)
013ec0: 00022023   sw	zero, 0(tp)
013ec4: 00022023   sw	zero, 0(tp)
013ec8: 00022023   sw	zero, 0(tp)
013ecc: 00022023   sw	zero, 0(tp)
013ed0: 00022023   sw	zero, 0(tp)
013ed4: 00022023   sw	zero, 0(tp)
013ed8: 00022023   sw	zero, 0(tp)
013edc: 00022023   sw	zero, 0(tp)
013ee0: 40000713   li	a4, 1024
013ee4: f14027f3   csrr	a5, mhartid
013ee8: 00f71733   sll	a4, a4, a5
013eec: 31423783   ld	a5, 788(tp)
013ef0: 00f777b3   and	a5, a4, a5
013ef4: fe079ce3   bnez	a5, -8
013ef8: 701bb783   ld	a5, 1793(s7)
013efc: d4078ce3   beqz	a5, -680
013f00: 00700593   li	a1, 7
013f04: e5df40ef   jal	-45476
013f08: d51ff06f   j	-688
013f0c: 00feb7b3   sltu	a5, t4, a5
013f10: 20079063   bnez	a5, 512
013f14: 00080a63   beqz	a6, 20
013f18: 01523783   ld	a5, 21(tp)
013f1c: 14079a63   bnez	a5, 340
013f20: 0c000793   li	a5, 192
013f24: 28fa8063   beq	s5, a5, 640
013f28: 66ce3783   ld	a5, 1644(t3)
013f2c: 02079a63   bnez	a5, 52
013f30: 00000793   li	a5, 0
013f34: 1e022fa3   sw	zero, 511(tp)
013f38: 0017879b   addiw	a5, a5, 1
013f3c: fee79ce3   bne	a5, a4, -8
013f40: 07426783   lwu	a5, 116(tp)
013f44: 0007879b   sext.w	a5, a5
013f48: d00796e3   bnez	a5, -756
013f4c: ee080ae3   beqz	a6, -268
013f50: 31f22da3   sw	t6, 795(tp)
013f54: 000a2783   lw	a5, 0(s4)
013f58: 0007879b   sext.w	a5, a5
013f5c: f0dff06f   j	-244
013f60: 00100793   li	a5, 1
013f64: 66fe3523   sd	a5, 1642(t3)
013f68: 1e032fa3   sw	zero, 511(t1)
013f6c: 660e3623   sd	zero, 1644(t3)
013f70: 1e032fa3   sw	zero, 511(t1)
013f74: 660e3983   ld	s3, 1632(t3)
013f78: f14027f3   csrr	a5, mhartid
013f7c: 0007879b   sext.w	a5, a5
013f80: 20078c63   beqz	a5, 536
013f84: 01c00693   li	a3, 28
013f88: 00c00613   li	a2, 12
013f8c: 0ac22323   sw	a2, 166(tp)
013f90: 02126783   lwu	a5, 33(tp)
013f94: 0007879b   sext.w	a5, a5
013f98: 00d916bb   sllw	a3, s2, a3
013f9c: 0140006f   j	20
013fa0: 02126783   lwu	a5, 33(tp)
013fa4: 0007879b   sext.w	a5, a5
013fa8: 07423b03   ld	s6, 116(tp)
013fac: 020b1063   bnez	s6, 32
013fb0: 00f6f7b3   and	a5, a3, a5
013fb4: fe0786e3   beqz	a5, -20
013fb8: 0af26783   lwu	a5, 175(tp)
013fbc: 0107f793   andi	a5, a5, 16
013fc0: fe079ce3   bnez	a5, -8
013fc4: 0b323123   sd	s3, 162(tp)
013fc8: 0ac223a3   sw	a2, 167(tp)
013fcc: 662e3983   ld	s3, 1634(t3)
013fd0: 0ac22323   sw	a2, 166(tp)
013fd4: 02126783   lwu	a5, 33(tp)
013fd8: 0007879b   sext.w	a5, a5
013fdc: 0140006f   j	20
013fe0: 02126783   lwu	a5, 33(tp)
013fe4: 0007879b   sext.w	a5, a5
013fe8: 07423b03   ld	s6, 116(tp)
013fec: f40b12e3   bnez	s6, -188
013ff0: 00f6f7b3   and	a5, a3, a5
013ff4: fe0786e3   beqz	a5, -20
013ff8: 0af26783   lwu	a5, 175(tp)
013ffc: 0107f793   andi	a5, a5, 16
014000: fe079ce3   bnez	a5, -8
014004: 0b323123   sd	s3, 162(tp)
014008: 0ac223a3   sw	a2, 167(tp)
01400c: f25ff06f   j	-220
014010: 01d7b7b3   sltu	a5, a5, t4
014014: 0017c793   xori	a5, a5, 1
014018: 0ff7f793   zext.b	a5, a5
01401c: ef5ff06f   j	-268
014020: 40fe87b3   sub	a5, t4, a5
014024: 00f037b3   snez	a5, a5
014028: ee9ff06f   j	-280
01402c: 40fe87b3   sub	a5, t4, a5
014030: 0017b793   seqz	a5, a5
014034: eddff06f   j	-292
014038: 00feb7b3   sltu	a5, t4, a5
01403c: 0017c793   xori	a5, a5, 1
014040: 0ff7f793   zext.b	a5, a5
014044: ecdff06f   j	-308
014048: 01d7b7b3   sltu	a5, a5, t4
01404c: ec5ff06f   j	-316
014050: 02071713   slli	a4, a4, 32
014054: 02089793   slli	a5, a7, 32
014058: 02075713   srli	a4, a4, 32
01405c: 00e7e7b3   or	a5, a5, a4
014060: 06f239a3   sd	a5, 115(tp)
014064: 07323a03   ld	s4, 115(tp)
014068: 00000893   li	a7, 0
01406c: c2dff06f   j	-980
014070: 03226783   lwu	a5, 50(tp)
014074: 0007879b   sext.w	a5, a5
014078: ea0788e3   beqz	a5, -336
01407c: 00a26783   lwu	a5, 10(tp)
014080: 0b126683   lwu	a3, 177(tp)
014084: 00013603   ld	a2, 0(sp)
014088: 00f677b3   and	a5, a2, a5
01408c: 1ec78263   beq	a5, a2, 484
014090: 03523783   ld	a5, 53(tp)
014094: e8078ae3   beqz	a5, -364
014098: 00700593   li	a1, 7
01409c: cc5f40ef   jal	-45884
0140a0: 66abb703   ld	a4, 1642(s7)
0140a4: ba070ae3   beqz	a4, -1100
0140a8: 660bb523   sd	zero, 1642(s7)
0140ac: 1e022fa3   sw	zero, 511(tp)
0140b0: 666bb583   ld	a1, 1638(s7)
0140b4: f14027f3   csrr	a5, mhartid
0140b8: 0007879b   sext.w	a5, a5
0140bc: 20078663   beqz	a5, 524
0140c0: 01c00613   li	a2, 28
0140c4: 00c00713   li	a4, 12
0140c8: 0ae22323   sw	a4, 166(tp)
0140cc: 02126783   lwu	a5, 33(tp)
0140d0: 00100693   li	a3, 1
0140d4: 0007879b   sext.w	a5, a5
0140d8: 00c696bb   sllw	a3, a3, a2
0140dc: 0140006f   j	20
0140e0: 02126783   lwu	a5, 33(tp)
0140e4: 0007879b   sext.w	a5, a5
0140e8: 07423603   ld	a2, 116(tp)
0140ec: b60616e3   bnez	a2, -1172
0140f0: 00f6f7b3   and	a5, a3, a5
0140f4: fe0786e3   beqz	a5, -20
0140f8: 0af26783   lwu	a5, 175(tp)
0140fc: 0107f793   andi	a5, a5, 16
014100: fe079ce3   bnez	a5, -8
014104: 0ab23123   sd	a1, 162(tp)
014108: 0ae223a3   sw	a4, 167(tp)
01410c: b4dff06f   j	-1204
014110: 0c75f593   andi	a1, a1, 199
014114: 04300793   li	a5, 67
014118: 00f59463   bne	a1, a5, 8
01411c: 01d8a023   sw	t4, 0(a7)
014120: 000087b7   lui	a5, 8
014124: 00f087b3   add	a5, ra, a5
014128: 66a7b703   ld	a4, 1642(a5)
01412c: b20704e3   beqz	a4, -1240
014130: 6607b523   sd	zero, 1642(a5)
014134: 1e032fa3   sw	zero, 511(t1)
014138: 6647b583   ld	a1, 1636(a5)
01413c: f14027f3   csrr	a5, mhartid
014140: 0007879b   sext.w	a5, a5
014144: 12078063   beqz	a5, 288
014148: 01c00713   li	a4, 28
01414c: 00c00613   li	a2, 12
014150: 0ac22323   sw	a2, 166(tp)
014154: 02126783   lwu	a5, 33(tp)
014158: 00100693   li	a3, 1
01415c: 0007879b   sext.w	a5, a5
014160: 00e696bb   sllw	a3, a3, a4
014164: 0140006f   j	20
014168: 02126783   lwu	a5, 33(tp)
01416c: 0007879b   sext.w	a5, a5
014170: 07423703   ld	a4, 116(tp)
014174: ae0710e3   bnez	a4, -1312
014178: 00d7f7b3   and	a5, a5, a3
01417c: fe0786e3   beqz	a5, -20
014180: 0af26783   lwu	a5, 175(tp)
014184: 0107f793   andi	a5, a5, 16
014188: fe079ce3   bnez	a5, -8
01418c: 0ab23123   sd	a1, 162(tp)
014190: 0ac223a3   sw	a2, 167(tp)
014194: ac1ff06f   j	-1344
014198: 01b00693   li	a3, 27
01419c: 00b00613   li	a2, 11
0141a0: dedff06f   j	-532
0141a4: 0b126783   lwu	a5, 177(tp)
0141a8: 000106b7   lui	a3, 16
0141ac: 0ff68693   addi	a3, a3, 255
0141b0: 00f6f7b3   and	a5, a3, a5
0141b4: 00813683   ld	a3, 8(sp)
0141b8: 0ed78663   beq	a5, a3, 236
0141bc: 03126783   lwu	a5, 49(tp)
0141c0: 0007879b   sext.w	a5, a5
0141c4: d60782e3   beqz	a5, -668
0141c8: ad9f40ef   jal	-46376
0141cc: 66abb703   ld	a4, 1642(s7)
0141d0: a80704e3   beqz	a4, -1400
0141d4: 660bb523   sd	zero, 1642(s7)
0141d8: 1e022fa3   sw	zero, 511(tp)
0141dc: 666bb583   ld	a1, 1638(s7)
0141e0: f14027f3   csrr	a5, mhartid
0141e4: 0007879b   sext.w	a5, a5
0141e8: 0c078a63   beqz	a5, 212
0141ec: 01c00613   li	a2, 28
0141f0: 00c00713   li	a4, 12
0141f4: 0ae22323   sw	a4, 166(tp)
0141f8: 02126783   lwu	a5, 33(tp)
0141fc: 00100693   li	a3, 1
014200: 0007879b   sext.w	a5, a5
014204: 00c696bb   sllw	a3, a3, a2
014208: 0140006f   j	20
01420c: 02126783   lwu	a5, 33(tp)
014210: 0007879b   sext.w	a5, a5
014214: 07423603   ld	a2, 116(tp)
014218: a40610e3   bnez	a2, -1472
01421c: 00d7f7b3   and	a5, a5, a3
014220: fe0786e3   beqz	a5, -20
014224: 0af26783   lwu	a5, 175(tp)
014228: 0107f793   andi	a5, a5, 16
01422c: fe079ce3   bnez	a5, -8
014230: ed5ff06f   j	-300
014234: 00040e37   lui	t3, 64
014238: fffe0e13   addi	t3, t3, -1
01423c: 00ee7733   and	a4, t3, a4
014240: 02071f13   slli	t5, a4, 32
014244: 01ef5713   srli	a4, t5, 30
014248: 03079793   slli	a5, a5, 48
01424c: 00f707b3   add	a5, a4, a5
014250: 011e7e33   and	t3, t3, a7
014254: 01d7a023   sw	t4, 0(a5)
014258: 000e089b   sext.w	a7, t3
01425c: 00000a13   li	s4, 0
014260: a39ff06f   j	-1480
014264: 01b00713   li	a4, 27
014268: 00b00613   li	a2, 11
01426c: ee5ff06f   j	-284
014270: 000107b7   lui	a5, 16
014274: 0ff78793   addi	a5, a5, 255
014278: 00d7f6b3   and	a3, a5, a3
01427c: 00813783   ld	a5, 8(sp)
014280: e0f698e3   bne	a3, a5, -496
014284: 00700793   li	a5, 7
014288: 08f22ca3   sw	a5, 153(tp)
01428c: 03126783   lwu	a5, 49(tp)
014290: 0007879b   sext.w	a5, a5
014294: fe078ce3   beqz	a5, -8
014298: df9ff06f   j	-520
01429c: a05f40ef   jal	-46588
0142a0: 9b9ff06f   j	-1608
0142a4: 00700793   li	a5, 7
0142a8: 08f22ca3   sw	a5, 153(tp)
0142ac: 03126783   lwu	a5, 49(tp)
0142b0: 0007879b   sext.w	a5, a5
0142b4: fe078ce3   beqz	a5, -8
0142b8: f05ff06f   j	-252
0142bc: 01b00613   li	a2, 27
0142c0: 00b00713   li	a4, 11
0142c4: f31ff06f   j	-208
0142c8: 01b00613   li	a2, 27
0142cc: 00b00713   li	a4, 11
0142d0: df9ff06f   j	-520
0142d4: 00000013   nop
0142d8: 00100793   li	a5, 1
0142dc: 04f22523   sw	a5, 74(tp)
0142e0: 30226583   lwu	a1, 770(tp)
0142e4: 0085d79b   srliw	a5, a1, 8
0142e8: 0037f793   andi	a5, a5, 3
0142ec: 00100713   li	a4, 1
0142f0: 0305f813   andi	a6, a1, 48
0142f4: 0ae78263   beq	a5, a4, 164
0142f8: 2cf76663   bltu	a4, a5, 716
0142fc: 00a22023   sw	a0, 0(tp)
014300: 00b22023   sw	a1, 0(tp)
014304: 000c3023   sd	zero, 0(s8)
014308: 380225a3   sw	zero, 907(tp)
01430c: 08080063   beqz	a6, 128
014310: 01523783   ld	a5, 21(tp)
014314: 2c079063   bnez	a5, 704
014318: 0c05f593   andi	a1, a1, 192
01431c: 0c000793   li	a5, 192
014320: 06f59663   bne	a1, a5, 108
014324: c00f17b7   lui	a5, 786673
014328: 00f22023   sw	a5, 0(tp)
01432c: 00022023   sw	zero, 0(tp)
014330: 00022023   sw	zero, 0(tp)
014334: 00022023   sw	zero, 0(tp)
014338: 00022023   sw	zero, 0(tp)
01433c: 00022023   sw	zero, 0(tp)
014340: 00022023   sw	zero, 0(tp)
014344: 00022023   sw	zero, 0(tp)
014348: 00022023   sw	zero, 0(tp)
01434c: 00022023   sw	zero, 0(tp)
014350: 00022023   sw	zero, 0(tp)
014354: 00022023   sw	zero, 0(tp)
014358: 00022023   sw	zero, 0(tp)
01435c: 00022023   sw	zero, 0(tp)
014360: 00022023   sw	zero, 0(tp)
014364: 00022023   sw	zero, 0(tp)
014368: 00022023   sw	zero, 0(tp)
01436c: 40000713   li	a4, 1024
014370: f14027f3   csrr	a5, mhartid
014374: 00f71733   sll	a4, a4, a5
014378: 31423783   ld	a5, 788(tp)
01437c: 00f777b3   and	a5, a4, a5
014380: fe079ce3   bnez	a5, -8
014384: 701bb783   ld	a5, 1793(s7)
014388: 66079063   bnez	a5, 1632
01438c: 040225a3   sw	zero, 75(tp)
014390: 929f506f   j	-42712
014394: c0001073   unimp
014398: 30226703   lwu	a4, 770(tp)
01439c: 30226883   lwu	a7, 770(tp)
0143a0: 30223683   ld	a3, 770(tp)
0143a4: 30223e03   ld	t3, 770(tp)
0143a8: 020e1e13   slli	t3, t3, 32
0143ac: 00de6e33   or	t3, t3, a3
0143b0: 30223683   ld	a3, 770(tp)
0143b4: 30223f03   ld	t5, 770(tp)
0143b8: 020f1f13   slli	t5, t5, 32
0143bc: 00df6f33   or	t5, t5, a3
0143c0: 30226603   lwu	a2, 770(tp)
0143c4: 04000313   li	t1, 64
0143c8: 0c05fa93   andi	s5, a1, 192
0143cc: 0006069b   sext.w	a3, a2
0143d0: 5a6a8663   beq	s5, t1, 1452
0143d4: 3c081063   bnez	a6, 960
0143d8: 02e71713   slli	a4, a4, 46
0143dc: 02e75893   srli	a7, a4, 46
0143e0: 00000a13   li	s4, 0
0143e4: 03069793   slli	a5, a3, 48
0143e8: 0307d793   srli	a5, a5, 48
0143ec: 00300693   li	a3, 3
0143f0: 00800713   li	a4, 8
0143f4: 00f6f663   bgeu	a3, a5, 12
0143f8: 03061613   slli	a2, a2, 48
0143fc: 02f65713   srli	a4, a2, 47
014400: 0185d79b   srliw	a5, a1, 24
014404: 0017f793   andi	a5, a5, 1
014408: 66fbb623   sd	a5, 1644(s7)
01440c: 1e022fa3   sw	zero, 511(tp)
014410: 660bb523   sd	zero, 1642(s7)
014414: 010007b7   lui	a5, 4096
014418: ffff86b7   lui	a3, 1048568
01441c: 1e022fa3   sw	zero, 511(tp)
014420: 00f5f7b3   and	a5, a1, a5
014424: 00020313   mv	t1, tp
014428: 01ee7e33   and	t3, t3, t5
01442c: 00db8433   add	s0, s7, a3
014430: 0e078663   beqz	a5, 236
014434: 0a926603   lwu	a2, 169(tp)
014438: f14026f3   csrr	a3, mhartid
01443c: 1fa23e83   ld	t4, 506(tp)
014440: 0026979b   slliw	a5, a3, 2
014444: 0046161b   slliw	a2, a2, 4
014448: 07067613   andi	a2, a2, 112
01444c: 00c7f793   andi	a5, a5, 12
014450: 00c7e7b3   or	a5, a5, a2
014454: 02479793   slli	a5, a5, 36
014458: 01d787b3   add	a5, a5, t4
01445c: 0000c637   lui	a2, 12
014460: 00c787b3   add	a5, a5, a2
014464: 3b47a783   lw	a5, 948(a5)
014468: 000a0e93   mv	t4, s4
01446c: 02479793   slli	a5, a5, 36
014470: 0267d793   srli	a5, a5, 38
014474: 00081663   bnez	a6, 12
014478: 02089e93   slli	t4, a7, 32
01447c: 020ede93   srli	t4, t4, 32
014480: 0165d29b   srliw	t0, a1, 22
014484: 03e29293   slli	t0, t0, 62
014488: 0a923383   ld	t2, 169(tp)
01448c: 02323f83   ld	t6, 35(tp)
014490: 03469613   slli	a2, a3, 52
014494: 00566633   or	a2, a2, t0
014498: 03639693   slli	a3, t2, 54
01449c: 00d66633   or	a2, a2, a3
0144a0: 030f9693   slli	a3, t6, 48
0144a4: 00d66633   or	a2, a2, a3
0144a8: 00100693   li	a3, 1
0144ac: 00c7e3b3   or	t2, a5, a2
0144b0: 00008fb7   lui	t6, 8
0144b4: 03d69693   slli	a3, a3, 61
0144b8: 01f40fb3   add	t6, s0, t6
0144bc: 00d3e6b3   or	a3, t2, a3
0144c0: 66dfb223   sd	a3, 1636(t6)
0144c4: 00900693   li	a3, 9
0144c8: 03a69693   slli	a3, a3, 58
0144cc: 00d3e3b3   or	t2, t2, a3
0144d0: 0057e6b3   or	a3, a5, t0
0144d4: 01ae1793   slli	a5, t3, 26
0144d8: 1e032fa3   sw	zero, 511(t1)
0144dc: 00f6e6b3   or	a3, a3, a5
0144e0: 010e9793   slli	a5, t4, 16
0144e4: 00300e93   li	t4, 3
0144e8: 667fb323   sd	t2, 1638(t6)
0144ec: 03be9e93   slli	t4, t4, 59
0144f0: 1e032fa3   sw	zero, 511(t1)
0144f4: 01d6e6b3   or	a3, a3, t4
0144f8: 66dfb023   sd	a3, 1632(t6)
0144fc: 0107d793   srli	a5, a5, 16
014500: 00700693   li	a3, 7
014504: 00c7e7b3   or	a5, a5, a2
014508: 03a69693   slli	a3, a3, 58
01450c: 1e032fa3   sw	zero, 511(t1)
014510: 00d7e7b3   or	a5, a5, a3
014514: 66ffb123   sd	a5, 1634(t6)
014518: 1e032fa3   sw	zero, 511(t1)
01451c: 07426783   lwu	a5, 116(tp)
014520: 0007879b   sext.w	a5, a5
014524: e60794e3   bnez	a5, -408
014528: 02089793   slli	a5, a7, 32
01452c: 01e7d893   srli	a7, a5, 30
014530: 00100793   li	a5, 1
014534: 03079793   slli	a5, a5, 48
014538: 00f888b3   add	a7, a7, a5
01453c: 010187b7   lui	a5, 4120
014540: 00278793   addi	a5, a5, 2
014544: 000106b7   lui	a3, 16
014548: 0075f093   andi	ra, a1, 7
01454c: 00f13023   sd	a5, 0(sp)
014550: 00868793   addi	a5, a3, 8
014554: 0195d29b   srliw	t0, a1, 25
014558: 00209f93   slli	t6, ra, 2
01455c: 000ec397   auipc	t2, 236
014560: 4a038393   addi	t2, t2, 1184
014564: 00008eb7   lui	t4, 8
014568: 00f13423   sd	a5, 8(sp)
01456c: 0032f293   andi	t0, t0, 3
014570: 00100913   li	s2, 1
014574: 00600493   li	s1, 6
014578: 007f8fb3   add	t6, t6, t2
01457c: 01d40eb3   add	t4, s0, t4
014580: 10081c63   bnez	a6, 280
014584: 01523683   ld	a3, 21(tp)
014588: 0036f693   andi	a3, a3, 3
01458c: 00d307b3   add	a5, t1, a3
014590: 00b7e603   lwu	a2, 11(a5)
014594: 04168693   addi	a3, a3, 65
014598: 00d306b3   add	a3, t1, a3
01459c: 0126a023   sw	s2, 0(a3)
0145a0: 0008a783   lw	a5, 0(a7)
0145a4: 02079793   slli	a5, a5, 32
0145a8: 0207d793   srli	a5, a5, 32
0145ac: 00c6a023   sw	a2, 0(a3)
0145b0: 00ff77b3   and	a5, t5, a5
0145b4: 2a14e063   bltu	s1, ra, 672
0145b8: 000fa683   lw	a3, 0(t6)
0145bc: 007686b3   add	a3, a3, t2
0145c0: 00068067   jr	a3
0145c4: 1f323783   ld	a5, 499(tp)
0145c8: 0007b023   sd	zero, 0(a5)
0145cc: 380225a3   sw	zero, 907(tp)
0145d0: dc1ff06f   j	-576
0145d4: 03226783   lwu	a5, 50(tp)
0145d8: 0007879b   sext.w	a5, a5
0145dc: da0788e3   beqz	a5, -592
0145e0: c00f17b7   lui	a5, 786673
0145e4: 00f22023   sw	a5, 0(tp)
0145e8: 00022023   sw	zero, 0(tp)
0145ec: 00022023   sw	zero, 0(tp)
0145f0: 00022023   sw	zero, 0(tp)
0145f4: 00022023   sw	zero, 0(tp)
0145f8: 00022023   sw	zero, 0(tp)
0145fc: 00022023   sw	zero, 0(tp)
014600: 00022023   sw	zero, 0(tp)
014604: 00022023   sw	zero, 0(tp)
014608: 00022023   sw	zero, 0(tp)
01460c: 00022023   sw	zero, 0(tp)
014610: 00022023   sw	zero, 0(tp)
014614: 00022023   sw	zero, 0(tp)
014618: 00022023   sw	zero, 0(tp)
01461c: 00022023   sw	zero, 0(tp)
014620: 00022023   sw	zero, 0(tp)
014624: 00022023   sw	zero, 0(tp)
014628: 40000713   li	a4, 1024
01462c: f14027f3   csrr	a5, mhartid
014630: 00f71733   sll	a4, a4, a5
014634: 31423783   ld	a5, 788(tp)
014638: 00f777b3   and	a5, a4, a5
01463c: fe079ce3   bnez	a5, -8
014640: 701bb783   ld	a5, 1793(s7)
014644: d40784e3   beqz	a5, -696
014648: 00900593   li	a1, 9
01464c: f14f40ef   jal	-47340
014650: d41ff06f   j	-704
014654: 00fe37b3   sltu	a5, t3, a5
014658: 1e079e63   bnez	a5, 508
01465c: 00080a63   beqz	a6, 20
014660: 01523783   ld	a5, 21(tp)
014664: 14079863   bnez	a5, 336
014668: 0c000793   li	a5, 192
01466c: 28fa8063   beq	s5, a5, 640
014670: 66ceb783   ld	a5, 1644(t4)
014674: 02079863   bnez	a5, 48
014678: 00000793   li	a5, 0
01467c: 1e022fa3   sw	zero, 511(tp)
014680: 0017879b   addiw	a5, a5, 1
014684: fee79ce3   bne	a5, a4, -8
014688: 07426783   lwu	a5, 116(tp)
01468c: 0007879b   sext.w	a5, a5
014690: ce079ee3   bnez	a5, -772
014694: ee0808e3   beqz	a6, -272
014698: 30522da3   sw	t0, 795(tp)
01469c: 000a3783   ld	a5, 0(s4)
0146a0: f11ff06f   j	-240
0146a4: 00100793   li	a5, 1
0146a8: 66feb523   sd	a5, 1642(t4)
0146ac: 1e032fa3   sw	zero, 511(t1)
0146b0: 660eb623   sd	zero, 1644(t4)
0146b4: 1e032fa3   sw	zero, 511(t1)
0146b8: 660eb983   ld	s3, 1632(t4)
0146bc: f14027f3   csrr	a5, mhartid
0146c0: 0007879b   sext.w	a5, a5
0146c4: 20078e63   beqz	a5, 540
0146c8: 01c00693   li	a3, 28
0146cc: 00c00613   li	a2, 12
0146d0: 0ac22323   sw	a2, 166(tp)
0146d4: 02126783   lwu	a5, 33(tp)
0146d8: 0007879b   sext.w	a5, a5
0146dc: 00d916bb   sllw	a3, s2, a3
0146e0: 0140006f   j	20
0146e4: 02126783   lwu	a5, 33(tp)
0146e8: 0007879b   sext.w	a5, a5
0146ec: 07423b03   ld	s6, 116(tp)
0146f0: 020b1063   bnez	s6, 32
0146f4: 00f6f7b3   and	a5, a3, a5
0146f8: fe0786e3   beqz	a5, -20
0146fc: 0af26783   lwu	a5, 175(tp)
014700: 0107f793   andi	a5, a5, 16
014704: fe079ce3   bnez	a5, -8
014708: 0b323123   sd	s3, 162(tp)
01470c: 0ac223a3   sw	a2, 167(tp)
014710: 662eb983   ld	s3, 1634(t4)
014714: 0ac22323   sw	a2, 166(tp)
014718: 02126783   lwu	a5, 33(tp)
01471c: 0007879b   sext.w	a5, a5
014720: 0140006f   j	20
014724: 02126783   lwu	a5, 33(tp)
014728: 0007879b   sext.w	a5, a5
01472c: 07423b03   ld	s6, 116(tp)
014730: f40b14e3   bnez	s6, -184
014734: 00f6f7b3   and	a5, a3, a5
014738: fe0786e3   beqz	a5, -20
01473c: 0af26783   lwu	a5, 175(tp)
014740: 0107f793   andi	a5, a5, 16
014744: fe079ce3   bnez	a5, -8
014748: 0b323123   sd	s3, 162(tp)
01474c: 0ac223a3   sw	a2, 167(tp)
014750: f29ff06f   j	-216
014754: 01c7b7b3   sltu	a5, a5, t3
014758: 0017c793   xori	a5, a5, 1
01475c: 0ff7f793   zext.b	a5, a5
014760: ef9ff06f   j	-264
014764: 40fe07b3   sub	a5, t3, a5
014768: 00f037b3   snez	a5, a5
01476c: eedff06f   j	-276
014770: 40fe07b3   sub	a5, t3, a5
014774: 0017b793   seqz	a5, a5
014778: ee1ff06f   j	-288
01477c: 00fe37b3   sltu	a5, t3, a5
014780: 0017c793   xori	a5, a5, 1
014784: 0ff7f793   zext.b	a5, a5
014788: ed1ff06f   j	-304
01478c: 01c7b7b3   sltu	a5, a5, t3
014790: ec9ff06f   j	-312
014794: 02071713   slli	a4, a4, 32
014798: 02089793   slli	a5, a7, 32
01479c: 02075713   srli	a4, a4, 32
0147a0: 00e7e7b3   or	a5, a5, a4
0147a4: 06f239a3   sd	a5, 115(tp)
0147a8: 07323a03   ld	s4, 115(tp)
0147ac: 00000893   li	a7, 0
0147b0: c35ff06f   j	-972
0147b4: 03226783   lwu	a5, 50(tp)
0147b8: 0007879b   sext.w	a5, a5
0147bc: ea078ae3   beqz	a5, -332
0147c0: 00a26783   lwu	a5, 10(tp)
0147c4: 0b126683   lwu	a3, 177(tp)
0147c8: 00013603   ld	a2, 0(sp)
0147cc: 00f677b3   and	a5, a2, a5
0147d0: 1ec78663   beq	a5, a2, 492
0147d4: 03523783   ld	a5, 53(tp)
0147d8: e8078ce3   beqz	a5, -360
0147dc: 00900593   li	a1, 9
0147e0: d80f40ef   jal	-47744
0147e4: 66abb703   ld	a4, 1642(s7)
0147e8: ba0704e3   beqz	a4, -1112
0147ec: 660bb523   sd	zero, 1642(s7)
0147f0: 1e022fa3   sw	zero, 511(tp)
0147f4: 666bb583   ld	a1, 1638(s7)
0147f8: f14027f3   csrr	a5, mhartid
0147fc: 0007879b   sext.w	a5, a5
014800: 20078a63   beqz	a5, 532
014804: 01c00613   li	a2, 28
014808: 00c00713   li	a4, 12
01480c: 0ae22323   sw	a4, 166(tp)
014810: 02126783   lwu	a5, 33(tp)
014814: 00100693   li	a3, 1
014818: 0007879b   sext.w	a5, a5
01481c: 00c696bb   sllw	a3, a3, a2
014820: 0140006f   j	20
014824: 02126783   lwu	a5, 33(tp)
014828: 0007879b   sext.w	a5, a5
01482c: 07423603   ld	a2, 116(tp)
014830: b60610e3   bnez	a2, -1184
014834: 00f6f7b3   and	a5, a3, a5
014838: fe0786e3   beqz	a5, -20
01483c: 0af26783   lwu	a5, 175(tp)
014840: 0107f793   andi	a5, a5, 16
014844: fe079ce3   bnez	a5, -8
014848: 0ab23123   sd	a1, 162(tp)
01484c: 0ae223a3   sw	a4, 167(tp)
014850: b41ff06f   j	-1216
014854: 0c75f593   andi	a1, a1, 199
014858: 04300793   li	a5, 67
01485c: 00f59663   bne	a1, a5, 12
014860: 000e0e1b   sext.w	t3, t3
014864: 01c8a023   sw	t3, 0(a7)
014868: 000087b7   lui	a5, 8
01486c: 00f407b3   add	a5, s0, a5
014870: 66a7b703   ld	a4, 1642(a5)
014874: b0070ce3   beqz	a4, -1256
014878: 6607b523   sd	zero, 1642(a5)
01487c: 1e032fa3   sw	zero, 511(t1)
014880: 6647b583   ld	a1, 1636(a5)
014884: f14027f3   csrr	a5, mhartid
014888: 0007879b   sext.w	a5, a5
01488c: 12078263   beqz	a5, 292
014890: 01c00713   li	a4, 28
014894: 00c00613   li	a2, 12
014898: 0ac22323   sw	a2, 166(tp)
01489c: 02126783   lwu	a5, 33(tp)
0148a0: 00100693   li	a3, 1
0148a4: 0007879b   sext.w	a5, a5
0148a8: 00e696bb   sllw	a3, a3, a4
0148ac: 0140006f   j	20
0148b0: 02126783   lwu	a5, 33(tp)
0148b4: 0007879b   sext.w	a5, a5
0148b8: 07423703   ld	a4, 116(tp)
0148bc: ac0718e3   bnez	a4, -1328
0148c0: 00d7f7b3   and	a5, a5, a3
0148c4: fe0786e3   beqz	a5, -20
0148c8: 0af26783   lwu	a5, 175(tp)
0148cc: 0107f793   andi	a5, a5, 16
0148d0: fe079ce3   bnez	a5, -8
0148d4: 0ab23123   sd	a1, 162(tp)
0148d8: 0ac223a3   sw	a2, 167(tp)
0148dc: ab1ff06f   j	-1360
0148e0: 01b00693   li	a3, 27
0148e4: 00b00613   li	a2, 11
0148e8: de9ff06f   j	-536
0148ec: 0b126783   lwu	a5, 177(tp)
0148f0: 000106b7   lui	a3, 16
0148f4: 0ff68693   addi	a3, a3, 255
0148f8: 00f6f7b3   and	a5, a3, a5
0148fc: 00813683   ld	a3, 8(sp)
014900: 0ed78863   beq	a5, a3, 240
014904: 03126783   lwu	a5, 49(tp)
014908: 0007879b   sext.w	a5, a5
01490c: d60782e3   beqz	a5, -668
014910: b90f40ef   jal	-48240
014914: 66abb703   ld	a4, 1642(s7)
014918: a6070ce3   beqz	a4, -1416
01491c: 660bb523   sd	zero, 1642(s7)
014920: 1e022fa3   sw	zero, 511(tp)
014924: 666bb583   ld	a1, 1638(s7)
014928: f14027f3   csrr	a5, mhartid
01492c: 0007879b   sext.w	a5, a5
014930: 0c078c63   beqz	a5, 216
014934: 01c00613   li	a2, 28
014938: 00c00713   li	a4, 12
01493c: 0ae22323   sw	a4, 166(tp)
014940: 02126783   lwu	a5, 33(tp)
014944: 00100693   li	a3, 1
014948: 0007879b   sext.w	a5, a5
01494c: 00c696bb   sllw	a3, a3, a2
014950: 0140006f   j	20
014954: 02126783   lwu	a5, 33(tp)
014958: 0007879b   sext.w	a5, a5
01495c: 07423603   ld	a2, 116(tp)
014960: a20618e3   bnez	a2, -1488
014964: 00f6f7b3   and	a5, a3, a5
014968: fe0786e3   beqz	a5, -20
01496c: 0af26783   lwu	a5, 175(tp)
014970: 0107f793   andi	a5, a5, 16
014974: fe079ce3   bnez	a5, -8
014978: ed1ff06f   j	-304
01497c: 00040337   lui	t1, 64
014980: fff30313   addi	t1, t1, -1
014984: 00e37733   and	a4, t1, a4
014988: 02071e93   slli	t4, a4, 32
01498c: 01eed713   srli	a4, t4, 30
014990: 03079793   slli	a5, a5, 48
014994: 000e0e9b   sext.w	t4, t3
014998: 00f707b3   add	a5, a4, a5
01499c: 01137333   and	t1, t1, a7
0149a0: 01d7a023   sw	t4, 0(a5)
0149a4: 0003089b   sext.w	a7, t1
0149a8: 00000a13   li	s4, 0
0149ac: a39ff06f   j	-1480
0149b0: 01b00713   li	a4, 27
0149b4: 00b00613   li	a2, 11
0149b8: ee1ff06f   j	-288
0149bc: 000107b7   lui	a5, 16
0149c0: 0ff78793   addi	a5, a5, 255
0149c4: 00d7f6b3   and	a3, a5, a3
0149c8: 00813783   ld	a5, 8(sp)
0149cc: e0f694e3   bne	a3, a5, -504
0149d0: 00700793   li	a5, 7
0149d4: 08f22ca3   sw	a5, 153(tp)
0149d8: 03126783   lwu	a5, 49(tp)
0149dc: 0007879b   sext.w	a5, a5
0149e0: fe078ce3   beqz	a5, -8
0149e4: df1ff06f   j	-528
0149e8: ab8f40ef   jal	-48456
0149ec: 9a5ff06f   j	-1628
0149f0: 00700793   li	a5, 7
0149f4: 08f22ca3   sw	a5, 153(tp)
0149f8: 03126783   lwu	a5, 49(tp)
0149fc: 0007879b   sext.w	a5, a5
014a00: fe078ce3   beqz	a5, -8
014a04: f01ff06f   j	-256
014a08: 01b00613   li	a2, 27
014a0c: 00b00713   li	a4, 11
014a10: f2dff06f   j	-212
014a14: 01b00613   li	a2, 27
014a18: 00b00713   li	a4, 11
014a1c: df1ff06f   j	-528
014a20: 02251e93   slli	t4, a0, 34
014a24: 032ede93   srli	t4, t4, 50
014a28: 00050693   mv	a3, a0
014a2c: 00100793   li	a5, 1
014a30: 04f22523   sw	a5, 74(tp)
014a34: 30226803   lwu	a6, 770(tp)
014a38: 00187493   andi	s1, a6, 1
014a3c: 0008089b   sext.w	a7, a6
014a40: 14049263   bnez	s1, 324
014a44: 00a22023   sw	a0, 0(tp)
014a48: 01022023   sw	a6, 0(tp)
014a4c: 000c3023   sd	zero, 0(s8)
014a50: 380225a3   sw	zero, 907(tp)
014a54: 01523783   ld	a5, 21(tp)
014a58: 08079063   bnez	a5, 128
014a5c: 00287813   andi	a6, a6, 2
014a60: 06080663   beqz	a6, 108
014a64: c00f17b7   lui	a5, 786673
014a68: 00f22023   sw	a5, 0(tp)
014a6c: 00022023   sw	zero, 0(tp)
014a70: 00022023   sw	zero, 0(tp)
014a74: 00022023   sw	zero, 0(tp)
014a78: 00022023   sw	zero, 0(tp)
014a7c: 00022023   sw	zero, 0(tp)
014a80: 00022023   sw	zero, 0(tp)
014a84: 00022023   sw	zero, 0(tp)
014a88: 00022023   sw	zero, 0(tp)
014a8c: 00022023   sw	zero, 0(tp)
014a90: 00022023   sw	zero, 0(tp)
014a94: 00022023   sw	zero, 0(tp)
014a98: 00022023   sw	zero, 0(tp)
014a9c: 00022023   sw	zero, 0(tp)
014aa0: 00022023   sw	zero, 0(tp)
014aa4: 00022023   sw	zero, 0(tp)
014aa8: 00022023   sw	zero, 0(tp)
014aac: 40000713   li	a4, 1024
014ab0: f14027f3   csrr	a5, mhartid
014ab4: 00f71733   sll	a4, a4, a5
014ab8: 31423783   ld	a5, 788(tp)
014abc: 00f777b3   and	a5, a4, a5
014ac0: fe079ce3   bnez	a5, -8
014ac4: 701bb783   ld	a5, 1793(s7)
014ac8: 0a079a63   bnez	a5, 180
014acc: 040225a3   sw	zero, 75(tp)
014ad0: 9e8f506f   j	-44568
014ad4: c0001073   unimp
014ad8: 03226783   lwu	a5, 50(tp)
014adc: 0007879b   sext.w	a5, a5
014ae0: fe0786e3   beqz	a5, -20
014ae4: c00f17b7   lui	a5, 786673
014ae8: 00f22023   sw	a5, 0(tp)
014aec: 00022023   sw	zero, 0(tp)
014af0: 00022023   sw	zero, 0(tp)
014af4: 00022023   sw	zero, 0(tp)
014af8: 00022023   sw	zero, 0(tp)
014afc: 00022023   sw	zero, 0(tp)
014b00: 00022023   sw	zero, 0(tp)
014b04: 00022023   sw	zero, 0(tp)
014b08: 00022023   sw	zero, 0(tp)
014b0c: 00022023   sw	zero, 0(tp)
014b10: 00022023   sw	zero, 0(tp)
014b14: 00022023   sw	zero, 0(tp)
014b18: 00022023   sw	zero, 0(tp)
014b1c: 00022023   sw	zero, 0(tp)
014b20: 00022023   sw	zero, 0(tp)
014b24: 00022023   sw	zero, 0(tp)
014b28: 00022023   sw	zero, 0(tp)
014b2c: 40000713   li	a4, 1024
014b30: f14027f3   csrr	a5, mhartid
014b34: 00f71733   sll	a4, a4, a5
014b38: 31423783   ld	a5, 788(tp)
014b3c: 00f777b3   and	a5, a4, a5
014b40: fe079ce3   bnez	a5, -8
014b44: 701bb783   ld	a5, 1793(s7)
014b48: f80782e3   beqz	a5, -124
014b4c: 00900593   li	a1, 9
014b50: a10f40ef   jal	-48624
014b54: f7dff06f   j	-132
014b58: 01f6f533   and	a0, a3, t6
014b5c: 01d56533   or	a0, a0, t4
014b60: 00050693   mv	a3, a0
014b64: 01523883   ld	a7, 21(tp)
014b68: 1a089c63   bnez	a7, 440
014b6c: 1c028263   beqz	t0, 452
014b70: 03126503   lwu	a0, 49(tp)
014b74: 0005051b   sext.w	a0, a0
014b78: 1a050c63   beqz	a0, 440
014b7c: 924f40ef   jal	-48860
014b80: f51ff06f   j	-176
014b84: 002eda93   srli	s5, t4, 2
014b88: 02000793   li	a5, 32
014b8c: 000a8093   mv	ra, s5
014b90: 1b57e863   bltu	a5, s5, 432
014b94: 040a8863   beqz	s5, 80
014b98: 8c018593   addi	a1, gp, -1856
014b9c: 9c018613   addi	a2, gp, -1600
014ba0: 00000713   li	a4, 0
014ba4: 30223503   ld	a0, 770(tp)
014ba8: 30223783   ld	a5, 770(tp)
014bac: 02079793   slli	a5, a5, 32
014bb0: 00a7e7b3   or	a5, a5, a0
014bb4: 06f239a3   sd	a5, 115(tp)
014bb8: 07323783   ld	a5, 115(tp)
014bbc: 00f5b023   sd	a5, 0(a1)
014bc0: 30223503   ld	a0, 770(tp)
014bc4: 30223783   ld	a5, 770(tp)
014bc8: 02079793   slli	a5, a5, 32
014bcc: 00a7e7b3   or	a5, a5, a0
014bd0: 00f63023   sd	a5, 0(a2)
014bd4: 00170713   addi	a4, a4, 1
014bd8: 00858593   addi	a1, a1, 8
014bdc: 00860613   addi	a2, a2, 8
014be0: fc1762e3   bltu	a4, ra, -60
014be4: 0108d89b   srliw	a7, a7, 16
014be8: 00300793   li	a5, 3
014bec: 00189713   slli	a4, a7, 1
014bf0: 1517f463   bgeu	a5, a7, 328
014bf4: 0028579b   srliw	a5, a6, 2
014bf8: 0037f793   andi	a5, a5, 3
014bfc: 0018581b   srliw	a6, a6, 1
014c00: c0010fb7   lui	t6, 786448
014c04: 00000e13   li	t3, 0
014c08: 00000413   li	s0, 0
014c0c: 00f12623   sw	a5, 12(sp)
014c10: 00187293   andi	t0, a6, 1
014c14: 010e9e9b   slliw	t4, t4, 16
014c18: ffff8f93   addi	t6, t6, -1
014c1c: 07426983   lwu	s3, 116(tp)
014c20: 0009899b   sext.w	s3, s3
014c24: ea0994e3   bnez	s3, -344
014c28: 00c12783   lw	a5, 12(sp)
014c2c: 30f22da3   sw	a5, 795(tp)
014c30: 00300793   li	a5, 3
014c34: 3357d063   bge	a5, s5, 800
014c38: 9c018593   addi	a1, gp, -1600
014c3c: 8c018613   addi	a2, gp, -1856
014c40: 00300913   li	s2, 3
014c44: 00000393   li	t2, 0
014c48: 00f00a13   li	s4, 15
014c4c: 007a1833   sll	a6, s4, t2
014c50: 07426783   lwu	a5, 116(tp)
014c54: 0007879b   sext.w	a5, a5
014c58: 06079463   bnez	a5, 104
014c5c: 01c87533   and	a0, a6, t3
014c60: 06a80063   beq	a6, a0, 96
014c64: 00063503   ld	a0, 0(a2)
014c68: 00863f03   ld	t5, 8(a2)
014c6c: 01063303   ld	t1, 16(a2)
014c70: 01863883   ld	a7, 24(a2)
014c74: 00053503   ld	a0, 0(a0)
014c78: 0005bb03   ld	s6, 0(a1)
014c7c: 000f3f03   ld	t5, 0(t5)
014c80: 00033303   ld	t1, 0(t1)
014c84: 0008b883   ld	a7, 0(a7)
014c88: ed6568e3   bltu	a0, s6, -304
014c8c: 0085b503   ld	a0, 8(a1)
014c90: ecaf64e3   bltu	t5, a0, -312
014c94: 0105b503   ld	a0, 16(a1)
014c98: eca360e3   bltu	t1, a0, -320
014c9c: 0185b503   ld	a0, 24(a1)
014ca0: eaa8ece3   bltu	a7, a0, -328
014ca4: 010e6e33   or	t3, t3, a6
014ca8: 00440413   addi	s0, s0, 4
014cac: 00048513   mv	a0, s1
014cb0: 1e022fa3   sw	zero, 511(tp)
014cb4: 0017879b   addiw	a5, a5, 1
014cb8: fee79ce3   bne	a5, a4, -8
014cbc: f8050ae3   beqz	a0, -108
014cc0: 00490913   addi	s2, s2, 4
014cc4: 00438393   addi	t2, t2, 4
014cc8: 02058593   addi	a1, a1, 32
014ccc: 02060613   addi	a2, a2, 32
014cd0: f6196ee3   bltu	s2, ra, -132
014cd4: 00138813   addi	a6, t2, 1
014cd8: 00238f13   addi	t5, t2, 2
014cdc: 13208a63   beq	ra, s2, 308
014ce0: 0be08e63   beq	ra, t5, 188
014ce4: 07008263   beq	ra, a6, 100
014ce8: 01f6f533   and	a0, a3, t6
014cec: 01d56533   or	a0, a0, t4
014cf0: 00050693   mv	a3, a0
014cf4: dc808ce3   beq	ra, s0, -552
014cf8: 01523783   ld	a5, 21(tp)
014cfc: 26079263   bnez	a5, 612
014d00: 00028863   beqz	t0, 16
014d04: 03126783   lwu	a5, 49(tp)
014d08: 0007879b   sext.w	a5, a5
014d0c: e60798e3   bnez	a5, -400
014d10: 1e022fa3   sw	zero, 511(tp)
014d14: 0019899b   addiw	s3, s3, 1
014d18: ff371ce3   bne	a4, s3, -8
014d1c: f01ff06f   j	-256
014d20: 03223883   ld	a7, 50(tp)
014d24: 00088663   beqz	a7, 12
014d28: 03523883   ld	a7, 53(tp)
014d2c: e20890e3   bnez	a7, -480
014d30: 00000513   li	a0, 0
014d34: f7dff06f   j	-132
014d38: 00800713   li	a4, 8
014d3c: eb9ff06f   j	-328
014d40: 02000093   li	ra, 32
014d44: e51ff06f   j	-432
014d48: 00100613   li	a2, 1
014d4c: 00339793   slli	a5, t2, 3
014d50: 007618b3   sll	a7, a2, t2
014d54: 8c018613   addi	a2, gp, -1856
014d58: 00f60333   add	t1, a2, a5
014d5c: 07426783   lwu	a5, 116(tp)
014d60: 0007879b   sext.w	a5, a5
014d64: f80792e3   bnez	a5, -124
014d68: 01c8f633   and	a2, a7, t3
014d6c: f6c88ee3   beq	a7, a2, -132
014d70: 00033603   ld	a2, 0(t1)
014d74: 10033583   ld	a1, 256(t1)
014d78: 00063803   ld	a6, 0(a2)
014d7c: 16b86863   bltu	a6, a1, 368
014d80: 011e6e33   or	t3, t3, a7
014d84: 00140413   addi	s0, s0, 1
014d88: 1e022fa3   sw	zero, 511(tp)
014d8c: 0017879b   addiw	a5, a5, 1
014d90: fef71ce3   bne	a4, a5, -8
014d94: fcb864e3   bltu	a6, a1, -56
014d98: f51ff06f   j	-176
014d9c: 8c018793   addi	a5, gp, -1856
014da0: 00339893   slli	a7, t2, 3
014da4: 00381613   slli	a2, a6, 3
014da8: 00300313   li	t1, 3
014dac: 00731333   sll	t1, t1, t2
014db0: 011788b3   add	a7, a5, a7
014db4: 00c78633   add	a2, a5, a2
014db8: 07426783   lwu	a5, 116(tp)
014dbc: 0007879b   sext.w	a5, a5
014dc0: f20792e3   bnez	a5, -220
014dc4: 01c375b3   and	a1, t1, t3
014dc8: f0b30ee3   beq	t1, a1, -228
014dcc: 0008bf03   ld	t5, 0(a7)
014dd0: 00063503   ld	a0, 0(a2)
014dd4: 1008b583   ld	a1, 256(a7)
014dd8: 000f3f03   ld	t5, 0(t5)
014ddc: 00053503   ld	a0, 0(a0)
014de0: 0ebf6263   bltu	t5, a1, 228
014de4: 10063583   ld	a1, 256(a2)
014de8: 0cb56e63   bltu	a0, a1, 220
014dec: 006e6e33   or	t3, t3, t1
014df0: 00240413   addi	s0, s0, 2
014df4: 00048593   mv	a1, s1
014df8: 1e022fa3   sw	zero, 511(tp)
014dfc: 0017879b   addiw	a5, a5, 1
014e00: fef71ce3   bne	a4, a5, -8
014e04: fa058ae3   beqz	a1, -76
014e08: ef0090e3   bne	ra, a6, -288
014e0c: f3dff06f   j	-196
014e10: 8c018793   addi	a5, gp, -1856
014e14: 00339613   slli	a2, t2, 3
014e18: 00381313   slli	t1, a6, 3
014e1c: 003f1893   slli	a7, t5, 3
014e20: 00700593   li	a1, 7
014e24: 007595b3   sll	a1, a1, t2
014e28: 00c78633   add	a2, a5, a2
014e2c: 00678333   add	t1, a5, t1
014e30: 011788b3   add	a7, a5, a7
014e34: 07426783   lwu	a5, 116(tp)
014e38: 0007879b   sext.w	a5, a5
014e3c: ea0792e3   bnez	a5, -348
014e40: 01c5f533   and	a0, a1, t3
014e44: e8a58ee3   beq	a1, a0, -356
014e48: 00063a03   ld	s4, 0(a2)
014e4c: 00033903   ld	s2, 0(t1)
014e50: 0008b503   ld	a0, 0(a7)
014e54: 000a3a03   ld	s4, 0(s4)
014e58: 10063b03   ld	s6, 256(a2)
014e5c: 00093903   ld	s2, 0(s2)
014e60: 00053503   ld	a0, 0(a0)
014e64: 036a6c63   bltu	s4, s6, 56
014e68: 10033a03   ld	s4, 256(t1)
014e6c: 03496863   bltu	s2, s4, 48
014e70: 1008b903   ld	s2, 256(a7)
014e74: 03256463   bltu	a0, s2, 40
014e78: 00be6e33   or	t3, t3, a1
014e7c: 00340413   addi	s0, s0, 3
014e80: 00048513   mv	a0, s1
014e84: 1e022fa3   sw	zero, 511(tp)
014e88: 0017879b   addiw	a5, a5, 1
014e8c: fef71ce3   bne	a4, a5, -8
014e90: fa0502e3   beqz	a0, -92
014e94: e5e098e3   bne	ra, t5, -432
014e98: f05ff06f   j	-252
014e9c: 01f6f533   and	a0, a3, t6
014ea0: 01d56533   or	a0, a0, t4
014ea4: 00050693   mv	a3, a0
014ea8: 01523903   ld	s2, 21(tp)
014eac: 06091463   bnez	s2, 104
014eb0: 06028a63   beqz	t0, 116
014eb4: 03126503   lwu	a0, 49(tp)
014eb8: 0005051b   sext.w	a0, a0
014ebc: fc0504e3   beqz	a0, -56
014ec0: cbdff06f   j	-836
014ec4: 01f6f533   and	a0, a3, t6
014ec8: 01d56533   or	a0, a0, t4
014ecc: 00050693   mv	a3, a0
014ed0: 01523583   ld	a1, 21(tp)
014ed4: 06059663   bnez	a1, 108
014ed8: f20280e3   beqz	t0, -224
014edc: 03126583   lwu	a1, 49(tp)
014ee0: 0005859b   sext.w	a1, a1
014ee4: f0058ae3   beqz	a1, -236
014ee8: c95ff06f   j	-876
014eec: 01f6f533   and	a0, a3, t6
014ef0: 01d56533   or	a0, a0, t4
014ef4: 00050693   mv	a3, a0
014ef8: 01523603   ld	a2, 21(tp)
014efc: 02061863   bnez	a2, 48
014f00: e80284e3   beqz	t0, -376
014f04: 03126603   lwu	a2, 49(tp)
014f08: 0006061b   sext.w	a2, a2
014f0c: e6060ee3   beqz	a2, -388
014f10: c6dff06f   j	-916
014f14: 03223903   ld	s2, 50(tp)
014f18: 00090663   beqz	s2, 12
014f1c: 03523903   ld	s2, 53(tp)
014f20: c20916e3   bnez	s2, -980
014f24: 00000513   li	a0, 0
014f28: f5dff06f   j	-164
014f2c: 03223603   ld	a2, 50(tp)
014f30: e4060ce3   beqz	a2, -424
014f34: 03523603   ld	a2, 53(tp)
014f38: e40608e3   beqz	a2, -432
014f3c: c11ff06f   j	-1008
014f40: 03223583   ld	a1, 50(tp)
014f44: ea058ae3   beqz	a1, -332
014f48: 03523583   ld	a1, 53(tp)
014f4c: ea0586e3   beqz	a1, -340
014f50: bfdff06f   j	-1028
014f54: 00300913   li	s2, 3
014f58: 00000393   li	t2, 0
014f5c: d79ff06f   j	-648
014f60: 03223783   ld	a5, 50(tp)
014f64: da0786e3   beqz	a5, -596
014f68: 03523783   ld	a5, 53(tp)
014f6c: da0782e3   beqz	a5, -604
014f70: bddff06f   j	-1060
014f74: 00000013   nop
014f78: 30226783   lwu	a5, 770(tp)
014f7c: 060226a3   sw	zero, 109(tp)
014f80: 01523603   ld	a2, 21(tp)
014f84: 00367613   andi	a2, a2, 3
014f88: 00c20733   add	a4, tp, a2
014f8c: 00b76583   lwu	a1, 11(a4)
014f90: 04160613   addi	a2, a2, 65
014f94: 00c207b3   add	a5, tp, a2
014f98: 00100713   li	a4, 1
014f9c: 00e7a023   sw	a4, 0(a5)
014fa0: 01323783   ld	a5, 19(tp)
014fa4: fe079ee3   bnez	a5, -4
014fa8: ebccb783   ld	a5, -324(s9)
014fac: 00c7d713   srli	a4, a5, 12
014fb0: 00377713   andi	a4, a4, 3
014fb4: 02070a63   beqz	a4, 52
014fb8: 07f00693   li	a3, 127
014fbc: b0002773   csrr	a4, mcycle
014fc0: 00000013   nop
014fc4: b00027f3   csrr	a5, mcycle
014fc8: 40e787b3   sub	a5, a5, a4
014fcc: fef6fae3   bgeu	a3, a5, -12
014fd0: ebcca783   lw	a5, -324(s9)
014fd4: 00c7d71b   srliw	a4, a5, 12
014fd8: 00377713   andi	a4, a4, 3
014fdc: 02079793   slli	a5, a5, 32
014fe0: 0207d793   srli	a5, a5, 32
014fe4: fc071ce3   bnez	a4, -40
014fe8: 0017f793   andi	a5, a5, 1
014fec: 00078463   beqz	a5, 8
014ff0: ea0cae23   sw	zero, -324(s9)
014ff4: 00c20633   add	a2, tp, a2
014ff8: 00b62023   sw	a1, 0(a2)
014ffc: 0a926683   lwu	a3, 169(tp)
015000: f14027f3   csrr	a5, mhartid
015004: 1fa23703   ld	a4, 506(tp)
015008: 0027979b   slliw	a5, a5, 2
01500c: 0046969b   slliw	a3, a3, 4
015010: 0706f693   andi	a3, a3, 112
015014: 00c7f793   andi	a5, a5, 12
015018: 00d7e7b3   or	a5, a5, a3
01501c: 02479793   slli	a5, a5, 36
015020: 00f70733   add	a4, a4, a5
015024: 0000c837   lui	a6, 12
015028: 01070733   add	a4, a4, a6
01502c: 3e872703   lw	a4, 1000(a4)
015030: 0007071b   sext.w	a4, a4
015034: 1f026683   lwu	a3, 496(tp)
015038: 02069693   slli	a3, a3, 32
01503c: 0206d693   srli	a3, a3, 32
015040: 00d23e23   sd	a3, 28(tp)
015044: 00f77713   andi	a4, a4, 15
015048: 10076713   ori	a4, a4, 256
01504c: 0ae222a3   sw	a4, 165(tp)
015050: 31422003   lw	zero, 788(tp)
015054: bd01b703   ld	a4, -1072(gp)
015058: 7f974303   lbu	t1, 2041(a4)
01505c: 7fd74883   lbu	a7, 2045(a4)
015060: 7f874e83   lbu	t4, 2040(a4)
015064: 7fa74503   lbu	a0, 2042(a4)
015068: 7fc74e03   lbu	t3, 2044(a4)
01506c: 7fe74583   lbu	a1, 2046(a4)
015070: 7fb74683   lbu	a3, 2043(a4)
015074: 7ff74603   lbu	a2, 2047(a4)
015078: 00831313   slli	t1, t1, 8
01507c: 00889893   slli	a7, a7, 8
015080: 01d36333   or	t1, t1, t4
015084: 01051513   slli	a0, a0, 16
015088: 01c8e8b3   or	a7, a7, t3
01508c: 01059713   slli	a4, a1, 16
015090: 01176733   or	a4, a4, a7
015094: 006565b3   or	a1, a0, t1
015098: 01869693   slli	a3, a3, 24
01509c: 01861613   slli	a2, a2, 24
0150a0: 00b6e6b3   or	a3, a3, a1
0150a4: 00e66633   or	a2, a2, a4
0150a8: 0006869b   sext.w	a3, a3
0150ac: 0006061b   sext.w	a2, a2
0150b0: 1fa23703   ld	a4, 506(tp)
0150b4: 00f70733   add	a4, a4, a5
0150b8: 01070733   add	a4, a4, a6
0150bc: 3bc72703   lw	a4, 956(a4)
0150c0: 00800513   li	a0, 8
0150c4: 03e77593   andi	a1, a4, 62
0150c8: 0007071b   sext.w	a4, a4
0150cc: 02058063   beqz	a1, 32
0150d0: 03f77713   andi	a4, a4, 63
0150d4: 01400513   li	a0, 20
0150d8: 00070593   mv	a1, a4
0150dc: 0ee56c63   bltu	a0, a4, 248
0150e0: 0015859b   addiw	a1, a1, 1
0150e4: 00100513   li	a0, 1
0150e8: 00b5153b   sllw	a0, a0, a1
0150ec: 1fa23703   ld	a4, 506(tp)
0150f0: 0000c837   lui	a6, 12
0150f4: 00f70733   add	a4, a4, a5
0150f8: 01070733   add	a4, a4, a6
0150fc: 3c472703   lw	a4, 964(a4)
015100: 0007071b   sext.w	a4, a4
015104: 1fa23583   ld	a1, 506(tp)
015108: 00f585b3   add	a1, a1, a5
01510c: 010585b3   add	a1, a1, a6
015110: 3c85a583   lw	a1, 968(a1)
015114: 02071713   slli	a4, a4, 32
015118: 02075713   srli	a4, a4, 32
01511c: 02059593   slli	a1, a1, 32
015120: 00e5e5b3   or	a1, a1, a4
015124: 1fa23703   ld	a4, 506(tp)
015128: 00f70733   add	a4, a4, a5
01512c: 01070733   add	a4, a4, a6
015130: 3c072803   lw	a6, 960(a4)
015134: 40a0073b   negw	a4, a0
015138: 02071713   slli	a4, a4, 32
01513c: 02075713   srli	a4, a4, 32
015140: 02081813   slli	a6, a6, 32
015144: 00b77733   and	a4, a4, a1
015148: 02085813   srli	a6, a6, 32
01514c: 01076733   or	a4, a4, a6
015150: 00e5f863   bgeu	a1, a4, 16
015154: 02051513   slli	a0, a0, 32
015158: 02055513   srli	a0, a0, 32
01515c: 40a70733   sub	a4, a4, a0
015160: 1fa23583   ld	a1, 506(tp)
015164: 00f587b3   add	a5, a1, a5
015168: 0000c5b7   lui	a1, 12
01516c: 00b787b3   add	a5, a5, a1
015170: 3b47a783   lw	a5, 948(a5)
015174: 0007879b   sext.w	a5, a5
015178: 1f026583   lwu	a1, 496(tp)
01517c: 02059593   slli	a1, a1, 32
015180: 0205d593   srli	a1, a1, 32
015184: 00b23e23   sd	a1, 28(tp)
015188: 0a0222a3   sw	zero, 165(tp)
01518c: 31422003   lw	zero, 788(tp)
015190: c006d5b7   lui	a1, 786541
015194: 00b22023   sw	a1, 0(tp)
015198: 16e035b7   lui	a1, 93699
01519c: 5945859b   addiw	a1, a1, 1428
0151a0: 00b22023   sw	a1, 0(tp)
0151a4: 420005b7   lui	a1, 270336
0151a8: 00b22023   sw	a1, 0(tp)
0151ac: 00d22023   sw	a3, 0(tp)
0151b0: 00c22023   sw	a2, 0(tp)
0151b4: 00e22023   sw	a4, 0(tp)
0151b8: 02075713   srli	a4, a4, 32
0151bc: 00e22023   sw	a4, 0(tp)
0151c0: 02479793   slli	a5, a5, 36
0151c4: 0267d793   srli	a5, a5, 38
0151c8: 00f22023   sw	a5, 0(tp)
0151cc: aedf406f   j	-46356
0151d0: c0001073   unimp
0151d4: 01400593   li	a1, 20
0151d8: f09ff06f   j	-248
0151e0: 711bb803   ld	a6, 1809(s7)
0151e4: ffff87b7   lui	a5, 1048568
0151e8: 00050713   mv	a4, a0
0151ec: 00a875b3   and	a1, a6, a0
0151f0: 0005859b   sext.w	a1, a1
0151f4: 00fb86b3   add	a3, s7, a5
0151f8: 08a59263   bne	a1, a0, 132
0151fc: 70fbb503   ld	a0, 1807(s7)
015200: 70dbb783   ld	a5, 1805(s7)
015204: 0207d613   srli	a2, a5, 32
015208: 0007879b   sext.w	a5, a5
01520c: 04061663   bnez	a2, 76
015210: 00100593   li	a1, 1
015214: 04000613   li	a2, 64
015218: 02159593   slli	a1, a1, 33
01521c: 0017879b   addiw	a5, a5, 1
015220: 02079793   slli	a5, a5, 32
015224: 0207d793   srli	a5, a5, 32
015228: 00b7e7b3   or	a5, a5, a1
01522c: 000085b7   lui	a1, 8
015230: 00b686b3   add	a3, a3, a1
015234: 70f6b6a3   sd	a5, 1805(a3)
015238: 1e022fa3   sw	zero, 511(tp)
01523c: 00c50533   add	a0, a0, a2
015240: b00027f3   csrr	a5, mcycle
015244: 0207d693   srli	a3, a5, 32
015248: 00e52023   sw	a4, 0(a0)
01524c: 00f52223   sw	a5, 4(a0)
015250: 00d52423   sw	a3, 8(a0)
015254: 00008067   ret
015258: 0006061b   sext.w	a2, a2
01525c: 42085813   srai	a6, a6, 32
015260: fb0678e3   bgeu	a2, a6, -80
015264: 0016059b   addiw	a1, a2, 1
015268: 0066161b   slliw	a2, a2, 6
01526c: 02061613   slli	a2, a2, 32
015270: 02059593   slli	a1, a1, 32
015274: 02065613   srli	a2, a2, 32
015278: fa5ff06f   j	-92
01527c: 00000513   li	a0, 0
015280: 00008067   ret
015284: 00000013   nop
015288: fff6061b   addiw	a2, a2, -1
01528c: 00c8f333   and	t1, a7, a2
015290: 02069e13   slli	t3, a3, 32
015294: 02031693   slli	a3, t1, 32
015298: 020e5e13   srli	t3, t3, 32
01529c: 0206d693   srli	a3, a3, 32
0152a0: 03c686b3   mul	a3, a3, t3
0152a4: fa010113   addi	sp, sp, -96
0152a8: ac018313   addi	t1, gp, -1344
0152ac: 03435e83   lhu	t4, 52(t1)
0152b0: 03235f83   lhu	t6, 50(t1)
0152b4: 04913823   sd	s1, 80(sp)
0152b8: 01c13423   sd	t3, 8(sp)
0152bc: 03635483   lhu	s1, 54(t1)
0152c0: 03035e03   lhu	t3, 48(t1)
0152c4: 04813c23   sd	s0, 88(sp)
0152c8: 00010f37   lui	t5, 16
0152cc: 01435403   lhu	s0, 20(t1)
0152d0: ffff0f13   addi	t5, t5, -1
0152d4: 10056513   ori	a0, a0, 256
0152d8: 03413c23   sd	s4, 56(sp)
0152dc: 00b13c23   sd	a1, 24(sp)
0152e0: 00058a13   mv	s4, a1
0152e4: 01efffb3   and	t6, t6, t5
0152e8: 10157593   andi	a1, a0, 257
0152ec: 01ee7f33   and	t5, t3, t5
0152f0: 010e951b   slliw	a0, t4, 16
0152f4: 01049e9b   slliw	t4, s1, 16
0152f8: 05213423   sd	s2, 72(sp)
0152fc: 05313023   sd	s3, 64(sp)
015300: 06012283   lw	t0, 96(sp)
015304: 06812983   lw	s3, 104(sp)
015308: 02032903   lw	s2, 32(t1)
01530c: 03513823   sd	s5, 48(sp)
015310: 03613423   sd	s6, 40(sp)
015314: 0105959b   slliw	a1, a1, 16
015318: 00afefb3   or	t6, t6, a0
01531c: 01df6f33   or	t5, t5, t4
015320: 00040393   mv	t2, s0
015324: 014686b3   add	a3, a3, s4
015328: 00a26e83   lwu	t4, 10(tp)
01532c: 010ede9b   srliw	t4, t4, 16
015330: 001efe93   andi	t4, t4, 1
015334: 020e8263   beqz	t4, 36
015338: 01c03533   snez	a0, t3
01533c: 00803eb3   snez	t4, s0
015340: 009034b3   snez	s1, s1
015344: 40a00533   neg	a0, a0
015348: 009e8ebb   addw	t4, t4, s1
01534c: 00357513   andi	a0, a0, 3
015350: 002e8e9b   addiw	t4, t4, 2
015354: 00ae8ebb   addw	t4, t4, a0
015358: 00022ca3   sw	zero, 25(tp)
01535c: 31422003   lw	zero, 788(tp)
015360: 32023503   ld	a0, 800(tp)
015364: 00457513   andi	a0, a0, 4
015368: fe051ce3   bnez	a0, -8
01536c: 10028463   beqz	t0, 264
015370: 01032503   lw	a0, 16(t1)
015374: 014e9493   slli	s1, t4, 20
015378: 0014e493   ori	s1, s1, 1
01537c: 00a13823   sd	a0, 16(sp)
015380: c008bab7   lui	s5, 786571
015384: 000f8f9b   sext.w	t6, t6
015388: 000f0f1b   sext.w	t5, t5
01538c: 0003839b   sext.w	t2, t2
015390: 005882bb   addw	t0, a7, t0
015394: 00000313   li	t1, 0
015398: ffff0a37   lui	s4, 1048560
01539c: 00d80e33   add	t3, a6, a3
0153a0: 000e3503   ld	a0, 0(t3)
0153a4: 06a239a3   sd	a0, 115(tp)
0153a8: 07323b03   ld	s6, 115(tp)
0153ac: 1f026503   lwu	a0, 496(tp)
0153b0: 02051513   slli	a0, a0, 32
0153b4: 02055513   srli	a0, a0, 32
0153b8: 00a23e23   sd	a0, 28(tp)
0153bc: 01623ea3   sd	s6, 29(tp)
0153c0: 020225a3   sw	zero, 43(tp)
0153c4: 01726503   lwu	a0, 23(tp)
0153c8: 008e2e03   lw	t3, 8(t3)
0153cc: 00ae5e3b   srlw	t3, t3, a0
0153d0: 03c227a3   sw	t3, 47(tp)
0153d4: 00d70533   add	a0, a4, a3
0153d8: 06a239a3   sd	a0, 115(tp)
0153dc: 07323503   ld	a0, 115(tp)
0153e0: 08a23923   sd	a0, 146(tp)
0153e4: 02c26503   lwu	a0, 44(tp)
0153e8: 00556513   ori	a0, a0, 5
0153ec: 02051513   slli	a0, a0, 32
0153f0: 02055513   srli	a0, a0, 32
0153f4: 08a23923   sd	a0, 146(tp)
0153f8: 029236a3   sd	s1, 45(tp)
0153fc: 0206d513   srli	a0, a3, 32
015400: 0105151b   slliw	a0, a0, 16
015404: 0105551b   srliw	a0, a0, 16
015408: 0145f5b3   and	a1, a1, s4
01540c: 00d78b33   add	s6, a5, a3
015410: 00068e1b   sext.w	t3, a3
015414: 00a5e5b3   or	a1, a1, a0
015418: 00040a63   beqz	s0, 20
01541c: 000b2303   lw	t1, 0(s6)
015420: 01013503   ld	a0, 16(sp)
015424: 0043131b   slliw	t1, t1, 4
015428: 00a3033b   addw	t1, t1, a0
01542c: 03d22423   sw	t4, 40(tp)
015430: 01522023   sw	s5, 0(tp)
015434: 01c22023   sw	t3, 0(tp)
015438: 00b22023   sw	a1, 0(tp)
01543c: 01f22023   sw	t6, 0(tp)
015440: 01e22023   sw	t5, 0(tp)
015444: 00722023   sw	t2, 0(tp)
015448: 01122023   sw	a7, 0(tp)
01544c: 01222023   sw	s2, 0(tp)
015450: 00622023   sw	t1, 0(tp)
015454: 01322023   sw	s3, 0(tp)
015458: 0018889b   addiw	a7, a7, 1
01545c: 01167533   and	a0, a2, a7
015460: 0005051b   sext.w	a0, a0
015464: 02050a63   beqz	a0, 52
015468: 00813503   ld	a0, 8(sp)
01546c: 00a686b3   add	a3, a3, a0
015470: f25896e3   bne	a7, t0, -212
015474: 05813403   ld	s0, 88(sp)
015478: 05013483   ld	s1, 80(sp)
01547c: 04813903   ld	s2, 72(sp)
015480: 04013983   ld	s3, 64(sp)
015484: 03813a03   ld	s4, 56(sp)
015488: 03013a83   ld	s5, 48(sp)
01548c: 02813b03   ld	s6, 40(sp)
015490: 06010113   addi	sp, sp, 96
015494: 00008067   ret
015498: 01813683   ld	a3, 24(sp)
01549c: f05890e3   bne	a7, t0, -256
0154a0: fd5ff06f   j	-44
0154a4: 00000013   nop
0154a8: 00001737   lui	a4, 1
0154ac: ae41e783   lwu	a5, -1308(gp)
0154b0: a6070713   addi	a4, a4, -1440
0154b4: 00e50533   add	a0, a0, a4
0154b8: 00479793   slli	a5, a5, 4
0154bc: 00f50533   add	a0, a0, a5
0154c0: 00c52703   lw	a4, 12(a0)
0154c4: 00850693   addi	a3, a0, 8
0154c8: 0206d793   srli	a5, a3, 32
0154cc: 0107979b   slliw	a5, a5, 16
0154d0: 00b705bb   addw	a1, a4, a1
0154d4: 0107d79b   srliw	a5, a5, 16
0154d8: 03000737   lui	a4, 12288
0154dc: 00e7e7b3   or	a5, a5, a4
0154e0: 00b52623   sw	a1, 12(a0)
0154e4: c002b737   lui	a4, 786475
0154e8: 00e22023   sw	a4, 0(tp)
0154ec: 00d22023   sw	a3, 0(tp)
0154f0: 00f22023   sw	a5, 0(tp)
0154f4: 00b22023   sw	a1, 0(tp)
0154f8: 00008067   ret
0154fc: 00000013   nop
015500: ac018813   addi	a6, gp, -1344
015504: 0015051b   addiw	a0, a0, 1
015508: 0046a303   lw	t1, 4(a3)
01550c: 00a80ca3   sb	a0, 25(a6)
015510: 0017c513   xori	a0, a5, 1
015514: 0125151b   slliw	a0, a0, 18
015518: 0137979b   slliw	a5, a5, 19
01551c: 01882883   lw	a7, 24(a6)
015520: 00f567b3   or	a5, a0, a5
015524: 000c0537   lui	a0, 192
015528: 00a7f7b3   and	a5, a5, a0
01552c: fff10537   lui	a0, 1048336
015530: f0050513   addi	a0, a0, -256
015534: 00a8f533   and	a0, a7, a0
015538: 00a7e7b3   or	a5, a5, a0
01553c: 0206d893   srli	a7, a3, 32
015540: 00f82c23   sw	a5, 24(a6)
015544: fff00793   li	a5, -1
015548: 00d82023   sw	a3, 0(a6)
01554c: 01181223   sh	a7, 4(a6)
015550: 00681323   sh	t1, 6(a6)
015554: 00b82423   sw	a1, 8(a6)
015558: 00c82623   sw	a2, 12(a6)
01555c: 00e82823   sw	a4, 16(a6)
015560: 02f82023   sw	a5, 32(a6)
015564: 00081a23   sh	zero, 20(a6)
015568: 02083423   sd	zero, 40(a6)
01556c: 02083823   sd	zero, 48(a6)
015570: 02083c23   sd	zero, 56(a6)
015574: 00008067   ret
015578: fff6061b   addiw	a2, a2, -1
01557c: 00c87333   and	t1, a6, a2
015580: 02069e13   slli	t3, a3, 32
015584: 02031693   slli	a3, t1, 32
015588: 020e5e13   srli	t3, t3, 32
01558c: 0206d693   srli	a3, a3, 32
015590: 03c686b3   mul	a3, a3, t3
015594: fa010113   addi	sp, sp, -96
015598: ac018313   addi	t1, gp, -1344
01559c: 03235f83   lhu	t6, 50(t1)
0155a0: 03035f03   lhu	t5, 48(t1)
0155a4: 03635283   lhu	t0, 54(t1)
0155a8: 01c13423   sd	t3, 8(sp)
0155ac: 03435e03   lhu	t3, 52(t1)
0155b0: 04813c23   sd	s0, 88(sp)
0155b4: 00010eb7   lui	t4, 16
0155b8: 01435403   lhu	s0, 20(t1)
0155bc: fffe8e93   addi	t4, t4, -1
0155c0: 05313023   sd	s3, 64(sp)
0155c4: 00b13c23   sd	a1, 24(sp)
0155c8: 00058993   mv	s3, a1
0155cc: 01dfffb3   and	t6, t6, t4
0155d0: 010e159b   slliw	a1, t3, 16
0155d4: 01df7eb3   and	t4, t5, t4
0155d8: 01029e1b   slliw	t3, t0, 16
0155dc: 00157513   andi	a0, a0, 1
0155e0: 04913823   sd	s1, 80(sp)
0155e4: 05213423   sd	s2, 72(sp)
0155e8: 02032483   lw	s1, 32(t1)
0155ec: 06012903   lw	s2, 96(sp)
0155f0: 03413c23   sd	s4, 56(sp)
0155f4: 03513823   sd	s5, 48(sp)
0155f8: 03613423   sd	s6, 40(sp)
0155fc: 0105151b   slliw	a0, a0, 16
015600: 00bfefb3   or	t6, t6, a1
015604: 01ceeeb3   or	t4, t4, t3
015608: 00040393   mv	t2, s0
01560c: 013686b3   add	a3, a3, s3
015610: 00a26e03   lwu	t3, 10(tp)
015614: 010e5e1b   srliw	t3, t3, 16
015618: 001e7e13   andi	t3, t3, 1
01561c: 020e0263   beqz	t3, 36
015620: 01e035b3   snez	a1, t5
015624: 00803e33   snez	t3, s0
015628: 005032b3   snez	t0, t0
01562c: 40b005b3   neg	a1, a1
015630: 005e0e3b   addw	t3, t3, t0
015634: 0035f593   andi	a1, a1, 3
015638: 002e0e1b   addiw	t3, t3, 2
01563c: 00be0e3b   addw	t3, t3, a1
015640: 00022ca3   sw	zero, 25(tp)
015644: 31422003   lw	zero, 788(tp)
015648: 32023583   ld	a1, 800(tp)
01564c: 0045f593   andi	a1, a1, 4
015650: fe059ce3   bnez	a1, -8
015654: 0c088063   beqz	a7, 192
015658: 01032583   lw	a1, 16(t1)
01565c: 000b8b13   mv	s6, s7
015660: c008bab7   lui	s5, 786571
015664: 00b13823   sd	a1, 16(sp)
015668: 000f8f9b   sext.w	t6, t6
01566c: 000e8e9b   sext.w	t4, t4
015670: 0003839b   sext.w	t2, t2
015674: 011808bb   addw	a7, a6, a7
015678: 00000313   li	t1, 0
01567c: 00400a13   li	s4, 4
015680: ffff09b7   lui	s3, 1048560
015684: 00d705b3   add	a1, a4, a3
015688: 06b239a3   sd	a1, 115(tp)
01568c: 07323583   ld	a1, 115(tp)
015690: 711b3f03   ld	t5, 1809(s6)
015694: 00b231a3   sd	a1, 3(tp)
015698: 014231a3   sd	s4, 3(tp)
01569c: 0206d593   srli	a1, a3, 32
0156a0: 0105959b   slliw	a1, a1, 16
0156a4: 0105d59b   srliw	a1, a1, 16
0156a8: 01357533   and	a0, a0, s3
0156ac: 00d782b3   add	t0, a5, a3
0156b0: 00068f1b   sext.w	t5, a3
0156b4: 00b56533   or	a0, a0, a1
0156b8: 00040a63   beqz	s0, 20
0156bc: 0002a303   lw	t1, 0(t0)
0156c0: 01013583   ld	a1, 16(sp)
0156c4: 0043131b   slliw	t1, t1, 4
0156c8: 00b3033b   addw	t1, t1, a1
0156cc: 03c22423   sw	t3, 40(tp)
0156d0: 01522023   sw	s5, 0(tp)
0156d4: 01e22023   sw	t5, 0(tp)
0156d8: 00a22023   sw	a0, 0(tp)
0156dc: 01f22023   sw	t6, 0(tp)
0156e0: 01d22023   sw	t4, 0(tp)
0156e4: 00722023   sw	t2, 0(tp)
0156e8: 01022023   sw	a6, 0(tp)
0156ec: 00922023   sw	s1, 0(tp)
0156f0: 00622023   sw	t1, 0(tp)
0156f4: 01222023   sw	s2, 0(tp)
0156f8: 0018081b   addiw	a6, a6, 1
0156fc: 010675b3   and	a1, a2, a6
015700: 0005859b   sext.w	a1, a1
015704: 02058a63   beqz	a1, 52
015708: 00813583   ld	a1, 8(sp)
01570c: 00b686b3   add	a3, a3, a1
015710: f7181ae3   bne	a6, a7, -140
015714: 05813403   ld	s0, 88(sp)
015718: 05013483   ld	s1, 80(sp)
01571c: 04813903   ld	s2, 72(sp)
015720: 04013983   ld	s3, 64(sp)
015724: 03813a03   ld	s4, 56(sp)
015728: 03013a83   ld	s5, 48(sp)
01572c: 02813b03   ld	s6, 40(sp)
015730: 06010113   addi	sp, sp, 96
015734: 00008067   ret
015738: 01813683   ld	a3, 24(sp)
01573c: f51814e3   bne	a6, a7, -184
015740: fd5ff06f   j	-44
015744: 00000013   nop
015748: 00053083   ld	ra, 0(a0)
01574c: 00853403   ld	s0, 8(a0)
015750: 01053483   ld	s1, 16(a0)
015754: 01853903   ld	s2, 24(a0)
015758: 02053983   ld	s3, 32(a0)
01575c: 02853a03   ld	s4, 40(a0)
015760: 03053a83   ld	s5, 48(a0)
015764: 03853b03   ld	s6, 56(a0)
015768: 04053b83   ld	s7, 64(a0)
01576c: 04853c03   ld	s8, 72(a0)
015770: 05053c83   ld	s9, 80(a0)
015774: 05853d03   ld	s10, 88(a0)
015778: 06053d83   ld	s11, 96(a0)
01577c: 06853103   ld	sp, 104(a0)
015780: 0015b513   seqz	a0, a1
015784: 00b50533   add	a0, a0, a1
015788: 00008067   ret
01578c: 0000006f   j	0
015790: 00153023   sd	ra, 0(a0)
015794: 00853423   sd	s0, 8(a0)
015798: 00953823   sd	s1, 16(a0)
01579c: 01253c23   sd	s2, 24(a0)
0157a0: 03353023   sd	s3, 32(a0)
0157a4: 03453423   sd	s4, 40(a0)
0157a8: 03553823   sd	s5, 48(a0)
0157ac: 03653c23   sd	s6, 56(a0)
0157b0: 05753023   sd	s7, 64(a0)
0157b4: 05853423   sd	s8, 72(a0)
0157b8: 05953823   sd	s9, 80(a0)
0157bc: 05a53c23   sd	s10, 88(a0)
0157c0: 07b53023   sd	s11, 96(a0)
0157c4: 06253423   sd	sp, 104(a0)
0157c8: 00000513   li	a0, 0
0157cc: 00008067   ret
0157d0: fe010113   addi	sp, sp, -32
0157d4: 00113c23   sd	ra, 24(sp)
0157d8: 00813823   sd	s0, 16(sp)
0157dc: 06a239a3   sd	a0, 115(tp)
0157e0: 07323783   ld	a5, 115(tp)
0157e4: 00200713   li	a4, 2
0157e8: 00e23d23   sd	a4, 26(tp)
0157ec: 080226a3   sw	zero, 141(tp)
0157f0: 0025d59b   srliw	a1, a1, 2
0157f4: 00b228a3   sw	a1, 17(tp)
0157f8: 00f23123   sd	a5, 2(tp)
0157fc: 00100793   li	a5, 1
015800: 02059593   slli	a1, a1, 32
015804: 02079793   slli	a5, a5, 32
015808: 0205d593   srli	a1, a1, 32
01580c: 00f5e5b3   or	a1, a1, a5
015810: 00b23123   sd	a1, 2(tp)
015814: c00247b7   lui	a5, 786468
015818: f007879b   addiw	a5, a5, -256
01581c: 00f22523   sw	a5, 10(tp)
015820: 00022023   sw	zero, 0(tp)
015824: 00022023   sw	zero, 0(tp)
015828: 00022023   sw	zero, 0(tp)
01582c: 03226783   lwu	a5, 50(tp)
015830: 00f12623   sw	a5, 12(sp)
015834: 04022423   sw	zero, 72(tp)
015838: 31422003   lw	zero, 788(tp)
01583c: b0018513   addi	a0, gp, -1280
015840: f51ff0ef   jal	-176
015844: 02051863   bnez	a0, 48
015848: 00100793   li	a5, 1
01584c: 70fbb5a3   sd	a5, 1803(s7)
015850: 1e022fa3   sw	zero, 511(tp)
015854: 00200413   li	s0, 2
015858: 01523783   ld	a5, 21(tp)
01585c: 00879c63   bne	a5, s0, 24
015860: 30226503   lwu	a0, 770(tp)
015864: 00723783   ld	a5, 7(tp)
015868: 000780e7   jalr	a5
01586c: 01523783   ld	a5, 21(tp)
015870: fe8788e3   beq	a5, s0, -16
015874: 00c12783   lw	a5, 12(sp)
015878: 04f22423   sw	a5, 72(tp)
01587c: 31422003   lw	zero, 788(tp)
015880: 01813083   ld	ra, 24(sp)
015884: 01013403   ld	s0, 16(sp)
015888: 02010113   addi	sp, sp, 32
01588c: 00008067   ret
015890: 06a239a3   sd	a0, 115(tp)
015894: 07323783   ld	a5, 115(tp)
015898: 711bb703   ld	a4, 1809(s7)
01589c: 00f231a3   sd	a5, 3(tp)
0158a0: 0025d59b   srliw	a1, a1, 2
0158a4: 00b231a3   sd	a1, 3(tp)
0158a8: 00008067   ret
0158ac: 00000013   nop
0158b0: fff60f1b   addiw	t5, a2, -1
0158b4: f6010113   addi	sp, sp, -160
0158b8: 01e7f633   and	a2, a5, t5
0158bc: 08913423   sd	s1, 136(sp)
0158c0: 02061613   slli	a2, a2, 32
0158c4: 00078493   mv	s1, a5
0158c8: 02069793   slli	a5, a3, 32
0158cc: 0207d793   srli	a5, a5, 32
0158d0: 02065613   srli	a2, a2, 32
0158d4: 02f60633   mul	a2, a2, a5
0158d8: ac018313   addi	t1, gp, -1344
0158dc: 04f13423   sd	a5, 72(sp)
0158e0: 02032783   lw	a5, 32(t1)
0158e4: 03635e83   lhu	t4, 54(t1)
0158e8: 03235e03   lhu	t3, 50(t1)
0158ec: 03035683   lhu	a3, 48(t1)
0158f0: 00f13423   sd	a5, 8(sp)
0158f4: 20056513   ori	a0, a0, 512
0158f8: 0007079b   sext.w	a5, a4
0158fc: 09213023   sd	s2, 128(sp)
015900: 20157513   andi	a0, a0, 513
015904: 010e991b   slliw	s2, t4, 16
015908: 00f13823   sd	a5, 16(sp)
01590c: 000f079b   sext.w	a5, t5
015910: 07513423   sd	s5, 104(sp)
015914: 07613023   sd	s6, 96(sp)
015918: 01051a9b   slliw	s5, a0, 16
01591c: 08113c23   sd	ra, 152(sp)
015920: 08813823   sd	s0, 144(sp)
015924: 07313c23   sd	s3, 120(sp)
015928: 07413823   sd	s4, 112(sp)
01592c: 04b13c23   sd	a1, 88(sp)
015930: 03113023   sd	a7, 32(sp)
015934: 000e0513   mv	a0, t3
015938: 0126e933   or	s2, a3, s2
01593c: 00f13c23   sd	a5, 24(sp)
015940: 00b60b33   add	s6, a2, a1
015944: 00a26403   lwu	s0, 10(tp)
015948: 0104541b   srliw	s0, s0, 16
01594c: 00147413   andi	s0, s0, 1
015950: 02040463   beqz	s0, 40
015954: 01c035b3   snez	a1, t3
015958: 40b005b3   neg	a1, a1
01595c: 00d036b3   snez	a3, a3
015960: 0035f593   andi	a1, a1, 3
015964: 40d006b3   neg	a3, a3
015968: 01d03eb3   snez	t4, t4
01596c: 0036f693   andi	a3, a3, 3
015970: 00be8ebb   addw	t4, t4, a1
015974: 00de843b   addw	s0, t4, a3
015978: 00022ca3   sw	zero, 25(tp)
01597c: 31422003   lw	zero, 788(tp)
015980: 32023683   ld	a3, 800(tp)
015984: 0046fa13   andi	s4, a3, 4
015988: fe0a1ce3   bnez	s4, -8
01598c: 002009b7   lui	s3, 512
015990: 013779b3   and	s3, a4, s3
015994: 02098463   beqz	s3, 40
015998: 00635583   lhu	a1, 6(t1)
01599c: 00816e03   lwu	t3, 8(sp)
0159a0: 00435683   lhu	a3, 4(t1)
0159a4: 00036303   lwu	t1, 0(t1)
0159a8: 03c585b3   mul	a1, a1, t3
0159ac: 02069693   slli	a3, a3, 32
0159b0: 0066e6b3   or	a3, a3, t1
0159b4: 00b686b3   add	a3, a3, a1
0159b8: 07468a13   addi	s4, a3, 116
0159bc: 0c080a63   beqz	a6, 212
0159c0: 0009079b   sext.w	a5, s2
0159c4: 04f13023   sd	a5, 64(sp)
0159c8: 0005079b   sext.w	a5, a0
0159cc: 02f13c23   sd	a5, 56(sp)
0159d0: c008b7b7   lui	a5, 786571
0159d4: 02f13823   sd	a5, 48(sp)
0159d8: 010487bb   addw	a5, s1, a6
0159dc: 02f13423   sd	a5, 40(sp)
0159e0: 03071793   slli	a5, a4, 48
0159e4: 00e7559b   srliw	a1, a4, 14
0159e8: 0307d793   srli	a5, a5, 48
0159ec: 00c5f913   andi	s2, a1, 12
0159f0: 04f13823   sd	a5, 80(sp)
0159f4: 00099663   bnez	s3, 12
0159f8: 05013783   ld	a5, 80(sp)
0159fc: 01678a33   add	s4, a5, s6
015a00: 00090593   mv	a1, s2
015a04: ffca7513   andi	a0, s4, -4
015a08: e89ff0ef   jal	-376
015a0c: 020b5713   srli	a4, s6, 32
015a10: ffff07b7   lui	a5, 1048560
015a14: 0107171b   slliw	a4, a4, 16
015a18: 0107571b   srliw	a4, a4, 16
015a1c: 00faf8b3   and	a7, s5, a5
015a20: 00e8eab3   or	s5, a7, a4
015a24: 02822423   sw	s0, 40(tp)
015a28: 03013783   ld	a5, 48(sp)
015a2c: 00f22023   sw	a5, 0(tp)
015a30: 01622023   sw	s6, 0(tp)
015a34: 01522023   sw	s5, 0(tp)
015a38: 03813783   ld	a5, 56(sp)
015a3c: 00f22023   sw	a5, 0(tp)
015a40: 04013783   ld	a5, 64(sp)
015a44: 00f22023   sw	a5, 0(tp)
015a48: 01013783   ld	a5, 16(sp)
015a4c: 00f22023   sw	a5, 0(tp)
015a50: 00922023   sw	s1, 0(tp)
015a54: 00813783   ld	a5, 8(sp)
015a58: 00f22023   sw	a5, 0(tp)
015a5c: 00022023   sw	zero, 0(tp)
015a60: 02013783   ld	a5, 32(sp)
015a64: 00f22023   sw	a5, 0(tp)
015a68: 01813703   ld	a4, 24(sp)
015a6c: 0014879b   addiw	a5, s1, 1
015a70: 0007849b   sext.w	s1, a5
015a74: 00f77733   and	a4, a4, a5
015a78: 0007071b   sext.w	a4, a4
015a7c: 02070e63   beqz	a4, 60
015a80: 04813783   ld	a5, 72(sp)
015a84: 00fb0b33   add	s6, s6, a5
015a88: 02813783   ld	a5, 40(sp)
015a8c: f69794e3   bne	a5, s1, -152
015a90: 09813083   ld	ra, 152(sp)
015a94: 09013403   ld	s0, 144(sp)
015a98: 08813483   ld	s1, 136(sp)
015a9c: 08013903   ld	s2, 128(sp)
015aa0: 07813983   ld	s3, 120(sp)
015aa4: 07013a03   ld	s4, 112(sp)
015aa8: 06813a83   ld	s5, 104(sp)
015aac: 06013b03   ld	s6, 96(sp)
015ab0: 0a010113   addi	sp, sp, 160
015ab4: 00008067   ret
015ab8: 05813b03   ld	s6, 88(sp)
015abc: fcdff06f   j	-52
015ac0: 711bb803   ld	a6, 1809(s7)
015ac4: f1010113   addi	sp, sp, -240
015ac8: 0e813023   sd	s0, 224(sp)
015acc: 0c913c23   sd	s1, 216(sp)
015ad0: 0d413023   sd	s4, 192(sp)
015ad4: 0e113423   sd	ra, 232(sp)
015ad8: 0d213823   sd	s2, 208(sp)
015adc: 0d313423   sd	s3, 200(sp)
015ae0: 0b513c23   sd	s5, 184(sp)
015ae4: 0b613823   sd	s6, 176(sp)
015ae8: 06d13c23   sd	a3, 120(sp)
015aec: 0ae13023   sd	a4, 160(sp)
015af0: 04f13423   sd	a5, 72(sp)
015af4: 00050413   mv	s0, a0
015af8: 00058a13   mv	s4, a1
015afc: 00060493   mv	s1, a2
015b00: 66081663   bnez	a6, 1644
015b04: 014a2603   lw	a2, 20(s4)
015b08: 010a2583   lw	a1, 16(s4)
015b0c: 004a2503   lw	a0, 4(s4)
015b10: 00000793   li	a5, 0
015b14: 00048713   mv	a4, s1
015b18: 00040693   mv	a3, s0
015b1c: 9e5ff0ef   jal	-1564
015b20: 000017b7   lui	a5, 1
015b24: 00fa07b3   add	a5, s4, a5
015b28: a407b703   ld	a4, -1472(a5)
015b2c: a487a783   lw	a5, -1464(a5)
015b30: ac018993   addi	s3, gp, -1344
015b34: 06e13423   sd	a4, 104(sp)
015b38: 04f13823   sd	a5, 80(sp)
015b3c: 000017b7   lui	a5, 1
015b40: a5878713   addi	a4, a5, -1448
015b44: 00300793   li	a5, 3
015b48: 02179793   slli	a5, a5, 33
015b4c: 00ea0733   add	a4, s4, a4
015b50: 00178793   addi	a5, a5, 1
015b54: 0ae13423   sd	a4, 168(sp)
015b58: 00f13c23   sd	a5, 24(sp)
015b5c: 711bb783   ld	a5, 1809(s7)
015b60: 0289a403   lw	s0, 40(s3)
015b64: 02c9a483   lw	s1, 44(s3)
015b68: 38079a63   bnez	a5, 916
015b6c: 54940863   beq	s0, s1, 1360
015b70: 05013783   ld	a5, 80(sp)
015b74: fff7879b   addiw	a5, a5, -1
015b78: 00f477b3   and	a5, s0, a5
015b7c: 02079713   slli	a4, a5, 32
015b80: 01e75793   srli	a5, a4, 30
015b84: 06813703   ld	a4, 104(sp)
015b88: 00f706b3   add	a3, a4, a5
015b8c: 00000713   li	a4, 0
015b90: 05013783   ld	a5, 80(sp)
015b94: 0087f5b3   and	a1, a5, s0
015b98: 0005859b   sext.w	a1, a1
015b9c: 0015b593   seqz	a1, a1
015ba0: 0006a783   lw	a5, 0(a3)
015ba4: 01f7d61b   srliw	a2, a5, 31
015ba8: 0007879b   sext.w	a5, a5
015bac: feb61ae3   bne	a2, a1, -12
015bb0: 0a813683   ld	a3, 168(sp)
015bb4: 0014061b   addiw	a2, s0, 1
015bb8: 06d239a3   sd	a3, 115(tp)
015bbc: 07323503   ld	a0, 115(tp)
015bc0: 02061693   slli	a3, a2, 32
015bc4: 02041413   slli	s0, s0, 32
015bc8: 02045413   srli	s0, s0, 32
015bcc: 0206d693   srli	a3, a3, 32
015bd0: 01813803   ld	a6, 24(sp)
015bd4: 408686b3   sub	a3, a3, s0
015bd8: 02f00593   li	a1, 47
015bdc: 30b22da3   sw	a1, 795(tp)
015be0: 30a23e23   sd	a0, 796(tp)
015be4: 30d23ea3   sd	a3, 797(tp)
015be8: 30023f23   sd	zero, 798(tp)
015bec: 00100593   li	a1, 1
015bf0: 37023823   sd	a6, 880(tp)
015bf4: 32b230a3   sd	a1, 801(tp)
015bf8: 32123583   ld	a1, 801(tp)
015bfc: fe059ee3   bnez	a1, -4
015c00: 32223683   ld	a3, 802(tp)
015c04: 0206d693   srli	a3, a3, 32
015c08: 02179793   slli	a5, a5, 33
015c0c: 02c9a423   sw	a2, 40(s3)
015c10: 02d9a623   sw	a3, 44(s3)
015c14: 0217d793   srli	a5, a5, 33
015c18: 00070463   beqz	a4, 8
015c1c: 02f72423   sw	a5, 40(a4)
015c20: 0209a703   lw	a4, 32(s3)
015c24: 02079413   slli	s0, a5, 32
015c28: 02045413   srli	s0, s0, 32
015c2c: 0af70263   beq	a4, a5, 164
015c30: 0069d683   lhu	a3, 6(s3)
015c34: 0049d703   lhu	a4, 4(s3)
015c38: 0009e603   lwu	a2, 0(s3)
015c3c: 028686b3   mul	a3, a3, s0
015c40: 02071713   slli	a4, a4, 32
015c44: 00c76733   or	a4, a4, a2
015c48: 04070713   addi	a4, a4, 64
015c4c: 02f9a023   sw	a5, 32(s3)
015c50: 01a9c503   lbu	a0, 26(s3)
015c54: fcc57513   andi	a0, a0, -52
015c58: 00d707b3   add	a5, a4, a3
015c5c: 0287b583   ld	a1, 40(a5)
015c60: 0207b683   ld	a3, 32(a5)
015c64: 0407b603   ld	a2, 64(a5)
015c68: 01c5d713   srli	a4, a1, 28
015c6c: 0047e303   lwu	t1, 4(a5)
015c70: 0036f813   andi	a6, a3, 3
015c74: 03077713   andi	a4, a4, 48
015c78: 01076733   or	a4, a4, a6
015c7c: 0106de13   srli	t3, a3, 16
015c80: 0206d893   srli	a7, a3, 32
015c84: 0105d813   srli	a6, a1, 16
015c88: 00a76733   or	a4, a4, a0
015c8c: 0306d693   srli	a3, a3, 48
015c90: 02065513   srli	a0, a2, 32
015c94: 02b99b23   sh	a1, 54(s3)
015c98: 00a9ae23   sw	a0, 28(s3)
015c9c: 0269a223   sw	t1, 36(s3)
015ca0: 03c99823   sh	t3, 48(s3)
015ca4: 03199923   sh	a7, 50(s3)
015ca8: 02d99a23   sh	a3, 52(s3)
015cac: 01099a23   sh	a6, 20(s3)
015cb0: 00e98d23   sb	a4, 26(s3)
015cb4: 0006061b   sext.w	a2, a2
015cb8: 0487b503   ld	a0, 72(a5)
015cbc: 0507b583   ld	a1, 80(a5)
015cc0: 00060863   beqz	a2, 16
015cc4: 711bb783   ld	a5, 1809(s7)
015cc8: 0005859b   sext.w	a1, a1
015ccc: b05ff0ef   jal	-1276
015cd0: 00c9e483   lwu	s1, 12(s3)
015cd4: 00541793   slli	a5, s0, 5
015cd8: 08000713   li	a4, 128
015cdc: 014484b3   add	s1, s1, s4
015ce0: 00f486b3   add	a3, s1, a5
015ce4: 0006bb03   ld	s6, 0(a3)
015ce8: 0086b903   ld	s2, 8(a3)
015cec: 0106b783   ld	a5, 16(a3)
015cf0: 04d13023   sd	a3, 64(sp)
015cf4: 0186b683   ld	a3, 24(a3)
015cf8: 0207d613   srli	a2, a5, 32
015cfc: 03061613   slli	a2, a2, 48
015d00: 0009051b   sext.w	a0, s2
015d04: 03065613   srli	a2, a2, 48
015d08: 03069693   slli	a3, a3, 48
015d0c: 02395593   srli	a1, s2, 35
015d10: 02a13c23   sd	a0, 56(sp)
015d14: 00078f1b   sext.w	t5, a5
015d18: 42095513   srai	a0, s2, 32
015d1c: 06c13023   sd	a2, 96(sp)
015d20: 0306d693   srli	a3, a3, 48
015d24: 0307d613   srli	a2, a5, 48
015d28: 0207d793   srli	a5, a5, 32
015d2c: 02b13823   sd	a1, 48(sp)
015d30: 02a13423   sd	a0, 40(sp)
015d34: 06c13823   sd	a2, 112(sp)
015d38: 08d13823   sd	a3, 144(sp)
015d3c: 08f13c23   sd	a5, 152(sp)
015d40: 00e5f663   bgeu	a1, a4, 12
015d44: 08000793   li	a5, 128
015d48: 02f13823   sd	a5, 48(sp)
015d4c: 0089e703   lwu	a4, 8(s3)
015d50: 02813683   ld	a3, 40(sp)
015d54: 00341793   slli	a5, s0, 3
015d58: 00ea0433   add	s0, s4, a4
015d5c: 00f407b3   add	a5, s0, a5
015d60: fff6831b   addiw	t1, a3, -1
015d64: 00068713   mv	a4, a3
015d68: 40d00e3b   negw	t3, a3
015d6c: 00078693   mv	a3, a5
015d70: 02f13023   sd	a5, 32(sp)
015d74: 02031913   slli	s2, t1, 32
015d78: 0007a783   lw	a5, 0(a5)
015d7c: 0046a883   lw	a7, 4(a3)
015d80: 02095913   srli	s2, s2, 32
015d84: 02071a93   slli	s5, a4, 32
015d88: 020e1413   slli	s0, t3, 32
015d8c: 09413023   sd	s4, 128(sp)
015d90: 00000493   li	s1, 0
015d94: 00090a13   mv	s4, s2
015d98: 020ada93   srli	s5, s5, 32
015d9c: 02045413   srli	s0, s0, 32
015da0: 000f0913   mv	s2, t5
015da4: 02091513   slli	a0, s2, 32
015da8: 02079293   slli	t0, a5, 32
015dac: 02055513   srli	a0, a0, 32
015db0: 0202d293   srli	t0, t0, 32
015db4: 0b288263   beq	a7, s2, 164
015db8: 00100393   li	t2, 1
015dbc: 02089813   slli	a6, a7, 32
015dc0: 02039393   slli	t2, t2, 32
015dc4: 00010fb7   lui	t6, 16
015dc8: 02085813   srli	a6, a6, 32
015dcc: fc038393   addi	t2, t2, -64
015dd0: ffff8f93   addi	t6, t6, -1
015dd4: 014576b3   and	a3, a0, s4
015dd8: 0066d693   srli	a3, a3, 6
015ddc: 01054733   xor	a4, a0, a6
015de0: 00369693   slli	a3, a3, 3
015de4: 01577733   and	a4, a4, s5
015de8: 016686b3   add	a3, a3, s6
015dec: 00080313   mv	t1, a6
015df0: 00070663   beqz	a4, 12
015df4: 01550333   add	t1, a0, s5
015df8: 00837333   and	t1, t1, s0
015dfc: 0006b603   ld	a2, 0(a3)
015e00: 015575b3   and	a1, a0, s5
015e04: 0015b593   seqz	a1, a1
015e08: 40b005b3   neg	a1, a1
015e0c: 03f57713   andi	a4, a0, 63
015e10: 00c5c633   xor	a2, a1, a2
015e14: 00e65633   srl	a2, a2, a4
015e18: 00e61633   sll	a2, a2, a4
015e1c: 00868693   addi	a3, a3, 8
015e20: 00757733   and	a4, a0, t2
015e24: 00061e63   bnez	a2, 28
015e28: 00677e63   bgeu	a4, t1, 28
015e2c: 0006b603   ld	a2, 0(a3)
015e30: 04070713   addi	a4, a4, 64
015e34: 00868693   addi	a3, a3, 8
015e38: fec588e3   beq	a1, a2, -16
015e3c: 00c5c633   xor	a2, a1, a2
015e40: 12676863   bltu	a4, t1, 304
015e44: 0003091b   sext.w	s2, t1
015e48: 00030513   mv	a0, t1
015e4c: f92894e3   bne	a7, s2, -120
015e50: 04013703   ld	a4, 64(sp)
015e54: 01272823   sw	s2, 16(a4)
015e58: 40f9083b   subw	a6, s2, a5
015e5c: 02013703   ld	a4, 32(sp)
015e60: 00080f93   mv	t6, a6
015e64: 06e239a3   sd	a4, 115(tp)
015e68: 07323683   ld	a3, 115(tp)
015e6c: 02f00713   li	a4, 47
015e70: 01813603   ld	a2, 24(sp)
015e74: 40550533   sub	a0, a0, t0
015e78: 30e22da3   sw	a4, 795(tp)
015e7c: 30d23e23   sd	a3, 796(tp)
015e80: 30a23ea3   sd	a0, 797(tp)
015e84: 30023f23   sd	zero, 798(tp)
015e88: 00100713   li	a4, 1
015e8c: 36c23823   sd	a2, 880(tp)
015e90: 32e230a3   sd	a4, 801(tp)
015e94: 32123703   ld	a4, 801(tp)
015e98: fe071ee3   bnez	a4, -4
015e9c: 32223283   ld	t0, 802(tp)
015ea0: 0189b703   ld	a4, 24(s3)
015ea4: 00100693   li	a3, 1
015ea8: 01075713   srli	a4, a4, 16
015eac: 00377713   andi	a4, a4, 3
015eb0: 1ad70e63   beq	a4, a3, 444
015eb4: 00200693   li	a3, 2
015eb8: 18d70063   beq	a4, a3, 384
015ebc: 10070c63   beqz	a4, 280
015ec0: 4202d893   srai	a7, t0, 32
015ec4: 009f84bb   addw	s1, t6, s1
015ec8: 15288c63   beq	a7, s2, 344
015ecc: 01f00793   li	a5, 31
015ed0: 0097e663   bltu	a5, s1, 12
015ed4: 00090793   mv	a5, s2
015ed8: ecdff06f   j	-308
015edc: 08013503   ld	a0, 128(sp)
015ee0: 00048593   mv	a1, s1
015ee4: 05113c23   sd	a7, 88(sp)
015ee8: dc0ff0ef   jal	-2624
015eec: 05813883   ld	a7, 88(sp)
015ef0: 00000493   li	s1, 0
015ef4: 00090793   mv	a5, s2
015ef8: eadff06f   j	-340
015efc: 00004537   lui	a0, 4
015f00: 01050513   addi	a0, a0, 16
015f04: adcff0ef   jal	-3364
015f08: c60502e3   beqz	a0, -924
015f0c: 000017b7   lui	a5, 1
015f10: 00fa07b3   add	a5, s4, a5
015f14: a587a603   lw	a2, -1448(a5)
015f18: a5c7a683   lw	a3, -1444(a5)
015f1c: 000a2783   lw	a5, 0(s4)
015f20: 0189c583   lbu	a1, 24(s3)
015f24: 00d52e23   sw	a3, 28(a0)
015f28: 02f52023   sw	a5, 32(a0)
015f2c: 05013783   ld	a5, 80(sp)
015f30: 00852623   sw	s0, 12(a0)
015f34: 00952823   sw	s1, 16(a0)
015f38: 00b52a23   sw	a1, 20(a0)
015f3c: 00c52c23   sw	a2, 24(a0)
015f40: 00450713   addi	a4, a0, 4
015f44: fff7879b   addiw	a5, a5, -1
015f48: 18940463   beq	s0, s1, 392
015f4c: 00f477b3   and	a5, s0, a5
015f50: 02079693   slli	a3, a5, 32
015f54: 01e6d793   srli	a5, a3, 30
015f58: 06813683   ld	a3, 104(sp)
015f5c: 00f686b3   add	a3, a3, a5
015f60: 0206d793   srli	a5, a3, 32
015f64: 02d72023   sw	a3, 32(a4)
015f68: 02f72223   sw	a5, 36(a4)
015f6c: c25ff06f   j	-988
015f70: 01f676b3   and	a3, a2, t6
015f74: 00069a63   bnez	a3, 20
015f78: 01065613   srli	a2, a2, 16
015f7c: 01f676b3   and	a3, a2, t6
015f80: 01070713   addi	a4, a4, 16
015f84: fe068ae3   beqz	a3, -12
015f88: 00f67693   andi	a3, a2, 15
015f8c: 00069a63   bnez	a3, 20
015f90: 00465613   srli	a2, a2, 4
015f94: 00f67693   andi	a3, a2, 15
015f98: 00470713   addi	a4, a4, 4
015f9c: fe068ae3   beqz	a3, -12
015fa0: 00167693   andi	a3, a2, 1
015fa4: 00069a63   bnez	a3, 20
015fa8: 00165613   srli	a2, a2, 1
015fac: 00167693   andi	a3, a2, 1
015fb0: 00170713   addi	a4, a4, 1
015fb4: fe068ae3   beqz	a3, -12
015fb8: 00030513   mv	a0, t1
015fbc: 00677463   bgeu	a4, t1, 8
015fc0: 00070513   mv	a0, a4
015fc4: 0e551863   bne	a0, t0, 240
015fc8: 00078913   mv	s2, a5
015fcc: e12894e3   bne	a7, s2, -504
015fd0: e81ff06f   j	-384
015fd4: 07813703   ld	a4, 120(sp)
015fd8: 03013583   ld	a1, 48(sp)
015fdc: 00080893   mv	a7, a6
015fe0: 09012623   sw	a6, 140(sp)
015fe4: 00e13023   sd	a4, 0(sp)
015fe8: 00078813   mv	a6, a5
015fec: 06013703   ld	a4, 96(sp)
015ff0: 07013783   ld	a5, 112(sp)
015ff4: 03813683   ld	a3, 56(sp)
015ff8: 02813603   ld	a2, 40(sp)
015ffc: 04813503   ld	a0, 72(sp)
016000: 016585b3   add	a1, a1, s6
016004: 04513c23   sd	t0, 88(sp)
016008: d70ff0ef   jal	-2704
01600c: 05813283   ld	t0, 88(sp)
016010: 08c12f83   lw	t6, 140(sp)
016014: 4202d893   srai	a7, t0, 32
016018: 009f84bb   addw	s1, t6, s1
01601c: eb2898e3   bne	a7, s2, -336
016020: 08013a03   ld	s4, 128(sp)
016024: b2048ce3   beqz	s1, -1224
016028: 00048593   mv	a1, s1
01602c: 000a0513   mv	a0, s4
016030: c78ff0ef   jal	-2952
016034: b29ff06f   j	-1240
016038: 03013583   ld	a1, 48(sp)
01603c: 07813883   ld	a7, 120(sp)
016040: 09812703   lw	a4, 152(sp)
016044: 03813683   ld	a3, 56(sp)
016048: 02813603   ld	a2, 40(sp)
01604c: 04813503   ld	a0, 72(sp)
016050: 016585b3   add	a1, a1, s6
016054: 04513c23   sd	t0, 88(sp)
016058: 09012623   sw	a6, 140(sp)
01605c: 855ff0ef   jal	-1964
016060: 08c12f83   lw	t6, 140(sp)
016064: 05813283   ld	t0, 88(sp)
016068: e59ff06f   j	-424
01606c: 0a013703   ld	a4, 160(sp)
016070: 03013583   ld	a1, 48(sp)
016074: 09012623   sw	a6, 140(sp)
016078: 00e13423   sd	a4, 8(sp)
01607c: 01013023   sd	a6, 0(sp)
016080: 00078893   mv	a7, a5
016084: 09013803   ld	a6, 144(sp)
016088: 07013783   ld	a5, 112(sp)
01608c: 06013703   ld	a4, 96(sp)
016090: 03813683   ld	a3, 56(sp)
016094: 02813603   ld	a2, 40(sp)
016098: 04813503   ld	a0, 72(sp)
01609c: 016585b3   add	a1, a1, s6
0160a0: 04513c23   sd	t0, 88(sp)
0160a4: 9e4ff0ef   jal	-3612
0160a8: 05813283   ld	t0, 88(sp)
0160ac: 08c12f83   lw	t6, 140(sp)
0160b0: e11ff06f   j	-496
0160b4: 0005091b   sext.w	s2, a0
0160b8: d99ff06f   j	-616
0160bc: 000017b7   lui	a5, 1
0160c0: 00fa07b3   add	a5, s4, a5
0160c4: a587a603   lw	a2, -1448(a5)
0160c8: a5c7a683   lw	a3, -1444(a5)
0160cc: 00000713   li	a4, 0
0160d0: 000017b7   lui	a5, 1
0160d4: 02200513   li	a0, 34
0160d8: 00fa05b3   add	a1, s4, a5
0160dc: 00070663   beqz	a4, 12
0160e0: 00c72a23   sw	a2, 20(a4)
0160e4: 00d72c23   sw	a3, 24(a4)
0160e8: 0cd61263   bne	a2, a3, 196
0160ec: 0189c783   lbu	a5, 24(s3)
0160f0: 02a78463   beq	a5, a0, 40
0160f4: 000a2783   lw	a5, 0(s4)
0160f8: 00f98c23   sb	a5, 24(s3)
0160fc: 0ff7f793   zext.b	a5, a5
016100: 00070463   beqz	a4, 8
016104: 00f72e23   sw	a5, 28(a4)
016108: 0220000f   fence	r, r
01610c: a585a603   lw	a2, -1448(a1)
016110: a5c5a683   lw	a3, -1444(a1)
016114: fc9ff06f   j	-56
016118: 00070a63   beqz	a4, 20
01611c: fff00793   li	a5, -1
016120: 02f72023   sw	a5, 32(a4)
016124: 02f72223   sw	a5, 36(a4)
016128: 02f72423   sw	a5, 40(a4)
01612c: 000a2023   sw	zero, 0(s4)
016130: 01a9c783   lbu	a5, 26(s3)
016134: 711bb703   ld	a4, 1809(s7)
016138: ff37f793   andi	a5, a5, -13
01613c: 00f98d23   sb	a5, 26(s3)
016140: 02071e63   bnez	a4, 60
016144: 0e813083   ld	ra, 232(sp)
016148: 0e013403   ld	s0, 224(sp)
01614c: 0d813483   ld	s1, 216(sp)
016150: 0d013903   ld	s2, 208(sp)
016154: 0c813983   ld	s3, 200(sp)
016158: 0c013a03   ld	s4, 192(sp)
01615c: 0b813a83   ld	s5, 184(sp)
016160: 0b013b03   ld	s6, 176(sp)
016164: 0f010113   addi	sp, sp, 240
016168: 00008067   ret
01616c: 00004537   lui	a0, 4
016170: 00450513   addi	a0, a0, 4
016174: 86cff0ef   jal	-3988
016178: 98dff06f   j	-1652
01617c: 0e013403   ld	s0, 224(sp)
016180: 0e813083   ld	ra, 232(sp)
016184: 0d813483   ld	s1, 216(sp)
016188: 0d013903   ld	s2, 208(sp)
01618c: 0c813983   ld	s3, 200(sp)
016190: 0c013a03   ld	s4, 192(sp)
016194: 0b813a83   ld	s5, 184(sp)
016198: 0b013b03   ld	s6, 176(sp)
01619c: 00004537   lui	a0, 4
0161a0: 00850513   addi	a0, a0, 8
0161a4: 0f010113   addi	sp, sp, 240
0161a8: 838ff06f   j	-4040
0161ac: 05013783   ld	a5, 80(sp)
0161b0: 00060413   mv	s0, a2
0161b4: fff7879b   addiw	a5, a5, -1
0161b8: 00f676b3   and	a3, a2, a5
0161bc: 02069593   slli	a1, a3, 32
0161c0: 01e5d693   srli	a3, a1, 30
0161c4: 06813583   ld	a1, 104(sp)
0161c8: 00d586b3   add	a3, a1, a3
0161cc: 9c0702e3   beqz	a4, -1596
0161d0: d7dff06f   j	-644
0161d4: 00000013   nop
0161d8: f5010113   addi	sp, sp, -176
0161dc: 0b814303   lbu	t1, 184(sp)
0161e0: 711bbe03   ld	t3, 1809(s7)
0161e4: 0a813023   sd	s0, 160(sp)
0161e8: 08913c23   sd	s1, 152(sp)
0161ec: 09213823   sd	s2, 144(sp)
0161f0: 09313423   sd	s3, 136(sp)
0161f4: 09413023   sd	s4, 128(sp)
0161f8: 07513c23   sd	s5, 120(sp)
0161fc: 0a113423   sd	ra, 168(sp)
016200: 07613823   sd	s6, 112(sp)
016204: 04613c23   sd	t1, 88(sp)
016208: 00a13c23   sd	a0, 24(sp)
01620c: 04d13023   sd	a3, 64(sp)
016210: 04e13423   sd	a4, 72(sp)
016214: 0b012a83   lw	s5, 176(sp)
016218: 0c012a03   lw	s4, 192(sp)
01621c: 00058493   mv	s1, a1
016220: 00060413   mv	s0, a2
016224: 00078f13   mv	t5, a5
016228: 00080993   mv	s3, a6
01622c: 00088913   mv	s2, a7
016230: 300e1863   bnez	t3, 784
016234: 0144a603   lw	a2, 20(s1)
016238: 0104a583   lw	a1, 16(s1)
01623c: 0044a503   lw	a0, 4(s1)
016240: 01813683   ld	a3, 24(sp)
016244: 00100793   li	a5, 1
016248: 00040713   mv	a4, s0
01624c: 03e13023   sd	t5, 32(sp)
016250: ab0ff0ef   jal	-3408
016254: 00100793   li	a5, 1
016258: 32fa0e63   beq	s4, a5, 828
01625c: 00200793   li	a5, 2
016260: 2efa0c63   beq	s4, a5, 760
016264: 02013f03   ld	t5, 32(sp)
016268: 2c0a0463   beqz	s4, 712
01626c: 00000a93   li	s5, 0
016270: 00000913   li	s2, 0
016274: 00000993   li	s3, 0
016278: 00000f13   li	t5, 0
01627c: 00000713   li	a4, 0
016280: 00000b13   li	s6, 0
016284: 00100793   li	a5, 1
016288: fff7879b   addiw	a5, a5, -1
01628c: 02f13023   sd	a5, 32(sp)
016290: 02071793   slli	a5, a4, 32
016294: 0207d793   srli	a5, a5, 32
016298: 06f13023   sd	a5, 96(sp)
01629c: fffd07b7   lui	a5, 1048528
0162a0: fff78793   addi	a5, a5, -1
0162a4: 02f13423   sd	a5, 40(sp)
0162a8: ffd007b7   lui	a5, 1047808
0162ac: fff78793   addi	a5, a5, -1
0162b0: 03413c23   sd	s4, 56(sp)
0162b4: ac018413   addi	s0, gp, -1344
0162b8: 00048a13   mv	s4, s1
0162bc: 02f13823   sd	a5, 48(sp)
0162c0: 000a8493   mv	s1, s5
0162c4: 000b0a93   mv	s5, s6
0162c8: 03813783   ld	a5, 56(sp)
0162cc: 00078863   beqz	a5, 16
0162d0: 01813683   ld	a3, 24(sp)
0162d4: 0086a783   lw	a5, 8(a3)
0162d8: 20079263   bnez	a5, 516
0162dc: 1a048e63   beqz	s1, 444
0162e0: 01813703   ld	a4, 24(sp)
0162e4: 00072783   lw	a5, 0(a4)
0162e8: 40ff07bb   subw	a5, t5, a5
0162ec: 1a07c663   bltz	a5, 428
0162f0: 00c72703   lw	a4, 12(a4)
0162f4: 1ae7d263   bge	a5, a4, 420
0162f8: 05813b03   ld	s6, 88(sp)
0162fc: 07513423   sd	s5, 104(sp)
016300: 0100006f   j	16
016304: 2e068663   beqz	a3, 748
016308: fffa8f1b   addiw	t5, s5, -1
01630c: 140a8663   beqz	s5, 332
016310: 02042783   lw	a5, 32(s0)
016314: 020f1613   slli	a2, t5, 32
016318: 02065613   srli	a2, a2, 32
01631c: 2fe78e63   beq	a5, t5, 764
016320: 00645703   lhu	a4, 6(s0)
016324: 00445783   lhu	a5, 4(s0)
016328: 00046683   lwu	a3, 0(s0)
01632c: 02c70733   mul	a4, a4, a2
016330: 02079793   slli	a5, a5, 32
016334: 00d7e7b3   or	a5, a5, a3
016338: 04078793   addi	a5, a5, 64
01633c: 02813683   ld	a3, 40(sp)
016340: 01842303   lw	t1, 24(s0)
016344: 03e42023   sw	t5, 32(s0)
016348: 00d37333   and	t1, t1, a3
01634c: 00e787b3   add	a5, a5, a4
016350: 0207b703   ld	a4, 32(a5)
016354: 0287b883   ld	a7, 40(a5)
016358: 0407b503   ld	a0, 64(a5)
01635c: 00377693   andi	a3, a4, 3
016360: 01069693   slli	a3, a3, 16
016364: 0066e6b3   or	a3, a3, t1
016368: 03013303   ld	t1, 48(sp)
01636c: 0208d593   srli	a1, a7, 32
016370: 0047ee03   lwu	t3, 4(a5)
016374: 0035f593   andi	a1, a1, 3
016378: 0145959b   slliw	a1, a1, 20
01637c: 0066f6b3   and	a3, a3, t1
016380: 00b6e6b3   or	a3, a3, a1
016384: 0108de93   srli	t4, a7, 16
016388: 42055a93   srai	s5, a0, 32
01638c: 01075293   srli	t0, a4, 16
016390: 02075f93   srli	t6, a4, 32
016394: 03075f13   srli	t5, a4, 48
016398: 00d42c23   sw	a3, 24(s0)
01639c: 03141b23   sh	a7, 54(s0)
0163a0: 03c42223   sw	t3, 36(s0)
0163a4: 0005089b   sext.w	a7, a0
0163a8: 02541823   sh	t0, 48(s0)
0163ac: 03f41923   sh	t6, 50(s0)
0163b0: 03e41a23   sh	t5, 52(s0)
0163b4: 01d41a23   sh	t4, 20(s0)
0163b8: 01542e23   sw	s5, 28(s0)
0163bc: 0487b503   ld	a0, 72(a5)
0163c0: 0507b583   ld	a1, 80(a5)
0163c4: 00377693   andi	a3, a4, 3
0163c8: 02088463   beqz	a7, 40
0163cc: 711bb783   ld	a5, 1809(s7)
0163d0: 0005859b   sext.w	a1, a1
0163d4: 04c13823   sd	a2, 80(sp)
0163d8: bf8ff0ef   jal	-3080
0163dc: 01843703   ld	a4, 24(s0)
0163e0: 01c42a83   lw	s5, 28(s0)
0163e4: 05013603   ld	a2, 80(sp)
0163e8: 01075713   srli	a4, a4, 16
0163ec: 00377693   andi	a3, a4, 3
0163f0: 00c46783   lwu	a5, 12(s0)
0163f4: 00561613   slli	a2, a2, 5
0163f8: 00100593   li	a1, 1
0163fc: 00fa07b3   add	a5, s4, a5
016400: 00c787b3   add	a5, a5, a2
016404: 0107b603   ld	a2, 16(a5)
016408: 0187b803   ld	a6, 24(a5)
01640c: 02065713   srli	a4, a2, 32
016410: 03071713   slli	a4, a4, 48
016414: 03065793   srli	a5, a2, 48
016418: 03075713   srli	a4, a4, 48
01641c: 42065613   srai	a2, a2, 32
016420: 1ab68063   beq	a3, a1, 416
016424: 00200593   li	a1, 2
016428: ecb69ee3   bne	a3, a1, -292
01642c: 04013883   ld	a7, 64(sp)
016430: 00060713   mv	a4, a2
016434: 00048813   mv	a6, s1
016438: 00000793   li	a5, 0
01643c: 00090693   mv	a3, s2
016440: 00000613   li	a2, 0
016444: 00098593   mv	a1, s3
016448: 000b0513   mv	a0, s6
01644c: c64ff0ef   jal	-2972
016450: fffa8f1b   addiw	t5, s5, -1
016454: ea0a9ee3   bnez	s5, -324
016458: 02013783   ld	a5, 32(sp)
01645c: 06813a83   ld	s5, 104(sp)
016460: 04078063   beqz	a5, 64
016464: 06013783   ld	a5, 96(sp)
016468: 00fa8ab3   add	s5, s5, a5
01646c: 00cae983   lwu	s3, 12(s5)
016470: 008ae783   lwu	a5, 8(s5)
016474: 000aaf03   lw	t5, 0(s5)
016478: 02099993   slli	s3, s3, 32
01647c: 00f9e9b3   or	s3, s3, a5
016480: 02013783   ld	a5, 32(sp)
016484: 004aa483   lw	s1, 4(s5)
016488: 010aa903   lw	s2, 16(s5)
01648c: fff7879b   addiw	a5, a5, -1
016490: 02f13023   sd	a5, 32(sp)
016494: e35ff06f   j	-460
016498: 02013783   ld	a5, 32(sp)
01649c: fc0794e3   bnez	a5, -56
0164a0: 01a44783   lbu	a5, 26(s0)
0164a4: 711bb703   ld	a4, 1809(s7)
0164a8: ff37f793   andi	a5, a5, -13
0164ac: 00f40d23   sb	a5, 26(s0)
0164b0: 04071863   bnez	a4, 80
0164b4: 0a813083   ld	ra, 168(sp)
0164b8: 0a013403   ld	s0, 160(sp)
0164bc: 09813483   ld	s1, 152(sp)
0164c0: 09013903   ld	s2, 144(sp)
0164c4: 08813983   ld	s3, 136(sp)
0164c8: 08013a03   ld	s4, 128(sp)
0164cc: 07813a83   ld	s5, 120(sp)
0164d0: 07013b03   ld	s6, 112(sp)
0164d4: 0b010113   addi	sp, sp, 176
0164d8: 00008067   ret
0164dc: 02079793   slli	a5, a5, 32
0164e0: 0207d793   srli	a5, a5, 32
0164e4: 020f1713   slli	a4, t5, 32
0164e8: 01e75f13   srli	t5, a4, 30
0164ec: 00f687b3   add	a5, a3, a5
0164f0: 01e787b3   add	a5, a5, t5
0164f4: 0007af03   lw	t5, 0(a5)
0164f8: 000f0f1b   sext.w	t5, t5
0164fc: de1ff06f   j	-544
016500: 0a013403   ld	s0, 160(sp)
016504: 0a813083   ld	ra, 168(sp)
016508: 09813483   ld	s1, 152(sp)
01650c: 09013903   ld	s2, 144(sp)
016510: 08813983   ld	s3, 136(sp)
016514: 08013a03   ld	s4, 128(sp)
016518: 07813a83   ld	s5, 120(sp)
01651c: 07013b03   ld	s6, 112(sp)
016520: 00004537   lui	a0, 4
016524: 00250513   addi	a0, a0, 2
016528: 0b010113   addi	sp, sp, 176
01652c: cb5fe06f   j	-4940
016530: 00000713   li	a4, 0
016534: 00000b13   li	s6, 0
016538: 00100793   li	a5, 1
01653c: d4dff06f   j	-692
016540: 00004537   lui	a0, 4
016544: 00150513   addi	a0, a0, 1
016548: 02f13023   sd	a5, 32(sp)
01654c: c95fe0ef   jal	-4972
016550: 02013f03   ld	t5, 32(sp)
016554: ce1ff06f   j	-800
016558: 00c9ee03   lwu	t3, 12(s3)
01655c: 0089e703   lwu	a4, 8(s3)
016560: 0009a783   lw	a5, 0(s3)
016564: 020e1e13   slli	t3, t3, 32
016568: 00ee6b33   or	s6, t3, a4
01656c: 00cb6683   lwu	a3, 12(s6)
016570: 008b6603   lwu	a2, 8(s6)
016574: 0109a703   lw	a4, 16(s3)
016578: 02069693   slli	a3, a3, 32
01657c: 000b2f03   lw	t5, 0(s6)
016580: 004b2a83   lw	s5, 4(s6)
016584: 010b2903   lw	s2, 16(s6)
016588: 00c6e9b3   or	s3, a3, a2
01658c: f20784e3   beqz	a5, -216
016590: cf9ff06f   j	-776
016594: 00c9e783   lwu	a5, 12(s3)
016598: 0089e703   lwu	a4, 8(s3)
01659c: 0009af03   lw	t5, 0(s3)
0165a0: 02079793   slli	a5, a5, 32
0165a4: 0049aa83   lw	s5, 4(s3)
0165a8: 0109a903   lw	s2, 16(s3)
0165ac: 00000b13   li	s6, 0
0165b0: 00e7e9b3   or	s3, a5, a4
0165b4: 00100793   li	a5, 1
0165b8: 00000713   li	a4, 0
0165bc: ccdff06f   j	-820
0165c0: 04813683   ld	a3, 72(sp)
0165c4: 03081813   slli	a6, a6, 48
0165c8: 00913023   sd	s1, 0(sp)
0165cc: 00d13423   sd	a3, 8(sp)
0165d0: 00000893   li	a7, 0
0165d4: 03085813   srli	a6, a6, 48
0165d8: 00090693   mv	a3, s2
0165dc: 00000613   li	a2, 0
0165e0: 00098593   mv	a1, s3
0165e4: 000b0513   mv	a0, s6
0165e8: ca1fe0ef   jal	-4960
0165ec: d1dff06f   j	-740
0165f0: 04013683   ld	a3, 64(sp)
0165f4: 00048893   mv	a7, s1
0165f8: 00000813   li	a6, 0
0165fc: 00d13023   sd	a3, 0(sp)
016600: 00000613   li	a2, 0
016604: 00090693   mv	a3, s2
016608: 00098593   mv	a1, s3
01660c: 000b0513   mv	a0, s6
016610: f69fe0ef   jal	-4248
016614: cf5ff06f   j	-780
016618: 01843703   ld	a4, 24(s0)
01661c: 01c42a83   lw	s5, 28(s0)
016620: 01075713   srli	a4, a4, 16
016624: 00377693   andi	a3, a4, 3
016628: dc9ff06f   j	-568
01662c: 00000013   nop
016630: 0085579b   srliw	a5, a0, 8
016634: 0ff7f793   zext.b	a5, a5
016638: 0105551b   srliw	a0, a0, 16
01663c: 0005869b   sext.w	a3, a1
016640: 04078863   beqz	a5, 80
016644: 00100713   li	a4, 1
016648: 00e79c63   bne	a5, a4, 24
01664c: ac018793   addi	a5, gp, -1344
016650: 03c7a703   lw	a4, 60(a5)
016654: 00d70863   beq	a4, a3, 16
016658: 02b7ae23   sw	a1, 60(a5)
01665c: 00008067   ret
016660: 00008067   ret
016664: 01523783   ld	a5, 21(tp)
016668: 0037f793   andi	a5, a5, 3
01666c: 0005051b   sext.w	a0, a0
016670: 00f207b3   add	a5, tp, a5
016674: 00a7aa23   sw	a0, 20(a5)
016678: 00050a63   beqz	a0, 20
01667c: 00000793   li	a5, 0
016680: 30226703   lwu	a4, 770(tp)
016684: 0017879b   addiw	a5, a5, 1
016688: fef51ce3   bne	a0, a5, -8
01668c: 00008067   ret
016690: ac018793   addi	a5, gp, -1344
016694: 0387a703   lw	a4, 56(a5)
016698: fcd706e3   beq	a4, a3, -52
01669c: 02b7ac23   sw	a1, 56(a5)
0166a0: 00008067   ret
0166a4: 00000013   nop
0166a8: 02251513   slli	a0, a0, 34
0166ac: 03255713   srli	a4, a0, 50
0166b0: 30226503   lwu	a0, 770(tp)
0166b4: 30226583   lwu	a1, 770(tp)
0166b8: 00200693   li	a3, 2
0166bc: 03f57893   andi	a7, a0, 63
0166c0: 02d89063   bne	a7, a3, 32
0166c4: fff7071b   addiw	a4, a4, -1
0166c8: 00e05a63   blez	a4, 20
0166cc: 00000793   li	a5, 0
0166d0: 30226683   lwu	a3, 770(tp)
0166d4: 0017879b   addiw	a5, a5, 1
0166d8: fee7cce3   blt	a5, a4, -8
0166dc: f55ff06f   j	-172
0166e0: 0005879b   sext.w	a5, a1
0166e4: fc057513   andi	a0, a0, -64
0166e8: 03079793   slli	a5, a5, 48
0166ec: 0307d793   srli	a5, a5, 48
0166f0: 02051513   slli	a0, a0, 32
0166f4: fd010113   addi	sp, sp, -48
0166f8: 02079793   slli	a5, a5, 32
0166fc: 02055513   srli	a0, a0, 32
016700: 02113423   sd	ra, 40(sp)
016704: 00f56533   or	a0, a0, a5
016708: 30223783   ld	a5, 770(tp)
01670c: 30223303   ld	t1, 770(tp)
016710: 02031313   slli	t1, t1, 32
016714: 00f36333   or	t1, t1, a5
016718: 01031313   slli	t1, t1, 16
01671c: 01035313   srli	t1, t1, 16
016720: 30226603   lwu	a2, 770(tp)
016724: 0006061b   sext.w	a2, a2
016728: 30226683   lwu	a3, 770(tp)
01672c: 0006869b   sext.w	a3, a3
016730: 30226703   lwu	a4, 770(tp)
016734: 02035803   lhu	a6, 32(t1)
016738: 01f34783   lbu	a5, 31(t1)
01673c: 01c32e83   lw	t4, 28(t1)
016740: 00881813   slli	a6, a6, 8
016744: 00f86833   or	a6, a6, a5
016748: 02235f83   lhu	t6, 34(t1)
01674c: 00285e13   srli	t3, a6, 2
016750: 028e9e93   slli	t4, t4, 40
016754: 020e1e13   slli	t3, t3, 32
016758: 4105d79b   sraiw	a5, a1, 16
01675c: 028edf13   srli	t5, t4, 40
016760: 01fe6eb3   or	t4, t3, t6
016764: ffff8e37   lui	t3, 1048568
016768: 0007071b   sext.w	a4, a4
01676c: 0017f793   andi	a5, a5, 1
016770: 01cb8e33   add	t3, s7, t3
016774: 000f8663   beqz	t6, 12
016778: 020edf93   srli	t6, t4, 32
01677c: 0e0f9863   bnez	t6, 240
016780: 00008837   lui	a6, 8
016784: 010e0833   add	a6, t3, a6
016788: 700836a3   sd	zero, 1805(a6)
01678c: 1e022fa3   sw	zero, 511(tp)
016790: 700837a3   sd	zero, 1807(a6)
016794: 1e022fa3   sw	zero, 511(tp)
016798: 700838a3   sd	zero, 1809(a6)
01679c: 1e022fa3   sw	zero, 511(tp)
0167a0: 00008837   lui	a6, 8
0167a4: 010e0e33   add	t3, t3, a6
0167a8: 711e3803   ld	a6, 1809(t3)
0167ac: 08081463   bnez	a6, 136
0167b0: 0a089263   bnez	a7, 164
0167b4: 30226e03   lwu	t3, 770(tp)
0167b8: 000e0e1b   sext.w	t3, t3
0167bc: 30223f03   ld	t5, 770(tp)
0167c0: 30223803   ld	a6, 770(tp)
0167c4: 30226883   lwu	a7, 770(tp)
0167c8: 0008889b   sext.w	a7, a7
0167cc: 30226e83   lwu	t4, 770(tp)
0167d0: 02081813   slli	a6, a6, 32
0167d4: 01e86833   or	a6, a6, t5
0167d8: 0115d59b   srliw	a1, a1, 17
0167dc: 0035f593   andi	a1, a1, 3
0167e0: 000e8e9b   sext.w	t4, t4
0167e4: 01081813   slli	a6, a6, 16
0167e8: 00b13823   sd	a1, 16(sp)
0167ec: 00f13423   sd	a5, 8(sp)
0167f0: 01d13023   sd	t4, 0(sp)
0167f4: 01085813   srli	a6, a6, 16
0167f8: 000e0793   mv	a5, t3
0167fc: 00030593   mv	a1, t1
016800: 9d9ff0ef   jal	-1576
016804: 711bb703   ld	a4, 1809(s7)
016808: 02070063   beqz	a4, 32
01680c: 70fbb703   ld	a4, 1807(s7)
016810: 04071863   bnez	a4, 80
016814: c001b7b7   lui	a5, 786459
016818: 00f22023   sw	a5, 0(tp)
01681c: 00022023   sw	zero, 0(tp)
016820: 040007b7   lui	a5, 16384
016824: 00f22023   sw	a5, 0(tp)
016828: 02813083   ld	ra, 40(sp)
01682c: 03010113   addi	sp, sp, 48
016830: 00008067   ret
016834: 02035813   srli	a6, t1, 32
016838: 04000e37   lui	t3, 16384
01683c: 01c86833   or	a6, a6, t3
016840: c001be37   lui	t3, 786459
016844: 01c22023   sw	t3, 0(tp)
016848: 00622023   sw	t1, 0(tp)
01684c: 01022023   sw	a6, 0(tp)
016850: f60882e3   beqz	a7, -156
016854: 00030593   mv	a1, t1
016858: a68ff0ef   jal	-3480
01685c: fa9ff06f   j	-88
016860: 70dbb783   ld	a5, 1805(s7)
016864: 00f73023   sd	a5, 0(a4)
016868: fadff06f   j	-84
01686c: 00185813   srli	a6, a6, 1
016870: 01e80833   add	a6, a6, t5
016874: 00681813   slli	a6, a6, 6
016878: 00680833   add	a6, a6, t1
01687c: 00083f83   ld	t6, 0(a6)
016880: 71fbb6a3   sd	t6, 1805(s7)
016884: 1e022fa3   sw	zero, 511(tp)
016888: 710bb7a3   sd	a6, 1807(s7)
01688c: 1e022fa3   sw	zero, 511(tp)
016890: 71dbb8a3   sd	t4, 1809(s7)
016894: 1e022fa3   sw	zero, 511(tp)
016898: f09ff06f   j	-248
0168a0: 4d8e8979   .word 0x4d8e8979
0168a4: cde0f179   .word 0xcde0f179
0168a8: 8d137498   .word 0x8d137498
0168ac: e7e739fe   .word 0xe7e739fe
0168b0: eb00a010   .word 0xeb00a010
0168b4: 575b563b   .word 0x575b563b
0168b8: 3fee25af   .word 0x3fee25af
0168bc: ab7ebd45   .word 0xab7ebd45
0168c0: 0226a2aa   .word 0x0226a2aa
0168c4: debdb005   .word 0xdebdb005
0168c8: 7a91b6b1   .word 0x7a91b6b1
0168cc: 7f2139b7   lui	s3, 520723
0168d0: 71d19a66   .word 0x71d19a66
0168d4: 2733853a   .word 0x2733853a
0168d8: 0e0103b1   .word 0x0e0103b1
0168dc: f309ee81   .word 0xf309ee81
0168e0: 6fec910b   .word 0x6fec910b
0168e4: 686a70e2   .word 0x686a70e2
0168e8: 71054f71   .word 0x71054f71
0168ec: fe4441a2   .word 0xfe4441a2
0168f0: a9530d7d   .word 0xa9530d7d
0168f4: 5ee4d6a7   .word 0x5ee4d6a7
0168f8: 1d9f8a4e   .word 0x1d9f8a4e
0168fc: 0e3559dd   .word 0x0e3559dd
016900: 9e59744a   .word 0x9e59744a
016904: e00580e0   .word 0xe00580e0
016908: 8c1f8482   .word 0x8c1f8482
01690c: 597f03ec   .word 0x597f03ec
016910: 01253da6   .word 0x01253da6
016914: 6a8a9a2e   .word 0x6a8a9a2e
016918: c6421fb4   .word 0xc6421fb4
01691c: c10fa174   .word 0xc10fa174
016920: bc532e2c   .word 0xbc532e2c
016924: cde53e0f   .word 0xcde53e0f
016928: b714d9cd   .word 0xb714d9cd
01692c: 62073e2a   .word 0x62073e2a
016930: e6441a01   .word 0xe6441a01
016934: f20a1967   .word 0xf20a1967
016938: 8bea9871   .word 0x8bea9871
01693c: f0575ee8   .word 0xf0575ee8
016940: 95b5935a   .word 0x95b5935a
016944: 91e506b6   .word 0x91e506b6
016948: b16a9a7c   .word 0xb16a9a7c
01694c: e41c0840   .word 0xe41c0840
016950: c0b2b59a   .word 0xc0b2b59a
016954: 2c7ddb2f   .word 0x2c7ddb2f
016958: fb9b71cf   fnmadd.d	ft3, fs6, fs9, ft11
01695c: 84ace26e   .word 0x84ace26e
016960: b37e6832   .word 0xb37e6832
016964: 1cbc0f9f   .word 0x1cbc0f9f
016968: e35e3d54   .word 0xe35e3d54
01696c: c9dbfb4e   .word 0xc9dbfb4e
016970: 5de427e7   .word 0x5de427e7
016974: 138dddab   .word 0x138dddab
016978: a07011d5   .word 0xa07011d5
01697c: f8e8d7b5   .word 0xf8e8d7b5
016980: 94a84d5b   .word 0x94a84d5b
016984: 92d06152   .word 0x92d06152
016988: 711d188b   .word 0x711d188b
01698c: 19c8bca5   .word 0x19c8bca5
016990: dc4016e3   bne	zero, tp, -564
016994: 81457644   .word 0x81457644
016998: a6c46594   .word 0xa6c46594
01699c: cb1adf0d   .word 0xcb1adf0d
