nonmatching func_151DADA0, 0x88

glabel func_151DADA0
    /* 208250 151DADA0 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* 208254 151DADA4 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 208258 151DADA8 00802825 */  or         $a1, $a0, $zero
    /* 20825C 151DADAC 3C0F800C */  lui        $t7, %hi(D_800BE9E4)
    /* 208260 151DADB0 8DEFE9E4 */  lw         $t7, %lo(D_800BE9E4)($t7)
    /* 208264 151DADB4 80AE0111 */  lb         $t6, 0x111($a1)
    /* 208268 151DADB8 90B90110 */  lbu        $t9, 0x110($a1)
    /* 20826C 151DADBC 01CF0019 */  multu      $t6, $t7
    /* 208270 151DADC0 0000C012 */  mflo       $t8
    /* 208274 151DADC4 03382021 */  addu       $a0, $t9, $t8
    /* 208278 151DADC8 A0A40110 */  sb         $a0, 0x110($a1)
    /* 20827C 151DADCC 2484FFC0 */  addiu      $a0, $a0, -0x40
    /* 208280 151DADD0 308900FF */  andi       $t1, $a0, 0xFF
    /* 208284 151DADD4 01202025 */  or         $a0, $t1, $zero
    /* 208288 151DADD8 0D4508F6 */  jal        func_151423D8
    /* 20828C 151DADDC AFA50018 */   sw        $a1, 0x18($sp)
    /* 208290 151DADE0 8FA50018 */  lw         $a1, 0x18($sp)
    /* 208294 151DADE4 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 208298 151DADE8 44814000 */  mtc1       $at, $f8
    /* 20829C 151DADEC 24A30110 */  addiu      $v1, $a1, 0x110
    /* 2082A0 151DADF0 C4640004 */  lwc1       $f4, 0x4($v1)
    /* 2082A4 151DADF4 3C01800B */  lui        $at, %hi(D_800AB4B0)
    /* 2082A8 151DADF8 24020001 */  addiu      $v0, $zero, 0x1
    /* 2082AC 151DADFC 46002182 */  mul.s      $f6, $f4, $f0
    /* 2082B0 151DAE00 46083280 */  add.s      $f10, $f6, $f8
    /* 2082B4 151DAE04 E4AA004C */  swc1       $f10, 0x4C($a1)
    /* 2082B8 151DAE08 C4720008 */  lwc1       $f18, 0x8($v1)
    /* 2082BC 151DAE0C C430B4B0 */  lwc1       $f16, %lo(D_800AB4B0)($at)
    /* 2082C0 151DAE10 46009102 */  mul.s      $f4, $f18, $f0
    /* 2082C4 151DAE14 46048181 */  sub.s      $f6, $f16, $f4
    /* 2082C8 151DAE18 E4A60050 */  swc1       $f6, 0x50($a1)
    /* 2082CC 151DAE1C 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 2082D0 151DAE20 03E00008 */  jr         $ra
    /* 2082D4 151DAE24 27BD0018 */   addiu     $sp, $sp, 0x18
endlabel func_151DADA0
