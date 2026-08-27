nonmatching osPfsChecker2, 0x6C4

glabel osPfsChecker2
    /* 21E760 151F12B0 27BDFB78 */  addiu      $sp, $sp, -0x488
    /* 21E764 151F12B4 AFBF001C */  sw         $ra, 0x1C($sp)
    /* 21E768 151F12B8 AFA40488 */  sw         $a0, 0x488($sp)
    /* 21E76C 151F12BC AFA00034 */  sw         $zero, 0x34($sp)
    /* 21E770 151F12C0 0C00A078 */  jal        __osCheckId
    /* 21E774 151F12C4 8FA40488 */   lw        $a0, 0x488($sp)
    /* 21E778 151F12C8 AFA20480 */  sw         $v0, 0x480($sp)
    /* 21E77C 151F12CC 8FAE0480 */  lw         $t6, 0x480($sp)
    /* 21E780 151F12D0 24010002 */  addiu      $at, $zero, 0x2
    /* 21E784 151F12D4 15C10004 */  bne        $t6, $at, .L151F12E8
    /* 21E788 151F12D8 00000000 */   nop
    /* 21E78C 151F12DC 0C009FE1 */  jal        __osGetId
    /* 21E790 151F12E0 8FA40488 */   lw        $a0, 0x488($sp)
    /* 21E794 151F12E4 AFA20480 */  sw         $v0, 0x480($sp)
  .L151F12E8:
    /* 21E798 151F12E8 8FAF0480 */  lw         $t7, 0x480($sp)
    /* 21E79C 151F12EC 11E00003 */  beqz       $t7, .L151F12FC
    /* 21E7A0 151F12F0 00000000 */   nop
    /* 21E7A4 151F12F4 1000019B */  b          .L151F1964
    /* 21E7A8 151F12F8 01E01025 */   or        $v0, $t7, $zero
  .L151F12FC:
    /* 21E7AC 151F12FC 8FA40488 */  lw         $a0, 0x488($sp)
    /* 21E7B0 151F1300 0C00A34D */  jal        corrupted_init
    /* 21E7B4 151F1304 27A50038 */   addiu     $a1, $sp, 0x38
    /* 21E7B8 151F1308 AFA20480 */  sw         $v0, 0x480($sp)
    /* 21E7BC 151F130C 8FB80480 */  lw         $t8, 0x480($sp)
    /* 21E7C0 151F1310 13000003 */  beqz       $t8, .L151F1320
    /* 21E7C4 151F1314 00000000 */   nop
    /* 21E7C8 151F1318 10000192 */  b          .L151F1964
    /* 21E7CC 151F131C 03001025 */   or        $v0, $t8, $zero
  .L151F1320:
    /* 21E7D0 151F1320 8FB90488 */  lw         $t9, 0x488($sp)
    /* 21E7D4 151F1324 AFA00484 */  sw         $zero, 0x484($sp)
    /* 21E7D8 151F1328 8F280050 */  lw         $t0, 0x50($t9)
    /* 21E7DC 151F132C 190000C0 */  blez       $t0, .L151F1630
    /* 21E7E0 151F1330 00000000 */   nop
  .L151F1334:
    /* 21E7E4 151F1334 8FA90488 */  lw         $t1, 0x488($sp)
    /* 21E7E8 151F1338 8FAB0484 */  lw         $t3, 0x484($sp)
    /* 21E7EC 151F133C 27A7025C */  addiu      $a3, $sp, 0x25C
    /* 21E7F0 151F1340 8D2A005C */  lw         $t2, 0x5C($t1)
    /* 21E7F4 151F1344 8D240004 */  lw         $a0, 0x4($t1)
    /* 21E7F8 151F1348 8D250008 */  lw         $a1, 0x8($t1)
    /* 21E7FC 151F134C 0C009708 */  jal        __osContRamRead
    /* 21E800 151F1350 014B3021 */   addu      $a2, $t2, $t3
    /* 21E804 151F1354 AFA20480 */  sw         $v0, 0x480($sp)
    /* 21E808 151F1358 8FAC0480 */  lw         $t4, 0x480($sp)
    /* 21E80C 151F135C 11800003 */  beqz       $t4, .L151F136C
    /* 21E810 151F1360 00000000 */   nop
    /* 21E814 151F1364 1000017F */  b          .L151F1964
    /* 21E818 151F1368 01801025 */   or        $v0, $t4, $zero
  .L151F136C:
    /* 21E81C 151F136C 97AD0260 */  lhu        $t5, 0x260($sp)
    /* 21E820 151F1370 11A0007D */  beqz       $t5, .L151F1568
    /* 21E824 151F1374 00000000 */   nop
    /* 21E828 151F1378 8FAE025C */  lw         $t6, 0x25C($sp)
    /* 21E82C 151F137C 11C0007A */  beqz       $t6, .L151F1568
    /* 21E830 151F1380 00000000 */   nop
    /* 21E834 151F1384 97AF0262 */  lhu        $t7, 0x262($sp)
    /* 21E838 151F1388 8FA80488 */  lw         $t0, 0x488($sp)
    /* 21E83C 151F138C 241800FF */  addiu      $t8, $zero, 0xFF
    /* 21E840 151F1390 A7AF047C */  sh         $t7, 0x47C($sp)
    /* 21E844 151F1394 AFA0002C */  sw         $zero, 0x2C($sp)
    /* 21E848 151F1398 AFA00028 */  sw         $zero, 0x28($sp)
    /* 21E84C 151F139C A3B80033 */  sb         $t8, 0x33($sp)
    /* 21E850 151F13A0 97B9047C */  lhu        $t9, 0x47C($sp)
    /* 21E854 151F13A4 8D090060 */  lw         $t1, 0x60($t0)
    /* 21E858 151F13A8 0329082A */  slt        $at, $t9, $t1
    /* 21E85C 151F13AC 14200042 */  bnez       $at, .L151F14B8
    /* 21E860 151F13B0 00000000 */   nop
    /* 21E864 151F13B4 93AA047C */  lbu        $t2, 0x47C($sp)
    /* 21E868 151F13B8 910B0064 */  lbu        $t3, 0x64($t0)
    /* 21E86C 151F13BC 014B082A */  slt        $at, $t2, $t3
    /* 21E870 151F13C0 1020003D */  beqz       $at, .L151F14B8
    /* 21E874 151F13C4 00000000 */   nop
    /* 21E878 151F13C8 93AC047D */  lbu        $t4, 0x47D($sp)
    /* 21E87C 151F13CC 1980003A */  blez       $t4, .L151F14B8
    /* 21E880 151F13D0 29810080 */   slti      $at, $t4, 0x80
    /* 21E884 151F13D4 10200038 */  beqz       $at, .L151F14B8
    /* 21E888 151F13D8 00000000 */   nop
  .L151F13DC:
    /* 21E88C 151F13DC 93AD0033 */  lbu        $t5, 0x33($sp)
    /* 21E890 151F13E0 93AE047C */  lbu        $t6, 0x47C($sp)
    /* 21E894 151F13E4 11AE000F */  beq        $t5, $t6, .L151F1424
    /* 21E898 151F13E8 00000000 */   nop
    /* 21E89C 151F13EC A3AE0033 */  sb         $t6, 0x33($sp)
    /* 21E8A0 151F13F0 8FA40488 */  lw         $a0, 0x488($sp)
    /* 21E8A4 151F13F4 27A5027C */  addiu      $a1, $sp, 0x27C
    /* 21E8A8 151F13F8 00003025 */  or         $a2, $zero, $zero
    /* 21E8AC 151F13FC 0C00A0B7 */  jal        __osPfsRWInode
    /* 21E8B0 151F1400 01C03825 */   or        $a3, $t6, $zero
    /* 21E8B4 151F1404 AFA20480 */  sw         $v0, 0x480($sp)
    /* 21E8B8 151F1408 8FAF0480 */  lw         $t7, 0x480($sp)
    /* 21E8BC 151F140C 11E00005 */  beqz       $t7, .L151F1424
    /* 21E8C0 151F1410 24010003 */   addiu     $at, $zero, 0x3
    /* 21E8C4 151F1414 11E10003 */  beq        $t7, $at, .L151F1424
    /* 21E8C8 151F1418 00000000 */   nop
    /* 21E8CC 151F141C 10000151 */  b          .L151F1964
    /* 21E8D0 151F1420 01E01025 */   or        $v0, $t7, $zero
  .L151F1424:
    /* 21E8D4 151F1424 97B8047C */  lhu        $t8, 0x47C($sp)
    /* 21E8D8 151F1428 8FA40488 */  lw         $a0, 0x488($sp)
    /* 21E8DC 151F142C 27A60038 */  addiu      $a2, $sp, 0x38
    /* 21E8E0 151F1430 A7B80004 */  sh         $t8, 0x4($sp)
    /* 21E8E4 151F1434 0C00A3BA */  jal        corrupted
    /* 21E8E8 151F1438 8FA50004 */   lw        $a1, 0x4($sp)
    /* 21E8EC 151F143C 8FB90028 */  lw         $t9, 0x28($sp)
    /* 21E8F0 151F1440 00594823 */  subu       $t1, $v0, $t9
    /* 21E8F4 151F1444 AFA9002C */  sw         $t1, 0x2C($sp)
    /* 21E8F8 151F1448 8FA8002C */  lw         $t0, 0x2C($sp)
    /* 21E8FC 151F144C 1500001A */  bnez       $t0, .L151F14B8
    /* 21E900 151F1450 00000000 */   nop
    /* 21E904 151F1454 93AC047D */  lbu        $t4, 0x47D($sp)
    /* 21E908 151F1458 240A0001 */  addiu      $t2, $zero, 0x1
    /* 21E90C 151F145C 27AE027C */  addiu      $t6, $sp, 0x27C
    /* 21E910 151F1460 000C6840 */  sll        $t5, $t4, 1
    /* 21E914 151F1464 AFAA0028 */  sw         $t2, 0x28($sp)
    /* 21E918 151F1468 01AE7821 */  addu       $t7, $t5, $t6
    /* 21E91C 151F146C 95E10000 */  lhu        $at, 0x0($t7)
    /* 21E920 151F1470 27AB047C */  addiu      $t3, $sp, 0x47C
    /* 21E924 151F1474 A5610000 */  sh         $at, 0x0($t3)
    /* 21E928 151F1478 8FAA0488 */  lw         $t2, 0x488($sp)
    /* 21E92C 151F147C 97A8047C */  lhu        $t0, 0x47C($sp)
    /* 21E930 151F1480 8D4C0060 */  lw         $t4, 0x60($t2)
    /* 21E934 151F1484 010C082A */  slt        $at, $t0, $t4
    /* 21E938 151F1488 1420000B */  bnez       $at, .L151F14B8
    /* 21E93C 151F148C 00000000 */   nop
    /* 21E940 151F1490 93AD047C */  lbu        $t5, 0x47C($sp)
    /* 21E944 151F1494 914E0064 */  lbu        $t6, 0x64($t2)
    /* 21E948 151F1498 01AE082A */  slt        $at, $t5, $t6
    /* 21E94C 151F149C 10200006 */  beqz       $at, .L151F14B8
    /* 21E950 151F14A0 00000000 */   nop
    /* 21E954 151F14A4 93B9047D */  lbu        $t9, 0x47D($sp)
    /* 21E958 151F14A8 1B200003 */  blez       $t9, .L151F14B8
    /* 21E95C 151F14AC 2B210080 */   slti      $at, $t9, 0x80
    /* 21E960 151F14B0 1420FFCA */  bnez       $at, .L151F13DC
    /* 21E964 151F14B4 00000000 */   nop
  .L151F14B8:
    /* 21E968 151F14B8 8FB8002C */  lw         $t8, 0x2C($sp)
    /* 21E96C 151F14BC 17000005 */  bnez       $t8, .L151F14D4
    /* 21E970 151F14C0 00000000 */   nop
    /* 21E974 151F14C4 97AB047C */  lhu        $t3, 0x47C($sp)
    /* 21E978 151F14C8 24010001 */  addiu      $at, $zero, 0x1
    /* 21E97C 151F14CC 11610050 */  beq        $t3, $at, .L151F1610
    /* 21E980 151F14D0 00000000 */   nop
  .L151F14D4:
    /* 21E984 151F14D4 8FAF0488 */  lw         $t7, 0x488($sp)
    /* 21E988 151F14D8 A7A00260 */  sh         $zero, 0x260($sp)
    /* 21E98C 151F14DC AFA0025C */  sw         $zero, 0x25C($sp)
    /* 21E990 151F14E0 A7A00262 */  sh         $zero, 0x262($sp)
    /* 21E994 151F14E4 A3A00264 */  sb         $zero, 0x264($sp)
    /* 21E998 151F14E8 A7A00266 */  sh         $zero, 0x266($sp)
    /* 21E99C 151F14EC 91E90065 */  lbu        $t1, 0x65($t7)
    /* 21E9A0 151F14F0 1120000A */  beqz       $t1, .L151F151C
    /* 21E9A4 151F14F4 00000000 */   nop
    /* 21E9A8 151F14F8 A1E00065 */  sb         $zero, 0x65($t7)
    /* 21E9AC 151F14FC 0C00A17F */  jal        __osPfsSelectBank
    /* 21E9B0 151F1500 8FA40488 */   lw        $a0, 0x488($sp)
    /* 21E9B4 151F1504 AFA20480 */  sw         $v0, 0x480($sp)
    /* 21E9B8 151F1508 8FA80480 */  lw         $t0, 0x480($sp)
    /* 21E9BC 151F150C 11000003 */  beqz       $t0, .L151F151C
    /* 21E9C0 151F1510 00000000 */   nop
    /* 21E9C4 151F1514 10000113 */  b          .L151F1964
    /* 21E9C8 151F1518 01001025 */   or        $v0, $t0, $zero
  .L151F151C:
    /* 21E9CC 151F151C 8FAC0488 */  lw         $t4, 0x488($sp)
    /* 21E9D0 151F1520 8FAD0484 */  lw         $t5, 0x484($sp)
    /* 21E9D4 151F1524 27A7025C */  addiu      $a3, $sp, 0x25C
    /* 21E9D8 151F1528 8D8A005C */  lw         $t2, 0x5C($t4)
    /* 21E9DC 151F152C 8D840004 */  lw         $a0, 0x4($t4)
    /* 21E9E0 151F1530 8D850008 */  lw         $a1, 0x8($t4)
    /* 21E9E4 151F1534 AFA00010 */  sw         $zero, 0x10($sp)
    /* 21E9E8 151F1538 0C00961C */  jal        __osContRamWrite
    /* 21E9EC 151F153C 014D3021 */   addu      $a2, $t2, $t5
    /* 21E9F0 151F1540 AFA20480 */  sw         $v0, 0x480($sp)
    /* 21E9F4 151F1544 8FAE0480 */  lw         $t6, 0x480($sp)
    /* 21E9F8 151F1548 11C00003 */  beqz       $t6, .L151F1558
    /* 21E9FC 151F154C 00000000 */   nop
    /* 21EA00 151F1550 10000104 */  b          .L151F1964
    /* 21EA04 151F1554 01C01025 */   or        $v0, $t6, $zero
  .L151F1558:
    /* 21EA08 151F1558 8FB90034 */  lw         $t9, 0x34($sp)
    /* 21EA0C 151F155C 27380001 */  addiu      $t8, $t9, 0x1
    /* 21EA10 151F1560 1000002B */  b          .L151F1610
    /* 21EA14 151F1564 AFB80034 */   sw        $t8, 0x34($sp)
  .L151F1568:
    /* 21EA18 151F1568 97AB0260 */  lhu        $t3, 0x260($sp)
    /* 21EA1C 151F156C 15600004 */  bnez       $t3, .L151F1580
    /* 21EA20 151F1570 00000000 */   nop
    /* 21EA24 151F1574 8FA9025C */  lw         $t1, 0x25C($sp)
    /* 21EA28 151F1578 11200025 */  beqz       $t1, .L151F1610
    /* 21EA2C 151F157C 00000000 */   nop
  .L151F1580:
    /* 21EA30 151F1580 8FAF0488 */  lw         $t7, 0x488($sp)
    /* 21EA34 151F1584 A7A00260 */  sh         $zero, 0x260($sp)
    /* 21EA38 151F1588 AFA0025C */  sw         $zero, 0x25C($sp)
    /* 21EA3C 151F158C A7A00262 */  sh         $zero, 0x262($sp)
    /* 21EA40 151F1590 A3A00264 */  sb         $zero, 0x264($sp)
    /* 21EA44 151F1594 A7A00266 */  sh         $zero, 0x266($sp)
    /* 21EA48 151F1598 91E80065 */  lbu        $t0, 0x65($t7)
    /* 21EA4C 151F159C 1100000A */  beqz       $t0, .L151F15C8
    /* 21EA50 151F15A0 00000000 */   nop
    /* 21EA54 151F15A4 A1E00065 */  sb         $zero, 0x65($t7)
    /* 21EA58 151F15A8 0C00A17F */  jal        __osPfsSelectBank
    /* 21EA5C 151F15AC 8FA40488 */   lw        $a0, 0x488($sp)
    /* 21EA60 151F15B0 AFA20480 */  sw         $v0, 0x480($sp)
    /* 21EA64 151F15B4 8FAC0480 */  lw         $t4, 0x480($sp)
    /* 21EA68 151F15B8 11800003 */  beqz       $t4, .L151F15C8
    /* 21EA6C 151F15BC 00000000 */   nop
    /* 21EA70 151F15C0 100000E8 */  b          .L151F1964
    /* 21EA74 151F15C4 01801025 */   or        $v0, $t4, $zero
  .L151F15C8:
    /* 21EA78 151F15C8 8FAA0488 */  lw         $t2, 0x488($sp)
    /* 21EA7C 151F15CC 8FAE0484 */  lw         $t6, 0x484($sp)
    /* 21EA80 151F15D0 27A7025C */  addiu      $a3, $sp, 0x25C
    /* 21EA84 151F15D4 8D4D005C */  lw         $t5, 0x5C($t2)
    /* 21EA88 151F15D8 8D440004 */  lw         $a0, 0x4($t2)
    /* 21EA8C 151F15DC 8D450008 */  lw         $a1, 0x8($t2)
    /* 21EA90 151F15E0 AFA00010 */  sw         $zero, 0x10($sp)
    /* 21EA94 151F15E4 0C00961C */  jal        __osContRamWrite
    /* 21EA98 151F15E8 01AE3021 */   addu      $a2, $t5, $t6
    /* 21EA9C 151F15EC AFA20480 */  sw         $v0, 0x480($sp)
    /* 21EAA0 151F15F0 8FB90480 */  lw         $t9, 0x480($sp)
    /* 21EAA4 151F15F4 13200003 */  beqz       $t9, .L151F1604
    /* 21EAA8 151F15F8 00000000 */   nop
    /* 21EAAC 151F15FC 100000D9 */  b          .L151F1964
    /* 21EAB0 151F1600 03201025 */   or        $v0, $t9, $zero
  .L151F1604:
    /* 21EAB4 151F1604 8FB80034 */  lw         $t8, 0x34($sp)
    /* 21EAB8 151F1608 270B0001 */  addiu      $t3, $t8, 0x1
    /* 21EABC 151F160C AFAB0034 */  sw         $t3, 0x34($sp)
  .L151F1610:
    /* 21EAC0 151F1610 8FA90484 */  lw         $t1, 0x484($sp)
    /* 21EAC4 151F1614 8FAF0488 */  lw         $t7, 0x488($sp)
    /* 21EAC8 151F1618 25280001 */  addiu      $t0, $t1, 0x1
    /* 21EACC 151F161C AFA80484 */  sw         $t0, 0x484($sp)
    /* 21EAD0 151F1620 8DEC0050 */  lw         $t4, 0x50($t7)
    /* 21EAD4 151F1624 010C082A */  slt        $at, $t0, $t4
    /* 21EAD8 151F1628 1420FF42 */  bnez       $at, .L151F1334
    /* 21EADC 151F162C 00000000 */   nop
  .L151F1630:
    /* 21EAE0 151F1630 8FAA0488 */  lw         $t2, 0x488($sp)
    /* 21EAE4 151F1634 AFA00484 */  sw         $zero, 0x484($sp)
    /* 21EAE8 151F1638 8D4D0050 */  lw         $t5, 0x50($t2)
    /* 21EAEC 151F163C 19A0002C */  blez       $t5, .L151F16F0
    /* 21EAF0 151F1640 00000000 */   nop
  .L151F1644:
    /* 21EAF4 151F1644 8FAE0488 */  lw         $t6, 0x488($sp)
    /* 21EAF8 151F1648 8FB80484 */  lw         $t8, 0x484($sp)
    /* 21EAFC 151F164C 27A7025C */  addiu      $a3, $sp, 0x25C
    /* 21EB00 151F1650 8DD9005C */  lw         $t9, 0x5C($t6)
    /* 21EB04 151F1654 8DC40004 */  lw         $a0, 0x4($t6)
    /* 21EB08 151F1658 8DC50008 */  lw         $a1, 0x8($t6)
    /* 21EB0C 151F165C 0C009708 */  jal        __osContRamRead
    /* 21EB10 151F1660 03383021 */   addu      $a2, $t9, $t8
    /* 21EB14 151F1664 AFA20480 */  sw         $v0, 0x480($sp)
    /* 21EB18 151F1668 8FAB0480 */  lw         $t3, 0x480($sp)
    /* 21EB1C 151F166C 11600003 */  beqz       $t3, .L151F167C
    /* 21EB20 151F1670 00000000 */   nop
    /* 21EB24 151F1674 100000BB */  b          .L151F1964
    /* 21EB28 151F1678 01601025 */   or        $v0, $t3, $zero
  .L151F167C:
    /* 21EB2C 151F167C 97A90260 */  lhu        $t1, 0x260($sp)
    /* 21EB30 151F1680 1120000F */  beqz       $t1, .L151F16C0
    /* 21EB34 151F1684 00000000 */   nop
    /* 21EB38 151F1688 8FAF025C */  lw         $t7, 0x25C($sp)
    /* 21EB3C 151F168C 11E0000C */  beqz       $t7, .L151F16C0
    /* 21EB40 151F1690 00000000 */   nop
    /* 21EB44 151F1694 8FAC0488 */  lw         $t4, 0x488($sp)
    /* 21EB48 151F1698 97A80262 */  lhu        $t0, 0x262($sp)
    /* 21EB4C 151F169C 958A0062 */  lhu        $t2, 0x62($t4)
    /* 21EB50 151F16A0 010A082A */  slt        $at, $t0, $t2
    /* 21EB54 151F16A4 14200006 */  bnez       $at, .L151F16C0
    /* 21EB58 151F16A8 00000000 */   nop
    /* 21EB5C 151F16AC 8FAD0484 */  lw         $t5, 0x484($sp)
    /* 21EB60 151F16B0 000D7040 */  sll        $t6, $t5, 1
    /* 21EB64 151F16B4 03AEC821 */  addu       $t9, $sp, $t6
    /* 21EB68 151F16B8 10000005 */  b          .L151F16D0
    /* 21EB6C 151F16BC A728023C */   sh        $t0, 0x23C($t9)
  .L151F16C0:
    /* 21EB70 151F16C0 8FB80484 */  lw         $t8, 0x484($sp)
    /* 21EB74 151F16C4 00185840 */  sll        $t3, $t8, 1
    /* 21EB78 151F16C8 03AB4821 */  addu       $t1, $sp, $t3
    /* 21EB7C 151F16CC A520023C */  sh         $zero, 0x23C($t1)
  .L151F16D0:
    /* 21EB80 151F16D0 8FAF0484 */  lw         $t7, 0x484($sp)
    /* 21EB84 151F16D4 8FAA0488 */  lw         $t2, 0x488($sp)
    /* 21EB88 151F16D8 25EC0001 */  addiu      $t4, $t7, 0x1
    /* 21EB8C 151F16DC AFAC0484 */  sw         $t4, 0x484($sp)
    /* 21EB90 151F16E0 8D4D0050 */  lw         $t5, 0x50($t2)
    /* 21EB94 151F16E4 018D082A */  slt        $at, $t4, $t5
    /* 21EB98 151F16E8 1420FFD6 */  bnez       $at, .L151F1644
    /* 21EB9C 151F16EC 00000000 */   nop
  .L151F16F0:
    /* 21EBA0 151F16F0 8FA80488 */  lw         $t0, 0x488($sp)
    /* 21EBA4 151F16F4 A3A00033 */  sb         $zero, 0x33($sp)
    /* 21EBA8 151F16F8 910E0064 */  lbu        $t6, 0x64($t0)
    /* 21EBAC 151F16FC 19C0008B */  blez       $t6, .L151F192C
    /* 21EBB0 151F1700 00000000 */   nop
  .L151F1704:
    /* 21EBB4 151F1704 8FA40488 */  lw         $a0, 0x488($sp)
    /* 21EBB8 151F1708 27A5027C */  addiu      $a1, $sp, 0x27C
    /* 21EBBC 151F170C 00003025 */  or         $a2, $zero, $zero
    /* 21EBC0 151F1710 0C00A0B7 */  jal        __osPfsRWInode
    /* 21EBC4 151F1714 93A70033 */   lbu       $a3, 0x33($sp)
    /* 21EBC8 151F1718 AFA20480 */  sw         $v0, 0x480($sp)
    /* 21EBCC 151F171C 8FB90480 */  lw         $t9, 0x480($sp)
    /* 21EBD0 151F1720 13200005 */  beqz       $t9, .L151F1738
    /* 21EBD4 151F1724 24010003 */   addiu     $at, $zero, 0x3
    /* 21EBD8 151F1728 13210003 */  beq        $t9, $at, .L151F1738
    /* 21EBDC 151F172C 00000000 */   nop
    /* 21EBE0 151F1730 1000008C */  b          .L151F1964
    /* 21EBE4 151F1734 03201025 */   or        $v0, $t9, $zero
  .L151F1738:
    /* 21EBE8 151F1738 93B80033 */  lbu        $t8, 0x33($sp)
    /* 21EBEC 151F173C 1B000004 */  blez       $t8, .L151F1750
    /* 21EBF0 151F1740 00000000 */   nop
    /* 21EBF4 151F1744 240B0001 */  addiu      $t3, $zero, 0x1
    /* 21EBF8 151F1748 10000004 */  b          .L151F175C
    /* 21EBFC 151F174C AFAB0024 */   sw        $t3, 0x24($sp)
  .L151F1750:
    /* 21EC00 151F1750 8FA90488 */  lw         $t1, 0x488($sp)
    /* 21EC04 151F1754 8D2F0060 */  lw         $t7, 0x60($t1)
    /* 21EC08 151F1758 AFAF0024 */  sw         $t7, 0x24($sp)
  .L151F175C:
    /* 21EC0C 151F175C 8FAA0024 */  lw         $t2, 0x24($sp)
    /* 21EC10 151F1760 AFA00484 */  sw         $zero, 0x484($sp)
    /* 21EC14 151F1764 1940000D */  blez       $t2, .L151F179C
    /* 21EC18 151F1768 00000000 */   nop
  .L151F176C:
    /* 21EC1C 151F176C 8FAC0484 */  lw         $t4, 0x484($sp)
    /* 21EC20 151F1770 000C6840 */  sll        $t5, $t4, 1
    /* 21EC24 151F1774 03AD4021 */  addu       $t0, $sp, $t5
    /* 21EC28 151F1778 9508027C */  lhu        $t0, 0x27C($t0)
    /* 21EC2C 151F177C 03AD7021 */  addu       $t6, $sp, $t5
    /* 21EC30 151F1780 A5C8037C */  sh         $t0, 0x37C($t6)
    /* 21EC34 151F1784 8FB90484 */  lw         $t9, 0x484($sp)
    /* 21EC38 151F1788 8FAB0024 */  lw         $t3, 0x24($sp)
    /* 21EC3C 151F178C 27380001 */  addiu      $t8, $t9, 0x1
    /* 21EC40 151F1790 030B082A */  slt        $at, $t8, $t3
    /* 21EC44 151F1794 1420FFF5 */  bnez       $at, .L151F176C
    /* 21EC48 151F1798 AFB80484 */   sw        $t8, 0x484($sp)
  .L151F179C:
    /* 21EC4C 151F179C 8FA90484 */  lw         $t1, 0x484($sp)
    /* 21EC50 151F17A0 29210080 */  slti       $at, $t1, 0x80
    /* 21EC54 151F17A4 1020000B */  beqz       $at, .L151F17D4
    /* 21EC58 151F17A8 00000000 */   nop
  .L151F17AC:
    /* 21EC5C 151F17AC 8FAA0484 */  lw         $t2, 0x484($sp)
    /* 21EC60 151F17B0 240F0003 */  addiu      $t7, $zero, 0x3
    /* 21EC64 151F17B4 000A6040 */  sll        $t4, $t2, 1
    /* 21EC68 151F17B8 03AC4021 */  addu       $t0, $sp, $t4
    /* 21EC6C 151F17BC A50F037C */  sh         $t7, 0x37C($t0)
    /* 21EC70 151F17C0 8FAD0484 */  lw         $t5, 0x484($sp)
    /* 21EC74 151F17C4 25AE0001 */  addiu      $t6, $t5, 0x1
    /* 21EC78 151F17C8 29C10080 */  slti       $at, $t6, 0x80
    /* 21EC7C 151F17CC 1420FFF7 */  bnez       $at, .L151F17AC
    /* 21EC80 151F17D0 AFAE0484 */   sw        $t6, 0x484($sp)
  .L151F17D4:
    /* 21EC84 151F17D4 8FB90488 */  lw         $t9, 0x488($sp)
    /* 21EC88 151F17D8 AFA00484 */  sw         $zero, 0x484($sp)
    /* 21EC8C 151F17DC 8F380050 */  lw         $t8, 0x50($t9)
    /* 21EC90 151F17E0 1B00003E */  blez       $t8, .L151F18DC
    /* 21EC94 151F17E4 00000000 */   nop
  .L151F17E8:
    /* 21EC98 151F17E8 8FAB0484 */  lw         $t3, 0x484($sp)
    /* 21EC9C 151F17EC 27AA023C */  addiu      $t2, $sp, 0x23C
    /* 21ECA0 151F17F0 93A80033 */  lbu        $t0, 0x33($sp)
    /* 21ECA4 151F17F4 000B4840 */  sll        $t1, $t3, 1
    /* 21ECA8 151F17F8 012A7821 */  addu       $t7, $t1, $t2
    /* 21ECAC 151F17FC 91EC0000 */  lbu        $t4, 0x0($t7)
    /* 21ECB0 151F1800 1588002E */  bne        $t4, $t0, .L151F18BC
    /* 21ECB4 151F1804 00000000 */   nop
    /* 21ECB8 151F1808 8FAE0488 */  lw         $t6, 0x488($sp)
    /* 21ECBC 151F180C 95ED0000 */  lhu        $t5, 0x0($t7)
    /* 21ECC0 151F1810 95D90062 */  lhu        $t9, 0x62($t6)
    /* 21ECC4 151F1814 01B9082A */  slt        $at, $t5, $t9
    /* 21ECC8 151F1818 14200028 */  bnez       $at, .L151F18BC
    /* 21ECCC 151F181C 00000000 */   nop
  .L151F1820:
    /* 21ECD0 151F1820 8FB80484 */  lw         $t8, 0x484($sp)
    /* 21ECD4 151F1824 27A8027C */  addiu      $t0, $sp, 0x27C
    /* 21ECD8 151F1828 27AA0020 */  addiu      $t2, $sp, 0x20
    /* 21ECDC 151F182C 00185840 */  sll        $t3, $t8, 1
    /* 21ECE0 151F1830 03AB4821 */  addu       $t1, $sp, $t3
    /* 21ECE4 151F1834 9129023D */  lbu        $t1, 0x23D($t1)
    /* 21ECE8 151F1838 00096040 */  sll        $t4, $t1, 1
    /* 21ECEC 151F183C 01887821 */  addu       $t7, $t4, $t0
    /* 21ECF0 151F1840 A3A90023 */  sb         $t1, 0x23($sp)
    /* 21ECF4 151F1844 95E10000 */  lhu        $at, 0x0($t7)
    /* 21ECF8 151F1848 27A80020 */  addiu      $t0, $sp, 0x20
    /* 21ECFC 151F184C 27A9037C */  addiu      $t1, $sp, 0x37C
    /* 21ED00 151F1850 A5410000 */  sh         $at, 0x0($t2)
    /* 21ED04 151F1854 93B80023 */  lbu        $t8, 0x23($sp)
    /* 21ED08 151F1858 95010000 */  lhu        $at, 0x0($t0)
    /* 21ED0C 151F185C 00185840 */  sll        $t3, $t8, 1
    /* 21ED10 151F1860 01696021 */  addu       $t4, $t3, $t1
    /* 21ED14 151F1864 A5810000 */  sh         $at, 0x0($t4)
    /* 21ED18 151F1868 8FAF0484 */  lw         $t7, 0x484($sp)
    /* 21ED1C 151F186C 27A90020 */  addiu      $t1, $sp, 0x20
    /* 21ED20 151F1870 95210000 */  lhu        $at, 0x0($t1)
    /* 21ED24 151F1874 27B8023C */  addiu      $t8, $sp, 0x23C
    /* 21ED28 151F1878 000FC840 */  sll        $t9, $t7, 1
    /* 21ED2C 151F187C 03385821 */  addu       $t3, $t9, $t8
    /* 21ED30 151F1880 A5610000 */  sh         $at, 0x0($t3)
    /* 21ED34 151F1884 8FA80484 */  lw         $t0, 0x484($sp)
    /* 21ED38 151F1888 27AF023C */  addiu      $t7, $sp, 0x23C
    /* 21ED3C 151F188C 93AD0033 */  lbu        $t5, 0x33($sp)
    /* 21ED40 151F1890 00085040 */  sll        $t2, $t0, 1
    /* 21ED44 151F1894 014FC821 */  addu       $t9, $t2, $t7
    /* 21ED48 151F1898 93380000 */  lbu        $t8, 0x0($t9)
    /* 21ED4C 151F189C 170D0007 */  bne        $t8, $t5, .L151F18BC
    /* 21ED50 151F18A0 00000000 */   nop
    /* 21ED54 151F18A4 8FAB0488 */  lw         $t3, 0x488($sp)
    /* 21ED58 151F18A8 972E0000 */  lhu        $t6, 0x0($t9)
    /* 21ED5C 151F18AC 95690062 */  lhu        $t1, 0x62($t3)
    /* 21ED60 151F18B0 01C9082A */  slt        $at, $t6, $t1
    /* 21ED64 151F18B4 1020FFDA */  beqz       $at, .L151F1820
    /* 21ED68 151F18B8 00000000 */   nop
  .L151F18BC:
    /* 21ED6C 151F18BC 8FAC0484 */  lw         $t4, 0x484($sp)
    /* 21ED70 151F18C0 8FAA0488 */  lw         $t2, 0x488($sp)
    /* 21ED74 151F18C4 25880001 */  addiu      $t0, $t4, 0x1
    /* 21ED78 151F18C8 AFA80484 */  sw         $t0, 0x484($sp)
    /* 21ED7C 151F18CC 8D4F0050 */  lw         $t7, 0x50($t2)
    /* 21ED80 151F18D0 010F082A */  slt        $at, $t0, $t7
    /* 21ED84 151F18D4 1420FFC4 */  bnez       $at, .L151F17E8
    /* 21ED88 151F18D8 00000000 */   nop
  .L151F18DC:
    /* 21ED8C 151F18DC 8FA40488 */  lw         $a0, 0x488($sp)
    /* 21ED90 151F18E0 27A5037C */  addiu      $a1, $sp, 0x37C
    /* 21ED94 151F18E4 24060001 */  addiu      $a2, $zero, 0x1
    /* 21ED98 151F18E8 0C00A0B7 */  jal        __osPfsRWInode
    /* 21ED9C 151F18EC 93A70033 */   lbu       $a3, 0x33($sp)
    /* 21EDA0 151F18F0 AFA20480 */  sw         $v0, 0x480($sp)
    /* 21EDA4 151F18F4 8FB80480 */  lw         $t8, 0x480($sp)
    /* 21EDA8 151F18F8 13000003 */  beqz       $t8, .L151F1908
    /* 21EDAC 151F18FC 00000000 */   nop
    /* 21EDB0 151F1900 10000018 */  b          .L151F1964
    /* 21EDB4 151F1904 03001025 */   or        $v0, $t8, $zero
  .L151F1908:
    /* 21EDB8 151F1908 93AD0033 */  lbu        $t5, 0x33($sp)
    /* 21EDBC 151F190C 8FAE0488 */  lw         $t6, 0x488($sp)
    /* 21EDC0 151F1910 25B90001 */  addiu      $t9, $t5, 0x1
    /* 21EDC4 151F1914 A3B90033 */  sb         $t9, 0x33($sp)
    /* 21EDC8 151F1918 91C90064 */  lbu        $t1, 0x64($t6)
    /* 21EDCC 151F191C 332B00FF */  andi       $t3, $t9, 0xFF
    /* 21EDD0 151F1920 0169082A */  slt        $at, $t3, $t1
    /* 21EDD4 151F1924 1420FF77 */  bnez       $at, .L151F1704
    /* 21EDD8 151F1928 00000000 */   nop
  .L151F192C:
    /* 21EDDC 151F192C 8FAC0034 */  lw         $t4, 0x34($sp)
    /* 21EDE0 151F1930 11800006 */  beqz       $t4, .L151F194C
    /* 21EDE4 151F1934 00000000 */   nop
    /* 21EDE8 151F1938 8FAA0488 */  lw         $t2, 0x488($sp)
    /* 21EDEC 151F193C 8D480000 */  lw         $t0, 0x0($t2)
    /* 21EDF0 151F1940 350F0002 */  ori        $t7, $t0, 0x2
    /* 21EDF4 151F1944 10000006 */  b          .L151F1960
    /* 21EDF8 151F1948 AD4F0000 */   sw        $t7, 0x0($t2)
  .L151F194C:
    /* 21EDFC 151F194C 8FB80488 */  lw         $t8, 0x488($sp)
    /* 21EE00 151F1950 2401FFFD */  addiu      $at, $zero, -0x3
    /* 21EE04 151F1954 8F0D0000 */  lw         $t5, 0x0($t8)
    /* 21EE08 151F1958 01A1C824 */  and        $t9, $t5, $at
    /* 21EE0C 151F195C AF190000 */  sw         $t9, 0x0($t8)
  .L151F1960:
    /* 21EE10 151F1960 00001025 */  or         $v0, $zero, $zero
  .L151F1964:
    /* 21EE14 151F1964 8FBF001C */  lw         $ra, 0x1C($sp)
    /* 21EE18 151F1968 27BD0488 */  addiu      $sp, $sp, 0x488
    /* 21EE1C 151F196C 03E00008 */  jr         $ra
    /* 21EE20 151F1970 00000000 */   nop
endlabel osPfsChecker2
