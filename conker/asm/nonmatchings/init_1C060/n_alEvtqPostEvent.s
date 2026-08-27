nonmatching n_alEvtqPostEvent, 0x2CC

glabel n_alEvtqPostEvent
    /* 1C224 1001C224 27BDFFC0 */  addiu      $sp, $sp, -0x40
    /* 1C228 1001C228 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 1C22C 1001C22C AFA40040 */  sw         $a0, 0x40($sp)
    /* 1C230 1001C230 AFA50044 */  sw         $a1, 0x44($sp)
    /* 1C234 1001C234 AFA60048 */  sw         $a2, 0x48($sp)
    /* 1C238 1001C238 AFA7004C */  sw         $a3, 0x4C($sp)
    /* 1C23C 1001C23C AFA00030 */  sw         $zero, 0x30($sp)
    /* 1C240 1001C240 8FAE004C */  lw         $t6, 0x4C($sp)
    /* 1C244 1001C244 31CF0002 */  andi       $t7, $t6, 0x2
    /* 1C248 1001C248 11E00004 */  beqz       $t7, .L1001C25C
    /* 1C24C 1001C24C 00000000 */   nop
    /* 1C250 1001C250 0C009220 */  jal        osSetIntMask
    /* 1C254 1001C254 24040001 */   addiu     $a0, $zero, 0x1
    /* 1C258 1001C258 AFA2002C */  sw         $v0, 0x2C($sp)
  .L1001C25C:
    /* 1C25C 1001C25C 8FB80040 */  lw         $t8, 0x40($sp)
    /* 1C260 1001C260 8F190000 */  lw         $t9, 0x0($t8)
    /* 1C264 1001C264 AFB9003C */  sw         $t9, 0x3C($sp)
    /* 1C268 1001C268 8FA8003C */  lw         $t0, 0x3C($sp)
    /* 1C26C 1001C26C 15000009 */  bnez       $t0, .L1001C294
    /* 1C270 1001C270 00000000 */   nop
    /* 1C274 1001C274 8FA9004C */  lw         $t1, 0x4C($sp)
    /* 1C278 1001C278 312A0002 */  andi       $t2, $t1, 0x2
    /* 1C27C 1001C27C 11400003 */  beqz       $t2, .L1001C28C
    /* 1C280 1001C280 00000000 */   nop
    /* 1C284 1001C284 0C009220 */  jal        osSetIntMask
    /* 1C288 1001C288 8FA4002C */   lw        $a0, 0x2C($sp)
  .L1001C28C:
    /* 1C28C 1001C28C 10000094 */  b          .L1001C4E0
    /* 1C290 1001C290 00000000 */   nop
  .L1001C294:
    /* 1C294 1001C294 8FAB003C */  lw         $t3, 0x3C($sp)
    /* 1C298 1001C298 8D6C0000 */  lw         $t4, 0x0($t3)
    /* 1C29C 1001C29C 1580000D */  bnez       $t4, .L1001C2D4
    /* 1C2A0 1001C2A0 00000000 */   nop
    /* 1C2A4 1001C2A4 8FAD004C */  lw         $t5, 0x4C($sp)
    /* 1C2A8 1001C2A8 31AE0001 */  andi       $t6, $t5, 0x1
    /* 1C2AC 1001C2AC 15C00009 */  bnez       $t6, .L1001C2D4
    /* 1C2B0 1001C2B0 00000000 */   nop
    /* 1C2B4 1001C2B4 8FAF004C */  lw         $t7, 0x4C($sp)
    /* 1C2B8 1001C2B8 31F80002 */  andi       $t8, $t7, 0x2
    /* 1C2BC 1001C2BC 13000003 */  beqz       $t8, .L1001C2CC
    /* 1C2C0 1001C2C0 00000000 */   nop
    /* 1C2C4 1001C2C4 0C009220 */  jal        osSetIntMask
    /* 1C2C8 1001C2C8 8FA4002C */   lw        $a0, 0x2C($sp)
  .L1001C2CC:
    /* 1C2CC 1001C2CC 10000084 */  b          .L1001C4E0
    /* 1C2D0 1001C2D0 00000000 */   nop
  .L1001C2D4:
    /* 1C2D4 1001C2D4 8FB9003C */  lw         $t9, 0x3C($sp)
    /* 1C2D8 1001C2D8 AFB90028 */  sw         $t9, 0x28($sp)
    /* 1C2DC 1001C2DC 8FA80028 */  lw         $t0, 0x28($sp)
    /* 1C2E0 1001C2E0 8D090000 */  lw         $t1, 0x0($t0)
    /* 1C2E4 1001C2E4 11200005 */  beqz       $t1, .L1001C2FC
    /* 1C2E8 1001C2E8 00000000 */   nop
    /* 1C2EC 1001C2EC 8FAA0028 */  lw         $t2, 0x28($sp)
    /* 1C2F0 1001C2F0 8D4B0004 */  lw         $t3, 0x4($t2)
    /* 1C2F4 1001C2F4 8D4C0000 */  lw         $t4, 0x0($t2)
    /* 1C2F8 1001C2F8 AD8B0004 */  sw         $t3, 0x4($t4)
  .L1001C2FC:
    /* 1C2FC 1001C2FC 8FAD0028 */  lw         $t5, 0x28($sp)
    /* 1C300 1001C300 8DAE0004 */  lw         $t6, 0x4($t5)
    /* 1C304 1001C304 11C00005 */  beqz       $t6, .L1001C31C
    /* 1C308 1001C308 00000000 */   nop
    /* 1C30C 1001C30C 8FAF0028 */  lw         $t7, 0x28($sp)
    /* 1C310 1001C310 8DF80000 */  lw         $t8, 0x0($t7)
    /* 1C314 1001C314 8DF90004 */  lw         $t9, 0x4($t7)
    /* 1C318 1001C318 AF380000 */  sw         $t8, 0x0($t9)
  .L1001C31C:
    /* 1C31C 1001C31C 8FA5003C */  lw         $a1, 0x3C($sp)
    /* 1C320 1001C320 8FA40044 */  lw         $a0, 0x44($sp)
    /* 1C324 1001C324 24060010 */  addiu      $a2, $zero, 0x10
    /* 1C328 1001C328 0C008E84 */  jal        bcopy
    /* 1C32C 1001C32C 24A5000C */   addiu     $a1, $a1, 0xC
    /* 1C330 1001C330 8FA80048 */  lw         $t0, 0x48($sp)
    /* 1C334 1001C334 3C017FFF */  lui        $at, (0x7FFFFFFF >> 16)
    /* 1C338 1001C338 3421FFFF */  ori        $at, $at, (0x7FFFFFFF & 0xFFFF)
    /* 1C33C 1001C33C 15010003 */  bne        $t0, $at, .L1001C34C
    /* 1C340 1001C340 00000000 */   nop
    /* 1C344 1001C344 2409FFFF */  addiu      $t1, $zero, -0x1
    /* 1C348 1001C348 AFA90030 */  sw         $t1, 0x30($sp)
  .L1001C34C:
    /* 1C34C 1001C34C 8FAA0040 */  lw         $t2, 0x40($sp)
    /* 1C350 1001C350 254B0008 */  addiu      $t3, $t2, 0x8
    /* 1C354 1001C354 1160005A */  beqz       $t3, .L1001C4C0
    /* 1C358 1001C358 AFAB0034 */   sw        $t3, 0x34($sp)
  .L1001C35C:
    /* 1C35C 1001C35C 8FAC0034 */  lw         $t4, 0x34($sp)
    /* 1C360 1001C360 8D8D0000 */  lw         $t5, 0x0($t4)
    /* 1C364 1001C364 15A00024 */  bnez       $t5, .L1001C3F8
    /* 1C368 1001C368 00000000 */   nop
    /* 1C36C 1001C36C 8FAE0030 */  lw         $t6, 0x30($sp)
    /* 1C370 1001C370 11C00004 */  beqz       $t6, .L1001C384
    /* 1C374 1001C374 00000000 */   nop
    /* 1C378 1001C378 8FAF003C */  lw         $t7, 0x3C($sp)
    /* 1C37C 1001C37C 10000004 */  b          .L1001C390
    /* 1C380 1001C380 ADE00008 */   sw        $zero, 0x8($t7)
  .L1001C384:
    /* 1C384 1001C384 8FB80048 */  lw         $t8, 0x48($sp)
    /* 1C388 1001C388 8FB9003C */  lw         $t9, 0x3C($sp)
    /* 1C38C 1001C38C AF380008 */  sw         $t8, 0x8($t9)
  .L1001C390:
    /* 1C390 1001C390 8FA8003C */  lw         $t0, 0x3C($sp)
    /* 1C394 1001C394 AFA80024 */  sw         $t0, 0x24($sp)
    /* 1C398 1001C398 8FA90034 */  lw         $t1, 0x34($sp)
    /* 1C39C 1001C39C AFA90020 */  sw         $t1, 0x20($sp)
    /* 1C3A0 1001C3A0 8FAA0020 */  lw         $t2, 0x20($sp)
    /* 1C3A4 1001C3A4 8FAC0024 */  lw         $t4, 0x24($sp)
    /* 1C3A8 1001C3A8 8D4B0000 */  lw         $t3, 0x0($t2)
    /* 1C3AC 1001C3AC AD8B0000 */  sw         $t3, 0x0($t4)
    /* 1C3B0 1001C3B0 8FAD0020 */  lw         $t5, 0x20($sp)
    /* 1C3B4 1001C3B4 8FAE0024 */  lw         $t6, 0x24($sp)
    /* 1C3B8 1001C3B8 ADCD0004 */  sw         $t5, 0x4($t6)
    /* 1C3BC 1001C3BC 8FAF0020 */  lw         $t7, 0x20($sp)
    /* 1C3C0 1001C3C0 8DF80000 */  lw         $t8, 0x0($t7)
    /* 1C3C4 1001C3C4 13000005 */  beqz       $t8, .L1001C3DC
    /* 1C3C8 1001C3C8 00000000 */   nop
    /* 1C3CC 1001C3CC 8FA80020 */  lw         $t0, 0x20($sp)
    /* 1C3D0 1001C3D0 8FB90024 */  lw         $t9, 0x24($sp)
    /* 1C3D4 1001C3D4 8D090000 */  lw         $t1, 0x0($t0)
    /* 1C3D8 1001C3D8 AD390004 */  sw         $t9, 0x4($t1)
  .L1001C3DC:
    /* 1C3DC 1001C3DC 8FAA0024 */  lw         $t2, 0x24($sp)
    /* 1C3E0 1001C3E0 8FAB0020 */  lw         $t3, 0x20($sp)
    /* 1C3E4 1001C3E4 AD6A0000 */  sw         $t2, 0x0($t3)
    /* 1C3E8 1001C3E8 10000035 */  b          .L1001C4C0
    /* 1C3EC 1001C3EC 00000000 */   nop
    /* 1C3F0 1001C3F0 1000002F */  b          .L1001C4B0
    /* 1C3F4 1001C3F4 00000000 */   nop
  .L1001C3F8:
    /* 1C3F8 1001C3F8 8FAC0034 */  lw         $t4, 0x34($sp)
    /* 1C3FC 1001C3FC 8D8D0000 */  lw         $t5, 0x0($t4)
    /* 1C400 1001C400 AFAD0038 */  sw         $t5, 0x38($sp)
    /* 1C404 1001C404 8FAF0038 */  lw         $t7, 0x38($sp)
    /* 1C408 1001C408 8FAE0048 */  lw         $t6, 0x48($sp)
    /* 1C40C 1001C40C 8DF80008 */  lw         $t8, 0x8($t7)
    /* 1C410 1001C410 01D8082A */  slt        $at, $t6, $t8
    /* 1C414 1001C414 10200021 */  beqz       $at, .L1001C49C
    /* 1C418 1001C418 00000000 */   nop
    /* 1C41C 1001C41C 8FA80048 */  lw         $t0, 0x48($sp)
    /* 1C420 1001C420 8FB9003C */  lw         $t9, 0x3C($sp)
    /* 1C424 1001C424 AF280008 */  sw         $t0, 0x8($t9)
    /* 1C428 1001C428 8FA90038 */  lw         $t1, 0x38($sp)
    /* 1C42C 1001C42C 8FAB0048 */  lw         $t3, 0x48($sp)
    /* 1C430 1001C430 8D2A0008 */  lw         $t2, 0x8($t1)
    /* 1C434 1001C434 014B6023 */  subu       $t4, $t2, $t3
    /* 1C438 1001C438 AD2C0008 */  sw         $t4, 0x8($t1)
    /* 1C43C 1001C43C 8FAD003C */  lw         $t5, 0x3C($sp)
    /* 1C440 1001C440 AFAD001C */  sw         $t5, 0x1C($sp)
    /* 1C444 1001C444 8FAF0034 */  lw         $t7, 0x34($sp)
    /* 1C448 1001C448 AFAF0018 */  sw         $t7, 0x18($sp)
    /* 1C44C 1001C44C 8FAE0018 */  lw         $t6, 0x18($sp)
    /* 1C450 1001C450 8FA8001C */  lw         $t0, 0x1C($sp)
    /* 1C454 1001C454 8DD80000 */  lw         $t8, 0x0($t6)
    /* 1C458 1001C458 AD180000 */  sw         $t8, 0x0($t0)
    /* 1C45C 1001C45C 8FB90018 */  lw         $t9, 0x18($sp)
    /* 1C460 1001C460 8FAA001C */  lw         $t2, 0x1C($sp)
    /* 1C464 1001C464 AD590004 */  sw         $t9, 0x4($t2)
    /* 1C468 1001C468 8FAB0018 */  lw         $t3, 0x18($sp)
    /* 1C46C 1001C46C 8D6C0000 */  lw         $t4, 0x0($t3)
    /* 1C470 1001C470 11800005 */  beqz       $t4, .L1001C488
    /* 1C474 1001C474 00000000 */   nop
    /* 1C478 1001C478 8FAD0018 */  lw         $t5, 0x18($sp)
    /* 1C47C 1001C47C 8FA9001C */  lw         $t1, 0x1C($sp)
    /* 1C480 1001C480 8DAF0000 */  lw         $t7, 0x0($t5)
    /* 1C484 1001C484 ADE90004 */  sw         $t1, 0x4($t7)
  .L1001C488:
    /* 1C488 1001C488 8FAE001C */  lw         $t6, 0x1C($sp)
    /* 1C48C 1001C48C 8FB80018 */  lw         $t8, 0x18($sp)
    /* 1C490 1001C490 AF0E0000 */  sw         $t6, 0x0($t8)
    /* 1C494 1001C494 1000000A */  b          .L1001C4C0
    /* 1C498 1001C498 00000000 */   nop
  .L1001C49C:
    /* 1C49C 1001C49C 8FB90038 */  lw         $t9, 0x38($sp)
    /* 1C4A0 1001C4A0 8FA80048 */  lw         $t0, 0x48($sp)
    /* 1C4A4 1001C4A4 8F2A0008 */  lw         $t2, 0x8($t9)
    /* 1C4A8 1001C4A8 010A5823 */  subu       $t3, $t0, $t2
    /* 1C4AC 1001C4AC AFAB0048 */  sw         $t3, 0x48($sp)
  .L1001C4B0:
    /* 1C4B0 1001C4B0 8FAC0034 */  lw         $t4, 0x34($sp)
    /* 1C4B4 1001C4B4 8D8D0000 */  lw         $t5, 0x0($t4)
    /* 1C4B8 1001C4B8 15A0FFA8 */  bnez       $t5, .L1001C35C
    /* 1C4BC 1001C4BC AFAD0034 */   sw        $t5, 0x34($sp)
  .L1001C4C0:
    /* 1C4C0 1001C4C0 8FA9004C */  lw         $t1, 0x4C($sp)
    /* 1C4C4 1001C4C4 312F0002 */  andi       $t7, $t1, 0x2
    /* 1C4C8 1001C4C8 11E00003 */  beqz       $t7, .L1001C4D8
    /* 1C4CC 1001C4CC 00000000 */   nop
    /* 1C4D0 1001C4D0 0C009220 */  jal        osSetIntMask
    /* 1C4D4 1001C4D4 8FA4002C */   lw        $a0, 0x2C($sp)
  .L1001C4D8:
    /* 1C4D8 1001C4D8 10000001 */  b          .L1001C4E0
    /* 1C4DC 1001C4DC 00000000 */   nop
  .L1001C4E0:
    /* 1C4E0 1001C4E0 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 1C4E4 1001C4E4 27BD0040 */  addiu      $sp, $sp, 0x40
    /* 1C4E8 1001C4E8 03E00008 */  jr         $ra
    /* 1C4EC 1001C4EC 00000000 */   nop
endlabel n_alEvtqPostEvent
