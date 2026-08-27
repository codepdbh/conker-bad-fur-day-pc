nonmatching func_10003BD0, 0x70

glabel func_10003BD0
    /* 3BD0 10003BD0 3C038004 */  lui        $v1, %hi(D_800380B4)
    /* 3BD4 10003BD4 3C04800F */  lui        $a0, %hi(D_800E9D10)
    /* 3BD8 10003BD8 3C058004 */  lui        $a1, %hi(D_800380BC)
    /* 3BDC 10003BDC 24A580BC */  addiu      $a1, $a1, %lo(D_800380BC)
    /* 3BE0 10003BE0 24849D10 */  addiu      $a0, $a0, %lo(D_800E9D10)
    /* 3BE4 10003BE4 246380B4 */  addiu      $v1, $v1, %lo(D_800380B4)
    /* 3BE8 10003BE8 AC640000 */  sw         $a0, 0x0($v1)
    /* 3BEC 10003BEC AC800000 */  sw         $zero, 0x0($a0)
    /* 3BF0 10003BF0 8C6F0000 */  lw         $t7, 0x0($v1)
    /* 3BF4 10003BF4 3C188004 */  lui        $t8, %hi(D_80038098)
    /* 3BF8 10003BF8 3C018004 */  lui        $at, %hi(D_800380B8)
    /* 3BFC 10003BFC ADE00004 */  sw         $zero, 0x4($t7)
    /* 3C00 10003C00 8F188098 */  lw         $t8, %lo(D_80038098)($t8)
    /* 3C04 10003C04 8C690000 */  lw         $t1, 0x0($v1)
    /* 3C08 10003C08 0304C823 */  subu       $t9, $t8, $a0
    /* 3C0C 10003C0C 2728FFEC */  addiu      $t0, $t9, -0x14
    /* 3C10 10003C10 AD280008 */  sw         $t0, 0x8($t1)
    /* 3C14 10003C14 8C6A0000 */  lw         $t2, 0x0($v1)
    /* 3C18 10003C18 AD40000C */  sw         $zero, 0xC($t2)
    /* 3C1C 10003C1C 8C6B0000 */  lw         $t3, 0x0($v1)
    /* 3C20 10003C20 AD600010 */  sw         $zero, 0x10($t3)
    /* 3C24 10003C24 8C620000 */  lw         $v0, 0x0($v1)
    /* 3C28 10003C28 ACA20000 */  sw         $v0, 0x0($a1)
    /* 3C2C 10003C2C AC2280B8 */  sw         $v0, %lo(D_800380B8)($at)
    /* 3C30 10003C30 3C018004 */  lui        $at, %hi(D_800380B0)
    /* 3C34 10003C34 AC2280B0 */  sw         $v0, %lo(D_800380B0)($at)
    /* 3C38 10003C38 03E00008 */  jr         $ra
    /* 3C3C 10003C3C 00000000 */   nop
endlabel func_10003BD0
