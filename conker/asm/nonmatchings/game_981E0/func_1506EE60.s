nonmatching func_1506EE60, 0x4C

glabel func_1506EE60
    /* 9C310 1506EE60 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* 9C314 1506EE64 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 9C318 1506EE68 3C02800D */  lui        $v0, %hi(D_800D1580)
    /* 9C31C 1506EE6C 8C421580 */  lw         $v0, %lo(D_800D1580)($v0)
    /* 9C320 1506EE70 3C04800D */  lui        $a0, %hi(D_800D154C)
    /* 9C324 1506EE74 10400007 */  beqz       $v0, .L1506EE94
    /* 9C328 1506EE78 3045FFFF */   andi      $a1, $v0, 0xFFFF
    /* 9C32C 1506EE7C 3C04800D */  lui        $a0, %hi(D_800D154C)
    /* 9C330 1506EE80 8C84154C */  lw         $a0, %lo(D_800D154C)($a0)
    /* 9C334 1506EE84 0D462204 */  jal        func_15188810
    /* 9C338 1506EE88 00023403 */   sra       $a2, $v0, 16
    /* 9C33C 1506EE8C 10000004 */  b          .L1506EEA0
    /* 9C340 1506EE90 8FBF0014 */   lw        $ra, 0x14($sp)
  .L1506EE94:
    /* 9C344 1506EE94 0D4622A7 */  jal        func_15188A9C
    /* 9C348 1506EE98 8C84154C */   lw        $a0, %lo(D_800D154C)($a0)
    /* 9C34C 1506EE9C 8FBF0014 */  lw         $ra, 0x14($sp)
  .L1506EEA0:
    /* 9C350 1506EEA0 27BD0018 */  addiu      $sp, $sp, 0x18
    /* 9C354 1506EEA4 03E00008 */  jr         $ra
    /* 9C358 1506EEA8 00000000 */   nop
endlabel func_1506EE60
