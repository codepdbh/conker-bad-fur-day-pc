nonmatching func_1001BE1C, 0x78

glabel func_1001BE1C
    /* 1BE1C 1001BE1C 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* 1BE20 1001BE20 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 1BE24 1001BE24 AFA40018 */  sw         $a0, 0x18($sp)
    /* 1BE28 1001BE28 AFA5001C */  sw         $a1, 0x1C($sp)
    /* 1BE2C 1001BE2C AFA60020 */  sw         $a2, 0x20($sp)
    /* 1BE30 1001BE30 8FAE0020 */  lw         $t6, 0x20($sp)
    /* 1BE34 1001BE34 2401FFFF */  addiu      $at, $zero, -0x1
    /* 1BE38 1001BE38 15C10008 */  bne        $t6, $at, .L1001BE5C
    /* 1BE3C 1001BE3C 00000000 */   nop
    /* 1BE40 1001BE40 8FAF0018 */  lw         $t7, 0x18($sp)
    /* 1BE44 1001BE44 8FA4001C */  lw         $a0, 0x1C($sp)
    /* 1BE48 1001BE48 8DF90030 */  lw         $t9, 0x30($t7)
    /* 1BE4C 1001BE4C 0320F809 */  jalr       $t9
    /* 1BE50 1001BE50 00000000 */   nop
    /* 1BE54 1001BE54 10000009 */  b          .L1001BE7C
    /* 1BE58 1001BE58 00000000 */   nop
  .L1001BE5C:
    /* 1BE5C 1001BE5C 8FAB0018 */  lw         $t3, 0x18($sp)
    /* 1BE60 1001BE60 8FA80020 */  lw         $t0, 0x20($sp)
    /* 1BE64 1001BE64 8FB8001C */  lw         $t8, 0x1C($sp)
    /* 1BE68 1001BE68 8D790030 */  lw         $t9, 0x30($t3)
    /* 1BE6C 1001BE6C 00084880 */  sll        $t1, $t0, 2
    /* 1BE70 1001BE70 03095021 */  addu       $t2, $t8, $t1
    /* 1BE74 1001BE74 0320F809 */  jalr       $t9
    /* 1BE78 1001BE78 8D440010 */   lw        $a0, 0x10($t2)
  .L1001BE7C:
    /* 1BE7C 1001BE7C 10000001 */  b          .L1001BE84
    /* 1BE80 1001BE80 00000000 */   nop
  .L1001BE84:
    /* 1BE84 1001BE84 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 1BE88 1001BE88 27BD0018 */  addiu      $sp, $sp, 0x18
    /* 1BE8C 1001BE8C 03E00008 */  jr         $ra
    /* 1BE90 1001BE90 00000000 */   nop
endlabel func_1001BE1C
