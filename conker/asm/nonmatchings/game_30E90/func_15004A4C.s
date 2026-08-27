nonmatching func_15004A4C, 0x60

glabel func_15004A4C
    /* 31EFC 15004A4C 3C04800E */  lui        $a0, %hi(D_800DBEF0)
    /* 31F00 15004A50 2484BEF0 */  addiu      $a0, $a0, %lo(D_800DBEF0)
    /* 31F04 15004A54 8C8E0000 */  lw         $t6, 0x0($a0)
    /* 31F08 15004A58 00001025 */  or         $v0, $zero, $zero
    /* 31F0C 15004A5C 00001825 */  or         $v1, $zero, $zero
    /* 31F10 15004A60 19C00010 */  blez       $t6, .L15004AA4
    /* 31F14 15004A64 3C06800E */   lui       $a2, %hi(D_800DBEFC)
    /* 31F18 15004A68 3C05800E */  lui        $a1, %hi(D_800DBEF8)
    /* 31F1C 15004A6C 24A5BEF8 */  addiu      $a1, $a1, %lo(D_800DBEF8)
    /* 31F20 15004A70 24C6BEFC */  addiu      $a2, $a2, %lo(D_800DBEFC)
    /* 31F24 15004A74 8CAF0000 */  lw         $t7, 0x0($a1)
  .L15004A78:
    /* 31F28 15004A78 01E3C021 */  addu       $t8, $t7, $v1
    /* 31F2C 15004A7C AF000000 */  sw         $zero, 0x0($t8)
    /* 31F30 15004A80 8CD90000 */  lw         $t9, 0x0($a2)
    /* 31F34 15004A84 24630004 */  addiu      $v1, $v1, 0x4
    /* 31F38 15004A88 03224021 */  addu       $t0, $t9, $v0
    /* 31F3C 15004A8C A1000000 */  sb         $zero, 0x0($t0)
    /* 31F40 15004A90 8C890000 */  lw         $t1, 0x0($a0)
    /* 31F44 15004A94 24420001 */  addiu      $v0, $v0, 0x1
    /* 31F48 15004A98 0049082A */  slt        $at, $v0, $t1
    /* 31F4C 15004A9C 5420FFF6 */  bnel       $at, $zero, .L15004A78
    /* 31F50 15004AA0 8CAF0000 */   lw        $t7, 0x0($a1)
  .L15004AA4:
    /* 31F54 15004AA4 03E00008 */  jr         $ra
    /* 31F58 15004AA8 00000000 */   nop
endlabel func_15004A4C
