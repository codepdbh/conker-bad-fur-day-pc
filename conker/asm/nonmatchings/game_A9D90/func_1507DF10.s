nonmatching func_1507DF10, 0xD4

glabel func_1507DF10
    /* AB3C0 1507DF10 24AEFFFC */  addiu      $t6, $a1, -0x4
    /* AB3C4 1507DF14 2DC10006 */  sltiu      $at, $t6, 0x6
    /* AB3C8 1507DF18 10200030 */  beqz       $at, .L1507DFDC
    /* AB3CC 1507DF1C 000E7080 */   sll       $t6, $t6, 2
    /* AB3D0 1507DF20 3C01800A */  lui        $at, %hi(jtbl_8009B884)
    /* AB3D4 1507DF24 002E0821 */  addu       $at, $at, $t6
    /* AB3D8 1507DF28 8C2EB884 */  lw         $t6, %lo(jtbl_8009B884)($at)
    /* AB3DC 1507DF2C 01C00008 */  jr         $t6
    /* AB3E0 1507DF30 00000000 */   nop
  jlabel .L1507DF34
    /* AB3E4 1507DF34 8C8F0094 */  lw         $t7, 0x94($a0)
    /* AB3E8 1507DF38 8C99009C */  lw         $t9, 0x9C($a0)
    /* AB3EC 1507DF3C 24090001 */  addiu      $t1, $zero, 0x1
    /* AB3F0 1507DF40 35F80020 */  ori        $t8, $t7, 0x20
    /* AB3F4 1507DF44 37280078 */  ori        $t0, $t9, 0x78
    /* AB3F8 1507DF48 AC980094 */  sw         $t8, 0x94($a0)
    /* AB3FC 1507DF4C AC88009C */  sw         $t0, 0x9C($a0)
    /* AB400 1507DF50 03E00008 */  jr         $ra
    /* AB404 1507DF54 AC8902E4 */   sw        $t1, 0x2E4($a0)
  jlabel .L1507DF58
    /* AB408 1507DF58 8C8A0094 */  lw         $t2, 0x94($a0)
    /* AB40C 1507DF5C 8C8E009C */  lw         $t6, 0x9C($a0)
    /* AB410 1507DF60 2401FDFF */  addiu      $at, $zero, -0x201
    /* AB414 1507DF64 354B0040 */  ori        $t3, $t2, 0x40
    /* AB418 1507DF68 AC8B0094 */  sw         $t3, 0x94($a0)
    /* AB41C 1507DF6C 01616824 */  and        $t5, $t3, $at
    /* AB420 1507DF70 24180002 */  addiu      $t8, $zero, 0x2
    /* AB424 1507DF74 35CF0F00 */  ori        $t7, $t6, 0xF00
    /* AB428 1507DF78 AC8D0094 */  sw         $t5, 0x94($a0)
    /* AB42C 1507DF7C AC8F009C */  sw         $t7, 0x9C($a0)
    /* AB430 1507DF80 03E00008 */  jr         $ra
    /* AB434 1507DF84 AC9802E4 */   sw        $t8, 0x2E4($a0)
  jlabel .L1507DF88
    /* AB438 1507DF88 8C990094 */  lw         $t9, 0x94($a0)
    /* AB43C 1507DF8C 8C8B009C */  lw         $t3, 0x9C($a0)
    /* AB440 1507DF90 2401FBEF */  addiu      $at, $zero, -0x411
    /* AB444 1507DF94 3728000E */  ori        $t0, $t9, 0xE
    /* AB448 1507DF98 01015024 */  and        $t2, $t0, $at
    /* AB44C 1507DF9C 3C0100EE */  lui        $at, (0xEE0000 >> 16)
    /* AB450 1507DFA0 AC880094 */  sw         $t0, 0x94($a0)
    /* AB454 1507DFA4 240D0004 */  addiu      $t5, $zero, 0x4
    /* AB458 1507DFA8 01616025 */  or         $t4, $t3, $at
    /* AB45C 1507DFAC AC8A0094 */  sw         $t2, 0x94($a0)
    /* AB460 1507DFB0 AC8C009C */  sw         $t4, 0x9C($a0)
    /* AB464 1507DFB4 03E00008 */  jr         $ra
    /* AB468 1507DFB8 AC8D02E4 */   sw        $t5, 0x2E4($a0)
  jlabel .L1507DFBC
    /* AB46C 1507DFBC 8C8E0094 */  lw         $t6, 0x94($a0)
    /* AB470 1507DFC0 2401FAFF */  addiu      $at, $zero, -0x501
    /* AB474 1507DFC4 24080008 */  addiu      $t0, $zero, 0x8
    /* AB478 1507DFC8 35CF0080 */  ori        $t7, $t6, 0x80
    /* AB47C 1507DFCC AC8F0094 */  sw         $t7, 0x94($a0)
    /* AB480 1507DFD0 01E1C824 */  and        $t9, $t7, $at
    /* AB484 1507DFD4 AC990094 */  sw         $t9, 0x94($a0)
    /* AB488 1507DFD8 AC8802E4 */  sw         $t0, 0x2E4($a0)
  .L1507DFDC:
    /* AB48C 1507DFDC 03E00008 */  jr         $ra
    /* AB490 1507DFE0 00000000 */   nop
endlabel func_1507DF10
