nonmatching guMtxIdentF, 0x4C

glabel guMtxIdentF
    /* D5070 150A7BC0 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* D5074 150A7BC4 44812000 */  mtc1       $at, $f4
    /* D5078 150A7BC8 AC800004 */  sw         $zero, 0x4($a0)
    /* D507C 150A7BCC E4840000 */  swc1       $f4, 0x0($a0)
    /* D5080 150A7BD0 AC800008 */  sw         $zero, 0x8($a0)
    /* D5084 150A7BD4 AC80000C */  sw         $zero, 0xC($a0)
    /* D5088 150A7BD8 AC800010 */  sw         $zero, 0x10($a0)
    /* D508C 150A7BDC E4840014 */  swc1       $f4, 0x14($a0)
    /* D5090 150A7BE0 AC800018 */  sw         $zero, 0x18($a0)
    /* D5094 150A7BE4 AC80001C */  sw         $zero, 0x1C($a0)
    /* D5098 150A7BE8 AC800020 */  sw         $zero, 0x20($a0)
    /* D509C 150A7BEC AC800024 */  sw         $zero, 0x24($a0)
    /* D50A0 150A7BF0 E4840028 */  swc1       $f4, 0x28($a0)
    /* D50A4 150A7BF4 AC80002C */  sw         $zero, 0x2C($a0)
    /* D50A8 150A7BF8 AC800030 */  sw         $zero, 0x30($a0)
    /* D50AC 150A7BFC AC800034 */  sw         $zero, 0x34($a0)
    /* D50B0 150A7C00 AC800038 */  sw         $zero, 0x38($a0)
    /* D50B4 150A7C04 03E00008 */  jr         $ra
    /* D50B8 150A7C08 E484003C */   swc1      $f4, 0x3C($a0)
endlabel guMtxIdentF
    /* D50BC 150A7C0C 00000000 */  nop
