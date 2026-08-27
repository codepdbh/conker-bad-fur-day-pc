nonmatching func_151419D0, 0xAC

glabel func_151419D0
    /* 16EE80 151419D0 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* 16EE84 151419D4 AFA60020 */  sw         $a2, 0x20($sp)
    /* 16EE88 151419D8 30CE00FF */  andi       $t6, $a2, 0xFF
    /* 16EE8C 151419DC 01C03025 */  or         $a2, $t6, $zero
    /* 16EE90 151419E0 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 16EE94 151419E4 00803825 */  or         $a3, $a0, $zero
    /* 16EE98 151419E8 14C0000E */  bnez       $a2, .L15141A24
    /* 16EE9C 151419EC 00C01025 */   or        $v0, $a2, $zero
    /* 16EEA0 151419F0 24E20028 */  addiu      $v0, $a3, 0x28
    /* 16EEA4 151419F4 8CA30000 */  lw         $v1, 0x0($a1)
    /* 16EEA8 151419F8 8C4F0004 */  lw         $t7, 0x4($v0)
    /* 16EEAC 151419FC 106F0005 */  beq        $v1, $t7, .L15141A14
    /* 16EEB0 15141A00 00000000 */   nop
    /* 16EEB4 15141A04 90580008 */  lbu        $t8, 0x8($v0)
    /* 16EEB8 15141A08 90B90004 */  lbu        $t9, 0x4($a1)
    /* 16EEBC 15141A0C 57190018 */  bnel       $t8, $t9, .L15141A70
    /* 16EEC0 15141A10 8FBF0014 */   lw        $ra, 0x14($sp)
  .L15141A14:
    /* 16EEC4 15141A14 0D45A5CB */  jal        func_1516972C
    /* 16EEC8 15141A18 00E02025 */   or        $a0, $a3, $zero
    /* 16EECC 15141A1C 10000014 */  b          .L15141A70
    /* 16EED0 15141A20 8FBF0014 */   lw        $ra, 0x14($sp)
  .L15141A24:
    /* 16EED4 15141A24 2401002D */  addiu      $at, $zero, 0x2D
    /* 16EED8 15141A28 14410010 */  bne        $v0, $at, .L15141A6C
    /* 16EEDC 15141A2C 24E20028 */   addiu     $v0, $a3, 0x28
    /* 16EEE0 15141A30 8C440004 */  lw         $a0, 0x4($v0)
    /* 16EEE4 15141A34 8CA30000 */  lw         $v1, 0x0($a1)
    /* 16EEE8 15141A38 54640007 */  bnel       $v1, $a0, .L15141A58
    /* 16EEEC 15141A3C 8CAA0004 */   lw        $t2, 0x4($a1)
    /* 16EEF0 15141A40 8CA80004 */  lw         $t0, 0x4($a1)
    /* 16EEF4 15141A44 AC480004 */  sw         $t0, 0x4($v0)
    /* 16EEF8 15141A48 90A90009 */  lbu        $t1, 0x9($a1)
    /* 16EEFC 15141A4C 10000007 */  b          .L15141A6C
    /* 16EF00 15141A50 A0490008 */   sb        $t1, 0x8($v0)
    /* 16EF04 15141A54 8CAA0004 */  lw         $t2, 0x4($a1)
  .L15141A58:
    /* 16EF08 15141A58 55440005 */  bnel       $t2, $a0, .L15141A70
    /* 16EF0C 15141A5C 8FBF0014 */   lw        $ra, 0x14($sp)
    /* 16EF10 15141A60 AC430004 */  sw         $v1, 0x4($v0)
    /* 16EF14 15141A64 90AB0008 */  lbu        $t3, 0x8($a1)
    /* 16EF18 15141A68 A04B0008 */  sb         $t3, 0x8($v0)
  .L15141A6C:
    /* 16EF1C 15141A6C 8FBF0014 */  lw         $ra, 0x14($sp)
  .L15141A70:
    /* 16EF20 15141A70 27BD0018 */  addiu      $sp, $sp, 0x18
    /* 16EF24 15141A74 03E00008 */  jr         $ra
    /* 16EF28 15141A78 00000000 */   nop
endlabel func_151419D0
