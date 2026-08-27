nonmatching func_1000FA64, 0x1B4

glabel func_1000FA64
    /* FA64 1000FA64 27BDFFD8 */  addiu      $sp, $sp, -0x28
    /* FA68 1000FA68 AFBF001C */  sw         $ra, 0x1C($sp)
    /* FA6C 1000FA6C AFB00018 */  sw         $s0, 0x18($sp)
    /* FA70 1000FA70 AFA40028 */  sw         $a0, 0x28($sp)
    /* FA74 1000FA74 AFA5002C */  sw         $a1, 0x2C($sp)
    /* FA78 1000FA78 AFA60030 */  sw         $a2, 0x30($sp)
    /* FA7C 1000FA7C AFA70034 */  sw         $a3, 0x34($sp)
    /* FA80 1000FA80 3C028004 */  lui        $v0, %hi(D_80042760)
    /* FA84 1000FA84 8C422760 */  lw         $v0, %lo(D_80042760)($v0)
    /* FA88 1000FA88 28410020 */  slti       $at, $v0, 0x20
    /* FA8C 1000FA8C 10200005 */  beqz       $at, .L1000FAA4
    /* FA90 1000FA90 00403025 */   or        $a2, $v0, $zero
    /* FA94 1000FA94 244E0001 */  addiu      $t6, $v0, 0x1
    /* FA98 1000FA98 3C018004 */  lui        $at, %hi(D_80042760)
    /* FA9C 1000FA9C 10000003 */  b          .L1000FAAC
    /* FAA0 1000FAA0 AC2E2760 */   sw        $t6, %lo(D_80042760)($at)
  .L1000FAA4:
    /* FAA4 1000FAA4 10000057 */  b          .L1000FC04
    /* FAA8 1000FAA8 00001025 */   or        $v0, $zero, $zero
  .L1000FAAC:
    /* FAAC 1000FAAC 8FAF0044 */  lw         $t7, 0x44($sp)
    /* FAB0 1000FAB0 00064880 */  sll        $t1, $a2, 2
    /* FAB4 1000FAB4 8FA20050 */  lw         $v0, 0x50($sp)
    /* FAB8 1000FAB8 11E0000B */  beqz       $t7, .L1000FAE8
    /* FABC 1000FABC 01264823 */   subu      $t1, $t1, $a2
    /* FAC0 1000FAC0 8FA20050 */  lw         $v0, 0x50($sp)
    /* FAC4 1000FAC4 0006C080 */  sll        $t8, $a2, 2
    /* FAC8 1000FAC8 0306C023 */  subu       $t8, $t8, $a2
    /* FACC 1000FACC 3C198004 */  lui        $t9, %hi(D_80041FE0)
    /* FAD0 1000FAD0 27391FE0 */  addiu      $t9, $t9, %lo(D_80041FE0)
    /* FAD4 1000FAD4 0018C100 */  sll        $t8, $t8, 4
    /* FAD8 1000FAD8 03198021 */  addu       $s0, $t8, $t9
    /* FADC 1000FADC 34480012 */  ori        $t0, $v0, 0x12
    /* FAE0 1000FAE0 10000008 */  b          .L1000FB04
    /* FAE4 1000FAE4 AE080010 */   sw        $t0, 0x10($s0)
  .L1000FAE8:
    /* FAE8 1000FAE8 3C0A8004 */  lui        $t2, %hi(D_80041FE0)
    /* FAEC 1000FAEC 254A1FE0 */  addiu      $t2, $t2, %lo(D_80041FE0)
    /* FAF0 1000FAF0 00094900 */  sll        $t1, $t1, 4
    /* FAF4 1000FAF4 304B0108 */  andi       $t3, $v0, 0x108
    /* FAF8 1000FAF8 356C0002 */  ori        $t4, $t3, 0x2
    /* FAFC 1000FAFC 012A8021 */  addu       $s0, $t1, $t2
    /* FB00 1000FB00 AE0C0010 */  sw         $t4, 0x10($s0)
  .L1000FB04:
    /* FB04 1000FB04 304D0040 */  andi       $t5, $v0, 0x40
    /* FB08 1000FB08 11A0000B */  beqz       $t5, .L1000FB38
    /* FB0C 1000FB0C 93A4002F */   lbu       $a0, 0x2F($sp)
    /* FB10 1000FB10 0D420F83 */  jal        func_15083E0C
    /* FB14 1000FB14 AFA60020 */   sw        $a2, 0x20($sp)
    /* FB18 1000FB18 00027400 */  sll        $t6, $v0, 16
    /* FB1C 1000FB1C 000E7C03 */  sra        $t7, $t6, 16
    /* FB20 1000FB20 2401FFFF */  addiu      $at, $zero, -0x1
    /* FB24 1000FB24 8FA60020 */  lw         $a2, 0x20($sp)
    /* FB28 1000FB28 15E10003 */  bne        $t7, $at, .L1000FB38
    /* FB2C 1000FB2C A7A20032 */   sh        $v0, 0x32($sp)
    /* FB30 1000FB30 10000034 */  b          .L1000FC04
    /* FB34 1000FB34 00001025 */   or        $v0, $zero, $zero
  .L1000FB38:
    /* FB38 1000FB38 97B8002A */  lhu        $t8, 0x2A($sp)
    /* FB3C 1000FB3C 87B9002E */  lh         $t9, 0x2E($sp)
    /* FB40 1000FB40 87A80032 */  lh         $t0, 0x32($sp)
    /* FB44 1000FB44 87A90036 */  lh         $t1, 0x36($sp)
    /* FB48 1000FB48 97AA003E */  lhu        $t2, 0x3E($sp)
    /* FB4C 1000FB4C 87AB0042 */  lh         $t3, 0x42($sp)
    /* FB50 1000FB50 8FAC0038 */  lw         $t4, 0x38($sp)
    /* FB54 1000FB54 8FAD0044 */  lw         $t5, 0x44($sp)
    /* FB58 1000FB58 8FAE0048 */  lw         $t6, 0x48($sp)
    /* FB5C 1000FB5C 8FAF004C */  lw         $t7, 0x4C($sp)
    /* FB60 1000FB60 A6000024 */  sh         $zero, 0x24($s0)
    /* FB64 1000FB64 A2000023 */  sb         $zero, 0x23($s0)
    /* FB68 1000FB68 A2000022 */  sb         $zero, 0x22($s0)
    /* FB6C 1000FB6C 8FA40054 */  lw         $a0, 0x54($sp)
    /* FB70 1000FB70 AFA60020 */  sw         $a2, 0x20($sp)
    /* FB74 1000FB74 A6180000 */  sh         $t8, 0x0($s0)
    /* FB78 1000FB78 A6190002 */  sh         $t9, 0x2($s0)
    /* FB7C 1000FB7C A6080004 */  sh         $t0, 0x4($s0)
    /* FB80 1000FB80 A6090006 */  sh         $t1, 0x6($s0)
    /* FB84 1000FB84 A60A0008 */  sh         $t2, 0x8($s0)
    /* FB88 1000FB88 A60B000A */  sh         $t3, 0xA($s0)
    /* FB8C 1000FB8C AE0C000C */  sw         $t4, 0xC($s0)
    /* FB90 1000FB90 AE0D0014 */  sw         $t5, 0x14($s0)
    /* FB94 1000FB94 AE0E0018 */  sw         $t6, 0x18($s0)
    /* FB98 1000FB98 0C0066AC */  jal        alCents2Ratio
    /* FB9C 1000FB9C AE0F001C */   sw        $t7, 0x1C($s0)
    /* FBA0 1000FBA0 3C058004 */  lui        $a1, %hi(D_80042760)
    /* FBA4 1000FBA4 24A52760 */  addiu      $a1, $a1, %lo(D_80042760)
    /* FBA8 1000FBA8 8FA60020 */  lw         $a2, 0x20($sp)
    /* FBAC 1000FBAC 8FB80054 */  lw         $t8, 0x54($sp)
    /* FBB0 1000FBB0 8CB90000 */  lw         $t9, 0x0($a1)
    /* FBB4 1000FBB4 3C048004 */  lui        $a0, %hi(D_80041FE0)
    /* FBB8 1000FBB8 E600002C */  swc1       $f0, 0x2C($s0)
    /* FBBC 1000FBBC A6000026 */  sh         $zero, 0x26($s0)
    /* FBC0 1000FBC0 A6000028 */  sh         $zero, 0x28($s0)
    /* FBC4 1000FBC4 24841FE0 */  addiu      $a0, $a0, %lo(D_80041FE0)
    /* FBC8 1000FBC8 24C70001 */  addiu      $a3, $a2, 0x1
    /* FBCC 1000FBCC A6180020 */  sh         $t8, 0x20($s0)
    /* FBD0 1000FBD0 0C004589 */  jal        func_10011624
    /* FBD4 1000FBD4 AFB90024 */   sw        $t9, 0x24($sp)
    /* FBD8 1000FBD8 3C098004 */  lui        $t1, %hi(D_80042760)
    /* FBDC 1000FBDC 8D292760 */  lw         $t1, %lo(D_80042760)($t1)
    /* FBE0 1000FBE0 8FA80024 */  lw         $t0, 0x24($sp)
    /* FBE4 1000FBE4 55090007 */  bnel       $t0, $t1, .L1000FC04
    /* FBE8 1000FBE8 00001025 */   or        $v0, $zero, $zero
    /* FBEC 1000FBEC 8E0A0010 */  lw         $t2, 0x10($s0)
    /* FBF0 1000FBF0 96020024 */  lhu        $v0, 0x24($s0)
    /* FBF4 1000FBF4 354B1000 */  ori        $t3, $t2, 0x1000
    /* FBF8 1000FBF8 10000002 */  b          .L1000FC04
    /* FBFC 1000FBFC AE0B0010 */   sw        $t3, 0x10($s0)
    /* FC00 1000FC00 00001025 */  or         $v0, $zero, $zero
  .L1000FC04:
    /* FC04 1000FC04 8FBF001C */  lw         $ra, 0x1C($sp)
    /* FC08 1000FC08 8FB00018 */  lw         $s0, 0x18($sp)
    /* FC0C 1000FC0C 27BD0028 */  addiu      $sp, $sp, 0x28
    /* FC10 1000FC10 03E00008 */  jr         $ra
    /* FC14 1000FC14 00000000 */   nop
endlabel func_1000FA64
