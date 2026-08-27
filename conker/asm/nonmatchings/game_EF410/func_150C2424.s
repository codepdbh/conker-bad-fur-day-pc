nonmatching func_150C2424, 0xF8

glabel func_150C2424
    /* EF8D4 150C2424 27BDFFC8 */  addiu      $sp, $sp, -0x38
    /* EF8D8 150C2428 AFBF0034 */  sw         $ra, 0x34($sp)
    /* EF8DC 150C242C AFA40038 */  sw         $a0, 0x38($sp)
    /* EF8E0 150C2430 0D42B69A */  jal        func_150ADA68
    /* EF8E4 150C2434 00000000 */   nop
    /* EF8E8 150C2438 3C014100 */  lui        $at, (0x41000000 >> 16)
    /* EF8EC 150C243C 44811000 */  mtc1       $at, $f2
    /* EF8F0 150C2440 3C01800A */  lui        $at, %hi(D_800A0268)
    /* EF8F4 150C2444 C42C0268 */  lwc1       $f12, %lo(D_800A0268)($at)
    /* EF8F8 150C2448 46020182 */  mul.s      $f6, $f0, $f2
    /* EF8FC 150C244C 3C01C3F5 */  lui        $at, (0xC3F50000 >> 16)
    /* EF900 150C2450 44817000 */  mtc1       $at, $f14
    /* EF904 150C2454 3C0143A4 */  lui        $at, (0x43A40000 >> 16)
    /* EF908 150C2458 44812000 */  mtc1       $at, $f4
    /* EF90C 150C245C 44805000 */  mtc1       $zero, $f10
    /* EF910 150C2460 93AF003B */  lbu        $t7, 0x3B($sp)
    /* EF914 150C2464 46023200 */  add.s      $f8, $f6, $f2
    /* EF918 150C2468 240E0001 */  addiu      $t6, $zero, 0x1
    /* EF91C 150C246C 44076000 */  mfc1       $a3, $f12
    /* EF920 150C2470 AFAE001C */  sw         $t6, 0x1C($sp)
    /* EF924 150C2474 E7A80018 */  swc1       $f8, 0x18($sp)
    /* EF928 150C2478 3C06C3A4 */  lui        $a2, (0xC3A40000 >> 16)
    /* EF92C 150C247C AFA00020 */  sw         $zero, 0x20($sp)
    /* EF930 150C2480 AFA00028 */  sw         $zero, 0x28($sp)
    /* EF934 150C2484 E7AE0010 */  swc1       $f14, 0x10($sp)
    /* EF938 150C2488 E7A40014 */  swc1       $f4, 0x14($sp)
    /* EF93C 150C248C AFAF002C */  sw         $t7, 0x2C($sp)
    /* EF940 150C2490 0D45311C */  jal        func_1514C470
    /* EF944 150C2494 E7AA0024 */   swc1      $f10, 0x24($sp)
    /* EF948 150C2498 0D42B69A */  jal        func_150ADA68
    /* EF94C 150C249C 00000000 */   nop
    /* EF950 150C24A0 3C01C411 */  lui        $at, (0xC4110000 >> 16)
    /* EF954 150C24A4 44811000 */  mtc1       $at, $f2
    /* EF958 150C24A8 3C01C40C */  lui        $at, (0xC40C0000 >> 16)
    /* EF95C 150C24AC 44817000 */  mtc1       $at, $f14
    /* EF960 150C24B0 3C01800A */  lui        $at, %hi(D_800A026C)
    /* EF964 150C24B4 C42C026C */  lwc1       $f12, %lo(D_800A026C)($at)
    /* EF968 150C24B8 3C014040 */  lui        $at, (0x40400000 >> 16)
    /* EF96C 150C24BC 44818000 */  mtc1       $at, $f16
    /* EF970 150C24C0 3C014080 */  lui        $at, (0x40800000 >> 16)
    /* EF974 150C24C4 44812000 */  mtc1       $at, $f4
    /* EF978 150C24C8 46100482 */  mul.s      $f18, $f0, $f16
    /* EF97C 150C24CC 44804000 */  mtc1       $zero, $f8
    /* EF980 150C24D0 93B9003B */  lbu        $t9, 0x3B($sp)
    /* EF984 150C24D4 3C0745FD */  lui        $a3, (0x45FDA800 >> 16)
    /* EF988 150C24D8 24180003 */  addiu      $t8, $zero, 0x3
    /* EF98C 150C24DC 44061000 */  mfc1       $a2, $f2
    /* EF990 150C24E0 AFB8001C */  sw         $t8, 0x1C($sp)
    /* EF994 150C24E4 46049180 */  add.s      $f6, $f18, $f4
    /* EF998 150C24E8 34E7A800 */  ori        $a3, $a3, (0x45FDA800 & 0xFFFF)
    /* EF99C 150C24EC AFA00020 */  sw         $zero, 0x20($sp)
    /* EF9A0 150C24F0 AFA00028 */  sw         $zero, 0x28($sp)
    /* EF9A4 150C24F4 E7A60018 */  swc1       $f6, 0x18($sp)
    /* EF9A8 150C24F8 E7A20014 */  swc1       $f2, 0x14($sp)
    /* EF9AC 150C24FC E7AE0010 */  swc1       $f14, 0x10($sp)
    /* EF9B0 150C2500 AFB9002C */  sw         $t9, 0x2C($sp)
    /* EF9B4 150C2504 0D45311C */  jal        func_1514C470
    /* EF9B8 150C2508 E7A80024 */   swc1      $f8, 0x24($sp)
    /* EF9BC 150C250C 8FBF0034 */  lw         $ra, 0x34($sp)
    /* EF9C0 150C2510 27BD0038 */  addiu      $sp, $sp, 0x38
    /* EF9C4 150C2514 03E00008 */  jr         $ra
    /* EF9C8 150C2518 00000000 */   nop
endlabel func_150C2424
