nonmatching func_1000C350, 0x1E0

glabel func_1000C350
    /* C350 1000C350 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* C354 1000C354 AFB00018 */  sw         $s0, 0x18($sp)
    /* C358 1000C358 30B000FF */  andi       $s0, $a1, 0xFF
    /* C35C 1000C35C AFBF001C */  sw         $ra, 0x1C($sp)
    /* C360 1000C360 AFA40020 */  sw         $a0, 0x20($sp)
    /* C364 1000C364 AFA50024 */  sw         $a1, 0x24($sp)
    /* C368 1000C368 AFA60028 */  sw         $a2, 0x28($sp)
    /* C36C 1000C36C AFA7002C */  sw         $a3, 0x2C($sp)
    /* C370 1000C370 8FAE0020 */  lw         $t6, 0x20($sp)
    /* C374 1000C374 3C19800C */  lui        $t9, %hi(D_800C35EA)
    /* C378 1000C378 3C08800C */  lui        $t0, %hi(D_800BE9F0)
    /* C37C 1000C37C 31CF0080 */  andi       $t7, $t6, 0x80
    /* C380 1000C380 15E00032 */  bnez       $t7, .L1000C44C
    /* C384 1000C384 00000000 */   nop
    /* C388 1000C388 933935EA */  lbu        $t9, %lo(D_800C35EA)($t9)
    /* C38C 1000C38C 35D80080 */  ori        $t8, $t6, 0x80
    /* C390 1000C390 24010001 */  addiu      $at, $zero, 0x1
    /* C394 1000C394 1321000E */  beq        $t9, $at, .L1000C3D0
    /* C398 1000C398 AFB80020 */   sw        $t8, 0x20($sp)
    /* C39C 1000C39C 320400FF */  andi       $a0, $s0, 0xFF
    /* C3A0 1000C3A0 2405001E */  addiu      $a1, $zero, 0x1E
    /* C3A4 1000C3A4 0C00221B */  jal        func_1000886C
    /* C3A8 1000C3A8 24060001 */   addiu     $a2, $zero, 0x1
    /* C3AC 1000C3AC 320400FF */  andi       $a0, $s0, 0xFF
    /* C3B0 1000C3B0 24050001 */  addiu      $a1, $zero, 0x1
    /* C3B4 1000C3B4 0C00221B */  jal        func_1000886C
    /* C3B8 1000C3B8 24060001 */   addiu     $a2, $zero, 0x1
    /* C3BC 1000C3BC 24040023 */  addiu      $a0, $zero, 0x23
    /* C3C0 1000C3C0 0C003903 */  jal        func_1000E40C
    /* C3C4 1000C3C4 240561A8 */   addiu     $a1, $zero, 0x61A8
    /* C3C8 1000C3C8 1000001E */  b          .L1000C444
    /* C3CC 1000C3CC 00000000 */   nop
  .L1000C3D0:
    /* C3D0 1000C3D0 3C02800C */  lui        $v0, %hi(D_800C35E8)
    /* C3D4 1000C3D4 904235E8 */  lbu        $v0, %lo(D_800C35E8)($v0)
    /* C3D8 1000C3D8 24010003 */  addiu      $at, $zero, 0x3
    /* C3DC 1000C3DC 24040023 */  addiu      $a0, $zero, 0x23
    /* C3E0 1000C3E0 54410008 */  bnel       $v0, $at, .L1000C404
    /* C3E4 1000C3E4 24010006 */   addiu     $at, $zero, 0x6
    /* C3E8 1000C3E8 0C003903 */  jal        func_1000E40C
    /* C3EC 1000C3EC 240500FA */   addiu     $a1, $zero, 0xFA
    /* C3F0 1000C3F0 0D45E3BF */  jal        func_15178EFC
    /* C3F4 1000C3F4 24040002 */   addiu     $a0, $zero, 0x2
    /* C3F8 1000C3F8 10000012 */  b          .L1000C444
    /* C3FC 1000C3FC 00000000 */   nop
    /* C400 1000C400 24010006 */  addiu      $at, $zero, 0x6
  .L1000C404:
    /* C404 1000C404 1441000D */  bne        $v0, $at, .L1000C43C
    /* C408 1000C408 24040023 */   addiu     $a0, $zero, 0x23
    /* C40C 1000C40C 320400FF */  andi       $a0, $s0, 0xFF
    /* C410 1000C410 2405001E */  addiu      $a1, $zero, 0x1E
    /* C414 1000C414 0C00221B */  jal        func_1000886C
    /* C418 1000C418 24060001 */   addiu     $a2, $zero, 0x1
    /* C41C 1000C41C 320400FF */  andi       $a0, $s0, 0xFF
    /* C420 1000C420 24050001 */  addiu      $a1, $zero, 0x1
    /* C424 1000C424 0C00221B */  jal        func_1000886C
    /* C428 1000C428 24060040 */   addiu     $a2, $zero, 0x40
    /* C42C 1000C42C 0D45E3BF */  jal        func_15178EFC
    /* C430 1000C430 24040002 */   addiu     $a0, $zero, 0x2
    /* C434 1000C434 10000003 */  b          .L1000C444
    /* C438 1000C438 00000000 */   nop
  .L1000C43C:
    /* C43C 1000C43C 0C003903 */  jal        func_1000E40C
    /* C440 1000C440 240561A8 */   addiu     $a1, $zero, 0x61A8
  .L1000C444:
    /* C444 1000C444 10000035 */  b          .L1000C51C
    /* C448 1000C448 8FA20020 */   lw        $v0, 0x20($sp)
  .L1000C44C:
    /* C44C 1000C44C 8D08E9F0 */  lw         $t0, %lo(D_800BE9F0)($t0)
    /* C450 1000C450 2401001D */  addiu      $at, $zero, 0x1D
    /* C454 1000C454 3C028004 */  lui        $v0, %hi(D_80041F08)
    /* C458 1000C458 11010005 */  beq        $t0, $at, .L1000C470
    /* C45C 1000C45C 8FA90020 */   lw        $t1, 0x20($sp)
    /* C460 1000C460 0C0023C9 */  jal        func_10008F24
    /* C464 1000C464 320400FF */   andi      $a0, $s0, 0xFF
    /* C468 1000C468 1000002C */  b          .L1000C51C
    /* C46C 1000C46C 8FA20020 */   lw        $v0, 0x20($sp)
  .L1000C470:
    /* C470 1000C470 8C421F08 */  lw         $v0, %lo(D_80041F08)($v0)
    /* C474 1000C474 312A007F */  andi       $t2, $t1, 0x7F
    /* C478 1000C478 24010001 */  addiu      $at, $zero, 0x1
    /* C47C 1000C47C 51420027 */  beql       $t2, $v0, .L1000C51C
    /* C480 1000C480 8FA20020 */   lw        $v0, 0x20($sp)
    /* C484 1000C484 10410006 */  beq        $v0, $at, .L1000C4A0
    /* C488 1000C488 320400FF */   andi      $a0, $s0, 0xFF
    /* C48C 1000C48C 24010002 */  addiu      $at, $zero, 0x2
    /* C490 1000C490 1041000F */  beq        $v0, $at, .L1000C4D0
    /* C494 1000C494 320400FF */   andi      $a0, $s0, 0xFF
    /* C498 1000C498 1000001E */  b          .L1000C514
    /* C49C 1000C49C 344B0080 */   ori       $t3, $v0, 0x80
  .L1000C4A0:
    /* C4A0 1000C4A0 2405001E */  addiu      $a1, $zero, 0x1E
    /* C4A4 1000C4A4 00003025 */  or         $a2, $zero, $zero
    /* C4A8 1000C4A8 0C0021E4 */  jal        func_10008790
    /* C4AC 1000C4AC 00003825 */   or        $a3, $zero, $zero
    /* C4B0 1000C4B0 320400FF */  andi       $a0, $s0, 0xFF
    /* C4B4 1000C4B4 24050001 */  addiu      $a1, $zero, 0x1
    /* C4B8 1000C4B8 24060040 */  addiu      $a2, $zero, 0x40
    /* C4BC 1000C4BC 0C0021E4 */  jal        func_10008790
    /* C4C0 1000C4C0 00003825 */   or        $a3, $zero, $zero
    /* C4C4 1000C4C4 3C028004 */  lui        $v0, %hi(D_80041F08)
    /* C4C8 1000C4C8 10000011 */  b          .L1000C510
    /* C4CC 1000C4CC 8C421F08 */   lw        $v0, %lo(D_80041F08)($v0)
  .L1000C4D0:
    /* C4D0 1000C4D0 24050018 */  addiu      $a1, $zero, 0x18
    /* C4D4 1000C4D4 240600FF */  addiu      $a2, $zero, 0xFF
    /* C4D8 1000C4D8 0C0021E4 */  jal        func_10008790
    /* C4DC 1000C4DC 00003825 */   or        $a3, $zero, $zero
    /* C4E0 1000C4E0 320400FF */  andi       $a0, $s0, 0xFF
    /* C4E4 1000C4E4 24050006 */  addiu      $a1, $zero, 0x6
    /* C4E8 1000C4E8 00003025 */  or         $a2, $zero, $zero
    /* C4EC 1000C4EC 0C0021E4 */  jal        func_10008790
    /* C4F0 1000C4F0 00003825 */   or        $a3, $zero, $zero
    /* C4F4 1000C4F4 320400FF */  andi       $a0, $s0, 0xFF
    /* C4F8 1000C4F8 24050001 */  addiu      $a1, $zero, 0x1
    /* C4FC 1000C4FC 24060001 */  addiu      $a2, $zero, 0x1
    /* C500 1000C500 0C0021E4 */  jal        func_10008790
    /* C504 1000C504 00003825 */   or        $a3, $zero, $zero
    /* C508 1000C508 3C028004 */  lui        $v0, %hi(D_80041F08)
    /* C50C 1000C50C 8C421F08 */  lw         $v0, %lo(D_80041F08)($v0)
  .L1000C510:
    /* C510 1000C510 344B0080 */  ori        $t3, $v0, 0x80
  .L1000C514:
    /* C514 1000C514 AFAB0020 */  sw         $t3, 0x20($sp)
    /* C518 1000C518 8FA20020 */  lw         $v0, 0x20($sp)
  .L1000C51C:
    /* C51C 1000C51C 8FBF001C */  lw         $ra, 0x1C($sp)
    /* C520 1000C520 8FB00018 */  lw         $s0, 0x18($sp)
    /* C524 1000C524 27BD0020 */  addiu      $sp, $sp, 0x20
    /* C528 1000C528 03E00008 */  jr         $ra
    /* C52C 1000C52C 00000000 */   nop
endlabel func_1000C350
