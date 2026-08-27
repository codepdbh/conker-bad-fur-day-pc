nonmatching func_1508F060, 0x44

glabel func_1508F060
    /* BC510 1508F060 3C01800D */  lui        $at, %hi(D_800D246D)
    /* BC514 1508F064 A020246D */  sb         $zero, %lo(D_800D246D)($at)
    /* BC518 1508F068 3C01800D */  lui        $at, %hi(D_800D247D)
    /* BC51C 1508F06C 24020002 */  addiu      $v0, $zero, 0x2
    /* BC520 1508F070 3C0F800D */  lui        $t7, %hi(D_800D2460)
    /* BC524 1508F074 A020247D */  sb         $zero, %lo(D_800D247D)($at)
    /* BC528 1508F078 25EF2460 */  addiu      $t7, $t7, %lo(D_800D2460)
    /* BC52C 1508F07C 00027100 */  sll        $t6, $v0, 4
    /* BC530 1508F080 01CF1821 */  addu       $v1, $t6, $t7
    /* BC534 1508F084 A060001D */  sb         $zero, 0x1D($v1)
    /* BC538 1508F088 A060002D */  sb         $zero, 0x2D($v1)
    /* BC53C 1508F08C A060003D */  sb         $zero, 0x3D($v1)
    /* BC540 1508F090 A060000D */  sb         $zero, 0xD($v1)
    /* BC544 1508F094 3C01800D */  lui        $at, %hi(D_800D24C0)
    /* BC548 1508F098 AC2024C0 */  sw         $zero, %lo(D_800D24C0)($at)
    /* BC54C 1508F09C 03E00008 */  jr         $ra
    /* BC550 1508F0A0 00000000 */   nop
endlabel func_1508F060
