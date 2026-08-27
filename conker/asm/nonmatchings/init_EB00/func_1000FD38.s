nonmatching func_1000FD38, 0xBC

glabel func_1000FD38
    /* FD38 1000FD38 27BDFFD0 */  addiu      $sp, $sp, -0x30
    /* FD3C 1000FD3C AFB40028 */  sw         $s4, 0x28($sp)
    /* FD40 1000FD40 AFB30024 */  sw         $s3, 0x24($sp)
    /* FD44 1000FD44 AFB20020 */  sw         $s2, 0x20($sp)
    /* FD48 1000FD48 00809025 */  or         $s2, $a0, $zero
    /* FD4C 1000FD4C 00A09825 */  or         $s3, $a1, $zero
    /* FD50 1000FD50 00C0A025 */  or         $s4, $a2, $zero
    /* FD54 1000FD54 AFBF002C */  sw         $ra, 0x2C($sp)
    /* FD58 1000FD58 AFB1001C */  sw         $s1, 0x1C($sp)
    /* FD5C 1000FD5C AFB00018 */  sw         $s0, 0x18($sp)
    /* FD60 1000FD60 3C028004 */  lui        $v0, %hi(D_80042760)
    /* FD64 1000FD64 8C422760 */  lw         $v0, %lo(D_80042760)($v0)
    /* FD68 1000FD68 3C108004 */  lui        $s0, %hi(D_80041FE0)
    /* FD6C 1000FD6C 26101FE0 */  addiu      $s0, $s0, %lo(D_80041FE0)
    /* FD70 1000FD70 18400018 */  blez       $v0, .L1000FDD4
    /* FD74 1000FD74 00008825 */   or        $s1, $zero, $zero
  .L1000FD78:
    /* FD78 1000FD78 8E0E0014 */  lw         $t6, 0x14($s0)
    /* FD7C 1000FD7C 564E0012 */  bnel       $s2, $t6, .L1000FDC8
    /* FD80 1000FD80 26310001 */   addiu     $s1, $s1, 0x1
    /* FD84 1000FD84 8E0F0018 */  lw         $t7, 0x18($s0)
    /* FD88 1000FD88 566F000F */  bnel       $s3, $t7, .L1000FDC8
    /* FD8C 1000FD8C 26310001 */   addiu     $s1, $s1, 0x1
    /* FD90 1000FD90 8E18001C */  lw         $t8, 0x1C($s0)
    /* FD94 1000FD94 5698000C */  bnel       $s4, $t8, .L1000FDC8
    /* FD98 1000FD98 26310001 */   addiu     $s1, $s1, 0x1
    /* FD9C 1000FD9C 96040024 */  lhu        $a0, 0x24($s0)
    /* FDA0 1000FDA0 50800006 */  beql       $a0, $zero, .L1000FDBC
    /* FDA4 1000FDA4 8E190010 */   lw        $t9, 0x10($s0)
    /* FDA8 1000FDA8 0C004472 */  jal        func_100111C8
    /* FDAC 1000FDAC 00000000 */   nop
    /* FDB0 1000FDB0 3C028004 */  lui        $v0, %hi(D_80042760)
    /* FDB4 1000FDB4 8C422760 */  lw         $v0, %lo(D_80042760)($v0)
    /* FDB8 1000FDB8 8E190010 */  lw         $t9, 0x10($s0)
  .L1000FDBC:
    /* FDBC 1000FDBC 37280080 */  ori        $t0, $t9, 0x80
    /* FDC0 1000FDC0 AE080010 */  sw         $t0, 0x10($s0)
    /* FDC4 1000FDC4 26310001 */  addiu      $s1, $s1, 0x1
  .L1000FDC8:
    /* FDC8 1000FDC8 0222082A */  slt        $at, $s1, $v0
    /* FDCC 1000FDCC 1420FFEA */  bnez       $at, .L1000FD78
    /* FDD0 1000FDD0 26100030 */   addiu     $s0, $s0, 0x30
  .L1000FDD4:
    /* FDD4 1000FDD4 8FBF002C */  lw         $ra, 0x2C($sp)
    /* FDD8 1000FDD8 8FB00018 */  lw         $s0, 0x18($sp)
    /* FDDC 1000FDDC 8FB1001C */  lw         $s1, 0x1C($sp)
    /* FDE0 1000FDE0 8FB20020 */  lw         $s2, 0x20($sp)
    /* FDE4 1000FDE4 8FB30024 */  lw         $s3, 0x24($sp)
    /* FDE8 1000FDE8 8FB40028 */  lw         $s4, 0x28($sp)
    /* FDEC 1000FDEC 03E00008 */  jr         $ra
    /* FDF0 1000FDF0 27BD0030 */   addiu     $sp, $sp, 0x30
endlabel func_1000FD38
