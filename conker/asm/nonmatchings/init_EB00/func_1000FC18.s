nonmatching func_1000FC18, 0x120

glabel func_1000FC18
    /* FC18 1000FC18 27BDFFC8 */  addiu      $sp, $sp, -0x38
    /* FC1C 1000FC1C AFB5002C */  sw         $s5, 0x2C($sp)
    /* FC20 1000FC20 AFB40028 */  sw         $s4, 0x28($sp)
    /* FC24 1000FC24 AFB30024 */  sw         $s3, 0x24($sp)
    /* FC28 1000FC28 00059C00 */  sll        $s3, $a1, 16
    /* FC2C 1000FC2C 0006A400 */  sll        $s4, $a2, 16
    /* FC30 1000FC30 0007AC00 */  sll        $s5, $a3, 16
    /* FC34 1000FC34 0015CC03 */  sra        $t9, $s5, 16
    /* FC38 1000FC38 0014C403 */  sra        $t8, $s4, 16
    /* FC3C 1000FC3C 00137C03 */  sra        $t7, $s3, 16
    /* FC40 1000FC40 AFA40038 */  sw         $a0, 0x38($sp)
    /* FC44 1000FC44 308EFFFF */  andi       $t6, $a0, 0xFFFF
    /* FC48 1000FC48 01C02025 */  or         $a0, $t6, $zero
    /* FC4C 1000FC4C 01E09825 */  or         $s3, $t7, $zero
    /* FC50 1000FC50 0300A025 */  or         $s4, $t8, $zero
    /* FC54 1000FC54 0320A825 */  or         $s5, $t9, $zero
    /* FC58 1000FC58 AFBF0034 */  sw         $ra, 0x34($sp)
    /* FC5C 1000FC5C AFB60030 */  sw         $s6, 0x30($sp)
    /* FC60 1000FC60 AFB20020 */  sw         $s2, 0x20($sp)
    /* FC64 1000FC64 AFB1001C */  sw         $s1, 0x1C($sp)
    /* FC68 1000FC68 AFB00018 */  sw         $s0, 0x18($sp)
    /* FC6C 1000FC6C AFA5003C */  sw         $a1, 0x3C($sp)
    /* FC70 1000FC70 AFA60040 */  sw         $a2, 0x40($sp)
    /* FC74 1000FC74 AFA70044 */  sw         $a3, 0x44($sp)
    /* FC78 1000FC78 3C028004 */  lui        $v0, %hi(D_80042760)
    /* FC7C 1000FC7C 8C422760 */  lw         $v0, %lo(D_80042760)($v0)
    /* FC80 1000FC80 00008825 */  or         $s1, $zero, $zero
    /* FC84 1000FC84 00809025 */  or         $s2, $a0, $zero
    /* FC88 1000FC88 18400021 */  blez       $v0, .L1000FD10
    /* FC8C 1000FC8C 3C108004 */   lui       $s0, %hi(D_80041FE0)
    /* FC90 1000FC90 26101FE0 */  addiu      $s0, $s0, %lo(D_80041FE0)
    /* FC94 1000FC94 97B6004A */  lhu        $s6, 0x4A($sp)
  .L1000FC98:
    /* FC98 1000FC98 96080000 */  lhu        $t0, 0x0($s0)
    /* FC9C 1000FC9C 56480019 */  bnel       $s2, $t0, .L1000FD04
    /* FCA0 1000FCA0 26310001 */   addiu     $s1, $s1, 0x1
    /* FCA4 1000FCA4 86090002 */  lh         $t1, 0x2($s0)
    /* FCA8 1000FCA8 56690016 */  bnel       $s3, $t1, .L1000FD04
    /* FCAC 1000FCAC 26310001 */   addiu     $s1, $s1, 0x1
    /* FCB0 1000FCB0 860A0004 */  lh         $t2, 0x4($s0)
    /* FCB4 1000FCB4 568A0013 */  bnel       $s4, $t2, .L1000FD04
    /* FCB8 1000FCB8 26310001 */   addiu     $s1, $s1, 0x1
    /* FCBC 1000FCBC 860B0006 */  lh         $t3, 0x6($s0)
    /* FCC0 1000FCC0 56AB0010 */  bnel       $s5, $t3, .L1000FD04
    /* FCC4 1000FCC4 26310001 */   addiu     $s1, $s1, 0x1
    /* FCC8 1000FCC8 960C0008 */  lhu        $t4, 0x8($s0)
    /* FCCC 1000FCCC 318D7FFF */  andi       $t5, $t4, 0x7FFF
    /* FCD0 1000FCD0 56CD000C */  bnel       $s6, $t5, .L1000FD04
    /* FCD4 1000FCD4 26310001 */   addiu     $s1, $s1, 0x1
    /* FCD8 1000FCD8 96040024 */  lhu        $a0, 0x24($s0)
    /* FCDC 1000FCDC 50800006 */  beql       $a0, $zero, .L1000FCF8
    /* FCE0 1000FCE0 8E0E0010 */   lw        $t6, 0x10($s0)
    /* FCE4 1000FCE4 0C004472 */  jal        func_100111C8
    /* FCE8 1000FCE8 00000000 */   nop
    /* FCEC 1000FCEC 3C028004 */  lui        $v0, %hi(D_80042760)
    /* FCF0 1000FCF0 8C422760 */  lw         $v0, %lo(D_80042760)($v0)
    /* FCF4 1000FCF4 8E0E0010 */  lw         $t6, 0x10($s0)
  .L1000FCF8:
    /* FCF8 1000FCF8 35CF0080 */  ori        $t7, $t6, 0x80
    /* FCFC 1000FCFC AE0F0010 */  sw         $t7, 0x10($s0)
    /* FD00 1000FD00 26310001 */  addiu      $s1, $s1, 0x1
  .L1000FD04:
    /* FD04 1000FD04 0222082A */  slt        $at, $s1, $v0
    /* FD08 1000FD08 1420FFE3 */  bnez       $at, .L1000FC98
    /* FD0C 1000FD0C 26100030 */   addiu     $s0, $s0, 0x30
  .L1000FD10:
    /* FD10 1000FD10 8FBF0034 */  lw         $ra, 0x34($sp)
    /* FD14 1000FD14 8FB00018 */  lw         $s0, 0x18($sp)
    /* FD18 1000FD18 8FB1001C */  lw         $s1, 0x1C($sp)
    /* FD1C 1000FD1C 8FB20020 */  lw         $s2, 0x20($sp)
    /* FD20 1000FD20 8FB30024 */  lw         $s3, 0x24($sp)
    /* FD24 1000FD24 8FB40028 */  lw         $s4, 0x28($sp)
    /* FD28 1000FD28 8FB5002C */  lw         $s5, 0x2C($sp)
    /* FD2C 1000FD2C 8FB60030 */  lw         $s6, 0x30($sp)
    /* FD30 1000FD30 03E00008 */  jr         $ra
    /* FD34 1000FD34 27BD0038 */   addiu     $sp, $sp, 0x38
endlabel func_1000FC18
