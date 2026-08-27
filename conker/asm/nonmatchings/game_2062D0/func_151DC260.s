nonmatching func_151DC260, 0x224

glabel func_151DC260
    /* 209710 151DC260 27BDFF48 */  addiu      $sp, $sp, -0xB8
    /* 209714 151DC264 AFA500BC */  sw         $a1, 0xBC($sp)
    /* 209718 151DC268 27A50074 */  addiu      $a1, $sp, 0x74
    /* 20971C 151DC26C AFBF001C */  sw         $ra, 0x1C($sp)
    /* 209720 151DC270 AFA400B8 */  sw         $a0, 0xB8($sp)
    /* 209724 151DC274 AFA600C0 */  sw         $a2, 0xC0($sp)
    /* 209728 151DC278 AFA700C4 */  sw         $a3, 0xC4($sp)
    /* 20972C 151DC27C 8FAE00B8 */  lw         $t6, 0xB8($sp)
    /* 209730 151DC280 240BFFC0 */  addiu      $t3, $zero, -0x40
    /* 209734 151DC284 240C0028 */  addiu      $t4, $zero, 0x28
    /* 209738 151DC288 8DC10000 */  lw         $at, 0x0($t6)
    /* 20973C 151DC28C 2408000A */  addiu      $t0, $zero, 0xA
    /* 209740 151DC290 2409000A */  addiu      $t1, $zero, 0xA
    /* 209744 151DC294 ACA10000 */  sw         $at, 0x0($a1)
    /* 209748 151DC298 8DD90004 */  lw         $t9, 0x4($t6)
    /* 20974C 151DC29C 240A00FF */  addiu      $t2, $zero, 0xFF
    /* 209750 151DC2A0 240D0003 */  addiu      $t5, $zero, 0x3
    /* 209754 151DC2A4 ACB90004 */  sw         $t9, 0x4($a1)
    /* 209758 151DC2A8 8DC10008 */  lw         $at, 0x8($t6)
    /* 20975C 151DC2AC 24180001 */  addiu      $t8, $zero, 0x1
    /* 209760 151DC2B0 240F003C */  addiu      $t7, $zero, 0x3C
    /* 209764 151DC2B4 ACA10008 */  sw         $at, 0x8($a1)
    /* 209768 151DC2B8 3C014040 */  lui        $at, (0x40400000 >> 16)
    /* 20976C 151DC2BC 44812000 */  mtc1       $at, $f4
    /* 209770 151DC2C0 3C014080 */  lui        $at, (0x40800000 >> 16)
    /* 209774 151DC2C4 44813000 */  mtc1       $at, $f6
    /* 209778 151DC2C8 3C01800B */  lui        $at, %hi(D_800AB4D0)
    /* 20977C 151DC2CC C428B4D0 */  lwc1       $f8, %lo(D_800AB4D0)($at)
    /* 209780 151DC2D0 3C01800B */  lui        $at, %hi(D_800AB4D4)
    /* 209784 151DC2D4 C42AB4D4 */  lwc1       $f10, %lo(D_800AB4D4)($at)
    /* 209788 151DC2D8 3C014140 */  lui        $at, (0x41400000 >> 16)
    /* 20978C 151DC2DC 44818000 */  mtc1       $at, $f16
    /* 209790 151DC2E0 3C014130 */  lui        $at, (0x41300000 >> 16)
    /* 209794 151DC2E4 44819000 */  mtc1       $at, $f18
    /* 209798 151DC2E8 A7AB0070 */  sh         $t3, 0x70($sp)
    /* 20979C 151DC2EC A7AC0072 */  sh         $t4, 0x72($sp)
    /* 2097A0 151DC2F0 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 2097A4 151DC2F4 E7A40080 */  swc1       $f4, 0x80($sp)
    /* 2097A8 151DC2F8 44812000 */  mtc1       $at, $f4
    /* 2097AC 151DC2FC 93AB00C3 */  lbu        $t3, 0xC3($sp)
    /* 2097B0 151DC300 8FAC00C8 */  lw         $t4, 0xC8($sp)
    /* 2097B4 151DC304 A7A80098 */  sh         $t0, 0x98($sp)
    /* 2097B8 151DC308 A7A9009A */  sh         $t1, 0x9A($sp)
    /* 2097BC 151DC30C A7AA006E */  sh         $t2, 0x6E($sp)
    /* 2097C0 151DC310 240E0028 */  addiu      $t6, $zero, 0x28
    /* 2097C4 151DC314 24190064 */  addiu      $t9, $zero, 0x64
    /* 2097C8 151DC318 24080064 */  addiu      $t0, $zero, 0x64
    /* 2097CC 151DC31C 24090010 */  addiu      $t1, $zero, 0x10
    /* 2097D0 151DC320 240A000F */  addiu      $t2, $zero, 0xF
    /* 2097D4 151DC324 A7A0006C */  sh         $zero, 0x6C($sp)
    /* 2097D8 151DC328 A7AD009C */  sh         $t5, 0x9C($sp)
    /* 2097DC 151DC32C A7B8009E */  sh         $t8, 0x9E($sp)
    /* 2097E0 151DC330 A7AF00A0 */  sh         $t7, 0xA0($sp)
    /* 2097E4 151DC334 A7AE00A2 */  sh         $t6, 0xA2($sp)
    /* 2097E8 151DC338 A7B900A4 */  sh         $t9, 0xA4($sp)
    /* 2097EC 151DC33C A7A800A6 */  sh         $t0, 0xA6($sp)
    /* 2097F0 151DC340 A7A900B0 */  sh         $t1, 0xB0($sp)
    /* 2097F4 151DC344 A7AA00B2 */  sh         $t2, 0xB2($sp)
    /* 2097F8 151DC348 AFA000B4 */  sw         $zero, 0xB4($sp)
    /* 2097FC 151DC34C 93A700C7 */  lbu        $a3, 0xC7($sp)
    /* 209800 151DC350 8FA600BC */  lw         $a2, 0xBC($sp)
    /* 209804 151DC354 27A4006C */  addiu      $a0, $sp, 0x6C
    /* 209808 151DC358 E7A60084 */  swc1       $f6, 0x84($sp)
    /* 20980C 151DC35C E7A80088 */  swc1       $f8, 0x88($sp)
    /* 209810 151DC360 E7AA008C */  swc1       $f10, 0x8C($sp)
    /* 209814 151DC364 E7B00090 */  swc1       $f16, 0x90($sp)
    /* 209818 151DC368 E7B20094 */  swc1       $f18, 0x94($sp)
    /* 20981C 151DC36C E7A400AC */  swc1       $f4, 0xAC($sp)
    /* 209820 151DC370 A3AB00A8 */  sb         $t3, 0xA8($sp)
    /* 209824 151DC374 0D454FC6 */  jal        func_15153F18
    /* 209828 151DC378 AFAC0010 */   sw        $t4, 0x10($sp)
    /* 20982C 151DC37C 27A5002C */  addiu      $a1, $sp, 0x2C
    /* 209830 151DC380 8FAD00B8 */  lw         $t5, 0xB8($sp)
    /* 209834 151DC384 2419000C */  addiu      $t9, $zero, 0xC
    /* 209838 151DC388 240900FF */  addiu      $t1, $zero, 0xFF
    /* 20983C 151DC38C 8DA10000 */  lw         $at, 0x0($t5)
    /* 209840 151DC390 24080006 */  addiu      $t0, $zero, 0x6
    /* 209844 151DC394 240AFFC0 */  addiu      $t2, $zero, -0x40
    /* 209848 151DC398 ACA10000 */  sw         $at, 0x0($a1)
    /* 20984C 151DC39C 8DAE0004 */  lw         $t6, 0x4($t5)
    /* 209850 151DC3A0 240B0024 */  addiu      $t3, $zero, 0x24
    /* 209854 151DC3A4 240C0023 */  addiu      $t4, $zero, 0x23
    /* 209858 151DC3A8 ACAE0004 */  sw         $t6, 0x4($a1)
    /* 20985C 151DC3AC 8DA10008 */  lw         $at, 0x8($t5)
    /* 209860 151DC3B0 240F000F */  addiu      $t7, $zero, 0xF
    /* 209864 151DC3B4 2418009B */  addiu      $t8, $zero, 0x9B
    /* 209868 151DC3B8 ACA10008 */  sw         $at, 0x8($a1)
    /* 20986C 151DC3BC 3C0140C0 */  lui        $at, (0x40C00000 >> 16)
    /* 209870 151DC3C0 44813000 */  mtc1       $at, $f6
    /* 209874 151DC3C4 3C014100 */  lui        $at, (0x41000000 >> 16)
    /* 209878 151DC3C8 44814000 */  mtc1       $at, $f8
    /* 20987C 151DC3CC 3C01800B */  lui        $at, %hi(D_800AB4D8)
    /* 209880 151DC3D0 C42AB4D8 */  lwc1       $f10, %lo(D_800AB4D8)($at)
    /* 209884 151DC3D4 3C01800B */  lui        $at, %hi(D_800AB4DC)
    /* 209888 151DC3D8 C430B4DC */  lwc1       $f16, %lo(D_800AB4DC)($at)
    /* 20988C 151DC3DC 3C0142F6 */  lui        $at, (0x42F60000 >> 16)
    /* 209890 151DC3E0 44819000 */  mtc1       $at, $f18
    /* 209894 151DC3E4 3C014306 */  lui        $at, (0x43060000 >> 16)
    /* 209898 151DC3E8 44812000 */  mtc1       $at, $f4
    /* 20989C 151DC3EC A7B90038 */  sh         $t9, 0x38($sp)
    /* 2098A0 151DC3F0 A7A90026 */  sh         $t1, 0x26($sp)
    /* 2098A4 151DC3F4 3C01800B */  lui        $at, %hi(D_800AB4E0)
    /* 2098A8 151DC3F8 E7A6003C */  swc1       $f6, 0x3C($sp)
    /* 2098AC 151DC3FC E7A80040 */  swc1       $f8, 0x40($sp)
    /* 2098B0 151DC400 93B900C3 */  lbu        $t9, 0xC3($sp)
    /* 2098B4 151DC404 C426B4E0 */  lwc1       $f6, %lo(D_800AB4E0)($at)
    /* 2098B8 151DC408 44804000 */  mtc1       $zero, $f8
    /* 2098BC 151DC40C 8FA900C8 */  lw         $t1, 0xC8($sp)
    /* 2098C0 151DC410 A7A8003A */  sh         $t0, 0x3A($sp)
    /* 2098C4 151DC414 240D0064 */  addiu      $t5, $zero, 0x64
    /* 2098C8 151DC418 240E0001 */  addiu      $t6, $zero, 0x1
    /* 2098CC 151DC41C 24080001 */  addiu      $t0, $zero, 0x1
    /* 2098D0 151DC420 A7A00024 */  sh         $zero, 0x24($sp)
    /* 2098D4 151DC424 A7AA0028 */  sh         $t2, 0x28($sp)
    /* 2098D8 151DC428 A7AB002A */  sh         $t3, 0x2A($sp)
    /* 2098DC 151DC42C A7AC0044 */  sh         $t4, 0x44($sp)
    /* 2098E0 151DC430 A7AF0046 */  sh         $t7, 0x46($sp)
    /* 2098E4 151DC434 A3B80050 */  sb         $t8, 0x50($sp)
    /* 2098E8 151DC438 A3AD0051 */  sb         $t5, 0x51($sp)
    /* 2098EC 151DC43C A3AE005C */  sb         $t6, 0x5C($sp)
    /* 2098F0 151DC440 A3A80064 */  sb         $t0, 0x64($sp)
    /* 2098F4 151DC444 93A700C7 */  lbu        $a3, 0xC7($sp)
    /* 2098F8 151DC448 8FA600BC */  lw         $a2, 0xBC($sp)
    /* 2098FC 151DC44C 27A40024 */  addiu      $a0, $sp, 0x24
    /* 209900 151DC450 E7AA0048 */  swc1       $f10, 0x48($sp)
    /* 209904 151DC454 E7B0004C */  swc1       $f16, 0x4C($sp)
    /* 209908 151DC458 E7B20054 */  swc1       $f18, 0x54($sp)
    /* 20990C 151DC45C E7A40058 */  swc1       $f4, 0x58($sp)
    /* 209910 151DC460 A3B9005D */  sb         $t9, 0x5D($sp)
    /* 209914 151DC464 E7A60060 */  swc1       $f6, 0x60($sp)
    /* 209918 151DC468 E7A80068 */  swc1       $f8, 0x68($sp)
    /* 20991C 151DC46C 0D45405E */  jal        func_15150178
    /* 209920 151DC470 AFA90010 */   sw        $t1, 0x10($sp)
    /* 209924 151DC474 8FBF001C */  lw         $ra, 0x1C($sp)
    /* 209928 151DC478 27BD00B8 */  addiu      $sp, $sp, 0xB8
    /* 20992C 151DC47C 03E00008 */  jr         $ra
    /* 209930 151DC480 00000000 */   nop
endlabel func_151DC260
