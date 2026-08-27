nonmatching func_1507266C, 0xD4

glabel func_1507266C
    /* 9FB1C 1507266C 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* 9FB20 15072670 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 9FB24 15072674 3C0E800C */  lui        $t6, %hi(D_800BE616)
    /* 9FB28 15072678 91CEE616 */  lbu        $t6, %lo(D_800BE616)($t6)
    /* 9FB2C 1507267C 3C0F800D */  lui        $t7, %hi(D_800D154C)
    /* 9FB30 15072680 3C07800D */  lui        $a3, %hi(D_800CC2D0)
    /* 9FB34 15072684 15C00005 */  bnez       $t6, .L1507269C
    /* 9FB38 15072688 3C19800D */   lui       $t9, %hi(D_800D154C)
    /* 9FB3C 1507268C 8DEF154C */  lw         $t7, %lo(D_800D154C)($t7)
    /* 9FB40 15072690 91F80222 */  lbu        $t8, 0x222($t7)
    /* 9FB44 15072694 53000027 */  beql       $t8, $zero, .L15072734
    /* 9FB48 15072698 8FBF0014 */   lw        $ra, 0x14($sp)
  .L1507269C:
    /* 9FB4C 1507269C 8F39154C */  lw         $t9, %lo(D_800D154C)($t9)
    /* 9FB50 150726A0 2408032C */  addiu      $t0, $zero, 0x32C
    /* 9FB54 150726A4 3C09800C */  lui        $t1, %hi(D_800C3E78)
    /* 9FB58 150726A8 932A0222 */  lbu        $t2, 0x222($t9)
    /* 9FB5C 150726AC 25293E78 */  addiu      $t1, $t1, %lo(D_800C3E78)
    /* 9FB60 150726B0 3C02800D */  lui        $v0, %hi(D_800D1580)
    /* 9FB64 150726B4 01480019 */  multu      $t2, $t0
    /* 9FB68 150726B8 8C431580 */  lw         $v1, %lo(D_800D1580)($v0)
    /* 9FB6C 150726BC 912C0000 */  lbu        $t4, 0x0($t1)
    /* 9FB70 150726C0 24E7C2D0 */  addiu      $a3, $a3, %lo(D_800CC2D0)
    /* 9FB74 150726C4 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 9FB78 150726C8 44810000 */  mtc1       $at, $f0
    /* 9FB7C 150726CC 240E0004 */  addiu      $t6, $zero, 0x4
    /* 9FB80 150726D0 240F00FF */  addiu      $t7, $zero, 0xFF
    /* 9FB84 150726D4 00033403 */  sra        $a2, $v1, 16
    /* 9FB88 150726D8 258D0001 */  addiu      $t5, $t4, 0x1
    /* 9FB8C 150726DC 00005812 */  mflo       $t3
    /* 9FB90 150726E0 00EB2821 */  addu       $a1, $a3, $t3
    /* 9FB94 150726E4 A0AD0065 */  sb         $t5, 0x65($a1)
    /* 9FB98 150726E8 ACA6005C */  sw         $a2, 0x5C($a1)
    /* 9FB9C 150726EC A0AE0101 */  sb         $t6, 0x101($a1)
    /* 9FBA0 150726F0 A0A00104 */  sb         $zero, 0x104($a1)
    /* 9FBA4 150726F4 A0AF0125 */  sb         $t7, 0x125($a1)
    /* 9FBA8 150726F8 ACA00218 */  sw         $zero, 0x218($a1)
    /* 9FBAC 150726FC A4A000E4 */  sh         $zero, 0xE4($a1)
    /* 9FBB0 15072700 A4A000E6 */  sh         $zero, 0xE6($a1)
    /* 9FBB4 15072704 A0A30232 */  sb         $v1, 0x232($a1)
    /* 9FBB8 15072708 E4A000EC */  swc1       $f0, 0xEC($a1)
    /* 9FBBC 1507270C E4A000F0 */  swc1       $f0, 0xF0($a1)
    /* 9FBC0 15072710 E4A000DC */  swc1       $f0, 0xDC($a1)
    /* 9FBC4 15072714 E4A000E0 */  swc1       $f0, 0xE0($a1)
    /* 9FBC8 15072718 91380000 */  lbu        $t8, 0x0($t1)
    /* 9FBCC 1507271C 03080019 */  multu      $t8, $t0
    /* 9FBD0 15072720 0000C812 */  mflo       $t9
    /* 9FBD4 15072724 00F92021 */  addu       $a0, $a3, $t9
    /* 9FBD8 15072728 0D46D6E8 */  jal        func_151B5BA0
    /* 9FBDC 1507272C 00000000 */   nop
    /* 9FBE0 15072730 8FBF0014 */  lw         $ra, 0x14($sp)
  .L15072734:
    /* 9FBE4 15072734 27BD0018 */  addiu      $sp, $sp, 0x18
    /* 9FBE8 15072738 03E00008 */  jr         $ra
    /* 9FBEC 1507273C 00000000 */   nop
endlabel func_1507266C
