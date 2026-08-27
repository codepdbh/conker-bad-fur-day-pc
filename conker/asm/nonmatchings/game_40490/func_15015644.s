nonmatching func_15015644, 0xB0

glabel func_15015644
    /* 42AF4 15015644 27BDFFB8 */  addiu      $sp, $sp, -0x48
    /* 42AF8 15015648 AFBF002C */  sw         $ra, 0x2C($sp)
    /* 42AFC 1501564C 00803025 */  or         $a2, $a0, $zero
    /* 42B00 15015650 90CE0016 */  lbu        $t6, 0x16($a2)
    /* 42B04 15015654 24180001 */  addiu      $t8, $zero, 0x1
    /* 42B08 15015658 A0D80014 */  sb         $t8, 0x14($a2)
    /* 42B0C 1501565C 35CF0004 */  ori        $t7, $t6, 0x4
    /* 42B10 15015660 A0CF0016 */  sb         $t7, 0x16($a2)
    /* 42B14 15015664 AFA60038 */  sw         $a2, 0x38($sp)
    /* 42B18 15015668 AFA60048 */  sw         $a2, 0x48($sp)
    /* 42B1C 1501566C 0D451166 */  jal        func_15144598
    /* 42B20 15015670 00C02025 */   or        $a0, $a2, $zero
    /* 42B24 15015674 E7A0003C */  swc1       $f0, 0x3C($sp)
    /* 42B28 15015678 0D443E00 */  jal        func_1510F800
    /* 42B2C 1501567C 00002025 */   or        $a0, $zero, $zero
    /* 42B30 15015680 8FA60048 */  lw         $a2, 0x48($sp)
    /* 42B34 15015684 84C40000 */  lh         $a0, 0x0($a2)
    /* 42B38 15015688 0D443F48 */  jal        func_1510FD20
    /* 42B3C 1501568C 84C50004 */   lh        $a1, 0x4($a2)
    /* 42B40 15015690 2419002F */  addiu      $t9, $zero, 0x2F
    /* 42B44 15015694 24080010 */  addiu      $t0, $zero, 0x10
    /* 42B48 15015698 240900FF */  addiu      $t1, $zero, 0xFF
    /* 42B4C 1501569C AFA20040 */  sw         $v0, 0x40($sp)
    /* 42B50 150156A0 A3A00044 */  sb         $zero, 0x44($sp)
    /* 42B54 150156A4 AFA9001C */  sw         $t1, 0x1C($sp)
    /* 42B58 150156A8 AFA80018 */  sw         $t0, 0x18($sp)
    /* 42B5C 150156AC AFB90014 */  sw         $t9, 0x14($sp)
    /* 42B60 150156B0 2404012C */  addiu      $a0, $zero, 0x12C
    /* 42B64 150156B4 2405FFFF */  addiu      $a1, $zero, -0x1
    /* 42B68 150156B8 24060044 */  addiu      $a2, $zero, 0x44
    /* 42B6C 150156BC 2407FFFF */  addiu      $a3, $zero, -0x1
    /* 42B70 150156C0 AFA00010 */  sw         $zero, 0x10($sp)
    /* 42B74 150156C4 0D45244C */  jal        func_15149130
    /* 42B78 150156C8 AFA00020 */   sw        $zero, 0x20($sp)
    /* 42B7C 150156CC 10400004 */  beqz       $v0, .L150156E0
    /* 42B80 150156D0 24440028 */   addiu     $a0, $v0, 0x28
    /* 42B84 150156D4 27A50038 */  addiu      $a1, $sp, 0x38
    /* 42B88 150156D8 0C008BB0 */  jal        memcpy
    /* 42B8C 150156DC 24060010 */   addiu     $a2, $zero, 0x10
  .L150156E0:
    /* 42B90 150156E0 24020001 */  addiu      $v0, $zero, 0x1
    /* 42B94 150156E4 8FBF002C */  lw         $ra, 0x2C($sp)
    /* 42B98 150156E8 27BD0048 */  addiu      $sp, $sp, 0x48
    /* 42B9C 150156EC 03E00008 */  jr         $ra
    /* 42BA0 150156F0 00000000 */   nop
endlabel func_15015644
