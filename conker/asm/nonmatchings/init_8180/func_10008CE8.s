nonmatching func_10008CE8, 0x1F8

glabel func_10008CE8
    /* 8CE8 10008CE8 27BDFFC0 */  addiu      $sp, $sp, -0x40
    /* 8CEC 10008CEC AFBF0024 */  sw         $ra, 0x24($sp)
    /* 8CF0 10008CF0 AFB20020 */  sw         $s2, 0x20($sp)
    /* 8CF4 10008CF4 AFB1001C */  sw         $s1, 0x1C($sp)
    /* 8CF8 10008CF8 AFB00018 */  sw         $s0, 0x18($sp)
    /* 8CFC 10008CFC AFA40040 */  sw         $a0, 0x40($sp)
    /* 8D00 10008D00 AFA50044 */  sw         $a1, 0x44($sp)
    /* 8D04 10008D04 93A20043 */  lbu        $v0, 0x43($sp)
    /* 8D08 10008D08 3C0F8004 */  lui        $t7, %hi(D_8003C900)
    /* 8D0C 10008D0C 25EFC900 */  addiu      $t7, $t7, %lo(D_8003C900)
    /* 8D10 10008D10 00027080 */  sll        $t6, $v0, 2
    /* 8D14 10008D14 01CF9021 */  addu       $s2, $t6, $t7
    /* 8D18 10008D18 00008025 */  or         $s0, $zero, $zero
    /* 8D1C 10008D1C 8E440000 */  lw         $a0, 0x0($s2)
    /* 8D20 10008D20 01C01025 */  or         $v0, $t6, $zero
    /* 8D24 10008D24 0C006318 */  jal        func_10018C60
    /* 8D28 10008D28 AFAE0034 */   sw        $t6, 0x34($sp)
    /* 8D2C 10008D2C 0C005EA0 */  jal        n_alCSPGetState
    /* 8D30 10008D30 8E440000 */   lw        $a0, 0x0($s2)
    /* 8D34 10008D34 10400009 */  beqz       $v0, .L10008D5C
    /* 8D38 10008D38 3C11001E */   lui       $s1, (0x1E8480 >> 16)
    /* 8D3C 10008D3C 36318480 */  ori        $s1, $s1, (0x1E8480 & 0xFFFF)
    /* 8D40 10008D40 26100001 */  addiu      $s0, $s0, 0x1
  .L10008D44:
    /* 8D44 10008D44 0C005EA0 */  jal        n_alCSPGetState
    /* 8D48 10008D48 8E440000 */   lw        $a0, 0x0($s2)
    /* 8D4C 10008D4C 50400004 */  beql       $v0, $zero, .L10008D60
    /* 8D50 10008D50 3C11001E */   lui       $s1, (0x1E8480 >> 16)
    /* 8D54 10008D54 5611FFFB */  bnel       $s0, $s1, .L10008D44
    /* 8D58 10008D58 26100001 */   addiu     $s0, $s0, 0x1
  .L10008D5C:
    /* 8D5C 10008D5C 3C11001E */  lui        $s1, (0x1E8480 >> 16)
  .L10008D60:
    /* 8D60 10008D60 36318480 */  ori        $s1, $s1, (0x1E8480 & 0xFFFF)
    /* 8D64 10008D64 0211082B */  sltu       $at, $s0, $s1
    /* 8D68 10008D68 54200012 */  bnel       $at, $zero, .L10008DB4
    /* 8D6C 10008D6C 93B80043 */   lbu       $t8, 0x43($sp)
    /* 8D70 10008D70 0C006318 */  jal        func_10018C60
    /* 8D74 10008D74 8E440000 */   lw        $a0, 0x0($s2)
    /* 8D78 10008D78 0C005EA0 */  jal        n_alCSPGetState
    /* 8D7C 10008D7C 8E440000 */   lw        $a0, 0x0($s2)
    /* 8D80 10008D80 1040000B */  beqz       $v0, .L10008DB0
    /* 8D84 10008D84 3C11003D */   lui       $s1, (0x3D0900 >> 16)
    /* 8D88 10008D88 36310900 */  ori        $s1, $s1, (0x3D0900 & 0xFFFF)
    /* 8D8C 10008D8C 0211082B */  sltu       $at, $s0, $s1
    /* 8D90 10008D90 10200007 */  beqz       $at, .L10008DB0
    /* 8D94 10008D94 26100001 */   addiu     $s0, $s0, 0x1
  .L10008D98:
    /* 8D98 10008D98 0C005EA0 */  jal        n_alCSPGetState
    /* 8D9C 10008D9C 8E440000 */   lw        $a0, 0x0($s2)
    /* 8DA0 10008DA0 10400003 */  beqz       $v0, .L10008DB0
    /* 8DA4 10008DA4 0211082B */   sltu      $at, $s0, $s1
    /* 8DA8 10008DA8 5420FFFB */  bnel       $at, $zero, .L10008D98
    /* 8DAC 10008DAC 26100001 */   addiu     $s0, $s0, 0x1
  .L10008DB0:
    /* 8DB0 10008DB0 93B80043 */  lbu        $t8, 0x43($sp)
  .L10008DB4:
    /* 8DB4 10008DB4 3C088004 */  lui        $t0, %hi(D_8003CA3C)
    /* 8DB8 10008DB8 2508CA3C */  addiu      $t0, $t0, %lo(D_8003CA3C)
    /* 8DBC 10008DBC 0018C840 */  sll        $t9, $t8, 1
    /* 8DC0 10008DC0 03284821 */  addu       $t1, $t9, $t0
    /* 8DC4 10008DC4 AFA9002C */  sw         $t1, 0x2C($sp)
    /* 8DC8 10008DC8 8FA30044 */  lw         $v1, 0x44($sp)
    /* 8DCC 10008DCC 952A0000 */  lhu        $t2, 0x0($t1)
    /* 8DD0 10008DD0 3C0C8004 */  lui        $t4, %hi(D_8003CA48)
    /* 8DD4 10008DD4 258CCA48 */  addiu      $t4, $t4, %lo(D_8003CA48)
    /* 8DD8 10008DD8 106A0028 */  beq        $v1, $t2, .L10008E7C
    /* 8DDC 10008DDC 8FAB0034 */   lw        $t3, 0x34($sp)
    /* 8DE0 10008DE0 016C8021 */  addu       $s0, $t3, $t4
    /* 8DE4 10008DE4 8E020000 */  lw         $v0, 0x0($s0)
    /* 8DE8 10008DE8 10400005 */  beqz       $v0, .L10008E00
    /* 8DEC 10008DEC 00000000 */   nop
    /* 8DF0 10008DF0 0C00101D */  jal        func_10004074
    /* 8DF4 10008DF4 00402025 */   or        $a0, $v0, $zero
    /* 8DF8 10008DF8 AE000000 */  sw         $zero, 0x0($s0)
    /* 8DFC 10008DFC 8FA30044 */  lw         $v1, 0x44($sp)
  .L10008E00:
    /* 8E00 10008E00 3C0D8004 */  lui        $t5, %hi(D_8003CD40)
    /* 8E04 10008E04 8DADCD40 */  lw         $t5, %lo(D_8003CD40)($t5)
    /* 8E08 10008E08 000370C0 */  sll        $t6, $v1, 3
    /* 8E0C 10008E0C 3C088004 */  lui        $t0, %hi(D_8003C910)
    /* 8E10 10008E10 01AE7821 */  addu       $t7, $t5, $t6
    /* 8E14 10008E14 8DF80004 */  lw         $t8, 0x4($t7)
    /* 8E18 10008E18 2508C910 */  addiu      $t0, $t0, %lo(D_8003C910)
    /* 8E1C 10008E1C 0003C840 */  sll        $t9, $v1, 1
    /* 8E20 10008E20 03288821 */  addu       $s1, $t9, $t0
    /* 8E24 10008E24 96240000 */  lhu        $a0, 0x0($s1)
    /* 8E28 10008E28 240500FF */  addiu      $a1, $zero, 0xFF
    /* 8E2C 10008E2C 24060002 */  addiu      $a2, $zero, 0x2
    /* 8E30 10008E30 24070002 */  addiu      $a3, $zero, 0x2
    /* 8E34 10008E34 0C000F10 */  jal        allocate_memory
    /* 8E38 10008E38 AFB8003C */   sw        $t8, 0x3C($sp)
    /* 8E3C 10008E3C 14400003 */  bnez       $v0, .L10008E4C
    /* 8E40 10008E40 AE020000 */   sw        $v0, 0x0($s0)
    /* 8E44 10008E44 10000020 */  b          .L10008EC8
    /* 8E48 10008E48 2402FFFF */   addiu     $v0, $zero, -0x1
  .L10008E4C:
    /* 8E4C 10008E4C 96260000 */  lhu        $a2, 0x0($s1)
    /* 8E50 10008E50 2401FFF0 */  addiu      $at, $zero, -0x10
    /* 8E54 10008E54 8FA4003C */  lw         $a0, 0x3C($sp)
    /* 8E58 10008E58 24C6000F */  addiu      $a2, $a2, 0xF
    /* 8E5C 10008E5C 00C14824 */  and        $t1, $a2, $at
    /* 8E60 10008E60 01203025 */  or         $a2, $t1, $zero
    /* 8E64 10008E64 8E050000 */  lw         $a1, 0x0($s0)
    /* 8E68 10008E68 0C001145 */  jal        func_10004514
    /* 8E6C 10008E6C 24070001 */   addiu     $a3, $zero, 0x1
    /* 8E70 10008E70 8FAA0044 */  lw         $t2, 0x44($sp)
    /* 8E74 10008E74 8FAB002C */  lw         $t3, 0x2C($sp)
    /* 8E78 10008E78 A56A0000 */  sh         $t2, 0x0($t3)
  .L10008E7C:
    /* 8E7C 10008E7C 93AC0043 */  lbu        $t4, 0x43($sp)
    /* 8E80 10008E80 8FAF0034 */  lw         $t7, 0x34($sp)
    /* 8E84 10008E84 3C0E8004 */  lui        $t6, %hi(D_8003CA58)
    /* 8E88 10008E88 000C6940 */  sll        $t5, $t4, 5
    /* 8E8C 10008E8C 01AC6823 */  subu       $t5, $t5, $t4
    /* 8E90 10008E90 000D68C0 */  sll        $t5, $t5, 3
    /* 8E94 10008E94 25CECA58 */  addiu      $t6, $t6, %lo(D_8003CA58)
    /* 8E98 10008E98 3C058004 */  lui        $a1, %hi(D_8003CA48)
    /* 8E9C 10008E9C 01AE8021 */  addu       $s0, $t5, $t6
    /* 8EA0 10008EA0 00AF2821 */  addu       $a1, $a1, $t7
    /* 8EA4 10008EA4 8CA5CA48 */  lw         $a1, %lo(D_8003CA48)($a1)
    /* 8EA8 10008EA8 0C005FE0 */  jal        n_alCSeqNew
    /* 8EAC 10008EAC 02002025 */   or        $a0, $s0, $zero
    /* 8EB0 10008EB0 8E440000 */  lw         $a0, 0x0($s2)
    /* 8EB4 10008EB4 0C00632C */  jal        func_10018CB0
    /* 8EB8 10008EB8 02002825 */   or        $a1, $s0, $zero
    /* 8EBC 10008EBC 0C005ECC */  jal        func_10017B30
    /* 8EC0 10008EC0 8E440000 */   lw        $a0, 0x0($s2)
    /* 8EC4 10008EC4 00001025 */  or         $v0, $zero, $zero
  .L10008EC8:
    /* 8EC8 10008EC8 8FBF0024 */  lw         $ra, 0x24($sp)
    /* 8ECC 10008ECC 8FB00018 */  lw         $s0, 0x18($sp)
    /* 8ED0 10008ED0 8FB1001C */  lw         $s1, 0x1C($sp)
    /* 8ED4 10008ED4 8FB20020 */  lw         $s2, 0x20($sp)
    /* 8ED8 10008ED8 03E00008 */  jr         $ra
    /* 8EDC 10008EDC 27BD0040 */   addiu     $sp, $sp, 0x40
endlabel func_10008CE8
