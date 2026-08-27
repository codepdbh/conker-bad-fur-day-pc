nonmatching func_1502B9B4, 0x114

glabel func_1502B9B4
    /* 58E64 1502B9B4 27BDFF98 */  addiu      $sp, $sp, -0x68
    /* 58E68 1502B9B8 AFBF002C */  sw         $ra, 0x2C($sp)
    /* 58E6C 1502B9BC AFB40028 */  sw         $s4, 0x28($sp)
    /* 58E70 1502B9C0 AFB30024 */  sw         $s3, 0x24($sp)
    /* 58E74 1502B9C4 AFB20020 */  sw         $s2, 0x20($sp)
    /* 58E78 1502B9C8 AFB1001C */  sw         $s1, 0x1C($sp)
    /* 58E7C 1502B9CC AFB00018 */  sw         $s0, 0x18($sp)
    /* 58E80 1502B9D0 AFA40068 */  sw         $a0, 0x68($sp)
    /* 58E84 1502B9D4 AFA5006C */  sw         $a1, 0x6C($sp)
    /* 58E88 1502B9D8 AFA60070 */  sw         $a2, 0x70($sp)
    /* 58E8C 1502B9DC AFA70074 */  sw         $a3, 0x74($sp)
    /* 58E90 1502B9E0 3C1100AB */  lui        $s1, %hi(D_AB1950)
    /* 58E94 1502B9E4 24030001 */  addiu      $v1, $zero, 0x1
    /* 58E98 1502B9E8 26311950 */  addiu      $s1, $s1, %lo(D_AB1950)
    /* 58E9C 1502B9EC 27B0006C */  addiu      $s0, $sp, 0x6C
    /* 58EA0 1502B9F0 10800015 */  beqz       $a0, .L1502BA48
    /* 58EA4 1502B9F4 AFA40068 */   sw        $a0, 0x68($sp)
    /* 58EA8 1502B9F8 3C140FFF */  lui        $s4, (0xFFFFFFF >> 16)
    /* 58EAC 1502B9FC 3694FFFF */  ori        $s4, $s4, (0xFFFFFFF & 0xFFFF)
    /* 58EB0 1502BA00 AFA40068 */  sw         $a0, 0x68($sp)
    /* 58EB4 1502BA04 27B30054 */  addiu      $s3, $sp, 0x54
    /* 58EB8 1502BA08 2412FFFC */  addiu      $s2, $zero, -0x4
  .L1502BA0C:
    /* 58EBC 1502BA0C 260E0003 */  addiu      $t6, $s0, 0x3
    /* 58EC0 1502BA10 01D28024 */  and        $s0, $t6, $s2
    /* 58EC4 1502BA14 26100004 */  addiu      $s0, $s0, 0x4
    /* 58EC8 1502BA18 10600005 */  beqz       $v1, .L1502BA30
    /* 58ECC 1502BA1C 8E05FFFC */   lw        $a1, -0x4($s0)
    /* 58ED0 1502BA20 02202025 */  or         $a0, $s1, $zero
    /* 58ED4 1502BA24 0D40AB22 */  jal        func_1502AC88
    /* 58ED8 1502BA28 02603025 */   or        $a2, $s3, $zero
    /* 58EDC 1502BA2C 02228821 */  addu       $s1, $s1, $v0
  .L1502BA30:
    /* 58EE0 1502BA30 8FA40068 */  lw         $a0, 0x68($sp)
    /* 58EE4 1502BA34 8FA20054 */  lw         $v0, 0x54($sp)
    /* 58EE8 1502BA38 2484FFFF */  addiu      $a0, $a0, -0x1
    /* 58EEC 1502BA3C AFA40068 */  sw         $a0, 0x68($sp)
    /* 58EF0 1502BA40 1480FFF2 */  bnez       $a0, .L1502BA0C
    /* 58EF4 1502BA44 00541824 */   and       $v1, $v0, $s4
  .L1502BA48:
    /* 58EF8 1502BA48 3C140FFF */  lui        $s4, (0xFFFFFFF >> 16)
    /* 58EFC 1502BA4C 3694FFFF */  ori        $s4, $s4, (0xFFFFFFF & 0xFFFF)
    /* 58F00 1502BA50 10600014 */  beqz       $v1, .L1502BAA4
    /* 58F04 1502BA54 8FA20054 */   lw        $v0, 0x54($sp)
    /* 58F08 1502BA58 00541824 */  and        $v1, $v0, $s4
    /* 58F0C 1502BA5C 24630001 */  addiu      $v1, $v1, 0x1
    /* 58F10 1502BA60 2401FFFE */  addiu      $at, $zero, -0x2
    /* 58F14 1502BA64 00617824 */  and        $t7, $v1, $at
    /* 58F18 1502BA68 3C017000 */  lui        $at, (0x70000000 >> 16)
    /* 58F1C 1502BA6C 0041C024 */  and        $t8, $v0, $at
    /* 58F20 1502BA70 3C011000 */  lui        $at, (0x10000000 >> 16)
    /* 58F24 1502BA74 1701000B */  bne        $t8, $at, .L1502BAA4
    /* 58F28 1502BA78 01E01825 */   or        $v1, $t7, $zero
    /* 58F2C 1502BA7C 27B00038 */  addiu      $s0, $sp, 0x38
    /* 58F30 1502BA80 32190008 */  andi       $t9, $s0, 0x8
    /* 58F34 1502BA84 13200002 */  beqz       $t9, .L1502BA90
    /* 58F38 1502BA88 02202025 */   or        $a0, $s1, $zero
    /* 58F3C 1502BA8C 27B00040 */  addiu      $s0, $sp, 0x40
  .L1502BA90:
    /* 58F40 1502BA90 02002825 */  or         $a1, $s0, $zero
    /* 58F44 1502BA94 24060010 */  addiu      $a2, $zero, 0x10
    /* 58F48 1502BA98 0C001145 */  jal        func_10004514
    /* 58F4C 1502BA9C 24070001 */   addiu     $a3, $zero, 0x1
    /* 58F50 1502BAA0 8E030000 */  lw         $v1, 0x0($s0)
  .L1502BAA4:
    /* 58F54 1502BAA4 00601025 */  or         $v0, $v1, $zero
    /* 58F58 1502BAA8 8FBF002C */  lw         $ra, 0x2C($sp)
    /* 58F5C 1502BAAC 8FB00018 */  lw         $s0, 0x18($sp)
    /* 58F60 1502BAB0 8FB1001C */  lw         $s1, 0x1C($sp)
    /* 58F64 1502BAB4 8FB20020 */  lw         $s2, 0x20($sp)
    /* 58F68 1502BAB8 8FB30024 */  lw         $s3, 0x24($sp)
    /* 58F6C 1502BABC 8FB40028 */  lw         $s4, 0x28($sp)
    /* 58F70 1502BAC0 03E00008 */  jr         $ra
    /* 58F74 1502BAC4 27BD0068 */   addiu     $sp, $sp, 0x68
endlabel func_1502B9B4
    /* 58F78 1502BAC8 00000000 */  nop
    /* 58F7C 1502BACC 00000000 */  nop
