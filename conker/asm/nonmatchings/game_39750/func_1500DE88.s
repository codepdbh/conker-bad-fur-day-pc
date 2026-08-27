nonmatching func_1500DE88, 0x5E0

glabel func_1500DE88
    /* 3B338 1500DE88 27BDFEE8 */  addiu      $sp, $sp, -0x118
    /* 3B33C 1500DE8C F7B40018 */  sdc1       $f20, 0x18($sp)
    /* 3B340 1500DE90 4485A000 */  mtc1       $a1, $f20
    /* 3B344 1500DE94 AFBF0054 */  sw         $ra, 0x54($sp)
    /* 3B348 1500DE98 AFB10050 */  sw         $s1, 0x50($sp)
    /* 3B34C 1500DE9C AFB0004C */  sw         $s0, 0x4C($sp)
    /* 3B350 1500DEA0 F7BE0040 */  sdc1       $f30, 0x40($sp)
    /* 3B354 1500DEA4 F7BC0038 */  sdc1       $f28, 0x38($sp)
    /* 3B358 1500DEA8 F7BA0030 */  sdc1       $f26, 0x30($sp)
    /* 3B35C 1500DEAC F7B80028 */  sdc1       $f24, 0x28($sp)
    /* 3B360 1500DEB0 F7B60020 */  sdc1       $f22, 0x20($sp)
    /* 3B364 1500DEB4 AFA40118 */  sw         $a0, 0x118($sp)
    /* 3B368 1500DEB8 0D45118B */  jal        func_1514462C
    /* 3B36C 1500DEBC 8FA40118 */   lw        $a0, 0x118($sp)
    /* 3B370 1500DEC0 46140102 */  mul.s      $f4, $f0, $f20
    /* 3B374 1500DEC4 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 3B378 1500DEC8 4481D000 */  mtc1       $at, $f26
    /* 3B37C 1500DECC 3C018009 */  lui        $at, %hi(D_800961A8)
    /* 3B380 1500DED0 C42661A8 */  lwc1       $f6, %lo(D_800961A8)($at)
    /* 3B384 1500DED4 3C0F0020 */  lui        $t7, (0x200005 >> 16)
    /* 3B388 1500DED8 240E5103 */  addiu      $t6, $zero, 0x5103
    /* 3B38C 1500DEDC 46062602 */  mul.s      $f24, $f4, $f6
    /* 3B390 1500DEE0 35EF0005 */  ori        $t7, $t7, (0x200005 & 0xFFFF)
    /* 3B394 1500DEE4 241800FF */  addiu      $t8, $zero, 0xFF
    /* 3B398 1500DEE8 241900FF */  addiu      $t9, $zero, 0xFF
    /* 3B39C 1500DEEC 24080001 */  addiu      $t0, $zero, 0x1
    /* 3B3A0 1500DEF0 2409012C */  addiu      $t1, $zero, 0x12C
    /* 3B3A4 1500DEF4 240A0001 */  addiu      $t2, $zero, 0x1
    /* 3B3A8 1500DEF8 4618D03C */  c.lt.s     $f26, $f24
    /* 3B3AC 1500DEFC 240B00FF */  addiu      $t3, $zero, 0xFF
    /* 3B3B0 1500DF00 240C0008 */  addiu      $t4, $zero, 0x8
    /* 3B3B4 1500DF04 240D0006 */  addiu      $t5, $zero, 0x6
    /* 3B3B8 1500DF08 4500014C */  bc1f       .L1500E43C
    /* 3B3BC 1500DF0C 3C018009 */   lui       $at, %hi(D_800961AC)
    /* 3B3C0 1500DF10 44800000 */  mtc1       $zero, $f0
    /* 3B3C4 1500DF14 24110003 */  addiu      $s1, $zero, 0x3
    /* 3B3C8 1500DF18 C43E61AC */  lwc1       $f30, %lo(D_800961AC)($at)
    /* 3B3CC 1500DF1C 3C018009 */  lui        $at, %hi(D_800961B0)
    /* 3B3D0 1500DF20 A7AE00A8 */  sh         $t6, 0xA8($sp)
    /* 3B3D4 1500DF24 AFAF00A0 */  sw         $t7, 0xA0($sp)
    /* 3B3D8 1500DF28 A3B800B7 */  sb         $t8, 0xB7($sp)
    /* 3B3DC 1500DF2C A3B900BC */  sb         $t9, 0xBC($sp)
    /* 3B3E0 1500DF30 C43C61B0 */  lwc1       $f28, %lo(D_800961B0)($at)
    /* 3B3E4 1500DF34 240E0017 */  addiu      $t6, $zero, 0x17
    /* 3B3E8 1500DF38 240FFFFF */  addiu      $t7, $zero, -0x1
    /* 3B3EC 1500DF3C 2418FFFF */  addiu      $t8, $zero, -0x1
    /* 3B3F0 1500DF40 2419006C */  addiu      $t9, $zero, 0x6C
    /* 3B3F4 1500DF44 3C018009 */  lui        $at, %hi(D_800961B4)
    /* 3B3F8 1500DF48 AFA000A4 */  sw         $zero, 0xA4($sp)
    /* 3B3FC 1500DF4C AFA000AC */  sw         $zero, 0xAC($sp)
    /* 3B400 1500DF50 AFA000B0 */  sw         $zero, 0xB0($sp)
    /* 3B404 1500DF54 A3A000B5 */  sb         $zero, 0xB5($sp)
    /* 3B408 1500DF58 A3A000B6 */  sb         $zero, 0xB6($sp)
    /* 3B40C 1500DF5C A3A000B9 */  sb         $zero, 0xB9($sp)
    /* 3B410 1500DF60 A3A000BA */  sb         $zero, 0xBA($sp)
    /* 3B414 1500DF64 E7A000DC */  swc1       $f0, 0xDC($sp)
    /* 3B418 1500DF68 E7A000E0 */  swc1       $f0, 0xE0($sp)
    /* 3B41C 1500DF6C E7A000E4 */  swc1       $f0, 0xE4($sp)
    /* 3B420 1500DF70 A7A800C2 */  sh         $t0, 0xC2($sp)
    /* 3B424 1500DF74 E7BA00C4 */  swc1       $f26, 0xC4($sp)
    /* 3B428 1500DF78 A7A900AA */  sh         $t1, 0xAA($sp)
    /* 3B42C 1500DF7C A7AA00BE */  sh         $t2, 0xBE($sp)
    /* 3B430 1500DF80 A7AB00C0 */  sh         $t3, 0xC0($sp)
    /* 3B434 1500DF84 A3AC0100 */  sb         $t4, 0x100($sp)
    /* 3B438 1500DF88 A3AD0101 */  sb         $t5, 0x101($sp)
    /* 3B43C 1500DF8C A3AE0102 */  sb         $t6, 0x102($sp)
    /* 3B440 1500DF90 A3AF0103 */  sb         $t7, 0x103($sp)
    /* 3B444 1500DF94 A3B80104 */  sb         $t8, 0x104($sp)
    /* 3B448 1500DF98 A3A00105 */  sb         $zero, 0x105($sp)
    /* 3B44C 1500DF9C A3A00088 */  sb         $zero, 0x88($sp)
    /* 3B450 1500DFA0 A3A00089 */  sb         $zero, 0x89($sp)
    /* 3B454 1500DFA4 E7BA0094 */  swc1       $f26, 0x94($sp)
    /* 3B458 1500DFA8 E7BA0098 */  swc1       $f26, 0x98($sp)
    /* 3B45C 1500DFAC A3B900BD */  sb         $t9, 0xBD($sp)
    /* 3B460 1500DFB0 C43661B4 */  lwc1       $f22, %lo(D_800961B4)($at)
  .L1500DFB4:
    /* 3B464 1500DFB4 0C0091DC */  jal        osGetCount
    /* 3B468 1500DFB8 00000000 */   nop
    /* 3B46C 1500DFBC 0D42B688 */  jal        func_150ADA20
    /* 3B470 1500DFC0 00408025 */   or        $s0, $v0, $zero
    /* 3B474 1500DFC4 00500019 */  multu      $v0, $s0
    /* 3B478 1500DFC8 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3B47C 1500DFCC 00004012 */  mflo       $t0
    /* 3B480 1500DFD0 3109FFFF */  andi       $t1, $t0, 0xFFFF
    /* 3B484 1500DFD4 44894000 */  mtc1       $t1, $f8
    /* 3B488 1500DFD8 05210004 */  bgez       $t1, .L1500DFEC
    /* 3B48C 1500DFDC 468042A0 */   cvt.s.w   $f10, $f8
    /* 3B490 1500DFE0 44818000 */  mtc1       $at, $f16
    /* 3B494 1500DFE4 00000000 */  nop
    /* 3B498 1500DFE8 46105280 */  add.s      $f10, $f10, $f16
  .L1500DFEC:
    /* 3B49C 1500DFEC 46165482 */  mul.s      $f18, $f10, $f22
    /* 3B4A0 1500DFF0 3C014416 */  lui        $at, (0x44160000 >> 16)
    /* 3B4A4 1500DFF4 44812000 */  mtc1       $at, $f4
    /* 3B4A8 1500DFF8 3C014348 */  lui        $at, (0x43480000 >> 16)
    /* 3B4AC 1500DFFC 44814000 */  mtc1       $at, $f8
    /* 3B4B0 1500E000 46049182 */  mul.s      $f6, $f18, $f4
    /* 3B4B4 1500E004 46083000 */  add.s      $f0, $f6, $f8
    /* 3B4B8 1500E008 E7A000CC */  swc1       $f0, 0xCC($sp)
    /* 3B4BC 1500E00C E7A000C8 */  swc1       $f0, 0xC8($sp)
    /* 3B4C0 1500E010 0C0091DC */  jal        osGetCount
    /* 3B4C4 1500E014 E7A00084 */   swc1      $f0, 0x84($sp)
    /* 3B4C8 1500E018 0D42B688 */  jal        func_150ADA20
    /* 3B4CC 1500E01C 00408025 */   or        $s0, $v0, $zero
    /* 3B4D0 1500E020 00500019 */  multu      $v0, $s0
    /* 3B4D4 1500E024 24010047 */  addiu      $at, $zero, 0x47
    /* 3B4D8 1500E028 00005012 */  mflo       $t2
    /* 3B4DC 1500E02C 00000000 */  nop
    /* 3B4E0 1500E030 00000000 */  nop
    /* 3B4E4 1500E034 0141001B */  divu       $zero, $t2, $at
    /* 3B4E8 1500E038 00005810 */  mfhi       $t3
    /* 3B4EC 1500E03C 256C0032 */  addiu      $t4, $t3, 0x32
    /* 3B4F0 1500E040 0C0091DC */  jal        osGetCount
    /* 3B4F4 1500E044 A3AC00BB */   sb        $t4, 0xBB($sp)
    /* 3B4F8 1500E048 0D42B688 */  jal        func_150ADA20
    /* 3B4FC 1500E04C 00408025 */   or        $s0, $v0, $zero
    /* 3B500 1500E050 00500019 */  multu      $v0, $s0
    /* 3B504 1500E054 00006812 */  mflo       $t5
    /* 3B508 1500E058 00000000 */  nop
    /* 3B50C 1500E05C 00000000 */  nop
    /* 3B510 1500E060 01B1001B */  divu       $zero, $t5, $s1
    /* 3B514 1500E064 00007010 */  mfhi       $t6
    /* 3B518 1500E068 A3AE008A */  sb         $t6, 0x8A($sp)
    /* 3B51C 1500E06C 16200002 */  bnez       $s1, .L1500E078
    /* 3B520 1500E070 00000000 */   nop
    /* 3B524 1500E074 0007000D */  break      7
  .L1500E078:
    /* 3B528 1500E078 0C0091DC */  jal        osGetCount
    /* 3B52C 1500E07C 00000000 */   nop
    /* 3B530 1500E080 0D42B688 */  jal        func_150ADA20
    /* 3B534 1500E084 00408025 */   or        $s0, $v0, $zero
    /* 3B538 1500E088 00500019 */  multu      $v0, $s0
    /* 3B53C 1500E08C 00007812 */  mflo       $t7
    /* 3B540 1500E090 00000000 */  nop
    /* 3B544 1500E094 00000000 */  nop
    /* 3B548 1500E098 01F1001B */  divu       $zero, $t7, $s1
    /* 3B54C 1500E09C 0000C010 */  mfhi       $t8
    /* 3B550 1500E0A0 A3B8008B */  sb         $t8, 0x8B($sp)
    /* 3B554 1500E0A4 16200002 */  bnez       $s1, .L1500E0B0
    /* 3B558 1500E0A8 00000000 */   nop
    /* 3B55C 1500E0AC 0007000D */  break      7
  .L1500E0B0:
    /* 3B560 1500E0B0 0C0091DC */  jal        osGetCount
    /* 3B564 1500E0B4 00000000 */   nop
    /* 3B568 1500E0B8 0D42B688 */  jal        func_150ADA20
    /* 3B56C 1500E0BC 00408025 */   or        $s0, $v0, $zero
    /* 3B570 1500E0C0 00500019 */  multu      $v0, $s0
    /* 3B574 1500E0C4 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3B578 1500E0C8 0000C812 */  mflo       $t9
    /* 3B57C 1500E0CC 3328FFFF */  andi       $t0, $t9, 0xFFFF
    /* 3B580 1500E0D0 44888000 */  mtc1       $t0, $f16
    /* 3B584 1500E0D4 05010004 */  bgez       $t0, .L1500E0E8
    /* 3B588 1500E0D8 468082A0 */   cvt.s.w   $f10, $f16
    /* 3B58C 1500E0DC 44819000 */  mtc1       $at, $f18
    /* 3B590 1500E0E0 00000000 */  nop
    /* 3B594 1500E0E4 46125280 */  add.s      $f10, $f10, $f18
  .L1500E0E8:
    /* 3B598 1500E0E8 46165102 */  mul.s      $f4, $f10, $f22
    /* 3B59C 1500E0EC C7B00084 */  lwc1       $f16, 0x84($sp)
    /* 3B5A0 1500E0F0 461C2182 */  mul.s      $f6, $f4, $f28
    /* 3B5A4 1500E0F4 461E3200 */  add.s      $f8, $f6, $f30
    /* 3B5A8 1500E0F8 46104482 */  mul.s      $f18, $f8, $f16
    /* 3B5AC 1500E0FC 0C0091DC */  jal        osGetCount
    /* 3B5B0 1500E100 E7B2008C */   swc1      $f18, 0x8C($sp)
    /* 3B5B4 1500E104 0D42B688 */  jal        func_150ADA20
    /* 3B5B8 1500E108 00408025 */   or        $s0, $v0, $zero
    /* 3B5BC 1500E10C 00500019 */  multu      $v0, $s0
    /* 3B5C0 1500E110 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3B5C4 1500E114 00004812 */  mflo       $t1
    /* 3B5C8 1500E118 312AFFFF */  andi       $t2, $t1, 0xFFFF
    /* 3B5CC 1500E11C 448A5000 */  mtc1       $t2, $f10
    /* 3B5D0 1500E120 05410004 */  bgez       $t2, .L1500E134
    /* 3B5D4 1500E124 46805120 */   cvt.s.w   $f4, $f10
    /* 3B5D8 1500E128 44813000 */  mtc1       $at, $f6
    /* 3B5DC 1500E12C 00000000 */  nop
    /* 3B5E0 1500E130 46062100 */  add.s      $f4, $f4, $f6
  .L1500E134:
    /* 3B5E4 1500E134 46162202 */  mul.s      $f8, $f4, $f22
    /* 3B5E8 1500E138 C7AA0084 */  lwc1       $f10, 0x84($sp)
    /* 3B5EC 1500E13C 461C4402 */  mul.s      $f16, $f8, $f28
    /* 3B5F0 1500E140 461E8480 */  add.s      $f18, $f16, $f30
    /* 3B5F4 1500E144 460A9182 */  mul.s      $f6, $f18, $f10
    /* 3B5F8 1500E148 0D42B688 */  jal        func_150ADA20
    /* 3B5FC 1500E14C E7A60090 */   swc1      $f6, 0x90($sp)
    /* 3B600 1500E150 304B0001 */  andi       $t3, $v0, 0x1
    /* 3B604 1500E154 11600003 */  beqz       $t3, .L1500E164
    /* 3B608 1500E158 00001825 */   or        $v1, $zero, $zero
    /* 3B60C 1500E15C 10000001 */  b          .L1500E164
    /* 3B610 1500E160 24030040 */   addiu     $v1, $zero, 0x40
  .L1500E164:
    /* 3B614 1500E164 0D42B688 */  jal        func_150ADA20
    /* 3B618 1500E168 AFA30060 */   sw        $v1, 0x60($sp)
    /* 3B61C 1500E16C 304C0001 */  andi       $t4, $v0, 0x1
    /* 3B620 1500E170 11800003 */  beqz       $t4, .L1500E180
    /* 3B624 1500E174 8FA30060 */   lw        $v1, 0x60($sp)
    /* 3B628 1500E178 10000002 */  b          .L1500E184
    /* 3B62C 1500E17C 24100080 */   addiu     $s0, $zero, 0x80
  .L1500E180:
    /* 3B630 1500E180 00008025 */  or         $s0, $zero, $zero
  .L1500E184:
    /* 3B634 1500E184 02037025 */  or         $t6, $s0, $v1
    /* 3B638 1500E188 35CFC000 */  ori        $t7, $t6, 0xC000
    /* 3B63C 1500E18C 3C010002 */  lui        $at, (0x20000 >> 16)
    /* 3B640 1500E190 01E1C025 */  or         $t8, $t7, $at
    /* 3B644 1500E194 3C010080 */  lui        $at, (0x800000 >> 16)
    /* 3B648 1500E198 0301C825 */  or         $t9, $t8, $at
    /* 3B64C 1500E19C 0C0091DC */  jal        osGetCount
    /* 3B650 1500E1A0 AFB900F8 */   sw        $t9, 0xF8($sp)
    /* 3B654 1500E1A4 0D42B688 */  jal        func_150ADA20
    /* 3B658 1500E1A8 00408025 */   or        $s0, $v0, $zero
    /* 3B65C 1500E1AC 00500019 */  multu      $v0, $s0
    /* 3B660 1500E1B0 24010038 */  addiu      $at, $zero, 0x38
    /* 3B664 1500E1B4 00004012 */  mflo       $t0
    /* 3B668 1500E1B8 00000000 */  nop
    /* 3B66C 1500E1BC 00000000 */  nop
    /* 3B670 1500E1C0 0101001B */  divu       $zero, $t0, $at
    /* 3B674 1500E1C4 00004810 */  mfhi       $t1
    /* 3B678 1500E1C8 252A0050 */  addiu      $t2, $t1, 0x50
    /* 3B67C 1500E1CC 0C0091DC */  jal        osGetCount
    /* 3B680 1500E1D0 A3AA00B8 */   sb        $t2, 0xB8($sp)
    /* 3B684 1500E1D4 0D42B688 */  jal        func_150ADA20
    /* 3B688 1500E1D8 00408025 */   or        $s0, $v0, $zero
    /* 3B68C 1500E1DC 00500019 */  multu      $v0, $s0
    /* 3B690 1500E1E0 2401002E */  addiu      $at, $zero, 0x2E
    /* 3B694 1500E1E4 27AE0078 */  addiu      $t6, $sp, 0x78
    /* 3B698 1500E1E8 AFAE0010 */  sw         $t6, 0x10($sp)
    /* 3B69C 1500E1EC 8FA40118 */  lw         $a0, 0x118($sp)
    /* 3B6A0 1500E1F0 27A500D0 */  addiu      $a1, $sp, 0xD0
    /* 3B6A4 1500E1F4 27A600D8 */  addiu      $a2, $sp, 0xD8
    /* 3B6A8 1500E1F8 27A7007C */  addiu      $a3, $sp, 0x7C
    /* 3B6AC 1500E1FC 00005812 */  mflo       $t3
    /* 3B6B0 1500E200 00000000 */  nop
    /* 3B6B4 1500E204 00000000 */  nop
    /* 3B6B8 1500E208 0161001B */  divu       $zero, $t3, $at
    /* 3B6BC 1500E20C 00006010 */  mfhi       $t4
    /* 3B6C0 1500E210 258D00B4 */  addiu      $t5, $t4, 0xB4
    /* 3B6C4 1500E214 0D4020D0 */  jal        func_15008340
    /* 3B6C8 1500E218 A3AD00B4 */   sb        $t5, 0xB4($sp)
    /* 3B6CC 1500E21C C7AE0078 */  lwc1       $f14, 0x78($sp)
    /* 3B6D0 1500E220 C7A4007C */  lwc1       $f4, 0x7C($sp)
    /* 3B6D4 1500E224 0C0091DC */  jal        osGetCount
    /* 3B6D8 1500E228 460E2501 */   sub.s     $f20, $f4, $f14
    /* 3B6DC 1500E22C 0D42B688 */  jal        func_150ADA20
    /* 3B6E0 1500E230 00408025 */   or        $s0, $v0, $zero
    /* 3B6E4 1500E234 00500019 */  multu      $v0, $s0
    /* 3B6E8 1500E238 C7AE0078 */  lwc1       $f14, 0x78($sp)
    /* 3B6EC 1500E23C 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3B6F0 1500E240 00007812 */  mflo       $t7
    /* 3B6F4 1500E244 31F8FFFF */  andi       $t8, $t7, 0xFFFF
    /* 3B6F8 1500E248 44984000 */  mtc1       $t8, $f8
    /* 3B6FC 1500E24C 07010004 */  bgez       $t8, .L1500E260
    /* 3B700 1500E250 46804420 */   cvt.s.w   $f16, $f8
    /* 3B704 1500E254 44819000 */  mtc1       $at, $f18
    /* 3B708 1500E258 00000000 */  nop
    /* 3B70C 1500E25C 46128400 */  add.s      $f16, $f16, $f18
  .L1500E260:
    /* 3B710 1500E260 3C013F00 */  lui        $at, (0x3F000000 >> 16)
    /* 3B714 1500E264 46168282 */  mul.s      $f10, $f16, $f22
    /* 3B718 1500E268 44813000 */  mtc1       $at, $f6
    /* 3B71C 1500E26C 3C013E80 */  lui        $at, (0x3E800000 >> 16)
    /* 3B720 1500E270 44819000 */  mtc1       $at, $f18
    /* 3B724 1500E274 4606A102 */  mul.s      $f4, $f20, $f6
    /* 3B728 1500E278 00000000 */  nop
    /* 3B72C 1500E27C 46045202 */  mul.s      $f8, $f10, $f4
    /* 3B730 1500E280 C7AA007C */  lwc1       $f10, 0x7C($sp)
    /* 3B734 1500E284 4612A402 */  mul.s      $f16, $f20, $f18
    /* 3B738 1500E288 46107180 */  add.s      $f6, $f14, $f16
    /* 3B73C 1500E28C 46064080 */  add.s      $f2, $f8, $f6
    /* 3B740 1500E290 E7A200EC */  swc1       $f2, 0xEC($sp)
    /* 3B744 1500E294 460A1001 */  sub.s      $f0, $f2, $f10
    /* 3B748 1500E298 46000305 */  abs.s      $f12, $f0
    /* 3B74C 1500E29C 460E1001 */  sub.s      $f0, $f2, $f14
    /* 3B750 1500E2A0 E7A200D4 */  swc1       $f2, 0xD4($sp)
    /* 3B754 1500E2A4 46000005 */  abs.s      $f0, $f0
    /* 3B758 1500E2A8 460C003C */  c.lt.s     $f0, $f12
    /* 3B75C 1500E2AC 00000000 */  nop
    /* 3B760 1500E2B0 45020004 */  bc1fl      .L1500E2C4
    /* 3B764 1500E2B4 46006506 */   mov.s     $f20, $f12
    /* 3B768 1500E2B8 10000002 */  b          .L1500E2C4
    /* 3B76C 1500E2BC 46000506 */   mov.s     $f20, $f0
    /* 3B770 1500E2C0 46006506 */  mov.s      $f20, $f12
  .L1500E2C4:
    /* 3B774 1500E2C4 0C0091DC */  jal        osGetCount
    /* 3B778 1500E2C8 00000000 */   nop
    /* 3B77C 1500E2CC 0D42B688 */  jal        func_150ADA20
    /* 3B780 1500E2D0 00408025 */   or        $s0, $v0, $zero
    /* 3B784 1500E2D4 00500019 */  multu      $v0, $s0
    /* 3B788 1500E2D8 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3B78C 1500E2DC 0000C812 */  mflo       $t9
    /* 3B790 1500E2E0 3328FFFF */  andi       $t0, $t9, 0xFFFF
    /* 3B794 1500E2E4 44882000 */  mtc1       $t0, $f4
    /* 3B798 1500E2E8 05010004 */  bgez       $t0, .L1500E2FC
    /* 3B79C 1500E2EC 468024A0 */   cvt.s.w   $f18, $f4
    /* 3B7A0 1500E2F0 44818000 */  mtc1       $at, $f16
    /* 3B7A4 1500E2F4 00000000 */  nop
    /* 3B7A8 1500E2F8 46109480 */  add.s      $f18, $f18, $f16
  .L1500E2FC:
    /* 3B7AC 1500E2FC 46169202 */  mul.s      $f8, $f18, $f22
    /* 3B7B0 1500E300 3C013F40 */  lui        $at, (0x3F400000 >> 16)
    /* 3B7B4 1500E304 44813000 */  mtc1       $at, $f6
    /* 3B7B8 1500E308 3C013E80 */  lui        $at, (0x3E800000 >> 16)
    /* 3B7BC 1500E30C 44812000 */  mtc1       $at, $f4
    /* 3B7C0 1500E310 46064282 */  mul.s      $f10, $f8, $f6
    /* 3B7C4 1500E314 46045400 */  add.s      $f16, $f10, $f4
    /* 3B7C8 1500E318 46148482 */  mul.s      $f18, $f16, $f20
    /* 3B7CC 1500E31C E7B200F4 */  swc1       $f18, 0xF4($sp)
    /* 3B7D0 1500E320 0C0091DC */  jal        osGetCount
    /* 3B7D4 1500E324 00000000 */   nop
    /* 3B7D8 1500E328 0D42B688 */  jal        func_150ADA20
    /* 3B7DC 1500E32C 00408025 */   or        $s0, $v0, $zero
    /* 3B7E0 1500E330 00500019 */  multu      $v0, $s0
    /* 3B7E4 1500E334 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3B7E8 1500E338 00004812 */  mflo       $t1
    /* 3B7EC 1500E33C 312AFFFF */  andi       $t2, $t1, 0xFFFF
    /* 3B7F0 1500E340 448A4000 */  mtc1       $t2, $f8
    /* 3B7F4 1500E344 05410004 */  bgez       $t2, .L1500E358
    /* 3B7F8 1500E348 468041A0 */   cvt.s.w   $f6, $f8
    /* 3B7FC 1500E34C 44815000 */  mtc1       $at, $f10
    /* 3B800 1500E350 00000000 */  nop
    /* 3B804 1500E354 460A3180 */  add.s      $f6, $f6, $f10
  .L1500E358:
    /* 3B808 1500E358 46163002 */  mul.s      $f0, $f6, $f22
    /* 3B80C 1500E35C 3C018009 */  lui        $at, %hi(D_800961B8)
    /* 3B810 1500E360 C43061B8 */  lwc1       $f16, %lo(D_800961B8)($at)
    /* 3B814 1500E364 46000100 */  add.s      $f4, $f0, $f0
    /* 3B818 1500E368 46102482 */  mul.s      $f18, $f4, $f16
    /* 3B81C 1500E36C 0C0091DC */  jal        osGetCount
    /* 3B820 1500E370 E7B200E8 */   swc1      $f18, 0xE8($sp)
    /* 3B824 1500E374 0D42B688 */  jal        func_150ADA20
    /* 3B828 1500E378 00408025 */   or        $s0, $v0, $zero
    /* 3B82C 1500E37C 00500019 */  multu      $v0, $s0
    /* 3B830 1500E380 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3B834 1500E384 00005812 */  mflo       $t3
    /* 3B838 1500E388 316CFFFF */  andi       $t4, $t3, 0xFFFF
    /* 3B83C 1500E38C 448C4000 */  mtc1       $t4, $f8
    /* 3B840 1500E390 05810004 */  bgez       $t4, .L1500E3A4
    /* 3B844 1500E394 468042A0 */   cvt.s.w   $f10, $f8
    /* 3B848 1500E398 44813000 */  mtc1       $at, $f6
    /* 3B84C 1500E39C 00000000 */  nop
    /* 3B850 1500E3A0 46065280 */  add.s      $f10, $f10, $f6
  .L1500E3A4:
    /* 3B854 1500E3A4 46165102 */  mul.s      $f4, $f10, $f22
    /* 3B858 1500E3A8 3C018009 */  lui        $at, %hi(D_800961BC)
    /* 3B85C 1500E3AC C43061BC */  lwc1       $f16, %lo(D_800961BC)($at)
    /* 3B860 1500E3B0 3C018009 */  lui        $at, %hi(D_800961C0)
    /* 3B864 1500E3B4 C42861C0 */  lwc1       $f8, %lo(D_800961C0)($at)
    /* 3B868 1500E3B8 00002025 */  or         $a0, $zero, $zero
    /* 3B86C 1500E3BC 46102482 */  mul.s      $f18, $f4, $f16
    /* 3B870 1500E3C0 46089180 */  add.s      $f6, $f18, $f8
    /* 3B874 1500E3C4 0D443E00 */  jal        func_1510F800
    /* 3B878 1500E3C8 E7A600F0 */   swc1      $f6, 0xF0($sp)
    /* 3B87C 1500E3CC C7AA00D0 */  lwc1       $f10, 0xD0($sp)
    /* 3B880 1500E3D0 C7B000D8 */  lwc1       $f16, 0xD8($sp)
    /* 3B884 1500E3D4 4600510D */  trunc.w.s  $f4, $f10
    /* 3B888 1500E3D8 4600848D */  trunc.w.s  $f18, $f16
    /* 3B88C 1500E3DC 44042000 */  mfc1       $a0, $f4
    /* 3B890 1500E3E0 44059000 */  mfc1       $a1, $f18
    /* 3B894 1500E3E4 0D443F48 */  jal        func_1510FD20
    /* 3B898 1500E3E8 00000000 */   nop
    /* 3B89C 1500E3EC 240F00FF */  addiu      $t7, $zero, 0xFF
    /* 3B8A0 1500E3F0 24180001 */  addiu      $t8, $zero, 0x1
    /* 3B8A4 1500E3F4 AFA200FC */  sw         $v0, 0xFC($sp)
    /* 3B8A8 1500E3F8 AFB80014 */  sw         $t8, 0x14($sp)
    /* 3B8AC 1500E3FC AFAF0010 */  sw         $t7, 0x10($sp)
    /* 3B8B0 1500E400 27A400A0 */  addiu      $a0, $sp, 0xA0
    /* 3B8B4 1500E404 24050002 */  addiu      $a1, $zero, 0x2
    /* 3B8B8 1500E408 00003025 */  or         $a2, $zero, $zero
    /* 3B8BC 1500E40C 0D44C0A0 */  jal        func_15130280
    /* 3B8C0 1500E410 2407001C */   addiu     $a3, $zero, 0x1C
    /* 3B8C4 1500E414 10400004 */  beqz       $v0, .L1500E428
    /* 3B8C8 1500E418 244400A8 */   addiu     $a0, $v0, 0xA8
    /* 3B8CC 1500E41C 27A50084 */  addiu      $a1, $sp, 0x84
    /* 3B8D0 1500E420 0C008BB0 */  jal        memcpy
    /* 3B8D4 1500E424 2406001C */   addiu     $a2, $zero, 0x1C
  .L1500E428:
    /* 3B8D8 1500E428 461AC601 */  sub.s      $f24, $f24, $f26
    /* 3B8DC 1500E42C 4618D03C */  c.lt.s     $f26, $f24
    /* 3B8E0 1500E430 00000000 */  nop
    /* 3B8E4 1500E434 4501FEDF */  bc1t       .L1500DFB4
    /* 3B8E8 1500E438 00000000 */   nop
  .L1500E43C:
    /* 3B8EC 1500E43C 8FBF0054 */  lw         $ra, 0x54($sp)
    /* 3B8F0 1500E440 D7B40018 */  ldc1       $f20, 0x18($sp)
    /* 3B8F4 1500E444 D7B60020 */  ldc1       $f22, 0x20($sp)
    /* 3B8F8 1500E448 D7B80028 */  ldc1       $f24, 0x28($sp)
    /* 3B8FC 1500E44C D7BA0030 */  ldc1       $f26, 0x30($sp)
    /* 3B900 1500E450 D7BC0038 */  ldc1       $f28, 0x38($sp)
    /* 3B904 1500E454 D7BE0040 */  ldc1       $f30, 0x40($sp)
    /* 3B908 1500E458 8FB0004C */  lw         $s0, 0x4C($sp)
    /* 3B90C 1500E45C 8FB10050 */  lw         $s1, 0x50($sp)
    /* 3B910 1500E460 03E00008 */  jr         $ra
    /* 3B914 1500E464 27BD0118 */   addiu     $sp, $sp, 0x118
endlabel func_1500DE88
    /* 3B918 1500E468 00000000 */  nop
    /* 3B91C 1500E46C 00000000 */  nop
