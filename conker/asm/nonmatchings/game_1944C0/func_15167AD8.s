nonmatching func_15167AD8, 0x6C

glabel func_15167AD8
    /* 194F88 15167AD8 27BDFFD8 */  addiu      $sp, $sp, -0x28
    /* 194F8C 15167ADC AFBF001C */  sw         $ra, 0x1C($sp)
    /* 194F90 15167AE0 AFA40028 */  sw         $a0, 0x28($sp)
    /* 194F94 15167AE4 AFA5002C */  sw         $a1, 0x2C($sp)
    /* 194F98 15167AE8 AFA60030 */  sw         $a2, 0x30($sp)
    /* 194F9C 15167AEC 93AE002F */  lbu        $t6, 0x2F($sp)
    /* 194FA0 15167AF0 240F0001 */  addiu      $t7, $zero, 0x1
    /* 194FA4 15167AF4 AFAF0014 */  sw         $t7, 0x14($sp)
    /* 194FA8 15167AF8 24040003 */  addiu      $a0, $zero, 0x3
    /* 194FAC 15167AFC 8FA50030 */  lw         $a1, 0x30($sp)
    /* 194FB0 15167B00 24060028 */  addiu      $a2, $zero, 0x28
    /* 194FB4 15167B04 00003825 */  or         $a3, $zero, $zero
    /* 194FB8 15167B08 0D459E9A */  jal        func_15167A68
    /* 194FBC 15167B0C AFAE0010 */   sw        $t6, 0x10($sp)
    /* 194FC0 15167B10 10400008 */  beqz       $v0, .L15167B34
    /* 194FC4 15167B14 8FA40028 */   lw        $a0, 0x28($sp)
    /* 194FC8 15167B18 24450010 */  addiu      $a1, $v0, 0x10
    /* 194FCC 15167B1C 24060018 */  addiu      $a2, $zero, 0x18
    /* 194FD0 15167B20 0C008E84 */  jal        bcopy
    /* 194FD4 15167B24 AFA20024 */   sw        $v0, 0x24($sp)
    /* 194FD8 15167B28 8FA30024 */  lw         $v1, 0x24($sp)
    /* 194FDC 15167B2C 241800FF */  addiu      $t8, $zero, 0xFF
    /* 194FE0 15167B30 A0780023 */  sb         $t8, 0x23($v1)
  .L15167B34:
    /* 194FE4 15167B34 8FBF001C */  lw         $ra, 0x1C($sp)
    /* 194FE8 15167B38 27BD0028 */  addiu      $sp, $sp, 0x28
    /* 194FEC 15167B3C 03E00008 */  jr         $ra
    /* 194FF0 15167B40 00000000 */   nop
endlabel func_15167AD8
