nonmatching func_15169668, 0x24

glabel func_15169668
    /* 196B18 15169668 AFA50004 */  sw         $a1, 0x4($sp)
    /* 196B1C 1516966C AFA60008 */  sw         $a2, 0x8($sp)
    /* 196B20 15169670 AFA7000C */  sw         $a3, 0xC($sp)
    /* 196B24 15169674 240E0001 */  addiu      $t6, $zero, 0x1
    /* 196B28 15169678 3C01800D */  lui        $at, %hi(D_800D2DAB)
    /* 196B2C 1516967C A02E2DAB */  sb         $t6, %lo(D_800D2DAB)($at)
    /* 196B30 15169680 00801025 */  or         $v0, $a0, $zero
    /* 196B34 15169684 03E00008 */  jr         $ra
    /* 196B38 15169688 00000000 */   nop
endlabel func_15169668
