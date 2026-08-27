nonmatching func_1507E114, 0xBC

glabel func_1507E114
    /* AB5C4 1507E114 27BDFFA0 */  addiu      $sp, $sp, -0x60
    /* AB5C8 1507E118 AFBF0034 */  sw         $ra, 0x34($sp)
    /* AB5CC 1507E11C AFA40060 */  sw         $a0, 0x60($sp)
    /* AB5D0 1507E120 3C0E800D */  lui        $t6, %hi(D_800D18A8)
    /* AB5D4 1507E124 91CE18A8 */  lbu        $t6, %lo(D_800D18A8)($t6)
    /* AB5D8 1507E128 3C03800C */  lui        $v1, %hi(D_800BE9F4)
    /* AB5DC 1507E12C 2463E9F4 */  addiu      $v1, $v1, %lo(D_800BE9F4)
    /* AB5E0 1507E130 55C00004 */  bnel       $t6, $zero, .L1507E144
    /* AB5E4 1507E134 8C620000 */   lw        $v0, 0x0($v1)
    /* AB5E8 1507E138 10000021 */  b          .L1507E1C0
    /* AB5EC 1507E13C 00001025 */   or        $v0, $zero, $zero
    /* AB5F0 1507E140 8C620000 */  lw         $v0, 0x0($v1)
  .L1507E144:
    /* AB5F4 1507E144 24010022 */  addiu      $at, $zero, 0x22
    /* AB5F8 1507E148 10410003 */  beq        $v0, $at, .L1507E158
    /* AB5FC 1507E14C 24010018 */   addiu     $at, $zero, 0x18
    /* AB600 1507E150 14410003 */  bne        $v0, $at, .L1507E160
    /* AB604 1507E154 3C0F800C */   lui       $t7, %hi(D_800BE3DF)
  .L1507E158:
    /* AB608 1507E158 10000019 */  b          .L1507E1C0
    /* AB60C 1507E15C 00001025 */   or        $v0, $zero, $zero
  .L1507E160:
    /* AB610 1507E160 81EFE3DF */  lb         $t7, %lo(D_800BE3DF)($t7)
    /* AB614 1507E164 3C05800C */  lui        $a1, %hi(D_800BE3E0)
    /* AB618 1507E168 27B80048 */  addiu      $t8, $sp, 0x48
    /* AB61C 1507E16C 27B90043 */  addiu      $t9, $sp, 0x43
    /* AB620 1507E170 27A80042 */  addiu      $t0, $sp, 0x42
    /* AB624 1507E174 27A90044 */  addiu      $t1, $sp, 0x44
    /* AB628 1507E178 27AA003C */  addiu      $t2, $sp, 0x3C
    /* AB62C 1507E17C 240B0001 */  addiu      $t3, $zero, 0x1
    /* AB630 1507E180 27AC005C */  addiu      $t4, $sp, 0x5C
    /* AB634 1507E184 AC6F0000 */  sw         $t7, 0x0($v1)
    /* AB638 1507E188 90A5E3E0 */  lbu        $a1, %lo(D_800BE3E0)($a1)
    /* AB63C 1507E18C AFAC0028 */  sw         $t4, 0x28($sp)
    /* AB640 1507E190 AFAB0024 */  sw         $t3, 0x24($sp)
    /* AB644 1507E194 AFAA0020 */  sw         $t2, 0x20($sp)
    /* AB648 1507E198 AFA9001C */  sw         $t1, 0x1C($sp)
    /* AB64C 1507E19C AFA80018 */  sw         $t0, 0x18($sp)
    /* AB650 1507E1A0 AFB90014 */  sw         $t9, 0x14($sp)
    /* AB654 1507E1A4 AFB80010 */  sw         $t8, 0x10($sp)
    /* AB658 1507E1A8 00002025 */  or         $a0, $zero, $zero
    /* AB65C 1507E1AC 24060001 */  addiu      $a2, $zero, 0x1
    /* AB660 1507E1B0 0D42135C */  jal        func_15084D70
    /* AB664 1507E1B4 27A70054 */   addiu     $a3, $sp, 0x54
    /* AB668 1507E1B8 8FA2005C */  lw         $v0, 0x5C($sp)
    /* AB66C 1507E1BC 24420001 */  addiu      $v0, $v0, 0x1
  .L1507E1C0:
    /* AB670 1507E1C0 8FBF0034 */  lw         $ra, 0x34($sp)
    /* AB674 1507E1C4 27BD0060 */  addiu      $sp, $sp, 0x60
    /* AB678 1507E1C8 03E00008 */  jr         $ra
    /* AB67C 1507E1CC 00000000 */   nop
endlabel func_1507E114
