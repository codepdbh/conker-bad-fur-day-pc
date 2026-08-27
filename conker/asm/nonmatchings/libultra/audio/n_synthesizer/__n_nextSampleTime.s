nonmatching __n_nextSampleTime, 0xA0

glabel __n_nextSampleTime
    /* 19A04 10019A04 27BDFFF8 */  addiu      $sp, $sp, -0x8
    /* 19A08 10019A08 3C0E7FFF */  lui        $t6, (0x7FFFFFFF >> 16)
    /* 19A0C 10019A0C 35CEFFFF */  ori        $t6, $t6, (0x7FFFFFFF & 0xFFFF)
    /* 19A10 10019A10 AFAE0004 */  sw         $t6, 0x4($sp)
    /* 19A14 10019A14 AC800000 */  sw         $zero, 0x0($a0)
    /* 19A18 10019A18 3C0F8003 */  lui        $t7, %hi(n_syn)
    /* 19A1C 10019A1C 8DEFBA44 */  lw         $t7, %lo(n_syn)($t7)
    /* 19A20 10019A20 8DF80000 */  lw         $t8, 0x0($t7)
    /* 19A24 10019A24 13000018 */  beqz       $t8, .L10019A88
    /* 19A28 10019A28 AFB80000 */   sw        $t8, 0x0($sp)
  .L10019A2C:
    /* 19A2C 10019A2C 3C098003 */  lui        $t1, %hi(n_syn)
    /* 19A30 10019A30 8D29BA44 */  lw         $t1, %lo(n_syn)($t1)
    /* 19A34 10019A34 8FB90000 */  lw         $t9, 0x0($sp)
    /* 19A38 10019A38 8FAC0004 */  lw         $t4, 0x4($sp)
    /* 19A3C 10019A3C 8D2A0020 */  lw         $t2, 0x20($t1)
    /* 19A40 10019A40 8F280010 */  lw         $t0, 0x10($t9)
    /* 19A44 10019A44 010A5823 */  subu       $t3, $t0, $t2
    /* 19A48 10019A48 016C082B */  sltu       $at, $t3, $t4
    /* 19A4C 10019A4C 1020000A */  beqz       $at, .L10019A78
    /* 19A50 10019A50 00000000 */   nop
    /* 19A54 10019A54 8FAD0000 */  lw         $t5, 0x0($sp)
    /* 19A58 10019A58 AC8D0000 */  sw         $t5, 0x0($a0)
    /* 19A5C 10019A5C 3C188003 */  lui        $t8, %hi(n_syn)
    /* 19A60 10019A60 8F18BA44 */  lw         $t8, %lo(n_syn)($t8)
    /* 19A64 10019A64 8FAE0000 */  lw         $t6, 0x0($sp)
    /* 19A68 10019A68 8F190020 */  lw         $t9, 0x20($t8)
    /* 19A6C 10019A6C 8DCF0010 */  lw         $t7, 0x10($t6)
    /* 19A70 10019A70 01F94823 */  subu       $t1, $t7, $t9
    /* 19A74 10019A74 AFA90004 */  sw         $t1, 0x4($sp)
  .L10019A78:
    /* 19A78 10019A78 8FA80000 */  lw         $t0, 0x0($sp)
    /* 19A7C 10019A7C 8D0A0000 */  lw         $t2, 0x0($t0)
    /* 19A80 10019A80 1540FFEA */  bnez       $t2, .L10019A2C
    /* 19A84 10019A84 AFAA0000 */   sw        $t2, 0x0($sp)
  .L10019A88:
    /* 19A88 10019A88 8C8B0000 */  lw         $t3, 0x0($a0)
    /* 19A8C 10019A8C 10000003 */  b          .L10019A9C
    /* 19A90 10019A90 8D620010 */   lw        $v0, 0x10($t3)
    /* 19A94 10019A94 10000001 */  b          .L10019A9C
    /* 19A98 10019A98 00000000 */   nop
  .L10019A9C:
    /* 19A9C 10019A9C 03E00008 */  jr         $ra
    /* 19AA0 10019AA0 27BD0008 */   addiu     $sp, $sp, 0x8
endlabel __n_nextSampleTime
    /* 19AA4 10019AA4 00000000 */  nop
    /* 19AA8 10019AA8 00000000 */  nop
    /* 19AAC 10019AAC 00000000 */  nop
