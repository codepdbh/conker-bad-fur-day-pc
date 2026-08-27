nonmatching func_150124A0, 0x274

glabel func_150124A0
    /* 3F950 150124A0 27BDFF08 */  addiu      $sp, $sp, -0xF8
    /* 3F954 150124A4 AFBF009C */  sw         $ra, 0x9C($sp)
    /* 3F958 150124A8 AFBE0098 */  sw         $fp, 0x98($sp)
    /* 3F95C 150124AC AFB70094 */  sw         $s7, 0x94($sp)
    /* 3F960 150124B0 AFB60090 */  sw         $s6, 0x90($sp)
    /* 3F964 150124B4 AFB5008C */  sw         $s5, 0x8C($sp)
    /* 3F968 150124B8 AFB40088 */  sw         $s4, 0x88($sp)
    /* 3F96C 150124BC AFB30084 */  sw         $s3, 0x84($sp)
    /* 3F970 150124C0 AFB20080 */  sw         $s2, 0x80($sp)
    /* 3F974 150124C4 AFB1007C */  sw         $s1, 0x7C($sp)
    /* 3F978 150124C8 AFB00078 */  sw         $s0, 0x78($sp)
    /* 3F97C 150124CC F7BE0070 */  sdc1       $f30, 0x70($sp)
    /* 3F980 150124D0 F7BC0068 */  sdc1       $f28, 0x68($sp)
    /* 3F984 150124D4 F7BA0060 */  sdc1       $f26, 0x60($sp)
    /* 3F988 150124D8 F7B80058 */  sdc1       $f24, 0x58($sp)
    /* 3F98C 150124DC F7B60050 */  sdc1       $f22, 0x50($sp)
    /* 3F990 150124E0 F7B40048 */  sdc1       $f20, 0x48($sp)
    /* 3F994 150124E4 3C018009 */  lui        $at, %hi(D_80096570)
    /* 3F998 150124E8 C43E6570 */  lwc1       $f30, %lo(D_80096570)($at)
    /* 3F99C 150124EC 3C014396 */  lui        $at, (0x43960000 >> 16)
    /* 3F9A0 150124F0 3C03800E */  lui        $v1, %hi(D_800DCA30)
    /* 3F9A4 150124F4 2463CA30 */  addiu      $v1, $v1, %lo(D_800DCA30)
    /* 3F9A8 150124F8 3C14800A */  lui        $s4, %hi(D_8009F920)
    /* 3F9AC 150124FC 4481E000 */  mtc1       $at, $f28
    /* 3F9B0 15012500 4480A000 */  mtc1       $zero, $f20
    /* 3F9B4 15012504 2694F920 */  addiu      $s4, $s4, %lo(D_8009F920)
    /* 3F9B8 15012508 AFA300B0 */  sw         $v1, 0xB0($sp)
    /* 3F9BC 1501250C 27BE00E0 */  addiu      $fp, $sp, 0xE0
    /* 3F9C0 15012510 27B700DC */  addiu      $s7, $sp, 0xDC
    /* 3F9C4 15012514 27B600D8 */  addiu      $s6, $sp, 0xD8
    /* 3F9C8 15012518 2415000D */  addiu      $s5, $zero, 0xD
  .L1501251C:
    /* 3F9CC 1501251C 8FA300B0 */  lw         $v1, 0xB0($sp)
    /* 3F9D0 15012520 00009825 */  or         $s3, $zero, $zero
    /* 3F9D4 15012524 00608025 */  or         $s0, $v1, $zero
  .L15012528:
    /* 3F9D8 15012528 0D42B688 */  jal        func_150ADA20
    /* 3F9DC 1501252C 00000000 */   nop
    /* 3F9E0 15012530 0055001B */  divu       $zero, $v0, $s5
    /* 3F9E4 15012534 928F000C */  lbu        $t7, 0xC($s4)
    /* 3F9E8 15012538 00007010 */  mfhi       $t6
    /* 3F9EC 1501253C 01CF8821 */  addu       $s1, $t6, $t7
    /* 3F9F0 15012540 2631FF7A */  addiu      $s1, $s1, -0x86
    /* 3F9F4 15012544 0011C400 */  sll        $t8, $s1, 16
    /* 3F9F8 15012548 16A00002 */  bnez       $s5, .L15012554
    /* 3F9FC 1501254C 00000000 */   nop
    /* 3FA00 15012550 0007000D */  break      7
  .L15012554:
    /* 3FA04 15012554 00188C03 */  sra        $s1, $t8, 16
    /* 3FA08 15012558 0D42B688 */  jal        func_150ADA20
    /* 3FA0C 1501255C 00000000 */   nop
    /* 3FA10 15012560 3052000F */  andi       $s2, $v0, 0xF
    /* 3FA14 15012564 2652FFF6 */  addiu      $s2, $s2, -0xA
    /* 3FA18 15012568 2624FFC0 */  addiu      $a0, $s1, -0x40
    /* 3FA1C 1501256C 00124400 */  sll        $t0, $s2, 16
    /* 3FA20 15012570 308A00FF */  andi       $t2, $a0, 0xFF
    /* 3FA24 15012574 00089403 */  sra        $s2, $t0, 16
    /* 3FA28 15012578 0D4508F6 */  jal        func_151423D8
    /* 3FA2C 1501257C 01402025 */   or        $a0, $t2, $zero
    /* 3FA30 15012580 46000586 */  mov.s      $f22, $f0
    /* 3FA34 15012584 0D4508F6 */  jal        func_151423D8
    /* 3FA38 15012588 322400FF */   andi      $a0, $s1, 0xFF
    /* 3FA3C 1501258C 2644FFC0 */  addiu      $a0, $s2, -0x40
    /* 3FA40 15012590 308B00FF */  andi       $t3, $a0, 0xFF
    /* 3FA44 15012594 46000606 */  mov.s      $f24, $f0
    /* 3FA48 15012598 0D4508F6 */  jal        func_151423D8
    /* 3FA4C 1501259C 01602025 */   or        $a0, $t3, $zero
    /* 3FA50 150125A0 46000686 */  mov.s      $f26, $f0
    /* 3FA54 150125A4 0D4508F6 */  jal        func_151423D8
    /* 3FA58 150125A8 324400FF */   andi      $a0, $s2, 0xFF
    /* 3FA5C 150125AC 4406A000 */  mfc1       $a2, $f20
    /* 3FA60 150125B0 3C014120 */  lui        $at, (0x41200000 >> 16)
    /* 3FA64 150125B4 44819000 */  mtc1       $at, $f18
    /* 3FA68 150125B8 3C01C120 */  lui        $at, (0xC1200000 >> 16)
    /* 3FA6C 150125BC 44818000 */  mtc1       $at, $f16
    /* 3FA70 150125C0 46009082 */  mul.s      $f2, $f18, $f0
    /* 3FA74 150125C4 4600A306 */  mov.s      $f12, $f20
    /* 3FA78 150125C8 4600E386 */  mov.s      $f14, $f28
    /* 3FA7C 150125CC 461A8402 */  mul.s      $f16, $f16, $f26
    /* 3FA80 150125D0 AFA00018 */  sw         $zero, 0x18($sp)
    /* 3FA84 150125D4 AFA0001C */  sw         $zero, 0x1C($sp)
    /* 3FA88 150125D8 AFB60020 */  sw         $s6, 0x20($sp)
    /* 3FA8C 150125DC 46161482 */  mul.s      $f18, $f2, $f22
    /* 3FA90 150125E0 AFB70024 */  sw         $s7, 0x24($sp)
    /* 3FA94 150125E4 AFBE0028 */  sw         $fp, 0x28($sp)
    /* 3FA98 150125E8 46181282 */  mul.s      $f10, $f2, $f24
    /* 3FA9C 150125EC E7B00010 */  swc1       $f16, 0x10($sp)
    /* 3FAA0 150125F0 AFA0002C */  sw         $zero, 0x2C($sp)
    /* 3FAA4 150125F4 AFA00030 */  sw         $zero, 0x30($sp)
    /* 3FAA8 150125F8 44079000 */  mfc1       $a3, $f18
    /* 3FAAC 150125FC AFA00034 */  sw         $zero, 0x34($sp)
    /* 3FAB0 15012600 E7B40038 */  swc1       $f20, 0x38($sp)
    /* 3FAB4 15012604 0D42B270 */  jal        func_150AC9C0
    /* 3FAB8 15012608 E7AA0014 */   swc1      $f10, 0x14($sp)
    /* 3FABC 1501260C 14400005 */  bnez       $v0, .L15012624
    /* 3FAC0 15012610 26730010 */   addiu     $s3, $s3, 0x10
    /* 3FAC4 15012614 E6140000 */  swc1       $f20, 0x0($s0)
    /* 3FAC8 15012618 E6140004 */  swc1       $f20, 0x4($s0)
    /* 3FACC 1501261C 1000000C */  b          .L15012650
    /* 3FAD0 15012620 E6140008 */   swc1      $f20, 0x8($s0)
  .L15012624:
    /* 3FAD4 15012624 C7B200D8 */  lwc1       $f18, 0xD8($sp)
    /* 3FAD8 15012628 C7A600DC */  lwc1       $f6, 0xDC($sp)
    /* 3FADC 1501262C 461E9102 */  mul.s      $f4, $f18, $f30
    /* 3FAE0 15012630 461C3201 */  sub.s      $f8, $f6, $f28
    /* 3FAE4 15012634 C7B200E0 */  lwc1       $f18, 0xE0($sp)
    /* 3FAE8 15012638 461E4282 */  mul.s      $f10, $f8, $f30
    /* 3FAEC 1501263C E6040000 */  swc1       $f4, 0x0($s0)
    /* 3FAF0 15012640 461E9102 */  mul.s      $f4, $f18, $f30
    /* 3FAF4 15012644 461C5400 */  add.s      $f16, $f10, $f28
    /* 3FAF8 15012648 E6040008 */  swc1       $f4, 0x8($s0)
    /* 3FAFC 1501264C E6100004 */  swc1       $f16, 0x4($s0)
  .L15012650:
    /* 3FB00 15012650 240100A0 */  addiu      $at, $zero, 0xA0
    /* 3FB04 15012654 1661FFB4 */  bne        $s3, $at, .L15012528
    /* 3FB08 15012658 26100010 */   addiu     $s0, $s0, 0x10
    /* 3FB0C 1501265C 8FAC00B0 */  lw         $t4, 0xB0($sp)
    /* 3FB10 15012660 3C0E800E */  lui        $t6, %hi(D_800DCC10)
    /* 3FB14 15012664 25CECC10 */  addiu      $t6, $t6, %lo(D_800DCC10)
    /* 3FB18 15012668 258D00A0 */  addiu      $t5, $t4, 0xA0
    /* 3FB1C 1501266C AFAD00B0 */  sw         $t5, 0xB0($sp)
    /* 3FB20 15012670 15AEFFAA */  bne        $t5, $t6, .L1501251C
    /* 3FB24 15012674 26940010 */   addiu     $s4, $s4, 0x10
    /* 3FB28 15012678 240F0014 */  addiu      $t7, $zero, 0x14
    /* 3FB2C 1501267C 24180032 */  addiu      $t8, $zero, 0x32
    /* 3FB30 15012680 24190006 */  addiu      $t9, $zero, 0x6
    /* 3FB34 15012684 240800FF */  addiu      $t0, $zero, 0xFF
    /* 3FB38 15012688 A7AF00BC */  sh         $t7, 0xBC($sp)
    /* 3FB3C 1501268C A7B800BE */  sh         $t8, 0xBE($sp)
    /* 3FB40 15012690 A7A000C0 */  sh         $zero, 0xC0($sp)
    /* 3FB44 15012694 AFA80018 */  sw         $t0, 0x18($sp)
    /* 3FB48 15012698 AFB90014 */  sw         $t9, 0x14($sp)
    /* 3FB4C 1501269C 2404012C */  addiu      $a0, $zero, 0x12C
    /* 3FB50 150126A0 2405FFFF */  addiu      $a1, $zero, -0x1
    /* 3FB54 150126A4 24060007 */  addiu      $a2, $zero, 0x7
    /* 3FB58 150126A8 00003825 */  or         $a3, $zero, $zero
    /* 3FB5C 150126AC AFA00010 */  sw         $zero, 0x10($sp)
    /* 3FB60 150126B0 0D45247D */  jal        func_151491F4
    /* 3FB64 150126B4 AFA0001C */   sw        $zero, 0x1C($sp)
    /* 3FB68 150126B8 10400004 */  beqz       $v0, .L150126CC
    /* 3FB6C 150126BC 24440028 */   addiu     $a0, $v0, 0x28
    /* 3FB70 150126C0 27A500BC */  addiu      $a1, $sp, 0xBC
    /* 3FB74 150126C4 0C008BB0 */  jal        memcpy
    /* 3FB78 150126C8 24060006 */   addiu     $a2, $zero, 0x6
  .L150126CC:
    /* 3FB7C 150126CC 8FBF009C */  lw         $ra, 0x9C($sp)
    /* 3FB80 150126D0 D7B40048 */  ldc1       $f20, 0x48($sp)
    /* 3FB84 150126D4 D7B60050 */  ldc1       $f22, 0x50($sp)
    /* 3FB88 150126D8 D7B80058 */  ldc1       $f24, 0x58($sp)
    /* 3FB8C 150126DC D7BA0060 */  ldc1       $f26, 0x60($sp)
    /* 3FB90 150126E0 D7BC0068 */  ldc1       $f28, 0x68($sp)
    /* 3FB94 150126E4 D7BE0070 */  ldc1       $f30, 0x70($sp)
    /* 3FB98 150126E8 8FB00078 */  lw         $s0, 0x78($sp)
    /* 3FB9C 150126EC 8FB1007C */  lw         $s1, 0x7C($sp)
    /* 3FBA0 150126F0 8FB20080 */  lw         $s2, 0x80($sp)
    /* 3FBA4 150126F4 8FB30084 */  lw         $s3, 0x84($sp)
    /* 3FBA8 150126F8 8FB40088 */  lw         $s4, 0x88($sp)
    /* 3FBAC 150126FC 8FB5008C */  lw         $s5, 0x8C($sp)
    /* 3FBB0 15012700 8FB60090 */  lw         $s6, 0x90($sp)
    /* 3FBB4 15012704 8FB70094 */  lw         $s7, 0x94($sp)
    /* 3FBB8 15012708 8FBE0098 */  lw         $fp, 0x98($sp)
    /* 3FBBC 1501270C 03E00008 */  jr         $ra
    /* 3FBC0 15012710 27BD00F8 */   addiu     $sp, $sp, 0xF8
endlabel func_150124A0
    /* 3FBC4 15012714 00000000 */  nop
    /* 3FBC8 15012718 00000000 */  nop
    /* 3FBCC 1501271C 00000000 */  nop
