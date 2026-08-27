nonmatching func_151618BC, 0xE4

glabel func_151618BC
    /* 18ED6C 151618BC 27BDFFA0 */  addiu      $sp, $sp, -0x60
    /* 18ED70 151618C0 AFBF002C */  sw         $ra, 0x2C($sp)
    /* 18ED74 151618C4 AFA40060 */  sw         $a0, 0x60($sp)
    /* 18ED78 151618C8 AFA50064 */  sw         $a1, 0x64($sp)
    /* 18ED7C 151618CC AFA60068 */  sw         $a2, 0x68($sp)
    /* 18ED80 151618D0 AFA7006C */  sw         $a3, 0x6C($sp)
    /* 18ED84 151618D4 3C0F800A */  lui        $t7, %hi(D_800A66E4)
    /* 18ED88 151618D8 25EF66E4 */  addiu      $t7, $t7, %lo(D_800A66E4)
    /* 18ED8C 151618DC 25E80024 */  addiu      $t0, $t7, 0x24
    /* 18ED90 151618E0 27AE0038 */  addiu      $t6, $sp, 0x38
  .L151618E4:
    /* 18ED94 151618E4 8DE10000 */  lw         $at, 0x0($t7)
    /* 18ED98 151618E8 25EF000C */  addiu      $t7, $t7, 0xC
    /* 18ED9C 151618EC 25CE000C */  addiu      $t6, $t6, 0xC
    /* 18EDA0 151618F0 ADC1FFF4 */  sw         $at, -0xC($t6)
    /* 18EDA4 151618F4 8DE1FFF8 */  lw         $at, -0x8($t7)
    /* 18EDA8 151618F8 ADC1FFF8 */  sw         $at, -0x8($t6)
    /* 18EDAC 151618FC 8DE1FFFC */  lw         $at, -0x4($t7)
    /* 18EDB0 15161900 15E8FFF8 */  bne        $t7, $t0, .L151618E4
    /* 18EDB4 15161904 ADC1FFFC */   sw        $at, -0x4($t6)
    /* 18EDB8 15161908 8DE10000 */  lw         $at, 0x0($t7)
    /* 18EDBC 1516190C 0D42B688 */  jal        func_150ADA20
    /* 18EDC0 15161910 ADC10000 */   sw        $at, 0x0($t6)
    /* 18EDC4 15161914 2401000A */  addiu      $at, $zero, 0xA
    /* 18EDC8 15161918 0041001B */  divu       $zero, $v0, $at
    /* 18EDCC 1516191C 00004810 */  mfhi       $t1
    /* 18EDD0 15161920 8FAB006C */  lw         $t3, 0x6C($sp)
    /* 18EDD4 15161924 00095080 */  sll        $t2, $t1, 2
    /* 18EDD8 15161928 8FA30070 */  lw         $v1, 0x70($sp)
    /* 18EDDC 1516192C 03AA2021 */  addu       $a0, $sp, $t2
    /* 18EDE0 15161930 8C840038 */  lw         $a0, 0x38($a0)
    /* 18EDE4 15161934 AFAB0010 */  sw         $t3, 0x10($sp)
    /* 18EDE8 15161938 C4640000 */  lwc1       $f4, 0x0($v1)
    /* 18EDEC 1516193C 87A9007A */  lh         $t1, 0x7A($sp)
    /* 18EDF0 15161940 87AE0076 */  lh         $t6, 0x76($sp)
    /* 18EDF4 15161944 4600218D */  trunc.w.s  $f6, $f4
    /* 18EDF8 15161948 97A50062 */  lhu        $a1, 0x62($sp)
    /* 18EDFC 1516194C 87A60066 */  lh         $a2, 0x66($sp)
    /* 18EE00 15161950 93A7006B */  lbu        $a3, 0x6B($sp)
    /* 18EE04 15161954 440D3000 */  mfc1       $t5, $f6
    /* 18EE08 15161958 00000000 */  nop
    /* 18EE0C 1516195C AFAD0014 */  sw         $t5, 0x14($sp)
    /* 18EE10 15161960 C4680004 */  lwc1       $f8, 0x4($v1)
    /* 18EE14 15161964 4600428D */  trunc.w.s  $f10, $f8
    /* 18EE18 15161968 44185000 */  mfc1       $t8, $f10
    /* 18EE1C 1516196C 00000000 */  nop
    /* 18EE20 15161970 AFB80018 */  sw         $t8, 0x18($sp)
    /* 18EE24 15161974 C4700008 */  lwc1       $f16, 0x8($v1)
    /* 18EE28 15161978 AFA90024 */  sw         $t1, 0x24($sp)
    /* 18EE2C 1516197C AFAE0020 */  sw         $t6, 0x20($sp)
    /* 18EE30 15161980 4600848D */  trunc.w.s  $f18, $f16
    /* 18EE34 15161984 440F9000 */  mfc1       $t7, $f18
    /* 18EE38 15161988 0C0043E2 */  jal        func_10010F88
    /* 18EE3C 1516198C AFAF001C */   sw        $t7, 0x1C($sp)
    /* 18EE40 15161990 8FBF002C */  lw         $ra, 0x2C($sp)
    /* 18EE44 15161994 27BD0060 */  addiu      $sp, $sp, 0x60
    /* 18EE48 15161998 03E00008 */  jr         $ra
    /* 18EE4C 1516199C 00000000 */   nop
endlabel func_151618BC
