nonmatching func_15072B44, 0x25C

glabel func_15072B44
    /* 9FFF4 15072B44 27BDFFD0 */  addiu      $sp, $sp, -0x30
    /* 9FFF8 15072B48 AFBF0024 */  sw         $ra, 0x24($sp)
    /* 9FFFC 15072B4C 3C04800D */  lui        $a0, %hi(D_800D154C)
    /* A0000 15072B50 8C84154C */  lw         $a0, %lo(D_800D154C)($a0)
    /* A0004 15072B54 2403FFFF */  addiu      $v1, $zero, -0x1
    /* A0008 15072B58 94820084 */  lhu        $v0, 0x84($a0)
    /* A000C 15072B5C 28410177 */  slti       $at, $v0, 0x177
    /* A0010 15072B60 1420001C */  bnez       $at, .L15072BD4
    /* A0014 15072B64 244FFED4 */   addiu     $t7, $v0, -0x12C
    /* A0018 15072B68 284101D7 */  slti       $at, $v0, 0x1D7
    /* A001C 15072B6C 14200010 */  bnez       $at, .L15072BB0
    /* A0020 15072B70 244EFD91 */   addiu     $t6, $v0, -0x26F
    /* A0024 15072B74 284101D8 */  slti       $at, $v0, 0x1D8
    /* A0028 15072B78 14200008 */  bnez       $at, .L15072B9C
    /* A002C 15072B7C 2DC10006 */   sltiu     $at, $t6, 0x6
    /* A0030 15072B80 1020006C */  beqz       $at, .L15072D34
    /* A0034 15072B84 000E7080 */   sll       $t6, $t6, 2
    /* A0038 15072B88 3C01800A */  lui        $at, %hi(jtbl_80099F50)
    /* A003C 15072B8C 002E0821 */  addu       $at, $at, $t6
    /* A0040 15072B90 8C2E9F50 */  lw         $t6, %lo(jtbl_80099F50)($at)
    /* A0044 15072B94 01C00008 */  jr         $t6
    /* A0048 15072B98 00000000 */   nop
  .L15072B9C:
    /* A004C 15072B9C 240101D7 */  addiu      $at, $zero, 0x1D7
    /* A0050 15072BA0 1041002E */  beq        $v0, $at, .L15072C5C
    /* A0054 15072BA4 00000000 */   nop
    /* A0058 15072BA8 10000063 */  b          .L15072D38
    /* A005C 15072BAC 240100BE */   addiu     $at, $zero, 0xBE
  .L15072BB0:
    /* A0060 15072BB0 240101CD */  addiu      $at, $zero, 0x1CD
    /* A0064 15072BB4 10410033 */  beq        $v0, $at, .L15072C84
    /* A0068 15072BB8 240101CF */   addiu     $at, $zero, 0x1CF
    /* A006C 15072BBC 10410033 */  beq        $v0, $at, .L15072C8C
    /* A0070 15072BC0 240101D6 */   addiu     $at, $zero, 0x1D6
    /* A0074 15072BC4 10410023 */  beq        $v0, $at, .L15072C54
    /* A0078 15072BC8 00000000 */   nop
    /* A007C 15072BCC 1000005A */  b          .L15072D38
    /* A0080 15072BD0 240100BE */   addiu     $at, $zero, 0xBE
  .L15072BD4:
    /* A0084 15072BD4 284100FE */  slti       $at, $v0, 0xFE
    /* A0088 15072BD8 14200011 */  bnez       $at, .L15072C20
    /* A008C 15072BDC 2841010D */   slti      $at, $v0, 0x10D
    /* A0090 15072BE0 14200008 */  bnez       $at, .L15072C04
    /* A0094 15072BE4 2DE1004B */   sltiu     $at, $t7, 0x4B
    /* A0098 15072BE8 10200052 */  beqz       $at, .L15072D34
    /* A009C 15072BEC 000F7880 */   sll       $t7, $t7, 2
    /* A00A0 15072BF0 3C01800A */  lui        $at, %hi(jtbl_80099F68)
    /* A00A4 15072BF4 002F0821 */  addu       $at, $at, $t7
    /* A00A8 15072BF8 8C2F9F68 */  lw         $t7, %lo(jtbl_80099F68)($at)
    /* A00AC 15072BFC 01E00008 */  jr         $t7
    /* A00B0 15072C00 00000000 */   nop
  .L15072C04:
    /* A00B4 15072C04 2401010A */  addiu      $at, $zero, 0x10A
    /* A00B8 15072C08 10410024 */  beq        $v0, $at, .L15072C9C
    /* A00BC 15072C0C 2401010C */   addiu     $at, $zero, 0x10C
    /* A00C0 15072C10 5041002B */  beql       $v0, $at, .L15072CC0
    /* A00C4 15072C14 8C98031C */   lw        $t8, 0x31C($a0)
    /* A00C8 15072C18 10000047 */  b          .L15072D38
    /* A00CC 15072C1C 240100BE */   addiu     $at, $zero, 0xBE
  .L15072C20:
    /* A00D0 15072C20 24010035 */  addiu      $at, $zero, 0x35
    /* A00D4 15072C24 10410013 */  beq        $v0, $at, .L15072C74
    /* A00D8 15072C28 2401003F */   addiu     $at, $zero, 0x3F
    /* A00DC 15072C2C 10410013 */  beq        $v0, $at, .L15072C7C
    /* A00E0 15072C30 240100FD */   addiu     $at, $zero, 0xFD
    /* A00E4 15072C34 10410017 */  beq        $v0, $at, .L15072C94
    /* A00E8 15072C38 00000000 */   nop
    /* A00EC 15072C3C 1000003E */  b          .L15072D38
    /* A00F0 15072C40 240100BE */   addiu     $at, $zero, 0xBE
  jlabel .L15072C44
    /* A00F4 15072C44 10000046 */  b          .L15072D60
    /* A00F8 15072C48 24430001 */   addiu     $v1, $v0, 0x1
  jlabel .L15072C4C
    /* A00FC 15072C4C 10000044 */  b          .L15072D60
    /* A0100 15072C50 2403026F */   addiu     $v1, $zero, 0x26F
  .L15072C54:
    /* A0104 15072C54 10000042 */  b          .L15072D60
    /* A0108 15072C58 240301D7 */   addiu     $v1, $zero, 0x1D7
  .L15072C5C:
    /* A010C 15072C5C 10000040 */  b          .L15072D60
    /* A0110 15072C60 240301D8 */   addiu     $v1, $zero, 0x1D8
    /* A0114 15072C64 1000003E */  b          .L15072D60
    /* A0118 15072C68 24030177 */   addiu     $v1, $zero, 0x177
    /* A011C 15072C6C 1000003C */  b          .L15072D60
    /* A0120 15072C70 24030177 */   addiu     $v1, $zero, 0x177
  .L15072C74:
    /* A0124 15072C74 1000003A */  b          .L15072D60
    /* A0128 15072C78 2403003A */   addiu     $v1, $zero, 0x3A
  .L15072C7C:
    /* A012C 15072C7C 10000038 */  b          .L15072D60
    /* A0130 15072C80 2403003A */   addiu     $v1, $zero, 0x3A
  .L15072C84:
    /* A0134 15072C84 10000036 */  b          .L15072D60
    /* A0138 15072C88 240301CE */   addiu     $v1, $zero, 0x1CE
  .L15072C8C:
    /* A013C 15072C8C 10000034 */  b          .L15072D60
    /* A0140 15072C90 240301CE */   addiu     $v1, $zero, 0x1CE
  .L15072C94:
    /* A0144 15072C94 10000032 */  b          .L15072D60
    /* A0148 15072C98 240300FE */   addiu     $v1, $zero, 0xFE
  .L15072C9C:
    /* A014C 15072C9C 10000030 */  b          .L15072D60
    /* A0150 15072CA0 2403010A */   addiu     $v1, $zero, 0x10A
  jlabel .L15072CA4
    /* A0154 15072CA4 1000002E */  b          .L15072D60
    /* A0158 15072CA8 2403012D */   addiu     $v1, $zero, 0x12D
  jlabel .L15072CAC
    /* A015C 15072CAC 1000002C */  b          .L15072D60
    /* A0160 15072CB0 2403012D */   addiu     $v1, $zero, 0x12D
  jlabel .L15072CB4
    /* A0164 15072CB4 1000002A */  b          .L15072D60
    /* A0168 15072CB8 2403003E */   addiu     $v1, $zero, 0x3E
    /* A016C 15072CBC 8C98031C */  lw         $t8, 0x31C($a0)
  .L15072CC0:
    /* A0170 15072CC0 93190197 */  lbu        $t9, 0x197($t8)
    /* A0174 15072CC4 13200003 */  beqz       $t9, .L15072CD4
    /* A0178 15072CC8 00000000 */   nop
    /* A017C 15072CCC 10000024 */  b          .L15072D60
    /* A0180 15072CD0 2403010A */   addiu     $v1, $zero, 0x10A
  .L15072CD4:
    /* A0184 15072CD4 0D41FD90 */  jal        func_1507F640
    /* A0188 15072CD8 AFA30028 */   sw        $v1, 0x28($sp)
    /* A018C 15072CDC 10000020 */  b          .L15072D60
    /* A0190 15072CE0 8FA30028 */   lw        $v1, 0x28($sp)
  jlabel .L15072CE4
    /* A0194 15072CE4 8C88031C */  lw         $t0, 0x31C($a0)
    /* A0198 15072CE8 91090197 */  lbu        $t1, 0x197($t0)
    /* A019C 15072CEC 11200003 */  beqz       $t1, .L15072CFC
    /* A01A0 15072CF0 00000000 */   nop
    /* A01A4 15072CF4 1000001A */  b          .L15072D60
    /* A01A8 15072CF8 24030157 */   addiu     $v1, $zero, 0x157
  .L15072CFC:
    /* A01AC 15072CFC 0D41FD90 */  jal        func_1507F640
    /* A01B0 15072D00 AFA30028 */   sw        $v1, 0x28($sp)
    /* A01B4 15072D04 10000016 */  b          .L15072D60
    /* A01B8 15072D08 8FA30028 */   lw        $v1, 0x28($sp)
    /* A01BC 15072D0C 8C8A031C */  lw         $t2, 0x31C($a0)
    /* A01C0 15072D10 914B0197 */  lbu        $t3, 0x197($t2)
    /* A01C4 15072D14 11600003 */  beqz       $t3, .L15072D24
    /* A01C8 15072D18 00000000 */   nop
    /* A01CC 15072D1C 10000010 */  b          .L15072D60
    /* A01D0 15072D20 24030165 */   addiu     $v1, $zero, 0x165
  .L15072D24:
    /* A01D4 15072D24 0D41FD90 */  jal        func_1507F640
    /* A01D8 15072D28 AFA30028 */   sw        $v1, 0x28($sp)
    /* A01DC 15072D2C 1000000C */  b          .L15072D60
    /* A01E0 15072D30 8FA30028 */   lw        $v1, 0x28($sp)
  jlabel .L15072D34
    /* A01E4 15072D34 240100BE */  addiu      $at, $zero, 0xBE
  .L15072D38:
    /* A01E8 15072D38 10410008 */  beq        $v0, $at, .L15072D5C
    /* A01EC 15072D3C 240100C1 */   addiu     $at, $zero, 0xC1
    /* A01F0 15072D40 54410008 */  bnel       $v0, $at, .L15072D64
    /* A01F4 15072D44 2401FFFF */   addiu     $at, $zero, -0x1
    /* A01F8 15072D48 8C8C031C */  lw         $t4, 0x31C($a0)
    /* A01FC 15072D4C 8D8D0038 */  lw         $t5, 0x38($t4)
    /* A0200 15072D50 31AE2000 */  andi       $t6, $t5, 0x2000
    /* A0204 15072D54 55C00003 */  bnel       $t6, $zero, .L15072D64
    /* A0208 15072D58 2401FFFF */   addiu     $at, $zero, -0x1
  .L15072D5C:
    /* A020C 15072D5C 240300BF */  addiu      $v1, $zero, 0xBF
  .L15072D60:
    /* A0210 15072D60 2401FFFF */  addiu      $at, $zero, -0x1
  .L15072D64:
    /* A0214 15072D64 1061000A */  beq        $v1, $at, .L15072D90
    /* A0218 15072D68 3C04800D */   lui       $a0, %hi(D_800D154C)
    /* A021C 15072D6C 44800000 */  mtc1       $zero, $f0
    /* A0220 15072D70 8C84154C */  lw         $a0, %lo(D_800D154C)($a0)
    /* A0224 15072D74 3065FFFF */  andi       $a1, $v1, 0xFFFF
    /* A0228 15072D78 3C063F80 */  lui        $a2, (0x3F800000 >> 16)
    /* A022C 15072D7C 3C074080 */  lui        $a3, (0x40800000 >> 16)
    /* A0230 15072D80 AFA00018 */  sw         $zero, 0x18($sp)
    /* A0234 15072D84 E7A00010 */  swc1       $f0, 0x10($sp)
    /* A0238 15072D88 0D417994 */  jal        func_1505E650
    /* A023C 15072D8C E7A00014 */   swc1      $f0, 0x14($sp)
  .L15072D90:
    /* A0240 15072D90 8FBF0024 */  lw         $ra, 0x24($sp)
    /* A0244 15072D94 27BD0030 */  addiu      $sp, $sp, 0x30
    /* A0248 15072D98 03E00008 */  jr         $ra
    /* A024C 15072D9C 00000000 */   nop
endlabel func_15072B44
