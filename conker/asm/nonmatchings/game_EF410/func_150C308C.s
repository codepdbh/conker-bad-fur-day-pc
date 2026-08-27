nonmatching func_150C308C, 0xD4

glabel func_150C308C
    /* F053C 150C308C 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* F0540 150C3090 AFBF0014 */  sw         $ra, 0x14($sp)
    /* F0544 150C3094 AFA40020 */  sw         $a0, 0x20($sp)
    /* F0548 150C3098 8FAE0020 */  lw         $t6, 0x20($sp)
    /* F054C 150C309C 00002825 */  or         $a1, $zero, $zero
    /* F0550 150C30A0 3C048008 */  lui        $a0, %hi(D_80082FA4)
    /* F0554 150C30A4 85CF001C */  lh         $t7, 0x1C($t6)
    /* F0558 150C30A8 29E10006 */  slti       $at, $t7, 0x6
    /* F055C 150C30AC 14200023 */  bnez       $at, .L150C313C
    /* F0560 150C30B0 00000000 */   nop
    /* F0564 150C30B4 8C842FA4 */  lw         $a0, %lo(D_80082FA4)($a0)
    /* F0568 150C30B8 0D4512CD */  jal        func_15144B34
    /* F056C 150C30BC A3A0001F */   sb        $zero, 0x1F($sp)
    /* F0570 150C30C0 C4400000 */  lwc1       $f0, 0x0($v0)
    /* F0574 150C30C4 C4420008 */  lwc1       $f2, 0x8($v0)
    /* F0578 150C30C8 3C01800A */  lui        $at, %hi(D_800A0310)
    /* F057C 150C30CC 46000102 */  mul.s      $f4, $f0, $f0
    /* F0580 150C30D0 C4280310 */  lwc1       $f8, %lo(D_800A0310)($at)
    /* F0584 150C30D4 93A5001F */  lbu        $a1, 0x1F($sp)
    /* F0588 150C30D8 46021182 */  mul.s      $f6, $f2, $f2
    /* F058C 150C30DC 00401825 */  or         $v1, $v0, $zero
    /* F0590 150C30E0 46062300 */  add.s      $f12, $f4, $f6
    /* F0594 150C30E4 4608603C */  c.lt.s     $f12, $f8
    /* F0598 150C30E8 00000000 */  nop
    /* F059C 150C30EC 45020004 */  bc1fl      .L150C3100
    /* F05A0 150C30F0 C46C0000 */   lwc1      $f12, 0x0($v1)
    /* F05A4 150C30F4 10000011 */  b          .L150C313C
    /* F05A8 150C30F8 24050001 */   addiu     $a1, $zero, 0x1
    /* F05AC 150C30FC C46C0000 */  lwc1       $f12, 0x0($v1)
  .L150C3100:
    /* F05B0 150C3100 C46E0008 */  lwc1       $f14, 0x8($v1)
    /* F05B4 150C3104 0D412128 */  jal        func_150484A0
    /* F05B8 150C3108 A3A5001F */   sb        $a1, 0x1F($sp)
    /* F05BC 150C310C 8FB80020 */  lw         $t8, 0x20($sp)
    /* F05C0 150C3110 46000306 */  mov.s      $f12, $f0
    /* F05C4 150C3114 0D451323 */  jal        func_15144C8C
    /* F05C8 150C3118 C70E0160 */   lwc1      $f14, 0x160($t8)
    /* F05CC 150C311C 3C01800A */  lui        $at, %hi(D_800A0314)
    /* F05D0 150C3120 C42A0314 */  lwc1       $f10, %lo(D_800A0314)($at)
    /* F05D4 150C3124 93A5001F */  lbu        $a1, 0x1F($sp)
    /* F05D8 150C3128 4600503C */  c.lt.s     $f10, $f0
    /* F05DC 150C312C 00000000 */  nop
    /* F05E0 150C3130 45000002 */  bc1f       .L150C313C
    /* F05E4 150C3134 00000000 */   nop
    /* F05E8 150C3138 24050001 */  addiu      $a1, $zero, 0x1
  .L150C313C:
    /* F05EC 150C313C 10A00004 */  beqz       $a1, .L150C3150
    /* F05F0 150C3140 24020001 */   addiu     $v0, $zero, 0x1
    /* F05F4 150C3144 8FA80020 */  lw         $t0, 0x20($sp)
    /* F05F8 150C3148 24190005 */  addiu      $t9, $zero, 0x5
    /* F05FC 150C314C A519001C */  sh         $t9, 0x1C($t0)
  .L150C3150:
    /* F0600 150C3150 8FBF0014 */  lw         $ra, 0x14($sp)
    /* F0604 150C3154 27BD0020 */  addiu      $sp, $sp, 0x20
    /* F0608 150C3158 03E00008 */  jr         $ra
    /* F060C 150C315C 00000000 */   nop
endlabel func_150C308C
