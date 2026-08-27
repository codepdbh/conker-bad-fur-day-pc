nonmatching n_alSynAllocVoice, 0x2BC

glabel n_alSynAllocVoice
    /* 1DC80 1001DC80 27BDFFD0 */  addiu      $sp, $sp, -0x30
    /* 1DC84 1001DC84 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 1DC88 1001DC88 AFA40030 */  sw         $a0, 0x30($sp)
    /* 1DC8C 1001DC8C AFA50034 */  sw         $a1, 0x34($sp)
    /* 1DC90 1001DC90 AFA0002C */  sw         $zero, 0x2C($sp)
    /* 1DC94 1001DC94 8FAE0034 */  lw         $t6, 0x34($sp)
    /* 1DC98 1001DC98 8FB80030 */  lw         $t8, 0x30($sp)
    /* 1DC9C 1001DC9C 85CF0000 */  lh         $t7, 0x0($t6)
    /* 1DCA0 1001DCA0 A70F001A */  sh         $t7, 0x1A($t8)
    /* 1DCA4 1001DCA4 8FB90034 */  lw         $t9, 0x34($sp)
    /* 1DCA8 1001DCA8 8FA90030 */  lw         $t1, 0x30($sp)
    /* 1DCAC 1001DCAC 93280004 */  lbu        $t0, 0x4($t9)
    /* 1DCB0 1001DCB0 A528001E */  sh         $t0, 0x1E($t1)
    /* 1DCB4 1001DCB4 8FAA0030 */  lw         $t2, 0x30($sp)
    /* 1DCB8 1001DCB8 AD40000C */  sw         $zero, 0xC($t2)
    /* 1DCBC 1001DCBC 8FAB0034 */  lw         $t3, 0x34($sp)
    /* 1DCC0 1001DCC0 8FAD0030 */  lw         $t5, 0x30($sp)
    /* 1DCC4 1001DCC4 856C0002 */  lh         $t4, 0x2($t3)
    /* 1DCC8 1001DCC8 A5AC001C */  sh         $t4, 0x1C($t5)
    /* 1DCCC 1001DCCC 8FAE0030 */  lw         $t6, 0x30($sp)
    /* 1DCD0 1001DCD0 A5C00018 */  sh         $zero, 0x18($t6)
    /* 1DCD4 1001DCD4 8FAF0030 */  lw         $t7, 0x30($sp)
    /* 1DCD8 1001DCD8 ADE00008 */  sw         $zero, 0x8($t7)
    /* 1DCDC 1001DCDC 8FB80034 */  lw         $t8, 0x34($sp)
    /* 1DCE0 1001DCE0 8FA80030 */  lw         $t0, 0x30($sp)
    /* 1DCE4 1001DCE4 8F190008 */  lw         $t9, 0x8($t8)
    /* 1DCE8 1001DCE8 AD190014 */  sw         $t9, 0x14($t0)
    /* 1DCEC 1001DCEC 8FA90034 */  lw         $t1, 0x34($sp)
    /* 1DCF0 1001DCF0 27A4002C */  addiu      $a0, $sp, 0x2C
    /* 1DCF4 1001DCF4 0C0077CF */  jal        _allocatePVoice
    /* 1DCF8 1001DCF8 85250000 */   lh        $a1, 0x0($t1)
    /* 1DCFC 1001DCFC AFA20024 */  sw         $v0, 0x24($sp)
    /* 1DD00 1001DD00 8FAA002C */  lw         $t2, 0x2C($sp)
    /* 1DD04 1001DD04 11400083 */  beqz       $t2, .L1001DF14
    /* 1DD08 1001DD08 00000000 */   nop
    /* 1DD0C 1001DD0C 8FAB0024 */  lw         $t3, 0x24($sp)
    /* 1DD10 1001DD10 11600043 */  beqz       $t3, .L1001DE20
    /* 1DD14 1001DD14 00000000 */   nop
    /* 1DD18 1001DD18 8FAD002C */  lw         $t5, 0x2C($sp)
    /* 1DD1C 1001DD1C 240C0228 */  addiu      $t4, $zero, 0x228
    /* 1DD20 1001DD20 ADAC0090 */  sw         $t4, 0x90($t5)
    /* 1DD24 1001DD24 8FAE002C */  lw         $t6, 0x2C($sp)
    /* 1DD28 1001DD28 8DCF0010 */  lw         $t7, 0x10($t6)
    /* 1DD2C 1001DD2C ADE00008 */  sw         $zero, 0x8($t7)
    /* 1DD30 1001DD30 8FB80030 */  lw         $t8, 0x30($sp)
    /* 1DD34 1001DD34 8FB9002C */  lw         $t9, 0x2C($sp)
    /* 1DD38 1001DD38 AF380010 */  sw         $t8, 0x10($t9)
    /* 1DD3C 1001DD3C 8FA8002C */  lw         $t0, 0x2C($sp)
    /* 1DD40 1001DD40 8FA90030 */  lw         $t1, 0x30($sp)
    /* 1DD44 1001DD44 AD280008 */  sw         $t0, 0x8($t1)
    /* 1DD48 1001DD48 0C0065B9 */  jal        __n_allocParam
    /* 1DD4C 1001DD4C 00000000 */   nop
    /* 1DD50 1001DD50 AFA20028 */  sw         $v0, 0x28($sp)
    /* 1DD54 1001DD54 8FAA0028 */  lw         $t2, 0x28($sp)
    /* 1DD58 1001DD58 11400015 */  beqz       $t2, .L1001DDB0
    /* 1DD5C 1001DD5C 00000000 */   nop
    /* 1DD60 1001DD60 3C0B8003 */  lui        $t3, %hi(n_syn)
    /* 1DD64 1001DD64 8D6BBA44 */  lw         $t3, %lo(n_syn)($t3)
    /* 1DD68 1001DD68 8FAD0028 */  lw         $t5, 0x28($sp)
    /* 1DD6C 1001DD6C 8D6C001C */  lw         $t4, 0x1C($t3)
    /* 1DD70 1001DD70 ADAC0004 */  sw         $t4, 0x4($t5)
    /* 1DD74 1001DD74 8FAF0028 */  lw         $t7, 0x28($sp)
    /* 1DD78 1001DD78 240E000B */  addiu      $t6, $zero, 0xB
    /* 1DD7C 1001DD7C A5EE0008 */  sh         $t6, 0x8($t7)
    /* 1DD80 1001DD80 8FB80028 */  lw         $t8, 0x28($sp)
    /* 1DD84 1001DD84 AF00000C */  sw         $zero, 0xC($t8)
    /* 1DD88 1001DD88 8FA80028 */  lw         $t0, 0x28($sp)
    /* 1DD8C 1001DD8C 24190170 */  addiu      $t9, $zero, 0x170
    /* 1DD90 1001DD90 AD190010 */  sw         $t9, 0x10($t0)
    /* 1DD94 1001DD94 8FA90030 */  lw         $t1, 0x30($sp)
    /* 1DD98 1001DD98 24050003 */  addiu      $a1, $zero, 0x3
    /* 1DD9C 1001DD9C 8FA60028 */  lw         $a2, 0x28($sp)
    /* 1DDA0 1001DDA0 0C00825E */  jal        n_alEnvmixerParam
    /* 1DDA4 1001DDA4 8D240008 */   lw        $a0, 0x8($t1)
    /* 1DDA8 1001DDA8 10000001 */  b          .L1001DDB0
    /* 1DDAC 1001DDAC 00000000 */   nop
  .L1001DDB0:
    /* 1DDB0 1001DDB0 0C0065B9 */  jal        __n_allocParam
    /* 1DDB4 1001DDB4 00000000 */   nop
    /* 1DDB8 1001DDB8 AFA20028 */  sw         $v0, 0x28($sp)
    /* 1DDBC 1001DDBC 8FAA0028 */  lw         $t2, 0x28($sp)
    /* 1DDC0 1001DDC0 11400015 */  beqz       $t2, .L1001DE18
    /* 1DDC4 1001DDC4 00000000 */   nop
    /* 1DDC8 1001DDC8 3C0B8003 */  lui        $t3, %hi(n_syn)
    /* 1DDCC 1001DDCC 8D6BBA44 */  lw         $t3, %lo(n_syn)($t3)
    /* 1DDD0 1001DDD0 8FAD002C */  lw         $t5, 0x2C($sp)
    /* 1DDD4 1001DDD4 8FB80028 */  lw         $t8, 0x28($sp)
    /* 1DDD8 1001DDD8 8D6C001C */  lw         $t4, 0x1C($t3)
    /* 1DDDC 1001DDDC 8DAE0090 */  lw         $t6, 0x90($t5)
    /* 1DDE0 1001DDE0 018E7821 */  addu       $t7, $t4, $t6
    /* 1DDE4 1001DDE4 AF0F0004 */  sw         $t7, 0x4($t8)
    /* 1DDE8 1001DDE8 8FA80028 */  lw         $t0, 0x28($sp)
    /* 1DDEC 1001DDEC 2419000F */  addiu      $t9, $zero, 0xF
    /* 1DDF0 1001DDF0 A5190008 */  sh         $t9, 0x8($t0)
    /* 1DDF4 1001DDF4 8FA90028 */  lw         $t1, 0x28($sp)
    /* 1DDF8 1001DDF8 AD200000 */  sw         $zero, 0x0($t1)
    /* 1DDFC 1001DDFC 8FAA0030 */  lw         $t2, 0x30($sp)
    /* 1DE00 1001DE00 24050003 */  addiu      $a1, $zero, 0x3
    /* 1DE04 1001DE04 8FA60028 */  lw         $a2, 0x28($sp)
    /* 1DE08 1001DE08 0C00825E */  jal        n_alEnvmixerParam
    /* 1DE0C 1001DE0C 8D440008 */   lw        $a0, 0x8($t2)
    /* 1DE10 1001DE10 10000001 */  b          .L1001DE18
    /* 1DE14 1001DE14 00000000 */   nop
  .L1001DE18:
    /* 1DE18 1001DE18 1000003E */  b          .L1001DF14
    /* 1DE1C 1001DE1C 00000000 */   nop
  .L1001DE20:
    /* 1DE20 1001DE20 8FAB002C */  lw         $t3, 0x2C($sp)
    /* 1DE24 1001DE24 AD600090 */  sw         $zero, 0x90($t3)
    /* 1DE28 1001DE28 8FAD0030 */  lw         $t5, 0x30($sp)
    /* 1DE2C 1001DE2C 8FAC002C */  lw         $t4, 0x2C($sp)
    /* 1DE30 1001DE30 AD8D0010 */  sw         $t5, 0x10($t4)
    /* 1DE34 1001DE34 8FAE002C */  lw         $t6, 0x2C($sp)
    /* 1DE38 1001DE38 8FAF0030 */  lw         $t7, 0x30($sp)
    /* 1DE3C 1001DE3C ADEE0008 */  sw         $t6, 0x8($t7)
    /* 1DE40 1001DE40 8FB8002C */  lw         $t8, 0x2C($sp)
    /* 1DE44 1001DE44 27190008 */  addiu      $t9, $t8, 0x8
    /* 1DE48 1001DE48 AFB90020 */  sw         $t9, 0x20($sp)
    /* 1DE4C 1001DE4C 8FA80020 */  lw         $t0, 0x20($sp)
    /* 1DE50 1001DE50 8D090000 */  lw         $t1, 0x0($t0)
    /* 1DE54 1001DE54 11200005 */  beqz       $t1, .L1001DE6C
    /* 1DE58 1001DE58 00000000 */   nop
    /* 1DE5C 1001DE5C 8FAA0020 */  lw         $t2, 0x20($sp)
    /* 1DE60 1001DE60 8D4B0004 */  lw         $t3, 0x4($t2)
    /* 1DE64 1001DE64 8D4D0000 */  lw         $t5, 0x0($t2)
    /* 1DE68 1001DE68 ADAB0004 */  sw         $t3, 0x4($t5)
  .L1001DE6C:
    /* 1DE6C 1001DE6C 8FAC0020 */  lw         $t4, 0x20($sp)
    /* 1DE70 1001DE70 8D8E0004 */  lw         $t6, 0x4($t4)
    /* 1DE74 1001DE74 11C00005 */  beqz       $t6, .L1001DE8C
    /* 1DE78 1001DE78 00000000 */   nop
    /* 1DE7C 1001DE7C 8FAF0020 */  lw         $t7, 0x20($sp)
    /* 1DE80 1001DE80 8DF80000 */  lw         $t8, 0x0($t7)
    /* 1DE84 1001DE84 8DF90004 */  lw         $t9, 0x4($t7)
    /* 1DE88 1001DE88 AF380000 */  sw         $t8, 0x0($t9)
  .L1001DE8C:
    /* 1DE8C 1001DE8C 8FA8002C */  lw         $t0, 0x2C($sp)
    /* 1DE90 1001DE90 25090008 */  addiu      $t1, $t0, 0x8
    /* 1DE94 1001DE94 AFA9001C */  sw         $t1, 0x1C($sp)
    /* 1DE98 1001DE98 8FAD0034 */  lw         $t5, 0x34($sp)
    /* 1DE9C 1001DE9C 3C0A8003 */  lui        $t2, %hi(n_syn)
    /* 1DEA0 1001DEA0 8D4ABA44 */  lw         $t2, %lo(n_syn)($t2)
    /* 1DEA4 1001DEA4 85AC0002 */  lh         $t4, 0x2($t5)
    /* 1DEA8 1001DEA8 8D4B0048 */  lw         $t3, 0x48($t2)
    /* 1DEAC 1001DEAC 000C7100 */  sll        $t6, $t4, 4
    /* 1DEB0 1001DEB0 01CC7021 */  addu       $t6, $t6, $t4
    /* 1DEB4 1001DEB4 000E7080 */  sll        $t6, $t6, 2
    /* 1DEB8 1001DEB8 016E7821 */  addu       $t7, $t3, $t6
    /* 1DEBC 1001DEBC 25F80014 */  addiu      $t8, $t7, 0x14
    /* 1DEC0 1001DEC0 AFB80018 */  sw         $t8, 0x18($sp)
    /* 1DEC4 1001DEC4 8FB90018 */  lw         $t9, 0x18($sp)
    /* 1DEC8 1001DEC8 8FA9001C */  lw         $t1, 0x1C($sp)
    /* 1DECC 1001DECC 8F280000 */  lw         $t0, 0x0($t9)
    /* 1DED0 1001DED0 AD280000 */  sw         $t0, 0x0($t1)
    /* 1DED4 1001DED4 8FAA0018 */  lw         $t2, 0x18($sp)
    /* 1DED8 1001DED8 8FAD001C */  lw         $t5, 0x1C($sp)
    /* 1DEDC 1001DEDC ADAA0004 */  sw         $t2, 0x4($t5)
    /* 1DEE0 1001DEE0 8FAC0018 */  lw         $t4, 0x18($sp)
    /* 1DEE4 1001DEE4 8D8B0000 */  lw         $t3, 0x0($t4)
    /* 1DEE8 1001DEE8 11600005 */  beqz       $t3, .L1001DF00
    /* 1DEEC 1001DEEC 00000000 */   nop
    /* 1DEF0 1001DEF0 8FAF0018 */  lw         $t7, 0x18($sp)
    /* 1DEF4 1001DEF4 8FAE001C */  lw         $t6, 0x1C($sp)
    /* 1DEF8 1001DEF8 8DF80000 */  lw         $t8, 0x0($t7)
    /* 1DEFC 1001DEFC AF0E0004 */  sw         $t6, 0x4($t8)
  .L1001DF00:
    /* 1DF00 1001DF00 8FB9001C */  lw         $t9, 0x1C($sp)
    /* 1DF04 1001DF04 8FA80018 */  lw         $t0, 0x18($sp)
    /* 1DF08 1001DF08 AD190000 */  sw         $t9, 0x0($t0)
    /* 1DF0C 1001DF0C 8FA9002C */  lw         $t1, 0x2C($sp)
    /* 1DF10 1001DF10 AD200028 */  sw         $zero, 0x28($t1)
  .L1001DF14:
    /* 1DF14 1001DF14 8FA2002C */  lw         $v0, 0x2C($sp)
    /* 1DF18 1001DF18 0002502B */  sltu       $t2, $zero, $v0
    /* 1DF1C 1001DF1C 10000003 */  b          .L1001DF2C
    /* 1DF20 1001DF20 01401025 */   or        $v0, $t2, $zero
    /* 1DF24 1001DF24 10000001 */  b          .L1001DF2C
    /* 1DF28 1001DF28 00000000 */   nop
  .L1001DF2C:
    /* 1DF2C 1001DF2C 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 1DF30 1001DF30 27BD0030 */  addiu      $sp, $sp, 0x30
    /* 1DF34 1001DF34 03E00008 */  jr         $ra
    /* 1DF38 1001DF38 00000000 */   nop
endlabel n_alSynAllocVoice
