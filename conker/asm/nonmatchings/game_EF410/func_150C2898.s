nonmatching func_150C2898, 0x158

glabel func_150C2898
    /* EFD48 150C2898 27BDFF88 */  addiu      $sp, $sp, -0x78
    /* EFD4C 150C289C AFBF0044 */  sw         $ra, 0x44($sp)
    /* EFD50 150C28A0 AFA60080 */  sw         $a2, 0x80($sp)
    /* EFD54 150C28A4 AFA70084 */  sw         $a3, 0x84($sp)
    /* EFD58 150C28A8 C7A40080 */  lwc1       $f4, 0x80($sp)
    /* EFD5C 150C28AC E7AC006C */  swc1       $f12, 0x6C($sp)
    /* EFD60 150C28B0 E7AE0070 */  swc1       $f14, 0x70($sp)
    /* EFD64 150C28B4 0D42B69A */  jal        func_150ADA68
    /* EFD68 150C28B8 E7A40074 */   swc1      $f4, 0x74($sp)
    /* EFD6C 150C28BC 3C0142E0 */  lui        $at, (0x42E00000 >> 16)
    /* EFD70 150C28C0 44813000 */  mtc1       $at, $f6
    /* EFD74 150C28C4 3C014377 */  lui        $at, (0x43770000 >> 16)
    /* EFD78 150C28C8 44815000 */  mtc1       $at, $f10
    /* EFD7C 150C28CC 46060202 */  mul.s      $f8, $f0, $f6
    /* EFD80 150C28D0 3C01800A */  lui        $at, %hi(D_800A0288)
    /* EFD84 150C28D4 C4320288 */  lwc1       $f18, %lo(D_800A0288)($at)
    /* EFD88 150C28D8 C7A40084 */  lwc1       $f4, 0x84($sp)
    /* EFD8C 150C28DC 46002187 */  neg.s      $f6, $f4
    /* EFD90 150C28E0 460A4400 */  add.s      $f16, $f8, $f10
    /* EFD94 150C28E4 C7AA0088 */  lwc1       $f10, 0x88($sp)
    /* EFD98 150C28E8 C7A4008C */  lwc1       $f4, 0x8C($sp)
    /* EFD9C 150C28EC 46128082 */  mul.s      $f2, $f16, $f18
    /* EFDA0 150C28F0 46005407 */  neg.s      $f16, $f10
    /* EFDA4 150C28F4 46023202 */  mul.s      $f8, $f6, $f2
    /* EFDA8 150C28F8 46002187 */  neg.s      $f6, $f4
    /* EFDAC 150C28FC 46028482 */  mul.s      $f18, $f16, $f2
    /* EFDB0 150C2900 E7A80060 */  swc1       $f8, 0x60($sp)
    /* EFDB4 150C2904 46023202 */  mul.s      $f8, $f6, $f2
    /* EFDB8 150C2908 E7B20064 */  swc1       $f18, 0x64($sp)
    /* EFDBC 150C290C 0D42B69A */  jal        func_150ADA68
    /* EFDC0 150C2910 E7A80068 */   swc1      $f8, 0x68($sp)
    /* EFDC4 150C2914 0D42B688 */  jal        func_150ADA20
    /* EFDC8 150C2918 E7A0004C */   swc1      $f0, 0x4C($sp)
    /* EFDCC 150C291C 0D42B688 */  jal        func_150ADA20
    /* EFDD0 150C2920 AFA20050 */   sw        $v0, 0x50($sp)
    /* EFDD4 150C2924 0D42B69A */  jal        func_150ADA68
    /* EFDD8 150C2928 AFA20054 */   sw        $v0, 0x54($sp)
    /* EFDDC 150C292C 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* EFDE0 150C2930 44811000 */  mtc1       $at, $f2
    /* EFDE4 150C2934 3C01800A */  lui        $at, %hi(D_800A028C)
    /* EFDE8 150C2938 C430028C */  lwc1       $f16, %lo(D_800A028C)($at)
    /* EFDEC 150C293C 3C01800A */  lui        $at, %hi(D_800A0290)
    /* EFDF0 150C2940 C4240290 */  lwc1       $f4, %lo(D_800A0290)($at)
    /* EFDF4 150C2944 24010065 */  addiu      $at, $zero, 0x65
    /* EFDF8 150C2948 8FB90054 */  lw         $t9, 0x54($sp)
    /* EFDFC 150C294C C7AA004C */  lwc1       $f10, 0x4C($sp)
    /* EFE00 150C2950 8FAE0050 */  lw         $t6, 0x50($sp)
    /* EFE04 150C2954 0321001B */  divu       $zero, $t9, $at
    /* EFE08 150C2958 3C0142EE */  lui        $at, (0x42EE0000 >> 16)
    /* EFE0C 150C295C 46105482 */  mul.s      $f18, $f10, $f16
    /* EFE10 150C2960 44814000 */  mtc1       $at, $f8
    /* EFE14 150C2964 3C014301 */  lui        $at, (0x43010000 >> 16)
    /* EFE18 150C2968 44818000 */  mtc1       $at, $f16
    /* EFE1C 150C296C 46080282 */  mul.s      $f10, $f0, $f8
    /* EFE20 150C2970 8FA20090 */  lw         $v0, 0x90($sp)
    /* EFE24 150C2974 00004010 */  mfhi       $t0
    /* EFE28 150C2978 31CF000F */  andi       $t7, $t6, 0xF
    /* EFE2C 150C297C 25F80019 */  addiu      $t8, $t7, 0x19
    /* EFE30 150C2980 46049180 */  add.s      $f6, $f18, $f4
    /* EFE34 150C2984 2509009B */  addiu      $t1, $t0, 0x9B
    /* EFE38 150C2988 240A0001 */  addiu      $t2, $zero, 0x1
    /* EFE3C 150C298C 46105480 */  add.s      $f18, $f10, $f16
    /* EFE40 150C2990 240B0001 */  addiu      $t3, $zero, 0x1
    /* EFE44 150C2994 AFAB0030 */  sw         $t3, 0x30($sp)
    /* EFE48 150C2998 AFAA0028 */  sw         $t2, 0x28($sp)
    /* EFE4C 150C299C E7B20018 */  swc1       $f18, 0x18($sp)
    /* EFE50 150C29A0 AFA90014 */  sw         $t1, 0x14($sp)
    /* EFE54 150C29A4 AFB80010 */  sw         $t8, 0x10($sp)
    /* EFE58 150C29A8 AFA0001C */  sw         $zero, 0x1C($sp)
    /* EFE5C 150C29AC AFA0002C */  sw         $zero, 0x2C($sp)
    /* EFE60 150C29B0 AFA00034 */  sw         $zero, 0x34($sp)
    /* EFE64 150C29B4 E7A20020 */  swc1       $f2, 0x20($sp)
    /* EFE68 150C29B8 E7A20024 */  swc1       $f2, 0x24($sp)
    /* EFE6C 150C29BC 904C000C */  lbu        $t4, 0xC($v0)
    /* EFE70 150C29C0 44073000 */  mfc1       $a3, $f6
    /* EFE74 150C29C4 27A4006C */  addiu      $a0, $sp, 0x6C
    /* EFE78 150C29C8 AFAC0038 */  sw         $t4, 0x38($sp)
    /* EFE7C 150C29CC 904D0001 */  lbu        $t5, 0x1($v0)
    /* EFE80 150C29D0 27A50060 */  addiu      $a1, $sp, 0x60
    /* EFE84 150C29D4 24060006 */  addiu      $a2, $zero, 0x6
    /* EFE88 150C29D8 0D476405 */  jal        func_151D9014
    /* EFE8C 150C29DC AFAD003C */   sw        $t5, 0x3C($sp)
    /* EFE90 150C29E0 8FBF0044 */  lw         $ra, 0x44($sp)
    /* EFE94 150C29E4 27BD0078 */  addiu      $sp, $sp, 0x78
    /* EFE98 150C29E8 03E00008 */  jr         $ra
    /* EFE9C 150C29EC 00000000 */   nop
endlabel func_150C2898
