nonmatching func_1000FE88, 0x68

glabel func_1000FE88
    /* FE88 1000FE88 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* FE8C 1000FE8C AFBF0014 */  sw         $ra, 0x14($sp)
    /* FE90 1000FE90 00803825 */  or         $a3, $a0, $zero
    /* FE94 1000FE94 8CCE0000 */  lw         $t6, 0x0($a2)
    /* FE98 1000FE98 00057880 */  sll        $t7, $a1, 2
    /* FE9C 1000FE9C 01E57823 */  subu       $t7, $t7, $a1
    /* FEA0 1000FEA0 00AE082A */  slt        $at, $a1, $t6
    /* FEA4 1000FEA4 1020000E */  beqz       $at, .L1000FEE0
    /* FEA8 1000FEA8 24020001 */   addiu     $v0, $zero, 0x1
    /* FEAC 1000FEAC 000F7900 */  sll        $t7, $t7, 4
    /* FEB0 1000FEB0 00EF1821 */  addu       $v1, $a3, $t7
    /* FEB4 1000FEB4 94640024 */  lhu        $a0, 0x24($v1)
    /* FEB8 1000FEB8 50800005 */  beql       $a0, $zero, .L1000FED0
    /* FEBC 1000FEBC 8C780010 */   lw        $t8, 0x10($v1)
    /* FEC0 1000FEC0 0C004472 */  jal        func_100111C8
    /* FEC4 1000FEC4 AFA3001C */   sw        $v1, 0x1C($sp)
    /* FEC8 1000FEC8 8FA3001C */  lw         $v1, 0x1C($sp)
    /* FECC 1000FECC 8C780010 */  lw         $t8, 0x10($v1)
  .L1000FED0:
    /* FED0 1000FED0 00001025 */  or         $v0, $zero, $zero
    /* FED4 1000FED4 37190080 */  ori        $t9, $t8, 0x80
    /* FED8 1000FED8 10000001 */  b          .L1000FEE0
    /* FEDC 1000FEDC AC790010 */   sw        $t9, 0x10($v1)
  .L1000FEE0:
    /* FEE0 1000FEE0 8FBF0014 */  lw         $ra, 0x14($sp)
    /* FEE4 1000FEE4 27BD0020 */  addiu      $sp, $sp, 0x20
    /* FEE8 1000FEE8 03E00008 */  jr         $ra
    /* FEEC 1000FEEC 00000000 */   nop
endlabel func_1000FE88
