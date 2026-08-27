nonmatching func_1000C934, 0xE4

glabel func_1000C934
    /* C934 1000C934 27BDFFC0 */  addiu      $sp, $sp, -0x40
    /* C938 1000C938 AFBF002C */  sw         $ra, 0x2C($sp)
    /* C93C 1000C93C AFA40040 */  sw         $a0, 0x40($sp)
    /* C940 1000C940 AFA50044 */  sw         $a1, 0x44($sp)
    /* C944 1000C944 AFA60048 */  sw         $a2, 0x48($sp)
    /* C948 1000C948 AFA7004C */  sw         $a3, 0x4C($sp)
    /* C94C 1000C94C 3C0E800E */  lui        $t6, %hi(D_800DBFF0)
    /* C950 1000C950 8DCEBFF0 */  lw         $t6, %lo(D_800DBFF0)($t6)
    /* C954 1000C954 AFA0003C */  sw         $zero, 0x3C($sp)
    /* C958 1000C958 24072EE0 */  addiu      $a3, $zero, 0x2EE0
    /* C95C 1000C95C 8DC205F0 */  lw         $v0, 0x5F0($t6)
    /* C960 1000C960 3C18800C */  lui        $t8, %hi(D_800BE9F0)
    /* C964 1000C964 304F0001 */  andi       $t7, $v0, 0x1
    /* C968 1000C968 11E00003 */  beqz       $t7, .L1000C978
    /* C96C 1000C96C 01E01025 */   or        $v0, $t7, $zero
    /* C970 1000C970 10000001 */  b          .L1000C978
    /* C974 1000C974 24077FFF */   addiu     $a3, $zero, 0x7FFF
  .L1000C978:
    /* C978 1000C978 8F18E9F0 */  lw         $t8, %lo(D_800BE9F0)($t8)
    /* C97C 1000C97C 24010037 */  addiu      $at, $zero, 0x37
    /* C980 1000C980 57010015 */  bnel       $t8, $at, .L1000C9D8
    /* C984 1000C984 8FA5003C */   lw        $a1, 0x3C($sp)
    /* C988 1000C988 14400012 */  bnez       $v0, .L1000C9D4
    /* C98C 1000C98C 24040898 */   addiu     $a0, $zero, 0x898
    /* C990 1000C990 24190BB8 */  addiu      $t9, $zero, 0xBB8
    /* C994 1000C994 240805DC */  addiu      $t0, $zero, 0x5DC
    /* C998 1000C998 27A9003C */  addiu      $t1, $sp, 0x3C
    /* C99C 1000C99C AFA9001C */  sw         $t1, 0x1C($sp)
    /* C9A0 1000C9A0 AFA80014 */  sw         $t0, 0x14($sp)
    /* C9A4 1000C9A4 AFB90010 */  sw         $t9, 0x10($sp)
    /* C9A8 1000C9A8 2405042A */  addiu      $a1, $zero, 0x42A
    /* C9AC 1000C9AC 2406F9C0 */  addiu      $a2, $zero, -0x640
    /* C9B0 1000C9B0 AFA00018 */  sw         $zero, 0x18($sp)
    /* C9B4 1000C9B4 AFA00020 */  sw         $zero, 0x20($sp)
    /* C9B8 1000C9B8 0C004534 */  jal        func_100114D0
    /* C9BC 1000C9BC AFA70038 */   sw        $a3, 0x38($sp)
    /* C9C0 1000C9C0 8FA5003C */  lw         $a1, 0x3C($sp)
    /* C9C4 1000C9C4 8FA70038 */  lw         $a3, 0x38($sp)
    /* C9C8 1000C9C8 30AAFF00 */  andi       $t2, $a1, 0xFF00
    /* C9CC 1000C9CC 00EA2823 */  subu       $a1, $a3, $t2
    /* C9D0 1000C9D0 AFA5003C */  sw         $a1, 0x3C($sp)
  .L1000C9D4:
    /* C9D4 1000C9D4 8FA5003C */  lw         $a1, 0x3C($sp)
  .L1000C9D8:
    /* C9D8 1000C9D8 8FAB0040 */  lw         $t3, 0x40($sp)
    /* C9DC 1000C9DC 24040054 */  addiu      $a0, $zero, 0x54
    /* C9E0 1000C9E0 00AB6026 */  xor        $t4, $a1, $t3
    /* C9E4 1000C9E4 000C602B */  sltu       $t4, $zero, $t4
    /* C9E8 1000C9E8 318DFFFF */  andi       $t5, $t4, 0xFFFF
    /* C9EC 1000C9EC 51A00005 */  beql       $t5, $zero, .L1000CA04
    /* C9F0 1000C9F0 3C018000 */   lui       $at, (0x80000000 >> 16)
    /* C9F4 1000C9F4 0C003903 */  jal        func_1000E40C
    /* C9F8 1000C9F8 AFA5003C */   sw        $a1, 0x3C($sp)
    /* C9FC 1000C9FC 8FA5003C */  lw         $a1, 0x3C($sp)
    /* CA00 1000CA00 3C018000 */  lui        $at, (0x80000000 >> 16)
  .L1000CA04:
    /* CA04 1000CA04 00A11025 */  or         $v0, $a1, $at
    /* CA08 1000CA08 8FBF002C */  lw         $ra, 0x2C($sp)
    /* CA0C 1000CA0C 27BD0040 */  addiu      $sp, $sp, 0x40
    /* CA10 1000CA10 03E00008 */  jr         $ra
    /* CA14 1000CA14 00000000 */   nop
endlabel func_1000C934
