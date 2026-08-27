nonmatching func_1505DF10, 0xCC

glabel func_1505DF10
    /* 8B3C0 1505DF10 27BDFFD8 */  addiu      $sp, $sp, -0x28
    /* 8B3C4 1505DF14 AFA5002C */  sw         $a1, 0x2C($sp)
    /* 8B3C8 1505DF18 30AE00FF */  andi       $t6, $a1, 0xFF
    /* 8B3CC 1505DF1C 01C02825 */  or         $a1, $t6, $zero
    /* 8B3D0 1505DF20 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 8B3D4 1505DF24 AFA60030 */  sw         $a2, 0x30($sp)
    /* 8B3D8 1505DF28 AFA70034 */  sw         $a3, 0x34($sp)
    /* 8B3DC 1505DF2C 00057880 */  sll        $t7, $a1, 2
    /* 8B3E0 1505DF30 01E57823 */  subu       $t7, $t7, $a1
    /* 8B3E4 1505DF34 000F7880 */  sll        $t7, $t7, 2
    /* 8B3E8 1505DF38 01E57821 */  addu       $t7, $t7, $a1
    /* 8B3EC 1505DF3C 000F7880 */  sll        $t7, $t7, 2
    /* 8B3F0 1505DF40 01E57823 */  subu       $t7, $t7, $a1
    /* 8B3F4 1505DF44 000F7880 */  sll        $t7, $t7, 2
    /* 8B3F8 1505DF48 01E57823 */  subu       $t7, $t7, $a1
    /* 8B3FC 1505DF4C 3C18800D */  lui        $t8, %hi(D_800CC2D0)
    /* 8B400 1505DF50 2718C2D0 */  addiu      $t8, $t8, %lo(D_800CC2D0)
    /* 8B404 1505DF54 000F7880 */  sll        $t7, $t7, 2
    /* 8B408 1505DF58 01F81021 */  addu       $v0, $t7, $t8
    /* 8B40C 1505DF5C C44A0018 */  lwc1       $f10, 0x18($v0)
    /* 8B410 1505DF60 C4880018 */  lwc1       $f8, 0x18($a0)
    /* 8B414 1505DF64 C4440014 */  lwc1       $f4, 0x14($v0)
    /* 8B418 1505DF68 C4860014 */  lwc1       $f6, 0x14($a0)
    /* 8B41C 1505DF6C 460A4081 */  sub.s      $f2, $f8, $f10
    /* 8B420 1505DF70 C452001C */  lwc1       $f18, 0x1C($v0)
    /* 8B424 1505DF74 C490001C */  lwc1       $f16, 0x1C($a0)
    /* 8B428 1505DF78 8FB90038 */  lw         $t9, 0x38($sp)
    /* 8B42C 1505DF7C 46062301 */  sub.s      $f12, $f4, $f6
    /* 8B430 1505DF80 00003025 */  or         $a2, $zero, $zero
    /* 8B434 1505DF84 E7220000 */  swc1       $f2, 0x0($t9)
    /* 8B438 1505DF88 46128381 */  sub.s      $f14, $f16, $f18
    /* 8B43C 1505DF8C E7AC0020 */  swc1       $f12, 0x20($sp)
    /* 8B440 1505DF90 E7A2001C */  swc1       $f2, 0x1C($sp)
    /* 8B444 1505DF94 0D41698C */  jal        func_1505A630
    /* 8B448 1505DF98 E7AE0018 */   swc1      $f14, 0x18($sp)
    /* 8B44C 1505DF9C C7AC0020 */  lwc1       $f12, 0x20($sp)
    /* 8B450 1505DFA0 C7A2001C */  lwc1       $f2, 0x1C($sp)
    /* 8B454 1505DFA4 C7AE0018 */  lwc1       $f14, 0x18($sp)
    /* 8B458 1505DFA8 460C6302 */  mul.s      $f12, $f12, $f12
    /* 8B45C 1505DFAC 8FA80030 */  lw         $t0, 0x30($sp)
    /* 8B460 1505DFB0 46021082 */  mul.s      $f2, $f2, $f2
    /* 8B464 1505DFB4 A5020000 */  sh         $v0, 0x0($t0)
    /* 8B468 1505DFB8 8FA90034 */  lw         $t1, 0x34($sp)
    /* 8B46C 1505DFBC 460E7382 */  mul.s      $f14, $f14, $f14
    /* 8B470 1505DFC0 46026180 */  add.s      $f6, $f12, $f2
    /* 8B474 1505DFC4 460E6100 */  add.s      $f4, $f12, $f14
    /* 8B478 1505DFC8 460E3000 */  add.s      $f0, $f6, $f14
    /* 8B47C 1505DFCC E5240000 */  swc1       $f4, 0x0($t1)
    /* 8B480 1505DFD0 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 8B484 1505DFD4 03E00008 */  jr         $ra
    /* 8B488 1505DFD8 27BD0028 */   addiu     $sp, $sp, 0x28
endlabel func_1505DF10
