nonmatching func_1000E588, 0xCC

glabel func_1000E588
    /* E588 1000E588 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* E58C 1000E58C AFBF0014 */  sw         $ra, 0x14($sp)
    /* E590 1000E590 AFA60020 */  sw         $a2, 0x20($sp)
    /* E594 1000E594 00A03825 */  or         $a3, $a1, $zero
    /* E598 1000E598 0C002C7F */  jal        func_1000B1FC
    /* E59C 1000E59C AFA7001C */   sw        $a3, 0x1C($sp)
    /* E5A0 1000E5A0 8FA50020 */  lw         $a1, 0x20($sp)
    /* E5A4 1000E5A4 8FA7001C */  lw         $a3, 0x1C($sp)
    /* E5A8 1000E5A8 10400025 */  beqz       $v0, .L1000E640
    /* E5AC 1000E5AC 00401825 */   or        $v1, $v0, $zero
    /* E5B0 1000E5B0 8C4E0000 */  lw         $t6, 0x0($v0)
    /* E5B4 1000E5B4 28E10065 */  slti       $at, $a3, 0x65
    /* E5B8 1000E5B8 05C00012 */  bltz       $t6, .L1000E604
    /* E5BC 1000E5BC 00000000 */   nop
    /* E5C0 1000E5C0 14200003 */  bnez       $at, .L1000E5D0
    /* E5C4 1000E5C4 00000000 */   nop
    /* E5C8 1000E5C8 10000004 */  b          .L1000E5DC
    /* E5CC 1000E5CC 24070064 */   addiu     $a3, $zero, 0x64
  .L1000E5D0:
    /* E5D0 1000E5D0 04E30003 */  bgezl      $a3, .L1000E5E0
    /* E5D4 1000E5D4 00073200 */   sll       $a2, $a3, 8
    /* E5D8 1000E5D8 00003825 */  or         $a3, $zero, $zero
  .L1000E5DC:
    /* E5DC 1000E5DC 00073200 */  sll        $a2, $a3, 8
  .L1000E5E0:
    /* E5E0 1000E5E0 00C73023 */  subu       $a2, $a2, $a3
    /* E5E4 1000E5E4 24010064 */  addiu      $at, $zero, 0x64
    /* E5E8 1000E5E8 00C1001A */  div        $zero, $a2, $at
    /* E5EC 1000E5EC 00007812 */  mflo       $t7
    /* E5F0 1000E5F0 31E600FF */  andi       $a2, $t7, 0xFF
    /* E5F4 1000E5F4 0C00221B */  jal        func_1000886C
    /* E5F8 1000E5F8 90640003 */   lbu       $a0, 0x3($v1)
    /* E5FC 1000E5FC 10000011 */  b          .L1000E644
    /* E600 1000E600 24020001 */   addiu     $v0, $zero, 0x1
  .L1000E604:
    /* E604 1000E604 1CE00006 */  bgtz       $a3, .L1000E620
    /* E608 1000E608 00000000 */   nop
    /* E60C 1000E60C 8C790038 */  lw         $t9, 0x38($v1)
    /* E610 1000E610 24020001 */  addiu      $v0, $zero, 0x1
    /* E614 1000E614 03254025 */  or         $t0, $t9, $a1
    /* E618 1000E618 1000000A */  b          .L1000E644
    /* E61C 1000E61C AC680038 */   sw        $t0, 0x38($v1)
  .L1000E620:
    /* E620 1000E620 58E00008 */  blezl      $a3, .L1000E644
    /* E624 1000E624 00001025 */   or        $v0, $zero, $zero
    /* E628 1000E628 8C690038 */  lw         $t1, 0x38($v1)
    /* E62C 1000E62C 00A05027 */  not        $t2, $a1
    /* E630 1000E630 24020001 */  addiu      $v0, $zero, 0x1
    /* E634 1000E634 012A5824 */  and        $t3, $t1, $t2
    /* E638 1000E638 10000002 */  b          .L1000E644
    /* E63C 1000E63C AC6B0038 */   sw        $t3, 0x38($v1)
  .L1000E640:
    /* E640 1000E640 00001025 */  or         $v0, $zero, $zero
  .L1000E644:
    /* E644 1000E644 8FBF0014 */  lw         $ra, 0x14($sp)
    /* E648 1000E648 27BD0018 */  addiu      $sp, $sp, 0x18
    /* E64C 1000E64C 03E00008 */  jr         $ra
    /* E650 1000E650 00000000 */   nop
endlabel func_1000E588
