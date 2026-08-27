nonmatching func_15167A68, 0x70

glabel func_15167A68
    /* 194F18 15167A68 27BDFFD8 */  addiu      $sp, $sp, -0x28
    /* 194F1C 15167A6C AFBF001C */  sw         $ra, 0x1C($sp)
    /* 194F20 15167A70 AFA40028 */  sw         $a0, 0x28($sp)
    /* 194F24 15167A74 AFA5002C */  sw         $a1, 0x2C($sp)
    /* 194F28 15167A78 AFA60030 */  sw         $a2, 0x30($sp)
    /* 194F2C 15167A7C AFA70034 */  sw         $a3, 0x34($sp)
    /* 194F30 15167A80 93AE003F */  lbu        $t6, 0x3F($sp)
    /* 194F34 15167A84 8FA40030 */  lw         $a0, 0x30($sp)
    /* 194F38 15167A88 24050001 */  addiu      $a1, $zero, 0x1
    /* 194F3C 15167A8C 8FA60034 */  lw         $a2, 0x34($sp)
    /* 194F40 15167A90 00003825 */  or         $a3, $zero, $zero
    /* 194F44 15167A94 0C000F1B */  jal        func_10003C6C
    /* 194F48 15167A98 AFAE0010 */   sw        $t6, 0x10($sp)
    /* 194F4C 15167A9C 10400009 */  beqz       $v0, .L15167AC4
    /* 194F50 15167AA0 00402025 */   or        $a0, $v0, $zero
    /* 194F54 15167AA4 8FAF002C */  lw         $t7, 0x2C($sp)
    /* 194F58 15167AA8 A04F0001 */  sb         $t7, 0x1($v0)
    /* 194F5C 15167AAC AFA20024 */  sw         $v0, 0x24($sp)
    /* 194F60 15167AB0 0D45A293 */  jal        func_15168A4C
    /* 194F64 15167AB4 8FA50028 */   lw        $a1, 0x28($sp)
    /* 194F68 15167AB8 8FA40024 */  lw         $a0, 0x24($sp)
    /* 194F6C 15167ABC 93B8003B */  lbu        $t8, 0x3B($sp)
    /* 194F70 15167AC0 A098000C */  sb         $t8, 0xC($a0)
  .L15167AC4:
    /* 194F74 15167AC4 00801025 */  or         $v0, $a0, $zero
    /* 194F78 15167AC8 8FBF001C */  lw         $ra, 0x1C($sp)
    /* 194F7C 15167ACC 27BD0028 */  addiu      $sp, $sp, 0x28
    /* 194F80 15167AD0 03E00008 */  jr         $ra
    /* 194F84 15167AD4 00000000 */   nop
endlabel func_15167A68
