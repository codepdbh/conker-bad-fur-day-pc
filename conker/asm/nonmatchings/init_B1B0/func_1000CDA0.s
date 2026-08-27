nonmatching func_1000CDA0, 0x10C

glabel func_1000CDA0
    /* CDA0 1000CDA0 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* CDA4 1000CDA4 AFA40020 */  sw         $a0, 0x20($sp)
    /* CDA8 1000CDA8 308E00FF */  andi       $t6, $a0, 0xFF
    /* CDAC 1000CDAC 01C02025 */  or         $a0, $t6, $zero
    /* CDB0 1000CDB0 AFBF0014 */  sw         $ra, 0x14($sp)
    /* CDB4 1000CDB4 14800003 */  bnez       $a0, .L1000CDC4
    /* CDB8 1000CDB8 00801825 */   or        $v1, $a0, $zero
    /* CDBC 1000CDBC 10000037 */  b          .L1000CE9C
    /* CDC0 1000CDC0 24020001 */   addiu     $v0, $zero, 0x1
  .L1000CDC4:
    /* CDC4 1000CDC4 10A00032 */  beqz       $a1, .L1000CE90
    /* CDC8 1000CDC8 00000000 */   nop
    /* CDCC 1000CDCC 8CA20000 */  lw         $v0, 0x0($a1)
    /* CDD0 1000CDD0 3C188004 */  lui        $t8, %hi(D_800417B0)
    /* CDD4 1000CDD4 0440002C */  bltz       $v0, .L1000CE88
    /* CDD8 1000CDD8 00027880 */   sll       $t7, $v0, 2
    /* CDDC 1000CDDC 030FC021 */  addu       $t8, $t8, $t7
    /* CDE0 1000CDE0 8F1817B0 */  lw         $t8, %lo(D_800417B0)($t8)
    /* CDE4 1000CDE4 13000005 */  beqz       $t8, .L1000CDFC
    /* CDE8 1000CDE8 00000000 */   nop
    /* CDEC 1000CDEC 8CB90004 */  lw         $t9, 0x4($a1)
    /* CDF0 1000CDF0 304400FF */  andi       $a0, $v0, 0xFF
    /* CDF4 1000CDF4 5F200004 */  bgtzl      $t9, .L1000CE08
    /* CDF8 1000CDF8 AFA3001C */   sw        $v1, 0x1C($sp)
  .L1000CDFC:
    /* CDFC 1000CDFC 10000027 */  b          .L1000CE9C
    /* CE00 1000CE00 24020001 */   addiu     $v0, $zero, 0x1
    /* CE04 1000CE04 AFA3001C */  sw         $v1, 0x1C($sp)
  .L1000CE08:
    /* CE08 1000CE08 0C00214F */  jal        func_1000853C
    /* CE0C 1000CE0C AFA50024 */   sw        $a1, 0x24($sp)
    /* CE10 1000CE10 24010003 */  addiu      $at, $zero, 0x3
    /* CE14 1000CE14 8FA3001C */  lw         $v1, 0x1C($sp)
    /* CE18 1000CE18 14410003 */  bne        $v0, $at, .L1000CE28
    /* CE1C 1000CE1C 8FA50024 */   lw        $a1, 0x24($sp)
    /* CE20 1000CE20 1000001E */  b          .L1000CE9C
    /* CE24 1000CE24 24020001 */   addiu     $v0, $zero, 0x1
  .L1000CE28:
    /* CE28 1000CE28 8CA80004 */  lw         $t0, 0x4($a1)
    /* CE2C 1000CE2C 3C0A8003 */  lui        $t2, %hi(D_8002B078)
    /* CE30 1000CE30 00084900 */  sll        $t1, $t0, 4
    /* CE34 1000CE34 01495021 */  addu       $t2, $t2, $t1
    /* CE38 1000CE38 8D4AB078 */  lw         $t2, %lo(D_8002B078)($t2)
    /* CE3C 1000CE3C 314B0020 */  andi       $t3, $t2, 0x20
    /* CE40 1000CE40 55600009 */  bnel       $t3, $zero, .L1000CE68
    /* CE44 1000CE44 8CB80000 */   lw        $t8, 0x0($a1)
    /* CE48 1000CE48 8CAC0000 */  lw         $t4, 0x0($a1)
    /* CE4C 1000CE4C 3C0D8004 */  lui        $t5, %hi(D_800418AC)
    /* CE50 1000CE50 25AD18AC */  addiu      $t5, $t5, %lo(D_800418AC)
    /* CE54 1000CE54 018D1021 */  addu       $v0, $t4, $t5
    /* CE58 1000CE58 904E0000 */  lbu        $t6, 0x0($v0)
    /* CE5C 1000CE5C 35CF0003 */  ori        $t7, $t6, 0x3
    /* CE60 1000CE60 A04F0000 */  sb         $t7, 0x0($v0)
    /* CE64 1000CE64 8CB80000 */  lw         $t8, 0x0($a1)
  .L1000CE68:
    /* CE68 1000CE68 3C198004 */  lui        $t9, %hi(D_800418AC)
    /* CE6C 1000CE6C 0338C821 */  addu       $t9, $t9, $t8
    /* CE70 1000CE70 933918AC */  lbu        $t9, %lo(D_800418AC)($t9)
    /* CE74 1000CE74 03204027 */  not        $t0, $t9
    /* CE78 1000CE78 00682024 */  and        $a0, $v1, $t0
    /* CE7C 1000CE7C 308900FF */  andi       $t1, $a0, 0xFF
    /* CE80 1000CE80 10000005 */  b          .L1000CE98
    /* CE84 1000CE84 01202025 */   or        $a0, $t1, $zero
  .L1000CE88:
    /* CE88 1000CE88 10000004 */  b          .L1000CE9C
    /* CE8C 1000CE8C 24020001 */   addiu     $v0, $zero, 0x1
  .L1000CE90:
    /* CE90 1000CE90 10000002 */  b          .L1000CE9C
    /* CE94 1000CE94 24020001 */   addiu     $v0, $zero, 0x1
  .L1000CE98:
    /* CE98 1000CE98 2C820001 */  sltiu      $v0, $a0, 0x1
  .L1000CE9C:
    /* CE9C 1000CE9C 8FBF0014 */  lw         $ra, 0x14($sp)
    /* CEA0 1000CEA0 27BD0020 */  addiu      $sp, $sp, 0x20
    /* CEA4 1000CEA4 03E00008 */  jr         $ra
    /* CEA8 1000CEA8 00000000 */   nop
endlabel func_1000CDA0
