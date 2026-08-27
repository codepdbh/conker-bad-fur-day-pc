nonmatching func_1505E7CC, 0xA8

glabel func_1505E7CC
    /* 8BC7C 1505E7CC 00803025 */  or         $a2, $a0, $zero
    /* 8BC80 1505E7D0 90A20004 */  lbu        $v0, 0x4($a1)
    /* 8BC84 1505E7D4 240100FF */  addiu      $at, $zero, 0xFF
    /* 8BC88 1505E7D8 3C03800D */  lui        $v1, %hi(D_800D1588)
    /* 8BC8C 1505E7DC 14410003 */  bne        $v0, $at, .L1505E7EC
    /* 8BC90 1505E7E0 00027080 */   sll       $t6, $v0, 2
    /* 8BC94 1505E7E4 03E00008 */  jr         $ra
    /* 8BC98 1505E7E8 00001025 */   or        $v0, $zero, $zero
  .L1505E7EC:
    /* 8BC9C 1505E7EC 006E1821 */  addu       $v1, $v1, $t6
    /* 8BCA0 1505E7F0 8C631588 */  lw         $v1, %lo(D_800D1588)($v1)
    /* 8BCA4 1505E7F4 54600004 */  bnel       $v1, $zero, .L1505E808
    /* 8BCA8 1505E7F8 8C62FFFC */   lw        $v0, -0x4($v1)
    /* 8BCAC 1505E7FC 03E00008 */  jr         $ra
    /* 8BCB0 1505E800 00001025 */   or        $v0, $zero, $zero
    /* 8BCB4 1505E804 8C62FFFC */  lw         $v0, -0x4($v1)
  .L1505E808:
    /* 8BCB8 1505E808 24010018 */  addiu      $at, $zero, 0x18
    /* 8BCBC 1505E80C 14400003 */  bnez       $v0, .L1505E81C
    /* 8BCC0 1505E810 00000000 */   nop
    /* 8BCC4 1505E814 03E00008 */  jr         $ra
    /* 8BCC8 1505E818 00001025 */   or        $v0, $zero, $zero
  .L1505E81C:
    /* 8BCCC 1505E81C 0041001B */  divu       $zero, $v0, $at
    /* 8BCD0 1505E820 8C64FFF8 */  lw         $a0, -0x8($v1)
    /* 8BCD4 1505E824 00001012 */  mflo       $v0
    /* 8BCD8 1505E828 14800003 */  bnez       $a0, .L1505E838
    /* 8BCDC 1505E82C 00000000 */   nop
    /* 8BCE0 1505E830 03E00008 */  jr         $ra
    /* 8BCE4 1505E834 00001025 */   or        $v0, $zero, $zero
  .L1505E838:
    /* 8BCE8 1505E838 1040000B */  beqz       $v0, .L1505E868
    /* 8BCEC 1505E83C 00001825 */   or        $v1, $zero, $zero
    /* 8BCF0 1505E840 00802825 */  or         $a1, $a0, $zero
  .L1505E844:
    /* 8BCF4 1505E844 90B80000 */  lbu        $t8, 0x0($a1)
    /* 8BCF8 1505E848 54D80004 */  bnel       $a2, $t8, .L1505E85C
    /* 8BCFC 1505E84C 24630001 */   addiu     $v1, $v1, 0x1
    /* 8BD00 1505E850 03E00008 */  jr         $ra
    /* 8BD04 1505E854 00601025 */   or        $v0, $v1, $zero
    /* 8BD08 1505E858 24630001 */  addiu      $v1, $v1, 0x1
  .L1505E85C:
    /* 8BD0C 1505E85C 0062082B */  sltu       $at, $v1, $v0
    /* 8BD10 1505E860 1420FFF8 */  bnez       $at, .L1505E844
    /* 8BD14 1505E864 24A50018 */   addiu     $a1, $a1, 0x18
  .L1505E868:
    /* 8BD18 1505E868 00001025 */  or         $v0, $zero, $zero
    /* 8BD1C 1505E86C 03E00008 */  jr         $ra
    /* 8BD20 1505E870 00000000 */   nop
endlabel func_1505E7CC
