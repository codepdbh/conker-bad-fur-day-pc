nonmatching func_151DAE28, 0x1DC

glabel func_151DAE28
    /* 2082D8 151DAE28 27BDFFB0 */  addiu      $sp, $sp, -0x50
    /* 2082DC 151DAE2C AFB00020 */  sw         $s0, 0x20($sp)
    /* 2082E0 151DAE30 00808025 */  or         $s0, $a0, $zero
    /* 2082E4 151DAE34 AFBF0024 */  sw         $ra, 0x24($sp)
    /* 2082E8 151DAE38 AFA50054 */  sw         $a1, 0x54($sp)
    /* 2082EC 151DAE3C 27AE0037 */  addiu      $t6, $sp, 0x37
    /* 2082F0 151DAE40 AFAE0010 */  sw         $t6, 0x10($sp)
    /* 2082F4 151DAE44 26040100 */  addiu      $a0, $s0, 0x100
    /* 2082F8 151DAE48 87A50056 */  lh         $a1, 0x56($sp)
    /* 2082FC 151DAE4C 24060040 */  addiu      $a2, $zero, 0x40
    /* 208300 151DAE50 0D475758 */  jal        func_151D5D60
    /* 208304 151DAE54 27A7004C */   addiu     $a3, $sp, 0x4C
    /* 208308 151DAE58 8FA2004C */  lw         $v0, 0x4C($sp)
    /* 20830C 151DAE5C 93AF0037 */  lbu        $t7, 0x37($sp)
    /* 208310 151DAE60 10400017 */  beqz       $v0, .L151DAEC0
    /* 208314 151DAE64 AFA20048 */   sw        $v0, 0x48($sp)
    /* 208318 151DAE68 11E0000F */  beqz       $t7, .L151DAEA8
    /* 20831C 151DAE6C 87B80056 */   lh        $t8, 0x56($sp)
    /* 208320 151DAE70 0018C880 */  sll        $t9, $t8, 2
    /* 208324 151DAE74 02191021 */  addu       $v0, $s0, $t9
    /* 208328 151DAE78 8C440100 */  lw         $a0, 0x100($v0)
    /* 20832C 151DAE7C 260500C0 */  addiu      $a1, $s0, 0xC0
    /* 208330 151DAE80 AFA5002C */  sw         $a1, 0x2C($sp)
    /* 208334 151DAE84 AFA20030 */  sw         $v0, 0x30($sp)
    /* 208338 151DAE88 0C008BB0 */  jal        memcpy
    /* 20833C 151DAE8C 24060040 */   addiu     $a2, $zero, 0x40
    /* 208340 151DAE90 8FA20030 */  lw         $v0, 0x30($sp)
    /* 208344 151DAE94 8FA5002C */  lw         $a1, 0x2C($sp)
    /* 208348 151DAE98 24060040 */  addiu      $a2, $zero, 0x40
    /* 20834C 151DAE9C 8C440100 */  lw         $a0, 0x100($v0)
    /* 208350 151DAEA0 0C008BB0 */  jal        memcpy
    /* 208354 151DAEA4 24840040 */   addiu     $a0, $a0, 0x40
  .L151DAEA8:
    /* 208358 151DAEA8 87A20056 */  lh         $v0, 0x56($sp)
    /* 20835C 151DAEAC 3C01800E */  lui        $at, %hi(D_800DD1D8)
    /* 208360 151DAEB0 8FA9004C */  lw         $t1, 0x4C($sp)
    /* 208364 151DAEB4 00024080 */  sll        $t0, $v0, 2
    /* 208368 151DAEB8 10000003 */  b          .L151DAEC8
    /* 20836C 151DAEBC 01001025 */   or        $v0, $t0, $zero
  .L151DAEC0:
    /* 208370 151DAEC0 1000004B */  b          .L151DAFF0
    /* 208374 151DAEC4 00001025 */   or        $v0, $zero, $zero
  .L151DAEC8:
    /* 208378 151DAEC8 00220821 */  addu       $at, $at, $v0
    /* 20837C 151DAECC C604002C */  lwc1       $f4, 0x2C($s0)
    /* 208380 151DAED0 C606004C */  lwc1       $f6, 0x4C($s0)
    /* 208384 151DAED4 C430D1D8 */  lwc1       $f16, %lo(D_800DD1D8)($at)
    /* 208388 151DAED8 3C01800E */  lui        $at, %hi(D_800DD1E8)
    /* 20838C 151DAEDC 00220821 */  addu       $at, $at, $v0
    /* 208390 151DAEE0 46062002 */  mul.s      $f0, $f4, $f6
    /* 208394 151DAEE4 C6080030 */  lwc1       $f8, 0x30($s0)
    /* 208398 151DAEE8 C60A0050 */  lwc1       $f10, 0x50($s0)
    /* 20839C 151DAEEC C432D1E8 */  lwc1       $f18, %lo(D_800DD1E8)($at)
    /* 2083A0 151DAEF0 A5200006 */  sh         $zero, 0x6($t1)
    /* 2083A4 151DAEF4 8FAA004C */  lw         $t2, 0x4C($sp)
    /* 2083A8 151DAEF8 460A4382 */  mul.s      $f14, $f8, $f10
    /* 2083AC 151DAEFC A5400016 */  sh         $zero, 0x16($t2)
    /* 2083B0 151DAF00 8FAB004C */  lw         $t3, 0x4C($sp)
    /* 2083B4 151DAF04 46008082 */  mul.s      $f2, $f16, $f0
    /* 2083B8 151DAF08 A5600026 */  sh         $zero, 0x26($t3)
    /* 2083BC 151DAF0C 46009302 */  mul.s      $f12, $f18, $f0
    /* 2083C0 151DAF10 8FAC004C */  lw         $t4, 0x4C($sp)
    /* 2083C4 151DAF14 A5800036 */  sh         $zero, 0x36($t4)
    /* 2083C8 151DAF18 C6040034 */  lwc1       $f4, 0x34($s0)
    /* 2083CC 151DAF1C 8FB8004C */  lw         $t8, 0x4C($sp)
    /* 2083D0 151DAF20 460C2180 */  add.s      $f6, $f4, $f12
    /* 2083D4 151DAF24 4600320D */  trunc.w.s  $f8, $f6
    /* 2083D8 151DAF28 440F4000 */  mfc1       $t7, $f8
    /* 2083DC 151DAF2C 00000000 */  nop
    /* 2083E0 151DAF30 A70F0030 */  sh         $t7, 0x30($t8)
    /* 2083E4 151DAF34 8FB9004C */  lw         $t9, 0x4C($sp)
    /* 2083E8 151DAF38 A72F0000 */  sh         $t7, 0x0($t9)
    /* 2083EC 151DAF3C C60A0038 */  lwc1       $f10, 0x38($s0)
    /* 2083F0 151DAF40 8FAB004C */  lw         $t3, 0x4C($sp)
    /* 2083F4 151DAF44 4600540D */  trunc.w.s  $f16, $f10
    /* 2083F8 151DAF48 440A8000 */  mfc1       $t2, $f16
    /* 2083FC 151DAF4C 00000000 */  nop
    /* 208400 151DAF50 A56A0012 */  sh         $t2, 0x12($t3)
    /* 208404 151DAF54 8FAC004C */  lw         $t4, 0x4C($sp)
    /* 208408 151DAF58 A58A0002 */  sh         $t2, 0x2($t4)
    /* 20840C 151DAF5C C612003C */  lwc1       $f18, 0x3C($s0)
    /* 208410 151DAF60 8FB8004C */  lw         $t8, 0x4C($sp)
    /* 208414 151DAF64 46029101 */  sub.s      $f4, $f18, $f2
    /* 208418 151DAF68 4600218D */  trunc.w.s  $f6, $f4
    /* 20841C 151DAF6C 440F3000 */  mfc1       $t7, $f6
    /* 208420 151DAF70 00000000 */  nop
    /* 208424 151DAF74 A70F0034 */  sh         $t7, 0x34($t8)
    /* 208428 151DAF78 8FB9004C */  lw         $t9, 0x4C($sp)
    /* 20842C 151DAF7C A72F0004 */  sh         $t7, 0x4($t9)
    /* 208430 151DAF80 C6080034 */  lwc1       $f8, 0x34($s0)
    /* 208434 151DAF84 8FAB004C */  lw         $t3, 0x4C($sp)
    /* 208438 151DAF88 460C4281 */  sub.s      $f10, $f8, $f12
    /* 20843C 151DAF8C 4600540D */  trunc.w.s  $f16, $f10
    /* 208440 151DAF90 440A8000 */  mfc1       $t2, $f16
    /* 208444 151DAF94 00000000 */  nop
    /* 208448 151DAF98 A56A0020 */  sh         $t2, 0x20($t3)
    /* 20844C 151DAF9C 8FAC004C */  lw         $t4, 0x4C($sp)
    /* 208450 151DAFA0 A58A0010 */  sh         $t2, 0x10($t4)
    /* 208454 151DAFA4 C6120038 */  lwc1       $f18, 0x38($s0)
    /* 208458 151DAFA8 8FB8004C */  lw         $t8, 0x4C($sp)
    /* 20845C 151DAFAC 460E9100 */  add.s      $f4, $f18, $f14
    /* 208460 151DAFB0 4600218D */  trunc.w.s  $f6, $f4
    /* 208464 151DAFB4 440F3000 */  mfc1       $t7, $f6
    /* 208468 151DAFB8 00000000 */  nop
    /* 20846C 151DAFBC A70F0032 */  sh         $t7, 0x32($t8)
    /* 208470 151DAFC0 8FB9004C */  lw         $t9, 0x4C($sp)
    /* 208474 151DAFC4 A72F0022 */  sh         $t7, 0x22($t9)
    /* 208478 151DAFC8 C608003C */  lwc1       $f8, 0x3C($s0)
    /* 20847C 151DAFCC 8FAB004C */  lw         $t3, 0x4C($sp)
    /* 208480 151DAFD0 46024280 */  add.s      $f10, $f8, $f2
    /* 208484 151DAFD4 4600540D */  trunc.w.s  $f16, $f10
    /* 208488 151DAFD8 440A8000 */  mfc1       $t2, $f16
    /* 20848C 151DAFDC 00000000 */  nop
    /* 208490 151DAFE0 A56A0024 */  sh         $t2, 0x24($t3)
    /* 208494 151DAFE4 8FAC004C */  lw         $t4, 0x4C($sp)
    /* 208498 151DAFE8 A58A0014 */  sh         $t2, 0x14($t4)
    /* 20849C 151DAFEC 8FA20048 */  lw         $v0, 0x48($sp)
  .L151DAFF0:
    /* 2084A0 151DAFF0 8FBF0024 */  lw         $ra, 0x24($sp)
    /* 2084A4 151DAFF4 8FB00020 */  lw         $s0, 0x20($sp)
    /* 2084A8 151DAFF8 27BD0050 */  addiu      $sp, $sp, 0x50
    /* 2084AC 151DAFFC 03E00008 */  jr         $ra
    /* 2084B0 151DB000 00000000 */   nop
endlabel func_151DAE28
