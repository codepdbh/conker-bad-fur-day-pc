nonmatching func_1500AC14, 0x170

glabel func_1500AC14
    /* 380C4 1500AC14 27BDFF98 */  addiu      $sp, $sp, -0x68
    /* 380C8 1500AC18 AFBF003C */  sw         $ra, 0x3C($sp)
    /* 380CC 1500AC1C AFBE0038 */  sw         $fp, 0x38($sp)
    /* 380D0 1500AC20 AFB70034 */  sw         $s7, 0x34($sp)
    /* 380D4 1500AC24 AFB60030 */  sw         $s6, 0x30($sp)
    /* 380D8 1500AC28 AFB5002C */  sw         $s5, 0x2C($sp)
    /* 380DC 1500AC2C AFB40028 */  sw         $s4, 0x28($sp)
    /* 380E0 1500AC30 AFB30024 */  sw         $s3, 0x24($sp)
    /* 380E4 1500AC34 AFB20020 */  sw         $s2, 0x20($sp)
    /* 380E8 1500AC38 AFB1001C */  sw         $s1, 0x1C($sp)
    /* 380EC 1500AC3C AFB00018 */  sw         $s0, 0x18($sp)
    /* 380F0 1500AC40 3C10800E */  lui        $s0, %hi(D_800DDA90)
    /* 380F4 1500AC44 3C15800C */  lui        $s5, %hi(D_800BE4A0)
    /* 380F8 1500AC48 3C17800C */  lui        $s7, %hi(D_800BE478)
    /* 380FC 1500AC4C 26F7E478 */  addiu      $s7, $s7, %lo(D_800BE478)
    /* 38100 1500AC50 26B5E4A0 */  addiu      $s5, $s5, %lo(D_800BE4A0)
    /* 38104 1500AC54 2610DA90 */  addiu      $s0, $s0, %lo(D_800DDA90)
    /* 38108 1500AC58 00009025 */  or         $s2, $zero, $zero
    /* 3810C 1500AC5C 0000A025 */  or         $s4, $zero, $zero
    /* 38110 1500AC60 241E003B */  addiu      $fp, $zero, 0x3B
    /* 38114 1500AC64 241600FF */  addiu      $s6, $zero, 0xFF
  .L1500AC68:
    /* 38118 1500AC68 96A20000 */  lhu        $v0, 0x0($s5)
    /* 3811C 1500AC6C AE000000 */  sw         $zero, 0x0($s0)
    /* 38120 1500AC70 AE000008 */  sw         $zero, 0x8($s0)
    /* 38124 1500AC74 AE000004 */  sw         $zero, 0x4($s0)
    /* 38128 1500AC78 A200000C */  sb         $zero, 0xC($s0)
    /* 3812C 1500AC7C 1056002F */  beq        $v0, $s6, .L1500AD3C
    /* 38130 1500AC80 00408825 */   or        $s1, $v0, $zero
    /* 38134 1500AC84 00127040 */  sll        $t6, $s2, 1
    /* 38138 1500AC88 02EE7821 */  addu       $t7, $s7, $t6
    /* 3813C 1500AC8C 95F80000 */  lhu        $t8, 0x0($t7)
    /* 38140 1500AC90 27A4005C */  addiu      $a0, $sp, 0x5C
    /* 38144 1500AC94 24050002 */  addiu      $a1, $zero, 0x2
    /* 38148 1500AC98 17000002 */  bnez       $t8, .L1500ACA4
    /* 3814C 1500AC9C 00003025 */   or        $a2, $zero, $zero
    /* 38150 1500ACA0 17C20026 */  bne        $fp, $v0, .L1500AD3C
  .L1500ACA4:
    /* 38154 1500ACA4 3C19800E */   lui       $t9, %hi(D_800DDB80)
    /* 38158 1500ACA8 2739DB80 */  addiu      $t9, $t9, %lo(D_800DDB80)
    /* 3815C 1500ACAC 02999821 */  addu       $s3, $s4, $t9
    /* 38160 1500ACB0 0D40AC08 */  jal        func_1502B020
    /* 38164 1500ACB4 02203825 */   or        $a3, $s1, $zero
    /* 38168 1500ACB8 8FA5005C */  lw         $a1, 0x5C($sp)
    /* 3816C 1500ACBC 00115080 */  sll        $t2, $s1, 2
    /* 38170 1500ACC0 01515021 */  addu       $t2, $t2, $s1
    /* 38174 1500ACC4 3C0B8009 */  lui        $t3, %hi(D_80095CE0)
    /* 38178 1500ACC8 2401FFF0 */  addiu      $at, $zero, -0x10
    /* 3817C 1500ACCC 256B5CE0 */  addiu      $t3, $t3, %lo(D_80095CE0)
    /* 38180 1500ACD0 000A5040 */  sll        $t2, $t2, 1
    /* 38184 1500ACD4 24A8000F */  addiu      $t0, $a1, 0xF
    /* 38188 1500ACD8 01014824 */  and        $t1, $t0, $at
    /* 3818C 1500ACDC 014B2021 */  addu       $a0, $t2, $t3
    /* 38190 1500ACE0 AE020000 */  sw         $v0, 0x0($s0)
    /* 38194 1500ACE4 AE090004 */  sw         $t1, 0x4($s0)
    /* 38198 1500ACE8 10A00003 */  beqz       $a1, .L1500ACF8
    /* 3819C 1500ACEC 94830002 */   lhu       $v1, 0x2($a0)
    /* 381A0 1500ACF0 54600004 */  bnel       $v1, $zero, .L1500AD04
    /* 381A4 1500ACF4 90820008 */   lbu       $v0, 0x8($a0)
  .L1500ACF8:
    /* 381A8 1500ACF8 00001825 */  or         $v1, $zero, $zero
    /* 381AC 1500ACFC AE000000 */  sw         $zero, 0x0($s0)
    /* 381B0 1500AD00 90820008 */  lbu        $v0, 0x8($a0)
  .L1500AD04:
    /* 381B4 1500AD04 24010005 */  addiu      $at, $zero, 0x5
    /* 381B8 1500AD08 0062001B */  divu       $zero, $v1, $v0
    /* 381BC 1500AD0C 00007012 */  mflo       $t6
    /* 381C0 1500AD10 000E7980 */  sll        $t7, $t6, 6
    /* 381C4 1500AD14 00026140 */  sll        $t4, $v0, 5
    /* 381C8 1500AD18 01E1001B */  divu       $zero, $t7, $at
    /* 381CC 1500AD1C 0000C012 */  mflo       $t8
    /* 381D0 1500AD20 258DFFFF */  addiu      $t5, $t4, -0x1
    /* 381D4 1500AD24 2719FFFF */  addiu      $t9, $t8, -0x1
    /* 381D8 1500AD28 A66D0000 */  sh         $t5, 0x0($s3)
    /* 381DC 1500AD2C A6790002 */  sh         $t9, 0x2($s3)
    /* 381E0 1500AD30 14400002 */  bnez       $v0, .L1500AD3C
    /* 381E4 1500AD34 00000000 */   nop
    /* 381E8 1500AD38 0007000D */  break      7
  .L1500AD3C:
    /* 381EC 1500AD3C 26520001 */  addiu      $s2, $s2, 0x1
    /* 381F0 1500AD40 2401000F */  addiu      $at, $zero, 0xF
    /* 381F4 1500AD44 26100010 */  addiu      $s0, $s0, 0x10
    /* 381F8 1500AD48 26940004 */  addiu      $s4, $s4, 0x4
    /* 381FC 1500AD4C 1641FFC6 */  bne        $s2, $at, .L1500AC68
    /* 38200 1500AD50 26B50004 */   addiu     $s5, $s5, 0x4
    /* 38204 1500AD54 8FBF003C */  lw         $ra, 0x3C($sp)
    /* 38208 1500AD58 8FB00018 */  lw         $s0, 0x18($sp)
    /* 3820C 1500AD5C 8FB1001C */  lw         $s1, 0x1C($sp)
    /* 38210 1500AD60 8FB20020 */  lw         $s2, 0x20($sp)
    /* 38214 1500AD64 8FB30024 */  lw         $s3, 0x24($sp)
    /* 38218 1500AD68 8FB40028 */  lw         $s4, 0x28($sp)
    /* 3821C 1500AD6C 8FB5002C */  lw         $s5, 0x2C($sp)
    /* 38220 1500AD70 8FB60030 */  lw         $s6, 0x30($sp)
    /* 38224 1500AD74 8FB70034 */  lw         $s7, 0x34($sp)
    /* 38228 1500AD78 8FBE0038 */  lw         $fp, 0x38($sp)
    /* 3822C 1500AD7C 03E00008 */  jr         $ra
    /* 38230 1500AD80 27BD0068 */   addiu     $sp, $sp, 0x68
endlabel func_1500AC14
