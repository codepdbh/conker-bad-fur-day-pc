nonmatching func_1504A730, 0x6A0

glabel func_1504A730
    /* 77BE0 1504A730 27BDFF90 */  addiu      $sp, $sp, -0x70
    /* 77BE4 1504A734 3C02800D */  lui        $v0, %hi(D_800D1548)
    /* 77BE8 1504A738 3C03800D */  lui        $v1, %hi(D_800CC250)
    /* 77BEC 1504A73C 2463C250 */  addiu      $v1, $v1, %lo(D_800CC250)
    /* 77BF0 1504A740 24421548 */  addiu      $v0, $v0, %lo(D_800D1548)
    /* 77BF4 1504A744 AFBF003C */  sw         $ra, 0x3C($sp)
    /* 77BF8 1504A748 AFB60038 */  sw         $s6, 0x38($sp)
    /* 77BFC 1504A74C AFB50034 */  sw         $s5, 0x34($sp)
    /* 77C00 1504A750 AFB40030 */  sw         $s4, 0x30($sp)
    /* 77C04 1504A754 AFB3002C */  sw         $s3, 0x2C($sp)
    /* 77C08 1504A758 AFB20028 */  sw         $s2, 0x28($sp)
    /* 77C0C 1504A75C AFB10024 */  sw         $s1, 0x24($sp)
    /* 77C10 1504A760 AFB00020 */  sw         $s0, 0x20($sp)
    /* 77C14 1504A764 F7B40018 */  sdc1       $f20, 0x18($sp)
    /* 77C18 1504A768 3C01800C */  lui        $at, %hi(D_800BE9EC)
    /* 77C1C 1504A76C A020E9EC */  sb         $zero, %lo(D_800BE9EC)($at)
    /* 77C20 1504A770 8C4E0000 */  lw         $t6, 0x0($v0)
    /* 77C24 1504A774 3C19800C */  lui        $t9, %hi(D_800BE9A0)
    /* 77C28 1504A778 8C780000 */  lw         $t8, 0x0($v1)
    /* 77C2C 1504A77C 25CF0001 */  addiu      $t7, $t6, 0x1
    /* 77C30 1504A780 AC4F0000 */  sw         $t7, 0x0($v0)
    /* 77C34 1504A784 9339E9A0 */  lbu        $t9, %lo(D_800BE9A0)($t9)
    /* 77C38 1504A788 3C01800C */  lui        $at, %hi(D_800C3E78)
    /* 77C3C 1504A78C 3C04800C */  lui        $a0, %hi(D_800BE9F0)
    /* 77C40 1504A790 03197021 */  addu       $t6, $t8, $t9
    /* 77C44 1504A794 AC6E0000 */  sw         $t6, 0x0($v1)
    /* 77C48 1504A798 A0203E78 */  sb         $zero, %lo(D_800C3E78)($at)
    /* 77C4C 1504A79C 3C01800D */  lui        $at, %hi(D_800CC2BC)
    /* 77C50 1504A7A0 AC20C2BC */  sw         $zero, %lo(D_800CC2BC)($at)
    /* 77C54 1504A7A4 8C84E9F0 */  lw         $a0, %lo(D_800BE9F0)($a0)
    /* 77C58 1504A7A8 00002825 */  or         $a1, $zero, $zero
    /* 77C5C 1504A7AC 0D420A57 */  jal        func_1508295C
    /* 77C60 1504A7B0 00003025 */   or        $a2, $zero, $zero
    /* 77C64 1504A7B4 3C02800D */  lui        $v0, %hi(D_800CC2B8)
    /* 77C68 1504A7B8 2442C2B8 */  addiu      $v0, $v0, %lo(D_800CC2B8)
    /* 77C6C 1504A7BC 904F0000 */  lbu        $t7, 0x0($v0)
    /* 77C70 1504A7C0 3C10800D */  lui        $s0, %hi(D_800CC2D0)
    /* 77C74 1504A7C4 3C16800C */  lui        $s6, %hi(D_800BE9A4)
    /* 77C78 1504A7C8 3C15800C */  lui        $s5, %hi(D_800BE9E4)
    /* 77C7C 1504A7CC 3C14800C */  lui        $s4, %hi(D_800BE616)
    /* 77C80 1504A7D0 39F80001 */  xori       $t8, $t7, 0x1
    /* 77C84 1504A7D4 A0580000 */  sb         $t8, 0x0($v0)
    /* 77C88 1504A7D8 2694E616 */  addiu      $s4, $s4, %lo(D_800BE616)
    /* 77C8C 1504A7DC 26B5E9E4 */  addiu      $s5, $s5, %lo(D_800BE9E4)
    /* 77C90 1504A7E0 26D6E9A4 */  addiu      $s6, $s6, %lo(D_800BE9A4)
    /* 77C94 1504A7E4 2610C2D0 */  addiu      $s0, $s0, %lo(D_800CC2D0)
    /* 77C98 1504A7E8 00008825 */  or         $s1, $zero, $zero
  .L1504A7EC:
    /* 77C9C 1504A7EC 8E190000 */  lw         $t9, 0x0($s0)
    /* 77CA0 1504A7F0 3C01FFEE */  lui        $at, (0xFFEE5FFF >> 16)
    /* 77CA4 1504A7F4 34215FFF */  ori        $at, $at, (0xFFEE5FFF & 0xFFFF)
    /* 77CA8 1504A7F8 57200004 */  bnel       $t9, $zero, .L1504A80C
    /* 77CAC 1504A7FC 8E0E00F4 */   lw        $t6, 0xF4($s0)
    /* 77CB0 1504A800 1000011D */  b          .L1504AC78
    /* 77CB4 1504A804 26320001 */   addiu     $s2, $s1, 0x1
    /* 77CB8 1504A808 8E0E00F4 */  lw         $t6, 0xF4($s0)
  .L1504A80C:
    /* 77CBC 1504A80C A2000274 */  sb         $zero, 0x274($s0)
    /* 77CC0 1504A810 A2000300 */  sb         $zero, 0x300($s0)
    /* 77CC4 1504A814 01C17824 */  and        $t7, $t6, $at
    /* 77CC8 1504A818 AE0F00F4 */  sw         $t7, 0xF4($s0)
    /* 77CCC 1504A81C 3C01800C */  lui        $at, %hi(D_800C3E78)
    /* 77CD0 1504A820 A0313E78 */  sb         $s1, %lo(D_800C3E78)($at)
    /* 77CD4 1504A824 86180038 */  lh         $t8, 0x38($s0)
    /* 77CD8 1504A828 C6080018 */  lwc1       $f8, 0x18($s0)
    /* 77CDC 1504A82C 44982000 */  mtc1       $t8, $f4
    /* 77CE0 1504A830 00000000 */  nop
    /* 77CE4 1504A834 468021A0 */  cvt.s.w    $f6, $f4
    /* 77CE8 1504A838 4606403E */  c.le.s     $f8, $f6
    /* 77CEC 1504A83C 00000000 */  nop
    /* 77CF0 1504A840 45020012 */  bc1fl      .L1504A88C
    /* 77CF4 1504A844 920F02FA */   lbu       $t7, 0x2FA($s0)
    /* 77CF8 1504A848 92190127 */  lbu        $t9, 0x127($s0)
    /* 77CFC 1504A84C 240100FF */  addiu      $at, $zero, 0xFF
    /* 77D00 1504A850 02002025 */  or         $a0, $s0, $zero
    /* 77D04 1504A854 57210006 */  bnel       $t9, $at, .L1504A870
    /* 77D08 1504A858 928E0000 */   lbu       $t6, 0x0($s4)
    /* 77D0C 1504A85C 0D4183CA */  jal        func_15060F28
    /* 77D10 1504A860 00002825 */   or        $a1, $zero, $zero
    /* 77D14 1504A864 10000104 */  b          .L1504AC78
    /* 77D18 1504A868 26320001 */   addiu     $s2, $s1, 0x1
    /* 77D1C 1504A86C 928E0000 */  lbu        $t6, 0x0($s4)
  .L1504A870:
    /* 77D20 1504A870 55C00006 */  bnel       $t6, $zero, .L1504A88C
    /* 77D24 1504A874 920F02FA */   lbu       $t7, 0x2FA($s0)
    /* 77D28 1504A878 0D41F53E */  jal        func_1507D4F8
    /* 77D2C 1504A87C 02202025 */   or        $a0, $s1, $zero
    /* 77D30 1504A880 100000FD */  b          .L1504AC78
    /* 77D34 1504A884 26320001 */   addiu     $s2, $s1, 0x1
    /* 77D38 1504A888 920F02FA */  lbu        $t7, 0x2FA($s0)
  .L1504A88C:
    /* 77D3C 1504A88C 3C01800D */  lui        $at, %hi(D_800D154C)
    /* 77D40 1504A890 15E00003 */  bnez       $t7, .L1504A8A0
    /* 77D44 1504A894 00000000 */   nop
    /* 77D48 1504A898 100000F7 */  b          .L1504AC78
    /* 77D4C 1504A89C 26320001 */   addiu     $s2, $s1, 0x1
  .L1504A8A0:
    /* 77D50 1504A8A0 AC30154C */  sw         $s0, %lo(D_800D154C)($at)
    /* 77D54 1504A8A4 96180012 */  lhu        $t8, 0x12($s0)
    /* 77D58 1504A8A8 3C01800D */  lui        $at, %hi(D_800D35DC)
    /* 77D5C 1504A8AC 26320001 */  addiu      $s2, $s1, 0x1
    /* 77D60 1504A8B0 27190001 */  addiu      $t9, $t8, 0x1
    /* 77D64 1504A8B4 A6190012 */  sh         $t9, 0x12($s0)
    /* 77D68 1504A8B8 A03235DC */  sb         $s2, %lo(D_800D35DC)($at)
    /* 77D6C 1504A8BC 3C01800D */  lui        $at, %hi(D_800CC2BA)
    /* 77D70 1504A8C0 A420C2BA */  sh         $zero, %lo(D_800CC2BA)($at)
    /* 77D74 1504A8C4 928E0000 */  lbu        $t6, 0x0($s4)
    /* 77D78 1504A8C8 00009825 */  or         $s3, $zero, $zero
    /* 77D7C 1504A8CC 11C00005 */  beqz       $t6, .L1504A8E4
    /* 77D80 1504A8D0 00000000 */   nop
    /* 77D84 1504A8D4 0D41322F */  jal        func_1504C8BC
    /* 77D88 1504A8D8 02002025 */   or        $a0, $s0, $zero
    /* 77D8C 1504A8DC 104000E6 */  beqz       $v0, .L1504AC78
    /* 77D90 1504A8E0 00409825 */   or        $s3, $v0, $zero
  .L1504A8E4:
    /* 77D94 1504A8E4 3C0F8009 */  lui        $t7, %hi(D_8008FD8C)
    /* 77D98 1504A8E8 81EFFD8C */  lb         $t7, %lo(D_8008FD8C)($t7)
    /* 77D9C 1504A8EC 3C014000 */  lui        $at, (0x40000000 >> 16)
    /* 77DA0 1504A8F0 4481A000 */  mtc1       $at, $f20
    /* 77DA4 1504A8F4 022F082A */  slt        $at, $s1, $t7
    /* 77DA8 1504A8F8 5020001E */  beql       $at, $zero, .L1504A974
    /* 77DAC 1504A8FC 8E020318 */   lw        $v0, 0x318($s0)
    /* 77DB0 1504A900 8E02031C */  lw         $v0, 0x31C($s0)
    /* 77DB4 1504A904 8EB90000 */  lw         $t9, 0x0($s5)
    /* 77DB8 1504A908 2A210004 */  slti       $at, $s1, 0x4
    /* 77DBC 1504A90C 80580195 */  lb         $t8, 0x195($v0)
    /* 77DC0 1504A910 27A4005C */  addiu      $a0, $sp, 0x5C
    /* 77DC4 1504A914 03197023 */  subu       $t6, $t8, $t9
    /* 77DC8 1504A918 A04E0195 */  sb         $t6, 0x195($v0)
    /* 77DCC 1504A91C 8E02031C */  lw         $v0, 0x31C($s0)
    /* 77DD0 1504A920 3C18800C */  lui        $t8, %hi(D_800BE728)
    /* 77DD4 1504A924 804F0195 */  lb         $t7, 0x195($v0)
    /* 77DD8 1504A928 05E10003 */  bgez       $t7, .L1504A938
    /* 77DDC 1504A92C 00000000 */   nop
    /* 77DE0 1504A930 A0400195 */  sb         $zero, 0x195($v0)
    /* 77DE4 1504A934 8E02031C */  lw         $v0, 0x31C($s0)
  .L1504A938:
    /* 77DE8 1504A938 10200008 */  beqz       $at, .L1504A95C
    /* 77DEC 1504A93C A0400057 */   sb        $zero, 0x57($v0)
    /* 77DF0 1504A940 8F18E728 */  lw         $t8, %lo(D_800BE728)($t8)
    /* 77DF4 1504A944 0011C880 */  sll        $t9, $s1, 2
    /* 77DF8 1504A948 3C01800D */  lui        $at, %hi(D_800CC284)
    /* 77DFC 1504A94C 03197021 */  addu       $t6, $t8, $t9
    /* 77E00 1504A950 8DCF0000 */  lw         $t7, 0x0($t6)
    /* 77E04 1504A954 10000006 */  b          .L1504A970
    /* 77E08 1504A958 AC2FC284 */   sw        $t7, %lo(D_800CC284)($at)
  .L1504A95C:
    /* 77E0C 1504A95C 0C0089BC */  jal        bzero
    /* 77E10 1504A960 24050006 */   addiu     $a1, $zero, 0x6
    /* 77E14 1504A964 27B8005C */  addiu      $t8, $sp, 0x5C
    /* 77E18 1504A968 3C01800D */  lui        $at, %hi(D_800CC284)
    /* 77E1C 1504A96C AC38C284 */  sw         $t8, %lo(D_800CC284)($at)
  .L1504A970:
    /* 77E20 1504A970 8E020318 */  lw         $v0, 0x318($s0)
  .L1504A974:
    /* 77E24 1504A974 3C01800D */  lui        $at, %hi(D_800CC280)
    /* 77E28 1504A978 10400019 */  beqz       $v0, .L1504A9E0
    /* 77E2C 1504A97C 00000000 */   nop
    /* 77E30 1504A980 3C01800A */  lui        $at, %hi(D_800991A8)
    /* 77E34 1504A984 C42A91A8 */  lwc1       $f10, %lo(D_800991A8)($at)
    /* 77E38 1504A988 C4400384 */  lwc1       $f0, 0x384($v0)
    /* 77E3C 1504A98C 3C01800A */  lui        $at, %hi(D_800991B0)
    /* 77E40 1504A990 46005032 */  c.eq.s     $f10, $f0
    /* 77E44 1504A994 00000000 */  nop
    /* 77E48 1504A998 4500000A */  bc1f       .L1504A9C4
    /* 77E4C 1504A99C 00000000 */   nop
    /* 77E50 1504A9A0 3C01800A */  lui        $at, %hi(D_800991AC)
    /* 77E54 1504A9A4 C43291AC */  lwc1       $f18, %lo(D_800991AC)($at)
    /* 77E58 1504A9A8 C450037C */  lwc1       $f16, 0x37C($v0)
    /* 77E5C 1504A9AC 3C01800D */  lui        $at, %hi(D_800CC280)
    /* 77E60 1504A9B0 46128102 */  mul.s      $f4, $f16, $f18
    /* 77E64 1504A9B4 4600218D */  trunc.w.s  $f6, $f4
    /* 77E68 1504A9B8 440E3000 */  mfc1       $t6, $f6
    /* 77E6C 1504A9BC 10000009 */  b          .L1504A9E4
    /* 77E70 1504A9C0 AC2EC280 */   sw        $t6, %lo(D_800CC280)($at)
  .L1504A9C4:
    /* 77E74 1504A9C4 C42891B0 */  lwc1       $f8, %lo(D_800991B0)($at)
    /* 77E78 1504A9C8 3C01800D */  lui        $at, %hi(D_800CC280)
    /* 77E7C 1504A9CC 46080282 */  mul.s      $f10, $f0, $f8
    /* 77E80 1504A9D0 4600540D */  trunc.w.s  $f16, $f10
    /* 77E84 1504A9D4 44188000 */  mfc1       $t8, $f16
    /* 77E88 1504A9D8 10000002 */  b          .L1504A9E4
    /* 77E8C 1504A9DC AC38C280 */   sw        $t8, %lo(D_800CC280)($at)
  .L1504A9E0:
    /* 77E90 1504A9E0 AC20C280 */  sw         $zero, %lo(D_800CC280)($at)
  .L1504A9E4:
    /* 77E94 1504A9E4 92190127 */  lbu        $t9, 0x127($s0)
    /* 77E98 1504A9E8 240100FF */  addiu      $at, $zero, 0xFF
    /* 77E9C 1504A9EC 53210006 */  beql       $t9, $at, .L1504AA08
    /* 77EA0 1504A9F0 8E0E00F8 */   lw        $t6, 0xF8($s0)
    /* 77EA4 1504A9F4 0D428471 */  jal        func_150A11C4
    /* 77EA8 1504A9F8 02002025 */   or        $a0, $s0, $zero
    /* 77EAC 1504A9FC 10000008 */  b          .L1504AA20
    /* 77EB0 1504AA00 8E180184 */   lw        $t8, 0x184($s0)
    /* 77EB4 1504AA04 8E0E00F8 */  lw         $t6, 0xF8($s0)
  .L1504AA08:
    /* 77EB8 1504AA08 000E7A40 */  sll        $t7, $t6, 9
    /* 77EBC 1504AA0C 05E30004 */  bgezl      $t7, .L1504AA20
    /* 77EC0 1504AA10 8E180184 */   lw        $t8, 0x184($s0)
    /* 77EC4 1504AA14 0D4289E3 */  jal        func_150A278C
    /* 77EC8 1504AA18 02002025 */   or        $a0, $s0, $zero
    /* 77ECC 1504AA1C 8E180184 */  lw         $t8, 0x184($s0)
  .L1504AA20:
    /* 77ED0 1504AA20 C6120014 */  lwc1       $f18, 0x14($s0)
    /* 77ED4 1504AA24 C6040018 */  lwc1       $f4, 0x18($s0)
    /* 77ED8 1504AA28 C606001C */  lwc1       $f6, 0x1C($s0)
    /* 77EDC 1504AA2C 0018CF02 */  srl        $t9, $t8, 28
    /* 77EE0 1504AA30 332E0007 */  andi       $t6, $t9, 0x7
    /* 77EE4 1504AA34 3C01800D */  lui        $at, %hi(D_800CC27C)
    /* 77EE8 1504AA38 E612002C */  swc1       $f18, 0x2C($s0)
    /* 77EEC 1504AA3C E6040030 */  swc1       $f4, 0x30($s0)
    /* 77EF0 1504AA40 E6060034 */  swc1       $f6, 0x34($s0)
    /* 77EF4 1504AA44 A02EC27C */  sb         $t6, %lo(D_800CC27C)($at)
    /* 77EF8 1504AA48 928F0000 */  lbu        $t7, 0x0($s4)
    /* 77EFC 1504AA4C C6C00000 */  lwc1       $f0, 0x0($s6)
    /* 77F00 1504AA50 3C188009 */  lui        $t8, %hi(D_8008FDBC)
    /* 77F04 1504AA54 51E00009 */  beql       $t7, $zero, .L1504AA7C
    /* 77F08 1504AA58 4600A03C */   c.lt.s    $f20, $f0
    /* 77F0C 1504AA5C 9718FDBC */  lhu        $t8, %lo(D_8008FDBC)($t8)
    /* 77F10 1504AA60 3C0140A0 */  lui        $at, (0x40A00000 >> 16)
    /* 77F14 1504AA64 33190100 */  andi       $t9, $t8, 0x100
    /* 77F18 1504AA68 53200004 */  beql       $t9, $zero, .L1504AA7C
    /* 77F1C 1504AA6C 4600A03C */   c.lt.s    $f20, $f0
    /* 77F20 1504AA70 4481A000 */  mtc1       $at, $f20
    /* 77F24 1504AA74 00000000 */  nop
    /* 77F28 1504AA78 4600A03C */  c.lt.s     $f20, $f0
  .L1504AA7C:
    /* 77F2C 1504AA7C 3C18800D */  lui        $t8, %hi(D_800CC27C)
    /* 77F30 1504AA80 3C19800B */  lui        $t9, %hi(D_800B0DF0)
    /* 77F34 1504AA84 45020003 */  bc1fl      .L1504AA94
    /* 77F38 1504AA88 C6080048 */   lwc1      $f8, 0x48($s0)
    /* 77F3C 1504AA8C 4600A006 */  mov.s      $f0, $f20
    /* 77F40 1504AA90 C6080048 */  lwc1       $f8, 0x48($s0)
  .L1504AA94:
    /* 77F44 1504AA94 3C01800D */  lui        $at, %hi(D_800D1550)
    /* 77F48 1504AA98 46004282 */  mul.s      $f10, $f8, $f0
    /* 77F4C 1504AA9C E42A1550 */  swc1       $f10, %lo(D_800D1550)($at)
    /* 77F50 1504AAA0 C4301550 */  lwc1       $f16, %lo(D_800D1550)($at)
    /* 77F54 1504AAA4 3C0142C8 */  lui        $at, (0x42C80000 >> 16)
    /* 77F58 1504AAA8 44819000 */  mtc1       $at, $f18
    /* 77F5C 1504AAAC 3C01800D */  lui        $at, %hi(D_800CC264)
    /* 77F60 1504AAB0 46128102 */  mul.s      $f4, $f16, $f18
    /* 77F64 1504AAB4 4600218D */  trunc.w.s  $f6, $f4
    /* 77F68 1504AAB8 440F3000 */  mfc1       $t7, $f6
    /* 77F6C 1504AABC 00000000 */  nop
    /* 77F70 1504AAC0 A42FC264 */  sh         $t7, %lo(D_800CC264)($at)
    /* 77F74 1504AAC4 9318C27C */  lbu        $t8, %lo(D_800CC27C)($t8)
    /* 77F78 1504AAC8 2B010006 */  slti       $at, $t8, 0x6
    /* 77F7C 1504AACC 14200002 */  bnez       $at, .L1504AAD8
    /* 77F80 1504AAD0 3C01800D */   lui       $at, %hi(D_800CC27C)
    /* 77F84 1504AAD4 A020C27C */  sb         $zero, %lo(D_800CC27C)($at)
  .L1504AAD8:
    /* 77F88 1504AAD8 8F390DF0 */  lw         $t9, %lo(D_800B0DF0)($t9)
    /* 77F8C 1504AADC 93220049 */  lbu        $v0, 0x49($t9)
    /* 77F90 1504AAE0 3C198008 */  lui        $t9, %hi(D_80086004)
    /* 77F94 1504AAE4 10400006 */  beqz       $v0, .L1504AB00
    /* 77F98 1504AAE8 00027080 */   sll       $t6, $v0, 2
    /* 77F9C 1504AAEC 032EC821 */  addu       $t9, $t9, $t6
    /* 77FA0 1504AAF0 8F396004 */  lw         $t9, %lo(D_80086004)($t9)
    /* 77FA4 1504AAF4 02002025 */  or         $a0, $s0, $zero
    /* 77FA8 1504AAF8 0320F809 */  jalr       $t9
    /* 77FAC 1504AAFC 00000000 */   nop
  .L1504AB00:
    /* 77FB0 1504AB00 8E0F025C */  lw         $t7, 0x25C($s0)
    /* 77FB4 1504AB04 31F80200 */  andi       $t8, $t7, 0x200
    /* 77FB8 1504AB08 5700000B */  bnel       $t8, $zero, .L1504AB38
    /* 77FBC 1504AB0C 8E0F0000 */   lw        $t7, 0x0($s0)
    /* 77FC0 1504AB10 8E0E0000 */  lw         $t6, 0x0($s0)
    /* 77FC4 1504AB14 3C028008 */  lui        $v0, %hi(D_80086014)
    /* 77FC8 1504AB18 000EC880 */  sll        $t9, $t6, 2
    /* 77FCC 1504AB1C 00591021 */  addu       $v0, $v0, $t9
    /* 77FD0 1504AB20 8C426014 */  lw         $v0, %lo(D_80086014)($v0)
    /* 77FD4 1504AB24 50400004 */  beql       $v0, $zero, .L1504AB38
    /* 77FD8 1504AB28 8E0F0000 */   lw        $t7, 0x0($s0)
    /* 77FDC 1504AB2C 0040F809 */  jalr       $v0
    /* 77FE0 1504AB30 02002025 */   or        $a0, $s0, $zero
    /* 77FE4 1504AB34 8E0F0000 */  lw         $t7, 0x0($s0)
  .L1504AB38:
    /* 77FE8 1504AB38 51E00015 */  beql       $t7, $zero, .L1504AB90
    /* 77FEC 1504AB3C 24190001 */   addiu     $t9, $zero, 0x1
    /* 77FF0 1504AB40 0D41F9CF */  jal        func_1507E73C
    /* 77FF4 1504AB44 02002025 */   or        $a0, $s0, $zero
    /* 77FF8 1504AB48 02002025 */  or         $a0, $s0, $zero
    /* 77FFC 1504AB4C 00002825 */  or         $a1, $zero, $zero
    /* 78000 1504AB50 0D412BC4 */  jal        func_1504AF10
    /* 78004 1504AB54 00003025 */   or        $a2, $zero, $zero
    /* 78008 1504AB58 3C188009 */  lui        $t8, %hi(D_8008FD8C)
    /* 7800C 1504AB5C 8318FD8C */  lb         $t8, %lo(D_8008FD8C)($t8)
    /* 78010 1504AB60 3C0E800D */  lui        $t6, %hi(D_800D18A8)
    /* 78014 1504AB64 0238082A */  slt        $at, $s1, $t8
    /* 78018 1504AB68 50200009 */  beql       $at, $zero, .L1504AB90
    /* 7801C 1504AB6C 24190001 */   addiu     $t9, $zero, 0x1
    /* 78020 1504AB70 91CE18A8 */  lbu        $t6, %lo(D_800D18A8)($t6)
    /* 78024 1504AB74 24050005 */  addiu      $a1, $zero, 0x5
    /* 78028 1504AB78 55C00005 */  bnel       $t6, $zero, .L1504AB90
    /* 7802C 1504AB7C 24190001 */   addiu     $t9, $zero, 0x1
    /* 78030 1504AB80 92040127 */  lbu        $a0, 0x127($s0)
    /* 78034 1504AB84 0D4215C4 */  jal        func_15085710
    /* 78038 1504AB88 920601CA */   lbu       $a2, 0x1CA($s0)
    /* 7803C 1504AB8C 24190001 */  addiu      $t9, $zero, 0x1
  .L1504AB90:
    /* 78040 1504AB90 24010002 */  addiu      $at, $zero, 0x2
    /* 78044 1504AB94 16610019 */  bne        $s3, $at, .L1504ABFC
    /* 78048 1504AB98 A21902FF */   sb        $t9, 0x2FF($s0)
    /* 7804C 1504AB9C 3C0F800D */  lui        $t7, %hi(D_800CC2BA)
    /* 78050 1504ABA0 95F8C2BA */  lhu        $t8, %lo(D_800CC2BA)($t7)
    /* 78054 1504ABA4 3C013F00 */  lui        $at, (0x3F000000 >> 16)
    /* 78058 1504ABA8 44818000 */  mtc1       $at, $f16
    /* 7805C 1504ABAC 44984000 */  mtc1       $t8, $f8
    /* 78060 1504ABB0 44802000 */  mtc1       $zero, $f4
    /* 78064 1504ABB4 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 78068 1504ABB8 468042A0 */  cvt.s.w    $f10, $f8
    /* 7806C 1504ABBC AEB80000 */  sw         $t8, 0x0($s5)
    /* 78070 1504ABC0 46105482 */  mul.s      $f18, $f10, $f16
    /* 78074 1504ABC4 E6D20000 */  swc1       $f18, 0x0($s6)
    /* 78078 1504ABC8 C6C00000 */  lwc1       $f0, 0x0($s6)
    /* 7807C 1504ABCC 46002032 */  c.eq.s     $f4, $f0
    /* 78080 1504ABD0 00000000 */  nop
    /* 78084 1504ABD4 45030007 */  bc1tl      .L1504ABF4
    /* 78088 1504ABD8 44805000 */   mtc1      $zero, $f10
    /* 7808C 1504ABDC 44813000 */  mtc1       $at, $f6
    /* 78090 1504ABE0 3C01800C */  lui        $at, %hi(D_800BE9A8)
    /* 78094 1504ABE4 46003203 */  div.s      $f8, $f6, $f0
    /* 78098 1504ABE8 10000004 */  b          .L1504ABFC
    /* 7809C 1504ABEC E428E9A8 */   swc1      $f8, %lo(D_800BE9A8)($at)
    /* 780A0 1504ABF0 44805000 */  mtc1       $zero, $f10
  .L1504ABF4:
    /* 780A4 1504ABF4 3C01800C */  lui        $at, %hi(D_800BE9A8)
    /* 780A8 1504ABF8 E42AE9A8 */  swc1       $f10, %lo(D_800BE9A8)($at)
  .L1504ABFC:
    /* 780AC 1504ABFC C6100014 */  lwc1       $f16, 0x14($s0)
    /* 780B0 1504AC00 C612002C */  lwc1       $f18, 0x2C($s0)
    /* 780B4 1504AC04 240E0001 */  addiu      $t6, $zero, 0x1
    /* 780B8 1504AC08 3C19800B */  lui        $t9, %hi(D_800B0DF0)
    /* 780BC 1504AC0C 46128032 */  c.eq.s     $f16, $f18
    /* 780C0 1504AC10 00000000 */  nop
    /* 780C4 1504AC14 4502000E */  bc1fl      .L1504AC50
    /* 780C8 1504AC18 A20E0300 */   sb        $t6, 0x300($s0)
    /* 780CC 1504AC1C C6040018 */  lwc1       $f4, 0x18($s0)
    /* 780D0 1504AC20 C6060030 */  lwc1       $f6, 0x30($s0)
    /* 780D4 1504AC24 46062032 */  c.eq.s     $f4, $f6
    /* 780D8 1504AC28 00000000 */  nop
    /* 780DC 1504AC2C 45020008 */  bc1fl      .L1504AC50
    /* 780E0 1504AC30 A20E0300 */   sb        $t6, 0x300($s0)
    /* 780E4 1504AC34 C608001C */  lwc1       $f8, 0x1C($s0)
    /* 780E8 1504AC38 C60A0034 */  lwc1       $f10, 0x34($s0)
    /* 780EC 1504AC3C 460A4032 */  c.eq.s     $f8, $f10
    /* 780F0 1504AC40 00000000 */  nop
    /* 780F4 1504AC44 45010002 */  bc1t       .L1504AC50
    /* 780F8 1504AC48 00000000 */   nop
    /* 780FC 1504AC4C A20E0300 */  sb         $t6, 0x300($s0)
  .L1504AC50:
    /* 78100 1504AC50 8F390DF0 */  lw         $t9, %lo(D_800B0DF0)($t9)
    /* 78104 1504AC54 9322004A */  lbu        $v0, 0x4A($t9)
    /* 78108 1504AC58 3C198008 */  lui        $t9, %hi(D_8008600C)
    /* 7810C 1504AC5C 10400006 */  beqz       $v0, .L1504AC78
    /* 78110 1504AC60 00027880 */   sll       $t7, $v0, 2
    /* 78114 1504AC64 032FC821 */  addu       $t9, $t9, $t7
    /* 78118 1504AC68 8F39600C */  lw         $t9, %lo(D_8008600C)($t9)
    /* 7811C 1504AC6C 02002025 */  or         $a0, $s0, $zero
    /* 78120 1504AC70 0320F809 */  jalr       $t9
    /* 78124 1504AC74 00000000 */   nop
  .L1504AC78:
    /* 78128 1504AC78 24010019 */  addiu      $at, $zero, 0x19
    /* 7812C 1504AC7C 02408825 */  or         $s1, $s2, $zero
    /* 78130 1504AC80 1641FEDA */  bne        $s2, $at, .L1504A7EC
    /* 78134 1504AC84 2610032C */   addiu     $s0, $s0, 0x32C
    /* 78138 1504AC88 3C038009 */  lui        $v1, %hi(D_8008FD8C)
    /* 7813C 1504AC8C 8063FD8C */  lb         $v1, %lo(D_8008FD8C)($v1)
    /* 78140 1504AC90 3C05800D */  lui        $a1, %hi(D_800CC2D0)
    /* 78144 1504AC94 24A5C2D0 */  addiu      $a1, $a1, %lo(D_800CC2D0)
    /* 78148 1504AC98 18600036 */  blez       $v1, .L1504AD74
    /* 7814C 1504AC9C 00004025 */   or        $t0, $zero, $zero
    /* 78150 1504ACA0 3C0C800E */  lui        $t4, %hi(D_800DBF94)
    /* 78154 1504ACA4 3C0A800E */  lui        $t2, %hi(D_800DBEF4)
    /* 78158 1504ACA8 3C09800D */  lui        $t1, %hi(D_800CBDA0)
    /* 7815C 1504ACAC 2529BDA0 */  addiu      $t1, $t1, %lo(D_800CBDA0)
    /* 78160 1504ACB0 254ABEF4 */  addiu      $t2, $t2, %lo(D_800DBEF4)
    /* 78164 1504ACB4 258CBF94 */  addiu      $t4, $t4, %lo(D_800DBF94)
    /* 78168 1504ACB8 240D0005 */  addiu      $t5, $zero, 0x5
    /* 7816C 1504ACBC 240B00A0 */  addiu      $t3, $zero, 0xA0
  .L1504ACC0:
    /* 78170 1504ACC0 8CB80000 */  lw         $t8, 0x0($a1)
    /* 78174 1504ACC4 53000028 */  beql       $t8, $zero, .L1504AD68
    /* 78178 1504ACC8 25080001 */   addiu     $t0, $t0, 0x1
    /* 7817C 1504ACCC 8CA4031C */  lw         $a0, 0x31C($a1)
    /* 78180 1504ACD0 50800025 */  beql       $a0, $zero, .L1504AD68
    /* 78184 1504ACD4 25080001 */   addiu     $t0, $t0, 0x1
    /* 78188 1504ACD8 90AE0137 */  lbu        $t6, 0x137($a1)
    /* 7818C 1504ACDC 00087840 */  sll        $t7, $t0, 1
    /* 78190 1504ACE0 012F3021 */  addu       $a2, $t1, $t7
    /* 78194 1504ACE4 51C0001A */  beql       $t6, $zero, .L1504AD50
    /* 78198 1504ACE8 90820056 */   lbu       $v0, 0x56($a0)
    /* 7819C 1504ACEC 94C70000 */  lhu        $a3, 0x0($a2)
    /* 781A0 1504ACF0 50E00013 */  beql       $a3, $zero, .L1504AD40
    /* 781A4 1504ACF4 A08D0056 */   sb        $t5, 0x56($a0)
    /* 781A8 1504ACF8 00EB0019 */  multu      $a3, $t3
    /* 781AC 1504ACFC 8D590000 */  lw         $t9, 0x0($t2)
    /* 781B0 1504AD00 0000C012 */  mflo       $t8
    /* 781B4 1504AD04 03381021 */  addu       $v0, $t9, $t8
    /* 781B8 1504AD08 904EFFAF */  lbu        $t6, -0x51($v0)
    /* 781BC 1504AD0C 35CF0084 */  ori        $t7, $t6, 0x84
    /* 781C0 1504AD10 A04FFFAF */  sb         $t7, -0x51($v0)
    /* 781C4 1504AD14 94D80000 */  lhu        $t8, 0x0($a2)
    /* 781C8 1504AD18 8D990000 */  lw         $t9, 0x0($t4)
    /* 781CC 1504AD1C 00187080 */  sll        $t6, $t8, 2
    /* 781D0 1504AD20 032E1821 */  addu       $v1, $t9, $t6
    /* 781D4 1504AD24 8C6FFFFC */  lw         $t7, -0x4($v1)
    /* 781D8 1504AD28 24180001 */  addiu      $t8, $zero, 0x1
    /* 781DC 1504AD2C 0118C804 */  sllv       $t9, $t8, $t0
    /* 781E0 1504AD30 01F97025 */  or         $t6, $t7, $t9
    /* 781E4 1504AD34 AC6EFFFC */  sw         $t6, -0x4($v1)
    /* 781E8 1504AD38 8CA4031C */  lw         $a0, 0x31C($a1)
    /* 781EC 1504AD3C A08D0056 */  sb         $t5, 0x56($a0)
  .L1504AD40:
    /* 781F0 1504AD40 3C038009 */  lui        $v1, %hi(D_8008FD8C)
    /* 781F4 1504AD44 10000007 */  b          .L1504AD64
    /* 781F8 1504AD48 8063FD8C */   lb        $v1, %lo(D_8008FD8C)($v1)
    /* 781FC 1504AD4C 90820056 */  lbu        $v0, 0x56($a0)
  .L1504AD50:
    /* 78200 1504AD50 10400004 */  beqz       $v0, .L1504AD64
    /* 78204 1504AD54 2458FFFF */   addiu     $t8, $v0, -0x1
    /* 78208 1504AD58 A0980056 */  sb         $t8, 0x56($a0)
    /* 7820C 1504AD5C 3C038009 */  lui        $v1, %hi(D_8008FD8C)
    /* 78210 1504AD60 8063FD8C */  lb         $v1, %lo(D_8008FD8C)($v1)
  .L1504AD64:
    /* 78214 1504AD64 25080001 */  addiu      $t0, $t0, 0x1
  .L1504AD68:
    /* 78218 1504AD68 0103082A */  slt        $at, $t0, $v1
    /* 7821C 1504AD6C 1420FFD4 */  bnez       $at, .L1504ACC0
    /* 78220 1504AD70 24A5032C */   addiu     $a1, $a1, 0x32C
  .L1504AD74:
    /* 78224 1504AD74 0D4186D3 */  jal        func_15061B4C
    /* 78228 1504AD78 00000000 */   nop
    /* 7822C 1504AD7C 0D420319 */  jal        func_15080C64
    /* 78230 1504AD80 00000000 */   nop
    /* 78234 1504AD84 3C0F800D */  lui        $t7, %hi(D_800CC2D0)
    /* 78238 1504AD88 25EFC2D0 */  addiu      $t7, $t7, %lo(D_800CC2D0)
    /* 7823C 1504AD8C 3C01800D */  lui        $at, %hi(D_800D154C)
    /* 78240 1504AD90 AC2F154C */  sw         $t7, %lo(D_800D154C)($at)
    /* 78244 1504AD94 3C01800C */  lui        $at, %hi(D_800C3E78)
    /* 78248 1504AD98 A0203E78 */  sb         $zero, %lo(D_800C3E78)($at)
    /* 7824C 1504AD9C 3C01800D */  lui        $at, %hi(D_800D35DC)
    /* 78250 1504ADA0 A02035DC */  sb         $zero, %lo(D_800D35DC)($at)
    /* 78254 1504ADA4 8FBF003C */  lw         $ra, 0x3C($sp)
    /* 78258 1504ADA8 D7B40018 */  ldc1       $f20, 0x18($sp)
    /* 7825C 1504ADAC 8FB00020 */  lw         $s0, 0x20($sp)
    /* 78260 1504ADB0 8FB10024 */  lw         $s1, 0x24($sp)
    /* 78264 1504ADB4 8FB20028 */  lw         $s2, 0x28($sp)
    /* 78268 1504ADB8 8FB3002C */  lw         $s3, 0x2C($sp)
    /* 7826C 1504ADBC 8FB40030 */  lw         $s4, 0x30($sp)
    /* 78270 1504ADC0 8FB50034 */  lw         $s5, 0x34($sp)
    /* 78274 1504ADC4 8FB60038 */  lw         $s6, 0x38($sp)
    /* 78278 1504ADC8 03E00008 */  jr         $ra
    /* 7827C 1504ADCC 27BD0070 */   addiu     $sp, $sp, 0x70
endlabel func_1504A730
