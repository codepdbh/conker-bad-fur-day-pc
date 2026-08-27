nonmatching func_1509B950, 0xB4

glabel func_1509B950
    /* C8E00 1509B950 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* C8E04 1509B954 AFB00014 */  sw         $s0, 0x14($sp)
    /* C8E08 1509B958 00808025 */  or         $s0, $a0, $zero
    /* C8E0C 1509B95C AFBF001C */  sw         $ra, 0x1C($sp)
    /* C8E10 1509B960 AFB10018 */  sw         $s1, 0x18($sp)
    /* C8E14 1509B964 96020004 */  lhu        $v0, 0x4($s0)
    /* C8E18 1509B968 96090006 */  lhu        $t1, 0x6($s0)
    /* C8E1C 1509B96C 24180008 */  addiu      $t8, $zero, 0x8
    /* C8E20 1509B970 02027021 */  addu       $t6, $s0, $v0
    /* C8E24 1509B974 31CF0007 */  andi       $t7, $t6, 0x7
    /* C8E28 1509B978 030F1823 */  subu       $v1, $t8, $t7
    /* C8E2C 1509B97C 00434021 */  addu       $t0, $v0, $v1
    /* C8E30 1509B980 01091021 */  addu       $v0, $t0, $t1
    /* C8E34 1509B984 02025821 */  addu       $t3, $s0, $v0
    /* C8E38 1509B988 316C0007 */  andi       $t4, $t3, 0x7
    /* C8E3C 1509B98C 004C6823 */  subu       $t5, $v0, $t4
    /* C8E40 1509B990 A6020004 */  sh         $v0, 0x4($s0)
    /* C8E44 1509B994 25AE0008 */  addiu      $t6, $t5, 0x8
    /* C8E48 1509B998 A608000A */  sh         $t0, 0xA($s0)
    /* C8E4C 1509B99C A60E0004 */  sh         $t6, 0x4($s0)
    /* C8E50 1509B9A0 31C4FFFF */  andi       $a0, $t6, 0xFFFF
    /* C8E54 1509B9A4 240500FF */  addiu      $a1, $zero, 0xFF
    /* C8E58 1509B9A8 24060002 */  addiu      $a2, $zero, 0x2
    /* C8E5C 1509B9AC 0C000F10 */  jal        allocate_memory
    /* C8E60 1509B9B0 00003825 */   or        $a3, $zero, $zero
    /* C8E64 1509B9B4 14400003 */  bnez       $v0, .L1509B9C4
    /* C8E68 1509B9B8 00408825 */   or        $s1, $v0, $zero
  .L1509B9BC:
    /* C8E6C 1509B9BC 1000FFFF */  b          .L1509B9BC
    /* C8E70 1509B9C0 00000000 */   nop
  .L1509B9C4:
    /* C8E74 1509B9C4 02002025 */  or         $a0, $s0, $zero
    /* C8E78 1509B9C8 02202825 */  or         $a1, $s1, $zero
    /* C8E7C 1509B9CC 0C008E84 */  jal        bcopy
    /* C8E80 1509B9D0 96060004 */   lhu       $a2, 0x4($s0)
    /* C8E84 1509B9D4 9638000A */  lhu        $t8, 0xA($s1)
    /* C8E88 1509B9D8 96250006 */  lhu        $a1, 0x6($s1)
    /* C8E8C 1509B9DC 0C0089BC */  jal        bzero
    /* C8E90 1509B9E0 02382021 */   addu      $a0, $s1, $t8
    /* C8E94 1509B9E4 0C00101D */  jal        func_10004074
    /* C8E98 1509B9E8 02002025 */   or        $a0, $s0, $zero
    /* C8E9C 1509B9EC 02201025 */  or         $v0, $s1, $zero
    /* C8EA0 1509B9F0 8FBF001C */  lw         $ra, 0x1C($sp)
    /* C8EA4 1509B9F4 8FB00014 */  lw         $s0, 0x14($sp)
    /* C8EA8 1509B9F8 8FB10018 */  lw         $s1, 0x18($sp)
    /* C8EAC 1509B9FC 03E00008 */  jr         $ra
    /* C8EB0 1509BA00 27BD0020 */   addiu     $sp, $sp, 0x20
endlabel func_1509B950
