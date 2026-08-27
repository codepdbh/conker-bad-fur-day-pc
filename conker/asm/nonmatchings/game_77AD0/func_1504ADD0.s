nonmatching func_1504ADD0, 0x124

glabel func_1504ADD0
    /* 78280 1504ADD0 27BDFFA8 */  addiu      $sp, $sp, -0x58
    /* 78284 1504ADD4 AFBF003C */  sw         $ra, 0x3C($sp)
    /* 78288 1504ADD8 AFBE0038 */  sw         $fp, 0x38($sp)
    /* 7828C 1504ADDC AFB70034 */  sw         $s7, 0x34($sp)
    /* 78290 1504ADE0 AFB60030 */  sw         $s6, 0x30($sp)
    /* 78294 1504ADE4 AFB5002C */  sw         $s5, 0x2C($sp)
    /* 78298 1504ADE8 AFB40028 */  sw         $s4, 0x28($sp)
    /* 7829C 1504ADEC AFB30024 */  sw         $s3, 0x24($sp)
    /* 782A0 1504ADF0 AFB20020 */  sw         $s2, 0x20($sp)
    /* 782A4 1504ADF4 AFB1001C */  sw         $s1, 0x1C($sp)
    /* 782A8 1504ADF8 AFB00018 */  sw         $s0, 0x18($sp)
    /* 782AC 1504ADFC 3C0E800C */  lui        $t6, %hi(D_800C35EA)
    /* 782B0 1504AE00 91CE35EA */  lbu        $t6, %lo(D_800C35EA)($t6)
    /* 782B4 1504AE04 24010001 */  addiu      $at, $zero, 0x1
    /* 782B8 1504AE08 00008025 */  or         $s0, $zero, $zero
    /* 782BC 1504AE0C 11C1002D */  beq        $t6, $at, .L1504AEC4
    /* 782C0 1504AE10 3C11800D */   lui       $s1, %hi(D_800CC2D0)
    /* 782C4 1504AE14 3C17800C */  lui        $s7, %hi(D_800BE728)
    /* 782C8 1504AE18 3C168009 */  lui        $s6, %hi(D_8008FD8C)
    /* 782CC 1504AE1C 3C15800C */  lui        $s5, %hi(D_800C3E78)
    /* 782D0 1504AE20 3C12800D */  lui        $s2, %hi(D_800CC284)
    /* 782D4 1504AE24 2652C284 */  addiu      $s2, $s2, %lo(D_800CC284)
    /* 782D8 1504AE28 26B53E78 */  addiu      $s5, $s5, %lo(D_800C3E78)
    /* 782DC 1504AE2C 26D6FD8C */  addiu      $s6, $s6, %lo(D_8008FD8C)
    /* 782E0 1504AE30 26F7E728 */  addiu      $s7, $s7, %lo(D_800BE728)
    /* 782E4 1504AE34 2631C2D0 */  addiu      $s1, $s1, %lo(D_800CC2D0)
    /* 782E8 1504AE38 241E0028 */  addiu      $fp, $zero, 0x28
    /* 782EC 1504AE3C 24140019 */  addiu      $s4, $zero, 0x19
    /* 782F0 1504AE40 27B30048 */  addiu      $s3, $sp, 0x48
  .L1504AE44:
    /* 782F4 1504AE44 8E2F0000 */  lw         $t7, 0x0($s1)
    /* 782F8 1504AE48 3C01800D */  lui        $at, %hi(D_800D154C)
    /* 782FC 1504AE4C 51E0001B */  beql       $t7, $zero, .L1504AEBC
    /* 78300 1504AE50 26100001 */   addiu     $s0, $s0, 0x1
    /* 78304 1504AE54 A2B00000 */  sb         $s0, 0x0($s5)
    /* 78308 1504AE58 AC31154C */  sw         $s1, %lo(D_800D154C)($at)
    /* 7830C 1504AE5C 82D80000 */  lb         $t8, 0x0($s6)
    /* 78310 1504AE60 0218082A */  slt        $at, $s0, $t8
    /* 78314 1504AE64 1020000C */  beqz       $at, .L1504AE98
    /* 78318 1504AE68 2A010004 */   slti      $at, $s0, 0x4
    /* 7831C 1504AE6C 10200007 */  beqz       $at, .L1504AE8C
    /* 78320 1504AE70 02602025 */   or        $a0, $s3, $zero
    /* 78324 1504AE74 8EF90000 */  lw         $t9, 0x0($s7)
    /* 78328 1504AE78 00104080 */  sll        $t0, $s0, 2
    /* 7832C 1504AE7C 03284821 */  addu       $t1, $t9, $t0
    /* 78330 1504AE80 8D2A0000 */  lw         $t2, 0x0($t1)
    /* 78334 1504AE84 10000004 */  b          .L1504AE98
    /* 78338 1504AE88 AE4A0000 */   sw        $t2, 0x0($s2)
  .L1504AE8C:
    /* 7833C 1504AE8C 0C0089BC */  jal        bzero
    /* 78340 1504AE90 24050006 */   addiu     $a1, $zero, 0x6
    /* 78344 1504AE94 AE530000 */  sw         $s3, 0x0($s2)
  .L1504AE98:
    /* 78348 1504AE98 92220004 */  lbu        $v0, 0x4($s1)
    /* 7834C 1504AE9C 24010077 */  addiu      $at, $zero, 0x77
    /* 78350 1504AEA0 105E0003 */  beq        $v0, $fp, .L1504AEB0
    /* 78354 1504AEA4 00000000 */   nop
    /* 78358 1504AEA8 54410004 */  bnel       $v0, $at, .L1504AEBC
    /* 7835C 1504AEAC 26100001 */   addiu     $s0, $s0, 0x1
  .L1504AEB0:
    /* 78360 1504AEB0 0D43B55E */  jal        func_150ED578
    /* 78364 1504AEB4 02202025 */   or        $a0, $s1, $zero
    /* 78368 1504AEB8 26100001 */  addiu      $s0, $s0, 0x1
  .L1504AEBC:
    /* 7836C 1504AEBC 1614FFE1 */  bne        $s0, $s4, .L1504AE44
    /* 78370 1504AEC0 2631032C */   addiu     $s1, $s1, 0x32C
  .L1504AEC4:
    /* 78374 1504AEC4 8FBF003C */  lw         $ra, 0x3C($sp)
    /* 78378 1504AEC8 8FB00018 */  lw         $s0, 0x18($sp)
    /* 7837C 1504AECC 8FB1001C */  lw         $s1, 0x1C($sp)
    /* 78380 1504AED0 8FB20020 */  lw         $s2, 0x20($sp)
    /* 78384 1504AED4 8FB30024 */  lw         $s3, 0x24($sp)
    /* 78388 1504AED8 8FB40028 */  lw         $s4, 0x28($sp)
    /* 7838C 1504AEDC 8FB5002C */  lw         $s5, 0x2C($sp)
    /* 78390 1504AEE0 8FB60030 */  lw         $s6, 0x30($sp)
    /* 78394 1504AEE4 8FB70034 */  lw         $s7, 0x34($sp)
    /* 78398 1504AEE8 8FBE0038 */  lw         $fp, 0x38($sp)
    /* 7839C 1504AEEC 03E00008 */  jr         $ra
    /* 783A0 1504AEF0 27BD0058 */   addiu     $sp, $sp, 0x58
endlabel func_1504ADD0
