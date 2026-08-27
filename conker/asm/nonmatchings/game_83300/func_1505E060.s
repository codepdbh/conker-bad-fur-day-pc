nonmatching func_1505E060, 0x64

glabel func_1505E060
    /* 8B510 1505E060 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* 8B514 1505E064 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 8B518 1505E068 00803825 */  or         $a3, $a0, $zero
    /* 8B51C 1505E06C 94EE0004 */  lhu        $t6, 0x4($a3)
    /* 8B520 1505E070 C4E40008 */  lwc1       $f4, 0x8($a3)
    /* 8B524 1505E074 C4E60010 */  lwc1       $f6, 0x10($a3)
    /* 8B528 1505E078 C4E80020 */  lwc1       $f8, 0x20($a3)
    /* 8B52C 1505E07C C4EA0018 */  lwc1       $f10, 0x18($a3)
    /* 8B530 1505E080 80EF0038 */  lb         $t7, 0x38($a3)
    /* 8B534 1505E084 8CF80028 */  lw         $t8, 0x28($a3)
    /* 8B538 1505E088 24E40040 */  addiu      $a0, $a3, 0x40
    /* 8B53C 1505E08C 24E50210 */  addiu      $a1, $a3, 0x210
    /* 8B540 1505E090 240601D0 */  addiu      $a2, $zero, 0x1D0
    /* 8B544 1505E094 A4EE0006 */  sh         $t6, 0x6($a3)
    /* 8B548 1505E098 E4E4000C */  swc1       $f4, 0xC($a3)
    /* 8B54C 1505E09C E4E60014 */  swc1       $f6, 0x14($a3)
    /* 8B550 1505E0A0 E4E80024 */  swc1       $f8, 0x24($a3)
    /* 8B554 1505E0A4 E4EA001C */  swc1       $f10, 0x1C($a3)
    /* 8B558 1505E0A8 A0EF0039 */  sb         $t7, 0x39($a3)
    /* 8B55C 1505E0AC 0C008E84 */  jal        bcopy
    /* 8B560 1505E0B0 ACF8002C */   sw        $t8, 0x2C($a3)
    /* 8B564 1505E0B4 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 8B568 1505E0B8 27BD0018 */  addiu      $sp, $sp, 0x18
    /* 8B56C 1505E0BC 03E00008 */  jr         $ra
    /* 8B570 1505E0C0 00000000 */   nop
endlabel func_1505E060
