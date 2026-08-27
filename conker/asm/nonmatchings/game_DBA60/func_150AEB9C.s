nonmatching func_150AEB9C, 0x130

glabel func_150AEB9C
    /* DC04C 150AEB9C 27BDFFC8 */  addiu      $sp, $sp, -0x38
    /* DC050 150AEBA0 AFB2002C */  sw         $s2, 0x2C($sp)
    /* DC054 150AEBA4 00809025 */  or         $s2, $a0, $zero
    /* DC058 150AEBA8 AFBF0034 */  sw         $ra, 0x34($sp)
    /* DC05C 150AEBAC AFB30030 */  sw         $s3, 0x30($sp)
    /* DC060 150AEBB0 AFB10028 */  sw         $s1, 0x28($sp)
    /* DC064 150AEBB4 AFB00024 */  sw         $s0, 0x24($sp)
    /* DC068 150AEBB8 1240003D */  beqz       $s2, .L150AECB0
    /* DC06C 150AEBBC 00009825 */   or        $s3, $zero, $zero
    /* DC070 150AEBC0 3C051500 */  lui        $a1, %hi(D_15001B08)
    /* DC074 150AEBC4 3C061500 */  lui        $a2, %hi(func_15001A08)
    /* DC078 150AEBC8 24A41B08 */  addiu      $a0, $a1, %lo(D_15001B08)
    /* DC07C 150AEBCC 24C31A08 */  addiu      $v1, $a2, %lo(func_15001A08)
    /* DC080 150AEBD0 0064082B */  sltu       $at, $v1, $a0
    /* DC084 150AEBD4 10200008 */  beqz       $at, .L150AEBF8
    /* DC088 150AEBD8 00001025 */   or        $v0, $zero, $zero
  .L150AEBDC:
    /* DC08C 150AEBDC 8C6E0000 */  lw         $t6, 0x0($v1)
    /* DC090 150AEBE0 24630004 */  addiu      $v1, $v1, 0x4
    /* DC094 150AEBE4 0064082B */  sltu       $at, $v1, $a0
    /* DC098 150AEBE8 004E1026 */  xor        $v0, $v0, $t6
    /* DC09C 150AEBEC 00027840 */  sll        $t7, $v0, 1
    /* DC0A0 150AEBF0 1420FFFA */  bnez       $at, .L150AEBDC
    /* DC0A4 150AEBF4 01E01025 */   or        $v0, $t7, $zero
  .L150AEBF8:
    /* DC0A8 150AEBF8 3C01B4E4 */  lui        $at, (0xB4E42D60 >> 16)
    /* DC0AC 150AEBFC 34212D60 */  ori        $at, $at, (0xB4E42D60 & 0xFFFF)
    /* DC0B0 150AEC00 10410005 */  beq        $v0, $at, .L150AEC18
    /* DC0B4 150AEC04 3C188009 */   lui       $t8, %hi(D_800886E0)
    /* DC0B8 150AEC08 3C02800E */  lui        $v0, %hi(D_800DCE50)
    /* DC0BC 150AEC0C 2442CE50 */  addiu      $v0, $v0, %lo(D_800DCE50)
    /* DC0C0 150AEC10 AC40008C */  sw         $zero, 0x8C($v0)
    /* DC0C4 150AEC14 AC40022C */  sw         $zero, 0x22C($v0)
  .L150AEC18:
    /* DC0C8 150AEC18 8F1886E0 */  lw         $t8, %lo(D_800886E0)($t8)
    /* DC0CC 150AEC1C 00008825 */  or         $s1, $zero, $zero
    /* DC0D0 150AEC20 00008025 */  or         $s0, $zero, $zero
    /* DC0D4 150AEC24 1B000022 */  blez       $t8, .L150AECB0
  .L150AEC28:
    /* DC0D8 150AEC28 3C198009 */   lui       $t9, %hi(D_800886E4)
    /* DC0DC 150AEC2C 8F3986E4 */  lw         $t9, %lo(D_800886E4)($t9)
    /* DC0E0 150AEC30 24090027 */  addiu      $t1, $zero, 0x27
    /* DC0E4 150AEC34 240A0008 */  addiu      $t2, $zero, 0x8
    /* DC0E8 150AEC38 03304021 */  addu       $t0, $t9, $s0
    /* DC0EC 150AEC3C 85040002 */  lh         $a0, 0x2($t0)
    /* DC0F0 150AEC40 240B00FF */  addiu      $t3, $zero, 0xFF
    /* DC0F4 150AEC44 AFAB0018 */  sw         $t3, 0x18($sp)
    /* DC0F8 150AEC48 AFA0001C */  sw         $zero, 0x1C($sp)
    /* DC0FC 150AEC4C AFAA0014 */  sw         $t2, 0x14($sp)
    /* DC100 150AEC50 AFA90010 */  sw         $t1, 0x10($sp)
    /* DC104 150AEC54 00002825 */  or         $a1, $zero, $zero
    /* DC108 150AEC58 2406FFFF */  addiu      $a2, $zero, -0x1
    /* DC10C 150AEC5C 0D45247D */  jal        func_151491F4
    /* DC110 150AEC60 24070001 */   addiu     $a3, $zero, 0x1
    /* DC114 150AEC64 10400012 */  beqz       $v0, .L150AECB0
    /* DC118 150AEC68 0013C0C0 */   sll       $t8, $s3, 3
    /* DC11C 150AEC6C AC520028 */  sw         $s2, 0x28($v0)
    /* DC120 150AEC70 924C003B */  lbu        $t4, 0x3B($s2)
    /* DC124 150AEC74 3C0D8009 */  lui        $t5, %hi(D_800886E4)
    /* DC128 150AEC78 3C198009 */  lui        $t9, %hi(D_800886E0)
    /* DC12C 150AEC7C A04C002C */  sb         $t4, 0x2C($v0)
    /* DC130 150AEC80 8DAD86E4 */  lw         $t5, %lo(D_800886E4)($t5)
    /* DC134 150AEC84 273986E0 */  addiu      $t9, $t9, %lo(D_800886E0)
    /* DC138 150AEC88 03191821 */  addu       $v1, $t8, $t9
    /* DC13C 150AEC8C 01B07021 */  addu       $t6, $t5, $s0
    /* DC140 150AEC90 91CF0000 */  lbu        $t7, 0x0($t6)
    /* DC144 150AEC94 A04F002D */  sb         $t7, 0x2D($v0)
    /* DC148 150AEC98 8C680000 */  lw         $t0, 0x0($v1)
    /* DC14C 150AEC9C 26310001 */  addiu      $s1, $s1, 0x1
    /* DC150 150AECA0 26100004 */  addiu      $s0, $s0, 0x4
    /* DC154 150AECA4 0228082A */  slt        $at, $s1, $t0
    /* DC158 150AECA8 1420FFDF */  bnez       $at, .L150AEC28
    /* DC15C 150AECAC 00000000 */   nop
  .L150AECB0:
    /* DC160 150AECB0 8FBF0034 */  lw         $ra, 0x34($sp)
    /* DC164 150AECB4 8FB00024 */  lw         $s0, 0x24($sp)
    /* DC168 150AECB8 8FB10028 */  lw         $s1, 0x28($sp)
    /* DC16C 150AECBC 8FB2002C */  lw         $s2, 0x2C($sp)
    /* DC170 150AECC0 8FB30030 */  lw         $s3, 0x30($sp)
    /* DC174 150AECC4 03E00008 */  jr         $ra
    /* DC178 150AECC8 27BD0038 */   addiu     $sp, $sp, 0x38
endlabel func_150AEB9C
