nonmatching func_1001F5A4, 0x1F8

glabel func_1001F5A4
    /* 1F5A4 1001F5A4 27BDFFC8 */  addiu      $sp, $sp, -0x38
    /* 1F5A8 1001F5A8 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 1F5AC 1001F5AC AFA40038 */  sw         $a0, 0x38($sp)
    /* 1F5B0 1001F5B0 AFA5003C */  sw         $a1, 0x3C($sp)
    /* 1F5B4 1001F5B4 AFA60040 */  sw         $a2, 0x40($sp)
    /* 1F5B8 1001F5B8 AFA70044 */  sw         $a3, 0x44($sp)
    /* 1F5BC 1001F5BC 8FAE004C */  lw         $t6, 0x4C($sp)
    /* 1F5C0 1001F5C0 AFAE0034 */  sw         $t6, 0x34($sp)
    /* 1F5C4 1001F5C4 8FAF0038 */  lw         $t7, 0x38($sp)
    /* 1F5C8 1001F5C8 8FB8003C */  lw         $t8, 0x3C($sp)
    /* 1F5CC 1001F5CC 8DEA0000 */  lw         $t2, 0x0($t7)
    /* 1F5D0 1001F5D0 0018C880 */  sll        $t9, $t8, 2
    /* 1F5D4 1001F5D4 01F94021 */  addu       $t0, $t7, $t9
    /* 1F5D8 1001F5D8 8D090020 */  lw         $t1, 0x20($t0)
    /* 1F5DC 1001F5DC 000A5840 */  sll        $t3, $t2, 1
    /* 1F5E0 1001F5E0 012B6021 */  addu       $t4, $t1, $t3
    /* 1F5E4 1001F5E4 AFAC0024 */  sw         $t4, 0x24($sp)
    /* 1F5E8 1001F5E8 8FB8003C */  lw         $t8, 0x3C($sp)
    /* 1F5EC 1001F5EC 8FAE0038 */  lw         $t6, 0x38($sp)
    /* 1F5F0 1001F5F0 8FAD0040 */  lw         $t5, 0x40($sp)
    /* 1F5F4 1001F5F4 0018C880 */  sll        $t9, $t8, 2
    /* 1F5F8 1001F5F8 01D94021 */  addu       $t0, $t6, $t9
    /* 1F5FC 1001F5FC 8D0F0020 */  lw         $t7, 0x20($t0)
    /* 1F600 1001F600 01AF082B */  sltu       $at, $t5, $t7
    /* 1F604 1001F604 10200007 */  beqz       $at, .L1001F624
    /* 1F608 1001F608 00000000 */   nop
    /* 1F60C 1001F60C 8FA90038 */  lw         $t1, 0x38($sp)
    /* 1F610 1001F610 8FAA0040 */  lw         $t2, 0x40($sp)
    /* 1F614 1001F614 8D2B0000 */  lw         $t3, 0x0($t1)
    /* 1F618 1001F618 000B6040 */  sll        $t4, $t3, 1
    /* 1F61C 1001F61C 014CC021 */  addu       $t8, $t2, $t4
    /* 1F620 1001F620 AFB80040 */  sw         $t8, 0x40($sp)
  .L1001F624:
    /* 1F624 1001F624 8FAE0048 */  lw         $t6, 0x48($sp)
    /* 1F628 1001F628 8FA80040 */  lw         $t0, 0x40($sp)
    /* 1F62C 1001F62C 000EC840 */  sll        $t9, $t6, 1
    /* 1F630 1001F630 03286821 */  addu       $t5, $t9, $t0
    /* 1F634 1001F634 AFAD0028 */  sw         $t5, 0x28($sp)
    /* 1F638 1001F638 8FAF0028 */  lw         $t7, 0x28($sp)
    /* 1F63C 1001F63C 8FA90024 */  lw         $t1, 0x24($sp)
    /* 1F640 1001F640 012F082B */  sltu       $at, $t1, $t7
    /* 1F644 1001F644 1020003A */  beqz       $at, .L1001F730
    /* 1F648 1001F648 00000000 */   nop
    /* 1F64C 1001F64C 8FAB0028 */  lw         $t3, 0x28($sp)
    /* 1F650 1001F650 8FAA0024 */  lw         $t2, 0x24($sp)
    /* 1F654 1001F654 016A6023 */  subu       $t4, $t3, $t2
    /* 1F658 1001F658 000CC043 */  sra        $t8, $t4, 1
    /* 1F65C 1001F65C AFB80030 */  sw         $t8, 0x30($sp)
    /* 1F660 1001F660 8FAE0024 */  lw         $t6, 0x24($sp)
    /* 1F664 1001F664 8FB90040 */  lw         $t9, 0x40($sp)
    /* 1F668 1001F668 01D94023 */  subu       $t0, $t6, $t9
    /* 1F66C 1001F66C 00086843 */  sra        $t5, $t0, 1
    /* 1F670 1001F670 AFAD002C */  sw         $t5, 0x2C($sp)
    /* 1F674 1001F674 8FAF0034 */  lw         $t7, 0x34($sp)
    /* 1F678 1001F678 25E90008 */  addiu      $t1, $t7, 0x8
    /* 1F67C 1001F67C AFA90034 */  sw         $t1, 0x34($sp)
    /* 1F680 1001F680 AFAF0020 */  sw         $t7, 0x20($sp)
    /* 1F684 1001F684 8FAB002C */  lw         $t3, 0x2C($sp)
    /* 1F688 1001F688 8FB90044 */  lw         $t9, 0x44($sp)
    /* 1F68C 1001F68C 8FAF0020 */  lw         $t7, 0x20($sp)
    /* 1F690 1001F690 000B5040 */  sll        $t2, $t3, 1
    /* 1F694 1001F694 314C0FFF */  andi       $t4, $t2, 0xFFF
    /* 1F698 1001F698 000CC300 */  sll        $t8, $t4, 12
    /* 1F69C 1001F69C 3C010400 */  lui        $at, (0x4000000 >> 16)
    /* 1F6A0 1001F6A0 03017025 */  or         $t6, $t8, $at
    /* 1F6A4 1001F6A4 33280FFF */  andi       $t0, $t9, 0xFFF
    /* 1F6A8 1001F6A8 01C86825 */  or         $t5, $t6, $t0
    /* 1F6AC 1001F6AC ADED0000 */  sw         $t5, 0x0($t7)
    /* 1F6B0 1001F6B0 0C008CF0 */  jal        osVirtualToPhysical
    /* 1F6B4 1001F6B4 8FA40040 */   lw        $a0, 0x40($sp)
    /* 1F6B8 1001F6B8 8FA90020 */  lw         $t1, 0x20($sp)
    /* 1F6BC 1001F6BC AD220004 */  sw         $v0, 0x4($t1)
    /* 1F6C0 1001F6C0 8FAB0034 */  lw         $t3, 0x34($sp)
    /* 1F6C4 1001F6C4 256A0008 */  addiu      $t2, $t3, 0x8
    /* 1F6C8 1001F6C8 AFAA0034 */  sw         $t2, 0x34($sp)
    /* 1F6CC 1001F6CC AFAB001C */  sw         $t3, 0x1C($sp)
    /* 1F6D0 1001F6D0 8FB8002C */  lw         $t8, 0x2C($sp)
    /* 1F6D4 1001F6D4 8FAD0030 */  lw         $t5, 0x30($sp)
    /* 1F6D8 1001F6D8 8FAC0044 */  lw         $t4, 0x44($sp)
    /* 1F6DC 1001F6DC 0018C840 */  sll        $t9, $t8, 1
    /* 1F6E0 1001F6E0 000D7840 */  sll        $t7, $t5, 1
    /* 1F6E4 1001F6E4 31E90FFF */  andi       $t1, $t7, 0xFFF
    /* 1F6E8 1001F6E8 01997021 */  addu       $t6, $t4, $t9
    /* 1F6EC 1001F6EC 8FAC001C */  lw         $t4, 0x1C($sp)
    /* 1F6F0 1001F6F0 00095B00 */  sll        $t3, $t1, 12
    /* 1F6F4 1001F6F4 3C010400 */  lui        $at, (0x4000000 >> 16)
    /* 1F6F8 1001F6F8 01615025 */  or         $t2, $t3, $at
    /* 1F6FC 1001F6FC 31C80FFF */  andi       $t0, $t6, 0xFFF
    /* 1F700 1001F700 0148C025 */  or         $t8, $t2, $t0
    /* 1F704 1001F704 AD980000 */  sw         $t8, 0x0($t4)
    /* 1F708 1001F708 8FAE003C */  lw         $t6, 0x3C($sp)
    /* 1F70C 1001F70C 8FB90038 */  lw         $t9, 0x38($sp)
    /* 1F710 1001F710 000E6880 */  sll        $t5, $t6, 2
    /* 1F714 1001F714 032D7821 */  addu       $t7, $t9, $t5
    /* 1F718 1001F718 0C008CF0 */  jal        osVirtualToPhysical
    /* 1F71C 1001F71C 8DE40020 */   lw        $a0, 0x20($t7)
    /* 1F720 1001F720 8FA9001C */  lw         $t1, 0x1C($sp)
    /* 1F724 1001F724 AD220004 */  sw         $v0, 0x4($t1)
    /* 1F728 1001F728 10000014 */  b          .L1001F77C
    /* 1F72C 1001F72C 00000000 */   nop
  .L1001F730:
    /* 1F730 1001F730 8FAB0034 */  lw         $t3, 0x34($sp)
    /* 1F734 1001F734 256A0008 */  addiu      $t2, $t3, 0x8
    /* 1F738 1001F738 AFAA0034 */  sw         $t2, 0x34($sp)
    /* 1F73C 1001F73C AFAB0018 */  sw         $t3, 0x18($sp)
    /* 1F740 1001F740 8FA80048 */  lw         $t0, 0x48($sp)
    /* 1F744 1001F744 8FAD0044 */  lw         $t5, 0x44($sp)
    /* 1F748 1001F748 8FAB0018 */  lw         $t3, 0x18($sp)
    /* 1F74C 1001F74C 0008C040 */  sll        $t8, $t0, 1
    /* 1F750 1001F750 330C0FFF */  andi       $t4, $t8, 0xFFF
    /* 1F754 1001F754 000C7300 */  sll        $t6, $t4, 12
    /* 1F758 1001F758 3C010400 */  lui        $at, (0x4000000 >> 16)
    /* 1F75C 1001F75C 01C1C825 */  or         $t9, $t6, $at
    /* 1F760 1001F760 31AF0FFF */  andi       $t7, $t5, 0xFFF
    /* 1F764 1001F764 032F4825 */  or         $t1, $t9, $t7
    /* 1F768 1001F768 AD690000 */  sw         $t1, 0x0($t3)
    /* 1F76C 1001F76C 0C008CF0 */  jal        osVirtualToPhysical
    /* 1F770 1001F770 8FA40040 */   lw        $a0, 0x40($sp)
    /* 1F774 1001F774 8FAA0018 */  lw         $t2, 0x18($sp)
    /* 1F778 1001F778 AD420004 */  sw         $v0, 0x4($t2)
  .L1001F77C:
    /* 1F77C 1001F77C 10000003 */  b          .L1001F78C
    /* 1F780 1001F780 8FA20034 */   lw        $v0, 0x34($sp)
    /* 1F784 1001F784 10000001 */  b          .L1001F78C
    /* 1F788 1001F788 00000000 */   nop
  .L1001F78C:
    /* 1F78C 1001F78C 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 1F790 1001F790 27BD0038 */  addiu      $sp, $sp, 0x38
    /* 1F794 1001F794 03E00008 */  jr         $ra
    /* 1F798 1001F798 00000000 */   nop
endlabel func_1001F5A4
