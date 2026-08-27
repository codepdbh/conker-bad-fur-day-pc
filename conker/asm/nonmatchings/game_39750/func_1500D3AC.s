nonmatching func_1500D3AC, 0x51C

glabel func_1500D3AC
    /* 3A85C 1500D3AC 27BDFEE8 */  addiu      $sp, $sp, -0x118
    /* 3A860 1500D3B0 F7B40020 */  sdc1       $f20, 0x20($sp)
    /* 3A864 1500D3B4 AFB60068 */  sw         $s6, 0x68($sp)
    /* 3A868 1500D3B8 4485A000 */  mtc1       $a1, $f20
    /* 3A86C 1500D3BC 0080B025 */  or         $s6, $a0, $zero
    /* 3A870 1500D3C0 AFBF006C */  sw         $ra, 0x6C($sp)
    /* 3A874 1500D3C4 AFB50064 */  sw         $s5, 0x64($sp)
    /* 3A878 1500D3C8 AFB40060 */  sw         $s4, 0x60($sp)
    /* 3A87C 1500D3CC AFB3005C */  sw         $s3, 0x5C($sp)
    /* 3A880 1500D3D0 AFB20058 */  sw         $s2, 0x58($sp)
    /* 3A884 1500D3D4 AFB10054 */  sw         $s1, 0x54($sp)
    /* 3A888 1500D3D8 AFB00050 */  sw         $s0, 0x50($sp)
    /* 3A88C 1500D3DC F7BE0048 */  sdc1       $f30, 0x48($sp)
    /* 3A890 1500D3E0 F7BC0040 */  sdc1       $f28, 0x40($sp)
    /* 3A894 1500D3E4 F7BA0038 */  sdc1       $f26, 0x38($sp)
    /* 3A898 1500D3E8 F7B80030 */  sdc1       $f24, 0x30($sp)
    /* 3A89C 1500D3EC F7B60028 */  sdc1       $f22, 0x28($sp)
    /* 3A8A0 1500D3F0 0D45118B */  jal        func_1514462C
    /* 3A8A4 1500D3F4 02C02025 */   or        $a0, $s6, $zero
    /* 3A8A8 1500D3F8 46140102 */  mul.s      $f4, $f0, $f20
    /* 3A8AC 1500D3FC 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 3A8B0 1500D400 4481C000 */  mtc1       $at, $f24
    /* 3A8B4 1500D404 3C018009 */  lui        $at, %hi(D_8009616C)
    /* 3A8B8 1500D408 C426616C */  lwc1       $f6, %lo(D_8009616C)($at)
    /* 3A8BC 1500D40C 240E4D40 */  addiu      $t6, $zero, 0x4D40
    /* 3A8C0 1500D410 240F012C */  addiu      $t7, $zero, 0x12C
    /* 3A8C4 1500D414 46062782 */  mul.s      $f30, $f4, $f6
    /* 3A8C8 1500D418 241800FF */  addiu      $t8, $zero, 0xFF
    /* 3A8CC 1500D41C 2419000E */  addiu      $t9, $zero, 0xE
    /* 3A8D0 1500D420 24080002 */  addiu      $t0, $zero, 0x2
    /* 3A8D4 1500D424 24090001 */  addiu      $t1, $zero, 0x1
    /* 3A8D8 1500D428 240A00FF */  addiu      $t2, $zero, 0xFF
    /* 3A8DC 1500D42C 240B0053 */  addiu      $t3, $zero, 0x53
    /* 3A8E0 1500D430 461EC03C */  c.lt.s     $f24, $f30
    /* 3A8E4 1500D434 3C0143B4 */  lui        $at, (0x43B40000 >> 16)
    /* 3A8E8 1500D438 27B50094 */  addiu      $s5, $sp, 0x94
    /* 3A8EC 1500D43C 27B4008C */  addiu      $s4, $sp, 0x8C
    /* 3A8F0 1500D440 45000111 */  bc1f       .L1500D888
    /* 3A8F4 1500D444 27B30090 */   addiu     $s3, $sp, 0x90
    /* 3A8F8 1500D448 4481E000 */  mtc1       $at, $f28
    /* 3A8FC 1500D44C 44804000 */  mtc1       $zero, $f8
    /* 3A900 1500D450 3C013E80 */  lui        $at, (0x3E800000 >> 16)
    /* 3A904 1500D454 4481D000 */  mtc1       $at, $f26
    /* 3A908 1500D458 3C018009 */  lui        $at, %hi(D_80096170)
    /* 3A90C 1500D45C E7B80094 */  swc1       $f24, 0x94($sp)
    /* 3A910 1500D460 E7B80098 */  swc1       $f24, 0x98($sp)
    /* 3A914 1500D464 E7B800B0 */  swc1       $f24, 0xB0($sp)
    /* 3A918 1500D468 E7B800B4 */  swc1       $f24, 0xB4($sp)
    /* 3A91C 1500D46C E7B800B8 */  swc1       $f24, 0xB8($sp)
    /* 3A920 1500D470 AFAE00E4 */  sw         $t6, 0xE4($sp)
    /* 3A924 1500D474 A7AF00E8 */  sh         $t7, 0xE8($sp)
    /* 3A928 1500D478 A3A000EC */  sb         $zero, 0xEC($sp)
    /* 3A92C 1500D47C A3B800F4 */  sb         $t8, 0xF4($sp)
    /* 3A930 1500D480 A3B900F5 */  sb         $t9, 0xF5($sp)
    /* 3A934 1500D484 A3A000F6 */  sb         $zero, 0xF6($sp)
    /* 3A938 1500D488 A3A000F7 */  sb         $zero, 0xF7($sp)
    /* 3A93C 1500D48C A3A000F8 */  sb         $zero, 0xF8($sp)
    /* 3A940 1500D490 A3A000F9 */  sb         $zero, 0xF9($sp)
    /* 3A944 1500D494 A3A000FA */  sb         $zero, 0xFA($sp)
    /* 3A948 1500D498 A3A000FB */  sb         $zero, 0xFB($sp)
    /* 3A94C 1500D49C A3A800FC */  sb         $t0, 0xFC($sp)
    /* 3A950 1500D4A0 A3A000FE */  sb         $zero, 0xFE($sp)
    /* 3A954 1500D4A4 AFA00100 */  sw         $zero, 0x100($sp)
    /* 3A958 1500D4A8 A3A00104 */  sb         $zero, 0x104($sp)
    /* 3A95C 1500D4AC A7A90106 */  sh         $t1, 0x106($sp)
    /* 3A960 1500D4B0 A7AA0108 */  sh         $t2, 0x108($sp)
    /* 3A964 1500D4B4 A7AB00EA */  sh         $t3, 0xEA($sp)
    /* 3A968 1500D4B8 C4366170 */  lwc1       $f22, %lo(D_80096170)($at)
    /* 3A96C 1500D4BC 27B200C4 */  addiu      $s2, $sp, 0xC4
    /* 3A970 1500D4C0 27B100BC */  addiu      $s1, $sp, 0xBC
    /* 3A974 1500D4C4 E7A800D8 */  swc1       $f8, 0xD8($sp)
    /* 3A978 1500D4C8 02C02025 */  or         $a0, $s6, $zero
  .L1500D4CC:
    /* 3A97C 1500D4CC 02202825 */  or         $a1, $s1, $zero
    /* 3A980 1500D4D0 02403025 */  or         $a2, $s2, $zero
    /* 3A984 1500D4D4 02603825 */  or         $a3, $s3, $zero
    /* 3A988 1500D4D8 0D4020D0 */  jal        func_15008340
    /* 3A98C 1500D4DC AFB40010 */   sw        $s4, 0x10($sp)
    /* 3A990 1500D4E0 C7AE008C */  lwc1       $f14, 0x8C($sp)
    /* 3A994 1500D4E4 C7AA0090 */  lwc1       $f10, 0x90($sp)
    /* 3A998 1500D4E8 0C0091DC */  jal        osGetCount
    /* 3A99C 1500D4EC 460E5501 */   sub.s     $f20, $f10, $f14
    /* 3A9A0 1500D4F0 0D42B688 */  jal        func_150ADA20
    /* 3A9A4 1500D4F4 00408025 */   or        $s0, $v0, $zero
    /* 3A9A8 1500D4F8 00500019 */  multu      $v0, $s0
    /* 3A9AC 1500D4FC C7AE008C */  lwc1       $f14, 0x8C($sp)
    /* 3A9B0 1500D500 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3A9B4 1500D504 00006012 */  mflo       $t4
    /* 3A9B8 1500D508 318DFFFF */  andi       $t5, $t4, 0xFFFF
    /* 3A9BC 1500D50C 448D8000 */  mtc1       $t5, $f16
    /* 3A9C0 1500D510 05A10004 */  bgez       $t5, .L1500D524
    /* 3A9C4 1500D514 468084A0 */   cvt.s.w   $f18, $f16
    /* 3A9C8 1500D518 44812000 */  mtc1       $at, $f4
    /* 3A9CC 1500D51C 00000000 */  nop
    /* 3A9D0 1500D520 46049480 */  add.s      $f18, $f18, $f4
  .L1500D524:
    /* 3A9D4 1500D524 3C013F00 */  lui        $at, (0x3F000000 >> 16)
    /* 3A9D8 1500D528 46169182 */  mul.s      $f6, $f18, $f22
    /* 3A9DC 1500D52C 44814000 */  mtc1       $at, $f8
    /* 3A9E0 1500D530 00000000 */  nop
    /* 3A9E4 1500D534 4608A282 */  mul.s      $f10, $f20, $f8
    /* 3A9E8 1500D538 C7A80090 */  lwc1       $f8, 0x90($sp)
    /* 3A9EC 1500D53C 460A3402 */  mul.s      $f16, $f6, $f10
    /* 3A9F0 1500D540 00000000 */  nop
    /* 3A9F4 1500D544 461AA102 */  mul.s      $f4, $f20, $f26
    /* 3A9F8 1500D548 46047480 */  add.s      $f18, $f14, $f4
    /* 3A9FC 1500D54C 46128080 */  add.s      $f2, $f16, $f18
    /* 3AA00 1500D550 E7A200CC */  swc1       $f2, 0xCC($sp)
    /* 3AA04 1500D554 46081001 */  sub.s      $f0, $f2, $f8
    /* 3AA08 1500D558 46000305 */  abs.s      $f12, $f0
    /* 3AA0C 1500D55C 460E1001 */  sub.s      $f0, $f2, $f14
    /* 3AA10 1500D560 E7A200C0 */  swc1       $f2, 0xC0($sp)
    /* 3AA14 1500D564 46000005 */  abs.s      $f0, $f0
    /* 3AA18 1500D568 460C003C */  c.lt.s     $f0, $f12
    /* 3AA1C 1500D56C 00000000 */  nop
    /* 3AA20 1500D570 45020004 */  bc1fl      .L1500D584
    /* 3AA24 1500D574 46006506 */   mov.s     $f20, $f12
    /* 3AA28 1500D578 10000002 */  b          .L1500D584
    /* 3AA2C 1500D57C 46000506 */   mov.s     $f20, $f0
    /* 3AA30 1500D580 46006506 */  mov.s      $f20, $f12
  .L1500D584:
    /* 3AA34 1500D584 0C0091DC */  jal        osGetCount
    /* 3AA38 1500D588 00000000 */   nop
    /* 3AA3C 1500D58C 0D42B688 */  jal        func_150ADA20
    /* 3AA40 1500D590 00408025 */   or        $s0, $v0, $zero
    /* 3AA44 1500D594 00500019 */  multu      $v0, $s0
    /* 3AA48 1500D598 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3AA4C 1500D59C 00007012 */  mflo       $t6
    /* 3AA50 1500D5A0 31CFFFFF */  andi       $t7, $t6, 0xFFFF
    /* 3AA54 1500D5A4 448F3000 */  mtc1       $t7, $f6
    /* 3AA58 1500D5A8 05E10004 */  bgez       $t7, .L1500D5BC
    /* 3AA5C 1500D5AC 468032A0 */   cvt.s.w   $f10, $f6
    /* 3AA60 1500D5B0 44812000 */  mtc1       $at, $f4
    /* 3AA64 1500D5B4 00000000 */  nop
    /* 3AA68 1500D5B8 46045280 */  add.s      $f10, $f10, $f4
  .L1500D5BC:
    /* 3AA6C 1500D5BC 46165402 */  mul.s      $f16, $f10, $f22
    /* 3AA70 1500D5C0 3C013F40 */  lui        $at, (0x3F400000 >> 16)
    /* 3AA74 1500D5C4 44819000 */  mtc1       $at, $f18
    /* 3AA78 1500D5C8 00000000 */  nop
    /* 3AA7C 1500D5CC 46128202 */  mul.s      $f8, $f16, $f18
    /* 3AA80 1500D5D0 461A4180 */  add.s      $f6, $f8, $f26
    /* 3AA84 1500D5D4 46143102 */  mul.s      $f4, $f6, $f20
    /* 3AA88 1500D5D8 E7A400E0 */  swc1       $f4, 0xE0($sp)
    /* 3AA8C 1500D5DC 0C0091DC */  jal        osGetCount
    /* 3AA90 1500D5E0 00000000 */   nop
    /* 3AA94 1500D5E4 0D42B688 */  jal        func_150ADA20
    /* 3AA98 1500D5E8 00408025 */   or        $s0, $v0, $zero
    /* 3AA9C 1500D5EC 00500019 */  multu      $v0, $s0
    /* 3AAA0 1500D5F0 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3AAA4 1500D5F4 0000C012 */  mflo       $t8
    /* 3AAA8 1500D5F8 3319FFFF */  andi       $t9, $t8, 0xFFFF
    /* 3AAAC 1500D5FC 44995000 */  mtc1       $t9, $f10
    /* 3AAB0 1500D600 07210004 */  bgez       $t9, .L1500D614
    /* 3AAB4 1500D604 46805420 */   cvt.s.w   $f16, $f10
    /* 3AAB8 1500D608 44819000 */  mtc1       $at, $f18
    /* 3AABC 1500D60C 00000000 */  nop
    /* 3AAC0 1500D610 46128400 */  add.s      $f16, $f16, $f18
  .L1500D614:
    /* 3AAC4 1500D614 46168002 */  mul.s      $f0, $f16, $f22
    /* 3AAC8 1500D618 3C018009 */  lui        $at, %hi(D_80096174)
    /* 3AACC 1500D61C C4266174 */  lwc1       $f6, %lo(D_80096174)($at)
    /* 3AAD0 1500D620 46000200 */  add.s      $f8, $f0, $f0
    /* 3AAD4 1500D624 46064102 */  mul.s      $f4, $f8, $f6
    /* 3AAD8 1500D628 0C0091DC */  jal        osGetCount
    /* 3AADC 1500D62C E7A400C8 */   swc1      $f4, 0xC8($sp)
    /* 3AAE0 1500D630 0D42B688 */  jal        func_150ADA20
    /* 3AAE4 1500D634 00408025 */   or        $s0, $v0, $zero
    /* 3AAE8 1500D638 00500019 */  multu      $v0, $s0
    /* 3AAEC 1500D63C 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3AAF0 1500D640 00004012 */  mflo       $t0
    /* 3AAF4 1500D644 3109FFFF */  andi       $t1, $t0, 0xFFFF
    /* 3AAF8 1500D648 44895000 */  mtc1       $t1, $f10
    /* 3AAFC 1500D64C 05210004 */  bgez       $t1, .L1500D660
    /* 3AB00 1500D650 468054A0 */   cvt.s.w   $f18, $f10
    /* 3AB04 1500D654 44818000 */  mtc1       $at, $f16
    /* 3AB08 1500D658 00000000 */  nop
    /* 3AB0C 1500D65C 46109480 */  add.s      $f18, $f18, $f16
  .L1500D660:
    /* 3AB10 1500D660 46169202 */  mul.s      $f8, $f18, $f22
    /* 3AB14 1500D664 3C018009 */  lui        $at, %hi(D_80096178)
    /* 3AB18 1500D668 C4266178 */  lwc1       $f6, %lo(D_80096178)($at)
    /* 3AB1C 1500D66C 3C018009 */  lui        $at, %hi(D_8009617C)
    /* 3AB20 1500D670 C42A617C */  lwc1       $f10, %lo(D_8009617C)($at)
    /* 3AB24 1500D674 46064102 */  mul.s      $f4, $f8, $f6
    /* 3AB28 1500D678 460A2400 */  add.s      $f16, $f4, $f10
    /* 3AB2C 1500D67C 0C0091DC */  jal        osGetCount
    /* 3AB30 1500D680 E7B000D0 */   swc1      $f16, 0xD0($sp)
    /* 3AB34 1500D684 0D42B688 */  jal        func_150ADA20
    /* 3AB38 1500D688 00408025 */   or        $s0, $v0, $zero
    /* 3AB3C 1500D68C 00500019 */  multu      $v0, $s0
    /* 3AB40 1500D690 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3AB44 1500D694 00005012 */  mflo       $t2
    /* 3AB48 1500D698 314BFFFF */  andi       $t3, $t2, 0xFFFF
    /* 3AB4C 1500D69C 448B9000 */  mtc1       $t3, $f18
    /* 3AB50 1500D6A0 05610004 */  bgez       $t3, .L1500D6B4
    /* 3AB54 1500D6A4 46809220 */   cvt.s.w   $f8, $f18
    /* 3AB58 1500D6A8 44813000 */  mtc1       $at, $f6
    /* 3AB5C 1500D6AC 00000000 */  nop
    /* 3AB60 1500D6B0 46064200 */  add.s      $f8, $f8, $f6
  .L1500D6B4:
    /* 3AB64 1500D6B4 46164102 */  mul.s      $f4, $f8, $f22
    /* 3AB68 1500D6B8 00000000 */  nop
    /* 3AB6C 1500D6BC 461C2282 */  mul.s      $f10, $f4, $f28
    /* 3AB70 1500D6C0 0C0091DC */  jal        osGetCount
    /* 3AB74 1500D6C4 E7AA00A4 */   swc1      $f10, 0xA4($sp)
    /* 3AB78 1500D6C8 0D42B688 */  jal        func_150ADA20
    /* 3AB7C 1500D6CC 00408025 */   or        $s0, $v0, $zero
    /* 3AB80 1500D6D0 00500019 */  multu      $v0, $s0
    /* 3AB84 1500D6D4 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3AB88 1500D6D8 00006012 */  mflo       $t4
    /* 3AB8C 1500D6DC 318DFFFF */  andi       $t5, $t4, 0xFFFF
    /* 3AB90 1500D6E0 448D8000 */  mtc1       $t5, $f16
    /* 3AB94 1500D6E4 05A10004 */  bgez       $t5, .L1500D6F8
    /* 3AB98 1500D6E8 468084A0 */   cvt.s.w   $f18, $f16
    /* 3AB9C 1500D6EC 44813000 */  mtc1       $at, $f6
    /* 3ABA0 1500D6F0 00000000 */  nop
    /* 3ABA4 1500D6F4 46069480 */  add.s      $f18, $f18, $f6
  .L1500D6F8:
    /* 3ABA8 1500D6F8 46169202 */  mul.s      $f8, $f18, $f22
    /* 3ABAC 1500D6FC 00000000 */  nop
    /* 3ABB0 1500D700 461C4102 */  mul.s      $f4, $f8, $f28
    /* 3ABB4 1500D704 0C0091DC */  jal        osGetCount
    /* 3ABB8 1500D708 E7A400A8 */   swc1      $f4, 0xA8($sp)
    /* 3ABBC 1500D70C 0D42B688 */  jal        func_150ADA20
    /* 3ABC0 1500D710 00408025 */   or        $s0, $v0, $zero
    /* 3ABC4 1500D714 00500019 */  multu      $v0, $s0
    /* 3ABC8 1500D718 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3ABCC 1500D71C 00007012 */  mflo       $t6
    /* 3ABD0 1500D720 31CFFFFF */  andi       $t7, $t6, 0xFFFF
    /* 3ABD4 1500D724 448F5000 */  mtc1       $t7, $f10
    /* 3ABD8 1500D728 05E10004 */  bgez       $t7, .L1500D73C
    /* 3ABDC 1500D72C 46805420 */   cvt.s.w   $f16, $f10
    /* 3ABE0 1500D730 44813000 */  mtc1       $at, $f6
    /* 3ABE4 1500D734 00000000 */  nop
    /* 3ABE8 1500D738 46068400 */  add.s      $f16, $f16, $f6
  .L1500D73C:
    /* 3ABEC 1500D73C 46168482 */  mul.s      $f18, $f16, $f22
    /* 3ABF0 1500D740 00000000 */  nop
    /* 3ABF4 1500D744 461C9202 */  mul.s      $f8, $f18, $f28
    /* 3ABF8 1500D748 0C0091DC */  jal        osGetCount
    /* 3ABFC 1500D74C E7A800AC */   swc1      $f8, 0xAC($sp)
    /* 3AC00 1500D750 0D42B688 */  jal        func_150ADA20
    /* 3AC04 1500D754 00408025 */   or        $s0, $v0, $zero
    /* 3AC08 1500D758 00500019 */  multu      $v0, $s0
    /* 3AC0C 1500D75C 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3AC10 1500D760 0000C012 */  mflo       $t8
    /* 3AC14 1500D764 3319FFFF */  andi       $t9, $t8, 0xFFFF
    /* 3AC18 1500D768 44992000 */  mtc1       $t9, $f4
    /* 3AC1C 1500D76C 07210004 */  bgez       $t9, .L1500D780
    /* 3AC20 1500D770 468022A0 */   cvt.s.w   $f10, $f4
    /* 3AC24 1500D774 44813000 */  mtc1       $at, $f6
    /* 3AC28 1500D778 00000000 */  nop
    /* 3AC2C 1500D77C 46065280 */  add.s      $f10, $f10, $f6
  .L1500D780:
    /* 3AC30 1500D780 46165402 */  mul.s      $f16, $f10, $f22
    /* 3AC34 1500D784 3C018009 */  lui        $at, %hi(D_80096180)
    /* 3AC38 1500D788 C4326180 */  lwc1       $f18, %lo(D_80096180)($at)
    /* 3AC3C 1500D78C 46128202 */  mul.s      $f8, $f16, $f18
    /* 3AC40 1500D790 0C0091DC */  jal        osGetCount
    /* 3AC44 1500D794 E7A800D4 */   swc1      $f8, 0xD4($sp)
    /* 3AC48 1500D798 0D42B688 */  jal        func_150ADA20
    /* 3AC4C 1500D79C 00408025 */   or        $s0, $v0, $zero
    /* 3AC50 1500D7A0 00500019 */  multu      $v0, $s0
    /* 3AC54 1500D7A4 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3AC58 1500D7A8 00004012 */  mflo       $t0
    /* 3AC5C 1500D7AC 3109FFFF */  andi       $t1, $t0, 0xFFFF
    /* 3AC60 1500D7B0 44892000 */  mtc1       $t1, $f4
    /* 3AC64 1500D7B4 05210004 */  bgez       $t1, .L1500D7C8
    /* 3AC68 1500D7B8 468021A0 */   cvt.s.w   $f6, $f4
    /* 3AC6C 1500D7BC 44815000 */  mtc1       $at, $f10
    /* 3AC70 1500D7C0 00000000 */  nop
    /* 3AC74 1500D7C4 460A3180 */  add.s      $f6, $f6, $f10
  .L1500D7C8:
    /* 3AC78 1500D7C8 46163402 */  mul.s      $f16, $f6, $f22
    /* 3AC7C 1500D7CC 3C018009 */  lui        $at, %hi(D_80096184)
    /* 3AC80 1500D7D0 C4326184 */  lwc1       $f18, %lo(D_80096184)($at)
    /* 3AC84 1500D7D4 46128202 */  mul.s      $f8, $f16, $f18
    /* 3AC88 1500D7D8 0C0091DC */  jal        osGetCount
    /* 3AC8C 1500D7DC E7A800DC */   swc1      $f8, 0xDC($sp)
    /* 3AC90 1500D7E0 0D42B688 */  jal        func_150ADA20
    /* 3AC94 1500D7E4 00408025 */   or        $s0, $v0, $zero
    /* 3AC98 1500D7E8 00500019 */  multu      $v0, $s0
    /* 3AC9C 1500D7EC 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3ACA0 1500D7F0 00005012 */  mflo       $t2
    /* 3ACA4 1500D7F4 314BFFFF */  andi       $t3, $t2, 0xFFFF
    /* 3ACA8 1500D7F8 448B2000 */  mtc1       $t3, $f4
    /* 3ACAC 1500D7FC 05610004 */  bgez       $t3, .L1500D810
    /* 3ACB0 1500D800 468022A0 */   cvt.s.w   $f10, $f4
    /* 3ACB4 1500D804 44813000 */  mtc1       $at, $f6
    /* 3ACB8 1500D808 00000000 */  nop
    /* 3ACBC 1500D80C 46065280 */  add.s      $f10, $f10, $f6
  .L1500D810:
    /* 3ACC0 1500D810 46165402 */  mul.s      $f16, $f10, $f22
    /* 3ACC4 1500D814 00002025 */  or         $a0, $zero, $zero
    /* 3ACC8 1500D818 461A8482 */  mul.s      $f18, $f16, $f26
    /* 3ACCC 1500D81C 46189000 */  add.s      $f0, $f18, $f24
    /* 3ACD0 1500D820 E7A0009C */  swc1       $f0, 0x9C($sp)
    /* 3ACD4 1500D824 0D443E00 */  jal        func_1510F800
    /* 3ACD8 1500D828 E7A000A0 */   swc1      $f0, 0xA0($sp)
    /* 3ACDC 1500D82C C7A800BC */  lwc1       $f8, 0xBC($sp)
    /* 3ACE0 1500D830 C7A600C4 */  lwc1       $f6, 0xC4($sp)
    /* 3ACE4 1500D834 4600410D */  trunc.w.s  $f4, $f8
    /* 3ACE8 1500D838 4600328D */  trunc.w.s  $f10, $f6
    /* 3ACEC 1500D83C 44042000 */  mfc1       $a0, $f4
    /* 3ACF0 1500D840 44055000 */  mfc1       $a1, $f10
    /* 3ACF4 1500D844 0D443F48 */  jal        func_1510FD20
    /* 3ACF8 1500D848 00000000 */   nop
    /* 3ACFC 1500D84C 240E00FF */  addiu      $t6, $zero, 0xFF
    /* 3AD00 1500D850 240F0001 */  addiu      $t7, $zero, 0x1
    /* 3AD04 1500D854 AFA200F0 */  sw         $v0, 0xF0($sp)
    /* 3AD08 1500D858 AFAF0014 */  sw         $t7, 0x14($sp)
    /* 3AD0C 1500D85C AFAE0010 */  sw         $t6, 0x10($sp)
    /* 3AD10 1500D860 02A02025 */  or         $a0, $s5, $zero
    /* 3AD14 1500D864 24050003 */  addiu      $a1, $zero, 0x3
    /* 3AD18 1500D868 240600FF */  addiu      $a2, $zero, 0xFF
    /* 3AD1C 1500D86C 0D44CA93 */  jal        func_15132A4C
    /* 3AD20 1500D870 00003825 */   or        $a3, $zero, $zero
    /* 3AD24 1500D874 4618F781 */  sub.s      $f30, $f30, $f24
    /* 3AD28 1500D878 461EC03C */  c.lt.s     $f24, $f30
    /* 3AD2C 1500D87C 00000000 */  nop
    /* 3AD30 1500D880 4503FF12 */  bc1tl      .L1500D4CC
    /* 3AD34 1500D884 02C02025 */   or        $a0, $s6, $zero
  .L1500D888:
    /* 3AD38 1500D888 8FBF006C */  lw         $ra, 0x6C($sp)
    /* 3AD3C 1500D88C D7B40020 */  ldc1       $f20, 0x20($sp)
    /* 3AD40 1500D890 D7B60028 */  ldc1       $f22, 0x28($sp)
    /* 3AD44 1500D894 D7B80030 */  ldc1       $f24, 0x30($sp)
    /* 3AD48 1500D898 D7BA0038 */  ldc1       $f26, 0x38($sp)
    /* 3AD4C 1500D89C D7BC0040 */  ldc1       $f28, 0x40($sp)
    /* 3AD50 1500D8A0 D7BE0048 */  ldc1       $f30, 0x48($sp)
    /* 3AD54 1500D8A4 8FB00050 */  lw         $s0, 0x50($sp)
    /* 3AD58 1500D8A8 8FB10054 */  lw         $s1, 0x54($sp)
    /* 3AD5C 1500D8AC 8FB20058 */  lw         $s2, 0x58($sp)
    /* 3AD60 1500D8B0 8FB3005C */  lw         $s3, 0x5C($sp)
    /* 3AD64 1500D8B4 8FB40060 */  lw         $s4, 0x60($sp)
    /* 3AD68 1500D8B8 8FB50064 */  lw         $s5, 0x64($sp)
    /* 3AD6C 1500D8BC 8FB60068 */  lw         $s6, 0x68($sp)
    /* 3AD70 1500D8C0 03E00008 */  jr         $ra
    /* 3AD74 1500D8C4 27BD0118 */   addiu     $sp, $sp, 0x118
endlabel func_1500D3AC
