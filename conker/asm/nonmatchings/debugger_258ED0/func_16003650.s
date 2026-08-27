/* Handwritten function */
nonmatching func_16003650, 0x98

glabel func_16003650
    /* 258ED0 16003650 24080000 */  addiu      $t0, $zero, 0x0
    /* 258ED4 16003654 3C041600 */  lui        $a0, %hi(D_160038AC)
    /* 258ED8 16003658 248438AC */  addiu      $a0, $a0, %lo(D_160038AC)
    /* 258EDC 1600365C 3C051600 */  lui        $a1, %hi(D_1600392C)
    /* 258EE0 16003660 24A5392C */  addiu      $a1, $a1, %lo(D_1600392C)
    /* 258EE4 16003664 3C061600 */  lui        $a2, %hi(D_160039AC)
    /* 258EE8 16003668 24C639AC */  addiu      $a2, $a2, %lo(D_160039AC)
    /* 258EEC 1600366C 3C071600 */  lui        $a3, %hi(D_16003A2C)
    /* 258EF0 16003670 24E73A2C */  addiu      $a3, $a3, %lo(D_16003A2C)
  .L16003674:
    /* 258EF4 16003674 40880000 */  mtc0       $t0, $0 /* handwritten instruction */
    /* 258EF8 16003678 00000000 */  nop
    /* 258EFC 1600367C 00000000 */  nop
    /* 258F00 16003680 42000001 */  tlbr /* handwritten instruction */
    /* 258F04 16003684 00000000 */  nop
    /* 258F08 16003688 00000000 */  nop
    /* 258F0C 1600368C 00000000 */  nop
    /* 258F10 16003690 00000000 */  nop
    /* 258F14 16003694 40091000 */  mfc0       $t1, $2 /* handwritten instruction */
    /* 258F18 16003698 00000000 */  nop
    /* 258F1C 1600369C 400A1800 */  mfc0       $t2, $3 /* handwritten instruction */
    /* 258F20 160036A0 00000000 */  nop
    /* 258F24 160036A4 400B5000 */  mfc0       $t3, $10 /* handwritten instruction */
    /* 258F28 160036A8 00000000 */  nop
    /* 258F2C 160036AC 400C2800 */  mfc0       $t4, $5 /* handwritten instruction */
    /* 258F30 160036B0 00000000 */  nop
    /* 258F34 160036B4 AC890000 */  sw         $t1, 0x0($a0)
    /* 258F38 160036B8 ACAA0000 */  sw         $t2, 0x0($a1)
    /* 258F3C 160036BC ACCB0000 */  sw         $t3, 0x0($a2)
    /* 258F40 160036C0 ACEC0000 */  sw         $t4, 0x0($a3)
    /* 258F44 160036C4 21080001 */  addi       $t0, $t0, 0x1 /* handwritten instruction */
    /* 258F48 160036C8 20840004 */  addi       $a0, $a0, 0x4 /* handwritten instruction */
    /* 258F4C 160036CC 20A50004 */  addi       $a1, $a1, 0x4 /* handwritten instruction */
    /* 258F50 160036D0 20E70004 */  addi       $a3, $a3, 0x4 /* handwritten instruction */
    /* 258F54 160036D4 24010020 */  addiu      $at, $zero, 0x20
    /* 258F58 160036D8 1501FFE6 */  bne        $t0, $at, .L16003674
    /* 258F5C 160036DC 20C60004 */   addi      $a2, $a2, 0x4 /* handwritten instruction */
    /* 258F60 160036E0 03E00008 */  jr         $ra
    /* 258F64 160036E4 00000000 */   nop
endlabel func_16003650
    /* 258F68 160036E8 00000000 */  nop
    /* 258F6C 160036EC 00000000 */  nop
