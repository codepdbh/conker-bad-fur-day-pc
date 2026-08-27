nonmatching func_15079A98, 0x98

glabel func_15079A98
    /* A6F48 15079A98 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* A6F4C 15079A9C AFBF0014 */  sw         $ra, 0x14($sp)
    /* A6F50 15079AA0 3C0F800D */  lui        $t7, %hi(D_800D154C)
    /* A6F54 15079AA4 8DEF154C */  lw         $t7, %lo(D_800D154C)($t7)
    /* A6F58 15079AA8 3C0E800D */  lui        $t6, %hi(D_800D2104)
    /* A6F5C 15079AAC 8DCE2104 */  lw         $t6, %lo(D_800D2104)($t6)
    /* A6F60 15079AB0 91F8013F */  lbu        $t8, 0x13F($t7)
    /* A6F64 15079AB4 00044880 */  sll        $t1, $a0, 2
    /* A6F68 15079AB8 01244823 */  subu       $t1, $t1, $a0
    /* A6F6C 15079ABC 0018C880 */  sll        $t9, $t8, 2
    /* A6F70 15079AC0 01D94021 */  addu       $t0, $t6, $t9
    /* A6F74 15079AC4 8D020000 */  lw         $v0, 0x0($t0)
    /* A6F78 15079AC8 00094880 */  sll        $t1, $t1, 2
    /* A6F7C 15079ACC 01244821 */  addu       $t1, $t1, $a0
    /* A6F80 15079AD0 844B0000 */  lh         $t3, 0x0($v0)
    /* A6F84 15079AD4 844C0004 */  lh         $t4, 0x4($v0)
    /* A6F88 15079AD8 00094880 */  sll        $t1, $t1, 2
    /* A6F8C 15079ADC 448B2000 */  mtc1       $t3, $f4
    /* A6F90 15079AE0 448C8000 */  mtc1       $t4, $f16
    /* A6F94 15079AE4 01244823 */  subu       $t1, $t1, $a0
    /* A6F98 15079AE8 00094880 */  sll        $t1, $t1, 2
    /* A6F9C 15079AEC 01244823 */  subu       $t1, $t1, $a0
    /* A6FA0 15079AF0 3C0A800D */  lui        $t2, %hi(D_800CC2D0)
    /* A6FA4 15079AF4 468021A0 */  cvt.s.w    $f6, $f4
    /* A6FA8 15079AF8 254AC2D0 */  addiu      $t2, $t2, %lo(D_800CC2D0)
    /* A6FAC 15079AFC 00094880 */  sll        $t1, $t1, 2
    /* A6FB0 15079B00 012A1821 */  addu       $v1, $t1, $t2
    /* A6FB4 15079B04 C4680014 */  lwc1       $f8, 0x14($v1)
    /* A6FB8 15079B08 468084A0 */  cvt.s.w    $f18, $f16
    /* A6FBC 15079B0C C46A001C */  lwc1       $f10, 0x1C($v1)
    /* A6FC0 15079B10 00003025 */  or         $a2, $zero, $zero
    /* A6FC4 15079B14 46083301 */  sub.s      $f12, $f6, $f8
    /* A6FC8 15079B18 0D41698C */  jal        func_1505A630
    /* A6FCC 15079B1C 46125381 */   sub.s     $f14, $f10, $f18
    /* A6FD0 15079B20 8FBF0014 */  lw         $ra, 0x14($sp)
    /* A6FD4 15079B24 27BD0018 */  addiu      $sp, $sp, 0x18
    /* A6FD8 15079B28 03E00008 */  jr         $ra
    /* A6FDC 15079B2C 00000000 */   nop
endlabel func_15079A98
