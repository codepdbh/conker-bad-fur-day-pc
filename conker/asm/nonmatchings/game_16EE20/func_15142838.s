nonmatching func_15142838, 0xDC

glabel func_15142838
    /* 16FCE8 15142838 27BDFFA8 */  addiu      $sp, $sp, -0x58
    /* 16FCEC 1514283C 44856000 */  mtc1       $a1, $f12
    /* 16FCF0 15142840 44867000 */  mtc1       $a2, $f14
    /* 16FCF4 15142844 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 16FCF8 15142848 AFA40058 */  sw         $a0, 0x58($sp)
    /* 16FCFC 1514284C AFA70064 */  sw         $a3, 0x64($sp)
    /* 16FD00 15142850 27A40018 */  addiu      $a0, $sp, 0x18
    /* 16FD04 15142854 8FA50064 */  lw         $a1, 0x64($sp)
    /* 16FD08 15142858 8FA60068 */  lw         $a2, 0x68($sp)
    /* 16FD0C 1514285C 8FA7006C */  lw         $a3, 0x6C($sp)
    /* 16FD10 15142860 E7AC005C */  swc1       $f12, 0x5C($sp)
    /* 16FD14 15142864 0D42A014 */  jal        func_150A8050
    /* 16FD18 15142868 E7AE0060 */   swc1      $f14, 0x60($sp)
    /* 16FD1C 1514286C C7B2005C */  lwc1       $f18, 0x5C($sp)
    /* 16FD20 15142870 C7B00060 */  lwc1       $f16, 0x60($sp)
    /* 16FD24 15142874 C7AE0018 */  lwc1       $f14, 0x18($sp)
    /* 16FD28 15142878 C7AC001C */  lwc1       $f12, 0x1C($sp)
    /* 16FD2C 1514287C C7AA0020 */  lwc1       $f10, 0x20($sp)
    /* 16FD30 15142880 46127382 */  mul.s      $f14, $f14, $f18
    /* 16FD34 15142884 C7A80028 */  lwc1       $f8, 0x28($sp)
    /* 16FD38 15142888 C7A6002C */  lwc1       $f6, 0x2C($sp)
    /* 16FD3C 1514288C 46126302 */  mul.s      $f12, $f12, $f18
    /* 16FD40 15142890 C7A40030 */  lwc1       $f4, 0x30($sp)
    /* 16FD44 15142894 C7A20038 */  lwc1       $f2, 0x38($sp)
    /* 16FD48 15142898 46125282 */  mul.s      $f10, $f10, $f18
    /* 16FD4C 1514289C C7A0003C */  lwc1       $f0, 0x3C($sp)
    /* 16FD50 151428A0 E7AE0018 */  swc1       $f14, 0x18($sp)
    /* 16FD54 151428A4 46104202 */  mul.s      $f8, $f8, $f16
    /* 16FD58 151428A8 C7AE0070 */  lwc1       $f14, 0x70($sp)
    /* 16FD5C 151428AC E7AC001C */  swc1       $f12, 0x1C($sp)
    /* 16FD60 151428B0 46103182 */  mul.s      $f6, $f6, $f16
    /* 16FD64 151428B4 C7AC0040 */  lwc1       $f12, 0x40($sp)
    /* 16FD68 151428B8 E7AE0048 */  swc1       $f14, 0x48($sp)
    /* 16FD6C 151428BC 46102402 */  mul.s      $f16, $f4, $f16
    /* 16FD70 151428C0 C7A40074 */  lwc1       $f4, 0x74($sp)
    /* 16FD74 151428C4 C7AE0078 */  lwc1       $f14, 0x78($sp)
    /* 16FD78 151428C8 46121082 */  mul.s      $f2, $f2, $f18
    /* 16FD7C 151428CC E7A4004C */  swc1       $f4, 0x4C($sp)
    /* 16FD80 151428D0 E7AE0050 */  swc1       $f14, 0x50($sp)
    /* 16FD84 151428D4 46120002 */  mul.s      $f0, $f0, $f18
    /* 16FD88 151428D8 E7AA0020 */  swc1       $f10, 0x20($sp)
    /* 16FD8C 151428DC E7A80028 */  swc1       $f8, 0x28($sp)
    /* 16FD90 151428E0 46126482 */  mul.s      $f18, $f12, $f18
    /* 16FD94 151428E4 E7A6002C */  swc1       $f6, 0x2C($sp)
    /* 16FD98 151428E8 E7B00030 */  swc1       $f16, 0x30($sp)
    /* 16FD9C 151428EC E7A20038 */  swc1       $f2, 0x38($sp)
    /* 16FDA0 151428F0 E7A0003C */  swc1       $f0, 0x3C($sp)
    /* 16FDA4 151428F4 27A40018 */  addiu      $a0, $sp, 0x18
    /* 16FDA8 151428F8 8FA50058 */  lw         $a1, 0x58($sp)
    /* 16FDAC 151428FC 0D429DE4 */  jal        guMtxF2L
    /* 16FDB0 15142900 E7B20040 */   swc1      $f18, 0x40($sp)
    /* 16FDB4 15142904 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 16FDB8 15142908 27BD0058 */  addiu      $sp, $sp, 0x58
    /* 16FDBC 1514290C 03E00008 */  jr         $ra
    /* 16FDC0 15142910 00000000 */   nop
endlabel func_15142838
