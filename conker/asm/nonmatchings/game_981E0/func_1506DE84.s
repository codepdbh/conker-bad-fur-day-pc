nonmatching func_1506DE84, 0x268

glabel func_1506DE84
    /* 9B334 1506DE84 27BDFFD8 */  addiu      $sp, $sp, -0x28
    /* 9B338 1506DE88 AFBF0024 */  sw         $ra, 0x24($sp)
    /* 9B33C 1506DE8C 3C0E800D */  lui        $t6, %hi(D_800D1580)
    /* 9B340 1506DE90 8DCE1580 */  lw         $t6, %lo(D_800D1580)($t6)
    /* 9B344 1506DE94 2DC1000E */  sltiu      $at, $t6, 0xE
    /* 9B348 1506DE98 10200090 */  beqz       $at, .L1506E0DC
    /* 9B34C 1506DE9C 000E7080 */   sll       $t6, $t6, 2
    /* 9B350 1506DEA0 3C01800A */  lui        $at, %hi(jtbl_80099D54)
    /* 9B354 1506DEA4 002E0821 */  addu       $at, $at, $t6
    /* 9B358 1506DEA8 8C2E9D54 */  lw         $t6, %lo(jtbl_80099D54)($at)
    /* 9B35C 1506DEAC 01C00008 */  jr         $t6
    /* 9B360 1506DEB0 00000000 */   nop
  jlabel .L1506DEB4
    /* 9B364 1506DEB4 3C02800D */  lui        $v0, %hi(D_800D154C)
    /* 9B368 1506DEB8 8C42154C */  lw         $v0, %lo(D_800D154C)($v0)
    /* 9B36C 1506DEBC 44802000 */  mtc1       $zero, $f4
    /* 9B370 1506DEC0 3C01800A */  lui        $at, %hi(D_80099D8C)
    /* 9B374 1506DEC4 C4460028 */  lwc1       $f6, 0x28($v0)
    /* 9B378 1506DEC8 2407001E */  addiu      $a3, $zero, 0x1E
    /* 9B37C 1506DECC 240F001E */  addiu      $t7, $zero, 0x1E
    /* 9B380 1506DED0 46062032 */  c.eq.s     $f4, $f6
    /* 9B384 1506DED4 24180007 */  addiu      $t8, $zero, 0x7
    /* 9B388 1506DED8 45020081 */  bc1fl      .L1506E0E0
    /* 9B38C 1506DEDC 8FBF0024 */   lw        $ra, 0x24($sp)
    /* 9B390 1506DEE0 C4209D8C */  lwc1       $f0, %lo(D_80099D8C)($at)
    /* 9B394 1506DEE4 C44C0014 */  lwc1       $f12, 0x14($v0)
    /* 9B398 1506DEE8 C44E0018 */  lwc1       $f14, 0x18($v0)
    /* 9B39C 1506DEEC 8C46001C */  lw         $a2, 0x1C($v0)
    /* 9B3A0 1506DEF0 AFB80014 */  sw         $t8, 0x14($sp)
    /* 9B3A4 1506DEF4 AFAF0010 */  sw         $t7, 0x10($sp)
    /* 9B3A8 1506DEF8 E7A0001C */  swc1       $f0, 0x1C($sp)
    /* 9B3AC 1506DEFC 0D461D78 */  jal        func_151875E0
    /* 9B3B0 1506DF00 E7A00018 */   swc1      $f0, 0x18($sp)
    /* 9B3B4 1506DF04 10000076 */  b          .L1506E0E0
    /* 9B3B8 1506DF08 8FBF0024 */   lw        $ra, 0x24($sp)
  jlabel .L1506DF0C
    /* 9B3BC 1506DF0C 0D42B688 */  jal        func_150ADA20
    /* 9B3C0 1506DF10 00000000 */   nop
    /* 9B3C4 1506DF14 305900FF */  andi       $t9, $v0, 0xFF
    /* 9B3C8 1506DF18 2F210040 */  sltiu      $at, $t9, 0x40
    /* 9B3CC 1506DF1C 1020006F */  beqz       $at, .L1506E0DC
    /* 9B3D0 1506DF20 3C02800D */   lui       $v0, %hi(D_800D154C)
    /* 9B3D4 1506DF24 8C42154C */  lw         $v0, %lo(D_800D154C)($v0)
    /* 9B3D8 1506DF28 3C01800A */  lui        $at, %hi(D_80099D90)
    /* 9B3DC 1506DF2C C4289D90 */  lwc1       $f8, %lo(D_80099D90)($at)
    /* 9B3E0 1506DF30 3C01800A */  lui        $at, %hi(D_80099D94)
    /* 9B3E4 1506DF34 C44C0014 */  lwc1       $f12, 0x14($v0)
    /* 9B3E8 1506DF38 C44E0018 */  lwc1       $f14, 0x18($v0)
    /* 9B3EC 1506DF3C 8C46001C */  lw         $a2, 0x1C($v0)
    /* 9B3F0 1506DF40 C42A9D94 */  lwc1       $f10, %lo(D_80099D94)($at)
    /* 9B3F4 1506DF44 24080014 */  addiu      $t0, $zero, 0x14
    /* 9B3F8 1506DF48 24090007 */  addiu      $t1, $zero, 0x7
    /* 9B3FC 1506DF4C AFA90014 */  sw         $t1, 0x14($sp)
    /* 9B400 1506DF50 AFA80010 */  sw         $t0, 0x10($sp)
    /* 9B404 1506DF54 2407000A */  addiu      $a3, $zero, 0xA
    /* 9B408 1506DF58 E7A80018 */  swc1       $f8, 0x18($sp)
    /* 9B40C 1506DF5C 0D461D78 */  jal        func_151875E0
    /* 9B410 1506DF60 E7AA001C */   swc1      $f10, 0x1C($sp)
    /* 9B414 1506DF64 240A0106 */  addiu      $t2, $zero, 0x106
    /* 9B418 1506DF68 3C01800D */  lui        $at, %hi(D_800D1580)
    /* 9B41C 1506DF6C AC2A1580 */  sw         $t2, %lo(D_800D1580)($at)
    /* 9B420 1506DF70 2404012C */  addiu      $a0, $zero, 0x12C
    /* 9B424 1506DF74 0D41AE93 */  jal        func_1506BA4C
    /* 9B428 1506DF78 24050708 */   addiu     $a1, $zero, 0x708
    /* 9B42C 1506DF7C 10000058 */  b          .L1506E0E0
    /* 9B430 1506DF80 8FBF0024 */   lw        $ra, 0x24($sp)
  jlabel .L1506DF84
    /* 9B434 1506DF84 3C04800C */  lui        $a0, %hi(D_800C3E78)
    /* 9B438 1506DF88 90843E78 */  lbu        $a0, %lo(D_800C3E78)($a0)
    /* 9B43C 1506DF8C 24050010 */  addiu      $a1, $zero, 0x10
    /* 9B440 1506DF90 240600FF */  addiu      $a2, $zero, 0xFF
    /* 9B444 1506DF94 0D45BC70 */  jal        func_1516F1C0
    /* 9B448 1506DF98 00003825 */   or        $a3, $zero, $zero
    /* 9B44C 1506DF9C 10000050 */  b          .L1506E0E0
    /* 9B450 1506DFA0 8FBF0024 */   lw        $ra, 0x24($sp)
  jlabel .L1506DFA4
    /* 9B454 1506DFA4 3C04800C */  lui        $a0, %hi(D_800C3E78)
    /* 9B458 1506DFA8 90843E78 */  lbu        $a0, %lo(D_800C3E78)($a0)
    /* 9B45C 1506DFAC 24050028 */  addiu      $a1, $zero, 0x28
    /* 9B460 1506DFB0 240600FF */  addiu      $a2, $zero, 0xFF
    /* 9B464 1506DFB4 0D45BC70 */  jal        func_1516F1C0
    /* 9B468 1506DFB8 00003825 */   or        $a3, $zero, $zero
    /* 9B46C 1506DFBC 10000048 */  b          .L1506E0E0
    /* 9B470 1506DFC0 8FBF0024 */   lw        $ra, 0x24($sp)
  jlabel .L1506DFC4
    /* 9B474 1506DFC4 3C04800C */  lui        $a0, %hi(D_800C3E78)
    /* 9B478 1506DFC8 90843E78 */  lbu        $a0, %lo(D_800C3E78)($a0)
    /* 9B47C 1506DFCC 24050028 */  addiu      $a1, $zero, 0x28
    /* 9B480 1506DFD0 240600FF */  addiu      $a2, $zero, 0xFF
    /* 9B484 1506DFD4 0D45BC70 */  jal        func_1516F1C0
    /* 9B488 1506DFD8 00003825 */   or        $a3, $zero, $zero
    /* 9B48C 1506DFDC 10000040 */  b          .L1506E0E0
    /* 9B490 1506DFE0 8FBF0024 */   lw        $ra, 0x24($sp)
  jlabel .L1506DFE4
    /* 9B494 1506DFE4 3C04800C */  lui        $a0, %hi(D_800C3E78)
    /* 9B498 1506DFE8 240B00FF */  addiu      $t3, $zero, 0xFF
    /* 9B49C 1506DFEC AFAB0010 */  sw         $t3, 0x10($sp)
    /* 9B4A0 1506DFF0 90843E78 */  lbu        $a0, %lo(D_800C3E78)($a0)
    /* 9B4A4 1506DFF4 2405001E */  addiu      $a1, $zero, 0x1E
    /* 9B4A8 1506DFF8 24060014 */  addiu      $a2, $zero, 0x14
    /* 9B4AC 1506DFFC 24070002 */  addiu      $a3, $zero, 0x2
    /* 9B4B0 1506E000 0D45BCBE */  jal        func_1516F2F8
    /* 9B4B4 1506E004 AFA00014 */   sw        $zero, 0x14($sp)
    /* 9B4B8 1506E008 10000035 */  b          .L1506E0E0
    /* 9B4BC 1506E00C 8FBF0024 */   lw        $ra, 0x24($sp)
  jlabel .L1506E010
    /* 9B4C0 1506E010 3C04800C */  lui        $a0, %hi(D_800C3E78)
    /* 9B4C4 1506E014 240C00FF */  addiu      $t4, $zero, 0xFF
    /* 9B4C8 1506E018 AFAC0010 */  sw         $t4, 0x10($sp)
    /* 9B4CC 1506E01C 90843E78 */  lbu        $a0, %lo(D_800C3E78)($a0)
    /* 9B4D0 1506E020 24050012 */  addiu      $a1, $zero, 0x12
    /* 9B4D4 1506E024 2406000C */  addiu      $a2, $zero, 0xC
    /* 9B4D8 1506E028 24070002 */  addiu      $a3, $zero, 0x2
    /* 9B4DC 1506E02C 0D45BCBE */  jal        func_1516F2F8
    /* 9B4E0 1506E030 AFA00014 */   sw        $zero, 0x14($sp)
    /* 9B4E4 1506E034 1000002A */  b          .L1506E0E0
    /* 9B4E8 1506E038 8FBF0024 */   lw        $ra, 0x24($sp)
  jlabel .L1506E03C
    /* 9B4EC 1506E03C 3C04800C */  lui        $a0, %hi(D_800C3E78)
    /* 9B4F0 1506E040 240D00FF */  addiu      $t5, $zero, 0xFF
    /* 9B4F4 1506E044 AFAD0010 */  sw         $t5, 0x10($sp)
    /* 9B4F8 1506E048 90843E78 */  lbu        $a0, %lo(D_800C3E78)($a0)
    /* 9B4FC 1506E04C 2405003C */  addiu      $a1, $zero, 0x3C
    /* 9B500 1506E050 24060078 */  addiu      $a2, $zero, 0x78
    /* 9B504 1506E054 24070002 */  addiu      $a3, $zero, 0x2
    /* 9B508 1506E058 0D45BCBE */  jal        func_1516F2F8
    /* 9B50C 1506E05C AFA00014 */   sw        $zero, 0x14($sp)
    /* 9B510 1506E060 1000001F */  b          .L1506E0E0
    /* 9B514 1506E064 8FBF0024 */   lw        $ra, 0x24($sp)
  jlabel .L1506E068
    /* 9B518 1506E068 0D41B83B */  jal        func_1506E0EC
    /* 9B51C 1506E06C 00000000 */   nop
    /* 9B520 1506E070 1000001B */  b          .L1506E0E0
    /* 9B524 1506E074 8FBF0024 */   lw        $ra, 0x24($sp)
  jlabel .L1506E078
    /* 9B528 1506E078 0D42BF99 */  jal        func_150AFE64
    /* 9B52C 1506E07C 00002025 */   or        $a0, $zero, $zero
    /* 9B530 1506E080 10000017 */  b          .L1506E0E0
    /* 9B534 1506E084 8FBF0024 */   lw        $ra, 0x24($sp)
  jlabel .L1506E088
    /* 9B538 1506E088 0D42BF99 */  jal        func_150AFE64
    /* 9B53C 1506E08C 24040001 */   addiu     $a0, $zero, 0x1
    /* 9B540 1506E090 10000013 */  b          .L1506E0E0
    /* 9B544 1506E094 8FBF0024 */   lw        $ra, 0x24($sp)
  jlabel .L1506E098
    /* 9B548 1506E098 0D41B8B3 */  jal        func_1506E2CC
    /* 9B54C 1506E09C 00000000 */   nop
    /* 9B550 1506E0A0 1000000F */  b          .L1506E0E0
    /* 9B554 1506E0A4 8FBF0024 */   lw        $ra, 0x24($sp)
  jlabel .L1506E0A8
    /* 9B558 1506E0A8 3C04800C */  lui        $a0, %hi(D_800C3E78)
    /* 9B55C 1506E0AC 240E00FF */  addiu      $t6, $zero, 0xFF
    /* 9B560 1506E0B0 AFAE0010 */  sw         $t6, 0x10($sp)
    /* 9B564 1506E0B4 90843E78 */  lbu        $a0, %lo(D_800C3E78)($a0)
    /* 9B568 1506E0B8 24050012 */  addiu      $a1, $zero, 0x12
    /* 9B56C 1506E0BC 2406000C */  addiu      $a2, $zero, 0xC
    /* 9B570 1506E0C0 00003825 */  or         $a3, $zero, $zero
    /* 9B574 1506E0C4 0D45BCBE */  jal        func_1516F2F8
    /* 9B578 1506E0C8 AFA00014 */   sw        $zero, 0x14($sp)
    /* 9B57C 1506E0CC 10000004 */  b          .L1506E0E0
    /* 9B580 1506E0D0 8FBF0024 */   lw        $ra, 0x24($sp)
  jlabel .L1506E0D4
    /* 9B584 1506E0D4 0D42BF6C */  jal        func_150AFDB0
    /* 9B588 1506E0D8 00000000 */   nop
  .L1506E0DC:
    /* 9B58C 1506E0DC 8FBF0024 */  lw         $ra, 0x24($sp)
  .L1506E0E0:
    /* 9B590 1506E0E0 27BD0028 */  addiu      $sp, $sp, 0x28
    /* 9B594 1506E0E4 03E00008 */  jr         $ra
    /* 9B598 1506E0E8 00000000 */   nop
endlabel func_1506DE84
