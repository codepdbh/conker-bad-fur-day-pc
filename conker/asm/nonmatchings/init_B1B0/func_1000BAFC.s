nonmatching func_1000BAFC, 0xEC

glabel func_1000BAFC
    /* BAFC 1000BAFC 27BDFFB8 */  addiu      $sp, $sp, -0x48
    /* BB00 1000BB00 AFB00030 */  sw         $s0, 0x30($sp)
    /* BB04 1000BB04 00808025 */  or         $s0, $a0, $zero
    /* BB08 1000BB08 AFBF0034 */  sw         $ra, 0x34($sp)
    /* BB0C 1000BB0C AFA5004C */  sw         $a1, 0x4C($sp)
    /* BB10 1000BB10 AFA60050 */  sw         $a2, 0x50($sp)
    /* BB14 1000BB14 AFA70054 */  sw         $a3, 0x54($sp)
    /* BB18 1000BB18 3C0100FF */  lui        $at, (0xFFFFFF >> 16)
    /* BB1C 1000BB1C 3421FFFF */  ori        $at, $at, (0xFFFFFF & 0xFFFF)
    /* BB20 1000BB20 02017024 */  and        $t6, $s0, $at
    /* BB24 1000BB24 3C01FF00 */  lui        $at, (0xFF000000 >> 16)
    /* BB28 1000BB28 02017824 */  and        $t7, $s0, $at
    /* BB2C 1000BB2C 24180E74 */  addiu      $t8, $zero, 0xE74
    /* BB30 1000BB30 24190A28 */  addiu      $t9, $zero, 0xA28
    /* BB34 1000BB34 27A80040 */  addiu      $t0, $sp, 0x40
    /* BB38 1000BB38 27A90044 */  addiu      $t1, $sp, 0x44
    /* BB3C 1000BB3C AFAE003C */  sw         $t6, 0x3C($sp)
    /* BB40 1000BB40 01E08025 */  or         $s0, $t7, $zero
    /* BB44 1000BB44 AFA9001C */  sw         $t1, 0x1C($sp)
    /* BB48 1000BB48 AFA80018 */  sw         $t0, 0x18($sp)
    /* BB4C 1000BB4C AFB90014 */  sw         $t9, 0x14($sp)
    /* BB50 1000BB50 AFB80010 */  sw         $t8, 0x10($sp)
    /* BB54 1000BB54 00002025 */  or         $a0, $zero, $zero
    /* BB58 1000BB58 00002825 */  or         $a1, $zero, $zero
    /* BB5C 1000BB5C 00003025 */  or         $a2, $zero, $zero
    /* BB60 1000BB60 24077FF8 */  addiu      $a3, $zero, 0x7FF8
    /* BB64 1000BB64 AFA00020 */  sw         $zero, 0x20($sp)
    /* BB68 1000BB68 0C004534 */  jal        func_100114D0
    /* BB6C 1000BB6C AFA00044 */   sw        $zero, 0x44($sp)
    /* BB70 1000BB70 8FA30044 */  lw         $v1, 0x44($sp)
    /* BB74 1000BB74 240A7FFF */  addiu      $t2, $zero, 0x7FFF
    /* BB78 1000BB78 3C01FF00 */  lui        $at, (0xFF000000 >> 16)
    /* BB7C 1000BB7C 01431823 */  subu       $v1, $t2, $v1
    /* BB80 1000BB80 00035C00 */  sll        $t3, $v1, 16
    /* BB84 1000BB84 01616024 */  and        $t4, $t3, $at
    /* BB88 1000BB88 120C0007 */  beq        $s0, $t4, .L1000BBA8
    /* BB8C 1000BB8C AFAC0044 */   sw        $t4, 0x44($sp)
    /* BB90 1000BB90 01808025 */  or         $s0, $t4, $zero
    /* BB94 1000BB94 24040093 */  addiu      $a0, $zero, 0x93
    /* BB98 1000BB98 000C2E02 */  srl        $a1, $t4, 24
    /* BB9C 1000BB9C 24066000 */  addiu      $a2, $zero, 0x6000
    /* BBA0 1000BBA0 0C003962 */  jal        func_1000E588
    /* BBA4 1000BBA4 AFAC0044 */   sw        $t4, 0x44($sp)
  .L1000BBA8:
    /* BBA8 1000BBA8 C7A40058 */  lwc1       $f4, 0x58($sp)
    /* BBAC 1000BBAC 8FA4003C */  lw         $a0, 0x3C($sp)
    /* BBB0 1000BBB0 93A5004F */  lbu        $a1, 0x4F($sp)
    /* BBB4 1000BBB4 8FA60050 */  lw         $a2, 0x50($sp)
    /* BBB8 1000BBB8 8FA70054 */  lw         $a3, 0x54($sp)
    /* BBBC 1000BBBC 0C00314C */  jal        func_1000C530
    /* BBC0 1000BBC0 E7A40010 */   swc1      $f4, 0x10($sp)
    /* BBC4 1000BBC4 3C0100FF */  lui        $at, (0xFFFFFF >> 16)
    /* BBC8 1000BBC8 3421FFFF */  ori        $at, $at, (0xFFFFFF & 0xFFFF)
    /* BBCC 1000BBCC 00416824 */  and        $t5, $v0, $at
    /* BBD0 1000BBD0 020D1025 */  or         $v0, $s0, $t5
    /* BBD4 1000BBD4 8FBF0034 */  lw         $ra, 0x34($sp)
    /* BBD8 1000BBD8 8FB00030 */  lw         $s0, 0x30($sp)
    /* BBDC 1000BBDC 27BD0048 */  addiu      $sp, $sp, 0x48
    /* BBE0 1000BBE0 03E00008 */  jr         $ra
    /* BBE4 1000BBE4 00000000 */   nop
endlabel func_1000BAFC
