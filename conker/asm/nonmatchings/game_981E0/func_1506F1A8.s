nonmatching func_1506F1A8, 0x37C

glabel func_1506F1A8
    /* 9C658 1506F1A8 3C0140A0 */  lui        $at, (0x40A00000 >> 16)
    /* 9C65C 1506F1AC 44811000 */  mtc1       $at, $f2
    /* 9C660 1506F1B0 3C0142C8 */  lui        $at, (0x42C80000 >> 16)
    /* 9C664 1506F1B4 44816000 */  mtc1       $at, $f12
    /* 9C668 1506F1B8 3C013F00 */  lui        $at, (0x3F000000 >> 16)
    /* 9C66C 1506F1BC 27BDFEC8 */  addiu      $sp, $sp, -0x138
    /* 9C670 1506F1C0 44817000 */  mtc1       $at, $f14
    /* 9C674 1506F1C4 44800000 */  mtc1       $zero, $f0
    /* 9C678 1506F1C8 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 9C67C 1506F1CC AFA40138 */  sw         $a0, 0x138($sp)
    /* 9C680 1506F1D0 3C02800D */  lui        $v0, %hi(D_800D154C)
    /* 9C684 1506F1D4 8C42154C */  lw         $v0, %lo(D_800D154C)($v0)
    /* 9C688 1506F1D8 3C0142A0 */  lui        $at, (0x42A00000 >> 16)
    /* 9C68C 1506F1DC 44812000 */  mtc1       $at, $f4
    /* 9C690 1506F1E0 AFA20020 */  sw         $v0, 0x20($sp)
    /* 9C694 1506F1E4 904E003B */  lbu        $t6, 0x3B($v0)
    /* 9C698 1506F1E8 3C0142CC */  lui        $at, (0x42CC0000 >> 16)
    /* 9C69C 1506F1EC 44813000 */  mtc1       $at, $f6
    /* 9C6A0 1506F1F0 3C01800A */  lui        $at, %hi(D_80099DAC)
    /* 9C6A4 1506F1F4 C4289DAC */  lwc1       $f8, %lo(D_80099DAC)($at)
    /* 9C6A8 1506F1F8 3C01800A */  lui        $at, %hi(D_80099DB0)
    /* 9C6AC 1506F1FC C42A9DB0 */  lwc1       $f10, %lo(D_80099DB0)($at)
    /* 9C6B0 1506F200 3C014496 */  lui        $at, (0x44960000 >> 16)
    /* 9C6B4 1506F204 44818000 */  mtc1       $at, $f16
    /* 9C6B8 1506F208 3C01800A */  lui        $at, %hi(D_80099DB4)
    /* 9C6BC 1506F20C C4329DB4 */  lwc1       $f18, %lo(D_80099DB4)($at)
    /* 9C6C0 1506F210 3C0141D0 */  lui        $at, (0x41D00000 >> 16)
    /* 9C6C4 1506F214 E7A40030 */  swc1       $f4, 0x30($sp)
    /* 9C6C8 1506F218 44812000 */  mtc1       $at, $f4
    /* 9C6CC 1506F21C 3C01800A */  lui        $at, %hi(D_80099DB8)
    /* 9C6D0 1506F220 E7A6003C */  swc1       $f6, 0x3C($sp)
    /* 9C6D4 1506F224 C4269DB8 */  lwc1       $f6, %lo(D_80099DB8)($at)
    /* 9C6D8 1506F228 3C01C33B */  lui        $at, (0xC33B0000 >> 16)
    /* 9C6DC 1506F22C E7A80040 */  swc1       $f8, 0x40($sp)
    /* 9C6E0 1506F230 44814000 */  mtc1       $at, $f8
    /* 9C6E4 1506F234 3C01800A */  lui        $at, %hi(D_80099DBC)
    /* 9C6E8 1506F238 E7AA0044 */  swc1       $f10, 0x44($sp)
    /* 9C6EC 1506F23C C42A9DBC */  lwc1       $f10, %lo(D_80099DBC)($at)
    /* 9C6F0 1506F240 3C01800A */  lui        $at, %hi(D_80099DC0)
    /* 9C6F4 1506F244 E7B00048 */  swc1       $f16, 0x48($sp)
    /* 9C6F8 1506F248 C4309DC0 */  lwc1       $f16, %lo(D_80099DC0)($at)
    /* 9C6FC 1506F24C 3C01800A */  lui        $at, %hi(D_80099DC4)
    /* 9C700 1506F250 E7B2005C */  swc1       $f18, 0x5C($sp)
    /* 9C704 1506F254 C4329DC4 */  lwc1       $f18, %lo(D_80099DC4)($at)
    /* 9C708 1506F258 3C01800A */  lui        $at, %hi(D_80099DC8)
    /* 9C70C 1506F25C E7A4004C */  swc1       $f4, 0x4C($sp)
    /* 9C710 1506F260 C4249DC8 */  lwc1       $f4, %lo(D_80099DC8)($at)
    /* 9C714 1506F264 3C01800A */  lui        $at, %hi(D_80099DCC)
    /* 9C718 1506F268 E7A60050 */  swc1       $f6, 0x50($sp)
    /* 9C71C 1506F26C C4269DCC */  lwc1       $f6, %lo(D_80099DCC)($at)
    /* 9C720 1506F270 3C01800A */  lui        $at, %hi(D_80099DD0)
    /* 9C724 1506F274 E7A80060 */  swc1       $f8, 0x60($sp)
    /* 9C728 1506F278 C4289DD0 */  lwc1       $f8, %lo(D_80099DD0)($at)
    /* 9C72C 1506F27C 3C01800A */  lui        $at, %hi(D_80099DD4)
    /* 9C730 1506F280 E7AA0064 */  swc1       $f10, 0x64($sp)
    /* 9C734 1506F284 C42A9DD4 */  lwc1       $f10, %lo(D_80099DD4)($at)
    /* 9C738 1506F288 3C01800A */  lui        $at, %hi(D_80099DD8)
    /* 9C73C 1506F28C E7B00074 */  swc1       $f16, 0x74($sp)
    /* 9C740 1506F290 C4309DD8 */  lwc1       $f16, %lo(D_80099DD8)($at)
    /* 9C744 1506F294 3C01800A */  lui        $at, %hi(D_80099DDC)
    /* 9C748 1506F298 E7B20078 */  swc1       $f18, 0x78($sp)
    /* 9C74C 1506F29C C4329DDC */  lwc1       $f18, %lo(D_80099DDC)($at)
    /* 9C750 1506F2A0 3C01800A */  lui        $at, %hi(D_80099DE0)
    /* 9C754 1506F2A4 E7A40080 */  swc1       $f4, 0x80($sp)
    /* 9C758 1506F2A8 C4249DE0 */  lwc1       $f4, %lo(D_80099DE0)($at)
    /* 9C75C 1506F2AC 3C01800A */  lui        $at, %hi(D_80099DE4)
    /* 9C760 1506F2B0 E7A60088 */  swc1       $f6, 0x88($sp)
    /* 9C764 1506F2B4 C4269DE4 */  lwc1       $f6, %lo(D_80099DE4)($at)
    /* 9C768 1506F2B8 3C01800A */  lui        $at, %hi(D_80099DE8)
    /* 9C76C 1506F2BC E7A80084 */  swc1       $f8, 0x84($sp)
    /* 9C770 1506F2C0 C4289DE8 */  lwc1       $f8, %lo(D_80099DE8)($at)
    /* 9C774 1506F2C4 3C01800A */  lui        $at, %hi(D_80099DEC)
    /* 9C778 1506F2C8 E7AA008C */  swc1       $f10, 0x8C($sp)
    /* 9C77C 1506F2CC C42A9DEC */  lwc1       $f10, %lo(D_80099DEC)($at)
    /* 9C780 1506F2D0 3C01800A */  lui        $at, %hi(D_80099DF0)
    /* 9C784 1506F2D4 E7B00090 */  swc1       $f16, 0x90($sp)
    /* 9C788 1506F2D8 C4309DF0 */  lwc1       $f16, %lo(D_80099DF0)($at)
    /* 9C78C 1506F2DC 3C01800A */  lui        $at, %hi(D_80099DF4)
    /* 9C790 1506F2E0 E7B20094 */  swc1       $f18, 0x94($sp)
    /* 9C794 1506F2E4 C4329DF4 */  lwc1       $f18, %lo(D_80099DF4)($at)
    /* 9C798 1506F2E8 3C01800A */  lui        $at, %hi(D_80099DF8)
    /* 9C79C 1506F2EC E7A40098 */  swc1       $f4, 0x98($sp)
    /* 9C7A0 1506F2F0 C4249DF8 */  lwc1       $f4, %lo(D_80099DF8)($at)
    /* 9C7A4 1506F2F4 3C01800A */  lui        $at, %hi(D_80099DFC)
    /* 9C7A8 1506F2F8 E7A6009C */  swc1       $f6, 0x9C($sp)
    /* 9C7AC 1506F2FC C4269DFC */  lwc1       $f6, %lo(D_80099DFC)($at)
    /* 9C7B0 1506F300 3C014160 */  lui        $at, (0x41600000 >> 16)
    /* 9C7B4 1506F304 E7A800A0 */  swc1       $f8, 0xA0($sp)
    /* 9C7B8 1506F308 44814000 */  mtc1       $at, $f8
    /* 9C7BC 1506F30C 3C014110 */  lui        $at, (0x41100000 >> 16)
    /* 9C7C0 1506F310 E7AA00A4 */  swc1       $f10, 0xA4($sp)
    /* 9C7C4 1506F314 44815000 */  mtc1       $at, $f10
    /* 9C7C8 1506F318 3C0141C8 */  lui        $at, (0x41C80000 >> 16)
    /* 9C7CC 1506F31C E7B000AC */  swc1       $f16, 0xAC($sp)
    /* 9C7D0 1506F320 44818000 */  mtc1       $at, $f16
    /* 9C7D4 1506F324 3C01800A */  lui        $at, %hi(D_80099E00)
    /* 9C7D8 1506F328 E7B200B4 */  swc1       $f18, 0xB4($sp)
    /* 9C7DC 1506F32C C4329E00 */  lwc1       $f18, %lo(D_80099E00)($at)
    /* 9C7E0 1506F330 3C01800A */  lui        $at, %hi(D_80099E04)
    /* 9C7E4 1506F334 E7A400C4 */  swc1       $f4, 0xC4($sp)
    /* 9C7E8 1506F338 C4249E04 */  lwc1       $f4, %lo(D_80099E04)($at)
    /* 9C7EC 1506F33C 3C01800A */  lui        $at, %hi(D_80099E08)
    /* 9C7F0 1506F340 E7A600C8 */  swc1       $f6, 0xC8($sp)
    /* 9C7F4 1506F344 C4269E08 */  lwc1       $f6, %lo(D_80099E08)($at)
    /* 9C7F8 1506F348 3C01800A */  lui        $at, %hi(D_80099E0C)
    /* 9C7FC 1506F34C E7A800D8 */  swc1       $f8, 0xD8($sp)
    /* 9C800 1506F350 C4289E0C */  lwc1       $f8, %lo(D_80099E0C)($at)
    /* 9C804 1506F354 3C0143C9 */  lui        $at, (0x43C90000 >> 16)
    /* 9C808 1506F358 E7AA00DC */  swc1       $f10, 0xDC($sp)
    /* 9C80C 1506F35C 44815000 */  mtc1       $at, $f10
    /* 9C810 1506F360 3C01800A */  lui        $at, %hi(D_80099E10)
    /* 9C814 1506F364 E7B000E8 */  swc1       $f16, 0xE8($sp)
    /* 9C818 1506F368 C4309E10 */  lwc1       $f16, %lo(D_80099E10)($at)
    /* 9C81C 1506F36C 3C01800A */  lui        $at, %hi(D_80099E14)
    /* 9C820 1506F370 E7B200EC */  swc1       $f18, 0xEC($sp)
    /* 9C824 1506F374 C4329E14 */  lwc1       $f18, %lo(D_80099E14)($at)
    /* 9C828 1506F378 3C01800A */  lui        $at, %hi(D_80099E18)
    /* 9C82C 1506F37C E7A400F0 */  swc1       $f4, 0xF0($sp)
    /* 9C830 1506F380 C4249E18 */  lwc1       $f4, %lo(D_80099E18)($at)
    /* 9C834 1506F384 240F000C */  addiu      $t7, $zero, 0xC
    /* 9C838 1506F388 241800C8 */  addiu      $t8, $zero, 0xC8
    /* 9C83C 1506F38C 3C014234 */  lui        $at, (0x42340000 >> 16)
    /* 9C840 1506F390 E7A60108 */  swc1       $f6, 0x108($sp)
    /* 9C844 1506F394 44813000 */  mtc1       $at, $f6
    /* 9C848 1506F398 A3AF0025 */  sb         $t7, 0x25($sp)
    /* 9C84C 1506F39C A3B8005A */  sb         $t8, 0x5A($sp)
    /* 9C850 1506F3A0 A3AE0024 */  sb         $t6, 0x24($sp)
    /* 9C854 1506F3A4 2419FFFF */  addiu      $t9, $zero, -0x1
    /* 9C858 1506F3A8 24080002 */  addiu      $t0, $zero, 0x2
    /* 9C85C 1506F3AC 2409FFFF */  addiu      $t1, $zero, -0x1
    /* 9C860 1506F3B0 240AFFFF */  addiu      $t2, $zero, -0x1
    /* 9C864 1506F3B4 240B000F */  addiu      $t3, $zero, 0xF
    /* 9C868 1506F3B8 240C0001 */  addiu      $t4, $zero, 0x1
    /* 9C86C 1506F3BC 240D003C */  addiu      $t5, $zero, 0x3C
    /* 9C870 1506F3C0 240E00FF */  addiu      $t6, $zero, 0xFF
    /* 9C874 1506F3C4 240F00EB */  addiu      $t7, $zero, 0xEB
    /* 9C878 1506F3C8 24180052 */  addiu      $t8, $zero, 0x52
    /* 9C87C 1506F3CC 3C01800A */  lui        $at, %hi(D_80099E1C)
    /* 9C880 1506F3D0 E7A8010C */  swc1       $f8, 0x10C($sp)
    /* 9C884 1506F3D4 C4289E1C */  lwc1       $f8, %lo(D_80099E1C)($at)
    /* 9C888 1506F3D8 A3B90054 */  sb         $t9, 0x54($sp)
    /* 9C88C 1506F3DC A3A80055 */  sb         $t0, 0x55($sp)
    /* 9C890 1506F3E0 A3A90056 */  sb         $t1, 0x56($sp)
    /* 9C894 1506F3E4 A3AA0068 */  sb         $t2, 0x68($sp)
    /* 9C898 1506F3E8 AFAB001C */  sw         $t3, 0x1C($sp)
    /* 9C89C 1506F3EC A3AC0070 */  sb         $t4, 0x70($sp)
    /* 9C8A0 1506F3F0 A3AD006C */  sb         $t5, 0x6C($sp)
    /* 9C8A4 1506F3F4 A3AE006D */  sb         $t6, 0x6D($sp)
    /* 9C8A8 1506F3F8 A3AF006E */  sb         $t7, 0x6E($sp)
    /* 9C8AC 1506F3FC A3B8006F */  sb         $t8, 0x6F($sp)
    /* 9C8B0 1506F400 2419001E */  addiu      $t9, $zero, 0x1E
    /* 9C8B4 1506F404 2408000F */  addiu      $t0, $zero, 0xF
    /* 9C8B8 1506F408 2409000C */  addiu      $t1, $zero, 0xC
    /* 9C8BC 1506F40C 240A0015 */  addiu      $t2, $zero, 0x15
    /* 9C8C0 1506F410 240B0050 */  addiu      $t3, $zero, 0x50
    /* 9C8C4 1506F414 240C0078 */  addiu      $t4, $zero, 0x78
    /* 9C8C8 1506F418 240D0004 */  addiu      $t5, $zero, 0x4
    /* 9C8CC 1506F41C 240E0002 */  addiu      $t6, $zero, 0x2
    /* 9C8D0 1506F420 240F001E */  addiu      $t7, $zero, 0x1E
    /* 9C8D4 1506F424 24180011 */  addiu      $t8, $zero, 0x11
    /* 9C8D8 1506F428 3C01800A */  lui        $at, %hi(D_80099E20)
    /* 9C8DC 1506F42C E7AA0118 */  swc1       $f10, 0x118($sp)
    /* 9C8E0 1506F430 C42A9E20 */  lwc1       $f10, %lo(D_80099E20)($at)
    /* 9C8E4 1506F434 A7B9007C */  sh         $t9, 0x7C($sp)
    /* 9C8E8 1506F438 A7A8007E */  sh         $t0, 0x7E($sp)
    /* 9C8EC 1506F43C A7A900A8 */  sh         $t1, 0xA8($sp)
    /* 9C8F0 1506F440 A7AA00AA */  sh         $t2, 0xAA($sp)
    /* 9C8F4 1506F444 A3AB00B0 */  sb         $t3, 0xB0($sp)
    /* 9C8F8 1506F448 A3AC00B1 */  sb         $t4, 0xB1($sp)
    /* 9C8FC 1506F44C AFAD00CC */  sw         $t5, 0xCC($sp)
    /* 9C900 1506F450 AFAE00D0 */  sw         $t6, 0xD0($sp)
    /* 9C904 1506F454 A7AF00D4 */  sh         $t7, 0xD4($sp)
    /* 9C908 1506F458 A7B800D6 */  sh         $t8, 0xD6($sp)
    /* 9C90C 1506F45C 24190050 */  addiu      $t9, $zero, 0x50
    /* 9C910 1506F460 24080078 */  addiu      $t0, $zero, 0x78
    /* 9C914 1506F464 24090010 */  addiu      $t1, $zero, 0x10
    /* 9C918 1506F468 240A000F */  addiu      $t2, $zero, 0xF
    /* 9C91C 1506F46C 240B0028 */  addiu      $t3, $zero, 0x28
    /* 9C920 1506F470 240C000F */  addiu      $t4, $zero, 0xF
    /* 9C924 1506F474 240D0050 */  addiu      $t5, $zero, 0x50
    /* 9C928 1506F478 240E0050 */  addiu      $t6, $zero, 0x50
    /* 9C92C 1506F47C 240F0014 */  addiu      $t7, $zero, 0x14
    /* 9C930 1506F480 2418000C */  addiu      $t8, $zero, 0xC
    /* 9C934 1506F484 E7A00028 */  swc1       $f0, 0x28($sp)
    /* 9C938 1506F488 E7A0002C */  swc1       $f0, 0x2C($sp)
    /* 9C93C 1506F48C E7A00034 */  swc1       $f0, 0x34($sp)
    /* 9C940 1506F490 E7A00038 */  swc1       $f0, 0x38($sp)
    /* 9C944 1506F494 A3A00057 */  sb         $zero, 0x57($sp)
    /* 9C948 1506F498 A3A00058 */  sb         $zero, 0x58($sp)
    /* 9C94C 1506F49C A3A00059 */  sb         $zero, 0x59($sp)
    /* 9C950 1506F4A0 E7A000B8 */  swc1       $f0, 0xB8($sp)
    /* 9C954 1506F4A4 E7A200BC */  swc1       $f2, 0xBC($sp)
    /* 9C958 1506F4A8 E7AC00C0 */  swc1       $f12, 0xC0($sp)
    /* 9C95C 1506F4AC E7AE00E0 */  swc1       $f14, 0xE0($sp)
    /* 9C960 1506F4B0 E7AE00E4 */  swc1       $f14, 0xE4($sp)
    /* 9C964 1506F4B4 A7B900F4 */  sh         $t9, 0xF4($sp)
    /* 9C968 1506F4B8 A7A800F6 */  sh         $t0, 0xF6($sp)
    /* 9C96C 1506F4BC A7A900F8 */  sh         $t1, 0xF8($sp)
    /* 9C970 1506F4C0 A7AA00FA */  sh         $t2, 0xFA($sp)
    /* 9C974 1506F4C4 E7A000FC */  swc1       $f0, 0xFC($sp)
    /* 9C978 1506F4C8 E7A20100 */  swc1       $f2, 0x100($sp)
    /* 9C97C 1506F4CC E7AC0104 */  swc1       $f12, 0x104($sp)
    /* 9C980 1506F4D0 A7AB0110 */  sh         $t3, 0x110($sp)
    /* 9C984 1506F4D4 A7AC0112 */  sh         $t4, 0x112($sp)
    /* 9C988 1506F4D8 A7AD0114 */  sh         $t5, 0x114($sp)
    /* 9C98C 1506F4DC A7AE0116 */  sh         $t6, 0x116($sp)
    /* 9C990 1506F4E0 A7AF0134 */  sh         $t7, 0x134($sp)
    /* 9C994 1506F4E4 A7B80136 */  sh         $t8, 0x136($sp)
    /* 9C998 1506F4E8 00002025 */  or         $a0, $zero, $zero
    /* 9C99C 1506F4EC 27A5001C */  addiu      $a1, $sp, 0x1C
    /* 9C9A0 1506F4F0 240600FF */  addiu      $a2, $zero, 0xFF
    /* 9C9A4 1506F4F4 00003825 */  or         $a3, $zero, $zero
    /* 9C9A8 1506F4F8 E7B0011C */  swc1       $f16, 0x11C($sp)
    /* 9C9AC 1506F4FC E7B20120 */  swc1       $f18, 0x120($sp)
    /* 9C9B0 1506F500 E7A40124 */  swc1       $f4, 0x124($sp)
    /* 9C9B4 1506F504 E7A60128 */  swc1       $f6, 0x128($sp)
    /* 9C9B8 1506F508 E7A8012C */  swc1       $f8, 0x12C($sp)
    /* 9C9BC 1506F50C 0D46652E */  jal        func_151994B8
    /* 9C9C0 1506F510 E7AA0130 */   swc1      $f10, 0x130($sp)
    /* 9C9C4 1506F514 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 9C9C8 1506F518 27BD0138 */  addiu      $sp, $sp, 0x138
    /* 9C9CC 1506F51C 03E00008 */  jr         $ra
    /* 9C9D0 1506F520 00000000 */   nop
endlabel func_1506F1A8
