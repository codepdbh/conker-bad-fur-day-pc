nonmatching func_151DA368, 0x340

glabel func_151DA368
    /* 207818 151DA368 27BDFF28 */  addiu      $sp, $sp, -0xD8
    /* 20781C 151DA36C AFB10074 */  sw         $s1, 0x74($sp)
    /* 207820 151DA370 3C02800C */  lui        $v0, %hi(D_800BE9E4)
    /* 207824 151DA374 2442E9E4 */  addiu      $v0, $v0, %lo(D_800BE9E4)
    /* 207828 151DA378 00808825 */  or         $s1, $a0, $zero
    /* 20782C 151DA37C AFBF008C */  sw         $ra, 0x8C($sp)
    /* 207830 151DA380 AFB60088 */  sw         $s6, 0x88($sp)
    /* 207834 151DA384 AFB50084 */  sw         $s5, 0x84($sp)
    /* 207838 151DA388 AFB40080 */  sw         $s4, 0x80($sp)
    /* 20783C 151DA38C AFB3007C */  sw         $s3, 0x7C($sp)
    /* 207840 151DA390 AFB20078 */  sw         $s2, 0x78($sp)
    /* 207844 151DA394 AFB00070 */  sw         $s0, 0x70($sp)
    /* 207848 151DA398 F7BE0068 */  sdc1       $f30, 0x68($sp)
    /* 20784C 151DA39C F7BC0060 */  sdc1       $f28, 0x60($sp)
    /* 207850 151DA3A0 F7BA0058 */  sdc1       $f26, 0x58($sp)
    /* 207854 151DA3A4 F7B80050 */  sdc1       $f24, 0x50($sp)
    /* 207858 151DA3A8 F7B60048 */  sdc1       $f22, 0x48($sp)
    /* 20785C 151DA3AC F7B40040 */  sdc1       $f20, 0x40($sp)
    /* 207860 151DA3B0 822E012A */  lb         $t6, 0x12A($s1)
    /* 207864 151DA3B4 8C4F0000 */  lw         $t7, 0x0($v0)
    /* 207868 151DA3B8 92390128 */  lbu        $t9, 0x128($s1)
    /* 20786C 151DA3BC 8229012B */  lb         $t1, 0x12B($s1)
    /* 207870 151DA3C0 01CF0019 */  multu      $t6, $t7
    /* 207874 151DA3C4 922C0129 */  lbu        $t4, 0x129($s1)
    /* 207878 151DA3C8 0000C012 */  mflo       $t8
    /* 20787C 151DA3CC 03382021 */  addu       $a0, $t9, $t8
    /* 207880 151DA3D0 A2240128 */  sb         $a0, 0x128($s1)
    /* 207884 151DA3D4 8C4A0000 */  lw         $t2, 0x0($v0)
    /* 207888 151DA3D8 2484FFC0 */  addiu      $a0, $a0, -0x40
    /* 20788C 151DA3DC 308E00FF */  andi       $t6, $a0, 0xFF
    /* 207890 151DA3E0 012A0019 */  multu      $t1, $t2
    /* 207894 151DA3E4 01C02025 */  or         $a0, $t6, $zero
    /* 207898 151DA3E8 00005812 */  mflo       $t3
    /* 20789C 151DA3EC 018B6821 */  addu       $t5, $t4, $t3
    /* 2078A0 151DA3F0 0D4508F6 */  jal        func_151423D8
    /* 2078A4 151DA3F4 A22D0129 */   sb        $t5, 0x129($s1)
    /* 2078A8 151DA3F8 26320128 */  addiu      $s2, $s1, 0x128
    /* 2078AC 151DA3FC C6440004 */  lwc1       $f4, 0x4($s2)
    /* 2078B0 151DA400 C6480010 */  lwc1       $f8, 0x10($s2)
    /* 2078B4 151DA404 46040182 */  mul.s      $f6, $f0, $f4
    /* 2078B8 151DA408 46083280 */  add.s      $f10, $f6, $f8
    /* 2078BC 151DA40C E62A002C */  swc1       $f10, 0x2C($s1)
    /* 2078C0 151DA410 92440001 */  lbu        $a0, 0x1($s2)
    /* 2078C4 151DA414 2484FFC0 */  addiu      $a0, $a0, -0x40
    /* 2078C8 151DA418 308F00FF */  andi       $t7, $a0, 0xFF
    /* 2078CC 151DA41C 0D4508F6 */  jal        func_151423D8
    /* 2078D0 151DA420 01E02025 */   or        $a0, $t7, $zero
    /* 2078D4 151DA424 C6500008 */  lwc1       $f16, 0x8($s2)
    /* 2078D8 151DA428 C6440010 */  lwc1       $f4, 0x10($s2)
    /* 2078DC 151DA42C 46100482 */  mul.s      $f18, $f0, $f16
    /* 2078E0 151DA430 46049180 */  add.s      $f6, $f18, $f4
    /* 2078E4 151DA434 E6260030 */  swc1       $f6, 0x30($s1)
    /* 2078E8 151DA438 0D42B69A */  jal        func_150ADA68
    /* 2078EC 151DA43C 00000000 */   nop
    /* 2078F0 151DA440 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 2078F4 151DA444 4481D000 */  mtc1       $at, $f26
    /* 2078F8 151DA448 3C01800B */  lui        $at, %hi(D_800AB480)
    /* 2078FC 151DA44C C428B480 */  lwc1       $f8, %lo(D_800AB480)($at)
    /* 207900 151DA450 3C01800B */  lui        $at, %hi(D_800AB484)
    /* 207904 151DA454 C42AB484 */  lwc1       $f10, %lo(D_800AB484)($at)
    /* 207908 151DA458 3C01800C */  lui        $at, %hi(D_800BE9A4)
    /* 20790C 151DA45C C424E9A4 */  lwc1       $f4, %lo(D_800BE9A4)($at)
    /* 207910 151DA460 460A0402 */  mul.s      $f16, $f0, $f10
    /* 207914 151DA464 C64A000C */  lwc1       $f10, 0xC($s2)
    /* 207918 151DA468 3C013F00 */  lui        $at, (0x3F000000 >> 16)
    /* 20791C 151DA46C 241600FF */  addiu      $s6, $zero, 0xFF
    /* 207920 151DA470 27B500B8 */  addiu      $s5, $sp, 0xB8
    /* 207924 151DA474 46104480 */  add.s      $f18, $f8, $f16
    /* 207928 151DA478 46049182 */  mul.s      $f6, $f18, $f4
    /* 20792C 151DA47C 46065200 */  add.s      $f8, $f10, $f6
    /* 207930 151DA480 44815000 */  mtc1       $at, $f10
    /* 207934 151DA484 3C0143FA */  lui        $at, (0x43FA0000 >> 16)
    /* 207938 151DA488 E648000C */  swc1       $f8, 0xC($s2)
    /* 20793C 151DA48C C6320030 */  lwc1       $f18, 0x30($s1)
    /* 207940 151DA490 C630002C */  lwc1       $f16, 0x2C($s1)
    /* 207944 151DA494 C646000C */  lwc1       $f6, 0xC($s2)
    /* 207948 151DA498 46128100 */  add.s      $f4, $f16, $f18
    /* 20794C 151DA49C 4606D03C */  c.lt.s     $f26, $f6
    /* 207950 151DA4A0 460A2082 */  mul.s      $f2, $f4, $f10
    /* 207954 151DA4A4 45020070 */  bc1fl      .L151DA668
    /* 207958 151DA4A8 24020001 */   addiu     $v0, $zero, 0x1
    /* 20795C 151DA4AC 44814000 */  mtc1       $at, $f8
    /* 207960 151DA4B0 3C01800B */  lui        $at, %hi(D_800AB488)
    /* 207964 151DA4B4 C432B488 */  lwc1       $f18, %lo(D_800AB488)($at)
    /* 207968 151DA4B8 46081402 */  mul.s      $f16, $f2, $f8
    /* 20796C 151DA4BC 3C01431A */  lui        $at, (0x431A0000 >> 16)
    /* 207970 151DA4C0 4481F000 */  mtc1       $at, $f30
    /* 207974 151DA4C4 46121102 */  mul.s      $f4, $f2, $f18
    /* 207978 151DA4C8 3C01C060 */  lui        $at, (0xC0600000 >> 16)
    /* 20797C 151DA4CC 4481E000 */  mtc1       $at, $f28
    /* 207980 151DA4D0 4480C000 */  mtc1       $zero, $f24
    /* 207984 151DA4D4 E7B00098 */  swc1       $f16, 0x98($sp)
    /* 207988 151DA4D8 27B400C4 */  addiu      $s4, $sp, 0xC4
    /* 20798C 151DA4DC 24130033 */  addiu      $s3, $zero, 0x33
    /* 207990 151DA4E0 E7A40094 */  swc1       $f4, 0x94($sp)
  .L151DA4E4:
    /* 207994 151DA4E4 0D42B688 */  jal        func_150ADA20
    /* 207998 151DA4E8 00000000 */   nop
    /* 20799C 151DA4EC 305000FF */  andi       $s0, $v0, 0xFF
    /* 2079A0 151DA4F0 0010CC00 */  sll        $t9, $s0, 16
    /* 2079A4 151DA4F4 0D42B69A */  jal        func_150ADA68
    /* 2079A8 151DA4F8 00198403 */   sra       $s0, $t9, 16
    /* 2079AC 151DA4FC C7AA0098 */  lwc1       $f10, 0x98($sp)
    /* 2079B0 151DA500 2604FFC0 */  addiu      $a0, $s0, -0x40
    /* 2079B4 151DA504 308800FF */  andi       $t0, $a0, 0xFF
    /* 2079B8 151DA508 460A0502 */  mul.s      $f20, $f0, $f10
    /* 2079BC 151DA50C 0D4508F6 */  jal        func_151423D8
    /* 2079C0 151DA510 01002025 */   or        $a0, $t0, $zero
    /* 2079C4 151DA514 46000586 */  mov.s      $f22, $f0
    /* 2079C8 151DA518 0D4508F6 */  jal        func_151423D8
    /* 2079CC 151DA51C 320400FF */   andi      $a0, $s0, 0xFF
    /* 2079D0 151DA520 46140202 */  mul.s      $f8, $f0, $f20
    /* 2079D4 151DA524 C6260034 */  lwc1       $f6, 0x34($s1)
    /* 2079D8 151DA528 46083400 */  add.s      $f16, $f6, $f8
    /* 2079DC 151DA52C 4614B182 */  mul.s      $f6, $f22, $f20
    /* 2079E0 151DA530 E7B000C4 */  swc1       $f16, 0xC4($sp)
    /* 2079E4 151DA534 C6320038 */  lwc1       $f18, 0x38($s1)
    /* 2079E8 151DA538 461C9100 */  add.s      $f4, $f18, $f28
    /* 2079EC 151DA53C E7A400C8 */  swc1       $f4, 0xC8($sp)
    /* 2079F0 151DA540 C62A003C */  lwc1       $f10, 0x3C($s1)
    /* 2079F4 151DA544 46065200 */  add.s      $f8, $f10, $f6
    /* 2079F8 151DA548 E7A800CC */  swc1       $f8, 0xCC($sp)
    /* 2079FC 151DA54C E7B800B8 */  swc1       $f24, 0xB8($sp)
    /* 207A00 151DA550 E7B800BC */  swc1       $f24, 0xBC($sp)
    /* 207A04 151DA554 0D42B688 */  jal        func_150ADA20
    /* 207A08 151DA558 E7B800C0 */   swc1      $f24, 0xC0($sp)
    /* 207A0C 151DA55C 0053001B */  divu       $zero, $v0, $s3
    /* 207A10 151DA560 00008010 */  mfhi       $s0
    /* 207A14 151DA564 26100096 */  addiu      $s0, $s0, 0x96
    /* 207A18 151DA568 00104C00 */  sll        $t1, $s0, 16
    /* 207A1C 151DA56C 16600002 */  bnez       $s3, .L151DA578
    /* 207A20 151DA570 00000000 */   nop
    /* 207A24 151DA574 0007000D */  break      7
  .L151DA578:
    /* 207A28 151DA578 00098403 */  sra        $s0, $t1, 16
    /* 207A2C 151DA57C 0D42B69A */  jal        func_150ADA68
    /* 207A30 151DA580 00000000 */   nop
    /* 207A34 151DA584 0D42B69A */  jal        func_150ADA68
    /* 207A38 151DA588 46000506 */   mov.s     $f20, $f0
    /* 207A3C 151DA58C 02D0001A */  div        $zero, $s6, $s0
    /* 207A40 151DA590 461EA402 */  mul.s      $f16, $f20, $f30
    /* 207A44 151DA594 3C01800B */  lui        $at, %hi(D_800AB48C)
    /* 207A48 151DA598 C432B48C */  lwc1       $f18, %lo(D_800AB48C)($at)
    /* 207A4C 151DA59C 3C01800B */  lui        $at, %hi(D_800AB490)
    /* 207A50 151DA5A0 C42AB490 */  lwc1       $f10, %lo(D_800AB490)($at)
    /* 207A54 151DA5A4 3C0141C8 */  lui        $at, (0x41C80000 >> 16)
    /* 207A58 151DA5A8 44814000 */  mtc1       $at, $f8
    /* 207A5C 151DA5AC 46128100 */  add.s      $f4, $f16, $f18
    /* 207A60 151DA5B0 3C01C248 */  lui        $at, (0xC2480000 >> 16)
    /* 207A64 151DA5B4 44819000 */  mtc1       $at, $f18
    /* 207A68 151DA5B8 3C01800B */  lui        $at, %hi(D_800AB494)
    /* 207A6C 151DA5BC 460A2182 */  mul.s      $f6, $f4, $f10
    /* 207A70 151DA5C0 C42AB494 */  lwc1       $f10, %lo(D_800AB494)($at)
    /* 207A74 151DA5C4 92440018 */  lbu        $a0, 0x18($s2)
    /* 207A78 151DA5C8 46080402 */  mul.s      $f16, $f0, $f8
    /* 207A7C 151DA5CC 00005812 */  mflo       $t3
    /* 207A80 151DA5D0 240C009B */  addiu      $t4, $zero, 0x9B
    /* 207A84 151DA5D4 240D0001 */  addiu      $t5, $zero, 0x1
    /* 207A88 151DA5D8 E7A60010 */  swc1       $f6, 0x10($sp)
    /* 207A8C 151DA5DC AFAD002C */  sw         $t5, 0x2C($sp)
    /* 207A90 151DA5E0 AFAC0020 */  sw         $t4, 0x20($sp)
    /* 207A94 151DA5E4 46128100 */  add.s      $f4, $f16, $f18
    /* 207A98 151DA5E8 AFAB0028 */  sw         $t3, 0x28($sp)
    /* 207A9C 151DA5EC AFB00024 */  sw         $s0, 0x24($sp)
    /* 207AA0 151DA5F0 AFB0001C */  sw         $s0, 0x1C($sp)
    /* 207AA4 151DA5F4 460A2182 */  mul.s      $f6, $f4, $f10
    /* 207AA8 151DA5F8 E7BA0014 */  swc1       $f26, 0x14($sp)
    /* 207AAC 151DA5FC 02802825 */  or         $a1, $s4, $zero
    /* 207AB0 151DA600 02A03025 */  or         $a2, $s5, $zero
    /* 207AB4 151DA604 8FA70094 */  lw         $a3, 0x94($sp)
    /* 207AB8 151DA608 E7A60018 */  swc1       $f6, 0x18($sp)
    /* 207ABC 151DA60C 922E000C */  lbu        $t6, 0xC($s1)
    /* 207AC0 151DA610 16000002 */  bnez       $s0, .L151DA61C
    /* 207AC4 151DA614 00000000 */   nop
    /* 207AC8 151DA618 0007000D */  break      7
  .L151DA61C:
    /* 207ACC 151DA61C 2401FFFF */  addiu      $at, $zero, -0x1
    /* 207AD0 151DA620 16010004 */  bne        $s0, $at, .L151DA634
    /* 207AD4 151DA624 3C018000 */   lui       $at, (0x80000000 >> 16)
    /* 207AD8 151DA628 16C10002 */  bne        $s6, $at, .L151DA634
    /* 207ADC 151DA62C 00000000 */   nop
    /* 207AE0 151DA630 0006000D */  break      6
  .L151DA634:
    /* 207AE4 151DA634 AFAE0030 */  sw         $t6, 0x30($sp)
    /* 207AE8 151DA638 922F0001 */  lbu        $t7, 0x1($s1)
    /* 207AEC 151DA63C 0D476D74 */  jal        func_151DB5D0
    /* 207AF0 151DA640 AFAF0034 */   sw        $t7, 0x34($sp)
    /* 207AF4 151DA644 C648000C */  lwc1       $f8, 0xC($s2)
    /* 207AF8 151DA648 461A4401 */  sub.s      $f16, $f8, $f26
    /* 207AFC 151DA64C E650000C */  swc1       $f16, 0xC($s2)
    /* 207B00 151DA650 C652000C */  lwc1       $f18, 0xC($s2)
    /* 207B04 151DA654 4612D03C */  c.lt.s     $f26, $f18
    /* 207B08 151DA658 00000000 */  nop
    /* 207B0C 151DA65C 4501FFA1 */  bc1t       .L151DA4E4
    /* 207B10 151DA660 00000000 */   nop
    /* 207B14 151DA664 24020001 */  addiu      $v0, $zero, 0x1
  .L151DA668:
    /* 207B18 151DA668 8FBF008C */  lw         $ra, 0x8C($sp)
    /* 207B1C 151DA66C D7B40040 */  ldc1       $f20, 0x40($sp)
    /* 207B20 151DA670 D7B60048 */  ldc1       $f22, 0x48($sp)
    /* 207B24 151DA674 D7B80050 */  ldc1       $f24, 0x50($sp)
    /* 207B28 151DA678 D7BA0058 */  ldc1       $f26, 0x58($sp)
    /* 207B2C 151DA67C D7BC0060 */  ldc1       $f28, 0x60($sp)
    /* 207B30 151DA680 D7BE0068 */  ldc1       $f30, 0x68($sp)
    /* 207B34 151DA684 8FB00070 */  lw         $s0, 0x70($sp)
    /* 207B38 151DA688 8FB10074 */  lw         $s1, 0x74($sp)
    /* 207B3C 151DA68C 8FB20078 */  lw         $s2, 0x78($sp)
    /* 207B40 151DA690 8FB3007C */  lw         $s3, 0x7C($sp)
    /* 207B44 151DA694 8FB40080 */  lw         $s4, 0x80($sp)
    /* 207B48 151DA698 8FB50084 */  lw         $s5, 0x84($sp)
    /* 207B4C 151DA69C 8FB60088 */  lw         $s6, 0x88($sp)
    /* 207B50 151DA6A0 03E00008 */  jr         $ra
    /* 207B54 151DA6A4 27BD00D8 */   addiu     $sp, $sp, 0xD8
endlabel func_151DA368
