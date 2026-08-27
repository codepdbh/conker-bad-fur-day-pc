nonmatching func_150AEDF8, 0xAC

glabel func_150AEDF8
    /* DC2A8 150AEDF8 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* DC2AC 150AEDFC AFA60020 */  sw         $a2, 0x20($sp)
    /* DC2B0 150AEE00 30CE00FF */  andi       $t6, $a2, 0xFF
    /* DC2B4 150AEE04 01C03025 */  or         $a2, $t6, $zero
    /* DC2B8 150AEE08 AFBF0014 */  sw         $ra, 0x14($sp)
    /* DC2BC 150AEE0C 00803825 */  or         $a3, $a0, $zero
    /* DC2C0 150AEE10 2401002D */  addiu      $at, $zero, 0x2D
    /* DC2C4 150AEE14 14C10013 */  bne        $a2, $at, .L150AEE64
    /* DC2C8 150AEE18 00C01025 */   or        $v0, $a2, $zero
    /* DC2CC 150AEE1C 24E20028 */  addiu      $v0, $a3, 0x28
    /* DC2D0 150AEE20 8C440000 */  lw         $a0, 0x0($v0)
    /* DC2D4 150AEE24 8CA30000 */  lw         $v1, 0x0($a1)
    /* DC2D8 150AEE28 54640007 */  bnel       $v1, $a0, .L150AEE48
    /* DC2DC 150AEE2C 8CB90004 */   lw        $t9, 0x4($a1)
    /* DC2E0 150AEE30 8CAF0004 */  lw         $t7, 0x4($a1)
    /* DC2E4 150AEE34 AC4F0000 */  sw         $t7, 0x0($v0)
    /* DC2E8 150AEE38 90B80009 */  lbu        $t8, 0x9($a1)
    /* DC2EC 150AEE3C 10000015 */  b          .L150AEE94
    /* DC2F0 150AEE40 A0580004 */   sb        $t8, 0x4($v0)
    /* DC2F4 150AEE44 8CB90004 */  lw         $t9, 0x4($a1)
  .L150AEE48:
    /* DC2F8 150AEE48 57240013 */  bnel       $t9, $a0, .L150AEE98
    /* DC2FC 150AEE4C 8FBF0014 */   lw        $ra, 0x14($sp)
    /* DC300 150AEE50 AC430000 */  sw         $v1, 0x0($v0)
    /* DC304 150AEE54 90A80008 */  lbu        $t0, 0x8($a1)
    /* DC308 150AEE58 A0480004 */  sb         $t0, 0x4($v0)
    /* DC30C 150AEE5C 1000000E */  b          .L150AEE98
    /* DC310 150AEE60 8FBF0014 */   lw        $ra, 0x14($sp)
  .L150AEE64:
    /* DC314 150AEE64 1440000B */  bnez       $v0, .L150AEE94
    /* DC318 150AEE68 24E20028 */   addiu     $v0, $a3, 0x28
    /* DC31C 150AEE6C 8CA30000 */  lw         $v1, 0x0($a1)
    /* DC320 150AEE70 8C490000 */  lw         $t1, 0x0($v0)
    /* DC324 150AEE74 10690005 */  beq        $v1, $t1, .L150AEE8C
    /* DC328 150AEE78 00000000 */   nop
    /* DC32C 150AEE7C 904A0004 */  lbu        $t2, 0x4($v0)
    /* DC330 150AEE80 90AB0004 */  lbu        $t3, 0x4($a1)
    /* DC334 150AEE84 554B0004 */  bnel       $t2, $t3, .L150AEE98
    /* DC338 150AEE88 8FBF0014 */   lw        $ra, 0x14($sp)
  .L150AEE8C:
    /* DC33C 150AEE8C 0D45A5CB */  jal        func_1516972C
    /* DC340 150AEE90 00E02025 */   or        $a0, $a3, $zero
  .L150AEE94:
    /* DC344 150AEE94 8FBF0014 */  lw         $ra, 0x14($sp)
  .L150AEE98:
    /* DC348 150AEE98 27BD0018 */  addiu      $sp, $sp, 0x18
    /* DC34C 150AEE9C 03E00008 */  jr         $ra
    /* DC350 150AEEA0 00000000 */   nop
endlabel func_150AEDF8
    /* DC354 150AEEA4 00000000 */  nop
    /* DC358 150AEEA8 00000000 */  nop
    /* DC35C 150AEEAC 00000000 */  nop
