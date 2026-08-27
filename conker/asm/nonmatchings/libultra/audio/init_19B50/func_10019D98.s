nonmatching func_10019D98, 0x140

glabel func_10019D98
    /* 19D98 10019D98 27BDFFD0 */  addiu      $sp, $sp, -0x30
    /* 19D9C 10019D9C AFBF001C */  sw         $ra, 0x1C($sp)
    /* 19DA0 10019DA0 AFA40030 */  sw         $a0, 0x30($sp)
    /* 19DA4 10019DA4 AFA50034 */  sw         $a1, 0x34($sp)
    /* 19DA8 10019DA8 F7B40010 */  sdc1       $f20, 0x10($sp)
    /* 19DAC 10019DAC 8FAE0030 */  lw         $t6, 0x30($sp)
    /* 19DB0 10019DB0 93B80037 */  lbu        $t8, 0x37($sp)
    /* 19DB4 10019DB4 8DCF0060 */  lw         $t7, 0x60($t6)
    /* 19DB8 10019DB8 0018C900 */  sll        $t9, $t8, 4
    /* 19DBC 10019DBC 0338C823 */  subu       $t9, $t9, $t8
    /* 19DC0 10019DC0 0019C880 */  sll        $t9, $t9, 2
    /* 19DC4 10019DC4 01F94021 */  addu       $t0, $t7, $t9
    /* 19DC8 10019DC8 81090015 */  lb         $t1, 0x15($t0)
    /* 19DCC 10019DCC 252AFFC0 */  addiu      $t2, $t1, -0x40
    /* 19DD0 10019DD0 A3AA0029 */  sb         $t2, 0x29($sp)
    /* 19DD4 10019DD4 8FAB0030 */  lw         $t3, 0x30($sp)
    /* 19DD8 10019DD8 93AD0037 */  lbu        $t5, 0x37($sp)
    /* 19DDC 10019DDC 8D6C0060 */  lw         $t4, 0x60($t3)
    /* 19DE0 10019DE0 000D7100 */  sll        $t6, $t5, 4
    /* 19DE4 10019DE4 01CD7023 */  subu       $t6, $t6, $t5
    /* 19DE8 10019DE8 000E7080 */  sll        $t6, $t6, 2
    /* 19DEC 10019DEC 018EC021 */  addu       $t8, $t4, $t6
    /* 19DF0 10019DF0 C7040018 */  lwc1       $f4, 0x18($t8)
    /* 19DF4 10019DF4 E7A40024 */  swc1       $f4, 0x24($sp)
    /* 19DF8 10019DF8 8FAF0030 */  lw         $t7, 0x30($sp)
    /* 19DFC 10019DFC 8DF90064 */  lw         $t9, 0x64($t7)
    /* 19E00 10019E00 1320002E */  beqz       $t9, .L10019EBC
    /* 19E04 10019E04 AFB9002C */   sw        $t9, 0x2C($sp)
  .L10019E08:
    /* 19E08 10019E08 8FA8002C */  lw         $t0, 0x2C($sp)
    /* 19E0C 10019E0C 93AA0037 */  lbu        $t2, 0x37($sp)
    /* 19E10 10019E10 91090035 */  lbu        $t1, 0x35($t0)
    /* 19E14 10019E14 152A0025 */  bne        $t1, $t2, .L10019EAC
    /* 19E18 10019E18 00000000 */   nop
    /* 19E1C 10019E1C 8FAB0030 */  lw         $t3, 0x30($sp)
    /* 19E20 10019E20 93AC0037 */  lbu        $t4, 0x37($sp)
    /* 19E24 10019E24 8D6D0060 */  lw         $t5, 0x60($t3)
    /* 19E28 10019E28 000C7100 */  sll        $t6, $t4, 4
    /* 19E2C 10019E2C 01CC7023 */  subu       $t6, $t6, $t4
    /* 19E30 10019E30 000E7080 */  sll        $t6, $t6, 2
    /* 19E34 10019E34 01AEC021 */  addu       $t8, $t5, $t6
    /* 19E38 10019E38 930F0014 */  lbu        $t7, 0x14($t8)
    /* 19E3C 10019E3C A7AF002A */  sh         $t7, 0x2A($sp)
    /* 19E40 10019E40 8FA4002C */  lw         $a0, 0x2C($sp)
    /* 19E44 10019E44 87A5002A */  lh         $a1, 0x2A($sp)
    /* 19E48 10019E48 0C0072D0 */  jal        n_alSynSetPan
    /* 19E4C 10019E4C 24840004 */   addiu     $a0, $a0, 0x4
    /* 19E50 10019E50 87B9002A */  lh         $t9, 0x2A($sp)
    /* 19E54 10019E54 13200015 */  beqz       $t9, .L10019EAC
    /* 19E58 10019E58 00000000 */   nop
    /* 19E5C 10019E5C 8FA8002C */  lw         $t0, 0x2C($sp)
    /* 19E60 10019E60 83AE0029 */  lb         $t6, 0x29($sp)
    /* 19E64 10019E64 8D0A0024 */  lw         $t2, 0x24($t0)
    /* 19E68 10019E68 91090036 */  lbu        $t1, 0x36($t0)
    /* 19E6C 10019E6C 8D4B0004 */  lw         $t3, 0x4($t2)
    /* 19E70 10019E70 916C0004 */  lbu        $t4, 0x4($t3)
    /* 19E74 10019E74 012C6823 */  subu       $t5, $t1, $t4
    /* 19E78 10019E78 0C0073A9 */  jal        func_1001CEA4
    /* 19E7C 10019E7C 01AE2021 */   addu      $a0, $t5, $t6
    /* 19E80 10019E80 3C0143DC */  lui        $at, (0x43DC0000 >> 16)
    /* 19E84 10019E84 44813000 */  mtc1       $at, $f6
    /* 19E88 10019E88 46000506 */  mov.s      $f20, $f0
    /* 19E8C 10019E8C C7AA0024 */  lwc1       $f10, 0x24($sp)
    /* 19E90 10019E90 4606A202 */  mul.s      $f8, $f20, $f6
    /* 19E94 10019E94 8FA4002C */  lw         $a0, 0x2C($sp)
    /* 19E98 10019E98 24840004 */  addiu      $a0, $a0, 0x4
    /* 19E9C 10019E9C 460A4402 */  mul.s      $f16, $f8, $f10
    /* 19EA0 10019EA0 44058000 */  mfc1       $a1, $f16
    /* 19EA4 10019EA4 0C0072A4 */  jal        func_1001CA90
    /* 19EA8 10019EA8 00000000 */   nop
  .L10019EAC:
    /* 19EAC 10019EAC 8FB8002C */  lw         $t8, 0x2C($sp)
    /* 19EB0 10019EB0 8F0F0000 */  lw         $t7, 0x0($t8)
    /* 19EB4 10019EB4 15E0FFD4 */  bnez       $t7, .L10019E08
    /* 19EB8 10019EB8 AFAF002C */   sw        $t7, 0x2C($sp)
  .L10019EBC:
    /* 19EBC 10019EBC 10000001 */  b          .L10019EC4
    /* 19EC0 10019EC0 00000000 */   nop
  .L10019EC4:
    /* 19EC4 10019EC4 8FBF001C */  lw         $ra, 0x1C($sp)
    /* 19EC8 10019EC8 D7B40010 */  ldc1       $f20, 0x10($sp)
    /* 19ECC 10019ECC 27BD0030 */  addiu      $sp, $sp, 0x30
    /* 19ED0 10019ED0 03E00008 */  jr         $ra
    /* 19ED4 10019ED4 00000000 */   nop
endlabel func_10019D98
