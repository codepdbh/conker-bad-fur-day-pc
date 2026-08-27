nonmatching func_1505ED34, 0x17C

glabel func_1505ED34
    /* 8C1E4 1505ED34 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* 8C1E8 1505ED38 3C07800D */  lui        $a3, %hi(D_800CC2D0)
    /* 8C1EC 1505ED3C 24E7C2D0 */  addiu      $a3, $a3, %lo(D_800CC2D0)
    /* 8C1F0 1505ED40 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 8C1F4 1505ED44 3C0E800D */  lui        $t6, %hi(D_800CC2D0)
    /* 8C1F8 1505ED48 8DCEC2D0 */  lw         $t6, %lo(D_800CC2D0)($t6)
    /* 8C1FC 1505ED4C 00001025 */  or         $v0, $zero, $zero
    /* 8C200 1505ED50 00E02025 */  or         $a0, $a3, $zero
    /* 8C204 1505ED54 11C00008 */  beqz       $t6, .L1505ED78
    /* 8C208 1505ED58 24060019 */   addiu     $a2, $zero, 0x19
    /* 8C20C 1505ED5C 24420001 */  addiu      $v0, $v0, 0x1
  .L1505ED60:
    /* 8C210 1505ED60 28410019 */  slti       $at, $v0, 0x19
    /* 8C214 1505ED64 10200004 */  beqz       $at, .L1505ED78
    /* 8C218 1505ED68 2484032C */   addiu     $a0, $a0, 0x32C
    /* 8C21C 1505ED6C 8C8F0000 */  lw         $t7, 0x0($a0)
    /* 8C220 1505ED70 55E0FFFB */  bnel       $t7, $zero, .L1505ED60
    /* 8C224 1505ED74 24420001 */   addiu     $v0, $v0, 0x1
  .L1505ED78:
    /* 8C228 1505ED78 14460022 */  bne        $v0, $a2, .L1505EE04
    /* 8C22C 1505ED7C 00000000 */   nop
    /* 8C230 1505ED80 8CF80000 */  lw         $t8, 0x0($a3)
    /* 8C234 1505ED84 24030027 */  addiu      $v1, $zero, 0x27
    /* 8C238 1505ED88 00E02025 */  or         $a0, $a3, $zero
    /* 8C23C 1505ED8C 14780005 */  bne        $v1, $t8, .L1505EDA4
    /* 8C240 1505ED90 00001025 */   or        $v0, $zero, $zero
    /* 8C244 1505ED94 3C19800D */  lui        $t9, %hi(D_800CC4A4)
    /* 8C248 1505ED98 8F39C4A4 */  lw         $t9, %lo(D_800CC4A4)($t9)
    /* 8C24C 1505ED9C 1320000B */  beqz       $t9, .L1505EDCC
    /* 8C250 1505EDA0 00000000 */   nop
  .L1505EDA4:
    /* 8C254 1505EDA4 24420001 */  addiu      $v0, $v0, 0x1
  .L1505EDA8:
    /* 8C258 1505EDA8 28410019 */  slti       $at, $v0, 0x19
    /* 8C25C 1505EDAC 10200007 */  beqz       $at, .L1505EDCC
    /* 8C260 1505EDB0 2484032C */   addiu     $a0, $a0, 0x32C
    /* 8C264 1505EDB4 8C880000 */  lw         $t0, 0x0($a0)
    /* 8C268 1505EDB8 5468FFFB */  bnel       $v1, $t0, .L1505EDA8
    /* 8C26C 1505EDBC 24420001 */   addiu     $v0, $v0, 0x1
    /* 8C270 1505EDC0 8C8901D4 */  lw         $t1, 0x1D4($a0)
    /* 8C274 1505EDC4 5520FFF8 */  bnel       $t1, $zero, .L1505EDA8
    /* 8C278 1505EDC8 24420001 */   addiu     $v0, $v0, 0x1
  .L1505EDCC:
    /* 8C27C 1505EDCC 1046000D */  beq        $v0, $a2, .L1505EE04
    /* 8C280 1505EDD0 00000000 */   nop
    /* 8C284 1505EDD4 8C8A0000 */  lw         $t2, 0x0($a0)
    /* 8C288 1505EDD8 00002825 */  or         $a1, $zero, $zero
    /* 8C28C 1505EDDC 11400009 */  beqz       $t2, .L1505EE04
    /* 8C290 1505EDE0 00000000 */   nop
    /* 8C294 1505EDE4 AFA2001C */  sw         $v0, 0x1C($sp)
    /* 8C298 1505EDE8 0D4183CA */  jal        func_15060F28
    /* 8C29C 1505EDEC AFA40018 */   sw        $a0, 0x18($sp)
    /* 8C2A0 1505EDF0 3C07800D */  lui        $a3, %hi(D_800CC2D0)
    /* 8C2A4 1505EDF4 24E7C2D0 */  addiu      $a3, $a3, %lo(D_800CC2D0)
    /* 8C2A8 1505EDF8 8FA2001C */  lw         $v0, 0x1C($sp)
    /* 8C2AC 1505EDFC 8FA40018 */  lw         $a0, 0x18($sp)
    /* 8C2B0 1505EE00 24060019 */  addiu      $a2, $zero, 0x19
  .L1505EE04:
    /* 8C2B4 1505EE04 1446001A */  bne        $v0, $a2, .L1505EE70
    /* 8C2B8 1505EE08 24030027 */   addiu     $v1, $zero, 0x27
    /* 8C2BC 1505EE0C 3C0B800D */  lui        $t3, %hi(D_800CC2D0)
    /* 8C2C0 1505EE10 8D6BC2D0 */  lw         $t3, %lo(D_800CC2D0)($t3)
    /* 8C2C4 1505EE14 00E02025 */  or         $a0, $a3, $zero
    /* 8C2C8 1505EE18 00001025 */  or         $v0, $zero, $zero
    /* 8C2CC 1505EE1C 106B0008 */  beq        $v1, $t3, .L1505EE40
    /* 8C2D0 1505EE20 00000000 */   nop
    /* 8C2D4 1505EE24 24420001 */  addiu      $v0, $v0, 0x1
  .L1505EE28:
    /* 8C2D8 1505EE28 28410019 */  slti       $at, $v0, 0x19
    /* 8C2DC 1505EE2C 10200004 */  beqz       $at, .L1505EE40
    /* 8C2E0 1505EE30 2484032C */   addiu     $a0, $a0, 0x32C
    /* 8C2E4 1505EE34 8C8C0000 */  lw         $t4, 0x0($a0)
    /* 8C2E8 1505EE38 546CFFFB */  bnel       $v1, $t4, .L1505EE28
    /* 8C2EC 1505EE3C 24420001 */   addiu     $v0, $v0, 0x1
  .L1505EE40:
    /* 8C2F0 1505EE40 1046000B */  beq        $v0, $a2, .L1505EE70
    /* 8C2F4 1505EE44 00000000 */   nop
    /* 8C2F8 1505EE48 8C8D0000 */  lw         $t5, 0x0($a0)
    /* 8C2FC 1505EE4C 00002825 */  or         $a1, $zero, $zero
    /* 8C300 1505EE50 11A00007 */  beqz       $t5, .L1505EE70
    /* 8C304 1505EE54 00000000 */   nop
    /* 8C308 1505EE58 AFA2001C */  sw         $v0, 0x1C($sp)
    /* 8C30C 1505EE5C 0D4183CA */  jal        func_15060F28
    /* 8C310 1505EE60 AFA40018 */   sw        $a0, 0x18($sp)
    /* 8C314 1505EE64 8FA2001C */  lw         $v0, 0x1C($sp)
    /* 8C318 1505EE68 8FA40018 */  lw         $a0, 0x18($sp)
    /* 8C31C 1505EE6C 24060019 */  addiu      $a2, $zero, 0x19
  .L1505EE70:
    /* 8C320 1505EE70 14460008 */  bne        $v0, $a2, .L1505EE94
    /* 8C324 1505EE74 00000000 */   nop
    /* 8C328 1505EE78 8C8E0000 */  lw         $t6, 0x0($a0)
    /* 8C32C 1505EE7C 00002825 */  or         $a1, $zero, $zero
    /* 8C330 1505EE80 11C00004 */  beqz       $t6, .L1505EE94
    /* 8C334 1505EE84 00000000 */   nop
    /* 8C338 1505EE88 0D4183CA */  jal        func_15060F28
    /* 8C33C 1505EE8C AFA40018 */   sw        $a0, 0x18($sp)
    /* 8C340 1505EE90 8FA40018 */  lw         $a0, 0x18($sp)
  .L1505EE94:
    /* 8C344 1505EE94 0D417C62 */  jal        func_1505F188
    /* 8C348 1505EE98 AFA40018 */   sw        $a0, 0x18($sp)
    /* 8C34C 1505EE9C 8FA20018 */  lw         $v0, 0x18($sp)
    /* 8C350 1505EEA0 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 8C354 1505EEA4 27BD0020 */  addiu      $sp, $sp, 0x20
    /* 8C358 1505EEA8 03E00008 */  jr         $ra
    /* 8C35C 1505EEAC 00000000 */   nop
endlabel func_1505ED34
