nonmatching func_151F2BE8, 0x64

glabel func_151F2BE8
    /* 220098 151F2BE8 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* 22009C 151F2BEC AFBF0014 */  sw         $ra, 0x14($sp)
    /* 2200A0 151F2BF0 0C009220 */  jal        osSetIntMask
    /* 2200A4 151F2BF4 24040001 */   addiu     $a0, $zero, 0x1
    /* 2200A8 151F2BF8 AFA2001C */  sw         $v0, 0x1C($sp)
    /* 2200AC 151F2BFC 3C0E800E */  lui        $t6, %hi(D_800E0E04)
    /* 2200B0 151F2C00 8DCE0E04 */  lw         $t6, %lo(D_800E0E04)($t6)
    /* 2200B4 151F2C04 24010005 */  addiu      $at, $zero, 0x5
    /* 2200B8 151F2C08 15C10005 */  bne        $t6, $at, .L151F2C20
    /* 2200BC 151F2C0C 00000000 */   nop
    /* 2200C0 151F2C10 240F0006 */  addiu      $t7, $zero, 0x6
    /* 2200C4 151F2C14 3C01800E */  lui        $at, %hi(D_800E0E04)
    /* 2200C8 151F2C18 10000004 */  b          .L151F2C2C
    /* 2200CC 151F2C1C AC2F0E04 */   sw        $t7, %lo(D_800E0E04)($at)
  .L151F2C20:
    /* 2200D0 151F2C20 24180002 */  addiu      $t8, $zero, 0x2
    /* 2200D4 151F2C24 3C01800E */  lui        $at, %hi(D_800E0E04)
    /* 2200D8 151F2C28 AC380E04 */  sw         $t8, %lo(D_800E0E04)($at)
  .L151F2C2C:
    /* 2200DC 151F2C2C 0C009220 */  jal        osSetIntMask
    /* 2200E0 151F2C30 8FA4001C */   lw        $a0, 0x1C($sp)
    /* 2200E4 151F2C34 10000001 */  b          .L151F2C3C
    /* 2200E8 151F2C38 00000000 */   nop
  .L151F2C3C:
    /* 2200EC 151F2C3C 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 2200F0 151F2C40 27BD0020 */  addiu      $sp, $sp, 0x20
    /* 2200F4 151F2C44 03E00008 */  jr         $ra
    /* 2200F8 151F2C48 00000000 */   nop
endlabel func_151F2BE8
