nonmatching func_10002E50, 0x250

glabel func_10002E50
    /* 2E50 10002E50 27BDFFA0 */  addiu      $sp, $sp, -0x60
    /* 2E54 10002E54 AFB10024 */  sw         $s1, 0x24($sp)
    /* 2E58 10002E58 00808825 */  or         $s1, $a0, $zero
    /* 2E5C 10002E5C AFBF0044 */  sw         $ra, 0x44($sp)
    /* 2E60 10002E60 AFBE0040 */  sw         $fp, 0x40($sp)
    /* 2E64 10002E64 AFB7003C */  sw         $s7, 0x3C($sp)
    /* 2E68 10002E68 AFB60038 */  sw         $s6, 0x38($sp)
    /* 2E6C 10002E6C AFB50034 */  sw         $s5, 0x34($sp)
    /* 2E70 10002E70 AFB40030 */  sw         $s4, 0x30($sp)
    /* 2E74 10002E74 AFB3002C */  sw         $s3, 0x2C($sp)
    /* 2E78 10002E78 AFB20028 */  sw         $s2, 0x28($sp)
    /* 2E7C 10002E7C AFB00020 */  sw         $s0, 0x20($sp)
    /* 2E80 10002E80 3C1E8003 */  lui        $fp, %hi(D_80035910)
    /* 2E84 10002E84 3C178004 */  lui        $s7, %hi(D_8003A572)
    /* 2E88 10002E88 3C158004 */  lui        $s5, %hi(D_8003A573)
    /* 2E8C 10002E8C 3C138004 */  lui        $s3, %hi(D_8003A575)
    /* 2E90 10002E90 AFA0005C */  sw         $zero, 0x5C($sp)
    /* 2E94 10002E94 2673A575 */  addiu      $s3, $s3, %lo(D_8003A575)
    /* 2E98 10002E98 26B5A573 */  addiu      $s5, $s5, %lo(D_8003A573)
    /* 2E9C 10002E9C 26F7A572 */  addiu      $s7, $s7, %lo(D_8003A572)
    /* 2EA0 10002EA0 27DE5910 */  addiu      $fp, $fp, %lo(D_80035910)
    /* 2EA4 10002EA4 27B6005C */  addiu      $s6, $sp, 0x5C
    /* 2EA8 10002EA8 24140001 */  addiu      $s4, $zero, 0x1
    /* 2EAC 10002EAC 27B20054 */  addiu      $s2, $sp, 0x54
  .L10002EB0:
    /* 2EB0 10002EB0 8E240008 */  lw         $a0, 0x8($s1)
  .L10002EB4:
    /* 2EB4 10002EB4 02C02825 */  or         $a1, $s6, $zero
    /* 2EB8 10002EB8 0C008D10 */  jal        osRecvMesg
    /* 2EBC 10002EBC 24060001 */   addiu     $a2, $zero, 0x1
    /* 2EC0 10002EC0 8FAE005C */  lw         $t6, 0x5C($sp)
    /* 2EC4 10002EC4 95CF0000 */  lhu        $t7, 0x0($t6)
    /* 2EC8 10002EC8 25F8FFF6 */  addiu      $t8, $t7, -0xA
    /* 2ECC 10002ECC 2F010007 */  sltiu      $at, $t8, 0x7
    /* 2ED0 10002ED0 1020004F */  beqz       $at, .L10003010
    /* 2ED4 10002ED4 0018C080 */   sll       $t8, $t8, 2
    /* 2ED8 10002ED8 3C018003 */  lui        $at, %hi(jtbl_8002C080)
    /* 2EDC 10002EDC 00380821 */  addu       $at, $at, $t8
    /* 2EE0 10002EE0 8C38C080 */  lw         $t8, %lo(jtbl_8002C080)($at)
    /* 2EE4 10002EE4 03000008 */  jr         $t8
    /* 2EE8 10002EE8 00000000 */   nop
  jlabel .L10002EEC
    /* 2EEC 10002EEC 92F90000 */  lbu        $t9, 0x0($s7)
    /* 2EF0 10002EF0 03C02025 */  or         $a0, $fp, $zero
    /* 2EF4 10002EF4 53200005 */  beql       $t9, $zero, .L10002F0C
    /* 2EF8 10002EF8 A2B40000 */   sb        $s4, 0x0($s5)
    /* 2EFC 10002EFC 0C008B80 */  jal        osStopThread
    /* 2F00 10002F00 A2740000 */   sb        $s4, 0x0($s3)
    /* 2F04 10002F04 A2600000 */  sb         $zero, 0x0($s3)
    /* 2F08 10002F08 A2B40000 */  sb         $s4, 0x0($s5)
  .L10002F0C:
    /* 2F0C 10002F0C 8E240010 */  lw         $a0, 0x10($s1)
    /* 2F10 10002F10 02402825 */  or         $a1, $s2, $zero
    /* 2F14 10002F14 0C008D10 */  jal        osRecvMesg
    /* 2F18 10002F18 24060001 */   addiu     $a2, $zero, 0x1
    /* 2F1C 10002F1C 8FA8005C */  lw         $t0, 0x5C($sp)
    /* 2F20 10002F20 8E390014 */  lw         $t9, 0x14($s1)
    /* 2F24 10002F24 00002025 */  or         $a0, $zero, $zero
    /* 2F28 10002F28 8D05000C */  lw         $a1, 0xC($t0)
    /* 2F2C 10002F2C 8D060008 */  lw         $a2, 0x8($t0)
    /* 2F30 10002F30 0320F809 */  jalr       $t9
    /* 2F34 10002F34 8D070010 */   lw        $a3, 0x10($t0)
    /* 2F38 10002F38 10000036 */  b          .L10003014
    /* 2F3C 10002F3C 00408025 */   or        $s0, $v0, $zero
  jlabel .L10002F40
    /* 2F40 10002F40 8E240010 */  lw         $a0, 0x10($s1)
    /* 2F44 10002F44 02402825 */  or         $a1, $s2, $zero
    /* 2F48 10002F48 0C008D10 */  jal        osRecvMesg
    /* 2F4C 10002F4C 24060001 */   addiu     $a2, $zero, 0x1
    /* 2F50 10002F50 8FA9005C */  lw         $t1, 0x5C($sp)
    /* 2F54 10002F54 8E390014 */  lw         $t9, 0x14($s1)
    /* 2F58 10002F58 24040001 */  addiu      $a0, $zero, 0x1
    /* 2F5C 10002F5C 8D25000C */  lw         $a1, 0xC($t1)
    /* 2F60 10002F60 8D260008 */  lw         $a2, 0x8($t1)
    /* 2F64 10002F64 0320F809 */  jalr       $t9
    /* 2F68 10002F68 8D270010 */   lw        $a3, 0x10($t1)
    /* 2F6C 10002F6C 10000029 */  b          .L10003014
    /* 2F70 10002F70 00408025 */   or        $s0, $v0, $zero
  jlabel .L10002F74
    /* 2F74 10002F74 8E240010 */  lw         $a0, 0x10($s1)
    /* 2F78 10002F78 02402825 */  or         $a1, $s2, $zero
    /* 2F7C 10002F7C 0C008D10 */  jal        osRecvMesg
    /* 2F80 10002F80 24060001 */   addiu     $a2, $zero, 0x1
    /* 2F84 10002F84 8FAA005C */  lw         $t2, 0x5C($sp)
    /* 2F88 10002F88 00002825 */  or         $a1, $zero, $zero
    /* 2F8C 10002F8C 8D4B0010 */  lw         $t3, 0x10($t2)
    /* 2F90 10002F90 8D440014 */  lw         $a0, 0x14($t2)
    /* 2F94 10002F94 8D46000C */  lw         $a2, 0xC($t2)
    /* 2F98 10002F98 8D470008 */  lw         $a3, 0x8($t2)
    /* 2F9C 10002F9C AFAB0010 */  sw         $t3, 0x10($sp)
    /* 2FA0 10002FA0 8E390018 */  lw         $t9, 0x18($s1)
    /* 2FA4 10002FA4 0320F809 */  jalr       $t9
    /* 2FA8 10002FA8 00000000 */   nop
    /* 2FAC 10002FAC 10000019 */  b          .L10003014
    /* 2FB0 10002FB0 00408025 */   or        $s0, $v0, $zero
  jlabel .L10002FB4
    /* 2FB4 10002FB4 8E240010 */  lw         $a0, 0x10($s1)
    /* 2FB8 10002FB8 02402825 */  or         $a1, $s2, $zero
    /* 2FBC 10002FBC 0C008D10 */  jal        osRecvMesg
    /* 2FC0 10002FC0 24060001 */   addiu     $a2, $zero, 0x1
    /* 2FC4 10002FC4 8FAC005C */  lw         $t4, 0x5C($sp)
    /* 2FC8 10002FC8 24050001 */  addiu      $a1, $zero, 0x1
    /* 2FCC 10002FCC 8D8D0010 */  lw         $t5, 0x10($t4)
    /* 2FD0 10002FD0 8D840014 */  lw         $a0, 0x14($t4)
    /* 2FD4 10002FD4 8D86000C */  lw         $a2, 0xC($t4)
    /* 2FD8 10002FD8 8D870008 */  lw         $a3, 0x8($t4)
    /* 2FDC 10002FDC AFAD0010 */  sw         $t5, 0x10($sp)
    /* 2FE0 10002FE0 8E390018 */  lw         $t9, 0x18($s1)
    /* 2FE4 10002FE4 0320F809 */  jalr       $t9
    /* 2FE8 10002FE8 00000000 */   nop
    /* 2FEC 10002FEC 10000009 */  b          .L10003014
    /* 2FF0 10002FF0 00408025 */   or        $s0, $v0, $zero
  jlabel .L10002FF4
    /* 2FF4 10002FF4 8FA5005C */  lw         $a1, 0x5C($sp)
    /* 2FF8 10002FF8 00003025 */  or         $a2, $zero, $zero
    /* 2FFC 10002FFC 2410FFFF */  addiu      $s0, $zero, -0x1
    /* 3000 10003000 0C008D60 */  jal        osSendMesg
    /* 3004 10003004 8CA40004 */   lw        $a0, 0x4($a1)
    /* 3008 10003008 10000002 */  b          .L10003014
    /* 300C 1000300C 00000000 */   nop
  jlabel .L10003010
    /* 3010 10003010 2410FFFF */  addiu      $s0, $zero, -0x1
  .L10003014:
    /* 3014 10003014 5600FFA7 */  bnel       $s0, $zero, .L10002EB4
    /* 3018 10003018 8E240008 */   lw        $a0, 0x8($s1)
    /* 301C 1000301C 8E24000C */  lw         $a0, 0xC($s1)
    /* 3020 10003020 27A50058 */  addiu      $a1, $sp, 0x58
    /* 3024 10003024 0C008D10 */  jal        osRecvMesg
    /* 3028 10003028 24060001 */   addiu     $a2, $zero, 0x1
    /* 302C 1000302C 8FA5005C */  lw         $a1, 0x5C($sp)
    /* 3030 10003030 00003025 */  or         $a2, $zero, $zero
    /* 3034 10003034 0C008D60 */  jal        osSendMesg
    /* 3038 10003038 8CA40004 */   lw        $a0, 0x4($a1)
    /* 303C 1000303C 8E240010 */  lw         $a0, 0x10($s1)
    /* 3040 10003040 00002825 */  or         $a1, $zero, $zero
    /* 3044 10003044 0C008D60 */  jal        osSendMesg
    /* 3048 10003048 00003025 */   or        $a2, $zero, $zero
    /* 304C 1000304C 8FB8005C */  lw         $t8, 0x5C($sp)
    /* 3050 10003050 2401000B */  addiu      $at, $zero, 0xB
    /* 3054 10003054 97080000 */  lhu        $t0, 0x0($t8)
    /* 3058 10003058 5501FF96 */  bnel       $t0, $at, .L10002EB4
    /* 305C 1000305C 8E240008 */   lw        $a0, 0x8($s1)
    /* 3060 10003060 1000FF93 */  b          .L10002EB0
    /* 3064 10003064 A2A00000 */   sb        $zero, 0x0($s5)
    /* 3068 10003068 00000000 */  nop
    /* 306C 1000306C 00000000 */  nop
    /* 3070 10003070 8FBF0044 */  lw         $ra, 0x44($sp)
    /* 3074 10003074 8FB00020 */  lw         $s0, 0x20($sp)
    /* 3078 10003078 8FB10024 */  lw         $s1, 0x24($sp)
    /* 307C 1000307C 8FB20028 */  lw         $s2, 0x28($sp)
    /* 3080 10003080 8FB3002C */  lw         $s3, 0x2C($sp)
    /* 3084 10003084 8FB40030 */  lw         $s4, 0x30($sp)
    /* 3088 10003088 8FB50034 */  lw         $s5, 0x34($sp)
    /* 308C 1000308C 8FB60038 */  lw         $s6, 0x38($sp)
    /* 3090 10003090 8FB7003C */  lw         $s7, 0x3C($sp)
    /* 3094 10003094 8FBE0040 */  lw         $fp, 0x40($sp)
    /* 3098 10003098 03E00008 */  jr         $ra
    /* 309C 1000309C 27BD0060 */   addiu     $sp, $sp, 0x60
endlabel func_10002E50
