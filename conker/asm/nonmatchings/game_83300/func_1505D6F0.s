nonmatching func_1505D6F0, 0x3EC

glabel func_1505D6F0
    /* 8ABA0 1505D6F0 27BDFF78 */  addiu      $sp, $sp, -0x88
    /* 8ABA4 1505D6F4 AFB4007C */  sw         $s4, 0x7C($sp)
    /* 8ABA8 1505D6F8 AFB30078 */  sw         $s3, 0x78($sp)
    /* 8ABAC 1505D6FC AFB20074 */  sw         $s2, 0x74($sp)
    /* 8ABB0 1505D700 00809025 */  or         $s2, $a0, $zero
    /* 8ABB4 1505D704 00A09825 */  or         $s3, $a1, $zero
    /* 8ABB8 1505D708 24140001 */  addiu      $s4, $zero, 0x1
    /* 8ABBC 1505D70C AFBF0084 */  sw         $ra, 0x84($sp)
    /* 8ABC0 1505D710 AFB50080 */  sw         $s5, 0x80($sp)
    /* 8ABC4 1505D714 AFB10070 */  sw         $s1, 0x70($sp)
    /* 8ABC8 1505D718 AFB0006C */  sw         $s0, 0x6C($sp)
    /* 8ABCC 1505D71C F7BE0060 */  sdc1       $f30, 0x60($sp)
    /* 8ABD0 1505D720 F7BC0058 */  sdc1       $f28, 0x58($sp)
    /* 8ABD4 1505D724 F7BA0050 */  sdc1       $f26, 0x50($sp)
    /* 8ABD8 1505D728 F7B80048 */  sdc1       $f24, 0x48($sp)
    /* 8ABDC 1505D72C F7B60040 */  sdc1       $f22, 0x40($sp)
    /* 8ABE0 1505D730 F7B40038 */  sdc1       $f20, 0x38($sp)
    /* 8ABE4 1505D734 3C01800D */  lui        $at, %hi(D_800CC268)
    /* 8ABE8 1505D738 AC20C268 */  sw         $zero, %lo(D_800CC268)($at)
    /* 8ABEC 1505D73C 3C01800D */  lui        $at, %hi(D_800CC26C)
    /* 8ABF0 1505D740 A020C26C */  sb         $zero, %lo(D_800CC26C)($at)
    /* 8ABF4 1505D744 3C01800D */  lui        $at, %hi(D_800CC26D)
    /* 8ABF8 1505D748 A020C26D */  sb         $zero, %lo(D_800CC26D)($at)
    /* 8ABFC 1505D74C 8E4E0000 */  lw         $t6, 0x0($s2)
    /* 8AC00 1505D750 00137880 */  sll        $t7, $s3, 2
    /* 8AC04 1505D754 24150019 */  addiu      $s5, $zero, 0x19
    /* 8AC08 1505D758 168E0011 */  bne        $s4, $t6, .L1505D7A0
    /* 8AC0C 1505D75C 01F37823 */   subu      $t7, $t7, $s3
    /* 8AC10 1505D760 000F7880 */  sll        $t7, $t7, 2
    /* 8AC14 1505D764 01F37821 */  addu       $t7, $t7, $s3
    /* 8AC18 1505D768 000F7880 */  sll        $t7, $t7, 2
    /* 8AC1C 1505D76C 01F37823 */  subu       $t7, $t7, $s3
    /* 8AC20 1505D770 000F7880 */  sll        $t7, $t7, 2
    /* 8AC24 1505D774 01F37823 */  subu       $t7, $t7, $s3
    /* 8AC28 1505D778 000F7880 */  sll        $t7, $t7, 2
    /* 8AC2C 1505D77C 3C02800D */  lui        $v0, %hi(D_800CC5EC)
    /* 8AC30 1505D780 004F1021 */  addu       $v0, $v0, $t7
    /* 8AC34 1505D784 8C42C5EC */  lw         $v0, %lo(D_800CC5EC)($v0)
    /* 8AC38 1505D788 9058004E */  lbu        $t8, 0x4E($v0)
    /* 8AC3C 1505D78C 570000C5 */  bnel       $t8, $zero, .L1505DAA4
    /* 8AC40 1505D790 8FBF0084 */   lw        $ra, 0x84($sp)
    /* 8AC44 1505D794 90590027 */  lbu        $t9, 0x27($v0)
    /* 8AC48 1505D798 572000C2 */  bnel       $t9, $zero, .L1505DAA4
    /* 8AC4C 1505D79C 8FBF0084 */   lw        $ra, 0x84($sp)
  .L1505D7A0:
    /* 8AC50 1505D7A0 9248013D */  lbu        $t0, 0x13D($s2)
    /* 8AC54 1505D7A4 29010064 */  slti       $at, $t0, 0x64
    /* 8AC58 1505D7A8 502000BE */  beql       $at, $zero, .L1505DAA4
    /* 8AC5C 1505D7AC 8FBF0084 */   lw        $ra, 0x84($sp)
    /* 8AC60 1505D7B0 864300E4 */  lh         $v1, 0xE4($s2)
    /* 8AC64 1505D7B4 506000BB */  beql       $v1, $zero, .L1505DAA4
    /* 8AC68 1505D7B8 8FBF0084 */   lw        $ra, 0x84($sp)
    /* 8AC6C 1505D7BC 92490065 */  lbu        $t1, 0x65($s2)
    /* 8AC70 1505D7C0 552000B8 */  bnel       $t1, $zero, .L1505DAA4
    /* 8AC74 1505D7C4 8FBF0084 */   lw        $ra, 0x84($sp)
    /* 8AC78 1505D7C8 8E4200F8 */  lw         $v0, 0xF8($s2)
    /* 8AC7C 1505D7CC 000251C0 */  sll        $t2, $v0, 7
    /* 8AC80 1505D7D0 054000B3 */  bltz       $t2, .L1505DAA0
    /* 8AC84 1505D7D4 304B4000 */   andi      $t3, $v0, 0x4000
    /* 8AC88 1505D7D8 556000B2 */  bnel       $t3, $zero, .L1505DAA4
    /* 8AC8C 1505D7DC 8FBF0084 */   lw        $ra, 0x84($sp)
    /* 8AC90 1505D7E0 864C00E8 */  lh         $t4, 0xE8($s2)
    /* 8AC94 1505D7E4 44832000 */  mtc1       $v1, $f4
    /* 8AC98 1505D7E8 C6460018 */  lwc1       $f6, 0x18($s2)
    /* 8AC9C 1505D7EC 448C4000 */  mtc1       $t4, $f8
    /* 8ACA0 1505D7F0 00026980 */  sll        $t5, $v0, 6
    /* 8ACA4 1505D7F4 C65600EC */  lwc1       $f22, 0xEC($s2)
    /* 8ACA8 1505D7F8 468042A0 */  cvt.s.w    $f10, $f8
    /* 8ACAC 1505D7FC C6580014 */  lwc1       $f24, 0x14($s2)
    /* 8ACB0 1505D800 C65C001C */  lwc1       $f28, 0x1C($s2)
    /* 8ACB4 1505D804 3C10800D */  lui        $s0, %hi(D_800CC2D0)
    /* 8ACB8 1505D808 3C0142F0 */  lui        $at, (0x42F00000 >> 16)
    /* 8ACBC 1505D80C 46802520 */  cvt.s.w    $f20, $f4
    /* 8ACC0 1505D810 05A10002 */  bgez       $t5, .L1505D81C
    /* 8ACC4 1505D814 460A3680 */   add.s     $f26, $f6, $f10
    /* 8ACC8 1505D818 0280A825 */  or         $s5, $s4, $zero
  .L1505D81C:
    /* 8ACCC 1505D81C 1AA000A0 */  blez       $s5, .L1505DAA0
    /* 8ACD0 1505D820 00008825 */   or        $s1, $zero, $zero
    /* 8ACD4 1505D824 4481F000 */  mtc1       $at, $f30
    /* 8ACD8 1505D828 2610C2D0 */  addiu      $s0, $s0, %lo(D_800CC2D0)
  .L1505D82C:
    /* 8ACDC 1505D82C 8E040000 */  lw         $a0, 0x0($s0)
    /* 8ACE0 1505D830 50800099 */  beql       $a0, $zero, .L1505DA98
    /* 8ACE4 1505D834 26310001 */   addiu     $s1, $s1, 0x1
    /* 8ACE8 1505D838 860300E4 */  lh         $v1, 0xE4($s0)
    /* 8ACEC 1505D83C 28610002 */  slti       $at, $v1, 0x2
    /* 8ACF0 1505D840 54200095 */  bnel       $at, $zero, .L1505DA98
    /* 8ACF4 1505D844 26310001 */   addiu     $s1, $s1, 0x1
    /* 8ACF8 1505D848 8E0200F8 */  lw         $v0, 0xF8($s0)
    /* 8ACFC 1505D84C 00027180 */  sll        $t6, $v0, 6
    /* 8AD00 1505D850 05C10005 */  bgez       $t6, .L1505D868
    /* 8AD04 1505D854 0002C1C0 */   sll       $t8, $v0, 7
    /* 8AD08 1505D858 924F0127 */  lbu        $t7, 0x127($s2)
    /* 8AD0C 1505D85C 240100FF */  addiu      $at, $zero, 0xFF
    /* 8AD10 1505D860 51E1008D */  beql       $t7, $at, .L1505DA98
    /* 8AD14 1505D864 26310001 */   addiu     $s1, $s1, 0x1
  .L1505D868:
    /* 8AD18 1505D868 0702008B */  bltzl      $t8, .L1505DA98
    /* 8AD1C 1505D86C 26310001 */   addiu     $s1, $s1, 0x1
    /* 8AD20 1505D870 52330089 */  beql       $s1, $s3, .L1505DA98
    /* 8AD24 1505D874 26310001 */   addiu     $s1, $s1, 0x1
    /* 8AD28 1505D878 92080065 */  lbu        $t0, 0x65($s0)
    /* 8AD2C 1505D87C 26790001 */  addiu      $t9, $s3, 0x1
    /* 8AD30 1505D880 53280085 */  beql       $t9, $t0, .L1505DA98
    /* 8AD34 1505D884 26310001 */   addiu     $s1, $s1, 0x1
    /* 8AD38 1505D888 9209013D */  lbu        $t1, 0x13D($s0)
    /* 8AD3C 1505D88C 29210064 */  slti       $at, $t1, 0x64
    /* 8AD40 1505D890 50200081 */  beql       $at, $zero, .L1505DA98
    /* 8AD44 1505D894 26310001 */   addiu     $s1, $s1, 0x1
    /* 8AD48 1505D898 920A02FA */  lbu        $t2, 0x2FA($s0)
    /* 8AD4C 1505D89C 5140007E */  beql       $t2, $zero, .L1505DA98
    /* 8AD50 1505D8A0 26310001 */   addiu     $s1, $s1, 0x1
    /* 8AD54 1505D8A4 44832000 */  mtc1       $v1, $f4
    /* 8AD58 1505D8A8 860B00E8 */  lh         $t3, 0xE8($s0)
    /* 8AD5C 1505D8AC C6080014 */  lwc1       $f8, 0x14($s0)
    /* 8AD60 1505D8B0 468024A0 */  cvt.s.w    $f18, $f4
    /* 8AD64 1505D8B4 448B2000 */  mtc1       $t3, $f4
    /* 8AD68 1505D8B8 C606001C */  lwc1       $f6, 0x1C($s0)
    /* 8AD6C 1505D8BC C60A0018 */  lwc1       $f10, 0x18($s0)
    /* 8AD70 1505D8C0 3C013F00 */  lui        $at, (0x3F000000 >> 16)
    /* 8AD74 1505D8C4 4608C301 */  sub.s      $f12, $f24, $f8
    /* 8AD78 1505D8C8 3C0C800C */  lui        $t4, %hi(D_800BE616)
    /* 8AD7C 1505D8CC 918CE616 */  lbu        $t4, %lo(D_800BE616)($t4)
    /* 8AD80 1505D8D0 46802220 */  cvt.s.w    $f8, $f4
    /* 8AD84 1505D8D4 C60400EC */  lwc1       $f4, 0xEC($s0)
    /* 8AD88 1505D8D8 02002825 */  or         $a1, $s0, $zero
    /* 8AD8C 1505D8DC 4606E381 */  sub.s      $f14, $f28, $f6
    /* 8AD90 1505D8E0 46085180 */  add.s      $f6, $f10, $f8
    /* 8AD94 1505D8E4 44814000 */  mtc1       $at, $f8
    /* 8AD98 1505D8E8 4604B280 */  add.s      $f10, $f22, $f4
    /* 8AD9C 1505D8EC 4606D081 */  sub.s      $f2, $f26, $f6
    /* 8ADA0 1505D8F0 46085182 */  mul.s      $f6, $f10, $f8
    /* 8ADA4 1505D8F4 00000000 */  nop
    /* 8ADA8 1505D8F8 46061082 */  mul.s      $f2, $f2, $f6
    /* 8ADAC 1505D8FC 1180001F */  beqz       $t4, .L1505D97C
    /* 8ADB0 1505D900 00000000 */   nop
    /* 8ADB4 1505D904 460C6102 */  mul.s      $f4, $f12, $f12
    /* 8ADB8 1505D908 3C01800A */  lui        $at, %hi(D_80099530)
    /* 8ADBC 1505D90C 46021282 */  mul.s      $f10, $f2, $f2
    /* 8ADC0 1505D910 460A2200 */  add.s      $f8, $f4, $f10
    /* 8ADC4 1505D914 460E7182 */  mul.s      $f6, $f14, $f14
    /* 8ADC8 1505D918 C42A9530 */  lwc1       $f10, %lo(D_80099530)($at)
    /* 8ADCC 1505D91C 46064100 */  add.s      $f4, $f8, $f6
    /* 8ADD0 1505D920 460A203C */  c.lt.s     $f4, $f10
    /* 8ADD4 1505D924 00000000 */  nop
    /* 8ADD8 1505D928 45000014 */  bc1f       .L1505D97C
    /* 8ADDC 1505D92C 00000000 */   nop
    /* 8ADE0 1505D930 8E4D0000 */  lw         $t5, 0x0($s2)
    /* 8ADE4 1505D934 168D0011 */  bne        $s4, $t5, .L1505D97C
    /* 8ADE8 1505D938 00000000 */   nop
    /* 8ADEC 1505D93C 1684000F */  bne        $s4, $a0, .L1505D97C
    /* 8ADF0 1505D940 00000000 */   nop
    /* 8ADF4 1505D944 920E0128 */  lbu        $t6, 0x128($s0)
    /* 8ADF8 1505D948 924F0128 */  lbu        $t7, 0x128($s2)
    /* 8ADFC 1505D94C 11CF000B */  beq        $t6, $t7, .L1505D97C
    /* 8AE00 1505D950 00000000 */   nop
    /* 8AE04 1505D954 8E42031C */  lw         $v0, 0x31C($s2)
    /* 8AE08 1505D958 90580078 */  lbu        $t8, 0x78($v0)
    /* 8AE0C 1505D95C 17000007 */  bnez       $t8, .L1505D97C
    /* 8AE10 1505D960 00000000 */   nop
    /* 8AE14 1505D964 8E19031C */  lw         $t9, 0x31C($s0)
    /* 8AE18 1505D968 24090014 */  addiu      $t1, $zero, 0x14
    /* 8AE1C 1505D96C 93280078 */  lbu        $t0, 0x78($t9)
    /* 8AE20 1505D970 11000002 */  beqz       $t0, .L1505D97C
    /* 8AE24 1505D974 00000000 */   nop
    /* 8AE28 1505D978 A049004A */  sb         $t1, 0x4A($v0)
  .L1505D97C:
    /* 8AE2C 1505D97C 460C6202 */  mul.s      $f8, $f12, $f12
    /* 8AE30 1505D980 4612A000 */  add.s      $f0, $f20, $f18
    /* 8AE34 1505D984 02402025 */  or         $a0, $s2, $zero
    /* 8AE38 1505D988 46021182 */  mul.s      $f6, $f2, $f2
    /* 8AE3C 1505D98C 46064100 */  add.s      $f4, $f8, $f6
    /* 8AE40 1505D990 460E7282 */  mul.s      $f10, $f14, $f14
    /* 8AE44 1505D994 460A2400 */  add.s      $f16, $f4, $f10
    /* 8AE48 1505D998 46000202 */  mul.s      $f8, $f0, $f0
    /* 8AE4C 1505D99C 4608803C */  c.lt.s     $f16, $f8
    /* 8AE50 1505D9A0 00000000 */  nop
    /* 8AE54 1505D9A4 45020009 */  bc1fl      .L1505D9CC
    /* 8AE58 1505D9A8 920A0004 */   lbu       $t2, 0x4($s0)
    /* 8AE5C 1505D9AC 44066000 */  mfc1       $a2, $f12
    /* 8AE60 1505D9B0 44071000 */  mfc1       $a3, $f2
    /* 8AE64 1505D9B4 E7AE0010 */  swc1       $f14, 0x10($sp)
    /* 8AE68 1505D9B8 E7B00014 */  swc1       $f16, 0x14($sp)
    /* 8AE6C 1505D9BC E7A00018 */  swc1       $f0, 0x18($sp)
    /* 8AE70 1505D9C0 0D417502 */  jal        func_1505D408
    /* 8AE74 1505D9C4 AFB1001C */   sw        $s1, 0x1C($sp)
    /* 8AE78 1505D9C8 920A0004 */  lbu        $t2, 0x4($s0)
  .L1505D9CC:
    /* 8AE7C 1505D9CC 24010034 */  addiu      $at, $zero, 0x34
    /* 8AE80 1505D9D0 55410031 */  bnel       $t2, $at, .L1505DA98
    /* 8AE84 1505D9D4 26310001 */   addiu     $s1, $s1, 0x1
    /* 8AE88 1505D9D8 920B0251 */  lbu        $t3, 0x251($s0)
    /* 8AE8C 1505D9DC 24010002 */  addiu      $at, $zero, 0x2
    /* 8AE90 1505D9E0 02402025 */  or         $a0, $s2, $zero
    /* 8AE94 1505D9E4 15610016 */  bne        $t3, $at, .L1505DA40
    /* 8AE98 1505D9E8 02002825 */   or        $a1, $s0, $zero
    /* 8AE9C 1505D9EC 3C01437A */  lui        $at, (0x437A0000 >> 16)
    /* 8AEA0 1505D9F0 44813000 */  mtc1       $at, $f6
    /* 8AEA4 1505D9F4 3C01C302 */  lui        $at, (0xC3020000 >> 16)
    /* 8AEA8 1505D9F8 44812000 */  mtc1       $at, $f4
    /* 8AEAC 1505D9FC 44805000 */  mtc1       $zero, $f10
    /* 8AEB0 1505DA00 4406C000 */  mfc1       $a2, $f24
    /* 8AEB4 1505DA04 4407D000 */  mfc1       $a3, $f26
    /* 8AEB8 1505DA08 02402025 */  or         $a0, $s2, $zero
    /* 8AEBC 1505DA0C 02002825 */  or         $a1, $s0, $zero
    /* 8AEC0 1505DA10 E7BC0010 */  swc1       $f28, 0x10($sp)
    /* 8AEC4 1505DA14 E7B60014 */  swc1       $f22, 0x14($sp)
    /* 8AEC8 1505DA18 E7B40018 */  swc1       $f20, 0x18($sp)
    /* 8AECC 1505DA1C AFB1001C */  sw         $s1, 0x1C($sp)
    /* 8AED0 1505DA20 E7BE0020 */  swc1       $f30, 0x20($sp)
    /* 8AED4 1505DA24 E7BE0028 */  swc1       $f30, 0x28($sp)
    /* 8AED8 1505DA28 E7A60024 */  swc1       $f6, 0x24($sp)
    /* 8AEDC 1505DA2C E7A4002C */  swc1       $f4, 0x2C($sp)
    /* 8AEE0 1505DA30 0D417574 */  jal        func_1505D5D0
    /* 8AEE4 1505DA34 E7AA0030 */   swc1      $f10, 0x30($sp)
    /* 8AEE8 1505DA38 10000017 */  b          .L1505DA98
    /* 8AEEC 1505DA3C 26310001 */   addiu     $s1, $s1, 0x1
  .L1505DA40:
    /* 8AEF0 1505DA40 3C014302 */  lui        $at, (0x43020000 >> 16)
    /* 8AEF4 1505DA44 44814000 */  mtc1       $at, $f8
    /* 8AEF8 1505DA48 3C01430C */  lui        $at, (0x430C0000 >> 16)
    /* 8AEFC 1505DA4C 44813000 */  mtc1       $at, $f6
    /* 8AF00 1505DA50 3C01437A */  lui        $at, (0x437A0000 >> 16)
    /* 8AF04 1505DA54 44812000 */  mtc1       $at, $f4
    /* 8AF08 1505DA58 3C01C248 */  lui        $at, (0xC2480000 >> 16)
    /* 8AF0C 1505DA5C E7A80020 */  swc1       $f8, 0x20($sp)
    /* 8AF10 1505DA60 44804000 */  mtc1       $zero, $f8
    /* 8AF14 1505DA64 44815000 */  mtc1       $at, $f10
    /* 8AF18 1505DA68 4406C000 */  mfc1       $a2, $f24
    /* 8AF1C 1505DA6C 4407D000 */  mfc1       $a3, $f26
    /* 8AF20 1505DA70 E7BC0010 */  swc1       $f28, 0x10($sp)
    /* 8AF24 1505DA74 E7B60014 */  swc1       $f22, 0x14($sp)
    /* 8AF28 1505DA78 E7B40018 */  swc1       $f20, 0x18($sp)
    /* 8AF2C 1505DA7C AFB1001C */  sw         $s1, 0x1C($sp)
    /* 8AF30 1505DA80 E7A60024 */  swc1       $f6, 0x24($sp)
    /* 8AF34 1505DA84 E7A40028 */  swc1       $f4, 0x28($sp)
    /* 8AF38 1505DA88 E7A80030 */  swc1       $f8, 0x30($sp)
    /* 8AF3C 1505DA8C 0D417574 */  jal        func_1505D5D0
    /* 8AF40 1505DA90 E7AA002C */   swc1      $f10, 0x2C($sp)
    /* 8AF44 1505DA94 26310001 */  addiu      $s1, $s1, 0x1
  .L1505DA98:
    /* 8AF48 1505DA98 1635FF64 */  bne        $s1, $s5, .L1505D82C
    /* 8AF4C 1505DA9C 2610032C */   addiu     $s0, $s0, 0x32C
  .L1505DAA0:
    /* 8AF50 1505DAA0 8FBF0084 */  lw         $ra, 0x84($sp)
  .L1505DAA4:
    /* 8AF54 1505DAA4 D7B40038 */  ldc1       $f20, 0x38($sp)
    /* 8AF58 1505DAA8 D7B60040 */  ldc1       $f22, 0x40($sp)
    /* 8AF5C 1505DAAC D7B80048 */  ldc1       $f24, 0x48($sp)
    /* 8AF60 1505DAB0 D7BA0050 */  ldc1       $f26, 0x50($sp)
    /* 8AF64 1505DAB4 D7BC0058 */  ldc1       $f28, 0x58($sp)
    /* 8AF68 1505DAB8 D7BE0060 */  ldc1       $f30, 0x60($sp)
    /* 8AF6C 1505DABC 8FB0006C */  lw         $s0, 0x6C($sp)
    /* 8AF70 1505DAC0 8FB10070 */  lw         $s1, 0x70($sp)
    /* 8AF74 1505DAC4 8FB20074 */  lw         $s2, 0x74($sp)
    /* 8AF78 1505DAC8 8FB30078 */  lw         $s3, 0x78($sp)
    /* 8AF7C 1505DACC 8FB4007C */  lw         $s4, 0x7C($sp)
    /* 8AF80 1505DAD0 8FB50080 */  lw         $s5, 0x80($sp)
    /* 8AF84 1505DAD4 03E00008 */  jr         $ra
    /* 8AF88 1505DAD8 27BD0088 */   addiu     $sp, $sp, 0x88
endlabel func_1505D6F0
