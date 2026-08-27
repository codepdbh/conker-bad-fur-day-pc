nonmatching func_150C2558, 0x1A8

glabel func_150C2558
    /* EFA08 150C2558 27BDFF60 */  addiu      $sp, $sp, -0xA0
    /* EFA0C 150C255C 44866000 */  mtc1       $a2, $f12
    /* EFA10 150C2560 44877000 */  mtc1       $a3, $f14
    /* EFA14 150C2564 AFBF0014 */  sw         $ra, 0x14($sp)
    /* EFA18 150C2568 AFA400A0 */  sw         $a0, 0xA0($sp)
    /* EFA1C 150C256C AFA500A4 */  sw         $a1, 0xA4($sp)
    /* EFA20 150C2570 E7AC0018 */  swc1       $f12, 0x18($sp)
    /* EFA24 150C2574 0D42B69A */  jal        func_150ADA68
    /* EFA28 150C2578 E7AE001C */   swc1      $f14, 0x1C($sp)
    /* EFA2C 150C257C 3C014170 */  lui        $at, (0x41700000 >> 16)
    /* EFA30 150C2580 44813000 */  mtc1       $at, $f6
    /* EFA34 150C2584 3C0141F0 */  lui        $at, (0x41F00000 >> 16)
    /* EFA38 150C2588 44815000 */  mtc1       $at, $f10
    /* EFA3C 150C258C C7A400B0 */  lwc1       $f4, 0xB0($sp)
    /* EFA40 150C2590 3C01800A */  lui        $at, %hi(D_800A0270)
    /* EFA44 150C2594 460A0402 */  mul.s      $f16, $f0, $f10
    /* EFA48 150C2598 46062200 */  add.s      $f8, $f4, $f6
    /* EFA4C 150C259C C4320270 */  lwc1       $f18, %lo(D_800A0270)($at)
    /* EFA50 150C25A0 3C014348 */  lui        $at, (0x43480000 >> 16)
    /* EFA54 150C25A4 44815000 */  mtc1       $at, $f10
    /* EFA58 150C25A8 3C014316 */  lui        $at, (0x43160000 >> 16)
    /* EFA5C 150C25AC 24080009 */  addiu      $t0, $zero, 0x9
    /* EFA60 150C25B0 46104081 */  sub.s      $f2, $f8, $f16
    /* EFA64 150C25B4 44814000 */  mtc1       $at, $f8
    /* EFA68 150C25B8 24090003 */  addiu      $t1, $zero, 0x3
    /* EFA6C 150C25BC 3C0141B0 */  lui        $at, (0x41B00000 >> 16)
    /* EFA70 150C25C0 46121102 */  mul.s      $f4, $f2, $f18
    /* EFA74 150C25C4 44818000 */  mtc1       $at, $f16
    /* EFA78 150C25C8 A7A80042 */  sh         $t0, 0x42($sp)
    /* EFA7C 150C25CC A7A90048 */  sh         $t1, 0x48($sp)
    /* EFA80 150C25D0 240A0003 */  addiu      $t2, $zero, 0x3
    /* EFA84 150C25D4 240C0015 */  addiu      $t4, $zero, 0x15
    /* EFA88 150C25D8 240D000B */  addiu      $t5, $zero, 0xB
    /* EFA8C 150C25DC 4600218D */  trunc.w.s  $f6, $f4
    /* EFA90 150C25E0 44806000 */  mtc1       $zero, $f12
    /* EFA94 150C25E4 240B0028 */  addiu      $t3, $zero, 0x28
    /* EFA98 150C25E8 A7AC004E */  sh         $t4, 0x4E($sp)
    /* EFA9C 150C25EC 44183000 */  mfc1       $t8, $f6
    /* EFAA0 150C25F0 3C014230 */  lui        $at, (0x42300000 >> 16)
    /* EFAA4 150C25F4 A3AD0050 */  sb         $t5, 0x50($sp)
    /* EFAA8 150C25F8 2719FFC0 */  addiu      $t9, $t8, -0x40
    /* EFAAC 150C25FC A7B90040 */  sh         $t9, 0x40($sp)
    /* EFAB0 150C2600 240F0028 */  addiu      $t7, $zero, 0x28
    /* EFAB4 150C2604 24180001 */  addiu      $t8, $zero, 0x1
    /* EFAB8 150C2608 24190004 */  addiu      $t9, $zero, 0x4
    /* EFABC 150C260C 240800FF */  addiu      $t0, $zero, 0xFF
    /* EFAC0 150C2610 240900FF */  addiu      $t1, $zero, 0xFF
    /* EFAC4 150C2614 44819000 */  mtc1       $at, $f18
    /* EFAC8 150C2618 240E0001 */  addiu      $t6, $zero, 0x1
    /* EFACC 150C261C A7AA004A */  sh         $t2, 0x4A($sp)
    /* EFAD0 150C2620 A7AB004C */  sh         $t3, 0x4C($sp)
    /* EFAD4 150C2624 A3AF0052 */  sb         $t7, 0x52($sp)
    /* EFAD8 150C2628 AFB80054 */  sw         $t8, 0x54($sp)
    /* EFADC 150C262C AFB90058 */  sw         $t9, 0x58($sp)
    /* EFAE0 150C2630 A3A8006C */  sb         $t0, 0x6C($sp)
    /* EFAE4 150C2634 A3A9006D */  sb         $t1, 0x6D($sp)
    /* EFAE8 150C2638 AFAA0070 */  sw         $t2, 0x70($sp)
    /* EFAEC 150C263C 3C0C0022 */  lui        $t4, (0x220005 >> 16)
    /* EFAF0 150C2640 3C0D001D */  lui        $t5, (0x1D0600 >> 16)
    /* EFAF4 150C2644 240B00FF */  addiu      $t3, $zero, 0xFF
    /* EFAF8 150C2648 358C0005 */  ori        $t4, $t4, (0x220005 & 0xFFFF)
    /* EFAFC 150C264C 35AD0600 */  ori        $t5, $t5, (0x1D0600 & 0xFFFF)
    /* EFB00 150C2650 240F003B */  addiu      $t7, $zero, 0x3B
    /* EFB04 150C2654 24180080 */  addiu      $t8, $zero, 0x80
    /* EFB08 150C2658 24190020 */  addiu      $t9, $zero, 0x20
    /* EFB0C 150C265C 24080007 */  addiu      $t0, $zero, 0x7
    /* EFB10 150C2660 2409000C */  addiu      $t1, $zero, 0xC
    /* EFB14 150C2664 240A0015 */  addiu      $t2, $zero, 0x15
    /* EFB18 150C2668 A7AE003C */  sh         $t6, 0x3C($sp)
    /* EFB1C 150C266C A7A0003E */  sh         $zero, 0x3E($sp)
    /* EFB20 150C2670 A7A00044 */  sh         $zero, 0x44($sp)
    /* EFB24 150C2674 A7A00046 */  sh         $zero, 0x46($sp)
    /* EFB28 150C2678 A3AE0051 */  sb         $t6, 0x51($sp)
    /* EFB2C 150C267C AFA0005C */  sw         $zero, 0x5C($sp)
    /* EFB30 150C2680 AFA00060 */  sw         $zero, 0x60($sp)
    /* EFB34 150C2684 AFA00064 */  sw         $zero, 0x64($sp)
    /* EFB38 150C2688 AFA00068 */  sw         $zero, 0x68($sp)
    /* EFB3C 150C268C A3A0006E */  sb         $zero, 0x6E($sp)
    /* EFB40 150C2690 AFAB0074 */  sw         $t3, 0x74($sp)
    /* EFB44 150C2694 AFA00078 */  sw         $zero, 0x78($sp)
    /* EFB48 150C2698 AFAC007C */  sw         $t4, 0x7C($sp)
    /* EFB4C 150C269C AFAD0080 */  sw         $t5, 0x80($sp)
    /* EFB50 150C26A0 AFAE0084 */  sw         $t6, 0x84($sp)
    /* EFB54 150C26A4 AFAF0088 */  sw         $t7, 0x88($sp)
    /* EFB58 150C26A8 AFB8008C */  sw         $t8, 0x8C($sp)
    /* EFB5C 150C26AC AFB90090 */  sw         $t9, 0x90($sp)
    /* EFB60 150C26B0 A3A00094 */  sb         $zero, 0x94($sp)
    /* EFB64 150C26B4 A3A80095 */  sb         $t0, 0x95($sp)
    /* EFB68 150C26B8 A7A90098 */  sh         $t1, 0x98($sp)
    /* EFB6C 150C26BC A7AA009A */  sh         $t2, 0x9A($sp)
    /* EFB70 150C26C0 E7A20020 */  swc1       $f2, 0x20($sp)
    /* EFB74 150C26C4 27A40018 */  addiu      $a0, $sp, 0x18
    /* EFB78 150C26C8 93A500DB */  lbu        $a1, 0xDB($sp)
    /* EFB7C 150C26CC 24060001 */  addiu      $a2, $zero, 0x1
    /* EFB80 150C26D0 E7AA0034 */  swc1       $f10, 0x34($sp)
    /* EFB84 150C26D4 E7A80038 */  swc1       $f8, 0x38($sp)
    /* EFB88 150C26D8 E7B00024 */  swc1       $f16, 0x24($sp)
    /* EFB8C 150C26DC E7AC002C */  swc1       $f12, 0x2C($sp)
    /* EFB90 150C26E0 E7AC0030 */  swc1       $f12, 0x30($sp)
    /* EFB94 150C26E4 0D45468E */  jal        func_15151A38
    /* EFB98 150C26E8 E7B20028 */   swc1      $f18, 0x28($sp)
    /* EFB9C 150C26EC 24020001 */  addiu      $v0, $zero, 0x1
    /* EFBA0 150C26F0 8FBF0014 */  lw         $ra, 0x14($sp)
    /* EFBA4 150C26F4 27BD00A0 */  addiu      $sp, $sp, 0xA0
    /* EFBA8 150C26F8 03E00008 */  jr         $ra
    /* EFBAC 150C26FC 00000000 */   nop
endlabel func_150C2558
