nonmatching func_1001ED6C, 0x520

glabel func_1001ED6C
    /* 1ED6C 1001ED6C 27BDFFD0 */  addiu      $sp, $sp, -0x30
    /* 1ED70 1001ED70 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 1ED74 1001ED74 AFA40030 */  sw         $a0, 0x30($sp)
    /* 1ED78 1001ED78 AFA50034 */  sw         $a1, 0x34($sp)
    /* 1ED7C 1001ED7C AFA60038 */  sw         $a2, 0x38($sp)
    /* 1ED80 1001ED80 8FAE0030 */  lw         $t6, 0x30($sp)
    /* 1ED84 1001ED84 AFAE002C */  sw         $t6, 0x2C($sp)
    /* 1ED88 1001ED88 8FAF0034 */  lw         $t7, 0x34($sp)
    /* 1ED8C 1001ED8C 31F80007 */  andi       $t8, $t7, 0x7
    /* 1ED90 1001ED90 AFB80028 */  sw         $t8, 0x28($sp)
    /* 1ED94 1001ED94 8FB90034 */  lw         $t9, 0x34($sp)
    /* 1ED98 1001ED98 001940C3 */  sra        $t0, $t9, 3
    /* 1ED9C 1001ED9C AFA80024 */  sw         $t0, 0x24($sp)
    /* 1EDA0 1001EDA0 8FA90038 */  lw         $t1, 0x38($sp)
    /* 1EDA4 1001EDA4 8D2A0000 */  lw         $t2, 0x0($t1)
    /* 1EDA8 1001EDA8 AFAA0020 */  sw         $t2, 0x20($sp)
    /* 1EDAC 1001EDAC 8FAC002C */  lw         $t4, 0x2C($sp)
    /* 1EDB0 1001EDB0 8FAB0024 */  lw         $t3, 0x24($sp)
    /* 1EDB4 1001EDB4 918D0008 */  lbu        $t5, 0x8($t4)
    /* 1EDB8 1001EDB8 016D082A */  slt        $at, $t3, $t5
    /* 1EDBC 1001EDBC 14200003 */  bnez       $at, .L1001EDCC
    /* 1EDC0 1001EDC0 00000000 */   nop
    /* 1EDC4 1001EDC4 1000012D */  b          .L1001F27C
    /* 1EDC8 1001EDC8 00001025 */   or        $v0, $zero, $zero
  .L1001EDCC:
    /* 1EDCC 1001EDCC 8FAE0028 */  lw         $t6, 0x28($sp)
    /* 1EDD0 1001EDD0 2DC10008 */  sltiu      $at, $t6, 0x8
    /* 1EDD4 1001EDD4 10200095 */  beqz       $at, .L1001F02C
    /* 1EDD8 1001EDD8 00000000 */   nop
    /* 1EDDC 1001EDDC 000E7080 */  sll        $t6, $t6, 2
    /* 1EDE0 1001EDE0 3C018003 */  lui        $at, %hi(jtbl_8002C7A4)
    /* 1EDE4 1001EDE4 002E0821 */  addu       $at, $at, $t6
    /* 1EDE8 1001EDE8 8C2EC7A4 */  lw         $t6, %lo(jtbl_8002C7A4)($at)
    /* 1EDEC 1001EDEC 01C00008 */  jr         $t6
    /* 1EDF0 1001EDF0 00000000 */   nop
  jlabel .L1001EDF4
    /* 1EDF4 1001EDF4 3C188003 */  lui        $t8, %hi(n_syn)
    /* 1EDF8 1001EDF8 8F18BA44 */  lw         $t8, %lo(n_syn)($t8)
    /* 1EDFC 1001EDFC 8FAF0020 */  lw         $t7, 0x20($sp)
    /* 1EE00 1001EE00 240103E8 */  addiu      $at, $zero, 0x3E8
    /* 1EE04 1001EE04 8F190054 */  lw         $t9, 0x54($t8)
    /* 1EE08 1001EE08 8FAC002C */  lw         $t4, 0x2C($sp)
    /* 1EE0C 1001EE0C 8FAD0024 */  lw         $t5, 0x24($sp)
    /* 1EE10 1001EE10 01F90019 */  multu      $t7, $t9
    /* 1EE14 1001EE14 8D8B0004 */  lw         $t3, 0x4($t4)
    /* 1EE18 1001EE18 000D7080 */  sll        $t6, $t5, 2
    /* 1EE1C 1001EE1C 01CD7021 */  addu       $t6, $t6, $t5
    /* 1EE20 1001EE20 000E70C0 */  sll        $t6, $t6, 3
    /* 1EE24 1001EE24 016EC021 */  addu       $t8, $t3, $t6
    /* 1EE28 1001EE28 00004012 */  mflo       $t0
    /* 1EE2C 1001EE2C 00000000 */  nop
    /* 1EE30 1001EE30 00000000 */  nop
    /* 1EE34 1001EE34 0101001A */  div        $zero, $t0, $at
    /* 1EE38 1001EE38 00004812 */  mflo       $t1
    /* 1EE3C 1001EE3C 2401FFF8 */  addiu      $at, $zero, -0x8
    /* 1EE40 1001EE40 01215024 */  and        $t2, $t1, $at
    /* 1EE44 1001EE44 AF0A0000 */  sw         $t2, 0x0($t8)
    /* 1EE48 1001EE48 10000078 */  b          .L1001F02C
    /* 1EE4C 1001EE4C 00000000 */   nop
  jlabel .L1001EE50
    /* 1EE50 1001EE50 3C198003 */  lui        $t9, %hi(n_syn)
    /* 1EE54 1001EE54 8F39BA44 */  lw         $t9, %lo(n_syn)($t9)
    /* 1EE58 1001EE58 8FAF0020 */  lw         $t7, 0x20($sp)
    /* 1EE5C 1001EE5C 240103E8 */  addiu      $at, $zero, 0x3E8
    /* 1EE60 1001EE60 8F280054 */  lw         $t0, 0x54($t9)
    /* 1EE64 1001EE64 8FAB002C */  lw         $t3, 0x2C($sp)
    /* 1EE68 1001EE68 8FAA0024 */  lw         $t2, 0x24($sp)
    /* 1EE6C 1001EE6C 01E80019 */  multu      $t7, $t0
    /* 1EE70 1001EE70 8D6E0004 */  lw         $t6, 0x4($t3)
    /* 1EE74 1001EE74 000AC080 */  sll        $t8, $t2, 2
    /* 1EE78 1001EE78 030AC021 */  addu       $t8, $t8, $t2
    /* 1EE7C 1001EE7C 0018C0C0 */  sll        $t8, $t8, 3
    /* 1EE80 1001EE80 01D8C821 */  addu       $t9, $t6, $t8
    /* 1EE84 1001EE84 00004812 */  mflo       $t1
    /* 1EE88 1001EE88 00000000 */  nop
    /* 1EE8C 1001EE8C 00000000 */  nop
    /* 1EE90 1001EE90 0121001A */  div        $zero, $t1, $at
    /* 1EE94 1001EE94 00006012 */  mflo       $t4
    /* 1EE98 1001EE98 2401FFF8 */  addiu      $at, $zero, -0x8
    /* 1EE9C 1001EE9C 01816824 */  and        $t5, $t4, $at
    /* 1EEA0 1001EEA0 AF2D0004 */  sw         $t5, 0x4($t9)
    /* 1EEA4 1001EEA4 10000061 */  b          .L1001F02C
    /* 1EEA8 1001EEA8 00000000 */   nop
  jlabel .L1001EEAC
    /* 1EEAC 1001EEAC 8FA8002C */  lw         $t0, 0x2C($sp)
    /* 1EEB0 1001EEB0 8FAC0024 */  lw         $t4, 0x24($sp)
    /* 1EEB4 1001EEB4 8FAF0020 */  lw         $t7, 0x20($sp)
    /* 1EEB8 1001EEB8 8D090004 */  lw         $t1, 0x4($t0)
    /* 1EEBC 1001EEBC 000C5880 */  sll        $t3, $t4, 2
    /* 1EEC0 1001EEC0 016C5821 */  addu       $t3, $t3, $t4
    /* 1EEC4 1001EEC4 000B58C0 */  sll        $t3, $t3, 3
    /* 1EEC8 1001EEC8 012B5021 */  addu       $t2, $t1, $t3
    /* 1EECC 1001EECC A54F000A */  sh         $t7, 0xA($t2)
    /* 1EED0 1001EED0 10000056 */  b          .L1001F02C
    /* 1EED4 1001EED4 00000000 */   nop
  jlabel .L1001EED8
    /* 1EED8 1001EED8 8FB8002C */  lw         $t8, 0x2C($sp)
    /* 1EEDC 1001EEDC 8FB90024 */  lw         $t9, 0x24($sp)
    /* 1EEE0 1001EEE0 8FAE0020 */  lw         $t6, 0x20($sp)
    /* 1EEE4 1001EEE4 8F0D0004 */  lw         $t5, 0x4($t8)
    /* 1EEE8 1001EEE8 00194080 */  sll        $t0, $t9, 2
    /* 1EEEC 1001EEEC 01194021 */  addu       $t0, $t0, $t9
    /* 1EEF0 1001EEF0 000840C0 */  sll        $t0, $t0, 3
    /* 1EEF4 1001EEF4 01A86021 */  addu       $t4, $t5, $t0
    /* 1EEF8 1001EEF8 A58E0008 */  sh         $t6, 0x8($t4)
    /* 1EEFC 1001EEFC 1000004B */  b          .L1001F02C
    /* 1EF00 1001EF00 00000000 */   nop
  jlabel .L1001EF04
    /* 1EF04 1001EF04 8FAB002C */  lw         $t3, 0x2C($sp)
    /* 1EF08 1001EF08 8FAA0024 */  lw         $t2, 0x24($sp)
    /* 1EF0C 1001EF0C 8FA90020 */  lw         $t1, 0x20($sp)
    /* 1EF10 1001EF10 8D6F0004 */  lw         $t7, 0x4($t3)
    /* 1EF14 1001EF14 000AC080 */  sll        $t8, $t2, 2
    /* 1EF18 1001EF18 030AC021 */  addu       $t8, $t8, $t2
    /* 1EF1C 1001EF1C 0018C0C0 */  sll        $t8, $t8, 3
    /* 1EF20 1001EF20 01F8C821 */  addu       $t9, $t7, $t8
    /* 1EF24 1001EF24 A729000C */  sh         $t1, 0xC($t9)
    /* 1EF28 1001EF28 10000040 */  b          .L1001F02C
    /* 1EF2C 1001EF2C 00000000 */   nop
  jlabel .L1001EF30
    /* 1EF30 1001EF30 8FAD0020 */  lw         $t5, 0x20($sp)
    /* 1EF34 1001EF34 3C01447A */  lui        $at, (0x447A0000 >> 16)
    /* 1EF38 1001EF38 44814000 */  mtc1       $at, $f8
    /* 1EF3C 1001EF3C 448D2000 */  mtc1       $t5, $f4
    /* 1EF40 1001EF40 3C088003 */  lui        $t0, %hi(n_syn)
    /* 1EF44 1001EF44 8D08BA44 */  lw         $t0, %lo(n_syn)($t0)
    /* 1EF48 1001EF48 468021A0 */  cvt.s.w    $f6, $f4
    /* 1EF4C 1001EF4C 3C014000 */  lui        $at, (0x40000000 >> 16)
    /* 1EF50 1001EF50 8D0E0054 */  lw         $t6, 0x54($t0)
    /* 1EF54 1001EF54 44818000 */  mtc1       $at, $f16
    /* 1EF58 1001EF58 8FAC002C */  lw         $t4, 0x2C($sp)
    /* 1EF5C 1001EF5C 448E2000 */  mtc1       $t6, $f4
    /* 1EF60 1001EF60 46083283 */  div.s      $f10, $f6, $f8
    /* 1EF64 1001EF64 8FAA0024 */  lw         $t2, 0x24($sp)
    /* 1EF68 1001EF68 8D8B0004 */  lw         $t3, 0x4($t4)
    /* 1EF6C 1001EF6C 468021A0 */  cvt.s.w    $f6, $f4
    /* 1EF70 1001EF70 000A7880 */  sll        $t7, $t2, 2
    /* 1EF74 1001EF74 01EA7821 */  addu       $t7, $t7, $t2
    /* 1EF78 1001EF78 000F78C0 */  sll        $t7, $t7, 3
    /* 1EF7C 1001EF7C 016FC021 */  addu       $t8, $t3, $t7
    /* 1EF80 1001EF80 46105482 */  mul.s      $f18, $f10, $f16
    /* 1EF84 1001EF84 46069203 */  div.s      $f8, $f18, $f6
    /* 1EF88 1001EF88 E7080010 */  swc1       $f8, 0x10($t8)
    /* 1EF8C 1001EF8C 10000027 */  b          .L1001F02C
    /* 1EF90 1001EF90 00000000 */   nop
  jlabel .L1001EF94
    /* 1EF94 1001EF94 8FA90020 */  lw         $t1, 0x20($sp)
    /* 1EF98 1001EF98 44895000 */  mtc1       $t1, $f10
    /* 1EF9C 1001EF9C 00000000 */  nop
    /* 1EFA0 1001EFA0 46805420 */  cvt.s.w    $f16, $f10
    /* 1EFA4 1001EFA4 E7B0001C */  swc1       $f16, 0x1C($sp)
    /* 1EFA8 1001EFA8 10000020 */  b          .L1001F02C
    /* 1EFAC 1001EFAC 00000000 */   nop
  jlabel .L1001EFB0
    /* 1EFB0 1001EFB0 8FB9002C */  lw         $t9, 0x2C($sp)
    /* 1EFB4 1001EFB4 8FA80024 */  lw         $t0, 0x24($sp)
    /* 1EFB8 1001EFB8 8F2D0004 */  lw         $t5, 0x4($t9)
    /* 1EFBC 1001EFBC 00087080 */  sll        $t6, $t0, 2
    /* 1EFC0 1001EFC0 01C87021 */  addu       $t6, $t6, $t0
    /* 1EFC4 1001EFC4 000E70C0 */  sll        $t6, $t6, 3
    /* 1EFC8 1001EFC8 01AE6021 */  addu       $t4, $t5, $t6
    /* 1EFCC 1001EFCC 8D8A0020 */  lw         $t2, 0x20($t4)
    /* 1EFD0 1001EFD0 11400014 */  beqz       $t2, .L1001F024
    /* 1EFD4 1001EFD4 00000000 */   nop
    /* 1EFD8 1001EFD8 8FAF002C */  lw         $t7, 0x2C($sp)
    /* 1EFDC 1001EFDC 8FA90024 */  lw         $t1, 0x24($sp)
    /* 1EFE0 1001EFE0 8FAB0020 */  lw         $t3, 0x20($sp)
    /* 1EFE4 1001EFE4 8DF80004 */  lw         $t8, 0x4($t7)
    /* 1EFE8 1001EFE8 0009C880 */  sll        $t9, $t1, 2
    /* 1EFEC 1001EFEC 0329C821 */  addu       $t9, $t9, $t1
    /* 1EFF0 1001EFF0 0019C8C0 */  sll        $t9, $t9, 3
    /* 1EFF4 1001EFF4 03194021 */  addu       $t0, $t8, $t9
    /* 1EFF8 1001EFF8 8D0D0020 */  lw         $t5, 0x20($t0)
    /* 1EFFC 1001EFFC A5AB0000 */  sh         $t3, 0x0($t5)
    /* 1F000 1001F000 8FAE002C */  lw         $t6, 0x2C($sp)
    /* 1F004 1001F004 8FAA0024 */  lw         $t2, 0x24($sp)
    /* 1F008 1001F008 8DCC0004 */  lw         $t4, 0x4($t6)
    /* 1F00C 1001F00C 000A7880 */  sll        $t7, $t2, 2
    /* 1F010 1001F010 01EA7821 */  addu       $t7, $t7, $t2
    /* 1F014 1001F014 000F78C0 */  sll        $t7, $t7, 3
    /* 1F018 1001F018 018F4821 */  addu       $t1, $t4, $t7
    /* 1F01C 1001F01C 0C007355 */  jal        init_lpfilter
    /* 1F020 1001F020 8D240020 */   lw        $a0, 0x20($t1)
  .L1001F024:
    /* 1F024 1001F024 10000001 */  b          .L1001F02C
    /* 1F028 1001F028 00000000 */   nop
  .L1001F02C:
    /* 1F02C 1001F02C 8FB8002C */  lw         $t8, 0x2C($sp)
    /* 1F030 1001F030 8FA80024 */  lw         $t0, 0x24($sp)
    /* 1F034 1001F034 8F190004 */  lw         $t9, 0x4($t8)
    /* 1F038 1001F038 00085880 */  sll        $t3, $t0, 2
    /* 1F03C 1001F03C 01685821 */  addu       $t3, $t3, $t0
    /* 1F040 1001F040 000B58C0 */  sll        $t3, $t3, 3
    /* 1F044 1001F044 8F0A0000 */  lw         $t2, 0x0($t8)
    /* 1F048 1001F048 032B6821 */  addu       $t5, $t9, $t3
    /* 1F04C 1001F04C 8DAE0000 */  lw         $t6, 0x0($t5)
    /* 1F050 1001F050 254CFFF0 */  addiu      $t4, $t2, -0x10
    /* 1F054 1001F054 01CC082B */  sltu       $at, $t6, $t4
    /* 1F058 1001F058 1420000B */  bnez       $at, .L1001F088
    /* 1F05C 1001F05C 00000000 */   nop
    /* 1F060 1001F060 8FAF002C */  lw         $t7, 0x2C($sp)
    /* 1F064 1001F064 8FAB0024 */  lw         $t3, 0x24($sp)
    /* 1F068 1001F068 8DE90000 */  lw         $t1, 0x0($t7)
    /* 1F06C 1001F06C 8DF90004 */  lw         $t9, 0x4($t7)
    /* 1F070 1001F070 000B6880 */  sll        $t5, $t3, 2
    /* 1F074 1001F074 01AB6821 */  addu       $t5, $t5, $t3
    /* 1F078 1001F078 000D68C0 */  sll        $t5, $t5, 3
    /* 1F07C 1001F07C 2528FFF0 */  addiu      $t0, $t1, -0x10
    /* 1F080 1001F080 032DC021 */  addu       $t8, $t9, $t5
    /* 1F084 1001F084 AF080000 */  sw         $t0, 0x0($t8)
  .L1001F088:
    /* 1F088 1001F088 8FAA002C */  lw         $t2, 0x2C($sp)
    /* 1F08C 1001F08C 8FAC0024 */  lw         $t4, 0x24($sp)
    /* 1F090 1001F090 8D4E0004 */  lw         $t6, 0x4($t2)
    /* 1F094 1001F094 000C4880 */  sll        $t1, $t4, 2
    /* 1F098 1001F098 012C4821 */  addu       $t1, $t1, $t4
    /* 1F09C 1001F09C 000948C0 */  sll        $t1, $t1, 3
    /* 1F0A0 1001F0A0 8D590000 */  lw         $t9, 0x0($t2)
    /* 1F0A4 1001F0A4 01C97821 */  addu       $t7, $t6, $t1
    /* 1F0A8 1001F0A8 8DEB0000 */  lw         $t3, 0x0($t7)
    /* 1F0AC 1001F0AC 272DFFF8 */  addiu      $t5, $t9, -0x8
    /* 1F0B0 1001F0B0 016D082B */  sltu       $at, $t3, $t5
    /* 1F0B4 1001F0B4 1420000B */  bnez       $at, .L1001F0E4
    /* 1F0B8 1001F0B8 00000000 */   nop
    /* 1F0BC 1001F0BC 8FA8002C */  lw         $t0, 0x2C($sp)
    /* 1F0C0 1001F0C0 8FA90024 */  lw         $t1, 0x24($sp)
    /* 1F0C4 1001F0C4 8D180000 */  lw         $t8, 0x0($t0)
    /* 1F0C8 1001F0C8 8D0E0004 */  lw         $t6, 0x4($t0)
    /* 1F0CC 1001F0CC 00097880 */  sll        $t7, $t1, 2
    /* 1F0D0 1001F0D0 01E97821 */  addu       $t7, $t7, $t1
    /* 1F0D4 1001F0D4 000F78C0 */  sll        $t7, $t7, 3
    /* 1F0D8 1001F0D8 270CFFF8 */  addiu      $t4, $t8, -0x8
    /* 1F0DC 1001F0DC 01CF5021 */  addu       $t2, $t6, $t7
    /* 1F0E0 1001F0E0 AD4C0000 */  sw         $t4, 0x0($t2)
  .L1001F0E4:
    /* 1F0E4 1001F0E4 8FB9002C */  lw         $t9, 0x2C($sp)
    /* 1F0E8 1001F0E8 8FAD0024 */  lw         $t5, 0x24($sp)
    /* 1F0EC 1001F0EC 8F2B0004 */  lw         $t3, 0x4($t9)
    /* 1F0F0 1001F0F0 000DC080 */  sll        $t8, $t5, 2
    /* 1F0F4 1001F0F4 030DC021 */  addu       $t8, $t8, $t5
    /* 1F0F8 1001F0F8 0018C0C0 */  sll        $t8, $t8, 3
    /* 1F0FC 1001F0FC 01784021 */  addu       $t0, $t3, $t8
    /* 1F100 1001F100 8D090000 */  lw         $t1, 0x0($t0)
    /* 1F104 1001F104 8D0E0004 */  lw         $t6, 0x4($t0)
    /* 1F108 1001F108 012E082B */  sltu       $at, $t1, $t6
    /* 1F10C 1001F10C 1420000B */  bnez       $at, .L1001F13C
    /* 1F110 1001F110 00000000 */   nop
    /* 1F114 1001F114 8FAF002C */  lw         $t7, 0x2C($sp)
    /* 1F118 1001F118 8FAA0024 */  lw         $t2, 0x24($sp)
    /* 1F11C 1001F11C 8DEC0004 */  lw         $t4, 0x4($t7)
    /* 1F120 1001F120 000AC880 */  sll        $t9, $t2, 2
    /* 1F124 1001F124 032AC821 */  addu       $t9, $t9, $t2
    /* 1F128 1001F128 0019C8C0 */  sll        $t9, $t9, 3
    /* 1F12C 1001F12C 01996821 */  addu       $t5, $t4, $t9
    /* 1F130 1001F130 8DAB0000 */  lw         $t3, 0x0($t5)
    /* 1F134 1001F134 25780008 */  addiu      $t8, $t3, 0x8
    /* 1F138 1001F138 ADB80004 */  sw         $t8, 0x4($t5)
  .L1001F13C:
    /* 1F13C 1001F13C 8FA8002C */  lw         $t0, 0x2C($sp)
    /* 1F140 1001F140 8FAE0024 */  lw         $t6, 0x24($sp)
    /* 1F144 1001F144 8D090004 */  lw         $t1, 0x4($t0)
    /* 1F148 1001F148 000E7880 */  sll        $t7, $t6, 2
    /* 1F14C 1001F14C 01EE7821 */  addu       $t7, $t7, $t6
    /* 1F150 1001F150 000F78C0 */  sll        $t7, $t7, 3
    /* 1F154 1001F154 012F5021 */  addu       $t2, $t1, $t7
    /* 1F158 1001F158 8D4C0024 */  lw         $t4, 0x24($t2)
    /* 1F15C 1001F15C 11800043 */  beqz       $t4, .L1001F26C
    /* 1F160 1001F160 00000000 */   nop
    /* 1F164 1001F164 8FB90028 */  lw         $t9, 0x28($sp)
    /* 1F168 1001F168 24010006 */  addiu      $at, $zero, 0x6
    /* 1F16C 1001F16C 13210028 */  beq        $t9, $at, .L1001F210
    /* 1F170 1001F170 00000000 */   nop
    /* 1F174 1001F174 8FAB002C */  lw         $t3, 0x2C($sp)
    /* 1F178 1001F178 8FAD0024 */  lw         $t5, 0x24($sp)
    /* 1F17C 1001F17C 8D780004 */  lw         $t8, 0x4($t3)
    /* 1F180 1001F180 000D4080 */  sll        $t0, $t5, 2
    /* 1F184 1001F184 010D4021 */  addu       $t0, $t0, $t5
    /* 1F188 1001F188 000840C0 */  sll        $t0, $t0, 3
    /* 1F18C 1001F18C 03087021 */  addu       $t6, $t8, $t0
    /* 1F190 1001F190 8DC90004 */  lw         $t1, 0x4($t6)
    /* 1F194 1001F194 8DCF0000 */  lw         $t7, 0x0($t6)
    /* 1F198 1001F198 012F5023 */  subu       $t2, $t1, $t7
    /* 1F19C 1001F19C 11400019 */  beqz       $t2, .L1001F204
    /* 1F1A0 1001F1A0 00000000 */   nop
    /* 1F1A4 1001F1A4 8FAC002C */  lw         $t4, 0x2C($sp)
    /* 1F1A8 1001F1A8 8FAB0024 */  lw         $t3, 0x24($sp)
    /* 1F1AC 1001F1AC 8D990004 */  lw         $t9, 0x4($t4)
    /* 1F1B0 1001F1B0 000B6880 */  sll        $t5, $t3, 2
    /* 1F1B4 1001F1B4 01AB6821 */  addu       $t5, $t5, $t3
    /* 1F1B8 1001F1B8 000D68C0 */  sll        $t5, $t5, 3
    /* 1F1BC 1001F1BC 032DC021 */  addu       $t8, $t9, $t5
    /* 1F1C0 1001F1C0 8F080004 */  lw         $t0, 0x4($t8)
    /* 1F1C4 1001F1C4 8F0E0000 */  lw         $t6, 0x0($t8)
    /* 1F1C8 1001F1C8 010E4823 */  subu       $t1, $t0, $t6
    /* 1F1CC 1001F1CC 44892000 */  mtc1       $t1, $f4
    /* 1F1D0 1001F1D0 05210005 */  bgez       $t1, .L1001F1E8
    /* 1F1D4 1001F1D4 468024A0 */   cvt.s.w   $f18, $f4
    /* 1F1D8 1001F1D8 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 1F1DC 1001F1DC 44813000 */  mtc1       $at, $f6
    /* 1F1E0 1001F1E0 00000000 */  nop
    /* 1F1E4 1001F1E4 46069480 */  add.s      $f18, $f18, $f6
  .L1001F1E8:
    /* 1F1E8 1001F1E8 C708001C */  lwc1       $f8, 0x1C($t8)
    /* 1F1EC 1001F1EC 3C018003 */  lui        $at, %hi(D_8002C7C4)
    /* 1F1F0 1001F1F0 C430C7C4 */  lwc1       $f16, %lo(D_8002C7C4)($at)
    /* 1F1F4 1001F1F4 46124283 */  div.s      $f10, $f8, $f18
    /* 1F1F8 1001F1F8 46105102 */  mul.s      $f4, $f10, $f16
    /* 1F1FC 1001F1FC 10000004 */  b          .L1001F210
    /* 1F200 1001F200 E7A4001C */   swc1      $f4, 0x1C($sp)
  .L1001F204:
    /* 1F204 1001F204 44803000 */  mtc1       $zero, $f6
    /* 1F208 1001F208 00000000 */  nop
    /* 1F20C 1001F20C E7A6001C */  swc1       $f6, 0x1C($sp)
  .L1001F210:
    /* 1F210 1001F210 8FAF002C */  lw         $t7, 0x2C($sp)
    /* 1F214 1001F214 8FAC0024 */  lw         $t4, 0x24($sp)
    /* 1F218 1001F218 8DEA0004 */  lw         $t2, 0x4($t7)
    /* 1F21C 1001F21C 000C5880 */  sll        $t3, $t4, 2
    /* 1F220 1001F220 016C5821 */  addu       $t3, $t3, $t4
    /* 1F224 1001F224 000B58C0 */  sll        $t3, $t3, 3
    /* 1F228 1001F228 014BC821 */  addu       $t9, $t2, $t3
    /* 1F22C 1001F22C 8F2D0004 */  lw         $t5, 0x4($t9)
    /* 1F230 1001F230 8F280000 */  lw         $t0, 0x0($t9)
    /* 1F234 1001F234 01A87023 */  subu       $t6, $t5, $t0
    /* 1F238 1001F238 448E4000 */  mtc1       $t6, $f8
    /* 1F23C 1001F23C 05C10005 */  bgez       $t6, .L1001F254
    /* 1F240 1001F240 468044A0 */   cvt.s.w   $f18, $f8
    /* 1F244 1001F244 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 1F248 1001F248 44815000 */  mtc1       $at, $f10
    /* 1F24C 1001F24C 00000000 */  nop
    /* 1F250 1001F250 460A9480 */  add.s      $f18, $f18, $f10
  .L1001F254:
    /* 1F254 1001F254 3C018003 */  lui        $at, %hi(D_8002C7C8)
    /* 1F258 1001F258 C424C7C8 */  lwc1       $f4, %lo(D_8002C7C8)($at)
    /* 1F25C 1001F25C C7B0001C */  lwc1       $f16, 0x1C($sp)
    /* 1F260 1001F260 46048183 */  div.s      $f6, $f16, $f4
    /* 1F264 1001F264 46069202 */  mul.s      $f8, $f18, $f6
    /* 1F268 1001F268 E728001C */  swc1       $f8, 0x1C($t9)
  .L1001F26C:
    /* 1F26C 1001F26C 10000003 */  b          .L1001F27C
    /* 1F270 1001F270 00001025 */   or        $v0, $zero, $zero
    /* 1F274 1001F274 10000001 */  b          .L1001F27C
    /* 1F278 1001F278 00000000 */   nop
  .L1001F27C:
    /* 1F27C 1001F27C 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 1F280 1001F280 27BD0030 */  addiu      $sp, $sp, 0x30
    /* 1F284 1001F284 03E00008 */  jr         $ra
    /* 1F288 1001F288 00000000 */   nop
endlabel func_1001ED6C
