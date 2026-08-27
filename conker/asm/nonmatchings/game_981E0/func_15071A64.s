nonmatching func_15071A64, 0xB4

glabel func_15071A64
    /* 9EF14 15071A64 27BDFFA8 */  addiu      $sp, $sp, -0x58
    /* 9EF18 15071A68 AFBF001C */  sw         $ra, 0x1C($sp)
    /* 9EF1C 15071A6C AFA40058 */  sw         $a0, 0x58($sp)
    /* 9EF20 15071A70 0D42B688 */  jal        func_150ADA20
    /* 9EF24 15071A74 00000000 */   nop
    /* 9EF28 15071A78 304E0001 */  andi       $t6, $v0, 0x1
    /* 9EF2C 15071A7C 15C00022 */  bnez       $t6, .L15071B08
    /* 9EF30 15071A80 3C05800D */   lui       $a1, %hi(D_800D154C)
    /* 9EF34 15071A84 8CA5154C */  lw         $a1, %lo(D_800D154C)($a1)
    /* 9EF38 15071A88 8CAF01D4 */  lw         $t7, 0x1D4($a1)
    /* 9EF3C 15071A8C 51E0001F */  beql       $t7, $zero, .L15071B0C
    /* 9EF40 15071A90 8FBF001C */   lw        $ra, 0x1C($sp)
    /* 9EF44 15071A94 90B80074 */  lbu        $t8, 0x74($a1)
    /* 9EF48 15071A98 2401000F */  addiu      $at, $zero, 0xF
    /* 9EF4C 15071A9C 3C02800D */  lui        $v0, %hi(D_800CC2D0)
    /* 9EF50 15071AA0 3319000F */  andi       $t9, $t8, 0xF
    /* 9EF54 15071AA4 13210018 */  beq        $t9, $at, .L15071B08
    /* 9EF58 15071AA8 2442C2D0 */   addiu     $v0, $v0, %lo(D_800CC2D0)
    /* 9EF5C 15071AAC 90480104 */  lbu        $t0, 0x104($v0)
    /* 9EF60 15071AB0 51000016 */  beql       $t0, $zero, .L15071B0C
    /* 9EF64 15071AB4 8FBF001C */   lw        $ra, 0x1C($sp)
    /* 9EF68 15071AB8 904901CA */  lbu        $t1, 0x1CA($v0)
    /* 9EF6C 15071ABC 59200013 */  blezl      $t1, .L15071B0C
    /* 9EF70 15071AC0 8FBF001C */   lw        $ra, 0x1C($sp)
    /* 9EF74 15071AC4 0D411C57 */  jal        func_1504715C
    /* 9EF78 15071AC8 27A40028 */   addiu     $a0, $sp, 0x28
    /* 9EF7C 15071ACC 3C0A800D */  lui        $t2, %hi(D_800D154C)
    /* 9EF80 15071AD0 8D4A154C */  lw         $t2, %lo(D_800D154C)($t2)
    /* 9EF84 15071AD4 3C04800A */  lui        $a0, %hi(D_80099BBC)
    /* 9EF88 15071AD8 24849BBC */  addiu      $a0, $a0, %lo(D_80099BBC)
    /* 9EF8C 15071ADC 8D4601D4 */  lw         $a2, 0x1D4($t2)
    /* 9EF90 15071AE0 27A5004C */  addiu      $a1, $sp, 0x4C
    /* 9EF94 15071AE4 0D450C4D */  jal        func_15143134
    /* 9EF98 15071AE8 24C603C0 */   addiu     $a2, $a2, 0x3C0
    /* 9EF9C 15071AEC 240B0001 */  addiu      $t3, $zero, 0x1
    /* 9EFA0 15071AF0 AFAB0010 */  sw         $t3, 0x10($sp)
    /* 9EFA4 15071AF4 27A4004C */  addiu      $a0, $sp, 0x4C
    /* 9EFA8 15071AF8 27A50028 */  addiu      $a1, $sp, 0x28
    /* 9EFAC 15071AFC 00003025 */  or         $a2, $zero, $zero
    /* 9EFB0 15071B00 0D477121 */  jal        func_151DC484
    /* 9EFB4 15071B04 240700FF */   addiu     $a3, $zero, 0xFF
  .L15071B08:
    /* 9EFB8 15071B08 8FBF001C */  lw         $ra, 0x1C($sp)
  .L15071B0C:
    /* 9EFBC 15071B0C 27BD0058 */  addiu      $sp, $sp, 0x58
    /* 9EFC0 15071B10 03E00008 */  jr         $ra
    /* 9EFC4 15071B14 00000000 */   nop
endlabel func_15071A64
