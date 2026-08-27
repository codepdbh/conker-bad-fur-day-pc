nonmatching func_15079790, 0xF0

glabel func_15079790
    /* A6C40 15079790 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* A6C44 15079794 AFBF0014 */  sw         $ra, 0x14($sp)
    /* A6C48 15079798 3C0E800D */  lui        $t6, %hi(D_800D1892)
    /* A6C4C 1507979C 91CE1892 */  lbu        $t6, %lo(D_800D1892)($t6)
    /* A6C50 150797A0 3C18800D */  lui        $t8, %hi(D_800D154C)
    /* A6C54 150797A4 3C08800D */  lui        $t0, %hi(D_800D154C)
    /* A6C58 150797A8 11C00005 */  beqz       $t6, .L150797C0
    /* A6C5C 150797AC 00000000 */   nop
    /* A6C60 150797B0 8F18154C */  lw         $t8, %lo(D_800D154C)($t8)
    /* A6C64 150797B4 240F00FF */  addiu      $t7, $zero, 0xFF
    /* A6C68 150797B8 1000002D */  b          .L15079870
    /* A6C6C 150797BC A30F0004 */   sb        $t7, 0x4($t8)
  .L150797C0:
    /* A6C70 150797C0 8D08154C */  lw         $t0, %lo(D_800D154C)($t0)
    /* A6C74 150797C4 2419003A */  addiu      $t9, $zero, 0x3A
    /* A6C78 150797C8 0D42B688 */  jal        func_150ADA20
    /* A6C7C 150797CC A1190004 */   sb        $t9, 0x4($t0)
    /* A6C80 150797D0 240101F4 */  addiu      $at, $zero, 0x1F4
    /* A6C84 150797D4 0041001B */  divu       $zero, $v0, $at
    /* A6C88 150797D8 00004810 */  mfhi       $t1
    /* A6C8C 150797DC 252AFF06 */  addiu      $t2, $t1, -0xFA
    /* A6C90 150797E0 0D42B688 */  jal        func_150ADA20
    /* A6C94 150797E4 A7AA001E */   sh        $t2, 0x1E($sp)
    /* A6C98 150797E8 240101F4 */  addiu      $at, $zero, 0x1F4
    /* A6C9C 150797EC 0041001B */  divu       $zero, $v0, $at
    /* A6CA0 150797F0 3C05800D */  lui        $a1, %hi(D_800D154C)
    /* A6CA4 150797F4 24A5154C */  addiu      $a1, $a1, %lo(D_800D154C)
    /* A6CA8 150797F8 8CA30000 */  lw         $v1, 0x0($a1)
    /* A6CAC 150797FC 3C04800D */  lui        $a0, %hi(D_800D2104)
    /* A6CB0 15079800 24842104 */  addiu      $a0, $a0, %lo(D_800D2104)
    /* A6CB4 15079804 906C013F */  lbu        $t4, 0x13F($v1)
    /* A6CB8 15079808 8C8B0000 */  lw         $t3, 0x0($a0)
    /* A6CBC 1507980C 87B9001E */  lh         $t9, 0x1E($sp)
    /* A6CC0 15079810 000C6880 */  sll        $t5, $t4, 2
    /* A6CC4 15079814 016D7021 */  addu       $t6, $t3, $t5
    /* A6CC8 15079818 8DCF0000 */  lw         $t7, 0x0($t6)
    /* A6CCC 1507981C 85F80000 */  lh         $t8, 0x0($t7)
    /* A6CD0 15079820 00007810 */  mfhi       $t7
    /* A6CD4 15079824 03194021 */  addu       $t0, $t8, $t9
    /* A6CD8 15079828 44882000 */  mtc1       $t0, $f4
    /* A6CDC 1507982C 25F8FF06 */  addiu      $t8, $t7, -0xFA
    /* A6CE0 15079830 0018CC00 */  sll        $t9, $t8, 16
    /* A6CE4 15079834 468021A0 */  cvt.s.w    $f6, $f4
    /* A6CE8 15079838 00194403 */  sra        $t0, $t9, 16
    /* A6CEC 1507983C E4660014 */  swc1       $f6, 0x14($v1)
    /* A6CF0 15079840 8CA30000 */  lw         $v1, 0x0($a1)
    /* A6CF4 15079844 8C890000 */  lw         $t1, 0x0($a0)
    /* A6CF8 15079848 906A013F */  lbu        $t2, 0x13F($v1)
    /* A6CFC 1507984C 000A6080 */  sll        $t4, $t2, 2
    /* A6D00 15079850 012C5821 */  addu       $t3, $t1, $t4
    /* A6D04 15079854 8D6D0000 */  lw         $t5, 0x0($t3)
    /* A6D08 15079858 85AE0004 */  lh         $t6, 0x4($t5)
    /* A6D0C 1507985C 01C85021 */  addu       $t2, $t6, $t0
    /* A6D10 15079860 448A4000 */  mtc1       $t2, $f8
    /* A6D14 15079864 00000000 */  nop
    /* A6D18 15079868 468042A0 */  cvt.s.w    $f10, $f8
    /* A6D1C 1507986C E46A001C */  swc1       $f10, 0x1C($v1)
  .L15079870:
    /* A6D20 15079870 8FBF0014 */  lw         $ra, 0x14($sp)
    /* A6D24 15079874 27BD0020 */  addiu      $sp, $sp, 0x20
    /* A6D28 15079878 03E00008 */  jr         $ra
    /* A6D2C 1507987C 00000000 */   nop
endlabel func_15079790
