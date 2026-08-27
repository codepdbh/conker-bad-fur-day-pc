nonmatching func_151DB97C, 0x12C

glabel func_151DB97C
    /* 208E2C 151DB97C 27BDFFD0 */  addiu      $sp, $sp, -0x30
    /* 208E30 151DB980 AFB10018 */  sw         $s1, 0x18($sp)
    /* 208E34 151DB984 00808825 */  or         $s1, $a0, $zero
    /* 208E38 151DB988 AFBF001C */  sw         $ra, 0x1C($sp)
    /* 208E3C 151DB98C AFB00014 */  sw         $s0, 0x14($sp)
    /* 208E40 151DB990 AFA50034 */  sw         $a1, 0x34($sp)
    /* 208E44 151DB994 922E00A8 */  lbu        $t6, 0xA8($s1)
    /* 208E48 151DB998 26240058 */  addiu      $a0, $s1, 0x58
    /* 208E4C 151DB99C 31CF0002 */  andi       $t7, $t6, 0x2
    /* 208E50 151DB9A0 51E00004 */  beql       $t7, $zero, .L151DB9B4
    /* 208E54 151DB9A4 263000A8 */   addiu     $s0, $s1, 0xA8
    /* 208E58 151DB9A8 0D44C646 */  jal        func_15131918
    /* 208E5C 151DB9AC 8E2500AC */   lw        $a1, 0xAC($s1)
    /* 208E60 151DB9B0 263000A8 */  addiu      $s0, $s1, 0xA8
  .L151DB9B4:
    /* 208E64 151DB9B4 92180000 */  lbu        $t8, 0x0($s0)
    /* 208E68 151DB9B8 3C02800C */  lui        $v0, %hi(D_800BE9E4)
    /* 208E6C 151DB9BC 2442E9E4 */  addiu      $v0, $v0, %lo(D_800BE9E4)
    /* 208E70 151DB9C0 33190001 */  andi       $t9, $t8, 0x1
    /* 208E74 151DB9C4 53200033 */  beql       $t9, $zero, .L151DBA94
    /* 208E78 151DB9C8 24020001 */   addiu     $v0, $zero, 0x1
    /* 208E7C 151DB9CC 9208000B */  lbu        $t0, 0xB($s0)
    /* 208E80 151DB9D0 8C490000 */  lw         $t1, 0x0($v0)
    /* 208E84 151DB9D4 920B0008 */  lbu        $t3, 0x8($s0)
    /* 208E88 151DB9D8 920D000C */  lbu        $t5, 0xC($s0)
    /* 208E8C 151DB9DC 01090019 */  multu      $t0, $t1
    /* 208E90 151DB9E0 92180009 */  lbu        $t8, 0x9($s0)
    /* 208E94 151DB9E4 9208000D */  lbu        $t0, 0xD($s0)
    /* 208E98 151DB9E8 00005012 */  mflo       $t2
    /* 208E9C 151DB9EC 016A6021 */  addu       $t4, $t3, $t2
    /* 208EA0 151DB9F0 A20C0008 */  sb         $t4, 0x8($s0)
    /* 208EA4 151DB9F4 8C4E0000 */  lw         $t6, 0x0($v0)
    /* 208EA8 151DB9F8 92040008 */  lbu        $a0, 0x8($s0)
    /* 208EAC 151DB9FC 920A000A */  lbu        $t2, 0xA($s0)
    /* 208EB0 151DBA00 01AE0019 */  multu      $t5, $t6
    /* 208EB4 151DBA04 2484FFC0 */  addiu      $a0, $a0, -0x40
    /* 208EB8 151DBA08 308D00FF */  andi       $t5, $a0, 0xFF
    /* 208EBC 151DBA0C 01A02025 */  or         $a0, $t5, $zero
    /* 208EC0 151DBA10 00007812 */  mflo       $t7
    /* 208EC4 151DBA14 030FC821 */  addu       $t9, $t8, $t7
    /* 208EC8 151DBA18 A2190009 */  sb         $t9, 0x9($s0)
    /* 208ECC 151DBA1C 8C490000 */  lw         $t1, 0x0($v0)
    /* 208ED0 151DBA20 01090019 */  multu      $t0, $t1
    /* 208ED4 151DBA24 00005812 */  mflo       $t3
    /* 208ED8 151DBA28 014B6021 */  addu       $t4, $t2, $t3
    /* 208EDC 151DBA2C 0D4508F6 */  jal        func_151423D8
    /* 208EE0 151DBA30 A20C000A */   sb        $t4, 0xA($s0)
    /* 208EE4 151DBA34 E7A00020 */  swc1       $f0, 0x20($sp)
    /* 208EE8 151DBA38 92040009 */  lbu        $a0, 0x9($s0)
    /* 208EEC 151DBA3C 2484FFC0 */  addiu      $a0, $a0, -0x40
    /* 208EF0 151DBA40 308E00FF */  andi       $t6, $a0, 0xFF
    /* 208EF4 151DBA44 0D4508F6 */  jal        func_151423D8
    /* 208EF8 151DBA48 01C02025 */   or        $a0, $t6, $zero
    /* 208EFC 151DBA4C E7A00024 */  swc1       $f0, 0x24($sp)
    /* 208F00 151DBA50 9204000A */  lbu        $a0, 0xA($s0)
    /* 208F04 151DBA54 2484FFC0 */  addiu      $a0, $a0, -0x40
    /* 208F08 151DBA58 309800FF */  andi       $t8, $a0, 0xFF
    /* 208F0C 151DBA5C 0D4508F6 */  jal        func_151423D8
    /* 208F10 151DBA60 03002025 */   or        $a0, $t8, $zero
    /* 208F14 151DBA64 C6040010 */  lwc1       $f4, 0x10($s0)
    /* 208F18 151DBA68 C7A60020 */  lwc1       $f6, 0x20($sp)
    /* 208F1C 151DBA6C 46062202 */  mul.s      $f8, $f4, $f6
    /* 208F20 151DBA70 E628004C */  swc1       $f8, 0x4C($s1)
    /* 208F24 151DBA74 C7B00024 */  lwc1       $f16, 0x24($sp)
    /* 208F28 151DBA78 C60A0014 */  lwc1       $f10, 0x14($s0)
    /* 208F2C 151DBA7C 46105482 */  mul.s      $f18, $f10, $f16
    /* 208F30 151DBA80 E6320050 */  swc1       $f18, 0x50($s1)
    /* 208F34 151DBA84 C6040018 */  lwc1       $f4, 0x18($s0)
    /* 208F38 151DBA88 46002182 */  mul.s      $f6, $f4, $f0
    /* 208F3C 151DBA8C E6260054 */  swc1       $f6, 0x54($s1)
    /* 208F40 151DBA90 24020001 */  addiu      $v0, $zero, 0x1
  .L151DBA94:
    /* 208F44 151DBA94 8FBF001C */  lw         $ra, 0x1C($sp)
    /* 208F48 151DBA98 8FB00014 */  lw         $s0, 0x14($sp)
    /* 208F4C 151DBA9C 8FB10018 */  lw         $s1, 0x18($sp)
    /* 208F50 151DBAA0 03E00008 */  jr         $ra
    /* 208F54 151DBAA4 27BD0030 */   addiu     $sp, $sp, 0x30
endlabel func_151DB97C
