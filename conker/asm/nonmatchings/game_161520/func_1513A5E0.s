nonmatching func_1513A5E0, 0x100

glabel func_1513A5E0
    /* 167A90 1513A5E0 27BDFF98 */  addiu      $sp, $sp, -0x68
    /* 167A94 1513A5E4 3C014080 */  lui        $at, (0x40800000 >> 16)
    /* 167A98 1513A5E8 44810000 */  mtc1       $at, $f0
    /* 167A9C 1513A5EC 3C01800A */  lui        $at, %hi(D_800A4960)
    /* 167AA0 1513A5F0 C4224960 */  lwc1       $f2, %lo(D_800A4960)($at)
    /* 167AA4 1513A5F4 AFBF0024 */  sw         $ra, 0x24($sp)
    /* 167AA8 1513A5F8 AFA40068 */  sw         $a0, 0x68($sp)
    /* 167AAC 1513A5FC AFA5006C */  sw         $a1, 0x6C($sp)
    /* 167AB0 1513A600 AFA60070 */  sw         $a2, 0x70($sp)
    /* 167AB4 1513A604 8FB90068 */  lw         $t9, 0x68($sp)
    /* 167AB8 1513A608 240E0007 */  addiu      $t6, $zero, 0x7
    /* 167ABC 1513A60C 240F0007 */  addiu      $t7, $zero, 0x7
    /* 167AC0 1513A610 AFAE002C */  sw         $t6, 0x2C($sp)
    /* 167AC4 1513A614 AFAF0030 */  sw         $t7, 0x30($sp)
    /* 167AC8 1513A618 8F210000 */  lw         $at, 0x0($t9)
    /* 167ACC 1513A61C 27B80034 */  addiu      $t8, $sp, 0x34
    /* 167AD0 1513A620 44805000 */  mtc1       $zero, $f10
    /* 167AD4 1513A624 AF010000 */  sw         $at, 0x0($t8)
    /* 167AD8 1513A628 8F2A0004 */  lw         $t2, 0x4($t9)
    /* 167ADC 1513A62C 240B00FF */  addiu      $t3, $zero, 0xFF
    /* 167AE0 1513A630 240CFFCE */  addiu      $t4, $zero, -0x32
    /* 167AE4 1513A634 AF0A0004 */  sw         $t2, 0x4($t8)
    /* 167AE8 1513A638 8F210008 */  lw         $at, 0x8($t9)
    /* 167AEC 1513A63C 240D001B */  addiu      $t5, $zero, 0x1B
    /* 167AF0 1513A640 240E0019 */  addiu      $t6, $zero, 0x19
    /* 167AF4 1513A644 AF010008 */  sw         $at, 0x8($t8)
    /* 167AF8 1513A648 3C01800A */  lui        $at, %hi(D_800A4964)
    /* 167AFC 1513A64C C4244964 */  lwc1       $f4, %lo(D_800A4964)($at)
    /* 167B00 1513A650 3C01800A */  lui        $at, %hi(D_800A4968)
    /* 167B04 1513A654 C4264968 */  lwc1       $f6, %lo(D_800A4968)($at)
    /* 167B08 1513A658 3C01800A */  lui        $at, %hi(D_800A496C)
    /* 167B0C 1513A65C C428496C */  lwc1       $f8, %lo(D_800A496C)($at)
    /* 167B10 1513A660 8FB80070 */  lw         $t8, 0x70($sp)
    /* 167B14 1513A664 93A8006F */  lbu        $t0, 0x6F($sp)
    /* 167B18 1513A668 240F0028 */  addiu      $t7, $zero, 0x28
    /* 167B1C 1513A66C 3C05800A */  lui        $a1, %hi(D_800A4268)
    /* 167B20 1513A670 3C06800A */  lui        $a2, %hi(D_800A4270)
    /* 167B24 1513A674 24090001 */  addiu      $t1, $zero, 0x1
    /* 167B28 1513A678 A7A00040 */  sh         $zero, 0x40($sp)
    /* 167B2C 1513A67C A7AB0042 */  sh         $t3, 0x42($sp)
    /* 167B30 1513A680 A7AC0044 */  sh         $t4, 0x44($sp)
    /* 167B34 1513A684 A7AD0046 */  sh         $t5, 0x46($sp)
    /* 167B38 1513A688 E7A00048 */  swc1       $f0, 0x48($sp)
    /* 167B3C 1513A68C E7A0004C */  swc1       $f0, 0x4C($sp)
    /* 167B40 1513A690 A7AE0058 */  sh         $t6, 0x58($sp)
    /* 167B44 1513A694 A7AF005A */  sh         $t7, 0x5A($sp)
    /* 167B48 1513A698 E7A2005C */  swc1       $f2, 0x5C($sp)
    /* 167B4C 1513A69C E7A20060 */  swc1       $f2, 0x60($sp)
    /* 167B50 1513A6A0 AFA90014 */  sw         $t1, 0x14($sp)
    /* 167B54 1513A6A4 24C64270 */  addiu      $a2, $a2, %lo(D_800A4270)
    /* 167B58 1513A6A8 24A54268 */  addiu      $a1, $a1, %lo(D_800A4268)
    /* 167B5C 1513A6AC 27A4002C */  addiu      $a0, $sp, 0x2C
    /* 167B60 1513A6B0 24070002 */  addiu      $a3, $zero, 0x2
    /* 167B64 1513A6B4 E7AA0010 */  swc1       $f10, 0x10($sp)
    /* 167B68 1513A6B8 E7A40050 */  swc1       $f4, 0x50($sp)
    /* 167B6C 1513A6BC E7A60054 */  swc1       $f6, 0x54($sp)
    /* 167B70 1513A6C0 E7A80064 */  swc1       $f8, 0x64($sp)
    /* 167B74 1513A6C4 AFB8001C */  sw         $t8, 0x1C($sp)
    /* 167B78 1513A6C8 0D454864 */  jal        func_15152190
    /* 167B7C 1513A6CC AFA80018 */   sw        $t0, 0x18($sp)
    /* 167B80 1513A6D0 8FBF0024 */  lw         $ra, 0x24($sp)
    /* 167B84 1513A6D4 27BD0068 */  addiu      $sp, $sp, 0x68
    /* 167B88 1513A6D8 03E00008 */  jr         $ra
    /* 167B8C 1513A6DC 00000000 */   nop
endlabel func_1513A5E0
