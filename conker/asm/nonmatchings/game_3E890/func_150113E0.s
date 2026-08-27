nonmatching func_150113E0, 0x37C

glabel func_150113E0
    /* 3E890 150113E0 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 3E894 150113E4 44810000 */  mtc1       $at, $f0
    /* 3E898 150113E8 3C0142C8 */  lui        $at, (0x42C80000 >> 16)
    /* 3E89C 150113EC 44811000 */  mtc1       $at, $f2
    /* 3E8A0 150113F0 3C014402 */  lui        $at, (0x44020000 >> 16)
    /* 3E8A4 150113F4 44816000 */  mtc1       $at, $f12
    /* 3E8A8 150113F8 3C014290 */  lui        $at, (0x42900000 >> 16)
    /* 3E8AC 150113FC 44817000 */  mtc1       $at, $f14
    /* 3E8B0 15011400 3C018009 */  lui        $at, %hi(D_800964C0)
    /* 3E8B4 15011404 C43064C0 */  lwc1       $f16, %lo(D_800964C0)($at)
    /* 3E8B8 15011408 3C018009 */  lui        $at, %hi(D_800964C4)
    /* 3E8BC 1501140C 27BDFEF8 */  addiu      $sp, $sp, -0x108
    /* 3E8C0 15011410 AFBF002C */  sw         $ra, 0x2C($sp)
    /* 3E8C4 15011414 C43264C4 */  lwc1       $f18, %lo(D_800964C4)($at)
    /* 3E8C8 15011418 3C018009 */  lui        $at, %hi(D_800964C8)
    /* 3E8CC 1501141C C42464C8 */  lwc1       $f4, %lo(D_800964C8)($at)
    /* 3E8D0 15011420 3C018009 */  lui        $at, %hi(D_800964CC)
    /* 3E8D4 15011424 C42664CC */  lwc1       $f6, %lo(D_800964CC)($at)
    /* 3E8D8 15011428 3C018009 */  lui        $at, %hi(D_800964D0)
    /* 3E8DC 1501142C C42864D0 */  lwc1       $f8, %lo(D_800964D0)($at)
    /* 3E8E0 15011430 3C0140E0 */  lui        $at, (0x40E00000 >> 16)
    /* 3E8E4 15011434 E7A40038 */  swc1       $f4, 0x38($sp)
    /* 3E8E8 15011438 44812000 */  mtc1       $at, $f4
    /* 3E8EC 1501143C 3C018009 */  lui        $at, %hi(D_800964D4)
    /* 3E8F0 15011440 E7A6003C */  swc1       $f6, 0x3C($sp)
    /* 3E8F4 15011444 44805000 */  mtc1       $zero, $f10
    /* 3E8F8 15011448 C42664D4 */  lwc1       $f6, %lo(D_800964D4)($at)
    /* 3E8FC 1501144C 3C018009 */  lui        $at, %hi(D_800964D8)
    /* 3E900 15011450 E7A80040 */  swc1       $f8, 0x40($sp)
    /* 3E904 15011454 C42864D8 */  lwc1       $f8, %lo(D_800964D8)($at)
    /* 3E908 15011458 3C018009 */  lui        $at, %hi(D_800964DC)
    /* 3E90C 1501145C E7AA0048 */  swc1       $f10, 0x48($sp)
    /* 3E910 15011460 C42A64DC */  lwc1       $f10, %lo(D_800964DC)($at)
    /* 3E914 15011464 3C018009 */  lui        $at, %hi(D_800964E0)
    /* 3E918 15011468 E7A4004C */  swc1       $f4, 0x4C($sp)
    /* 3E91C 1501146C C42464E0 */  lwc1       $f4, %lo(D_800964E0)($at)
    /* 3E920 15011470 3C018009 */  lui        $at, %hi(D_800964E4)
    /* 3E924 15011474 E7A60050 */  swc1       $f6, 0x50($sp)
    /* 3E928 15011478 C42664E4 */  lwc1       $f6, %lo(D_800964E4)($at)
    /* 3E92C 1501147C 3C018009 */  lui        $at, %hi(D_800964E8)
    /* 3E930 15011480 E7A80078 */  swc1       $f8, 0x78($sp)
    /* 3E934 15011484 C42864E8 */  lwc1       $f8, %lo(D_800964E8)($at)
    /* 3E938 15011488 3C018009 */  lui        $at, %hi(D_800964EC)
    /* 3E93C 1501148C E7AA0084 */  swc1       $f10, 0x84($sp)
    /* 3E940 15011490 C42A64EC */  lwc1       $f10, %lo(D_800964EC)($at)
    /* 3E944 15011494 240E0003 */  addiu      $t6, $zero, 0x3
    /* 3E948 15011498 240F3403 */  addiu      $t7, $zero, 0x3403
    /* 3E94C 1501149C 2418012C */  addiu      $t8, $zero, 0x12C
    /* 3E950 150114A0 241900E6 */  addiu      $t9, $zero, 0xE6
    /* 3E954 150114A4 3C018009 */  lui        $at, %hi(D_800964F0)
    /* 3E958 150114A8 E7A400BC */  swc1       $f4, 0xBC($sp)
    /* 3E95C 150114AC C42464F0 */  lwc1       $f4, %lo(D_800964F0)($at)
    /* 3E960 150114B0 A3AE0054 */  sb         $t6, 0x54($sp)
    /* 3E964 150114B4 A7AF0056 */  sh         $t7, 0x56($sp)
    /* 3E968 150114B8 A7B80058 */  sh         $t8, 0x58($sp)
    /* 3E96C 150114BC A3B90064 */  sb         $t9, 0x64($sp)
    /* 3E970 150114C0 3C0A000D */  lui        $t2, (0xD2012 >> 16)
    /* 3E974 150114C4 24080064 */  addiu      $t0, $zero, 0x64
    /* 3E978 150114C8 240900FF */  addiu      $t1, $zero, 0xFF
    /* 3E97C 150114CC 354A2012 */  ori        $t2, $t2, (0xD2012 & 0xFFFF)
    /* 3E980 150114D0 240B00FF */  addiu      $t3, $zero, 0xFF
    /* 3E984 150114D4 240C00FF */  addiu      $t4, $zero, 0xFF
    /* 3E988 150114D8 240D0006 */  addiu      $t5, $zero, 0x6
    /* 3E98C 150114DC 24190001 */  addiu      $t9, $zero, 0x1
    /* 3E990 150114E0 241800FF */  addiu      $t8, $zero, 0xFF
    /* 3E994 150114E4 240FFFFF */  addiu      $t7, $zero, -0x1
    /* 3E998 150114E8 240E0020 */  addiu      $t6, $zero, 0x20
    /* 3E99C 150114EC E7A00044 */  swc1       $f0, 0x44($sp)
    /* 3E9A0 150114F0 AFA0005C */  sw         $zero, 0x5C($sp)
    /* 3E9A4 150114F4 AFA00060 */  sw         $zero, 0x60($sp)
    /* 3E9A8 150114F8 A3A80065 */  sb         $t0, 0x65($sp)
    /* 3E9AC 150114FC A3A00066 */  sb         $zero, 0x66($sp)
    /* 3E9B0 15011500 A3A90067 */  sb         $t1, 0x67($sp)
    /* 3E9B4 15011504 E7A20068 */  swc1       $f2, 0x68($sp)
    /* 3E9B8 15011508 E7A2006C */  swc1       $f2, 0x6C($sp)
    /* 3E9BC 1501150C E7AC0070 */  swc1       $f12, 0x70($sp)
    /* 3E9C0 15011510 E7AE0074 */  swc1       $f14, 0x74($sp)
    /* 3E9C4 15011514 E7AC007C */  swc1       $f12, 0x7C($sp)
    /* 3E9C8 15011518 E7AE0080 */  swc1       $f14, 0x80($sp)
    /* 3E9CC 1501151C E7A00088 */  swc1       $f0, 0x88($sp)
    /* 3E9D0 15011520 E7A0008C */  swc1       $f0, 0x8C($sp)
    /* 3E9D4 15011524 E7A00090 */  swc1       $f0, 0x90($sp)
    /* 3E9D8 15011528 AFAA0094 */  sw         $t2, 0x94($sp)
    /* 3E9DC 1501152C A3AB0099 */  sb         $t3, 0x99($sp)
    /* 3E9E0 15011530 A3AC0098 */  sb         $t4, 0x98($sp)
    /* 3E9E4 15011534 A3A0009A */  sb         $zero, 0x9A($sp)
    /* 3E9E8 15011538 A3AD009B */  sb         $t5, 0x9B($sp)
    /* 3E9EC 1501153C E7B000B0 */  swc1       $f16, 0xB0($sp)
    /* 3E9F0 15011540 E7B000AC */  swc1       $f16, 0xAC($sp)
    /* 3E9F4 15011544 E7B200B8 */  swc1       $f18, 0xB8($sp)
    /* 3E9F8 15011548 E7B200B4 */  swc1       $f18, 0xB4($sp)
    /* 3E9FC 1501154C A3A00100 */  sb         $zero, 0x100($sp)
    /* 3EA00 15011550 A3A00101 */  sb         $zero, 0x101($sp)
    /* 3EA04 15011554 A3A00102 */  sb         $zero, 0x102($sp)
    /* 3EA08 15011558 A3A00103 */  sb         $zero, 0x103($sp)
    /* 3EA0C 1501155C E7A000F4 */  swc1       $f0, 0xF4($sp)
    /* 3EA10 15011560 A3A00104 */  sb         $zero, 0x104($sp)
    /* 3EA14 15011564 AFAE0010 */  sw         $t6, 0x10($sp)
    /* 3EA18 15011568 AFAF001C */  sw         $t7, 0x1C($sp)
    /* 3EA1C 1501156C AFB80020 */  sw         $t8, 0x20($sp)
    /* 3EA20 15011570 AFB90024 */  sw         $t9, 0x24($sp)
    /* 3EA24 15011574 27A400AC */  addiu      $a0, $sp, 0xAC
    /* 3EA28 15011578 2405007C */  addiu      $a1, $zero, 0x7C
    /* 3EA2C 1501157C 27A60054 */  addiu      $a2, $sp, 0x54
    /* 3EA30 15011580 00003825 */  or         $a3, $zero, $zero
    /* 3EA34 15011584 AFA00014 */  sw         $zero, 0x14($sp)
    /* 3EA38 15011588 AFA00018 */  sw         $zero, 0x18($sp)
    /* 3EA3C 1501158C E7A600C0 */  swc1       $f6, 0xC0($sp)
    /* 3EA40 15011590 E7A800C4 */  swc1       $f8, 0xC4($sp)
    /* 3EA44 15011594 E7AA00C8 */  swc1       $f10, 0xC8($sp)
    /* 3EA48 15011598 0D4501F4 */  jal        func_151407D0
    /* 3EA4C 1501159C E7A400CC */   swc1      $f4, 0xCC($sp)
    /* 3EA50 150115A0 10400004 */  beqz       $v0, .L150115B4
    /* 3EA54 150115A4 24440170 */   addiu     $a0, $v0, 0x170
    /* 3EA58 150115A8 27A50038 */  addiu      $a1, $sp, 0x38
    /* 3EA5C 150115AC 0C008BB0 */  jal        memcpy
    /* 3EA60 150115B0 2406001C */   addiu     $a2, $zero, 0x1C
  .L150115B4:
    /* 3EA64 150115B4 3C01C402 */  lui        $at, (0xC4020000 >> 16)
    /* 3EA68 150115B8 44810000 */  mtc1       $at, $f0
    /* 3EA6C 150115BC 3C014290 */  lui        $at, (0x42900000 >> 16)
    /* 3EA70 150115C0 44811000 */  mtc1       $at, $f2
    /* 3EA74 150115C4 3C018009 */  lui        $at, %hi(D_800964F4)
    /* 3EA78 150115C8 C42664F4 */  lwc1       $f6, %lo(D_800964F4)($at)
    /* 3EA7C 150115CC 3C018009 */  lui        $at, %hi(D_800964F8)
    /* 3EA80 150115D0 C42864F8 */  lwc1       $f8, %lo(D_800964F8)($at)
    /* 3EA84 150115D4 24080020 */  addiu      $t0, $zero, 0x20
    /* 3EA88 150115D8 2409FFFF */  addiu      $t1, $zero, -0x1
    /* 3EA8C 150115DC 240A00FF */  addiu      $t2, $zero, 0xFF
    /* 3EA90 150115E0 240B0001 */  addiu      $t3, $zero, 0x1
    /* 3EA94 150115E4 AFAB0024 */  sw         $t3, 0x24($sp)
    /* 3EA98 150115E8 AFAA0020 */  sw         $t2, 0x20($sp)
    /* 3EA9C 150115EC AFA9001C */  sw         $t1, 0x1C($sp)
    /* 3EAA0 150115F0 AFA80010 */  sw         $t0, 0x10($sp)
    /* 3EAA4 150115F4 27A400AC */  addiu      $a0, $sp, 0xAC
    /* 3EAA8 150115F8 2405007C */  addiu      $a1, $zero, 0x7C
    /* 3EAAC 150115FC 27A60054 */  addiu      $a2, $sp, 0x54
    /* 3EAB0 15011600 00003825 */  or         $a3, $zero, $zero
    /* 3EAB4 15011604 AFA00014 */  sw         $zero, 0x14($sp)
    /* 3EAB8 15011608 AFA00018 */  sw         $zero, 0x18($sp)
    /* 3EABC 1501160C E7A00070 */  swc1       $f0, 0x70($sp)
    /* 3EAC0 15011610 E7A0007C */  swc1       $f0, 0x7C($sp)
    /* 3EAC4 15011614 E7A20074 */  swc1       $f2, 0x74($sp)
    /* 3EAC8 15011618 E7A20080 */  swc1       $f2, 0x80($sp)
    /* 3EACC 1501161C E7A60078 */  swc1       $f6, 0x78($sp)
    /* 3EAD0 15011620 0D4501F4 */  jal        func_151407D0
    /* 3EAD4 15011624 E7A80084 */   swc1      $f8, 0x84($sp)
    /* 3EAD8 15011628 10400004 */  beqz       $v0, .L1501163C
    /* 3EADC 1501162C 24440170 */   addiu     $a0, $v0, 0x170
    /* 3EAE0 15011630 27A50038 */  addiu      $a1, $sp, 0x38
    /* 3EAE4 15011634 0C008BB0 */  jal        memcpy
    /* 3EAE8 15011638 2406001C */   addiu     $a2, $zero, 0x1C
  .L1501163C:
    /* 3EAEC 1501163C 3C01428C */  lui        $at, (0x428C0000 >> 16)
    /* 3EAF0 15011640 44810000 */  mtc1       $at, $f0
    /* 3EAF4 15011644 3C018009 */  lui        $at, %hi(D_800964FC)
    /* 3EAF8 15011648 C42264FC */  lwc1       $f2, %lo(D_800964FC)($at)
    /* 3EAFC 1501164C 3C018009 */  lui        $at, %hi(D_80096500)
    /* 3EB00 15011650 C42A6500 */  lwc1       $f10, %lo(D_80096500)($at)
    /* 3EB04 15011654 3C01C412 */  lui        $at, (0xC4120000 >> 16)
    /* 3EB08 15011658 44812000 */  mtc1       $at, $f4
    /* 3EB0C 1501165C 240C0020 */  addiu      $t4, $zero, 0x20
    /* 3EB10 15011660 240DFFFF */  addiu      $t5, $zero, -0x1
    /* 3EB14 15011664 240E00FF */  addiu      $t6, $zero, 0xFF
    /* 3EB18 15011668 240F0001 */  addiu      $t7, $zero, 0x1
    /* 3EB1C 1501166C AFAF0024 */  sw         $t7, 0x24($sp)
    /* 3EB20 15011670 AFAE0020 */  sw         $t6, 0x20($sp)
    /* 3EB24 15011674 AFAD001C */  sw         $t5, 0x1C($sp)
    /* 3EB28 15011678 AFAC0010 */  sw         $t4, 0x10($sp)
    /* 3EB2C 1501167C 27A400AC */  addiu      $a0, $sp, 0xAC
    /* 3EB30 15011680 2405007C */  addiu      $a1, $zero, 0x7C
    /* 3EB34 15011684 27A60054 */  addiu      $a2, $sp, 0x54
    /* 3EB38 15011688 00003825 */  or         $a3, $zero, $zero
    /* 3EB3C 1501168C AFA00014 */  sw         $zero, 0x14($sp)
    /* 3EB40 15011690 AFA00018 */  sw         $zero, 0x18($sp)
    /* 3EB44 15011694 E7A00074 */  swc1       $f0, 0x74($sp)
    /* 3EB48 15011698 E7A00080 */  swc1       $f0, 0x80($sp)
    /* 3EB4C 1501169C E7A20078 */  swc1       $f2, 0x78($sp)
    /* 3EB50 150116A0 E7A20084 */  swc1       $f2, 0x84($sp)
    /* 3EB54 150116A4 E7AA0070 */  swc1       $f10, 0x70($sp)
    /* 3EB58 150116A8 0D4501F4 */  jal        func_151407D0
    /* 3EB5C 150116AC E7A4007C */   swc1      $f4, 0x7C($sp)
    /* 3EB60 150116B0 10400004 */  beqz       $v0, .L150116C4
    /* 3EB64 150116B4 24440170 */   addiu     $a0, $v0, 0x170
    /* 3EB68 150116B8 27A50038 */  addiu      $a1, $sp, 0x38
    /* 3EB6C 150116BC 0C008BB0 */  jal        memcpy
    /* 3EB70 150116C0 2406001C */   addiu     $a2, $zero, 0x1C
  .L150116C4:
    /* 3EB74 150116C4 3C0143FD */  lui        $at, (0x43FD0000 >> 16)
    /* 3EB78 150116C8 44810000 */  mtc1       $at, $f0
    /* 3EB7C 150116CC 3C01423C */  lui        $at, (0x423C0000 >> 16)
    /* 3EB80 150116D0 44811000 */  mtc1       $at, $f2
    /* 3EB84 150116D4 3C018009 */  lui        $at, %hi(D_80096504)
    /* 3EB88 150116D8 C4266504 */  lwc1       $f6, %lo(D_80096504)($at)
    /* 3EB8C 150116DC 3C01C350 */  lui        $at, (0xC3500000 >> 16)
    /* 3EB90 150116E0 44814000 */  mtc1       $at, $f8
    /* 3EB94 150116E4 24180020 */  addiu      $t8, $zero, 0x20
    /* 3EB98 150116E8 2419FFFF */  addiu      $t9, $zero, -0x1
    /* 3EB9C 150116EC 240800FF */  addiu      $t0, $zero, 0xFF
    /* 3EBA0 150116F0 24090001 */  addiu      $t1, $zero, 0x1
    /* 3EBA4 150116F4 AFA90024 */  sw         $t1, 0x24($sp)
    /* 3EBA8 150116F8 AFA80020 */  sw         $t0, 0x20($sp)
    /* 3EBAC 150116FC AFB9001C */  sw         $t9, 0x1C($sp)
    /* 3EBB0 15011700 AFB80010 */  sw         $t8, 0x10($sp)
    /* 3EBB4 15011704 27A400AC */  addiu      $a0, $sp, 0xAC
    /* 3EBB8 15011708 2405007C */  addiu      $a1, $zero, 0x7C
    /* 3EBBC 1501170C 27A60054 */  addiu      $a2, $sp, 0x54
    /* 3EBC0 15011710 00003825 */  or         $a3, $zero, $zero
    /* 3EBC4 15011714 AFA00014 */  sw         $zero, 0x14($sp)
    /* 3EBC8 15011718 AFA00018 */  sw         $zero, 0x18($sp)
    /* 3EBCC 1501171C E7A00070 */  swc1       $f0, 0x70($sp)
    /* 3EBD0 15011720 E7A0007C */  swc1       $f0, 0x7C($sp)
    /* 3EBD4 15011724 E7A20074 */  swc1       $f2, 0x74($sp)
    /* 3EBD8 15011728 E7A20080 */  swc1       $f2, 0x80($sp)
    /* 3EBDC 1501172C E7A60078 */  swc1       $f6, 0x78($sp)
    /* 3EBE0 15011730 0D4501F4 */  jal        func_151407D0
    /* 3EBE4 15011734 E7A80084 */   swc1      $f8, 0x84($sp)
    /* 3EBE8 15011738 10400004 */  beqz       $v0, .L1501174C
    /* 3EBEC 1501173C 24440170 */   addiu     $a0, $v0, 0x170
    /* 3EBF0 15011740 27A50038 */  addiu      $a1, $sp, 0x38
    /* 3EBF4 15011744 0C008BB0 */  jal        memcpy
    /* 3EBF8 15011748 2406001C */   addiu     $a2, $zero, 0x1C
  .L1501174C:
    /* 3EBFC 1501174C 8FBF002C */  lw         $ra, 0x2C($sp)
    /* 3EC00 15011750 27BD0108 */  addiu      $sp, $sp, 0x108
    /* 3EC04 15011754 03E00008 */  jr         $ra
    /* 3EC08 15011758 00000000 */   nop
endlabel func_150113E0
