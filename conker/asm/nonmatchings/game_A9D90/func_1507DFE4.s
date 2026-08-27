nonmatching func_1507DFE4, 0x130

glabel func_1507DFE4
    /* AB494 1507DFE4 27BDFF98 */  addiu      $sp, $sp, -0x68
    /* AB498 1507DFE8 AFA5006C */  sw         $a1, 0x6C($sp)
    /* AB49C 1507DFEC 00802825 */  or         $a1, $a0, $zero
    /* AB4A0 1507DFF0 AFBF0034 */  sw         $ra, 0x34($sp)
    /* AB4A4 1507DFF4 AFA40068 */  sw         $a0, 0x68($sp)
    /* AB4A8 1507DFF8 3C0E800C */  lui        $t6, %hi(D_800C35EA)
    /* AB4AC 1507DFFC 91CE35EA */  lbu        $t6, %lo(D_800C35EA)($t6)
    /* AB4B0 1507E000 24010001 */  addiu      $at, $zero, 0x1
    /* AB4B4 1507E004 00002025 */  or         $a0, $zero, $zero
    /* AB4B8 1507E008 11C1003E */  beq        $t6, $at, .L1507E104
    /* AB4BC 1507E00C 24060001 */   addiu     $a2, $zero, 0x1
    /* AB4C0 1507E010 27AF0050 */  addiu      $t7, $sp, 0x50
    /* AB4C4 1507E014 27B8004F */  addiu      $t8, $sp, 0x4F
    /* AB4C8 1507E018 27B9004E */  addiu      $t9, $sp, 0x4E
    /* AB4CC 1507E01C 27A80044 */  addiu      $t0, $sp, 0x44
    /* AB4D0 1507E020 27A90048 */  addiu      $t1, $sp, 0x48
    /* AB4D4 1507E024 240A0001 */  addiu      $t2, $zero, 0x1
    /* AB4D8 1507E028 27AB0038 */  addiu      $t3, $sp, 0x38
    /* AB4DC 1507E02C AFAB0028 */  sw         $t3, 0x28($sp)
    /* AB4E0 1507E030 AFAA0024 */  sw         $t2, 0x24($sp)
    /* AB4E4 1507E034 AFA90020 */  sw         $t1, 0x20($sp)
    /* AB4E8 1507E038 AFA8001C */  sw         $t0, 0x1C($sp)
    /* AB4EC 1507E03C AFB90018 */  sw         $t9, 0x18($sp)
    /* AB4F0 1507E040 AFB80014 */  sw         $t8, 0x14($sp)
    /* AB4F4 1507E044 AFAF0010 */  sw         $t7, 0x10($sp)
    /* AB4F8 1507E048 0D42135C */  jal        func_15084D70
    /* AB4FC 1507E04C 27A7005C */   addiu     $a3, $sp, 0x5C
    /* AB500 1507E050 93AC004E */  lbu        $t4, 0x4E($sp)
    /* AB504 1507E054 3C013FB4 */  lui        $at, (0x3FB40000 >> 16)
    /* AB508 1507E058 44814000 */  mtc1       $at, $f8
    /* AB50C 1507E05C 258DFFC0 */  addiu      $t5, $t4, -0x40
    /* AB510 1507E060 448D2000 */  mtc1       $t5, $f4
    /* AB514 1507E064 8FA20038 */  lw         $v0, 0x38($sp)
    /* AB518 1507E068 3C014334 */  lui        $at, (0x43340000 >> 16)
    /* AB51C 1507E06C 468021A0 */  cvt.s.w    $f6, $f4
    /* AB520 1507E070 44818000 */  mtc1       $at, $f16
    /* AB524 1507E074 240E0001 */  addiu      $t6, $zero, 0x1
    /* AB528 1507E078 24010001 */  addiu      $at, $zero, 0x1
    /* AB52C 1507E07C 46083282 */  mul.s      $f10, $f6, $f8
    /* AB530 1507E080 14400003 */  bnez       $v0, .L1507E090
    /* AB534 1507E084 46105000 */   add.s     $f0, $f10, $f16
    /* AB538 1507E088 10000004 */  b          .L1507E09C
    /* AB53C 1507E08C AFAE003C */   sw        $t6, 0x3C($sp)
  .L1507E090:
    /* AB540 1507E090 1441001C */  bne        $v0, $at, .L1507E104
    /* AB544 1507E094 240F0003 */   addiu     $t7, $zero, 0x3
    /* AB548 1507E098 AFAF003C */  sw         $t7, 0x3C($sp)
  .L1507E09C:
    /* AB54C 1507E09C 44070000 */  mfc1       $a3, $f0
    /* AB550 1507E0A0 87A4005C */  lh         $a0, 0x5C($sp)
    /* AB554 1507E0A4 87A5005E */  lh         $a1, 0x5E($sp)
    /* AB558 1507E0A8 0D408864 */  jal        func_15022190
    /* AB55C 1507E0AC 87A60060 */   lh        $a2, 0x60($sp)
    /* AB560 1507E0B0 3C02800C */  lui        $v0, %hi(D_800BE9F0)
    /* AB564 1507E0B4 2442E9F0 */  addiu      $v0, $v0, %lo(D_800BE9F0)
    /* AB568 1507E0B8 8C580000 */  lw         $t8, 0x0($v0)
    /* AB56C 1507E0BC 24190025 */  addiu      $t9, $zero, 0x25
    /* AB570 1507E0C0 AC590000 */  sw         $t9, 0x0($v0)
    /* AB574 1507E0C4 24080001 */  addiu      $t0, $zero, 0x1
    /* AB578 1507E0C8 3C01800C */  lui        $at, %hi(D_800C3671)
    /* AB57C 1507E0CC A0283671 */  sb         $t0, %lo(D_800C3671)($at)
    /* AB580 1507E0D0 24040025 */  addiu      $a0, $zero, 0x25
    /* AB584 1507E0D4 8FA5003C */  lw         $a1, 0x3C($sp)
    /* AB588 1507E0D8 00003025 */  or         $a2, $zero, $zero
    /* AB58C 1507E0DC 00003825 */  or         $a3, $zero, $zero
    /* AB590 1507E0E0 AFA00010 */  sw         $zero, 0x10($sp)
    /* AB594 1507E0E4 0D4074D2 */  jal        func_1501D348
    /* AB598 1507E0E8 AFB80064 */   sw        $t8, 0x64($sp)
    /* AB59C 1507E0EC 8FAA0064 */  lw         $t2, 0x64($sp)
    /* AB5A0 1507E0F0 24090001 */  addiu      $t1, $zero, 0x1
    /* AB5A4 1507E0F4 3C01800C */  lui        $at, %hi(D_800C3670)
    /* AB5A8 1507E0F8 A0293670 */  sb         $t1, %lo(D_800C3670)($at)
    /* AB5AC 1507E0FC 3C01800C */  lui        $at, %hi(D_800BE9F0)
    /* AB5B0 1507E100 AC2AE9F0 */  sw         $t2, %lo(D_800BE9F0)($at)
  .L1507E104:
    /* AB5B4 1507E104 8FBF0034 */  lw         $ra, 0x34($sp)
    /* AB5B8 1507E108 27BD0068 */  addiu      $sp, $sp, 0x68
    /* AB5BC 1507E10C 03E00008 */  jr         $ra
    /* AB5C0 1507E110 00000000 */   nop
endlabel func_1507DFE4
