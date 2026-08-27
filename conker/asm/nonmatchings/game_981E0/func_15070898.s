nonmatching func_15070898, 0x380

glabel func_15070898
    /* 9DD48 15070898 3C01800A */  lui        $at, %hi(D_80099EAC)
    /* 9DD4C 1507089C C4209EAC */  lwc1       $f0, %lo(D_80099EAC)($at)
    /* 9DD50 150708A0 3C01800A */  lui        $at, %hi(D_80099EB0)
    /* 9DD54 150708A4 C4229EB0 */  lwc1       $f2, %lo(D_80099EB0)($at)
    /* 9DD58 150708A8 3C01800A */  lui        $at, %hi(D_80099EB4)
    /* 9DD5C 150708AC C42C9EB4 */  lwc1       $f12, %lo(D_80099EB4)($at)
    /* 9DD60 150708B0 27BDFEC8 */  addiu      $sp, $sp, -0x138
    /* 9DD64 150708B4 3C01800A */  lui        $at, %hi(D_80099EB8)
    /* 9DD68 150708B8 C42E9EB8 */  lwc1       $f14, %lo(D_80099EB8)($at)
    /* 9DD6C 150708BC AFBF0014 */  sw         $ra, 0x14($sp)
    /* 9DD70 150708C0 AFA40138 */  sw         $a0, 0x138($sp)
    /* 9DD74 150708C4 3C02800D */  lui        $v0, %hi(D_800D154C)
    /* 9DD78 150708C8 8C42154C */  lw         $v0, %lo(D_800D154C)($v0)
    /* 9DD7C 150708CC 3C01800A */  lui        $at, %hi(D_80099EBC)
    /* 9DD80 150708D0 C4249EBC */  lwc1       $f4, %lo(D_80099EBC)($at)
    /* 9DD84 150708D4 AFA20020 */  sw         $v0, 0x20($sp)
    /* 9DD88 150708D8 904E003B */  lbu        $t6, 0x3B($v0)
    /* 9DD8C 150708DC 3C01800A */  lui        $at, %hi(D_80099EC0)
    /* 9DD90 150708E0 C4269EC0 */  lwc1       $f6, %lo(D_80099EC0)($at)
    /* 9DD94 150708E4 3C01800A */  lui        $at, %hi(D_80099EC4)
    /* 9DD98 150708E8 C4289EC4 */  lwc1       $f8, %lo(D_80099EC4)($at)
    /* 9DD9C 150708EC 3C01800A */  lui        $at, %hi(D_80099EC8)
    /* 9DDA0 150708F0 C42A9EC8 */  lwc1       $f10, %lo(D_80099EC8)($at)
    /* 9DDA4 150708F4 3C01439C */  lui        $at, (0x439C0000 >> 16)
    /* 9DDA8 150708F8 44818000 */  mtc1       $at, $f16
    /* 9DDAC 150708FC 3C01800A */  lui        $at, %hi(D_80099ECC)
    /* 9DDB0 15070900 C4329ECC */  lwc1       $f18, %lo(D_80099ECC)($at)
    /* 9DDB4 15070904 3C01800A */  lui        $at, %hi(D_80099ED0)
    /* 9DDB8 15070908 E7A40028 */  swc1       $f4, 0x28($sp)
    /* 9DDBC 1507090C C4249ED0 */  lwc1       $f4, %lo(D_80099ED0)($at)
    /* 9DDC0 15070910 3C0140A0 */  lui        $at, (0x40A00000 >> 16)
    /* 9DDC4 15070914 E7A6002C */  swc1       $f6, 0x2C($sp)
    /* 9DDC8 15070918 44813000 */  mtc1       $at, $f6
    /* 9DDCC 1507091C 3C01C368 */  lui        $at, (0xC3680000 >> 16)
    /* 9DDD0 15070920 E7A80040 */  swc1       $f8, 0x40($sp)
    /* 9DDD4 15070924 44814000 */  mtc1       $at, $f8
    /* 9DDD8 15070928 3C01800A */  lui        $at, %hi(D_80099ED4)
    /* 9DDDC 1507092C E7AA0044 */  swc1       $f10, 0x44($sp)
    /* 9DDE0 15070930 C42A9ED4 */  lwc1       $f10, %lo(D_80099ED4)($at)
    /* 9DDE4 15070934 3C01800A */  lui        $at, %hi(D_80099ED8)
    /* 9DDE8 15070938 E7B00048 */  swc1       $f16, 0x48($sp)
    /* 9DDEC 1507093C C4309ED8 */  lwc1       $f16, %lo(D_80099ED8)($at)
    /* 9DDF0 15070940 3C01800A */  lui        $at, %hi(D_80099EDC)
    /* 9DDF4 15070944 E7B2005C */  swc1       $f18, 0x5C($sp)
    /* 9DDF8 15070948 C4329EDC */  lwc1       $f18, %lo(D_80099EDC)($at)
    /* 9DDFC 1507094C 3C01800A */  lui        $at, %hi(D_80099EE0)
    /* 9DE00 15070950 E7A4004C */  swc1       $f4, 0x4C($sp)
    /* 9DE04 15070954 C4249EE0 */  lwc1       $f4, %lo(D_80099EE0)($at)
    /* 9DE08 15070958 3C01800A */  lui        $at, %hi(D_80099EE4)
    /* 9DE0C 1507095C E7A60050 */  swc1       $f6, 0x50($sp)
    /* 9DE10 15070960 C4269EE4 */  lwc1       $f6, %lo(D_80099EE4)($at)
    /* 9DE14 15070964 3C01800A */  lui        $at, %hi(D_80099EE8)
    /* 9DE18 15070968 E7A80060 */  swc1       $f8, 0x60($sp)
    /* 9DE1C 1507096C C4289EE8 */  lwc1       $f8, %lo(D_80099EE8)($at)
    /* 9DE20 15070970 3C01800A */  lui        $at, %hi(D_80099EEC)
    /* 9DE24 15070974 E7AA0064 */  swc1       $f10, 0x64($sp)
    /* 9DE28 15070978 C42A9EEC */  lwc1       $f10, %lo(D_80099EEC)($at)
    /* 9DE2C 1507097C 3C01800A */  lui        $at, %hi(D_80099EF0)
    /* 9DE30 15070980 E7B00074 */  swc1       $f16, 0x74($sp)
    /* 9DE34 15070984 C4309EF0 */  lwc1       $f16, %lo(D_80099EF0)($at)
    /* 9DE38 15070988 3C01800A */  lui        $at, %hi(D_80099EF4)
    /* 9DE3C 1507098C E7B20078 */  swc1       $f18, 0x78($sp)
    /* 9DE40 15070990 C4329EF4 */  lwc1       $f18, %lo(D_80099EF4)($at)
    /* 9DE44 15070994 3C013E00 */  lui        $at, (0x3E000000 >> 16)
    /* 9DE48 15070998 E7A40080 */  swc1       $f4, 0x80($sp)
    /* 9DE4C 1507099C 44812000 */  mtc1       $at, $f4
    /* 9DE50 150709A0 3C01800A */  lui        $at, %hi(D_80099EF8)
    /* 9DE54 150709A4 E7A60088 */  swc1       $f6, 0x88($sp)
    /* 9DE58 150709A8 C4269EF8 */  lwc1       $f6, %lo(D_80099EF8)($at)
    /* 9DE5C 150709AC 3C01800A */  lui        $at, %hi(D_80099EFC)
    /* 9DE60 150709B0 E7A80084 */  swc1       $f8, 0x84($sp)
    /* 9DE64 150709B4 C4289EFC */  lwc1       $f8, %lo(D_80099EFC)($at)
    /* 9DE68 150709B8 3C01800A */  lui        $at, %hi(D_80099F00)
    /* 9DE6C 150709BC E7AA008C */  swc1       $f10, 0x8C($sp)
    /* 9DE70 150709C0 C42A9F00 */  lwc1       $f10, %lo(D_80099F00)($at)
    /* 9DE74 150709C4 3C01800A */  lui        $at, %hi(D_80099F04)
    /* 9DE78 150709C8 E7B00090 */  swc1       $f16, 0x90($sp)
    /* 9DE7C 150709CC C4309F04 */  lwc1       $f16, %lo(D_80099F04)($at)
    /* 9DE80 150709D0 3C01800A */  lui        $at, %hi(D_80099F08)
    /* 9DE84 150709D4 E7B20094 */  swc1       $f18, 0x94($sp)
    /* 9DE88 150709D8 C4329F08 */  lwc1       $f18, %lo(D_80099F08)($at)
    /* 9DE8C 150709DC 3C01800A */  lui        $at, %hi(D_80099F0C)
    /* 9DE90 150709E0 E7A40098 */  swc1       $f4, 0x98($sp)
    /* 9DE94 150709E4 C4249F0C */  lwc1       $f4, %lo(D_80099F0C)($at)
    /* 9DE98 150709E8 3C0140C0 */  lui        $at, (0x40C00000 >> 16)
    /* 9DE9C 150709EC E7A6009C */  swc1       $f6, 0x9C($sp)
    /* 9DEA0 150709F0 44813000 */  mtc1       $at, $f6
    /* 9DEA4 150709F4 3C0140A0 */  lui        $at, (0x40A00000 >> 16)
    /* 9DEA8 150709F8 E7A800A0 */  swc1       $f8, 0xA0($sp)
    /* 9DEAC 150709FC 44814000 */  mtc1       $at, $f8
    /* 9DEB0 15070A00 3C014248 */  lui        $at, (0x42480000 >> 16)
    /* 9DEB4 15070A04 E7AA00A4 */  swc1       $f10, 0xA4($sp)
    /* 9DEB8 15070A08 44815000 */  mtc1       $at, $f10
    /* 9DEBC 15070A0C 3C01800A */  lui        $at, %hi(D_80099F10)
    /* 9DEC0 15070A10 E7B200B4 */  swc1       $f18, 0xB4($sp)
    /* 9DEC4 15070A14 C4329F10 */  lwc1       $f18, %lo(D_80099F10)($at)
    /* 9DEC8 15070A18 3C01800A */  lui        $at, %hi(D_80099F14)
    /* 9DECC 15070A1C E7A400C8 */  swc1       $f4, 0xC8($sp)
    /* 9DED0 15070A20 C4249F14 */  lwc1       $f4, %lo(D_80099F14)($at)
    /* 9DED4 15070A24 3C01800A */  lui        $at, %hi(D_80099F18)
    /* 9DED8 15070A28 E7A600D8 */  swc1       $f6, 0xD8($sp)
    /* 9DEDC 15070A2C C4269F18 */  lwc1       $f6, %lo(D_80099F18)($at)
    /* 9DEE0 15070A30 3C01430C */  lui        $at, (0x430C0000 >> 16)
    /* 9DEE4 15070A34 E7B000AC */  swc1       $f16, 0xAC($sp)
    /* 9DEE8 15070A38 E7A800DC */  swc1       $f8, 0xDC($sp)
    /* 9DEEC 15070A3C 44808000 */  mtc1       $zero, $f16
    /* 9DEF0 15070A40 44814000 */  mtc1       $at, $f8
    /* 9DEF4 15070A44 3C014336 */  lui        $at, (0x43360000 >> 16)
    /* 9DEF8 15070A48 E7AA00E8 */  swc1       $f10, 0xE8($sp)
    /* 9DEFC 15070A4C 44815000 */  mtc1       $at, $f10
    /* 9DF00 15070A50 3C01800A */  lui        $at, %hi(D_80099F1C)
    /* 9DF04 15070A54 E7B000EC */  swc1       $f16, 0xEC($sp)
    /* 9DF08 15070A58 C4309F1C */  lwc1       $f16, %lo(D_80099F1C)($at)
    /* 9DF0C 15070A5C 3C01800A */  lui        $at, %hi(D_80099F20)
    /* 9DF10 15070A60 E7B200F0 */  swc1       $f18, 0xF0($sp)
    /* 9DF14 15070A64 C4329F20 */  lwc1       $f18, %lo(D_80099F20)($at)
    /* 9DF18 15070A68 240F0009 */  addiu      $t7, $zero, 0x9
    /* 9DF1C 15070A6C 241800B4 */  addiu      $t8, $zero, 0xB4
    /* 9DF20 15070A70 2419FFFF */  addiu      $t9, $zero, -0x1
    /* 9DF24 15070A74 24080001 */  addiu      $t0, $zero, 0x1
    /* 9DF28 15070A78 2409FFFF */  addiu      $t1, $zero, -0x1
    /* 9DF2C 15070A7C 3C014228 */  lui        $at, (0x42280000 >> 16)
    /* 9DF30 15070A80 E7A40108 */  swc1       $f4, 0x108($sp)
    /* 9DF34 15070A84 44812000 */  mtc1       $at, $f4
    /* 9DF38 15070A88 A3AF0025 */  sb         $t7, 0x25($sp)
    /* 9DF3C 15070A8C A3B8005A */  sb         $t8, 0x5A($sp)
    /* 9DF40 15070A90 A3B90054 */  sb         $t9, 0x54($sp)
    /* 9DF44 15070A94 A3A80055 */  sb         $t0, 0x55($sp)
    /* 9DF48 15070A98 A3A90056 */  sb         $t1, 0x56($sp)
    /* 9DF4C 15070A9C A3AE0024 */  sb         $t6, 0x24($sp)
    /* 9DF50 15070AA0 240AFFFF */  addiu      $t2, $zero, -0x1
    /* 9DF54 15070AA4 240BFFFF */  addiu      $t3, $zero, -0x1
    /* 9DF58 15070AA8 240CFFFF */  addiu      $t4, $zero, -0x1
    /* 9DF5C 15070AAC 240DFFFF */  addiu      $t5, $zero, -0x1
    /* 9DF60 15070AB0 240E000F */  addiu      $t6, $zero, 0xF
    /* 9DF64 15070AB4 240F0011 */  addiu      $t7, $zero, 0x11
    /* 9DF68 15070AB8 2418003C */  addiu      $t8, $zero, 0x3C
    /* 9DF6C 15070ABC 241900FF */  addiu      $t9, $zero, 0xFF
    /* 9DF70 15070AC0 240800EB */  addiu      $t0, $zero, 0xEB
    /* 9DF74 15070AC4 24090052 */  addiu      $t1, $zero, 0x52
    /* 9DF78 15070AC8 3C01800A */  lui        $at, %hi(D_80099F24)
    /* 9DF7C 15070ACC E7A6010C */  swc1       $f6, 0x10C($sp)
    /* 9DF80 15070AD0 C4269F24 */  lwc1       $f6, %lo(D_80099F24)($at)
    /* 9DF84 15070AD4 A3AA0057 */  sb         $t2, 0x57($sp)
    /* 9DF88 15070AD8 A3AB0058 */  sb         $t3, 0x58($sp)
    /* 9DF8C 15070ADC A3AC0059 */  sb         $t4, 0x59($sp)
    /* 9DF90 15070AE0 A3AD0068 */  sb         $t5, 0x68($sp)
    /* 9DF94 15070AE4 AFAE001C */  sw         $t6, 0x1C($sp)
    /* 9DF98 15070AE8 A3AF0070 */  sb         $t7, 0x70($sp)
    /* 9DF9C 15070AEC A3B8006C */  sb         $t8, 0x6C($sp)
    /* 9DFA0 15070AF0 A3B9006D */  sb         $t9, 0x6D($sp)
    /* 9DFA4 15070AF4 A3A8006E */  sb         $t0, 0x6E($sp)
    /* 9DFA8 15070AF8 A3A9006F */  sb         $t1, 0x6F($sp)
    /* 9DFAC 15070AFC 240A0019 */  addiu      $t2, $zero, 0x19
    /* 9DFB0 15070B00 240B000A */  addiu      $t3, $zero, 0xA
    /* 9DFB4 15070B04 240C000C */  addiu      $t4, $zero, 0xC
    /* 9DFB8 15070B08 240D0015 */  addiu      $t5, $zero, 0x15
    /* 9DFBC 15070B0C 240E0050 */  addiu      $t6, $zero, 0x50
    /* 9DFC0 15070B10 240F0050 */  addiu      $t7, $zero, 0x50
    /* 9DFC4 15070B14 24180004 */  addiu      $t8, $zero, 0x4
    /* 9DFC8 15070B18 24190002 */  addiu      $t9, $zero, 0x2
    /* 9DFCC 15070B1C 2408001A */  addiu      $t0, $zero, 0x1A
    /* 9DFD0 15070B20 24090010 */  addiu      $t1, $zero, 0x10
    /* 9DFD4 15070B24 3C01800A */  lui        $at, %hi(D_80099F28)
    /* 9DFD8 15070B28 E7A80118 */  swc1       $f8, 0x118($sp)
    /* 9DFDC 15070B2C C4289F28 */  lwc1       $f8, %lo(D_80099F28)($at)
    /* 9DFE0 15070B30 A7AA007C */  sh         $t2, 0x7C($sp)
    /* 9DFE4 15070B34 A7AB007E */  sh         $t3, 0x7E($sp)
    /* 9DFE8 15070B38 A7AC00A8 */  sh         $t4, 0xA8($sp)
    /* 9DFEC 15070B3C A7AD00AA */  sh         $t5, 0xAA($sp)
    /* 9DFF0 15070B40 A3AE00B0 */  sb         $t6, 0xB0($sp)
    /* 9DFF4 15070B44 A3AF00B1 */  sb         $t7, 0xB1($sp)
    /* 9DFF8 15070B48 AFB800CC */  sw         $t8, 0xCC($sp)
    /* 9DFFC 15070B4C AFB900D0 */  sw         $t9, 0xD0($sp)
    /* 9E000 15070B50 A7A800D4 */  sh         $t0, 0xD4($sp)
    /* 9E004 15070B54 A7A900D6 */  sh         $t1, 0xD6($sp)
    /* 9E008 15070B58 240A0050 */  addiu      $t2, $zero, 0x50
    /* 9E00C 15070B5C 240B0078 */  addiu      $t3, $zero, 0x78
    /* 9E010 15070B60 240C000F */  addiu      $t4, $zero, 0xF
    /* 9E014 15070B64 240D0011 */  addiu      $t5, $zero, 0x11
    /* 9E018 15070B68 240E001E */  addiu      $t6, $zero, 0x1E
    /* 9E01C 15070B6C 240F000F */  addiu      $t7, $zero, 0xF
    /* 9E020 15070B70 24180050 */  addiu      $t8, $zero, 0x50
    /* 9E024 15070B74 24190050 */  addiu      $t9, $zero, 0x50
    /* 9E028 15070B78 2408000A */  addiu      $t0, $zero, 0xA
    /* 9E02C 15070B7C 24090019 */  addiu      $t1, $zero, 0x19
    /* 9E030 15070B80 E7A00030 */  swc1       $f0, 0x30($sp)
    /* 9E034 15070B84 E7A20034 */  swc1       $f2, 0x34($sp)
    /* 9E038 15070B88 E7AC0038 */  swc1       $f12, 0x38($sp)
    /* 9E03C 15070B8C E7A0003C */  swc1       $f0, 0x3C($sp)
    /* 9E040 15070B90 E7A200B8 */  swc1       $f2, 0xB8($sp)
    /* 9E044 15070B94 E7AC00BC */  swc1       $f12, 0xBC($sp)
    /* 9E048 15070B98 E7A000C0 */  swc1       $f0, 0xC0($sp)
    /* 9E04C 15070B9C E7AE00C4 */  swc1       $f14, 0xC4($sp)
    /* 9E050 15070BA0 E7AE00E0 */  swc1       $f14, 0xE0($sp)
    /* 9E054 15070BA4 E7AE00E4 */  swc1       $f14, 0xE4($sp)
    /* 9E058 15070BA8 A7AA00F4 */  sh         $t2, 0xF4($sp)
    /* 9E05C 15070BAC A7AB00F6 */  sh         $t3, 0xF6($sp)
    /* 9E060 15070BB0 A7AC00F8 */  sh         $t4, 0xF8($sp)
    /* 9E064 15070BB4 A7AD00FA */  sh         $t5, 0xFA($sp)
    /* 9E068 15070BB8 E7A200FC */  swc1       $f2, 0xFC($sp)
    /* 9E06C 15070BBC E7AC0100 */  swc1       $f12, 0x100($sp)
    /* 9E070 15070BC0 E7A00104 */  swc1       $f0, 0x104($sp)
    /* 9E074 15070BC4 A7AE0110 */  sh         $t6, 0x110($sp)
    /* 9E078 15070BC8 A7AF0112 */  sh         $t7, 0x112($sp)
    /* 9E07C 15070BCC A7B80114 */  sh         $t8, 0x114($sp)
    /* 9E080 15070BD0 A7B90116 */  sh         $t9, 0x116($sp)
    /* 9E084 15070BD4 A7A80134 */  sh         $t0, 0x134($sp)
    /* 9E088 15070BD8 A7A90136 */  sh         $t1, 0x136($sp)
    /* 9E08C 15070BDC 00002025 */  or         $a0, $zero, $zero
    /* 9E090 15070BE0 27A5001C */  addiu      $a1, $sp, 0x1C
    /* 9E094 15070BE4 240600FF */  addiu      $a2, $zero, 0xFF
    /* 9E098 15070BE8 00003825 */  or         $a3, $zero, $zero
    /* 9E09C 15070BEC E7AA011C */  swc1       $f10, 0x11C($sp)
    /* 9E0A0 15070BF0 E7B00120 */  swc1       $f16, 0x120($sp)
    /* 9E0A4 15070BF4 E7B20124 */  swc1       $f18, 0x124($sp)
    /* 9E0A8 15070BF8 E7A40128 */  swc1       $f4, 0x128($sp)
    /* 9E0AC 15070BFC E7A6012C */  swc1       $f6, 0x12C($sp)
    /* 9E0B0 15070C00 0D46652E */  jal        func_151994B8
    /* 9E0B4 15070C04 E7A80130 */   swc1      $f8, 0x130($sp)
    /* 9E0B8 15070C08 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 9E0BC 15070C0C 27BD0138 */  addiu      $sp, $sp, 0x138
    /* 9E0C0 15070C10 03E00008 */  jr         $ra
    /* 9E0C4 15070C14 00000000 */   nop
endlabel func_15070898
