nonmatching func_1505EEB0, 0x44

glabel func_1505EEB0
    /* 8C360 1505EEB0 3C0E800D */  lui        $t6, %hi(D_800CC2D0)
    /* 8C364 1505EEB4 8DCEC2D0 */  lw         $t6, %lo(D_800CC2D0)($t6)
    /* 8C368 1505EEB8 3C03800D */  lui        $v1, %hi(D_800CC2D0)
    /* 8C36C 1505EEBC 2463C2D0 */  addiu      $v1, $v1, %lo(D_800CC2D0)
    /* 8C370 1505EEC0 108E0008 */  beq        $a0, $t6, .L1505EEE4
    /* 8C374 1505EEC4 00003025 */   or        $a2, $zero, $zero
    /* 8C378 1505EEC8 24C60001 */  addiu      $a2, $a2, 0x1
  .L1505EECC:
    /* 8C37C 1505EECC 28C10019 */  slti       $at, $a2, 0x19
    /* 8C380 1505EED0 10200004 */  beqz       $at, .L1505EEE4
    /* 8C384 1505EED4 2463032C */   addiu     $v1, $v1, 0x32C
    /* 8C388 1505EED8 8C6F0000 */  lw         $t7, 0x0($v1)
    /* 8C38C 1505EEDC 548FFFFB */  bnel       $a0, $t7, .L1505EECC
    /* 8C390 1505EEE0 24C60001 */   addiu     $a2, $a2, 0x1
  .L1505EEE4:
    /* 8C394 1505EEE4 ACA60000 */  sw         $a2, 0x0($a1)
    /* 8C398 1505EEE8 00601025 */  or         $v0, $v1, $zero
    /* 8C39C 1505EEEC 03E00008 */  jr         $ra
    /* 8C3A0 1505EEF0 00000000 */   nop
endlabel func_1505EEB0
