nonmatching func_1513EE14, 0x300

glabel func_1513EE14
    /* 16C2C4 1513EE14 27BDFF28 */  addiu      $sp, $sp, -0xD8
    /* 16C2C8 1513EE18 AFB00028 */  sw         $s0, 0x28($sp)
    /* 16C2CC 1513EE1C 00808025 */  or         $s0, $a0, $zero
    /* 16C2D0 1513EE20 AFBF002C */  sw         $ra, 0x2C($sp)
    /* 16C2D4 1513EE24 AFA500DC */  sw         $a1, 0xDC($sp)
    /* 16C2D8 1513EE28 27AE003F */  addiu      $t6, $sp, 0x3F
    /* 16C2DC 1513EE2C AFAE0010 */  sw         $t6, 0x10($sp)
    /* 16C2E0 1513EE30 26040100 */  addiu      $a0, $s0, 0x100
    /* 16C2E4 1513EE34 87A500DE */  lh         $a1, 0xDE($sp)
    /* 16C2E8 1513EE38 24060040 */  addiu      $a2, $zero, 0x40
    /* 16C2EC 1513EE3C 0D475758 */  jal        func_151D5D60
    /* 16C2F0 1513EE40 27A700D4 */   addiu     $a3, $sp, 0xD4
    /* 16C2F4 1513EE44 8FA200D4 */  lw         $v0, 0xD4($sp)
    /* 16C2F8 1513EE48 93AF003F */  lbu        $t7, 0x3F($sp)
    /* 16C2FC 1513EE4C 10400013 */  beqz       $v0, .L1513EE9C
    /* 16C300 1513EE50 AFA200D0 */   sw        $v0, 0xD0($sp)
    /* 16C304 1513EE54 11E00013 */  beqz       $t7, .L1513EEA4
    /* 16C308 1513EE58 87B800DE */   lh        $t8, 0xDE($sp)
    /* 16C30C 1513EE5C 0018C880 */  sll        $t9, $t8, 2
    /* 16C310 1513EE60 02191021 */  addu       $v0, $s0, $t9
    /* 16C314 1513EE64 8C440100 */  lw         $a0, 0x100($v0)
    /* 16C318 1513EE68 260500C0 */  addiu      $a1, $s0, 0xC0
    /* 16C31C 1513EE6C AFA50034 */  sw         $a1, 0x34($sp)
    /* 16C320 1513EE70 AFA20038 */  sw         $v0, 0x38($sp)
    /* 16C324 1513EE74 0C008BB0 */  jal        memcpy
    /* 16C328 1513EE78 24060040 */   addiu     $a2, $zero, 0x40
    /* 16C32C 1513EE7C 8FA20038 */  lw         $v0, 0x38($sp)
    /* 16C330 1513EE80 8FA50034 */  lw         $a1, 0x34($sp)
    /* 16C334 1513EE84 24060040 */  addiu      $a2, $zero, 0x40
    /* 16C338 1513EE88 8C440100 */  lw         $a0, 0x100($v0)
    /* 16C33C 1513EE8C 0C008BB0 */  jal        memcpy
    /* 16C340 1513EE90 24840040 */   addiu     $a0, $a0, 0x40
    /* 16C344 1513EE94 10000004 */  b          .L1513EEA8
    /* 16C348 1513EE98 27A40090 */   addiu     $a0, $sp, 0x90
  .L1513EE9C:
    /* 16C34C 1513EE9C 10000098 */  b          .L1513F100
    /* 16C350 1513EEA0 00001025 */   or        $v0, $zero, $zero
  .L1513EEA4:
    /* 16C354 1513EEA4 27A40090 */  addiu      $a0, $sp, 0x90
  .L1513EEA8:
    /* 16C358 1513EEA8 8E050040 */  lw         $a1, 0x40($s0)
    /* 16C35C 1513EEAC 8E060044 */  lw         $a2, 0x44($s0)
    /* 16C360 1513EEB0 0D42A014 */  jal        func_150A8050
    /* 16C364 1513EEB4 8E070048 */   lw        $a3, 0x48($s0)
    /* 16C368 1513EEB8 C6040034 */  lwc1       $f4, 0x34($s0)
    /* 16C36C 1513EEBC 27A80040 */  addiu      $t0, $sp, 0x40
    /* 16C370 1513EEC0 27A90044 */  addiu      $t1, $sp, 0x44
    /* 16C374 1513EEC4 E7A400C0 */  swc1       $f4, 0xC0($sp)
    /* 16C378 1513EEC8 C6060038 */  lwc1       $f6, 0x38($s0)
    /* 16C37C 1513EECC 27AA0048 */  addiu      $t2, $sp, 0x48
    /* 16C380 1513EED0 27A40090 */  addiu      $a0, $sp, 0x90
    /* 16C384 1513EED4 E7A600C4 */  swc1       $f6, 0xC4($sp)
    /* 16C388 1513EED8 C608003C */  lwc1       $f8, 0x3C($s0)
    /* 16C38C 1513EEDC 24070000 */  addiu      $a3, $zero, 0x0
    /* 16C390 1513EEE0 E7A800C8 */  swc1       $f8, 0xC8($sp)
    /* 16C394 1513EEE4 C60A002C */  lwc1       $f10, 0x2C($s0)
    /* 16C398 1513EEE8 E7AA0070 */  swc1       $f10, 0x70($sp)
    /* 16C39C 1513EEEC C6100030 */  lwc1       $f16, 0x30($s0)
    /* 16C3A0 1513EEF0 8FA50070 */  lw         $a1, 0x70($sp)
    /* 16C3A4 1513EEF4 E7B00074 */  swc1       $f16, 0x74($sp)
    /* 16C3A8 1513EEF8 C612002C */  lwc1       $f18, 0x2C($s0)
    /* 16C3AC 1513EEFC 8FA60074 */  lw         $a2, 0x74($sp)
    /* 16C3B0 1513EF00 46009107 */  neg.s      $f4, $f18
    /* 16C3B4 1513EF04 E7A40078 */  swc1       $f4, 0x78($sp)
    /* 16C3B8 1513EF08 C6060030 */  lwc1       $f6, 0x30($s0)
    /* 16C3BC 1513EF0C E7A6007C */  swc1       $f6, 0x7C($sp)
    /* 16C3C0 1513EF10 C608002C */  lwc1       $f8, 0x2C($s0)
    /* 16C3C4 1513EF14 46004287 */  neg.s      $f10, $f8
    /* 16C3C8 1513EF18 E7AA0080 */  swc1       $f10, 0x80($sp)
    /* 16C3CC 1513EF1C C6100030 */  lwc1       $f16, 0x30($s0)
    /* 16C3D0 1513EF20 46008487 */  neg.s      $f18, $f16
    /* 16C3D4 1513EF24 E7B20084 */  swc1       $f18, 0x84($sp)
    /* 16C3D8 1513EF28 C604002C */  lwc1       $f4, 0x2C($s0)
    /* 16C3DC 1513EF2C E7A40088 */  swc1       $f4, 0x88($sp)
    /* 16C3E0 1513EF30 C6060030 */  lwc1       $f6, 0x30($s0)
    /* 16C3E4 1513EF34 AFAA0018 */  sw         $t2, 0x18($sp)
    /* 16C3E8 1513EF38 AFA90014 */  sw         $t1, 0x14($sp)
    /* 16C3EC 1513EF3C 46003207 */  neg.s      $f8, $f6
    /* 16C3F0 1513EF40 AFA80010 */  sw         $t0, 0x10($sp)
    /* 16C3F4 1513EF44 0D429E58 */  jal        func_150A7960
    /* 16C3F8 1513EF48 E7A8008C */   swc1      $f8, 0x8C($sp)
    /* 16C3FC 1513EF4C 27B00090 */  addiu      $s0, $sp, 0x90
    /* 16C400 1513EF50 27AB004C */  addiu      $t3, $sp, 0x4C
    /* 16C404 1513EF54 27AC0050 */  addiu      $t4, $sp, 0x50
    /* 16C408 1513EF58 27AD0054 */  addiu      $t5, $sp, 0x54
    /* 16C40C 1513EF5C AFAD0018 */  sw         $t5, 0x18($sp)
    /* 16C410 1513EF60 AFAC0014 */  sw         $t4, 0x14($sp)
    /* 16C414 1513EF64 AFAB0010 */  sw         $t3, 0x10($sp)
    /* 16C418 1513EF68 02002025 */  or         $a0, $s0, $zero
    /* 16C41C 1513EF6C 8FA50078 */  lw         $a1, 0x78($sp)
    /* 16C420 1513EF70 8FA6007C */  lw         $a2, 0x7C($sp)
    /* 16C424 1513EF74 0D429E58 */  jal        func_150A7960
    /* 16C428 1513EF78 24070000 */   addiu     $a3, $zero, 0x0
    /* 16C42C 1513EF7C 27AE0058 */  addiu      $t6, $sp, 0x58
    /* 16C430 1513EF80 27AF005C */  addiu      $t7, $sp, 0x5C
    /* 16C434 1513EF84 27B80060 */  addiu      $t8, $sp, 0x60
    /* 16C438 1513EF88 AFB80018 */  sw         $t8, 0x18($sp)
    /* 16C43C 1513EF8C AFAF0014 */  sw         $t7, 0x14($sp)
    /* 16C440 1513EF90 AFAE0010 */  sw         $t6, 0x10($sp)
    /* 16C444 1513EF94 02002025 */  or         $a0, $s0, $zero
    /* 16C448 1513EF98 8FA50080 */  lw         $a1, 0x80($sp)
    /* 16C44C 1513EF9C 8FA60084 */  lw         $a2, 0x84($sp)
    /* 16C450 1513EFA0 0D429E58 */  jal        func_150A7960
    /* 16C454 1513EFA4 24070000 */   addiu     $a3, $zero, 0x0
    /* 16C458 1513EFA8 27B90064 */  addiu      $t9, $sp, 0x64
    /* 16C45C 1513EFAC 27A80068 */  addiu      $t0, $sp, 0x68
    /* 16C460 1513EFB0 27A9006C */  addiu      $t1, $sp, 0x6C
    /* 16C464 1513EFB4 AFA90018 */  sw         $t1, 0x18($sp)
    /* 16C468 1513EFB8 AFA80014 */  sw         $t0, 0x14($sp)
    /* 16C46C 1513EFBC AFB90010 */  sw         $t9, 0x10($sp)
    /* 16C470 1513EFC0 02002025 */  or         $a0, $s0, $zero
    /* 16C474 1513EFC4 8FA50088 */  lw         $a1, 0x88($sp)
    /* 16C478 1513EFC8 8FA6008C */  lw         $a2, 0x8C($sp)
    /* 16C47C 1513EFCC 0D429E58 */  jal        func_150A7960
    /* 16C480 1513EFD0 24070000 */   addiu     $a3, $zero, 0x0
    /* 16C484 1513EFD4 C7AA0040 */  lwc1       $f10, 0x40($sp)
    /* 16C488 1513EFD8 8FAC00D4 */  lw         $t4, 0xD4($sp)
    /* 16C48C 1513EFDC 4600540D */  trunc.w.s  $f16, $f10
    /* 16C490 1513EFE0 440B8000 */  mfc1       $t3, $f16
    /* 16C494 1513EFE4 00000000 */  nop
    /* 16C498 1513EFE8 A58B0000 */  sh         $t3, 0x0($t4)
    /* 16C49C 1513EFEC C7B20044 */  lwc1       $f18, 0x44($sp)
    /* 16C4A0 1513EFF0 8FAF00D4 */  lw         $t7, 0xD4($sp)
    /* 16C4A4 1513EFF4 4600910D */  trunc.w.s  $f4, $f18
    /* 16C4A8 1513EFF8 440E2000 */  mfc1       $t6, $f4
    /* 16C4AC 1513EFFC 00000000 */  nop
    /* 16C4B0 1513F000 A5EE0002 */  sh         $t6, 0x2($t7)
    /* 16C4B4 1513F004 C7A60048 */  lwc1       $f6, 0x48($sp)
    /* 16C4B8 1513F008 8FA800D4 */  lw         $t0, 0xD4($sp)
    /* 16C4BC 1513F00C 4600320D */  trunc.w.s  $f8, $f6
    /* 16C4C0 1513F010 44194000 */  mfc1       $t9, $f8
    /* 16C4C4 1513F014 00000000 */  nop
    /* 16C4C8 1513F018 A5190004 */  sh         $t9, 0x4($t0)
    /* 16C4CC 1513F01C 8FA900D4 */  lw         $t1, 0xD4($sp)
    /* 16C4D0 1513F020 A5200006 */  sh         $zero, 0x6($t1)
    /* 16C4D4 1513F024 C7AA004C */  lwc1       $f10, 0x4C($sp)
    /* 16C4D8 1513F028 8FAA00D4 */  lw         $t2, 0xD4($sp)
    /* 16C4DC 1513F02C 4600540D */  trunc.w.s  $f16, $f10
    /* 16C4E0 1513F030 254B0010 */  addiu      $t3, $t2, 0x10
    /* 16C4E4 1513F034 AFAB00D4 */  sw         $t3, 0xD4($sp)
    /* 16C4E8 1513F038 25680010 */  addiu      $t0, $t3, 0x10
    /* 16C4EC 1513F03C 440D8000 */  mfc1       $t5, $f16
    /* 16C4F0 1513F040 25180010 */  addiu      $t8, $t0, 0x10
    /* 16C4F4 1513F044 A56D0000 */  sh         $t5, 0x0($t3)
    /* 16C4F8 1513F048 C7B20050 */  lwc1       $f18, 0x50($sp)
    /* 16C4FC 1513F04C 4600910D */  trunc.w.s  $f4, $f18
    /* 16C500 1513F050 440F2000 */  mfc1       $t7, $f4
    /* 16C504 1513F054 00000000 */  nop
    /* 16C508 1513F058 A56F0002 */  sh         $t7, 0x2($t3)
    /* 16C50C 1513F05C C7A60054 */  lwc1       $f6, 0x54($sp)
    /* 16C510 1513F060 A5600006 */  sh         $zero, 0x6($t3)
    /* 16C514 1513F064 4600320D */  trunc.w.s  $f8, $f6
    /* 16C518 1513F068 44194000 */  mfc1       $t9, $f8
    /* 16C51C 1513F06C 00000000 */  nop
    /* 16C520 1513F070 A5790004 */  sh         $t9, 0x4($t3)
    /* 16C524 1513F074 C7AA0058 */  lwc1       $f10, 0x58($sp)
    /* 16C528 1513F078 AFA800D4 */  sw         $t0, 0xD4($sp)
    /* 16C52C 1513F07C 4600540D */  trunc.w.s  $f16, $f10
    /* 16C530 1513F080 440A8000 */  mfc1       $t2, $f16
    /* 16C534 1513F084 00000000 */  nop
    /* 16C538 1513F088 A50A0000 */  sh         $t2, 0x0($t0)
    /* 16C53C 1513F08C C7B2005C */  lwc1       $f18, 0x5C($sp)
    /* 16C540 1513F090 4600910D */  trunc.w.s  $f4, $f18
    /* 16C544 1513F094 440D2000 */  mfc1       $t5, $f4
    /* 16C548 1513F098 00000000 */  nop
    /* 16C54C 1513F09C A50D0002 */  sh         $t5, 0x2($t0)
    /* 16C550 1513F0A0 C7A60060 */  lwc1       $f6, 0x60($sp)
    /* 16C554 1513F0A4 A5000006 */  sh         $zero, 0x6($t0)
    /* 16C558 1513F0A8 4600320D */  trunc.w.s  $f8, $f6
    /* 16C55C 1513F0AC 440F4000 */  mfc1       $t7, $f8
    /* 16C560 1513F0B0 00000000 */  nop
    /* 16C564 1513F0B4 A50F0004 */  sh         $t7, 0x4($t0)
    /* 16C568 1513F0B8 C7AA0064 */  lwc1       $f10, 0x64($sp)
    /* 16C56C 1513F0BC AFB800D4 */  sw         $t8, 0xD4($sp)
    /* 16C570 1513F0C0 4600540D */  trunc.w.s  $f16, $f10
    /* 16C574 1513F0C4 440B8000 */  mfc1       $t3, $f16
    /* 16C578 1513F0C8 00000000 */  nop
    /* 16C57C 1513F0CC A70B0000 */  sh         $t3, 0x0($t8)
    /* 16C580 1513F0D0 C7B20068 */  lwc1       $f18, 0x68($sp)
    /* 16C584 1513F0D4 4600910D */  trunc.w.s  $f4, $f18
    /* 16C588 1513F0D8 440A2000 */  mfc1       $t2, $f4
    /* 16C58C 1513F0DC 00000000 */  nop
    /* 16C590 1513F0E0 A70A0002 */  sh         $t2, 0x2($t8)
    /* 16C594 1513F0E4 C7A6006C */  lwc1       $f6, 0x6C($sp)
    /* 16C598 1513F0E8 A7000006 */  sh         $zero, 0x6($t8)
    /* 16C59C 1513F0EC 4600320D */  trunc.w.s  $f8, $f6
    /* 16C5A0 1513F0F0 440D4000 */  mfc1       $t5, $f8
    /* 16C5A4 1513F0F4 00000000 */  nop
    /* 16C5A8 1513F0F8 A70D0004 */  sh         $t5, 0x4($t8)
    /* 16C5AC 1513F0FC 8FA200D0 */  lw         $v0, 0xD0($sp)
  .L1513F100:
    /* 16C5B0 1513F100 8FBF002C */  lw         $ra, 0x2C($sp)
    /* 16C5B4 1513F104 8FB00028 */  lw         $s0, 0x28($sp)
    /* 16C5B8 1513F108 27BD00D8 */  addiu      $sp, $sp, 0xD8
    /* 16C5BC 1513F10C 03E00008 */  jr         $ra
    /* 16C5C0 1513F110 00000000 */   nop
endlabel func_1513EE14
