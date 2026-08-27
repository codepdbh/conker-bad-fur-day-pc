nonmatching func_1507D4F8, 0x25C

glabel func_1507D4F8
    /* AA9A8 1507D4F8 27BDFFD0 */  addiu      $sp, $sp, -0x30
    /* AA9AC 1507D4FC AFBF001C */  sw         $ra, 0x1C($sp)
    /* AA9B0 1507D500 AFA40030 */  sw         $a0, 0x30($sp)
    /* AA9B4 1507D504 3C0E8009 */  lui        $t6, %hi(D_8008FDBC)
    /* AA9B8 1507D508 95CEFDBC */  lhu        $t6, %lo(D_8008FDBC)($t6)
    /* AA9BC 1507D50C 87A40032 */  lh         $a0, 0x32($sp)
    /* AA9C0 1507D510 24050004 */  addiu      $a1, $zero, 0x4
    /* AA9C4 1507D514 31CF0001 */  andi       $t7, $t6, 0x1
    /* AA9C8 1507D518 55E00004 */  bnel       $t7, $zero, .L1507D52C
    /* AA9CC 1507D51C 87A40032 */   lh        $a0, 0x32($sp)
    /* AA9D0 1507D520 0D4215C4 */  jal        func_15085710
    /* AA9D4 1507D524 24060001 */   addiu     $a2, $zero, 0x1
    /* AA9D8 1507D528 87A40032 */  lh         $a0, 0x32($sp)
  .L1507D52C:
    /* AA9DC 1507D52C 24050003 */  addiu      $a1, $zero, 0x3
    /* AA9E0 1507D530 0D42166B */  jal        func_150859AC
    /* AA9E4 1507D534 AFA40024 */   sw        $a0, 0x24($sp)
    /* AA9E8 1507D538 10400041 */  beqz       $v0, .L1507D640
    /* AA9EC 1507D53C 3C08800C */   lui       $t0, %hi(D_800BE616)
    /* AA9F0 1507D540 3C068008 */  lui        $a2, %hi(D_8008726C)
    /* AA9F4 1507D544 80C6726C */  lb         $a2, %lo(D_8008726C)($a2)
    /* AA9F8 1507D548 87A40026 */  lh         $a0, 0x26($sp)
    /* AA9FC 1507D54C 0D4215C4 */  jal        func_15085710
    /* AAA00 1507D550 24050005 */   addiu     $a1, $zero, 0x5
    /* AAA04 1507D554 8FB80030 */  lw         $t8, 0x30($sp)
    /* AAA08 1507D558 3C08800D */  lui        $t0, %hi(D_800CC2D0)
    /* AAA0C 1507D55C 2508C2D0 */  addiu      $t0, $t0, %lo(D_800CC2D0)
    /* AAA10 1507D560 0018C880 */  sll        $t9, $t8, 2
    /* AAA14 1507D564 0338C823 */  subu       $t9, $t9, $t8
    /* AAA18 1507D568 0019C880 */  sll        $t9, $t9, 2
    /* AAA1C 1507D56C 0338C821 */  addu       $t9, $t9, $t8
    /* AAA20 1507D570 0019C880 */  sll        $t9, $t9, 2
    /* AAA24 1507D574 0338C823 */  subu       $t9, $t9, $t8
    /* AAA28 1507D578 0019C880 */  sll        $t9, $t9, 2
    /* AAA2C 1507D57C 0338C823 */  subu       $t9, $t9, $t8
    /* AAA30 1507D580 0019C880 */  sll        $t9, $t9, 2
    /* AAA34 1507D584 03282021 */  addu       $a0, $t9, $t0
    /* AAA38 1507D588 A48000B2 */  sh         $zero, 0xB2($a0)
    /* AAA3C 1507D58C 3C09800C */  lui        $t1, %hi(D_800BE616)
    /* AAA40 1507D590 9129E616 */  lbu        $t1, %lo(D_800BE616)($t1)
    /* AAA44 1507D594 3C0A800E */  lui        $t2, %hi(D_800E0C20)
    /* AAA48 1507D598 240D0001 */  addiu      $t5, $zero, 0x1
    /* AAA4C 1507D59C 1120000C */  beqz       $t1, .L1507D5D0
    /* AAA50 1507D5A0 3C0E800D */   lui       $t6, %hi(D_800D2E4C)
    /* AAA54 1507D5A4 814A0C20 */  lb         $t2, %lo(D_800E0C20)($t2)
    /* AAA58 1507D5A8 55400006 */  bnel       $t2, $zero, .L1507D5C4
    /* AAA5C 1507D5AC 8C8C031C */   lw        $t4, 0x31C($a0)
    /* AAA60 1507D5B0 0D41F476 */  jal        func_1507D1D8
    /* AAA64 1507D5B4 00000000 */   nop
    /* AAA68 1507D5B8 10000063 */  b          .L1507D748
    /* AAA6C 1507D5BC 8FBF001C */   lw        $ra, 0x1C($sp)
    /* AAA70 1507D5C0 8C8C031C */  lw         $t4, 0x31C($a0)
  .L1507D5C4:
    /* AAA74 1507D5C4 240B000A */  addiu      $t3, $zero, 0xA
    /* AAA78 1507D5C8 1000005E */  b          .L1507D744
    /* AAA7C 1507D5CC A18B0120 */   sb        $t3, 0x120($t4)
  .L1507D5D0:
    /* AAA80 1507D5D0 8DCE2E4C */  lw         $t6, %lo(D_800D2E4C)($t6)
    /* AAA84 1507D5D4 3C01800D */  lui        $at, %hi(D_800D18A8)
    /* AAA88 1507D5D8 A02D18A8 */  sb         $t5, %lo(D_800D18A8)($at)
    /* AAA8C 1507D5DC 91CF0019 */  lbu        $t7, 0x19($t6)
    /* AAA90 1507D5E0 3C198009 */  lui        $t9, %hi(D_8008FDA8)
    /* AAA94 1507D5E4 24040002 */  addiu      $a0, $zero, 0x2
    /* AAA98 1507D5E8 31F80004 */  andi       $t8, $t7, 0x4
    /* AAA9C 1507D5EC 1700000C */  bnez       $t8, .L1507D620
    /* AAAA0 1507D5F0 3C05800C */   lui       $a1, %hi(D_800BE3DF)
    /* AAAA4 1507D5F4 8339FDA8 */  lb         $t9, %lo(D_8008FDA8)($t9)
    /* AAAA8 1507D5F8 00003025 */  or         $a2, $zero, $zero
    /* AAAAC 1507D5FC 00003825 */  or         $a3, $zero, $zero
    /* AAAB0 1507D600 07200007 */  bltz       $t9, .L1507D620
    /* AAAB4 1507D604 00000000 */   nop
    /* AAAB8 1507D608 24040001 */  addiu      $a0, $zero, 0x1
    /* AAABC 1507D60C 24050022 */  addiu      $a1, $zero, 0x22
    /* AAAC0 1507D610 0D4071CC */  jal        func_1501C730
    /* AAAC4 1507D614 AFA00010 */   sw        $zero, 0x10($sp)
    /* AAAC8 1507D618 1000004B */  b          .L1507D748
    /* AAACC 1507D61C 8FBF001C */   lw        $ra, 0x1C($sp)
  .L1507D620:
    /* AAAD0 1507D620 3C06800C */  lui        $a2, %hi(D_800BE3E0)
    /* AAAD4 1507D624 90C6E3E0 */  lbu        $a2, %lo(D_800BE3E0)($a2)
    /* AAAD8 1507D628 80A5E3DF */  lb         $a1, %lo(D_800BE3DF)($a1)
    /* AAADC 1507D62C 00003825 */  or         $a3, $zero, $zero
    /* AAAE0 1507D630 0D4071CC */  jal        func_1501C730
    /* AAAE4 1507D634 AFA00010 */   sw        $zero, 0x10($sp)
    /* AAAE8 1507D638 10000043 */  b          .L1507D748
    /* AAAEC 1507D63C 8FBF001C */   lw        $ra, 0x1C($sp)
  .L1507D640:
    /* AAAF0 1507D640 9108E616 */  lbu        $t0, %lo(D_800BE616)($t0)
    /* AAAF4 1507D644 3C02800D */  lui        $v0, %hi(D_800D18A0)
    /* AAAF8 1507D648 244218A0 */  addiu      $v0, $v0, %lo(D_800D18A0)
    /* AAAFC 1507D64C 1500001A */  bnez       $t0, .L1507D6B8
    /* AAB00 1507D650 8FAC0030 */   lw        $t4, 0x30($sp)
    /* AAB04 1507D654 24090001 */  addiu      $t1, $zero, 0x1
    /* AAB08 1507D658 3C01800D */  lui        $at, %hi(D_800D2E43)
    /* AAB0C 1507D65C 0D4270E8 */  jal        func_1509C3A0
    /* AAB10 1507D660 A0292E43 */   sb        $t1, %lo(D_800D2E43)($at)
    /* AAB14 1507D664 240A0001 */  addiu      $t2, $zero, 0x1
    /* AAB18 1507D668 3C01800D */  lui        $at, %hi(D_800D18A8)
    /* AAB1C 1507D66C 3C068008 */  lui        $a2, %hi(D_8008726C)
    /* AAB20 1507D670 A02A18A8 */  sb         $t2, %lo(D_800D18A8)($at)
    /* AAB24 1507D674 80C6726C */  lb         $a2, %lo(D_8008726C)($a2)
    /* AAB28 1507D678 87A40026 */  lh         $a0, 0x26($sp)
    /* AAB2C 1507D67C 0D4215C4 */  jal        func_15085710
    /* AAB30 1507D680 24050005 */   addiu     $a1, $zero, 0x5
    /* AAB34 1507D684 3C068008 */  lui        $a2, %hi(D_80087260)
    /* AAB38 1507D688 80C67260 */  lb         $a2, %lo(D_80087260)($a2)
    /* AAB3C 1507D68C 87A40026 */  lh         $a0, 0x26($sp)
    /* AAB40 1507D690 0D4215C4 */  jal        func_15085710
    /* AAB44 1507D694 24050002 */   addiu     $a1, $zero, 0x2
    /* AAB48 1507D698 24040001 */  addiu      $a0, $zero, 0x1
    /* AAB4C 1507D69C 24050018 */  addiu      $a1, $zero, 0x18
    /* AAB50 1507D6A0 00003025 */  or         $a2, $zero, $zero
    /* AAB54 1507D6A4 00003825 */  or         $a3, $zero, $zero
    /* AAB58 1507D6A8 0D4071CC */  jal        func_1501C730
    /* AAB5C 1507D6AC AFA00010 */   sw        $zero, 0x10($sp)
    /* AAB60 1507D6B0 10000007 */  b          .L1507D6D0
    /* AAB64 1507D6B4 8FB80030 */   lw        $t8, 0x30($sp)
  .L1507D6B8:
    /* AAB68 1507D6B8 944B0000 */  lhu        $t3, 0x0($v0)
    /* AAB6C 1507D6BC 240D0001 */  addiu      $t5, $zero, 0x1
    /* AAB70 1507D6C0 018D7004 */  sllv       $t6, $t5, $t4
    /* AAB74 1507D6C4 016E7825 */  or         $t7, $t3, $t6
    /* AAB78 1507D6C8 A44F0000 */  sh         $t7, 0x0($v0)
    /* AAB7C 1507D6CC 8FB80030 */  lw         $t8, 0x30($sp)
  .L1507D6D0:
    /* AAB80 1507D6D0 3C08800D */  lui        $t0, %hi(D_800CC2D0)
    /* AAB84 1507D6D4 2508C2D0 */  addiu      $t0, $t0, %lo(D_800CC2D0)
    /* AAB88 1507D6D8 0018C880 */  sll        $t9, $t8, 2
    /* AAB8C 1507D6DC 0338C823 */  subu       $t9, $t9, $t8
    /* AAB90 1507D6E0 0019C880 */  sll        $t9, $t9, 2
    /* AAB94 1507D6E4 0338C821 */  addu       $t9, $t9, $t8
    /* AAB98 1507D6E8 0019C880 */  sll        $t9, $t9, 2
    /* AAB9C 1507D6EC 0338C823 */  subu       $t9, $t9, $t8
    /* AABA0 1507D6F0 0019C880 */  sll        $t9, $t9, 2
    /* AABA4 1507D6F4 0338C823 */  subu       $t9, $t9, $t8
    /* AABA8 1507D6F8 0019C880 */  sll        $t9, $t9, 2
    /* AABAC 1507D6FC 03282021 */  addu       $a0, $t9, $t0
    /* AABB0 1507D700 8C82031C */  lw         $v0, 0x31C($a0)
    /* AABB4 1507D704 3C038009 */  lui        $v1, %hi(D_8008FD94)
    /* AABB8 1507D708 2463FD94 */  addiu      $v1, $v1, %lo(D_8008FD94)
    /* AABBC 1507D70C 90490084 */  lbu        $t1, 0x84($v0)
    /* AABC0 1507D710 240C000A */  addiu      $t4, $zero, 0xA
    /* AABC4 1507D714 15200005 */  bnez       $t1, .L1507D72C
    /* AABC8 1507D718 00000000 */   nop
    /* AABCC 1507D71C 806A0000 */  lb         $t2, 0x0($v1)
    /* AABD0 1507D720 254DFFFF */  addiu      $t5, $t2, -0x1
    /* AABD4 1507D724 A06D0000 */  sb         $t5, 0x0($v1)
    /* AABD8 1507D728 8C82031C */  lw         $v0, 0x31C($a0)
  .L1507D72C:
    /* AABDC 1507D72C 3C03800C */  lui        $v1, %hi(D_800BE618)
    /* AABE0 1507D730 2463E618 */  addiu      $v1, $v1, %lo(D_800BE618)
    /* AABE4 1507D734 A04C0120 */  sb         $t4, 0x120($v0)
    /* AABE8 1507D738 806B0000 */  lb         $t3, 0x0($v1)
    /* AABEC 1507D73C 256EFFFF */  addiu      $t6, $t3, -0x1
    /* AABF0 1507D740 A06E0000 */  sb         $t6, 0x0($v1)
  .L1507D744:
    /* AABF4 1507D744 8FBF001C */  lw         $ra, 0x1C($sp)
  .L1507D748:
    /* AABF8 1507D748 27BD0030 */  addiu      $sp, $sp, 0x30
    /* AABFC 1507D74C 03E00008 */  jr         $ra
    /* AAC00 1507D750 00000000 */   nop
endlabel func_1507D4F8
