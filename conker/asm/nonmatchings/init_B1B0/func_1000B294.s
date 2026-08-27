nonmatching func_1000B294, 0x60

glabel func_1000B294
    /* B294 1000B294 3C038004 */  lui        $v1, %hi(D_800417B0)
    /* B298 1000B298 3C068004 */  lui        $a2, %hi(D_800417BC)
    /* B29C 1000B29C 24C617BC */  addiu      $a2, $a2, %lo(D_800417BC)
    /* B2A0 1000B2A0 246317B0 */  addiu      $v1, $v1, %lo(D_800417B0)
    /* B2A4 1000B2A4 8C620000 */  lw         $v0, 0x0($v1)
  .L1000B2A8:
    /* B2A8 1000B2A8 5040000E */  beql       $v0, $zero, .L1000B2E4
    /* B2AC 1000B2AC 24630004 */   addiu     $v1, $v1, 0x4
    /* B2B0 1000B2B0 8C4E0010 */  lw         $t6, 0x10($v0)
    /* B2B4 1000B2B4 548E0004 */  bnel       $a0, $t6, .L1000B2C8
    /* B2B8 1000B2B8 8C450060 */   lw        $a1, 0x60($v0)
    /* B2BC 1000B2BC AC420010 */  sw         $v0, 0x10($v0)
    /* B2C0 1000B2C0 8C620000 */  lw         $v0, 0x0($v1)
    /* B2C4 1000B2C4 8C450060 */  lw         $a1, 0x60($v0)
  .L1000B2C8:
    /* B2C8 1000B2C8 50A00006 */  beql       $a1, $zero, .L1000B2E4
    /* B2CC 1000B2CC 24630004 */   addiu     $v1, $v1, 0x4
    /* B2D0 1000B2D0 8CAF0010 */  lw         $t7, 0x10($a1)
    /* B2D4 1000B2D4 548F0003 */  bnel       $a0, $t7, .L1000B2E4
    /* B2D8 1000B2D8 24630004 */   addiu     $v1, $v1, 0x4
    /* B2DC 1000B2DC ACA50010 */  sw         $a1, 0x10($a1)
    /* B2E0 1000B2E0 24630004 */  addiu      $v1, $v1, 0x4
  .L1000B2E4:
    /* B2E4 1000B2E4 5466FFF0 */  bnel       $v1, $a2, .L1000B2A8
    /* B2E8 1000B2E8 8C620000 */   lw        $v0, 0x0($v1)
    /* B2EC 1000B2EC 03E00008 */  jr         $ra
    /* B2F0 1000B2F0 00000000 */   nop
endlabel func_1000B294
