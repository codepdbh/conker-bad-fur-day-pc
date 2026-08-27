nonmatching func_15074F48, 0x8C

glabel func_15074F48
    /* A23F8 15074F48 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* A23FC 15074F4C AFBF0014 */  sw         $ra, 0x14($sp)
    /* A2400 15074F50 AFA60028 */  sw         $a2, 0x28($sp)
    /* A2404 15074F54 3C01800A */  lui        $at, %hi(D_8009A108)
    /* A2408 15074F58 C424A108 */  lwc1       $f4, %lo(D_8009A108)($at)
    /* A240C 15074F5C 3C01800A */  lui        $at, %hi(D_8009A10C)
    /* A2410 15074F60 C4860014 */  lwc1       $f6, 0x14($a0)
    /* A2414 15074F64 C42AA10C */  lwc1       $f10, %lo(D_8009A10C)($at)
    /* A2418 15074F68 C488001C */  lwc1       $f8, 0x1C($a0)
    /* A241C 15074F6C 46062301 */  sub.s      $f12, $f4, $f6
    /* A2420 15074F70 AFA50024 */  sw         $a1, 0x24($sp)
    /* A2424 15074F74 AFA40020 */  sw         $a0, 0x20($sp)
    /* A2428 15074F78 460A4381 */  sub.s      $f14, $f8, $f10
    /* A242C 15074F7C E7AC001C */  swc1       $f12, 0x1C($sp)
    /* A2430 15074F80 00003025 */  or         $a2, $zero, $zero
    /* A2434 15074F84 0D41698C */  jal        func_1505A630
    /* A2438 15074F88 E7AE0018 */   swc1      $f14, 0x18($sp)
    /* A243C 15074F8C C7AC001C */  lwc1       $f12, 0x1C($sp)
    /* A2440 15074F90 C7AE0018 */  lwc1       $f14, 0x18($sp)
    /* A2444 15074F94 8FA50024 */  lw         $a1, 0x24($sp)
    /* A2448 15074F98 460C6402 */  mul.s      $f16, $f12, $f12
    /* A244C 15074F9C 8FA40020 */  lw         $a0, 0x20($sp)
    /* A2450 15074FA0 3C01800A */  lui        $at, %hi(D_8009A110)
    /* A2454 15074FA4 460E7482 */  mul.s      $f18, $f14, $f14
    /* A2458 15074FA8 A4A20076 */  sh         $v0, 0x76($a1)
    /* A245C 15074FAC C424A110 */  lwc1       $f4, %lo(D_8009A110)($at)
    /* A2460 15074FB0 46128000 */  add.s      $f0, $f16, $f18
    /* A2464 15074FB4 46000004 */  sqrt.s     $f0, $f0
    /* A2468 15074FB8 46040182 */  mul.s      $f6, $f0, $f4
    /* A246C 15074FBC 0D465102 */  jal        func_15194408
    /* A2470 15074FC0 E4A6003C */   swc1      $f6, 0x3C($a1)
    /* A2474 15074FC4 8FBF0014 */  lw         $ra, 0x14($sp)
    /* A2478 15074FC8 27BD0020 */  addiu      $sp, $sp, 0x20
    /* A247C 15074FCC 03E00008 */  jr         $ra
    /* A2480 15074FD0 00000000 */   nop
endlabel func_15074F48
