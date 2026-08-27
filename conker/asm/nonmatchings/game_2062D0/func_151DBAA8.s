nonmatching func_151DBAA8, 0x12C

glabel func_151DBAA8
    /* 208F58 151DBAA8 27BDFF90 */  addiu      $sp, $sp, -0x70
    /* 208F5C 151DBAAC AFA50074 */  sw         $a1, 0x74($sp)
    /* 208F60 151DBAB0 AFA7007C */  sw         $a3, 0x7C($sp)
    /* 208F64 151DBAB4 30EE00FF */  andi       $t6, $a3, 0xFF
    /* 208F68 151DBAB8 01C03825 */  or         $a3, $t6, $zero
    /* 208F6C 151DBABC 27A5002C */  addiu      $a1, $sp, 0x2C
    /* 208F70 151DBAC0 AFBF001C */  sw         $ra, 0x1C($sp)
    /* 208F74 151DBAC4 AFA40070 */  sw         $a0, 0x70($sp)
    /* 208F78 151DBAC8 AFA60078 */  sw         $a2, 0x78($sp)
    /* 208F7C 151DBACC 8FAF0070 */  lw         $t7, 0x70($sp)
    /* 208F80 151DBAD0 240BFFC0 */  addiu      $t3, $zero, -0x40
    /* 208F84 151DBAD4 240C002E */  addiu      $t4, $zero, 0x2E
    /* 208F88 151DBAD8 8DE10000 */  lw         $at, 0x0($t7)
    /* 208F8C 151DBADC 240A00FF */  addiu      $t2, $zero, 0xFF
    /* 208F90 151DBAE0 240D0003 */  addiu      $t5, $zero, 0x3
    /* 208F94 151DBAE4 ACA10000 */  sw         $at, 0x0($a1)
    /* 208F98 151DBAE8 8DE80004 */  lw         $t0, 0x4($t7)
    /* 208F9C 151DBAEC 240E0002 */  addiu      $t6, $zero, 0x2
    /* 208FA0 151DBAF0 2419001E */  addiu      $t9, $zero, 0x1E
    /* 208FA4 151DBAF4 ACA80004 */  sw         $t0, 0x4($a1)
    /* 208FA8 151DBAF8 8DE10008 */  lw         $at, 0x8($t7)
    /* 208FAC 151DBAFC 2418001E */  addiu      $t8, $zero, 0x1E
    /* 208FB0 151DBB00 240F009B */  addiu      $t7, $zero, 0x9B
    /* 208FB4 151DBB04 ACA10008 */  sw         $at, 0x8($a1)
    /* 208FB8 151DBB08 3C0140B0 */  lui        $at, (0x40B00000 >> 16)
    /* 208FBC 151DBB0C 44812000 */  mtc1       $at, $f4
    /* 208FC0 151DBB10 3C01800B */  lui        $at, %hi(D_800AB4C0)
    /* 208FC4 151DBB14 C426B4C0 */  lwc1       $f6, %lo(D_800AB4C0)($at)
    /* 208FC8 151DBB18 3C01800B */  lui        $at, %hi(D_800AB4C4)
    /* 208FCC 151DBB1C C428B4C4 */  lwc1       $f8, %lo(D_800AB4C4)($at)
    /* 208FD0 151DBB20 3C01800B */  lui        $at, %hi(D_800AB4C8)
    /* 208FD4 151DBB24 C42AB4C8 */  lwc1       $f10, %lo(D_800AB4C8)($at)
    /* 208FD8 151DBB28 3C014120 */  lui        $at, (0x41200000 >> 16)
    /* 208FDC 151DBB2C 44818000 */  mtc1       $at, $f16
    /* 208FE0 151DBB30 8FA90074 */  lw         $t1, 0x74($sp)
    /* 208FE4 151DBB34 3C01800B */  lui        $at, %hi(D_800AB4CC)
    /* 208FE8 151DBB38 C432B4CC */  lwc1       $f18, %lo(D_800AB4CC)($at)
    /* 208FEC 151DBB3C A7AB0028 */  sh         $t3, 0x28($sp)
    /* 208FF0 151DBB40 A7AC002A */  sh         $t4, 0x2A($sp)
    /* 208FF4 151DBB44 3C013F00 */  lui        $at, (0x3F000000 >> 16)
    /* 208FF8 151DBB48 E7A40038 */  swc1       $f4, 0x38($sp)
    /* 208FFC 151DBB4C 44812000 */  mtc1       $at, $f4
    /* 209000 151DBB50 93AB007B */  lbu        $t3, 0x7B($sp)
    /* 209004 151DBB54 8FAC0080 */  lw         $t4, 0x80($sp)
    /* 209008 151DBB58 A7AA0026 */  sh         $t2, 0x26($sp)
    /* 20900C 151DBB5C A7A90050 */  sh         $t1, 0x50($sp)
    /* 209010 151DBB60 24080064 */  addiu      $t0, $zero, 0x64
    /* 209014 151DBB64 24090010 */  addiu      $t1, $zero, 0x10
    /* 209018 151DBB68 240A000F */  addiu      $t2, $zero, 0xF
    /* 20901C 151DBB6C A7A00052 */  sh         $zero, 0x52($sp)
    /* 209020 151DBB70 A7A00024 */  sh         $zero, 0x24($sp)
    /* 209024 151DBB74 A7AD0054 */  sh         $t5, 0x54($sp)
    /* 209028 151DBB78 A7AE0056 */  sh         $t6, 0x56($sp)
    /* 20902C 151DBB7C A7B90058 */  sh         $t9, 0x58($sp)
    /* 209030 151DBB80 A7B8005A */  sh         $t8, 0x5A($sp)
    /* 209034 151DBB84 A7AF005C */  sh         $t7, 0x5C($sp)
    /* 209038 151DBB88 A7A8005E */  sh         $t0, 0x5E($sp)
    /* 20903C 151DBB8C A7A90068 */  sh         $t1, 0x68($sp)
    /* 209040 151DBB90 A7AA006A */  sh         $t2, 0x6A($sp)
    /* 209044 151DBB94 AFA0006C */  sw         $zero, 0x6C($sp)
    /* 209048 151DBB98 27A40024 */  addiu      $a0, $sp, 0x24
    /* 20904C 151DBB9C 00003025 */  or         $a2, $zero, $zero
    /* 209050 151DBBA0 E7A6003C */  swc1       $f6, 0x3C($sp)
    /* 209054 151DBBA4 E7A80040 */  swc1       $f8, 0x40($sp)
    /* 209058 151DBBA8 E7AA0044 */  swc1       $f10, 0x44($sp)
    /* 20905C 151DBBAC E7B00048 */  swc1       $f16, 0x48($sp)
    /* 209060 151DBBB0 E7B2004C */  swc1       $f18, 0x4C($sp)
    /* 209064 151DBBB4 E7A40064 */  swc1       $f4, 0x64($sp)
    /* 209068 151DBBB8 A3AB0060 */  sb         $t3, 0x60($sp)
    /* 20906C 151DBBBC 0D454FC6 */  jal        func_15153F18
    /* 209070 151DBBC0 AFAC0010 */   sw        $t4, 0x10($sp)
    /* 209074 151DBBC4 8FBF001C */  lw         $ra, 0x1C($sp)
    /* 209078 151DBBC8 27BD0070 */  addiu      $sp, $sp, 0x70
    /* 20907C 151DBBCC 03E00008 */  jr         $ra
    /* 209080 151DBBD0 00000000 */   nop
endlabel func_151DBAA8
