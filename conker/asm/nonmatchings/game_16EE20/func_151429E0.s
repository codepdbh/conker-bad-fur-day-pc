nonmatching func_151429E0, 0x7C

glabel func_151429E0
    /* 16FE90 151429E0 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* 16FE94 151429E4 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 16FE98 151429E8 AFA40018 */  sw         $a0, 0x18($sp)
    /* 16FE9C 151429EC AFA5001C */  sw         $a1, 0x1C($sp)
    /* 16FEA0 151429F0 AFA60020 */  sw         $a2, 0x20($sp)
    /* 16FEA4 151429F4 AFA70024 */  sw         $a3, 0x24($sp)
    /* 16FEA8 151429F8 0D42B688 */  jal        func_150ADA20
    /* 16FEAC 151429FC 00000000 */   nop
    /* 16FEB0 15142A00 93B8001B */  lbu        $t8, 0x1B($sp)
    /* 16FEB4 15142A04 304E0003 */  andi       $t6, $v0, 0x3
    /* 16FEB8 15142A08 000E7880 */  sll        $t7, $t6, 2
    /* 16FEBC 15142A0C 0018C880 */  sll        $t9, $t8, 2
    /* 16FEC0 15142A10 0338C823 */  subu       $t9, $t9, $t8
    /* 16FEC4 15142A14 0019C880 */  sll        $t9, $t9, 2
    /* 16FEC8 15142A18 01EE7823 */  subu       $t7, $t7, $t6
    /* 16FECC 15142A1C 3C098009 */  lui        $t1, %hi(D_8008A160)
    /* 16FED0 15142A20 2529A160 */  addiu      $t1, $t1, %lo(D_8008A160)
    /* 16FED4 15142A24 01F94021 */  addu       $t0, $t7, $t9
    /* 16FED8 15142A28 01091821 */  addu       $v1, $t0, $t1
    /* 16FEDC 15142A2C 906A0000 */  lbu        $t2, 0x0($v1)
    /* 16FEE0 15142A30 8FAB001C */  lw         $t3, 0x1C($sp)
    /* 16FEE4 15142A34 A16A0000 */  sb         $t2, 0x0($t3)
    /* 16FEE8 15142A38 8FAD0020 */  lw         $t5, 0x20($sp)
    /* 16FEEC 15142A3C 906C0001 */  lbu        $t4, 0x1($v1)
    /* 16FEF0 15142A40 A1AC0000 */  sb         $t4, 0x0($t5)
    /* 16FEF4 15142A44 8FB80024 */  lw         $t8, 0x24($sp)
    /* 16FEF8 15142A48 906E0002 */  lbu        $t6, 0x2($v1)
    /* 16FEFC 15142A4C A30E0000 */  sb         $t6, 0x0($t8)
    /* 16FF00 15142A50 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 16FF04 15142A54 03E00008 */  jr         $ra
    /* 16FF08 15142A58 27BD0018 */   addiu     $sp, $sp, 0x18
endlabel func_151429E0
