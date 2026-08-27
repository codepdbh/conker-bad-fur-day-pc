nonmatching func_1505DFDC, 0x84

glabel func_1505DFDC
    /* 8B48C 1505DFDC 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* 8B490 1505DFE0 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 8B494 1505DFE4 00803025 */  or         $a2, $a0, $zero
    /* 8B498 1505DFE8 8CC202D0 */  lw         $v0, 0x2D0($a2)
    /* 8B49C 1505DFEC 340EFFFF */  ori        $t6, $zero, 0xFFFF
    /* 8B4A0 1505DFF0 A4CE0084 */  sh         $t6, 0x84($a2)
    /* 8B4A4 1505DFF4 50400017 */  beql       $v0, $zero, .L1505E054
    /* 8B4A8 1505DFF8 8FBF0014 */   lw        $ra, 0x14($sp)
    /* 8B4AC 1505DFFC 90CF0004 */  lbu        $t7, 0x4($a2)
    /* 8B4B0 1505E000 24440040 */  addiu      $a0, $v0, 0x40
    /* 8B4B4 1505E004 240503A0 */  addiu      $a1, $zero, 0x3A0
    /* 8B4B8 1505E008 AFAF001C */  sw         $t7, 0x1C($sp)
    /* 8B4BC 1505E00C AC400028 */  sw         $zero, 0x28($v0)
    /* 8B4C0 1505E010 0C0089BC */  jal        bzero
    /* 8B4C4 1505E014 AFA20018 */   sw        $v0, 0x18($sp)
    /* 8B4C8 1505E018 8FB8001C */  lw         $t8, 0x1C($sp)
    /* 8B4CC 1505E01C 3C08800C */  lui        $t0, %hi(D_800C4ED0)
    /* 8B4D0 1505E020 25084ED0 */  addiu      $t0, $t0, %lo(D_800C4ED0)
    /* 8B4D4 1505E024 0018C840 */  sll        $t9, $t8, 1
    /* 8B4D8 1505E028 03281821 */  addu       $v1, $t9, $t0
    /* 8B4DC 1505E02C 94690000 */  lhu        $t1, 0x0($v1)
    /* 8B4E0 1505E030 8FA20018 */  lw         $v0, 0x18($sp)
    /* 8B4E4 1505E034 252A0001 */  addiu      $t2, $t1, 0x1
    /* 8B4E8 1505E038 A04A0041 */  sb         $t2, 0x41($v0)
    /* 8B4EC 1505E03C 946B0000 */  lhu        $t3, 0x0($v1)
    /* 8B4F0 1505E040 AC400030 */  sw         $zero, 0x30($v0)
    /* 8B4F4 1505E044 AC400034 */  sw         $zero, 0x34($v0)
    /* 8B4F8 1505E048 256C0001 */  addiu      $t4, $t3, 0x1
    /* 8B4FC 1505E04C A04C0211 */  sb         $t4, 0x211($v0)
    /* 8B500 1505E050 8FBF0014 */  lw         $ra, 0x14($sp)
  .L1505E054:
    /* 8B504 1505E054 27BD0020 */  addiu      $sp, $sp, 0x20
    /* 8B508 1505E058 03E00008 */  jr         $ra
    /* 8B50C 1505E05C 00000000 */   nop
endlabel func_1505DFDC
