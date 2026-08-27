nonmatching func_150938BC, 0x29C

glabel func_150938BC
    /* C0D6C 150938BC 27BDFFC0 */  addiu      $sp, $sp, -0x40
    /* C0D70 150938C0 AFB5002C */  sw         $s5, 0x2C($sp)
    /* C0D74 150938C4 3C15800D */  lui        $s5, %hi(D_800D2450)
    /* C0D78 150938C8 AFB70034 */  sw         $s7, 0x34($sp)
    /* C0D7C 150938CC AFB60030 */  sw         $s6, 0x30($sp)
    /* C0D80 150938D0 AFB20020 */  sw         $s2, 0x20($sp)
    /* C0D84 150938D4 00809025 */  or         $s2, $a0, $zero
    /* C0D88 150938D8 2416001E */  addiu      $s6, $zero, 0x1E
    /* C0D8C 150938DC 2417003C */  addiu      $s7, $zero, 0x3C
    /* C0D90 150938E0 26B52450 */  addiu      $s5, $s5, %lo(D_800D2450)
    /* C0D94 150938E4 AFBF003C */  sw         $ra, 0x3C($sp)
    /* C0D98 150938E8 AFBE0038 */  sw         $fp, 0x38($sp)
    /* C0D9C 150938EC AFB40028 */  sw         $s4, 0x28($sp)
    /* C0DA0 150938F0 AFB30024 */  sw         $s3, 0x24($sp)
    /* C0DA4 150938F4 AFB1001C */  sw         $s1, 0x1C($sp)
    /* C0DA8 150938F8 AFB00018 */  sw         $s0, 0x18($sp)
    /* C0DAC 150938FC 8EAE0000 */  lw         $t6, 0x0($s5)
    /* C0DB0 15093900 3C140000 */  lui        $s4, %hi(D_11AD)
    /* C0DB4 15093904 24100004 */  addiu      $s0, $zero, 0x4
    /* C0DB8 15093908 01D6001A */  div        $zero, $t6, $s6
    /* C0DBC 1509390C 00007812 */  mflo       $t7
    /* C0DC0 15093910 269411AD */  addiu      $s4, $s4, %lo(D_11AD)
    /* C0DC4 15093914 16C00002 */  bnez       $s6, .L15093920
    /* C0DC8 15093918 00000000 */   nop
    /* C0DCC 1509391C 0007000D */  break      7
  .L15093920:
    /* C0DD0 15093920 2401FFFF */  addiu      $at, $zero, -0x1
    /* C0DD4 15093924 16C10004 */  bne        $s6, $at, .L15093938
    /* C0DD8 15093928 3C018000 */   lui       $at, (0x80000000 >> 16)
    /* C0DDC 1509392C 15C10002 */  bne        $t6, $at, .L15093938
    /* C0DE0 15093930 00000000 */   nop
    /* C0DE4 15093934 0006000D */  break      6
  .L15093938:
    /* C0DE8 15093938 01F7001A */  div        $zero, $t7, $s7
    /* C0DEC 1509393C 00008810 */  mfhi       $s1
    /* C0DF0 15093940 3C1E8000 */  lui        $fp, (0x80000000 >> 16)
    /* C0DF4 15093944 16E00002 */  bnez       $s7, .L15093950
    /* C0DF8 15093948 00000000 */   nop
    /* C0DFC 1509394C 0007000D */  break      7
  .L15093950:
    /* C0E00 15093950 2401FFFF */  addiu      $at, $zero, -0x1
    /* C0E04 15093954 16E10004 */  bne        $s7, $at, .L15093968
    /* C0E08 15093958 3C018000 */   lui       $at, (0x80000000 >> 16)
    /* C0E0C 1509395C 15E10002 */  bne        $t7, $at, .L15093968
    /* C0E10 15093960 00000000 */   nop
    /* C0E14 15093964 0006000D */  break      6
  .L15093968:
    /* C0E18 15093968 2413000A */  addiu      $s3, $zero, 0xA
  .L1509396C:
    /* C0E1C 1509396C 0233001A */  div        $zero, $s1, $s3
    /* C0E20 15093970 0000C010 */  mfhi       $t8
    /* C0E24 15093974 02982021 */  addu       $a0, $s4, $t8
    /* C0E28 15093978 16600002 */  bnez       $s3, .L15093984
    /* C0E2C 1509397C 00000000 */   nop
    /* C0E30 15093980 0007000D */  break      7
  .L15093984:
    /* C0E34 15093984 2401FFFF */  addiu      $at, $zero, -0x1
    /* C0E38 15093988 16610004 */  bne        $s3, $at, .L1509399C
    /* C0E3C 1509398C 3C018000 */   lui       $at, (0x80000000 >> 16)
    /* C0E40 15093990 16210002 */  bne        $s1, $at, .L1509399C
    /* C0E44 15093994 00000000 */   nop
    /* C0E48 15093998 0006000D */  break      6
  .L1509399C:
    /* C0E4C 1509399C 00002825 */  or         $a1, $zero, $zero
    /* C0E50 150939A0 24060003 */  addiu      $a2, $zero, 0x3
    /* C0E54 150939A4 0D44343B */  jal        func_1510D0EC
    /* C0E58 150939A8 00003825 */   or        $a3, $zero, $zero
    /* C0E5C 150939AC 145E0003 */  bne        $v0, $fp, .L150939BC
    /* C0E60 150939B0 02401825 */   or        $v1, $s2, $zero
    /* C0E64 150939B4 1000005C */  b          .L15093B28
    /* C0E68 150939B8 02401025 */   or        $v0, $s2, $zero
  .L150939BC:
    /* C0E6C 150939BC 0010C880 */  sll        $t9, $s0, 2
    /* C0E70 150939C0 3328FFFF */  andi       $t0, $t9, 0xFFFF
    /* C0E74 150939C4 3C01DB06 */  lui        $at, (0xDB060000 >> 16)
    /* C0E78 150939C8 01014825 */  or         $t1, $t0, $at
    /* C0E7C 150939CC AC690000 */  sw         $t1, 0x0($v1)
    /* C0E80 150939D0 26520008 */  addiu      $s2, $s2, 0x8
    /* C0E84 150939D4 AC620004 */  sw         $v0, 0x4($v1)
    /* C0E88 150939D8 24010003 */  addiu      $at, $zero, 0x3
    /* C0E8C 150939DC 1601001A */  bne        $s0, $at, .L15093A48
    /* C0E90 150939E0 00000000 */   nop
    /* C0E94 150939E4 8EAA0000 */  lw         $t2, 0x0($s5)
    /* C0E98 150939E8 0156001A */  div        $zero, $t2, $s6
    /* C0E9C 150939EC 00005812 */  mflo       $t3
    /* C0EA0 150939F0 16C00002 */  bnez       $s6, .L150939FC
    /* C0EA4 150939F4 00000000 */   nop
    /* C0EA8 150939F8 0007000D */  break      7
  .L150939FC:
    /* C0EAC 150939FC 2401FFFF */  addiu      $at, $zero, -0x1
    /* C0EB0 15093A00 16C10004 */  bne        $s6, $at, .L15093A14
    /* C0EB4 15093A04 3C018000 */   lui       $at, (0x80000000 >> 16)
    /* C0EB8 15093A08 15410002 */  bne        $t2, $at, .L15093A14
    /* C0EBC 15093A0C 00000000 */   nop
    /* C0EC0 15093A10 0006000D */  break      6
  .L15093A14:
    /* C0EC4 15093A14 0177001A */  div        $zero, $t3, $s7
    /* C0EC8 15093A18 00008812 */  mflo       $s1
    /* C0ECC 15093A1C 16E00002 */  bnez       $s7, .L15093A28
    /* C0ED0 15093A20 00000000 */   nop
    /* C0ED4 15093A24 0007000D */  break      7
  .L15093A28:
    /* C0ED8 15093A28 2401FFFF */  addiu      $at, $zero, -0x1
    /* C0EDC 15093A2C 16E10004 */  bne        $s7, $at, .L15093A40
    /* C0EE0 15093A30 3C018000 */   lui       $at, (0x80000000 >> 16)
    /* C0EE4 15093A34 15610002 */  bne        $t3, $at, .L15093A40
    /* C0EE8 15093A38 00000000 */   nop
    /* C0EEC 15093A3C 0006000D */  break      6
  .L15093A40:
    /* C0EF0 15093A40 1000000F */  b          .L15093A80
    /* C0EF4 15093A44 2610FFFF */   addiu     $s0, $s0, -0x1
  .L15093A48:
    /* C0EF8 15093A48 0233001A */  div        $zero, $s1, $s3
    /* C0EFC 15093A4C 16600002 */  bnez       $s3, .L15093A58
    /* C0F00 15093A50 00000000 */   nop
    /* C0F04 15093A54 0007000D */  break      7
  .L15093A58:
    /* C0F08 15093A58 2401FFFF */  addiu      $at, $zero, -0x1
    /* C0F0C 15093A5C 16610004 */  bne        $s3, $at, .L15093A70
    /* C0F10 15093A60 3C018000 */   lui       $at, (0x80000000 >> 16)
    /* C0F14 15093A64 16210002 */  bne        $s1, $at, .L15093A70
    /* C0F18 15093A68 00000000 */   nop
    /* C0F1C 15093A6C 0006000D */  break      6
  .L15093A70:
    /* C0F20 15093A70 00008812 */  mflo       $s1
    /* C0F24 15093A74 00000000 */  nop
    /* C0F28 15093A78 00000000 */  nop
    /* C0F2C 15093A7C 2610FFFF */  addiu      $s0, $s0, -0x1
  .L15093A80:
    /* C0F30 15093A80 1600FFBA */  bnez       $s0, .L1509396C
    /* C0F34 15093A84 00000000 */   nop
    /* C0F38 15093A88 240F0078 */  addiu      $t7, $zero, 0x78
    /* C0F3C 15093A8C 24180081 */  addiu      $t8, $zero, 0x81
    /* C0F40 15093A90 2419FED1 */  addiu      $t9, $zero, -0x12F
    /* C0F44 15093A94 44994000 */  mtc1       $t9, $f8
    /* C0F48 15093A98 44983000 */  mtc1       $t8, $f6
    /* C0F4C 15093A9C 448F2000 */  mtc1       $t7, $f4
    /* C0F50 15093AA0 46804220 */  cvt.s.w    $f8, $f8
    /* C0F54 15093AA4 3C10800C */  lui        $s0, %hi(D_800BE9C0)
    /* C0F58 15093AA8 2610E9C0 */  addiu      $s0, $s0, %lo(D_800BE9C0)
    /* C0F5C 15093AAC 920C0000 */  lbu        $t4, 0x0($s0)
    /* C0F60 15093AB0 3C11800D */  lui        $s1, %hi(D_800D244C)
    /* C0F64 15093AB4 468031A0 */  cvt.s.w    $f6, $f6
    /* C0F68 15093AB8 2631244C */  addiu      $s1, $s1, %lo(D_800D244C)
    /* C0F6C 15093ABC 8E2E0000 */  lw         $t6, 0x0($s1)
    /* C0F70 15093AC0 44074000 */  mfc1       $a3, $f8
    /* C0F74 15093AC4 000C6980 */  sll        $t5, $t4, 6
    /* C0F78 15093AC8 46802120 */  cvt.s.w    $f4, $f4
    /* C0F7C 15093ACC 44063000 */  mfc1       $a2, $f6
    /* C0F80 15093AD0 01AE2021 */  addu       $a0, $t5, $t6
    /* C0F84 15093AD4 44052000 */  mfc1       $a1, $f4
    /* C0F88 15093AD8 0D429F40 */  jal        func_150A7D00
    /* C0F8C 15093ADC 00000000 */   nop
    /* C0F90 15093AE0 3C08DA38 */  lui        $t0, (0xDA380003 >> 16)
    /* C0F94 15093AE4 35080003 */  ori        $t0, $t0, (0xDA380003 & 0xFFFF)
    /* C0F98 15093AE8 02401825 */  or         $v1, $s2, $zero
    /* C0F9C 15093AEC AC680000 */  sw         $t0, 0x0($v1)
    /* C0FA0 15093AF0 92090000 */  lbu        $t1, 0x0($s0)
    /* C0FA4 15093AF4 8E2B0000 */  lw         $t3, 0x0($s1)
    /* C0FA8 15093AF8 26520008 */  addiu      $s2, $s2, 0x8
    /* C0FAC 15093AFC 00095180 */  sll        $t2, $t1, 6
    /* C0FB0 15093B00 014B6021 */  addu       $t4, $t2, $t3
    /* C0FB4 15093B04 AC6C0004 */  sw         $t4, 0x4($v1)
    /* C0FB8 15093B08 02402025 */  or         $a0, $s2, $zero
    /* C0FBC 15093B0C 3C0DDE00 */  lui        $t5, (0xDE000000 >> 16)
    /* C0FC0 15093B10 AC8D0000 */  sw         $t5, 0x0($a0)
    /* C0FC4 15093B14 3C0E800D */  lui        $t6, %hi(D_800D2448)
    /* C0FC8 15093B18 8DCE2448 */  lw         $t6, %lo(D_800D2448)($t6)
    /* C0FCC 15093B1C 26520008 */  addiu      $s2, $s2, 0x8
    /* C0FD0 15093B20 02401025 */  or         $v0, $s2, $zero
    /* C0FD4 15093B24 AC8E0004 */  sw         $t6, 0x4($a0)
  .L15093B28:
    /* C0FD8 15093B28 8FBF003C */  lw         $ra, 0x3C($sp)
    /* C0FDC 15093B2C 8FB00018 */  lw         $s0, 0x18($sp)
    /* C0FE0 15093B30 8FB1001C */  lw         $s1, 0x1C($sp)
    /* C0FE4 15093B34 8FB20020 */  lw         $s2, 0x20($sp)
    /* C0FE8 15093B38 8FB30024 */  lw         $s3, 0x24($sp)
    /* C0FEC 15093B3C 8FB40028 */  lw         $s4, 0x28($sp)
    /* C0FF0 15093B40 8FB5002C */  lw         $s5, 0x2C($sp)
    /* C0FF4 15093B44 8FB60030 */  lw         $s6, 0x30($sp)
    /* C0FF8 15093B48 8FB70034 */  lw         $s7, 0x34($sp)
    /* C0FFC 15093B4C 8FBE0038 */  lw         $fp, 0x38($sp)
    /* C1000 15093B50 03E00008 */  jr         $ra
    /* C1004 15093B54 27BD0040 */   addiu     $sp, $sp, 0x40
endlabel func_150938BC
