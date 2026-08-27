nonmatching func_150C2804, 0x94

glabel func_150C2804
    /* EFCB4 150C2804 27BDFFC8 */  addiu      $sp, $sp, -0x38
    /* EFCB8 150C2808 AFBF0014 */  sw         $ra, 0x14($sp)
    /* EFCBC 150C280C AFA40038 */  sw         $a0, 0x38($sp)
    /* EFCC0 150C2810 AFA5003C */  sw         $a1, 0x3C($sp)
    /* EFCC4 150C2814 AFA60040 */  sw         $a2, 0x40($sp)
    /* EFCC8 150C2818 AFA70044 */  sw         $a3, 0x44($sp)
    /* EFCCC 150C281C 3C01800A */  lui        $at, %hi(D_800A0280)
    /* EFCD0 150C2820 C4240280 */  lwc1       $f4, %lo(D_800A0280)($at)
    /* EFCD4 150C2824 3C01800A */  lui        $at, %hi(D_800A0284)
    /* EFCD8 150C2828 8FAE0038 */  lw         $t6, 0x38($sp)
    /* EFCDC 150C282C 8FAF003C */  lw         $t7, 0x3C($sp)
    /* EFCE0 150C2830 8FB80040 */  lw         $t8, 0x40($sp)
    /* EFCE4 150C2834 C4260284 */  lwc1       $f6, %lo(D_800A0284)($at)
    /* EFCE8 150C2838 87B90046 */  lh         $t9, 0x46($sp)
    /* EFCEC 150C283C 24080005 */  addiu      $t0, $zero, 0x5
    /* EFCF0 150C2840 24090006 */  addiu      $t1, $zero, 0x6
    /* EFCF4 150C2844 240A0003 */  addiu      $t2, $zero, 0x3
    /* EFCF8 150C2848 240BFFFF */  addiu      $t3, $zero, -0x1
    /* EFCFC 150C284C A3A80032 */  sb         $t0, 0x32($sp)
    /* EFD00 150C2850 A3A90033 */  sb         $t1, 0x33($sp)
    /* EFD04 150C2854 A3AA0034 */  sb         $t2, 0x34($sp)
    /* EFD08 150C2858 A3AB0035 */  sb         $t3, 0x35($sp)
    /* EFD0C 150C285C 27A4001C */  addiu      $a0, $sp, 0x1C
    /* EFD10 150C2860 00002825 */  or         $a1, $zero, $zero
    /* EFD14 150C2864 93A6004B */  lbu        $a2, 0x4B($sp)
    /* EFD18 150C2868 8FA7004C */  lw         $a3, 0x4C($sp)
    /* EFD1C 150C286C E7A40028 */  swc1       $f4, 0x28($sp)
    /* EFD20 150C2870 AFAE001C */  sw         $t6, 0x1C($sp)
    /* EFD24 150C2874 AFAF0020 */  sw         $t7, 0x20($sp)
    /* EFD28 150C2878 AFB80024 */  sw         $t8, 0x24($sp)
    /* EFD2C 150C287C E7A6002C */  swc1       $f6, 0x2C($sp)
    /* EFD30 150C2880 0D44D242 */  jal        func_15134908
    /* EFD34 150C2884 A7B90030 */   sh        $t9, 0x30($sp)
    /* EFD38 150C2888 8FBF0014 */  lw         $ra, 0x14($sp)
    /* EFD3C 150C288C 27BD0038 */  addiu      $sp, $sp, 0x38
    /* EFD40 150C2890 03E00008 */  jr         $ra
    /* EFD44 150C2894 00000000 */   nop
endlabel func_150C2804
