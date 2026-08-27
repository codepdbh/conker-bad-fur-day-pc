nonmatching func_151058B4, 0x314

glabel func_151058B4
    /* 132D64 151058B4 27BDFF10 */  addiu      $sp, $sp, -0xF0
    /* 132D68 151058B8 AFB3005C */  sw         $s3, 0x5C($sp)
    /* 132D6C 151058BC 00809825 */  or         $s3, $a0, $zero
    /* 132D70 151058C0 AFBF0074 */  sw         $ra, 0x74($sp)
    /* 132D74 151058C4 AFBE0070 */  sw         $fp, 0x70($sp)
    /* 132D78 151058C8 AFB7006C */  sw         $s7, 0x6C($sp)
    /* 132D7C 151058CC AFB60068 */  sw         $s6, 0x68($sp)
    /* 132D80 151058D0 AFB50064 */  sw         $s5, 0x64($sp)
    /* 132D84 151058D4 AFB40060 */  sw         $s4, 0x60($sp)
    /* 132D88 151058D8 AFB20058 */  sw         $s2, 0x58($sp)
    /* 132D8C 151058DC AFB10054 */  sw         $s1, 0x54($sp)
    /* 132D90 151058E0 AFB00050 */  sw         $s0, 0x50($sp)
    /* 132D94 151058E4 F7BE0048 */  sdc1       $f30, 0x48($sp)
    /* 132D98 151058E8 F7BC0040 */  sdc1       $f28, 0x40($sp)
    /* 132D9C 151058EC F7BA0038 */  sdc1       $f26, 0x38($sp)
    /* 132DA0 151058F0 F7B80030 */  sdc1       $f24, 0x30($sp)
    /* 132DA4 151058F4 F7B60028 */  sdc1       $f22, 0x28($sp)
    /* 132DA8 151058F8 F7B40020 */  sdc1       $f20, 0x20($sp)
    /* 132DAC 151058FC 0D45192E */  jal        func_151464B8
    /* 132DB0 15105900 8E640030 */   lw        $a0, 0x30($s3)
    /* 132DB4 15105904 5440009F */  bnel       $v0, $zero, .L15105B84
    /* 132DB8 15105908 8FBF0074 */   lw        $ra, 0x74($sp)
    /* 132DBC 1510590C 0D42B69A */  jal        func_150ADA68
    /* 132DC0 15105910 00000000 */   nop
    /* 132DC4 15105914 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 132DC8 15105918 4481B000 */  mtc1       $at, $f22
    /* 132DCC 1510591C 3C01800A */  lui        $at, %hi(D_800A23EC)
    /* 132DD0 15105920 C42423EC */  lwc1       $f4, %lo(D_800A23EC)($at)
    /* 132DD4 15105924 3C01800A */  lui        $at, %hi(D_800A23F0)
    /* 132DD8 15105928 C42823F0 */  lwc1       $f8, %lo(D_800A23F0)($at)
    /* 132DDC 1510592C 46040182 */  mul.s      $f6, $f0, $f4
    /* 132DE0 15105930 26740028 */  addiu      $s4, $s3, 0x28
    /* 132DE4 15105934 C6900004 */  lwc1       $f16, 0x4($s4)
    /* 132DE8 15105938 240E0015 */  addiu      $t6, $zero, 0x15
    /* 132DEC 1510593C 240F000A */  addiu      $t7, $zero, 0xA
    /* 132DF0 15105940 2418FFFF */  addiu      $t8, $zero, -0x1
    /* 132DF4 15105944 24190004 */  addiu      $t9, $zero, 0x4
    /* 132DF8 15105948 46083280 */  add.s      $f10, $f6, $f8
    /* 132DFC 1510594C 24080002 */  addiu      $t0, $zero, 0x2
    /* 132E00 15105950 24090003 */  addiu      $t1, $zero, 0x3
    /* 132E04 15105954 240A0061 */  addiu      $t2, $zero, 0x61
    /* 132E08 15105958 46105502 */  mul.s      $f20, $f10, $f16
    /* 132E0C 1510595C 240B00F2 */  addiu      $t3, $zero, 0xF2
    /* 132E10 15105960 240C00FF */  addiu      $t4, $zero, 0xFF
    /* 132E14 15105964 240D00FF */  addiu      $t5, $zero, 0xFF
    /* 132E18 15105968 3C0141F0 */  lui        $at, (0x41F00000 >> 16)
    /* 132E1C 1510596C 27BE0088 */  addiu      $fp, $sp, 0x88
    /* 132E20 15105970 4614B03C */  c.lt.s     $f22, $f20
    /* 132E24 15105974 00000000 */  nop
    /* 132E28 15105978 45020082 */  bc1fl      .L15105B84
    /* 132E2C 1510597C 8FBF0074 */   lw        $ra, 0x74($sp)
    /* 132E30 15105980 A7AE00DA */  sh         $t6, 0xDA($sp)
    /* 132E34 15105984 AFAF00DC */  sw         $t7, 0xDC($sp)
    /* 132E38 15105988 A3AA00A7 */  sb         $t2, 0xA7($sp)
    /* 132E3C 1510598C A3AB00A8 */  sb         $t3, 0xA8($sp)
    /* 132E40 15105990 240E00FF */  addiu      $t6, $zero, 0xFF
    /* 132E44 15105994 240F00FF */  addiu      $t7, $zero, 0xFF
    /* 132E48 15105998 A3B800E0 */  sb         $t8, 0xE0($sp)
    /* 132E4C 1510599C A3B900A4 */  sb         $t9, 0xA4($sp)
    /* 132E50 151059A0 A3A800A5 */  sb         $t0, 0xA5($sp)
    /* 132E54 151059A4 A3A900A6 */  sb         $t1, 0xA6($sp)
    /* 132E58 151059A8 A3AC00A9 */  sb         $t4, 0xA9($sp)
    /* 132E5C 151059AC A3AD00AB */  sb         $t5, 0xAB($sp)
    /* 132E60 151059B0 A3AE00AC */  sb         $t6, 0xAC($sp)
    /* 132E64 151059B4 A3AF00AD */  sb         $t7, 0xAD($sp)
    /* 132E68 151059B8 3C0A0020 */  lui        $t2, (0x200005 >> 16)
    /* 132E6C 151059BC 3C0B0006 */  lui        $t3, (0x60600 >> 16)
    /* 132E70 151059C0 241800FF */  addiu      $t8, $zero, 0xFF
    /* 132E74 151059C4 241900FF */  addiu      $t9, $zero, 0xFF
    /* 132E78 151059C8 24080003 */  addiu      $t0, $zero, 0x3
    /* 132E7C 151059CC 24090024 */  addiu      $t1, $zero, 0x24
    /* 132E80 151059D0 354A0005 */  ori        $t2, $t2, (0x200005 & 0xFFFF)
    /* 132E84 151059D4 356B0600 */  ori        $t3, $t3, (0x60600 & 0xFFFF)
    /* 132E88 151059D8 240C0014 */  addiu      $t4, $zero, 0x14
    /* 132E8C 151059DC 240D000C */  addiu      $t5, $zero, 0xC
    /* 132E90 151059E0 240E0001 */  addiu      $t6, $zero, 0x1
    /* 132E94 151059E4 240FFFFF */  addiu      $t7, $zero, -0x1
    /* 132E98 151059E8 A3B800AE */  sb         $t8, 0xAE($sp)
    /* 132E9C 151059EC A3B900AF */  sb         $t9, 0xAF($sp)
    /* 132EA0 151059F0 A3A800B0 */  sb         $t0, 0xB0($sp)
    /* 132EA4 151059F4 A3A900B1 */  sb         $t1, 0xB1($sp)
    /* 132EA8 151059F8 AFAA00B4 */  sw         $t2, 0xB4($sp)
    /* 132EAC 151059FC AFAB00B8 */  sw         $t3, 0xB8($sp)
    /* 132EB0 15105A00 A7AC00BC */  sh         $t4, 0xBC($sp)
    /* 132EB4 15105A04 A7AD00BE */  sh         $t5, 0xBE($sp)
    /* 132EB8 15105A08 A7AE00C0 */  sh         $t6, 0xC0($sp)
    /* 132EBC 15105A0C A3A000C2 */  sb         $zero, 0xC2($sp)
    /* 132EC0 15105A10 E7B600C4 */  swc1       $f22, 0xC4($sp)
    /* 132EC4 15105A14 A3AF00C8 */  sb         $t7, 0xC8($sp)
    /* 132EC8 15105A18 A3A000C9 */  sb         $zero, 0xC9($sp)
    /* 132ECC 15105A1C 8E980000 */  lw         $t8, 0x0($s4)
    /* 132ED0 15105A20 4481F000 */  mtc1       $at, $f30
    /* 132ED4 15105A24 3C0141A0 */  lui        $at, (0x41A00000 >> 16)
    /* 132ED8 15105A28 87190002 */  lh         $t9, 0x2($t8)
    /* 132EDC 15105A2C 4481E000 */  mtc1       $at, $f28
    /* 132EE0 15105A30 3C01800A */  lui        $at, %hi(D_800A23F4)
    /* 132EE4 15105A34 44999000 */  mtc1       $t9, $f18
    /* 132EE8 15105A38 C43A23F4 */  lwc1       $f26, %lo(D_800A23F4)($at)
    /* 132EEC 15105A3C 3C01800A */  lui        $at, %hi(D_800A23F8)
    /* 132EF0 15105A40 46809120 */  cvt.s.w    $f4, $f18
    /* 132EF4 15105A44 C43823F8 */  lwc1       $f24, %lo(D_800A23F8)($at)
    /* 132EF8 15105A48 27B7008C */  addiu      $s7, $sp, 0x8C
    /* 132EFC 15105A4C 27B600D4 */  addiu      $s6, $sp, 0xD4
    /* 132F00 15105A50 24150065 */  addiu      $s5, $zero, 0x65
    /* 132F04 15105A54 27B200CC */  addiu      $s2, $sp, 0xCC
    /* 132F08 15105A58 E7A400D0 */  swc1       $f4, 0xD0($sp)
  .L15105A5C:
    /* 132F0C 15105A5C 0D42B688 */  jal        func_150ADA20
    /* 132F10 15105A60 00000000 */   nop
    /* 132F14 15105A64 0055001B */  divu       $zero, $v0, $s5
    /* 132F18 15105A68 00004010 */  mfhi       $t0
    /* 132F1C 15105A6C 2509009B */  addiu      $t1, $t0, 0x9B
    /* 132F20 15105A70 16A00002 */  bnez       $s5, .L15105A7C
    /* 132F24 15105A74 00000000 */   nop
    /* 132F28 15105A78 0007000D */  break      7
  .L15105A7C:
    /* 132F2C 15105A7C A3A900AA */  sb         $t1, 0xAA($sp)
    /* 132F30 15105A80 0D42B688 */  jal        func_150ADA20
    /* 132F34 15105A84 00000000 */   nop
    /* 132F38 15105A88 304A0003 */  andi       $t2, $v0, 0x3
    /* 132F3C 15105A8C 254B0003 */  addiu      $t3, $t2, 0x3
    /* 132F40 15105A90 A3AB00E1 */  sb         $t3, 0xE1($sp)
    /* 132F44 15105A94 8E840000 */  lw         $a0, 0x0($s4)
    /* 132F48 15105A98 AFBE0010 */  sw         $fp, 0x10($sp)
    /* 132F4C 15105A9C 02402825 */  or         $a1, $s2, $zero
    /* 132F50 15105AA0 02C03025 */  or         $a2, $s6, $zero
    /* 132F54 15105AA4 0D450CAF */  jal        func_151432BC
    /* 132F58 15105AA8 02E03825 */   or        $a3, $s7, $zero
    /* 132F5C 15105AAC 0D42B688 */  jal        func_150ADA20
    /* 132F60 15105AB0 00000000 */   nop
    /* 132F64 15105AB4 2401001F */  addiu      $at, $zero, 0x1F
    /* 132F68 15105AB8 0041001B */  divu       $zero, $v0, $at
    /* 132F6C 15105ABC 00006010 */  mfhi       $t4
    /* 132F70 15105AC0 258D001E */  addiu      $t5, $t4, 0x1E
    /* 132F74 15105AC4 0D42B69A */  jal        func_150ADA68
    /* 132F78 15105AC8 A7AD00D8 */   sh        $t5, 0xD8($sp)
    /* 132F7C 15105ACC 46180182 */  mul.s      $f6, $f0, $f24
    /* 132F80 15105AD0 461A3200 */  add.s      $f8, $f6, $f26
    /* 132F84 15105AD4 0D42B688 */  jal        func_150ADA20
    /* 132F88 15105AD8 E7A80090 */   swc1      $f8, 0x90($sp)
    /* 132F8C 15105ADC 0D42B688 */  jal        func_150ADA20
    /* 132F90 15105AE0 00408025 */   or        $s0, $v0, $zero
    /* 132F94 15105AE4 0D42B69A */  jal        func_150ADA68
    /* 132F98 15105AE8 00408825 */   or        $s1, $v0, $zero
    /* 132F9C 15105AEC 461C0482 */  mul.s      $f18, $f0, $f28
    /* 132FA0 15105AF0 24010016 */  addiu      $at, $zero, 0x16
    /* 132FA4 15105AF4 0221001B */  divu       $zero, $s1, $at
    /* 132FA8 15105AF8 461E9480 */  add.s      $f18, $f18, $f30
    /* 132FAC 15105AFC 00002810 */  mfhi       $a1
    /* 132FB0 15105B00 320400FF */  andi       $a0, $s0, 0xFF
    /* 132FB4 15105B04 24A5FFCA */  addiu      $a1, $a1, -0x36
    /* 132FB8 15105B08 44069000 */  mfc1       $a2, $f18
    /* 132FBC 15105B0C 00047400 */  sll        $t6, $a0, 16
    /* 132FC0 15105B10 0005C400 */  sll        $t8, $a1, 16
    /* 132FC4 15105B14 000E2403 */  sra        $a0, $t6, 16
    /* 132FC8 15105B18 00182C03 */  sra        $a1, $t8, 16
    /* 132FCC 15105B1C 0D450DE5 */  jal        func_15143794
    /* 132FD0 15105B20 27A70094 */   addiu     $a3, $sp, 0x94
    /* 132FD4 15105B24 0D42B69A */  jal        func_150ADA68
    /* 132FD8 15105B28 00000000 */   nop
    /* 132FDC 15105B2C 3C01800A */  lui        $at, %hi(D_800A23FC)
    /* 132FE0 15105B30 C43223FC */  lwc1       $f18, %lo(D_800A23FC)($at)
    /* 132FE4 15105B34 3C01800A */  lui        $at, %hi(D_800A2400)
    /* 132FE8 15105B38 C4262400 */  lwc1       $f6, %lo(D_800A2400)($at)
    /* 132FEC 15105B3C 46120102 */  mul.s      $f4, $f0, $f18
    /* 132FF0 15105B40 02402025 */  or         $a0, $s2, $zero
    /* 132FF4 15105B44 00002825 */  or         $a1, $zero, $zero
    /* 132FF8 15105B48 27A60090 */  addiu      $a2, $sp, 0x90
    /* 132FFC 15105B4C 00003825 */  or         $a3, $zero, $zero
    /* 133000 15105B50 46062200 */  add.s      $f8, $f4, $f6
    /* 133004 15105B54 E7A800A0 */  swc1       $f8, 0xA0($sp)
    /* 133008 15105B58 9268000C */  lbu        $t0, 0xC($s3)
    /* 13300C 15105B5C AFA80010 */  sw         $t0, 0x10($sp)
    /* 133010 15105B60 92690001 */  lbu        $t1, 0x1($s3)
    /* 133014 15105B64 0D4570BC */  jal        func_1515C2F0
    /* 133018 15105B68 AFA90014 */   sw        $t1, 0x14($sp)
    /* 13301C 15105B6C 4616A501 */  sub.s      $f20, $f20, $f22
    /* 133020 15105B70 4614B03C */  c.lt.s     $f22, $f20
    /* 133024 15105B74 00000000 */  nop
    /* 133028 15105B78 4501FFB8 */  bc1t       .L15105A5C
    /* 13302C 15105B7C 00000000 */   nop
    /* 133030 15105B80 8FBF0074 */  lw         $ra, 0x74($sp)
  .L15105B84:
    /* 133034 15105B84 D7B40020 */  ldc1       $f20, 0x20($sp)
    /* 133038 15105B88 D7B60028 */  ldc1       $f22, 0x28($sp)
    /* 13303C 15105B8C D7B80030 */  ldc1       $f24, 0x30($sp)
    /* 133040 15105B90 D7BA0038 */  ldc1       $f26, 0x38($sp)
    /* 133044 15105B94 D7BC0040 */  ldc1       $f28, 0x40($sp)
    /* 133048 15105B98 D7BE0048 */  ldc1       $f30, 0x48($sp)
    /* 13304C 15105B9C 8FB00050 */  lw         $s0, 0x50($sp)
    /* 133050 15105BA0 8FB10054 */  lw         $s1, 0x54($sp)
    /* 133054 15105BA4 8FB20058 */  lw         $s2, 0x58($sp)
    /* 133058 15105BA8 8FB3005C */  lw         $s3, 0x5C($sp)
    /* 13305C 15105BAC 8FB40060 */  lw         $s4, 0x60($sp)
    /* 133060 15105BB0 8FB50064 */  lw         $s5, 0x64($sp)
    /* 133064 15105BB4 8FB60068 */  lw         $s6, 0x68($sp)
    /* 133068 15105BB8 8FB7006C */  lw         $s7, 0x6C($sp)
    /* 13306C 15105BBC 8FBE0070 */  lw         $fp, 0x70($sp)
    /* 133070 15105BC0 03E00008 */  jr         $ra
    /* 133074 15105BC4 27BD00F0 */   addiu     $sp, $sp, 0xF0
endlabel func_151058B4
