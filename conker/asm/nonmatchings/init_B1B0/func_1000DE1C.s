nonmatching func_1000DE1C, 0xA8

glabel func_1000DE1C
    /* DE1C 1000DE1C 27BDFFB8 */  addiu      $sp, $sp, -0x48
    /* DE20 1000DE20 AFB30020 */  sw         $s3, 0x20($sp)
    /* DE24 1000DE24 00A09825 */  or         $s3, $a1, $zero
    /* DE28 1000DE28 AFBF0024 */  sw         $ra, 0x24($sp)
    /* DE2C 1000DE2C AFB2001C */  sw         $s2, 0x1C($sp)
    /* DE30 1000DE30 AFB10018 */  sw         $s1, 0x18($sp)
    /* DE34 1000DE34 AFB00014 */  sw         $s0, 0x14($sp)
    /* DE38 1000DE38 00803825 */  or         $a3, $a0, $zero
    /* DE3C 1000DE3C 30EE0FFF */  andi       $t6, $a3, 0xFFF
    /* DE40 1000DE40 15C00015 */  bnez       $t6, .L1000DE98
    /* DE44 1000DE44 01C03825 */   or        $a3, $t6, $zero
    /* DE48 1000DE48 0C0037B1 */  jal        func_1000DEC4
    /* DE4C 1000DE4C 00000000 */   nop
    /* DE50 1000DE50 0C002D52 */  jal        func_1000B548
    /* DE54 1000DE54 27A40034 */   addiu     $a0, $sp, 0x34
    /* DE58 1000DE58 18400013 */  blez       $v0, .L1000DEA8
    /* DE5C 1000DE5C 27B00034 */   addiu     $s0, $sp, 0x34
    /* DE60 1000DE60 0002C080 */  sll        $t8, $v0, 2
    /* DE64 1000DE64 03108821 */  addu       $s1, $t8, $s0
    /* DE68 1000DE68 8E050000 */  lw         $a1, 0x0($s0)
  .L1000DE6C:
    /* DE6C 1000DE6C 00002025 */  or         $a0, $zero, $zero
    /* DE70 1000DE70 58A00004 */  blezl      $a1, .L1000DE84
    /* DE74 1000DE74 26100004 */   addiu     $s0, $s0, 0x4
    /* DE78 1000DE78 0C00365B */  jal        func_1000D96C
    /* DE7C 1000DE7C 02603025 */   or        $a2, $s3, $zero
    /* DE80 1000DE80 26100004 */  addiu      $s0, $s0, 0x4
  .L1000DE84:
    /* DE84 1000DE84 0211082B */  sltu       $at, $s0, $s1
    /* DE88 1000DE88 5420FFF8 */  bnel       $at, $zero, .L1000DE6C
    /* DE8C 1000DE8C 8E050000 */   lw        $a1, 0x0($s0)
    /* DE90 1000DE90 10000006 */  b          .L1000DEAC
    /* DE94 1000DE94 8FBF0024 */   lw        $ra, 0x24($sp)
  .L1000DE98:
    /* DE98 1000DE98 00002025 */  or         $a0, $zero, $zero
    /* DE9C 1000DE9C 00E02825 */  or         $a1, $a3, $zero
    /* DEA0 1000DEA0 0C00365B */  jal        func_1000D96C
    /* DEA4 1000DEA4 02603025 */   or        $a2, $s3, $zero
  .L1000DEA8:
    /* DEA8 1000DEA8 8FBF0024 */  lw         $ra, 0x24($sp)
  .L1000DEAC:
    /* DEAC 1000DEAC 8FB00014 */  lw         $s0, 0x14($sp)
    /* DEB0 1000DEB0 8FB10018 */  lw         $s1, 0x18($sp)
    /* DEB4 1000DEB4 8FB2001C */  lw         $s2, 0x1C($sp)
    /* DEB8 1000DEB8 8FB30020 */  lw         $s3, 0x20($sp)
    /* DEBC 1000DEBC 03E00008 */  jr         $ra
    /* DEC0 1000DEC0 27BD0048 */   addiu     $sp, $sp, 0x48
endlabel func_1000DE1C
