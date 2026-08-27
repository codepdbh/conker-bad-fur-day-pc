nonmatching func_15134DAC, 0x9C

glabel func_15134DAC
    /* 16225C 15134DAC 27BDFFD8 */  addiu      $sp, $sp, -0x28
    /* 162260 15134DB0 AFBF001C */  sw         $ra, 0x1C($sp)
    /* 162264 15134DB4 AFA40028 */  sw         $a0, 0x28($sp)
    /* 162268 15134DB8 AFA5002C */  sw         $a1, 0x2C($sp)
    /* 16226C 15134DBC 8FA6002C */  lw         $a2, 0x2C($sp)
    /* 162270 15134DC0 240E00FF */  addiu      $t6, $zero, 0xFF
    /* 162274 15134DC4 240F0001 */  addiu      $t7, $zero, 0x1
    /* 162278 15134DC8 AFAF0014 */  sw         $t7, 0x14($sp)
    /* 16227C 15134DCC AFAE0010 */  sw         $t6, 0x10($sp)
    /* 162280 15134DD0 24040029 */  addiu      $a0, $zero, 0x29
    /* 162284 15134DD4 00002825 */  or         $a1, $zero, $zero
    /* 162288 15134DD8 24070001 */  addiu      $a3, $zero, 0x1
    /* 16228C 15134DDC 0D459E9A */  jal        func_15167A68
    /* 162290 15134DE0 24C60080 */   addiu     $a2, $a2, 0x80
    /* 162294 15134DE4 14400003 */  bnez       $v0, .L15134DF4
    /* 162298 15134DE8 00401825 */   or        $v1, $v0, $zero
    /* 16229C 15134DEC 10000012 */  b          .L15134E38
    /* 1622A0 15134DF0 00001025 */   or        $v0, $zero, $zero
  .L15134DF4:
    /* 1622A4 15134DF4 24640018 */  addiu      $a0, $v1, 0x18
    /* 1622A8 15134DF8 8FA50028 */  lw         $a1, 0x28($sp)
    /* 1622AC 15134DFC 2406003C */  addiu      $a2, $zero, 0x3C
    /* 1622B0 15134E00 0C008BB0 */  jal        memcpy
    /* 1622B4 15134E04 AFA30024 */   sw        $v1, 0x24($sp)
    /* 1622B8 15134E08 8FB80028 */  lw         $t8, 0x28($sp)
    /* 1622BC 15134E0C 8FA20024 */  lw         $v0, 0x24($sp)
    /* 1622C0 15134E10 44800000 */  mtc1       $zero, $f0
    /* 1622C4 15134E14 87190028 */  lh         $t9, 0x28($t8)
    /* 1622C8 15134E18 24090001 */  addiu      $t1, $zero, 0x1
    /* 1622CC 15134E1C AC490010 */  sw         $t1, 0x10($v0)
    /* 1622D0 15134E20 00194023 */  negu       $t0, $t9
    /* 1622D4 15134E24 A4480054 */  sh         $t0, 0x54($v0)
    /* 1622D8 15134E28 AC400014 */  sw         $zero, 0x14($v0)
    /* 1622DC 15134E2C E4400070 */  swc1       $f0, 0x70($v0)
    /* 1622E0 15134E30 E4400074 */  swc1       $f0, 0x74($v0)
    /* 1622E4 15134E34 E4400078 */  swc1       $f0, 0x78($v0)
  .L15134E38:
    /* 1622E8 15134E38 8FBF001C */  lw         $ra, 0x1C($sp)
    /* 1622EC 15134E3C 27BD0028 */  addiu      $sp, $sp, 0x28
    /* 1622F0 15134E40 03E00008 */  jr         $ra
    /* 1622F4 15134E44 00000000 */   nop
endlabel func_15134DAC
