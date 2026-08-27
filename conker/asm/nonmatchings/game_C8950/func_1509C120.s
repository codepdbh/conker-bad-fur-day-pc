nonmatching func_1509C120, 0x108

glabel func_1509C120
    /* C95D0 1509C120 27BDFFB0 */  addiu      $sp, $sp, -0x50
    /* C95D4 1509C124 AFBF0024 */  sw         $ra, 0x24($sp)
    /* C95D8 1509C128 AFB30020 */  sw         $s3, 0x20($sp)
    /* C95DC 1509C12C AFB2001C */  sw         $s2, 0x1C($sp)
    /* C95E0 1509C130 AFB10018 */  sw         $s1, 0x18($sp)
    /* C95E4 1509C134 AFB00014 */  sw         $s0, 0x14($sp)
    /* C95E8 1509C138 0D42B688 */  jal        func_150ADA20
    /* C95EC 1509C13C 00000000 */   nop
    /* C95F0 1509C140 3C0E800D */  lui        $t6, %hi(D_800D2E4C)
    /* C95F4 1509C144 8DCE2E4C */  lw         $t6, %lo(D_800D2E4C)($t6)
    /* C95F8 1509C148 30530003 */  andi       $s3, $v0, 0x3
    /* C95FC 1509C14C 11C00006 */  beqz       $t6, .L1509C168
    /* C9600 1509C150 AFAE0034 */   sw        $t6, 0x34($sp)
    /* C9604 1509C154 0D42B688 */  jal        func_150ADA20
    /* C9608 1509C158 00000000 */   nop
    /* C960C 1509C15C 304F0004 */  andi       $t7, $v0, 0x4
    /* C9610 1509C160 51E0002B */  beql       $t7, $zero, .L1509C210
    /* C9614 1509C164 8FBF0024 */   lw        $ra, 0x24($sp)
  .L1509C168:
    /* C9618 1509C168 0660000E */  bltz       $s3, .L1509C1A4
    /* C961C 1509C16C 00008025 */   or        $s0, $zero, $zero
    /* C9620 1509C170 0013C880 */  sll        $t9, $s3, 2
    /* C9624 1509C174 27280004 */  addiu      $t0, $t9, 0x4
    /* C9628 1509C178 27B00038 */  addiu      $s0, $sp, 0x38
    /* C962C 1509C17C 01108821 */  addu       $s1, $t0, $s0
  .L1509C180:
    /* C9630 1509C180 2404001B */  addiu      $a0, $zero, 0x1B
    /* C9634 1509C184 240500FF */  addiu      $a1, $zero, 0xFF
    /* C9638 1509C188 24060002 */  addiu      $a2, $zero, 0x2
    /* C963C 1509C18C 0C000F10 */  jal        allocate_memory
    /* C9640 1509C190 00003825 */   or        $a3, $zero, $zero
    /* C9644 1509C194 26100004 */  addiu      $s0, $s0, 0x4
    /* C9648 1509C198 1630FFF9 */  bne        $s1, $s0, .L1509C180
    /* C964C 1509C19C AE02FFFC */   sw        $v0, -0x4($s0)
    /* C9650 1509C1A0 00008025 */  or         $s0, $zero, $zero
  .L1509C1A4:
    /* C9654 1509C1A4 0660000A */  bltz       $s3, .L1509C1D0
    /* C9658 1509C1A8 26710001 */   addiu     $s1, $s3, 0x1
    /* C965C 1509C1AC 27B20038 */  addiu      $s2, $sp, 0x38
  .L1509C1B0:
    /* C9660 1509C1B0 12130004 */  beq        $s0, $s3, .L1509C1C4
    /* C9664 1509C1B4 00104880 */   sll       $t1, $s0, 2
    /* C9668 1509C1B8 02495021 */  addu       $t2, $s2, $t1
    /* C966C 1509C1BC 0C00101D */  jal        func_10004074
    /* C9670 1509C1C0 8D440000 */   lw        $a0, 0x0($t2)
  .L1509C1C4:
    /* C9674 1509C1C4 26100001 */  addiu      $s0, $s0, 0x1
    /* C9678 1509C1C8 1630FFF9 */  bne        $s1, $s0, .L1509C1B0
    /* C967C 1509C1CC 00000000 */   nop
  .L1509C1D0:
    /* C9680 1509C1D0 27B20038 */  addiu      $s2, $sp, 0x38
    /* C9684 1509C1D4 00135880 */  sll        $t3, $s3, 2
    /* C9688 1509C1D8 8FAE0034 */  lw         $t6, 0x34($sp)
    /* C968C 1509C1DC 024B6021 */  addu       $t4, $s2, $t3
    /* C9690 1509C1E0 8D8D0000 */  lw         $t5, 0x0($t4)
    /* C9694 1509C1E4 3C01800D */  lui        $at, %hi(D_800D2E4C)
    /* C9698 1509C1E8 11C00008 */  beqz       $t6, .L1509C20C
    /* C969C 1509C1EC AC2D2E4C */   sw        $t5, %lo(D_800D2E4C)($at)
    /* C96A0 1509C1F0 3C05800D */  lui        $a1, %hi(D_800D2E4C)
    /* C96A4 1509C1F4 8CA52E4C */  lw         $a1, %lo(D_800D2E4C)($a1)
    /* C96A8 1509C1F8 01C02025 */  or         $a0, $t6, $zero
    /* C96AC 1509C1FC 0C008E84 */  jal        bcopy
    /* C96B0 1509C200 2406001B */   addiu     $a2, $zero, 0x1B
    /* C96B4 1509C204 0C00101D */  jal        func_10004074
    /* C96B8 1509C208 8FA40034 */   lw        $a0, 0x34($sp)
  .L1509C20C:
    /* C96BC 1509C20C 8FBF0024 */  lw         $ra, 0x24($sp)
  .L1509C210:
    /* C96C0 1509C210 8FB00014 */  lw         $s0, 0x14($sp)
    /* C96C4 1509C214 8FB10018 */  lw         $s1, 0x18($sp)
    /* C96C8 1509C218 8FB2001C */  lw         $s2, 0x1C($sp)
    /* C96CC 1509C21C 8FB30020 */  lw         $s3, 0x20($sp)
    /* C96D0 1509C220 03E00008 */  jr         $ra
    /* C96D4 1509C224 27BD0050 */   addiu     $sp, $sp, 0x50
endlabel func_1509C120
