nonmatching func_1000D758, 0x214

glabel func_1000D758
    /* D758 1000D758 27BDFFC0 */  addiu      $sp, $sp, -0x40
    /* D75C 1000D75C AFBF0024 */  sw         $ra, 0x24($sp)
    /* D760 1000D760 AFB20020 */  sw         $s2, 0x20($sp)
    /* D764 1000D764 AFB1001C */  sw         $s1, 0x1C($sp)
    /* D768 1000D768 AFB00018 */  sw         $s0, 0x18($sp)
    /* D76C 1000D76C E7AC0040 */  swc1       $f12, 0x40($sp)
    /* D770 1000D770 E7AE0044 */  swc1       $f14, 0x44($sp)
    /* D774 1000D774 AFA60048 */  sw         $a2, 0x48($sp)
    /* D778 1000D778 3C0E8004 */  lui        $t6, %hi(D_80041F00)
    /* D77C 1000D77C 91CE1F00 */  lbu        $t6, %lo(D_80041F00)($t6)
    /* D780 1000D780 00003825 */  or         $a3, $zero, $zero
    /* D784 1000D784 00004025 */  or         $t0, $zero, $zero
    /* D788 1000D788 00008825 */  or         $s1, $zero, $zero
    /* D78C 1000D78C 15C00071 */  bnez       $t6, .L1000D954
    /* D790 1000D790 00004825 */   or        $t1, $zero, $zero
    /* D794 1000D794 3C058004 */  lui        $a1, %hi(D_800417B0)
    /* D798 1000D798 3C068003 */  lui        $a2, %hi(D_8002B074)
    /* D79C 1000D79C 24C6B074 */  addiu      $a2, $a2, %lo(D_8002B074)
    /* D7A0 1000D7A0 24A517B0 */  addiu      $a1, $a1, %lo(D_800417B0)
    /* D7A4 1000D7A4 00008025 */  or         $s0, $zero, $zero
    /* D7A8 1000D7A8 24120003 */  addiu      $s2, $zero, 0x3
    /* D7AC 1000D7AC 241F0001 */  addiu      $ra, $zero, 0x1
    /* D7B0 1000D7B0 240D0002 */  addiu      $t5, $zero, 0x2
    /* D7B4 1000D7B4 240C0004 */  addiu      $t4, $zero, 0x4
    /* D7B8 1000D7B8 240B0005 */  addiu      $t3, $zero, 0x5
    /* D7BC 1000D7BC 240AFF0F */  addiu      $t2, $zero, -0xF1
  .L1000D7C0:
    /* D7C0 1000D7C0 8CA20000 */  lw         $v0, 0x0($a1)
    /* D7C4 1000D7C4 5040001D */  beql       $v0, $zero, .L1000D83C
    /* D7C8 1000D7C8 26100001 */   addiu     $s0, $s0, 0x1
    /* D7CC 1000D7CC 8C430004 */  lw         $v1, 0x4($v0)
    /* D7D0 1000D7D0 18600019 */  blez       $v1, .L1000D838
    /* D7D4 1000D7D4 00037900 */   sll       $t7, $v1, 4
    /* D7D8 1000D7D8 00CFC021 */  addu       $t8, $a2, $t7
    /* D7DC 1000D7DC 8F040004 */  lw         $a0, 0x4($t8)
    /* D7E0 1000D7E0 240E0001 */  addiu      $t6, $zero, 0x1
    /* D7E4 1000D7E4 020E7804 */  sllv       $t7, $t6, $s0
    /* D7E8 1000D7E8 30990040 */  andi       $t9, $a0, 0x40
    /* D7EC 1000D7EC 13200002 */  beqz       $t9, .L1000D7F8
    /* D7F0 1000D7F0 008A1024 */   and       $v0, $a0, $t2
    /* D7F4 1000D7F4 010F4025 */  or         $t0, $t0, $t7
  .L1000D7F8:
    /* D7F8 1000D7F8 144B0004 */  bne        $v0, $t3, .L1000D80C
    /* D7FC 1000D7FC 24180001 */   addiu     $t8, $zero, 0x1
    /* D800 1000D800 0218C804 */  sllv       $t9, $t8, $s0
    /* D804 1000D804 1000000C */  b          .L1000D838
    /* D808 1000D808 00F93825 */   or        $a3, $a3, $t9
  .L1000D80C:
    /* D80C 1000D80C 104C0002 */  beq        $v0, $t4, .L1000D818
    /* D810 1000D810 240E0001 */   addiu     $t6, $zero, 0x1
    /* D814 1000D814 14520003 */  bne        $v0, $s2, .L1000D824
  .L1000D818:
    /* D818 1000D818 020E7804 */   sllv      $t7, $t6, $s0
    /* D81C 1000D81C 10000006 */  b          .L1000D838
    /* D820 1000D820 022F8825 */   or        $s1, $s1, $t7
  .L1000D824:
    /* D824 1000D824 105F0002 */  beq        $v0, $ra, .L1000D830
    /* D828 1000D828 24180001 */   addiu     $t8, $zero, 0x1
    /* D82C 1000D82C 144D0002 */  bne        $v0, $t5, .L1000D838
  .L1000D830:
    /* D830 1000D830 0218C804 */   sllv      $t9, $t8, $s0
    /* D834 1000D834 01394825 */  or         $t1, $t1, $t9
  .L1000D838:
    /* D838 1000D838 26100001 */  addiu      $s0, $s0, 0x1
  .L1000D83C:
    /* D83C 1000D83C 2A010003 */  slti       $at, $s0, 0x3
    /* D840 1000D840 1420FFDF */  bnez       $at, .L1000D7C0
    /* D844 1000D844 24A50004 */   addiu     $a1, $a1, 0x4
    /* D848 1000D848 10E0000C */  beqz       $a3, .L1000D87C
    /* D84C 1000D84C 24041770 */   addiu     $a0, $zero, 0x1770
    /* D850 1000D850 38EE00FF */  xori       $t6, $a3, 0xFF
    /* D854 1000D854 01C83026 */  xor        $a2, $t6, $t0
    /* D858 1000D858 24050400 */  addiu      $a1, $zero, 0x400
    /* D85C 1000D85C 0C0032FC */  jal        func_1000CBF0
    /* D860 1000D860 AFA70038 */   sw        $a3, 0x38($sp)
    /* D864 1000D864 8FA60038 */  lw         $a2, 0x38($sp)
    /* D868 1000D868 34048000 */  ori        $a0, $zero, 0x8000
    /* D86C 1000D86C 0C0032FC */  jal        func_1000CBF0
    /* D870 1000D870 24056400 */   addiu     $a1, $zero, 0x6400
    /* D874 1000D874 10000028 */  b          .L1000D918
    /* D878 1000D878 00008025 */   or        $s0, $zero, $zero
  .L1000D87C:
    /* D87C 1000D87C 1220000A */  beqz       $s1, .L1000D8A8
    /* D880 1000D880 240401F4 */   addiu     $a0, $zero, 0x1F4
    /* D884 1000D884 24050400 */  addiu      $a1, $zero, 0x400
    /* D888 1000D888 0C0032FC */  jal        func_1000CBF0
    /* D88C 1000D88C 3A2600FF */   xori      $a2, $s1, 0xFF
    /* D890 1000D890 34048000 */  ori        $a0, $zero, 0x8000
    /* D894 1000D894 24050800 */  addiu      $a1, $zero, 0x800
    /* D898 1000D898 0C0032FC */  jal        func_1000CBF0
    /* D89C 1000D89C 02203025 */   or        $a2, $s1, $zero
    /* D8A0 1000D8A0 1000001D */  b          .L1000D918
    /* D8A4 1000D8A4 00008025 */   or        $s0, $zero, $zero
  .L1000D8A8:
    /* D8A8 1000D8A8 0D47CB37 */  jal        func_151F2CDC
    /* D8AC 1000D8AC AFA9002C */   sw        $t1, 0x2C($sp)
    /* D8B0 1000D8B0 241F0001 */  addiu      $ra, $zero, 0x1
    /* D8B4 1000D8B4 145F0013 */  bne        $v0, $ra, .L1000D904
    /* D8B8 1000D8B8 8FA9002C */   lw        $t1, 0x2C($sp)
    /* D8BC 1000D8BC 3C028004 */  lui        $v0, %hi(D_800427F4)
    /* D8C0 1000D8C0 944227F4 */  lhu        $v0, %lo(D_800427F4)($v0)
    /* D8C4 1000D8C4 2841007D */  slti       $at, $v0, 0x7D
    /* D8C8 1000D8C8 14200002 */  bnez       $at, .L1000D8D4
    /* D8CC 1000D8CC 28410081 */   slti      $at, $v0, 0x81
    /* D8D0 1000D8D0 1420000C */  bnez       $at, .L1000D904
  .L1000D8D4:
    /* D8D4 1000D8D4 284101C9 */   slti      $at, $v0, 0x1C9
    /* D8D8 1000D8D8 1020000A */  beqz       $at, .L1000D904
    /* D8DC 1000D8DC 24010170 */   addiu     $at, $zero, 0x170
    /* D8E0 1000D8E0 10410008 */  beq        $v0, $at, .L1000D904
    /* D8E4 1000D8E4 24010171 */   addiu     $at, $zero, 0x171
    /* D8E8 1000D8E8 10410006 */  beq        $v0, $at, .L1000D904
    /* D8EC 1000D8EC 240436B0 */   addiu     $a0, $zero, 0x36B0
    /* D8F0 1000D8F0 24050200 */  addiu      $a1, $zero, 0x200
    /* D8F4 1000D8F4 0C0032FC */  jal        func_1000CBF0
    /* D8F8 1000D8F8 392600FF */   xori      $a2, $t1, 0xFF
    /* D8FC 1000D8FC 10000006 */  b          .L1000D918
    /* D900 1000D900 00008025 */   or        $s0, $zero, $zero
  .L1000D904:
    /* D904 1000D904 34048000 */  ori        $a0, $zero, 0x8000
    /* D908 1000D908 24050800 */  addiu      $a1, $zero, 0x800
    /* D90C 1000D90C 0C0032FC */  jal        func_1000CBF0
    /* D910 1000D910 240600FF */   addiu     $a2, $zero, 0xFF
    /* D914 1000D914 00008025 */  or         $s0, $zero, $zero
  .L1000D918:
    /* D918 1000D918 0C0033AB */  jal        func_1000CEAC
    /* D91C 1000D91C 02002025 */   or        $a0, $s0, $zero
    /* D920 1000D920 26100001 */  addiu      $s0, $s0, 0x1
    /* D924 1000D924 2A010003 */  slti       $at, $s0, 0x3
    /* D928 1000D928 1420FFFB */  bnez       $at, .L1000D918
    /* D92C 1000D92C 00000000 */   nop
    /* D930 1000D930 00008025 */  or         $s0, $zero, $zero
    /* D934 1000D934 02002025 */  or         $a0, $s0, $zero
  .L1000D938:
    /* D938 1000D938 8FA50040 */  lw         $a1, 0x40($sp)
    /* D93C 1000D93C 8FA60044 */  lw         $a2, 0x44($sp)
    /* D940 1000D940 0C0034BE */  jal        func_1000D2F8
    /* D944 1000D944 8FA70048 */   lw        $a3, 0x48($sp)
    /* D948 1000D948 26100001 */  addiu      $s0, $s0, 0x1
    /* D94C 1000D94C 5612FFFA */  bnel       $s0, $s2, .L1000D938
    /* D950 1000D950 02002025 */   or        $a0, $s0, $zero
  .L1000D954:
    /* D954 1000D954 8FBF0024 */  lw         $ra, 0x24($sp)
    /* D958 1000D958 8FB00018 */  lw         $s0, 0x18($sp)
    /* D95C 1000D95C 8FB1001C */  lw         $s1, 0x1C($sp)
    /* D960 1000D960 8FB20020 */  lw         $s2, 0x20($sp)
    /* D964 1000D964 03E00008 */  jr         $ra
    /* D968 1000D968 27BD0040 */   addiu     $sp, $sp, 0x40
endlabel func_1000D758
