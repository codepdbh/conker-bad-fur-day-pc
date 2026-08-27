nonmatching func_1513BAE8, 0x114

glabel func_1513BAE8
    /* 168F98 1513BAE8 27BDFF88 */  addiu      $sp, $sp, -0x78
    /* 168F9C 1513BAEC 44800000 */  mtc1       $zero, $f0
    /* 168FA0 1513BAF0 AFBF001C */  sw         $ra, 0x1C($sp)
    /* 168FA4 1513BAF4 240E0002 */  addiu      $t6, $zero, 0x2
    /* 168FA8 1513BAF8 240F0005 */  addiu      $t7, $zero, 0x5
    /* 168FAC 1513BAFC 2418012C */  addiu      $t8, $zero, 0x12C
    /* 168FB0 1513BB00 24190009 */  addiu      $t9, $zero, 0x9
    /* 168FB4 1513BB04 A3AE0039 */  sb         $t6, 0x39($sp)
    /* 168FB8 1513BB08 A3AF003A */  sb         $t7, 0x3A($sp)
    /* 168FBC 1513BB0C A7B8003C */  sh         $t8, 0x3C($sp)
    /* 168FC0 1513BB10 AFB90068 */  sw         $t9, 0x68($sp)
    /* 168FC4 1513BB14 3C0A0022 */  lui        $t2, (0x220205 >> 16)
    /* 168FC8 1513BB18 3C0B0004 */  lui        $t3, (0x40600 >> 16)
    /* 168FCC 1513BB1C 240801AE */  addiu      $t0, $zero, 0x1AE
    /* 168FD0 1513BB20 24090001 */  addiu      $t1, $zero, 0x1
    /* 168FD4 1513BB24 354A0205 */  ori        $t2, $t2, (0x220205 & 0xFFFF)
    /* 168FD8 1513BB28 356B0600 */  ori        $t3, $t3, (0x40600 & 0xFFFF)
    /* 168FDC 1513BB2C 240C0001 */  addiu      $t4, $zero, 0x1
    /* 168FE0 1513BB30 240D0036 */  addiu      $t5, $zero, 0x36
    /* 168FE4 1513BB34 240E0080 */  addiu      $t6, $zero, 0x80
    /* 168FE8 1513BB38 240F0020 */  addiu      $t7, $zero, 0x20
    /* 168FEC 1513BB3C 24180003 */  addiu      $t8, $zero, 0x3
    /* 168FF0 1513BB40 24190001 */  addiu      $t9, $zero, 0x1
    /* 168FF4 1513BB44 E7A00024 */  swc1       $f0, 0x24($sp)
    /* 168FF8 1513BB48 E7A00028 */  swc1       $f0, 0x28($sp)
    /* 168FFC 1513BB4C E7A00030 */  swc1       $f0, 0x30($sp)
    /* 169000 1513BB50 E7A00034 */  swc1       $f0, 0x34($sp)
    /* 169004 1513BB54 E7A0002C */  swc1       $f0, 0x2C($sp)
    /* 169008 1513BB58 A3A00038 */  sb         $zero, 0x38($sp)
    /* 16900C 1513BB5C AFA8006C */  sw         $t0, 0x6C($sp)
    /* 169010 1513BB60 AFA90040 */  sw         $t1, 0x40($sp)
    /* 169014 1513BB64 AFAA0044 */  sw         $t2, 0x44($sp)
    /* 169018 1513BB68 AFAB0048 */  sw         $t3, 0x48($sp)
    /* 16901C 1513BB6C A3A0005C */  sb         $zero, 0x5C($sp)
    /* 169020 1513BB70 A3A0005D */  sb         $zero, 0x5D($sp)
    /* 169024 1513BB74 AFAC004C */  sw         $t4, 0x4C($sp)
    /* 169028 1513BB78 AFAD0050 */  sw         $t5, 0x50($sp)
    /* 16902C 1513BB7C AFAE0054 */  sw         $t6, 0x54($sp)
    /* 169030 1513BB80 AFAF0058 */  sw         $t7, 0x58($sp)
    /* 169034 1513BB84 A3B80070 */  sb         $t8, 0x70($sp)
    /* 169038 1513BB88 AFB90010 */  sw         $t9, 0x10($sp)
    /* 16903C 1513BB8C 27A40038 */  addiu      $a0, $sp, 0x38
    /* 169040 1513BB90 24050001 */  addiu      $a1, $zero, 0x1
    /* 169044 1513BB94 24060014 */  addiu      $a2, $zero, 0x14
    /* 169048 1513BB98 0D44ED78 */  jal        func_1513B5E0
    /* 16904C 1513BB9C 240700FF */   addiu     $a3, $zero, 0xFF
    /* 169050 1513BBA0 10400011 */  beqz       $v0, .L1513BBE8
    /* 169054 1513BBA4 00403825 */   or        $a3, $v0, $zero
    /* 169058 1513BBA8 8C480050 */  lw         $t0, 0x50($v0)
    /* 16905C 1513BBAC 24011180 */  addiu      $at, $zero, 0x1180
    /* 169060 1513BBB0 00402025 */  or         $a0, $v0, $zero
    /* 169064 1513BBB4 11010005 */  beq        $t0, $at, .L1513BBCC
    /* 169068 1513BBB8 27A50024 */   addiu     $a1, $sp, 0x24
    /* 16906C 1513BBBC 0D45A5CB */  jal        func_1516972C
    /* 169070 1513BBC0 AFA20074 */   sw        $v0, 0x74($sp)
    /* 169074 1513BBC4 10000008 */  b          .L1513BBE8
    /* 169078 1513BBC8 8FA70074 */   lw        $a3, 0x74($sp)
  .L1513BBCC:
    /* 16907C 1513BBCC 8CE90050 */  lw         $t1, 0x50($a3)
    /* 169080 1513BBD0 AFA70074 */  sw         $a3, 0x74($sp)
    /* 169084 1513BBD4 24060014 */  addiu      $a2, $zero, 0x14
    /* 169088 1513BBD8 00E92021 */  addu       $a0, $a3, $t1
    /* 16908C 1513BBDC 0C008BB0 */  jal        memcpy
    /* 169090 1513BBE0 248400F8 */   addiu     $a0, $a0, 0xF8
    /* 169094 1513BBE4 8FA70074 */  lw         $a3, 0x74($sp)
  .L1513BBE8:
    /* 169098 1513BBE8 00E01025 */  or         $v0, $a3, $zero
    /* 16909C 1513BBEC 8FBF001C */  lw         $ra, 0x1C($sp)
    /* 1690A0 1513BBF0 27BD0078 */  addiu      $sp, $sp, 0x78
    /* 1690A4 1513BBF4 03E00008 */  jr         $ra
    /* 1690A8 1513BBF8 00000000 */   nop
endlabel func_1513BAE8
