nonmatching func_151F2CDC, 0x90

glabel func_151F2CDC
    /* 22018C 151F2CDC 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* 220190 151F2CE0 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 220194 151F2CE4 AFA0001C */  sw         $zero, 0x1C($sp)
    /* 220198 151F2CE8 0C009220 */  jal        osSetIntMask
    /* 22019C 151F2CEC 24040001 */   addiu     $a0, $zero, 0x1
    /* 2201A0 151F2CF0 AFA20018 */  sw         $v0, 0x18($sp)
    /* 2201A4 151F2CF4 3C0E800E */  lui        $t6, %hi(D_800E0E04)
    /* 2201A8 151F2CF8 8DCE0E04 */  lw         $t6, %lo(D_800E0E04)($t6)
    /* 2201AC 151F2CFC 24010001 */  addiu      $at, $zero, 0x1
    /* 2201B0 151F2D00 11C1000D */  beq        $t6, $at, .L151F2D38
    /* 2201B4 151F2D04 00000000 */   nop
    /* 2201B8 151F2D08 24010005 */  addiu      $at, $zero, 0x5
    /* 2201BC 151F2D0C 11C1000A */  beq        $t6, $at, .L151F2D38
    /* 2201C0 151F2D10 00000000 */   nop
    /* 2201C4 151F2D14 24010006 */  addiu      $at, $zero, 0x6
    /* 2201C8 151F2D18 11C10007 */  beq        $t6, $at, .L151F2D38
    /* 2201CC 151F2D1C 00000000 */   nop
    /* 2201D0 151F2D20 24010007 */  addiu      $at, $zero, 0x7
    /* 2201D4 151F2D24 11C10004 */  beq        $t6, $at, .L151F2D38
    /* 2201D8 151F2D28 00000000 */   nop
    /* 2201DC 151F2D2C 24010002 */  addiu      $at, $zero, 0x2
    /* 2201E0 151F2D30 15C10004 */  bne        $t6, $at, .L151F2D44
    /* 2201E4 151F2D34 00000000 */   nop
  .L151F2D38:
    /* 2201E8 151F2D38 3C0F800E */  lui        $t7, %hi(D_800E0E04)
    /* 2201EC 151F2D3C 8DEF0E04 */  lw         $t7, %lo(D_800E0E04)($t7)
    /* 2201F0 151F2D40 AFAF001C */  sw         $t7, 0x1C($sp)
  .L151F2D44:
    /* 2201F4 151F2D44 0C009220 */  jal        osSetIntMask
    /* 2201F8 151F2D48 8FA40018 */   lw        $a0, 0x18($sp)
    /* 2201FC 151F2D4C 10000003 */  b          .L151F2D5C
    /* 220200 151F2D50 8FA2001C */   lw        $v0, 0x1C($sp)
    /* 220204 151F2D54 10000001 */  b          .L151F2D5C
    /* 220208 151F2D58 00000000 */   nop
  .L151F2D5C:
    /* 22020C 151F2D5C 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 220210 151F2D60 27BD0020 */  addiu      $sp, $sp, 0x20
    /* 220214 151F2D64 03E00008 */  jr         $ra
    /* 220218 151F2D68 00000000 */   nop
endlabel func_151F2CDC
