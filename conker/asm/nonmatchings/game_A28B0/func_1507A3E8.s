nonmatching func_1507A3E8, 0x40

glabel func_1507A3E8
    /* A7898 1507A3E8 3C0E800D */  lui        $t6, %hi(D_800D1890)
    /* A789C 1507A3EC 91CF1890 */  lbu        $t7, %lo(D_800D1890)($t6)
    /* A78A0 1507A3F0 3C19800D */  lui        $t9, %hi(D_800D1891)
    /* A78A4 1507A3F4 93281891 */  lbu        $t0, %lo(D_800D1891)($t9)
    /* A78A8 1507A3F8 3C0B800D */  lui        $t3, %hi(D_800D1892)
    /* A78AC 1507A3FC 916C1892 */  lbu        $t4, %lo(D_800D1892)($t3)
    /* A78B0 1507A400 000FC600 */  sll        $t8, $t7, 24
    /* A78B4 1507A404 3C0F800D */  lui        $t7, %hi(D_800D1893)
    /* A78B8 1507A408 91F91893 */  lbu        $t9, %lo(D_800D1893)($t7)
    /* A78BC 1507A40C 00084C00 */  sll        $t1, $t0, 16
    /* A78C0 1507A410 03095025 */  or         $t2, $t8, $t1
    /* A78C4 1507A414 000C6A00 */  sll        $t5, $t4, 8
    /* A78C8 1507A418 014D7025 */  or         $t6, $t2, $t5
    /* A78CC 1507A41C 01D91025 */  or         $v0, $t6, $t9
    /* A78D0 1507A420 03E00008 */  jr         $ra
    /* A78D4 1507A424 00000000 */   nop
endlabel func_1507A3E8
