nonmatching func_1000FF90, 0x8C

glabel func_1000FF90
    /* FF90 1000FF90 00A03825 */  or         $a3, $a1, $zero
    /* FF94 1000FF94 3C028004 */  lui        $v0, %hi(D_80042760)
    /* FF98 1000FF98 8C422760 */  lw         $v0, %lo(D_80042760)($v0)
    /* FF9C 1000FF9C 3C058004 */  lui        $a1, %hi(D_80041FE0)
    /* FFA0 1000FFA0 24A51FE0 */  addiu      $a1, $a1, %lo(D_80041FE0)
    /* FFA4 1000FFA4 1840001A */  blez       $v0, .L10010010
    /* FFA8 1000FFA8 00001825 */   or        $v1, $zero, $zero
    /* FFAC 1000FFAC 2409FFFF */  addiu      $t1, $zero, -0x1
    /* FFB0 1000FFB0 2408FFFF */  addiu      $t0, $zero, -0x1
  .L1000FFB4:
    /* FFB4 1000FFB4 8CAE0014 */  lw         $t6, 0x14($a1)
    /* FFB8 1000FFB8 548E0012 */  bnel       $a0, $t6, .L10010004
    /* FFBC 1000FFBC 24630001 */   addiu     $v1, $v1, 0x1
    /* FFC0 1000FFC0 8CAF0018 */  lw         $t7, 0x18($a1)
    /* FFC4 1000FFC4 50EF0004 */  beql       $a3, $t7, .L1000FFD8
    /* FFC8 1000FFC8 8CB8001C */   lw        $t8, 0x1C($a1)
    /* FFCC 1000FFCC 54E8000D */  bnel       $a3, $t0, .L10010004
    /* FFD0 1000FFD0 24630001 */   addiu     $v1, $v1, 0x1
    /* FFD4 1000FFD4 8CB8001C */  lw         $t8, 0x1C($a1)
  .L1000FFD8:
    /* FFD8 1000FFD8 50D80004 */  beql       $a2, $t8, .L1000FFEC
    /* FFDC 1000FFDC 8CB90010 */   lw        $t9, 0x10($a1)
    /* FFE0 1000FFE0 54C90008 */  bnel       $a2, $t1, .L10010004
    /* FFE4 1000FFE4 24630001 */   addiu     $v1, $v1, 0x1
    /* FFE8 1000FFE8 8CB90010 */  lw         $t9, 0x10($a1)
  .L1000FFEC:
    /* FFEC 1000FFEC 332A0080 */  andi       $t2, $t9, 0x80
    /* FFF0 1000FFF0 55400004 */  bnel       $t2, $zero, .L10010004
    /* FFF4 1000FFF4 24630001 */   addiu     $v1, $v1, 0x1
    /* FFF8 1000FFF8 03E00008 */  jr         $ra
    /* FFFC 1000FFFC 00601025 */   or        $v0, $v1, $zero
    /* 10000 10010000 24630001 */  addiu      $v1, $v1, 0x1
  .L10010004:
    /* 10004 10010004 0062082A */  slt        $at, $v1, $v0
    /* 10008 10010008 1420FFEA */  bnez       $at, .L1000FFB4
    /* 1000C 1001000C 24A50030 */   addiu     $a1, $a1, 0x30
  .L10010010:
    /* 10010 10010010 2402FFFF */  addiu      $v0, $zero, -0x1
    /* 10014 10010014 03E00008 */  jr         $ra
    /* 10018 10010018 00000000 */   nop
endlabel func_1000FF90
