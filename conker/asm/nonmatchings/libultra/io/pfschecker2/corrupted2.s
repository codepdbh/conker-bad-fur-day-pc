nonmatching corrupted2, 0x1E8

glabel corrupted2
    /* 21EFD8 151F1B28 27BDFFD0 */  addiu      $sp, $sp, -0x30
    /* 21EFDC 151F1B2C AFA50034 */  sw         $a1, 0x34($sp)
    /* 21EFE0 151F1B30 93B80034 */  lbu        $t8, 0x34($sp)
    /* 21EFE4 151F1B34 93AE0035 */  lbu        $t6, 0x35($sp)
    /* 21EFE8 151F1B38 AFA40030 */  sw         $a0, 0x30($sp)
    /* 21EFEC 151F1B3C 8FAA0030 */  lw         $t2, 0x30($sp)
    /* 21EFF0 151F1B40 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 21EFF4 151F1B44 AFA60038 */  sw         $a2, 0x38($sp)
    /* 21EFF8 151F1B48 AFA00024 */  sw         $zero, 0x24($sp)
    /* 21EFFC 151F1B4C AFA00018 */  sw         $zero, 0x18($sp)
    /* 21F000 151F1B50 05C10003 */  bgez       $t6, .L151F1B60
    /* 21F004 151F1B54 000E7883 */   sra       $t7, $t6, 2
    /* 21F008 151F1B58 25C10003 */  addiu      $at, $t6, 0x3
    /* 21F00C 151F1B5C 00017883 */  sra        $t7, $at, 2
  .L151F1B60:
    /* 21F010 151F1B60 07010004 */  bgez       $t8, .L151F1B74
    /* 21F014 151F1B64 33190007 */   andi      $t9, $t8, 0x7
    /* 21F018 151F1B68 13200002 */  beqz       $t9, .L151F1B74
    /* 21F01C 151F1B6C 00000000 */   nop
    /* 21F020 151F1B70 2739FFF8 */  addiu      $t9, $t9, -0x8
  .L151F1B74:
    /* 21F024 151F1B74 00194140 */  sll        $t0, $t9, 5
    /* 21F028 151F1B78 01E84821 */  addu       $t1, $t7, $t0
    /* 21F02C 151F1B7C AFA90028 */  sw         $t1, 0x28($sp)
    /* 21F030 151F1B80 A3A00023 */  sb         $zero, 0x23($sp)
    /* 21F034 151F1B84 914B0064 */  lbu        $t3, 0x64($t2)
    /* 21F038 151F1B88 1960005C */  blez       $t3, .L151F1CFC
    /* 21F03C 151F1B8C 00000000 */   nop
  .L151F1B90:
    /* 21F040 151F1B90 93AC0023 */  lbu        $t4, 0x23($sp)
    /* 21F044 151F1B94 19800004 */  blez       $t4, .L151F1BA8
    /* 21F048 151F1B98 00000000 */   nop
    /* 21F04C 151F1B9C 240D0001 */  addiu      $t5, $zero, 0x1
    /* 21F050 151F1BA0 10000004 */  b          .L151F1BB4
    /* 21F054 151F1BA4 AFAD001C */   sw        $t5, 0x1C($sp)
  .L151F1BA8:
    /* 21F058 151F1BA8 8FAE0030 */  lw         $t6, 0x30($sp)
    /* 21F05C 151F1BAC 8DD80060 */  lw         $t8, 0x60($t6)
    /* 21F060 151F1BB0 AFB8001C */  sw         $t8, 0x1C($sp)
  .L151F1BB4:
    /* 21F064 151F1BB4 93B90023 */  lbu        $t9, 0x23($sp)
    /* 21F068 151F1BB8 93AF0034 */  lbu        $t7, 0x34($sp)
    /* 21F06C 151F1BBC 132F000F */  beq        $t9, $t7, .L151F1BFC
    /* 21F070 151F1BC0 00000000 */   nop
    /* 21F074 151F1BC4 8FA80038 */  lw         $t0, 0x38($sp)
    /* 21F078 151F1BC8 8FA90028 */  lw         $t1, 0x28($sp)
    /* 21F07C 151F1BCC 240D0001 */  addiu      $t5, $zero, 0x1
    /* 21F080 151F1BD0 01095021 */  addu       $t2, $t0, $t1
    /* 21F084 151F1BD4 914B0101 */  lbu        $t3, 0x101($t2)
    /* 21F088 151F1BD8 07210004 */  bgez       $t9, .L151F1BEC
    /* 21F08C 151F1BDC 332C0007 */   andi      $t4, $t9, 0x7
    /* 21F090 151F1BE0 11800002 */  beqz       $t4, .L151F1BEC
    /* 21F094 151F1BE4 00000000 */   nop
    /* 21F098 151F1BE8 258CFFF8 */  addiu      $t4, $t4, -0x8
  .L151F1BEC:
    /* 21F09C 151F1BEC 018D7004 */  sllv       $t6, $t5, $t4
    /* 21F0A0 151F1BF0 016EC024 */  and        $t8, $t3, $t6
    /* 21F0A4 151F1BF4 13000038 */  beqz       $t8, .L151F1CD8
    /* 21F0A8 151F1BF8 00000000 */   nop
  .L151F1BFC:
    /* 21F0AC 151F1BFC 8FA80038 */  lw         $t0, 0x38($sp)
    /* 21F0B0 151F1C00 93AF0023 */  lbu        $t7, 0x23($sp)
    /* 21F0B4 151F1C04 91090100 */  lbu        $t1, 0x100($t0)
    /* 21F0B8 151F1C08 11E90011 */  beq        $t7, $t1, .L151F1C50
    /* 21F0BC 151F1C0C 00000000 */   nop
    /* 21F0C0 151F1C10 8FA40030 */  lw         $a0, 0x30($sp)
    /* 21F0C4 151F1C14 01002825 */  or         $a1, $t0, $zero
    /* 21F0C8 151F1C18 00003025 */  or         $a2, $zero, $zero
    /* 21F0CC 151F1C1C 0C00A0B7 */  jal        __osPfsRWInode
    /* 21F0D0 151F1C20 01E03825 */   or        $a3, $t7, $zero
    /* 21F0D4 151F1C24 AFA20018 */  sw         $v0, 0x18($sp)
    /* 21F0D8 151F1C28 8FAA0018 */  lw         $t2, 0x18($sp)
    /* 21F0DC 151F1C2C 11400005 */  beqz       $t2, .L151F1C44
    /* 21F0E0 151F1C30 24010003 */   addiu     $at, $zero, 0x3
    /* 21F0E4 151F1C34 11410003 */  beq        $t2, $at, .L151F1C44
    /* 21F0E8 151F1C38 00000000 */   nop
    /* 21F0EC 151F1C3C 10000030 */  b          .L151F1D00
    /* 21F0F0 151F1C40 01401025 */   or        $v0, $t2, $zero
  .L151F1C44:
    /* 21F0F4 151F1C44 93B90023 */  lbu        $t9, 0x23($sp)
    /* 21F0F8 151F1C48 8FAD0038 */  lw         $t5, 0x38($sp)
    /* 21F0FC 151F1C4C A1B90100 */  sb         $t9, 0x100($t5)
  .L151F1C50:
    /* 21F100 151F1C50 8FAB0024 */  lw         $t3, 0x24($sp)
    /* 21F104 151F1C54 8FAC001C */  lw         $t4, 0x1C($sp)
    /* 21F108 151F1C58 29610002 */  slti       $at, $t3, 0x2
    /* 21F10C 151F1C5C 10200018 */  beqz       $at, .L151F1CC0
    /* 21F110 151F1C60 AFAC002C */   sw        $t4, 0x2C($sp)
    /* 21F114 151F1C64 29810080 */  slti       $at, $t4, 0x80
    /* 21F118 151F1C68 10200015 */  beqz       $at, .L151F1CC0
    /* 21F11C 151F1C6C 00000000 */   nop
  .L151F1C70:
    /* 21F120 151F1C70 8FB8002C */  lw         $t8, 0x2C($sp)
    /* 21F124 151F1C74 8FAE0038 */  lw         $t6, 0x38($sp)
    /* 21F128 151F1C78 97AA0034 */  lhu        $t2, 0x34($sp)
    /* 21F12C 151F1C7C 00184840 */  sll        $t1, $t8, 1
    /* 21F130 151F1C80 01C94021 */  addu       $t0, $t6, $t1
    /* 21F134 151F1C84 950F0000 */  lhu        $t7, 0x0($t0)
    /* 21F138 151F1C88 15EA0004 */  bne        $t7, $t2, .L151F1C9C
    /* 21F13C 151F1C8C 00000000 */   nop
    /* 21F140 151F1C90 8FB90024 */  lw         $t9, 0x24($sp)
    /* 21F144 151F1C94 272D0001 */  addiu      $t5, $t9, 0x1
    /* 21F148 151F1C98 AFAD0024 */  sw         $t5, 0x24($sp)
  .L151F1C9C:
    /* 21F14C 151F1C9C 8FAB002C */  lw         $t3, 0x2C($sp)
    /* 21F150 151F1CA0 8FB80024 */  lw         $t8, 0x24($sp)
    /* 21F154 151F1CA4 256C0001 */  addiu      $t4, $t3, 0x1
    /* 21F158 151F1CA8 2B010002 */  slti       $at, $t8, 0x2
    /* 21F15C 151F1CAC 10200004 */  beqz       $at, .L151F1CC0
    /* 21F160 151F1CB0 AFAC002C */   sw        $t4, 0x2C($sp)
    /* 21F164 151F1CB4 29810080 */  slti       $at, $t4, 0x80
    /* 21F168 151F1CB8 1420FFED */  bnez       $at, .L151F1C70
    /* 21F16C 151F1CBC 00000000 */   nop
  .L151F1CC0:
    /* 21F170 151F1CC0 8FAE0024 */  lw         $t6, 0x24($sp)
    /* 21F174 151F1CC4 29C10002 */  slti       $at, $t6, 0x2
    /* 21F178 151F1CC8 14200003 */  bnez       $at, .L151F1CD8
    /* 21F17C 151F1CCC 00000000 */   nop
    /* 21F180 151F1CD0 1000000B */  b          .L151F1D00
    /* 21F184 151F1CD4 24020002 */   addiu     $v0, $zero, 0x2
  .L151F1CD8:
    /* 21F188 151F1CD8 93A90023 */  lbu        $t1, 0x23($sp)
    /* 21F18C 151F1CDC 8FAA0030 */  lw         $t2, 0x30($sp)
    /* 21F190 151F1CE0 25280001 */  addiu      $t0, $t1, 0x1
    /* 21F194 151F1CE4 A3A80023 */  sb         $t0, 0x23($sp)
    /* 21F198 151F1CE8 91590064 */  lbu        $t9, 0x64($t2)
    /* 21F19C 151F1CEC 310F00FF */  andi       $t7, $t0, 0xFF
    /* 21F1A0 151F1CF0 01F9082A */  slt        $at, $t7, $t9
    /* 21F1A4 151F1CF4 1420FFA6 */  bnez       $at, .L151F1B90
    /* 21F1A8 151F1CF8 00000000 */   nop
  .L151F1CFC:
    /* 21F1AC 151F1CFC 8FA20024 */  lw         $v0, 0x24($sp)
  .L151F1D00:
    /* 21F1B0 151F1D00 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 21F1B4 151F1D04 27BD0030 */  addiu      $sp, $sp, 0x30
    /* 21F1B8 151F1D08 03E00008 */  jr         $ra
    /* 21F1BC 151F1D0C 00000000 */   nop
endlabel corrupted2
