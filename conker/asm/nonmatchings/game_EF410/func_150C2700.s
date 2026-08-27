nonmatching func_150C2700, 0x104

glabel func_150C2700
    /* EFBB0 150C2700 27BDFF98 */  addiu      $sp, $sp, -0x68
    /* EFBB4 150C2704 44866000 */  mtc1       $a2, $f12
    /* EFBB8 150C2708 44877000 */  mtc1       $a3, $f14
    /* EFBBC 150C270C 44800000 */  mtc1       $zero, $f0
    /* EFBC0 150C2710 AFBF001C */  sw         $ra, 0x1C($sp)
    /* EFBC4 150C2714 AFA40068 */  sw         $a0, 0x68($sp)
    /* EFBC8 150C2718 AFA5006C */  sw         $a1, 0x6C($sp)
    /* EFBCC 150C271C 3C0141F0 */  lui        $at, (0x41F00000 >> 16)
    /* EFBD0 150C2720 44813000 */  mtc1       $at, $f6
    /* EFBD4 150C2724 3C01420C */  lui        $at, (0x420C0000 >> 16)
    /* EFBD8 150C2728 44814000 */  mtc1       $at, $f8
    /* EFBDC 150C272C 3C01800A */  lui        $at, %hi(D_800A0274)
    /* EFBE0 150C2730 C42A0274 */  lwc1       $f10, %lo(D_800A0274)($at)
    /* EFBE4 150C2734 3C01800A */  lui        $at, %hi(D_800A0278)
    /* EFBE8 150C2738 C4300278 */  lwc1       $f16, %lo(D_800A0278)($at)
    /* EFBEC 150C273C 240F0005 */  addiu      $t7, $zero, 0x5
    /* EFBF0 150C2740 2418006B */  addiu      $t8, $zero, 0x6B
    /* EFBF4 150C2744 3C01800A */  lui        $at, %hi(D_800A027C)
    /* EFBF8 150C2748 C7A40078 */  lwc1       $f4, 0x78($sp)
    /* EFBFC 150C274C C432027C */  lwc1       $f18, %lo(D_800A027C)($at)
    /* EFC00 150C2750 A7AF0036 */  sh         $t7, 0x36($sp)
    /* EFC04 150C2754 A7B80020 */  sh         $t8, 0x20($sp)
    /* EFC08 150C2758 240E0006 */  addiu      $t6, $zero, 0x6
    /* EFC0C 150C275C 24190046 */  addiu      $t9, $zero, 0x46
    /* EFC10 150C2760 2408FFE1 */  addiu      $t0, $zero, -0x1F
    /* EFC14 150C2764 2409002E */  addiu      $t1, $zero, 0x2E
    /* EFC18 150C2768 240A0064 */  addiu      $t2, $zero, 0x64
    /* EFC1C 150C276C 240B009B */  addiu      $t3, $zero, 0x9B
    /* EFC20 150C2770 240C0064 */  addiu      $t4, $zero, 0x64
    /* EFC24 150C2774 240D0001 */  addiu      $t5, $zero, 0x1
    /* EFC28 150C2778 240F0001 */  addiu      $t7, $zero, 0x1
    /* EFC2C 150C277C 24180001 */  addiu      $t8, $zero, 0x1
    /* EFC30 150C2780 E7AC0028 */  swc1       $f12, 0x28($sp)
    /* EFC34 150C2784 E7AE002C */  swc1       $f14, 0x2C($sp)
    /* EFC38 150C2788 A7AE0034 */  sh         $t6, 0x34($sp)
    /* EFC3C 150C278C A7B90022 */  sh         $t9, 0x22($sp)
    /* EFC40 150C2790 A7A80024 */  sh         $t0, 0x24($sp)
    /* EFC44 150C2794 A7A90026 */  sh         $t1, 0x26($sp)
    /* EFC48 150C2798 A7AA0040 */  sh         $t2, 0x40($sp)
    /* EFC4C 150C279C A7A00042 */  sh         $zero, 0x42($sp)
    /* EFC50 150C27A0 A3AB004C */  sb         $t3, 0x4C($sp)
    /* EFC54 150C27A4 A3AC004D */  sb         $t4, 0x4D($sp)
    /* EFC58 150C27A8 E7A00054 */  swc1       $f0, 0x54($sp)
    /* EFC5C 150C27AC A3AD0058 */  sb         $t5, 0x58($sp)
    /* EFC60 150C27B0 A3AE0059 */  sb         $t6, 0x59($sp)
    /* EFC64 150C27B4 E7A0005C */  swc1       $f0, 0x5C($sp)
    /* EFC68 150C27B8 A3AF0060 */  sb         $t7, 0x60($sp)
    /* EFC6C 150C27BC E7A00064 */  swc1       $f0, 0x64($sp)
    /* EFC70 150C27C0 AFB80010 */  sw         $t8, 0x10($sp)
    /* EFC74 150C27C4 27A40020 */  addiu      $a0, $sp, 0x20
    /* EFC78 150C27C8 27A50028 */  addiu      $a1, $sp, 0x28
    /* EFC7C 150C27CC 00003025 */  or         $a2, $zero, $zero
    /* EFC80 150C27D0 93A700A3 */  lbu        $a3, 0xA3($sp)
    /* EFC84 150C27D4 E7A60038 */  swc1       $f6, 0x38($sp)
    /* EFC88 150C27D8 E7A8003C */  swc1       $f8, 0x3C($sp)
    /* EFC8C 150C27DC E7AA0044 */  swc1       $f10, 0x44($sp)
    /* EFC90 150C27E0 E7B00048 */  swc1       $f16, 0x48($sp)
    /* EFC94 150C27E4 E7A40030 */  swc1       $f4, 0x30($sp)
    /* EFC98 150C27E8 0D45405E */  jal        func_15150178
    /* EFC9C 150C27EC E7B20050 */   swc1      $f18, 0x50($sp)
    /* EFCA0 150C27F0 24020001 */  addiu      $v0, $zero, 0x1
    /* EFCA4 150C27F4 8FBF001C */  lw         $ra, 0x1C($sp)
    /* EFCA8 150C27F8 27BD0068 */  addiu      $sp, $sp, 0x68
    /* EFCAC 150C27FC 03E00008 */  jr         $ra
    /* EFCB0 150C2800 00000000 */   nop
endlabel func_150C2700
