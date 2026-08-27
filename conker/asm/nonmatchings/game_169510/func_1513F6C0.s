nonmatching func_1513F6C0, 0x28

glabel func_1513F6C0
    /* 16CB70 1513F6C0 AFA50004 */  sw         $a1, 0x4($sp)
    /* 16CB74 1513F6C4 30AE00FF */  andi       $t6, $a1, 0xFF
    /* 16CB78 1513F6C8 AFA60008 */  sw         $a2, 0x8($sp)
    /* 16CB7C 1513F6CC 30CF00FF */  andi       $t7, $a2, 0xFF
    /* 16CB80 1513F6D0 01E03025 */  or         $a2, $t7, $zero
    /* 16CB84 1513F6D4 01C02825 */  or         $a1, $t6, $zero
    /* 16CB88 1513F6D8 A0850080 */  sb         $a1, 0x80($a0)
    /* 16CB8C 1513F6DC A0860081 */  sb         $a2, 0x81($a0)
    /* 16CB90 1513F6E0 03E00008 */  jr         $ra
    /* 16CB94 1513F6E4 00000000 */   nop
endlabel func_1513F6C0
