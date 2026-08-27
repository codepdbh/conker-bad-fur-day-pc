nonmatching func_15168BE4, 0x68

glabel func_15168BE4
    /* 196094 15168BE4 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* 196098 15168BE8 AFBF001C */  sw         $ra, 0x1C($sp)
    /* 19609C 15168BEC AFA40020 */  sw         $a0, 0x20($sp)
    /* 1960A0 15168BF0 AFA50024 */  sw         $a1, 0x24($sp)
    /* 1960A4 15168BF4 AFA60028 */  sw         $a2, 0x28($sp)
    /* 1960A8 15168BF8 8FAE0020 */  lw         $t6, 0x20($sp)
    /* 1960AC 15168BFC 24040010 */  addiu      $a0, $zero, 0x10
    /* 1960B0 15168C00 8FA50028 */  lw         $a1, 0x28($sp)
    /* 1960B4 15168C04 8DCF0040 */  lw         $t7, 0x40($t6)
    /* 1960B8 15168C08 240600F0 */  addiu      $a2, $zero, 0xF0
    /* 1960BC 15168C0C 24070001 */  addiu      $a3, $zero, 0x1
    /* 1960C0 15168C10 11E0000A */  beqz       $t7, .L15168C3C
    /* 1960C4 15168C14 93B80027 */   lbu       $t8, 0x27($sp)
    /* 1960C8 15168C18 24190001 */  addiu      $t9, $zero, 0x1
    /* 1960CC 15168C1C AFB90014 */  sw         $t9, 0x14($sp)
    /* 1960D0 15168C20 0D459E9A */  jal        func_15167A68
    /* 1960D4 15168C24 AFB80010 */   sw        $t8, 0x10($sp)
    /* 1960D8 15168C28 10400004 */  beqz       $v0, .L15168C3C
    /* 1960DC 15168C2C 8FA40020 */   lw        $a0, 0x20($sp)
    /* 1960E0 15168C30 24450090 */  addiu      $a1, $v0, 0x90
    /* 1960E4 15168C34 0C008E84 */  jal        bcopy
    /* 1960E8 15168C38 24060060 */   addiu     $a2, $zero, 0x60
  .L15168C3C:
    /* 1960EC 15168C3C 8FBF001C */  lw         $ra, 0x1C($sp)
    /* 1960F0 15168C40 27BD0020 */  addiu      $sp, $sp, 0x20
    /* 1960F4 15168C44 03E00008 */  jr         $ra
    /* 1960F8 15168C48 00000000 */   nop
endlabel func_15168BE4
