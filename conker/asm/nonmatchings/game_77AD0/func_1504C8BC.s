nonmatching func_1504C8BC, 0x128

glabel func_1504C8BC
    /* 79D6C 1504C8BC 8C83031C */  lw         $v1, 0x31C($a0)
    /* 79D70 1504C8C0 54600004 */  bnel       $v1, $zero, .L1504C8D4
    /* 79D74 1504C8C4 8C8E01D4 */   lw        $t6, 0x1D4($a0)
    /* 79D78 1504C8C8 03E00008 */  jr         $ra
    /* 79D7C 1504C8CC 24020001 */   addiu     $v0, $zero, 0x1
    /* 79D80 1504C8D0 8C8E01D4 */  lw         $t6, 0x1D4($a0)
  .L1504C8D4:
    /* 79D84 1504C8D4 3C0F800C */  lui        $t7, %hi(D_800BE9F0)
    /* 79D88 1504C8D8 24020001 */  addiu      $v0, $zero, 0x1
    /* 79D8C 1504C8DC 15C0000A */  bnez       $t6, .L1504C908
    /* 79D90 1504C8E0 00000000 */   nop
    /* 79D94 1504C8E4 8DEFE9F0 */  lw         $t7, %lo(D_800BE9F0)($t7)
    /* 79D98 1504C8E8 24010033 */  addiu      $at, $zero, 0x33
    /* 79D9C 1504C8EC 11E10006 */  beq        $t7, $at, .L1504C908
    /* 79DA0 1504C8F0 00000000 */   nop
    /* 79DA4 1504C8F4 8C980000 */  lw         $t8, 0x0($a0)
    /* 79DA8 1504C8F8 24010025 */  addiu      $at, $zero, 0x25
    /* 79DAC 1504C8FC 3C19800D */  lui        $t9, %hi(D_800CC2B8)
    /* 79DB0 1504C900 57010004 */  bnel       $t8, $at, .L1504C914
    /* 79DB4 1504C904 90880127 */   lbu       $t0, 0x127($a0)
  .L1504C908:
    /* 79DB8 1504C908 03E00008 */  jr         $ra
    /* 79DBC 1504C90C A06001A8 */   sb        $zero, 0x1A8($v1)
    /* 79DC0 1504C910 90880127 */  lbu        $t0, 0x127($a0)
  .L1504C914:
    /* 79DC4 1504C914 9339C2B8 */  lbu        $t9, %lo(D_800CC2B8)($t9)
    /* 79DC8 1504C918 3C05800C */  lui        $a1, %hi(D_800BE9E4)
    /* 79DCC 1504C91C 31090001 */  andi       $t1, $t0, 0x1
    /* 79DD0 1504C920 17290029 */  bne        $t9, $t1, .L1504C9C8
    /* 79DD4 1504C924 24A5E9E4 */   addiu     $a1, $a1, %lo(D_800BE9E4)
    /* 79DD8 1504C928 906A01A8 */  lbu        $t2, 0x1A8($v1)
    /* 79DDC 1504C92C 3C05800C */  lui        $a1, %hi(D_800BE9E4)
    /* 79DE0 1504C930 24A5E9E4 */  addiu      $a1, $a1, %lo(D_800BE9E4)
    /* 79DE4 1504C934 11400022 */  beqz       $t2, .L1504C9C0
    /* 79DE8 1504C938 00000000 */   nop
    /* 79DEC 1504C93C 8CA20000 */  lw         $v0, 0x0($a1)
    /* 79DF0 1504C940 3C01800D */  lui        $at, %hi(D_800CC2BA)
    /* 79DF4 1504C944 3C03800C */  lui        $v1, %hi(D_800BE9A4)
    /* 79DF8 1504C948 A422C2BA */  sh         $v0, %lo(D_800CC2BA)($at)
    /* 79DFC 1504C94C 8C8B031C */  lw         $t3, 0x31C($a0)
    /* 79E00 1504C950 3C013F00 */  lui        $at, (0x3F000000 >> 16)
    /* 79E04 1504C954 44814000 */  mtc1       $at, $f8
    /* 79E08 1504C958 916C01A8 */  lbu        $t4, 0x1A8($t3)
    /* 79E0C 1504C95C 2463E9A4 */  addiu      $v1, $v1, %lo(D_800BE9A4)
    /* 79E10 1504C960 44801000 */  mtc1       $zero, $f2
    /* 79E14 1504C964 004C7021 */  addu       $t6, $v0, $t4
    /* 79E18 1504C968 448E2000 */  mtc1       $t6, $f4
    /* 79E1C 1504C96C ACAE0000 */  sw         $t6, 0x0($a1)
    /* 79E20 1504C970 3C01800C */  lui        $at, %hi(D_800BE9A8)
    /* 79E24 1504C974 468021A0 */  cvt.s.w    $f6, $f4
    /* 79E28 1504C978 46083282 */  mul.s      $f10, $f6, $f8
    /* 79E2C 1504C97C E46A0000 */  swc1       $f10, 0x0($v1)
    /* 79E30 1504C980 C4600000 */  lwc1       $f0, 0x0($v1)
    /* 79E34 1504C984 46001032 */  c.eq.s     $f2, $f0
    /* 79E38 1504C988 00000000 */  nop
    /* 79E3C 1504C98C 45010007 */  bc1t       .L1504C9AC
    /* 79E40 1504C990 00000000 */   nop
    /* 79E44 1504C994 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 79E48 1504C998 44818000 */  mtc1       $at, $f16
    /* 79E4C 1504C99C 3C01800C */  lui        $at, %hi(D_800BE9A8)
    /* 79E50 1504C9A0 46008483 */  div.s      $f18, $f16, $f0
    /* 79E54 1504C9A4 10000002 */  b          .L1504C9B0
    /* 79E58 1504C9A8 E432E9A8 */   swc1      $f18, %lo(D_800BE9A8)($at)
  .L1504C9AC:
    /* 79E5C 1504C9AC E422E9A8 */  swc1       $f2, %lo(D_800BE9A8)($at)
  .L1504C9B0:
    /* 79E60 1504C9B0 8C8F031C */  lw         $t7, 0x31C($a0)
    /* 79E64 1504C9B4 24020002 */  addiu      $v0, $zero, 0x2
    /* 79E68 1504C9B8 03E00008 */  jr         $ra
    /* 79E6C 1504C9BC A1E001A8 */   sb        $zero, 0x1A8($t7)
  .L1504C9C0:
    /* 79E70 1504C9C0 03E00008 */  jr         $ra
    /* 79E74 1504C9C4 24020001 */   addiu     $v0, $zero, 0x1
  .L1504C9C8:
    /* 79E78 1504C9C8 907801A8 */  lbu        $t8, 0x1A8($v1)
    /* 79E7C 1504C9CC 8CA80000 */  lw         $t0, 0x0($a1)
    /* 79E80 1504C9D0 00001025 */  or         $v0, $zero, $zero
    /* 79E84 1504C9D4 0308C821 */  addu       $t9, $t8, $t0
    /* 79E88 1504C9D8 A07901A8 */  sb         $t9, 0x1A8($v1)
    /* 79E8C 1504C9DC 03E00008 */  jr         $ra
    /* 79E90 1504C9E0 00000000 */   nop
endlabel func_1504C8BC
