nonmatching func_1000EE70, 0xD0

glabel func_1000EE70
    /* EE70 1000EE70 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* EE74 1000EE74 AFA5001C */  sw         $a1, 0x1C($sp)
    /* EE78 1000EE78 00802825 */  or         $a1, $a0, $zero
    /* EE7C 1000EE7C AFBF0014 */  sw         $ra, 0x14($sp)
    /* EE80 1000EE80 AFA40018 */  sw         $a0, 0x18($sp)
    /* EE84 1000EE84 AFA70024 */  sw         $a3, 0x24($sp)
    /* EE88 1000EE88 8CA30018 */  lw         $v1, 0x18($a1)
    /* EE8C 1000EE8C 50600028 */  beql       $v1, $zero, .L1000EF30
    /* EE90 1000EE90 24020001 */   addiu     $v0, $zero, 0x1
    /* EE94 1000EE94 8CCE0000 */  lw         $t6, 0x0($a2)
    /* EE98 1000EE98 51C00025 */  beql       $t6, $zero, .L1000EF30
    /* EE9C 1000EE9C 24020001 */   addiu     $v0, $zero, 0x1
    /* EEA0 1000EEA0 8C790000 */  lw         $t9, 0x0($v1)
    /* EEA4 1000EEA4 8CAF001C */  lw         $t7, 0x1C($a1)
    /* EEA8 1000EEA8 1320001A */  beqz       $t9, .L1000EF14
    /* EEAC 1000EEAC 31F800FF */   andi      $t8, $t7, 0xFF
    /* EEB0 1000EEB0 9068003B */  lbu        $t0, 0x3B($v1)
    /* EEB4 1000EEB4 15180017 */  bne        $t0, $t8, .L1000EF14
    /* EEB8 1000EEB8 00000000 */   nop
    /* EEBC 1000EEBC 8C690184 */  lw         $t1, 0x184($v1)
    /* EEC0 1000EEC0 8FAD002C */  lw         $t5, 0x2C($sp)
    /* EEC4 1000EEC4 00001025 */  or         $v0, $zero, $zero
    /* EEC8 1000EEC8 000950C2 */  srl        $t2, $t1, 3
    /* EECC 1000EECC 314B0030 */  andi       $t3, $t2, 0x30
    /* EED0 1000EED0 000B6040 */  sll        $t4, $t3, 1
    /* EED4 1000EED4 ADAC0000 */  sw         $t4, 0x0($t5)
    /* EED8 1000EED8 C4640014 */  lwc1       $f4, 0x14($v1)
    /* EEDC 1000EEDC 4600218D */  trunc.w.s  $f6, $f4
    /* EEE0 1000EEE0 440F3000 */  mfc1       $t7, $f6
    /* EEE4 1000EEE4 00000000 */  nop
    /* EEE8 1000EEE8 A4AF0002 */  sh         $t7, 0x2($a1)
    /* EEEC 1000EEEC C4680018 */  lwc1       $f8, 0x18($v1)
    /* EEF0 1000EEF0 4600428D */  trunc.w.s  $f10, $f8
    /* EEF4 1000EEF4 44195000 */  mfc1       $t9, $f10
    /* EEF8 1000EEF8 00000000 */  nop
    /* EEFC 1000EEFC A4B90004 */  sh         $t9, 0x4($a1)
    /* EF00 1000EF00 C470001C */  lwc1       $f16, 0x1C($v1)
    /* EF04 1000EF04 4600848D */  trunc.w.s  $f18, $f16
    /* EF08 1000EF08 44099000 */  mfc1       $t1, $f18
    /* EF0C 1000EF0C 10000008 */  b          .L1000EF30
    /* EF10 1000EF10 A4A90006 */   sh        $t1, 0x6($a1)
  .L1000EF14:
    /* EF14 1000EF14 0C003D13 */  jal        func_1000F44C
    /* EF18 1000EF18 94A40024 */   lhu       $a0, 0x24($a1)
    /* EF1C 1000EF1C 54400004 */  bnel       $v0, $zero, .L1000EF30
    /* EF20 1000EF20 24020001 */   addiu     $v0, $zero, 0x1
    /* EF24 1000EF24 10000002 */  b          .L1000EF30
    /* EF28 1000EF28 00001025 */   or        $v0, $zero, $zero
    /* EF2C 1000EF2C 24020001 */  addiu      $v0, $zero, 0x1
  .L1000EF30:
    /* EF30 1000EF30 8FBF0014 */  lw         $ra, 0x14($sp)
    /* EF34 1000EF34 27BD0018 */  addiu      $sp, $sp, 0x18
    /* EF38 1000EF38 03E00008 */  jr         $ra
    /* EF3C 1000EF3C 00000000 */   nop
endlabel func_1000EE70
