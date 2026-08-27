nonmatching func_1516962C, 0x3C

glabel func_1516962C
    /* 196ADC 1516962C 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* 196AE0 15169630 AFA60028 */  sw         $a2, 0x28($sp)
    /* 196AE4 15169634 30CE00FF */  andi       $t6, $a2, 0xFF
    /* 196AE8 15169638 01C03025 */  or         $a2, $t6, $zero
    /* 196AEC 1516963C AFBF0014 */  sw         $ra, 0x14($sp)
    /* 196AF0 15169640 00A03825 */  or         $a3, $a1, $zero
    /* 196AF4 15169644 AFA70018 */  sw         $a3, 0x18($sp)
    /* 196AF8 15169648 90EF003B */  lbu        $t7, 0x3B($a3)
    /* 196AFC 1516964C 27A50018 */  addiu      $a1, $sp, 0x18
    /* 196B00 15169650 0D45A513 */  jal        func_1516944C
    /* 196B04 15169654 A3AF001C */   sb        $t7, 0x1C($sp)
    /* 196B08 15169658 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 196B0C 1516965C 27BD0020 */  addiu      $sp, $sp, 0x20
    /* 196B10 15169660 03E00008 */  jr         $ra
    /* 196B14 15169664 00000000 */   nop
endlabel func_1516962C
