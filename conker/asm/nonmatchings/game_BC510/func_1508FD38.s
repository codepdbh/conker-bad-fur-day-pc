nonmatching func_1508FD38, 0x3B8

glabel func_1508FD38
    /* BD1E8 1508FD38 27BDFF70 */  addiu      $sp, $sp, -0x90
    /* BD1EC 1508FD3C AFB00020 */  sw         $s0, 0x20($sp)
    /* BD1F0 1508FD40 00808025 */  or         $s0, $a0, $zero
    /* BD1F4 1508FD44 AFBF0024 */  sw         $ra, 0x24($sp)
    /* BD1F8 1508FD48 3C0E800C */  lui        $t6, %hi(D_800BE9F0)
    /* BD1FC 1508FD4C 8DCEE9F0 */  lw         $t6, %lo(D_800BE9F0)($t6)
    /* BD200 1508FD50 2401001D */  addiu      $at, $zero, 0x1D
    /* BD204 1508FD54 AFB0008C */  sw         $s0, 0x8C($sp)
    /* BD208 1508FD58 15C10003 */  bne        $t6, $at, .L1508FD68
    /* BD20C 1508FD5C 02001025 */   or        $v0, $s0, $zero
    /* BD210 1508FD60 100000DE */  b          .L150900DC
    /* BD214 1508FD64 02001025 */   or        $v0, $s0, $zero
  .L1508FD68:
    /* BD218 1508FD68 3C0FDB0E */  lui        $t7, (0xDB0E0000 >> 16)
    /* BD21C 1508FD6C AC4F0000 */  sw         $t7, 0x0($v0)
    /* BD220 1508FD70 3C18800D */  lui        $t8, %hi(D_800D2454)
    /* BD224 1508FD74 97182454 */  lhu        $t8, %lo(D_800D2454)($t8)
    /* BD228 1508FD78 26100008 */  addiu      $s0, $s0, 0x8
    /* BD22C 1508FD7C 02001825 */  or         $v1, $s0, $zero
    /* BD230 1508FD80 AC580004 */  sw         $t8, 0x4($v0)
    /* BD234 1508FD84 3C19DA38 */  lui        $t9, (0xDA380007 >> 16)
    /* BD238 1508FD88 3C08800D */  lui        $t0, %hi(D_800D23D0)
    /* BD23C 1508FD8C 250823D0 */  addiu      $t0, $t0, %lo(D_800D23D0)
    /* BD240 1508FD90 37390007 */  ori        $t9, $t9, (0xDA380007 & 0xFFFF)
    /* BD244 1508FD94 AC790000 */  sw         $t9, 0x0($v1)
    /* BD248 1508FD98 AC680004 */  sw         $t0, 0x4($v1)
    /* BD24C 1508FD9C 26100008 */  addiu      $s0, $s0, 0x8
    /* BD250 1508FDA0 3C09800C */  lui        $t1, %hi(D_800BE616)
    /* BD254 1508FDA4 9129E616 */  lbu        $t1, %lo(D_800BE616)($t1)
    /* BD258 1508FDA8 3C18800D */  lui        $t8, %hi(D_800D2458)
    /* BD25C 1508FDAC 11200019 */  beqz       $t1, .L1508FE14
    /* BD260 1508FDB0 00000000 */   nop
    /* BD264 1508FDB4 0D42463B */  jal        func_150918EC
    /* BD268 1508FDB8 02002025 */   or        $a0, $s0, $zero
    /* BD26C 1508FDBC 3C0B800C */  lui        $t3, %hi(D_800BE9C0)
    /* BD270 1508FDC0 916BE9C0 */  lbu        $t3, %lo(D_800BE9C0)($t3)
    /* BD274 1508FDC4 3C0D800C */  lui        $t5, %hi(D_800BE9C8)
    /* BD278 1508FDC8 3C0A800C */  lui        $t2, %hi(D_800BEBA4)
    /* BD27C 1508FDCC 000B6080 */  sll        $t4, $t3, 2
    /* BD280 1508FDD0 01AC6821 */  addu       $t5, $t5, $t4
    /* BD284 1508FDD4 8DADE9C8 */  lw         $t5, %lo(D_800BE9C8)($t5)
    /* BD288 1508FDD8 8D4AEBA4 */  lw         $t2, %lo(D_800BEBA4)($t2)
    /* BD28C 1508FDDC 00408025 */  or         $s0, $v0, $zero
    /* BD290 1508FDE0 004D7023 */  subu       $t6, $v0, $t5
    /* BD294 1508FDE4 000E78C3 */  sra        $t7, $t6, 3
    /* BD298 1508FDE8 014F082A */  slt        $at, $t2, $t7
    /* BD29C 1508FDEC 10200003 */  beqz       $at, .L1508FDFC
    /* BD2A0 1508FDF0 00001025 */   or        $v0, $zero, $zero
    /* BD2A4 1508FDF4 10000001 */  b          .L1508FDFC
    /* BD2A8 1508FDF8 24020001 */   addiu     $v0, $zero, 0x1
  .L1508FDFC:
    /* BD2AC 1508FDFC 10400003 */  beqz       $v0, .L1508FE0C
    /* BD2B0 1508FE00 00000000 */   nop
    /* BD2B4 1508FE04 100000B5 */  b          .L150900DC
    /* BD2B8 1508FE08 8FA2008C */   lw        $v0, 0x8C($sp)
  .L1508FE0C:
    /* BD2BC 1508FE0C 100000B3 */  b          .L150900DC
    /* BD2C0 1508FE10 02001025 */   or        $v0, $s0, $zero
  .L1508FE14:
    /* BD2C4 1508FE14 93182458 */  lbu        $t8, %lo(D_800D2458)($t8)
    /* BD2C8 1508FE18 13000004 */  beqz       $t8, .L1508FE2C
    /* BD2CC 1508FE1C 00000000 */   nop
    /* BD2D0 1508FE20 0D424E2F */  jal        func_150938BC
    /* BD2D4 1508FE24 02002025 */   or        $a0, $s0, $zero
    /* BD2D8 1508FE28 00408025 */  or         $s0, $v0, $zero
  .L1508FE2C:
    /* BD2DC 1508FE2C 3C19800C */  lui        $t9, %hi(D_800C35EA)
    /* BD2E0 1508FE30 933935EA */  lbu        $t9, %lo(D_800C35EA)($t9)
    /* BD2E4 1508FE34 24010001 */  addiu      $at, $zero, 0x1
    /* BD2E8 1508FE38 3C088009 */  lui        $t0, %hi(D_8008CD00)
    /* BD2EC 1508FE3C 17210003 */  bne        $t9, $at, .L1508FE4C
    /* BD2F0 1508FE40 00000000 */   nop
    /* BD2F4 1508FE44 100000A5 */  b          .L150900DC
    /* BD2F8 1508FE48 02001025 */   or        $v0, $s0, $zero
  .L1508FE4C:
    /* BD2FC 1508FE4C 9108CD00 */  lbu        $t0, %lo(D_8008CD00)($t0)
    /* BD300 1508FE50 3C018009 */  lui        $at, %hi(D_8008FE1C)
    /* BD304 1508FE54 1100006D */  beqz       $t0, .L1509000C
    /* BD308 1508FE58 00000000 */   nop
    /* BD30C 1508FE5C C420FE1C */  lwc1       $f0, %lo(D_8008FE1C)($at)
    /* BD310 1508FE60 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* BD314 1508FE64 44812000 */  mtc1       $at, $f4
    /* BD318 1508FE68 24050400 */  addiu      $a1, $zero, 0x400
    /* BD31C 1508FE6C 24090400 */  addiu      $t1, $zero, 0x400
    /* BD320 1508FE70 46002032 */  c.eq.s     $f4, $f0
    /* BD324 1508FE74 24020001 */  addiu      $v0, $zero, 0x1
    /* BD328 1508FE78 27A3003E */  addiu      $v1, $sp, 0x3E
    /* BD32C 1508FE7C 24040021 */  addiu      $a0, $zero, 0x21
    /* BD330 1508FE80 45030051 */  bc1tl      .L1508FFC8
    /* BD334 1508FE84 A7A0003C */   sh        $zero, 0x3C($sp)
    /* BD338 1508FE88 44893000 */  mtc1       $t1, $f6
    /* BD33C 1508FE8C 44809000 */  mtc1       $zero, $f18
    /* BD340 1508FE90 24020001 */  addiu      $v0, $zero, 0x1
    /* BD344 1508FE94 46803220 */  cvt.s.w    $f8, $f6
    /* BD348 1508FE98 27A3003E */  addiu      $v1, $sp, 0x3E
    /* BD34C 1508FE9C 24040021 */  addiu      $a0, $zero, 0x21
    /* BD350 1508FEA0 46809120 */  cvt.s.w    $f4, $f18
    /* BD354 1508FEA4 46004283 */  div.s      $f10, $f8, $f0
    /* BD358 1508FEA8 46002182 */  mul.s      $f6, $f4, $f0
    /* BD35C 1508FEAC 4600320D */  trunc.w.s  $f8, $f6
    /* BD360 1508FEB0 4600540D */  trunc.w.s  $f16, $f10
    /* BD364 1508FEB4 440D4000 */  mfc1       $t5, $f8
    /* BD368 1508FEB8 44058000 */  mfc1       $a1, $f16
    /* BD36C 1508FEBC A7AD003C */  sh         $t5, 0x3C($sp)
    /* BD370 1508FEC0 44823000 */  mtc1       $v0, $f6
    /* BD374 1508FEC4 244F0001 */  addiu      $t7, $v0, 0x1
    /* BD378 1508FEC8 448F2000 */  mtc1       $t7, $f4
    /* BD37C 1508FECC 468031A0 */  cvt.s.w    $f6, $f6
    /* BD380 1508FED0 24480002 */  addiu      $t0, $v0, 0x2
    /* BD384 1508FED4 2484FFFC */  addiu      $a0, $a0, -0x4
    /* BD388 1508FED8 44887000 */  mtc1       $t0, $f14
    /* BD38C 1508FEDC 46802120 */  cvt.s.w    $f4, $f4
    /* BD390 1508FEE0 46003182 */  mul.s      $f6, $f6, $f0
    /* BD394 1508FEE4 4600348D */  trunc.w.s  $f18, $f6
    /* BD398 1508FEE8 46002402 */  mul.s      $f16, $f4, $f0
    /* BD39C 1508FEEC 50440020 */  beql       $v0, $a0, .L1508FF70
    /* BD3A0 1508FEF0 244C0003 */   addiu     $t4, $v0, 0x3
  .L1508FEF4:
    /* BD3A4 1508FEF4 46807320 */  cvt.s.w    $f12, $f14
    /* BD3A8 1508FEF8 440A9000 */  mfc1       $t2, $f18
    /* BD3AC 1508FEFC 244C0003 */  addiu      $t4, $v0, 0x3
    /* BD3B0 1508FF00 448C5000 */  mtc1       $t4, $f10
    /* BD3B4 1508FF04 24420004 */  addiu      $v0, $v0, 0x4
    /* BD3B8 1508FF08 4600820D */  trunc.w.s  $f8, $f16
    /* BD3BC 1508FF0C 46006302 */  mul.s      $f12, $f12, $f0
    /* BD3C0 1508FF10 44823000 */  mtc1       $v0, $f6
    /* BD3C4 1508FF14 244F0001 */  addiu      $t7, $v0, 0x1
    /* BD3C8 1508FF18 448F2000 */  mtc1       $t7, $f4
    /* BD3CC 1508FF1C 44194000 */  mfc1       $t9, $f8
    /* BD3D0 1508FF20 24480002 */  addiu      $t0, $v0, 0x2
    /* BD3D4 1508FF24 468052A0 */  cvt.s.w    $f10, $f10
    /* BD3D8 1508FF28 44887000 */  mtc1       $t0, $f14
    /* BD3DC 1508FF2C A46A0000 */  sh         $t2, 0x0($v1)
    /* BD3E0 1508FF30 A4790002 */  sh         $t9, 0x2($v1)
    /* BD3E4 1508FF34 24630008 */  addiu      $v1, $v1, 0x8
    /* BD3E8 1508FF38 468031A0 */  cvt.s.w    $f6, $f6
    /* BD3EC 1508FF3C 46005282 */  mul.s      $f10, $f10, $f0
    /* BD3F0 1508FF40 4600630D */  trunc.w.s  $f12, $f12
    /* BD3F4 1508FF44 46003182 */  mul.s      $f6, $f6, $f0
    /* BD3F8 1508FF48 440B6000 */  mfc1       $t3, $f12
    /* BD3FC 1508FF4C 46802120 */  cvt.s.w    $f4, $f4
    /* BD400 1508FF50 A46BFFFC */  sh         $t3, -0x4($v1)
    /* BD404 1508FF54 4600528D */  trunc.w.s  $f10, $f10
    /* BD408 1508FF58 46002402 */  mul.s      $f16, $f4, $f0
    /* BD40C 1508FF5C 440E5000 */  mfc1       $t6, $f10
    /* BD410 1508FF60 4600348D */  trunc.w.s  $f18, $f6
    /* BD414 1508FF64 1444FFE3 */  bne        $v0, $a0, .L1508FEF4
    /* BD418 1508FF68 A46EFFFE */   sh        $t6, -0x2($v1)
    /* BD41C 1508FF6C 244C0003 */  addiu      $t4, $v0, 0x3
  .L1508FF70:
    /* BD420 1508FF70 46807320 */  cvt.s.w    $f12, $f14
    /* BD424 1508FF74 448C5000 */  mtc1       $t4, $f10
    /* BD428 1508FF78 440A9000 */  mfc1       $t2, $f18
    /* BD42C 1508FF7C 24840004 */  addiu      $a0, $a0, 0x4
    /* BD430 1508FF80 24420004 */  addiu      $v0, $v0, 0x4
    /* BD434 1508FF84 468052A0 */  cvt.s.w    $f10, $f10
    /* BD438 1508FF88 46006302 */  mul.s      $f12, $f12, $f0
    /* BD43C 1508FF8C 24630008 */  addiu      $v1, $v1, 0x8
    /* BD440 1508FF90 A46AFFF8 */  sh         $t2, -0x8($v1)
    /* BD444 1508FF94 46005282 */  mul.s      $f10, $f10, $f0
    /* BD448 1508FF98 4600630D */  trunc.w.s  $f12, $f12
    /* BD44C 1508FF9C 4600528D */  trunc.w.s  $f10, $f10
    /* BD450 1508FFA0 440B6000 */  mfc1       $t3, $f12
    /* BD454 1508FFA4 4600820D */  trunc.w.s  $f8, $f16
    /* BD458 1508FFA8 440E5000 */  mfc1       $t6, $f10
    /* BD45C 1508FFAC A46BFFFC */  sh         $t3, -0x4($v1)
    /* BD460 1508FFB0 44194000 */  mfc1       $t9, $f8
    /* BD464 1508FFB4 A46EFFFE */  sh         $t6, -0x2($v1)
    /* BD468 1508FFB8 A479FFFA */  sh         $t9, -0x6($v1)
    /* BD46C 1508FFBC 1000000D */  b          .L1508FFF4
    /* BD470 1508FFC0 24190001 */   addiu     $t9, $zero, 0x1
    /* BD474 1508FFC4 A7A0003C */  sh         $zero, 0x3C($sp)
  .L1508FFC8:
    /* BD478 1508FFC8 A4620000 */  sh         $v0, 0x0($v1)
    /* BD47C 1508FFCC 244A0001 */  addiu      $t2, $v0, 0x1
    /* BD480 1508FFD0 244F0002 */  addiu      $t7, $v0, 0x2
    /* BD484 1508FFD4 24580003 */  addiu      $t8, $v0, 0x3
    /* BD488 1508FFD8 24420004 */  addiu      $v0, $v0, 0x4
    /* BD48C 1508FFDC A4780006 */  sh         $t8, 0x6($v1)
    /* BD490 1508FFE0 A46F0004 */  sh         $t7, 0x4($v1)
    /* BD494 1508FFE4 A46A0002 */  sh         $t2, 0x2($v1)
    /* BD498 1508FFE8 1444FFF7 */  bne        $v0, $a0, .L1508FFC8
    /* BD49C 1508FFEC 24630008 */   addiu     $v1, $v1, 0x8
    /* BD4A0 1508FFF0 24190001 */  addiu      $t9, $zero, 0x1
  .L1508FFF4:
    /* BD4A4 1508FFF4 AFB90010 */  sw         $t9, 0x10($sp)
    /* BD4A8 1508FFF8 02002025 */  or         $a0, $s0, $zero
    /* BD4AC 1508FFFC 27A6003C */  addiu      $a2, $sp, 0x3C
    /* BD4B0 15090000 0D424ED6 */  jal        func_15093B58
    /* BD4B4 15090004 24072C30 */   addiu     $a3, $zero, 0x2C30
    /* BD4B8 15090008 00408025 */  or         $s0, $v0, $zero
  .L1509000C:
    /* BD4BC 1509000C 3C08800A */  lui        $t0, %hi(D_8009DCB4)
    /* BD4C0 15090010 8508DCB4 */  lh         $t0, %lo(D_8009DCB4)($t0)
    /* BD4C4 15090014 3C01800D */  lui        $at, %hi(D_800D2428)
    /* BD4C8 15090018 C4262428 */  lwc1       $f6, %lo(D_800D2428)($at)
    /* BD4CC 1509001C 44884000 */  mtc1       $t0, $f8
    /* BD4D0 15090020 02002025 */  or         $a0, $s0, $zero
    /* BD4D4 15090024 3C09800D */  lui        $t1, %hi(D_800D2588)
    /* BD4D8 15090028 468042A0 */  cvt.s.w    $f10, $f8
    /* BD4DC 1509002C 460A3032 */  c.eq.s     $f6, $f10
    /* BD4E0 15090030 00000000 */  nop
    /* BD4E4 15090034 45010005 */  bc1t       .L1509004C
    /* BD4E8 15090038 00000000 */   nop
    /* BD4EC 1509003C 0D42403C */  jal        func_150900F0
    /* BD4F0 15090040 00002825 */   or        $a1, $zero, $zero
    /* BD4F4 15090044 10000008 */  b          .L15090068
    /* BD4F8 15090048 00408025 */   or        $s0, $v0, $zero
  .L1509004C:
    /* BD4FC 1509004C 8D292588 */  lw         $t1, %lo(D_800D2588)($t1)
    /* BD500 15090050 11200005 */  beqz       $t1, .L15090068
    /* BD504 15090054 00000000 */   nop
    /* BD508 15090058 0D463281 */  jal        func_1518CA04
    /* BD50C 1509005C 240400B8 */   addiu     $a0, $zero, 0xB8
    /* BD510 15090060 3C01800D */  lui        $at, %hi(D_800D2588)
    /* BD514 15090064 AC202588 */  sw         $zero, %lo(D_800D2588)($at)
  .L15090068:
    /* BD518 15090068 0D42447D */  jal        func_150911F4
    /* BD51C 1509006C 02002025 */   or        $a0, $s0, $zero
    /* BD520 15090070 0D4253D0 */  jal        func_15094F40
    /* BD524 15090074 00402025 */   or        $a0, $v0, $zero
    /* BD528 15090078 0D42418C */  jal        func_15090630
    /* BD52C 1509007C 00402025 */   or        $a0, $v0, $zero
    /* BD530 15090080 0D425A4D */  jal        func_15096934
    /* BD534 15090084 00402025 */   or        $a0, $v0, $zero
    /* BD538 15090088 3C0C800C */  lui        $t4, %hi(D_800BE9C0)
    /* BD53C 1509008C 918CE9C0 */  lbu        $t4, %lo(D_800BE9C0)($t4)
    /* BD540 15090090 3C0E800C */  lui        $t6, %hi(D_800BE9C8)
    /* BD544 15090094 3C0B800C */  lui        $t3, %hi(D_800BEBA4)
    /* BD548 15090098 000C6880 */  sll        $t5, $t4, 2
    /* BD54C 1509009C 01CD7021 */  addu       $t6, $t6, $t5
    /* BD550 150900A0 8DCEE9C8 */  lw         $t6, %lo(D_800BE9C8)($t6)
    /* BD554 150900A4 8D6BEBA4 */  lw         $t3, %lo(D_800BEBA4)($t3)
    /* BD558 150900A8 00408025 */  or         $s0, $v0, $zero
    /* BD55C 150900AC 004E5023 */  subu       $t2, $v0, $t6
    /* BD560 150900B0 000A78C3 */  sra        $t7, $t2, 3
    /* BD564 150900B4 016F082A */  slt        $at, $t3, $t7
    /* BD568 150900B8 10200003 */  beqz       $at, .L150900C8
    /* BD56C 150900BC 00001025 */   or        $v0, $zero, $zero
    /* BD570 150900C0 10000001 */  b          .L150900C8
    /* BD574 150900C4 24020001 */   addiu     $v0, $zero, 0x1
  .L150900C8:
    /* BD578 150900C8 50400004 */  beql       $v0, $zero, .L150900DC
    /* BD57C 150900CC 02001025 */   or        $v0, $s0, $zero
    /* BD580 150900D0 10000002 */  b          .L150900DC
    /* BD584 150900D4 8FA2008C */   lw        $v0, 0x8C($sp)
    /* BD588 150900D8 02001025 */  or         $v0, $s0, $zero
  .L150900DC:
    /* BD58C 150900DC 8FBF0024 */  lw         $ra, 0x24($sp)
    /* BD590 150900E0 8FB00020 */  lw         $s0, 0x20($sp)
    /* BD594 150900E4 27BD0090 */  addiu      $sp, $sp, 0x90
    /* BD598 150900E8 03E00008 */  jr         $ra
    /* BD59C 150900EC 00000000 */   nop
endlabel func_1508FD38
