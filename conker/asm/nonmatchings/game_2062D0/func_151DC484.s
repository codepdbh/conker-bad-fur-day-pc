nonmatching func_151DC484, 0x218

glabel func_151DC484
    /* 209934 151DC484 27BDFF48 */  addiu      $sp, $sp, -0xB8
    /* 209938 151DC488 AFA500BC */  sw         $a1, 0xBC($sp)
    /* 20993C 151DC48C 27A50074 */  addiu      $a1, $sp, 0x74
    /* 209940 151DC490 AFBF001C */  sw         $ra, 0x1C($sp)
    /* 209944 151DC494 AFA400B8 */  sw         $a0, 0xB8($sp)
    /* 209948 151DC498 AFA600C0 */  sw         $a2, 0xC0($sp)
    /* 20994C 151DC49C AFA700C4 */  sw         $a3, 0xC4($sp)
    /* 209950 151DC4A0 8FAE00B8 */  lw         $t6, 0xB8($sp)
    /* 209954 151DC4A4 240A00FF */  addiu      $t2, $zero, 0xFF
    /* 209958 151DC4A8 240BFFC0 */  addiu      $t3, $zero, -0x40
    /* 20995C 151DC4AC 8DC10000 */  lw         $at, 0x0($t6)
    /* 209960 151DC4B0 24080008 */  addiu      $t0, $zero, 0x8
    /* 209964 151DC4B4 24090006 */  addiu      $t1, $zero, 0x6
    /* 209968 151DC4B8 ACA10000 */  sw         $at, 0x0($a1)
    /* 20996C 151DC4BC 8DD90004 */  lw         $t9, 0x4($t6)
    /* 209970 151DC4C0 240C0028 */  addiu      $t4, $zero, 0x28
    /* 209974 151DC4C4 240D0003 */  addiu      $t5, $zero, 0x3
    /* 209978 151DC4C8 ACB90004 */  sw         $t9, 0x4($a1)
    /* 20997C 151DC4CC 8DC10008 */  lw         $at, 0x8($t6)
    /* 209980 151DC4D0 2418003C */  addiu      $t8, $zero, 0x3C
    /* 209984 151DC4D4 240F0028 */  addiu      $t7, $zero, 0x28
    /* 209988 151DC4D8 ACA10008 */  sw         $at, 0x8($a1)
    /* 20998C 151DC4DC 3C014040 */  lui        $at, (0x40400000 >> 16)
    /* 209990 151DC4E0 44812000 */  mtc1       $at, $f4
    /* 209994 151DC4E4 3C014000 */  lui        $at, (0x40000000 >> 16)
    /* 209998 151DC4E8 44813000 */  mtc1       $at, $f6
    /* 20999C 151DC4EC 3C01800B */  lui        $at, %hi(D_800AB4E4)
    /* 2099A0 151DC4F0 C428B4E4 */  lwc1       $f8, %lo(D_800AB4E4)($at)
    /* 2099A4 151DC4F4 3C01800B */  lui        $at, %hi(D_800AB4E8)
    /* 2099A8 151DC4F8 C42AB4E8 */  lwc1       $f10, %lo(D_800AB4E8)($at)
    /* 2099AC 151DC4FC 3C014100 */  lui        $at, (0x41000000 >> 16)
    /* 2099B0 151DC500 44818000 */  mtc1       $at, $f16
    /* 2099B4 151DC504 3C0140A0 */  lui        $at, (0x40A00000 >> 16)
    /* 2099B8 151DC508 44819000 */  mtc1       $at, $f18
    /* 2099BC 151DC50C A7AA006E */  sh         $t2, 0x6E($sp)
    /* 2099C0 151DC510 A7AB0070 */  sh         $t3, 0x70($sp)
    /* 2099C4 151DC514 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 2099C8 151DC518 E7A40080 */  swc1       $f4, 0x80($sp)
    /* 2099CC 151DC51C 44812000 */  mtc1       $at, $f4
    /* 2099D0 151DC520 93AA00C3 */  lbu        $t2, 0xC3($sp)
    /* 2099D4 151DC524 8FAB00C8 */  lw         $t3, 0xC8($sp)
    /* 2099D8 151DC528 A7A80098 */  sh         $t0, 0x98($sp)
    /* 2099DC 151DC52C A7A9009A */  sh         $t1, 0x9A($sp)
    /* 2099E0 151DC530 240E0064 */  addiu      $t6, $zero, 0x64
    /* 2099E4 151DC534 24190064 */  addiu      $t9, $zero, 0x64
    /* 2099E8 151DC538 24080010 */  addiu      $t0, $zero, 0x10
    /* 2099EC 151DC53C 2409000F */  addiu      $t1, $zero, 0xF
    /* 2099F0 151DC540 A7A0006C */  sh         $zero, 0x6C($sp)
    /* 2099F4 151DC544 A7AC0072 */  sh         $t4, 0x72($sp)
    /* 2099F8 151DC548 A7AD009C */  sh         $t5, 0x9C($sp)
    /* 2099FC 151DC54C A7A0009E */  sh         $zero, 0x9E($sp)
    /* 209A00 151DC550 A7B800A0 */  sh         $t8, 0xA0($sp)
    /* 209A04 151DC554 A7AF00A2 */  sh         $t7, 0xA2($sp)
    /* 209A08 151DC558 A7AE00A4 */  sh         $t6, 0xA4($sp)
    /* 209A0C 151DC55C A7B900A6 */  sh         $t9, 0xA6($sp)
    /* 209A10 151DC560 A7A800B0 */  sh         $t0, 0xB0($sp)
    /* 209A14 151DC564 A7A900B2 */  sh         $t1, 0xB2($sp)
    /* 209A18 151DC568 AFA000B4 */  sw         $zero, 0xB4($sp)
    /* 209A1C 151DC56C 93A700C7 */  lbu        $a3, 0xC7($sp)
    /* 209A20 151DC570 8FA600BC */  lw         $a2, 0xBC($sp)
    /* 209A24 151DC574 27A4006C */  addiu      $a0, $sp, 0x6C
    /* 209A28 151DC578 E7A60084 */  swc1       $f6, 0x84($sp)
    /* 209A2C 151DC57C E7A80088 */  swc1       $f8, 0x88($sp)
    /* 209A30 151DC580 E7AA008C */  swc1       $f10, 0x8C($sp)
    /* 209A34 151DC584 E7B00090 */  swc1       $f16, 0x90($sp)
    /* 209A38 151DC588 E7B20094 */  swc1       $f18, 0x94($sp)
    /* 209A3C 151DC58C E7A400AC */  swc1       $f4, 0xAC($sp)
    /* 209A40 151DC590 A3AA00A8 */  sb         $t2, 0xA8($sp)
    /* 209A44 151DC594 0D454FC6 */  jal        func_15153F18
    /* 209A48 151DC598 AFAB0010 */   sw        $t3, 0x10($sp)
    /* 209A4C 151DC59C 3C01426C */  lui        $at, (0x426C0000 >> 16)
    /* 209A50 151DC5A0 44810000 */  mtc1       $at, $f0
    /* 209A54 151DC5A4 27A5002C */  addiu      $a1, $sp, 0x2C
    /* 209A58 151DC5A8 8FAC00B8 */  lw         $t4, 0xB8($sp)
    /* 209A5C 151DC5AC 240E000C */  addiu      $t6, $zero, 0xC
    /* 209A60 151DC5B0 240800FF */  addiu      $t0, $zero, 0xFF
    /* 209A64 151DC5B4 8D810000 */  lw         $at, 0x0($t4)
    /* 209A68 151DC5B8 24190006 */  addiu      $t9, $zero, 0x6
    /* 209A6C 151DC5BC 44802000 */  mtc1       $zero, $f4
    /* 209A70 151DC5C0 ACA10000 */  sw         $at, 0x0($a1)
    /* 209A74 151DC5C4 8D8F0004 */  lw         $t7, 0x4($t4)
    /* 209A78 151DC5C8 2409FFC0 */  addiu      $t1, $zero, -0x40
    /* 209A7C 151DC5CC 240A001A */  addiu      $t2, $zero, 0x1A
    /* 209A80 151DC5D0 ACAF0004 */  sw         $t7, 0x4($a1)
    /* 209A84 151DC5D4 8D810008 */  lw         $at, 0x8($t4)
    /* 209A88 151DC5D8 240B0023 */  addiu      $t3, $zero, 0x23
    /* 209A8C 151DC5DC 2418000F */  addiu      $t8, $zero, 0xF
    /* 209A90 151DC5E0 ACA10008 */  sw         $at, 0x8($a1)
    /* 209A94 151DC5E4 3C0140E0 */  lui        $at, (0x40E00000 >> 16)
    /* 209A98 151DC5E8 44813000 */  mtc1       $at, $f6
    /* 209A9C 151DC5EC 3C014040 */  lui        $at, (0x40400000 >> 16)
    /* 209AA0 151DC5F0 44814000 */  mtc1       $at, $f8
    /* 209AA4 151DC5F4 3C01800B */  lui        $at, %hi(D_800AB4EC)
    /* 209AA8 151DC5F8 C42AB4EC */  lwc1       $f10, %lo(D_800AB4EC)($at)
    /* 209AAC 151DC5FC 3C01800B */  lui        $at, %hi(D_800AB4F0)
    /* 209AB0 151DC600 C430B4F0 */  lwc1       $f16, %lo(D_800AB4F0)($at)
    /* 209AB4 151DC604 A7AE0038 */  sh         $t6, 0x38($sp)
    /* 209AB8 151DC608 A7A80026 */  sh         $t0, 0x26($sp)
    /* 209ABC 151DC60C 3C01800B */  lui        $at, %hi(D_800AB4F4)
    /* 209AC0 151DC610 93AE00C3 */  lbu        $t6, 0xC3($sp)
    /* 209AC4 151DC614 C432B4F4 */  lwc1       $f18, %lo(D_800AB4F4)($at)
    /* 209AC8 151DC618 8FA800C8 */  lw         $t0, 0xC8($sp)
    /* 209ACC 151DC61C A7B9003A */  sh         $t9, 0x3A($sp)
    /* 209AD0 151DC620 240D009B */  addiu      $t5, $zero, 0x9B
    /* 209AD4 151DC624 240C0064 */  addiu      $t4, $zero, 0x64
    /* 209AD8 151DC628 240F0001 */  addiu      $t7, $zero, 0x1
    /* 209ADC 151DC62C 24190001 */  addiu      $t9, $zero, 0x1
    /* 209AE0 151DC630 A7A00024 */  sh         $zero, 0x24($sp)
    /* 209AE4 151DC634 A7A90028 */  sh         $t1, 0x28($sp)
    /* 209AE8 151DC638 A7AA002A */  sh         $t2, 0x2A($sp)
    /* 209AEC 151DC63C A7AB0044 */  sh         $t3, 0x44($sp)
    /* 209AF0 151DC640 A7B80046 */  sh         $t8, 0x46($sp)
    /* 209AF4 151DC644 A3AD0050 */  sb         $t5, 0x50($sp)
    /* 209AF8 151DC648 A3AC0051 */  sb         $t4, 0x51($sp)
    /* 209AFC 151DC64C E7A00054 */  swc1       $f0, 0x54($sp)
    /* 209B00 151DC650 E7A00058 */  swc1       $f0, 0x58($sp)
    /* 209B04 151DC654 A3AF005C */  sb         $t7, 0x5C($sp)
    /* 209B08 151DC658 A3B90064 */  sb         $t9, 0x64($sp)
    /* 209B0C 151DC65C 93A700C7 */  lbu        $a3, 0xC7($sp)
    /* 209B10 151DC660 8FA600BC */  lw         $a2, 0xBC($sp)
    /* 209B14 151DC664 27A40024 */  addiu      $a0, $sp, 0x24
    /* 209B18 151DC668 E7A40068 */  swc1       $f4, 0x68($sp)
    /* 209B1C 151DC66C E7A6003C */  swc1       $f6, 0x3C($sp)
    /* 209B20 151DC670 E7A80040 */  swc1       $f8, 0x40($sp)
    /* 209B24 151DC674 E7AA0048 */  swc1       $f10, 0x48($sp)
    /* 209B28 151DC678 E7B0004C */  swc1       $f16, 0x4C($sp)
    /* 209B2C 151DC67C A3AE005D */  sb         $t6, 0x5D($sp)
    /* 209B30 151DC680 E7B20060 */  swc1       $f18, 0x60($sp)
    /* 209B34 151DC684 0D45405E */  jal        func_15150178
    /* 209B38 151DC688 AFA80010 */   sw        $t0, 0x10($sp)
    /* 209B3C 151DC68C 8FBF001C */  lw         $ra, 0x1C($sp)
    /* 209B40 151DC690 27BD00B8 */  addiu      $sp, $sp, 0xB8
    /* 209B44 151DC694 03E00008 */  jr         $ra
    /* 209B48 151DC698 00000000 */   nop
endlabel func_151DC484
    /* 209B4C 151DC69C 00000000 */  nop
