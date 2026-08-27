nonmatching func_15060A30, 0x6C

glabel func_15060A30
    /* 8DEE0 15060A30 27BDFFD8 */  addiu      $sp, $sp, -0x28
    /* 8DEE4 15060A34 AFBF0024 */  sw         $ra, 0x24($sp)
    /* 8DEE8 15060A38 AFA40028 */  sw         $a0, 0x28($sp)
    /* 8DEEC 15060A3C 8CAE0318 */  lw         $t6, 0x318($a1)
    /* 8DEF0 15060A40 8FA40028 */  lw         $a0, 0x28($sp)
    /* 8DEF4 15060A44 24065DC0 */  addiu      $a2, $zero, 0x5DC0
    /* 8DEF8 15060A48 15C00009 */  bnez       $t6, .L15060A70
    /* 8DEFC 15060A4C 00003825 */   or        $a3, $zero, $zero
    /* 8DF00 15060A50 240F09C4 */  addiu      $t7, $zero, 0x9C4
    /* 8DF04 15060A54 AFAF0010 */  sw         $t7, 0x10($sp)
    /* 8DF08 15060A58 97A4002A */  lhu        $a0, 0x2A($sp)
    /* 8DF0C 15060A5C 24066D60 */  addiu      $a2, $zero, 0x6D60
    /* 8DF10 15060A60 0C0040D1 */  jal        func_10010344
    /* 8DF14 15060A64 240701F4 */   addiu     $a3, $zero, 0x1F4
    /* 8DF18 15060A68 10000009 */  b          .L15060A90
    /* 8DF1C 15060A6C 8FBF0024 */   lw        $ra, 0x24($sp)
  .L15060A70:
    /* 8DF20 15060A70 241801F4 */  addiu      $t8, $zero, 0x1F4
    /* 8DF24 15060A74 241909C4 */  addiu      $t9, $zero, 0x9C4
    /* 8DF28 15060A78 24080001 */  addiu      $t0, $zero, 0x1
    /* 8DF2C 15060A7C AFA80018 */  sw         $t0, 0x18($sp)
    /* 8DF30 15060A80 AFB90014 */  sw         $t9, 0x14($sp)
    /* 8DF34 15060A84 0D4181DE */  jal        func_15060778
    /* 8DF38 15060A88 AFB80010 */   sw        $t8, 0x10($sp)
    /* 8DF3C 15060A8C 8FBF0024 */  lw         $ra, 0x24($sp)
  .L15060A90:
    /* 8DF40 15060A90 27BD0028 */  addiu      $sp, $sp, 0x28
    /* 8DF44 15060A94 03E00008 */  jr         $ra
    /* 8DF48 15060A98 00000000 */   nop
endlabel func_15060A30
