nonmatching func_1515CF9C, 0x94

glabel func_1515CF9C
    /* 18A44C 1515CF9C 908E0025 */  lbu        $t6, 0x25($a0)
    /* 18A450 1515CFA0 8082002C */  lb         $v0, 0x2C($a0)
    /* 18A454 1515CFA4 240AFFFF */  addiu      $t2, $zero, -0x1
    /* 18A458 1515CFA8 25CFFFFF */  addiu      $t7, $t6, -0x1
    /* 18A45C 1515CFAC 004F082A */  slt        $at, $v0, $t7
    /* 18A460 1515CFB0 1020001B */  beqz       $at, .L1515D020
    /* 18A464 1515CFB4 24580001 */   addiu     $t8, $v0, 0x1
    /* 18A468 1515CFB8 8099002E */  lb         $t9, 0x2E($a0)
    /* 18A46C 1515CFBC 8C830094 */  lw         $v1, 0x94($a0)
    /* 18A470 1515CFC0 8C810010 */  lw         $at, 0x10($a0)
    /* 18A474 1515CFC4 00194100 */  sll        $t0, $t9, 4
    /* 18A478 1515CFC8 A098002C */  sb         $t8, 0x2C($a0)
    /* 18A47C 1515CFCC 00684821 */  addu       $t1, $v1, $t0
    /* 18A480 1515CFD0 AD210000 */  sw         $at, 0x0($t1)
    /* 18A484 1515CFD4 8C8B0014 */  lw         $t3, 0x14($a0)
    /* 18A488 1515CFD8 AD2B0004 */  sw         $t3, 0x4($t1)
    /* 18A48C 1515CFDC 8C810018 */  lw         $at, 0x18($a0)
    /* 18A490 1515CFE0 AD210008 */  sw         $at, 0x8($t1)
    /* 18A494 1515CFE4 808C002E */  lb         $t4, 0x2E($a0)
    /* 18A498 1515CFE8 C4A40008 */  lwc1       $f4, 0x8($a1)
    /* 18A49C 1515CFEC 000C6900 */  sll        $t5, $t4, 4
    /* 18A4A0 1515CFF0 006D7021 */  addu       $t6, $v1, $t5
    /* 18A4A4 1515CFF4 E5C4000C */  swc1       $f4, 0xC($t6)
    /* 18A4A8 1515CFF8 808F002E */  lb         $t7, 0x2E($a0)
    /* 18A4AC 1515CFFC 90990025 */  lbu        $t9, 0x25($a0)
    /* 18A4B0 1515D000 25F80001 */  addiu      $t8, $t7, 0x1
    /* 18A4B4 1515D004 A098002E */  sb         $t8, 0x2E($a0)
    /* 18A4B8 1515D008 8088002E */  lb         $t0, 0x2E($a0)
    /* 18A4BC 1515D00C 57280006 */  bnel       $t9, $t0, .L1515D028
    /* 18A4C0 1515D010 24020001 */   addiu     $v0, $zero, 0x1
    /* 18A4C4 1515D014 A080002E */  sb         $zero, 0x2E($a0)
    /* 18A4C8 1515D018 10000003 */  b          .L1515D028
    /* 18A4CC 1515D01C 24020001 */   addiu     $v0, $zero, 0x1
  .L1515D020:
    /* 18A4D0 1515D020 A0AA0039 */  sb         $t2, 0x39($a1)
    /* 18A4D4 1515D024 24020001 */  addiu      $v0, $zero, 0x1
  .L1515D028:
    /* 18A4D8 1515D028 03E00008 */  jr         $ra
    /* 18A4DC 1515D02C 00000000 */   nop
endlabel func_1515CF9C
