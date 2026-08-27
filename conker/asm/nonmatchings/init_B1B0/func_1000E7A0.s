nonmatching func_1000E7A0, 0x124

glabel func_1000E7A0
    /* E7A0 1000E7A0 308E0001 */  andi       $t6, $a0, 0x1
    /* E7A4 1000E7A4 24010001 */  addiu      $at, $zero, 0x1
    /* E7A8 1000E7A8 15C10006 */  bne        $t6, $at, .L1000E7C4
    /* E7AC 1000E7AC 3C028004 */   lui       $v0, %hi(D_80041F04)
    /* E7B0 1000E7B0 24421F04 */  addiu      $v0, $v0, %lo(D_80041F04)
    /* E7B4 1000E7B4 8C4F0000 */  lw         $t7, 0x0($v0)
    /* E7B8 1000E7B8 35F80001 */  ori        $t8, $t7, 0x1
    /* E7BC 1000E7BC 03E00008 */  jr         $ra
    /* E7C0 1000E7C0 AC580000 */   sw        $t8, 0x0($v0)
  .L1000E7C4:
    /* E7C4 1000E7C4 30990002 */  andi       $t9, $a0, 0x2
    /* E7C8 1000E7C8 1320000B */  beqz       $t9, .L1000E7F8
    /* E7CC 1000E7CC 3C028004 */   lui       $v0, %hi(D_80041F0C)
    /* E7D0 1000E7D0 3C038004 */  lui        $v1, %hi(D_80041F08)
    /* E7D4 1000E7D4 24631F08 */  addiu      $v1, $v1, %lo(D_80041F08)
    /* E7D8 1000E7D8 24421F0C */  addiu      $v0, $v0, %lo(D_80041F0C)
    /* E7DC 1000E7DC 8C680000 */  lw         $t0, 0x0($v1)
    /* E7E0 1000E7E0 8C4A0000 */  lw         $t2, 0x0($v0)
    /* E7E4 1000E7E4 01054821 */  addu       $t1, $t0, $a1
    /* E7E8 1000E7E8 254B0001 */  addiu      $t3, $t2, 0x1
    /* E7EC 1000E7EC AC690000 */  sw         $t1, 0x0($v1)
    /* E7F0 1000E7F0 03E00008 */  jr         $ra
    /* E7F4 1000E7F4 AC4B0000 */   sw        $t3, 0x0($v0)
  .L1000E7F8:
    /* E7F8 1000E7F8 308C0004 */  andi       $t4, $a0, 0x4
    /* E7FC 1000E7FC 1180000A */  beqz       $t4, .L1000E828
    /* E800 1000E800 3C028004 */   lui       $v0, %hi(D_80041F04)
    /* E804 1000E804 24421F04 */  addiu      $v0, $v0, %lo(D_80041F04)
    /* E808 1000E808 8C4E0000 */  lw         $t6, 0x0($v0)
    /* E80C 1000E80C 3C038004 */  lui        $v1, %hi(D_80041F08)
    /* E810 1000E810 24631F08 */  addiu      $v1, $v1, %lo(D_80041F08)
    /* E814 1000E814 24AD0001 */  addiu      $t5, $a1, 0x1
    /* E818 1000E818 35CF0004 */  ori        $t7, $t6, 0x4
    /* E81C 1000E81C AC6D0000 */  sw         $t5, 0x0($v1)
    /* E820 1000E820 03E00008 */  jr         $ra
    /* E824 1000E824 AC4F0000 */   sw        $t7, 0x0($v0)
  .L1000E828:
    /* E828 1000E828 30980008 */  andi       $t8, $a0, 0x8
    /* E82C 1000E82C 1300001C */  beqz       $t8, .L1000E8A0
    /* E830 1000E830 3C028004 */   lui       $v0, %hi(D_80041F0C)
    /* E834 1000E834 24421F0C */  addiu      $v0, $v0, %lo(D_80041F0C)
    /* E838 1000E838 0005CA03 */  sra        $t9, $a1, 8
    /* E83C 1000E83C 30A800FF */  andi       $t0, $a1, 0xFF
    /* E840 1000E840 AC590000 */  sw         $t9, 0x0($v0)
    /* E844 1000E844 11000005 */  beqz       $t0, .L1000E85C
    /* E848 1000E848 01002825 */   or        $a1, $t0, $zero
    /* E84C 1000E84C 24010004 */  addiu      $at, $zero, 0x4
    /* E850 1000E850 11010002 */  beq        $t0, $at, .L1000E85C
    /* E854 1000E854 24010005 */   addiu     $at, $zero, 0x5
    /* E858 1000E858 15010005 */  bne        $t0, $at, .L1000E870
  .L1000E85C:
    /* E85C 1000E85C 3C038004 */   lui       $v1, %hi(D_80041F08)
    /* E860 1000E860 24631F08 */  addiu      $v1, $v1, %lo(D_80041F08)
    /* E864 1000E864 24090002 */  addiu      $t1, $zero, 0x2
    /* E868 1000E868 03E00008 */  jr         $ra
    /* E86C 1000E86C AC690000 */   sw        $t1, 0x0($v1)
  .L1000E870:
    /* E870 1000E870 2401000A */  addiu      $at, $zero, 0xA
    /* E874 1000E874 14A10005 */  bne        $a1, $at, .L1000E88C
    /* E878 1000E878 3C038004 */   lui       $v1, %hi(D_80041F08)
    /* E87C 1000E87C 24631F08 */  addiu      $v1, $v1, %lo(D_80041F08)
    /* E880 1000E880 240A0001 */  addiu      $t2, $zero, 0x1
    /* E884 1000E884 03E00008 */  jr         $ra
    /* E888 1000E888 AC6A0000 */   sw        $t2, 0x0($v1)
  .L1000E88C:
    /* E88C 1000E88C 3C038004 */  lui        $v1, %hi(D_80041F08)
    /* E890 1000E890 24631F08 */  addiu      $v1, $v1, %lo(D_80041F08)
    /* E894 1000E894 240B0003 */  addiu      $t3, $zero, 0x3
    /* E898 1000E898 03E00008 */  jr         $ra
    /* E89C 1000E89C AC6B0000 */   sw        $t3, 0x0($v1)
  .L1000E8A0:
    /* E8A0 1000E8A0 308C0010 */  andi       $t4, $a0, 0x10
    /* E8A4 1000E8A4 11800005 */  beqz       $t4, .L1000E8BC
    /* E8A8 1000E8A8 3C028004 */   lui       $v0, %hi(D_80041F04)
    /* E8AC 1000E8AC 24421F04 */  addiu      $v0, $v0, %lo(D_80041F04)
    /* E8B0 1000E8B0 8C4D0000 */  lw         $t5, 0x0($v0)
    /* E8B4 1000E8B4 35AE0010 */  ori        $t6, $t5, 0x10
    /* E8B8 1000E8B8 AC4E0000 */  sw         $t6, 0x0($v0)
  .L1000E8BC:
    /* E8BC 1000E8BC 03E00008 */  jr         $ra
    /* E8C0 1000E8C0 00000000 */   nop
endlabel func_1000E7A0
