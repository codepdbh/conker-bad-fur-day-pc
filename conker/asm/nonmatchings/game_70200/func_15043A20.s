nonmatching func_15043A20, 0xA8

glabel func_15043A20
    /* 70ED0 15043A20 27BDFFD0 */  addiu      $sp, $sp, -0x30
    /* 70ED4 15043A24 AFB50028 */  sw         $s5, 0x28($sp)
    /* 70ED8 15043A28 AFB40024 */  sw         $s4, 0x24($sp)
    /* 70EDC 15043A2C AFB30020 */  sw         $s3, 0x20($sp)
    /* 70EE0 15043A30 AFB2001C */  sw         $s2, 0x1C($sp)
    /* 70EE4 15043A34 AFB10018 */  sw         $s1, 0x18($sp)
    /* 70EE8 15043A38 00C08825 */  or         $s1, $a2, $zero
    /* 70EEC 15043A3C 8FB20040 */  lw         $s2, 0x40($sp)
    /* 70EF0 15043A40 00A09825 */  or         $s3, $a1, $zero
    /* 70EF4 15043A44 00E0A025 */  or         $s4, $a3, $zero
    /* 70EF8 15043A48 0080A825 */  or         $s5, $a0, $zero
    /* 70EFC 15043A4C AFBF002C */  sw         $ra, 0x2C($sp)
    /* 70F00 15043A50 AFB00014 */  sw         $s0, 0x14($sp)
    /* 70F04 15043A54 12400012 */  beqz       $s2, .L15043AA0
    /* 70F08 15043A58 02327021 */   addu      $t6, $s1, $s2
  .L15043A5C:
    /* 70F0C 15043A5C 026E082A */  slt        $at, $s3, $t6
    /* 70F10 15043A60 10200003 */  beqz       $at, .L15043A70
    /* 70F14 15043A64 02B12021 */   addu      $a0, $s5, $s1
    /* 70F18 15043A68 10000002 */  b          .L15043A74
    /* 70F1C 15043A6C 02718023 */   subu      $s0, $s3, $s1
  .L15043A70:
    /* 70F20 15043A70 02408025 */  or         $s0, $s2, $zero
  .L15043A74:
    /* 70F24 15043A74 02802825 */  or         $a1, $s4, $zero
    /* 70F28 15043A78 0C008BB0 */  jal        memcpy
    /* 70F2C 15043A7C 02003025 */   or        $a2, $s0, $zero
    /* 70F30 15043A80 02308821 */  addu       $s1, $s1, $s0
    /* 70F34 15043A84 0233082A */  slt        $at, $s1, $s3
    /* 70F38 15043A88 0290A021 */  addu       $s4, $s4, $s0
    /* 70F3C 15043A8C 14200002 */  bnez       $at, .L15043A98
    /* 70F40 15043A90 02509023 */   subu      $s2, $s2, $s0
    /* 70F44 15043A94 00008825 */  or         $s1, $zero, $zero
  .L15043A98:
    /* 70F48 15043A98 5640FFF0 */  bnel       $s2, $zero, .L15043A5C
    /* 70F4C 15043A9C 02327021 */   addu      $t6, $s1, $s2
  .L15043AA0:
    /* 70F50 15043AA0 02201025 */  or         $v0, $s1, $zero
    /* 70F54 15043AA4 8FBF002C */  lw         $ra, 0x2C($sp)
    /* 70F58 15043AA8 8FB00014 */  lw         $s0, 0x14($sp)
    /* 70F5C 15043AAC 8FB10018 */  lw         $s1, 0x18($sp)
    /* 70F60 15043AB0 8FB2001C */  lw         $s2, 0x1C($sp)
    /* 70F64 15043AB4 8FB30020 */  lw         $s3, 0x20($sp)
    /* 70F68 15043AB8 8FB40024 */  lw         $s4, 0x24($sp)
    /* 70F6C 15043ABC 8FB50028 */  lw         $s5, 0x28($sp)
    /* 70F70 15043AC0 03E00008 */  jr         $ra
    /* 70F74 15043AC4 27BD0030 */   addiu     $sp, $sp, 0x30
endlabel func_15043A20
