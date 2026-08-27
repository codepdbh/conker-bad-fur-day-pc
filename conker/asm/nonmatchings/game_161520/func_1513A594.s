nonmatching func_1513A594, 0x4C

glabel func_1513A594
    /* 167A44 1513A594 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* 167A48 1513A598 AFA70024 */  sw         $a3, 0x24($sp)
    /* 167A4C 1513A59C 30EE00FF */  andi       $t6, $a3, 0xFF
    /* 167A50 1513A5A0 01C03825 */  or         $a3, $t6, $zero
    /* 167A54 1513A5A4 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 167A58 1513A5A8 AFA40018 */  sw         $a0, 0x18($sp)
    /* 167A5C 1513A5AC AFA5001C */  sw         $a1, 0x1C($sp)
    /* 167A60 1513A5B0 AFA60020 */  sw         $a2, 0x20($sp)
    /* 167A64 1513A5B4 8FA4001C */  lw         $a0, 0x1C($sp)
    /* 167A68 1513A5B8 30E500FF */  andi       $a1, $a3, 0xFF
    /* 167A6C 1513A5BC 0D44E978 */  jal        func_1513A5E0
    /* 167A70 1513A5C0 8FA60028 */   lw        $a2, 0x28($sp)
    /* 167A74 1513A5C4 8FA20018 */  lw         $v0, 0x18($sp)
    /* 167A78 1513A5C8 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 167A7C 1513A5CC 8C4F01D4 */  lw         $t7, 0x1D4($v0)
    /* 167A80 1513A5D0 11E00001 */  beqz       $t7, .L1513A5D8
    /* 167A84 1513A5D4 00000000 */   nop
  .L1513A5D8:
    /* 167A88 1513A5D8 03E00008 */  jr         $ra
    /* 167A8C 1513A5DC 27BD0018 */   addiu     $sp, $sp, 0x18
endlabel func_1513A594
