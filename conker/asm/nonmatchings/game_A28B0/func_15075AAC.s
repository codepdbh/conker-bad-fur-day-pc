nonmatching func_15075AAC, 0xB4

glabel func_15075AAC
    /* A2F5C 15075AAC 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* A2F60 15075AB0 AFBF0014 */  sw         $ra, 0x14($sp)
    /* A2F64 15075AB4 0D41D552 */  jal        func_15075548
    /* A2F68 15075AB8 00000000 */   nop
    /* A2F6C 15075ABC 3C04800D */  lui        $a0, %hi(D_800D154C)
    /* A2F70 15075AC0 2484154C */  addiu      $a0, $a0, %lo(D_800D154C)
    /* A2F74 15075AC4 8C830000 */  lw         $v1, 0x0($a0)
    /* A2F78 15075AC8 3C0E800D */  lui        $t6, %hi(D_800D2104)
    /* A2F7C 15075ACC 8DCE2104 */  lw         $t6, %lo(D_800D2104)($t6)
    /* A2F80 15075AD0 906F013F */  lbu        $t7, 0x13F($v1)
    /* A2F84 15075AD4 3C09800D */  lui        $t1, %hi(D_800D1891)
    /* A2F88 15075AD8 91291891 */  lbu        $t1, %lo(D_800D1891)($t1)
    /* A2F8C 15075ADC 000FC080 */  sll        $t8, $t7, 2
    /* A2F90 15075AE0 01D8C821 */  addu       $t9, $t6, $t8
    /* A2F94 15075AE4 8F280000 */  lw         $t0, 0x0($t9)
    /* A2F98 15075AE8 000950C0 */  sll        $t2, $t1, 3
    /* A2F9C 15075AEC C4680014 */  lwc1       $f8, 0x14($v1)
    /* A2FA0 15075AF0 010A1021 */  addu       $v0, $t0, $t2
    /* A2FA4 15075AF4 844B0000 */  lh         $t3, 0x0($v0)
    /* A2FA8 15075AF8 844C0004 */  lh         $t4, 0x4($v0)
    /* A2FAC 15075AFC C472001C */  lwc1       $f18, 0x1C($v1)
    /* A2FB0 15075B00 448B2000 */  mtc1       $t3, $f4
    /* A2FB4 15075B04 448C5000 */  mtc1       $t4, $f10
    /* A2FB8 15075B08 3C014220 */  lui        $at, (0x42200000 >> 16)
    /* A2FBC 15075B0C 468021A0 */  cvt.s.w    $f6, $f4
    /* A2FC0 15075B10 46805420 */  cvt.s.w    $f16, $f10
    /* A2FC4 15075B14 46083081 */  sub.s      $f2, $f6, $f8
    /* A2FC8 15075B18 44813000 */  mtc1       $at, $f6
    /* A2FCC 15075B1C 46128301 */  sub.s      $f12, $f16, $f18
    /* A2FD0 15075B20 46001385 */  abs.s      $f14, $f2
    /* A2FD4 15075B24 46006005 */  abs.s      $f0, $f12
    /* A2FD8 15075B28 460E0100 */  add.s      $f4, $f0, $f14
    /* A2FDC 15075B2C 4606203C */  c.lt.s     $f4, $f6
    /* A2FE0 15075B30 00000000 */  nop
    /* A2FE4 15075B34 45020007 */  bc1fl      .L15075B54
    /* A2FE8 15075B38 8FBF0014 */   lw        $ra, 0x14($sp)
    /* A2FEC 15075B3C A460021C */  sh         $zero, 0x21C($v1)
    /* A2FF0 15075B40 8C8D0000 */  lw         $t5, 0x0($a0)
    /* A2FF4 15075B44 44804000 */  mtc1       $zero, $f8
    /* A2FF8 15075B48 00000000 */  nop
    /* A2FFC 15075B4C E5A8003C */  swc1       $f8, 0x3C($t5)
    /* A3000 15075B50 8FBF0014 */  lw         $ra, 0x14($sp)
  .L15075B54:
    /* A3004 15075B54 27BD0018 */  addiu      $sp, $sp, 0x18
    /* A3008 15075B58 03E00008 */  jr         $ra
    /* A300C 15075B5C 00000000 */   nop
endlabel func_15075AAC
