nonmatching func_15070C40, 0x9C

glabel func_15070C40
    /* 9E0F0 15070C40 27BDFFC0 */  addiu      $sp, $sp, -0x40
    /* 9E0F4 15070C44 AFBF0024 */  sw         $ra, 0x24($sp)
    /* 9E0F8 15070C48 AFA40040 */  sw         $a0, 0x40($sp)
    /* 9E0FC 15070C4C 308700FF */  andi       $a3, $a0, 0xFF
    /* 9E100 15070C50 3C05800D */  lui        $a1, %hi(D_800D154C)
    /* 9E104 15070C54 8CA5154C */  lw         $a1, %lo(D_800D154C)($a1)
    /* 9E108 15070C58 3C18800D */  lui        $t8, %hi(D_800CC2D0)
    /* 9E10C 15070C5C 2718C2D0 */  addiu      $t8, $t8, %lo(D_800CC2D0)
    /* 9E110 15070C60 C4A40014 */  lwc1       $f4, 0x14($a1)
    /* 9E114 15070C64 27A60034 */  addiu      $a2, $sp, 0x34
    /* 9E118 15070C68 241900FF */  addiu      $t9, $zero, 0xFF
    /* 9E11C 15070C6C E7A40034 */  swc1       $f4, 0x34($sp)
    /* 9E120 15070C70 C4A60018 */  lwc1       $f6, 0x18($a1)
    /* 9E124 15070C74 00A02025 */  or         $a0, $a1, $zero
    /* 9E128 15070C78 E7A60038 */  swc1       $f6, 0x38($sp)
    /* 9E12C 15070C7C C4A8001C */  lwc1       $f8, 0x1C($a1)
    /* 9E130 15070C80 E7A8003C */  swc1       $f8, 0x3C($sp)
    /* 9E134 15070C84 90A20124 */  lbu        $v0, 0x124($a1)
    /* 9E138 15070C88 1040000C */  beqz       $v0, .L15070CBC
    /* 9E13C 15070C8C 00027080 */   sll       $t6, $v0, 2
    /* 9E140 15070C90 01C27023 */  subu       $t6, $t6, $v0
    /* 9E144 15070C94 000E7080 */  sll        $t6, $t6, 2
    /* 9E148 15070C98 01C27021 */  addu       $t6, $t6, $v0
    /* 9E14C 15070C9C 000E7080 */  sll        $t6, $t6, 2
    /* 9E150 15070CA0 01C27023 */  subu       $t6, $t6, $v0
    /* 9E154 15070CA4 000E7080 */  sll        $t6, $t6, 2
    /* 9E158 15070CA8 01C27023 */  subu       $t6, $t6, $v0
    /* 9E15C 15070CAC 000E7080 */  sll        $t6, $t6, 2
    /* 9E160 15070CB0 25CFFCD4 */  addiu      $t7, $t6, -0x32C
    /* 9E164 15070CB4 10000001 */  b          .L15070CBC
    /* 9E168 15070CB8 01F82021 */   addu      $a0, $t7, $t8
  .L15070CBC:
    /* 9E16C 15070CBC AFA00010 */  sw         $zero, 0x10($sp)
    /* 9E170 15070CC0 AFB90014 */  sw         $t9, 0x14($sp)
    /* 9E174 15070CC4 0D440F90 */  jal        func_15103E40
    /* 9E178 15070CC8 AFA00018 */   sw        $zero, 0x18($sp)
    /* 9E17C 15070CCC 8FBF0024 */  lw         $ra, 0x24($sp)
    /* 9E180 15070CD0 27BD0040 */  addiu      $sp, $sp, 0x40
    /* 9E184 15070CD4 03E00008 */  jr         $ra
    /* 9E188 15070CD8 00000000 */   nop
endlabel func_15070C40
