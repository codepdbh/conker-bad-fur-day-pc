nonmatching func_151D343C, 0x40

glabel func_151D343C
    /* 2008EC 151D343C 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* 2008F0 151D3440 00803025 */  or         $a2, $a0, $zero
    /* 2008F4 151D3444 27A4001C */  addiu      $a0, $sp, 0x1C
    /* 2008F8 151D3448 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 2008FC 151D344C AFA50024 */  sw         $a1, 0x24($sp)
    /* 200900 151D3450 30A700FF */  andi       $a3, $a1, 0xFF
    /* 200904 151D3454 3C0E800B */  lui        $t6, %hi(D_800AB168)
    /* 200908 151D3458 25CEB168 */  addiu      $t6, $t6, %lo(D_800AB168)
    /* 20090C 151D345C 8DC10000 */  lw         $at, 0x0($t6)
    /* 200910 151D3460 24050001 */  addiu      $a1, $zero, 0x1
    /* 200914 151D3464 0D45A498 */  jal        func_15169260
    /* 200918 151D3468 AC810000 */   sw        $at, 0x0($a0)
    /* 20091C 151D346C 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 200920 151D3470 27BD0020 */  addiu      $sp, $sp, 0x20
    /* 200924 151D3474 03E00008 */  jr         $ra
    /* 200928 151D3478 00000000 */   nop
endlabel func_151D343C
    /* 20092C 151D347C 00000000 */  nop
