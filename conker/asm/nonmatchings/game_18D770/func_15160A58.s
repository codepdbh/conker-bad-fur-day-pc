nonmatching func_15160A58, 0x11C

glabel func_15160A58
    /* 18DF08 15160A58 27BDFF98 */  addiu      $sp, $sp, -0x68
    /* 18DF0C 15160A5C AFBF0034 */  sw         $ra, 0x34($sp)
    /* 18DF10 15160A60 AFA40068 */  sw         $a0, 0x68($sp)
    /* 18DF14 15160A64 AFA5006C */  sw         $a1, 0x6C($sp)
    /* 18DF18 15160A68 AFA60070 */  sw         $a2, 0x70($sp)
    /* 18DF1C 15160A6C AFA70074 */  sw         $a3, 0x74($sp)
    /* 18DF20 15160A70 8FAE0068 */  lw         $t6, 0x68($sp)
    /* 18DF24 15160A74 93AF0077 */  lbu        $t7, 0x77($sp)
    /* 18DF28 15160A78 24180005 */  addiu      $t8, $zero, 0x5
    /* 18DF2C 15160A7C 15C00003 */  bnez       $t6, .L15160A8C
    /* 18DF30 15160A80 24080010 */   addiu     $t0, $zero, 0x10
    /* 18DF34 15160A84 10000037 */  b          .L15160B64
    /* 18DF38 15160A88 00001025 */   or        $v0, $zero, $zero
  .L15160A8C:
    /* 18DF3C 15160A8C 87B9007A */  lh         $t9, 0x7A($sp)
    /* 18DF40 15160A90 8FA90068 */  lw         $t1, 0x68($sp)
    /* 18DF44 15160A94 A3AF005C */  sb         $t7, 0x5C($sp)
    /* 18DF48 15160A98 A3B8005D */  sb         $t8, 0x5D($sp)
    /* 18DF4C 15160A9C A3A80060 */  sb         $t0, 0x60($sp)
    /* 18DF50 15160AA0 A7B9005E */  sh         $t9, 0x5E($sp)
    /* 18DF54 15160AA4 AFA90044 */  sw         $t1, 0x44($sp)
    /* 18DF58 15160AA8 93AB006F */  lbu        $t3, 0x6F($sp)
    /* 18DF5C 15160AAC 912A003B */  lbu        $t2, 0x3B($t1)
    /* 18DF60 15160AB0 8FAD0070 */  lw         $t5, 0x70($sp)
    /* 18DF64 15160AB4 A3AB0049 */  sb         $t3, 0x49($sp)
    /* 18DF68 15160AB8 A3AA0048 */  sb         $t2, 0x48($sp)
    /* 18DF6C 15160ABC 8DA10000 */  lw         $at, 0x0($t5)
    /* 18DF70 15160AC0 27AC004C */  addiu      $t4, $sp, 0x4C
    /* 18DF74 15160AC4 240B00FF */  addiu      $t3, $zero, 0xFF
    /* 18DF78 15160AC8 AD810000 */  sw         $at, 0x0($t4)
    /* 18DF7C 15160ACC 8DB80004 */  lw         $t8, 0x4($t5)
    /* 18DF80 15160AD0 27A4005C */  addiu      $a0, $sp, 0x5C
    /* 18DF84 15160AD4 27A50038 */  addiu      $a1, $sp, 0x38
    /* 18DF88 15160AD8 AD980004 */  sw         $t8, 0x4($t4)
    /* 18DF8C 15160ADC 8DA10008 */  lw         $at, 0x8($t5)
    /* 18DF90 15160AE0 AD810008 */  sw         $at, 0x8($t4)
    /* 18DF94 15160AE4 8FAF0098 */  lw         $t7, 0x98($sp)
    /* 18DF98 15160AE8 83B90097 */  lb         $t9, 0x97($sp)
    /* 18DF9C 15160AEC 93A8009F */  lbu        $t0, 0x9F($sp)
    /* 18DFA0 15160AF0 8FAD00A4 */  lw         $t5, 0xA4($sp)
    /* 18DFA4 15160AF4 93AC00A3 */  lbu        $t4, 0xA3($sp)
    /* 18DFA8 15160AF8 8FAA0088 */  lw         $t2, 0x88($sp)
    /* 18DFAC 15160AFC 8FA90084 */  lw         $t1, 0x84($sp)
    /* 18DFB0 15160B00 25EE0018 */  addiu      $t6, $t7, 0x18
    /* 18DFB4 15160B04 AFA00038 */  sw         $zero, 0x38($sp)
    /* 18DFB8 15160B08 AFA0003C */  sw         $zero, 0x3C($sp)
    /* 18DFBC 15160B0C AFA00040 */  sw         $zero, 0x40($sp)
    /* 18DFC0 15160B10 AFAE0020 */  sw         $t6, 0x20($sp)
    /* 18DFC4 15160B14 AFA0001C */  sw         $zero, 0x1C($sp)
    /* 18DFC8 15160B18 AFAB0018 */  sw         $t3, 0x18($sp)
    /* 18DFCC 15160B1C 8FA70080 */  lw         $a3, 0x80($sp)
    /* 18DFD0 15160B20 8FA6007C */  lw         $a2, 0x7C($sp)
    /* 18DFD4 15160B24 A3B90058 */  sb         $t9, 0x58($sp)
    /* 18DFD8 15160B28 A3A80059 */  sb         $t0, 0x59($sp)
    /* 18DFDC 15160B2C AFAD0028 */  sw         $t5, 0x28($sp)
    /* 18DFE0 15160B30 AFAC0024 */  sw         $t4, 0x24($sp)
    /* 18DFE4 15160B34 AFAA0014 */  sw         $t2, 0x14($sp)
    /* 18DFE8 15160B38 0D4580B0 */  jal        func_151602C0
    /* 18DFEC 15160B3C AFA90010 */   sw        $t1, 0x10($sp)
    /* 18DFF0 15160B40 10400007 */  beqz       $v0, .L15160B60
    /* 18DFF4 15160B44 00401825 */   or        $v1, $v0, $zero
    /* 18DFF8 15160B48 24440018 */  addiu      $a0, $v0, 0x18
    /* 18DFFC 15160B4C 27A50044 */  addiu      $a1, $sp, 0x44
    /* 18E000 15160B50 24060018 */  addiu      $a2, $zero, 0x18
    /* 18E004 15160B54 0C008BB0 */  jal        memcpy
    /* 18E008 15160B58 AFA20064 */   sw        $v0, 0x64($sp)
    /* 18E00C 15160B5C 8FA30064 */  lw         $v1, 0x64($sp)
  .L15160B60:
    /* 18E010 15160B60 00601025 */  or         $v0, $v1, $zero
  .L15160B64:
    /* 18E014 15160B64 8FBF0034 */  lw         $ra, 0x34($sp)
    /* 18E018 15160B68 27BD0068 */  addiu      $sp, $sp, 0x68
    /* 18E01C 15160B6C 03E00008 */  jr         $ra
    /* 18E020 15160B70 00000000 */   nop
endlabel func_15160A58
