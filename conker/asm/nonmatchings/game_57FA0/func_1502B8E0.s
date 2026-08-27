nonmatching func_1502B8E0, 0xD4

glabel func_1502B8E0
    /* 58D90 1502B8E0 27BDFFB8 */  addiu      $sp, $sp, -0x48
    /* 58D94 1502B8E4 AFBF002C */  sw         $ra, 0x2C($sp)
    /* 58D98 1502B8E8 AFB40028 */  sw         $s4, 0x28($sp)
    /* 58D9C 1502B8EC AFB30024 */  sw         $s3, 0x24($sp)
    /* 58DA0 1502B8F0 AFB20020 */  sw         $s2, 0x20($sp)
    /* 58DA4 1502B8F4 AFB1001C */  sw         $s1, 0x1C($sp)
    /* 58DA8 1502B8F8 AFB00018 */  sw         $s0, 0x18($sp)
    /* 58DAC 1502B8FC AFA40048 */  sw         $a0, 0x48($sp)
    /* 58DB0 1502B900 AFA5004C */  sw         $a1, 0x4C($sp)
    /* 58DB4 1502B904 AFA60050 */  sw         $a2, 0x50($sp)
    /* 58DB8 1502B908 AFA70054 */  sw         $a3, 0x54($sp)
    /* 58DBC 1502B90C 3C1000AB */  lui        $s0, %hi(D_AB1950)
    /* 58DC0 1502B910 24030001 */  addiu      $v1, $zero, 0x1
    /* 58DC4 1502B914 26101950 */  addiu      $s0, $s0, %lo(D_AB1950)
    /* 58DC8 1502B918 27B10054 */  addiu      $s1, $sp, 0x54
    /* 58DCC 1502B91C 10C00015 */  beqz       $a2, .L1502B974
    /* 58DD0 1502B920 AFA60050 */   sw        $a2, 0x50($sp)
    /* 58DD4 1502B924 3C140FFF */  lui        $s4, (0xFFFFFFF >> 16)
    /* 58DD8 1502B928 3694FFFF */  ori        $s4, $s4, (0xFFFFFFF & 0xFFFF)
    /* 58DDC 1502B92C AFA60050 */  sw         $a2, 0x50($sp)
    /* 58DE0 1502B930 27B30034 */  addiu      $s3, $sp, 0x34
    /* 58DE4 1502B934 2412FFFC */  addiu      $s2, $zero, -0x4
  .L1502B938:
    /* 58DE8 1502B938 262E0003 */  addiu      $t6, $s1, 0x3
    /* 58DEC 1502B93C 01D28824 */  and        $s1, $t6, $s2
    /* 58DF0 1502B940 26310004 */  addiu      $s1, $s1, 0x4
    /* 58DF4 1502B944 10600005 */  beqz       $v1, .L1502B95C
    /* 58DF8 1502B948 8E25FFFC */   lw        $a1, -0x4($s1)
    /* 58DFC 1502B94C 02002025 */  or         $a0, $s0, $zero
    /* 58E00 1502B950 0D40AB22 */  jal        func_1502AC88
    /* 58E04 1502B954 02603025 */   or        $a2, $s3, $zero
    /* 58E08 1502B958 02028021 */  addu       $s0, $s0, $v0
  .L1502B95C:
    /* 58E0C 1502B95C 8FA60050 */  lw         $a2, 0x50($sp)
    /* 58E10 1502B960 8FAF0034 */  lw         $t7, 0x34($sp)
    /* 58E14 1502B964 24C6FFFF */  addiu      $a2, $a2, -0x1
    /* 58E18 1502B968 AFA60050 */  sw         $a2, 0x50($sp)
    /* 58E1C 1502B96C 14C0FFF2 */  bnez       $a2, .L1502B938
    /* 58E20 1502B970 01F41824 */   and       $v1, $t7, $s4
  .L1502B974:
    /* 58E24 1502B974 10600006 */  beqz       $v1, .L1502B990
    /* 58E28 1502B978 02002025 */   or        $a0, $s0, $zero
    /* 58E2C 1502B97C 8FA50048 */  lw         $a1, 0x48($sp)
    /* 58E30 1502B980 8FA60034 */  lw         $a2, 0x34($sp)
    /* 58E34 1502B984 0D40AC89 */  jal        func_1502B224
    /* 58E38 1502B988 8FA7004C */   lw        $a3, 0x4C($sp)
    /* 58E3C 1502B98C 00401825 */  or         $v1, $v0, $zero
  .L1502B990:
    /* 58E40 1502B990 00601025 */  or         $v0, $v1, $zero
    /* 58E44 1502B994 8FBF002C */  lw         $ra, 0x2C($sp)
    /* 58E48 1502B998 8FB00018 */  lw         $s0, 0x18($sp)
    /* 58E4C 1502B99C 8FB1001C */  lw         $s1, 0x1C($sp)
    /* 58E50 1502B9A0 8FB20020 */  lw         $s2, 0x20($sp)
    /* 58E54 1502B9A4 8FB30024 */  lw         $s3, 0x24($sp)
    /* 58E58 1502B9A8 8FB40028 */  lw         $s4, 0x28($sp)
    /* 58E5C 1502B9AC 03E00008 */  jr         $ra
    /* 58E60 1502B9B0 27BD0048 */   addiu     $sp, $sp, 0x48
endlabel func_1502B8E0
