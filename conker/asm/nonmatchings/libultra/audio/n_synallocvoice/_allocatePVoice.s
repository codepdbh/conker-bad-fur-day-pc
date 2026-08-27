nonmatching _allocatePVoice, 0x22C

glabel _allocatePVoice
    /* 1DF3C 1001DF3C 00052C00 */  sll        $a1, $a1, 16
    /* 1DF40 1001DF40 00052C03 */  sra        $a1, $a1, 16
    /* 1DF44 1001DF44 27BDFFD8 */  addiu      $sp, $sp, -0x28
    /* 1DF48 1001DF48 AFA0001C */  sw         $zero, 0x1C($sp)
    /* 1DF4C 1001DF4C 3C0E8003 */  lui        $t6, %hi(n_syn)
    /* 1DF50 1001DF50 8DCEBA44 */  lw         $t6, %lo(n_syn)($t6)
    /* 1DF54 1001DF54 8DCF0014 */  lw         $t7, 0x14($t6)
    /* 1DF58 1001DF58 11E0002F */  beqz       $t7, .L1001E018
    /* 1DF5C 1001DF5C AFAF0024 */   sw        $t7, 0x24($sp)
    /* 1DF60 1001DF60 8FB80024 */  lw         $t8, 0x24($sp)
    /* 1DF64 1001DF64 AC980000 */  sw         $t8, 0x0($a0)
    /* 1DF68 1001DF68 8FB90024 */  lw         $t9, 0x24($sp)
    /* 1DF6C 1001DF6C AFB90018 */  sw         $t9, 0x18($sp)
    /* 1DF70 1001DF70 8FA80018 */  lw         $t0, 0x18($sp)
    /* 1DF74 1001DF74 8D090000 */  lw         $t1, 0x0($t0)
    /* 1DF78 1001DF78 11200005 */  beqz       $t1, .L1001DF90
    /* 1DF7C 1001DF7C 00000000 */   nop
    /* 1DF80 1001DF80 8FAA0018 */  lw         $t2, 0x18($sp)
    /* 1DF84 1001DF84 8D4B0004 */  lw         $t3, 0x4($t2)
    /* 1DF88 1001DF88 8D4C0000 */  lw         $t4, 0x0($t2)
    /* 1DF8C 1001DF8C AD8B0004 */  sw         $t3, 0x4($t4)
  .L1001DF90:
    /* 1DF90 1001DF90 8FAD0018 */  lw         $t5, 0x18($sp)
    /* 1DF94 1001DF94 8DAE0004 */  lw         $t6, 0x4($t5)
    /* 1DF98 1001DF98 11C00005 */  beqz       $t6, .L1001DFB0
    /* 1DF9C 1001DF9C 00000000 */   nop
    /* 1DFA0 1001DFA0 8FAF0018 */  lw         $t7, 0x18($sp)
    /* 1DFA4 1001DFA4 8DF80000 */  lw         $t8, 0x0($t7)
    /* 1DFA8 1001DFA8 8DF90004 */  lw         $t9, 0x4($t7)
    /* 1DFAC 1001DFAC AF380000 */  sw         $t8, 0x0($t9)
  .L1001DFB0:
    /* 1DFB0 1001DFB0 8FA80024 */  lw         $t0, 0x24($sp)
    /* 1DFB4 1001DFB4 AFA80014 */  sw         $t0, 0x14($sp)
    /* 1DFB8 1001DFB8 3C098003 */  lui        $t1, %hi(n_syn)
    /* 1DFBC 1001DFBC 8D29BA44 */  lw         $t1, %lo(n_syn)($t1)
    /* 1DFC0 1001DFC0 252A000C */  addiu      $t2, $t1, 0xC
    /* 1DFC4 1001DFC4 AFAA0010 */  sw         $t2, 0x10($sp)
    /* 1DFC8 1001DFC8 8FAB0010 */  lw         $t3, 0x10($sp)
    /* 1DFCC 1001DFCC 8FAD0014 */  lw         $t5, 0x14($sp)
    /* 1DFD0 1001DFD0 8D6C0000 */  lw         $t4, 0x0($t3)
    /* 1DFD4 1001DFD4 ADAC0000 */  sw         $t4, 0x0($t5)
    /* 1DFD8 1001DFD8 8FAE0010 */  lw         $t6, 0x10($sp)
    /* 1DFDC 1001DFDC 8FAF0014 */  lw         $t7, 0x14($sp)
    /* 1DFE0 1001DFE0 ADEE0004 */  sw         $t6, 0x4($t7)
    /* 1DFE4 1001DFE4 8FB80010 */  lw         $t8, 0x10($sp)
    /* 1DFE8 1001DFE8 8F190000 */  lw         $t9, 0x0($t8)
    /* 1DFEC 1001DFEC 13200005 */  beqz       $t9, .L1001E004
    /* 1DFF0 1001DFF0 00000000 */   nop
    /* 1DFF4 1001DFF4 8FA90010 */  lw         $t1, 0x10($sp)
    /* 1DFF8 1001DFF8 8FA80014 */  lw         $t0, 0x14($sp)
    /* 1DFFC 1001DFFC 8D2A0000 */  lw         $t2, 0x0($t1)
    /* 1E000 1001E000 AD480004 */  sw         $t0, 0x4($t2)
  .L1001E004:
    /* 1E004 1001E004 8FAB0014 */  lw         $t3, 0x14($sp)
    /* 1E008 1001E008 8FAC0010 */  lw         $t4, 0x10($sp)
    /* 1E00C 1001E00C AD8B0000 */  sw         $t3, 0x0($t4)
    /* 1E010 1001E010 1000004F */  b          .L1001E150
    /* 1E014 1001E014 00000000 */   nop
  .L1001E018:
    /* 1E018 1001E018 3C0D8003 */  lui        $t5, %hi(n_syn)
    /* 1E01C 1001E01C 8DADBA44 */  lw         $t5, %lo(n_syn)($t5)
    /* 1E020 1001E020 8DAE0004 */  lw         $t6, 0x4($t5)
    /* 1E024 1001E024 11C0002F */  beqz       $t6, .L1001E0E4
    /* 1E028 1001E028 AFAE0024 */   sw        $t6, 0x24($sp)
    /* 1E02C 1001E02C 8FAF0024 */  lw         $t7, 0x24($sp)
    /* 1E030 1001E030 AC8F0000 */  sw         $t7, 0x0($a0)
    /* 1E034 1001E034 8FB80024 */  lw         $t8, 0x24($sp)
    /* 1E038 1001E038 AFB8000C */  sw         $t8, 0xC($sp)
    /* 1E03C 1001E03C 8FB9000C */  lw         $t9, 0xC($sp)
    /* 1E040 1001E040 8F290000 */  lw         $t1, 0x0($t9)
    /* 1E044 1001E044 11200005 */  beqz       $t1, .L1001E05C
    /* 1E048 1001E048 00000000 */   nop
    /* 1E04C 1001E04C 8FA8000C */  lw         $t0, 0xC($sp)
    /* 1E050 1001E050 8D0A0004 */  lw         $t2, 0x4($t0)
    /* 1E054 1001E054 8D0B0000 */  lw         $t3, 0x0($t0)
    /* 1E058 1001E058 AD6A0004 */  sw         $t2, 0x4($t3)
  .L1001E05C:
    /* 1E05C 1001E05C 8FAC000C */  lw         $t4, 0xC($sp)
    /* 1E060 1001E060 8D8D0004 */  lw         $t5, 0x4($t4)
    /* 1E064 1001E064 11A00005 */  beqz       $t5, .L1001E07C
    /* 1E068 1001E068 00000000 */   nop
    /* 1E06C 1001E06C 8FAE000C */  lw         $t6, 0xC($sp)
    /* 1E070 1001E070 8DCF0000 */  lw         $t7, 0x0($t6)
    /* 1E074 1001E074 8DD80004 */  lw         $t8, 0x4($t6)
    /* 1E078 1001E078 AF0F0000 */  sw         $t7, 0x0($t8)
  .L1001E07C:
    /* 1E07C 1001E07C 8FB90024 */  lw         $t9, 0x24($sp)
    /* 1E080 1001E080 AFB90008 */  sw         $t9, 0x8($sp)
    /* 1E084 1001E084 3C098003 */  lui        $t1, %hi(n_syn)
    /* 1E088 1001E088 8D29BA44 */  lw         $t1, %lo(n_syn)($t1)
    /* 1E08C 1001E08C 2528000C */  addiu      $t0, $t1, 0xC
    /* 1E090 1001E090 AFA80004 */  sw         $t0, 0x4($sp)
    /* 1E094 1001E094 8FAA0004 */  lw         $t2, 0x4($sp)
    /* 1E098 1001E098 8FAC0008 */  lw         $t4, 0x8($sp)
    /* 1E09C 1001E09C 8D4B0000 */  lw         $t3, 0x0($t2)
    /* 1E0A0 1001E0A0 AD8B0000 */  sw         $t3, 0x0($t4)
    /* 1E0A4 1001E0A4 8FAD0004 */  lw         $t5, 0x4($sp)
    /* 1E0A8 1001E0A8 8FAE0008 */  lw         $t6, 0x8($sp)
    /* 1E0AC 1001E0AC ADCD0004 */  sw         $t5, 0x4($t6)
    /* 1E0B0 1001E0B0 8FAF0004 */  lw         $t7, 0x4($sp)
    /* 1E0B4 1001E0B4 8DF80000 */  lw         $t8, 0x0($t7)
    /* 1E0B8 1001E0B8 13000005 */  beqz       $t8, .L1001E0D0
    /* 1E0BC 1001E0BC 00000000 */   nop
    /* 1E0C0 1001E0C0 8FA90004 */  lw         $t1, 0x4($sp)
    /* 1E0C4 1001E0C4 8FB90008 */  lw         $t9, 0x8($sp)
    /* 1E0C8 1001E0C8 8D280000 */  lw         $t0, 0x0($t1)
    /* 1E0CC 1001E0CC AD190004 */  sw         $t9, 0x4($t0)
  .L1001E0D0:
    /* 1E0D0 1001E0D0 8FAA0008 */  lw         $t2, 0x8($sp)
    /* 1E0D4 1001E0D4 8FAB0004 */  lw         $t3, 0x4($sp)
    /* 1E0D8 1001E0D8 AD6A0000 */  sw         $t2, 0x0($t3)
    /* 1E0DC 1001E0DC 1000001C */  b          .L1001E150
    /* 1E0E0 1001E0E0 00000000 */   nop
  .L1001E0E4:
    /* 1E0E4 1001E0E4 3C0C8003 */  lui        $t4, %hi(n_syn)
    /* 1E0E8 1001E0E8 8D8CBA44 */  lw         $t4, %lo(n_syn)($t4)
    /* 1E0EC 1001E0EC 8D8D000C */  lw         $t5, 0xC($t4)
    /* 1E0F0 1001E0F0 11A00017 */  beqz       $t5, .L1001E150
    /* 1E0F4 1001E0F4 AFAD0024 */   sw        $t5, 0x24($sp)
  .L1001E0F8:
    /* 1E0F8 1001E0F8 8FAE0024 */  lw         $t6, 0x24($sp)
    /* 1E0FC 1001E0FC AFAE0020 */  sw         $t6, 0x20($sp)
    /* 1E100 1001E100 8FAF0020 */  lw         $t7, 0x20($sp)
    /* 1E104 1001E104 8DF80010 */  lw         $t8, 0x10($t7)
    /* 1E108 1001E108 8709001A */  lh         $t1, 0x1A($t8)
    /* 1E10C 1001E10C 00A9082A */  slt        $at, $a1, $t1
    /* 1E110 1001E110 1420000B */  bnez       $at, .L1001E140
    /* 1E114 1001E114 00000000 */   nop
    /* 1E118 1001E118 8DF90090 */  lw         $t9, 0x90($t7)
    /* 1E11C 1001E11C 17200008 */  bnez       $t9, .L1001E140
    /* 1E120 1001E120 00000000 */   nop
    /* 1E124 1001E124 8FA80020 */  lw         $t0, 0x20($sp)
    /* 1E128 1001E128 AC880000 */  sw         $t0, 0x0($a0)
    /* 1E12C 1001E12C 8FAA0020 */  lw         $t2, 0x20($sp)
    /* 1E130 1001E130 8D4B0010 */  lw         $t3, 0x10($t2)
    /* 1E134 1001E134 8565001A */  lh         $a1, 0x1A($t3)
    /* 1E138 1001E138 240C0001 */  addiu      $t4, $zero, 0x1
    /* 1E13C 1001E13C AFAC001C */  sw         $t4, 0x1C($sp)
  .L1001E140:
    /* 1E140 1001E140 8FAD0024 */  lw         $t5, 0x24($sp)
    /* 1E144 1001E144 8DAE0000 */  lw         $t6, 0x0($t5)
    /* 1E148 1001E148 15C0FFEB */  bnez       $t6, .L1001E0F8
    /* 1E14C 1001E14C AFAE0024 */   sw        $t6, 0x24($sp)
  .L1001E150:
    /* 1E150 1001E150 10000003 */  b          .L1001E160
    /* 1E154 1001E154 8FA2001C */   lw        $v0, 0x1C($sp)
    /* 1E158 1001E158 10000001 */  b          .L1001E160
    /* 1E15C 1001E15C 00000000 */   nop
  .L1001E160:
    /* 1E160 1001E160 03E00008 */  jr         $ra
    /* 1E164 1001E164 27BD0028 */   addiu     $sp, $sp, 0x28
endlabel _allocatePVoice
    /* 1E168 1001E168 00000000 */  nop
    /* 1E16C 1001E16C 00000000 */  nop
