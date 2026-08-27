nonmatching func_10009CBC, 0x340

glabel func_10009CBC
    /* 9CBC 10009CBC 27BDFFA8 */  addiu      $sp, $sp, -0x58
    /* 9CC0 10009CC0 AFBF0024 */  sw         $ra, 0x24($sp)
    /* 9CC4 10009CC4 AFA40058 */  sw         $a0, 0x58($sp)
    /* 9CC8 10009CC8 AFA5005C */  sw         $a1, 0x5C($sp)
    /* 9CCC 10009CCC 8FAE0058 */  lw         $t6, 0x58($sp)
    /* 9CD0 10009CD0 3C078004 */  lui        $a3, %hi(D_800406A0)
    /* 9CD4 10009CD4 00003025 */  or         $a2, $zero, $zero
    /* 9CD8 10009CD8 8DC80000 */  lw         $t0, 0x0($t6)
    /* 9CDC 10009CDC 8FB8005C */  lw         $t8, 0x5C($sp)
    /* 9CE0 10009CE0 24E706A0 */  addiu      $a3, $a3, %lo(D_800406A0)
    /* 9CE4 10009CE4 310F0001 */  andi       $t7, $t0, 0x1
    /* 9CE8 10009CE8 11E000AF */  beqz       $t7, .L10009FA8
    /* 9CEC 10009CEC 8FAB0058 */   lw        $t3, 0x58($sp)
    /* 9CF0 10009CF0 17000004 */  bnez       $t8, .L10009D04
    /* 9CF4 10009CF4 310900FF */   andi      $t1, $t0, 0xFF
    /* 9CF8 10009CF8 310900FF */  andi       $t1, $t0, 0xFF
    /* 9CFC 10009CFC 10000004 */  b          .L10009D10
    /* 9D00 10009D00 25290001 */   addiu     $t1, $t1, 0x1
  .L10009D04:
    /* 9D04 10009D04 2401FFFE */  addiu      $at, $zero, -0x2
    /* 9D08 10009D08 0121C824 */  and        $t9, $t1, $at
    /* 9D0C 10009D0C 00194980 */  sll        $t1, $t9, 6
  .L10009D10:
    /* 9D10 10009D10 8CE30008 */  lw         $v1, 0x8($a3)
    /* 9D14 10009D14 54600039 */  bnel       $v1, $zero, .L10009DFC
    /* 9D18 10009D18 8C6B0000 */   lw        $t3, 0x0($v1)
    /* 9D1C 10009D1C 8CE30004 */  lw         $v1, 0x4($a3)
    /* 9D20 10009D20 24020002 */  addiu      $v0, $zero, 0x2
    /* 9D24 10009D24 1060000E */  beqz       $v1, .L10009D60
    /* 9D28 10009D28 00000000 */   nop
    /* 9D2C 10009D2C 806B0014 */  lb         $t3, 0x14($v1)
  .L10009D30:
    /* 9D30 10009D30 55600009 */  bnel       $t3, $zero, .L10009D58
    /* 9D34 10009D34 8C630000 */   lw        $v1, 0x0($v1)
    /* 9D38 10009D38 906C0016 */  lbu        $t4, 0x16($v1)
    /* 9D3C 10009D3C 55800006 */  bnel       $t4, $zero, .L10009D58
    /* 9D40 10009D40 8C630000 */   lw        $v1, 0x0($v1)
    /* 9D44 10009D44 906D0015 */  lbu        $t5, 0x15($v1)
    /* 9D48 10009D48 544D0003 */  bnel       $v0, $t5, .L10009D58
    /* 9D4C 10009D4C 8C630000 */   lw        $v1, 0x0($v1)
    /* 9D50 10009D50 00603025 */  or         $a2, $v1, $zero
    /* 9D54 10009D54 8C630000 */  lw         $v1, 0x0($v1)
  .L10009D58:
    /* 9D58 10009D58 5460FFF5 */  bnel       $v1, $zero, .L10009D30
    /* 9D5C 10009D5C 806B0014 */   lb        $t3, 0x14($v1)
  .L10009D60:
    /* 9D60 10009D60 10C00031 */  beqz       $a2, .L10009E28
    /* 9D64 10009D64 00C01825 */   or        $v1, $a2, $zero
    /* 9D68 10009D68 8CC2000C */  lw         $v0, 0xC($a2)
    /* 9D6C 10009D6C 8CCE0008 */  lw         $t6, 0x8($a2)
    /* 9D70 10009D70 24050004 */  addiu      $a1, $zero, 0x4
    /* 9D74 10009D74 AC4E0000 */  sw         $t6, 0x0($v0)
    /* 9D78 10009D78 8CC40010 */  lw         $a0, 0x10($a2)
    /* 9D7C 10009D7C AFA9004C */  sw         $t1, 0x4C($sp)
    /* 9D80 10009D80 AFA80040 */  sw         $t0, 0x40($sp)
    /* 9D84 10009D84 AFA60050 */  sw         $a2, 0x50($sp)
    /* 9D88 10009D88 0C0010ED */  jal        func_100043B4
    /* 9D8C 10009D8C AFA60054 */   sw        $a2, 0x54($sp)
    /* 9D90 10009D90 8FA60050 */  lw         $a2, 0x50($sp)
    /* 9D94 10009D94 8FA30054 */  lw         $v1, 0x54($sp)
    /* 9D98 10009D98 8FA80040 */  lw         $t0, 0x40($sp)
    /* 9D9C 10009D9C 8FA9004C */  lw         $t1, 0x4C($sp)
    /* 9DA0 10009DA0 3C078004 */  lui        $a3, %hi(D_800406A0)
    /* 9DA4 10009DA4 24E706A0 */  addiu      $a3, $a3, %lo(D_800406A0)
    /* 9DA8 10009DA8 ACC00010 */  sw         $zero, 0x10($a2)
    /* 9DAC 10009DAC ACC0000C */  sw         $zero, 0xC($a2)
    /* 9DB0 10009DB0 8CEF0004 */  lw         $t7, 0x4($a3)
    /* 9DB4 10009DB4 54CF0005 */  bnel       $a2, $t7, .L10009DCC
    /* 9DB8 10009DB8 8CC20000 */   lw        $v0, 0x0($a2)
    /* 9DBC 10009DBC 8CD80000 */  lw         $t8, 0x0($a2)
    /* 9DC0 10009DC0 3C018004 */  lui        $at, %hi(D_800406A4)
    /* 9DC4 10009DC4 AC3806A4 */  sw         $t8, %lo(D_800406A4)($at)
    /* 9DC8 10009DC8 8CC20000 */  lw         $v0, 0x0($a2)
  .L10009DCC:
    /* 9DCC 10009DCC 50400004 */  beql       $v0, $zero, .L10009DE0
    /* 9DD0 10009DD0 8CC20004 */   lw        $v0, 0x4($a2)
    /* 9DD4 10009DD4 8CD90004 */  lw         $t9, 0x4($a2)
    /* 9DD8 10009DD8 AC590004 */  sw         $t9, 0x4($v0)
    /* 9DDC 10009DDC 8CC20004 */  lw         $v0, 0x4($a2)
  .L10009DE0:
    /* 9DE0 10009DE0 10400011 */  beqz       $v0, .L10009E28
    /* 9DE4 10009DE4 00000000 */   nop
    /* 9DE8 10009DE8 8CCA0000 */  lw         $t2, 0x0($a2)
    /* 9DEC 10009DEC AC4A0000 */  sw         $t2, 0x0($v0)
    /* 9DF0 10009DF0 1000000D */  b          .L10009E28
    /* 9DF4 10009DF4 00000000 */   nop
    /* 9DF8 10009DF8 8C6B0000 */  lw         $t3, 0x0($v1)
  .L10009DFC:
    /* 9DFC 10009DFC ACEB0008 */  sw         $t3, 0x8($a3)
    /* 9E00 10009E00 8C620000 */  lw         $v0, 0x0($v1)
    /* 9E04 10009E04 50400004 */  beql       $v0, $zero, .L10009E18
    /* 9E08 10009E08 8C620004 */   lw        $v0, 0x4($v1)
    /* 9E0C 10009E0C 8C6C0004 */  lw         $t4, 0x4($v1)
    /* 9E10 10009E10 AC4C0004 */  sw         $t4, 0x4($v0)
    /* 9E14 10009E14 8C620004 */  lw         $v0, 0x4($v1)
  .L10009E18:
    /* 9E18 10009E18 10400003 */  beqz       $v0, .L10009E28
    /* 9E1C 10009E1C 00000000 */   nop
    /* 9E20 10009E20 8C6D0000 */  lw         $t5, 0x0($v1)
    /* 9E24 10009E24 AC4D0000 */  sw         $t5, 0x0($v0)
  .L10009E28:
    /* 9E28 10009E28 1060005D */  beqz       $v1, .L10009FA0
    /* 9E2C 10009E2C 00000000 */   nop
    /* 9E30 10009E30 AC600000 */  sw         $zero, 0x0($v1)
    /* 9E34 10009E34 AC600004 */  sw         $zero, 0x4($v1)
    /* 9E38 10009E38 8CE4000C */  lw         $a0, 0xC($a3)
    /* 9E3C 10009E3C 24060002 */  addiu      $a2, $zero, 0x2
    /* 9E40 10009E40 5080000D */  beql       $a0, $zero, .L10009E78
    /* 9E44 10009E44 ACE3000C */   sw        $v1, 0xC($a3)
    /* 9E48 10009E48 8C8E0000 */  lw         $t6, 0x0($a0)
    /* 9E4C 10009E4C AC640004 */  sw         $a0, 0x4($v1)
    /* 9E50 10009E50 00801025 */  or         $v0, $a0, $zero
    /* 9E54 10009E54 AC6E0000 */  sw         $t6, 0x0($v1)
    /* 9E58 10009E58 8C850000 */  lw         $a1, 0x0($a0)
    /* 9E5C 10009E5C 50A00003 */  beql       $a1, $zero, .L10009E6C
    /* 9E60 10009E60 AC430000 */   sw        $v1, 0x0($v0)
    /* 9E64 10009E64 ACA30004 */  sw         $v1, 0x4($a1)
    /* 9E68 10009E68 AC430000 */  sw         $v1, 0x0($v0)
  .L10009E6C:
    /* 9E6C 10009E6C 10000005 */  b          .L10009E84
    /* 9E70 10009E70 AC680008 */   sw        $t0, 0x8($v1)
    /* 9E74 10009E74 ACE3000C */  sw         $v1, 0xC($a3)
  .L10009E78:
    /* 9E78 10009E78 AC600000 */  sw         $zero, 0x0($v1)
    /* 9E7C 10009E7C AC600004 */  sw         $zero, 0x4($v1)
    /* 9E80 10009E80 AC680008 */  sw         $t0, 0x8($v1)
  .L10009E84:
    /* 9E84 10009E84 A0600014 */  sb         $zero, 0x14($v1)
    /* 9E88 10009E88 8FAF005C */  lw         $t7, 0x5C($sp)
    /* 9E8C 10009E8C 3C198003 */  lui        $t9, %hi(D_8002AE50)
    /* 9E90 10009E90 2524000F */  addiu      $a0, $t1, 0xF
    /* 9E94 10009E94 A06F0016 */  sb         $t7, 0x16($v1)
    /* 9E98 10009E98 8FB80058 */  lw         $t8, 0x58($sp)
    /* 9E9C 10009E9C A0600015 */  sb         $zero, 0x15($v1)
    /* 9EA0 10009EA0 240500FF */  addiu      $a1, $zero, 0xFF
    /* 9EA4 10009EA4 AC78000C */  sw         $t8, 0xC($v1)
    /* 9EA8 10009EA8 8F39AE50 */  lw         $t9, %lo(D_8002AE50)($t9)
    /* 9EAC 10009EAC 00003825 */  or         $a3, $zero, $zero
    /* 9EB0 10009EB0 2F210028 */  sltiu      $at, $t9, 0x28
    /* 9EB4 10009EB4 10200010 */  beqz       $at, .L10009EF8
    /* 9EB8 10009EB8 2401FFF0 */   addiu     $at, $zero, -0x10
    /* 9EBC 10009EBC 00815024 */  and        $t2, $a0, $at
    /* 9EC0 10009EC0 01402025 */  or         $a0, $t2, $zero
    /* 9EC4 10009EC4 AFAA0048 */  sw         $t2, 0x48($sp)
    /* 9EC8 10009EC8 AFAA0028 */  sw         $t2, 0x28($sp)
    /* 9ECC 10009ECC AFA30054 */  sw         $v1, 0x54($sp)
    /* 9ED0 10009ED0 0C000F10 */  jal        allocate_memory
    /* 9ED4 10009ED4 AFA80040 */   sw        $t0, 0x40($sp)
    /* 9ED8 10009ED8 8FA30054 */  lw         $v1, 0x54($sp)
    /* 9EDC 10009EDC 00402025 */  or         $a0, $v0, $zero
    /* 9EE0 10009EE0 AC620010 */  sw         $v0, 0x10($v1)
    /* 9EE4 10009EE4 0C0089BC */  jal        bzero
    /* 9EE8 10009EE8 8FA50028 */   lw        $a1, 0x28($sp)
    /* 9EEC 10009EEC 8FA30054 */  lw         $v1, 0x54($sp)
    /* 9EF0 10009EF0 10000002 */  b          .L10009EFC
    /* 9EF4 10009EF4 8FA80040 */   lw        $t0, 0x40($sp)
  .L10009EF8:
    /* 9EF8 10009EF8 AC600010 */  sw         $zero, 0x10($v1)
  .L10009EFC:
    /* 9EFC 10009EFC 8C640010 */  lw         $a0, 0x10($v1)
    /* 9F00 10009F00 8FA50048 */  lw         $a1, 0x48($sp)
    /* 9F04 10009F04 10800026 */  beqz       $a0, .L10009FA0
    /* 9F08 10009F08 00000000 */   nop
    /* 9F0C 10009F0C AFA30054 */  sw         $v1, 0x54($sp)
    /* 9F10 10009F10 0C008F48 */  jal        osWritebackDCache
    /* 9F14 10009F14 AFA80040 */   sw        $t0, 0x40($sp)
    /* 9F18 10009F18 8FA30054 */  lw         $v1, 0x54($sp)
    /* 9F1C 10009F1C 8FA50048 */  lw         $a1, 0x48($sp)
    /* 9F20 10009F20 0C008B44 */  jal        osInvalDCache
    /* 9F24 10009F24 8C640010 */   lw        $a0, 0x10($v1)
    /* 9F28 10009F28 3C028003 */  lui        $v0, %hi(D_8002AE50)
    /* 9F2C 10009F2C 8FA30054 */  lw         $v1, 0x54($sp)
    /* 9F30 10009F30 8FA80040 */  lw         $t0, 0x40($sp)
    /* 9F34 10009F34 8C42AE50 */  lw         $v0, %lo(D_8002AE50)($v0)
    /* 9F38 10009F38 8C6E0010 */  lw         $t6, 0x10($v1)
    /* 9F3C 10009F3C 2401FFF8 */  addiu      $at, $zero, -0x8
    /* 9F40 10009F40 00083942 */  srl        $a3, $t0, 5
    /* 9F44 10009F44 00025880 */  sll        $t3, $v0, 2
    /* 9F48 10009F48 8FAF0048 */  lw         $t7, 0x48($sp)
    /* 9F4C 10009F4C 00E16824 */  and        $t5, $a3, $at
    /* 9F50 10009F50 3C0C8004 */  lui        $t4, %hi(D_80041330)
    /* 9F54 10009F54 3C188004 */  lui        $t8, %hi(D_800416F0)
    /* 9F58 10009F58 01625823 */  subu       $t3, $t3, $v0
    /* 9F5C 10009F5C 000B58C0 */  sll        $t3, $t3, 3
    /* 9F60 10009F60 271816F0 */  addiu      $t8, $t8, %lo(D_800416F0)
    /* 9F64 10009F64 258C1330 */  addiu      $t4, $t4, %lo(D_80041330)
    /* 9F68 10009F68 3C018003 */  lui        $at, %hi(D_8002AE50)
    /* 9F6C 10009F6C 24590001 */  addiu      $t9, $v0, 0x1
    /* 9F70 10009F70 AC39AE50 */  sw         $t9, %lo(D_8002AE50)($at)
    /* 9F74 10009F74 016C2021 */  addu       $a0, $t3, $t4
    /* 9F78 10009F78 AFB80018 */  sw         $t8, 0x18($sp)
    /* 9F7C 10009F7C 01A03825 */  or         $a3, $t5, $zero
    /* 9F80 10009F80 24050001 */  addiu      $a1, $zero, 0x1
    /* 9F84 10009F84 00003025 */  or         $a2, $zero, $zero
    /* 9F88 10009F88 AFAE0010 */  sw         $t6, 0x10($sp)
    /* 9F8C 10009F8C 0C009248 */  jal        osPiStartDma
    /* 9F90 10009F90 AFAF0014 */   sw        $t7, 0x14($sp)
    /* 9F94 10009F94 8FA30054 */  lw         $v1, 0x54($sp)
    /* 9F98 10009F98 8FAA0058 */  lw         $t2, 0x58($sp)
    /* 9F9C 10009F9C AD430000 */  sw         $v1, 0x0($t2)
  .L10009FA0:
    /* 9FA0 10009FA0 10000012 */  b          .L10009FEC
    /* 9FA4 10009FA4 00001025 */   or        $v0, $zero, $zero
  .L10009FA8:
    /* 9FA8 10009FA8 AD680000 */  sw         $t0, 0x0($t3)
    /* 9FAC 10009FAC 91020015 */  lbu        $v0, 0x15($t0)
    /* 9FB0 10009FB0 8FAC005C */  lw         $t4, 0x5C($sp)
    /* 9FB4 10009FB4 1040000C */  beqz       $v0, .L10009FE8
    /* 9FB8 10009FB8 24030001 */   addiu     $v1, $zero, 0x1
    /* 9FBC 10009FBC 15830008 */  bne        $t4, $v1, .L10009FE0
    /* 9FC0 10009FC0 00000000 */   nop
    /* 9FC4 10009FC4 14620003 */  bne        $v1, $v0, .L10009FD4
    /* 9FC8 10009FC8 240D0002 */   addiu     $t5, $zero, 0x2
    /* 9FCC 10009FCC 10000004 */  b          .L10009FE0
    /* 9FD0 10009FD0 A10D0015 */   sb        $t5, 0x15($t0)
  .L10009FD4:
    /* 9FD4 10009FD4 810E0014 */  lb         $t6, 0x14($t0)
    /* 9FD8 10009FD8 25CF0001 */  addiu      $t7, $t6, 0x1
    /* 9FDC 10009FDC A10F0014 */  sb         $t7, 0x14($t0)
  .L10009FE0:
    /* 9FE0 10009FE0 10000002 */  b          .L10009FEC
    /* 9FE4 10009FE4 8D020010 */   lw        $v0, 0x10($t0)
  .L10009FE8:
    /* 9FE8 10009FE8 00001025 */  or         $v0, $zero, $zero
  .L10009FEC:
    /* 9FEC 10009FEC 8FBF0024 */  lw         $ra, 0x24($sp)
    /* 9FF0 10009FF0 27BD0058 */  addiu      $sp, $sp, 0x58
    /* 9FF4 10009FF4 03E00008 */  jr         $ra
    /* 9FF8 10009FF8 00000000 */   nop
endlabel func_10009CBC
