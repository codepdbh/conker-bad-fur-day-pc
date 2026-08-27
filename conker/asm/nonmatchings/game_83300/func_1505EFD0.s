nonmatching func_1505EFD0, 0xDC

glabel func_1505EFD0
    /* 8C480 1505EFD0 3C0E800D */  lui        $t6, %hi(D_800CC2D0)
    /* 8C484 1505EFD4 8DCEC2D0 */  lw         $t6, %lo(D_800CC2D0)($t6)
    /* 8C488 1505EFD8 3C03800D */  lui        $v1, %hi(D_800CC5FC)
    /* 8C48C 1505EFDC 2463C5FC */  addiu      $v1, $v1, %lo(D_800CC5FC)
    /* 8C490 1505EFE0 11C00007 */  beqz       $t6, .L1505F000
    /* 8C494 1505EFE4 3C0F800D */   lui       $t7, %hi(D_800CC3F7)
    /* 8C498 1505EFE8 91EFC3F7 */  lbu        $t7, %lo(D_800CC3F7)($t7)
    /* 8C49C 1505EFEC 3C02800D */  lui        $v0, %hi(D_800CC2D0)
    /* 8C4A0 1505EFF0 548F0004 */  bnel       $a0, $t7, .L1505F004
    /* 8C4A4 1505EFF4 24020001 */   addiu     $v0, $zero, 0x1
    /* 8C4A8 1505EFF8 03E00008 */  jr         $ra
    /* 8C4AC 1505EFFC 2442C2D0 */   addiu     $v0, $v0, %lo(D_800CC2D0)
  .L1505F000:
    /* 8C4B0 1505F000 24020001 */  addiu      $v0, $zero, 0x1
  .L1505F004:
    /* 8C4B4 1505F004 24050019 */  addiu      $a1, $zero, 0x19
  .L1505F008:
    /* 8C4B8 1505F008 8C780000 */  lw         $t8, 0x0($v1)
    /* 8C4BC 1505F00C 53000007 */  beql       $t8, $zero, .L1505F02C
    /* 8C4C0 1505F010 8C68032C */   lw        $t0, 0x32C($v1)
    /* 8C4C4 1505F014 90790127 */  lbu        $t9, 0x127($v1)
    /* 8C4C8 1505F018 54990004 */  bnel       $a0, $t9, .L1505F02C
    /* 8C4CC 1505F01C 8C68032C */   lw        $t0, 0x32C($v1)
    /* 8C4D0 1505F020 03E00008 */  jr         $ra
    /* 8C4D4 1505F024 00601025 */   or        $v0, $v1, $zero
    /* 8C4D8 1505F028 8C68032C */  lw         $t0, 0x32C($v1)
  .L1505F02C:
    /* 8C4DC 1505F02C 2463032C */  addiu      $v1, $v1, 0x32C
    /* 8C4E0 1505F030 51000007 */  beql       $t0, $zero, .L1505F050
    /* 8C4E4 1505F034 8C6A032C */   lw        $t2, 0x32C($v1)
    /* 8C4E8 1505F038 90690127 */  lbu        $t1, 0x127($v1)
    /* 8C4EC 1505F03C 54890004 */  bnel       $a0, $t1, .L1505F050
    /* 8C4F0 1505F040 8C6A032C */   lw        $t2, 0x32C($v1)
    /* 8C4F4 1505F044 03E00008 */  jr         $ra
    /* 8C4F8 1505F048 00601025 */   or        $v0, $v1, $zero
    /* 8C4FC 1505F04C 8C6A032C */  lw         $t2, 0x32C($v1)
  .L1505F050:
    /* 8C500 1505F050 2463032C */  addiu      $v1, $v1, 0x32C
    /* 8C504 1505F054 51400007 */  beql       $t2, $zero, .L1505F074
    /* 8C508 1505F058 8C6C032C */   lw        $t4, 0x32C($v1)
    /* 8C50C 1505F05C 906B0127 */  lbu        $t3, 0x127($v1)
    /* 8C510 1505F060 548B0004 */  bnel       $a0, $t3, .L1505F074
    /* 8C514 1505F064 8C6C032C */   lw        $t4, 0x32C($v1)
    /* 8C518 1505F068 03E00008 */  jr         $ra
    /* 8C51C 1505F06C 00601025 */   or        $v0, $v1, $zero
    /* 8C520 1505F070 8C6C032C */  lw         $t4, 0x32C($v1)
  .L1505F074:
    /* 8C524 1505F074 2463032C */  addiu      $v1, $v1, 0x32C
    /* 8C528 1505F078 24420004 */  addiu      $v0, $v0, 0x4
    /* 8C52C 1505F07C 11800006 */  beqz       $t4, .L1505F098
    /* 8C530 1505F080 00000000 */   nop
    /* 8C534 1505F084 906D0127 */  lbu        $t5, 0x127($v1)
    /* 8C538 1505F088 148D0003 */  bne        $a0, $t5, .L1505F098
    /* 8C53C 1505F08C 00000000 */   nop
    /* 8C540 1505F090 03E00008 */  jr         $ra
    /* 8C544 1505F094 00601025 */   or        $v0, $v1, $zero
  .L1505F098:
    /* 8C548 1505F098 1445FFDB */  bne        $v0, $a1, .L1505F008
    /* 8C54C 1505F09C 2463032C */   addiu     $v1, $v1, 0x32C
    /* 8C550 1505F0A0 00001025 */  or         $v0, $zero, $zero
    /* 8C554 1505F0A4 03E00008 */  jr         $ra
    /* 8C558 1505F0A8 00000000 */   nop
endlabel func_1505EFD0
