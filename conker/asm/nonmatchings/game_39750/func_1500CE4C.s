nonmatching func_1500CE4C, 0x560

glabel func_1500CE4C
    /* 3A2FC 1500CE4C 27BDFEE8 */  addiu      $sp, $sp, -0x118
    /* 3A300 1500CE50 F7B40030 */  sdc1       $f20, 0x30($sp)
    /* 3A304 1500CE54 AFB30070 */  sw         $s3, 0x70($sp)
    /* 3A308 1500CE58 4485A000 */  mtc1       $a1, $f20
    /* 3A30C 1500CE5C 00809825 */  or         $s3, $a0, $zero
    /* 3A310 1500CE60 AFBF0074 */  sw         $ra, 0x74($sp)
    /* 3A314 1500CE64 AFB2006C */  sw         $s2, 0x6C($sp)
    /* 3A318 1500CE68 AFB10068 */  sw         $s1, 0x68($sp)
    /* 3A31C 1500CE6C AFB00064 */  sw         $s0, 0x64($sp)
    /* 3A320 1500CE70 F7BE0058 */  sdc1       $f30, 0x58($sp)
    /* 3A324 1500CE74 F7BC0050 */  sdc1       $f28, 0x50($sp)
    /* 3A328 1500CE78 F7BA0048 */  sdc1       $f26, 0x48($sp)
    /* 3A32C 1500CE7C F7B80040 */  sdc1       $f24, 0x40($sp)
    /* 3A330 1500CE80 F7B60038 */  sdc1       $f22, 0x38($sp)
    /* 3A334 1500CE84 0D45118B */  jal        func_1514462C
    /* 3A338 1500CE88 02602025 */   or        $a0, $s3, $zero
    /* 3A33C 1500CE8C 46140102 */  mul.s      $f4, $f0, $f20
    /* 3A340 1500CE90 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 3A344 1500CE94 4481F000 */  mtc1       $at, $f30
    /* 3A348 1500CE98 3C018009 */  lui        $at, %hi(D_80096158)
    /* 3A34C 1500CE9C C4266158 */  lwc1       $f6, %lo(D_80096158)($at)
    /* 3A350 1500CEA0 240E0057 */  addiu      $t6, $zero, 0x57
    /* 3A354 1500CEA4 240F3B03 */  addiu      $t7, $zero, 0x3B03
    /* 3A358 1500CEA8 46062682 */  mul.s      $f26, $f4, $f6
    /* 3A35C 1500CEAC 2418012C */  addiu      $t8, $zero, 0x12C
    /* 3A360 1500CEB0 241900FF */  addiu      $t9, $zero, 0xFF
    /* 3A364 1500CEB4 3C08037C */  lui        $t0, (0x37C0000 >> 16)
    /* 3A368 1500CEB8 240900FF */  addiu      $t1, $zero, 0xFF
    /* 3A36C 1500CEBC 240A0006 */  addiu      $t2, $zero, 0x6
    /* 3A370 1500CEC0 240B00FF */  addiu      $t3, $zero, 0xFF
    /* 3A374 1500CEC4 461AF03C */  c.lt.s     $f30, $f26
    /* 3A378 1500CEC8 240C00FF */  addiu      $t4, $zero, 0xFF
    /* 3A37C 1500CECC 240D00FF */  addiu      $t5, $zero, 0xFF
    /* 3A380 1500CED0 3C013E80 */  lui        $at, (0x3E800000 >> 16)
    /* 3A384 1500CED4 45000128 */  bc1f       .L1500D378
    /* 3A388 1500CED8 2412009C */   addiu     $s2, $zero, 0x9C
    /* 3A38C 1500CEDC 44800000 */  mtc1       $zero, $f0
    /* 3A390 1500CEE0 27B10094 */  addiu      $s1, $sp, 0x94
    /* 3A394 1500CEE4 4481E000 */  mtc1       $at, $f28
    /* 3A398 1500CEE8 3C0143B4 */  lui        $at, (0x43B40000 >> 16)
    /* 3A39C 1500CEEC 4481C000 */  mtc1       $at, $f24
    /* 3A3A0 1500CEF0 3C018009 */  lui        $at, %hi(D_8009615C)
    /* 3A3A4 1500CEF4 A3AE00B8 */  sb         $t6, 0xB8($sp)
    /* 3A3A8 1500CEF8 A3A000B9 */  sb         $zero, 0xB9($sp)
    /* 3A3AC 1500CEFC A7AF00BA */  sh         $t7, 0xBA($sp)
    /* 3A3B0 1500CF00 A7B800BC */  sh         $t8, 0xBC($sp)
    /* 3A3B4 1500CF04 AFA000C0 */  sw         $zero, 0xC0($sp)
    /* 3A3B8 1500CF08 AFA000C4 */  sw         $zero, 0xC4($sp)
    /* 3A3BC 1500CF0C A3B900CB */  sb         $t9, 0xCB($sp)
    /* 3A3C0 1500CF10 E7A000EC */  swc1       $f0, 0xEC($sp)
    /* 3A3C4 1500CF14 E7A000F0 */  swc1       $f0, 0xF0($sp)
    /* 3A3C8 1500CF18 E7A000F4 */  swc1       $f0, 0xF4($sp)
    /* 3A3CC 1500CF1C AFA800F8 */  sw         $t0, 0xF8($sp)
    /* 3A3D0 1500CF20 A3A900FD */  sb         $t1, 0xFD($sp)
    /* 3A3D4 1500CF24 A3A000FE */  sb         $zero, 0xFE($sp)
    /* 3A3D8 1500CF28 A3AA00FF */  sb         $t2, 0xFF($sp)
    /* 3A3DC 1500CF2C E7A000B0 */  swc1       $f0, 0xB0($sp)
    /* 3A3E0 1500CF30 A3AB00C8 */  sb         $t3, 0xC8($sp)
    /* 3A3E4 1500CF34 A3AC00C9 */  sb         $t4, 0xC9($sp)
    /* 3A3E8 1500CF38 A3AD00CA */  sb         $t5, 0xCA($sp)
    /* 3A3EC 1500CF3C C436615C */  lwc1       $f22, %lo(D_8009615C)($at)
  .L1500CF40:
    /* 3A3F0 1500CF40 0C0091DC */  jal        osGetCount
    /* 3A3F4 1500CF44 00000000 */   nop
    /* 3A3F8 1500CF48 0D42B688 */  jal        func_150ADA20
    /* 3A3FC 1500CF4C 00408025 */   or        $s0, $v0, $zero
    /* 3A400 1500CF50 00500019 */  multu      $v0, $s0
    /* 3A404 1500CF54 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3A408 1500CF58 00007012 */  mflo       $t6
    /* 3A40C 1500CF5C 31CFFFFF */  andi       $t7, $t6, 0xFFFF
    /* 3A410 1500CF60 448F4000 */  mtc1       $t7, $f8
    /* 3A414 1500CF64 05E10004 */  bgez       $t7, .L1500CF78
    /* 3A418 1500CF68 468042A0 */   cvt.s.w   $f10, $f8
    /* 3A41C 1500CF6C 44818000 */  mtc1       $at, $f16
    /* 3A420 1500CF70 00000000 */  nop
    /* 3A424 1500CF74 46105280 */  add.s      $f10, $f10, $f16
  .L1500CF78:
    /* 3A428 1500CF78 46165482 */  mul.s      $f18, $f10, $f22
    /* 3A42C 1500CF7C 3C014140 */  lui        $at, (0x41400000 >> 16)
    /* 3A430 1500CF80 44812000 */  mtc1       $at, $f4
    /* 3A434 1500CF84 3C014120 */  lui        $at, (0x41200000 >> 16)
    /* 3A438 1500CF88 44814000 */  mtc1       $at, $f8
    /* 3A43C 1500CF8C 02602025 */  or         $a0, $s3, $zero
    /* 3A440 1500CF90 27A500D4 */  addiu      $a1, $sp, 0xD4
    /* 3A444 1500CF94 46049182 */  mul.s      $f6, $f18, $f4
    /* 3A448 1500CF98 27A600DC */  addiu      $a2, $sp, 0xDC
    /* 3A44C 1500CF9C 27A70098 */  addiu      $a3, $sp, 0x98
    /* 3A450 1500CFA0 AFB10010 */  sw         $s1, 0x10($sp)
    /* 3A454 1500CFA4 46083000 */  add.s      $f0, $f6, $f8
    /* 3A458 1500CFA8 E7A000CC */  swc1       $f0, 0xCC($sp)
    /* 3A45C 1500CFAC 0D4020D0 */  jal        func_15008340
    /* 3A460 1500CFB0 E7A000D0 */   swc1      $f0, 0xD0($sp)
    /* 3A464 1500CFB4 C7AE0094 */  lwc1       $f14, 0x94($sp)
    /* 3A468 1500CFB8 C7B00098 */  lwc1       $f16, 0x98($sp)
    /* 3A46C 1500CFBC 0C0091DC */  jal        osGetCount
    /* 3A470 1500CFC0 460E8501 */   sub.s     $f20, $f16, $f14
    /* 3A474 1500CFC4 0D42B688 */  jal        func_150ADA20
    /* 3A478 1500CFC8 00408025 */   or        $s0, $v0, $zero
    /* 3A47C 1500CFCC 00500019 */  multu      $v0, $s0
    /* 3A480 1500CFD0 C7AE0094 */  lwc1       $f14, 0x94($sp)
    /* 3A484 1500CFD4 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3A488 1500CFD8 0000C012 */  mflo       $t8
    /* 3A48C 1500CFDC 3319FFFF */  andi       $t9, $t8, 0xFFFF
    /* 3A490 1500CFE0 44995000 */  mtc1       $t9, $f10
    /* 3A494 1500CFE4 07210004 */  bgez       $t9, .L1500CFF8
    /* 3A498 1500CFE8 468054A0 */   cvt.s.w   $f18, $f10
    /* 3A49C 1500CFEC 44812000 */  mtc1       $at, $f4
    /* 3A4A0 1500CFF0 00000000 */  nop
    /* 3A4A4 1500CFF4 46049480 */  add.s      $f18, $f18, $f4
  .L1500CFF8:
    /* 3A4A8 1500CFF8 3C013F00 */  lui        $at, (0x3F000000 >> 16)
    /* 3A4AC 1500CFFC 46169182 */  mul.s      $f6, $f18, $f22
    /* 3A4B0 1500D000 44814000 */  mtc1       $at, $f8
    /* 3A4B4 1500D004 00000000 */  nop
    /* 3A4B8 1500D008 4608A402 */  mul.s      $f16, $f20, $f8
    /* 3A4BC 1500D00C C7A80098 */  lwc1       $f8, 0x98($sp)
    /* 3A4C0 1500D010 46103282 */  mul.s      $f10, $f6, $f16
    /* 3A4C4 1500D014 00000000 */  nop
    /* 3A4C8 1500D018 461CA102 */  mul.s      $f4, $f20, $f28
    /* 3A4CC 1500D01C 46047480 */  add.s      $f18, $f14, $f4
    /* 3A4D0 1500D020 46125080 */  add.s      $f2, $f10, $f18
    /* 3A4D4 1500D024 E7A2009C */  swc1       $f2, 0x9C($sp)
    /* 3A4D8 1500D028 46081001 */  sub.s      $f0, $f2, $f8
    /* 3A4DC 1500D02C 46000305 */  abs.s      $f12, $f0
    /* 3A4E0 1500D030 460E1001 */  sub.s      $f0, $f2, $f14
    /* 3A4E4 1500D034 E7A200D8 */  swc1       $f2, 0xD8($sp)
    /* 3A4E8 1500D038 46000005 */  abs.s      $f0, $f0
    /* 3A4EC 1500D03C 460C003C */  c.lt.s     $f0, $f12
    /* 3A4F0 1500D040 00000000 */  nop
    /* 3A4F4 1500D044 45020004 */  bc1fl      .L1500D058
    /* 3A4F8 1500D048 46006506 */   mov.s     $f20, $f12
    /* 3A4FC 1500D04C 10000002 */  b          .L1500D058
    /* 3A500 1500D050 46000506 */   mov.s     $f20, $f0
    /* 3A504 1500D054 46006506 */  mov.s      $f20, $f12
  .L1500D058:
    /* 3A508 1500D058 0C0091DC */  jal        osGetCount
    /* 3A50C 1500D05C 00000000 */   nop
    /* 3A510 1500D060 0D42B688 */  jal        func_150ADA20
    /* 3A514 1500D064 00408025 */   or        $s0, $v0, $zero
    /* 3A518 1500D068 00500019 */  multu      $v0, $s0
    /* 3A51C 1500D06C 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3A520 1500D070 00004012 */  mflo       $t0
    /* 3A524 1500D074 3109FFFF */  andi       $t1, $t0, 0xFFFF
    /* 3A528 1500D078 44893000 */  mtc1       $t1, $f6
    /* 3A52C 1500D07C 05210004 */  bgez       $t1, .L1500D090
    /* 3A530 1500D080 46803420 */   cvt.s.w   $f16, $f6
    /* 3A534 1500D084 44812000 */  mtc1       $at, $f4
    /* 3A538 1500D088 00000000 */  nop
    /* 3A53C 1500D08C 46048400 */  add.s      $f16, $f16, $f4
  .L1500D090:
    /* 3A540 1500D090 46168282 */  mul.s      $f10, $f16, $f22
    /* 3A544 1500D094 3C013F40 */  lui        $at, (0x3F400000 >> 16)
    /* 3A548 1500D098 44819000 */  mtc1       $at, $f18
    /* 3A54C 1500D09C 00000000 */  nop
    /* 3A550 1500D0A0 46125202 */  mul.s      $f8, $f10, $f18
    /* 3A554 1500D0A4 461C4180 */  add.s      $f6, $f8, $f28
    /* 3A558 1500D0A8 46143102 */  mul.s      $f4, $f6, $f20
    /* 3A55C 1500D0AC E7A400A0 */  swc1       $f4, 0xA0($sp)
    /* 3A560 1500D0B0 0C0091DC */  jal        osGetCount
    /* 3A564 1500D0B4 00000000 */   nop
    /* 3A568 1500D0B8 0D42B688 */  jal        func_150ADA20
    /* 3A56C 1500D0BC 00408025 */   or        $s0, $v0, $zero
    /* 3A570 1500D0C0 00500019 */  multu      $v0, $s0
    /* 3A574 1500D0C4 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3A578 1500D0C8 00005012 */  mflo       $t2
    /* 3A57C 1500D0CC 314BFFFF */  andi       $t3, $t2, 0xFFFF
    /* 3A580 1500D0D0 448B8000 */  mtc1       $t3, $f16
    /* 3A584 1500D0D4 05610004 */  bgez       $t3, .L1500D0E8
    /* 3A588 1500D0D8 468082A0 */   cvt.s.w   $f10, $f16
    /* 3A58C 1500D0DC 44819000 */  mtc1       $at, $f18
    /* 3A590 1500D0E0 00000000 */  nop
    /* 3A594 1500D0E4 46125280 */  add.s      $f10, $f10, $f18
  .L1500D0E8:
    /* 3A598 1500D0E8 46165002 */  mul.s      $f0, $f10, $f22
    /* 3A59C 1500D0EC 3C018009 */  lui        $at, %hi(D_80096160)
    /* 3A5A0 1500D0F0 C4266160 */  lwc1       $f6, %lo(D_80096160)($at)
    /* 3A5A4 1500D0F4 46000200 */  add.s      $f8, $f0, $f0
    /* 3A5A8 1500D0F8 46064102 */  mul.s      $f4, $f8, $f6
    /* 3A5AC 1500D0FC 0C0091DC */  jal        osGetCount
    /* 3A5B0 1500D100 E7A400A4 */   swc1      $f4, 0xA4($sp)
    /* 3A5B4 1500D104 0D42B688 */  jal        func_150ADA20
    /* 3A5B8 1500D108 00408025 */   or        $s0, $v0, $zero
    /* 3A5BC 1500D10C 00500019 */  multu      $v0, $s0
    /* 3A5C0 1500D110 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3A5C4 1500D114 00006012 */  mflo       $t4
    /* 3A5C8 1500D118 318DFFFF */  andi       $t5, $t4, 0xFFFF
    /* 3A5CC 1500D11C 448D8000 */  mtc1       $t5, $f16
    /* 3A5D0 1500D120 05A10004 */  bgez       $t5, .L1500D134
    /* 3A5D4 1500D124 468084A0 */   cvt.s.w   $f18, $f16
    /* 3A5D8 1500D128 44815000 */  mtc1       $at, $f10
    /* 3A5DC 1500D12C 00000000 */  nop
    /* 3A5E0 1500D130 460A9480 */  add.s      $f18, $f18, $f10
  .L1500D134:
    /* 3A5E4 1500D134 46169202 */  mul.s      $f8, $f18, $f22
    /* 3A5E8 1500D138 3C018009 */  lui        $at, %hi(D_80096164)
    /* 3A5EC 1500D13C C4266164 */  lwc1       $f6, %lo(D_80096164)($at)
    /* 3A5F0 1500D140 3C018009 */  lui        $at, %hi(D_80096168)
    /* 3A5F4 1500D144 C4306168 */  lwc1       $f16, %lo(D_80096168)($at)
    /* 3A5F8 1500D148 46064102 */  mul.s      $f4, $f8, $f6
    /* 3A5FC 1500D14C 46102280 */  add.s      $f10, $f4, $f16
    /* 3A600 1500D150 0C0091DC */  jal        osGetCount
    /* 3A604 1500D154 E7AA00A8 */   swc1      $f10, 0xA8($sp)
    /* 3A608 1500D158 0D42B688 */  jal        func_150ADA20
    /* 3A60C 1500D15C 00408025 */   or        $s0, $v0, $zero
    /* 3A610 1500D160 00500019 */  multu      $v0, $s0
    /* 3A614 1500D164 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3A618 1500D168 00007012 */  mflo       $t6
    /* 3A61C 1500D16C 31CFFFFF */  andi       $t7, $t6, 0xFFFF
    /* 3A620 1500D170 448F9000 */  mtc1       $t7, $f18
    /* 3A624 1500D174 05E10004 */  bgez       $t7, .L1500D188
    /* 3A628 1500D178 46809220 */   cvt.s.w   $f8, $f18
    /* 3A62C 1500D17C 44813000 */  mtc1       $at, $f6
    /* 3A630 1500D180 00000000 */  nop
    /* 3A634 1500D184 46064200 */  add.s      $f8, $f8, $f6
  .L1500D188:
    /* 3A638 1500D188 46164102 */  mul.s      $f4, $f8, $f22
    /* 3A63C 1500D18C 0C0091DC */  jal        osGetCount
    /* 3A640 1500D190 E7A400AC */   swc1      $f4, 0xAC($sp)
    /* 3A644 1500D194 0D42B688 */  jal        func_150ADA20
    /* 3A648 1500D198 00408025 */   or        $s0, $v0, $zero
    /* 3A64C 1500D19C 00500019 */  multu      $v0, $s0
    /* 3A650 1500D1A0 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3A654 1500D1A4 0000C012 */  mflo       $t8
    /* 3A658 1500D1A8 3319FFFF */  andi       $t9, $t8, 0xFFFF
    /* 3A65C 1500D1AC 44998000 */  mtc1       $t9, $f16
    /* 3A660 1500D1B0 07210004 */  bgez       $t9, .L1500D1C4
    /* 3A664 1500D1B4 468082A0 */   cvt.s.w   $f10, $f16
    /* 3A668 1500D1B8 44819000 */  mtc1       $at, $f18
    /* 3A66C 1500D1BC 00000000 */  nop
    /* 3A670 1500D1C0 46125280 */  add.s      $f10, $f10, $f18
  .L1500D1C4:
    /* 3A674 1500D1C4 46165182 */  mul.s      $f6, $f10, $f22
    /* 3A678 1500D1C8 0C0091DC */  jal        osGetCount
    /* 3A67C 1500D1CC E7A600B4 */   swc1      $f6, 0xB4($sp)
    /* 3A680 1500D1D0 0D42B688 */  jal        func_150ADA20
    /* 3A684 1500D1D4 00408025 */   or        $s0, $v0, $zero
    /* 3A688 1500D1D8 00500019 */  multu      $v0, $s0
    /* 3A68C 1500D1DC 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3A690 1500D1E0 00004012 */  mflo       $t0
    /* 3A694 1500D1E4 3109FFFF */  andi       $t1, $t0, 0xFFFF
    /* 3A698 1500D1E8 44894000 */  mtc1       $t1, $f8
    /* 3A69C 1500D1EC 05210004 */  bgez       $t1, .L1500D200
    /* 3A6A0 1500D1F0 46804120 */   cvt.s.w   $f4, $f8
    /* 3A6A4 1500D1F4 44818000 */  mtc1       $at, $f16
    /* 3A6A8 1500D1F8 00000000 */  nop
    /* 3A6AC 1500D1FC 46102100 */  add.s      $f4, $f4, $f16
  .L1500D200:
    /* 3A6B0 1500D200 46162482 */  mul.s      $f18, $f4, $f22
    /* 3A6B4 1500D204 00000000 */  nop
    /* 3A6B8 1500D208 46189282 */  mul.s      $f10, $f18, $f24
    /* 3A6BC 1500D20C 0C0091DC */  jal        osGetCount
    /* 3A6C0 1500D210 E7AA00E0 */   swc1      $f10, 0xE0($sp)
    /* 3A6C4 1500D214 0D42B688 */  jal        func_150ADA20
    /* 3A6C8 1500D218 00408025 */   or        $s0, $v0, $zero
    /* 3A6CC 1500D21C 00500019 */  multu      $v0, $s0
    /* 3A6D0 1500D220 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3A6D4 1500D224 00005012 */  mflo       $t2
    /* 3A6D8 1500D228 314BFFFF */  andi       $t3, $t2, 0xFFFF
    /* 3A6DC 1500D22C 448B3000 */  mtc1       $t3, $f6
    /* 3A6E0 1500D230 05610004 */  bgez       $t3, .L1500D244
    /* 3A6E4 1500D234 46803220 */   cvt.s.w   $f8, $f6
    /* 3A6E8 1500D238 44818000 */  mtc1       $at, $f16
    /* 3A6EC 1500D23C 00000000 */  nop
    /* 3A6F0 1500D240 46104200 */  add.s      $f8, $f8, $f16
  .L1500D244:
    /* 3A6F4 1500D244 46164102 */  mul.s      $f4, $f8, $f22
    /* 3A6F8 1500D248 00000000 */  nop
    /* 3A6FC 1500D24C 46182482 */  mul.s      $f18, $f4, $f24
    /* 3A700 1500D250 0C0091DC */  jal        osGetCount
    /* 3A704 1500D254 E7B200E4 */   swc1      $f18, 0xE4($sp)
    /* 3A708 1500D258 0D42B688 */  jal        func_150ADA20
    /* 3A70C 1500D25C 00408025 */   or        $s0, $v0, $zero
    /* 3A710 1500D260 00500019 */  multu      $v0, $s0
    /* 3A714 1500D264 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3A718 1500D268 00006012 */  mflo       $t4
    /* 3A71C 1500D26C 318DFFFF */  andi       $t5, $t4, 0xFFFF
    /* 3A720 1500D270 448D5000 */  mtc1       $t5, $f10
    /* 3A724 1500D274 05A10004 */  bgez       $t5, .L1500D288
    /* 3A728 1500D278 468051A0 */   cvt.s.w   $f6, $f10
    /* 3A72C 1500D27C 44818000 */  mtc1       $at, $f16
    /* 3A730 1500D280 00000000 */  nop
    /* 3A734 1500D284 46103180 */  add.s      $f6, $f6, $f16
  .L1500D288:
    /* 3A738 1500D288 46163202 */  mul.s      $f8, $f6, $f22
    /* 3A73C 1500D28C 00000000 */  nop
    /* 3A740 1500D290 46184102 */  mul.s      $f4, $f8, $f24
    /* 3A744 1500D294 0C0091DC */  jal        osGetCount
    /* 3A748 1500D298 E7A400E8 */   swc1      $f4, 0xE8($sp)
    /* 3A74C 1500D29C 0D42B688 */  jal        func_150ADA20
    /* 3A750 1500D2A0 00408025 */   or        $s0, $v0, $zero
    /* 3A754 1500D2A4 00500019 */  multu      $v0, $s0
    /* 3A758 1500D2A8 00002025 */  or         $a0, $zero, $zero
    /* 3A75C 1500D2AC 00007012 */  mflo       $t6
    /* 3A760 1500D2B0 00000000 */  nop
    /* 3A764 1500D2B4 00000000 */  nop
    /* 3A768 1500D2B8 01D2001B */  divu       $zero, $t6, $s2
    /* 3A76C 1500D2BC 00007810 */  mfhi       $t7
    /* 3A770 1500D2C0 25F80064 */  addiu      $t8, $t7, 0x64
    /* 3A774 1500D2C4 16400002 */  bnez       $s2, .L1500D2D0
    /* 3A778 1500D2C8 00000000 */   nop
    /* 3A77C 1500D2CC 0007000D */  break      7
  .L1500D2D0:
    /* 3A780 1500D2D0 A3B800FC */  sb         $t8, 0xFC($sp)
    /* 3A784 1500D2D4 0D443E00 */  jal        func_1510F800
    /* 3A788 1500D2D8 00000000 */   nop
    /* 3A78C 1500D2DC C7B200D4 */  lwc1       $f18, 0xD4($sp)
    /* 3A790 1500D2E0 C7B000DC */  lwc1       $f16, 0xDC($sp)
    /* 3A794 1500D2E4 4600928D */  trunc.w.s  $f10, $f18
    /* 3A798 1500D2E8 4600818D */  trunc.w.s  $f6, $f16
    /* 3A79C 1500D2EC 44045000 */  mfc1       $a0, $f10
    /* 3A7A0 1500D2F0 44053000 */  mfc1       $a1, $f6
    /* 3A7A4 1500D2F4 0D443F48 */  jal        func_1510FD20
    /* 3A7A8 1500D2F8 00000000 */   nop
    /* 3A7AC 1500D2FC 3C05800A */  lui        $a1, %hi(D_800A4AA0)
    /* 3A7B0 1500D300 2409001E */  addiu      $t1, $zero, 0x1E
    /* 3A7B4 1500D304 240A0003 */  addiu      $t2, $zero, 0x3
    /* 3A7B8 1500D308 240B00FF */  addiu      $t3, $zero, 0xFF
    /* 3A7BC 1500D30C 240C001C */  addiu      $t4, $zero, 0x1C
    /* 3A7C0 1500D310 240D00FF */  addiu      $t5, $zero, 0xFF
    /* 3A7C4 1500D314 240E0001 */  addiu      $t6, $zero, 0x1
    /* 3A7C8 1500D318 AFA20100 */  sw         $v0, 0x100($sp)
    /* 3A7CC 1500D31C AFAE002C */  sw         $t6, 0x2C($sp)
    /* 3A7D0 1500D320 AFAD0028 */  sw         $t5, 0x28($sp)
    /* 3A7D4 1500D324 AFAC0024 */  sw         $t4, 0x24($sp)
    /* 3A7D8 1500D328 AFAB0020 */  sw         $t3, 0x20($sp)
    /* 3A7DC 1500D32C AFAA001C */  sw         $t2, 0x1C($sp)
    /* 3A7E0 1500D330 AFA90014 */  sw         $t1, 0x14($sp)
    /* 3A7E4 1500D334 24A54AA0 */  addiu      $a1, $a1, %lo(D_800A4AA0)
    /* 3A7E8 1500D338 27A400B8 */  addiu      $a0, $sp, 0xB8
    /* 3A7EC 1500D33C 24060023 */  addiu      $a2, $zero, 0x23
    /* 3A7F0 1500D340 00003825 */  or         $a3, $zero, $zero
    /* 3A7F4 1500D344 AFA00010 */  sw         $zero, 0x10($sp)
    /* 3A7F8 1500D348 0D44F4BC */  jal        func_1513D2F0
    /* 3A7FC 1500D34C AFA00018 */   sw        $zero, 0x18($sp)
    /* 3A800 1500D350 10400004 */  beqz       $v0, .L1500D364
    /* 3A804 1500D354 24440110 */   addiu     $a0, $v0, 0x110
    /* 3A808 1500D358 27A5009C */  addiu      $a1, $sp, 0x9C
    /* 3A80C 1500D35C 0C008BB0 */  jal        memcpy
    /* 3A810 1500D360 2406001C */   addiu     $a2, $zero, 0x1C
  .L1500D364:
    /* 3A814 1500D364 461ED681 */  sub.s      $f26, $f26, $f30
    /* 3A818 1500D368 461AF03C */  c.lt.s     $f30, $f26
    /* 3A81C 1500D36C 00000000 */  nop
    /* 3A820 1500D370 4501FEF3 */  bc1t       .L1500CF40
    /* 3A824 1500D374 00000000 */   nop
  .L1500D378:
    /* 3A828 1500D378 8FBF0074 */  lw         $ra, 0x74($sp)
    /* 3A82C 1500D37C D7B40030 */  ldc1       $f20, 0x30($sp)
    /* 3A830 1500D380 D7B60038 */  ldc1       $f22, 0x38($sp)
    /* 3A834 1500D384 D7B80040 */  ldc1       $f24, 0x40($sp)
    /* 3A838 1500D388 D7BA0048 */  ldc1       $f26, 0x48($sp)
    /* 3A83C 1500D38C D7BC0050 */  ldc1       $f28, 0x50($sp)
    /* 3A840 1500D390 D7BE0058 */  ldc1       $f30, 0x58($sp)
    /* 3A844 1500D394 8FB00064 */  lw         $s0, 0x64($sp)
    /* 3A848 1500D398 8FB10068 */  lw         $s1, 0x68($sp)
    /* 3A84C 1500D39C 8FB2006C */  lw         $s2, 0x6C($sp)
    /* 3A850 1500D3A0 8FB30070 */  lw         $s3, 0x70($sp)
    /* 3A854 1500D3A4 03E00008 */  jr         $ra
    /* 3A858 1500D3A8 27BD0118 */   addiu     $sp, $sp, 0x118
endlabel func_1500CE4C
