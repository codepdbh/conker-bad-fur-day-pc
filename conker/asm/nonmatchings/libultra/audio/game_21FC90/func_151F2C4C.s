nonmatching func_151F2C4C, 0x90

glabel func_151F2C4C
    /* 2200FC 151F2C4C 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* 220100 151F2C50 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 220104 151F2C54 0C009220 */  jal        osSetIntMask
    /* 220108 151F2C58 24040001 */   addiu     $a0, $zero, 0x1
    /* 22010C 151F2C5C AFA2001C */  sw         $v0, 0x1C($sp)
    /* 220110 151F2C60 3C0E800E */  lui        $t6, %hi(D_800E0E04)
    /* 220114 151F2C64 8DCE0E04 */  lw         $t6, %lo(D_800E0E04)($t6)
    /* 220118 151F2C68 24010002 */  addiu      $at, $zero, 0x2
    /* 22011C 151F2C6C 15C10008 */  bne        $t6, $at, .L151F2C90
    /* 220120 151F2C70 00000000 */   nop
    /* 220124 151F2C74 240F0005 */  addiu      $t7, $zero, 0x5
    /* 220128 151F2C78 3C01800E */  lui        $at, %hi(D_800E0E18)
    /* 22012C 151F2C7C A02F0E18 */  sb         $t7, %lo(D_800E0E18)($at)
    /* 220130 151F2C80 24180007 */  addiu      $t8, $zero, 0x7
    /* 220134 151F2C84 3C01800E */  lui        $at, %hi(D_800E0E04)
    /* 220138 151F2C88 1000000C */  b          .L151F2CBC
    /* 22013C 151F2C8C AC380E04 */   sw        $t8, %lo(D_800E0E04)($at)
  .L151F2C90:
    /* 220140 151F2C90 3C19800E */  lui        $t9, %hi(D_800E0E04)
    /* 220144 151F2C94 8F390E04 */  lw         $t9, %lo(D_800E0E04)($t9)
    /* 220148 151F2C98 24010006 */  addiu      $at, $zero, 0x6
    /* 22014C 151F2C9C 17210007 */  bne        $t9, $at, .L151F2CBC
    /* 220150 151F2CA0 00000000 */   nop
    /* 220154 151F2CA4 24080005 */  addiu      $t0, $zero, 0x5
    /* 220158 151F2CA8 3C01800E */  lui        $at, %hi(D_800E0E18)
    /* 22015C 151F2CAC A0280E18 */  sb         $t0, %lo(D_800E0E18)($at)
    /* 220160 151F2CB0 24090005 */  addiu      $t1, $zero, 0x5
    /* 220164 151F2CB4 3C01800E */  lui        $at, %hi(D_800E0E04)
    /* 220168 151F2CB8 AC290E04 */  sw         $t1, %lo(D_800E0E04)($at)
  .L151F2CBC:
    /* 22016C 151F2CBC 0C009220 */  jal        osSetIntMask
    /* 220170 151F2CC0 8FA4001C */   lw        $a0, 0x1C($sp)
    /* 220174 151F2CC4 10000001 */  b          .L151F2CCC
    /* 220178 151F2CC8 00000000 */   nop
  .L151F2CCC:
    /* 22017C 151F2CCC 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 220180 151F2CD0 27BD0020 */  addiu      $sp, $sp, 0x20
    /* 220184 151F2CD4 03E00008 */  jr         $ra
    /* 220188 151F2CD8 00000000 */   nop
endlabel func_151F2C4C
