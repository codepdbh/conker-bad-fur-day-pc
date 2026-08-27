nonmatching func_1514373C, 0x58

glabel func_1514373C
    /* 170BEC 1514373C 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* 170BF0 15143740 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 170BF4 15143744 E7AC0020 */  swc1       $f12, 0x20($sp)
    /* 170BF8 15143748 E7AE0024 */  swc1       $f14, 0x24($sp)
    /* 170BFC 1514374C AFA60028 */  sw         $a2, 0x28($sp)
    /* 170C00 15143750 AFA7002C */  sw         $a3, 0x2C($sp)
    /* 170C04 15143754 0D411F00 */  jal        cosf
    /* 170C08 15143758 C7AC0020 */   lwc1      $f12, 0x20($sp)
    /* 170C0C 1514375C E7A0001C */  swc1       $f0, 0x1C($sp)
    /* 170C10 15143760 0D411F58 */  jal        sinf
    /* 170C14 15143764 C7AC0020 */   lwc1      $f12, 0x20($sp)
    /* 170C18 15143768 C7A20024 */  lwc1       $f2, 0x24($sp)
    /* 170C1C 1514376C 8FAE0028 */  lw         $t6, 0x28($sp)
    /* 170C20 15143770 46001102 */  mul.s      $f4, $f2, $f0
    /* 170C24 15143774 E5C40000 */  swc1       $f4, 0x0($t6)
    /* 170C28 15143778 C7A6001C */  lwc1       $f6, 0x1C($sp)
    /* 170C2C 1514377C 8FAF002C */  lw         $t7, 0x2C($sp)
    /* 170C30 15143780 46061202 */  mul.s      $f8, $f2, $f6
    /* 170C34 15143784 E5E80000 */  swc1       $f8, 0x0($t7)
    /* 170C38 15143788 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 170C3C 1514378C 03E00008 */  jr         $ra
    /* 170C40 15143790 27BD0020 */   addiu     $sp, $sp, 0x20
endlabel func_1514373C
