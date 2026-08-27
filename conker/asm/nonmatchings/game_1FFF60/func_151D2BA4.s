nonmatching func_151D2BA4, 0x9C

glabel func_151D2BA4
    /* 200054 151D2BA4 27BDFFD8 */  addiu      $sp, $sp, -0x28
    /* 200058 151D2BA8 AFBF001C */  sw         $ra, 0x1C($sp)
    /* 20005C 151D2BAC AFA40028 */  sw         $a0, 0x28($sp)
    /* 200060 151D2BB0 AFA5002C */  sw         $a1, 0x2C($sp)
    /* 200064 151D2BB4 AFA60030 */  sw         $a2, 0x30($sp)
    /* 200068 151D2BB8 AFA70034 */  sw         $a3, 0x34($sp)
    /* 20006C 151D2BBC 8FA60030 */  lw         $a2, 0x30($sp)
    /* 200070 151D2BC0 93AE0037 */  lbu        $t6, 0x37($sp)
    /* 200074 151D2BC4 240F0001 */  addiu      $t7, $zero, 0x1
    /* 200078 151D2BC8 AFAF0014 */  sw         $t7, 0x14($sp)
    /* 20007C 151D2BCC 2404003D */  addiu      $a0, $zero, 0x3D
    /* 200080 151D2BD0 8FA50038 */  lw         $a1, 0x38($sp)
    /* 200084 151D2BD4 24070001 */  addiu      $a3, $zero, 0x1
    /* 200088 151D2BD8 24C60048 */  addiu      $a2, $a2, 0x48
    /* 20008C 151D2BDC 0D459E9A */  jal        func_15167A68
    /* 200090 151D2BE0 AFAE0010 */   sw        $t6, 0x10($sp)
    /* 200094 151D2BE4 14400003 */  bnez       $v0, .L151D2BF4
    /* 200098 151D2BE8 00403825 */   or        $a3, $v0, $zero
    /* 20009C 151D2BEC 10000010 */  b          .L151D2C30
    /* 2000A0 151D2BF0 00001025 */   or        $v0, $zero, $zero
  .L151D2BF4:
    /* 2000A4 151D2BF4 24E40010 */  addiu      $a0, $a3, 0x10
    /* 2000A8 151D2BF8 8FA50028 */  lw         $a1, 0x28($sp)
    /* 2000AC 151D2BFC 24060024 */  addiu      $a2, $zero, 0x24
    /* 2000B0 151D2C00 0C008BB0 */  jal        memcpy
    /* 2000B4 151D2C04 AFA70024 */   sw        $a3, 0x24($sp)
    /* 2000B8 151D2C08 8FB8002C */  lw         $t8, 0x2C($sp)
    /* 2000BC 151D2C0C 8FA40024 */  lw         $a0, 0x24($sp)
    /* 2000C0 151D2C10 8F010000 */  lw         $at, 0x0($t8)
    /* 2000C4 151D2C14 AC810034 */  sw         $at, 0x34($a0)
    /* 2000C8 151D2C18 8F090004 */  lw         $t1, 0x4($t8)
    /* 2000CC 151D2C1C AC890038 */  sw         $t1, 0x38($a0)
    /* 2000D0 151D2C20 8F010008 */  lw         $at, 0x8($t8)
    /* 2000D4 151D2C24 0D474CC2 */  jal        func_151D3308
    /* 2000D8 151D2C28 AC81003C */   sw        $at, 0x3C($a0)
    /* 2000DC 151D2C2C 8FA20024 */  lw         $v0, 0x24($sp)
  .L151D2C30:
    /* 2000E0 151D2C30 8FBF001C */  lw         $ra, 0x1C($sp)
    /* 2000E4 151D2C34 27BD0028 */  addiu      $sp, $sp, 0x28
    /* 2000E8 151D2C38 03E00008 */  jr         $ra
    /* 2000EC 151D2C3C 00000000 */   nop
endlabel func_151D2BA4
