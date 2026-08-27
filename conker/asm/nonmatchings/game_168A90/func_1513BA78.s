nonmatching func_1513BA78, 0x5C

glabel func_1513BA78
    /* 168F28 1513BA78 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* 168F2C 1513BA7C AFA60020 */  sw         $a2, 0x20($sp)
    /* 168F30 1513BA80 30CE00FF */  andi       $t6, $a2, 0xFF
    /* 168F34 1513BA84 01C03025 */  or         $a2, $t6, $zero
    /* 168F38 1513BA88 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 168F3C 1513BA8C 90820048 */  lbu        $v0, 0x48($a0)
    /* 168F40 1513BA90 24010001 */  addiu      $at, $zero, 0x1
    /* 168F44 1513BA94 10410005 */  beq        $v0, $at, .L1513BAAC
    /* 168F48 1513BA98 24010002 */   addiu     $at, $zero, 0x2
    /* 168F4C 1513BA9C 10410007 */  beq        $v0, $at, .L1513BABC
    /* 168F50 1513BAA0 00000000 */   nop
    /* 168F54 1513BAA4 10000008 */  b          .L1513BAC8
    /* 168F58 1513BAA8 8FBF0014 */   lw        $ra, 0x14($sp)
  .L1513BAAC:
    /* 168F5C 1513BAAC 0D442419 */  jal        func_15109064
    /* 168F60 1513BAB0 00000000 */   nop
    /* 168F64 1513BAB4 10000004 */  b          .L1513BAC8
    /* 168F68 1513BAB8 8FBF0014 */   lw        $ra, 0x14($sp)
  .L1513BABC:
    /* 168F6C 1513BABC 0D46E91A */  jal        func_151BA468
    /* 168F70 1513BAC0 00000000 */   nop
    /* 168F74 1513BAC4 8FBF0014 */  lw         $ra, 0x14($sp)
  .L1513BAC8:
    /* 168F78 1513BAC8 27BD0018 */  addiu      $sp, $sp, 0x18
    /* 168F7C 1513BACC 03E00008 */  jr         $ra
    /* 168F80 1513BAD0 00000000 */   nop
endlabel func_1513BA78
