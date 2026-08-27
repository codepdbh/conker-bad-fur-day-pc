nonmatching func_1001A45C, 0xAC

glabel func_1001A45C
    /* 1A45C 1001A45C 27BDFFD0 */  addiu      $sp, $sp, -0x30
    /* 1A460 1001A460 AFBF001C */  sw         $ra, 0x1C($sp)
    /* 1A464 1001A464 AFA40030 */  sw         $a0, 0x30($sp)
    /* 1A468 1001A468 AFA50034 */  sw         $a1, 0x34($sp)
    /* 1A46C 1001A46C AFB00018 */  sw         $s0, 0x18($sp)
    /* 1A470 1001A470 8FAE0030 */  lw         $t6, 0x30($sp)
    /* 1A474 1001A474 8DCF0064 */  lw         $t7, 0x64($t6)
    /* 1A478 1001A478 11E0001C */  beqz       $t7, .L1001A4EC
    /* 1A47C 1001A47C AFAF002C */   sw        $t7, 0x2C($sp)
  .L1001A480:
    /* 1A480 1001A480 8FB8002C */  lw         $t8, 0x2C($sp)
    /* 1A484 1001A484 93A80037 */  lbu        $t0, 0x37($sp)
    /* 1A488 1001A488 93190035 */  lbu        $t9, 0x35($t8)
    /* 1A48C 1001A48C 17280013 */  bne        $t9, $t0, .L1001A4DC
    /* 1A490 1001A490 00000000 */   nop
    /* 1A494 1001A494 93090038 */  lbu        $t1, 0x38($t8)
    /* 1A498 1001A498 24010003 */  addiu      $at, $zero, 0x3
    /* 1A49C 1001A49C 1121000F */  beq        $t1, $at, .L1001A4DC
    /* 1A4A0 1001A4A0 00000000 */   nop
    /* 1A4A4 1001A4A4 8FA4002C */  lw         $a0, 0x2C($sp)
    /* 1A4A8 1001A4A8 0C006C80 */  jal        __n_vsVol
    /* 1A4AC 1001A4AC 8FA50030 */   lw        $a1, 0x30($sp)
    /* 1A4B0 1001A4B0 A7A2002A */  sh         $v0, 0x2A($sp)
    /* 1A4B4 1001A4B4 8FAA0030 */  lw         $t2, 0x30($sp)
    /* 1A4B8 1001A4B8 8FA4002C */  lw         $a0, 0x2C($sp)
    /* 1A4BC 1001A4BC 0C006D03 */  jal        __n_vsDelta
    /* 1A4C0 1001A4C0 8D45001C */   lw        $a1, 0x1C($t2)
    /* 1A4C4 1001A4C4 8FA4002C */  lw         $a0, 0x2C($sp)
    /* 1A4C8 1001A4C8 00408025 */  or         $s0, $v0, $zero
    /* 1A4CC 1001A4CC 02003025 */  or         $a2, $s0, $zero
    /* 1A4D0 1001A4D0 87A5002A */  lh         $a1, 0x2A($sp)
    /* 1A4D4 1001A4D4 0C007244 */  jal        n_alSynSetVol
    /* 1A4D8 1001A4D8 24840004 */   addiu     $a0, $a0, 0x4
  .L1001A4DC:
    /* 1A4DC 1001A4DC 8FAB002C */  lw         $t3, 0x2C($sp)
    /* 1A4E0 1001A4E0 8D6C0000 */  lw         $t4, 0x0($t3)
    /* 1A4E4 1001A4E4 1580FFE6 */  bnez       $t4, .L1001A480
    /* 1A4E8 1001A4E8 AFAC002C */   sw        $t4, 0x2C($sp)
  .L1001A4EC:
    /* 1A4EC 1001A4EC 10000001 */  b          .L1001A4F4
    /* 1A4F0 1001A4F0 00000000 */   nop
  .L1001A4F4:
    /* 1A4F4 1001A4F4 8FBF001C */  lw         $ra, 0x1C($sp)
    /* 1A4F8 1001A4F8 8FB00018 */  lw         $s0, 0x18($sp)
    /* 1A4FC 1001A4FC 27BD0030 */  addiu      $sp, $sp, 0x30
    /* 1A500 1001A500 03E00008 */  jr         $ra
    /* 1A504 1001A504 00000000 */   nop
endlabel func_1001A45C
