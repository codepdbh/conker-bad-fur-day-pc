nonmatching func_151927C0, 0x3C

glabel func_151927C0
    /* 1BFC70 151927C0 8C820014 */  lw         $v0, 0x14($a0)
    /* 1BFC74 151927C4 2408012C */  addiu      $t0, $zero, 0x12C
    /* 1BFC78 151927C8 2409000A */  addiu      $t1, $zero, 0xA
    /* 1BFC7C 151927CC 304E00FF */  andi       $t6, $v0, 0xFF
    /* 1BFC80 151927D0 000E7843 */  sra        $t7, $t6, 1
    /* 1BFC84 151927D4 000FC400 */  sll        $t8, $t7, 16
    /* 1BFC88 151927D8 0018CC03 */  sra        $t9, $t8, 16
    /* 1BFC8C 151927DC 00195400 */  sll        $t2, $t9, 16
    /* 1BFC90 151927E0 01595821 */  addu       $t3, $t2, $t9
    /* 1BFC94 151927E4 A4880038 */  sh         $t0, 0x38($a0)
    /* 1BFC98 151927E8 A089003A */  sb         $t1, 0x3A($a0)
    /* 1BFC9C 151927EC AC8B0014 */  sw         $t3, 0x14($a0)
    /* 1BFCA0 151927F0 A080003B */  sb         $zero, 0x3B($a0)
    /* 1BFCA4 151927F4 03E00008 */  jr         $ra
    /* 1BFCA8 151927F8 00000000 */   nop
endlabel func_151927C0
    /* 1BFCAC 151927FC 00000000 */  nop
