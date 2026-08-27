nonmatching func_150747E4, 0x5C

glabel func_150747E4
    /* A1C94 150747E4 3C0E800D */  lui        $t6, %hi(D_800D154C)
    /* A1C98 150747E8 8DCE154C */  lw         $t6, %lo(D_800D154C)($t6)
    /* A1C9C 150747EC 3C18800D */  lui        $t8, %hi(D_800CC2D0)
    /* A1CA0 150747F0 2718C2D0 */  addiu      $t8, $t8, %lo(D_800CC2D0)
    /* A1CA4 150747F4 91C20065 */  lbu        $v0, 0x65($t6)
    /* A1CA8 150747F8 3C19800D */  lui        $t9, %hi(D_800D1580)
    /* A1CAC 150747FC 1040000E */  beqz       $v0, .L15074838
    /* A1CB0 15074800 2443FFFF */   addiu     $v1, $v0, -0x1
    /* A1CB4 15074804 00037880 */  sll        $t7, $v1, 2
    /* A1CB8 15074808 01E37823 */  subu       $t7, $t7, $v1
    /* A1CBC 1507480C 000F7880 */  sll        $t7, $t7, 2
    /* A1CC0 15074810 01E37821 */  addu       $t7, $t7, $v1
    /* A1CC4 15074814 000F7880 */  sll        $t7, $t7, 2
    /* A1CC8 15074818 01E37823 */  subu       $t7, $t7, $v1
    /* A1CCC 1507481C 000F7880 */  sll        $t7, $t7, 2
    /* A1CD0 15074820 01E37823 */  subu       $t7, $t7, $v1
    /* A1CD4 15074824 8F391580 */  lw         $t9, %lo(D_800D1580)($t9)
    /* A1CD8 15074828 000F7880 */  sll        $t7, $t7, 2
    /* A1CDC 1507482C 01F82021 */  addu       $a0, $t7, $t8
    /* A1CE0 15074830 AC800218 */  sw         $zero, 0x218($a0)
    /* A1CE4 15074834 A0990232 */  sb         $t9, 0x232($a0)
  .L15074838:
    /* A1CE8 15074838 03E00008 */  jr         $ra
    /* A1CEC 1507483C 00000000 */   nop
endlabel func_150747E4
