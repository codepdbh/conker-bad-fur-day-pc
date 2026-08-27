nonmatching func_15072DA0, 0x38

glabel func_15072DA0
    /* A0250 15072DA0 3C03800D */  lui        $v1, %hi(D_800D154C)
    /* A0254 15072DA4 2463154C */  addiu      $v1, $v1, %lo(D_800D154C)
    /* A0258 15072DA8 8C620000 */  lw         $v0, 0x0($v1)
    /* A025C 15072DAC 3C19800D */  lui        $t9, %hi(D_800D1580)
    /* A0260 15072DB0 944E02F8 */  lhu        $t6, 0x2F8($v0)
    /* A0264 15072DB4 31CFFFF8 */  andi       $t7, $t6, 0xFFF8
    /* A0268 15072DB8 A44F02F8 */  sh         $t7, 0x2F8($v0)
    /* A026C 15072DBC 8C620000 */  lw         $v0, 0x0($v1)
    /* A0270 15072DC0 8F391580 */  lw         $t9, %lo(D_800D1580)($t9)
    /* A0274 15072DC4 945802F8 */  lhu        $t8, 0x2F8($v0)
    /* A0278 15072DC8 03194025 */  or         $t0, $t8, $t9
    /* A027C 15072DCC A44802F8 */  sh         $t0, 0x2F8($v0)
    /* A0280 15072DD0 03E00008 */  jr         $ra
    /* A0284 15072DD4 00000000 */   nop
endlabel func_15072DA0
