nonmatching func_15168800, 0x70

glabel func_15168800
    /* 195CB0 15168800 27BDFFD8 */  addiu      $sp, $sp, -0x28
    /* 195CB4 15168804 AFBF001C */  sw         $ra, 0x1C($sp)
    /* 195CB8 15168808 AFA40028 */  sw         $a0, 0x28($sp)
    /* 195CBC 1516880C AFA5002C */  sw         $a1, 0x2C($sp)
    /* 195CC0 15168810 AFA60030 */  sw         $a2, 0x30($sp)
    /* 195CC4 15168814 93AE002F */  lbu        $t6, 0x2F($sp)
    /* 195CC8 15168818 240F0001 */  addiu      $t7, $zero, 0x1
    /* 195CCC 1516881C AFAF0014 */  sw         $t7, 0x14($sp)
    /* 195CD0 15168820 2404000E */  addiu      $a0, $zero, 0xE
    /* 195CD4 15168824 8FA50030 */  lw         $a1, 0x30($sp)
    /* 195CD8 15168828 240600B8 */  addiu      $a2, $zero, 0xB8
    /* 195CDC 1516882C 24070001 */  addiu      $a3, $zero, 0x1
    /* 195CE0 15168830 0D459E9A */  jal        func_15167A68
    /* 195CE4 15168834 AFAE0010 */   sw        $t6, 0x10($sp)
    /* 195CE8 15168838 14400003 */  bnez       $v0, .L15168848
    /* 195CEC 1516883C 00401825 */   or        $v1, $v0, $zero
    /* 195CF0 15168840 10000007 */  b          .L15168860
    /* 195CF4 15168844 00001025 */   or        $v0, $zero, $zero
  .L15168848:
    /* 195CF8 15168848 8FA40028 */  lw         $a0, 0x28($sp)
    /* 195CFC 1516884C 24650010 */  addiu      $a1, $v1, 0x10
    /* 195D00 15168850 240600A8 */  addiu      $a2, $zero, 0xA8
    /* 195D04 15168854 0C008E84 */  jal        bcopy
    /* 195D08 15168858 AFA30024 */   sw        $v1, 0x24($sp)
    /* 195D0C 1516885C 8FA20024 */  lw         $v0, 0x24($sp)
  .L15168860:
    /* 195D10 15168860 8FBF001C */  lw         $ra, 0x1C($sp)
    /* 195D14 15168864 27BD0028 */  addiu      $sp, $sp, 0x28
    /* 195D18 15168868 03E00008 */  jr         $ra
    /* 195D1C 1516886C 00000000 */   nop
endlabel func_15168800
