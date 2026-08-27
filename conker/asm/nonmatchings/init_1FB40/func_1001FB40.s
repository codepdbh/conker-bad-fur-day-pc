nonmatching func_1001FB40, 0x4A0

glabel func_1001FB40
    /* 1FB40 1001FB40 27BDFFA8 */  addiu      $sp, $sp, -0x58
    /* 1FB44 1001FB44 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 1FB48 1001FB48 AFA40058 */  sw         $a0, 0x58($sp)
    /* 1FB4C 1001FB4C AFA5005C */  sw         $a1, 0x5C($sp)
    /* 1FB50 1001FB50 8FAE005C */  lw         $t6, 0x5C($sp)
    /* 1FB54 1001FB54 AFAE0054 */  sw         $t6, 0x54($sp)
    /* 1FB58 1001FB58 3C0F800E */  lui        $t7, %hi(D_800E0E04)
    /* 1FB5C 1001FB5C 8DEF0E04 */  lw         $t7, %lo(D_800E0E04)($t7)
    /* 1FB60 1001FB60 11E00006 */  beqz       $t7, .L1001FB7C
    /* 1FB64 1001FB64 00000000 */   nop
    /* 1FB68 1001FB68 240400B8 */  addiu      $a0, $zero, 0xB8
    /* 1FB6C 1001FB6C 0D47CBA2 */  jal        func_151F2E88
    /* 1FB70 1001FB70 27A50054 */   addiu     $a1, $sp, 0x54
    /* 1FB74 1001FB74 14400017 */  bnez       $v0, .L1001FBD4
    /* 1FB78 1001FB78 00000000 */   nop
  .L1001FB7C:
    /* 1FB7C 1001FB7C 8FB80054 */  lw         $t8, 0x54($sp)
    /* 1FB80 1001FB80 27190008 */  addiu      $t9, $t8, 0x8
    /* 1FB84 1001FB84 AFB90054 */  sw         $t9, 0x54($sp)
    /* 1FB88 1001FB88 AFB80048 */  sw         $t8, 0x48($sp)
    /* 1FB8C 1001FB8C 8FA90048 */  lw         $t1, 0x48($sp)
    /* 1FB90 1001FB90 3C080200 */  lui        $t0, (0x20004E0 >> 16)
    /* 1FB94 1001FB94 350804E0 */  ori        $t0, $t0, (0x20004E0 & 0xFFFF)
    /* 1FB98 1001FB98 AD280000 */  sw         $t0, 0x0($t1)
    /* 1FB9C 1001FB9C 8FAB0048 */  lw         $t3, 0x48($sp)
    /* 1FBA0 1001FBA0 240A02E0 */  addiu      $t2, $zero, 0x2E0
    /* 1FBA4 1001FBA4 AD6A0004 */  sw         $t2, 0x4($t3)
    /* 1FBA8 1001FBA8 8FAC0054 */  lw         $t4, 0x54($sp)
    /* 1FBAC 1001FBAC 258D0008 */  addiu      $t5, $t4, 0x8
    /* 1FBB0 1001FBB0 AFAD0054 */  sw         $t5, 0x54($sp)
    /* 1FBB4 1001FBB4 AFAC0044 */  sw         $t4, 0x44($sp)
    /* 1FBB8 1001FBB8 8FAF0044 */  lw         $t7, 0x44($sp)
    /* 1FBBC 1001FBBC 3C0E0200 */  lui        $t6, (0x20007C0 >> 16)
    /* 1FBC0 1001FBC0 35CE07C0 */  ori        $t6, $t6, (0x20007C0 & 0xFFFF)
    /* 1FBC4 1001FBC4 ADEE0000 */  sw         $t6, 0x0($t7)
    /* 1FBC8 1001FBC8 8FB90044 */  lw         $t9, 0x44($sp)
    /* 1FBCC 1001FBCC 241802E0 */  addiu      $t8, $zero, 0x2E0
    /* 1FBD0 1001FBD0 AF380004 */  sw         $t8, 0x4($t9)
  .L1001FBD4:
    /* 1FBD4 1001FBD4 AFA0004C */  sw         $zero, 0x4C($sp)
    /* 1FBD8 1001FBD8 3C098003 */  lui        $t1, %hi(n_syn)
    /* 1FBDC 1001FBDC 8D29BA44 */  lw         $t1, %lo(n_syn)($t1)
    /* 1FBE0 1001FBE0 24080001 */  addiu      $t0, $zero, 0x1
    /* 1FBE4 1001FBE4 AFA80050 */  sw         $t0, 0x50($sp)
    /* 1FBE8 1001FBE8 8D2A0050 */  lw         $t2, 0x50($t1)
    /* 1FBEC 1001FBEC 29410002 */  slti       $at, $t2, 0x2
    /* 1FBF0 1001FBF0 14200018 */  bnez       $at, .L1001FC54
    /* 1FBF4 1001FBF4 00000000 */   nop
  .L1001FBF8:
    /* 1FBF8 1001FBF8 3C0B8003 */  lui        $t3, %hi(n_syn)
    /* 1FBFC 1001FBFC 8D6BBA44 */  lw         $t3, %lo(n_syn)($t3)
    /* 1FC00 1001FC00 8FAD0050 */  lw         $t5, 0x50($sp)
    /* 1FC04 1001FC04 8D6C0048 */  lw         $t4, 0x48($t3)
    /* 1FC08 1001FC08 000D7100 */  sll        $t6, $t5, 4
    /* 1FC0C 1001FC0C 01CD7021 */  addu       $t6, $t6, $t5
    /* 1FC10 1001FC10 000E7080 */  sll        $t6, $t6, 2
    /* 1FC14 1001FC14 018E7821 */  addu       $t7, $t4, $t6
    /* 1FC18 1001FC18 8DF80040 */  lw         $t8, 0x40($t7)
    /* 1FC1C 1001FC1C 87190002 */  lh         $t9, 0x2($t8)
    /* 1FC20 1001FC20 1B200003 */  blez       $t9, .L1001FC30
    /* 1FC24 1001FC24 00000000 */   nop
    /* 1FC28 1001FC28 8FA80050 */  lw         $t0, 0x50($sp)
    /* 1FC2C 1001FC2C AFA8004C */  sw         $t0, 0x4C($sp)
  .L1001FC30:
    /* 1FC30 1001FC30 8FA90050 */  lw         $t1, 0x50($sp)
    /* 1FC34 1001FC34 3C0B8003 */  lui        $t3, %hi(n_syn)
    /* 1FC38 1001FC38 8D6BBA44 */  lw         $t3, %lo(n_syn)($t3)
    /* 1FC3C 1001FC3C 252A0001 */  addiu      $t2, $t1, 0x1
    /* 1FC40 1001FC40 AFAA0050 */  sw         $t2, 0x50($sp)
    /* 1FC44 1001FC44 8D6D0050 */  lw         $t5, 0x50($t3)
    /* 1FC48 1001FC48 014D082A */  slt        $at, $t2, $t5
    /* 1FC4C 1001FC4C 1420FFEA */  bnez       $at, .L1001FBF8
    /* 1FC50 1001FC50 00000000 */   nop
  .L1001FC54:
    /* 1FC54 1001FC54 3C0C8003 */  lui        $t4, %hi(n_syn)
    /* 1FC58 1001FC58 8D8CBA44 */  lw         $t4, %lo(n_syn)($t4)
    /* 1FC5C 1001FC5C AFA00050 */  sw         $zero, 0x50($sp)
    /* 1FC60 1001FC60 8D8E0050 */  lw         $t6, 0x50($t4)
    /* 1FC64 1001FC64 19C000D6 */  blez       $t6, .L1001FFC0
    /* 1FC68 1001FC68 00000000 */   nop
  .L1001FC6C:
    /* 1FC6C 1001FC6C 3C188003 */  lui        $t8, %hi(n_syn)
    /* 1FC70 1001FC70 8F18BA44 */  lw         $t8, %lo(n_syn)($t8)
    /* 1FC74 1001FC74 8FAF004C */  lw         $t7, 0x4C($sp)
    /* 1FC78 1001FC78 8F190050 */  lw         $t9, 0x50($t8)
    /* 1FC7C 1001FC7C 01F9082A */  slt        $at, $t7, $t9
    /* 1FC80 1001FC80 14200002 */  bnez       $at, .L1001FC8C
    /* 1FC84 1001FC84 00000000 */   nop
    /* 1FC88 1001FC88 AFA0004C */  sw         $zero, 0x4C($sp)
  .L1001FC8C:
    /* 1FC8C 1001FC8C 8FA80050 */  lw         $t0, 0x50($sp)
    /* 1FC90 1001FC90 1100000C */  beqz       $t0, .L1001FCC4
    /* 1FC94 1001FC94 00000000 */   nop
    /* 1FC98 1001FC98 8FA90054 */  lw         $t1, 0x54($sp)
    /* 1FC9C 1001FC9C 252B0008 */  addiu      $t3, $t1, 0x8
    /* 1FCA0 1001FCA0 AFAB0054 */  sw         $t3, 0x54($sp)
    /* 1FCA4 1001FCA4 AFA90040 */  sw         $t1, 0x40($sp)
    /* 1FCA8 1001FCA8 8FAD0040 */  lw         $t5, 0x40($sp)
    /* 1FCAC 1001FCAC 3C0A0200 */  lui        $t2, (0x20007C0 >> 16)
    /* 1FCB0 1001FCB0 354A07C0 */  ori        $t2, $t2, (0x20007C0 & 0xFFFF)
    /* 1FCB4 1001FCB4 ADAA0000 */  sw         $t2, 0x0($t5)
    /* 1FCB8 1001FCB8 8FAE0040 */  lw         $t6, 0x40($sp)
    /* 1FCBC 1001FCBC 240C02E0 */  addiu      $t4, $zero, 0x2E0
    /* 1FCC0 1001FCC0 ADCC0004 */  sw         $t4, 0x4($t6)
  .L1001FCC4:
    /* 1FCC4 1001FCC4 3C188003 */  lui        $t8, %hi(n_syn)
    /* 1FCC8 1001FCC8 8F18BA44 */  lw         $t8, %lo(n_syn)($t8)
    /* 1FCCC 1001FCCC 8FA40058 */  lw         $a0, 0x58($sp)
    /* 1FCD0 1001FCD0 8FA50054 */  lw         $a1, 0x54($sp)
    /* 1FCD4 1001FCD4 8F0F0044 */  lw         $t7, 0x44($t8)
    /* 1FCD8 1001FCD8 8FA6004C */  lw         $a2, 0x4C($sp)
    /* 1FCDC 1001FCDC 8DF90004 */  lw         $t9, 0x4($t7)
    /* 1FCE0 1001FCE0 0320F809 */  jalr       $t9
    /* 1FCE4 1001FCE4 00000000 */   nop
    /* 1FCE8 1001FCE8 AFA20054 */  sw         $v0, 0x54($sp)
    /* 1FCEC 1001FCEC 8FA8004C */  lw         $t0, 0x4C($sp)
    /* 1FCF0 1001FCF0 3C098004 */  lui        $t1, %hi(D_800428C4)
    /* 1FCF4 1001FCF4 01284821 */  addu       $t1, $t1, $t0
    /* 1FCF8 1001FCF8 912928C4 */  lbu        $t1, %lo(D_800428C4)($t1)
    /* 1FCFC 1001FCFC 11200023 */  beqz       $t1, .L1001FD8C
    /* 1FD00 1001FD00 00000000 */   nop
    /* 1FD04 1001FD04 8FAB004C */  lw         $t3, 0x4C($sp)
    /* 1FD08 1001FD08 3C0A8004 */  lui        $t2, %hi(D_800428C6)
    /* 1FD0C 1001FD0C 014B5021 */  addu       $t2, $t2, $t3
    /* 1FD10 1001FD10 914A28C6 */  lbu        $t2, %lo(D_800428C6)($t2)
    /* 1FD14 1001FD14 1140000F */  beqz       $t2, .L1001FD54
    /* 1FD18 1001FD18 00000000 */   nop
    /* 1FD1C 1001FD1C 8FAD0054 */  lw         $t5, 0x54($sp)
    /* 1FD20 1001FD20 25AC0008 */  addiu      $t4, $t5, 0x8
    /* 1FD24 1001FD24 AFAC0054 */  sw         $t4, 0x54($sp)
    /* 1FD28 1001FD28 AFAD003C */  sw         $t5, 0x3C($sp)
    /* 1FD2C 1001FD2C 8FB8003C */  lw         $t8, 0x3C($sp)
    /* 1FD30 1001FD30 3C0E0C00 */  lui        $t6, (0xC008000 >> 16)
    /* 1FD34 1001FD34 35CE8000 */  ori        $t6, $t6, (0xC008000 & 0xFFFF)
    /* 1FD38 1001FD38 AF0E0000 */  sw         $t6, 0x0($t8)
    /* 1FD3C 1001FD3C 8FB9003C */  lw         $t9, 0x3C($sp)
    /* 1FD40 1001FD40 3C0F07C0 */  lui        $t7, (0x7C004E0 >> 16)
    /* 1FD44 1001FD44 35EF04E0 */  ori        $t7, $t7, (0x7C004E0 & 0xFFFF)
    /* 1FD48 1001FD48 AF2F0004 */  sw         $t7, 0x4($t9)
    /* 1FD4C 1001FD4C 1000000D */  b          .L1001FD84
    /* 1FD50 1001FD50 00000000 */   nop
  .L1001FD54:
    /* 1FD54 1001FD54 8FA80054 */  lw         $t0, 0x54($sp)
    /* 1FD58 1001FD58 25090008 */  addiu      $t1, $t0, 0x8
    /* 1FD5C 1001FD5C AFA90054 */  sw         $t1, 0x54($sp)
    /* 1FD60 1001FD60 AFA80038 */  sw         $t0, 0x38($sp)
    /* 1FD64 1001FD64 8FAA0038 */  lw         $t2, 0x38($sp)
    /* 1FD68 1001FD68 3C0B0C00 */  lui        $t3, (0xC007FFF >> 16)
    /* 1FD6C 1001FD6C 356B7FFF */  ori        $t3, $t3, (0xC007FFF & 0xFFFF)
    /* 1FD70 1001FD70 AD4B0000 */  sw         $t3, 0x0($t2)
    /* 1FD74 1001FD74 8FAC0038 */  lw         $t4, 0x38($sp)
    /* 1FD78 1001FD78 3C0D07C0 */  lui        $t5, (0x7C00650 >> 16)
    /* 1FD7C 1001FD7C 35AD0650 */  ori        $t5, $t5, (0x7C00650 & 0xFFFF)
    /* 1FD80 1001FD80 AD8D0004 */  sw         $t5, 0x4($t4)
  .L1001FD84:
    /* 1FD84 1001FD84 1000002D */  b          .L1001FE3C
    /* 1FD88 1001FD88 00000000 */   nop
  .L1001FD8C:
    /* 1FD8C 1001FD8C 8FAE004C */  lw         $t6, 0x4C($sp)
    /* 1FD90 1001FD90 3C188004 */  lui        $t8, %hi(D_800428C6)
    /* 1FD94 1001FD94 030EC021 */  addu       $t8, $t8, $t6
    /* 1FD98 1001FD98 931828C6 */  lbu        $t8, %lo(D_800428C6)($t8)
    /* 1FD9C 1001FD9C 1300000F */  beqz       $t8, .L1001FDDC
    /* 1FDA0 1001FDA0 00000000 */   nop
    /* 1FDA4 1001FDA4 8FAF0054 */  lw         $t7, 0x54($sp)
    /* 1FDA8 1001FDA8 25F90008 */  addiu      $t9, $t7, 0x8
    /* 1FDAC 1001FDAC AFB90054 */  sw         $t9, 0x54($sp)
    /* 1FDB0 1001FDB0 AFAF0034 */  sw         $t7, 0x34($sp)
    /* 1FDB4 1001FDB4 8FA90034 */  lw         $t1, 0x34($sp)
    /* 1FDB8 1001FDB8 3C080C00 */  lui        $t0, (0xC008000 >> 16)
    /* 1FDBC 1001FDBC 35088000 */  ori        $t0, $t0, (0xC008000 & 0xFFFF)
    /* 1FDC0 1001FDC0 AD280000 */  sw         $t0, 0x0($t1)
    /* 1FDC4 1001FDC4 8FAA0034 */  lw         $t2, 0x34($sp)
    /* 1FDC8 1001FDC8 3C0B07C0 */  lui        $t3, (0x7C00650 >> 16)
    /* 1FDCC 1001FDCC 356B0650 */  ori        $t3, $t3, (0x7C00650 & 0xFFFF)
    /* 1FDD0 1001FDD0 AD4B0004 */  sw         $t3, 0x4($t2)
    /* 1FDD4 1001FDD4 1000000D */  b          .L1001FE0C
    /* 1FDD8 1001FDD8 00000000 */   nop
  .L1001FDDC:
    /* 1FDDC 1001FDDC 8FAD0054 */  lw         $t5, 0x54($sp)
    /* 1FDE0 1001FDE0 25AC0008 */  addiu      $t4, $t5, 0x8
    /* 1FDE4 1001FDE4 AFAC0054 */  sw         $t4, 0x54($sp)
    /* 1FDE8 1001FDE8 AFAD0030 */  sw         $t5, 0x30($sp)
    /* 1FDEC 1001FDEC 8FB80030 */  lw         $t8, 0x30($sp)
    /* 1FDF0 1001FDF0 3C0E0C00 */  lui        $t6, (0xC007FFF >> 16)
    /* 1FDF4 1001FDF4 35CE7FFF */  ori        $t6, $t6, (0xC007FFF & 0xFFFF)
    /* 1FDF8 1001FDF8 AF0E0000 */  sw         $t6, 0x0($t8)
    /* 1FDFC 1001FDFC 8FB90030 */  lw         $t9, 0x30($sp)
    /* 1FE00 1001FE00 3C0F07C0 */  lui        $t7, (0x7C00650 >> 16)
    /* 1FE04 1001FE04 35EF0650 */  ori        $t7, $t7, (0x7C00650 & 0xFFFF)
    /* 1FE08 1001FE08 AF2F0004 */  sw         $t7, 0x4($t9)
  .L1001FE0C:
    /* 1FE0C 1001FE0C 8FA80054 */  lw         $t0, 0x54($sp)
    /* 1FE10 1001FE10 25090008 */  addiu      $t1, $t0, 0x8
    /* 1FE14 1001FE14 AFA90054 */  sw         $t1, 0x54($sp)
    /* 1FE18 1001FE18 AFA8002C */  sw         $t0, 0x2C($sp)
    /* 1FE1C 1001FE1C 8FAA002C */  lw         $t2, 0x2C($sp)
    /* 1FE20 1001FE20 3C0B0C00 */  lui        $t3, (0xC007FFF >> 16)
    /* 1FE24 1001FE24 356B7FFF */  ori        $t3, $t3, (0xC007FFF & 0xFFFF)
    /* 1FE28 1001FE28 AD4B0000 */  sw         $t3, 0x0($t2)
    /* 1FE2C 1001FE2C 8FAC002C */  lw         $t4, 0x2C($sp)
    /* 1FE30 1001FE30 3C0D07C0 */  lui        $t5, (0x7C004E0 >> 16)
    /* 1FE34 1001FE34 35AD04E0 */  ori        $t5, $t5, (0x7C004E0 & 0xFFFF)
    /* 1FE38 1001FE38 AD8D0004 */  sw         $t5, 0x4($t4)
  .L1001FE3C:
    /* 1FE3C 1001FE3C 3C0E8003 */  lui        $t6, %hi(n_syn)
    /* 1FE40 1001FE40 8DCEBA44 */  lw         $t6, %lo(n_syn)($t6)
    /* 1FE44 1001FE44 8FAF004C */  lw         $t7, 0x4C($sp)
    /* 1FE48 1001FE48 8DD80048 */  lw         $t8, 0x48($t6)
    /* 1FE4C 1001FE4C 000FC900 */  sll        $t9, $t7, 4
    /* 1FE50 1001FE50 032FC821 */  addu       $t9, $t9, $t7
    /* 1FE54 1001FE54 0019C880 */  sll        $t9, $t9, 2
    /* 1FE58 1001FE58 03194021 */  addu       $t0, $t8, $t9
    /* 1FE5C 1001FE5C 8D090040 */  lw         $t1, 0x40($t0)
    /* 1FE60 1001FE60 852B0002 */  lh         $t3, 0x2($t1)
    /* 1FE64 1001FE64 1960004A */  blez       $t3, .L1001FF90
    /* 1FE68 1001FE68 00000000 */   nop
    /* 1FE6C 1001FE6C 3C0A8003 */  lui        $t2, %hi(n_syn)
    /* 1FE70 1001FE70 8D4ABA44 */  lw         $t2, %lo(n_syn)($t2)
    /* 1FE74 1001FE74 8FAC004C */  lw         $t4, 0x4C($sp)
    /* 1FE78 1001FE78 8D4D0048 */  lw         $t5, 0x48($t2)
    /* 1FE7C 1001FE7C 000C7100 */  sll        $t6, $t4, 4
    /* 1FE80 1001FE80 01CC7021 */  addu       $t6, $t6, $t4
    /* 1FE84 1001FE84 000E7080 */  sll        $t6, $t6, 2
    /* 1FE88 1001FE88 01AE7821 */  addu       $t7, $t5, $t6
    /* 1FE8C 1001FE8C 8DF80040 */  lw         $t8, 0x40($t7)
    /* 1FE90 1001FE90 AFB80028 */  sw         $t8, 0x28($sp)
    /* 1FE94 1001FE94 8FB90028 */  lw         $t9, 0x28($sp)
    /* 1FE98 1001FE98 8F280028 */  lw         $t0, 0x28($t9)
    /* 1FE9C 1001FE9C 1100000B */  beqz       $t0, .L1001FECC
    /* 1FEA0 1001FEA0 00000000 */   nop
    /* 1FEA4 1001FEA4 3C098003 */  lui        $t1, %hi(n_syn)
    /* 1FEA8 1001FEA8 8D29BA44 */  lw         $t1, %lo(n_syn)($t1)
    /* 1FEAC 1001FEAC 8FA40028 */  lw         $a0, 0x28($sp)
    /* 1FEB0 1001FEB0 8D2B0054 */  lw         $t3, 0x54($t1)
    /* 1FEB4 1001FEB4 448B2000 */  mtc1       $t3, $f4
    /* 1FEB8 1001FEB8 00000000 */  nop
    /* 1FEBC 1001FEBC 46802120 */  cvt.s.w    $f4, $f4
    /* 1FEC0 1001FEC0 44052000 */  mfc1       $a1, $f4
    /* 1FEC4 1001FEC4 0C0073CE */  jal        func_1001CF38
    /* 1FEC8 1001FEC8 00000000 */   nop
  .L1001FECC:
    /* 1FECC 1001FECC 8FAA0054 */  lw         $t2, 0x54($sp)
    /* 1FED0 1001FED0 254C0008 */  addiu      $t4, $t2, 0x8
    /* 1FED4 1001FED4 AFAC0054 */  sw         $t4, 0x54($sp)
    /* 1FED8 1001FED8 AFAA0024 */  sw         $t2, 0x24($sp)
    /* 1FEDC 1001FEDC 8FAE0024 */  lw         $t6, 0x24($sp)
    /* 1FEE0 1001FEE0 3C0D0B00 */  lui        $t5, (0xB000020 >> 16)
    /* 1FEE4 1001FEE4 35AD0020 */  ori        $t5, $t5, (0xB000020 & 0xFFFF)
    /* 1FEE8 1001FEE8 ADCD0000 */  sw         $t5, 0x0($t6)
    /* 1FEEC 1001FEEC 8FA40028 */  lw         $a0, 0x28($sp)
    /* 1FEF0 1001FEF0 0C008CF0 */  jal        osVirtualToPhysical
    /* 1FEF4 1001FEF4 24840008 */   addiu     $a0, $a0, 0x8
    /* 1FEF8 1001FEF8 8FAF0024 */  lw         $t7, 0x24($sp)
    /* 1FEFC 1001FEFC ADE20004 */  sw         $v0, 0x4($t7)
    /* 1FF00 1001FF00 8FB80054 */  lw         $t8, 0x54($sp)
    /* 1FF04 1001FF04 27190008 */  addiu      $t9, $t8, 0x8
    /* 1FF08 1001FF08 AFB90054 */  sw         $t9, 0x54($sp)
    /* 1FF0C 1001FF0C AFB80020 */  sw         $t8, 0x20($sp)
    /* 1FF10 1001FF10 8FA90020 */  lw         $t1, 0x20($sp)
    /* 1FF14 1001FF14 3C080E00 */  lui        $t0, (0xE0004E0 >> 16)
    /* 1FF18 1001FF18 350804E0 */  ori        $t0, $t0, (0xE0004E0 & 0xFFFF)
    /* 1FF1C 1001FF1C AD280000 */  sw         $t0, 0x0($t1)
    /* 1FF20 1001FF20 8FAB0028 */  lw         $t3, 0x28($sp)
    /* 1FF24 1001FF24 0C008CF0 */  jal        osVirtualToPhysical
    /* 1FF28 1001FF28 8D64002C */   lw        $a0, 0x2C($t3)
    /* 1FF2C 1001FF2C 3C0100FF */  lui        $at, (0xFFFFFF >> 16)
    /* 1FF30 1001FF30 8FAD0020 */  lw         $t5, 0x20($sp)
    /* 1FF34 1001FF34 3421FFFF */  ori        $at, $at, (0xFFFFFF & 0xFFFF)
    /* 1FF38 1001FF38 00415024 */  and        $t2, $v0, $at
    /* 1FF3C 1001FF3C 01416024 */  and        $t4, $t2, $at
    /* 1FF40 1001FF40 ADAC0004 */  sw         $t4, 0x4($t5)
    /* 1FF44 1001FF44 8FAE0054 */  lw         $t6, 0x54($sp)
    /* 1FF48 1001FF48 25CF0008 */  addiu      $t7, $t6, 0x8
    /* 1FF4C 1001FF4C AFAF0054 */  sw         $t7, 0x54($sp)
    /* 1FF50 1001FF50 AFAE001C */  sw         $t6, 0x1C($sp)
    /* 1FF54 1001FF54 8FB9001C */  lw         $t9, 0x1C($sp)
    /* 1FF58 1001FF58 3C180E00 */  lui        $t8, (0xE000650 >> 16)
    /* 1FF5C 1001FF5C 37180650 */  ori        $t8, $t8, (0xE000650 & 0xFFFF)
    /* 1FF60 1001FF60 AF380000 */  sw         $t8, 0x0($t9)
    /* 1FF64 1001FF64 8FA80028 */  lw         $t0, 0x28($sp)
    /* 1FF68 1001FF68 0C008CF0 */  jal        osVirtualToPhysical
    /* 1FF6C 1001FF6C 8D040030 */   lw        $a0, 0x30($t0)
    /* 1FF70 1001FF70 3C0100FF */  lui        $at, (0xFFFFFF >> 16)
    /* 1FF74 1001FF74 8FAA001C */  lw         $t2, 0x1C($sp)
    /* 1FF78 1001FF78 3421FFFF */  ori        $at, $at, (0xFFFFFF & 0xFFFF)
    /* 1FF7C 1001FF7C 00414824 */  and        $t1, $v0, $at
    /* 1FF80 1001FF80 01215824 */  and        $t3, $t1, $at
    /* 1FF84 1001FF84 AD4B0004 */  sw         $t3, 0x4($t2)
    /* 1FF88 1001FF88 8FAC0028 */  lw         $t4, 0x28($sp)
    /* 1FF8C 1001FF8C AD800028 */  sw         $zero, 0x28($t4)
  .L1001FF90:
    /* 1FF90 1001FF90 8FAD0050 */  lw         $t5, 0x50($sp)
    /* 1FF94 1001FF94 8FAF004C */  lw         $t7, 0x4C($sp)
    /* 1FF98 1001FF98 3C198003 */  lui        $t9, %hi(n_syn)
    /* 1FF9C 1001FF9C 8F39BA44 */  lw         $t9, %lo(n_syn)($t9)
    /* 1FFA0 1001FFA0 25AE0001 */  addiu      $t6, $t5, 0x1
    /* 1FFA4 1001FFA4 25F80001 */  addiu      $t8, $t7, 0x1
    /* 1FFA8 1001FFA8 AFB8004C */  sw         $t8, 0x4C($sp)
    /* 1FFAC 1001FFAC AFAE0050 */  sw         $t6, 0x50($sp)
    /* 1FFB0 1001FFB0 8F280050 */  lw         $t0, 0x50($t9)
    /* 1FFB4 1001FFB4 01C8082A */  slt        $at, $t6, $t0
    /* 1FFB8 1001FFB8 1420FF2C */  bnez       $at, .L1001FC6C
    /* 1FFBC 1001FFBC 00000000 */   nop
  .L1001FFC0:
    /* 1FFC0 1001FFC0 10000003 */  b          .L1001FFD0
    /* 1FFC4 1001FFC4 8FA20054 */   lw        $v0, 0x54($sp)
    /* 1FFC8 1001FFC8 10000001 */  b          .L1001FFD0
    /* 1FFCC 1001FFCC 00000000 */   nop
  .L1001FFD0:
    /* 1FFD0 1001FFD0 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 1FFD4 1001FFD4 27BD0058 */  addiu      $sp, $sp, 0x58
    /* 1FFD8 1001FFD8 03E00008 */  jr         $ra
    /* 1FFDC 1001FFDC 00000000 */   nop
endlabel func_1001FB40
