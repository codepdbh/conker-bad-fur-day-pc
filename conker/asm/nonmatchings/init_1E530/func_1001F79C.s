nonmatching func_1001F79C, 0x1DC

glabel func_1001F79C
    /* 1F79C 1001F79C 27BDFFC8 */  addiu      $sp, $sp, -0x38
    /* 1F7A0 1001F7A0 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 1F7A4 1001F7A4 AFA40038 */  sw         $a0, 0x38($sp)
    /* 1F7A8 1001F7A8 AFA5003C */  sw         $a1, 0x3C($sp)
    /* 1F7AC 1001F7AC AFA60040 */  sw         $a2, 0x40($sp)
    /* 1F7B0 1001F7B0 AFA70044 */  sw         $a3, 0x44($sp)
    /* 1F7B4 1001F7B4 8FAE0048 */  lw         $t6, 0x48($sp)
    /* 1F7B8 1001F7B8 AFAE0034 */  sw         $t6, 0x34($sp)
    /* 1F7BC 1001F7BC 8FAF0038 */  lw         $t7, 0x38($sp)
    /* 1F7C0 1001F7C0 8FB8003C */  lw         $t8, 0x3C($sp)
    /* 1F7C4 1001F7C4 8DEA0000 */  lw         $t2, 0x0($t7)
    /* 1F7C8 1001F7C8 0018C880 */  sll        $t9, $t8, 2
    /* 1F7CC 1001F7CC 01F94021 */  addu       $t0, $t7, $t9
    /* 1F7D0 1001F7D0 8D090020 */  lw         $t1, 0x20($t0)
    /* 1F7D4 1001F7D4 000A5840 */  sll        $t3, $t2, 1
    /* 1F7D8 1001F7D8 012B6021 */  addu       $t4, $t1, $t3
    /* 1F7DC 1001F7DC AFAC0024 */  sw         $t4, 0x24($sp)
    /* 1F7E0 1001F7E0 8FB8003C */  lw         $t8, 0x3C($sp)
    /* 1F7E4 1001F7E4 8FAE0038 */  lw         $t6, 0x38($sp)
    /* 1F7E8 1001F7E8 8FAD0040 */  lw         $t5, 0x40($sp)
    /* 1F7EC 1001F7EC 0018C880 */  sll        $t9, $t8, 2
    /* 1F7F0 1001F7F0 01D94021 */  addu       $t0, $t6, $t9
    /* 1F7F4 1001F7F4 8D0F0020 */  lw         $t7, 0x20($t0)
    /* 1F7F8 1001F7F8 01AF082B */  sltu       $at, $t5, $t7
    /* 1F7FC 1001F7FC 10200007 */  beqz       $at, .L1001F81C
    /* 1F800 1001F800 00000000 */   nop
    /* 1F804 1001F804 8FA90038 */  lw         $t1, 0x38($sp)
    /* 1F808 1001F808 8FAA0040 */  lw         $t2, 0x40($sp)
    /* 1F80C 1001F80C 8D2B0000 */  lw         $t3, 0x0($t1)
    /* 1F810 1001F810 000B6040 */  sll        $t4, $t3, 1
    /* 1F814 1001F814 014CC021 */  addu       $t8, $t2, $t4
    /* 1F818 1001F818 AFB80040 */  sw         $t8, 0x40($sp)
  .L1001F81C:
    /* 1F81C 1001F81C 8FAE0040 */  lw         $t6, 0x40($sp)
    /* 1F820 1001F820 25D90170 */  addiu      $t9, $t6, 0x170
    /* 1F824 1001F824 AFB90028 */  sw         $t9, 0x28($sp)
    /* 1F828 1001F828 8FA80028 */  lw         $t0, 0x28($sp)
    /* 1F82C 1001F82C 8FAD0024 */  lw         $t5, 0x24($sp)
    /* 1F830 1001F830 01A8082B */  sltu       $at, $t5, $t0
    /* 1F834 1001F834 1020003A */  beqz       $at, .L1001F920
    /* 1F838 1001F838 00000000 */   nop
    /* 1F83C 1001F83C 8FAF0028 */  lw         $t7, 0x28($sp)
    /* 1F840 1001F840 8FA90024 */  lw         $t1, 0x24($sp)
    /* 1F844 1001F844 01E95823 */  subu       $t3, $t7, $t1
    /* 1F848 1001F848 000B5043 */  sra        $t2, $t3, 1
    /* 1F84C 1001F84C AFAA0030 */  sw         $t2, 0x30($sp)
    /* 1F850 1001F850 8FAC0024 */  lw         $t4, 0x24($sp)
    /* 1F854 1001F854 8FB80040 */  lw         $t8, 0x40($sp)
    /* 1F858 1001F858 01987023 */  subu       $t6, $t4, $t8
    /* 1F85C 1001F85C 000EC843 */  sra        $t9, $t6, 1
    /* 1F860 1001F860 AFB9002C */  sw         $t9, 0x2C($sp)
    /* 1F864 1001F864 8FA80034 */  lw         $t0, 0x34($sp)
    /* 1F868 1001F868 250D0008 */  addiu      $t5, $t0, 0x8
    /* 1F86C 1001F86C AFAD0034 */  sw         $t5, 0x34($sp)
    /* 1F870 1001F870 AFA80020 */  sw         $t0, 0x20($sp)
    /* 1F874 1001F874 8FAF002C */  lw         $t7, 0x2C($sp)
    /* 1F878 1001F878 8FB80044 */  lw         $t8, 0x44($sp)
    /* 1F87C 1001F87C 8FA80020 */  lw         $t0, 0x20($sp)
    /* 1F880 1001F880 000F4840 */  sll        $t1, $t7, 1
    /* 1F884 1001F884 312B0FFF */  andi       $t3, $t1, 0xFFF
    /* 1F888 1001F888 000B5300 */  sll        $t2, $t3, 12
    /* 1F88C 1001F88C 3C010600 */  lui        $at, (0x6000000 >> 16)
    /* 1F890 1001F890 01416025 */  or         $t4, $t2, $at
    /* 1F894 1001F894 330E0FFF */  andi       $t6, $t8, 0xFFF
    /* 1F898 1001F898 018EC825 */  or         $t9, $t4, $t6
    /* 1F89C 1001F89C AD190000 */  sw         $t9, 0x0($t0)
    /* 1F8A0 1001F8A0 0C008CF0 */  jal        osVirtualToPhysical
    /* 1F8A4 1001F8A4 8FA40040 */   lw        $a0, 0x40($sp)
    /* 1F8A8 1001F8A8 8FAD0020 */  lw         $t5, 0x20($sp)
    /* 1F8AC 1001F8AC ADA20004 */  sw         $v0, 0x4($t5)
    /* 1F8B0 1001F8B0 8FAF0034 */  lw         $t7, 0x34($sp)
    /* 1F8B4 1001F8B4 25E90008 */  addiu      $t1, $t7, 0x8
    /* 1F8B8 1001F8B8 AFA90034 */  sw         $t1, 0x34($sp)
    /* 1F8BC 1001F8BC AFAF001C */  sw         $t7, 0x1C($sp)
    /* 1F8C0 1001F8C0 8FAA002C */  lw         $t2, 0x2C($sp)
    /* 1F8C4 1001F8C4 8FB90030 */  lw         $t9, 0x30($sp)
    /* 1F8C8 1001F8C8 8FAB0044 */  lw         $t3, 0x44($sp)
    /* 1F8CC 1001F8CC 000AC040 */  sll        $t8, $t2, 1
    /* 1F8D0 1001F8D0 00194040 */  sll        $t0, $t9, 1
    /* 1F8D4 1001F8D4 310D0FFF */  andi       $t5, $t0, 0xFFF
    /* 1F8D8 1001F8D8 01786021 */  addu       $t4, $t3, $t8
    /* 1F8DC 1001F8DC 8FAB001C */  lw         $t3, 0x1C($sp)
    /* 1F8E0 1001F8E0 000D7B00 */  sll        $t7, $t5, 12
    /* 1F8E4 1001F8E4 3C010600 */  lui        $at, (0x6000000 >> 16)
    /* 1F8E8 1001F8E8 01E14825 */  or         $t1, $t7, $at
    /* 1F8EC 1001F8EC 318E0FFF */  andi       $t6, $t4, 0xFFF
    /* 1F8F0 1001F8F0 012E5025 */  or         $t2, $t1, $t6
    /* 1F8F4 1001F8F4 AD6A0000 */  sw         $t2, 0x0($t3)
    /* 1F8F8 1001F8F8 8FAC003C */  lw         $t4, 0x3C($sp)
    /* 1F8FC 1001F8FC 8FB80038 */  lw         $t8, 0x38($sp)
    /* 1F900 1001F900 000CC880 */  sll        $t9, $t4, 2
    /* 1F904 1001F904 03194021 */  addu       $t0, $t8, $t9
    /* 1F908 1001F908 0C008CF0 */  jal        osVirtualToPhysical
    /* 1F90C 1001F90C 8D040020 */   lw        $a0, 0x20($t0)
    /* 1F910 1001F910 8FAD001C */  lw         $t5, 0x1C($sp)
    /* 1F914 1001F914 ADA20004 */  sw         $v0, 0x4($t5)
    /* 1F918 1001F918 1000000F */  b          .L1001F958
    /* 1F91C 1001F91C 00000000 */   nop
  .L1001F920:
    /* 1F920 1001F920 8FAF0034 */  lw         $t7, 0x34($sp)
    /* 1F924 1001F924 25E90008 */  addiu      $t1, $t7, 0x8
    /* 1F928 1001F928 AFA90034 */  sw         $t1, 0x34($sp)
    /* 1F92C 1001F92C AFAF0018 */  sw         $t7, 0x18($sp)
    /* 1F930 1001F930 8FAE0044 */  lw         $t6, 0x44($sp)
    /* 1F934 1001F934 8FAC0018 */  lw         $t4, 0x18($sp)
    /* 1F938 1001F938 3C010617 */  lui        $at, (0x6170000 >> 16)
    /* 1F93C 1001F93C 31CA0FFF */  andi       $t2, $t6, 0xFFF
    /* 1F940 1001F940 01415825 */  or         $t3, $t2, $at
    /* 1F944 1001F944 AD8B0000 */  sw         $t3, 0x0($t4)
    /* 1F948 1001F948 0C008CF0 */  jal        osVirtualToPhysical
    /* 1F94C 1001F94C 8FA40040 */   lw        $a0, 0x40($sp)
    /* 1F950 1001F950 8FB80018 */  lw         $t8, 0x18($sp)
    /* 1F954 1001F954 AF020004 */  sw         $v0, 0x4($t8)
  .L1001F958:
    /* 1F958 1001F958 10000003 */  b          .L1001F968
    /* 1F95C 1001F95C 8FA20034 */   lw        $v0, 0x34($sp)
    /* 1F960 1001F960 10000001 */  b          .L1001F968
    /* 1F964 1001F964 00000000 */   nop
  .L1001F968:
    /* 1F968 1001F968 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 1F96C 1001F96C 27BD0038 */  addiu      $sp, $sp, 0x38
    /* 1F970 1001F970 03E00008 */  jr         $ra
    /* 1F974 1001F974 00000000 */   nop
endlabel func_1001F79C
