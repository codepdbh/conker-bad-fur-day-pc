nonmatching func_1513D6FC, 0x404

glabel func_1513D6FC
    /* 16ABAC 1513D6FC 27BDFF40 */  addiu      $sp, $sp, -0xC0
    /* 16ABB0 1513D700 AFB00018 */  sw         $s0, 0x18($sp)
    /* 16ABB4 1513D704 00808025 */  or         $s0, $a0, $zero
    /* 16ABB8 1513D708 AFBF001C */  sw         $ra, 0x1C($sp)
    /* 16ABBC 1513D70C AFA500C4 */  sw         $a1, 0xC4($sp)
    /* 16ABC0 1513D710 AFA600C8 */  sw         $a2, 0xC8($sp)
    /* 16ABC4 1513D714 AFA700CC */  sw         $a3, 0xCC($sp)
    /* 16ABC8 1513D718 93AE00DB */  lbu        $t6, 0xDB($sp)
    /* 16ABCC 1513D71C 87A400C6 */  lh         $a0, 0xC6($sp)
    /* 16ABD0 1513D720 11C0009A */  beqz       $t6, .L1513D98C
    /* 16ABD4 1513D724 2484FFC0 */   addiu     $a0, $a0, -0x40
    /* 16ABD8 1513D728 87A400C6 */  lh         $a0, 0xC6($sp)
    /* 16ABDC 1513D72C 2484FFC0 */  addiu      $a0, $a0, -0x40
    /* 16ABE0 1513D730 308F00FF */  andi       $t7, $a0, 0xFF
    /* 16ABE4 1513D734 0D4508F6 */  jal        func_151423D8
    /* 16ABE8 1513D738 01E02025 */   or        $a0, $t7, $zero
    /* 16ABEC 1513D73C E7A000B4 */  swc1       $f0, 0xB4($sp)
    /* 16ABF0 1513D740 0D4508F6 */  jal        func_151423D8
    /* 16ABF4 1513D744 93A400C7 */   lbu       $a0, 0xC7($sp)
    /* 16ABF8 1513D748 C7A400C8 */  lwc1       $f4, 0xC8($sp)
    /* 16ABFC 1513D74C C7A800CC */  lwc1       $f8, 0xCC($sp)
    /* 16AC00 1513D750 8FA400D0 */  lw         $a0, 0xD0($sp)
    /* 16AC04 1513D754 46002182 */  mul.s      $f6, $f4, $f0
    /* 16AC08 1513D758 8FA500D4 */  lw         $a1, 0xD4($sp)
    /* 16AC0C 1513D75C 27A600BC */  addiu      $a2, $sp, 0xBC
    /* 16AC10 1513D760 46004382 */  mul.s      $f14, $f8, $f0
    /* 16AC14 1513D764 27A700B8 */  addiu      $a3, $sp, 0xB8
    /* 16AC18 1513D768 E7A600AC */  swc1       $f6, 0xAC($sp)
    /* 16AC1C 1513D76C 0D4438E2 */  jal        func_1510E388
    /* 16AC20 1513D770 E7AE00A4 */   swc1      $f14, 0xA4($sp)
    /* 16AC24 1513D774 14400003 */  bnez       $v0, .L1513D784
    /* 16AC28 1513D778 C7AE00A4 */   lwc1      $f14, 0xA4($sp)
    /* 16AC2C 1513D77C 100000DB */  b          .L1513DAEC
    /* 16AC30 1513D780 00001025 */   or        $v0, $zero, $zero
  .L1513D784:
    /* 16AC34 1513D784 C7A400B8 */  lwc1       $f4, 0xB8($sp)
    /* 16AC38 1513D788 46007285 */  abs.s      $f10, $f14
    /* 16AC3C 1513D78C 46047482 */  mul.s      $f18, $f14, $f4
    /* 16AC40 1513D790 E7AA002C */  swc1       $f10, 0x2C($sp)
    /* 16AC44 1513D794 460E7182 */  mul.s      $f6, $f14, $f14
    /* 16AC48 1513D798 00000000 */  nop
    /* 16AC4C 1513D79C 46129202 */  mul.s      $f8, $f18, $f18
    /* 16AC50 1513D7A0 46083280 */  add.s      $f10, $f6, $f8
    /* 16AC54 1513D7A4 C7A800B4 */  lwc1       $f8, 0xB4($sp)
    /* 16AC58 1513D7A8 C7A600CC */  lwc1       $f6, 0xCC($sp)
    /* 16AC5C 1513D7AC 46005104 */  sqrt.s     $f4, $f10
    /* 16AC60 1513D7B0 44805000 */  mtc1       $zero, $f10
    /* 16AC64 1513D7B4 46083402 */  mul.s      $f16, $f6, $f8
    /* 16AC68 1513D7B8 E7A40028 */  swc1       $f4, 0x28($sp)
    /* 16AC6C 1513D7BC C7A400BC */  lwc1       $f4, 0xBC($sp)
    /* 16AC70 1513D7C0 460A8032 */  c.eq.s     $f16, $f10
    /* 16AC74 1513D7C4 00000000 */  nop
    /* 16AC78 1513D7C8 4501000C */  bc1t       .L1513D7FC
    /* 16AC7C 1513D7CC 00000000 */   nop
    /* 16AC80 1513D7D0 46048302 */  mul.s      $f12, $f16, $f4
    /* 16AC84 1513D7D4 46008085 */  abs.s      $f2, $f16
    /* 16AC88 1513D7D8 46108182 */  mul.s      $f6, $f16, $f16
    /* 16AC8C 1513D7DC 00000000 */  nop
    /* 16AC90 1513D7E0 460C6202 */  mul.s      $f8, $f12, $f12
    /* 16AC94 1513D7E4 E7AC008C */  swc1       $f12, 0x8C($sp)
    /* 16AC98 1513D7E8 46083000 */  add.s      $f0, $f6, $f8
    /* 16AC9C 1513D7EC 46000004 */  sqrt.s     $f0, $f0
    /* 16ACA0 1513D7F0 46001283 */  div.s      $f10, $f2, $f0
    /* 16ACA4 1513D7F4 10000005 */  b          .L1513D80C
    /* 16ACA8 1513D7F8 E7AA0088 */   swc1      $f10, 0x88($sp)
  .L1513D7FC:
    /* 16ACAC 1513D7FC 44802000 */  mtc1       $zero, $f4
    /* 16ACB0 1513D800 44803000 */  mtc1       $zero, $f6
    /* 16ACB4 1513D804 E7A4008C */  swc1       $f4, 0x8C($sp)
    /* 16ACB8 1513D808 E7A60088 */  swc1       $f6, 0x88($sp)
  .L1513D80C:
    /* 16ACBC 1513D80C 44804000 */  mtc1       $zero, $f8
    /* 16ACC0 1513D810 00000000 */  nop
    /* 16ACC4 1513D814 46087032 */  c.eq.s     $f14, $f8
    /* 16ACC8 1513D818 00000000 */  nop
    /* 16ACCC 1513D81C 45030007 */  bc1tl      .L1513D83C
    /* 16ACD0 1513D820 44805000 */   mtc1      $zero, $f10
    /* 16ACD4 1513D824 C7A2002C */  lwc1       $f2, 0x2C($sp)
    /* 16ACD8 1513D828 C7A00028 */  lwc1       $f0, 0x28($sp)
    /* 16ACDC 1513D82C E7B20084 */  swc1       $f18, 0x84($sp)
    /* 16ACE0 1513D830 10000004 */  b          .L1513D844
    /* 16ACE4 1513D834 46001303 */   div.s     $f12, $f2, $f0
    /* 16ACE8 1513D838 44805000 */  mtc1       $zero, $f10
  .L1513D83C:
    /* 16ACEC 1513D83C 44806000 */  mtc1       $zero, $f12
    /* 16ACF0 1513D840 E7AA0084 */  swc1       $f10, 0x84($sp)
  .L1513D844:
    /* 16ACF4 1513D844 C7A40088 */  lwc1       $f4, 0x88($sp)
    /* 16ACF8 1513D848 3C013F00 */  lui        $at, (0x3F000000 >> 16)
    /* 16ACFC 1513D84C 46102182 */  mul.s      $f6, $f4, $f16
    /* 16AD00 1513D850 E6060000 */  swc1       $f6, 0x0($s0)
    /* 16AD04 1513D854 C7AA008C */  lwc1       $f10, 0x8C($sp)
    /* 16AD08 1513D858 C7A80088 */  lwc1       $f8, 0x88($sp)
    /* 16AD0C 1513D85C C7A60084 */  lwc1       $f6, 0x84($sp)
    /* 16AD10 1513D860 460A4102 */  mul.s      $f4, $f8, $f10
    /* 16AD14 1513D864 00000000 */  nop
    /* 16AD18 1513D868 46066202 */  mul.s      $f8, $f12, $f6
    /* 16AD1C 1513D86C 44813000 */  mtc1       $at, $f6
    /* 16AD20 1513D870 46082280 */  add.s      $f10, $f4, $f8
    /* 16AD24 1513D874 460E6202 */  mul.s      $f8, $f12, $f14
    /* 16AD28 1513D878 46065100 */  add.s      $f4, $f10, $f6
    /* 16AD2C 1513D87C E6080008 */  swc1       $f8, 0x8($s0)
    /* 16AD30 1513D880 E6040004 */  swc1       $f4, 0x4($s0)
    /* 16AD34 1513D884 C7A600B4 */  lwc1       $f6, 0xB4($sp)
    /* 16AD38 1513D888 C7AA00C8 */  lwc1       $f10, 0xC8($sp)
    /* 16AD3C 1513D88C C7A800B8 */  lwc1       $f8, 0xB8($sp)
    /* 16AD40 1513D890 46065482 */  mul.s      $f18, $f10, $f6
    /* 16AD44 1513D894 46009487 */  neg.s      $f18, $f18
    /* 16AD48 1513D898 46089082 */  mul.s      $f2, $f18, $f8
    /* 16AD4C 1513D89C 46009105 */  abs.s      $f4, $f18
    /* 16AD50 1513D8A0 46129282 */  mul.s      $f10, $f18, $f18
    /* 16AD54 1513D8A4 E7A40028 */  swc1       $f4, 0x28($sp)
    /* 16AD58 1513D8A8 46021182 */  mul.s      $f6, $f2, $f2
    /* 16AD5C 1513D8AC E7A2002C */  swc1       $f2, 0x2C($sp)
    /* 16AD60 1513D8B0 46065100 */  add.s      $f4, $f10, $f6
    /* 16AD64 1513D8B4 44803000 */  mtc1       $zero, $f6
    /* 16AD68 1513D8B8 C7AA00AC */  lwc1       $f10, 0xAC($sp)
    /* 16AD6C 1513D8BC 46002204 */  sqrt.s     $f8, $f4
    /* 16AD70 1513D8C0 C7A400BC */  lwc1       $f4, 0xBC($sp)
    /* 16AD74 1513D8C4 46065032 */  c.eq.s     $f10, $f6
    /* 16AD78 1513D8C8 E7A80024 */  swc1       $f8, 0x24($sp)
    /* 16AD7C 1513D8CC 4501000C */  bc1t       .L1513D900
    /* 16AD80 1513D8D0 00000000 */   nop
    /* 16AD84 1513D8D4 46045302 */  mul.s      $f12, $f10, $f4
    /* 16AD88 1513D8D8 46005085 */  abs.s      $f2, $f10
    /* 16AD8C 1513D8DC 46005406 */  mov.s      $f16, $f10
    /* 16AD90 1513D8E0 460A5202 */  mul.s      $f8, $f10, $f10
    /* 16AD94 1513D8E4 00000000 */  nop
    /* 16AD98 1513D8E8 460C6182 */  mul.s      $f6, $f12, $f12
    /* 16AD9C 1513D8EC E7AC008C */  swc1       $f12, 0x8C($sp)
    /* 16ADA0 1513D8F0 46064000 */  add.s      $f0, $f8, $f6
    /* 16ADA4 1513D8F4 46000004 */  sqrt.s     $f0, $f0
    /* 16ADA8 1513D8F8 10000006 */  b          .L1513D914
    /* 16ADAC 1513D8FC 46001383 */   div.s     $f14, $f2, $f0
  .L1513D900:
    /* 16ADB0 1513D900 44805000 */  mtc1       $zero, $f10
    /* 16ADB4 1513D904 44807000 */  mtc1       $zero, $f14
    /* 16ADB8 1513D908 C7B000AC */  lwc1       $f16, 0xAC($sp)
    /* 16ADBC 1513D90C E7AA008C */  swc1       $f10, 0x8C($sp)
    /* 16ADC0 1513D910 E7AE0088 */  swc1       $f14, 0x88($sp)
  .L1513D914:
    /* 16ADC4 1513D914 44804000 */  mtc1       $zero, $f8
    /* 16ADC8 1513D918 46107282 */  mul.s      $f10, $f14, $f16
    /* 16ADCC 1513D91C C7A6002C */  lwc1       $f6, 0x2C($sp)
    /* 16ADD0 1513D920 46089032 */  c.eq.s     $f18, $f8
    /* 16ADD4 1513D924 00000000 */  nop
    /* 16ADD8 1513D928 45030007 */  bc1tl      .L1513D948
    /* 16ADDC 1513D92C 44806000 */   mtc1      $zero, $f12
    /* 16ADE0 1513D930 C7A20028 */  lwc1       $f2, 0x28($sp)
    /* 16ADE4 1513D934 C7A00024 */  lwc1       $f0, 0x24($sp)
    /* 16ADE8 1513D938 E7A60084 */  swc1       $f6, 0x84($sp)
    /* 16ADEC 1513D93C 10000004 */  b          .L1513D950
    /* 16ADF0 1513D940 46001303 */   div.s     $f12, $f2, $f0
    /* 16ADF4 1513D944 44806000 */  mtc1       $zero, $f12
  .L1513D948:
    /* 16ADF8 1513D948 00000000 */  nop
    /* 16ADFC 1513D94C E7AC0084 */  swc1       $f12, 0x84($sp)
  .L1513D950:
    /* 16AE00 1513D950 E60A000C */  swc1       $f10, 0xC($s0)
    /* 16AE04 1513D954 C7A4008C */  lwc1       $f4, 0x8C($sp)
    /* 16AE08 1513D958 C7A60084 */  lwc1       $f6, 0x84($sp)
    /* 16AE0C 1513D95C 3C013F00 */  lui        $at, (0x3F000000 >> 16)
    /* 16AE10 1513D960 46047202 */  mul.s      $f8, $f14, $f4
    /* 16AE14 1513D964 00000000 */  nop
    /* 16AE18 1513D968 46066282 */  mul.s      $f10, $f12, $f6
    /* 16AE1C 1513D96C 44813000 */  mtc1       $at, $f6
    /* 16AE20 1513D970 460A4100 */  add.s      $f4, $f8, $f10
    /* 16AE24 1513D974 46126282 */  mul.s      $f10, $f12, $f18
    /* 16AE28 1513D978 46062200 */  add.s      $f8, $f4, $f6
    /* 16AE2C 1513D97C E60A0014 */  swc1       $f10, 0x14($s0)
    /* 16AE30 1513D980 E6080010 */  swc1       $f8, 0x10($s0)
    /* 16AE34 1513D984 10000059 */  b          .L1513DAEC
    /* 16AE38 1513D988 24020001 */   addiu     $v0, $zero, 0x1
  .L1513D98C:
    /* 16AE3C 1513D98C 309800FF */  andi       $t8, $a0, 0xFF
    /* 16AE40 1513D990 0D4508F6 */  jal        func_151423D8
    /* 16AE44 1513D994 03002025 */   or        $a0, $t8, $zero
    /* 16AE48 1513D998 E7A0007C */  swc1       $f0, 0x7C($sp)
    /* 16AE4C 1513D99C 0D4508F6 */  jal        func_151423D8
    /* 16AE50 1513D9A0 93A400C7 */   lbu       $a0, 0xC7($sp)
    /* 16AE54 1513D9A4 E7A00078 */  swc1       $f0, 0x78($sp)
    /* 16AE58 1513D9A8 8FA400D4 */  lw         $a0, 0xD4($sp)
    /* 16AE5C 1513D9AC 27A5006C */  addiu      $a1, $sp, 0x6C
    /* 16AE60 1513D9B0 27A60060 */  addiu      $a2, $sp, 0x60
    /* 16AE64 1513D9B4 0D4513A0 */  jal        func_15144E80
    /* 16AE68 1513D9B8 27A70054 */   addiu     $a3, $sp, 0x54
    /* 16AE6C 1513D9BC 14400003 */  bnez       $v0, .L1513D9CC
    /* 16AE70 1513D9C0 27A4006C */   addiu     $a0, $sp, 0x6C
    /* 16AE74 1513D9C4 10000049 */  b          .L1513DAEC
    /* 16AE78 1513D9C8 00001025 */   or        $v0, $zero, $zero
  .L1513D9CC:
    /* 16AE7C 1513D9CC 00802825 */  or         $a1, $a0, $zero
    /* 16AE80 1513D9D0 27A60050 */  addiu      $a2, $sp, 0x50
    /* 16AE84 1513D9D4 0D45144A */  jal        func_15145128
    /* 16AE88 1513D9D8 27A7004C */   addiu     $a3, $sp, 0x4C
    /* 16AE8C 1513D9DC 14400003 */  bnez       $v0, .L1513D9EC
    /* 16AE90 1513D9E0 27A40060 */   addiu     $a0, $sp, 0x60
    /* 16AE94 1513D9E4 10000041 */  b          .L1513DAEC
    /* 16AE98 1513D9E8 00001025 */   or        $v0, $zero, $zero
  .L1513D9EC:
    /* 16AE9C 1513D9EC 00802825 */  or         $a1, $a0, $zero
    /* 16AEA0 1513D9F0 27A60050 */  addiu      $a2, $sp, 0x50
    /* 16AEA4 1513D9F4 0D45144A */  jal        func_15145128
    /* 16AEA8 1513D9F8 27A7004C */   addiu     $a3, $sp, 0x4C
    /* 16AEAC 1513D9FC 14400003 */  bnez       $v0, .L1513DA0C
    /* 16AEB0 1513DA00 C7B0007C */   lwc1      $f16, 0x7C($sp)
    /* 16AEB4 1513DA04 10000039 */  b          .L1513DAEC
    /* 16AEB8 1513DA08 00001025 */   or        $v0, $zero, $zero
  .L1513DA0C:
    /* 16AEBC 1513DA0C C7B20078 */  lwc1       $f18, 0x78($sp)
    /* 16AEC0 1513DA10 C7A400C8 */  lwc1       $f4, 0xC8($sp)
    /* 16AEC4 1513DA14 C7A6006C */  lwc1       $f6, 0x6C($sp)
    /* 16AEC8 1513DA18 C7AA0060 */  lwc1       $f10, 0x60($sp)
    /* 16AECC 1513DA1C 46122002 */  mul.s      $f0, $f4, $f18
    /* 16AED0 1513DA20 00000000 */  nop
    /* 16AED4 1513DA24 46102082 */  mul.s      $f2, $f4, $f16
    /* 16AED8 1513DA28 00000000 */  nop
    /* 16AEDC 1513DA2C 46060202 */  mul.s      $f8, $f0, $f6
    /* 16AEE0 1513DA30 00000000 */  nop
    /* 16AEE4 1513DA34 460A1102 */  mul.s      $f4, $f2, $f10
    /* 16AEE8 1513DA38 46044180 */  add.s      $f6, $f8, $f4
    /* 16AEEC 1513DA3C E6060000 */  swc1       $f6, 0x0($s0)
    /* 16AEF0 1513DA40 C7AA0070 */  lwc1       $f10, 0x70($sp)
    /* 16AEF4 1513DA44 C7A40064 */  lwc1       $f4, 0x64($sp)
    /* 16AEF8 1513DA48 460A0202 */  mul.s      $f8, $f0, $f10
    /* 16AEFC 1513DA4C 00000000 */  nop
    /* 16AF00 1513DA50 46041182 */  mul.s      $f6, $f2, $f4
    /* 16AF04 1513DA54 46064280 */  add.s      $f10, $f8, $f6
    /* 16AF08 1513DA58 E60A0004 */  swc1       $f10, 0x4($s0)
    /* 16AF0C 1513DA5C C7A40074 */  lwc1       $f4, 0x74($sp)
    /* 16AF10 1513DA60 C7A60068 */  lwc1       $f6, 0x68($sp)
    /* 16AF14 1513DA64 46040202 */  mul.s      $f8, $f0, $f4
    /* 16AF18 1513DA68 00000000 */  nop
    /* 16AF1C 1513DA6C 46061282 */  mul.s      $f10, $f2, $f6
    /* 16AF20 1513DA70 460A4100 */  add.s      $f4, $f8, $f10
    /* 16AF24 1513DA74 E6040008 */  swc1       $f4, 0x8($s0)
    /* 16AF28 1513DA78 C7A600CC */  lwc1       $f6, 0xCC($sp)
    /* 16AF2C 1513DA7C C7AA006C */  lwc1       $f10, 0x6C($sp)
    /* 16AF30 1513DA80 46003207 */  neg.s      $f8, $f6
    /* 16AF34 1513DA84 46104302 */  mul.s      $f12, $f8, $f16
    /* 16AF38 1513DA88 C7A80060 */  lwc1       $f8, 0x60($sp)
    /* 16AF3C 1513DA8C 46123382 */  mul.s      $f14, $f6, $f18
    /* 16AF40 1513DA90 00000000 */  nop
    /* 16AF44 1513DA94 460A6102 */  mul.s      $f4, $f12, $f10
    /* 16AF48 1513DA98 00000000 */  nop
    /* 16AF4C 1513DA9C 46087182 */  mul.s      $f6, $f14, $f8
    /* 16AF50 1513DAA0 46062280 */  add.s      $f10, $f4, $f6
    /* 16AF54 1513DAA4 E60A000C */  swc1       $f10, 0xC($s0)
    /* 16AF58 1513DAA8 C7A80070 */  lwc1       $f8, 0x70($sp)
    /* 16AF5C 1513DAAC C7A60064 */  lwc1       $f6, 0x64($sp)
    /* 16AF60 1513DAB0 46086102 */  mul.s      $f4, $f12, $f8
    /* 16AF64 1513DAB4 00000000 */  nop
    /* 16AF68 1513DAB8 46067282 */  mul.s      $f10, $f14, $f6
    /* 16AF6C 1513DABC 460A2200 */  add.s      $f8, $f4, $f10
    /* 16AF70 1513DAC0 E6080010 */  swc1       $f8, 0x10($s0)
    /* 16AF74 1513DAC4 C7A60074 */  lwc1       $f6, 0x74($sp)
    /* 16AF78 1513DAC8 C7AA0068 */  lwc1       $f10, 0x68($sp)
    /* 16AF7C 1513DACC 46066102 */  mul.s      $f4, $f12, $f6
    /* 16AF80 1513DAD0 00000000 */  nop
    /* 16AF84 1513DAD4 460A7202 */  mul.s      $f8, $f14, $f10
    /* 16AF88 1513DAD8 46082180 */  add.s      $f6, $f4, $f8
    /* 16AF8C 1513DADC E6060014 */  swc1       $f6, 0x14($s0)
    /* 16AF90 1513DAE0 10000002 */  b          .L1513DAEC
    /* 16AF94 1513DAE4 24020001 */   addiu     $v0, $zero, 0x1
    /* 16AF98 1513DAE8 24020001 */  addiu      $v0, $zero, 0x1
  .L1513DAEC:
    /* 16AF9C 1513DAEC 8FBF001C */  lw         $ra, 0x1C($sp)
    /* 16AFA0 1513DAF0 8FB00018 */  lw         $s0, 0x18($sp)
    /* 16AFA4 1513DAF4 27BD00C0 */  addiu      $sp, $sp, 0xC0
    /* 16AFA8 1513DAF8 03E00008 */  jr         $ra
    /* 16AFAC 1513DAFC 00000000 */   nop
endlabel func_1513D6FC
