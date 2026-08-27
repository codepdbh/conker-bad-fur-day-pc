nonmatching func_100099BC, 0x170

glabel func_100099BC
    /* 99BC 100099BC 27BDFFA8 */  addiu      $sp, $sp, -0x58
    /* 99C0 100099C0 AFB40028 */  sw         $s4, 0x28($sp)
    /* 99C4 100099C4 3C148003 */  lui        $s4, %hi(D_8002AE48)
    /* 99C8 100099C8 2694AE48 */  addiu      $s4, $s4, %lo(D_8002AE48)
    /* 99CC 100099CC AFBF002C */  sw         $ra, 0x2C($sp)
    /* 99D0 100099D0 AFB30024 */  sw         $s3, 0x24($sp)
    /* 99D4 100099D4 AFB20020 */  sw         $s2, 0x20($sp)
    /* 99D8 100099D8 AFB1001C */  sw         $s1, 0x1C($sp)
    /* 99DC 100099DC AFB00018 */  sw         $s0, 0x18($sp)
    /* 99E0 100099E0 8E8E0000 */  lw         $t6, 0x0($s4)
    /* 99E4 100099E4 AFA00050 */  sw         $zero, 0x50($sp)
    /* 99E8 100099E8 00008025 */  or         $s0, $zero, $zero
    /* 99EC 100099EC 11C00012 */  beqz       $t6, .L10009A38
    /* 99F0 100099F0 2413FFFF */   addiu     $s3, $zero, -0x1
    /* 99F4 100099F4 3C118004 */  lui        $s1, %hi(D_80041298)
    /* 99F8 100099F8 26311298 */  addiu      $s1, $s1, %lo(D_80041298)
    /* 99FC 100099FC 27B20050 */  addiu      $s2, $sp, 0x50
    /* 9A00 10009A00 02202025 */  or         $a0, $s1, $zero
  .L10009A04:
    /* 9A04 10009A04 02402825 */  or         $a1, $s2, $zero
    /* 9A08 10009A08 0C008D10 */  jal        osRecvMesg
    /* 9A0C 10009A0C 00003025 */   or        $a2, $zero, $zero
    /* 9A10 10009A10 14530004 */  bne        $v0, $s3, .L10009A24
    /* 9A14 10009A14 02202025 */   or        $a0, $s1, $zero
    /* 9A18 10009A18 02402825 */  or         $a1, $s2, $zero
    /* 9A1C 10009A1C 0C008D10 */  jal        osRecvMesg
    /* 9A20 10009A20 24060001 */   addiu     $a2, $zero, 0x1
  .L10009A24:
    /* 9A24 10009A24 8E8F0000 */  lw         $t7, 0x0($s4)
    /* 9A28 10009A28 26100001 */  addiu      $s0, $s0, 0x1
    /* 9A2C 10009A2C 020F082B */  sltu       $at, $s0, $t7
    /* 9A30 10009A30 5420FFF4 */  bnel       $at, $zero, .L10009A04
    /* 9A34 10009A34 02202025 */   or        $a0, $s1, $zero
  .L10009A38:
    /* 9A38 10009A38 3C078004 */  lui        $a3, %hi(D_80040F78)
    /* 9A3C 10009A3C 24E70F78 */  addiu      $a3, $a3, %lo(D_80040F78)
    /* 9A40 10009A40 8CE20004 */  lw         $v0, 0x4($a3)
    /* 9A44 10009A44 3C088003 */  lui        $t0, %hi(D_8002AE44)
    /* 9A48 10009A48 2508AE44 */  addiu      $t0, $t0, %lo(D_8002AE44)
    /* 9A4C 10009A4C 10400029 */  beqz       $v0, .L10009AF4
    /* 9A50 10009A50 00000000 */   nop
  .L10009A54:
    /* 9A54 10009A54 8C59000C */  lw         $t9, 0xC($v0)
    /* 9A58 10009A58 8D180000 */  lw         $t8, 0x0($t0)
    /* 9A5C 10009A5C 8C430000 */  lw         $v1, 0x0($v0)
    /* 9A60 10009A60 27290001 */  addiu      $t1, $t9, 0x1
    /* 9A64 10009A64 0138082B */  sltu       $at, $t1, $t8
    /* 9A68 10009A68 10200020 */  beqz       $at, .L10009AEC
    /* 9A6C 10009A6C 00603025 */   or        $a2, $v1, $zero
    /* 9A70 10009A70 8CEA0004 */  lw         $t2, 0x4($a3)
    /* 9A74 10009A74 144A0003 */  bne        $v0, $t2, .L10009A84
    /* 9A78 10009A78 00000000 */   nop
    /* 9A7C 10009A7C ACE60004 */  sw         $a2, 0x4($a3)
    /* 9A80 10009A80 8C430000 */  lw         $v1, 0x0($v0)
  .L10009A84:
    /* 9A84 10009A84 50600004 */  beql       $v1, $zero, .L10009A98
    /* 9A88 10009A88 8C430004 */   lw        $v1, 0x4($v0)
    /* 9A8C 10009A8C 8C4B0004 */  lw         $t3, 0x4($v0)
    /* 9A90 10009A90 AC6B0004 */  sw         $t3, 0x4($v1)
    /* 9A94 10009A94 8C430004 */  lw         $v1, 0x4($v0)
  .L10009A98:
    /* 9A98 10009A98 50600004 */  beql       $v1, $zero, .L10009AAC
    /* 9A9C 10009A9C 8CE40008 */   lw        $a0, 0x8($a3)
    /* 9AA0 10009AA0 8C4C0000 */  lw         $t4, 0x0($v0)
    /* 9AA4 10009AA4 AC6C0000 */  sw         $t4, 0x0($v1)
    /* 9AA8 10009AA8 8CE40008 */  lw         $a0, 0x8($a3)
  .L10009AAC:
    /* 9AAC 10009AAC 5080000D */  beql       $a0, $zero, .L10009AE4
    /* 9AB0 10009AB0 ACE20008 */   sw        $v0, 0x8($a3)
    /* 9AB4 10009AB4 8C8D0000 */  lw         $t5, 0x0($a0)
    /* 9AB8 10009AB8 AC440004 */  sw         $a0, 0x4($v0)
    /* 9ABC 10009ABC 00801825 */  or         $v1, $a0, $zero
    /* 9AC0 10009AC0 AC4D0000 */  sw         $t5, 0x0($v0)
    /* 9AC4 10009AC4 8C850000 */  lw         $a1, 0x0($a0)
    /* 9AC8 10009AC8 50A00003 */  beql       $a1, $zero, .L10009AD8
    /* 9ACC 10009ACC AC620000 */   sw        $v0, 0x0($v1)
    /* 9AD0 10009AD0 ACA20004 */  sw         $v0, 0x4($a1)
    /* 9AD4 10009AD4 AC620000 */  sw         $v0, 0x0($v1)
  .L10009AD8:
    /* 9AD8 10009AD8 10000004 */  b          .L10009AEC
    /* 9ADC 10009ADC 00000000 */   nop
    /* 9AE0 10009AE0 ACE20008 */  sw         $v0, 0x8($a3)
  .L10009AE4:
    /* 9AE4 10009AE4 AC400000 */  sw         $zero, 0x0($v0)
    /* 9AE8 10009AE8 AC400004 */  sw         $zero, 0x4($v0)
  .L10009AEC:
    /* 9AEC 10009AEC 14C0FFD9 */  bnez       $a2, .L10009A54
    /* 9AF0 10009AF0 00C01025 */   or        $v0, $a2, $zero
  .L10009AF4:
    /* 9AF4 10009AF4 3C088003 */  lui        $t0, %hi(D_8002AE44)
    /* 9AF8 10009AF8 2508AE44 */  addiu      $t0, $t0, %lo(D_8002AE44)
    /* 9AFC 10009AFC 8D0E0000 */  lw         $t6, 0x0($t0)
    /* 9B00 10009B00 AE800000 */  sw         $zero, 0x0($s4)
    /* 9B04 10009B04 25CF0001 */  addiu      $t7, $t6, 0x1
    /* 9B08 10009B08 AD0F0000 */  sw         $t7, 0x0($t0)
    /* 9B0C 10009B0C 8FBF002C */  lw         $ra, 0x2C($sp)
    /* 9B10 10009B10 8FB00018 */  lw         $s0, 0x18($sp)
    /* 9B14 10009B14 8FB1001C */  lw         $s1, 0x1C($sp)
    /* 9B18 10009B18 8FB20020 */  lw         $s2, 0x20($sp)
    /* 9B1C 10009B1C 8FB30024 */  lw         $s3, 0x24($sp)
    /* 9B20 10009B20 8FB40028 */  lw         $s4, 0x28($sp)
    /* 9B24 10009B24 03E00008 */  jr         $ra
    /* 9B28 10009B28 27BD0058 */   addiu     $sp, $sp, 0x58
endlabel func_100099BC
