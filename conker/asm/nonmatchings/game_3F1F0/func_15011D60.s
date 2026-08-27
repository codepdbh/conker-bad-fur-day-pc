nonmatching func_15011D60, 0x1B4

glabel func_15011D60
    /* 3F210 15011D60 27BDFF28 */  addiu      $sp, $sp, -0xD8
    /* 3F214 15011D64 AFB20038 */  sw         $s2, 0x38($sp)
    /* 3F218 15011D68 AFB00030 */  sw         $s0, 0x30($sp)
    /* 3F21C 15011D6C 00808025 */  or         $s0, $a0, $zero
    /* 3F220 15011D70 27B2008C */  addiu      $s2, $sp, 0x8C
    /* 3F224 15011D74 AFBF003C */  sw         $ra, 0x3C($sp)
    /* 3F228 15011D78 AFB10034 */  sw         $s1, 0x34($sp)
    /* 3F22C 15011D7C 02402025 */  or         $a0, $s2, $zero
    /* 3F230 15011D80 0C0089BC */  jal        bzero
    /* 3F234 15011D84 2405004C */   addiu     $a1, $zero, 0x4C
    /* 3F238 15011D88 0D42B688 */  jal        func_150ADA20
    /* 3F23C 15011D8C A3A00094 */   sb        $zero, 0x94($sp)
    /* 3F240 15011D90 24010079 */  addiu      $at, $zero, 0x79
    /* 3F244 15011D94 0041001B */  divu       $zero, $v0, $at
    /* 3F248 15011D98 00007010 */  mfhi       $t6
    /* 3F24C 15011D9C 25CF012C */  addiu      $t7, $t6, 0x12C
    /* 3F250 15011DA0 A7AF0092 */  sh         $t7, 0x92($sp)
    /* 3F254 15011DA4 AFB0008C */  sw         $s0, 0x8C($sp)
    /* 3F258 15011DA8 8E18001C */  lw         $t8, 0x1C($s0)
    /* 3F25C 15011DAC 00008025 */  or         $s0, $zero, $zero
    /* 3F260 15011DB0 3C11800A */  lui        $s1, %hi(D_800A1C00)
    /* 3F264 15011DB4 331900FF */  andi       $t9, $t8, 0xFF
    /* 3F268 15011DB8 2B210004 */  slti       $at, $t9, 0x4
    /* 3F26C 15011DBC 14200003 */  bnez       $at, .L15011DCC
    /* 3F270 15011DC0 A3B80090 */   sb        $t8, 0x90($sp)
    /* 3F274 15011DC4 10000002 */  b          .L15011DD0
    /* 3F278 15011DC8 24020001 */   addiu     $v0, $zero, 0x1
  .L15011DCC:
    /* 3F27C 15011DCC 00001025 */  or         $v0, $zero, $zero
  .L15011DD0:
    /* 3F280 15011DD0 A3A20091 */  sb         $v0, 0x91($sp)
    /* 3F284 15011DD4 26311C00 */  addiu      $s1, $s1, %lo(D_800A1C00)
  .L15011DD8:
    /* 3F288 15011DD8 93AA0090 */  lbu        $t2, 0x90($sp)
    /* 3F28C 15011DDC 001040C0 */  sll        $t0, $s0, 3
    /* 3F290 15011DE0 02284821 */  addu       $t1, $s1, $t0
    /* 3F294 15011DE4 012A5821 */  addu       $t3, $t1, $t2
    /* 3F298 15011DE8 0D44526B */  jal        func_151149AC
    /* 3F29C 15011DEC 91640000 */   lbu       $a0, 0x0($t3)
    /* 3F2A0 15011DF0 00106080 */  sll        $t4, $s0, 2
    /* 3F2A4 15011DF4 26100001 */  addiu      $s0, $s0, 0x1
    /* 3F2A8 15011DF8 320E00FF */  andi       $t6, $s0, 0xFF
    /* 3F2AC 15011DFC 29C10008 */  slti       $at, $t6, 0x8
    /* 3F2B0 15011E00 024C6821 */  addu       $t5, $s2, $t4
    /* 3F2B4 15011E04 01C08025 */  or         $s0, $t6, $zero
    /* 3F2B8 15011E08 1420FFF3 */  bnez       $at, .L15011DD8
    /* 3F2BC 15011E0C ADA2000C */   sw        $v0, 0xC($t5)
    /* 3F2C0 15011E10 44800000 */  mtc1       $zero, $f0
    /* 3F2C4 15011E14 A7A000C8 */  sh         $zero, 0xC8($sp)
    /* 3F2C8 15011E18 240F0003 */  addiu      $t7, $zero, 0x3
    /* 3F2CC 15011E1C E7A000B8 */  swc1       $f0, 0xB8($sp)
    /* 3F2D0 15011E20 E7A000BC */  swc1       $f0, 0xBC($sp)
    /* 3F2D4 15011E24 E7A000C0 */  swc1       $f0, 0xC0($sp)
    /* 3F2D8 15011E28 E7A000C4 */  swc1       $f0, 0xC4($sp)
    /* 3F2DC 15011E2C 93B90090 */  lbu        $t9, 0x90($sp)
    /* 3F2E0 15011E30 24180015 */  addiu      $t8, $zero, 0x15
    /* 3F2E4 15011E34 3C05800D */  lui        $a1, %hi(D_800D3094)
    /* 3F2E8 15011E38 A3AF0061 */  sb         $t7, 0x61($sp)
    /* 3F2EC 15011E3C A3B80063 */  sb         $t8, 0x63($sp)
    /* 3F2F0 15011E40 8CA53094 */  lw         $a1, %lo(D_800D3094)($a1)
    /* 3F2F4 15011E44 00002025 */  or         $a0, $zero, $zero
    /* 3F2F8 15011E48 240611A0 */  addiu      $a2, $zero, 0x11A0
    /* 3F2FC 15011E4C 27A7004C */  addiu      $a3, $sp, 0x4C
    /* 3F300 15011E50 0D450E36 */  jal        func_151438D8
    /* 3F304 15011E54 AFB90064 */   sw        $t9, 0x64($sp)
    /* 3F308 15011E58 10400011 */  beqz       $v0, .L15011EA0
    /* 3F30C 15011E5C 2404012C */   addiu     $a0, $zero, 0x12C
    /* 3F310 15011E60 84480000 */  lh         $t0, 0x0($v0)
    /* 3F314 15011E64 44882000 */  mtc1       $t0, $f4
    /* 3F318 15011E68 00000000 */  nop
    /* 3F31C 15011E6C 468021A0 */  cvt.s.w    $f6, $f4
    /* 3F320 15011E70 E7A600CC */  swc1       $f6, 0xCC($sp)
    /* 3F324 15011E74 84490004 */  lh         $t1, 0x4($v0)
    /* 3F328 15011E78 44894000 */  mtc1       $t1, $f8
    /* 3F32C 15011E7C 00000000 */  nop
    /* 3F330 15011E80 468042A0 */  cvt.s.w    $f10, $f8
    /* 3F334 15011E84 E7AA00D0 */  swc1       $f10, 0xD0($sp)
    /* 3F338 15011E88 844A0006 */  lh         $t2, 0x6($v0)
    /* 3F33C 15011E8C 448A8000 */  mtc1       $t2, $f16
    /* 3F340 15011E90 00000000 */  nop
    /* 3F344 15011E94 468084A0 */  cvt.s.w    $f18, $f16
    /* 3F348 15011E98 10000005 */  b          .L15011EB0
    /* 3F34C 15011E9C E7B200D4 */   swc1      $f18, 0xD4($sp)
  .L15011EA0:
    /* 3F350 15011EA0 3C014120 */  lui        $at, (0x41200000 >> 16)
    /* 3F354 15011EA4 44812000 */  mtc1       $at, $f4
    /* 3F358 15011EA8 00000000 */  nop
    /* 3F35C 15011EAC E7A400D4 */  swc1       $f4, 0xD4($sp)
  .L15011EB0:
    /* 3F360 15011EB0 240B0038 */  addiu      $t3, $zero, 0x38
    /* 3F364 15011EB4 240C004C */  addiu      $t4, $zero, 0x4C
    /* 3F368 15011EB8 240D00FF */  addiu      $t5, $zero, 0xFF
    /* 3F36C 15011EBC 240E0001 */  addiu      $t6, $zero, 0x1
    /* 3F370 15011EC0 AFAE0020 */  sw         $t6, 0x20($sp)
    /* 3F374 15011EC4 AFAD001C */  sw         $t5, 0x1C($sp)
    /* 3F378 15011EC8 AFAC0018 */  sw         $t4, 0x18($sp)
    /* 3F37C 15011ECC AFAB0014 */  sw         $t3, 0x14($sp)
    /* 3F380 15011ED0 2405FFFF */  addiu      $a1, $zero, -0x1
    /* 3F384 15011ED4 2406FFFF */  addiu      $a2, $zero, -0x1
    /* 3F388 15011ED8 2407FFFF */  addiu      $a3, $zero, -0x1
    /* 3F38C 15011EDC 0D45244C */  jal        func_15149130
    /* 3F390 15011EE0 AFA00010 */   sw        $zero, 0x10($sp)
    /* 3F394 15011EE4 10400004 */  beqz       $v0, .L15011EF8
    /* 3F398 15011EE8 24440028 */   addiu     $a0, $v0, 0x28
    /* 3F39C 15011EEC 02402825 */  or         $a1, $s2, $zero
    /* 3F3A0 15011EF0 0C008BB0 */  jal        memcpy
    /* 3F3A4 15011EF4 2406004C */   addiu     $a2, $zero, 0x4C
  .L15011EF8:
    /* 3F3A8 15011EF8 24020001 */  addiu      $v0, $zero, 0x1
    /* 3F3AC 15011EFC 8FBF003C */  lw         $ra, 0x3C($sp)
    /* 3F3B0 15011F00 8FB00030 */  lw         $s0, 0x30($sp)
    /* 3F3B4 15011F04 8FB10034 */  lw         $s1, 0x34($sp)
    /* 3F3B8 15011F08 8FB20038 */  lw         $s2, 0x38($sp)
    /* 3F3BC 15011F0C 03E00008 */  jr         $ra
    /* 3F3C0 15011F10 27BD00D8 */   addiu     $sp, $sp, 0xD8
endlabel func_15011D60
    /* 3F3C4 15011F14 00000000 */  nop
    /* 3F3C8 15011F18 00000000 */  nop
    /* 3F3CC 15011F1C 00000000 */  nop
