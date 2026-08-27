nonmatching func_1001AAE0, 0xC0

glabel func_1001AAE0
    /* 1AAE0 1001AAE0 27BDFFF8 */  addiu      $sp, $sp, -0x8
    /* 1AAE4 1001AAE4 AFA00004 */  sw         $zero, 0x4($sp)
    /* 1AAE8 1001AAE8 8C8E0064 */  lw         $t6, 0x64($a0)
    /* 1AAEC 1001AAEC AFAE0000 */  sw         $t6, 0x0($sp)
    /* 1AAF0 1001AAF0 8FAF0000 */  lw         $t7, 0x0($sp)
    /* 1AAF4 1001AAF4 11E00026 */  beqz       $t7, .L1001AB90
    /* 1AAF8 1001AAF8 00000000 */   nop
  .L1001AAFC:
    /* 1AAFC 1001AAFC 8FB80000 */  lw         $t8, 0x0($sp)
    /* 1AB00 1001AB00 27190004 */  addiu      $t9, $t8, 0x4
    /* 1AB04 1001AB04 1725001C */  bne        $t9, $a1, .L1001AB78
    /* 1AB08 1001AB08 00000000 */   nop
    /* 1AB0C 1001AB0C 8FA80004 */  lw         $t0, 0x4($sp)
    /* 1AB10 1001AB10 11000006 */  beqz       $t0, .L1001AB2C
    /* 1AB14 1001AB14 00000000 */   nop
    /* 1AB18 1001AB18 8FA90000 */  lw         $t1, 0x0($sp)
    /* 1AB1C 1001AB1C 8FAB0004 */  lw         $t3, 0x4($sp)
    /* 1AB20 1001AB20 8D2A0000 */  lw         $t2, 0x0($t1)
    /* 1AB24 1001AB24 10000004 */  b          .L1001AB38
    /* 1AB28 1001AB28 AD6A0000 */   sw        $t2, 0x0($t3)
  .L1001AB2C:
    /* 1AB2C 1001AB2C 8FAC0000 */  lw         $t4, 0x0($sp)
    /* 1AB30 1001AB30 8D8D0000 */  lw         $t5, 0x0($t4)
    /* 1AB34 1001AB34 AC8D0064 */  sw         $t5, 0x64($a0)
  .L1001AB38:
    /* 1AB38 1001AB38 8C8E0068 */  lw         $t6, 0x68($a0)
    /* 1AB3C 1001AB3C 8FAF0000 */  lw         $t7, 0x0($sp)
    /* 1AB40 1001AB40 15CF0003 */  bne        $t6, $t7, .L1001AB50
    /* 1AB44 1001AB44 00000000 */   nop
    /* 1AB48 1001AB48 8FB80004 */  lw         $t8, 0x4($sp)
    /* 1AB4C 1001AB4C AC980068 */  sw         $t8, 0x68($a0)
  .L1001AB50:
    /* 1AB50 1001AB50 8C99006C */  lw         $t9, 0x6C($a0)
    /* 1AB54 1001AB54 8FA80000 */  lw         $t0, 0x0($sp)
    /* 1AB58 1001AB58 AD190000 */  sw         $t9, 0x0($t0)
    /* 1AB5C 1001AB5C 8FA90000 */  lw         $t1, 0x0($sp)
    /* 1AB60 1001AB60 AC89006C */  sw         $t1, 0x6C($a0)
    /* 1AB64 1001AB64 908A008D */  lbu        $t2, 0x8D($a0)
    /* 1AB68 1001AB68 254BFFFF */  addiu      $t3, $t2, -0x1
    /* 1AB6C 1001AB6C A08B008D */  sb         $t3, 0x8D($a0)
    /* 1AB70 1001AB70 10000009 */  b          .L1001AB98
    /* 1AB74 1001AB74 00000000 */   nop
  .L1001AB78:
    /* 1AB78 1001AB78 8FAC0000 */  lw         $t4, 0x0($sp)
    /* 1AB7C 1001AB7C AFAC0004 */  sw         $t4, 0x4($sp)
    /* 1AB80 1001AB80 8FAD0000 */  lw         $t5, 0x0($sp)
    /* 1AB84 1001AB84 8DAE0000 */  lw         $t6, 0x0($t5)
    /* 1AB88 1001AB88 15C0FFDC */  bnez       $t6, .L1001AAFC
    /* 1AB8C 1001AB8C AFAE0000 */   sw        $t6, 0x0($sp)
  .L1001AB90:
    /* 1AB90 1001AB90 10000001 */  b          .L1001AB98
    /* 1AB94 1001AB94 00000000 */   nop
  .L1001AB98:
    /* 1AB98 1001AB98 03E00008 */  jr         $ra
    /* 1AB9C 1001AB9C 27BD0008 */   addiu     $sp, $sp, 0x8
endlabel func_1001AAE0
