nonmatching func_10010F88, 0x74

glabel func_10010F88
    /* 10F88 10010F88 27BDFFC8 */  addiu      $sp, $sp, -0x38
    /* 10F8C 10010F8C AFA5003C */  sw         $a1, 0x3C($sp)
    /* 10F90 10010F90 AFA60040 */  sw         $a2, 0x40($sp)
    /* 10F94 10010F94 AFA70044 */  sw         $a3, 0x44($sp)
    /* 10F98 10010F98 87A70042 */  lh         $a3, 0x42($sp)
    /* 10F9C 10010F9C 97A6003E */  lhu        $a2, 0x3E($sp)
    /* 10FA0 10010FA0 00802825 */  or         $a1, $a0, $zero
    /* 10FA4 10010FA4 AFBF0034 */  sw         $ra, 0x34($sp)
    /* 10FA8 10010FA8 AFA40038 */  sw         $a0, 0x38($sp)
    /* 10FAC 10010FAC 93AE0047 */  lbu        $t6, 0x47($sp)
    /* 10FB0 10010FB0 8FAF0048 */  lw         $t7, 0x48($sp)
    /* 10FB4 10010FB4 87B8004E */  lh         $t8, 0x4E($sp)
    /* 10FB8 10010FB8 87B90052 */  lh         $t9, 0x52($sp)
    /* 10FBC 10010FBC 87A80056 */  lh         $t0, 0x56($sp)
    /* 10FC0 10010FC0 87A9005A */  lh         $t1, 0x5A($sp)
    /* 10FC4 10010FC4 87AA005E */  lh         $t2, 0x5E($sp)
    /* 10FC8 10010FC8 00002025 */  or         $a0, $zero, $zero
    /* 10FCC 10010FCC AFAE0010 */  sw         $t6, 0x10($sp)
    /* 10FD0 10010FD0 AFAF0014 */  sw         $t7, 0x14($sp)
    /* 10FD4 10010FD4 AFB80018 */  sw         $t8, 0x18($sp)
    /* 10FD8 10010FD8 AFB9001C */  sw         $t9, 0x1C($sp)
    /* 10FDC 10010FDC AFA80020 */  sw         $t0, 0x20($sp)
    /* 10FE0 10010FE0 AFA90024 */  sw         $t1, 0x24($sp)
    /* 10FE4 10010FE4 0C00439E */  jal        func_10010E78
    /* 10FE8 10010FE8 AFAA0028 */   sw        $t2, 0x28($sp)
    /* 10FEC 10010FEC 8FBF0034 */  lw         $ra, 0x34($sp)
    /* 10FF0 10010FF0 27BD0038 */  addiu      $sp, $sp, 0x38
    /* 10FF4 10010FF4 03E00008 */  jr         $ra
    /* 10FF8 10010FF8 00000000 */   nop
endlabel func_10010F88
