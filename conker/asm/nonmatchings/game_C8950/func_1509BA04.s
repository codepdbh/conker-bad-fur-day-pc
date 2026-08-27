nonmatching func_1509BA04, 0x19C

glabel func_1509BA04
    /* C8EB4 1509BA04 27BDFFB0 */  addiu      $sp, $sp, -0x50
    /* C8EB8 1509BA08 AFB1001C */  sw         $s1, 0x1C($sp)
    /* C8EBC 1509BA0C 3C11800D */  lui        $s1, %hi(D_800D2E69)
    /* C8EC0 1509BA10 3C02800D */  lui        $v0, %hi(D_800D2F48)
    /* C8EC4 1509BA14 24422F48 */  addiu      $v0, $v0, %lo(D_800D2F48)
    /* C8EC8 1509BA18 26312E69 */  addiu      $s1, $s1, %lo(D_800D2E69)
    /* C8ECC 1509BA1C AFBF003C */  sw         $ra, 0x3C($sp)
    /* C8ED0 1509BA20 AFBE0038 */  sw         $fp, 0x38($sp)
    /* C8ED4 1509BA24 AFB70034 */  sw         $s7, 0x34($sp)
    /* C8ED8 1509BA28 AFB60030 */  sw         $s6, 0x30($sp)
    /* C8EDC 1509BA2C AFB5002C */  sw         $s5, 0x2C($sp)
    /* C8EE0 1509BA30 AFB40028 */  sw         $s4, 0x28($sp)
    /* C8EE4 1509BA34 AFB30024 */  sw         $s3, 0x24($sp)
    /* C8EE8 1509BA38 AFB20020 */  sw         $s2, 0x20($sp)
    /* C8EEC 1509BA3C AFB00018 */  sw         $s0, 0x18($sp)
    /* C8EF0 1509BA40 AFA40050 */  sw         $a0, 0x50($sp)
    /* C8EF4 1509BA44 922F0000 */  lbu        $t7, 0x0($s1)
    /* C8EF8 1509BA48 944E0000 */  lhu        $t6, 0x0($v0)
    /* C8EFC 1509BA4C 8C500004 */  lw         $s0, 0x4($v0)
    /* C8F00 1509BA50 11E00004 */  beqz       $t7, .L1509BA64
    /* C8F04 1509BA54 AFAE0044 */   sw        $t6, 0x44($sp)
    /* C8F08 1509BA58 0D42708A */  jal        func_1509C228
    /* C8F0C 1509BA5C 00000000 */   nop
    /* C8F10 1509BA60 A2200000 */  sb         $zero, 0x0($s1)
  .L1509BA64:
    /* C8F14 1509BA64 8FB80044 */  lw         $t8, 0x44($sp)
    /* C8F18 1509BA68 0000A025 */  or         $s4, $zero, $zero
    /* C8F1C 1509BA6C 241E0003 */  addiu      $fp, $zero, 0x3
    /* C8F20 1509BA70 1B00003F */  blez       $t8, .L1509BB70
    /* C8F24 1509BA74 3C17800D */   lui       $s7, %hi(D_800D2E4C)
    /* C8F28 1509BA78 3C15800D */  lui        $s5, %hi(D_800D2E70)
    /* C8F2C 1509BA7C 26B52E70 */  addiu      $s5, $s5, %lo(D_800D2E70)
    /* C8F30 1509BA80 26F72E4C */  addiu      $s7, $s7, %lo(D_800D2E4C)
    /* C8F34 1509BA84 96020000 */  lhu        $v0, 0x0($s0)
  .L1509BA88:
    /* C8F38 1509BA88 3C01FFFF */  lui        $at, (0xFFFF03FF >> 16)
    /* C8F3C 1509BA8C 8EE90000 */  lw         $t1, 0x0($s7)
    /* C8F40 1509BA90 342103FF */  ori        $at, $at, (0xFFFF03FF & 0xFFFF)
    /* C8F44 1509BA94 00418824 */  and        $s1, $v0, $at
    /* C8F48 1509BA98 001190C3 */  sra        $s2, $s1, 3
    /* C8F4C 1509BA9C 02495021 */  addu       $t2, $s2, $t1
    /* C8F50 1509BAA0 914B0000 */  lbu        $t3, 0x0($t2)
    /* C8F54 1509BAA4 32390007 */  andi       $t9, $s1, 0x7
    /* C8F58 1509BAA8 24080001 */  addiu      $t0, $zero, 0x1
    /* C8F5C 1509BAAC 03289804 */  sllv       $s3, $t0, $t9
    /* C8F60 1509BAB0 01736024 */  and        $t4, $t3, $s3
    /* C8F64 1509BAB4 11800009 */  beqz       $t4, .L1509BADC
    /* C8F68 1509BAB8 8E160018 */   lw        $s6, 0x18($s0)
    /* C8F6C 1509BABC 8FAD0050 */  lw         $t5, 0x50($sp)
    /* C8F70 1509BAC0 55A00007 */  bnel       $t5, $zero, .L1509BAE0
    /* C8F74 1509BAC4 8FAF0050 */   lw        $t7, 0x50($sp)
    /* C8F78 1509BAC8 0D426DD9 */  jal        func_1509B764
    /* C8F7C 1509BACC 02002025 */   or        $a0, $s0, $zero
    /* C8F80 1509BAD0 02B17021 */  addu       $t6, $s5, $s1
    /* C8F84 1509BAD4 10000021 */  b          .L1509BB5C
    /* C8F88 1509BAD8 A1DE0000 */   sb        $fp, 0x0($t6)
  .L1509BADC:
    /* C8F8C 1509BADC 8FAF0050 */  lw         $t7, 0x50($sp)
  .L1509BAE0:
    /* C8F90 1509BAE0 3C0A0600 */  lui        $t2, (0x6000001 >> 16)
    /* C8F94 1509BAE4 30588000 */  andi       $t8, $v0, 0x8000
    /* C8F98 1509BAE8 15E00008 */  bnez       $t7, .L1509BB0C
    /* C8F9C 1509BAEC 354A0001 */   ori       $t2, $t2, (0x6000001 & 0xFFFF)
    /* C8FA0 1509BAF0 17000006 */  bnez       $t8, .L1509BB0C
    /* C8FA4 1509BAF4 30481000 */   andi      $t0, $v0, 0x1000
    /* C8FA8 1509BAF8 11000018 */  beqz       $t0, .L1509BB5C
    /* C8FAC 1509BAFC 3C19800C */   lui       $t9, %hi(D_800BE9F0)
    /* C8FB0 1509BB00 8F39E9F0 */  lw         $t9, %lo(D_800BE9F0)($t9)
    /* C8FB4 1509BB04 96090002 */  lhu        $t1, 0x2($s0)
    /* C8FB8 1509BB08 13290014 */  beq        $t9, $t1, .L1509BB5C
  .L1509BB0C:
    /* C8FBC 1509BB0C 3C018004 */   lui       $at, %hi(D_8003C8E0)
    /* C8FC0 1509BB10 AC2AC8E0 */  sw         $t2, %lo(D_8003C8E0)($at)
    /* C8FC4 1509BB14 02002025 */  or         $a0, $s0, $zero
    /* C8FC8 1509BB18 0D42B6BC */  jal        func_150ADAF0
    /* C8FCC 1509BB1C 24050003 */   addiu     $a1, $zero, 0x3
    /* C8FD0 1509BB20 3C018004 */  lui        $at, %hi(D_8003C8E0)
    /* C8FD4 1509BB24 AC20C8E0 */  sw         $zero, %lo(D_8003C8E0)($at)
    /* C8FD8 1509BB28 0D426DD9 */  jal        func_1509B764
    /* C8FDC 1509BB2C 02002025 */   or        $a0, $s0, $zero
    /* C8FE0 1509BB30 8EEB0000 */  lw         $t3, 0x0($s7)
    /* C8FE4 1509BB34 02B17821 */  addu       $t7, $s5, $s1
    /* C8FE8 1509BB38 02B1C021 */  addu       $t8, $s5, $s1
    /* C8FEC 1509BB3C 024B6021 */  addu       $t4, $s2, $t3
    /* C8FF0 1509BB40 918D0000 */  lbu        $t5, 0x0($t4)
    /* C8FF4 1509BB44 01B37024 */  and        $t6, $t5, $s3
    /* C8FF8 1509BB48 55C00004 */  bnel       $t6, $zero, .L1509BB5C
    /* C8FFC 1509BB4C A31E0000 */   sb        $fp, 0x0($t8)
    /* C9000 1509BB50 10000002 */  b          .L1509BB5C
    /* C9004 1509BB54 A1E00000 */   sb        $zero, 0x0($t7)
    /* C9008 1509BB58 A31E0000 */  sb         $fp, 0x0($t8)
  .L1509BB5C:
    /* C900C 1509BB5C 8FA80044 */  lw         $t0, 0x44($sp)
    /* C9010 1509BB60 26940001 */  addiu      $s4, $s4, 0x1
    /* C9014 1509BB64 02C08025 */  or         $s0, $s6, $zero
    /* C9018 1509BB68 5688FFC7 */  bnel       $s4, $t0, .L1509BA88
    /* C901C 1509BB6C 96020000 */   lhu       $v0, 0x0($s0)
  .L1509BB70:
    /* C9020 1509BB70 8FBF003C */  lw         $ra, 0x3C($sp)
    /* C9024 1509BB74 8FB00018 */  lw         $s0, 0x18($sp)
    /* C9028 1509BB78 8FB1001C */  lw         $s1, 0x1C($sp)
    /* C902C 1509BB7C 8FB20020 */  lw         $s2, 0x20($sp)
    /* C9030 1509BB80 8FB30024 */  lw         $s3, 0x24($sp)
    /* C9034 1509BB84 8FB40028 */  lw         $s4, 0x28($sp)
    /* C9038 1509BB88 8FB5002C */  lw         $s5, 0x2C($sp)
    /* C903C 1509BB8C 8FB60030 */  lw         $s6, 0x30($sp)
    /* C9040 1509BB90 8FB70034 */  lw         $s7, 0x34($sp)
    /* C9044 1509BB94 8FBE0038 */  lw         $fp, 0x38($sp)
    /* C9048 1509BB98 03E00008 */  jr         $ra
    /* C904C 1509BB9C 27BD0050 */   addiu     $sp, $sp, 0x50
endlabel func_1509BA04
