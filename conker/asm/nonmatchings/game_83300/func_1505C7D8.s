nonmatching func_1505C7D8, 0x84C

glabel func_1505C7D8
    /* 89C88 1505C7D8 27BDFE80 */  addiu      $sp, $sp, -0x180
    /* 89C8C 1505C7DC AFB1007C */  sw         $s1, 0x7C($sp)
    /* 89C90 1505C7E0 00808825 */  or         $s1, $a0, $zero
    /* 89C94 1505C7E4 AFBF009C */  sw         $ra, 0x9C($sp)
    /* 89C98 1505C7E8 AFBE0098 */  sw         $fp, 0x98($sp)
    /* 89C9C 1505C7EC AFB70094 */  sw         $s7, 0x94($sp)
    /* 89CA0 1505C7F0 AFB60090 */  sw         $s6, 0x90($sp)
    /* 89CA4 1505C7F4 AFB5008C */  sw         $s5, 0x8C($sp)
    /* 89CA8 1505C7F8 AFB40088 */  sw         $s4, 0x88($sp)
    /* 89CAC 1505C7FC AFB30084 */  sw         $s3, 0x84($sp)
    /* 89CB0 1505C800 AFB20080 */  sw         $s2, 0x80($sp)
    /* 89CB4 1505C804 AFB00078 */  sw         $s0, 0x78($sp)
    /* 89CB8 1505C808 F7BE0070 */  sdc1       $f30, 0x70($sp)
    /* 89CBC 1505C80C F7BC0068 */  sdc1       $f28, 0x68($sp)
    /* 89CC0 1505C810 F7BA0060 */  sdc1       $f26, 0x60($sp)
    /* 89CC4 1505C814 F7B80058 */  sdc1       $f24, 0x58($sp)
    /* 89CC8 1505C818 F7B60050 */  sdc1       $f22, 0x50($sp)
    /* 89CCC 1505C81C F7B40048 */  sdc1       $f20, 0x48($sp)
    /* 89CD0 1505C820 3C01437E */  lui        $at, (0x437E0000 >> 16)
    /* 89CD4 1505C824 44812000 */  mtc1       $at, $f4
    /* 89CD8 1505C828 C6200114 */  lwc1       $f0, 0x114($s1)
    /* 89CDC 1505C82C 30AE007F */  andi       $t6, $a1, 0x7F
    /* 89CE0 1505C830 44805000 */  mtc1       $zero, $f10
    /* 89CE4 1505C834 4604003C */  c.lt.s     $f0, $f4
    /* 89CE8 1505C838 25C50001 */  addiu      $a1, $t6, 0x1
    /* 89CEC 1505C83C 0000F025 */  or         $fp, $zero, $zero
    /* 89CF0 1505C840 3C01800D */  lui        $at, %hi(D_800D1550)
    /* 89CF4 1505C844 45000005 */  bc1f       .L1505C85C
    /* 89CF8 1505C848 3C0F800C */   lui       $t7, %hi(D_800C35EA)
    /* 89CFC 1505C84C C4261550 */  lwc1       $f6, %lo(D_800D1550)($at)
    /* 89D00 1505C850 46060201 */  sub.s      $f8, $f0, $f6
    /* 89D04 1505C854 E6280114 */  swc1       $f8, 0x114($s1)
    /* 89D08 1505C858 C6200114 */  lwc1       $f0, 0x114($s1)
  .L1505C85C:
    /* 89D0C 1505C85C 460A003C */  c.lt.s     $f0, $f10
    /* 89D10 1505C860 00001025 */  or         $v0, $zero, $zero
    /* 89D14 1505C864 45000003 */  bc1f       .L1505C874
    /* 89D18 1505C868 00000000 */   nop
    /* 89D1C 1505C86C 100001DB */  b          .L1505CFDC
    /* 89D20 1505C870 A22000D0 */   sb        $zero, 0xD0($s1)
  .L1505C874:
    /* 89D24 1505C874 91EF35EA */  lbu        $t7, %lo(D_800C35EA)($t7)
    /* 89D28 1505C878 24010001 */  addiu      $at, $zero, 0x1
    /* 89D2C 1505C87C 02202025 */  or         $a0, $s1, $zero
    /* 89D30 1505C880 55E10004 */  bnel       $t7, $at, .L1505C894
    /* 89D34 1505C884 923600D0 */   lbu       $s6, 0xD0($s1)
    /* 89D38 1505C888 100001D4 */  b          .L1505CFDC
    /* 89D3C 1505C88C 00001025 */   or        $v0, $zero, $zero
    /* 89D40 1505C890 923600D0 */  lbu        $s6, 0xD0($s1)
  .L1505C894:
    /* 89D44 1505C894 AFA50184 */  sw         $a1, 0x184($sp)
    /* 89D48 1505C898 0D417069 */  jal        func_1505C1A4
    /* 89D4C 1505C89C 26D6FFFF */   addiu     $s6, $s6, -0x1
    /* 89D50 1505C8A0 00161880 */  sll        $v1, $s6, 2
    /* 89D54 1505C8A4 00761821 */  addu       $v1, $v1, $s6
    /* 89D58 1505C8A8 000318C0 */  sll        $v1, $v1, 3
    /* 89D5C 1505C8AC 0043C021 */  addu       $t8, $v0, $v1
    /* 89D60 1505C8B0 97190024 */  lhu        $t9, 0x24($t8)
    /* 89D64 1505C8B4 0040B825 */  or         $s7, $v0, $zero
    /* 89D68 1505C8B8 02E39021 */  addu       $s2, $s7, $v1
    /* 89D6C 1505C8BC 33280080 */  andi       $t0, $t9, 0x80
    /* 89D70 1505C8C0 51000006 */  beql       $t0, $zero, .L1505C8DC
    /* 89D74 1505C8C4 9249000A */   lbu       $t1, 0xA($s2)
    /* 89D78 1505C8C8 C6240018 */  lwc1       $f4, 0x18($s1)
    /* 89D7C 1505C8CC 00439021 */  addu       $s2, $v0, $v1
    /* 89D80 1505C8D0 1000003A */  b          .L1505C9BC
    /* 89D84 1505C8D4 E7A40158 */   swc1      $f4, 0x158($sp)
    /* 89D88 1505C8D8 9249000A */  lbu        $t1, 0xA($s2)
  .L1505C8DC:
    /* 89D8C 1505C8DC 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 89D90 1505C8E0 44893000 */  mtc1       $t1, $f6
    /* 89D94 1505C8E4 05210004 */  bgez       $t1, .L1505C8F8
    /* 89D98 1505C8E8 468036A0 */   cvt.s.w   $f26, $f6
    /* 89D9C 1505C8EC 44814000 */  mtc1       $at, $f8
    /* 89DA0 1505C8F0 00000000 */  nop
    /* 89DA4 1505C8F4 4608D680 */  add.s      $f26, $f26, $f8
  .L1505C8F8:
    /* 89DA8 1505C8F8 3C013E00 */  lui        $at, (0x3E000000 >> 16)
    /* 89DAC 1505C8FC 44812000 */  mtc1       $at, $f4
    /* 89DB0 1505C900 C62A014C */  lwc1       $f10, 0x14C($s1)
    /* 89DB4 1505C904 924A0009 */  lbu        $t2, 0x9($s2)
    /* 89DB8 1505C908 962C007A */  lhu        $t4, 0x7A($s1)
    /* 89DBC 1505C90C 46045183 */  div.s      $f6, $f10, $f4
    /* 89DC0 1505C910 000A5A00 */  sll        $t3, $t2, 8
    /* 89DC4 1505C914 016C2021 */  addu       $a0, $t3, $t4
    /* 89DC8 1505C918 308DFFFF */  andi       $t5, $a0, 0xFFFF
    /* 89DCC 1505C91C 27AE0154 */  addiu      $t6, $sp, 0x154
    /* 89DD0 1505C920 27AF0158 */  addiu      $t7, $sp, 0x158
    /* 89DD4 1505C924 AFAF0014 */  sw         $t7, 0x14($sp)
    /* 89DD8 1505C928 AFAE0010 */  sw         $t6, 0x10($sp)
    /* 89DDC 1505C92C 01A02025 */  or         $a0, $t5, $zero
    /* 89DE0 1505C930 24060000 */  addiu      $a2, $zero, 0x0
    /* 89DE4 1505C934 27A7015C */  addiu      $a3, $sp, 0x15C
    /* 89DE8 1505C938 4606D682 */  mul.s      $f26, $f26, $f6
    /* 89DEC 1505C93C 4405D000 */  mfc1       $a1, $f26
    /* 89DF0 1505C940 0D416861 */  jal        func_1505A184
    /* 89DF4 1505C944 00000000 */   nop
    /* 89DF8 1505C948 C7A8015C */  lwc1       $f8, 0x15C($sp)
    /* 89DFC 1505C94C C62A0014 */  lwc1       $f10, 0x14($s1)
    /* 89E00 1505C950 C7A60158 */  lwc1       $f6, 0x158($sp)
    /* 89E04 1505C954 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 89E08 1505C958 460A4100 */  add.s      $f4, $f8, $f10
    /* 89E0C 1505C95C E7A4015C */  swc1       $f4, 0x15C($sp)
    /* 89E10 1505C960 C6280018 */  lwc1       $f8, 0x18($s1)
    /* 89E14 1505C964 C7A40154 */  lwc1       $f4, 0x154($sp)
    /* 89E18 1505C968 46083280 */  add.s      $f10, $f6, $f8
    /* 89E1C 1505C96C E7AA0158 */  swc1       $f10, 0x158($sp)
    /* 89E20 1505C970 C626001C */  lwc1       $f6, 0x1C($s1)
    /* 89E24 1505C974 46062200 */  add.s      $f8, $f4, $f6
    /* 89E28 1505C978 E7A80154 */  swc1       $f8, 0x154($sp)
    /* 89E2C 1505C97C 9258000E */  lbu        $t8, 0xE($s2)
    /* 89E30 1505C980 44985000 */  mtc1       $t8, $f10
    /* 89E34 1505C984 07010004 */  bgez       $t8, .L1505C998
    /* 89E38 1505C988 46805120 */   cvt.s.w   $f4, $f10
    /* 89E3C 1505C98C 44813000 */  mtc1       $at, $f6
    /* 89E40 1505C990 00000000 */  nop
    /* 89E44 1505C994 46062100 */  add.s      $f4, $f4, $f6
  .L1505C998:
    /* 89E48 1505C998 E7A40150 */  swc1       $f4, 0x150($sp)
    /* 89E4C 1505C99C 3C014080 */  lui        $at, (0x40800000 >> 16)
    /* 89E50 1505C9A0 44815000 */  mtc1       $at, $f10
    /* 89E54 1505C9A4 C628014C */  lwc1       $f8, 0x14C($s1)
    /* 89E58 1505C9A8 C7A40150 */  lwc1       $f4, 0x150($sp)
    /* 89E5C 1505C9AC 460A4182 */  mul.s      $f6, $f8, $f10
    /* 89E60 1505C9B0 00000000 */  nop
    /* 89E64 1505C9B4 46043202 */  mul.s      $f8, $f6, $f4
    /* 89E68 1505C9B8 E7A80150 */  swc1       $f8, 0x150($sp)
  .L1505C9BC:
    /* 89E6C 1505C9BC 3C013E80 */  lui        $at, (0x3E800000 >> 16)
    /* 89E70 1505C9C0 44812000 */  mtc1       $at, $f4
    /* 89E74 1505C9C4 C6260150 */  lwc1       $f6, 0x150($s1)
    /* 89E78 1505C9C8 8659000C */  lh         $t9, 0xC($s2)
    /* 89E7C 1505C9CC 3C14800D */  lui        $s4, %hi(D_800CC5FC)
    /* 89E80 1505C9D0 46043203 */  div.s      $f8, $f6, $f4
    /* 89E84 1505C9D4 44995000 */  mtc1       $t9, $f10
    /* 89E88 1505C9D8 C7A60158 */  lwc1       $f6, 0x158($sp)
    /* 89E8C 1505C9DC 240A0004 */  addiu      $t2, $zero, 0x4
    /* 89E90 1505C9E0 468056A0 */  cvt.s.w    $f26, $f10
    /* 89E94 1505C9E4 240B001A */  addiu      $t3, $zero, 0x1A
    /* 89E98 1505C9E8 2694C5FC */  addiu      $s4, $s4, %lo(D_800CC5FC)
    /* 89E9C 1505C9EC 4608D282 */  mul.s      $f10, $f26, $f8
    /* 89EA0 1505C9F0 460A3100 */  add.s      $f4, $f6, $f10
    /* 89EA4 1505C9F4 E7A40158 */  swc1       $f4, 0x158($sp)
    /* 89EA8 1505C9F8 8E2800F8 */  lw         $t0, 0xF8($s1)
    /* 89EAC 1505C9FC 31090100 */  andi       $t1, $t0, 0x100
    /* 89EB0 1505CA00 51200004 */  beql       $t1, $zero, .L1505CA14
    /* 89EB4 1505CA04 AFAB0178 */   sw        $t3, 0x178($sp)
    /* 89EB8 1505CA08 10000002 */  b          .L1505CA14
    /* 89EBC 1505CA0C AFAA0178 */   sw        $t2, 0x178($sp)
    /* 89EC0 1505CA10 AFAB0178 */  sw         $t3, 0x178($sp)
  .L1505CA14:
    /* 89EC4 1505CA14 8FAC0178 */  lw         $t4, 0x178($sp)
    /* 89EC8 1505CA18 24130001 */  addiu      $s3, $zero, 0x1
    /* 89ECC 1505CA1C 29810002 */  slti       $at, $t4, 0x2
    /* 89ED0 1505CA20 1420014A */  bnez       $at, .L1505CF4C
    /* 89ED4 1505CA24 3C013F80 */   lui       $at, (0x3F800000 >> 16)
    /* 89ED8 1505CA28 4481F000 */  mtc1       $at, $f30
    /* 89EDC 1505CA2C 24150005 */  addiu      $s5, $zero, 0x5
    /* 89EE0 1505CA30 8E8DFCD4 */  lw         $t5, -0x32C($s4)
  .L1505CA34:
    /* 89EE4 1505CA34 8FAE0184 */  lw         $t6, 0x184($sp)
    /* 89EE8 1505CA38 51A00140 */  beql       $t5, $zero, .L1505CF3C
    /* 89EEC 1505CA3C 8FAD0178 */   lw        $t5, 0x178($sp)
    /* 89EF0 1505CA40 126E013D */  beq        $s3, $t6, .L1505CF38
    /* 89EF4 1505CA44 2690FCD4 */   addiu     $s0, $s4, -0x32C
    /* 89EF8 1505CA48 920F01CA */  lbu        $t7, 0x1CA($s0)
    /* 89EFC 1505CA4C 51E0013B */  beql       $t7, $zero, .L1505CF3C
    /* 89F00 1505CA50 8FAD0178 */   lw        $t5, 0x178($sp)
    /* 89F04 1505CA54 92180125 */  lbu        $t8, 0x125($s0)
    /* 89F08 1505CA58 0016C880 */  sll        $t9, $s6, 2
    /* 89F0C 1505CA5C 0336C821 */  addu       $t9, $t9, $s6
    /* 89F10 1505CA60 57000136 */  bnel       $t8, $zero, .L1505CF3C
    /* 89F14 1505CA64 8FAD0178 */   lw        $t5, 0x178($sp)
    /* 89F18 1505CA68 92280124 */  lbu        $t0, 0x124($s1)
    /* 89F1C 1505CA6C 0019C8C0 */  sll        $t9, $t9, 3
    /* 89F20 1505CA70 02F99021 */  addu       $s2, $s7, $t9
    /* 89F24 1505CA74 16680003 */  bne        $s3, $t0, .L1505CA84
    /* 89F28 1505CA78 96420024 */   lhu       $v0, 0x24($s2)
    /* 89F2C 1505CA7C 30491000 */  andi       $t1, $v0, 0x1000
    /* 89F30 1505CA80 1120012D */  beqz       $t1, .L1505CF38
  .L1505CA84:
    /* 89F34 1505CA84 304A0080 */   andi      $t2, $v0, 0x80
    /* 89F38 1505CA88 1140007B */  beqz       $t2, .L1505CC78
    /* 89F3C 1505CA8C C7A6015C */   lwc1      $f6, 0x15C($sp)
    /* 89F40 1505CA90 860200D8 */  lh         $v0, 0xD8($s0)
    /* 89F44 1505CA94 C6080014 */  lwc1       $f8, 0x14($s0)
    /* 89F48 1505CA98 C6260014 */  lwc1       $f6, 0x14($s1)
    /* 89F4C 1505CA9C C60A001C */  lwc1       $f10, 0x1C($s0)
    /* 89F50 1505CAA0 C624001C */  lwc1       $f4, 0x1C($s1)
    /* 89F54 1505CAA4 3C014000 */  lui        $at, (0x40000000 >> 16)
    /* 89F58 1505CAA8 4481D000 */  mtc1       $at, $f26
    /* 89F5C 1505CAAC 4600F706 */  mov.s      $f28, $f30
    /* 89F60 1505CAB0 46064501 */  sub.s      $f20, $f8, $f6
    /* 89F64 1505CAB4 14400004 */  bnez       $v0, .L1505CAC8
    /* 89F68 1505CAB8 46045581 */   sub.s     $f22, $f10, $f4
    /* 89F6C 1505CABC 860B00DA */  lh         $t3, 0xDA($s0)
    /* 89F70 1505CAC0 51600011 */  beql       $t3, $zero, .L1505CB08
    /* 89F74 1505CAC4 3C0142B4 */   lui       $at, (0x42B40000 >> 16)
  .L1505CAC8:
    /* 89F78 1505CAC8 44823000 */  mtc1       $v0, $f6
    /* 89F7C 1505CACC 860C00DA */  lh         $t4, 0xDA($s0)
    /* 89F80 1505CAD0 C60C0040 */  lwc1       $f12, 0x40($s0)
    /* 89F84 1505CAD4 468031A0 */  cvt.s.w    $f6, $f6
    /* 89F88 1505CAD8 448C4000 */  mtc1       $t4, $f8
    /* 89F8C 1505CADC 4407F000 */  mfc1       $a3, $f30
    /* 89F90 1505CAE0 27AD0110 */  addiu      $t5, $sp, 0x110
    /* 89F94 1505CAE4 AFAD0010 */  sw         $t5, 0x10($sp)
    /* 89F98 1505CAE8 468043A0 */  cvt.s.w    $f14, $f8
    /* 89F9C 1505CAEC 44063000 */  mfc1       $a2, $f6
    /* 89FA0 1505CAF0 0D4174D3 */  jal        func_1505D34C
    /* 89FA4 1505CAF4 00000000 */   nop
    /* 89FA8 1505CAF8 C7AA0110 */  lwc1       $f10, 0x110($sp)
    /* 89FAC 1505CAFC 4600A500 */  add.s      $f20, $f20, $f0
    /* 89FB0 1505CB00 460AB580 */  add.s      $f22, $f22, $f10
    /* 89FB4 1505CB04 3C0142B4 */  lui        $at, (0x42B40000 >> 16)
  .L1505CB08:
    /* 89FB8 1505CB08 44814000 */  mtc1       $at, $f8
    /* 89FBC 1505CB0C C6240040 */  lwc1       $f4, 0x40($s1)
    /* 89FC0 1505CB10 3C01800A */  lui        $at, %hi(D_8009951C)
    /* 89FC4 1505CB14 C42A951C */  lwc1       $f10, %lo(D_8009951C)($at)
    /* 89FC8 1505CB18 46082181 */  sub.s      $f6, $f4, $f8
    /* 89FCC 1505CB1C 460A3482 */  mul.s      $f18, $f6, $f10
    /* 89FD0 1505CB20 46009307 */  neg.s      $f12, $f18
    /* 89FD4 1505CB24 0D42B5E0 */  jal        func_150AD780
    /* 89FD8 1505CB28 E7AC00A4 */   swc1      $f12, 0xA4($sp)
    /* 89FDC 1505CB2C C7AC00A4 */  lwc1       $f12, 0xA4($sp)
    /* 89FE0 1505CB30 0D42B5E3 */  jal        func_150AD78C
    /* 89FE4 1505CB34 46000606 */   mov.s     $f24, $f0
    /* 89FE8 1505CB38 924E0009 */  lbu        $t6, 0x9($s2)
    /* 89FEC 1505CB3C 9258000A */  lbu        $t8, 0xA($s2)
    /* 89FF0 1505CB40 4618A102 */  mul.s      $f4, $f20, $f24
    /* 89FF4 1505CB44 8248000E */  lb         $t0, 0xE($s2)
    /* 89FF8 1505CB48 01D50019 */  multu      $t6, $s5
    /* 89FFC 1505CB4C 4600B202 */  mul.s      $f8, $f22, $f0
    /* 8A000 1505CB50 4600A187 */  neg.s      $f6, $f20
    /* 8A004 1505CB54 860B00D6 */  lh         $t3, 0xD6($s0)
    /* 8A008 1505CB58 46003282 */  mul.s      $f10, $f6, $f0
    /* 8A00C 1505CB5C C62C014C */  lwc1       $f12, 0x14C($s1)
    /* 8A010 1505CB60 860D00D4 */  lh         $t5, 0xD4($s0)
    /* 8A014 1505CB64 3C0141C8 */  lui        $at, (0x41C80000 >> 16)
    /* 8A018 1505CB68 860C00D2 */  lh         $t4, 0xD2($s0)
    /* 8A01C 1505CB6C 46082480 */  add.s      $f18, $f4, $f8
    /* 8A020 1505CB70 00007812 */  mflo       $t7
    /* 8A024 1505CB74 4618B102 */  mul.s      $f4, $f22, $f24
    /* 8A028 1505CB78 448F4000 */  mtc1       $t7, $f8
    /* 8A02C 1505CB7C 03150019 */  multu      $t8, $s5
    /* 8A030 1505CB80 468043A0 */  cvt.s.w    $f14, $f8
    /* 8A034 1505CB84 C6080018 */  lwc1       $f8, 0x18($s0)
    /* 8A038 1505CB88 46045580 */  add.s      $f22, $f10, $f4
    /* 8A03C 1505CB8C 0000C812 */  mflo       $t9
    /* 8A040 1505CB90 44993000 */  mtc1       $t9, $f6
    /* 8A044 1505CB94 00000000 */  nop
    /* 8A048 1505CB98 01150019 */  multu      $t0, $s5
    /* 8A04C 1505CB9C 46803420 */  cvt.s.w    $f16, $f6
    /* 8A050 1505CBA0 448B3000 */  mtc1       $t3, $f6
    /* 8A054 1505CBA4 00001012 */  mflo       $v0
    /* 8A058 1505CBA8 00024C00 */  sll        $t1, $v0, 16
    /* 8A05C 1505CBAC 00091403 */  sra        $v0, $t1, 16
    /* 8A060 1505CBB0 44825000 */  mtc1       $v0, $f10
    /* 8A064 1505CBB4 00000000 */  nop
    /* 8A068 1505CBB8 46805120 */  cvt.s.w    $f4, $f10
    /* 8A06C 1505CBBC 468032A0 */  cvt.s.w    $f10, $f6
    /* 8A070 1505CBC0 460C2082 */  mul.s      $f2, $f4, $f12
    /* 8A074 1505CBC4 C7A60158 */  lwc1       $f6, 0x158($sp)
    /* 8A078 1505CBC8 460C7382 */  mul.s      $f14, $f14, $f12
    /* 8A07C 1505CBCC 460A4100 */  add.s      $f4, $f8, $f10
    /* 8A080 1505CBD0 448D5000 */  mtc1       $t5, $f10
    /* 8A084 1505CBD4 460C8402 */  mul.s      $f16, $f16, $f12
    /* 8A088 1505CBD8 46029501 */  sub.s      $f20, $f18, $f2
    /* 8A08C 1505CBDC 448C4000 */  mtc1       $t4, $f8
    /* 8A090 1505CBE0 46043081 */  sub.s      $f2, $f6, $f4
    /* 8A094 1505CBE4 44813000 */  mtc1       $at, $f6
    /* 8A098 1505CBE8 46805320 */  cvt.s.w    $f12, $f10
    /* 8A09C 1505CBEC 46804020 */  cvt.s.w    $f0, $f8
    /* 8A0A0 1505CBF0 46066300 */  add.s      $f12, $f12, $f6
    /* 8A0A4 1505CBF4 46007380 */  add.s      $f14, $f14, $f0
    /* 8A0A8 1505CBF8 46006107 */  neg.s      $f4, $f12
    /* 8A0AC 1505CBFC 46008400 */  add.s      $f16, $f16, $f0
    /* 8A0B0 1505CC00 4602203C */  c.lt.s     $f4, $f2
    /* 8A0B4 1505CC04 00000000 */  nop
    /* 8A0B8 1505CC08 45020059 */  bc1fl      .L1505CD70
    /* 8A0BC 1505CC0C 461CD03C */   c.lt.s    $f26, $f28
    /* 8A0C0 1505CC10 460C103C */  c.lt.s     $f2, $f12
    /* 8A0C4 1505CC14 00000000 */  nop
    /* 8A0C8 1505CC18 45020055 */  bc1fl      .L1505CD70
    /* 8A0CC 1505CC1C 461CD03C */   c.lt.s    $f26, $f28
    /* 8A0D0 1505CC20 46007207 */  neg.s      $f8, $f14
    /* 8A0D4 1505CC24 4614403C */  c.lt.s     $f8, $f20
    /* 8A0D8 1505CC28 00000000 */  nop
    /* 8A0DC 1505CC2C 45020050 */  bc1fl      .L1505CD70
    /* 8A0E0 1505CC30 461CD03C */   c.lt.s    $f26, $f28
    /* 8A0E4 1505CC34 460EA03C */  c.lt.s     $f20, $f14
    /* 8A0E8 1505CC38 00000000 */  nop
    /* 8A0EC 1505CC3C 4502004C */  bc1fl      .L1505CD70
    /* 8A0F0 1505CC40 461CD03C */   c.lt.s    $f26, $f28
    /* 8A0F4 1505CC44 46008287 */  neg.s      $f10, $f16
    /* 8A0F8 1505CC48 4616503C */  c.lt.s     $f10, $f22
    /* 8A0FC 1505CC4C 00000000 */  nop
    /* 8A100 1505CC50 45020047 */  bc1fl      .L1505CD70
    /* 8A104 1505CC54 461CD03C */   c.lt.s    $f26, $f28
    /* 8A108 1505CC58 4610B03C */  c.lt.s     $f22, $f16
    /* 8A10C 1505CC5C 00000000 */  nop
    /* 8A110 1505CC60 45020043 */  bc1fl      .L1505CD70
    /* 8A114 1505CC64 461CD03C */   c.lt.s    $f26, $f28
    /* 8A118 1505CC68 4480D000 */  mtc1       $zero, $f26
    /* 8A11C 1505CC6C 00000000 */  nop
    /* 8A120 1505CC70 1000003F */  b          .L1505CD70
    /* 8A124 1505CC74 461CD03C */   c.lt.s    $f26, $f28
  .L1505CC78:
    /* 8A128 1505CC78 860200D8 */  lh         $v0, 0xD8($s0)
    /* 8A12C 1505CC7C C6040014 */  lwc1       $f4, 0x14($s0)
    /* 8A130 1505CC80 C7A80154 */  lwc1       $f8, 0x154($sp)
    /* 8A134 1505CC84 C60A001C */  lwc1       $f10, 0x1C($s0)
    /* 8A138 1505CC88 46043501 */  sub.s      $f20, $f6, $f4
    /* 8A13C 1505CC8C 14400004 */  bnez       $v0, .L1505CCA0
    /* 8A140 1505CC90 460A4401 */   sub.s     $f16, $f8, $f10
    /* 8A144 1505CC94 860E00DA */  lh         $t6, 0xDA($s0)
    /* 8A148 1505CC98 51C00012 */  beql       $t6, $zero, .L1505CCE4
    /* 8A14C 1505CC9C 861900D6 */   lh        $t9, 0xD6($s0)
  .L1505CCA0:
    /* 8A150 1505CCA0 44822000 */  mtc1       $v0, $f4
    /* 8A154 1505CCA4 860F00DA */  lh         $t7, 0xDA($s0)
    /* 8A158 1505CCA8 C60C0040 */  lwc1       $f12, 0x40($s0)
    /* 8A15C 1505CCAC 46802120 */  cvt.s.w    $f4, $f4
    /* 8A160 1505CCB0 448F3000 */  mtc1       $t7, $f6
    /* 8A164 1505CCB4 4407F000 */  mfc1       $a3, $f30
    /* 8A168 1505CCB8 27B800FC */  addiu      $t8, $sp, 0xFC
    /* 8A16C 1505CCBC AFB80010 */  sw         $t8, 0x10($sp)
    /* 8A170 1505CCC0 E7B00164 */  swc1       $f16, 0x164($sp)
    /* 8A174 1505CCC4 44062000 */  mfc1       $a2, $f4
    /* 8A178 1505CCC8 0D4174D3 */  jal        func_1505D34C
    /* 8A17C 1505CCCC 468033A0 */   cvt.s.w   $f14, $f6
    /* 8A180 1505CCD0 C7B00164 */  lwc1       $f16, 0x164($sp)
    /* 8A184 1505CCD4 C7A800FC */  lwc1       $f8, 0xFC($sp)
    /* 8A188 1505CCD8 4600A501 */  sub.s      $f20, $f20, $f0
    /* 8A18C 1505CCDC 46088401 */  sub.s      $f16, $f16, $f8
    /* 8A190 1505CCE0 861900D6 */  lh         $t9, 0xD6($s0)
  .L1505CCE4:
    /* 8A194 1505CCE4 C60A0018 */  lwc1       $f10, 0x18($s0)
    /* 8A198 1505CCE8 860900D4 */  lh         $t1, 0xD4($s0)
    /* 8A19C 1505CCEC 44993000 */  mtc1       $t9, $f6
    /* 8A1A0 1505CCF0 860800D2 */  lh         $t0, 0xD2($s0)
    /* 8A1A4 1505CCF4 C7B60150 */  lwc1       $f22, 0x150($sp)
    /* 8A1A8 1505CCF8 46803120 */  cvt.s.w    $f4, $f6
    /* 8A1AC 1505CCFC C7A60158 */  lwc1       $f6, 0x158($sp)
    /* 8A1B0 1505CD00 46045200 */  add.s      $f8, $f10, $f4
    /* 8A1B4 1505CD04 44892000 */  mtc1       $t1, $f4
    /* 8A1B8 1505CD08 44885000 */  mtc1       $t0, $f10
    /* 8A1BC 1505CD0C 468023A0 */  cvt.s.w    $f14, $f4
    /* 8A1C0 1505CD10 46083081 */  sub.s      $f2, $f6, $f8
    /* 8A1C4 1505CD14 44803000 */  mtc1       $zero, $f6
    /* 8A1C8 1505CD18 468054A0 */  cvt.s.w    $f18, $f10
    /* 8A1CC 1505CD1C 46067032 */  c.eq.s     $f14, $f6
    /* 8A1D0 1505CD20 00000000 */  nop
    /* 8A1D4 1505CD24 45030085 */  bc1tl      .L1505CF3C
    /* 8A1D8 1505CD28 8FAD0178 */   lw        $t5, 0x178($sp)
    /* 8A1DC 1505CD2C 460EB200 */  add.s      $f8, $f22, $f14
    /* 8A1E0 1505CD30 460E9283 */  div.s      $f10, $f18, $f14
    /* 8A1E4 1505CD34 46169300 */  add.s      $f12, $f18, $f22
    /* 8A1E8 1505CD38 460C6702 */  mul.s      $f28, $f12, $f12
    /* 8A1EC 1505CD3C 46087003 */  div.s      $f0, $f14, $f8
    /* 8A1F0 1505CD40 46005102 */  mul.s      $f4, $f10, $f0
    /* 8A1F4 1505CD44 4600F181 */  sub.s      $f6, $f30, $f0
    /* 8A1F8 1505CD48 46062200 */  add.s      $f8, $f4, $f6
    /* 8A1FC 1505CD4C 46081082 */  mul.s      $f2, $f2, $f8
    /* 8A200 1505CD50 00000000 */  nop
    /* 8A204 1505CD54 4614A282 */  mul.s      $f10, $f20, $f20
    /* 8A208 1505CD58 00000000 */  nop
    /* 8A20C 1505CD5C 46021102 */  mul.s      $f4, $f2, $f2
    /* 8A210 1505CD60 46045180 */  add.s      $f6, $f10, $f4
    /* 8A214 1505CD64 46108202 */  mul.s      $f8, $f16, $f16
    /* 8A218 1505CD68 46083680 */  add.s      $f26, $f6, $f8
    /* 8A21C 1505CD6C 461CD03C */  c.lt.s     $f26, $f28
  .L1505CD70:
    /* 8A220 1505CD70 00000000 */  nop
    /* 8A224 1505CD74 45020071 */  bc1fl      .L1505CF3C
    /* 8A228 1505CD78 8FAD0178 */   lw        $t5, 0x178($sp)
    /* 8A22C 1505CD7C 964A0024 */  lhu        $t2, 0x24($s2)
    /* 8A230 1505CD80 314B2000 */  andi       $t3, $t2, 0x2000
    /* 8A234 1505CD84 51600058 */  beql       $t3, $zero, .L1505CEE8
    /* 8A238 1505CD88 C7A6015C */   lwc1      $f6, 0x15C($sp)
    /* 8A23C 1505CD8C 922C013D */  lbu        $t4, 0x13D($s1)
    /* 8A240 1505CD90 526C0055 */  beql       $s3, $t4, .L1505CEE8
    /* 8A244 1505CD94 C7A6015C */   lwc1      $f6, 0x15C($sp)
    /* 8A248 1505CD98 8E2202F4 */  lw         $v0, 0x2F4($s1)
    /* 8A24C 1505CD9C 02202025 */  or         $a0, $s1, $zero
    /* 8A250 1505CDA0 27A500BA */  addiu      $a1, $sp, 0xBA
    /* 8A254 1505CDA4 10400009 */  beqz       $v0, .L1505CDCC
    /* 8A258 1505CDA8 00003025 */   or        $a2, $zero, $zero
    /* 8A25C 1505CDAC 8C410000 */  lw         $at, 0x0($v0)
    /* 8A260 1505CDB0 27AD00E8 */  addiu      $t5, $sp, 0xE8
    /* 8A264 1505CDB4 ADA10000 */  sw         $at, 0x0($t5)
    /* 8A268 1505CDB8 8C4F0004 */  lw         $t7, 0x4($v0)
    /* 8A26C 1505CDBC ADAF0004 */  sw         $t7, 0x4($t5)
    /* 8A270 1505CDC0 8C410008 */  lw         $at, 0x8($v0)
    /* 8A274 1505CDC4 1000000E */  b          .L1505CE00
    /* 8A278 1505CDC8 ADA10008 */   sw        $at, 0x8($t5)
  .L1505CDCC:
    /* 8A27C 1505CDCC 0D41F0F8 */  jal        func_1507C3E0
    /* 8A280 1505CDD0 00003825 */   or        $a3, $zero, $zero
    /* 8A284 1505CDD4 87B800BA */  lh         $t8, 0xBA($sp)
    /* 8A288 1505CDD8 C62A0014 */  lwc1       $f10, 0x14($s1)
    /* 8A28C 1505CDDC 0018C843 */  sra        $t9, $t8, 1
    /* 8A290 1505CDE0 44993000 */  mtc1       $t9, $f6
    /* 8A294 1505CDE4 E7AA00E8 */  swc1       $f10, 0xE8($sp)
    /* 8A298 1505CDE8 C6240018 */  lwc1       $f4, 0x18($s1)
    /* 8A29C 1505CDEC 46803220 */  cvt.s.w    $f8, $f6
    /* 8A2A0 1505CDF0 46082280 */  add.s      $f10, $f4, $f8
    /* 8A2A4 1505CDF4 E7AA00EC */  swc1       $f10, 0xEC($sp)
    /* 8A2A8 1505CDF8 C626001C */  lwc1       $f6, 0x1C($s1)
    /* 8A2AC 1505CDFC E7A600F0 */  swc1       $f6, 0xF0($sp)
  .L1505CE00:
    /* 8A2B0 1505CE00 8E02031C */  lw         $v0, 0x31C($s0)
    /* 8A2B4 1505CE04 C6120014 */  lwc1       $f18, 0x14($s0)
    /* 8A2B8 1505CE08 C7AC00E8 */  lwc1       $f12, 0xE8($sp)
    /* 8A2BC 1505CE0C 1040000A */  beqz       $v0, .L1505CE38
    /* 8A2C0 1505CE10 27A900DC */   addiu     $t1, $sp, 0xDC
    /* 8A2C4 1505CE14 84480114 */  lh         $t0, 0x114($v0)
    /* 8A2C8 1505CE18 3C013F00 */  lui        $at, (0x3F000000 >> 16)
    /* 8A2CC 1505CE1C 44815000 */  mtc1       $at, $f10
    /* 8A2D0 1505CE20 44882000 */  mtc1       $t0, $f4
    /* 8A2D4 1505CE24 00000000 */  nop
    /* 8A2D8 1505CE28 46802220 */  cvt.s.w    $f8, $f4
    /* 8A2DC 1505CE2C 460A4402 */  mul.s      $f16, $f8, $f10
    /* 8A2E0 1505CE30 10000005 */  b          .L1505CE48
    /* 8A2E4 1505CE34 C6060018 */   lwc1      $f6, 0x18($s0)
  .L1505CE38:
    /* 8A2E8 1505CE38 3C0141A0 */  lui        $at, (0x41A00000 >> 16)
    /* 8A2EC 1505CE3C 44818000 */  mtc1       $at, $f16
    /* 8A2F0 1505CE40 00000000 */  nop
    /* 8A2F4 1505CE44 C6060018 */  lwc1       $f6, 0x18($s0)
  .L1505CE48:
    /* 8A2F8 1505CE48 460C9201 */  sub.s      $f8, $f18, $f12
    /* 8A2FC 1505CE4C C7AE00EC */  lwc1       $f14, 0xEC($sp)
    /* 8A300 1505CE50 C602001C */  lwc1       $f2, 0x1C($s0)
    /* 8A304 1505CE54 46068000 */  add.s      $f0, $f16, $f6
    /* 8A308 1505CE58 E7A800D0 */  swc1       $f8, 0xD0($sp)
    /* 8A30C 1505CE5C C7A800F0 */  lwc1       $f8, 0xF0($sp)
    /* 8A310 1505CE60 44805000 */  mtc1       $zero, $f10
    /* 8A314 1505CE64 460E0181 */  sub.s      $f6, $f0, $f14
    /* 8A318 1505CE68 27AA00E0 */  addiu      $t2, $sp, 0xE0
    /* 8A31C 1505CE6C 27AB00E4 */  addiu      $t3, $sp, 0xE4
    /* 8A320 1505CE70 27AC00C8 */  addiu      $t4, $sp, 0xC8
    /* 8A324 1505CE74 E7A600D4 */  swc1       $f6, 0xD4($sp)
    /* 8A328 1505CE78 46081181 */  sub.s      $f6, $f2, $f8
    /* 8A32C 1505CE7C 44064000 */  mfc1       $a2, $f8
    /* 8A330 1505CE80 AFAC002C */  sw         $t4, 0x2C($sp)
    /* 8A334 1505CE84 AFAB0028 */  sw         $t3, 0x28($sp)
    /* 8A338 1505CE88 E7A600D8 */  swc1       $f6, 0xD8($sp)
    /* 8A33C 1505CE8C C7A400D8 */  lwc1       $f4, 0xD8($sp)
    /* 8A340 1505CE90 C7A600D4 */  lwc1       $f6, 0xD4($sp)
    /* 8A344 1505CE94 AFAA0024 */  sw         $t2, 0x24($sp)
    /* 8A348 1505CE98 8FA700D0 */  lw         $a3, 0xD0($sp)
    /* 8A34C 1505CE9C AFA00034 */  sw         $zero, 0x34($sp)
    /* 8A350 1505CEA0 AFA00030 */  sw         $zero, 0x30($sp)
    /* 8A354 1505CEA4 AFA90020 */  sw         $t1, 0x20($sp)
    /* 8A358 1505CEA8 AFA0001C */  sw         $zero, 0x1C($sp)
    /* 8A35C 1505CEAC AFA00018 */  sw         $zero, 0x18($sp)
    /* 8A360 1505CEB0 E7AA0038 */  swc1       $f10, 0x38($sp)
    /* 8A364 1505CEB4 E7A40014 */  swc1       $f4, 0x14($sp)
    /* 8A368 1505CEB8 0D42B270 */  jal        func_150AC9C0
    /* 8A36C 1505CEBC E7A60010 */   swc1      $f6, 0x10($sp)
    /* 8A370 1505CEC0 50400009 */  beql       $v0, $zero, .L1505CEE8
    /* 8A374 1505CEC4 C7A6015C */   lwc1      $f6, 0x15C($sp)
    /* 8A378 1505CEC8 0D450F99 */  jal        func_15143E64
    /* 8A37C 1505CECC 27A400D0 */   addiu     $a0, $sp, 0xD0
    /* 8A380 1505CED0 C7A800C8 */  lwc1       $f8, 0xC8($sp)
    /* 8A384 1505CED4 4600403C */  c.lt.s     $f8, $f0
    /* 8A388 1505CED8 00000000 */  nop
    /* 8A38C 1505CEDC 45030017 */  bc1tl      .L1505CF3C
    /* 8A390 1505CEE0 8FAD0178 */   lw        $t5, 0x178($sp)
    /* 8A394 1505CEE4 C7A6015C */  lwc1       $f6, 0x15C($sp)
  .L1505CEE8:
    /* 8A398 1505CEE8 C7A40158 */  lwc1       $f4, 0x158($sp)
    /* 8A39C 1505CEEC 3C01800D */  lui        $at, %hi(D_800CC2C0)
    /* 8A3A0 1505CEF0 E426C2C0 */  swc1       $f6, %lo(D_800CC2C0)($at)
    /* 8A3A4 1505CEF4 3C01800D */  lui        $at, %hi(D_800CC2C4)
    /* 8A3A8 1505CEF8 C7AA0154 */  lwc1       $f10, 0x154($sp)
    /* 8A3AC 1505CEFC E424C2C4 */  swc1       $f4, %lo(D_800CC2C4)($at)
    /* 8A3B0 1505CF00 3C01800D */  lui        $at, %hi(D_800CC2C8)
    /* 8A3B4 1505CF04 240E000F */  addiu      $t6, $zero, 0xF
    /* 8A3B8 1505CF08 AFAE0018 */  sw         $t6, 0x18($sp)
    /* 8A3BC 1505CF0C 02202025 */  or         $a0, $s1, $zero
    /* 8A3C0 1505CF10 02002825 */  or         $a1, $s0, $zero
    /* 8A3C4 1505CF14 02E03025 */  or         $a2, $s7, $zero
    /* 8A3C8 1505CF18 02C03825 */  or         $a3, $s6, $zero
    /* 8A3CC 1505CF1C AFB30010 */  sw         $s3, 0x10($sp)
    /* 8A3D0 1505CF20 AFBE0014 */  sw         $fp, 0x14($sp)
    /* 8A3D4 1505CF24 0D417079 */  jal        func_1505C1E4
    /* 8A3D8 1505CF28 E42AC2C8 */   swc1      $f10, %lo(D_800CC2C8)($at)
    /* 8A3DC 1505CF2C 923600D0 */  lbu        $s6, 0xD0($s1)
    /* 8A3E0 1505CF30 0040F025 */  or         $fp, $v0, $zero
    /* 8A3E4 1505CF34 26D6FFFF */  addiu      $s6, $s6, -0x1
  .L1505CF38:
    /* 8A3E8 1505CF38 8FAD0178 */  lw         $t5, 0x178($sp)
  .L1505CF3C:
    /* 8A3EC 1505CF3C 26730001 */  addiu      $s3, $s3, 0x1
    /* 8A3F0 1505CF40 2694032C */  addiu      $s4, $s4, 0x32C
    /* 8A3F4 1505CF44 566DFEBB */  bnel       $s3, $t5, .L1505CA34
    /* 8A3F8 1505CF48 8E8DFCD4 */   lw        $t5, -0x32C($s4)
  .L1505CF4C:
    /* 8A3FC 1505CF4C 13C00022 */  beqz       $fp, .L1505CFD8
    /* 8A400 1505CF50 00167880 */   sll       $t7, $s6, 2
    /* 8A404 1505CF54 92380108 */  lbu        $t8, 0x108($s1)
    /* 8A408 1505CF58 3C08800B */  lui        $t0, %hi(D_800B2CD0)
    /* 8A40C 1505CF5C 01F67821 */  addu       $t7, $t7, $s6
    /* 8A410 1505CF60 0018C880 */  sll        $t9, $t8, 2
    /* 8A414 1505CF64 0338C823 */  subu       $t9, $t9, $t8
    /* 8A418 1505CF68 0019C880 */  sll        $t9, $t9, 2
    /* 8A41C 1505CF6C 0338C821 */  addu       $t9, $t9, $t8
    /* 8A420 1505CF70 0019C880 */  sll        $t9, $t9, 2
    /* 8A424 1505CF74 0338C823 */  subu       $t9, $t9, $t8
    /* 8A428 1505CF78 0019C880 */  sll        $t9, $t9, 2
    /* 8A42C 1505CF7C 0338C823 */  subu       $t9, $t9, $t8
    /* 8A430 1505CF80 0019C880 */  sll        $t9, $t9, 2
    /* 8A434 1505CF84 01194021 */  addu       $t0, $t0, $t9
    /* 8A438 1505CF88 8D082CD0 */  lw         $t0, %lo(D_800B2CD0)($t0)
    /* 8A43C 1505CF8C 000F78C0 */  sll        $t7, $t7, 3
    /* 8A440 1505CF90 24010001 */  addiu      $at, $zero, 0x1
    /* 8A444 1505CF94 15010006 */  bne        $t0, $at, .L1505CFB0
    /* 8A448 1505CF98 02EF9021 */   addu      $s2, $s7, $t7
    /* 8A44C 1505CF9C 92220254 */  lbu        $v0, 0x254($s1)
    /* 8A450 1505CFA0 50400004 */  beql       $v0, $zero, .L1505CFB4
    /* 8A454 1505CFA4 96420024 */   lhu       $v0, 0x24($s2)
    /* 8A458 1505CFA8 A2220232 */  sb         $v0, 0x232($s1)
    /* 8A45C 1505CFAC AE200218 */  sw         $zero, 0x218($s1)
  .L1505CFB0:
    /* 8A460 1505CFB0 96420024 */  lhu        $v0, 0x24($s2)
  .L1505CFB4:
    /* 8A464 1505CFB4 30490004 */  andi       $t1, $v0, 0x4
    /* 8A468 1505CFB8 55200004 */  bnel       $t1, $zero, .L1505CFCC
    /* 8A46C 1505CFBC 304A0800 */   andi      $t2, $v0, 0x800
    /* 8A470 1505CFC0 A620021C */  sh         $zero, 0x21C($s1)
    /* 8A474 1505CFC4 96420024 */  lhu        $v0, 0x24($s2)
    /* 8A478 1505CFC8 304A0800 */  andi       $t2, $v0, 0x800
  .L1505CFCC:
    /* 8A47C 1505CFCC 55400003 */  bnel       $t2, $zero, .L1505CFDC
    /* 8A480 1505CFD0 03C01025 */   or        $v0, $fp, $zero
    /* 8A484 1505CFD4 A22000D0 */  sb         $zero, 0xD0($s1)
  .L1505CFD8:
    /* 8A488 1505CFD8 03C01025 */  or         $v0, $fp, $zero
  .L1505CFDC:
    /* 8A48C 1505CFDC 8FBF009C */  lw         $ra, 0x9C($sp)
    /* 8A490 1505CFE0 D7B40048 */  ldc1       $f20, 0x48($sp)
    /* 8A494 1505CFE4 D7B60050 */  ldc1       $f22, 0x50($sp)
    /* 8A498 1505CFE8 D7B80058 */  ldc1       $f24, 0x58($sp)
    /* 8A49C 1505CFEC D7BA0060 */  ldc1       $f26, 0x60($sp)
    /* 8A4A0 1505CFF0 D7BC0068 */  ldc1       $f28, 0x68($sp)
    /* 8A4A4 1505CFF4 D7BE0070 */  ldc1       $f30, 0x70($sp)
    /* 8A4A8 1505CFF8 8FB00078 */  lw         $s0, 0x78($sp)
    /* 8A4AC 1505CFFC 8FB1007C */  lw         $s1, 0x7C($sp)
    /* 8A4B0 1505D000 8FB20080 */  lw         $s2, 0x80($sp)
    /* 8A4B4 1505D004 8FB30084 */  lw         $s3, 0x84($sp)
    /* 8A4B8 1505D008 8FB40088 */  lw         $s4, 0x88($sp)
    /* 8A4BC 1505D00C 8FB5008C */  lw         $s5, 0x8C($sp)
    /* 8A4C0 1505D010 8FB60090 */  lw         $s6, 0x90($sp)
    /* 8A4C4 1505D014 8FB70094 */  lw         $s7, 0x94($sp)
    /* 8A4C8 1505D018 8FBE0098 */  lw         $fp, 0x98($sp)
    /* 8A4CC 1505D01C 03E00008 */  jr         $ra
    /* 8A4D0 1505D020 27BD0180 */   addiu     $sp, $sp, 0x180
endlabel func_1505C7D8
