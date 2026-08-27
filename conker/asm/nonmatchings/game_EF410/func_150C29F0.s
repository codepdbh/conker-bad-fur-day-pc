nonmatching func_150C29F0, 0x210

glabel func_150C29F0
    /* EFEA0 150C29F0 27BDFF78 */  addiu      $sp, $sp, -0x88
    /* EFEA4 150C29F4 AFBF001C */  sw         $ra, 0x1C($sp)
    /* EFEA8 150C29F8 AFA40088 */  sw         $a0, 0x88($sp)
    /* EFEAC 150C29FC 0D42B688 */  jal        func_150ADA20
    /* EFEB0 150C2A00 00000000 */   nop
    /* EFEB4 150C2A04 00402025 */  or         $a0, $v0, $zero
    /* EFEB8 150C2A08 A3A40033 */  sb         $a0, 0x33($sp)
    /* EFEBC 150C2A0C 2484FFC0 */  addiu      $a0, $a0, -0x40
    /* EFEC0 150C2A10 308E00FF */  andi       $t6, $a0, 0xFF
    /* EFEC4 150C2A14 0D4508F6 */  jal        func_151423D8
    /* EFEC8 150C2A18 01C02025 */   or        $a0, $t6, $zero
    /* EFECC 150C2A1C E7A0002C */  swc1       $f0, 0x2C($sp)
    /* EFED0 150C2A20 0D4508F6 */  jal        func_151423D8
    /* EFED4 150C2A24 93A40033 */   lbu       $a0, 0x33($sp)
    /* EFED8 150C2A28 0D42B69A */  jal        func_150ADA68
    /* EFEDC 150C2A2C E7A00028 */   swc1      $f0, 0x28($sp)
    /* EFEE0 150C2A30 8FA30088 */  lw         $v1, 0x88($sp)
    /* EFEE4 150C2A34 240F6231 */  addiu      $t7, $zero, 0x6231
    /* EFEE8 150C2A38 24181A4D */  addiu      $t8, $zero, 0x1A4D
    /* EFEEC 150C2A3C C4640030 */  lwc1       $f4, 0x30($v1)
    /* EFEF0 150C2A40 241900FF */  addiu      $t9, $zero, 0xFF
    /* EFEF4 150C2A44 240800FF */  addiu      $t0, $zero, 0xFF
    /* EFEF8 150C2A48 46040082 */  mul.s      $f2, $f0, $f4
    /* EFEFC 150C2A4C 240900FF */  addiu      $t1, $zero, 0xFF
    /* EFF00 150C2A50 240A0001 */  addiu      $t2, $zero, 0x1
    /* EFF04 150C2A54 240B0001 */  addiu      $t3, $zero, 0x1
    /* EFF08 150C2A58 24630028 */  addiu      $v1, $v1, 0x28
    /* EFF0C 150C2A5C A7B8005E */  sh         $t8, 0x5E($sp)
    /* EFF10 150C2A60 A7AF005C */  sh         $t7, 0x5C($sp)
    /* EFF14 150C2A64 A3A00062 */  sb         $zero, 0x62($sp)
    /* EFF18 150C2A68 A3A00063 */  sb         $zero, 0x63($sp)
    /* EFF1C 150C2A6C A3A00064 */  sb         $zero, 0x64($sp)
    /* EFF20 150C2A70 A3B90065 */  sb         $t9, 0x65($sp)
    /* EFF24 150C2A74 A3A80068 */  sb         $t0, 0x68($sp)
    /* EFF28 150C2A78 A3A90069 */  sb         $t1, 0x69($sp)
    /* EFF2C 150C2A7C AFA0006C */  sw         $zero, 0x6C($sp)
    /* EFF30 150C2A80 A7AA0066 */  sh         $t2, 0x66($sp)
    /* EFF34 150C2A84 A3A0006A */  sb         $zero, 0x6A($sp)
    /* EFF38 150C2A88 A3AB006B */  sb         $t3, 0x6B($sp)
    /* EFF3C 150C2A8C AFA30020 */  sw         $v1, 0x20($sp)
    /* EFF40 150C2A90 0D42B688 */  jal        func_150ADA20
    /* EFF44 150C2A94 E7A20024 */   swc1      $f2, 0x24($sp)
    /* EFF48 150C2A98 240100C9 */  addiu      $at, $zero, 0xC9
    /* EFF4C 150C2A9C 0041001B */  divu       $zero, $v0, $at
    /* EFF50 150C2AA0 C7A20024 */  lwc1       $f2, 0x24($sp)
    /* EFF54 150C2AA4 C7B2002C */  lwc1       $f18, 0x2C($sp)
    /* EFF58 150C2AA8 3C01800A */  lui        $at, %hi(D_800A02A0)
    /* EFF5C 150C2AAC C42802A0 */  lwc1       $f8, %lo(D_800A02A0)($at)
    /* EFF60 150C2AB0 3C01800A */  lui        $at, %hi(D_800A02A4)
    /* EFF64 150C2AB4 46121102 */  mul.s      $f4, $f2, $f18
    /* EFF68 150C2AB8 44803000 */  mtc1       $zero, $f6
    /* EFF6C 150C2ABC C42A02A4 */  lwc1       $f10, %lo(D_800A02A4)($at)
    /* EFF70 150C2AC0 8FA30020 */  lw         $v1, 0x20($sp)
    /* EFF74 150C2AC4 00006010 */  mfhi       $t4
    /* EFF78 150C2AC8 258D0064 */  addiu      $t5, $t4, 0x64
    /* EFF7C 150C2ACC 240E000F */  addiu      $t6, $zero, 0xF
    /* EFF80 150C2AD0 A7AD0060 */  sh         $t5, 0x60($sp)
    /* EFF84 150C2AD4 A3AE0070 */  sb         $t6, 0x70($sp)
    /* EFF88 150C2AD8 E7A8007C */  swc1       $f8, 0x7C($sp)
    /* EFF8C 150C2ADC E7A60074 */  swc1       $f6, 0x74($sp)
    /* EFF90 150C2AE0 E7AA0080 */  swc1       $f10, 0x80($sp)
    /* EFF94 150C2AE4 C4700000 */  lwc1       $f16, 0x0($v1)
    /* EFF98 150C2AE8 C7B20028 */  lwc1       $f18, 0x28($sp)
    /* EFF9C 150C2AEC 3C01800A */  lui        $at, %hi(D_800A02A8)
    /* EFFA0 150C2AF0 46048180 */  add.s      $f6, $f16, $f4
    /* EFFA4 150C2AF4 46121402 */  mul.s      $f16, $f2, $f18
    /* EFFA8 150C2AF8 E7A6003C */  swc1       $f6, 0x3C($sp)
    /* EFFAC 150C2AFC C468000C */  lwc1       $f8, 0xC($v1)
    /* EFFB0 150C2B00 C42602A8 */  lwc1       $f6, %lo(D_800A02A8)($at)
    /* EFFB4 150C2B04 E7A80040 */  swc1       $f8, 0x40($sp)
    /* EFFB8 150C2B08 C46A0004 */  lwc1       $f10, 0x4($v1)
    /* EFFBC 150C2B0C E7A60078 */  swc1       $f6, 0x78($sp)
    /* EFFC0 150C2B10 46105100 */  add.s      $f4, $f10, $f16
    /* EFFC4 150C2B14 0D42B69A */  jal        func_150ADA68
    /* EFFC8 150C2B18 E7A40044 */   swc1      $f4, 0x44($sp)
    /* EFFCC 150C2B1C 3C013F00 */  lui        $at, (0x3F000000 >> 16)
    /* EFFD0 150C2B20 44814000 */  mtc1       $at, $f8
    /* EFFD4 150C2B24 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* EFFD8 150C2B28 44815000 */  mtc1       $at, $f10
    /* EFFDC 150C2B2C 46080482 */  mul.s      $f18, $f0, $f8
    /* EFFE0 150C2B30 460A9300 */  add.s      $f12, $f18, $f10
    /* EFFE4 150C2B34 0D42B69A */  jal        func_150ADA68
    /* EFFE8 150C2B38 E7AC0038 */   swc1      $f12, 0x38($sp)
    /* EFFEC 150C2B3C 3C01800A */  lui        $at, %hi(D_800A02AC)
    /* EFFF0 150C2B40 C7AC0038 */  lwc1       $f12, 0x38($sp)
    /* EFFF4 150C2B44 C43002AC */  lwc1       $f16, %lo(D_800A02AC)($at)
    /* EFFF8 150C2B48 3C01800A */  lui        $at, %hi(D_800A02B0)
    /* EFFFC 150C2B4C C42602B0 */  lwc1       $f6, %lo(D_800A02B0)($at)
    /* F0000 150C2B50 460C8102 */  mul.s      $f4, $f16, $f12
    /* F0004 150C2B54 3C013F00 */  lui        $at, (0x3F000000 >> 16)
    /* F0008 150C2B58 44819000 */  mtc1       $at, $f18
    /* F000C 150C2B5C 460C3202 */  mul.s      $f8, $f6, $f12
    /* F0010 150C2B60 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* F0014 150C2B64 44818000 */  mtc1       $at, $f16
    /* F0018 150C2B68 46120282 */  mul.s      $f10, $f0, $f18
    /* F001C 150C2B6C E7A40048 */  swc1       $f4, 0x48($sp)
    /* F0020 150C2B70 3C01800A */  lui        $at, %hi(D_800A02B4)
    /* F0024 150C2B74 C42402B4 */  lwc1       $f4, %lo(D_800A02B4)($at)
    /* F0028 150C2B78 E7A80050 */  swc1       $f8, 0x50($sp)
    /* F002C 150C2B7C 3C01800A */  lui        $at, %hi(D_800A02B8)
    /* F0030 150C2B80 C42802B8 */  lwc1       $f8, %lo(D_800A02B8)($at)
    /* F0034 150C2B84 46105080 */  add.s      $f2, $f10, $f16
    /* F0038 150C2B88 3C01800A */  lui        $at, %hi(D_800A02BC)
    /* F003C 150C2B8C C42A02BC */  lwc1       $f10, %lo(D_800A02BC)($at)
    /* F0040 150C2B90 8FA20088 */  lw         $v0, 0x88($sp)
    /* F0044 150C2B94 46022182 */  mul.s      $f6, $f4, $f2
    /* F0048 150C2B98 27A4003C */  addiu      $a0, $sp, 0x3C
    /* F004C 150C2B9C 2405000A */  addiu      $a1, $zero, 0xA
    /* F0050 150C2BA0 46024482 */  mul.s      $f18, $f8, $f2
    /* F0054 150C2BA4 24060001 */  addiu      $a2, $zero, 0x1
    /* F0058 150C2BA8 00003825 */  or         $a3, $zero, $zero
    /* F005C 150C2BAC 46025402 */  mul.s      $f16, $f10, $f2
    /* F0060 150C2BB0 E7A6004C */  swc1       $f6, 0x4C($sp)
    /* F0064 150C2BB4 E7B20054 */  swc1       $f18, 0x54($sp)
    /* F0068 150C2BB8 E7B00058 */  swc1       $f16, 0x58($sp)
    /* F006C 150C2BBC 904F000C */  lbu        $t7, 0xC($v0)
    /* F0070 150C2BC0 AFAF0010 */  sw         $t7, 0x10($sp)
    /* F0074 150C2BC4 90580001 */  lbu        $t8, 0x1($v0)
    /* F0078 150C2BC8 0D452554 */  jal        func_15149550
    /* F007C 150C2BCC AFB80014 */   sw        $t8, 0x14($sp)
    /* F0080 150C2BD0 0D42B688 */  jal        func_150ADA20
    /* F0084 150C2BD4 00000000 */   nop
    /* F0088 150C2BD8 24010033 */  addiu      $at, $zero, 0x33
    /* F008C 150C2BDC 0041001B */  divu       $zero, $v0, $at
    /* F0090 150C2BE0 8FA90088 */  lw         $t1, 0x88($sp)
    /* F0094 150C2BE4 0000C810 */  mfhi       $t9
    /* F0098 150C2BE8 27280019 */  addiu      $t0, $t9, 0x19
    /* F009C 150C2BEC A528000E */  sh         $t0, 0xE($t1)
    /* F00A0 150C2BF0 8FBF001C */  lw         $ra, 0x1C($sp)
    /* F00A4 150C2BF4 27BD0088 */  addiu      $sp, $sp, 0x88
    /* F00A8 150C2BF8 03E00008 */  jr         $ra
    /* F00AC 150C2BFC 00000000 */   nop
endlabel func_150C29F0
