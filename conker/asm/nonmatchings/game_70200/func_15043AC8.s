nonmatching func_15043AC8, 0xA8

glabel func_15043AC8
    /* 70F78 15043AC8 27BDFFD0 */  addiu      $sp, $sp, -0x30
    /* 70F7C 15043ACC AFB50028 */  sw         $s5, 0x28($sp)
    /* 70F80 15043AD0 AFB40024 */  sw         $s4, 0x24($sp)
    /* 70F84 15043AD4 AFB30020 */  sw         $s3, 0x20($sp)
    /* 70F88 15043AD8 AFB2001C */  sw         $s2, 0x1C($sp)
    /* 70F8C 15043ADC AFB10018 */  sw         $s1, 0x18($sp)
    /* 70F90 15043AE0 00C08825 */  or         $s1, $a2, $zero
    /* 70F94 15043AE4 8FB20040 */  lw         $s2, 0x40($sp)
    /* 70F98 15043AE8 00A09825 */  or         $s3, $a1, $zero
    /* 70F9C 15043AEC 00E0A025 */  or         $s4, $a3, $zero
    /* 70FA0 15043AF0 0080A825 */  or         $s5, $a0, $zero
    /* 70FA4 15043AF4 AFBF002C */  sw         $ra, 0x2C($sp)
    /* 70FA8 15043AF8 AFB00014 */  sw         $s0, 0x14($sp)
    /* 70FAC 15043AFC 12400012 */  beqz       $s2, .L15043B48
    /* 70FB0 15043B00 02327021 */   addu      $t6, $s1, $s2
  .L15043B04:
    /* 70FB4 15043B04 026E082A */  slt        $at, $s3, $t6
    /* 70FB8 15043B08 10200003 */  beqz       $at, .L15043B18
    /* 70FBC 15043B0C 02802025 */   or        $a0, $s4, $zero
    /* 70FC0 15043B10 10000002 */  b          .L15043B1C
    /* 70FC4 15043B14 02718023 */   subu      $s0, $s3, $s1
  .L15043B18:
    /* 70FC8 15043B18 02408025 */  or         $s0, $s2, $zero
  .L15043B1C:
    /* 70FCC 15043B1C 02B12821 */  addu       $a1, $s5, $s1
    /* 70FD0 15043B20 0C008BB0 */  jal        memcpy
    /* 70FD4 15043B24 02003025 */   or        $a2, $s0, $zero
    /* 70FD8 15043B28 02308821 */  addu       $s1, $s1, $s0
    /* 70FDC 15043B2C 0233082A */  slt        $at, $s1, $s3
    /* 70FE0 15043B30 0290A021 */  addu       $s4, $s4, $s0
    /* 70FE4 15043B34 14200002 */  bnez       $at, .L15043B40
    /* 70FE8 15043B38 02509023 */   subu      $s2, $s2, $s0
    /* 70FEC 15043B3C 00008825 */  or         $s1, $zero, $zero
  .L15043B40:
    /* 70FF0 15043B40 5640FFF0 */  bnel       $s2, $zero, .L15043B04
    /* 70FF4 15043B44 02327021 */   addu      $t6, $s1, $s2
  .L15043B48:
    /* 70FF8 15043B48 02201025 */  or         $v0, $s1, $zero
    /* 70FFC 15043B4C 8FBF002C */  lw         $ra, 0x2C($sp)
    /* 71000 15043B50 8FB00014 */  lw         $s0, 0x14($sp)
    /* 71004 15043B54 8FB10018 */  lw         $s1, 0x18($sp)
    /* 71008 15043B58 8FB2001C */  lw         $s2, 0x1C($sp)
    /* 7100C 15043B5C 8FB30020 */  lw         $s3, 0x20($sp)
    /* 71010 15043B60 8FB40024 */  lw         $s4, 0x24($sp)
    /* 71014 15043B64 8FB50028 */  lw         $s5, 0x28($sp)
    /* 71018 15043B68 03E00008 */  jr         $ra
    /* 7101C 15043B6C 27BD0030 */   addiu     $sp, $sp, 0x30
endlabel func_15043AC8
