nonmatching func_1000E2F4, 0x118

glabel func_1000E2F4
    /* E2F4 1000E2F4 27BDFFC8 */  addiu      $sp, $sp, -0x38
    /* E2F8 1000E2F8 AFB60030 */  sw         $s6, 0x30($sp)
    /* E2FC 1000E2FC 0080B025 */  or         $s6, $a0, $zero
    /* E300 1000E300 AFBF0034 */  sw         $ra, 0x34($sp)
    /* E304 1000E304 AFB5002C */  sw         $s5, 0x2C($sp)
    /* E308 1000E308 AFB40028 */  sw         $s4, 0x28($sp)
    /* E30C 1000E30C AFB30024 */  sw         $s3, 0x24($sp)
    /* E310 1000E310 AFB20020 */  sw         $s2, 0x20($sp)
    /* E314 1000E314 AFB1001C */  sw         $s1, 0x1C($sp)
    /* E318 1000E318 AFB00018 */  sw         $s0, 0x18($sp)
    /* E31C 1000E31C 3C128004 */  lui        $s2, %hi(D_800417B0)
    /* E320 1000E320 3C138003 */  lui        $s3, %hi(D_8002B074)
    /* E324 1000E324 2673B074 */  addiu      $s3, $s3, %lo(D_8002B074)
    /* E328 1000E328 265217B0 */  addiu      $s2, $s2, %lo(D_800417B0)
    /* E32C 1000E32C 00008825 */  or         $s1, $zero, $zero
    /* E330 1000E330 2415FFFF */  addiu      $s5, $zero, -0x1
    /* E334 1000E334 24140003 */  addiu      $s4, $zero, 0x3
  .L1000E338:
    /* E338 1000E338 8E420000 */  lw         $v0, 0x0($s2)
    /* E33C 1000E33C 50400025 */  beql       $v0, $zero, .L1000E3D4
    /* E340 1000E340 26310001 */   addiu     $s1, $s1, 0x1
    /* E344 1000E344 8C430004 */  lw         $v1, 0x4($v0)
    /* E348 1000E348 58600022 */  blezl      $v1, .L1000E3D4
    /* E34C 1000E34C 26310001 */   addiu     $s1, $s1, 0x1
    /* E350 1000E350 904E0015 */  lbu        $t6, 0x15($v0)
    /* E354 1000E354 55C0001F */  bnel       $t6, $zero, .L1000E3D4
    /* E358 1000E358 26310001 */   addiu     $s1, $s1, 0x1
    /* E35C 1000E35C 12C00011 */  beqz       $s6, .L1000E3A4
    /* E360 1000E360 00035900 */   sll       $t3, $v1, 4
    /* E364 1000E364 323000FF */  andi       $s0, $s1, 0xFF
    /* E368 1000E368 320400FF */  andi       $a0, $s0, 0xFF
    /* E36C 1000E36C 0C0023B8 */  jal        func_10008EE0
    /* E370 1000E370 00002825 */   or        $a1, $zero, $zero
    /* E374 1000E374 8E4F0000 */  lw         $t7, 0x0($s2)
    /* E378 1000E378 8DF80004 */  lw         $t8, 0x4($t7)
    /* E37C 1000E37C 0018C900 */  sll        $t9, $t8, 4
    /* E380 1000E380 02794021 */  addu       $t0, $s3, $t9
    /* E384 1000E384 8D090004 */  lw         $t1, 0x4($t0)
    /* E388 1000E388 312A0010 */  andi       $t2, $t1, 0x10
    /* E38C 1000E38C 55400011 */  bnel       $t2, $zero, .L1000E3D4
    /* E390 1000E390 26310001 */   addiu     $s1, $s1, 0x1
    /* E394 1000E394 0C0023D6 */  jal        func_10008F58
    /* E398 1000E398 320400FF */   andi      $a0, $s0, 0xFF
    /* E39C 1000E39C 1000000D */  b          .L1000E3D4
    /* E3A0 1000E3A0 26310001 */   addiu     $s1, $s1, 0x1
  .L1000E3A4:
    /* E3A4 1000E3A4 026B6021 */  addu       $t4, $s3, $t3
    /* E3A8 1000E3A8 8D8D0004 */  lw         $t5, 0x4($t4)
    /* E3AC 1000E3AC 31AE0010 */  andi       $t6, $t5, 0x10
    /* E3B0 1000E3B0 55C00005 */  bnel       $t6, $zero, .L1000E3C8
    /* E3B4 1000E3B4 AC550030 */   sw        $s5, 0x30($v0)
    /* E3B8 1000E3B8 0C002136 */  jal        func_100084D8
    /* E3BC 1000E3BC 322400FF */   andi      $a0, $s1, 0xFF
    /* E3C0 1000E3C0 8E420000 */  lw         $v0, 0x0($s2)
    /* E3C4 1000E3C4 AC550030 */  sw         $s5, 0x30($v0)
  .L1000E3C8:
    /* E3C8 1000E3C8 0C003315 */  jal        func_1000CC54
    /* E3CC 1000E3CC 02202025 */   or        $a0, $s1, $zero
    /* E3D0 1000E3D0 26310001 */  addiu      $s1, $s1, 0x1
  .L1000E3D4:
    /* E3D4 1000E3D4 1634FFD8 */  bne        $s1, $s4, .L1000E338
    /* E3D8 1000E3D8 26520004 */   addiu     $s2, $s2, 0x4
    /* E3DC 1000E3DC 3C018004 */  lui        $at, %hi(D_80041F00)
    /* E3E0 1000E3E0 A0361F00 */  sb         $s6, %lo(D_80041F00)($at)
    /* E3E4 1000E3E4 8FBF0034 */  lw         $ra, 0x34($sp)
    /* E3E8 1000E3E8 8FB00018 */  lw         $s0, 0x18($sp)
    /* E3EC 1000E3EC 8FB1001C */  lw         $s1, 0x1C($sp)
    /* E3F0 1000E3F0 8FB20020 */  lw         $s2, 0x20($sp)
    /* E3F4 1000E3F4 8FB30024 */  lw         $s3, 0x24($sp)
    /* E3F8 1000E3F8 8FB40028 */  lw         $s4, 0x28($sp)
    /* E3FC 1000E3FC 8FB5002C */  lw         $s5, 0x2C($sp)
    /* E400 1000E400 8FB60030 */  lw         $s6, 0x30($sp)
    /* E404 1000E404 03E00008 */  jr         $ra
    /* E408 1000E408 27BD0038 */   addiu     $sp, $sp, 0x38
endlabel func_1000E2F4
