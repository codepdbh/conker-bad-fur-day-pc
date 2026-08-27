nonmatching func_1000B638, 0x1F8

glabel func_1000B638
    /* B638 1000B638 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* B63C 1000B63C AFA7002C */  sw         $a3, 0x2C($sp)
    /* B640 1000B640 00803825 */  or         $a3, $a0, $zero
    /* B644 1000B644 AFBF0014 */  sw         $ra, 0x14($sp)
    /* B648 1000B648 AFA40020 */  sw         $a0, 0x20($sp)
    /* B64C 1000B64C AFA50024 */  sw         $a1, 0x24($sp)
    /* B650 1000B650 AFA60028 */  sw         $a2, 0x28($sp)
    /* B654 1000B654 93B80027 */  lbu        $t8, 0x27($sp)
    /* B658 1000B658 3C028004 */  lui        $v0, %hi(D_800417B0)
    /* B65C 1000B65C 30EE0002 */  andi       $t6, $a3, 0x2
    /* B660 1000B660 0018C880 */  sll        $t9, $t8, 2
    /* B664 1000B664 00591021 */  addu       $v0, $v0, $t9
    /* B668 1000B668 8C4217B0 */  lw         $v0, %lo(D_800417B0)($v0)
    /* B66C 1000B66C 30EF0001 */  andi       $t7, $a3, 0x1
    /* B670 1000B670 AFAE001C */  sw         $t6, 0x1C($sp)
    /* B674 1000B674 10400004 */  beqz       $v0, .L1000B688
    /* B678 1000B678 01E03825 */   or        $a3, $t7, $zero
    /* B67C 1000B67C 8C480030 */  lw         $t0, 0x30($v0)
    /* B680 1000B680 290101F4 */  slti       $at, $t0, 0x1F4
    /* B684 1000B684 10200006 */  beqz       $at, .L1000B6A0
  .L1000B688:
    /* B688 1000B688 3C028004 */   lui       $v0, %hi(D_80041F04)
    /* B68C 1000B68C 24421F04 */  addiu      $v0, $v0, %lo(D_80041F04)
    /* B690 1000B690 8C490000 */  lw         $t1, 0x0($v0)
    /* B694 1000B694 2401FFFE */  addiu      $at, $zero, -0x2
    /* B698 1000B698 01215024 */  and        $t2, $t1, $at
    /* B69C 1000B69C AC4A0000 */  sw         $t2, 0x0($v0)
  .L1000B6A0:
    /* B6A0 1000B6A0 3C028004 */  lui        $v0, %hi(D_80041F04)
    /* B6A4 1000B6A4 24421F04 */  addiu      $v0, $v0, %lo(D_80041F04)
    /* B6A8 1000B6A8 8C4B0000 */  lw         $t3, 0x0($v0)
    /* B6AC 1000B6AC 316C0001 */  andi       $t4, $t3, 0x1
    /* B6B0 1000B6B0 11800020 */  beqz       $t4, .L1000B734
    /* B6B4 1000B6B4 00000000 */   nop
    /* B6B8 1000B6B8 14E0001C */  bnez       $a3, .L1000B72C
    /* B6BC 1000B6BC 93A40027 */   lbu       $a0, 0x27($sp)
    /* B6C0 1000B6C0 34058000 */  ori        $a1, $zero, 0x8000
    /* B6C4 1000B6C4 0C00223C */  jal        func_100088F0
    /* B6C8 1000B6C8 24060001 */   addiu     $a2, $zero, 0x1
    /* B6CC 1000B6CC 3C02800C */  lui        $v0, %hi(D_800BE9F0)
    /* B6D0 1000B6D0 8C42E9F0 */  lw         $v0, %lo(D_800BE9F0)($v0)
    /* B6D4 1000B6D4 24010001 */  addiu      $at, $zero, 0x1
    /* B6D8 1000B6D8 93A40027 */  lbu        $a0, 0x27($sp)
    /* B6DC 1000B6DC 10410003 */  beq        $v0, $at, .L1000B6EC
    /* B6E0 1000B6E0 24057000 */   addiu     $a1, $zero, 0x7000
    /* B6E4 1000B6E4 2401000C */  addiu      $at, $zero, 0xC
    /* B6E8 1000B6E8 14410005 */  bne        $v0, $at, .L1000B700
  .L1000B6EC:
    /* B6EC 1000B6EC 00003025 */   or        $a2, $zero, $zero
    /* B6F0 1000B6F0 0C0021E4 */  jal        func_10008790
    /* B6F4 1000B6F4 00003825 */   or        $a3, $zero, $zero
    /* B6F8 1000B6F8 10000009 */  b          .L1000B720
    /* B6FC 1000B6FC 93A40027 */   lbu       $a0, 0x27($sp)
  .L1000B700:
    /* B700 1000B700 24010007 */  addiu      $at, $zero, 0x7
    /* B704 1000B704 10410005 */  beq        $v0, $at, .L1000B71C
    /* B708 1000B708 93A40027 */   lbu       $a0, 0x27($sp)
    /* B70C 1000B70C 240500CA */  addiu      $a1, $zero, 0xCA
    /* B710 1000B710 00003025 */  or         $a2, $zero, $zero
    /* B714 1000B714 0C0021E4 */  jal        func_10008790
    /* B718 1000B718 00003825 */   or        $a3, $zero, $zero
  .L1000B71C:
    /* B71C 1000B71C 93A40027 */  lbu        $a0, 0x27($sp)
  .L1000B720:
    /* B720 1000B720 2405000F */  addiu      $a1, $zero, 0xF
    /* B724 1000B724 0C00216E */  jal        func_100085B8
    /* B728 1000B728 24060001 */   addiu     $a2, $zero, 0x1
  .L1000B72C:
    /* B72C 1000B72C 1000001F */  b          .L1000B7AC
    /* B730 1000B730 24070001 */   addiu     $a3, $zero, 0x1
  .L1000B734:
    /* B734 1000B734 10E0001D */  beqz       $a3, .L1000B7AC
    /* B738 1000B738 93A40027 */   lbu       $a0, 0x27($sp)
    /* B73C 1000B73C 34058000 */  ori        $a1, $zero, 0x8000
    /* B740 1000B740 0C00223C */  jal        func_100088F0
    /* B744 1000B744 00003025 */   or        $a2, $zero, $zero
    /* B748 1000B748 3C02800C */  lui        $v0, %hi(D_800BE9F0)
    /* B74C 1000B74C 8C42E9F0 */  lw         $v0, %lo(D_800BE9F0)($v0)
    /* B750 1000B750 24010001 */  addiu      $at, $zero, 0x1
    /* B754 1000B754 93A40027 */  lbu        $a0, 0x27($sp)
    /* B758 1000B758 10410003 */  beq        $v0, $at, .L1000B768
    /* B75C 1000B75C 24057000 */   addiu     $a1, $zero, 0x7000
    /* B760 1000B760 2401000C */  addiu      $at, $zero, 0xC
    /* B764 1000B764 14410005 */  bne        $v0, $at, .L1000B77C
  .L1000B768:
    /* B768 1000B768 240600FF */   addiu     $a2, $zero, 0xFF
    /* B76C 1000B76C 0C0021E4 */  jal        func_10008790
    /* B770 1000B770 00003825 */   or        $a3, $zero, $zero
    /* B774 1000B774 10000009 */  b          .L1000B79C
    /* B778 1000B778 93A40027 */   lbu       $a0, 0x27($sp)
  .L1000B77C:
    /* B77C 1000B77C 24010007 */  addiu      $at, $zero, 0x7
    /* B780 1000B780 10410005 */  beq        $v0, $at, .L1000B798
    /* B784 1000B784 93A40027 */   lbu       $a0, 0x27($sp)
    /* B788 1000B788 240500CA */  addiu      $a1, $zero, 0xCA
    /* B78C 1000B78C 240600FF */  addiu      $a2, $zero, 0xFF
    /* B790 1000B790 0C0021E4 */  jal        func_10008790
    /* B794 1000B794 00003825 */   or        $a3, $zero, $zero
  .L1000B798:
    /* B798 1000B798 93A40027 */  lbu        $a0, 0x27($sp)
  .L1000B79C:
    /* B79C 1000B79C 2405000F */  addiu      $a1, $zero, 0xF
    /* B7A0 1000B7A0 0C00216E */  jal        func_100085B8
    /* B7A4 1000B7A4 00003025 */   or        $a2, $zero, $zero
    /* B7A8 1000B7A8 00003825 */  or         $a3, $zero, $zero
  .L1000B7AC:
    /* B7AC 1000B7AC 3C0D800C */  lui        $t5, %hi(D_800BE9F0)
    /* B7B0 1000B7B0 8DADE9F0 */  lw         $t5, %lo(D_800BE9F0)($t5)
    /* B7B4 1000B7B4 24010027 */  addiu      $at, $zero, 0x27
    /* B7B8 1000B7B8 24040004 */  addiu      $a0, $zero, 0x4
    /* B7BC 1000B7BC 15A1000F */  bne        $t5, $at, .L1000B7FC
    /* B7C0 1000B7C0 8FB8001C */   lw        $t8, 0x1C($sp)
    /* B7C4 1000B7C4 0C0047E8 */  jal        func_10011FA0
    /* B7C8 1000B7C8 AFA70020 */   sw        $a3, 0x20($sp)
    /* B7CC 1000B7CC 8FAE001C */  lw         $t6, 0x1C($sp)
    /* B7D0 1000B7D0 8FA70020 */  lw         $a3, 0x20($sp)
    /* B7D4 1000B7D4 240F0002 */  addiu      $t7, $zero, 0x2
    /* B7D8 1000B7D8 15C00010 */  bnez       $t6, .L1000B81C
    /* B7DC 1000B7DC 24040001 */   addiu     $a0, $zero, 0x1
    /* B7E0 1000B7E0 AFAF001C */  sw         $t7, 0x1C($sp)
    /* B7E4 1000B7E4 24050001 */  addiu      $a1, $zero, 0x1
    /* B7E8 1000B7E8 3406FFFF */  ori        $a2, $zero, 0xFFFF
    /* B7EC 1000B7EC 0C0039C1 */  jal        func_1000E704
    /* B7F0 1000B7F0 AFA70020 */   sw        $a3, 0x20($sp)
    /* B7F4 1000B7F4 10000009 */  b          .L1000B81C
    /* B7F8 1000B7F8 8FA70020 */   lw        $a3, 0x20($sp)
  .L1000B7FC:
    /* B7FC 1000B7FC 13000007 */  beqz       $t8, .L1000B81C
    /* B800 1000B800 24040001 */   addiu     $a0, $zero, 0x1
    /* B804 1000B804 00002825 */  or         $a1, $zero, $zero
    /* B808 1000B808 3406FFFF */  ori        $a2, $zero, 0xFFFF
    /* B80C 1000B80C 0C0039C1 */  jal        func_1000E704
    /* B810 1000B810 AFA70020 */   sw        $a3, 0x20($sp)
    /* B814 1000B814 8FA70020 */  lw         $a3, 0x20($sp)
    /* B818 1000B818 AFA0001C */  sw         $zero, 0x1C($sp)
  .L1000B81C:
    /* B81C 1000B81C 8FB9001C */  lw         $t9, 0x1C($sp)
    /* B820 1000B820 8FBF0014 */  lw         $ra, 0x14($sp)
    /* B824 1000B824 03271025 */  or         $v0, $t9, $a3
    /* B828 1000B828 03E00008 */  jr         $ra
    /* B82C 1000B82C 27BD0020 */   addiu     $sp, $sp, 0x20
endlabel func_1000B638
