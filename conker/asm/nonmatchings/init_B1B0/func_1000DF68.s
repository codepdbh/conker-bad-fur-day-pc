nonmatching func_1000DF68, 0xEC

glabel func_1000DF68
    /* DF68 1000DF68 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* DF6C 1000DF6C AFBF0014 */  sw         $ra, 0x14($sp)
    /* DF70 1000DF70 AFA50024 */  sw         $a1, 0x24($sp)
    /* DF74 1000DF74 AFA60028 */  sw         $a2, 0x28($sp)
    /* DF78 1000DF78 0C002C7F */  jal        func_1000B1FC
    /* DF7C 1000DF7C 00000000 */   nop
    /* DF80 1000DF80 8FA50024 */  lw         $a1, 0x24($sp)
    /* DF84 1000DF84 8FA60028 */  lw         $a2, 0x28($sp)
    /* DF88 1000DF88 1040002E */  beqz       $v0, .L1000E044
    /* DF8C 1000DF8C 00401825 */   or        $v1, $v0, $zero
    /* DF90 1000DF90 24010001 */  addiu      $at, $zero, 0x1
    /* DF94 1000DF94 14C1000B */  bne        $a2, $at, .L1000DFC4
    /* DF98 1000DF98 A445004E */   sh        $a1, 0x4E($v0)
    /* DF9C 1000DF9C 8C4E0000 */  lw         $t6, 0x0($v0)
    /* DFA0 1000DFA0 A445004C */  sh         $a1, 0x4C($v0)
    /* DFA4 1000DFA4 05C20008 */  bltzl      $t6, .L1000DFC8
    /* DFA8 1000DFA8 28C10002 */   slti      $at, $a2, 0x2
    /* DFAC 1000DFAC 8C440000 */  lw         $a0, 0x0($v0)
    /* DFB0 1000DFB0 0C003315 */  jal        func_1000CC54
    /* DFB4 1000DFB4 AFA2001C */   sw        $v0, 0x1C($sp)
    /* DFB8 1000DFB8 8FA3001C */  lw         $v1, 0x1C($sp)
    /* DFBC 1000DFBC 8FA50024 */  lw         $a1, 0x24($sp)
    /* DFC0 1000DFC0 8FA60028 */  lw         $a2, 0x28($sp)
  .L1000DFC4:
    /* DFC4 1000DFC4 28C10002 */  slti       $at, $a2, 0x2
  .L1000DFC8:
    /* DFC8 1000DFC8 5420001D */  bnel       $at, $zero, .L1000E040
    /* DFCC 1000DFCC 24180200 */   addiu     $t8, $zero, 0x200
    /* DFD0 1000DFD0 946F004C */  lhu        $t7, 0x4C($v1)
    /* DFD4 1000DFD4 01E51023 */  subu       $v0, $t7, $a1
    /* DFD8 1000DFD8 04410002 */  bgez       $v0, .L1000DFE4
    /* DFDC 1000DFDC 00000000 */   nop
    /* DFE0 1000DFE0 00021023 */  negu       $v0, $v0
  .L1000DFE4:
    /* DFE4 1000DFE4 0046001A */  div        $zero, $v0, $a2
    /* DFE8 1000DFE8 14C00002 */  bnez       $a2, .L1000DFF4
    /* DFEC 1000DFEC 00000000 */   nop
    /* DFF0 1000DFF0 0007000D */  break      7
  .L1000DFF4:
    /* DFF4 1000DFF4 2401FFFF */  addiu      $at, $zero, -0x1
    /* DFF8 1000DFF8 14C10004 */  bne        $a2, $at, .L1000E00C
    /* DFFC 1000DFFC 3C018000 */   lui       $at, (0x80000000 >> 16)
    /* E000 1000E000 14410002 */  bne        $v0, $at, .L1000E00C
    /* E004 1000E004 00000000 */   nop
    /* E008 1000E008 0006000D */  break      6
  .L1000E00C:
    /* E00C 1000E00C 00001012 */  mflo       $v0
    /* E010 1000E010 34018000 */  ori        $at, $zero, 0x8000
    /* E014 1000E014 1C400003 */  bgtz       $v0, .L1000E024
    /* E018 1000E018 0041082A */   slt       $at, $v0, $at
    /* E01C 1000E01C 10000004 */  b          .L1000E030
    /* E020 1000E020 24020002 */   addiu     $v0, $zero, 0x2
  .L1000E024:
    /* E024 1000E024 54200003 */  bnel       $at, $zero, .L1000E034
    /* E028 1000E028 A4620050 */   sh        $v0, 0x50($v1)
    /* E02C 1000E02C 24027FFF */  addiu      $v0, $zero, 0x7FFF
  .L1000E030:
    /* E030 1000E030 A4620050 */  sh         $v0, 0x50($v1)
  .L1000E034:
    /* E034 1000E034 10000004 */  b          .L1000E048
    /* E038 1000E038 8FBF0014 */   lw        $ra, 0x14($sp)
    /* E03C 1000E03C 24180200 */  addiu      $t8, $zero, 0x200
  .L1000E040:
    /* E040 1000E040 A4780050 */  sh         $t8, 0x50($v1)
  .L1000E044:
    /* E044 1000E044 8FBF0014 */  lw         $ra, 0x14($sp)
  .L1000E048:
    /* E048 1000E048 27BD0020 */  addiu      $sp, $sp, 0x20
    /* E04C 1000E04C 03E00008 */  jr         $ra
    /* E050 1000E050 00000000 */   nop
endlabel func_1000DF68
