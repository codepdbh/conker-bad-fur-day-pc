nonmatching func_1504BA38, 0xB8

glabel func_1504BA38
    /* 78EE8 1504BA38 3C014120 */  lui        $at, (0x41200000 >> 16)
    /* 78EEC 1504BA3C 44812000 */  mtc1       $at, $f4
    /* 78EF0 1504BA40 C4860028 */  lwc1       $f6, 0x28($a0)
    /* 78EF4 1504BA44 4606203C */  c.lt.s     $f4, $f6
    /* 78EF8 1504BA48 00000000 */  nop
    /* 78EFC 1504BA4C 45020004 */  bc1fl      .L1504BA60
    /* 78F00 1504BA50 8C8E0184 */   lw        $t6, 0x184($a0)
    /* 78F04 1504BA54 03E00008 */  jr         $ra
    /* 78F08 1504BA58 A48000CE */   sh        $zero, 0xCE($a0)
    /* 78F0C 1504BA5C 8C8E0184 */  lw         $t6, 0x184($a0)
  .L1504BA60:
    /* 78F10 1504BA60 3C19800A */  lui        $t9, %hi(D_80099140)
    /* 78F14 1504BA64 27399140 */  addiu      $t9, $t9, %lo(D_80099140)
    /* 78F18 1504BA68 31CF001F */  andi       $t7, $t6, 0x1F
    /* 78F1C 1504BA6C 000FC080 */  sll        $t8, $t7, 2
    /* 78F20 1504BA70 030FC023 */  subu       $t8, $t8, $t7
    /* 78F24 1504BA74 03191821 */  addu       $v1, $t8, $t9
    /* 78F28 1504BA78 80650002 */  lb         $a1, 0x2($v1)
    /* 78F2C 1504BA7C 50A00006 */  beql       $a1, $zero, .L1504BA98
    /* 78F30 1504BA80 80620001 */   lb        $v0, 0x1($v1)
    /* 78F34 1504BA84 908800AA */  lbu        $t0, 0xAA($a0)
    /* 78F38 1504BA88 55000003 */  bnel       $t0, $zero, .L1504BA98
    /* 78F3C 1504BA8C 80620001 */   lb        $v0, 0x1($v1)
    /* 78F40 1504BA90 A08500AA */  sb         $a1, 0xAA($a0)
    /* 78F44 1504BA94 80620001 */  lb         $v0, 0x1($v1)
  .L1504BA98:
    /* 78F48 1504BA98 54400005 */  bnel       $v0, $zero, .L1504BAB0
    /* 78F4C 1504BA9C 44824000 */   mtc1      $v0, $f8
    /* 78F50 1504BAA0 80690000 */  lb         $t1, 0x0($v1)
    /* 78F54 1504BAA4 03E00008 */  jr         $ra
    /* 78F58 1504BAA8 A48900CE */   sh        $t1, 0xCE($a0)
    /* 78F5C 1504BAAC 44824000 */  mtc1       $v0, $f8
  .L1504BAB0:
    /* 78F60 1504BAB0 806A0000 */  lb         $t2, 0x0($v1)
    /* 78F64 1504BAB4 3C01800A */  lui        $at, %hi(D_800991D4)
    /* 78F68 1504BAB8 468042A0 */  cvt.s.w    $f10, $f8
    /* 78F6C 1504BABC 448A2000 */  mtc1       $t2, $f4
    /* 78F70 1504BAC0 C43091D4 */  lwc1       $f16, %lo(D_800991D4)($at)
    /* 78F74 1504BAC4 C488003C */  lwc1       $f8, 0x3C($a0)
    /* 78F78 1504BAC8 468021A0 */  cvt.s.w    $f6, $f4
    /* 78F7C 1504BACC 46105482 */  mul.s      $f18, $f10, $f16
    /* 78F80 1504BAD0 46083281 */  sub.s      $f10, $f6, $f8
    /* 78F84 1504BAD4 460A9402 */  mul.s      $f16, $f18, $f10
    /* 78F88 1504BAD8 4600810D */  trunc.w.s  $f4, $f16
    /* 78F8C 1504BADC 440C2000 */  mfc1       $t4, $f4
    /* 78F90 1504BAE0 00000000 */  nop
    /* 78F94 1504BAE4 A48C00CE */  sh         $t4, 0xCE($a0)
    /* 78F98 1504BAE8 03E00008 */  jr         $ra
    /* 78F9C 1504BAEC 00000000 */   nop
endlabel func_1504BA38
