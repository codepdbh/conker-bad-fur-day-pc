nonmatching osPfsIsPlug2, 0x1A0

glabel osPfsIsPlug2
    /* 21F1C0 151F1D10 27BDFFC0 */  addiu      $sp, $sp, -0x40
    /* 21F1C4 151F1D14 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 21F1C8 151F1D18 240E0003 */  addiu      $t6, $zero, 0x3
    /* 21F1CC 151F1D1C AFA40040 */  sw         $a0, 0x40($sp)
    /* 21F1D0 151F1D20 AFA50044 */  sw         $a1, 0x44($sp)
    /* 21F1D4 151F1D24 AFA0003C */  sw         $zero, 0x3C($sp)
    /* 21F1D8 151F1D28 A3A0001F */  sb         $zero, 0x1F($sp)
    /* 21F1DC 151F1D2C 0C0095D4 */  jal        __osSiGetAccess
    /* 21F1E0 151F1D30 AFAE0018 */   sw        $t6, 0x18($sp)
  .L151F1D34:
    /* 21F1E4 151F1D34 0C00945C */  jal        __osPfsRequestData
    /* 21F1E8 151F1D38 00002025 */   or        $a0, $zero, $zero
    /* 21F1EC 151F1D3C 3C058004 */  lui        $a1, %hi(D_800429D0)
    /* 21F1F0 151F1D40 24A529D0 */  addiu      $a1, $a1, %lo(D_800429D0)
    /* 21F1F4 151F1D44 0C0095F0 */  jal        __osSiRawStartDma
    /* 21F1F8 151F1D48 24040001 */   addiu     $a0, $zero, 0x1
    /* 21F1FC 151F1D4C AFA2003C */  sw         $v0, 0x3C($sp)
    /* 21F200 151F1D50 8FA40040 */  lw         $a0, 0x40($sp)
    /* 21F204 151F1D54 27A50038 */  addiu      $a1, $sp, 0x38
    /* 21F208 151F1D58 0C008D10 */  jal        osRecvMesg
    /* 21F20C 151F1D5C 24060001 */   addiu     $a2, $zero, 0x1
    /* 21F210 151F1D60 3C058004 */  lui        $a1, %hi(D_800429D0)
    /* 21F214 151F1D64 24A529D0 */  addiu      $a1, $a1, %lo(D_800429D0)
    /* 21F218 151F1D68 0C0095F0 */  jal        __osSiRawStartDma
    /* 21F21C 151F1D6C 00002025 */   or        $a0, $zero, $zero
    /* 21F220 151F1D70 AFA2003C */  sw         $v0, 0x3C($sp)
    /* 21F224 151F1D74 8FA40040 */  lw         $a0, 0x40($sp)
    /* 21F228 151F1D78 27A50038 */  addiu      $a1, $sp, 0x38
    /* 21F22C 151F1D7C 0C008D10 */  jal        osRecvMesg
    /* 21F230 151F1D80 24060001 */   addiu     $a2, $zero, 0x1
    /* 21F234 151F1D84 27A40037 */  addiu      $a0, $sp, 0x37
    /* 21F238 151F1D88 0C00949B */  jal        __osPfsGetInitData
    /* 21F23C 151F1D8C 27A50024 */   addiu     $a1, $sp, 0x24
    /* 21F240 151F1D90 3C0F8004 */  lui        $t7, %hi(__osMaxControllers)
    /* 21F244 151F1D94 91EF2A51 */  lbu        $t7, %lo(__osMaxControllers)($t7)
    /* 21F248 151F1D98 AFA00020 */  sw         $zero, 0x20($sp)
    /* 21F24C 151F1D9C 19E00014 */  blez       $t7, .L151F1DF0
    /* 21F250 151F1DA0 00000000 */   nop
  .L151F1DA4:
    /* 21F254 151F1DA4 8FB80020 */  lw         $t8, 0x20($sp)
    /* 21F258 151F1DA8 0018C880 */  sll        $t9, $t8, 2
    /* 21F25C 151F1DAC 03B94021 */  addu       $t0, $sp, $t9
    /* 21F260 151F1DB0 91080026 */  lbu        $t0, 0x26($t0)
    /* 21F264 151F1DB4 31090004 */  andi       $t1, $t0, 0x4
    /* 21F268 151F1DB8 15200005 */  bnez       $t1, .L151F1DD0
    /* 21F26C 151F1DBC 00000000 */   nop
    /* 21F270 151F1DC0 8FAA0018 */  lw         $t2, 0x18($sp)
    /* 21F274 151F1DC4 254BFFFF */  addiu      $t3, $t2, -0x1
    /* 21F278 151F1DC8 10000009 */  b          .L151F1DF0
    /* 21F27C 151F1DCC AFAB0018 */   sw        $t3, 0x18($sp)
  .L151F1DD0:
    /* 21F280 151F1DD0 8FAC0020 */  lw         $t4, 0x20($sp)
    /* 21F284 151F1DD4 3C0E8004 */  lui        $t6, %hi(__osMaxControllers)
    /* 21F288 151F1DD8 91CE2A51 */  lbu        $t6, %lo(__osMaxControllers)($t6)
    /* 21F28C 151F1DDC 258D0001 */  addiu      $t5, $t4, 0x1
    /* 21F290 151F1DE0 AFAD0020 */  sw         $t5, 0x20($sp)
    /* 21F294 151F1DE4 01AE082A */  slt        $at, $t5, $t6
    /* 21F298 151F1DE8 1420FFEE */  bnez       $at, .L151F1DA4
    /* 21F29C 151F1DEC 00000000 */   nop
  .L151F1DF0:
    /* 21F2A0 151F1DF0 3C0F8004 */  lui        $t7, %hi(__osMaxControllers)
    /* 21F2A4 151F1DF4 91EF2A51 */  lbu        $t7, %lo(__osMaxControllers)($t7)
    /* 21F2A8 151F1DF8 8FB80020 */  lw         $t8, 0x20($sp)
    /* 21F2AC 151F1DFC 15F80002 */  bne        $t7, $t8, .L151F1E08
    /* 21F2B0 151F1E00 00000000 */   nop
    /* 21F2B4 151F1E04 AFA00018 */  sw         $zero, 0x18($sp)
  .L151F1E08:
    /* 21F2B8 151F1E08 8FB90018 */  lw         $t9, 0x18($sp)
    /* 21F2BC 151F1E0C 1F20FFC9 */  bgtz       $t9, .L151F1D34
    /* 21F2C0 151F1E10 00000000 */   nop
    /* 21F2C4 151F1E14 3C088004 */  lui        $t0, %hi(__osMaxControllers)
    /* 21F2C8 151F1E18 91082A51 */  lbu        $t0, %lo(__osMaxControllers)($t0)
    /* 21F2CC 151F1E1C AFA00020 */  sw         $zero, 0x20($sp)
    /* 21F2D0 151F1E20 19000019 */  blez       $t0, .L151F1E88
    /* 21F2D4 151F1E24 00000000 */   nop
  .L151F1E28:
    /* 21F2D8 151F1E28 8FA90020 */  lw         $t1, 0x20($sp)
    /* 21F2DC 151F1E2C 27AB0024 */  addiu      $t3, $sp, 0x24
    /* 21F2E0 151F1E30 00095080 */  sll        $t2, $t1, 2
    /* 21F2E4 151F1E34 014B6021 */  addu       $t4, $t2, $t3
    /* 21F2E8 151F1E38 918D0003 */  lbu        $t5, 0x3($t4)
    /* 21F2EC 151F1E3C 15A0000A */  bnez       $t5, .L151F1E68
    /* 21F2F0 151F1E40 00000000 */   nop
    /* 21F2F4 151F1E44 918E0002 */  lbu        $t6, 0x2($t4)
    /* 21F2F8 151F1E48 31CF0001 */  andi       $t7, $t6, 0x1
    /* 21F2FC 151F1E4C 11E00006 */  beqz       $t7, .L151F1E68
    /* 21F300 151F1E50 00000000 */   nop
    /* 21F304 151F1E54 93B8001F */  lbu        $t8, 0x1F($sp)
    /* 21F308 151F1E58 24190001 */  addiu      $t9, $zero, 0x1
    /* 21F30C 151F1E5C 01394004 */  sllv       $t0, $t9, $t1
    /* 21F310 151F1E60 03085025 */  or         $t2, $t8, $t0
    /* 21F314 151F1E64 A3AA001F */  sb         $t2, 0x1F($sp)
  .L151F1E68:
    /* 21F318 151F1E68 8FAB0020 */  lw         $t3, 0x20($sp)
    /* 21F31C 151F1E6C 3C0C8004 */  lui        $t4, %hi(__osMaxControllers)
    /* 21F320 151F1E70 918C2A51 */  lbu        $t4, %lo(__osMaxControllers)($t4)
    /* 21F324 151F1E74 256D0001 */  addiu      $t5, $t3, 0x1
    /* 21F328 151F1E78 AFAD0020 */  sw         $t5, 0x20($sp)
    /* 21F32C 151F1E7C 01AC082A */  slt        $at, $t5, $t4
    /* 21F330 151F1E80 1420FFE9 */  bnez       $at, .L151F1E28
    /* 21F334 151F1E84 00000000 */   nop
  .L151F1E88:
    /* 21F338 151F1E88 0C0095E5 */  jal        __osSiRelAccess
    /* 21F33C 151F1E8C 00000000 */   nop
    /* 21F340 151F1E90 93AE001F */  lbu        $t6, 0x1F($sp)
    /* 21F344 151F1E94 8FAF0044 */  lw         $t7, 0x44($sp)
    /* 21F348 151F1E98 A1EE0000 */  sb         $t6, 0x0($t7)
    /* 21F34C 151F1E9C 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 21F350 151F1EA0 8FA2003C */  lw         $v0, 0x3C($sp)
    /* 21F354 151F1EA4 27BD0040 */  addiu      $sp, $sp, 0x40
    /* 21F358 151F1EA8 03E00008 */  jr         $ra
    /* 21F35C 151F1EAC 00000000 */   nop
endlabel osPfsIsPlug2
