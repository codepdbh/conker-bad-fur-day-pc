nonmatching func_150A7CB0, 0x4C

glabel func_150A7CB0
    /* D5160 150A7CB0 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* D5164 150A7CB4 44812000 */  mtc1       $at, $f4
    /* D5168 150A7CB8 AC850000 */  sw         $a1, 0x0($a0)
    /* D516C 150A7CBC AC800004 */  sw         $zero, 0x4($a0)
    /* D5170 150A7CC0 AC800008 */  sw         $zero, 0x8($a0)
    /* D5174 150A7CC4 AC80000C */  sw         $zero, 0xC($a0)
    /* D5178 150A7CC8 AC800010 */  sw         $zero, 0x10($a0)
    /* D517C 150A7CCC AC860014 */  sw         $a2, 0x14($a0)
    /* D5180 150A7CD0 AC800018 */  sw         $zero, 0x18($a0)
    /* D5184 150A7CD4 AC80001C */  sw         $zero, 0x1C($a0)
    /* D5188 150A7CD8 AC800020 */  sw         $zero, 0x20($a0)
    /* D518C 150A7CDC AC800024 */  sw         $zero, 0x24($a0)
    /* D5190 150A7CE0 AC870028 */  sw         $a3, 0x28($a0)
    /* D5194 150A7CE4 AC80002C */  sw         $zero, 0x2C($a0)
    /* D5198 150A7CE8 AC800030 */  sw         $zero, 0x30($a0)
    /* D519C 150A7CEC AC800034 */  sw         $zero, 0x34($a0)
    /* D51A0 150A7CF0 E484003C */  swc1       $f4, 0x3C($a0)
    /* D51A4 150A7CF4 03E00008 */  jr         $ra
    /* D51A8 150A7CF8 AC800038 */   sw        $zero, 0x38($a0)
endlabel func_150A7CB0
    /* D51AC 150A7CFC 00000000 */  nop
