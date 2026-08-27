nonmatching func_1502B110, 0x114

glabel func_1502B110
    /* 585C0 1502B110 27BDFFB8 */  addiu      $sp, $sp, -0x48
    /* 585C4 1502B114 AFB2001C */  sw         $s2, 0x1C($sp)
    /* 585C8 1502B118 00809025 */  or         $s2, $a0, $zero
    /* 585CC 1502B11C AFBF002C */  sw         $ra, 0x2C($sp)
    /* 585D0 1502B120 AFB50028 */  sw         $s5, 0x28($sp)
    /* 585D4 1502B124 AFB40024 */  sw         $s4, 0x24($sp)
    /* 585D8 1502B128 AFB30020 */  sw         $s3, 0x20($sp)
    /* 585DC 1502B12C AFB10018 */  sw         $s1, 0x18($sp)
    /* 585E0 1502B130 AFB00014 */  sw         $s0, 0x14($sp)
    /* 585E4 1502B134 AFA5004C */  sw         $a1, 0x4C($sp)
    /* 585E8 1502B138 AFA60050 */  sw         $a2, 0x50($sp)
    /* 585EC 1502B13C AFA70054 */  sw         $a3, 0x54($sp)
    /* 585F0 1502B140 240E0001 */  addiu      $t6, $zero, 0x1
    /* 585F4 1502B144 AFAE003C */  sw         $t6, 0x3C($sp)
    /* 585F8 1502B148 16400003 */  bnez       $s2, .L1502B158
    /* 585FC 1502B14C AFA00038 */   sw        $zero, 0x38($sp)
    /* 58600 1502B150 3C1200AB */  lui        $s2, %hi(D_AB1950)
    /* 58604 1502B154 26521950 */  addiu      $s2, $s2, %lo(D_AB1950)
  .L1502B158:
    /* 58608 1502B158 2CE10002 */  sltiu      $at, $a3, 0x2
    /* 5860C 1502B15C 27B00058 */  addiu      $s0, $sp, 0x58
    /* 58610 1502B160 14200019 */  bnez       $at, .L1502B1C8
    /* 58614 1502B164 AFA70054 */   sw        $a3, 0x54($sp)
    /* 58618 1502B168 3C140FFF */  lui        $s4, (0xFFFFFFF >> 16)
    /* 5861C 1502B16C 3694FFFF */  ori        $s4, $s4, (0xFFFFFFF & 0xFFFF)
    /* 58620 1502B170 AFA70054 */  sw         $a3, 0x54($sp)
    /* 58624 1502B174 2415FFFC */  addiu      $s5, $zero, -0x4
    /* 58628 1502B178 27B3003C */  addiu      $s3, $sp, 0x3C
  .L1502B17C:
    /* 5862C 1502B17C 8FB8003C */  lw         $t8, 0x3C($sp)
    /* 58630 1502B180 260F0003 */  addiu      $t7, $s0, 0x3
    /* 58634 1502B184 01F58024 */  and        $s0, $t7, $s5
    /* 58638 1502B188 26100004 */  addiu      $s0, $s0, 0x4
    /* 5863C 1502B18C 13000006 */  beqz       $t8, .L1502B1A8
    /* 58640 1502B190 8E11FFFC */   lw        $s1, -0x4($s0)
    /* 58644 1502B194 02402025 */  or         $a0, $s2, $zero
    /* 58648 1502B198 02202825 */  or         $a1, $s1, $zero
    /* 5864C 1502B19C 0D40AB22 */  jal        func_1502AC88
    /* 58650 1502B1A0 02603025 */   or        $a2, $s3, $zero
    /* 58654 1502B1A4 02429021 */  addu       $s2, $s2, $v0
  .L1502B1A8:
    /* 58658 1502B1A8 8FA70054 */  lw         $a3, 0x54($sp)
    /* 5865C 1502B1AC 8FB9003C */  lw         $t9, 0x3C($sp)
    /* 58660 1502B1B0 24E7FFFF */  addiu      $a3, $a3, -0x1
    /* 58664 1502B1B4 2CE10002 */  sltiu      $at, $a3, 0x2
    /* 58668 1502B1B8 03344024 */  and        $t0, $t9, $s4
    /* 5866C 1502B1BC AFA70054 */  sw         $a3, 0x54($sp)
    /* 58670 1502B1C0 1020FFEE */  beqz       $at, .L1502B17C
    /* 58674 1502B1C4 AFA8003C */   sw        $t0, 0x3C($sp)
  .L1502B1C8:
    /* 58678 1502B1C8 8FAA003C */  lw         $t2, 0x3C($sp)
    /* 5867C 1502B1CC 2415FFFC */  addiu      $s5, $zero, -0x4
    /* 58680 1502B1D0 26090003 */  addiu      $t1, $s0, 0x3
    /* 58684 1502B1D4 01358024 */  and        $s0, $t1, $s5
    /* 58688 1502B1D8 26100004 */  addiu      $s0, $s0, 0x4
    /* 5868C 1502B1DC 11400007 */  beqz       $t2, .L1502B1FC
    /* 58690 1502B1E0 8E11FFFC */   lw        $s1, -0x4($s0)
    /* 58694 1502B1E4 02402025 */  or         $a0, $s2, $zero
    /* 58698 1502B1E8 8FA50050 */  lw         $a1, 0x50($sp)
    /* 5869C 1502B1EC 02203025 */  or         $a2, $s1, $zero
    /* 586A0 1502B1F0 0D40ABC1 */  jal        func_1502AF04
    /* 586A4 1502B1F4 8FA7004C */   lw        $a3, 0x4C($sp)
    /* 586A8 1502B1F8 AFA20038 */  sw         $v0, 0x38($sp)
  .L1502B1FC:
    /* 586AC 1502B1FC 8FA20038 */  lw         $v0, 0x38($sp)
    /* 586B0 1502B200 8FBF002C */  lw         $ra, 0x2C($sp)
    /* 586B4 1502B204 8FB00014 */  lw         $s0, 0x14($sp)
    /* 586B8 1502B208 8FB10018 */  lw         $s1, 0x18($sp)
    /* 586BC 1502B20C 8FB2001C */  lw         $s2, 0x1C($sp)
    /* 586C0 1502B210 8FB30020 */  lw         $s3, 0x20($sp)
    /* 586C4 1502B214 8FB40024 */  lw         $s4, 0x24($sp)
    /* 586C8 1502B218 8FB50028 */  lw         $s5, 0x28($sp)
    /* 586CC 1502B21C 03E00008 */  jr         $ra
    /* 586D0 1502B220 27BD0048 */   addiu     $sp, $sp, 0x48
endlabel func_1502B110
