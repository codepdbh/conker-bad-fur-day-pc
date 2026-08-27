nonmatching func_1509B5AC, 0x158

glabel func_1509B5AC
    /* C8A5C 1509B5AC 27BDFFD8 */  addiu      $sp, $sp, -0x28
    /* C8A60 1509B5B0 AFBF001C */  sw         $ra, 0x1C($sp)
    /* C8A64 1509B5B4 AFB00018 */  sw         $s0, 0x18($sp)
    /* C8A68 1509B5B8 AFA5002C */  sw         $a1, 0x2C($sp)
    /* C8A6C 1509B5BC 00803025 */  or         $a2, $a0, $zero
    /* C8A70 1509B5C0 00062400 */  sll        $a0, $a2, 16
    /* C8A74 1509B5C4 00047403 */  sra        $t6, $a0, 16
    /* C8A78 1509B5C8 01C02025 */  or         $a0, $t6, $zero
    /* C8A7C 1509B5CC AFAE0020 */  sw         $t6, 0x20($sp)
    /* C8A80 1509B5D0 0D426DC1 */  jal        func_1509B704
    /* C8A84 1509B5D4 AFA60028 */   sw        $a2, 0x28($sp)
    /* C8A88 1509B5D8 8FA3002C */  lw         $v1, 0x2C($sp)
    /* C8A8C 1509B5DC 8FA40020 */  lw         $a0, 0x20($sp)
    /* C8A90 1509B5E0 8FA60028 */  lw         $a2, 0x28($sp)
    /* C8A94 1509B5E4 1460000E */  bnez       $v1, .L1509B620
    /* C8A98 1509B5E8 00408025 */   or        $s0, $v0, $zero
    /* C8A9C 1509B5EC 3C18800D */  lui        $t8, %hi(D_800D2E4C)
    /* C8AA0 1509B5F0 8F182E4C */  lw         $t8, %lo(D_800D2E4C)($t8)
    /* C8AA4 1509B5F4 000678C3 */  sra        $t7, $a2, 3
    /* C8AA8 1509B5F8 30C90007 */  andi       $t1, $a2, 0x7
    /* C8AAC 1509B5FC 01F8C821 */  addu       $t9, $t7, $t8
    /* C8AB0 1509B600 93280000 */  lbu        $t0, 0x0($t9)
    /* C8AB4 1509B604 240A0001 */  addiu      $t2, $zero, 0x1
    /* C8AB8 1509B608 012A5804 */  sllv       $t3, $t2, $t1
    /* C8ABC 1509B60C 010B6024 */  and        $t4, $t0, $t3
    /* C8AC0 1509B610 11800003 */  beqz       $t4, .L1509B620
    /* C8AC4 1509B614 00000000 */   nop
    /* C8AC8 1509B618 10000035 */  b          .L1509B6F0
    /* C8ACC 1509B61C 00001025 */   or        $v0, $zero, $zero
  .L1509B620:
    /* C8AD0 1509B620 14400026 */  bnez       $v0, .L1509B6BC
    /* C8AD4 1509B624 00000000 */   nop
    /* C8AD8 1509B628 0D426E3F */  jal        func_1509B8FC
    /* C8ADC 1509B62C 00000000 */   nop
    /* C8AE0 1509B630 00408025 */  or         $s0, $v0, $zero
    /* C8AE4 1509B634 0D426E04 */  jal        func_1509B810
    /* C8AE8 1509B638 00402025 */   or        $a0, $v0, $zero
    /* C8AEC 1509B63C 96030000 */  lhu        $v1, 0x0($s0)
    /* C8AF0 1509B640 3C01FFFF */  lui        $at, (0xFFFF03FF >> 16)
    /* C8AF4 1509B644 3C0E800D */  lui        $t6, %hi(D_800D2E4C)
    /* C8AF8 1509B648 8DCE2E4C */  lw         $t6, %lo(D_800D2E4C)($t6)
    /* C8AFC 1509B64C 342103FF */  ori        $at, $at, (0xFFFF03FF & 0xFFFF)
    /* C8B00 1509B650 00611024 */  and        $v0, $v1, $at
    /* C8B04 1509B654 000268C3 */  sra        $t5, $v0, 3
    /* C8B08 1509B658 01AE7821 */  addu       $t7, $t5, $t6
    /* C8B0C 1509B65C 91F80000 */  lbu        $t8, 0x0($t7)
    /* C8B10 1509B660 30590007 */  andi       $t9, $v0, 0x7
    /* C8B14 1509B664 240A0001 */  addiu      $t2, $zero, 0x1
    /* C8B18 1509B668 032A4804 */  sllv       $t1, $t2, $t9
    /* C8B1C 1509B66C 03094024 */  and        $t0, $t8, $t1
    /* C8B20 1509B670 15000009 */  bnez       $t0, .L1509B698
    /* C8B24 1509B674 3C0B0600 */   lui       $t3, (0x6000000 >> 16)
    /* C8B28 1509B678 3C018004 */  lui        $at, %hi(D_8003C8E0)
    /* C8B2C 1509B67C AC2BC8E0 */  sw         $t3, %lo(D_8003C8E0)($at)
    /* C8B30 1509B680 02002025 */  or         $a0, $s0, $zero
    /* C8B34 1509B684 0D42B6BC */  jal        func_150ADAF0
    /* C8B38 1509B688 00002825 */   or        $a1, $zero, $zero
    /* C8B3C 1509B68C 3C018004 */  lui        $at, %hi(D_8003C8E0)
    /* C8B40 1509B690 AC20C8E0 */  sw         $zero, %lo(D_8003C8E0)($at)
    /* C8B44 1509B694 96030000 */  lhu        $v1, 0x0($s0)
  .L1509B698:
    /* C8B48 1509B698 8FAC002C */  lw         $t4, 0x2C($sp)
    /* C8B4C 1509B69C 306D0400 */  andi       $t5, $v1, 0x400
    /* C8B50 1509B6A0 346E4000 */  ori        $t6, $v1, 0x4000
    /* C8B54 1509B6A4 11800003 */  beqz       $t4, .L1509B6B4
    /* C8B58 1509B6A8 00000000 */   nop
    /* C8B5C 1509B6AC 51A00010 */  beql       $t5, $zero, .L1509B6F0
    /* C8B60 1509B6B0 02001025 */   or        $v0, $s0, $zero
  .L1509B6B4:
    /* C8B64 1509B6B4 1000000D */  b          .L1509B6EC
    /* C8B68 1509B6B8 A60E0000 */   sh        $t6, 0x0($s0)
  .L1509B6BC:
    /* C8B6C 1509B6BC 5060000C */  beql       $v1, $zero, .L1509B6F0
    /* C8B70 1509B6C0 02001025 */   or        $v0, $s0, $zero
    /* C8B74 1509B6C4 94430000 */  lhu        $v1, 0x0($v0)
    /* C8B78 1509B6C8 306F1000 */  andi       $t7, $v1, 0x1000
    /* C8B7C 1509B6CC 11E00007 */  beqz       $t7, .L1509B6EC
    /* C8B80 1509B6D0 306A0800 */   andi      $t2, $v1, 0x800
    /* C8B84 1509B6D4 55400006 */  bnel       $t2, $zero, .L1509B6F0
    /* C8B88 1509B6D8 02001025 */   or        $v0, $s0, $zero
    /* C8B8C 1509B6DC 9619000A */  lhu        $t9, 0xA($s0)
    /* C8B90 1509B6E0 96050006 */  lhu        $a1, 0x6($s0)
    /* C8B94 1509B6E4 0C0089BC */  jal        bzero
    /* C8B98 1509B6E8 02192021 */   addu      $a0, $s0, $t9
  .L1509B6EC:
    /* C8B9C 1509B6EC 02001025 */  or         $v0, $s0, $zero
  .L1509B6F0:
    /* C8BA0 1509B6F0 8FBF001C */  lw         $ra, 0x1C($sp)
    /* C8BA4 1509B6F4 8FB00018 */  lw         $s0, 0x18($sp)
    /* C8BA8 1509B6F8 27BD0028 */  addiu      $sp, $sp, 0x28
    /* C8BAC 1509B6FC 03E00008 */  jr         $ra
    /* C8BB0 1509B700 00000000 */   nop
endlabel func_1509B5AC
