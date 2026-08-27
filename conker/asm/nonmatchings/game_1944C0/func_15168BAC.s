nonmatching func_15168BAC, 0x38

glabel func_15168BAC
    /* 19605C 15168BAC 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* 196060 15168BB0 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 196064 15168BB4 908200E4 */  lbu        $v0, 0xE4($a0)
    /* 196068 15168BB8 3C198009 */  lui        $t9, %hi(D_8008CA20)
    /* 19606C 15168BBC 10400005 */  beqz       $v0, .L15168BD4
    /* 196070 15168BC0 00027080 */   sll       $t6, $v0, 2
    /* 196074 15168BC4 032EC821 */  addu       $t9, $t9, $t6
    /* 196078 15168BC8 8F39CA20 */  lw         $t9, %lo(D_8008CA20)($t9)
    /* 19607C 15168BCC 0320F809 */  jalr       $t9
    /* 196080 15168BD0 00000000 */   nop
  .L15168BD4:
    /* 196084 15168BD4 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 196088 15168BD8 27BD0018 */  addiu      $sp, $sp, 0x18
    /* 19608C 15168BDC 03E00008 */  jr         $ra
    /* 196090 15168BE0 00000000 */   nop
endlabel func_15168BAC
