nonmatching func_15070F60, 0x2D0

glabel func_15070F60
    /* 9E410 15070F60 27BDFF68 */  addiu      $sp, $sp, -0x98
    /* 9E414 15070F64 AFBF003C */  sw         $ra, 0x3C($sp)
    /* 9E418 15070F68 AFA40098 */  sw         $a0, 0x98($sp)
    /* 9E41C 15070F6C 3C0F800A */  lui        $t7, %hi(D_80099BA0)
    /* 9E420 15070F70 25EF9BA0 */  addiu      $t7, $t7, %lo(D_80099BA0)
    /* 9E424 15070F74 8DE10000 */  lw         $at, 0x0($t7)
    /* 9E428 15070F78 27AE008C */  addiu      $t6, $sp, 0x8C
    /* 9E42C 15070F7C 8DE80004 */  lw         $t0, 0x4($t7)
    /* 9E430 15070F80 ADC10000 */  sw         $at, 0x0($t6)
    /* 9E434 15070F84 8DE10008 */  lw         $at, 0x8($t7)
    /* 9E438 15070F88 3C0A800A */  lui        $t2, %hi(D_80099BAC)
    /* 9E43C 15070F8C 254A9BAC */  addiu      $t2, $t2, %lo(D_80099BAC)
    /* 9E440 15070F90 ADC80004 */  sw         $t0, 0x4($t6)
    /* 9E444 15070F94 ADC10008 */  sw         $at, 0x8($t6)
    /* 9E448 15070F98 8D410000 */  lw         $at, 0x0($t2)
    /* 9E44C 15070F9C 27A90080 */  addiu      $t1, $sp, 0x80
    /* 9E450 15070FA0 8D4D0004 */  lw         $t5, 0x4($t2)
    /* 9E454 15070FA4 AD210000 */  sw         $at, 0x0($t1)
    /* 9E458 15070FA8 8D410008 */  lw         $at, 0x8($t2)
    /* 9E45C 15070FAC 3C02800D */  lui        $v0, %hi(D_800D154C)
    /* 9E460 15070FB0 AD2D0004 */  sw         $t5, 0x4($t1)
    /* 9E464 15070FB4 AD210008 */  sw         $at, 0x8($t1)
    /* 9E468 15070FB8 8C42154C */  lw         $v0, %lo(D_800D154C)($v0)
    /* 9E46C 15070FBC 8C5901D4 */  lw         $t9, 0x1D4($v0)
    /* 9E470 15070FC0 53200098 */  beql       $t9, $zero, .L15071224
    /* 9E474 15070FC4 8FBF003C */   lw        $ra, 0x3C($sp)
    /* 9E478 15070FC8 90580074 */  lbu        $t8, 0x74($v0)
    /* 9E47C 15070FCC 2401000F */  addiu      $at, $zero, 0xF
    /* 9E480 15070FD0 330E000F */  andi       $t6, $t8, 0xF
    /* 9E484 15070FD4 51C10093 */  beql       $t6, $at, .L15071224
    /* 9E488 15070FD8 8FBF003C */   lw        $ra, 0x3C($sp)
    /* 9E48C 15070FDC 0D42B69A */  jal        func_150ADA68
    /* 9E490 15070FE0 00000000 */   nop
    /* 9E494 15070FE4 3C014334 */  lui        $at, (0x43340000 >> 16)
    /* 9E498 15070FE8 44812000 */  mtc1       $at, $f4
    /* 9E49C 15070FEC 3C014316 */  lui        $at, (0x43160000 >> 16)
    /* 9E4A0 15070FF0 44814000 */  mtc1       $at, $f8
    /* 9E4A4 15070FF4 46040182 */  mul.s      $f6, $f0, $f4
    /* 9E4A8 15070FF8 46083280 */  add.s      $f10, $f6, $f8
    /* 9E4AC 15070FFC 0D42B69A */  jal        func_150ADA68
    /* 9E4B0 15071000 E7AA0078 */   swc1      $f10, 0x78($sp)
    /* 9E4B4 15071004 46000400 */  add.s      $f16, $f0, $f0
    /* 9E4B8 15071008 3C014020 */  lui        $at, (0x40200000 >> 16)
    /* 9E4BC 1507100C 44819000 */  mtc1       $at, $f18
    /* 9E4C0 15071010 93AF009B */  lbu        $t7, 0x9B($sp)
    /* 9E4C4 15071014 3C0C800D */  lui        $t4, %hi(D_800D154C)
    /* 9E4C8 15071018 46128100 */  add.s      $f4, $f16, $f18
    /* 9E4CC 1507101C 11E00003 */  beqz       $t7, .L1507102C
    /* 9E4D0 15071020 E7A4007C */   swc1      $f4, 0x7C($sp)
    /* 9E4D4 15071024 10000002 */  b          .L15071030
    /* 9E4D8 15071028 24030001 */   addiu     $v1, $zero, 0x1
  .L1507102C:
    /* 9E4DC 1507102C 24030002 */  addiu      $v1, $zero, 0x2
  .L15071030:
    /* 9E4E0 15071030 8D8C154C */  lw         $t4, %lo(D_800D154C)($t4)
    /* 9E4E4 15071034 00034180 */  sll        $t0, $v1, 6
    /* 9E4E8 15071038 27A4008C */  addiu      $a0, $sp, 0x8C
    /* 9E4EC 1507103C 8D8B01D4 */  lw         $t3, 0x1D4($t4)
    /* 9E4F0 15071040 27A5006C */  addiu      $a1, $sp, 0x6C
    /* 9E4F4 15071044 0D450C4D */  jal        func_15143134
    /* 9E4F8 15071048 010B3021 */   addu      $a2, $t0, $t3
    /* 9E4FC 1507104C 93A9009B */  lbu        $t1, 0x9B($sp)
    /* 9E500 15071050 240D0002 */  addiu      $t5, $zero, 0x2
    /* 9E504 15071054 11200003 */  beqz       $t1, .L15071064
    /* 9E508 15071058 240A0001 */   addiu     $t2, $zero, 0x1
    /* 9E50C 1507105C 10000002 */  b          .L15071068
    /* 9E510 15071060 AFAA0048 */   sw        $t2, 0x48($sp)
  .L15071064:
    /* 9E514 15071064 AFAD0048 */  sw         $t5, 0x48($sp)
  .L15071068:
    /* 9E518 15071068 0D42B688 */  jal        func_150ADA20
    /* 9E51C 1507106C 00000000 */   nop
    /* 9E520 15071070 0D42B688 */  jal        func_150ADA20
    /* 9E524 15071074 AFA2004C */   sw        $v0, 0x4C($sp)
    /* 9E528 15071078 0D42B69A */  jal        func_150ADA68
    /* 9E52C 1507107C AFA20054 */   sw        $v0, 0x54($sp)
    /* 9E530 15071080 8FB8004C */  lw         $t8, 0x4C($sp)
    /* 9E534 15071084 3C01457A */  lui        $at, (0x457A0000 >> 16)
    /* 9E538 15071088 44811000 */  mtc1       $at, $f2
    /* 9E53C 1507108C 24010005 */  addiu      $at, $zero, 0x5
    /* 9E540 15071090 0301001B */  divu       $zero, $t8, $at
    /* 9E544 15071094 00007010 */  mfhi       $t6
    /* 9E548 15071098 8FA30054 */  lw         $v1, 0x54($sp)
    /* 9E54C 1507109C 2401009C */  addiu      $at, $zero, 0x9C
    /* 9E550 150710A0 46020182 */  mul.s      $f6, $f0, $f2
    /* 9E554 150710A4 0061001B */  divu       $zero, $v1, $at
    /* 9E558 150710A8 46023200 */  add.s      $f8, $f6, $f2
    /* 9E55C 150710AC 00006010 */  mfhi       $t4
    /* 9E560 150710B0 25880064 */  addiu      $t0, $t4, 0x64
    /* 9E564 150710B4 25CF0005 */  addiu      $t7, $t6, 0x5
    /* 9E568 150710B8 3C04800D */  lui        $a0, %hi(D_800D154C)
    /* 9E56C 150710BC 27B90078 */  addiu      $t9, $sp, 0x78
    /* 9E570 150710C0 27AB006C */  addiu      $t3, $sp, 0x6C
    /* 9E574 150710C4 240900FF */  addiu      $t1, $zero, 0xFF
    /* 9E578 150710C8 240AFFFF */  addiu      $t2, $zero, -0x1
    /* 9E57C 150710CC 240D00FF */  addiu      $t5, $zero, 0xFF
    /* 9E580 150710D0 AFAD0030 */  sw         $t5, 0x30($sp)
    /* 9E584 150710D4 AFAA002C */  sw         $t2, 0x2C($sp)
    /* 9E588 150710D8 AFA90024 */  sw         $t1, 0x24($sp)
    /* 9E58C 150710DC AFAB0020 */  sw         $t3, 0x20($sp)
    /* 9E590 150710E0 AFB90010 */  sw         $t9, 0x10($sp)
    /* 9E594 150710E4 8C84154C */  lw         $a0, %lo(D_800D154C)($a0)
    /* 9E598 150710E8 AFAF0014 */  sw         $t7, 0x14($sp)
    /* 9E59C 150710EC AFA80018 */  sw         $t0, 0x18($sp)
    /* 9E5A0 150710F0 E7A8001C */  swc1       $f8, 0x1C($sp)
    /* 9E5A4 150710F4 93A5004B */  lbu        $a1, 0x4B($sp)
    /* 9E5A8 150710F8 27A6008C */  addiu      $a2, $sp, 0x8C
    /* 9E5AC 150710FC 27A70080 */  addiu      $a3, $sp, 0x80
    /* 9E5B0 15071100 AFA00028 */  sw         $zero, 0x28($sp)
    /* 9E5B4 15071104 0D440ACE */  jal        func_15102B38
    /* 9E5B8 15071108 AFA00034 */   sw        $zero, 0x34($sp)
    /* 9E5BC 1507110C 24190003 */  addiu      $t9, $zero, 0x3
    /* 9E5C0 15071110 2418FFFF */  addiu      $t8, $zero, -0x1
    /* 9E5C4 15071114 A3B90064 */  sb         $t9, 0x64($sp)
    /* 9E5C8 15071118 0D42B688 */  jal        func_150ADA20
    /* 9E5CC 1507111C A3B80065 */   sb        $t8, 0x65($sp)
    /* 9E5D0 15071120 24010005 */  addiu      $at, $zero, 0x5
    /* 9E5D4 15071124 0041001B */  divu       $zero, $v0, $at
    /* 9E5D8 15071128 C7AA006C */  lwc1       $f10, 0x6C($sp)
    /* 9E5DC 1507112C C7B20070 */  lwc1       $f18, 0x70($sp)
    /* 9E5E0 15071130 C7A60074 */  lwc1       $f6, 0x74($sp)
    /* 9E5E4 15071134 4600540D */  trunc.w.s  $f16, $f10
    /* 9E5E8 15071138 00007010 */  mfhi       $t6
    /* 9E5EC 1507113C 25CF0003 */  addiu      $t7, $t6, 0x3
    /* 9E5F0 15071140 4600910D */  trunc.w.s  $f4, $f18
    /* 9E5F4 15071144 44088000 */  mfc1       $t0, $f16
    /* 9E5F8 15071148 A7AF0066 */  sh         $t7, 0x66($sp)
    /* 9E5FC 1507114C 4600320D */  trunc.w.s  $f8, $f6
    /* 9E600 15071150 44092000 */  mfc1       $t1, $f4
    /* 9E604 15071154 A3A00068 */  sb         $zero, 0x68($sp)
    /* 9E608 15071158 AFA80058 */  sw         $t0, 0x58($sp)
    /* 9E60C 1507115C 440D4000 */  mfc1       $t5, $f8
    /* 9E610 15071160 AFA9005C */  sw         $t1, 0x5C($sp)
    /* 9E614 15071164 0D42B688 */  jal        func_150ADA20
    /* 9E618 15071168 AFAD0060 */   sw        $t5, 0x60($sp)
    /* 9E61C 1507116C 240100C9 */  addiu      $at, $zero, 0xC9
    /* 9E620 15071170 0041001B */  divu       $zero, $v0, $at
    /* 9E624 15071174 00003010 */  mfhi       $a2
    /* 9E628 15071178 241900FF */  addiu      $t9, $zero, 0xFF
    /* 9E62C 1507117C 241800FF */  addiu      $t8, $zero, 0xFF
    /* 9E630 15071180 240E00FF */  addiu      $t6, $zero, 0xFF
    /* 9E634 15071184 240F00FF */  addiu      $t7, $zero, 0xFF
    /* 9E638 15071188 AFAF0024 */  sw         $t7, 0x24($sp)
    /* 9E63C 1507118C AFAE0018 */  sw         $t6, 0x18($sp)
    /* 9E640 15071190 AFB80014 */  sw         $t8, 0x14($sp)
    /* 9E644 15071194 AFB90010 */  sw         $t9, 0x10($sp)
    /* 9E648 15071198 24C60037 */  addiu      $a2, $a2, 0x37
    /* 9E64C 1507119C 27A40064 */  addiu      $a0, $sp, 0x64
    /* 9E650 150711A0 27A50058 */  addiu      $a1, $sp, 0x58
    /* 9E654 150711A4 240700FF */  addiu      $a3, $zero, 0xFF
    /* 9E658 150711A8 AFA0001C */  sw         $zero, 0x1C($sp)
    /* 9E65C 150711AC AFA00020 */  sw         $zero, 0x20($sp)
    /* 9E660 150711B0 0D4580B0 */  jal        func_151602C0
    /* 9E664 150711B4 AFA00028 */   sw        $zero, 0x28($sp)
    /* 9E668 150711B8 3C06447D */  lui        $a2, (0x447D4000 >> 16)
    /* 9E66C 150711BC 3C073A81 */  lui        $a3, (0x3A8163D3 >> 16)
    /* 9E670 150711C0 240C000F */  addiu      $t4, $zero, 0xF
    /* 9E674 150711C4 24080014 */  addiu      $t0, $zero, 0x14
    /* 9E678 150711C8 240B00FF */  addiu      $t3, $zero, 0xFF
    /* 9E67C 150711CC AFAB0018 */  sw         $t3, 0x18($sp)
    /* 9E680 150711D0 AFA80014 */  sw         $t0, 0x14($sp)
    /* 9E684 150711D4 AFAC0010 */  sw         $t4, 0x10($sp)
    /* 9E688 150711D8 34E763D3 */  ori        $a3, $a3, (0x3A8163D3 & 0xFFFF)
    /* 9E68C 150711DC 34C64000 */  ori        $a2, $a2, (0x447D4000 & 0xFFFF)
    /* 9E690 150711E0 27A4006C */  addiu      $a0, $sp, 0x6C
    /* 9E694 150711E4 3C0543FD */  lui        $a1, (0x43FD0000 >> 16)
    /* 9E698 150711E8 0D475501 */  jal        func_151D5404
    /* 9E69C 150711EC AFA0001C */   sw        $zero, 0x1C($sp)
    /* 9E6A0 150711F0 3C06447D */  lui        $a2, (0x447D4000 >> 16)
    /* 9E6A4 150711F4 3C073A81 */  lui        $a3, (0x3A8163D3 >> 16)
    /* 9E6A8 150711F8 24090005 */  addiu      $t1, $zero, 0x5
    /* 9E6AC 150711FC 240A00FF */  addiu      $t2, $zero, 0xFF
    /* 9E6B0 15071200 AFAA0014 */  sw         $t2, 0x14($sp)
    /* 9E6B4 15071204 AFA90010 */  sw         $t1, 0x10($sp)
    /* 9E6B8 15071208 34E763D3 */  ori        $a3, $a3, (0x3A8163D3 & 0xFFFF)
    /* 9E6BC 1507120C 34C64000 */  ori        $a2, $a2, (0x447D4000 & 0xFFFF)
    /* 9E6C0 15071210 27A4006C */  addiu      $a0, $sp, 0x6C
    /* 9E6C4 15071214 3C0543FD */  lui        $a1, (0x43FD0000 >> 16)
    /* 9E6C8 15071218 0D4754CD */  jal        func_151D5334
    /* 9E6CC 1507121C AFA00018 */   sw        $zero, 0x18($sp)
    /* 9E6D0 15071220 8FBF003C */  lw         $ra, 0x3C($sp)
  .L15071224:
    /* 9E6D4 15071224 27BD0098 */  addiu      $sp, $sp, 0x98
    /* 9E6D8 15071228 03E00008 */  jr         $ra
    /* 9E6DC 1507122C 00000000 */   nop
endlabel func_15070F60
