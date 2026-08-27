nonmatching func_15000940, 0x17C

glabel func_15000940
    /* 2DDF0 15000940 27BDFFD8 */  addiu      $sp, $sp, -0x28
    /* 2DDF4 15000944 AFB70024 */  sw         $s7, 0x24($sp)
    /* 2DDF8 15000948 AFB60020 */  sw         $s6, 0x20($sp)
    /* 2DDFC 1500094C AFB5001C */  sw         $s5, 0x1C($sp)
    /* 2DE00 15000950 AFB40018 */  sw         $s4, 0x18($sp)
    /* 2DE04 15000954 AFB30014 */  sw         $s3, 0x14($sp)
    /* 2DE08 15000958 AFB20010 */  sw         $s2, 0x10($sp)
    /* 2DE0C 1500095C AFB1000C */  sw         $s1, 0xC($sp)
    /* 2DE10 15000960 AFB00008 */  sw         $s0, 0x8($sp)
    /* 2DE14 15000964 AFA40028 */  sw         $a0, 0x28($sp)
    /* 2DE18 15000968 3C0E800B */  lui        $t6, %hi(D_800B0DF0)
    /* 2DE1C 1500096C 8DCE0DF0 */  lw         $t6, %lo(D_800B0DF0)($t6)
    /* 2DE20 15000970 3C18800A */  lui        $t8, %hi(D_800A2CD0)
    /* 2DE24 15000974 27182CD0 */  addiu      $t8, $t8, %lo(D_800A2CD0)
    /* 2DE28 15000978 91CA0029 */  lbu        $t2, 0x29($t6)
    /* 2DE2C 1500097C 3C03800E */  lui        $v1, %hi(D_800D9E70)
    /* 2DE30 15000980 3C04800E */  lui        $a0, %hi(D_800D9E88)
    /* 2DE34 15000984 000A7880 */  sll        $t7, $t2, 2
    /* 2DE38 15000988 01EA7823 */  subu       $t7, $t7, $t2
    /* 2DE3C 1500098C 01F86021 */  addu       $t4, $t7, $t8
    /* 2DE40 15000990 91990000 */  lbu        $t9, 0x0($t4)
    /* 2DE44 15000994 91980001 */  lbu        $t8, 0x1($t4)
    /* 2DE48 15000998 3C0F800A */  lui        $t7, %hi(D_800A2CE8)
    /* 2DE4C 1500099C 00197080 */  sll        $t6, $t9, 2
    /* 2DE50 150009A0 25EF2CE8 */  addiu      $t7, $t7, %lo(D_800A2CE8)
    /* 2DE54 150009A4 01D97023 */  subu       $t6, $t6, $t9
    /* 2DE58 150009A8 01CF3821 */  addu       $a3, $t6, $t7
    /* 2DE5C 150009AC 0018C880 */  sll        $t9, $t8, 2
    /* 2DE60 150009B0 918F0002 */  lbu        $t7, 0x2($t4)
    /* 2DE64 150009B4 3C0E800A */  lui        $t6, %hi(D_800A2CEC)
    /* 2DE68 150009B8 0338C823 */  subu       $t9, $t9, $t8
    /* 2DE6C 150009BC 25CE2CEC */  addiu      $t6, $t6, %lo(D_800A2CEC)
    /* 2DE70 150009C0 032E4021 */  addu       $t0, $t9, $t6
    /* 2DE74 150009C4 3C19800A */  lui        $t9, %hi(D_800A2D04)
    /* 2DE78 150009C8 000FC080 */  sll        $t8, $t7, 2
    /* 2DE7C 150009CC 27392D04 */  addiu      $t9, $t9, %lo(D_800A2D04)
    /* 2DE80 150009D0 3C05800E */  lui        $a1, %hi(D_800D9E98)
    /* 2DE84 150009D4 3C06800E */  lui        $a2, %hi(D_800D9EA8)
    /* 2DE88 150009D8 3C02800E */  lui        $v0, %hi(D_800D9EB8)
    /* 2DE8C 150009DC 3C17800E */  lui        $s7, %hi(D_800D9EC4)
    /* 2DE90 150009E0 3C16800E */  lui        $s6, %hi(D_800D9EB7)
    /* 2DE94 150009E4 030FC023 */  subu       $t8, $t8, $t7
    /* 2DE98 150009E8 03194821 */  addu       $t1, $t8, $t9
    /* 2DE9C 150009EC 26D69EB7 */  addiu      $s6, $s6, %lo(D_800D9EB7)
    /* 2DEA0 150009F0 26F79EC4 */  addiu      $s7, $s7, %lo(D_800D9EC4)
    /* 2DEA4 150009F4 24429EB8 */  addiu      $v0, $v0, %lo(D_800D9EB8)
    /* 2DEA8 150009F8 24C69EA8 */  addiu      $a2, $a2, %lo(D_800D9EA8)
    /* 2DEAC 150009FC 24A59E98 */  addiu      $a1, $a1, %lo(D_800D9E98)
    /* 2DEB0 15000A00 24849E88 */  addiu      $a0, $a0, %lo(D_800D9E88)
    /* 2DEB4 15000A04 24639E70 */  addiu      $v1, $v1, %lo(D_800D9E70)
  .L15000A08:
    /* 2DEB8 15000A08 3C12800E */  lui        $s2, %hi(D_800D9EB4)
    /* 2DEBC 15000A0C 26529EB4 */  addiu      $s2, $s2, %lo(D_800D9EB4)
    /* 2DEC0 15000A10 00605825 */  or         $t3, $v1, $zero
    /* 2DEC4 15000A14 00806025 */  or         $t4, $a0, $zero
    /* 2DEC8 15000A18 00E06825 */  or         $t5, $a3, $zero
    /* 2DECC 15000A1C 00A08025 */  or         $s0, $a1, $zero
    /* 2DED0 15000A20 01008825 */  or         $s1, $t0, $zero
    /* 2DED4 15000A24 01209825 */  or         $s3, $t1, $zero
    /* 2DED8 15000A28 00C0A025 */  or         $s4, $a2, $zero
    /* 2DEDC 15000A2C 0040A825 */  or         $s5, $v0, $zero
  .L15000A30:
    /* 2DEE0 15000A30 92790000 */  lbu        $t9, 0x0($s3)
    /* 2DEE4 15000A34 91AE0000 */  lbu        $t6, 0x0($t5)
    /* 2DEE8 15000A38 922F0000 */  lbu        $t7, 0x0($s1)
    /* 2DEEC 15000A3C 26520001 */  addiu      $s2, $s2, 0x1
    /* 2DEF0 15000A40 256B0002 */  addiu      $t3, $t3, 0x2
    /* 2DEF4 15000A44 258C0001 */  addiu      $t4, $t4, 0x1
    /* 2DEF8 15000A48 25AD0001 */  addiu      $t5, $t5, 0x1
    /* 2DEFC 15000A4C 26100001 */  addiu      $s0, $s0, 0x1
    /* 2DF00 15000A50 26310001 */  addiu      $s1, $s1, 0x1
    /* 2DF04 15000A54 26730001 */  addiu      $s3, $s3, 0x1
    /* 2DF08 15000A58 26940001 */  addiu      $s4, $s4, 0x1
    /* 2DF0C 15000A5C 26B50001 */  addiu      $s5, $s5, 0x1
    /* 2DF10 15000A60 A560FFFE */  sh         $zero, -0x2($t3)
    /* 2DF14 15000A64 A2A0FFFF */  sb         $zero, -0x1($s5)
    /* 2DF18 15000A68 A259FFFF */  sb         $t9, -0x1($s2)
    /* 2DF1C 15000A6C A299FFFF */  sb         $t9, -0x1($s4)
    /* 2DF20 15000A70 A18EFFFF */  sb         $t6, -0x1($t4)
    /* 2DF24 15000A74 1656FFEE */  bne        $s2, $s6, .L15000A30
    /* 2DF28 15000A78 A20FFFFF */   sb        $t7, -0x1($s0)
    /* 2DF2C 15000A7C 24420003 */  addiu      $v0, $v0, 0x3
    /* 2DF30 15000A80 24630006 */  addiu      $v1, $v1, 0x6
    /* 2DF34 15000A84 24840003 */  addiu      $a0, $a0, 0x3
    /* 2DF38 15000A88 24A50003 */  addiu      $a1, $a1, 0x3
    /* 2DF3C 15000A8C 1457FFDE */  bne        $v0, $s7, .L15000A08
    /* 2DF40 15000A90 24C60003 */   addiu     $a2, $a2, 0x3
    /* 2DF44 15000A94 8FB00008 */  lw         $s0, 0x8($sp)
    /* 2DF48 15000A98 8FB1000C */  lw         $s1, 0xC($sp)
    /* 2DF4C 15000A9C 8FB20010 */  lw         $s2, 0x10($sp)
    /* 2DF50 15000AA0 8FB30014 */  lw         $s3, 0x14($sp)
    /* 2DF54 15000AA4 8FB40018 */  lw         $s4, 0x18($sp)
    /* 2DF58 15000AA8 8FB5001C */  lw         $s5, 0x1C($sp)
    /* 2DF5C 15000AAC 8FB60020 */  lw         $s6, 0x20($sp)
    /* 2DF60 15000AB0 8FB70024 */  lw         $s7, 0x24($sp)
    /* 2DF64 15000AB4 03E00008 */  jr         $ra
    /* 2DF68 15000AB8 27BD0028 */   addiu     $sp, $sp, 0x28
endlabel func_15000940
    /* 2DF6C 15000ABC 00000000 */  nop
