nonmatching func_1000C7E8, 0x14C

glabel func_1000C7E8
    /* C7E8 1000C7E8 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* C7EC 1000C7EC 44867000 */  mtc1       $a2, $f14
    /* C7F0 1000C7F0 00803025 */  or         $a2, $a0, $zero
    /* C7F4 1000C7F4 AFBF0014 */  sw         $ra, 0x14($sp)
    /* C7F8 1000C7F8 AFA40018 */  sw         $a0, 0x18($sp)
    /* C7FC 1000C7FC AFA5001C */  sw         $a1, 0x1C($sp)
    /* C800 1000C800 AFA70024 */  sw         $a3, 0x24($sp)
    /* C804 1000C804 3C0E800C */  lui        $t6, %hi(D_800BE9F0)
    /* C808 1000C808 8DCEE9F0 */  lw         $t6, %lo(D_800BE9F0)($t6)
    /* C80C 1000C80C 24010031 */  addiu      $at, $zero, 0x31
    /* C810 1000C810 3C038003 */  lui        $v1, %hi(D_8002B070)
    /* C814 1000C814 15C10016 */  bne        $t6, $at, .L1000C870
    /* C818 1000C818 2463B070 */   addiu     $v1, $v1, %lo(D_8002B070)
    /* C81C 1000C81C 24010002 */  addiu      $at, $zero, 0x2
    /* C820 1000C820 10C10011 */  beq        $a2, $at, .L1000C868
    /* C824 1000C824 00000000 */   nop
    /* C828 1000C828 0C002C6C */  jal        func_1000B1B0
    /* C82C 1000C82C 24040009 */   addiu     $a0, $zero, 0x9
    /* C830 1000C830 1440000B */  bnez       $v0, .L1000C860
    /* C834 1000C834 2404003E */   addiu     $a0, $zero, 0x3E
    /* C838 1000C838 00002825 */  or         $a1, $zero, $zero
    /* C83C 1000C83C 0C0039C1 */  jal        func_1000E704
    /* C840 1000C840 3406FFFF */   ori       $a2, $zero, 0xFFFF
    /* C844 1000C844 2404003E */  addiu      $a0, $zero, 0x3E
    /* C848 1000C848 0C003903 */  jal        func_1000E40C
    /* C84C 1000C84C 24057FFF */   addiu     $a1, $zero, 0x7FFF
    /* C850 1000C850 2404003D */  addiu      $a0, $zero, 0x3D
    /* C854 1000C854 2405003E */  addiu      $a1, $zero, 0x3E
    /* C858 1000C858 0C00365B */  jal        func_1000D96C
    /* C85C 1000C85C 24060004 */   addiu     $a2, $zero, 0x4
  .L1000C860:
    /* C860 1000C860 10000030 */  b          .L1000C924
    /* C864 1000C864 24020002 */   addiu     $v0, $zero, 0x2
  .L1000C868:
    /* C868 1000C868 1000002E */  b          .L1000C924
    /* C86C 1000C86C 00001025 */   or        $v0, $zero, $zero
  .L1000C870:
    /* C870 1000C870 8C620000 */  lw         $v0, 0x0($v1)
    /* C874 1000C874 3C018003 */  lui        $at, %hi(D_8002C238)
    /* C878 1000C878 14400003 */  bnez       $v0, .L1000C888
    /* C87C 1000C87C 00000000 */   nop
    /* C880 1000C880 24020001 */  addiu      $v0, $zero, 0x1
    /* C884 1000C884 AC620000 */  sw         $v0, 0x0($v1)
  .L1000C888:
    /* C888 1000C888 10C20002 */  beq        $a2, $v0, .L1000C894
    /* C88C 1000C88C 00000000 */   nop
    /* C890 1000C890 00403025 */  or         $a2, $v0, $zero
  .L1000C894:
    /* C894 1000C894 C432C238 */  lwc1       $f18, %lo(D_8002C238)($at)
    /* C898 1000C898 3C01C57A */  lui        $at, (0xC57A0000 >> 16)
    /* C89C 1000C89C 44812000 */  mtc1       $at, $f4
    /* C8A0 1000C8A0 C7B00028 */  lwc1       $f16, 0x28($sp)
    /* C8A4 1000C8A4 3C014120 */  lui        $at, (0x41200000 >> 16)
    /* C8A8 1000C8A8 46047381 */  sub.s      $f14, $f14, $f4
    /* C8AC 1000C8AC 44815000 */  mtc1       $at, $f10
    /* C8B0 1000C8B0 3C0142C8 */  lui        $at, (0x42C80000 >> 16)
    /* C8B4 1000C8B4 460E7182 */  mul.s      $f6, $f14, $f14
    /* C8B8 1000C8B8 00000000 */  nop
    /* C8BC 1000C8BC 46108202 */  mul.s      $f8, $f16, $f16
    /* C8C0 1000C8C0 46083000 */  add.s      $f0, $f6, $f8
    /* C8C4 1000C8C4 44813000 */  mtc1       $at, $f6
    /* C8C8 1000C8C8 3C0142C8 */  lui        $at, (0x42C80000 >> 16)
    /* C8CC 1000C8CC 46000004 */  sqrt.s     $f0, $f0
    /* C8D0 1000C8D0 460A0102 */  mul.s      $f4, $f0, $f10
    /* C8D4 1000C8D4 46049301 */  sub.s      $f12, $f18, $f4
    /* C8D8 1000C8D8 4606603C */  c.lt.s     $f12, $f6
    /* C8DC 1000C8DC 46006086 */  mov.s      $f2, $f12
    /* C8E0 1000C8E0 45000004 */  bc1f       .L1000C8F4
    /* C8E4 1000C8E4 00000000 */   nop
    /* C8E8 1000C8E8 44811000 */  mtc1       $at, $f2
    /* C8EC 1000C8EC 10000007 */  b          .L1000C90C
    /* C8F0 1000C8F0 4600120D */   trunc.w.s $f8, $f2
  .L1000C8F4:
    /* C8F4 1000C8F4 460C903C */  c.lt.s     $f18, $f12
    /* C8F8 1000C8F8 00000000 */  nop
    /* C8FC 1000C8FC 45020003 */  bc1fl      .L1000C90C
    /* C900 1000C900 4600120D */   trunc.w.s $f8, $f2
    /* C904 1000C904 46009086 */  mov.s      $f2, $f18
    /* C908 1000C908 4600120D */  trunc.w.s  $f8, $f2
  .L1000C90C:
    /* C90C 1000C90C 2404003E */  addiu      $a0, $zero, 0x3E
    /* C910 1000C910 AFA60018 */  sw         $a2, 0x18($sp)
    /* C914 1000C914 44054000 */  mfc1       $a1, $f8
    /* C918 1000C918 0C003903 */  jal        func_1000E40C
    /* C91C 1000C91C 00000000 */   nop
    /* C920 1000C920 8FA20018 */  lw         $v0, 0x18($sp)
  .L1000C924:
    /* C924 1000C924 8FBF0014 */  lw         $ra, 0x14($sp)
    /* C928 1000C928 27BD0018 */  addiu      $sp, $sp, 0x18
    /* C92C 1000C92C 03E00008 */  jr         $ra
    /* C930 1000C930 00000000 */   nop
endlabel func_1000C7E8
