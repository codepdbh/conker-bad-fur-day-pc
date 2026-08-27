nonmatching func_151695F0, 0x3C

glabel func_151695F0
    /* 196AA0 151695F0 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* 196AA4 151695F4 AFA50024 */  sw         $a1, 0x24($sp)
    /* 196AA8 151695F8 30AE00FF */  andi       $t6, $a1, 0xFF
    /* 196AAC 151695FC 01C02825 */  or         $a1, $t6, $zero
    /* 196AB0 15169600 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 196AB4 15169604 00803025 */  or         $a2, $a0, $zero
    /* 196AB8 15169608 AFA60018 */  sw         $a2, 0x18($sp)
    /* 196ABC 1516960C 90CF003B */  lbu        $t7, 0x3B($a2)
    /* 196AC0 15169610 27A40018 */  addiu      $a0, $sp, 0x18
    /* 196AC4 15169614 0D45A410 */  jal        func_15169040
    /* 196AC8 15169618 A3AF001C */   sb        $t7, 0x1C($sp)
    /* 196ACC 1516961C 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 196AD0 15169620 27BD0020 */  addiu      $sp, $sp, 0x20
    /* 196AD4 15169624 03E00008 */  jr         $ra
    /* 196AD8 15169628 00000000 */   nop
endlabel func_151695F0
