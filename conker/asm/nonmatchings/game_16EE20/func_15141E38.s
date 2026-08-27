nonmatching func_15141E38, 0x140

glabel func_15141E38
    /* 16F2E8 15141E38 27BDFFA0 */  addiu      $sp, $sp, -0x60
    /* 16F2EC 15141E3C AFB20034 */  sw         $s2, 0x34($sp)
    /* 16F2F0 15141E40 AFB0002C */  sw         $s0, 0x2C($sp)
    /* 16F2F4 15141E44 00A08025 */  or         $s0, $a1, $zero
    /* 16F2F8 15141E48 27B20058 */  addiu      $s2, $sp, 0x58
    /* 16F2FC 15141E4C AFBF003C */  sw         $ra, 0x3C($sp)
    /* 16F300 15141E50 AFB30038 */  sw         $s3, 0x38($sp)
    /* 16F304 15141E54 AFB10030 */  sw         $s1, 0x30($sp)
    /* 16F308 15141E58 AFA40060 */  sw         $a0, 0x60($sp)
    /* 16F30C 15141E5C 8FAE0060 */  lw         $t6, 0x60($sp)
    /* 16F310 15141E60 00008825 */  or         $s1, $zero, $zero
    /* 16F314 15141E64 2405001A */  addiu      $a1, $zero, 0x1A
    /* 16F318 15141E68 8DC402F4 */  lw         $a0, 0x2F4($t6)
    /* 16F31C 15141E6C 02403025 */  or         $a2, $s2, $zero
    /* 16F320 15141E70 0D453B38 */  jal        func_1514ECE0
    /* 16F324 15141E74 AFA40058 */   sw        $a0, 0x58($sp)
    /* 16F328 15141E78 10400015 */  beqz       $v0, .L15141ED0
    /* 16F32C 15141E7C 3C138009 */   lui       $s3, %hi(D_8008A0B4)
    /* 16F330 15141E80 2673A0B4 */  addiu      $s3, $s3, %lo(D_8008A0B4)
    /* 16F334 15141E84 8FB80058 */  lw         $t8, 0x58($sp)
  .L15141E88:
    /* 16F338 15141E88 001040C0 */  sll        $t0, $s0, 3
    /* 16F33C 15141E8C 02684821 */  addu       $t1, $s3, $t0
    /* 16F340 15141E90 8F020010 */  lw         $v0, 0x10($t8)
    /* 16F344 15141E94 2405001A */  addiu      $a1, $zero, 0x1A
    /* 16F348 15141E98 02403025 */  or         $a2, $s2, $zero
    /* 16F34C 15141E9C 8C590028 */  lw         $t9, 0x28($v0)
    /* 16F350 15141EA0 56190005 */  bnel       $s0, $t9, .L15141EB8
    /* 16F354 15141EA4 8FAB0058 */   lw        $t3, 0x58($sp)
    /* 16F358 15141EA8 8D2A0004 */  lw         $t2, 0x4($t1)
    /* 16F35C 15141EAC 03008825 */  or         $s1, $t8, $zero
    /* 16F360 15141EB0 A44A000E */  sh         $t2, 0xE($v0)
    /* 16F364 15141EB4 8FAB0058 */  lw         $t3, 0x58($sp)
  .L15141EB8:
    /* 16F368 15141EB8 8D6C0014 */  lw         $t4, 0x14($t3)
    /* 16F36C 15141EBC AFAC0058 */  sw         $t4, 0x58($sp)
    /* 16F370 15141EC0 0D453B38 */  jal        func_1514ECE0
    /* 16F374 15141EC4 01802025 */   or        $a0, $t4, $zero
    /* 16F378 15141EC8 5440FFEF */  bnel       $v0, $zero, .L15141E88
    /* 16F37C 15141ECC 8FB80058 */   lw        $t8, 0x58($sp)
  .L15141ED0:
    /* 16F380 15141ED0 3C138009 */  lui        $s3, %hi(D_8008A0B4)
    /* 16F384 15141ED4 16200021 */  bnez       $s1, .L15141F5C
    /* 16F388 15141ED8 2673A0B4 */   addiu     $s3, $s3, %lo(D_8008A0B4)
    /* 16F38C 15141EDC 8FA20060 */  lw         $v0, 0x60($sp)
    /* 16F390 15141EE0 AFB00040 */  sw         $s0, 0x40($sp)
    /* 16F394 15141EE4 AFA20044 */  sw         $v0, 0x44($sp)
    /* 16F398 15141EE8 001070C0 */  sll        $t6, $s0, 3
    /* 16F39C 15141EEC 904D003B */  lbu        $t5, 0x3B($v0)
    /* 16F3A0 15141EF0 026E7821 */  addu       $t7, $s3, $t6
    /* 16F3A4 15141EF4 85E40006 */  lh         $a0, 0x6($t7)
    /* 16F3A8 15141EF8 24190001 */  addiu      $t9, $zero, 0x1
    /* 16F3AC 15141EFC 24180032 */  addiu      $t8, $zero, 0x32
    /* 16F3B0 15141F00 2408000C */  addiu      $t0, $zero, 0xC
    /* 16F3B4 15141F04 240900FF */  addiu      $t1, $zero, 0xFF
    /* 16F3B8 15141F08 240A0001 */  addiu      $t2, $zero, 0x1
    /* 16F3BC 15141F0C AFAA0020 */  sw         $t2, 0x20($sp)
    /* 16F3C0 15141F10 AFA9001C */  sw         $t1, 0x1C($sp)
    /* 16F3C4 15141F14 AFA80018 */  sw         $t0, 0x18($sp)
    /* 16F3C8 15141F18 AFB80014 */  sw         $t8, 0x14($sp)
    /* 16F3CC 15141F1C AFB90010 */  sw         $t9, 0x10($sp)
    /* 16F3D0 15141F20 2405FFFF */  addiu      $a1, $zero, -0x1
    /* 16F3D4 15141F24 2406FFFF */  addiu      $a2, $zero, -0x1
    /* 16F3D8 15141F28 2407FFFF */  addiu      $a3, $zero, -0x1
    /* 16F3DC 15141F2C 0D45244C */  jal        func_15149130
    /* 16F3E0 15141F30 A3AD0048 */   sb        $t5, 0x48($sp)
    /* 16F3E4 15141F34 10400009 */  beqz       $v0, .L15141F5C
    /* 16F3E8 15141F38 00408025 */   or        $s0, $v0, $zero
    /* 16F3EC 15141F3C 24440028 */  addiu      $a0, $v0, 0x28
    /* 16F3F0 15141F40 27A50040 */  addiu      $a1, $sp, 0x40
    /* 16F3F4 15141F44 0C008BB0 */  jal        memcpy
    /* 16F3F8 15141F48 2406000C */   addiu     $a2, $zero, 0xC
    /* 16F3FC 15141F4C 02002025 */  or         $a0, $s0, $zero
    /* 16F400 15141F50 8FA50060 */  lw         $a1, 0x60($sp)
    /* 16F404 15141F54 0D453B07 */  jal        func_1514EC1C
    /* 16F408 15141F58 2406001A */   addiu     $a2, $zero, 0x1A
  .L15141F5C:
    /* 16F40C 15141F5C 8FBF003C */  lw         $ra, 0x3C($sp)
    /* 16F410 15141F60 8FB0002C */  lw         $s0, 0x2C($sp)
    /* 16F414 15141F64 8FB10030 */  lw         $s1, 0x30($sp)
    /* 16F418 15141F68 8FB20034 */  lw         $s2, 0x34($sp)
    /* 16F41C 15141F6C 8FB30038 */  lw         $s3, 0x38($sp)
    /* 16F420 15141F70 03E00008 */  jr         $ra
    /* 16F424 15141F74 27BD0060 */   addiu     $sp, $sp, 0x60
endlabel func_15141E38
