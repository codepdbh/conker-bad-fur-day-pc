nonmatching func_1507E1D0, 0xD4

glabel func_1507E1D0
    /* AB680 1507E1D0 27BDFFC8 */  addiu      $sp, $sp, -0x38
    /* AB684 1507E1D4 AFBF0014 */  sw         $ra, 0x14($sp)
    /* AB688 1507E1D8 AFA5003C */  sw         $a1, 0x3C($sp)
    /* AB68C 1507E1DC AFA60040 */  sw         $a2, 0x40($sp)
    /* AB690 1507E1E0 8C8E01D4 */  lw         $t6, 0x1D4($a0)
    /* AB694 1507E1E4 3C0141F0 */  lui        $at, (0x41F00000 >> 16)
    /* AB698 1507E1E8 27A5001C */  addiu      $a1, $sp, 0x1C
    /* AB69C 1507E1EC 11C00022 */  beqz       $t6, .L1507E278
    /* AB6A0 1507E1F0 8FB9003C */   lw        $t9, 0x3C($sp)
    /* AB6A4 1507E1F4 44800000 */  mtc1       $zero, $f0
    /* AB6A8 1507E1F8 00000000 */  nop
    /* AB6AC 1507E1FC E7A00028 */  swc1       $f0, 0x28($sp)
    /* AB6B0 1507E200 C4840150 */  lwc1       $f4, 0x150($a0)
    /* AB6B4 1507E204 44813000 */  mtc1       $at, $f6
    /* AB6B8 1507E208 E7A00030 */  swc1       $f0, 0x30($sp)
    /* AB6BC 1507E20C 24010001 */  addiu      $at, $zero, 0x1
    /* AB6C0 1507E210 46062202 */  mul.s      $f8, $f4, $f6
    /* AB6C4 1507E214 E7A8002C */  swc1       $f8, 0x2C($sp)
    /* AB6C8 1507E218 8C820000 */  lw         $v0, 0x0($a0)
    /* AB6CC 1507E21C 8C8601D4 */  lw         $a2, 0x1D4($a0)
    /* AB6D0 1507E220 27A40028 */  addiu      $a0, $sp, 0x28
    /* AB6D4 1507E224 54410004 */  bnel       $v0, $at, .L1507E238
    /* AB6D8 1507E228 2401001E */   addiu     $at, $zero, 0x1E
    /* AB6DC 1507E22C 10000005 */  b          .L1507E244
    /* AB6E0 1507E230 24C60300 */   addiu     $a2, $a2, 0x300
    /* AB6E4 1507E234 2401001E */  addiu      $at, $zero, 0x1E
  .L1507E238:
    /* AB6E8 1507E238 14410002 */  bne        $v0, $at, .L1507E244
    /* AB6EC 1507E23C 00000000 */   nop
    /* AB6F0 1507E240 24C600C0 */  addiu      $a2, $a2, 0xC0
  .L1507E244:
    /* AB6F4 1507E244 0D450C4D */  jal        func_15143134
    /* AB6F8 1507E248 AFA70044 */   sw        $a3, 0x44($sp)
    /* AB6FC 1507E24C C7AA001C */  lwc1       $f10, 0x1C($sp)
    /* AB700 1507E250 8FAF003C */  lw         $t7, 0x3C($sp)
    /* AB704 1507E254 8FA70044 */  lw         $a3, 0x44($sp)
    /* AB708 1507E258 E5EA0000 */  swc1       $f10, 0x0($t7)
    /* AB70C 1507E25C 8FB80040 */  lw         $t8, 0x40($sp)
    /* AB710 1507E260 C7B00020 */  lwc1       $f16, 0x20($sp)
    /* AB714 1507E264 E7100000 */  swc1       $f16, 0x0($t8)
    /* AB718 1507E268 C7B20024 */  lwc1       $f18, 0x24($sp)
    /* AB71C 1507E26C E4F20000 */  swc1       $f18, 0x0($a3)
    /* AB720 1507E270 10000009 */  b          .L1507E298
    /* AB724 1507E274 8FBF0014 */   lw        $ra, 0x14($sp)
  .L1507E278:
    /* AB728 1507E278 C4840014 */  lwc1       $f4, 0x14($a0)
    /* AB72C 1507E27C E7240000 */  swc1       $f4, 0x0($t9)
    /* AB730 1507E280 8FA80040 */  lw         $t0, 0x40($sp)
    /* AB734 1507E284 C4860018 */  lwc1       $f6, 0x18($a0)
    /* AB738 1507E288 E5060000 */  swc1       $f6, 0x0($t0)
    /* AB73C 1507E28C C488001C */  lwc1       $f8, 0x1C($a0)
    /* AB740 1507E290 E4E80000 */  swc1       $f8, 0x0($a3)
    /* AB744 1507E294 8FBF0014 */  lw         $ra, 0x14($sp)
  .L1507E298:
    /* AB748 1507E298 27BD0038 */  addiu      $sp, $sp, 0x38
    /* AB74C 1507E29C 03E00008 */  jr         $ra
    /* AB750 1507E2A0 00000000 */   nop
endlabel func_1507E1D0
    /* AB754 1507E2A4 00000000 */  nop
    /* AB758 1507E2A8 00000000 */  nop
    /* AB75C 1507E2AC 00000000 */  nop
