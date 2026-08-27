nonmatching func_15134C98, 0x3C

glabel func_15134C98
    /* 162148 15134C98 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* 16214C 15134C9C AFA60020 */  sw         $a2, 0x20($sp)
    /* 162150 15134CA0 30CE00FF */  andi       $t6, $a2, 0xFF
    /* 162154 15134CA4 01C03025 */  or         $a2, $t6, $zero
    /* 162158 15134CA8 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 16215C 15134CAC 908F0028 */  lbu        $t7, 0x28($a0)
    /* 162160 15134CB0 24010001 */  addiu      $at, $zero, 0x1
    /* 162164 15134CB4 55E10004 */  bnel       $t7, $at, .L15134CC8
    /* 162168 15134CB8 8FBF0014 */   lw        $ra, 0x14($sp)
    /* 16216C 15134CBC 0D46F169 */  jal        func_151BC5A4
    /* 162170 15134CC0 00000000 */   nop
    /* 162174 15134CC4 8FBF0014 */  lw         $ra, 0x14($sp)
  .L15134CC8:
    /* 162178 15134CC8 27BD0018 */  addiu      $sp, $sp, 0x18
    /* 16217C 15134CCC 03E00008 */  jr         $ra
    /* 162180 15134CD0 00000000 */   nop
endlabel func_15134C98
