nonmatching func_151F86B0, 0x1B4

glabel func_151F86B0
    /* 225B60 151F86B0 27BDFED0 */  addiu      $sp, $sp, -0x130
    /* 225B64 151F86B4 AFBF001C */  sw         $ra, 0x1C($sp)
    /* 225B68 151F86B8 AFA40130 */  sw         $a0, 0x130($sp)
    /* 225B6C 151F86BC AFA50134 */  sw         $a1, 0x134($sp)
    /* 225B70 151F86C0 AFA60138 */  sw         $a2, 0x138($sp)
    /* 225B74 151F86C4 AFB00018 */  sw         $s0, 0x18($sp)
    /* 225B78 151F86C8 8FAE0130 */  lw         $t6, 0x130($sp)
    /* 225B7C 151F86CC AFAE012C */  sw         $t6, 0x12C($sp)
    /* 225B80 151F86D0 8FAF012C */  lw         $t7, 0x12C($sp)
    /* 225B84 151F86D4 8DF83BA0 */  lw         $t8, 0x3BA0($t7)
    /* 225B88 151F86D8 27190001 */  addiu      $t9, $t8, 0x1
    /* 225B8C 151F86DC ADF93BA0 */  sw         $t9, 0x3BA0($t7)
    /* 225B90 151F86E0 8FA8012C */  lw         $t0, 0x12C($sp)
    /* 225B94 151F86E4 8D093BA0 */  lw         $t1, 0x3BA0($t0)
    /* 225B98 151F86E8 29210006 */  slti       $at, $t1, 0x6
    /* 225B9C 151F86EC 14200003 */  bnez       $at, .L151F86FC
    /* 225BA0 151F86F0 00000000 */   nop
    /* 225BA4 151F86F4 8FAA012C */  lw         $t2, 0x12C($sp)
    /* 225BA8 151F86F8 AD403BA0 */  sw         $zero, 0x3BA0($t2)
  .L151F86FC:
    /* 225BAC 151F86FC 8FAB012C */  lw         $t3, 0x12C($sp)
    /* 225BB0 151F8700 25657FFF */  addiu      $a1, $t3, 0x7FFF
    /* 225BB4 151F8704 8CA50475 */  lw         $a1, 0x475($a1)
    /* 225BB8 151F8708 0D47E022 */  jal        func_151F8088
    /* 225BBC 151F870C 01602025 */   or        $a0, $t3, $zero
    /* 225BC0 151F8710 14400006 */  bnez       $v0, .L151F872C
    /* 225BC4 151F8714 00000000 */   nop
    /* 225BC8 151F8718 240C0003 */  addiu      $t4, $zero, 0x3
    /* 225BCC 151F871C 3C01800E */  lui        $at, %hi(D_800E0E04)
    /* 225BD0 151F8720 AC2C0E04 */  sw         $t4, %lo(D_800E0E04)($at)
    /* 225BD4 151F8724 1000004A */  b          .L151F8850
    /* 225BD8 151F8728 00001025 */   or        $v0, $zero, $zero
  .L151F872C:
    /* 225BDC 151F872C 8FAE012C */  lw         $t6, 0x12C($sp)
    /* 225BE0 151F8730 240DFFFF */  addiu      $t5, $zero, -0x1
    /* 225BE4 151F8734 25C17FFF */  addiu      $at, $t6, 0x7FFF
    /* 225BE8 151F8738 AC2D0475 */  sw         $t5, 0x475($at)
    /* 225BEC 151F873C 8FB8012C */  lw         $t8, 0x12C($sp)
    /* 225BF0 151F8740 27197FFF */  addiu      $t9, $t8, 0x7FFF
    /* 225BF4 151F8744 8F390479 */  lw         $t9, 0x479($t9)
    /* 225BF8 151F8748 03002025 */  or         $a0, $t8, $zero
    /* 225BFC 151F874C 0320F809 */  jalr       $t9
    /* 225C00 151F8750 00000000 */   nop
    /* 225C04 151F8754 AFA20128 */  sw         $v0, 0x128($sp)
    /* 225C08 151F8758 8FAF0128 */  lw         $t7, 0x128($sp)
    /* 225C0C 151F875C 15E00003 */  bnez       $t7, .L151F876C
    /* 225C10 151F8760 00000000 */   nop
    /* 225C14 151F8764 10000036 */  b          .L151F8840
    /* 225C18 151F8768 00000000 */   nop
  .L151F876C:
    /* 225C1C 151F876C 8FA8012C */  lw         $t0, 0x12C($sp)
    /* 225C20 151F8770 8FAD0134 */  lw         $t5, 0x134($sp)
    /* 225C24 151F8774 8D093BA0 */  lw         $t1, 0x3BA0($t0)
    /* 225C28 151F8778 000950C0 */  sll        $t2, $t1, 3
    /* 225C2C 151F877C 01495021 */  addu       $t2, $t2, $t1
    /* 225C30 151F8780 000A5100 */  sll        $t2, $t2, 4
    /* 225C34 151F8784 01495021 */  addu       $t2, $t2, $t1
    /* 225C38 151F8788 000A50C0 */  sll        $t2, $t2, 3
    /* 225C3C 151F878C 010A5821 */  addu       $t3, $t0, $t2
    /* 225C40 151F8790 256C2070 */  addiu      $t4, $t3, 0x2070
    /* 225C44 151F8794 ADAC0000 */  sw         $t4, 0x0($t5)
    /* 225C48 151F8798 8FAE012C */  lw         $t6, 0x12C($sp)
    /* 225C4C 151F879C 8FB90138 */  lw         $t9, 0x138($sp)
    /* 225C50 151F87A0 8DD83F8C */  lw         $t8, 0x3F8C($t6)
    /* 225C54 151F87A4 AF380000 */  sw         $t8, 0x0($t9)
    /* 225C58 151F87A8 8FAF012C */  lw         $t7, 0x12C($sp)
    /* 225C5C 151F87AC 8DE93BC8 */  lw         $t1, 0x3BC8($t7)
    /* 225C60 151F87B0 11200023 */  beqz       $t1, .L151F8840
    /* 225C64 151F87B4 00000000 */   nop
    /* 225C68 151F87B8 AFA00024 */  sw         $zero, 0x24($sp)
  .L151F87BC:
    /* 225C6C 151F87BC 8FA8012C */  lw         $t0, 0x12C($sp)
    /* 225C70 151F87C0 8FAA0024 */  lw         $t2, 0x24($sp)
    /* 225C74 151F87C4 27AB0028 */  addiu      $t3, $sp, 0x28
    /* 225C78 151F87C8 8D190004 */  lw         $t9, 0x4($t0)
    /* 225C7C 151F87CC 24060001 */  addiu      $a2, $zero, 0x1
    /* 225C80 151F87D0 2407FFFF */  addiu      $a3, $zero, -0x1
    /* 225C84 151F87D4 8D040000 */  lw         $a0, 0x0($t0)
    /* 225C88 151F87D8 0320F809 */  jalr       $t9
    /* 225C8C 151F87DC 014B2821 */   addu      $a1, $t2, $t3
    /* 225C90 151F87E0 14400003 */  bnez       $v0, .L151F87F0
    /* 225C94 151F87E4 00000000 */   nop
    /* 225C98 151F87E8 10000008 */  b          .L151F880C
    /* 225C9C 151F87EC 00000000 */   nop
  .L151F87F0:
    /* 225CA0 151F87F0 8FAC0024 */  lw         $t4, 0x24($sp)
    /* 225CA4 151F87F4 03AC8021 */  addu       $s0, $sp, $t4
    /* 225CA8 151F87F8 92100028 */  lbu        $s0, 0x28($s0)
    /* 225CAC 151F87FC 258D0001 */  addiu      $t5, $t4, 0x1
    /* 225CB0 151F8800 AFAD0024 */  sw         $t5, 0x24($sp)
    /* 225CB4 151F8804 1600FFED */  bnez       $s0, .L151F87BC
    /* 225CB8 151F8808 00000000 */   nop
  .L151F880C:
    /* 225CBC 151F880C 3C0E800E */  lui        $t6, %hi(D_800E0E00)
    /* 225CC0 151F8810 8DCE0E00 */  lw         $t6, %lo(D_800E0E00)($t6)
    /* 225CC4 151F8814 11C0000A */  beqz       $t6, .L151F8840
    /* 225CC8 151F8818 00000000 */   nop
    /* 225CCC 151F881C 0C008BBB */  jal        strlen
    /* 225CD0 151F8820 27A40028 */   addiu     $a0, $sp, 0x28
    /* 225CD4 151F8824 3C19800E */  lui        $t9, %hi(D_800E0E00)
    /* 225CD8 151F8828 8F390E00 */  lw         $t9, %lo(D_800E0E00)($t9)
    /* 225CDC 151F882C 00408025 */  or         $s0, $v0, $zero
    /* 225CE0 151F8830 26060001 */  addiu      $a2, $s0, 0x1
    /* 225CE4 151F8834 00002025 */  or         $a0, $zero, $zero
    /* 225CE8 151F8838 0320F809 */  jalr       $t9
    /* 225CEC 151F883C 27A50028 */   addiu     $a1, $sp, 0x28
  .L151F8840:
    /* 225CF0 151F8840 10000003 */  b          .L151F8850
    /* 225CF4 151F8844 8FA20128 */   lw        $v0, 0x128($sp)
    /* 225CF8 151F8848 10000001 */  b          .L151F8850
    /* 225CFC 151F884C 00000000 */   nop
  .L151F8850:
    /* 225D00 151F8850 8FBF001C */  lw         $ra, 0x1C($sp)
    /* 225D04 151F8854 8FB00018 */  lw         $s0, 0x18($sp)
    /* 225D08 151F8858 27BD0130 */  addiu      $sp, $sp, 0x130
    /* 225D0C 151F885C 03E00008 */  jr         $ra
    /* 225D10 151F8860 00000000 */   nop
endlabel func_151F86B0
    /* 225D14 151F8864 00000000 */  nop
    /* 225D18 151F8868 00000000 */  nop
    /* 225D1C 151F886C 00000000 */  nop
