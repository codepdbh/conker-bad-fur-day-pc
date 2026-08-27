nonmatching func_1500A6D8, 0xC4

glabel func_1500A6D8
    /* 37B88 1500A6D8 27BDFFB0 */  addiu      $sp, $sp, -0x50
    /* 37B8C 1500A6DC AFBF001C */  sw         $ra, 0x1C($sp)
    /* 37B90 1500A6E0 AFA40050 */  sw         $a0, 0x50($sp)
    /* 37B94 1500A6E4 27A30024 */  addiu      $v1, $sp, 0x24
    /* 37B98 1500A6E8 00A03025 */  or         $a2, $a1, $zero
    /* 37B9C 1500A6EC 3C0E8008 */  lui        $t6, %hi(D_80082BEC)
    /* 37BA0 1500A6F0 25CE2BEC */  addiu      $t6, $t6, %lo(D_80082BEC)
    /* 37BA4 1500A6F4 8DC10000 */  lw         $at, 0x0($t6)
    /* 37BA8 1500A6F8 3C08800C */  lui        $t0, %hi(D_800BE9F0)
    /* 37BAC 1500A6FC 00001025 */  or         $v0, $zero, $zero
    /* 37BB0 1500A700 AC610000 */  sw         $at, 0x0($v1)
    /* 37BB4 1500A704 95C10004 */  lhu        $at, 0x4($t6)
    /* 37BB8 1500A708 27A50030 */  addiu      $a1, $sp, 0x30
    /* 37BBC 1500A70C A4610004 */  sh         $at, 0x4($v1)
    /* 37BC0 1500A710 8D08E9F0 */  lw         $t0, %lo(D_800BE9F0)($t0)
    /* 37BC4 1500A714 24010006 */  addiu      $at, $zero, 0x6
    /* 37BC8 1500A718 15010003 */  bne        $t0, $at, .L1500A728
    /* 37BCC 1500A71C 00000000 */   nop
    /* 37BD0 1500A720 10000001 */  b          .L1500A728
    /* 37BD4 1500A724 24020001 */   addiu     $v0, $zero, 0x1
  .L1500A728:
    /* 37BD8 1500A728 00024880 */  sll        $t1, $v0, 2
    /* 37BDC 1500A72C 01224823 */  subu       $t1, $t1, $v0
    /* 37BE0 1500A730 00695021 */  addu       $t2, $v1, $t1
    /* 37BE4 1500A734 01465821 */  addu       $t3, $t2, $a2
    /* 37BE8 1500A738 0D42C183 */  jal        func_150B060C
    /* 37BEC 1500A73C 9164FFB7 */   lbu       $a0, -0x49($t3)
    /* 37BF0 1500A740 10400012 */  beqz       $v0, .L1500A78C
    /* 37BF4 1500A744 240C0017 */   addiu     $t4, $zero, 0x17
    /* 37BF8 1500A748 240D012C */  addiu      $t5, $zero, 0x12C
    /* 37BFC 1500A74C 24180001 */  addiu      $t8, $zero, 0x1
    /* 37C00 1500A750 A3A00048 */  sb         $zero, 0x48($sp)
    /* 37C04 1500A754 A3AC0049 */  sb         $t4, 0x49($sp)
    /* 37C08 1500A758 A7AD004A */  sh         $t5, 0x4A($sp)
    /* 37C0C 1500A75C A3A0004C */  sb         $zero, 0x4C($sp)
    /* 37C10 1500A760 AFB80010 */  sw         $t8, 0x10($sp)
    /* 37C14 1500A764 27A40048 */  addiu      $a0, $sp, 0x48
    /* 37C18 1500A768 8FA50050 */  lw         $a1, 0x50($sp)
    /* 37C1C 1500A76C 24060018 */  addiu      $a2, $zero, 0x18
    /* 37C20 1500A770 0D4580DF */  jal        func_1516037C
    /* 37C24 1500A774 240700FF */   addiu     $a3, $zero, 0xFF
    /* 37C28 1500A778 10400004 */  beqz       $v0, .L1500A78C
    /* 37C2C 1500A77C 24440018 */   addiu     $a0, $v0, 0x18
    /* 37C30 1500A780 27A50030 */  addiu      $a1, $sp, 0x30
    /* 37C34 1500A784 0C008BB0 */  jal        memcpy
    /* 37C38 1500A788 24060018 */   addiu     $a2, $zero, 0x18
  .L1500A78C:
    /* 37C3C 1500A78C 8FBF001C */  lw         $ra, 0x1C($sp)
    /* 37C40 1500A790 27BD0050 */  addiu      $sp, $sp, 0x50
    /* 37C44 1500A794 03E00008 */  jr         $ra
    /* 37C48 1500A798 00000000 */   nop
endlabel func_1500A6D8
