nonmatching func_1505D024, 0x1A0

glabel func_1505D024
    /* 8A4D4 1505D024 27BDFFC0 */  addiu      $sp, $sp, -0x40
    /* 8A4D8 1505D028 AFB00028 */  sw         $s0, 0x28($sp)
    /* 8A4DC 1505D02C AFA60048 */  sw         $a2, 0x48($sp)
    /* 8A4E0 1505D030 30CEFFFF */  andi       $t6, $a2, 0xFFFF
    /* 8A4E4 1505D034 01C03025 */  or         $a2, $t6, $zero
    /* 8A4E8 1505D038 00A08025 */  or         $s0, $a1, $zero
    /* 8A4EC 1505D03C AFBF002C */  sw         $ra, 0x2C($sp)
    /* 8A4F0 1505D040 AFA40040 */  sw         $a0, 0x40($sp)
    /* 8A4F4 1505D044 3C18800C */  lui        $t8, %hi(D_800C35EA)
    /* 8A4F8 1505D048 931835EA */  lbu        $t8, %lo(D_800C35EA)($t8)
    /* 8A4FC 1505D04C 3C0F800A */  lui        $t7, %hi(D_8009A9F8)
    /* 8A500 1505D050 25EFA9F8 */  addiu      $t7, $t7, %lo(D_8009A9F8)
    /* 8A504 1505D054 24010001 */  addiu      $at, $zero, 0x1
    /* 8A508 1505D058 17010003 */  bne        $t8, $at, .L1505D068
    /* 8A50C 1505D05C AFAF0030 */   sw        $t7, 0x30($sp)
    /* 8A510 1505D060 10000053 */  b          .L1505D1B0
    /* 8A514 1505D064 00001025 */   or        $v0, $zero, $zero
  .L1505D068:
    /* 8A518 1505D068 0010CB80 */  sll        $t9, $s0, 14
    /* 8A51C 1505D06C 07210006 */  bgez       $t9, .L1505D088
    /* 8A520 1505D070 8FA80040 */   lw        $t0, 0x40($sp)
    /* 8A524 1505D074 91090125 */  lbu        $t1, 0x125($t0)
    /* 8A528 1505D078 51200004 */  beql       $t1, $zero, .L1505D08C
    /* 8A52C 1505D07C 00105340 */   sll       $t2, $s0, 13
    /* 8A530 1505D080 1000004B */  b          .L1505D1B0
    /* 8A534 1505D084 00001025 */   or        $v0, $zero, $zero
  .L1505D088:
    /* 8A538 1505D088 00105340 */  sll        $t2, $s0, 13
  .L1505D08C:
    /* 8A53C 1505D08C 05410006 */  bgez       $t2, .L1505D0A8
    /* 8A540 1505D090 8FAB0040 */   lw        $t3, 0x40($sp)
    /* 8A544 1505D094 916C0104 */  lbu        $t4, 0x104($t3)
    /* 8A548 1505D098 51800004 */  beql       $t4, $zero, .L1505D0AC
    /* 8A54C 1505D09C 00106AC0 */   sll       $t5, $s0, 11
    /* 8A550 1505D0A0 10000043 */  b          .L1505D1B0
    /* 8A554 1505D0A4 00001025 */   or        $v0, $zero, $zero
  .L1505D0A8:
    /* 8A558 1505D0A8 00106AC0 */  sll        $t5, $s0, 11
  .L1505D0AC:
    /* 8A55C 1505D0AC 05A00006 */  bltz       $t5, .L1505D0C8
    /* 8A560 1505D0B0 8FAE0040 */   lw        $t6, 0x40($sp)
    /* 8A564 1505D0B4 91CF01CA */  lbu        $t7, 0x1CA($t6)
    /* 8A568 1505D0B8 55E00004 */  bnel       $t7, $zero, .L1505D0CC
    /* 8A56C 1505D0BC 2401FFFF */   addiu     $at, $zero, -0x1
    /* 8A570 1505D0C0 1000003B */  b          .L1505D1B0
    /* 8A574 1505D0C4 00001025 */   or        $v0, $zero, $zero
  .L1505D0C8:
    /* 8A578 1505D0C8 2401FFFF */  addiu      $at, $zero, -0x1
  .L1505D0CC:
    /* 8A57C 1505D0CC 14E10004 */  bne        $a3, $at, .L1505D0E0
    /* 8A580 1505D0D0 0010CBC0 */   sll       $t9, $s0, 15
    /* 8A584 1505D0D4 3C01800D */  lui        $at, %hi(D_800D1340)
    /* 8A588 1505D0D8 10000004 */  b          .L1505D0EC
    /* 8A58C 1505D0DC A0201340 */   sb        $zero, %lo(D_800D1340)($at)
  .L1505D0E0:
    /* 8A590 1505D0E0 24F80001 */  addiu      $t8, $a3, 0x1
    /* 8A594 1505D0E4 3C01800D */  lui        $at, %hi(D_800D1340)
    /* 8A598 1505D0E8 A0381340 */  sb         $t8, %lo(D_800D1340)($at)
  .L1505D0EC:
    /* 8A59C 1505D0EC 3C01800D */  lui        $at, %hi(D_800D1292)
    /* 8A5A0 1505D0F0 A4261292 */  sh         $a2, %lo(D_800D1292)($at)
    /* 8A5A4 1505D0F4 3C01800D */  lui        $at, %hi(D_800D1296)
    /* 8A5A8 1505D0F8 07210005 */  bgez       $t9, .L1505D110
    /* 8A5AC 1505D0FC A4261296 */   sh        $a2, %lo(D_800D1296)($at)
    /* 8A5B0 1505D100 3C04800D */  lui        $a0, %hi(D_800D154C)
    /* 8A5B4 1505D104 0D417069 */  jal        func_1505C1A4
    /* 8A5B8 1505D108 8C84154C */   lw        $a0, %lo(D_800D154C)($a0)
    /* 8A5BC 1505D10C AFA20030 */  sw         $v0, 0x30($sp)
  .L1505D110:
    /* 8A5C0 1505D110 8FA80040 */  lw         $t0, 0x40($sp)
    /* 8A5C4 1505D114 3C09800D */  lui        $t1, %hi(D_800CC2D0)
    /* 8A5C8 1505D118 2529C2D0 */  addiu      $t1, $t1, %lo(D_800CC2D0)
    /* 8A5CC 1505D11C 2401032C */  addiu      $at, $zero, 0x32C
    /* 8A5D0 1505D120 01091023 */  subu       $v0, $t0, $t1
    /* 8A5D4 1505D124 0041001A */  div        $zero, $v0, $at
    /* 8A5D8 1505D128 00005012 */  mflo       $t2
    /* 8A5DC 1505D12C 240B0001 */  addiu      $t3, $zero, 0x1
    /* 8A5E0 1505D130 00106300 */  sll        $t4, $s0, 12
    /* 8A5E4 1505D134 014B1804 */  sllv       $v1, $t3, $t2
    /* 8A5E8 1505D138 0581000E */  bgez       $t4, .L1505D174
    /* 8A5EC 1505D13C 01401025 */   or        $v0, $t2, $zero
    /* 8A5F0 1505D140 3C04800D */  lui        $a0, %hi(D_800D121C)
    /* 8A5F4 1505D144 254D0001 */  addiu      $t5, $t2, 0x1
    /* 8A5F8 1505D148 240E0007 */  addiu      $t6, $zero, 0x7
    /* 8A5FC 1505D14C AFAE0018 */  sw         $t6, 0x18($sp)
    /* 8A600 1505D150 AFAD0010 */  sw         $t5, 0x10($sp)
    /* 8A604 1505D154 2484121C */  addiu      $a0, $a0, %lo(D_800D121C)
    /* 8A608 1505D158 01002825 */  or         $a1, $t0, $zero
    /* 8A60C 1505D15C 8FA60030 */  lw         $a2, 0x30($sp)
    /* 8A610 1505D160 320700FF */  andi       $a3, $s0, 0xFF
    /* 8A614 1505D164 0D417079 */  jal        func_1505C1E4
    /* 8A618 1505D168 AFA00014 */   sw        $zero, 0x14($sp)
    /* 8A61C 1505D16C 1000000F */  b          .L1505D1AC
    /* 8A620 1505D170 00401825 */   or        $v1, $v0, $zero
  .L1505D174:
    /* 8A624 1505D174 8FA70030 */  lw         $a3, 0x30($sp)
    /* 8A628 1505D178 3C04800D */  lui        $a0, %hi(D_800D121C)
    /* 8A62C 1505D17C 321800FF */  andi       $t8, $s0, 0xFF
    /* 8A630 1505D180 24590001 */  addiu      $t9, $v0, 0x1
    /* 8A634 1505D184 24090007 */  addiu      $t1, $zero, 0x7
    /* 8A638 1505D188 AFA90018 */  sw         $t1, 0x18($sp)
    /* 8A63C 1505D18C AFB90014 */  sw         $t9, 0x14($sp)
    /* 8A640 1505D190 AFB80010 */  sw         $t8, 0x10($sp)
    /* 8A644 1505D194 2484121C */  addiu      $a0, $a0, %lo(D_800D121C)
    /* 8A648 1505D198 8FA50040 */  lw         $a1, 0x40($sp)
    /* 8A64C 1505D19C AFA30038 */  sw         $v1, 0x38($sp)
    /* 8A650 1505D1A0 0D416E71 */  jal        func_1505B9C4
    /* 8A654 1505D1A4 00E03025 */   or        $a2, $a3, $zero
    /* 8A658 1505D1A8 8FA30038 */  lw         $v1, 0x38($sp)
  .L1505D1AC:
    /* 8A65C 1505D1AC 00601025 */  or         $v0, $v1, $zero
  .L1505D1B0:
    /* 8A660 1505D1B0 8FBF002C */  lw         $ra, 0x2C($sp)
    /* 8A664 1505D1B4 8FB00028 */  lw         $s0, 0x28($sp)
    /* 8A668 1505D1B8 27BD0040 */  addiu      $sp, $sp, 0x40
    /* 8A66C 1505D1BC 03E00008 */  jr         $ra
    /* 8A670 1505D1C0 00000000 */   nop
endlabel func_1505D024
