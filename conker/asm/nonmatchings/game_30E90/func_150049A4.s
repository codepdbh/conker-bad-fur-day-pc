nonmatching func_150049A4, 0xA8

glabel func_150049A4
    /* 31E54 150049A4 27BDFFF8 */  addiu      $sp, $sp, -0x8
    /* 31E58 150049A8 AFB00004 */  sw         $s0, 0x4($sp)
    /* 31E5C 150049AC 00C08025 */  or         $s0, $a2, $zero
    /* 31E60 150049B0 00A03825 */  or         $a3, $a1, $zero
    /* 31E64 150049B4 2408FFDF */  addiu      $t0, $zero, -0x21
    /* 31E68 150049B8 808E0000 */  lb         $t6, 0x0($a0)
    /* 31E6C 150049BC 00001025 */  or         $v0, $zero, $zero
    /* 31E70 150049C0 00802825 */  or         $a1, $a0, $zero
    /* 31E74 150049C4 110E001E */  beq        $t0, $t6, .L15004A40
    /* 31E78 150049C8 240C000E */   addiu     $t4, $zero, 0xE
    /* 31E7C 150049CC 80860000 */  lb         $a2, 0x0($a0)
    /* 31E80 150049D0 240B00DE */  addiu      $t3, $zero, 0xDE
    /* 31E84 150049D4 240A0001 */  addiu      $t2, $zero, 0x1
    /* 31E88 150049D8 2409FFDC */  addiu      $t1, $zero, -0x24
  .L150049DC:
    /* 31E8C 150049DC 10C9000D */  beq        $a2, $t1, .L15004A14
    /* 31E90 150049E0 24420001 */   addiu     $v0, $v0, 0x1
    /* 31E94 150049E4 50CA0008 */  beql       $a2, $t2, .L15004A08
    /* 31E98 150049E8 8CB90004 */   lw        $t9, 0x4($a1)
    /* 31E9C 150049EC 54CB0010 */  bnel       $a2, $t3, .L15004A30
    /* 31EA0 150049F0 0002C8C0 */   sll       $t9, $v0, 3
    /* 31EA4 150049F4 8CAF0004 */  lw         $t7, 0x4($a1)
    /* 31EA8 150049F8 01E7C021 */  addu       $t8, $t7, $a3
    /* 31EAC 150049FC 1000000B */  b          .L15004A2C
    /* 31EB0 15004A00 ACB80004 */   sw        $t8, 0x4($a1)
    /* 31EB4 15004A04 8CB90004 */  lw         $t9, 0x4($a1)
  .L15004A08:
    /* 31EB8 15004A08 03276821 */  addu       $t5, $t9, $a3
    /* 31EBC 15004A0C 10000007 */  b          .L15004A2C
    /* 31EC0 15004A10 ACAD0004 */   sw        $t5, 0x4($a1)
  .L15004A14:
    /* 31EC4 15004A14 90AE0003 */  lbu        $t6, 0x3($a1)
    /* 31EC8 15004A18 558E0005 */  bnel       $t4, $t6, .L15004A30
    /* 31ECC 15004A1C 0002C8C0 */   sll       $t9, $v0, 3
    /* 31ED0 15004A20 8CAF0004 */  lw         $t7, 0x4($a1)
    /* 31ED4 15004A24 01F0C021 */  addu       $t8, $t7, $s0
    /* 31ED8 15004A28 ACB80004 */  sw         $t8, 0x4($a1)
  .L15004A2C:
    /* 31EDC 15004A2C 0002C8C0 */  sll        $t9, $v0, 3
  .L15004A30:
    /* 31EE0 15004A30 03242821 */  addu       $a1, $t9, $a0
    /* 31EE4 15004A34 80A60000 */  lb         $a2, 0x0($a1)
    /* 31EE8 15004A38 1506FFE8 */  bne        $t0, $a2, .L150049DC
    /* 31EEC 15004A3C 00000000 */   nop
  .L15004A40:
    /* 31EF0 15004A40 8FB00004 */  lw         $s0, 0x4($sp)
    /* 31EF4 15004A44 03E00008 */  jr         $ra
    /* 31EF8 15004A48 27BD0008 */   addiu     $sp, $sp, 0x8
endlabel func_150049A4
