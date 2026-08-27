nonmatching func_1000F6B8, 0x1A4

glabel func_1000F6B8
    /* F6B8 1000F6B8 27BDFF80 */  addiu      $sp, $sp, -0x80
    /* F6BC 1000F6BC AFB20040 */  sw         $s2, 0x40($sp)
    /* F6C0 1000F6C0 AFB1003C */  sw         $s1, 0x3C($sp)
    /* F6C4 1000F6C4 AFB00038 */  sw         $s0, 0x38($sp)
    /* F6C8 1000F6C8 00058400 */  sll        $s0, $a1, 16
    /* F6CC 1000F6CC 00068C00 */  sll        $s1, $a2, 16
    /* F6D0 1000F6D0 00079400 */  sll        $s2, $a3, 16
    /* F6D4 1000F6D4 0012C403 */  sra        $t8, $s2, 16
    /* F6D8 1000F6D8 00117C03 */  sra        $t7, $s1, 16
    /* F6DC 1000F6DC 00107403 */  sra        $t6, $s0, 16
    /* F6E0 1000F6E0 01C08025 */  or         $s0, $t6, $zero
    /* F6E4 1000F6E4 01E08825 */  or         $s1, $t7, $zero
    /* F6E8 1000F6E8 03009025 */  or         $s2, $t8, $zero
    /* F6EC 1000F6EC AFBF0044 */  sw         $ra, 0x44($sp)
    /* F6F0 1000F6F0 AFA40080 */  sw         $a0, 0x80($sp)
    /* F6F4 1000F6F4 AFA50084 */  sw         $a1, 0x84($sp)
    /* F6F8 1000F6F8 AFA60088 */  sw         $a2, 0x88($sp)
    /* F6FC 1000F6FC AFA7008C */  sw         $a3, 0x8C($sp)
    /* F700 1000F700 3C038008 */  lui        $v1, %hi(D_80082FA0)
    /* F704 1000F704 8C632FA0 */  lw         $v1, %lo(D_80082FA0)($v1)
    /* F708 1000F708 3C028004 */  lui        $v0, %hi(D_80041F68)
    /* F70C 1000F70C 24491F68 */  addiu      $t1, $v0, %lo(D_80041F68)
    /* F710 1000F710 5060002C */  beql       $v1, $zero, .L1000F7C4
    /* F714 1000F714 8D39000C */   lw        $t9, 0xC($t1)
    /* F718 1000F718 04600026 */  bltz       $v1, .L1000F7B4
    /* F71C 1000F71C 2407FFFF */   addiu     $a3, $zero, -0x1
    /* F720 1000F720 000350C0 */  sll        $t2, $v1, 3
    /* F724 1000F724 01435023 */  subu       $t2, $t2, $v1
    /* F728 1000F728 3C198004 */  lui        $t9, %hi(D_80041F68)
    /* F72C 1000F72C 27221F68 */  addiu      $v0, $t9, %lo(D_80041F68)
    /* F730 1000F730 000A5080 */  sll        $t2, $t2, 2
    /* F734 1000F734 01424021 */  addu       $t0, $t2, $v0
    /* F738 1000F738 8FA90078 */  lw         $t1, 0x78($sp)
    /* F73C 1000F73C 8C4B000C */  lw         $t3, 0xC($v0)
  .L1000F740:
    /* F740 1000F740 8C4C0010 */  lw         $t4, 0x10($v0)
    /* F744 1000F744 8C4D0014 */  lw         $t5, 0x14($v0)
    /* F748 1000F748 020B1823 */  subu       $v1, $s0, $t3
    /* F74C 1000F74C 00630019 */  multu      $v1, $v1
    /* F750 1000F750 022C2023 */  subu       $a0, $s1, $t4
    /* F754 1000F754 024D2823 */  subu       $a1, $s2, $t5
    /* F758 1000F758 00007012 */  mflo       $t6
    /* F75C 1000F75C 00000000 */  nop
    /* F760 1000F760 00000000 */  nop
    /* F764 1000F764 00840019 */  multu      $a0, $a0
    /* F768 1000F768 00007812 */  mflo       $t7
    /* F76C 1000F76C 01CFC021 */  addu       $t8, $t6, $t7
    /* F770 1000F770 00000000 */  nop
    /* F774 1000F774 00A50019 */  multu      $a1, $a1
    /* F778 1000F778 00005012 */  mflo       $t2
    /* F77C 1000F77C 030A3021 */  addu       $a2, $t8, $t2
    /* F780 1000F780 00C7082B */  sltu       $at, $a2, $a3
    /* F784 1000F784 50200007 */  beql       $at, $zero, .L1000F7A4
    /* F788 1000F788 2442001C */   addiu     $v0, $v0, 0x1C
    /* F78C 1000F78C 00C03825 */  or         $a3, $a2, $zero
    /* F790 1000F790 00404825 */  or         $t1, $v0, $zero
    /* F794 1000F794 AFA30068 */  sw         $v1, 0x68($sp)
    /* F798 1000F798 AFA40064 */  sw         $a0, 0x64($sp)
    /* F79C 1000F79C AFA50060 */  sw         $a1, 0x60($sp)
    /* F7A0 1000F7A0 2442001C */  addiu      $v0, $v0, 0x1C
  .L1000F7A4:
    /* F7A4 1000F7A4 0102082B */  sltu       $at, $t0, $v0
    /* F7A8 1000F7A8 5020FFE5 */  beql       $at, $zero, .L1000F740
    /* F7AC 1000F7AC 8C4B000C */   lw        $t3, 0xC($v0)
    /* F7B0 1000F7B0 AFA90078 */  sw         $t1, 0x78($sp)
  .L1000F7B4:
    /* F7B4 1000F7B4 8FA90078 */  lw         $t1, 0x78($sp)
    /* F7B8 1000F7B8 1000000B */  b          .L1000F7E8
    /* F7BC 1000F7BC 8D380000 */   lw        $t8, 0x0($t1)
    /* F7C0 1000F7C0 8D39000C */  lw         $t9, 0xC($t1)
  .L1000F7C4:
    /* F7C4 1000F7C4 02195823 */  subu       $t3, $s0, $t9
    /* F7C8 1000F7C8 AFAB0068 */  sw         $t3, 0x68($sp)
    /* F7CC 1000F7CC 8D2C0010 */  lw         $t4, 0x10($t1)
    /* F7D0 1000F7D0 022C6823 */  subu       $t5, $s1, $t4
    /* F7D4 1000F7D4 AFAD0064 */  sw         $t5, 0x64($sp)
    /* F7D8 1000F7D8 8D2E0014 */  lw         $t6, 0x14($t1)
    /* F7DC 1000F7DC 024E7823 */  subu       $t7, $s2, $t6
    /* F7E0 1000F7E0 AFAF0060 */  sw         $t7, 0x60($sp)
    /* F7E4 1000F7E4 8D380000 */  lw         $t8, 0x0($t1)
  .L1000F7E8:
    /* F7E8 1000F7E8 8D270018 */  lw         $a3, 0x18($t1)
    /* F7EC 1000F7EC 87AE009A */  lh         $t6, 0x9A($sp)
    /* F7F0 1000F7F0 02185023 */  subu       $t2, $s0, $t8
    /* F7F4 1000F7F4 AFAA0010 */  sw         $t2, 0x10($sp)
    /* F7F8 1000F7F8 8D390004 */  lw         $t9, 0x4($t1)
    /* F7FC 1000F7FC 8FB80090 */  lw         $t8, 0x90($sp)
    /* F800 1000F800 87AF0096 */  lh         $t7, 0x96($sp)
    /* F804 1000F804 02395823 */  subu       $t3, $s1, $t9
    /* F808 1000F808 AFAB0014 */  sw         $t3, 0x14($sp)
    /* F80C 1000F80C 8D2C0008 */  lw         $t4, 0x8($t1)
    /* F810 1000F810 27AA007C */  addiu      $t2, $sp, 0x7C
    /* F814 1000F814 AFAA0028 */  sw         $t2, 0x28($sp)
    /* F818 1000F818 024C6823 */  subu       $t5, $s2, $t4
    /* F81C 1000F81C AFAD0018 */  sw         $t5, 0x18($sp)
    /* F820 1000F820 AFA0002C */  sw         $zero, 0x2C($sp)
    /* F824 1000F824 8FA40068 */  lw         $a0, 0x68($sp)
    /* F828 1000F828 8FA50064 */  lw         $a1, 0x64($sp)
    /* F82C 1000F82C 8FA60060 */  lw         $a2, 0x60($sp)
    /* F830 1000F830 AFAE001C */  sw         $t6, 0x1C($sp)
    /* F834 1000F834 AFB80024 */  sw         $t8, 0x24($sp)
    /* F838 1000F838 0C002908 */  jal        func_1000A420
    /* F83C 1000F83C AFAF0020 */   sw        $t7, 0x20($sp)
    /* F840 1000F840 8FA2007C */  lw         $v0, 0x7C($sp)
    /* F844 1000F844 8FBF0044 */  lw         $ra, 0x44($sp)
    /* F848 1000F848 8FB00038 */  lw         $s0, 0x38($sp)
    /* F84C 1000F84C 8FB1003C */  lw         $s1, 0x3C($sp)
    /* F850 1000F850 8FB20040 */  lw         $s2, 0x40($sp)
    /* F854 1000F854 03E00008 */  jr         $ra
    /* F858 1000F858 27BD0080 */   addiu     $sp, $sp, 0x80
endlabel func_1000F6B8
