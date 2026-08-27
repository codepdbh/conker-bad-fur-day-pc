nonmatching __n_seqpStopOsc, 0x1C8

glabel __n_seqpStopOsc
    /* 1BE94 1001BE94 27BDFFD0 */  addiu      $sp, $sp, -0x30
    /* 1BE98 1001BE98 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 1BE9C 1001BE9C AFA40030 */  sw         $a0, 0x30($sp)
    /* 1BEA0 1001BEA0 AFA50034 */  sw         $a1, 0x34($sp)
    /* 1BEA4 1001BEA4 8FAE0030 */  lw         $t6, 0x30($sp)
    /* 1BEA8 1001BEA8 8DCF0050 */  lw         $t7, 0x50($t6)
    /* 1BEAC 1001BEAC AFAF002C */  sw         $t7, 0x2C($sp)
    /* 1BEB0 1001BEB0 8FB8002C */  lw         $t8, 0x2C($sp)
    /* 1BEB4 1001BEB4 13000063 */  beqz       $t8, .L1001C044
    /* 1BEB8 1001BEB8 00000000 */   nop
  .L1001BEBC:
    /* 1BEBC 1001BEBC 8FB9002C */  lw         $t9, 0x2C($sp)
    /* 1BEC0 1001BEC0 8F280000 */  lw         $t0, 0x0($t9)
    /* 1BEC4 1001BEC4 AFA80028 */  sw         $t0, 0x28($sp)
    /* 1BEC8 1001BEC8 8FA9002C */  lw         $t1, 0x2C($sp)
    /* 1BECC 1001BECC 852A000C */  lh         $t2, 0xC($t1)
    /* 1BED0 1001BED0 A7AA0026 */  sh         $t2, 0x26($sp)
    /* 1BED4 1001BED4 87AB0026 */  lh         $t3, 0x26($sp)
    /* 1BED8 1001BED8 24010017 */  addiu      $at, $zero, 0x17
    /* 1BEDC 1001BEDC 11610004 */  beq        $t3, $at, .L1001BEF0
    /* 1BEE0 1001BEE0 00000000 */   nop
    /* 1BEE4 1001BEE4 24010018 */  addiu      $at, $zero, 0x18
    /* 1BEE8 1001BEE8 15610051 */  bne        $t3, $at, .L1001C030
    /* 1BEEC 1001BEEC 00000000 */   nop
  .L1001BEF0:
    /* 1BEF0 1001BEF0 8FAC002C */  lw         $t4, 0x2C($sp)
    /* 1BEF4 1001BEF4 8FAE0034 */  lw         $t6, 0x34($sp)
    /* 1BEF8 1001BEF8 8D8D0010 */  lw         $t5, 0x10($t4)
    /* 1BEFC 1001BEFC 15AE004C */  bne        $t5, $t6, .L1001C030
    /* 1BF00 1001BF00 00000000 */   nop
    /* 1BF04 1001BF04 8FB80030 */  lw         $t8, 0x30($sp)
    /* 1BF08 1001BF08 8FAF002C */  lw         $t7, 0x2C($sp)
    /* 1BF0C 1001BF0C 8F190078 */  lw         $t9, 0x78($t8)
    /* 1BF10 1001BF10 8DE40014 */  lw         $a0, 0x14($t7)
    /* 1BF14 1001BF14 0320F809 */  jalr       $t9
    /* 1BF18 1001BF18 00000000 */   nop
    /* 1BF1C 1001BF1C 8FA8002C */  lw         $t0, 0x2C($sp)
    /* 1BF20 1001BF20 AFA80020 */  sw         $t0, 0x20($sp)
    /* 1BF24 1001BF24 8FA90020 */  lw         $t1, 0x20($sp)
    /* 1BF28 1001BF28 8D2A0000 */  lw         $t2, 0x0($t1)
    /* 1BF2C 1001BF2C 11400005 */  beqz       $t2, .L1001BF44
    /* 1BF30 1001BF30 00000000 */   nop
    /* 1BF34 1001BF34 8FAB0020 */  lw         $t3, 0x20($sp)
    /* 1BF38 1001BF38 8D6C0004 */  lw         $t4, 0x4($t3)
    /* 1BF3C 1001BF3C 8D6D0000 */  lw         $t5, 0x0($t3)
    /* 1BF40 1001BF40 ADAC0004 */  sw         $t4, 0x4($t5)
  .L1001BF44:
    /* 1BF44 1001BF44 8FAE0020 */  lw         $t6, 0x20($sp)
    /* 1BF48 1001BF48 8DCF0004 */  lw         $t7, 0x4($t6)
    /* 1BF4C 1001BF4C 11E00005 */  beqz       $t7, .L1001BF64
    /* 1BF50 1001BF50 00000000 */   nop
    /* 1BF54 1001BF54 8FB80020 */  lw         $t8, 0x20($sp)
    /* 1BF58 1001BF58 8F190000 */  lw         $t9, 0x0($t8)
    /* 1BF5C 1001BF5C 8F080004 */  lw         $t0, 0x4($t8)
    /* 1BF60 1001BF60 AD190000 */  sw         $t9, 0x0($t0)
  .L1001BF64:
    /* 1BF64 1001BF64 8FA90028 */  lw         $t1, 0x28($sp)
    /* 1BF68 1001BF68 11200007 */  beqz       $t1, .L1001BF88
    /* 1BF6C 1001BF6C 00000000 */   nop
    /* 1BF70 1001BF70 8FAA0028 */  lw         $t2, 0x28($sp)
    /* 1BF74 1001BF74 8FAC002C */  lw         $t4, 0x2C($sp)
    /* 1BF78 1001BF78 8D4B0008 */  lw         $t3, 0x8($t2)
    /* 1BF7C 1001BF7C 8D8D0008 */  lw         $t5, 0x8($t4)
    /* 1BF80 1001BF80 016D7021 */  addu       $t6, $t3, $t5
    /* 1BF84 1001BF84 AD4E0008 */  sw         $t6, 0x8($t2)
  .L1001BF88:
    /* 1BF88 1001BF88 8FAF002C */  lw         $t7, 0x2C($sp)
    /* 1BF8C 1001BF8C AFAF001C */  sw         $t7, 0x1C($sp)
    /* 1BF90 1001BF90 8FB80030 */  lw         $t8, 0x30($sp)
    /* 1BF94 1001BF94 27190048 */  addiu      $t9, $t8, 0x48
    /* 1BF98 1001BF98 AFB90018 */  sw         $t9, 0x18($sp)
    /* 1BF9C 1001BF9C 8FA80018 */  lw         $t0, 0x18($sp)
    /* 1BFA0 1001BFA0 8FAC001C */  lw         $t4, 0x1C($sp)
    /* 1BFA4 1001BFA4 8D090000 */  lw         $t1, 0x0($t0)
    /* 1BFA8 1001BFA8 AD890000 */  sw         $t1, 0x0($t4)
    /* 1BFAC 1001BFAC 8FAB0018 */  lw         $t3, 0x18($sp)
    /* 1BFB0 1001BFB0 8FAD001C */  lw         $t5, 0x1C($sp)
    /* 1BFB4 1001BFB4 ADAB0004 */  sw         $t3, 0x4($t5)
    /* 1BFB8 1001BFB8 8FAE0018 */  lw         $t6, 0x18($sp)
    /* 1BFBC 1001BFBC 8DCA0000 */  lw         $t2, 0x0($t6)
    /* 1BFC0 1001BFC0 11400005 */  beqz       $t2, .L1001BFD8
    /* 1BFC4 1001BFC4 00000000 */   nop
    /* 1BFC8 1001BFC8 8FB80018 */  lw         $t8, 0x18($sp)
    /* 1BFCC 1001BFCC 8FAF001C */  lw         $t7, 0x1C($sp)
    /* 1BFD0 1001BFD0 8F190000 */  lw         $t9, 0x0($t8)
    /* 1BFD4 1001BFD4 AF2F0004 */  sw         $t7, 0x4($t9)
  .L1001BFD8:
    /* 1BFD8 1001BFD8 8FA8001C */  lw         $t0, 0x1C($sp)
    /* 1BFDC 1001BFDC 8FA90018 */  lw         $t1, 0x18($sp)
    /* 1BFE0 1001BFE0 AD280000 */  sw         $t0, 0x0($t1)
    /* 1BFE4 1001BFE4 87AC0026 */  lh         $t4, 0x26($sp)
    /* 1BFE8 1001BFE8 24010017 */  addiu      $at, $zero, 0x17
    /* 1BFEC 1001BFEC 15810006 */  bne        $t4, $at, .L1001C008
    /* 1BFF0 1001BFF0 00000000 */   nop
    /* 1BFF4 1001BFF4 8FAB0034 */  lw         $t3, 0x34($sp)
    /* 1BFF8 1001BFF8 916D003B */  lbu        $t5, 0x3B($t3)
    /* 1BFFC 1001BFFC 31AE00FE */  andi       $t6, $t5, 0xFE
    /* 1C000 1001C000 10000005 */  b          .L1001C018
    /* 1C004 1001C004 A16E003B */   sb        $t6, 0x3B($t3)
  .L1001C008:
    /* 1C008 1001C008 8FAA0034 */  lw         $t2, 0x34($sp)
    /* 1C00C 1001C00C 9158003B */  lbu        $t8, 0x3B($t2)
    /* 1C010 1001C010 330F00FD */  andi       $t7, $t8, 0xFD
    /* 1C014 1001C014 A14F003B */  sb         $t7, 0x3B($t2)
  .L1001C018:
    /* 1C018 1001C018 8FB90034 */  lw         $t9, 0x34($sp)
    /* 1C01C 1001C01C 9328003B */  lbu        $t0, 0x3B($t9)
    /* 1C020 1001C020 15000003 */  bnez       $t0, .L1001C030
    /* 1C024 1001C024 00000000 */   nop
    /* 1C028 1001C028 10000008 */  b          .L1001C04C
    /* 1C02C 1001C02C 00000000 */   nop
  .L1001C030:
    /* 1C030 1001C030 8FA90028 */  lw         $t1, 0x28($sp)
    /* 1C034 1001C034 AFA9002C */  sw         $t1, 0x2C($sp)
    /* 1C038 1001C038 8FAC002C */  lw         $t4, 0x2C($sp)
    /* 1C03C 1001C03C 1580FF9F */  bnez       $t4, .L1001BEBC
    /* 1C040 1001C040 00000000 */   nop
  .L1001C044:
    /* 1C044 1001C044 10000001 */  b          .L1001C04C
    /* 1C048 1001C048 00000000 */   nop
  .L1001C04C:
    /* 1C04C 1001C04C 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 1C050 1001C050 27BD0030 */  addiu      $sp, $sp, 0x30
    /* 1C054 1001C054 03E00008 */  jr         $ra
    /* 1C058 1001C058 00000000 */   nop
endlabel __n_seqpStopOsc
    /* 1C05C 1001C05C 00000000 */  nop
