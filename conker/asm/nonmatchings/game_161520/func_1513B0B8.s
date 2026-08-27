nonmatching func_1513B0B8, 0x40

glabel func_1513B0B8
    /* 168568 1513B0B8 AFA60008 */  sw         $a2, 0x8($sp)
    /* 16856C 1513B0BC 30CE00FF */  andi       $t6, $a2, 0xFF
    /* 168570 1513B0C0 01C03025 */  or         $a2, $t6, $zero
    /* 168574 1513B0C4 AFA50004 */  sw         $a1, 0x4($sp)
    /* 168578 1513B0C8 24010045 */  addiu      $at, $zero, 0x45
    /* 16857C 1513B0CC 14C10008 */  bne        $a2, $at, .L1513B0F0
    /* 168580 1513B0D0 24820170 */   addiu     $v0, $a0, 0x170
    /* 168584 1513B0D4 8C4F0000 */  lw         $t7, 0x0($v0)
    /* 168588 1513B0D8 25F8FFFF */  addiu      $t8, $t7, -0x1
    /* 16858C 1513B0DC 07010004 */  bgez       $t8, .L1513B0F0
    /* 168590 1513B0E0 AC580000 */   sw        $t8, 0x0($v0)
    /* 168594 1513B0E4 8C880060 */  lw         $t0, 0x60($a0)
    /* 168598 1513B0E8 35090080 */  ori        $t1, $t0, 0x80
    /* 16859C 1513B0EC AC890060 */  sw         $t1, 0x60($a0)
  .L1513B0F0:
    /* 1685A0 1513B0F0 03E00008 */  jr         $ra
    /* 1685A4 1513B0F4 00000000 */   nop
endlabel func_1513B0B8
