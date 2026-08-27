nonmatching func_150746F0, 0xF4

glabel func_150746F0
    /* A1BA0 150746F0 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* A1BA4 150746F4 AFBF001C */  sw         $ra, 0x1C($sp)
    /* A1BA8 150746F8 3C0E800C */  lui        $t6, %hi(D_800BE616)
    /* A1BAC 150746FC 91CEE616 */  lbu        $t6, %lo(D_800BE616)($t6)
    /* A1BB0 15074700 3C05800D */  lui        $a1, %hi(D_800D154C)
    /* A1BB4 15074704 00002025 */  or         $a0, $zero, $zero
    /* A1BB8 15074708 11C00005 */  beqz       $t6, .L15074720
    /* A1BBC 1507470C 24A5154C */   addiu     $a1, $a1, %lo(D_800D154C)
    /* A1BC0 15074710 3C05800D */  lui        $a1, %hi(D_800D154C)
    /* A1BC4 15074714 24A5154C */  addiu      $a1, $a1, %lo(D_800D154C)
    /* A1BC8 15074718 10000007 */  b          .L15074738
    /* A1BCC 1507471C 8CA40000 */   lw        $a0, 0x0($a1)
  .L15074720:
    /* A1BD0 15074720 8CAF0000 */  lw         $t7, 0x0($a1)
    /* A1BD4 15074724 91F8013C */  lbu        $t8, 0x13C($t7)
    /* A1BD8 15074728 13000003 */  beqz       $t8, .L15074738
    /* A1BDC 1507472C 00000000 */   nop
    /* A1BE0 15074730 3C04800D */  lui        $a0, %hi(D_800CC2D0)
    /* A1BE4 15074734 2484C2D0 */  addiu      $a0, $a0, %lo(D_800CC2D0)
  .L15074738:
    /* A1BE8 15074738 10800026 */  beqz       $a0, .L150747D4
    /* A1BEC 1507473C 3C02800D */   lui       $v0, %hi(D_800D1580)
    /* A1BF0 15074740 8C421580 */  lw         $v0, %lo(D_800D1580)($v0)
    /* A1BF4 15074744 908301CA */  lbu        $v1, 0x1CA($a0)
    /* A1BF8 15074748 0043082A */  slt        $at, $v0, $v1
    /* A1BFC 1507474C 5420000F */  bnel       $at, $zero, .L1507478C
    /* A1C00 15074750 8C85031C */   lw        $a1, 0x31C($a0)
    /* A1C04 15074754 A08001CA */  sb         $zero, 0x1CA($a0)
    /* A1C08 15074758 8CB90000 */  lw         $t9, 0x0($a1)
    /* A1C0C 1507475C 24010001 */  addiu      $at, $zero, 0x1
    /* A1C10 15074760 240900FF */  addiu      $t1, $zero, 0xFF
    /* A1C14 15074764 A32001CA */  sb         $zero, 0x1CA($t9)
    /* A1C18 15074768 8C880000 */  lw         $t0, 0x0($a0)
    /* A1C1C 1507476C 24050006 */  addiu      $a1, $zero, 0x6
    /* A1C20 15074770 55010019 */  bnel       $t0, $at, .L150747D8
    /* A1C24 15074774 8FBF001C */   lw        $ra, 0x1C($sp)
    /* A1C28 15074778 0D41F359 */  jal        func_1507CD64
    /* A1C2C 1507477C A0890125 */   sb        $t1, 0x125($a0)
    /* A1C30 15074780 10000015 */  b          .L150747D8
    /* A1C34 15074784 8FBF001C */   lw        $ra, 0x1C($sp)
    /* A1C38 15074788 8C85031C */  lw         $a1, 0x31C($a0)
  .L1507478C:
    /* A1C3C 1507478C 00625023 */  subu       $t2, $v1, $v0
    /* A1C40 15074790 A08A01CA */  sb         $t2, 0x1CA($a0)
    /* A1C44 15074794 50A00010 */  beql       $a1, $zero, .L150747D8
    /* A1C48 15074798 8FBF001C */   lw        $ra, 0x1C($sp)
    /* A1C4C 1507479C 8C820318 */  lw         $v0, 0x318($a0)
    /* A1C50 150747A0 5040000D */  beql       $v0, $zero, .L150747D8
    /* A1C54 150747A4 8FBF001C */   lw        $ra, 0x1C($sp)
    /* A1C58 150747A8 90AB0197 */  lbu        $t3, 0x197($a1)
    /* A1C5C 150747AC 00002825 */  or         $a1, $zero, $zero
    /* A1C60 150747B0 240400FF */  addiu      $a0, $zero, 0xFF
    /* A1C64 150747B4 11600007 */  beqz       $t3, .L150747D4
    /* A1C68 150747B8 00003025 */   or        $a2, $zero, $zero
    /* A1C6C 150747BC 240C0014 */  addiu      $t4, $zero, 0x14
    /* A1C70 150747C0 AFAC0010 */  sw         $t4, 0x10($sp)
    /* A1C74 150747C4 904D023D */  lbu        $t5, 0x23D($v0)
    /* A1C78 150747C8 240700B4 */  addiu      $a3, $zero, 0xB4
    /* A1C7C 150747CC 0D45FD22 */  jal        func_1517F488
    /* A1C80 150747D0 AFAD0014 */   sw        $t5, 0x14($sp)
  .L150747D4:
    /* A1C84 150747D4 8FBF001C */  lw         $ra, 0x1C($sp)
  .L150747D8:
    /* A1C88 150747D8 27BD0020 */  addiu      $sp, $sp, 0x20
    /* A1C8C 150747DC 03E00008 */  jr         $ra
    /* A1C90 150747E0 00000000 */   nop
endlabel func_150746F0
