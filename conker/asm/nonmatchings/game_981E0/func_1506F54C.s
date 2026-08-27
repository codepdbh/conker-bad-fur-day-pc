nonmatching func_1506F54C, 0x374

glabel func_1506F54C
    /* 9C9FC 1506F54C 3C0141B0 */  lui        $at, (0x41B00000 >> 16)
    /* 9CA00 1506F550 44810000 */  mtc1       $at, $f0
    /* 9CA04 1506F554 3C01800A */  lui        $at, %hi(D_80099E24)
    /* 9CA08 1506F558 C4229E24 */  lwc1       $f2, %lo(D_80099E24)($at)
    /* 9CA0C 1506F55C 27BDFEC8 */  addiu      $sp, $sp, -0x138
    /* 9CA10 1506F560 3C01800A */  lui        $at, %hi(D_80099E28)
    /* 9CA14 1506F564 C42C9E28 */  lwc1       $f12, %lo(D_80099E28)($at)
    /* 9CA18 1506F568 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 9CA1C 1506F56C AFA40138 */  sw         $a0, 0x138($sp)
    /* 9CA20 1506F570 3C02800D */  lui        $v0, %hi(D_800D154C)
    /* 9CA24 1506F574 8C42154C */  lw         $v0, %lo(D_800D154C)($v0)
    /* 9CA28 1506F578 3C014325 */  lui        $at, (0x43250000 >> 16)
    /* 9CA2C 1506F57C 44812000 */  mtc1       $at, $f4
    /* 9CA30 1506F580 AFA20020 */  sw         $v0, 0x20($sp)
    /* 9CA34 1506F584 904E003B */  lbu        $t6, 0x3B($v0)
    /* 9CA38 1506F588 3C014341 */  lui        $at, (0x43410000 >> 16)
    /* 9CA3C 1506F58C 44813000 */  mtc1       $at, $f6
    /* 9CA40 1506F590 3C01800A */  lui        $at, %hi(D_80099E2C)
    /* 9CA44 1506F594 C4289E2C */  lwc1       $f8, %lo(D_80099E2C)($at)
    /* 9CA48 1506F598 3C01800A */  lui        $at, %hi(D_80099E30)
    /* 9CA4C 1506F59C C42A9E30 */  lwc1       $f10, %lo(D_80099E30)($at)
    /* 9CA50 1506F5A0 3C0143B9 */  lui        $at, (0x43B90000 >> 16)
    /* 9CA54 1506F5A4 44818000 */  mtc1       $at, $f16
    /* 9CA58 1506F5A8 3C01800A */  lui        $at, %hi(D_80099E34)
    /* 9CA5C 1506F5AC C4329E34 */  lwc1       $f18, %lo(D_80099E34)($at)
    /* 9CA60 1506F5B0 3C01800A */  lui        $at, %hi(D_80099E38)
    /* 9CA64 1506F5B4 E7A40030 */  swc1       $f4, 0x30($sp)
    /* 9CA68 1506F5B8 C4249E38 */  lwc1       $f4, %lo(D_80099E38)($at)
    /* 9CA6C 1506F5BC 3C01800A */  lui        $at, %hi(D_80099E3C)
    /* 9CA70 1506F5C0 E7A6003C */  swc1       $f6, 0x3C($sp)
    /* 9CA74 1506F5C4 C4269E3C */  lwc1       $f6, %lo(D_80099E3C)($at)
    /* 9CA78 1506F5C8 3C01C33F */  lui        $at, (0xC33F0000 >> 16)
    /* 9CA7C 1506F5CC E7A80040 */  swc1       $f8, 0x40($sp)
    /* 9CA80 1506F5D0 44814000 */  mtc1       $at, $f8
    /* 9CA84 1506F5D4 3C01800A */  lui        $at, %hi(D_80099E40)
    /* 9CA88 1506F5D8 E7AA0044 */  swc1       $f10, 0x44($sp)
    /* 9CA8C 1506F5DC C42A9E40 */  lwc1       $f10, %lo(D_80099E40)($at)
    /* 9CA90 1506F5E0 3C01800A */  lui        $at, %hi(D_80099E44)
    /* 9CA94 1506F5E4 E7B00048 */  swc1       $f16, 0x48($sp)
    /* 9CA98 1506F5E8 C4309E44 */  lwc1       $f16, %lo(D_80099E44)($at)
    /* 9CA9C 1506F5EC 3C01800A */  lui        $at, %hi(D_80099E48)
    /* 9CAA0 1506F5F0 E7B2005C */  swc1       $f18, 0x5C($sp)
    /* 9CAA4 1506F5F4 C4329E48 */  lwc1       $f18, %lo(D_80099E48)($at)
    /* 9CAA8 1506F5F8 3C01800A */  lui        $at, %hi(D_80099E4C)
    /* 9CAAC 1506F5FC E7A4004C */  swc1       $f4, 0x4C($sp)
    /* 9CAB0 1506F600 C4249E4C */  lwc1       $f4, %lo(D_80099E4C)($at)
    /* 9CAB4 1506F604 3C01800A */  lui        $at, %hi(D_80099E50)
    /* 9CAB8 1506F608 E7A60050 */  swc1       $f6, 0x50($sp)
    /* 9CABC 1506F60C C4269E50 */  lwc1       $f6, %lo(D_80099E50)($at)
    /* 9CAC0 1506F610 3C01800A */  lui        $at, %hi(D_80099E54)
    /* 9CAC4 1506F614 E7A80060 */  swc1       $f8, 0x60($sp)
    /* 9CAC8 1506F618 C4289E54 */  lwc1       $f8, %lo(D_80099E54)($at)
    /* 9CACC 1506F61C 3C01800A */  lui        $at, %hi(D_80099E58)
    /* 9CAD0 1506F620 E7AA0064 */  swc1       $f10, 0x64($sp)
    /* 9CAD4 1506F624 C42A9E58 */  lwc1       $f10, %lo(D_80099E58)($at)
    /* 9CAD8 1506F628 3C01800A */  lui        $at, %hi(D_80099E5C)
    /* 9CADC 1506F62C E7B00074 */  swc1       $f16, 0x74($sp)
    /* 9CAE0 1506F630 C4309E5C */  lwc1       $f16, %lo(D_80099E5C)($at)
    /* 9CAE4 1506F634 3C01800A */  lui        $at, %hi(D_80099E60)
    /* 9CAE8 1506F638 E7B20078 */  swc1       $f18, 0x78($sp)
    /* 9CAEC 1506F63C C4329E60 */  lwc1       $f18, %lo(D_80099E60)($at)
    /* 9CAF0 1506F640 3C01800A */  lui        $at, %hi(D_80099E64)
    /* 9CAF4 1506F644 E7A60088 */  swc1       $f6, 0x88($sp)
    /* 9CAF8 1506F648 C4269E64 */  lwc1       $f6, %lo(D_80099E64)($at)
    /* 9CAFC 1506F64C 3C01800A */  lui        $at, %hi(D_80099E68)
    /* 9CB00 1506F650 E7A80084 */  swc1       $f8, 0x84($sp)
    /* 9CB04 1506F654 C4289E68 */  lwc1       $f8, %lo(D_80099E68)($at)
    /* 9CB08 1506F658 3C01800A */  lui        $at, %hi(D_80099E6C)
    /* 9CB0C 1506F65C E7AA008C */  swc1       $f10, 0x8C($sp)
    /* 9CB10 1506F660 C42A9E6C */  lwc1       $f10, %lo(D_80099E6C)($at)
    /* 9CB14 1506F664 3C01800A */  lui        $at, %hi(D_80099E70)
    /* 9CB18 1506F668 E7A40080 */  swc1       $f4, 0x80($sp)
    /* 9CB1C 1506F66C E7B00090 */  swc1       $f16, 0x90($sp)
    /* 9CB20 1506F670 44802000 */  mtc1       $zero, $f4
    /* 9CB24 1506F674 C4309E70 */  lwc1       $f16, %lo(D_80099E70)($at)
    /* 9CB28 1506F678 3C01800A */  lui        $at, %hi(D_80099E74)
    /* 9CB2C 1506F67C E7B20094 */  swc1       $f18, 0x94($sp)
    /* 9CB30 1506F680 C4329E74 */  lwc1       $f18, %lo(D_80099E74)($at)
    /* 9CB34 1506F684 3C014268 */  lui        $at, (0x42680000 >> 16)
    /* 9CB38 1506F688 E7A40098 */  swc1       $f4, 0x98($sp)
    /* 9CB3C 1506F68C 44812000 */  mtc1       $at, $f4
    /* 9CB40 1506F690 3C014354 */  lui        $at, (0x43540000 >> 16)
    /* 9CB44 1506F694 E7A6009C */  swc1       $f6, 0x9C($sp)
    /* 9CB48 1506F698 44813000 */  mtc1       $at, $f6
    /* 9CB4C 1506F69C 3C01800A */  lui        $at, %hi(D_80099E78)
    /* 9CB50 1506F6A0 E7A800A0 */  swc1       $f8, 0xA0($sp)
    /* 9CB54 1506F6A4 C4289E78 */  lwc1       $f8, %lo(D_80099E78)($at)
    /* 9CB58 1506F6A8 3C0140C0 */  lui        $at, (0x40C00000 >> 16)
    /* 9CB5C 1506F6AC E7AA00A4 */  swc1       $f10, 0xA4($sp)
    /* 9CB60 1506F6B0 44815000 */  mtc1       $at, $f10
    /* 9CB64 1506F6B4 3C014120 */  lui        $at, (0x41200000 >> 16)
    /* 9CB68 1506F6B8 E7B000AC */  swc1       $f16, 0xAC($sp)
    /* 9CB6C 1506F6BC 44818000 */  mtc1       $at, $f16
    /* 9CB70 1506F6C0 3C01800A */  lui        $at, %hi(D_80099E7C)
    /* 9CB74 1506F6C4 E7B200B4 */  swc1       $f18, 0xB4($sp)
    /* 9CB78 1506F6C8 C4329E7C */  lwc1       $f18, %lo(D_80099E7C)($at)
    /* 9CB7C 1506F6CC 3C014214 */  lui        $at, (0x42140000 >> 16)
    /* 9CB80 1506F6D0 E7A400BC */  swc1       $f4, 0xBC($sp)
    /* 9CB84 1506F6D4 44812000 */  mtc1       $at, $f4
    /* 9CB88 1506F6D8 3C01800A */  lui        $at, %hi(D_80099E80)
    /* 9CB8C 1506F6DC E7A600C0 */  swc1       $f6, 0xC0($sp)
    /* 9CB90 1506F6E0 C4269E80 */  lwc1       $f6, %lo(D_80099E80)($at)
    /* 9CB94 1506F6E4 3C01800A */  lui        $at, %hi(D_80099E84)
    /* 9CB98 1506F6E8 E7A800C8 */  swc1       $f8, 0xC8($sp)
    /* 9CB9C 1506F6EC C4289E84 */  lwc1       $f8, %lo(D_80099E84)($at)
    /* 9CBA0 1506F6F0 3C014302 */  lui        $at, (0x43020000 >> 16)
    /* 9CBA4 1506F6F4 E7AA00D8 */  swc1       $f10, 0xD8($sp)
    /* 9CBA8 1506F6F8 44815000 */  mtc1       $at, $f10
    /* 9CBAC 1506F6FC 3C014399 */  lui        $at, (0x43990000 >> 16)
    /* 9CBB0 1506F700 E7B000DC */  swc1       $f16, 0xDC($sp)
    /* 9CBB4 1506F704 44818000 */  mtc1       $at, $f16
    /* 9CBB8 1506F708 3C01800A */  lui        $at, %hi(D_80099E88)
    /* 9CBBC 1506F70C E7B200E0 */  swc1       $f18, 0xE0($sp)
    /* 9CBC0 1506F710 C4329E88 */  lwc1       $f18, %lo(D_80099E88)($at)
    /* 9CBC4 1506F714 3C01800A */  lui        $at, %hi(D_80099E8C)
    /* 9CBC8 1506F718 E7A400E8 */  swc1       $f4, 0xE8($sp)
    /* 9CBCC 1506F71C C4249E8C */  lwc1       $f4, %lo(D_80099E8C)($at)
    /* 9CBD0 1506F720 3C014346 */  lui        $at, (0x43460000 >> 16)
    /* 9CBD4 1506F724 E7A600EC */  swc1       $f6, 0xEC($sp)
    /* 9CBD8 1506F728 44813000 */  mtc1       $at, $f6
    /* 9CBDC 1506F72C 3C0142CC */  lui        $at, (0x42CC0000 >> 16)
    /* 9CBE0 1506F730 E7A800F0 */  swc1       $f8, 0xF0($sp)
    /* 9CBE4 1506F734 44814000 */  mtc1       $at, $f8
    /* 9CBE8 1506F738 3C0142B2 */  lui        $at, (0x42B20000 >> 16)
    /* 9CBEC 1506F73C E7AA0100 */  swc1       $f10, 0x100($sp)
    /* 9CBF0 1506F740 44815000 */  mtc1       $at, $f10
    /* 9CBF4 1506F744 A3AE0024 */  sb         $t6, 0x24($sp)
    /* 9CBF8 1506F748 240F000D */  addiu      $t7, $zero, 0xD
    /* 9CBFC 1506F74C 2418009F */  addiu      $t8, $zero, 0x9F
    /* 9CC00 1506F750 2409000F */  addiu      $t1, $zero, 0xF
    /* 9CC04 1506F754 240A0001 */  addiu      $t2, $zero, 0x1
    /* 9CC08 1506F758 240B003C */  addiu      $t3, $zero, 0x3C
    /* 9CC0C 1506F75C 240C00FF */  addiu      $t4, $zero, 0xFF
    /* 9CC10 1506F760 240D00EB */  addiu      $t5, $zero, 0xEB
    /* 9CC14 1506F764 240E0052 */  addiu      $t6, $zero, 0x52
    /* 9CC18 1506F768 3C01800A */  lui        $at, %hi(D_80099E90)
    /* 9CC1C 1506F76C E7B00104 */  swc1       $f16, 0x104($sp)
    /* 9CC20 1506F770 C4309E90 */  lwc1       $f16, %lo(D_80099E90)($at)
    /* 9CC24 1506F774 A3AF0025 */  sb         $t7, 0x25($sp)
    /* 9CC28 1506F778 A3B8005A */  sb         $t8, 0x5A($sp)
    /* 9CC2C 1506F77C AFA9001C */  sw         $t1, 0x1C($sp)
    /* 9CC30 1506F780 A3AA0070 */  sb         $t2, 0x70($sp)
    /* 9CC34 1506F784 A3AB006C */  sb         $t3, 0x6C($sp)
    /* 9CC38 1506F788 A3AC006D */  sb         $t4, 0x6D($sp)
    /* 9CC3C 1506F78C A3AD006E */  sb         $t5, 0x6E($sp)
    /* 9CC40 1506F790 A3AE006F */  sb         $t6, 0x6F($sp)
    /* 9CC44 1506F794 2419FFFF */  addiu      $t9, $zero, -0x1
    /* 9CC48 1506F798 2408FFFF */  addiu      $t0, $zero, -0x1
    /* 9CC4C 1506F79C 240F0023 */  addiu      $t7, $zero, 0x23
    /* 9CC50 1506F7A0 2418000A */  addiu      $t8, $zero, 0xA
    /* 9CC54 1506F7A4 24090050 */  addiu      $t1, $zero, 0x50
    /* 9CC58 1506F7A8 240A0050 */  addiu      $t2, $zero, 0x50
    /* 9CC5C 1506F7AC 240B0003 */  addiu      $t3, $zero, 0x3
    /* 9CC60 1506F7B0 240C0002 */  addiu      $t4, $zero, 0x2
    /* 9CC64 1506F7B4 240D0019 */  addiu      $t5, $zero, 0x19
    /* 9CC68 1506F7B8 240E000A */  addiu      $t6, $zero, 0xA
    /* 9CC6C 1506F7BC 3C01800A */  lui        $at, %hi(D_80099E94)
    /* 9CC70 1506F7C0 E7B20108 */  swc1       $f18, 0x108($sp)
    /* 9CC74 1506F7C4 C4329E94 */  lwc1       $f18, %lo(D_80099E94)($at)
    /* 9CC78 1506F7C8 A3B90055 */  sb         $t9, 0x55($sp)
    /* 9CC7C 1506F7CC A3A80068 */  sb         $t0, 0x68($sp)
    /* 9CC80 1506F7D0 A7AF007C */  sh         $t7, 0x7C($sp)
    /* 9CC84 1506F7D4 A7B8007E */  sh         $t8, 0x7E($sp)
    /* 9CC88 1506F7D8 A3A900B0 */  sb         $t1, 0xB0($sp)
    /* 9CC8C 1506F7DC A3AA00B1 */  sb         $t2, 0xB1($sp)
    /* 9CC90 1506F7E0 AFAB00CC */  sw         $t3, 0xCC($sp)
    /* 9CC94 1506F7E4 AFAC00D0 */  sw         $t4, 0xD0($sp)
    /* 9CC98 1506F7E8 A7AD00D4 */  sh         $t5, 0xD4($sp)
    /* 9CC9C 1506F7EC A7AE00D6 */  sh         $t6, 0xD6($sp)
    /* 9CCA0 1506F7F0 2419000F */  addiu      $t9, $zero, 0xF
    /* 9CCA4 1506F7F4 24080011 */  addiu      $t0, $zero, 0x11
    /* 9CCA8 1506F7F8 240F0050 */  addiu      $t7, $zero, 0x50
    /* 9CCAC 1506F7FC 24180050 */  addiu      $t8, $zero, 0x50
    /* 9CCB0 1506F800 24090023 */  addiu      $t1, $zero, 0x23
    /* 9CCB4 1506F804 240A000F */  addiu      $t2, $zero, 0xF
    /* 9CCB8 1506F808 240B0050 */  addiu      $t3, $zero, 0x50
    /* 9CCBC 1506F80C 240C0064 */  addiu      $t4, $zero, 0x64
    /* 9CCC0 1506F810 240D000F */  addiu      $t5, $zero, 0xF
    /* 9CCC4 1506F814 240E0011 */  addiu      $t6, $zero, 0x11
    /* 9CCC8 1506F818 E7A00028 */  swc1       $f0, 0x28($sp)
    /* 9CCCC 1506F81C E7A0002C */  swc1       $f0, 0x2C($sp)
    /* 9CCD0 1506F820 E7A00034 */  swc1       $f0, 0x34($sp)
    /* 9CCD4 1506F824 E7A00038 */  swc1       $f0, 0x38($sp)
    /* 9CCD8 1506F828 A3A00054 */  sb         $zero, 0x54($sp)
    /* 9CCDC 1506F82C A3A00056 */  sb         $zero, 0x56($sp)
    /* 9CCE0 1506F830 A3A00057 */  sb         $zero, 0x57($sp)
    /* 9CCE4 1506F834 A3A00058 */  sb         $zero, 0x58($sp)
    /* 9CCE8 1506F838 A3A00059 */  sb         $zero, 0x59($sp)
    /* 9CCEC 1506F83C A7B900A8 */  sh         $t9, 0xA8($sp)
    /* 9CCF0 1506F840 A7A800AA */  sh         $t0, 0xAA($sp)
    /* 9CCF4 1506F844 E7A000B8 */  swc1       $f0, 0xB8($sp)
    /* 9CCF8 1506F848 E7A200C4 */  swc1       $f2, 0xC4($sp)
    /* 9CCFC 1506F84C E7A200E4 */  swc1       $f2, 0xE4($sp)
    /* 9CD00 1506F850 A7AF00F4 */  sh         $t7, 0xF4($sp)
    /* 9CD04 1506F854 A7B800F6 */  sh         $t8, 0xF6($sp)
    /* 9CD08 1506F858 A7B900F8 */  sh         $t9, 0xF8($sp)
    /* 9CD0C 1506F85C A7A800FA */  sh         $t0, 0xFA($sp)
    /* 9CD10 1506F860 E7A000FC */  swc1       $f0, 0xFC($sp)
    /* 9CD14 1506F864 A7A90110 */  sh         $t1, 0x110($sp)
    /* 9CD18 1506F868 A7AA0112 */  sh         $t2, 0x112($sp)
    /* 9CD1C 1506F86C A7AB0114 */  sh         $t3, 0x114($sp)
    /* 9CD20 1506F870 A7AC0116 */  sh         $t4, 0x116($sp)
    /* 9CD24 1506F874 E7AC0120 */  swc1       $f12, 0x120($sp)
    /* 9CD28 1506F878 E7AC0124 */  swc1       $f12, 0x124($sp)
    /* 9CD2C 1506F87C A7AD0134 */  sh         $t5, 0x134($sp)
    /* 9CD30 1506F880 A7AE0136 */  sh         $t6, 0x136($sp)
    /* 9CD34 1506F884 00002025 */  or         $a0, $zero, $zero
    /* 9CD38 1506F888 27A5001C */  addiu      $a1, $sp, 0x1C
    /* 9CD3C 1506F88C 240600FF */  addiu      $a2, $zero, 0xFF
    /* 9CD40 1506F890 00003825 */  or         $a3, $zero, $zero
    /* 9CD44 1506F894 E7A4010C */  swc1       $f4, 0x10C($sp)
    /* 9CD48 1506F898 E7A60118 */  swc1       $f6, 0x118($sp)
    /* 9CD4C 1506F89C E7A8011C */  swc1       $f8, 0x11C($sp)
    /* 9CD50 1506F8A0 E7AA0128 */  swc1       $f10, 0x128($sp)
    /* 9CD54 1506F8A4 E7B0012C */  swc1       $f16, 0x12C($sp)
    /* 9CD58 1506F8A8 0D46652E */  jal        func_151994B8
    /* 9CD5C 1506F8AC E7B20130 */   swc1      $f18, 0x130($sp)
    /* 9CD60 1506F8B0 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 9CD64 1506F8B4 27BD0138 */  addiu      $sp, $sp, 0x138
    /* 9CD68 1506F8B8 03E00008 */  jr         $ra
    /* 9CD6C 1506F8BC 00000000 */   nop
endlabel func_1506F54C
