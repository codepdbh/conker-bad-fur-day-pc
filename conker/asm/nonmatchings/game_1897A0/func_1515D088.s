nonmatching func_1515D088, 0xA8

glabel func_1515D088
    /* 18A538 1515D088 27BDFFC0 */  addiu      $sp, $sp, -0x40
    /* 18A53C 1515D08C AFBF0024 */  sw         $ra, 0x24($sp)
    /* 18A540 1515D090 AFA40040 */  sw         $a0, 0x40($sp)
    /* 18A544 1515D094 8FAE0040 */  lw         $t6, 0x40($sp)
    /* 18A548 1515D098 8DCF0018 */  lw         $t7, 0x18($t6)
    /* 18A54C 1515D09C 31E200FF */  andi       $v0, $t7, 0xFF
    /* 18A550 1515D0A0 04400004 */  bltz       $v0, .L1515D0B4
    /* 18A554 1515D0A4 A3AF0038 */   sb        $t7, 0x38($sp)
    /* 18A558 1515D0A8 28410002 */  slti       $at, $v0, 0x2
    /* 18A55C 1515D0AC 14200003 */  bnez       $at, .L1515D0BC
    /* 18A560 1515D0B0 8FB80040 */   lw        $t8, 0x40($sp)
  .L1515D0B4:
    /* 18A564 1515D0B4 1000001A */  b          .L1515D120
    /* 18A568 1515D0B8 00001025 */   or        $v0, $zero, $zero
  .L1515D0BC:
    /* 18A56C 1515D0BC 44802000 */  mtc1       $zero, $f4
    /* 18A570 1515D0C0 2419000D */  addiu      $t9, $zero, 0xD
    /* 18A574 1515D0C4 2408000C */  addiu      $t0, $zero, 0xC
    /* 18A578 1515D0C8 240900FF */  addiu      $t1, $zero, 0xFF
    /* 18A57C 1515D0CC 240A0001 */  addiu      $t2, $zero, 0x1
    /* 18A580 1515D0D0 AFB80030 */  sw         $t8, 0x30($sp)
    /* 18A584 1515D0D4 AFAA001C */  sw         $t2, 0x1C($sp)
    /* 18A588 1515D0D8 AFA90018 */  sw         $t1, 0x18($sp)
    /* 18A58C 1515D0DC AFA80014 */  sw         $t0, 0x14($sp)
    /* 18A590 1515D0E0 AFB90010 */  sw         $t9, 0x10($sp)
    /* 18A594 1515D0E4 2404012C */  addiu      $a0, $zero, 0x12C
    /* 18A598 1515D0E8 2405FFFF */  addiu      $a1, $zero, -0x1
    /* 18A59C 1515D0EC 24060011 */  addiu      $a2, $zero, 0x11
    /* 18A5A0 1515D0F0 00003825 */  or         $a3, $zero, $zero
    /* 18A5A4 1515D0F4 0D45247D */  jal        func_151491F4
    /* 18A5A8 1515D0F8 E7A40034 */   swc1      $f4, 0x34($sp)
    /* 18A5AC 1515D0FC 10400007 */  beqz       $v0, .L1515D11C
    /* 18A5B0 1515D100 00401825 */   or        $v1, $v0, $zero
    /* 18A5B4 1515D104 24440028 */  addiu      $a0, $v0, 0x28
    /* 18A5B8 1515D108 27A50030 */  addiu      $a1, $sp, 0x30
    /* 18A5BC 1515D10C 2406000C */  addiu      $a2, $zero, 0xC
    /* 18A5C0 1515D110 0C008BB0 */  jal        memcpy
    /* 18A5C4 1515D114 AFA2003C */   sw        $v0, 0x3C($sp)
    /* 18A5C8 1515D118 8FA3003C */  lw         $v1, 0x3C($sp)
  .L1515D11C:
    /* 18A5CC 1515D11C 00601025 */  or         $v0, $v1, $zero
  .L1515D120:
    /* 18A5D0 1515D120 8FBF0024 */  lw         $ra, 0x24($sp)
    /* 18A5D4 1515D124 27BD0040 */  addiu      $sp, $sp, 0x40
    /* 18A5D8 1515D128 03E00008 */  jr         $ra
    /* 18A5DC 1515D12C 00000000 */   nop
endlabel func_1515D088
