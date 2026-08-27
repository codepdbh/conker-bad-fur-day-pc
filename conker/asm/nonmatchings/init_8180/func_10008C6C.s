nonmatching func_10008C6C, 0x7C

glabel func_10008C6C
    /* 8C6C 10008C6C 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* 8C70 10008C70 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 8C74 10008C74 AFA40018 */  sw         $a0, 0x18($sp)
    /* 8C78 10008C78 AFA5001C */  sw         $a1, 0x1C($sp)
    /* 8C7C 10008C7C 308600FF */  andi       $a2, $a0, 0xFF
    /* 8C80 10008C80 30A700FF */  andi       $a3, $a1, 0xFF
    /* 8C84 10008C84 0006C100 */  sll        $t8, $a2, 4
    /* 8C88 10008C88 0007C900 */  sll        $t9, $a3, 4
    /* 8C8C 10008C8C 0327C823 */  subu       $t9, $t9, $a3
    /* 8C90 10008C90 0306C023 */  subu       $t8, $t8, $a2
    /* 8C94 10008C94 0018C080 */  sll        $t8, $t8, 2
    /* 8C98 10008C98 0019C880 */  sll        $t9, $t9, 2
    /* 8C9C 10008C9C 0327C823 */  subu       $t9, $t9, $a3
    /* 8CA0 10008CA0 0306C023 */  subu       $t8, $t8, $a2
    /* 8CA4 10008CA4 00067140 */  sll        $t6, $a2, 5
    /* 8CA8 10008CA8 01C67023 */  subu       $t6, $t6, $a2
    /* 8CAC 10008CAC 0018C140 */  sll        $t8, $t8, 5
    /* 8CB0 10008CB0 0019C880 */  sll        $t9, $t9, 2
    /* 8CB4 10008CB4 3C0F8004 */  lui        $t7, %hi(D_8003CA58)
    /* 8CB8 10008CB8 3C098004 */  lui        $t1, %hi(D_8003CD48)
    /* 8CBC 10008CBC 2529CD48 */  addiu      $t1, $t1, %lo(D_8003CD48)
    /* 8CC0 10008CC0 25EFCA58 */  addiu      $t7, $t7, %lo(D_8003CA58)
    /* 8CC4 10008CC4 03194021 */  addu       $t0, $t8, $t9
    /* 8CC8 10008CC8 000E70C0 */  sll        $t6, $t6, 3
    /* 8CCC 10008CCC 01CF2021 */  addu       $a0, $t6, $t7
    /* 8CD0 10008CD0 0C0061B7 */  jal        func_100186DC
    /* 8CD4 10008CD4 01092821 */   addu      $a1, $t0, $t1
    /* 8CD8 10008CD8 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 8CDC 10008CDC 27BD0018 */  addiu      $sp, $sp, 0x18
    /* 8CE0 10008CE0 03E00008 */  jr         $ra
    /* 8CE4 10008CE4 00000000 */   nop
endlabel func_10008C6C
