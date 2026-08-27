nonmatching func_100043B4, 0x58

glabel func_100043B4
    /* 43B4 100043B4 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* 43B8 100043B8 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 43BC 100043BC AFA40018 */  sw         $a0, 0x18($sp)
    /* 43C0 100043C0 AFA5001C */  sw         $a1, 0x1C($sp)
    /* 43C4 100043C4 0C009220 */  jal        osSetIntMask
    /* 43C8 100043C8 24040001 */   addiu     $a0, $zero, 0x1
    /* 43CC 100043CC 8FA30018 */  lw         $v1, 0x18($sp)
    /* 43D0 100043D0 8FB8001C */  lw         $t8, 0x1C($sp)
    /* 43D4 100043D4 3C0100FF */  lui        $at, (0xFFFFFF >> 16)
    /* 43D8 100043D8 8C6EFFFC */  lw         $t6, -0x4($v1)
    /* 43DC 100043DC 3421FFFF */  ori        $at, $at, (0xFFFFFF & 0xFFFF)
    /* 43E0 100043E0 0018CE00 */  sll        $t9, $t8, 24
    /* 43E4 100043E4 01C17824 */  and        $t7, $t6, $at
    /* 43E8 100043E8 01F94025 */  or         $t0, $t7, $t9
    /* 43EC 100043EC 00402025 */  or         $a0, $v0, $zero
    /* 43F0 100043F0 AC68FFFC */  sw         $t0, -0x4($v1)
    /* 43F4 100043F4 0C009220 */  jal        osSetIntMask
    /* 43F8 100043F8 2463FFF4 */   addiu     $v1, $v1, -0xC
    /* 43FC 100043FC 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 4400 10004400 27BD0018 */  addiu      $sp, $sp, 0x18
    /* 4404 10004404 03E00008 */  jr         $ra
    /* 4408 10004408 00000000 */   nop
endlabel func_100043B4
