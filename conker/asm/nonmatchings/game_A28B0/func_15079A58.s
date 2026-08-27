nonmatching func_15079A58, 0x40

glabel func_15079A58
    /* A6F08 15079A58 3C09800D */  lui        $t1, %hi(D_800D154C)
    /* A6F0C 15079A5C 8D29154C */  lw         $t1, %lo(D_800D154C)($t1)
    /* A6F10 15079A60 3C0E800D */  lui        $t6, %hi(D_800D1890)
    /* A6F14 15079A64 91CE1890 */  lbu        $t6, %lo(D_800D1890)($t6)
    /* A6F18 15079A68 912A013F */  lbu        $t2, 0x13F($t1)
    /* A6F1C 15079A6C 3C18800D */  lui        $t8, %hi(D_800D1891)
    /* A6F20 15079A70 3C08800D */  lui        $t0, %hi(D_800D2110)
    /* A6F24 15079A74 8D082110 */  lw         $t0, %lo(D_800D2110)($t0)
    /* A6F28 15079A78 93181891 */  lbu        $t8, %lo(D_800D1891)($t8)
    /* A6F2C 15079A7C 000E7A00 */  sll        $t7, $t6, 8
    /* A6F30 15079A80 000A5840 */  sll        $t3, $t2, 1
    /* A6F34 15079A84 010B6021 */  addu       $t4, $t0, $t3
    /* A6F38 15079A88 01F8C821 */  addu       $t9, $t7, $t8
    /* A6F3C 15079A8C A5990000 */  sh         $t9, 0x0($t4)
    /* A6F40 15079A90 03E00008 */  jr         $ra
    /* A6F44 15079A94 00000000 */   nop
endlabel func_15079A58
