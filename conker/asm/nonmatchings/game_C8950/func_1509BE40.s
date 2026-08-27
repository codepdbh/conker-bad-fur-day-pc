nonmatching func_1509BE40, 0x170

glabel func_1509BE40
    /* C92F0 1509BE40 27BDFFD0 */  addiu      $sp, $sp, -0x30
    /* C92F4 1509BE44 AFA40030 */  sw         $a0, 0x30($sp)
    /* C92F8 1509BE48 3C0B800D */  lui        $t3, %hi(D_800D3840)
    /* C92FC 1509BE4C 256B3840 */  addiu      $t3, $t3, %lo(D_800D3840)
    /* C9300 1509BE50 2404FFFC */  addiu      $a0, $zero, -0x4
    /* C9304 1509BE54 AFBF0014 */  sw         $ra, 0x14($sp)
    /* C9308 1509BE58 AFA50034 */  sw         $a1, 0x34($sp)
    /* C930C 1509BE5C AFA60038 */  sw         $a2, 0x38($sp)
    /* C9310 1509BE60 AFA7003C */  sw         $a3, 0x3C($sp)
    /* C9314 1509BE64 27AE0037 */  addiu      $t6, $sp, 0x37
    /* C9318 1509BE68 01C41024 */  and        $v0, $t6, $a0
    /* C931C 1509BE6C 8C470000 */  lw         $a3, 0x0($v0)
    /* C9320 1509BE70 24590007 */  addiu      $t9, $v0, 0x7
    /* C9324 1509BE74 03243024 */  and        $a2, $t9, $a0
    /* C9328 1509BE78 8CCC0000 */  lw         $t4, 0x0($a2)
    /* C932C 1509BE7C 8FAE0030 */  lw         $t6, 0x30($sp)
    /* C9330 1509BE80 30EAF000 */  andi       $t2, $a3, 0xF000
    /* C9334 1509BE84 8D690000 */  lw         $t1, 0x0($t3)
    /* C9338 1509BE88 000A7B03 */  sra        $t7, $t2, 12
    /* C933C 1509BE8C 3C01800D */  lui        $at, %hi(D_800D2F60)
    /* C9340 1509BE90 30F80FFF */  andi       $t8, $a3, 0xFFF
    /* C9344 1509BE94 25EAFFFF */  addiu      $t2, $t7, -0x1
    /* C9348 1509BE98 03003825 */  or         $a3, $t8, $zero
    /* C934C 1509BE9C 24C30004 */  addiu      $v1, $a2, 0x4
    /* C9350 1509BEA0 AC382F60 */  sw         $t8, %lo(D_800D2F60)($at)
    /* C9354 1509BEA4 00002825 */  or         $a1, $zero, $zero
    /* C9358 1509BEA8 AFAC0038 */  sw         $t4, 0x38($sp)
    /* C935C 1509BEAC 19C0002D */  blez       $t6, .L1509BF64
    /* C9360 1509BEB0 AC2C2F64 */   sw        $t4, %lo(D_800D2F64)($at)
    /* C9364 1509BEB4 31C80003 */  andi       $t0, $t6, 0x3
    /* C9368 1509BEB8 11000010 */  beqz       $t0, .L1509BEFC
    /* C936C 1509BEBC 01003025 */   or        $a2, $t0, $zero
    /* C9370 1509BEC0 3C18800D */  lui        $t8, %hi(D_800D2F60)
    /* C9374 1509BEC4 27182F60 */  addiu      $t8, $t8, %lo(D_800D2F60)
    /* C9378 1509BEC8 00007880 */  sll        $t7, $zero, 2
    /* C937C 1509BECC 01F81021 */  addu       $v0, $t7, $t8
  .L1509BED0:
    /* C9380 1509BED0 24790003 */  addiu      $t9, $v1, 0x3
    /* C9384 1509BED4 03241824 */  and        $v1, $t9, $a0
    /* C9388 1509BED8 8C6C0000 */  lw         $t4, 0x0($v1)
    /* C938C 1509BEDC 24A50001 */  addiu      $a1, $a1, 0x1
    /* C9390 1509BEE0 24630004 */  addiu      $v1, $v1, 0x4
    /* C9394 1509BEE4 24420004 */  addiu      $v0, $v0, 0x4
    /* C9398 1509BEE8 14C5FFF9 */  bne        $a2, $a1, .L1509BED0
    /* C939C 1509BEEC AC4C0004 */   sw        $t4, 0x4($v0)
    /* C93A0 1509BEF0 8FAD0030 */  lw         $t5, 0x30($sp)
    /* C93A4 1509BEF4 50AD001C */  beql       $a1, $t5, .L1509BF68
    /* C93A8 1509BEF8 8FAE0030 */   lw        $t6, 0x30($sp)
  .L1509BEFC:
    /* C93AC 1509BEFC 8FB80030 */  lw         $t8, 0x30($sp)
    /* C93B0 1509BF00 3C0F800D */  lui        $t7, %hi(D_800D2F60)
    /* C93B4 1509BF04 25EF2F60 */  addiu      $t7, $t7, %lo(D_800D2F60)
    /* C93B8 1509BF08 00057080 */  sll        $t6, $a1, 2
    /* C93BC 1509BF0C 0018C880 */  sll        $t9, $t8, 2
    /* C93C0 1509BF10 032F3021 */  addu       $a2, $t9, $t7
    /* C93C4 1509BF14 01CF1021 */  addu       $v0, $t6, $t7
  .L1509BF18:
    /* C93C8 1509BF18 246C0003 */  addiu      $t4, $v1, 0x3
    /* C93CC 1509BF1C 01841824 */  and        $v1, $t4, $a0
    /* C93D0 1509BF20 8C6D0000 */  lw         $t5, 0x0($v1)
    /* C93D4 1509BF24 246E0007 */  addiu      $t6, $v1, 0x7
    /* C93D8 1509BF28 01C41824 */  and        $v1, $t6, $a0
    /* C93DC 1509BF2C AC4D0008 */  sw         $t5, 0x8($v0)
    /* C93E0 1509BF30 8C780000 */  lw         $t8, 0x0($v1)
    /* C93E4 1509BF34 24790007 */  addiu      $t9, $v1, 0x7
    /* C93E8 1509BF38 03241824 */  and        $v1, $t9, $a0
    /* C93EC 1509BF3C AC58000C */  sw         $t8, 0xC($v0)
    /* C93F0 1509BF40 8C6F0000 */  lw         $t7, 0x0($v1)
    /* C93F4 1509BF44 246C0007 */  addiu      $t4, $v1, 0x7
    /* C93F8 1509BF48 01841824 */  and        $v1, $t4, $a0
    /* C93FC 1509BF4C AC4F0010 */  sw         $t7, 0x10($v0)
    /* C9400 1509BF50 8C6D0000 */  lw         $t5, 0x0($v1)
    /* C9404 1509BF54 24420010 */  addiu      $v0, $v0, 0x10
    /* C9408 1509BF58 24630004 */  addiu      $v1, $v1, 0x4
    /* C940C 1509BF5C 1446FFEE */  bne        $v0, $a2, .L1509BF18
    /* C9410 1509BF60 AC4D0004 */   sw        $t5, 0x4($v0)
  .L1509BF64:
    /* C9414 1509BF64 8FAE0030 */  lw         $t6, 0x30($sp)
  .L1509BF68:
    /* C9418 1509BF68 000AC880 */  sll        $t9, $t2, 2
    /* C941C 1509BF6C 3C018009 */  lui        $at, %hi(D_80088498)
    /* C9420 1509BF70 25D80002 */  addiu      $t8, $t6, 0x2
    /* C9424 1509BF74 AD780000 */  sw         $t8, 0x0($t3)
    /* C9428 1509BF78 00390821 */  addu       $at, $at, $t9
    /* C942C 1509BF7C 8C398498 */  lw         $t9, %lo(D_80088498)($at)
    /* C9430 1509BF80 3C06800D */  lui        $a2, %hi(D_800D2F60)
    /* C9434 1509BF84 24C62F60 */  addiu      $a2, $a2, %lo(D_800D2F60)
    /* C9438 1509BF88 00E02025 */  or         $a0, $a3, $zero
    /* C943C 1509BF8C 8FA50038 */  lw         $a1, 0x38($sp)
    /* C9440 1509BF90 0320F809 */  jalr       $t9
    /* C9444 1509BF94 AFA9001C */   sw        $t1, 0x1C($sp)
    /* C9448 1509BF98 8FA9001C */  lw         $t1, 0x1C($sp)
    /* C944C 1509BF9C 3C01800D */  lui        $at, %hi(D_800D3840)
    /* C9450 1509BFA0 8FBF0014 */  lw         $ra, 0x14($sp)
    /* C9454 1509BFA4 AC293840 */  sw         $t1, %lo(D_800D3840)($at)
    /* C9458 1509BFA8 03E00008 */  jr         $ra
    /* C945C 1509BFAC 27BD0030 */   addiu     $sp, $sp, 0x30
endlabel func_1509BE40
