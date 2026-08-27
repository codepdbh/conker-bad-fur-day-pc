nonmatching func_15144B34, 0x34

glabel func_15144B34
    /* 171FE4 15144B34 00047080 */  sll        $t6, $a0, 2
    /* 171FE8 15144B38 01C47021 */  addu       $t6, $t6, $a0
    /* 171FEC 15144B3C 000E7080 */  sll        $t6, $t6, 2
    /* 171FF0 15144B40 01C47023 */  subu       $t6, $t6, $a0
    /* 171FF4 15144B44 3C0F800E */  lui        $t7, %hi(D_800DBFF0)
    /* 171FF8 15144B48 8DEFBFF0 */  lw         $t7, %lo(D_800DBFF0)($t7)
    /* 171FFC 15144B4C 000E7080 */  sll        $t6, $t6, 2
    /* 172000 15144B50 01C47021 */  addu       $t6, $t6, $a0
    /* 172004 15144B54 000E7140 */  sll        $t6, $t6, 5
    /* 172008 15144B58 01CF1021 */  addu       $v0, $t6, $t7
    /* 17200C 15144B5C 244202F8 */  addiu      $v0, $v0, 0x2F8
    /* 172010 15144B60 03E00008 */  jr         $ra
    /* 172014 15144B64 00000000 */   nop
endlabel func_15144B34
