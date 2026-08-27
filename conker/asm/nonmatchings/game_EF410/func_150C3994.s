nonmatching func_150C3994, 0x3B4

glabel func_150C3994
    /* F0E44 150C3994 27BDFFB0 */  addiu      $sp, $sp, -0x50
    /* F0E48 150C3998 AFB00048 */  sw         $s0, 0x48($sp)
    /* F0E4C 150C399C 00808025 */  or         $s0, $a0, $zero
    /* F0E50 150C39A0 AFBF004C */  sw         $ra, 0x4C($sp)
    /* F0E54 150C39A4 8E0E0000 */  lw         $t6, 0x0($s0)
    /* F0E58 150C39A8 24010014 */  addiu      $at, $zero, 0x14
    /* F0E5C 150C39AC 55C10032 */  bnel       $t6, $at, .L150C3A78
    /* F0E60 150C39B0 C6000020 */   lwc1      $f0, 0x20($s0)
    /* F0E64 150C39B4 8E0F02E4 */  lw         $t7, 0x2E4($s0)
    /* F0E68 150C39B8 3C0141F0 */  lui        $at, (0x41F00000 >> 16)
    /* F0E6C 150C39BC 02002025 */  or         $a0, $s0, $zero
    /* F0E70 150C39C0 15E0002A */  bnez       $t7, .L150C3A6C
    /* F0E74 150C39C4 24050064 */   addiu     $a1, $zero, 0x64
    /* F0E78 150C39C8 C6080018 */  lwc1       $f8, 0x18($s0)
    /* F0E7C 150C39CC 44815000 */  mtc1       $at, $f10
    /* F0E80 150C39D0 C6040014 */  lwc1       $f4, 0x14($s0)
    /* F0E84 150C39D4 240E07D0 */  addiu      $t6, $zero, 0x7D0
    /* F0E88 150C39D8 460A4400 */  add.s      $f16, $f8, $f10
    /* F0E8C 150C39DC 240F03E8 */  addiu      $t7, $zero, 0x3E8
    /* F0E90 150C39E0 24180190 */  addiu      $t8, $zero, 0x190
    /* F0E94 150C39E4 4600218D */  trunc.w.s  $f6, $f4
    /* F0E98 150C39E8 C604001C */  lwc1       $f4, 0x1C($s0)
    /* F0E9C 150C39EC 24080C00 */  addiu      $t0, $zero, 0xC00
    /* F0EA0 150C39F0 4600848D */  trunc.w.s  $f18, $f16
    /* F0EA4 150C39F4 44063000 */  mfc1       $a2, $f6
    /* F0EA8 150C39F8 24090C00 */  addiu      $t1, $zero, 0xC00
    /* F0EAC 150C39FC 4600218D */  trunc.w.s  $f6, $f4
    /* F0EB0 150C3A00 44079000 */  mfc1       $a3, $f18
    /* F0EB4 150C3A04 0006CC00 */  sll        $t9, $a2, 16
    /* F0EB8 150C3A08 00193403 */  sra        $a2, $t9, 16
    /* F0EBC 150C3A0C 00075400 */  sll        $t2, $a3, 16
    /* F0EC0 150C3A10 440D3000 */  mfc1       $t5, $f6
    /* F0EC4 150C3A14 000A3C03 */  sra        $a3, $t2, 16
    /* F0EC8 150C3A18 240A0001 */  addiu      $t2, $zero, 0x1
    /* F0ECC 150C3A1C 241900C8 */  addiu      $t9, $zero, 0xC8
    /* F0ED0 150C3A20 240B0001 */  addiu      $t3, $zero, 0x1
    /* F0ED4 150C3A24 240C00FF */  addiu      $t4, $zero, 0xFF
    /* F0ED8 150C3A28 AFAC0038 */  sw         $t4, 0x38($sp)
    /* F0EDC 150C3A2C AFAB0030 */  sw         $t3, 0x30($sp)
    /* F0EE0 150C3A30 AFB90020 */  sw         $t9, 0x20($sp)
    /* F0EE4 150C3A34 AFAA002C */  sw         $t2, 0x2C($sp)
    /* F0EE8 150C3A38 AFA90028 */  sw         $t1, 0x28($sp)
    /* F0EEC 150C3A3C AFA80024 */  sw         $t0, 0x24($sp)
    /* F0EF0 150C3A40 AFA0003C */  sw         $zero, 0x3C($sp)
    /* F0EF4 150C3A44 AFA00034 */  sw         $zero, 0x34($sp)
    /* F0EF8 150C3A48 AFB8001C */  sw         $t8, 0x1C($sp)
    /* F0EFC 150C3A4C AFAF0018 */  sw         $t7, 0x18($sp)
    /* F0F00 150C3A50 AFAE0014 */  sw         $t6, 0x14($sp)
    /* F0F04 150C3A54 2404002F */  addiu      $a0, $zero, 0x2F
    /* F0F08 150C3A58 24050001 */  addiu      $a1, $zero, 0x1
    /* F0F0C 150C3A5C 0D46E6FC */  jal        func_151B9BF0
    /* F0F10 150C3A60 AFAD0010 */   sw        $t5, 0x10($sp)
    /* F0F14 150C3A64 10000004 */  b          .L150C3A78
    /* F0F18 150C3A68 C6000020 */   lwc1      $f0, 0x20($s0)
  .L150C3A6C:
    /* F0F1C 150C3A6C 0D462204 */  jal        func_15188810
    /* F0F20 150C3A70 00003025 */   or        $a2, $zero, $zero
    /* F0F24 150C3A74 C6000020 */  lwc1       $f0, 0x20($s0)
  .L150C3A78:
    /* F0F28 150C3A78 44804000 */  mtc1       $zero, $f8
    /* F0F2C 150C3A7C 3C0141A0 */  lui        $at, (0x41A00000 >> 16)
    /* F0F30 150C3A80 4608003C */  c.lt.s     $f0, $f8
    /* F0F34 150C3A84 00000000 */  nop
    /* F0F38 150C3A88 4502001C */  bc1fl      .L150C3AFC
    /* F0F3C 150C3A8C 92020083 */   lbu       $v0, 0x83($s0)
    /* F0F40 150C3A90 C6020028 */  lwc1       $f2, 0x28($s0)
    /* F0F44 150C3A94 44815000 */  mtc1       $at, $f10
    /* F0F48 150C3A98 00000000 */  nop
    /* F0F4C 150C3A9C 4602503C */  c.lt.s     $f10, $f2
    /* F0F50 150C3AA0 00000000 */  nop
    /* F0F54 150C3AA4 45020015 */  bc1fl      .L150C3AFC
    /* F0F58 150C3AA8 92020083 */   lbu       $v0, 0x83($s0)
    /* F0F5C 150C3AAC 920D0136 */  lbu        $t5, 0x136($s0)
    /* F0F60 150C3AB0 3C01C1A0 */  lui        $at, (0xC1A00000 >> 16)
    /* F0F64 150C3AB4 55A00011 */  bnel       $t5, $zero, .L150C3AFC
    /* F0F68 150C3AB8 92020083 */   lbu       $v0, 0x83($s0)
    /* F0F6C 150C3ABC 44818000 */  mtc1       $at, $f16
    /* F0F70 150C3AC0 24040092 */  addiu      $a0, $zero, 0x92
    /* F0F74 150C3AC4 02002825 */  or         $a1, $s0, $zero
    /* F0F78 150C3AC8 46008482 */  mul.s      $f18, $f16, $f0
    /* F0F7C 150C3ACC 24067D00 */  addiu      $a2, $zero, 0x7D00
    /* F0F80 150C3AD0 240700C8 */  addiu      $a3, $zero, 0xC8
    /* F0F84 150C3AD4 240E09C4 */  addiu      $t6, $zero, 0x9C4
    /* F0F88 150C3AD8 4612103C */  c.lt.s     $f2, $f18
    /* F0F8C 150C3ADC 00000000 */  nop
    /* F0F90 150C3AE0 45020006 */  bc1fl      .L150C3AFC
    /* F0F94 150C3AE4 92020083 */   lbu       $v0, 0x83($s0)
    /* F0F98 150C3AE8 0C00418C */  jal        func_10010630
    /* F0F9C 150C3AEC AFAE0010 */   sw        $t6, 0x10($sp)
    /* F0FA0 150C3AF0 240F0001 */  addiu      $t7, $zero, 0x1
    /* F0FA4 150C3AF4 A20F0136 */  sb         $t7, 0x136($s0)
    /* F0FA8 150C3AF8 92020083 */  lbu        $v0, 0x83($s0)
  .L150C3AFC:
    /* F0FAC 150C3AFC 3C01428C */  lui        $at, (0x428C0000 >> 16)
    /* F0FB0 150C3B00 54400052 */  bnel       $v0, $zero, .L150C3C4C
    /* F0FB4 150C3B04 24490001 */   addiu     $t1, $v0, 0x1
    /* F0FB8 150C3B08 8E1802E4 */  lw         $t8, 0x2E4($s0)
    /* F0FBC 150C3B0C 44812000 */  mtc1       $at, $f4
    /* F0FC0 150C3B10 02002025 */  or         $a0, $s0, $zero
    /* F0FC4 150C3B14 17000037 */  bnez       $t8, .L150C3BF4
    /* F0FC8 150C3B18 E6040148 */   swc1      $f4, 0x148($s0)
    /* F0FCC 150C3B1C 3C0141F0 */  lui        $at, (0x41F00000 >> 16)
    /* F0FD0 150C3B20 44818000 */  mtc1       $at, $f16
    /* F0FD4 150C3B24 C60A0018 */  lwc1       $f10, 0x18($s0)
    /* F0FD8 150C3B28 C6060014 */  lwc1       $f6, 0x14($s0)
    /* F0FDC 150C3B2C 240F0898 */  addiu      $t7, $zero, 0x898
    /* F0FE0 150C3B30 46105480 */  add.s      $f18, $f10, $f16
    /* F0FE4 150C3B34 24180500 */  addiu      $t8, $zero, 0x500
    /* F0FE8 150C3B38 24190320 */  addiu      $t9, $zero, 0x320
    /* F0FEC 150C3B3C 4600320D */  trunc.w.s  $f8, $f6
    /* F0FF0 150C3B40 C606001C */  lwc1       $f6, 0x1C($s0)
    /* F0FF4 150C3B44 24090C00 */  addiu      $t1, $zero, 0xC00
    /* F0FF8 150C3B48 4600910D */  trunc.w.s  $f4, $f18
    /* F0FFC 150C3B4C 44064000 */  mfc1       $a2, $f8
    /* F1000 150C3B50 240A0C00 */  addiu      $t2, $zero, 0xC00
    /* F1004 150C3B54 4600320D */  trunc.w.s  $f8, $f6
    /* F1008 150C3B58 44072000 */  mfc1       $a3, $f4
    /* F100C 150C3B5C 00064400 */  sll        $t0, $a2, 16
    /* F1010 150C3B60 00083403 */  sra        $a2, $t0, 16
    /* F1014 150C3B64 00075C00 */  sll        $t3, $a3, 16
    /* F1018 150C3B68 440E4000 */  mfc1       $t6, $f8
    /* F101C 150C3B6C 000B3C03 */  sra        $a3, $t3, 16
    /* F1020 150C3B70 240B0014 */  addiu      $t3, $zero, 0x14
    /* F1024 150C3B74 240802BC */  addiu      $t0, $zero, 0x2BC
    /* F1028 150C3B78 240C0001 */  addiu      $t4, $zero, 0x1
    /* F102C 150C3B7C 240D00FF */  addiu      $t5, $zero, 0xFF
    /* F1030 150C3B80 AFAD0038 */  sw         $t5, 0x38($sp)
    /* F1034 150C3B84 AFAC0030 */  sw         $t4, 0x30($sp)
    /* F1038 150C3B88 AFA80020 */  sw         $t0, 0x20($sp)
    /* F103C 150C3B8C AFAB002C */  sw         $t3, 0x2C($sp)
    /* F1040 150C3B90 AFAA0028 */  sw         $t2, 0x28($sp)
    /* F1044 150C3B94 AFA90024 */  sw         $t1, 0x24($sp)
    /* F1048 150C3B98 AFA0003C */  sw         $zero, 0x3C($sp)
    /* F104C 150C3B9C AFA00034 */  sw         $zero, 0x34($sp)
    /* F1050 150C3BA0 AFB9001C */  sw         $t9, 0x1C($sp)
    /* F1054 150C3BA4 AFB80018 */  sw         $t8, 0x18($sp)
    /* F1058 150C3BA8 AFAF0014 */  sw         $t7, 0x14($sp)
    /* F105C 150C3BAC 2404002F */  addiu      $a0, $zero, 0x2F
    /* F1060 150C3BB0 24050001 */  addiu      $a1, $zero, 0x1
    /* F1064 150C3BB4 0D46E6FC */  jal        func_151B9BF0
    /* F1068 150C3BB8 AFAE0010 */   sw        $t6, 0x10($sp)
    /* F106C 150C3BBC 3C0141F0 */  lui        $at, (0x41F00000 >> 16)
    /* F1070 150C3BC0 44818000 */  mtc1       $at, $f16
    /* F1074 150C3BC4 C60A0018 */  lwc1       $f10, 0x18($s0)
    /* F1078 150C3BC8 C60C0014 */  lwc1       $f12, 0x14($s0)
    /* F107C 150C3BCC 8E06001C */  lw         $a2, 0x1C($s0)
    /* F1080 150C3BD0 240700FF */  addiu      $a3, $zero, 0xFF
    /* F1084 150C3BD4 0D430598 */  jal        func_150C1660
    /* F1088 150C3BD8 46105380 */   add.s     $f14, $f10, $f16
    /* F108C 150C3BDC 02002025 */  or         $a0, $s0, $zero
    /* F1090 150C3BE0 24050006 */  addiu      $a1, $zero, 0x6
    /* F1094 150C3BE4 0D41AB23 */  jal        func_1506AC8C
    /* F1098 150C3BE8 00003025 */   or        $a2, $zero, $zero
    /* F109C 150C3BEC 10000005 */  b          .L150C3C04
    /* F10A0 150C3BF0 240E07D0 */   addiu     $t6, $zero, 0x7D0
  .L150C3BF4:
    /* F10A4 150C3BF4 24050064 */  addiu      $a1, $zero, 0x64
    /* F10A8 150C3BF8 0D462204 */  jal        func_15188810
    /* F10AC 150C3BFC 00003025 */   or        $a2, $zero, $zero
    /* F10B0 150C3C00 240E07D0 */  addiu      $t6, $zero, 0x7D0
  .L150C3C04:
    /* F10B4 150C3C04 AFAE0010 */  sw         $t6, 0x10($sp)
    /* F10B8 150C3C08 240401A9 */  addiu      $a0, $zero, 0x1A9
    /* F10BC 150C3C0C 02002825 */  or         $a1, $s0, $zero
    /* F10C0 150C3C10 24067FFF */  addiu      $a2, $zero, 0x7FFF
    /* F10C4 150C3C14 0C0040D1 */  jal        func_10010344
    /* F10C8 150C3C18 240703E8 */   addiu     $a3, $zero, 0x3E8
    /* F10CC 150C3C1C 3C0143FA */  lui        $at, (0x43FA0000 >> 16)
    /* F10D0 150C3C20 44819000 */  mtc1       $at, $f18
    /* F10D4 150C3C24 8E1800F8 */  lw         $t8, 0xF8($s0)
    /* F10D8 150C3C28 3C010100 */  lui        $at, (0x1008000 >> 16)
    /* F10DC 150C3C2C 34218000 */  ori        $at, $at, (0x1008000 & 0xFFFF)
    /* F10E0 150C3C30 240F0001 */  addiu      $t7, $zero, 0x1
    /* F10E4 150C3C34 0301C825 */  or         $t9, $t8, $at
    /* F10E8 150C3C38 A20F00D0 */  sb         $t7, 0xD0($s0)
    /* F10EC 150C3C3C AE1900F8 */  sw         $t9, 0xF8($s0)
    /* F10F0 150C3C40 92020083 */  lbu        $v0, 0x83($s0)
    /* F10F4 150C3C44 E6120114 */  swc1       $f18, 0x114($s0)
    /* F10F8 150C3C48 24490001 */  addiu      $t1, $v0, 0x1
  .L150C3C4C:
    /* F10FC 150C3C4C 312A00FF */  andi       $t2, $t1, 0xFF
    /* F1100 150C3C50 240800FF */  addiu      $t0, $zero, 0xFF
    /* F1104 150C3C54 2941000B */  slti       $at, $t2, 0xB
    /* F1108 150C3C58 A2080125 */  sb         $t0, 0x125($s0)
    /* F110C 150C3C5C 14200006 */  bnez       $at, .L150C3C78
    /* F1110 150C3C60 A2090083 */   sb        $t1, 0x83($s0)
    /* F1114 150C3C64 8E0B00F8 */  lw         $t3, 0xF8($s0)
    /* F1118 150C3C68 3C01FFFF */  lui        $at, (0xFFFF7FFF >> 16)
    /* F111C 150C3C6C 34217FFF */  ori        $at, $at, (0xFFFF7FFF & 0xFFFF)
    /* F1120 150C3C70 01616024 */  and        $t4, $t3, $at
    /* F1124 150C3C74 AE0C00F8 */  sw         $t4, 0xF8($s0)
  .L150C3C78:
    /* F1128 150C3C78 960D007A */  lhu        $t5, 0x7A($s0)
    /* F112C 150C3C7C 3C013BB4 */  lui        $at, (0x3BB40000 >> 16)
    /* F1130 150C3C80 44814000 */  mtc1       $at, $f8
    /* F1134 150C3C84 25AE4000 */  addiu      $t6, $t5, 0x4000
    /* F1138 150C3C88 448E2000 */  mtc1       $t6, $f4
    /* F113C 150C3C8C 02002025 */  or         $a0, $s0, $zero
    /* F1140 150C3C90 468021A0 */  cvt.s.w    $f6, $f4
    /* F1144 150C3C94 46083282 */  mul.s      $f10, $f6, $f8
    /* F1148 150C3C98 0D416450 */  jal        func_15059140
    /* F114C 150C3C9C E60A0040 */   swc1      $f10, 0x40($s0)
    /* F1150 150C3CA0 C6000148 */  lwc1       $f0, 0x148($s0)
    /* F1154 150C3CA4 C61000B8 */  lwc1       $f16, 0xB8($s0)
    /* F1158 150C3CA8 3C01800A */  lui        $at, %hi(D_800A0334)
    /* F115C 150C3CAC 44804000 */  mtc1       $zero, $f8
    /* F1160 150C3CB0 46008480 */  add.s      $f18, $f16, $f0
    /* F1164 150C3CB4 C60A0028 */  lwc1       $f10, 0x28($s0)
    /* F1168 150C3CB8 E61200B8 */  swc1       $f18, 0xB8($s0)
    /* F116C 150C3CBC C4240334 */  lwc1       $f4, %lo(D_800A0334)($at)
    /* F1170 150C3CC0 460A4032 */  c.eq.s     $f8, $f10
    /* F1174 150C3CC4 46040182 */  mul.s      $f6, $f0, $f4
    /* F1178 150C3CC8 45000008 */  bc1f       .L150C3CEC
    /* F117C 150C3CCC E6060148 */   swc1      $f6, 0x148($s0)
    /* F1180 150C3CD0 920F0083 */  lbu        $t7, 0x83($s0)
    /* F1184 150C3CD4 29E10015 */  slti       $at, $t7, 0x15
    /* F1188 150C3CD8 54200005 */  bnel       $at, $zero, .L150C3CF0
    /* F118C 150C3CDC 92190107 */   lbu       $t9, 0x107($s0)
    /* F1190 150C3CE0 861800CC */  lh         $t8, 0xCC($s0)
    /* F1194 150C3CE4 13000007 */  beqz       $t8, .L150C3D04
    /* F1198 150C3CE8 00000000 */   nop
  .L150C3CEC:
    /* F119C 150C3CEC 92190107 */  lbu        $t9, 0x107($s0)
  .L150C3CF0:
    /* F11A0 150C3CF0 17200004 */  bnez       $t9, .L150C3D04
    /* F11A4 150C3CF4 00000000 */   nop
    /* F11A8 150C3CF8 920801CA */  lbu        $t0, 0x1CA($s0)
    /* F11AC 150C3CFC 5500000E */  bnel       $t0, $zero, .L150C3D38
    /* F11B0 150C3D00 8FBF004C */   lw        $ra, 0x4C($sp)
  .L150C3D04:
    /* F11B4 150C3D04 0D430F57 */  jal        func_150C3D5C
    /* F11B8 150C3D08 02002025 */   or        $a0, $s0, $zero
    /* F11BC 150C3D0C 240909C4 */  addiu      $t1, $zero, 0x9C4
    /* F11C0 150C3D10 AFA90010 */  sw         $t1, 0x10($sp)
    /* F11C4 150C3D14 24040093 */  addiu      $a0, $zero, 0x93
    /* F11C8 150C3D18 02002825 */  or         $a1, $s0, $zero
    /* F11CC 150C3D1C 24067D00 */  addiu      $a2, $zero, 0x7D00
    /* F11D0 150C3D20 0C00418C */  jal        func_10010630
    /* F11D4 150C3D24 240700C8 */   addiu     $a3, $zero, 0xC8
    /* F11D8 150C3D28 02002025 */  or         $a0, $s0, $zero
    /* F11DC 150C3D2C 0D4183CA */  jal        func_15060F28
    /* F11E0 150C3D30 24050001 */   addiu     $a1, $zero, 0x1
    /* F11E4 150C3D34 8FBF004C */  lw         $ra, 0x4C($sp)
  .L150C3D38:
    /* F11E8 150C3D38 8FB00048 */  lw         $s0, 0x48($sp)
    /* F11EC 150C3D3C 27BD0050 */  addiu      $sp, $sp, 0x50
    /* F11F0 150C3D40 03E00008 */  jr         $ra
    /* F11F4 150C3D44 00000000 */   nop
endlabel func_150C3994
