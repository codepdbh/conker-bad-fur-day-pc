nonmatching func_1001E530, 0x83C

glabel func_1001E530
    /* 1E530 1001E530 27BDFF80 */  addiu      $sp, $sp, -0x80
    /* 1E534 1001E534 AFBF001C */  sw         $ra, 0x1C($sp)
    /* 1E538 1001E538 AFA40080 */  sw         $a0, 0x80($sp)
    /* 1E53C 1001E53C AFA50084 */  sw         $a1, 0x84($sp)
    /* 1E540 1001E540 AFA60088 */  sw         $a2, 0x88($sp)
    /* 1E544 1001E544 8FAE0084 */  lw         $t6, 0x84($sp)
    /* 1E548 1001E548 AFAE007C */  sw         $t6, 0x7C($sp)
    /* 1E54C 1001E54C 3C0F8003 */  lui        $t7, %hi(n_syn)
    /* 1E550 1001E550 8DEFBA44 */  lw         $t7, %lo(n_syn)($t7)
    /* 1E554 1001E554 8FB90088 */  lw         $t9, 0x88($sp)
    /* 1E558 1001E558 8DF80048 */  lw         $t8, 0x48($t7)
    /* 1E55C 1001E55C 00194100 */  sll        $t0, $t9, 4
    /* 1E560 1001E560 01194021 */  addu       $t0, $t0, $t9
    /* 1E564 1001E564 00084080 */  sll        $t0, $t0, 2
    /* 1E568 1001E568 03084821 */  addu       $t1, $t8, $t0
    /* 1E56C 1001E56C 8D2A001C */  lw         $t2, 0x1C($t1)
    /* 1E570 1001E570 AFAA0078 */  sw         $t2, 0x78($sp)
    /* 1E574 1001E574 AFA00060 */  sw         $zero, 0x60($sp)
    /* 1E578 1001E578 AFA00058 */  sw         $zero, 0x58($sp)
    /* 1E57C 1001E57C 8FA40080 */  lw         $a0, 0x80($sp)
    /* 1E580 1001E580 8FA50084 */  lw         $a1, 0x84($sp)
    /* 1E584 1001E584 8FA60088 */  lw         $a2, 0x88($sp)
    /* 1E588 1001E588 0C008430 */  jal        func_100210C0
    /* 1E58C 1001E58C 27A70058 */   addiu     $a3, $sp, 0x58
    /* 1E590 1001E590 AFA2007C */  sw         $v0, 0x7C($sp)
    /* 1E594 1001E594 240B07C0 */  addiu      $t3, $zero, 0x7C0
    /* 1E598 1001E598 A7AB0070 */  sh         $t3, 0x70($sp)
    /* 1E59C 1001E59C 240C0930 */  addiu      $t4, $zero, 0x930
    /* 1E5A0 1001E5A0 A7AC006E */  sh         $t4, 0x6E($sp)
    /* 1E5A4 1001E5A4 A7A00074 */  sh         $zero, 0x74($sp)
    /* 1E5A8 1001E5A8 240D0170 */  addiu      $t5, $zero, 0x170
    /* 1E5AC 1001E5AC A7AD0072 */  sh         $t5, 0x72($sp)
    /* 1E5B0 1001E5B0 8FAE0088 */  lw         $t6, 0x88($sp)
    /* 1E5B4 1001E5B4 3C0F8004 */  lui        $t7, %hi(D_800428C4)
    /* 1E5B8 1001E5B8 01EE7821 */  addu       $t7, $t7, $t6
    /* 1E5BC 1001E5BC 91EF28C4 */  lbu        $t7, %lo(D_800428C4)($t7)
    /* 1E5C0 1001E5C0 15E0001D */  bnez       $t7, .L1001E638
    /* 1E5C4 1001E5C4 00000000 */   nop
    /* 1E5C8 1001E5C8 8FB9007C */  lw         $t9, 0x7C($sp)
    /* 1E5CC 1001E5CC 27380008 */  addiu      $t8, $t9, 0x8
    /* 1E5D0 1001E5D0 AFB8007C */  sw         $t8, 0x7C($sp)
    /* 1E5D4 1001E5D4 AFB90050 */  sw         $t9, 0x50($sp)
    /* 1E5D8 1001E5D8 8FA90050 */  lw         $t1, 0x50($sp)
    /* 1E5DC 1001E5DC 3C080C00 */  lui        $t0, (0xC00C000 >> 16)
    /* 1E5E0 1001E5E0 3508C000 */  ori        $t0, $t0, (0xC00C000 & 0xFFFF)
    /* 1E5E4 1001E5E4 AD280000 */  sw         $t0, 0x0($t1)
    /* 1E5E8 1001E5E8 87AA0070 */  lh         $t2, 0x70($sp)
    /* 1E5EC 1001E5EC 8FAD0050 */  lw         $t5, 0x50($sp)
    /* 1E5F0 1001E5F0 3C0107C0 */  lui        $at, (0x7C00000 >> 16)
    /* 1E5F4 1001E5F4 314BFFFF */  andi       $t3, $t2, 0xFFFF
    /* 1E5F8 1001E5F8 01616025 */  or         $t4, $t3, $at
    /* 1E5FC 1001E5FC ADAC0004 */  sw         $t4, 0x4($t5)
    /* 1E600 1001E600 8FAE007C */  lw         $t6, 0x7C($sp)
    /* 1E604 1001E604 25CF0008 */  addiu      $t7, $t6, 0x8
    /* 1E608 1001E608 AFAF007C */  sw         $t7, 0x7C($sp)
    /* 1E60C 1001E60C AFAE004C */  sw         $t6, 0x4C($sp)
    /* 1E610 1001E610 8FB8004C */  lw         $t8, 0x4C($sp)
    /* 1E614 1001E614 3C190C00 */  lui        $t9, (0xC004000 >> 16)
    /* 1E618 1001E618 37394000 */  ori        $t9, $t9, (0xC004000 & 0xFFFF)
    /* 1E61C 1001E61C AF190000 */  sw         $t9, 0x0($t8)
    /* 1E620 1001E620 87A80070 */  lh         $t0, 0x70($sp)
    /* 1E624 1001E624 8FAB004C */  lw         $t3, 0x4C($sp)
    /* 1E628 1001E628 3C010930 */  lui        $at, (0x9300000 >> 16)
    /* 1E62C 1001E62C 3109FFFF */  andi       $t1, $t0, 0xFFFF
    /* 1E630 1001E630 01215025 */  or         $t2, $t1, $at
    /* 1E634 1001E634 AD6A0004 */  sw         $t2, 0x4($t3)
  .L1001E638:
    /* 1E638 1001E638 8FAC0078 */  lw         $t4, 0x78($sp)
    /* 1E63C 1001E63C 8FAD007C */  lw         $t5, 0x7C($sp)
    /* 1E640 1001E640 00002825 */  or         $a1, $zero, $zero
    /* 1E644 1001E644 8D860028 */  lw         $a2, 0x28($t4)
    /* 1E648 1001E648 87A70070 */  lh         $a3, 0x70($sp)
    /* 1E64C 1001E64C 01802025 */  or         $a0, $t4, $zero
    /* 1E650 1001E650 0C007DE7 */  jal        func_1001F79C
    /* 1E654 1001E654 AFAD0010 */   sw        $t5, 0x10($sp)
    /* 1E658 1001E658 AFA2007C */  sw         $v0, 0x7C($sp)
    /* 1E65C 1001E65C 8FAE0088 */  lw         $t6, 0x88($sp)
    /* 1E660 1001E660 3C0F8004 */  lui        $t7, %hi(D_800428C4)
    /* 1E664 1001E664 01EE7821 */  addu       $t7, $t7, $t6
    /* 1E668 1001E668 91EF28C4 */  lbu        $t7, %lo(D_800428C4)($t7)
    /* 1E66C 1001E66C 11E0000A */  beqz       $t7, .L1001E698
    /* 1E670 1001E670 00000000 */   nop
    /* 1E674 1001E674 8FB90078 */  lw         $t9, 0x78($sp)
    /* 1E678 1001E678 8FB8007C */  lw         $t8, 0x7C($sp)
    /* 1E67C 1001E67C 24050001 */  addiu      $a1, $zero, 0x1
    /* 1E680 1001E680 8F26002C */  lw         $a2, 0x2C($t9)
    /* 1E684 1001E684 24070930 */  addiu      $a3, $zero, 0x930
    /* 1E688 1001E688 03202025 */  or         $a0, $t9, $zero
    /* 1E68C 1001E68C 0C007DE7 */  jal        func_1001F79C
    /* 1E690 1001E690 AFB80010 */   sw        $t8, 0x10($sp)
    /* 1E694 1001E694 AFA2007C */  sw         $v0, 0x7C($sp)
  .L1001E698:
    /* 1E698 1001E698 8FA80088 */  lw         $t0, 0x88($sp)
    /* 1E69C 1001E69C 3C098004 */  lui        $t1, %hi(D_800428C4)
    /* 1E6A0 1001E6A0 AFA00054 */  sw         $zero, 0x54($sp)
    /* 1E6A4 1001E6A4 01284821 */  addu       $t1, $t1, $t0
    /* 1E6A8 1001E6A8 912928C4 */  lbu        $t1, %lo(D_800428C4)($t1)
  .L1001E6AC:
    /* 1E6AC 1001E6AC 8FAA007C */  lw         $t2, 0x7C($sp)
    /* 1E6B0 1001E6B0 254B0008 */  addiu      $t3, $t2, 0x8
    /* 1E6B4 1001E6B4 AFAB007C */  sw         $t3, 0x7C($sp)
    /* 1E6B8 1001E6B8 AFAA0048 */  sw         $t2, 0x48($sp)
    /* 1E6BC 1001E6BC 87AC006E */  lh         $t4, 0x6E($sp)
    /* 1E6C0 1001E6C0 3C0100FF */  lui        $at, (0xFFFFFF >> 16)
    /* 1E6C4 1001E6C4 3421FFFF */  ori        $at, $at, (0xFFFFFF & 0xFFFF)
    /* 1E6C8 1001E6C8 8FAF0048 */  lw         $t7, 0x48($sp)
    /* 1E6CC 1001E6CC 01816824 */  and        $t5, $t4, $at
    /* 1E6D0 1001E6D0 3C010200 */  lui        $at, (0x2000000 >> 16)
    /* 1E6D4 1001E6D4 01A17025 */  or         $t6, $t5, $at
    /* 1E6D8 1001E6D8 ADEE0000 */  sw         $t6, 0x0($t7)
    /* 1E6DC 1001E6DC 8FB80048 */  lw         $t8, 0x48($sp)
    /* 1E6E0 1001E6E0 24190170 */  addiu      $t9, $zero, 0x170
    /* 1E6E4 1001E6E4 AF190004 */  sw         $t9, 0x4($t8)
    /* 1E6E8 1001E6E8 8FA80078 */  lw         $t0, 0x78($sp)
    /* 1E6EC 1001E6EC A7A00076 */  sh         $zero, 0x76($sp)
    /* 1E6F0 1001E6F0 91090008 */  lbu        $t1, 0x8($t0)
    /* 1E6F4 1001E6F4 19200125 */  blez       $t1, .L1001EB8C
    /* 1E6F8 1001E6F8 00000000 */   nop
  .L1001E6FC:
    /* 1E6FC 1001E6FC 8FAA0078 */  lw         $t2, 0x78($sp)
    /* 1E700 1001E700 87AC0076 */  lh         $t4, 0x76($sp)
    /* 1E704 1001E704 8D4B0004 */  lw         $t3, 0x4($t2)
    /* 1E708 1001E708 000C6880 */  sll        $t5, $t4, 2
    /* 1E70C 1001E70C 01AC6821 */  addu       $t5, $t5, $t4
    /* 1E710 1001E710 000D68C0 */  sll        $t5, $t5, 3
    /* 1E714 1001E714 016D7021 */  addu       $t6, $t3, $t5
    /* 1E718 1001E718 AFAE005C */  sw         $t6, 0x5C($sp)
    /* 1E71C 1001E71C 8FB90054 */  lw         $t9, 0x54($sp)
    /* 1E720 1001E720 8FAA005C */  lw         $t2, 0x5C($sp)
    /* 1E724 1001E724 8FAF0078 */  lw         $t7, 0x78($sp)
    /* 1E728 1001E728 0019C080 */  sll        $t8, $t9, 2
    /* 1E72C 1001E72C 8D4C0000 */  lw         $t4, 0x0($t2)
    /* 1E730 1001E730 01F84021 */  addu       $t0, $t7, $t8
    /* 1E734 1001E734 8D090028 */  lw         $t1, 0x28($t0)
    /* 1E738 1001E738 000C5823 */  negu       $t3, $t4
    /* 1E73C 1001E73C 000B6840 */  sll        $t5, $t3, 1
    /* 1E740 1001E740 012D7021 */  addu       $t6, $t1, $t5
    /* 1E744 1001E744 AFAE0068 */  sw         $t6, 0x68($sp)
    /* 1E748 1001E748 8FAF0054 */  lw         $t7, 0x54($sp)
    /* 1E74C 1001E74C 8FAC005C */  lw         $t4, 0x5C($sp)
    /* 1E750 1001E750 8FB90078 */  lw         $t9, 0x78($sp)
    /* 1E754 1001E754 000FC080 */  sll        $t8, $t7, 2
    /* 1E758 1001E758 8D8B0004 */  lw         $t3, 0x4($t4)
    /* 1E75C 1001E75C 03384021 */  addu       $t0, $t9, $t8
    /* 1E760 1001E760 8D0A0028 */  lw         $t2, 0x28($t0)
    /* 1E764 1001E764 000B4823 */  negu       $t1, $t3
    /* 1E768 1001E768 00096840 */  sll        $t5, $t1, 1
    /* 1E76C 1001E76C 014D7021 */  addu       $t6, $t2, $t5
    /* 1E770 1001E770 AFAE0064 */  sw         $t6, 0x64($sp)
    /* 1E774 1001E774 8FAF0088 */  lw         $t7, 0x88($sp)
    /* 1E778 1001E778 3C198004 */  lui        $t9, %hi(D_800428C6)
    /* 1E77C 1001E77C 032FC821 */  addu       $t9, $t9, $t7
    /* 1E780 1001E780 933928C6 */  lbu        $t9, %lo(D_800428C6)($t9)
    /* 1E784 1001E784 1320000E */  beqz       $t9, .L1001E7C0
    /* 1E788 1001E788 00000000 */   nop
    /* 1E78C 1001E78C 3C188004 */  lui        $t8, %hi(D_800428C4)
    /* 1E790 1001E790 030FC021 */  addu       $t8, $t8, $t7
    /* 1E794 1001E794 931828C4 */  lbu        $t8, %lo(D_800428C4)($t8)
    /* 1E798 1001E798 13000009 */  beqz       $t8, .L1001E7C0
    /* 1E79C 1001E79C 00000000 */   nop
    /* 1E7A0 1001E7A0 8FA8005C */  lw         $t0, 0x5C($sp)
    /* 1E7A4 1001E7A4 850C0008 */  lh         $t4, 0x8($t0)
    /* 1E7A8 1001E7A8 000C5823 */  negu       $t3, $t4
    /* 1E7AC 1001E7AC A50B0008 */  sh         $t3, 0x8($t0)
    /* 1E7B0 1001E7B0 8FA9005C */  lw         $t1, 0x5C($sp)
    /* 1E7B4 1001E7B4 852A000A */  lh         $t2, 0xA($t1)
    /* 1E7B8 1001E7B8 000A6823 */  negu       $t5, $t2
    /* 1E7BC 1001E7BC A52D000A */  sh         $t5, 0xA($t1)
  .L1001E7C0:
    /* 1E7C0 1001E7C0 8FAE0068 */  lw         $t6, 0x68($sp)
    /* 1E7C4 1001E7C4 8FB90060 */  lw         $t9, 0x60($sp)
    /* 1E7C8 1001E7C8 15D90009 */  bne        $t6, $t9, .L1001E7F0
    /* 1E7CC 1001E7CC 00000000 */   nop
    /* 1E7D0 1001E7D0 87AF0072 */  lh         $t7, 0x72($sp)
    /* 1E7D4 1001E7D4 A7AF0046 */  sh         $t7, 0x46($sp)
    /* 1E7D8 1001E7D8 87B80074 */  lh         $t8, 0x74($sp)
    /* 1E7DC 1001E7DC A7B80072 */  sh         $t8, 0x72($sp)
    /* 1E7E0 1001E7E0 87AC0046 */  lh         $t4, 0x46($sp)
    /* 1E7E4 1001E7E4 A7AC0074 */  sh         $t4, 0x74($sp)
    /* 1E7E8 1001E7E8 1000000B */  b          .L1001E818
    /* 1E7EC 1001E7EC 00000000 */   nop
  .L1001E7F0:
    /* 1E7F0 1001E7F0 8FA8007C */  lw         $t0, 0x7C($sp)
    /* 1E7F4 1001E7F4 240B00B8 */  addiu      $t3, $zero, 0xB8
    /* 1E7F8 1001E7F8 AFAB0010 */  sw         $t3, 0x10($sp)
    /* 1E7FC 1001E7FC 8FA40078 */  lw         $a0, 0x78($sp)
    /* 1E800 1001E800 8FA50054 */  lw         $a1, 0x54($sp)
    /* 1E804 1001E804 8FA60068 */  lw         $a2, 0x68($sp)
    /* 1E808 1001E808 87A70074 */  lh         $a3, 0x74($sp)
    /* 1E80C 1001E80C 0C007D69 */  jal        func_1001F5A4
    /* 1E810 1001E810 AFA80014 */   sw        $t0, 0x14($sp)
    /* 1E814 1001E814 AFA2007C */  sw         $v0, 0x7C($sp)
  .L1001E818:
    /* 1E818 1001E818 8FAA007C */  lw         $t2, 0x7C($sp)
    /* 1E81C 1001E81C 8FA40078 */  lw         $a0, 0x78($sp)
    /* 1E820 1001E820 8FA5005C */  lw         $a1, 0x5C($sp)
    /* 1E824 1001E824 8FA60054 */  lw         $a2, 0x54($sp)
    /* 1E828 1001E828 87A70072 */  lh         $a3, 0x72($sp)
    /* 1E82C 1001E82C 0C007CA3 */  jal        func_1001F28C
    /* 1E830 1001E830 AFAA0010 */   sw        $t2, 0x10($sp)
    /* 1E834 1001E834 AFA2007C */  sw         $v0, 0x7C($sp)
    /* 1E838 1001E838 8FAD005C */  lw         $t5, 0x5C($sp)
    /* 1E83C 1001E83C 85A90008 */  lh         $t1, 0x8($t5)
    /* 1E840 1001E840 11200023 */  beqz       $t1, .L1001E8D0
    /* 1E844 1001E844 00000000 */   nop
    /* 1E848 1001E848 8FAE007C */  lw         $t6, 0x7C($sp)
    /* 1E84C 1001E84C 25D90008 */  addiu      $t9, $t6, 0x8
    /* 1E850 1001E850 AFB9007C */  sw         $t9, 0x7C($sp)
    /* 1E854 1001E854 AFAE0040 */  sw         $t6, 0x40($sp)
    /* 1E858 1001E858 8FAF005C */  lw         $t7, 0x5C($sp)
    /* 1E85C 1001E85C 8FA80040 */  lw         $t0, 0x40($sp)
    /* 1E860 1001E860 3C010C00 */  lui        $at, (0xC000000 >> 16)
    /* 1E864 1001E864 95F80008 */  lhu        $t8, 0x8($t7)
    /* 1E868 1001E868 330CFFFF */  andi       $t4, $t8, 0xFFFF
    /* 1E86C 1001E86C 01815825 */  or         $t3, $t4, $at
    /* 1E870 1001E870 AD0B0000 */  sw         $t3, 0x0($t0)
    /* 1E874 1001E874 87AA0074 */  lh         $t2, 0x74($sp)
    /* 1E878 1001E878 87AE0072 */  lh         $t6, 0x72($sp)
    /* 1E87C 1001E87C 8FB80040 */  lw         $t8, 0x40($sp)
    /* 1E880 1001E880 314DFFFF */  andi       $t5, $t2, 0xFFFF
    /* 1E884 1001E884 000D4C00 */  sll        $t1, $t5, 16
    /* 1E888 1001E888 31D9FFFF */  andi       $t9, $t6, 0xFFFF
    /* 1E88C 1001E88C 01397825 */  or         $t7, $t1, $t9
    /* 1E890 1001E890 AF0F0004 */  sw         $t7, 0x4($t8)
    /* 1E894 1001E894 8FAC005C */  lw         $t4, 0x5C($sp)
    /* 1E898 1001E898 8D8B0024 */  lw         $t3, 0x24($t4)
    /* 1E89C 1001E89C 1560000C */  bnez       $t3, .L1001E8D0
    /* 1E8A0 1001E8A0 00000000 */   nop
    /* 1E8A4 1001E8A4 8D880020 */  lw         $t0, 0x20($t4)
    /* 1E8A8 1001E8A8 15000009 */  bnez       $t0, .L1001E8D0
    /* 1E8AC 1001E8AC 00000000 */   nop
    /* 1E8B0 1001E8B0 8FAA007C */  lw         $t2, 0x7C($sp)
    /* 1E8B4 1001E8B4 8FA40078 */  lw         $a0, 0x78($sp)
    /* 1E8B8 1001E8B8 8FA50054 */  lw         $a1, 0x54($sp)
    /* 1E8BC 1001E8BC 8FA60064 */  lw         $a2, 0x64($sp)
    /* 1E8C0 1001E8C0 87A70072 */  lh         $a3, 0x72($sp)
    /* 1E8C4 1001E8C4 0C007DE7 */  jal        func_1001F79C
    /* 1E8C8 1001E8C8 AFAA0010 */   sw        $t2, 0x10($sp)
    /* 1E8CC 1001E8CC AFA2007C */  sw         $v0, 0x7C($sp)
  .L1001E8D0:
    /* 1E8D0 1001E8D0 8FAD005C */  lw         $t5, 0x5C($sp)
    /* 1E8D4 1001E8D4 85AE000A */  lh         $t6, 0xA($t5)
    /* 1E8D8 1001E8D8 11C0001C */  beqz       $t6, .L1001E94C
    /* 1E8DC 1001E8DC 00000000 */   nop
    /* 1E8E0 1001E8E0 8FA9007C */  lw         $t1, 0x7C($sp)
    /* 1E8E4 1001E8E4 25390008 */  addiu      $t9, $t1, 0x8
    /* 1E8E8 1001E8E8 AFB9007C */  sw         $t9, 0x7C($sp)
    /* 1E8EC 1001E8EC AFA9003C */  sw         $t1, 0x3C($sp)
    /* 1E8F0 1001E8F0 8FAF005C */  lw         $t7, 0x5C($sp)
    /* 1E8F4 1001E8F4 8FA8003C */  lw         $t0, 0x3C($sp)
    /* 1E8F8 1001E8F8 3C010C00 */  lui        $at, (0xC000000 >> 16)
    /* 1E8FC 1001E8FC 95F8000A */  lhu        $t8, 0xA($t7)
    /* 1E900 1001E900 330BFFFF */  andi       $t3, $t8, 0xFFFF
    /* 1E904 1001E904 01616025 */  or         $t4, $t3, $at
    /* 1E908 1001E908 AD0C0000 */  sw         $t4, 0x0($t0)
    /* 1E90C 1001E90C 87AA0072 */  lh         $t2, 0x72($sp)
    /* 1E910 1001E910 87A90074 */  lh         $t1, 0x74($sp)
    /* 1E914 1001E914 8FB8003C */  lw         $t8, 0x3C($sp)
    /* 1E918 1001E918 314DFFFF */  andi       $t5, $t2, 0xFFFF
    /* 1E91C 1001E91C 000D7400 */  sll        $t6, $t5, 16
    /* 1E920 1001E920 3139FFFF */  andi       $t9, $t1, 0xFFFF
    /* 1E924 1001E924 01D97825 */  or         $t7, $t6, $t9
    /* 1E928 1001E928 AF0F0004 */  sw         $t7, 0x4($t8)
    /* 1E92C 1001E92C 8FAB007C */  lw         $t3, 0x7C($sp)
    /* 1E930 1001E930 8FA40078 */  lw         $a0, 0x78($sp)
    /* 1E934 1001E934 8FA50054 */  lw         $a1, 0x54($sp)
    /* 1E938 1001E938 8FA60068 */  lw         $a2, 0x68($sp)
    /* 1E93C 1001E93C 87A70074 */  lh         $a3, 0x74($sp)
    /* 1E940 1001E940 0C007DE7 */  jal        func_1001F79C
    /* 1E944 1001E944 AFAB0010 */   sw        $t3, 0x10($sp)
    /* 1E948 1001E948 AFA2007C */  sw         $v0, 0x7C($sp)
  .L1001E94C:
    /* 1E94C 1001E94C 8FAC005C */  lw         $t4, 0x5C($sp)
    /* 1E950 1001E950 8D880020 */  lw         $t0, 0x20($t4)
    /* 1E954 1001E954 11000008 */  beqz       $t0, .L1001E978
    /* 1E958 1001E958 00000000 */   nop
    /* 1E95C 1001E95C 8FAA005C */  lw         $t2, 0x5C($sp)
    /* 1E960 1001E960 8FA50054 */  lw         $a1, 0x54($sp)
    /* 1E964 1001E964 87A60072 */  lh         $a2, 0x72($sp)
    /* 1E968 1001E968 8FA7007C */  lw         $a3, 0x7C($sp)
    /* 1E96C 1001E96C 0C007E5E */  jal        func_1001F978
    /* 1E970 1001E970 8D440020 */   lw        $a0, 0x20($t2)
    /* 1E974 1001E974 AFA2007C */  sw         $v0, 0x7C($sp)
  .L1001E978:
    /* 1E978 1001E978 8FAD005C */  lw         $t5, 0x5C($sp)
    /* 1E97C 1001E97C 8DA90024 */  lw         $t1, 0x24($t5)
    /* 1E980 1001E980 15200009 */  bnez       $t1, .L1001E9A8
    /* 1E984 1001E984 00000000 */   nop
    /* 1E988 1001E988 8FAE007C */  lw         $t6, 0x7C($sp)
    /* 1E98C 1001E98C 8FA40078 */  lw         $a0, 0x78($sp)
    /* 1E990 1001E990 8FA50054 */  lw         $a1, 0x54($sp)
    /* 1E994 1001E994 8FA60064 */  lw         $a2, 0x64($sp)
    /* 1E998 1001E998 87A70072 */  lh         $a3, 0x72($sp)
    /* 1E99C 1001E99C 0C007DE7 */  jal        func_1001F79C
    /* 1E9A0 1001E9A0 AFAE0010 */   sw        $t6, 0x10($sp)
    /* 1E9A4 1001E9A4 AFA2007C */  sw         $v0, 0x7C($sp)
  .L1001E9A8:
    /* 1E9A8 1001E9A8 8FB9005C */  lw         $t9, 0x5C($sp)
    /* 1E9AC 1001E9AC 872F000C */  lh         $t7, 0xC($t9)
    /* 1E9B0 1001E9B0 11E00062 */  beqz       $t7, .L1001EB3C
    /* 1E9B4 1001E9B4 00000000 */   nop
    /* 1E9B8 1001E9B8 8FB80088 */  lw         $t8, 0x88($sp)
    /* 1E9BC 1001E9BC 3C0B8004 */  lui        $t3, %hi(D_800428C4)
    /* 1E9C0 1001E9C0 01785821 */  addu       $t3, $t3, $t8
    /* 1E9C4 1001E9C4 916B28C4 */  lbu        $t3, %lo(D_800428C4)($t3)
    /* 1E9C8 1001E9C8 11600016 */  beqz       $t3, .L1001EA24
    /* 1E9CC 1001E9CC 00000000 */   nop
    /* 1E9D0 1001E9D0 8FAC007C */  lw         $t4, 0x7C($sp)
    /* 1E9D4 1001E9D4 25880008 */  addiu      $t0, $t4, 0x8
    /* 1E9D8 1001E9D8 AFA8007C */  sw         $t0, 0x7C($sp)
    /* 1E9DC 1001E9DC AFAC0038 */  sw         $t4, 0x38($sp)
    /* 1E9E0 1001E9E0 8FAA005C */  lw         $t2, 0x5C($sp)
    /* 1E9E4 1001E9E4 8FB90038 */  lw         $t9, 0x38($sp)
    /* 1E9E8 1001E9E8 3C010C00 */  lui        $at, (0xC000000 >> 16)
    /* 1E9EC 1001E9EC 954D000C */  lhu        $t5, 0xC($t2)
    /* 1E9F0 1001E9F0 31A9FFFF */  andi       $t1, $t5, 0xFFFF
    /* 1E9F4 1001E9F4 01217025 */  or         $t6, $t1, $at
    /* 1E9F8 1001E9F8 AF2E0000 */  sw         $t6, 0x0($t9)
    /* 1E9FC 1001E9FC 87AF0072 */  lh         $t7, 0x72($sp)
    /* 1EA00 1001EA00 87AC006E */  lh         $t4, 0x6E($sp)
    /* 1EA04 1001EA04 8FAD0038 */  lw         $t5, 0x38($sp)
    /* 1EA08 1001EA08 31F8FFFF */  andi       $t8, $t7, 0xFFFF
    /* 1EA0C 1001EA0C 00185C00 */  sll        $t3, $t8, 16
    /* 1EA10 1001EA10 3188FFFF */  andi       $t0, $t4, 0xFFFF
    /* 1EA14 1001EA14 01685025 */  or         $t2, $t3, $t0
    /* 1EA18 1001EA18 ADAA0004 */  sw         $t2, 0x4($t5)
    /* 1EA1C 1001EA1C 10000047 */  b          .L1001EB3C
    /* 1EA20 1001EA20 00000000 */   nop
  .L1001EA24:
    /* 1EA24 1001EA24 8FA9005C */  lw         $t1, 0x5C($sp)
    /* 1EA28 1001EA28 3C018003 */  lui        $at, %hi(D_8002C7A0)
    /* 1EA2C 1001EA2C C428C7A0 */  lwc1       $f8, %lo(D_8002C7A0)($at)
    /* 1EA30 1001EA30 852E000C */  lh         $t6, 0xC($t1)
    /* 1EA34 1001EA34 240F0001 */  addiu      $t7, $zero, 0x1
    /* 1EA38 1001EA38 448E2000 */  mtc1       $t6, $f4
    /* 1EA3C 1001EA3C 00000000 */  nop
    /* 1EA40 1001EA40 468021A0 */  cvt.s.w    $f6, $f4
    /* 1EA44 1001EA44 46083282 */  mul.s      $f10, $f6, $f8
    /* 1EA48 1001EA48 4459F800 */  cfc1       $t9, $31
    /* 1EA4C 1001EA4C 44CFF800 */  ctc1       $t7, $31
    /* 1EA50 1001EA50 00000000 */  nop
    /* 1EA54 1001EA54 46005424 */  cvt.w.s    $f16, $f10
    /* 1EA58 1001EA58 444FF800 */  cfc1       $t7, $31
    /* 1EA5C 1001EA5C 00000000 */  nop
    /* 1EA60 1001EA60 31E10004 */  andi       $at, $t7, 0x4
    /* 1EA64 1001EA64 31EF0078 */  andi       $t7, $t7, 0x78
    /* 1EA68 1001EA68 11E00014 */  beqz       $t7, .L1001EABC
    /* 1EA6C 1001EA6C 00000000 */   nop
    /* 1EA70 1001EA70 3C014F00 */  lui        $at, (0x4F000000 >> 16)
    /* 1EA74 1001EA74 44818000 */  mtc1       $at, $f16
    /* 1EA78 1001EA78 240F0001 */  addiu      $t7, $zero, 0x1
    /* 1EA7C 1001EA7C 46105401 */  sub.s      $f16, $f10, $f16
    /* 1EA80 1001EA80 44CFF800 */  ctc1       $t7, $31
    /* 1EA84 1001EA84 00000000 */  nop
    /* 1EA88 1001EA88 46008424 */  cvt.w.s    $f16, $f16
    /* 1EA8C 1001EA8C 444FF800 */  cfc1       $t7, $31
    /* 1EA90 1001EA90 00000000 */  nop
    /* 1EA94 1001EA94 31E10004 */  andi       $at, $t7, 0x4
    /* 1EA98 1001EA98 31EF0078 */  andi       $t7, $t7, 0x78
    /* 1EA9C 1001EA9C 15E00005 */  bnez       $t7, .L1001EAB4
    /* 1EAA0 1001EAA0 00000000 */   nop
    /* 1EAA4 1001EAA4 440F8000 */  mfc1       $t7, $f16
    /* 1EAA8 1001EAA8 3C018000 */  lui        $at, (0x80000000 >> 16)
    /* 1EAAC 1001EAAC 10000007 */  b          .L1001EACC
    /* 1EAB0 1001EAB0 01E17825 */   or        $t7, $t7, $at
  .L1001EAB4:
    /* 1EAB4 1001EAB4 10000005 */  b          .L1001EACC
    /* 1EAB8 1001EAB8 240FFFFF */   addiu     $t7, $zero, -0x1
  .L1001EABC:
    /* 1EABC 1001EABC 440F8000 */  mfc1       $t7, $f16
    /* 1EAC0 1001EAC0 00000000 */  nop
    /* 1EAC4 1001EAC4 05E0FFFB */  bltz       $t7, .L1001EAB4
    /* 1EAC8 1001EAC8 00000000 */   nop
  .L1001EACC:
    /* 1EACC 1001EACC 44D9F800 */  ctc1       $t9, $31
    /* 1EAD0 1001EAD0 AFAF0034 */  sw         $t7, 0x34($sp)
    /* 1EAD4 1001EAD4 00000000 */  nop
    /* 1EAD8 1001EAD8 8FB80034 */  lw         $t8, 0x34($sp)
    /* 1EADC 1001EADC 34018000 */  ori        $at, $zero, 0x8000
    /* 1EAE0 1001EAE0 0301082B */  sltu       $at, $t8, $at
    /* 1EAE4 1001EAE4 14200003 */  bnez       $at, .L1001EAF4
    /* 1EAE8 1001EAE8 00000000 */   nop
    /* 1EAEC 1001EAEC 240C7FFF */  addiu      $t4, $zero, 0x7FFF
    /* 1EAF0 1001EAF0 AFAC0034 */  sw         $t4, 0x34($sp)
  .L1001EAF4:
    /* 1EAF4 1001EAF4 8FAB007C */  lw         $t3, 0x7C($sp)
    /* 1EAF8 1001EAF8 25680008 */  addiu      $t0, $t3, 0x8
    /* 1EAFC 1001EAFC AFA8007C */  sw         $t0, 0x7C($sp)
    /* 1EB00 1001EB00 AFAB0030 */  sw         $t3, 0x30($sp)
    /* 1EB04 1001EB04 97AA0036 */  lhu        $t2, 0x36($sp)
    /* 1EB08 1001EB08 8FAE0030 */  lw         $t6, 0x30($sp)
    /* 1EB0C 1001EB0C 3C010C00 */  lui        $at, (0xC000000 >> 16)
    /* 1EB10 1001EB10 314DFFFF */  andi       $t5, $t2, 0xFFFF
    /* 1EB14 1001EB14 01A14825 */  or         $t1, $t5, $at
    /* 1EB18 1001EB18 ADC90000 */  sw         $t1, 0x0($t6)
    /* 1EB1C 1001EB1C 87B90072 */  lh         $t9, 0x72($sp)
    /* 1EB20 1001EB20 87AC006E */  lh         $t4, 0x6E($sp)
    /* 1EB24 1001EB24 8FAA0030 */  lw         $t2, 0x30($sp)
    /* 1EB28 1001EB28 332FFFFF */  andi       $t7, $t9, 0xFFFF
    /* 1EB2C 1001EB2C 000FC400 */  sll        $t8, $t7, 16
    /* 1EB30 1001EB30 318BFFFF */  andi       $t3, $t4, 0xFFFF
    /* 1EB34 1001EB34 030B4025 */  or         $t0, $t8, $t3
    /* 1EB38 1001EB38 AD480004 */  sw         $t0, 0x4($t2)
  .L1001EB3C:
    /* 1EB3C 1001EB3C 8FA90054 */  lw         $t1, 0x54($sp)
    /* 1EB40 1001EB40 8FAD0078 */  lw         $t5, 0x78($sp)
    /* 1EB44 1001EB44 8FAC005C */  lw         $t4, 0x5C($sp)
    /* 1EB48 1001EB48 00097080 */  sll        $t6, $t1, 2
    /* 1EB4C 1001EB4C 01AEC821 */  addu       $t9, $t5, $t6
    /* 1EB50 1001EB50 8D980004 */  lw         $t8, 0x4($t4)
    /* 1EB54 1001EB54 8F2F0028 */  lw         $t7, 0x28($t9)
    /* 1EB58 1001EB58 00185840 */  sll        $t3, $t8, 1
    /* 1EB5C 1001EB5C 01EB4021 */  addu       $t0, $t7, $t3
    /* 1EB60 1001EB60 AFA80060 */  sw         $t0, 0x60($sp)
    /* 1EB64 1001EB64 87AA0076 */  lh         $t2, 0x76($sp)
    /* 1EB68 1001EB68 8FB90078 */  lw         $t9, 0x78($sp)
    /* 1EB6C 1001EB6C 25490001 */  addiu      $t1, $t2, 0x1
    /* 1EB70 1001EB70 A7A90076 */  sh         $t1, 0x76($sp)
    /* 1EB74 1001EB74 932C0008 */  lbu        $t4, 0x8($t9)
    /* 1EB78 1001EB78 00096C00 */  sll        $t5, $t1, 16
    /* 1EB7C 1001EB7C 000D7403 */  sra        $t6, $t5, 16
    /* 1EB80 1001EB80 01CC082A */  slt        $at, $t6, $t4
    /* 1EB84 1001EB84 1420FEDD */  bnez       $at, .L1001E6FC
    /* 1EB88 1001EB88 00000000 */   nop
  .L1001EB8C:
    /* 1EB8C 1001EB8C 8FB80088 */  lw         $t8, 0x88($sp)
    /* 1EB90 1001EB90 3C0F8004 */  lui        $t7, %hi(D_800428C4)
    /* 1EB94 1001EB94 01F87821 */  addu       $t7, $t7, $t8
    /* 1EB98 1001EB98 91EF28C4 */  lbu        $t7, %lo(D_800428C4)($t7)
    /* 1EB9C 1001EB9C 11E00035 */  beqz       $t7, .L1001EC74
    /* 1EBA0 1001EBA0 00000000 */   nop
    /* 1EBA4 1001EBA4 8FAB0054 */  lw         $t3, 0x54($sp)
    /* 1EBA8 1001EBA8 15600032 */  bnez       $t3, .L1001EC74
    /* 1EBAC 1001EBAC 00000000 */   nop
    /* 1EBB0 1001EBB0 8FA80078 */  lw         $t0, 0x78($sp)
    /* 1EBB4 1001EBB4 8FA9007C */  lw         $t1, 0x7C($sp)
    /* 1EBB8 1001EBB8 240A00B8 */  addiu      $t2, $zero, 0xB8
    /* 1EBBC 1001EBBC 8D06002C */  lw         $a2, 0x2C($t0)
    /* 1EBC0 1001EBC0 AFAA0010 */  sw         $t2, 0x10($sp)
    /* 1EBC4 1001EBC4 24050001 */  addiu      $a1, $zero, 0x1
    /* 1EBC8 1001EBC8 87A70070 */  lh         $a3, 0x70($sp)
    /* 1EBCC 1001EBCC 01002025 */  or         $a0, $t0, $zero
    /* 1EBD0 1001EBD0 0C007D69 */  jal        func_1001F5A4
    /* 1EBD4 1001EBD4 AFA90014 */   sw        $t1, 0x14($sp)
    /* 1EBD8 1001EBD8 AFA2007C */  sw         $v0, 0x7C($sp)
    /* 1EBDC 1001EBDC 8FAD0088 */  lw         $t5, 0x88($sp)
    /* 1EBE0 1001EBE0 3C198004 */  lui        $t9, %hi(D_800428C6)
    /* 1EBE4 1001EBE4 032DC821 */  addu       $t9, $t9, $t5
    /* 1EBE8 1001EBE8 933928C6 */  lbu        $t9, %lo(D_800428C6)($t9)
    /* 1EBEC 1001EBEC 13200011 */  beqz       $t9, .L1001EC34
    /* 1EBF0 1001EBF0 00000000 */   nop
    /* 1EBF4 1001EBF4 8FAE007C */  lw         $t6, 0x7C($sp)
    /* 1EBF8 1001EBF8 25CC0008 */  addiu      $t4, $t6, 0x8
    /* 1EBFC 1001EBFC AFAC007C */  sw         $t4, 0x7C($sp)
    /* 1EC00 1001EC00 AFAE002C */  sw         $t6, 0x2C($sp)
    /* 1EC04 1001EC04 8FAF002C */  lw         $t7, 0x2C($sp)
    /* 1EC08 1001EC08 3C180C00 */  lui        $t8, (0xC005A82 >> 16)
    /* 1EC0C 1001EC0C 37185A82 */  ori        $t8, $t8, (0xC005A82 & 0xFFFF)
    /* 1EC10 1001EC10 ADF80000 */  sw         $t8, 0x0($t7)
    /* 1EC14 1001EC14 87AB006E */  lh         $t3, 0x6E($sp)
    /* 1EC18 1001EC18 8FAD002C */  lw         $t5, 0x2C($sp)
    /* 1EC1C 1001EC1C 3168FFFF */  andi       $t0, $t3, 0xFFFF
    /* 1EC20 1001EC20 00085400 */  sll        $t2, $t0, 16
    /* 1EC24 1001EC24 35490650 */  ori        $t1, $t2, 0x650
    /* 1EC28 1001EC28 ADA90004 */  sw         $t1, 0x4($t5)
    /* 1EC2C 1001EC2C 1000000F */  b          .L1001EC6C
    /* 1EC30 1001EC30 00000000 */   nop
  .L1001EC34:
    /* 1EC34 1001EC34 8FB9007C */  lw         $t9, 0x7C($sp)
    /* 1EC38 1001EC38 272E0008 */  addiu      $t6, $t9, 0x8
    /* 1EC3C 1001EC3C AFAE007C */  sw         $t6, 0x7C($sp)
    /* 1EC40 1001EC40 AFB90028 */  sw         $t9, 0x28($sp)
    /* 1EC44 1001EC44 8FB80028 */  lw         $t8, 0x28($sp)
    /* 1EC48 1001EC48 3C0C0C00 */  lui        $t4, (0xC005A82 >> 16)
    /* 1EC4C 1001EC4C 358C5A82 */  ori        $t4, $t4, (0xC005A82 & 0xFFFF)
    /* 1EC50 1001EC50 AF0C0000 */  sw         $t4, 0x0($t8)
    /* 1EC54 1001EC54 87AF006E */  lh         $t7, 0x6E($sp)
    /* 1EC58 1001EC58 8FA90028 */  lw         $t1, 0x28($sp)
    /* 1EC5C 1001EC5C 31EBFFFF */  andi       $t3, $t7, 0xFFFF
    /* 1EC60 1001EC60 000B4400 */  sll        $t0, $t3, 16
    /* 1EC64 1001EC64 350A04E0 */  ori        $t2, $t0, 0x4E0
    /* 1EC68 1001EC68 AD2A0004 */  sw         $t2, 0x4($t1)
  .L1001EC6C:
    /* 1EC6C 1001EC6C 10000001 */  b          .L1001EC74
    /* 1EC70 1001EC70 00000000 */   nop
  .L1001EC74:
    /* 1EC74 1001EC74 8FAD007C */  lw         $t5, 0x7C($sp)
    /* 1EC78 1001EC78 25B90008 */  addiu      $t9, $t5, 0x8
    /* 1EC7C 1001EC7C AFB9007C */  sw         $t9, 0x7C($sp)
    /* 1EC80 1001EC80 AFAD0024 */  sw         $t5, 0x24($sp)
    /* 1EC84 1001EC84 87AE006E */  lh         $t6, 0x6E($sp)
    /* 1EC88 1001EC88 3C0100FF */  lui        $at, (0xFFFFFF >> 16)
    /* 1EC8C 1001EC8C 3421FFFF */  ori        $at, $at, (0xFFFFFF & 0xFFFF)
    /* 1EC90 1001EC90 8FAF0024 */  lw         $t7, 0x24($sp)
    /* 1EC94 1001EC94 01C16024 */  and        $t4, $t6, $at
    /* 1EC98 1001EC98 3C010A00 */  lui        $at, (0xA000000 >> 16)
    /* 1EC9C 1001EC9C 0181C025 */  or         $t8, $t4, $at
    /* 1ECA0 1001ECA0 ADF80000 */  sw         $t8, 0x0($t7)
    /* 1ECA4 1001ECA4 8FA80024 */  lw         $t0, 0x24($sp)
    /* 1ECA8 1001ECA8 3C0B07C0 */  lui        $t3, (0x7C00170 >> 16)
    /* 1ECAC 1001ECAC 356B0170 */  ori        $t3, $t3, (0x7C00170 & 0xFFFF)
    /* 1ECB0 1001ECB0 AD0B0004 */  sw         $t3, 0x4($t0)
    /* 1ECB4 1001ECB4 8FA90054 */  lw         $t1, 0x54($sp)
    /* 1ECB8 1001ECB8 8FAA0078 */  lw         $t2, 0x78($sp)
    /* 1ECBC 1001ECBC 00096880 */  sll        $t5, $t1, 2
    /* 1ECC0 1001ECC0 014DC821 */  addu       $t9, $t2, $t5
    /* 1ECC4 1001ECC4 8F2E0028 */  lw         $t6, 0x28($t9)
    /* 1ECC8 1001ECC8 25CC0170 */  addiu      $t4, $t6, 0x170
    /* 1ECCC 1001ECCC AF2C0028 */  sw         $t4, 0x28($t9)
    /* 1ECD0 1001ECD0 8FB80078 */  lw         $t8, 0x78($sp)
    /* 1ECD4 1001ECD4 8FAF0054 */  lw         $t7, 0x54($sp)
    /* 1ECD8 1001ECD8 8F0D0000 */  lw         $t5, 0x0($t8)
    /* 1ECDC 1001ECDC 000F5880 */  sll        $t3, $t7, 2
    /* 1ECE0 1001ECE0 030B4021 */  addu       $t0, $t8, $t3
    /* 1ECE4 1001ECE4 8D0A0020 */  lw         $t2, 0x20($t0)
    /* 1ECE8 1001ECE8 8D090028 */  lw         $t1, 0x28($t0)
    /* 1ECEC 1001ECEC 000D7040 */  sll        $t6, $t5, 1
    /* 1ECF0 1001ECF0 014E6021 */  addu       $t4, $t2, $t6
    /* 1ECF4 1001ECF4 0189082B */  sltu       $at, $t4, $t1
    /* 1ECF8 1001ECF8 1020000A */  beqz       $at, .L1001ED24
    /* 1ECFC 1001ECFC 00000000 */   nop
    /* 1ED00 1001ED00 8FB90078 */  lw         $t9, 0x78($sp)
    /* 1ED04 1001ED04 8FAF0054 */  lw         $t7, 0x54($sp)
    /* 1ED08 1001ED08 8F2D0000 */  lw         $t5, 0x0($t9)
    /* 1ED0C 1001ED0C 000F5880 */  sll        $t3, $t7, 2
    /* 1ED10 1001ED10 032B4021 */  addu       $t0, $t9, $t3
    /* 1ED14 1001ED14 8D180028 */  lw         $t8, 0x28($t0)
    /* 1ED18 1001ED18 000D5040 */  sll        $t2, $t5, 1
    /* 1ED1C 1001ED1C 030A7023 */  subu       $t6, $t8, $t2
    /* 1ED20 1001ED20 AD0E0028 */  sw         $t6, 0x28($t0)
  .L1001ED24:
    /* 1ED24 1001ED24 8FAF0088 */  lw         $t7, 0x88($sp)
    /* 1ED28 1001ED28 3C0B8004 */  lui        $t3, %hi(D_800428C4)
    /* 1ED2C 1001ED2C 8FA90054 */  lw         $t1, 0x54($sp)
    /* 1ED30 1001ED30 016F5821 */  addu       $t3, $t3, $t7
    /* 1ED34 1001ED34 916B28C4 */  lbu        $t3, %lo(D_800428C4)($t3)
    /* 1ED38 1001ED38 252C0001 */  addiu      $t4, $t1, 0x1
    /* 1ED3C 1001ED3C AFAC0054 */  sw         $t4, 0x54($sp)
    /* 1ED40 1001ED40 016C082B */  sltu       $at, $t3, $t4
    /* 1ED44 1001ED44 1020FE59 */  beqz       $at, .L1001E6AC
    /* 1ED48 1001ED48 00000000 */   nop
    /* 1ED4C 1001ED4C 10000003 */  b          .L1001ED5C
    /* 1ED50 1001ED50 8FA2007C */   lw        $v0, 0x7C($sp)
    /* 1ED54 1001ED54 10000001 */  b          .L1001ED5C
    /* 1ED58 1001ED58 00000000 */   nop
  .L1001ED5C:
    /* 1ED5C 1001ED5C 8FBF001C */  lw         $ra, 0x1C($sp)
    /* 1ED60 1001ED60 27BD0080 */  addiu      $sp, $sp, 0x80
    /* 1ED64 1001ED64 03E00008 */  jr         $ra
    /* 1ED68 1001ED68 00000000 */   nop
endlabel func_1001E530
