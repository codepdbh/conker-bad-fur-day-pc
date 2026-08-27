nonmatching func_15136918, 0x104

glabel func_15136918
    /* 163DC8 15136918 27BDFF90 */  addiu      $sp, $sp, -0x70
    /* 163DCC 1513691C AFA50074 */  sw         $a1, 0x74($sp)
    /* 163DD0 15136920 AFA60078 */  sw         $a2, 0x78($sp)
    /* 163DD4 15136924 AFA7007C */  sw         $a3, 0x7C($sp)
    /* 163DD8 15136928 30AE00FF */  andi       $t6, $a1, 0xFF
    /* 163DDC 1513692C 30CF00FF */  andi       $t7, $a2, 0xFF
    /* 163DE0 15136930 0007C400 */  sll        $t8, $a3, 16
    /* 163DE4 15136934 00183C03 */  sra        $a3, $t8, 16
    /* 163DE8 15136938 01E03025 */  or         $a2, $t7, $zero
    /* 163DEC 1513693C 01C02825 */  or         $a1, $t6, $zero
    /* 163DF0 15136940 AFBF003C */  sw         $ra, 0x3C($sp)
    /* 163DF4 15136944 3C0A0028 */  lui        $t2, (0x280001 >> 16)
    /* 163DF8 15136948 24080055 */  addiu      $t0, $zero, 0x55
    /* 163DFC 1513694C 24090300 */  addiu      $t1, $zero, 0x300
    /* 163E00 15136950 354A0001 */  ori        $t2, $t2, (0x280001 & 0xFFFF)
    /* 163E04 15136954 240B0001 */  addiu      $t3, $zero, 0x1
    /* 163E08 15136958 240C0001 */  addiu      $t4, $zero, 0x1
    /* 163E0C 1513695C 2401FFFF */  addiu      $at, $zero, -0x1
    /* 163E10 15136960 A3A8004E */  sb         $t0, 0x4E($sp)
    /* 163E14 15136964 AFA90048 */  sw         $t1, 0x48($sp)
    /* 163E18 15136968 AFA00050 */  sw         $zero, 0x50($sp)
    /* 163E1C 1513696C AFA00054 */  sw         $zero, 0x54($sp)
    /* 163E20 15136970 A3A50058 */  sb         $a1, 0x58($sp)
    /* 163E24 15136974 A3A60059 */  sb         $a2, 0x59($sp)
    /* 163E28 15136978 A3A0005A */  sb         $zero, 0x5A($sp)
    /* 163E2C 1513697C A3A0005B */  sb         $zero, 0x5B($sp)
    /* 163E30 15136980 A3A0005C */  sb         $zero, 0x5C($sp)
    /* 163E34 15136984 A3A0005D */  sb         $zero, 0x5D($sp)
    /* 163E38 15136988 AFAA0060 */  sw         $t2, 0x60($sp)
    /* 163E3C 1513698C A3AB005E */  sb         $t3, 0x5E($sp)
    /* 163E40 15136990 14E10004 */  bne        $a3, $at, .L151369A4
    /* 163E44 15136994 A3AC005F */   sb        $t4, 0x5F($sp)
    /* 163E48 15136998 240D012C */  addiu      $t5, $zero, 0x12C
    /* 163E4C 1513699C 10000005 */  b          .L151369B4
    /* 163E50 151369A0 A7AD004C */   sh        $t5, 0x4C($sp)
  .L151369A4:
    /* 163E54 151369A4 240E0301 */  addiu      $t6, $zero, 0x301
    /* 163E58 151369A8 24EF0020 */  addiu      $t7, $a3, 0x20
    /* 163E5C 151369AC AFAE0048 */  sw         $t6, 0x48($sp)
    /* 163E60 151369B0 A7AF004C */  sh         $t7, 0x4C($sp)
  .L151369B4:
    /* 163E64 151369B4 8FA20088 */  lw         $v0, 0x88($sp)
    /* 163E68 151369B8 87B80082 */  lh         $t8, 0x82($sp)
    /* 163E6C 151369BC 93B9008F */  lbu        $t9, 0x8F($sp)
    /* 163E70 151369C0 C4440000 */  lwc1       $f4, 0x0($v0)
    /* 163E74 151369C4 8FA80090 */  lw         $t0, 0x90($sp)
    /* 163E78 151369C8 27A40048 */  addiu      $a0, $sp, 0x48
    /* 163E7C 151369CC E7A40010 */  swc1       $f4, 0x10($sp)
    /* 163E80 151369D0 C4460004 */  lwc1       $f6, 0x4($v0)
    /* 163E84 151369D4 2405000D */  addiu      $a1, $zero, 0xD
    /* 163E88 151369D8 00003025 */  or         $a2, $zero, $zero
    /* 163E8C 151369DC E7A60014 */  swc1       $f6, 0x14($sp)
    /* 163E90 151369E0 C4480008 */  lwc1       $f8, 0x8($v0)
    /* 163E94 151369E4 AFA0002C */  sw         $zero, 0x2C($sp)
    /* 163E98 151369E8 AFA00028 */  sw         $zero, 0x28($sp)
    /* 163E9C 151369EC E7AC0020 */  swc1       $f12, 0x20($sp)
    /* 163EA0 151369F0 E7AC001C */  swc1       $f12, 0x1C($sp)
    /* 163EA4 151369F4 8FA70084 */  lw         $a3, 0x84($sp)
    /* 163EA8 151369F8 AFB80024 */  sw         $t8, 0x24($sp)
    /* 163EAC 151369FC AFB90030 */  sw         $t9, 0x30($sp)
    /* 163EB0 15136A00 AFA80034 */  sw         $t0, 0x34($sp)
    /* 163EB4 15136A04 0D44F1CF */  jal        func_1513C73C
    /* 163EB8 15136A08 E7A80018 */   swc1      $f8, 0x18($sp)
    /* 163EBC 15136A0C 8FBF003C */  lw         $ra, 0x3C($sp)
    /* 163EC0 15136A10 27BD0070 */  addiu      $sp, $sp, 0x70
    /* 163EC4 15136A14 03E00008 */  jr         $ra
    /* 163EC8 15136A18 00000000 */   nop
endlabel func_15136918
