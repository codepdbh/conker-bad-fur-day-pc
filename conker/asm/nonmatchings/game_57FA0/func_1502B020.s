nonmatching func_1502B020, 0xF0

glabel func_1502B020
    /* 584D0 1502B020 27BDFFB8 */  addiu      $sp, $sp, -0x48
    /* 584D4 1502B024 AFBF002C */  sw         $ra, 0x2C($sp)
    /* 584D8 1502B028 AFB40028 */  sw         $s4, 0x28($sp)
    /* 584DC 1502B02C AFB30024 */  sw         $s3, 0x24($sp)
    /* 584E0 1502B030 AFB20020 */  sw         $s2, 0x20($sp)
    /* 584E4 1502B034 AFB1001C */  sw         $s1, 0x1C($sp)
    /* 584E8 1502B038 AFB00018 */  sw         $s0, 0x18($sp)
    /* 584EC 1502B03C AFA40048 */  sw         $a0, 0x48($sp)
    /* 584F0 1502B040 AFA5004C */  sw         $a1, 0x4C($sp)
    /* 584F4 1502B044 AFA60050 */  sw         $a2, 0x50($sp)
    /* 584F8 1502B048 AFA70054 */  sw         $a3, 0x54($sp)
    /* 584FC 1502B04C 240E0001 */  addiu      $t6, $zero, 0x1
    /* 58500 1502B050 3C1100AB */  lui        $s1, %hi(D_AB1950)
    /* 58504 1502B054 AFAE0038 */  sw         $t6, 0x38($sp)
    /* 58508 1502B058 26311950 */  addiu      $s1, $s1, %lo(D_AB1950)
    /* 5850C 1502B05C 27B00050 */  addiu      $s0, $sp, 0x50
    /* 58510 1502B060 10A00017 */  beqz       $a1, .L1502B0C0
    /* 58514 1502B064 AFA5004C */   sw        $a1, 0x4C($sp)
    /* 58518 1502B068 3C140FFF */  lui        $s4, (0xFFFFFFF >> 16)
    /* 5851C 1502B06C 3694FFFF */  ori        $s4, $s4, (0xFFFFFFF & 0xFFFF)
    /* 58520 1502B070 AFA5004C */  sw         $a1, 0x4C($sp)
    /* 58524 1502B074 27B30038 */  addiu      $s3, $sp, 0x38
    /* 58528 1502B078 2412FFFC */  addiu      $s2, $zero, -0x4
  .L1502B07C:
    /* 5852C 1502B07C 8FB80038 */  lw         $t8, 0x38($sp)
    /* 58530 1502B080 260F0003 */  addiu      $t7, $s0, 0x3
    /* 58534 1502B084 01F28024 */  and        $s0, $t7, $s2
    /* 58538 1502B088 26100004 */  addiu      $s0, $s0, 0x4
    /* 5853C 1502B08C 13000005 */  beqz       $t8, .L1502B0A4
    /* 58540 1502B090 8E05FFFC */   lw        $a1, -0x4($s0)
    /* 58544 1502B094 02202025 */  or         $a0, $s1, $zero
    /* 58548 1502B098 0D40AB22 */  jal        func_1502AC88
    /* 5854C 1502B09C 02603025 */   or        $a2, $s3, $zero
    /* 58550 1502B0A0 02228821 */  addu       $s1, $s1, $v0
  .L1502B0A4:
    /* 58554 1502B0A4 8FA5004C */  lw         $a1, 0x4C($sp)
    /* 58558 1502B0A8 8FB90038 */  lw         $t9, 0x38($sp)
    /* 5855C 1502B0AC 24A5FFFF */  addiu      $a1, $a1, -0x1
    /* 58560 1502B0B0 03344024 */  and        $t0, $t9, $s4
    /* 58564 1502B0B4 AFA5004C */  sw         $a1, 0x4C($sp)
    /* 58568 1502B0B8 14A0FFF0 */  bnez       $a1, .L1502B07C
    /* 5856C 1502B0BC AFA80038 */   sw        $t0, 0x38($sp)
  .L1502B0C0:
    /* 58570 1502B0C0 8FA90048 */  lw         $t1, 0x48($sp)
    /* 58574 1502B0C4 3C140FFF */  lui        $s4, (0xFFFFFFF >> 16)
    /* 58578 1502B0C8 3694FFFF */  ori        $s4, $s4, (0xFFFFFFF & 0xFFFF)
    /* 5857C 1502B0CC 11200003 */  beqz       $t1, .L1502B0DC
    /* 58580 1502B0D0 8FAA0038 */   lw        $t2, 0x38($sp)
    /* 58584 1502B0D4 01545824 */  and        $t3, $t2, $s4
    /* 58588 1502B0D8 AD2B0000 */  sw         $t3, 0x0($t1)
  .L1502B0DC:
    /* 5858C 1502B0DC 8FAC0038 */  lw         $t4, 0x38($sp)
    /* 58590 1502B0E0 8FB00018 */  lw         $s0, 0x18($sp)
    /* 58594 1502B0E4 8FB20020 */  lw         $s2, 0x20($sp)
    /* 58598 1502B0E8 15800003 */  bnez       $t4, .L1502B0F8
    /* 5859C 1502B0EC 8FB30024 */   lw        $s3, 0x24($sp)
    /* 585A0 1502B0F0 10000002 */  b          .L1502B0FC
    /* 585A4 1502B0F4 00001025 */   or        $v0, $zero, $zero
  .L1502B0F8:
    /* 585A8 1502B0F8 02201025 */  or         $v0, $s1, $zero
  .L1502B0FC:
    /* 585AC 1502B0FC 8FBF002C */  lw         $ra, 0x2C($sp)
    /* 585B0 1502B100 8FB1001C */  lw         $s1, 0x1C($sp)
    /* 585B4 1502B104 8FB40028 */  lw         $s4, 0x28($sp)
    /* 585B8 1502B108 03E00008 */  jr         $ra
    /* 585BC 1502B10C 27BD0048 */   addiu     $sp, $sp, 0x48
endlabel func_1502B020
