nonmatching __n_seqpReleaseVoice, 0x204

glabel __n_seqpReleaseVoice
    /* 1ABA0 1001ABA0 27BDFFB8 */  addiu      $sp, $sp, -0x48
    /* 1ABA4 1001ABA4 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 1ABA8 1001ABA8 AFA40048 */  sw         $a0, 0x48($sp)
    /* 1ABAC 1001ABAC AFA5004C */  sw         $a1, 0x4C($sp)
    /* 1ABB0 1001ABB0 AFA60050 */  sw         $a2, 0x50($sp)
    /* 1ABB4 1001ABB4 8FAE004C */  lw         $t6, 0x4C($sp)
    /* 1ABB8 1001ABB8 8DCF0010 */  lw         $t7, 0x10($t6)
    /* 1ABBC 1001ABBC AFAF0034 */  sw         $t7, 0x34($sp)
    /* 1ABC0 1001ABC0 8FB80034 */  lw         $t8, 0x34($sp)
    /* 1ABC4 1001ABC4 93190038 */  lbu        $t9, 0x38($t8)
    /* 1ABC8 1001ABC8 1720004F */  bnez       $t9, .L1001AD08
    /* 1ABCC 1001ABCC 00000000 */   nop
    /* 1ABD0 1001ABD0 8FA80048 */  lw         $t0, 0x48($sp)
    /* 1ABD4 1001ABD4 8D090050 */  lw         $t1, 0x50($t0)
    /* 1ABD8 1001ABD8 AFA90030 */  sw         $t1, 0x30($sp)
    /* 1ABDC 1001ABDC 8FAA0030 */  lw         $t2, 0x30($sp)
    /* 1ABE0 1001ABE0 11400049 */  beqz       $t2, .L1001AD08
    /* 1ABE4 1001ABE4 00000000 */   nop
  .L1001ABE8:
    /* 1ABE8 1001ABE8 8FAB0030 */  lw         $t3, 0x30($sp)
    /* 1ABEC 1001ABEC 8D6C0000 */  lw         $t4, 0x0($t3)
    /* 1ABF0 1001ABF0 AFAC002C */  sw         $t4, 0x2C($sp)
    /* 1ABF4 1001ABF4 8FAD0030 */  lw         $t5, 0x30($sp)
    /* 1ABF8 1001ABF8 AFAD0028 */  sw         $t5, 0x28($sp)
    /* 1ABFC 1001ABFC 8FAE002C */  lw         $t6, 0x2C($sp)
    /* 1AC00 1001AC00 AFAE0024 */  sw         $t6, 0x24($sp)
    /* 1AC04 1001AC04 8FAF0028 */  lw         $t7, 0x28($sp)
    /* 1AC08 1001AC08 24010006 */  addiu      $at, $zero, 0x6
    /* 1AC0C 1001AC0C 85F8000C */  lh         $t8, 0xC($t7)
    /* 1AC10 1001AC10 17010038 */  bne        $t8, $at, .L1001ACF4
    /* 1AC14 1001AC14 00000000 */   nop
    /* 1AC18 1001AC18 8FB90028 */  lw         $t9, 0x28($sp)
    /* 1AC1C 1001AC1C 8FA9004C */  lw         $t1, 0x4C($sp)
    /* 1AC20 1001AC20 8F280010 */  lw         $t0, 0x10($t9)
    /* 1AC24 1001AC24 15090033 */  bne        $t0, $t1, .L1001ACF4
    /* 1AC28 1001AC28 00000000 */   nop
    /* 1AC2C 1001AC2C 8FAA0024 */  lw         $t2, 0x24($sp)
    /* 1AC30 1001AC30 11400007 */  beqz       $t2, .L1001AC50
    /* 1AC34 1001AC34 00000000 */   nop
    /* 1AC38 1001AC38 8FAB0024 */  lw         $t3, 0x24($sp)
    /* 1AC3C 1001AC3C 8FAD0028 */  lw         $t5, 0x28($sp)
    /* 1AC40 1001AC40 8D6C0008 */  lw         $t4, 0x8($t3)
    /* 1AC44 1001AC44 8DAE0008 */  lw         $t6, 0x8($t5)
    /* 1AC48 1001AC48 018E7821 */  addu       $t7, $t4, $t6
    /* 1AC4C 1001AC4C AD6F0008 */  sw         $t7, 0x8($t3)
  .L1001AC50:
    /* 1AC50 1001AC50 8FB80030 */  lw         $t8, 0x30($sp)
    /* 1AC54 1001AC54 AFB80020 */  sw         $t8, 0x20($sp)
    /* 1AC58 1001AC58 8FB90020 */  lw         $t9, 0x20($sp)
    /* 1AC5C 1001AC5C 8F280000 */  lw         $t0, 0x0($t9)
    /* 1AC60 1001AC60 11000005 */  beqz       $t0, .L1001AC78
    /* 1AC64 1001AC64 00000000 */   nop
    /* 1AC68 1001AC68 8FA90020 */  lw         $t1, 0x20($sp)
    /* 1AC6C 1001AC6C 8D2A0004 */  lw         $t2, 0x4($t1)
    /* 1AC70 1001AC70 8D2D0000 */  lw         $t5, 0x0($t1)
    /* 1AC74 1001AC74 ADAA0004 */  sw         $t2, 0x4($t5)
  .L1001AC78:
    /* 1AC78 1001AC78 8FAC0020 */  lw         $t4, 0x20($sp)
    /* 1AC7C 1001AC7C 8D8E0004 */  lw         $t6, 0x4($t4)
    /* 1AC80 1001AC80 11C00005 */  beqz       $t6, .L1001AC98
    /* 1AC84 1001AC84 00000000 */   nop
    /* 1AC88 1001AC88 8FAF0020 */  lw         $t7, 0x20($sp)
    /* 1AC8C 1001AC8C 8DEB0000 */  lw         $t3, 0x0($t7)
    /* 1AC90 1001AC90 8DF80004 */  lw         $t8, 0x4($t7)
    /* 1AC94 1001AC94 AF0B0000 */  sw         $t3, 0x0($t8)
  .L1001AC98:
    /* 1AC98 1001AC98 8FB90030 */  lw         $t9, 0x30($sp)
    /* 1AC9C 1001AC9C AFB9001C */  sw         $t9, 0x1C($sp)
    /* 1ACA0 1001ACA0 8FA80048 */  lw         $t0, 0x48($sp)
    /* 1ACA4 1001ACA4 25090048 */  addiu      $t1, $t0, 0x48
    /* 1ACA8 1001ACA8 AFA90018 */  sw         $t1, 0x18($sp)
    /* 1ACAC 1001ACAC 8FAA0018 */  lw         $t2, 0x18($sp)
    /* 1ACB0 1001ACB0 8FAC001C */  lw         $t4, 0x1C($sp)
    /* 1ACB4 1001ACB4 8D4D0000 */  lw         $t5, 0x0($t2)
    /* 1ACB8 1001ACB8 AD8D0000 */  sw         $t5, 0x0($t4)
    /* 1ACBC 1001ACBC 8FAE0018 */  lw         $t6, 0x18($sp)
    /* 1ACC0 1001ACC0 8FAF001C */  lw         $t7, 0x1C($sp)
    /* 1ACC4 1001ACC4 ADEE0004 */  sw         $t6, 0x4($t7)
    /* 1ACC8 1001ACC8 8FAB0018 */  lw         $t3, 0x18($sp)
    /* 1ACCC 1001ACCC 8D780000 */  lw         $t8, 0x0($t3)
    /* 1ACD0 1001ACD0 13000005 */  beqz       $t8, .L1001ACE8
    /* 1ACD4 1001ACD4 00000000 */   nop
    /* 1ACD8 1001ACD8 8FA80018 */  lw         $t0, 0x18($sp)
    /* 1ACDC 1001ACDC 8FB9001C */  lw         $t9, 0x1C($sp)
    /* 1ACE0 1001ACE0 8D090000 */  lw         $t1, 0x0($t0)
    /* 1ACE4 1001ACE4 AD390004 */  sw         $t9, 0x4($t1)
  .L1001ACE8:
    /* 1ACE8 1001ACE8 8FAA001C */  lw         $t2, 0x1C($sp)
    /* 1ACEC 1001ACEC 8FAD0018 */  lw         $t5, 0x18($sp)
    /* 1ACF0 1001ACF0 ADAA0000 */  sw         $t2, 0x0($t5)
  .L1001ACF4:
    /* 1ACF4 1001ACF4 8FAC002C */  lw         $t4, 0x2C($sp)
    /* 1ACF8 1001ACF8 AFAC0030 */  sw         $t4, 0x30($sp)
    /* 1ACFC 1001ACFC 8FAE0030 */  lw         $t6, 0x30($sp)
    /* 1AD00 1001AD00 15C0FFB9 */  bnez       $t6, .L1001ABE8
    /* 1AD04 1001AD04 00000000 */   nop
  .L1001AD08:
    /* 1AD08 1001AD08 8FAF0034 */  lw         $t7, 0x34($sp)
    /* 1AD0C 1001AD0C A1E00037 */  sb         $zero, 0x37($t7)
    /* 1AD10 1001AD10 8FB80034 */  lw         $t8, 0x34($sp)
    /* 1AD14 1001AD14 240B0003 */  addiu      $t3, $zero, 0x3
    /* 1AD18 1001AD18 A30B0038 */  sb         $t3, 0x38($t8)
    /* 1AD1C 1001AD1C 8FA80034 */  lw         $t0, 0x34($sp)
    /* 1AD20 1001AD20 A1000034 */  sb         $zero, 0x34($t0)
    /* 1AD24 1001AD24 8FB90048 */  lw         $t9, 0x48($sp)
    /* 1AD28 1001AD28 8FAA0050 */  lw         $t2, 0x50($sp)
    /* 1AD2C 1001AD2C 8FAC0034 */  lw         $t4, 0x34($sp)
    /* 1AD30 1001AD30 8F29001C */  lw         $t1, 0x1C($t9)
    /* 1AD34 1001AD34 012A6821 */  addu       $t5, $t1, $t2
    /* 1AD38 1001AD38 AD8D0028 */  sw         $t5, 0x28($t4)
    /* 1AD3C 1001AD3C 8FA4004C */  lw         $a0, 0x4C($sp)
    /* 1AD40 1001AD40 0C007FF8 */  jal        n_alSynSetPriority
    /* 1AD44 1001AD44 00002825 */   or        $a1, $zero, $zero
    /* 1AD48 1001AD48 8FA4004C */  lw         $a0, 0x4C($sp)
    /* 1AD4C 1001AD4C 00002825 */  or         $a1, $zero, $zero
    /* 1AD50 1001AD50 0C007244 */  jal        n_alSynSetVol
    /* 1AD54 1001AD54 8FA60050 */   lw        $a2, 0x50($sp)
    /* 1AD58 1001AD58 240E0005 */  addiu      $t6, $zero, 0x5
    /* 1AD5C 1001AD5C A7AE0038 */  sh         $t6, 0x38($sp)
    /* 1AD60 1001AD60 8FAF004C */  lw         $t7, 0x4C($sp)
    /* 1AD64 1001AD64 AFAF003C */  sw         $t7, 0x3C($sp)
    /* 1AD68 1001AD68 8FAB0050 */  lw         $t3, 0x50($sp)
    /* 1AD6C 1001AD6C 25787D00 */  addiu      $t8, $t3, 0x7D00
    /* 1AD70 1001AD70 AFB80050 */  sw         $t8, 0x50($sp)
    /* 1AD74 1001AD74 8FA40048 */  lw         $a0, 0x48($sp)
    /* 1AD78 1001AD78 27A50038 */  addiu      $a1, $sp, 0x38
    /* 1AD7C 1001AD7C 8FA60050 */  lw         $a2, 0x50($sp)
    /* 1AD80 1001AD80 00003825 */  or         $a3, $zero, $zero
    /* 1AD84 1001AD84 0C007089 */  jal        n_alEvtqPostEvent
    /* 1AD88 1001AD88 24840048 */   addiu     $a0, $a0, 0x48
    /* 1AD8C 1001AD8C 10000001 */  b          .L1001AD94
    /* 1AD90 1001AD90 00000000 */   nop
  .L1001AD94:
    /* 1AD94 1001AD94 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 1AD98 1001AD98 27BD0048 */  addiu      $sp, $sp, 0x48
    /* 1AD9C 1001AD9C 03E00008 */  jr         $ra
    /* 1ADA0 1001ADA0 00000000 */   nop
endlabel __n_seqpReleaseVoice
