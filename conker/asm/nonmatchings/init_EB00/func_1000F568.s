nonmatching func_1000F568, 0x150

glabel func_1000F568
    /* F568 1000F568 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* F56C 1000F56C AFBF0014 */  sw         $ra, 0x14($sp)
    /* F570 1000F570 AFA40018 */  sw         $a0, 0x18($sp)
    /* F574 1000F574 0D42B688 */  jal        func_150ADA20
    /* F578 1000F578 AFA5001C */   sw        $a1, 0x1C($sp)
    /* F57C 1000F57C 8FA5001C */  lw         $a1, 0x1C($sp)
    /* F580 1000F580 8FA90018 */  lw         $t1, 0x18($sp)
    /* F584 1000F584 0045001B */  divu       $zero, $v0, $a1
    /* F588 1000F588 00003810 */  mfhi       $a3
    /* F58C 1000F58C 292106E2 */  slti       $at, $t1, 0x6E2
    /* F590 1000F590 14A00002 */  bnez       $a1, .L1000F59C
    /* F594 1000F594 00000000 */   nop
    /* F598 1000F598 0007000D */  break      7
  .L1000F59C:
    /* F59C 1000F59C 00E01825 */  or         $v1, $a3, $zero
    /* F5A0 1000F5A0 54200004 */  bnel       $at, $zero, .L1000F5B4
    /* F5A4 1000F5A4 28A10002 */   slti      $at, $a1, 0x2
    /* F5A8 1000F5A8 1000003F */  b          .L1000F6A8
    /* F5AC 1000F5AC 24020001 */   addiu     $v0, $zero, 0x1
    /* F5B0 1000F5B0 28A10002 */  slti       $at, $a1, 0x2
  .L1000F5B4:
    /* F5B4 1000F5B4 10200003 */  beqz       $at, .L1000F5C4
    /* F5B8 1000F5B8 3C0A8004 */   lui       $t2, %hi(D_80041F5C)
    /* F5BC 1000F5BC 1000003A */  b          .L1000F6A8
    /* F5C0 1000F5C0 01201025 */   or        $v0, $t1, $zero
  .L1000F5C4:
    /* F5C4 1000F5C4 254A1F5C */  addiu      $t2, $t2, %lo(D_80041F5C)
    /* F5C8 1000F5C8 8D420000 */  lw         $v0, 0x0($t2)
    /* F5CC 1000F5CC 28A10008 */  slti       $at, $a1, 0x8
    /* F5D0 1000F5D0 10400034 */  beqz       $v0, .L1000F6A4
    /* F5D4 1000F5D4 00494021 */   addu      $t0, $v0, $t1
    /* F5D8 1000F5D8 10200030 */  beqz       $at, .L1000F69C
    /* F5DC 1000F5DC 91040000 */   lbu       $a0, 0x0($t0)
    /* F5E0 1000F5E0 308E0080 */  andi       $t6, $a0, 0x80
    /* F5E4 1000F5E4 11C00007 */  beqz       $t6, .L1000F604
    /* F5E8 1000F5E8 00801025 */   or        $v0, $a0, $zero
    /* F5EC 1000F5EC 240F0001 */  addiu      $t7, $zero, 0x1
    /* F5F0 1000F5F0 00AF3004 */  sllv       $a2, $t7, $a1
    /* F5F4 1000F5F4 24C6FFFF */  addiu      $a2, $a2, -0x1
    /* F5F8 1000F5F8 0086C024 */  and        $t8, $a0, $a2
    /* F5FC 1000F5FC 57000007 */  bnel       $t8, $zero, .L1000F61C
    /* F600 1000F600 240B0001 */   addiu     $t3, $zero, 0x1
  .L1000F604:
    /* F604 1000F604 24190001 */  addiu      $t9, $zero, 0x1
    /* F608 1000F608 00B93004 */  sllv       $a2, $t9, $a1
    /* F60C 1000F60C 24C6FFFF */  addiu      $a2, $a2, -0x1
    /* F610 1000F610 240400FF */  addiu      $a0, $zero, 0xFF
    /* F614 1000F614 240200FF */  addiu      $v0, $zero, 0xFF
    /* F618 1000F618 240B0001 */  addiu      $t3, $zero, 0x1
  .L1000F61C:
    /* F61C 1000F61C 00EB6004 */  sllv       $t4, $t3, $a3
    /* F620 1000F620 004C6824 */  and        $t5, $v0, $t4
    /* F624 1000F624 15A00012 */  bnez       $t5, .L1000F670
    /* F628 1000F628 240B0001 */   addiu     $t3, $zero, 0x1
    /* F62C 1000F62C 246E0001 */  addiu      $t6, $v1, 0x1
  .L1000F630:
    /* F630 1000F630 01C5001A */  div        $zero, $t6, $a1
    /* F634 1000F634 00001810 */  mfhi       $v1
    /* F638 1000F638 240F0001 */  addiu      $t7, $zero, 0x1
    /* F63C 1000F63C 006FC004 */  sllv       $t8, $t7, $v1
    /* F640 1000F640 0058C824 */  and        $t9, $v0, $t8
    /* F644 1000F644 14A00002 */  bnez       $a1, .L1000F650
    /* F648 1000F648 00000000 */   nop
    /* F64C 1000F64C 0007000D */  break      7
  .L1000F650:
    /* F650 1000F650 2401FFFF */  addiu      $at, $zero, -0x1
    /* F654 1000F654 14A10004 */  bne        $a1, $at, .L1000F668
    /* F658 1000F658 3C018000 */   lui       $at, (0x80000000 >> 16)
    /* F65C 1000F65C 15C10002 */  bne        $t6, $at, .L1000F668
    /* F660 1000F660 00000000 */   nop
    /* F664 1000F664 0006000D */  break      6
  .L1000F668:
    /* F668 1000F668 5320FFF1 */  beql       $t9, $zero, .L1000F630
    /* F66C 1000F66C 246E0001 */   addiu     $t6, $v1, 0x1
  .L1000F670:
    /* F670 1000F670 006B6004 */  sllv       $t4, $t3, $v1
    /* F674 1000F674 004C2026 */  xor        $a0, $v0, $t4
    /* F678 1000F678 308D00FF */  andi       $t5, $a0, 0xFF
    /* F67C 1000F67C 01A67024 */  and        $t6, $t5, $a2
    /* F680 1000F680 15C00008 */  bnez       $t6, .L1000F6A4
    /* F684 1000F684 A1040000 */   sb        $a0, 0x0($t0)
    /* F688 1000F688 8D580000 */  lw         $t8, 0x0($t2)
    /* F68C 1000F68C 00467826 */  xor        $t7, $v0, $a2
    /* F690 1000F690 0309C821 */  addu       $t9, $t8, $t1
    /* F694 1000F694 10000003 */  b          .L1000F6A4
    /* F698 1000F698 A32F0000 */   sb        $t7, 0x0($t9)
  .L1000F69C:
    /* F69C 1000F69C 24EB0001 */  addiu      $t3, $a3, 0x1
    /* F6A0 1000F6A0 A10B0000 */  sb         $t3, 0x0($t0)
  .L1000F6A4:
    /* F6A4 1000F6A4 01231021 */  addu       $v0, $t1, $v1
  .L1000F6A8:
    /* F6A8 1000F6A8 8FBF0014 */  lw         $ra, 0x14($sp)
    /* F6AC 1000F6AC 27BD0018 */  addiu      $sp, $sp, 0x18
    /* F6B0 1000F6B0 03E00008 */  jr         $ra
    /* F6B4 1000F6B4 00000000 */   nop
endlabel func_1000F568
