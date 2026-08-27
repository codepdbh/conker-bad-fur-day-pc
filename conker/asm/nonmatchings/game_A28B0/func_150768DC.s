nonmatching func_150768DC, 0x280

glabel func_150768DC
    /* A3D8C 150768DC 27BDFFA8 */  addiu      $sp, $sp, -0x58
    /* A3D90 150768E0 AFB40040 */  sw         $s4, 0x40($sp)
    /* A3D94 150768E4 3C14800D */  lui        $s4, %hi(D_800D154C)
    /* A3D98 150768E8 2694154C */  addiu      $s4, $s4, %lo(D_800D154C)
    /* A3D9C 150768EC AFBF0054 */  sw         $ra, 0x54($sp)
    /* A3DA0 150768F0 AFBE0050 */  sw         $fp, 0x50($sp)
    /* A3DA4 150768F4 AFB7004C */  sw         $s7, 0x4C($sp)
    /* A3DA8 150768F8 AFB60048 */  sw         $s6, 0x48($sp)
    /* A3DAC 150768FC AFB50044 */  sw         $s5, 0x44($sp)
    /* A3DB0 15076900 AFB3003C */  sw         $s3, 0x3C($sp)
    /* A3DB4 15076904 AFB20038 */  sw         $s2, 0x38($sp)
    /* A3DB8 15076908 AFB10034 */  sw         $s1, 0x34($sp)
    /* A3DBC 1507690C AFB00030 */  sw         $s0, 0x30($sp)
    /* A3DC0 15076910 F7B80028 */  sdc1       $f24, 0x28($sp)
    /* A3DC4 15076914 F7B60020 */  sdc1       $f22, 0x20($sp)
    /* A3DC8 15076918 F7B40018 */  sdc1       $f20, 0x18($sp)
    /* A3DCC 1507691C 8E980000 */  lw         $t8, 0x0($s4)
    /* A3DD0 15076920 3C0E800D */  lui        $t6, %hi(D_800D1890)
    /* A3DD4 15076924 91CE1890 */  lbu        $t6, %lo(D_800D1890)($t6)
    /* A3DD8 15076928 A30000A8 */  sb         $zero, 0xA8($t8)
    /* A3DDC 1507692C 8E990000 */  lw         $t9, 0x0($s4)
    /* A3DE0 15076930 3C08800D */  lui        $t0, %hi(D_800CC2D0)
    /* A3DE4 15076934 2511C2D0 */  addiu      $s1, $t0, %lo(D_800CC2D0)
    /* A3DE8 15076938 2401032C */  addiu      $at, $zero, 0x32C
    /* A3DEC 1507693C 0331F023 */  subu       $fp, $t9, $s1
    /* A3DF0 15076940 03C1001A */  div        $zero, $fp, $at
    /* A3DF4 15076944 000E78C0 */  sll        $t7, $t6, 3
    /* A3DF8 15076948 448F2000 */  mtc1       $t7, $f4
    /* A3DFC 1507694C 3C014248 */  lui        $at, (0x42480000 >> 16)
    /* A3E00 15076950 0000F012 */  mflo       $fp
    /* A3E04 15076954 3C17800D */  lui        $s7, %hi(D_800D1C90)
    /* A3E08 15076958 3C15800D */  lui        $s5, %hi(D_800D1891)
    /* A3E0C 1507695C 4481C000 */  mtc1       $at, $f24
    /* A3E10 15076960 26B51891 */  addiu      $s5, $s5, %lo(D_800D1891)
    /* A3E14 15076964 26F71C90 */  addiu      $s7, $s7, %lo(D_800D1C90)
    /* A3E18 15076968 00009825 */  or         $s3, $zero, $zero
    /* A3E1C 1507696C 24160019 */  addiu      $s6, $zero, 0x19
    /* A3E20 15076970 468025A0 */  cvt.s.w    $f22, $f4
  .L15076974:
    /* A3E24 15076974 8E2A0000 */  lw         $t2, 0x0($s1)
    /* A3E28 15076978 51400043 */  beql       $t2, $zero, .L15076A88
    /* A3E2C 1507697C 26730001 */   addiu     $s3, $s3, 0x1
    /* A3E30 15076980 922B01CA */  lbu        $t3, 0x1CA($s1)
    /* A3E34 15076984 51600040 */  beql       $t3, $zero, .L15076A88
    /* A3E38 15076988 26730001 */   addiu     $s3, $s3, 0x1
    /* A3E3C 1507698C 8E2C00F8 */  lw         $t4, 0xF8($s1)
    /* A3E40 15076990 318D0020 */  andi       $t5, $t4, 0x20
    /* A3E44 15076994 51A0003C */  beql       $t5, $zero, .L15076A88
    /* A3E48 15076998 26730001 */   addiu     $s3, $s3, 0x1
    /* A3E4C 1507699C 527E003A */  beql       $s3, $fp, .L15076A88
    /* A3E50 150769A0 26730001 */   addiu     $s3, $s3, 0x1
    /* A3E54 150769A4 92AE0000 */  lbu        $t6, 0x0($s5)
    /* A3E58 150769A8 8E900000 */  lw         $s0, 0x0($s4)
    /* A3E5C 150769AC 55C00006 */  bnel       $t6, $zero, .L150769C8
    /* A3E60 150769B0 C6060018 */   lwc1      $f6, 0x18($s0)
    /* A3E64 150769B4 920F0004 */  lbu        $t7, 0x4($s0)
    /* A3E68 150769B8 92380004 */  lbu        $t8, 0x4($s1)
    /* A3E6C 150769BC 51F80032 */  beql       $t7, $t8, .L15076A88
    /* A3E70 150769C0 26730001 */   addiu     $s3, $s3, 0x1
    /* A3E74 150769C4 C6060018 */  lwc1       $f6, 0x18($s0)
  .L150769C8:
    /* A3E78 150769C8 C6280018 */  lwc1       $f8, 0x18($s1)
    /* A3E7C 150769CC 02002025 */  or         $a0, $s0, $zero
    /* A3E80 150769D0 46083001 */  sub.s      $f0, $f6, $f8
    /* A3E84 150769D4 46000005 */  abs.s      $f0, $f0
    /* A3E88 150769D8 4600C03C */  c.lt.s     $f24, $f0
    /* A3E8C 150769DC 00000000 */  nop
    /* A3E90 150769E0 45030029 */  bc1tl      .L15076A88
    /* A3E94 150769E4 26730001 */   addiu     $s3, $s3, 0x1
    /* A3E98 150769E8 0D4169CB */  jal        func_1505A72C
    /* A3E9C 150769EC 02202825 */   or        $a1, $s1, $zero
    /* A3EA0 150769F0 4616003C */  c.lt.s     $f0, $f22
    /* A3EA4 150769F4 46000506 */  mov.s      $f20, $f0
    /* A3EA8 150769F8 45020023 */  bc1fl      .L15076A88
    /* A3EAC 150769FC 26730001 */   addiu     $s3, $s3, 0x1
    /* A3EB0 15076A00 8E900000 */  lw         $s0, 0x0($s4)
    /* A3EB4 15076A04 C62A0014 */  lwc1       $f10, 0x14($s1)
    /* A3EB8 15076A08 C624001C */  lwc1       $f4, 0x1C($s1)
    /* A3EBC 15076A0C 92190004 */  lbu        $t9, 0x4($s0)
    /* A3EC0 15076A10 C6100014 */  lwc1       $f16, 0x14($s0)
    /* A3EC4 15076A14 C612001C */  lwc1       $f18, 0x1C($s0)
    /* A3EC8 15076A18 00194880 */  sll        $t1, $t9, 2
    /* A3ECC 15076A1C 02E94021 */  addu       $t0, $s7, $t1
    /* A3ED0 15076A20 8D020000 */  lw         $v0, 0x0($t0)
    /* A3ED4 15076A24 00003025 */  or         $a2, $zero, $zero
    /* A3ED8 15076A28 46105301 */  sub.s      $f12, $f10, $f16
    /* A3EDC 15076A2C 90520017 */  lbu        $s2, 0x17($v0)
    /* A3EE0 15076A30 0D41698C */  jal        func_1505A630
    /* A3EE4 15076A34 46049381 */   sub.s     $f14, $f18, $f4
    /* A3EE8 15076A38 8E900000 */  lw         $s0, 0x0($s4)
    /* A3EEC 15076A3C 00027203 */  sra        $t6, $v0, 8
    /* A3EF0 15076A40 01C07825 */  or         $t7, $t6, $zero
    /* A3EF4 15076A44 960A0076 */  lhu        $t2, 0x76($s0)
    /* A3EF8 15076A48 820C02CA */  lb         $t4, 0x2CA($s0)
    /* A3EFC 15076A4C 000A5A03 */  sra        $t3, $t2, 8
    /* A3F00 15076A50 016C6821 */  addu       $t5, $t3, $t4
    /* A3F04 15076A54 01AFC023 */  subu       $t8, $t5, $t7
    /* A3F08 15076A58 06410003 */  bgez       $s2, .L15076A68
    /* A3F0C 15076A5C 0012C843 */   sra       $t9, $s2, 1
    /* A3F10 15076A60 26410001 */  addiu      $at, $s2, 0x1
    /* A3F14 15076A64 0001C843 */  sra        $t9, $at, 1
  .L15076A68:
    /* A3F18 15076A68 03194821 */  addu       $t1, $t8, $t9
    /* A3F1C 15076A6C 312800FF */  andi       $t0, $t1, 0xFF
    /* A3F20 15076A70 0112082A */  slt        $at, $t0, $s2
    /* A3F24 15076A74 10200003 */  beqz       $at, .L15076A84
    /* A3F28 15076A78 266A0080 */   addiu     $t2, $s3, 0x80
    /* A3F2C 15076A7C A20A00A8 */  sb         $t2, 0xA8($s0)
    /* A3F30 15076A80 4600A586 */  mov.s      $f22, $f20
  .L15076A84:
    /* A3F34 15076A84 26730001 */  addiu      $s3, $s3, 0x1
  .L15076A88:
    /* A3F38 15076A88 1676FFBA */  bne        $s3, $s6, .L15076974
    /* A3F3C 15076A8C 2631032C */   addiu     $s1, $s1, 0x32C
    /* A3F40 15076A90 8E900000 */  lw         $s0, 0x0($s4)
    /* A3F44 15076A94 00002025 */  or         $a0, $zero, $zero
    /* A3F48 15076A98 3C05800D */  lui        $a1, %hi(D_800D1893)
    /* A3F4C 15076A9C 920B00A8 */  lbu        $t3, 0xA8($s0)
    /* A3F50 15076AA0 51600020 */  beql       $t3, $zero, .L15076B24
    /* A3F54 15076AA4 8FBF0054 */   lw        $ra, 0x54($sp)
    /* A3F58 15076AA8 0D41EECA */  jal        func_1507BB28
    /* A3F5C 15076AAC 90A51893 */   lbu       $a1, %lo(D_800D1893)($a1)
    /* A3F60 15076AB0 8E8C0000 */  lw         $t4, 0x0($s4)
    /* A3F64 15076AB4 3C04800D */  lui        $a0, %hi(D_800D1892)
    /* A3F68 15076AB8 AD820218 */  sw         $v0, 0x218($t4)
    /* A3F6C 15076ABC 8E900000 */  lw         $s0, 0x0($s4)
    /* A3F70 15076AC0 8E0E0218 */  lw         $t6, 0x218($s0)
    /* A3F74 15076AC4 25CDFFFB */  addiu      $t5, $t6, -0x5
    /* A3F78 15076AC8 AE0D0218 */  sw         $t5, 0x218($s0)
    /* A3F7C 15076ACC 90841892 */  lbu        $a0, %lo(D_800D1892)($a0)
    /* A3F80 15076AD0 50800014 */  beql       $a0, $zero, .L15076B24
    /* A3F84 15076AD4 8FBF0054 */   lw        $ra, 0x54($sp)
    /* A3F88 15076AD8 8E8F0000 */  lw         $t7, 0x0($s4)
    /* A3F8C 15076ADC 3C09800D */  lui        $t1, %hi(D_800CC2D0)
    /* A3F90 15076AE0 2529C2D0 */  addiu      $t1, $t1, %lo(D_800CC2D0)
    /* A3F94 15076AE4 91E300A8 */  lbu        $v1, 0xA8($t7)
    /* A3F98 15076AE8 3078007F */  andi       $t8, $v1, 0x7F
    /* A3F9C 15076AEC 0018C880 */  sll        $t9, $t8, 2
    /* A3FA0 15076AF0 0338C823 */  subu       $t9, $t9, $t8
    /* A3FA4 15076AF4 0019C880 */  sll        $t9, $t9, 2
    /* A3FA8 15076AF8 0338C821 */  addu       $t9, $t9, $t8
    /* A3FAC 15076AFC 0019C880 */  sll        $t9, $t9, 2
    /* A3FB0 15076B00 0338C823 */  subu       $t9, $t9, $t8
    /* A3FB4 15076B04 0019C880 */  sll        $t9, $t9, 2
    /* A3FB8 15076B08 0338C823 */  subu       $t9, $t9, $t8
    /* A3FBC 15076B0C 0019C880 */  sll        $t9, $t9, 2
    /* A3FC0 15076B10 03291021 */  addu       $v0, $t9, $t1
    /* A3FC4 15076B14 AC400218 */  sw         $zero, 0x218($v0)
    /* A3FC8 15076B18 A0440232 */  sb         $a0, 0x232($v0)
    /* A3FCC 15076B1C A05E0222 */  sb         $fp, 0x222($v0)
    /* A3FD0 15076B20 8FBF0054 */  lw         $ra, 0x54($sp)
  .L15076B24:
    /* A3FD4 15076B24 D7B40018 */  ldc1       $f20, 0x18($sp)
    /* A3FD8 15076B28 D7B60020 */  ldc1       $f22, 0x20($sp)
    /* A3FDC 15076B2C D7B80028 */  ldc1       $f24, 0x28($sp)
    /* A3FE0 15076B30 8FB00030 */  lw         $s0, 0x30($sp)
    /* A3FE4 15076B34 8FB10034 */  lw         $s1, 0x34($sp)
    /* A3FE8 15076B38 8FB20038 */  lw         $s2, 0x38($sp)
    /* A3FEC 15076B3C 8FB3003C */  lw         $s3, 0x3C($sp)
    /* A3FF0 15076B40 8FB40040 */  lw         $s4, 0x40($sp)
    /* A3FF4 15076B44 8FB50044 */  lw         $s5, 0x44($sp)
    /* A3FF8 15076B48 8FB60048 */  lw         $s6, 0x48($sp)
    /* A3FFC 15076B4C 8FB7004C */  lw         $s7, 0x4C($sp)
    /* A4000 15076B50 8FBE0050 */  lw         $fp, 0x50($sp)
    /* A4004 15076B54 03E00008 */  jr         $ra
    /* A4008 15076B58 27BD0058 */   addiu     $sp, $sp, 0x58
endlabel func_150768DC
