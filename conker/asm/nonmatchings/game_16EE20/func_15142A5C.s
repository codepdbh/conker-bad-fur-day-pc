nonmatching func_15142A5C, 0x24

glabel func_15142A5C
    /* 16FF0C 15142A5C 8C8202D0 */  lw         $v0, 0x2D0($a0)
    /* 16FF10 15142A60 844E003C */  lh         $t6, 0x3C($v0)
    /* 16FF14 15142A64 00001025 */  or         $v0, $zero, $zero
    /* 16FF18 15142A68 19C00003 */  blez       $t6, .L15142A78
    /* 16FF1C 15142A6C 00000000 */   nop
    /* 16FF20 15142A70 03E00008 */  jr         $ra
    /* 16FF24 15142A74 24020001 */   addiu     $v0, $zero, 0x1
  .L15142A78:
    /* 16FF28 15142A78 03E00008 */  jr         $ra
    /* 16FF2C 15142A7C 00000000 */   nop
endlabel func_15142A5C
