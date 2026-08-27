nonmatching func_1505F188, 0x110

glabel func_1505F188
    /* 8C638 1505F188 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* 8C63C 1505F18C AFBF0014 */  sw         $ra, 0x14($sp)
    /* 8C640 1505F190 2483032C */  addiu      $v1, $a0, 0x32C
    /* 8C644 1505F194 0083082B */  sltu       $at, $a0, $v1
    /* 8C648 1505F198 10200005 */  beqz       $at, .L1505F1B0
    /* 8C64C 1505F19C 00801025 */   or        $v0, $a0, $zero
  .L1505F1A0:
    /* 8C650 1505F1A0 24420004 */  addiu      $v0, $v0, 0x4
    /* 8C654 1505F1A4 0043082B */  sltu       $at, $v0, $v1
    /* 8C658 1505F1A8 1420FFFD */  bnez       $at, .L1505F1A0
    /* 8C65C 1505F1AC AC40FFFC */   sw        $zero, -0x4($v0)
  .L1505F1B0:
    /* 8C660 1505F1B0 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 8C664 1505F1B4 44810000 */  mtc1       $at, $f0
    /* 8C668 1505F1B8 3C01800A */  lui        $at, %hi(D_8009962C)
    /* 8C66C 1505F1BC C422962C */  lwc1       $f2, %lo(D_8009962C)($at)
    /* 8C670 1505F1C0 240E0002 */  addiu      $t6, $zero, 0x2
    /* 8C674 1505F1C4 240FD8F0 */  addiu      $t7, $zero, -0x2710
    /* 8C678 1505F1C8 A08E02FD */  sb         $t6, 0x2FD($a0)
    /* 8C67C 1505F1CC A48F0038 */  sh         $t7, 0x38($a0)
    /* 8C680 1505F1D0 3C01800A */  lui        $at, %hi(D_80099630)
    /* 8C684 1505F1D4 E480014C */  swc1       $f0, 0x14C($a0)
    /* 8C688 1505F1D8 E4800150 */  swc1       $f0, 0x150($a0)
    /* 8C68C 1505F1DC E4820118 */  swc1       $f2, 0x118($a0)
    /* 8C690 1505F1E0 E4820180 */  swc1       $f2, 0x180($a0)
    /* 8C694 1505F1E4 C4249630 */  lwc1       $f4, %lo(D_80099630)($at)
    /* 8C698 1505F1E8 240300FF */  addiu      $v1, $zero, 0xFF
    /* 8C69C 1505F1EC 24020001 */  addiu      $v0, $zero, 0x1
    /* 8C6A0 1505F1F0 3418FFFF */  ori        $t8, $zero, 0xFFFF
    /* 8C6A4 1505F1F4 24990004 */  addiu      $t9, $a0, 0x4
    /* 8C6A8 1505F1F8 24080032 */  addiu      $t0, $zero, 0x32
    /* 8C6AC 1505F1FC A08301DC */  sb         $v1, 0x1DC($a0)
    /* 8C6B0 1505F200 A0830127 */  sb         $v1, 0x127($a0)
    /* 8C6B4 1505F204 A4980084 */  sh         $t8, 0x84($a0)
    /* 8C6B8 1505F208 A083013F */  sb         $v1, 0x13F($a0)
    /* 8C6BC 1505F20C AC9902C4 */  sw         $t9, 0x2C4($a0)
    /* 8C6C0 1505F210 A08202C8 */  sb         $v0, 0x2C8($a0)
    /* 8C6C4 1505F214 A08202C9 */  sb         $v0, 0x2C9($a0)
    /* 8C6C8 1505F218 A0830004 */  sb         $v1, 0x4($a0)
    /* 8C6CC 1505F21C A08802CB */  sb         $t0, 0x2CB($a0)
    /* 8C6D0 1505F220 E4800048 */  swc1       $f0, 0x48($a0)
    /* 8C6D4 1505F224 E4840024 */  swc1       $f4, 0x24($a0)
    /* 8C6D8 1505F228 0D42B688 */  jal        func_150ADA20
    /* 8C6DC 1505F22C AFA40018 */   sw        $a0, 0x18($sp)
    /* 8C6E0 1505F230 24010032 */  addiu      $at, $zero, 0x32
    /* 8C6E4 1505F234 0041001B */  divu       $zero, $v0, $at
    /* 8C6E8 1505F238 8FA40018 */  lw         $a0, 0x18($sp)
    /* 8C6EC 1505F23C 00004810 */  mfhi       $t1
    /* 8C6F0 1505F240 252A0032 */  addiu      $t2, $t1, 0x32
    /* 8C6F4 1505F244 0D418577 */  jal        func_150615DC
    /* 8C6F8 1505F248 A08A006E */   sb        $t2, 0x6E($a0)
    /* 8C6FC 1505F24C 8FA40018 */  lw         $a0, 0x18($sp)
    /* 8C700 1505F250 240300FF */  addiu      $v1, $zero, 0xFF
    /* 8C704 1505F254 2402000A */  addiu      $v0, $zero, 0xA
    /* 8C708 1505F258 A08301DD */  sb         $v1, 0x1DD($a0)
    /* 8C70C 1505F25C A08301DE */  sb         $v1, 0x1DE($a0)
    /* 8C710 1505F260 A08301DF */  sb         $v1, 0x1DF($a0)
    /* 8C714 1505F264 A480018C */  sh         $zero, 0x18C($a0)
    /* 8C718 1505F268 A480018E */  sh         $zero, 0x18E($a0)
    /* 8C71C 1505F26C A4800190 */  sh         $zero, 0x190($a0)
    /* 8C720 1505F270 A4800192 */  sh         $zero, 0x192($a0)
    /* 8C724 1505F274 A4800194 */  sh         $zero, 0x194($a0)
    /* 8C728 1505F278 A4820196 */  sh         $v0, 0x196($a0)
    /* 8C72C 1505F27C A4820198 */  sh         $v0, 0x198($a0)
    /* 8C730 1505F280 A480019A */  sh         $zero, 0x19A($a0)
    /* 8C734 1505F284 A480019C */  sh         $zero, 0x19C($a0)
    /* 8C738 1505F288 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 8C73C 1505F28C 27BD0018 */  addiu      $sp, $sp, 0x18
    /* 8C740 1505F290 03E00008 */  jr         $ra
    /* 8C744 1505F294 00000000 */   nop
endlabel func_1505F188
