nonmatching func_150718E4, 0xB4

glabel func_150718E4
    /* 9ED94 150718E4 27BDFFD0 */  addiu      $sp, $sp, -0x30
    /* 9ED98 150718E8 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 9ED9C 150718EC AFA40030 */  sw         $a0, 0x30($sp)
    /* 9EDA0 150718F0 3C0E800A */  lui        $t6, %hi(D_80099BB8)
    /* 9EDA4 150718F4 8DCE9BB8 */  lw         $t6, %lo(D_80099BB8)($t6)
    /* 9EDA8 150718F8 3C02800D */  lui        $v0, %hi(D_800D154C)
    /* 9EDAC 150718FC 8C42154C */  lw         $v0, %lo(D_800D154C)($v0)
    /* 9EDB0 15071900 AFAE0020 */  sw         $t6, 0x20($sp)
    /* 9EDB4 15071904 8C4F01D4 */  lw         $t7, 0x1D4($v0)
    /* 9EDB8 15071908 15E00006 */  bnez       $t7, .L15071924
    /* 9EDBC 1507190C 00000000 */   nop
    /* 9EDC0 15071910 90580074 */  lbu        $t8, 0x74($v0)
    /* 9EDC4 15071914 2401000F */  addiu      $at, $zero, 0xF
    /* 9EDC8 15071918 3319000F */  andi       $t9, $t8, 0xF
    /* 9EDCC 1507191C 5721001B */  bnel       $t9, $at, .L1507198C
    /* 9EDD0 15071920 8FBF0014 */   lw        $ra, 0x14($sp)
  .L15071924:
    /* 9EDD4 15071924 0D42B688 */  jal        func_150ADA20
    /* 9EDD8 15071928 00000000 */   nop
    /* 9EDDC 1507192C 30480003 */  andi       $t0, $v0, 0x3
    /* 9EDE0 15071930 3C0B800D */  lui        $t3, %hi(D_800D154C)
    /* 9EDE4 15071934 8D6B154C */  lw         $t3, %lo(D_800D154C)($t3)
    /* 9EDE8 15071938 03A84821 */  addu       $t1, $sp, $t0
    /* 9EDEC 1507193C 91290020 */  lbu        $t1, 0x20($t1)
    /* 9EDF0 15071940 8D6C01D4 */  lw         $t4, 0x1D4($t3)
    /* 9EDF4 15071944 3C04800A */  lui        $a0, %hi(D_800A5480)
    /* 9EDF8 15071948 00095180 */  sll        $t2, $t1, 6
    /* 9EDFC 1507194C 24845480 */  addiu      $a0, $a0, %lo(D_800A5480)
    /* 9EE00 15071950 27A50024 */  addiu      $a1, $sp, 0x24
    /* 9EE04 15071954 0D450C4D */  jal        func_15143134
    /* 9EE08 15071958 014C3021 */   addu      $a2, $t2, $t4
    /* 9EE0C 1507195C 3C0D800D */  lui        $t5, %hi(D_800D154C)
    /* 9EE10 15071960 8DAD154C */  lw         $t5, %lo(D_800D154C)($t5)
    /* 9EE14 15071964 3C0141A0 */  lui        $at, (0x41A00000 >> 16)
    /* 9EE18 15071968 44813000 */  mtc1       $at, $f6
    /* 9EE1C 1507196C C5A40180 */  lwc1       $f4, 0x180($t5)
    /* 9EE20 15071970 27A40024 */  addiu      $a0, $sp, 0x24
    /* 9EE24 15071974 240500FF */  addiu      $a1, $zero, 0xFF
    /* 9EE28 15071978 46062200 */  add.s      $f8, $f4, $f6
    /* 9EE2C 1507197C 24060001 */  addiu      $a2, $zero, 0x1
    /* 9EE30 15071980 0D470CA7 */  jal        func_151C329C
    /* 9EE34 15071984 E7A80028 */   swc1      $f8, 0x28($sp)
    /* 9EE38 15071988 8FBF0014 */  lw         $ra, 0x14($sp)
  .L1507198C:
    /* 9EE3C 1507198C 27BD0030 */  addiu      $sp, $sp, 0x30
    /* 9EE40 15071990 03E00008 */  jr         $ra
    /* 9EE44 15071994 00000000 */   nop
endlabel func_150718E4
