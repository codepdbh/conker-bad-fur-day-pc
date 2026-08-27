nonmatching func_1505E650, 0x17C

glabel func_1505E650
    /* 8BB00 1505E650 27BDFFB8 */  addiu      $sp, $sp, -0x48
    /* 8BB04 1505E654 AFA5004C */  sw         $a1, 0x4C($sp)
    /* 8BB08 1505E658 44876000 */  mtc1       $a3, $f12
    /* 8BB0C 1505E65C 97A7004E */  lhu        $a3, 0x4E($sp)
    /* 8BB10 1505E660 AFBF0034 */  sw         $ra, 0x34($sp)
    /* 8BB14 1505E664 AFA60050 */  sw         $a2, 0x50($sp)
    /* 8BB18 1505E668 3C0E800C */  lui        $t6, %hi(D_800C3638)
    /* 8BB1C 1505E66C 91CE3638 */  lbu        $t6, %lo(D_800C3638)($t6)
    /* 8BB20 1505E670 90860004 */  lbu        $a2, 0x4($a0)
    /* 8BB24 1505E674 3C0F800C */  lui        $t7, %hi(D_800C3654)
    /* 8BB28 1505E678 51C0000F */  beql       $t6, $zero, .L1505E6B8
    /* 8BB2C 1505E67C 90830004 */   lbu       $v1, 0x4($a0)
    /* 8BB30 1505E680 91EF3654 */  lbu        $t7, %lo(D_800C3654)($t7)
    /* 8BB34 1505E684 51E0004E */  beql       $t7, $zero, .L1505E7C0
    /* 8BB38 1505E688 8FBF0034 */   lw        $ra, 0x34($sp)
    /* 8BB3C 1505E68C AFA40048 */  sw         $a0, 0x48($sp)
    /* 8BB40 1505E690 AFA60040 */  sw         $a2, 0x40($sp)
    /* 8BB44 1505E694 A7A7004E */  sh         $a3, 0x4E($sp)
    /* 8BB48 1505E698 0D408A79 */  jal        func_150229E4
    /* 8BB4C 1505E69C E7AC0054 */   swc1      $f12, 0x54($sp)
    /* 8BB50 1505E6A0 8FA40048 */  lw         $a0, 0x48($sp)
    /* 8BB54 1505E6A4 8FA60040 */  lw         $a2, 0x40($sp)
    /* 8BB58 1505E6A8 97A7004E */  lhu        $a3, 0x4E($sp)
    /* 8BB5C 1505E6AC 14400043 */  bnez       $v0, .L1505E7BC
    /* 8BB60 1505E6B0 C7AC0054 */   lwc1      $f12, 0x54($sp)
    /* 8BB64 1505E6B4 90830004 */  lbu        $v1, 0x4($a0)
  .L1505E6B8:
    /* 8BB68 1505E6B8 240100FF */  addiu      $at, $zero, 0xFF
    /* 8BB6C 1505E6BC 3C05800C */  lui        $a1, %hi(D_800C5A90)
    /* 8BB70 1505E6C0 1061003E */  beq        $v1, $at, .L1505E7BC
    /* 8BB74 1505E6C4 24A55A90 */   addiu     $a1, $a1, %lo(D_800C5A90)
    /* 8BB78 1505E6C8 0003C040 */  sll        $t8, $v1, 1
    /* 8BB7C 1505E6CC 00B8C821 */  addu       $t9, $a1, $t8
    /* 8BB80 1505E6D0 97220000 */  lhu        $v0, 0x0($t9)
    /* 8BB84 1505E6D4 5040003A */  beql       $v0, $zero, .L1505E7C0
    /* 8BB88 1505E6D8 8FBF0034 */   lw        $ra, 0x34($sp)
    /* 8BB8C 1505E6DC 8C8802D0 */  lw         $t0, 0x2D0($a0)
    /* 8BB90 1505E6E0 11000036 */  beqz       $t0, .L1505E7BC
    /* 8BB94 1505E6E4 AFA80038 */   sw        $t0, 0x38($sp)
    /* 8BB98 1505E6E8 10400034 */  beqz       $v0, .L1505E7BC
    /* 8BB9C 1505E6EC 00E2082A */   slt       $at, $a3, $v0
    /* 8BBA0 1505E6F0 10200032 */  beqz       $at, .L1505E7BC
    /* 8BBA4 1505E6F4 00E01825 */   or        $v1, $a3, $zero
    /* 8BBA8 1505E6F8 00065080 */  sll        $t2, $a2, 2
    /* 8BBAC 1505E6FC 3C02800D */  lui        $v0, %hi(D_800D1588)
    /* 8BBB0 1505E700 004A1021 */  addu       $v0, $v0, $t2
    /* 8BBB4 1505E704 8C421588 */  lw         $v0, %lo(D_800D1588)($v0)
    /* 8BBB8 1505E708 00065840 */  sll        $t3, $a2, 1
    /* 8BBBC 1505E70C 00AB6021 */  addu       $t4, $a1, $t3
    /* 8BBC0 1505E710 54400006 */  bnel       $v0, $zero, .L1505E72C
    /* 8BBC4 1505E714 958D0000 */   lhu       $t5, 0x0($t4)
    /* 8BBC8 1505E718 0D4177F7 */  jal        func_1505DFDC
    /* 8BBCC 1505E71C 00000000 */   nop
    /* 8BBD0 1505E720 10000027 */  b          .L1505E7C0
    /* 8BBD4 1505E724 8FBF0034 */   lw        $ra, 0x34($sp)
    /* 8BBD8 1505E728 958D0000 */  lhu        $t5, 0x0($t4)
  .L1505E72C:
    /* 8BBDC 1505E72C 006D082A */  slt        $at, $v1, $t5
    /* 8BBE0 1505E730 50200023 */  beql       $at, $zero, .L1505E7C0
    /* 8BBE4 1505E734 8FBF0034 */   lw        $ra, 0x34($sp)
    /* 8BBE8 1505E738 944E0000 */  lhu        $t6, 0x0($v0)
    /* 8BBEC 1505E73C 240603E7 */  addiu      $a2, $zero, 0x3E7
    /* 8BBF0 1505E740 000778C0 */  sll        $t7, $a3, 3
    /* 8BBF4 1505E744 10CE001D */  beq        $a2, $t6, .L1505E7BC
    /* 8BBF8 1505E748 004F2821 */   addu      $a1, $v0, $t7
    /* 8BBFC 1505E74C 94A20000 */  lhu        $v0, 0x0($a1)
    /* 8BC00 1505E750 10C2001A */  beq        $a2, $v0, .L1505E7BC
    /* 8BC04 1505E754 28417530 */   slti      $at, $v0, 0x7530
    /* 8BC08 1505E758 14200005 */  bnez       $at, .L1505E770
    /* 8BC0C 1505E75C 8FA60038 */   lw        $a2, 0x38($sp)
    /* 8BC10 1505E760 0D4177F7 */  jal        func_1505DFDC
    /* 8BC14 1505E764 00000000 */   nop
    /* 8BC18 1505E768 10000015 */  b          .L1505E7C0
    /* 8BC1C 1505E76C 8FBF0034 */   lw        $ra, 0x34($sp)
  .L1505E770:
    /* 8BC20 1505E770 909802FF */  lbu        $t8, 0x2FF($a0)
    /* 8BC24 1505E774 00003825 */  or         $a3, $zero, $zero
    /* 8BC28 1505E778 57000004 */  bnel       $t8, $zero, .L1505E78C
    /* 8BC2C 1505E77C C7A40050 */   lwc1      $f4, 0x50($sp)
    /* 8BC30 1505E780 44806000 */  mtc1       $zero, $f12
    /* 8BC34 1505E784 00000000 */  nop
    /* 8BC38 1505E788 C7A40050 */  lwc1       $f4, 0x50($sp)
  .L1505E78C:
    /* 8BC3C 1505E78C C7A60058 */  lwc1       $f6, 0x58($sp)
    /* 8BC40 1505E790 C7A8005C */  lwc1       $f8, 0x5C($sp)
    /* 8BC44 1505E794 8FB90060 */  lw         $t9, 0x60($sp)
    /* 8BC48 1505E798 AFA00010 */  sw         $zero, 0x10($sp)
    /* 8BC4C 1505E79C AFA30014 */  sw         $v1, 0x14($sp)
    /* 8BC50 1505E7A0 AFA00018 */  sw         $zero, 0x18($sp)
    /* 8BC54 1505E7A4 E7AC0020 */  swc1       $f12, 0x20($sp)
    /* 8BC58 1505E7A8 E7A4001C */  swc1       $f4, 0x1C($sp)
    /* 8BC5C 1505E7AC E7A60024 */  swc1       $f6, 0x24($sp)
    /* 8BC60 1505E7B0 E7A80028 */  swc1       $f8, 0x28($sp)
    /* 8BC64 1505E7B4 0D417831 */  jal        func_1505E0C4
    /* 8BC68 1505E7B8 AFB9002C */   sw        $t9, 0x2C($sp)
  .L1505E7BC:
    /* 8BC6C 1505E7BC 8FBF0034 */  lw         $ra, 0x34($sp)
  .L1505E7C0:
    /* 8BC70 1505E7C0 27BD0048 */  addiu      $sp, $sp, 0x48
    /* 8BC74 1505E7C4 03E00008 */  jr         $ra
    /* 8BC78 1505E7C8 00000000 */   nop
endlabel func_1505E650
