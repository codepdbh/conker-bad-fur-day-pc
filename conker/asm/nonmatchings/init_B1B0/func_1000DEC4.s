nonmatching func_1000DEC4, 0xA4

glabel func_1000DEC4
    /* DEC4 1000DEC4 27BDFFD8 */  addiu      $sp, $sp, -0x28
    /* DEC8 1000DEC8 AFBF0024 */  sw         $ra, 0x24($sp)
    /* DECC 1000DECC AFB30020 */  sw         $s3, 0x20($sp)
    /* DED0 1000DED0 AFB2001C */  sw         $s2, 0x1C($sp)
    /* DED4 1000DED4 AFB10018 */  sw         $s1, 0x18($sp)
    /* DED8 1000DED8 AFB00014 */  sw         $s0, 0x14($sp)
    /* DEDC 1000DEDC 3C108004 */  lui        $s0, %hi(D_800419A8)
    /* DEE0 1000DEE0 3C138004 */  lui        $s3, %hi(D_800417B0)
    /* DEE4 1000DEE4 3C128004 */  lui        $s2, %hi(D_80041E58)
    /* DEE8 1000DEE8 26521E58 */  addiu      $s2, $s2, %lo(D_80041E58)
    /* DEEC 1000DEEC 267317B0 */  addiu      $s3, $s3, %lo(D_800417B0)
    /* DEF0 1000DEF0 261019A8 */  addiu      $s0, $s0, %lo(D_800419A8)
    /* DEF4 1000DEF4 2411FFFF */  addiu      $s1, $zero, -0x1
  .L1000DEF8:
    /* DEF8 1000DEF8 8E020000 */  lw         $v0, 0x0($s0)
    /* DEFC 1000DEFC 16220006 */  bne        $s1, $v0, .L1000DF18
    /* DF00 1000DF00 00000000 */   nop
    /* DF04 1000DF04 8E0E0004 */  lw         $t6, 0x4($s0)
    /* DF08 1000DF08 522E000E */  beql       $s1, $t6, .L1000DF44
    /* DF0C 1000DF0C 26100064 */   addiu     $s0, $s0, 0x64
    /* DF10 1000DF10 1000000B */  b          .L1000DF40
    /* DF14 1000DF14 AE110004 */   sw        $s1, 0x4($s0)
  .L1000DF18:
    /* DF18 1000DF18 0C00214F */  jal        func_1000853C
    /* DF1C 1000DF1C 304400FF */   andi      $a0, $v0, 0xFF
    /* DF20 1000DF20 54400008 */  bnel       $v0, $zero, .L1000DF44
    /* DF24 1000DF24 26100064 */   addiu     $s0, $s0, 0x64
    /* DF28 1000DF28 8E0F0000 */  lw         $t7, 0x0($s0)
    /* DF2C 1000DF2C 000FC080 */  sll        $t8, $t7, 2
    /* DF30 1000DF30 0278C821 */  addu       $t9, $s3, $t8
    /* DF34 1000DF34 AF200000 */  sw         $zero, 0x0($t9)
    /* DF38 1000DF38 AE110000 */  sw         $s1, 0x0($s0)
    /* DF3C 1000DF3C AE110004 */  sw         $s1, 0x4($s0)
  .L1000DF40:
    /* DF40 1000DF40 26100064 */  addiu      $s0, $s0, 0x64
  .L1000DF44:
    /* DF44 1000DF44 1612FFEC */  bne        $s0, $s2, .L1000DEF8
    /* DF48 1000DF48 AE00FFFC */   sw        $zero, -0x4($s0)
    /* DF4C 1000DF4C 8FBF0024 */  lw         $ra, 0x24($sp)
    /* DF50 1000DF50 8FB00014 */  lw         $s0, 0x14($sp)
    /* DF54 1000DF54 8FB10018 */  lw         $s1, 0x18($sp)
    /* DF58 1000DF58 8FB2001C */  lw         $s2, 0x1C($sp)
    /* DF5C 1000DF5C 8FB30020 */  lw         $s3, 0x20($sp)
    /* DF60 1000DF60 03E00008 */  jr         $ra
    /* DF64 1000DF64 27BD0028 */   addiu     $sp, $sp, 0x28
endlabel func_1000DEC4
