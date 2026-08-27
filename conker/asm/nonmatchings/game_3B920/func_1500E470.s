nonmatching func_1500E470, 0x150

glabel func_1500E470
    /* 3B920 1500E470 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* 3B924 1500E474 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 3B928 1500E478 AFA40018 */  sw         $a0, 0x18($sp)
    /* 3B92C 1500E47C 240EFFFF */  addiu      $t6, $zero, -0x1
    /* 3B930 1500E480 3C01800E */  lui        $at, %hi(D_800DD190)
    /* 3B934 1500E484 3C04800E */  lui        $a0, %hi(D_800DD198)
    /* 3B938 1500E488 A02ED190 */  sb         $t6, %lo(D_800DD190)($at)
    /* 3B93C 1500E48C 2484D198 */  addiu      $a0, $a0, %lo(D_800DD198)
    /* 3B940 1500E490 0C0089BC */  jal        bzero
    /* 3B944 1500E494 24050018 */   addiu     $a1, $zero, 0x18
    /* 3B948 1500E498 240F00FF */  addiu      $t7, $zero, 0xFF
    /* 3B94C 1500E49C 3C01800E */  lui        $at, %hi(D_800DD404)
    /* 3B950 1500E4A0 A02FD404 */  sb         $t7, %lo(D_800DD404)($at)
    /* 3B954 1500E4A4 3C01800E */  lui        $at, %hi(D_800DD405)
    /* 3B958 1500E4A8 A020D405 */  sb         $zero, %lo(D_800DD405)($at)
    /* 3B95C 1500E4AC 3C01800E */  lui        $at, %hi(D_800DD406)
    /* 3B960 1500E4B0 A020D406 */  sb         $zero, %lo(D_800DD406)($at)
    /* 3B964 1500E4B4 3C01800E */  lui        $at, %hi(D_800E0930)
    /* 3B968 1500E4B8 AC200930 */  sw         $zero, %lo(D_800E0930)($at)
    /* 3B96C 1500E4BC 3C01800E */  lui        $at, %hi(D_800E0934)
    /* 3B970 1500E4C0 AC200934 */  sw         $zero, %lo(D_800E0934)($at)
    /* 3B974 1500E4C4 3C01800E */  lui        $at, %hi(D_800E0940)
    /* 3B978 1500E4C8 AC200940 */  sw         $zero, %lo(D_800E0940)($at)
    /* 3B97C 1500E4CC 3C018009 */  lui        $at, %hi(D_8008CD00)
    /* 3B980 1500E4D0 A020CD00 */  sb         $zero, %lo(D_8008CD00)($at)
    /* 3B984 1500E4D4 3C018009 */  lui        $at, %hi(D_80088B60)
    /* 3B988 1500E4D8 A0208B60 */  sb         $zero, %lo(D_80088B60)($at)
    /* 3B98C 1500E4DC 3C01800C */  lui        $at, %hi(D_800BE4E0)
    /* 3B990 1500E4E0 AC20E4E0 */  sw         $zero, %lo(D_800BE4E0)($at)
    /* 3B994 1500E4E4 0D4049C8 */  jal        func_15012720
    /* 3B998 1500E4E8 00000000 */   nop
    /* 3B99C 1500E4EC 3C01800E */  lui        $at, %hi(D_800E0A10)
    /* 3B9A0 1500E4F0 A0220A10 */  sb         $v0, %lo(D_800E0A10)($at)
    /* 3B9A4 1500E4F4 0D4048DC */  jal        func_15012370
    /* 3B9A8 1500E4F8 00000000 */   nop
    /* 3B9AC 1500E4FC 0D47BD90 */  jal        func_151EF640
    /* 3B9B0 1500E500 24040040 */   addiu     $a0, $zero, 0x40
    /* 3B9B4 1500E504 0D45CCB8 */  jal        func_151732E0
    /* 3B9B8 1500E508 8FA40018 */   lw        $a0, 0x18($sp)
    /* 3B9BC 1500E50C 0D4013F8 */  jal        func_15004FE0
    /* 3B9C0 1500E510 8FA40018 */   lw        $a0, 0x18($sp)
    /* 3B9C4 1500E514 0D4049EC */  jal        func_150127B0
    /* 3B9C8 1500E518 00000000 */   nop
    /* 3B9CC 1500E51C 0D46560B */  jal        func_1519582C
    /* 3B9D0 1500E520 00000000 */   nop
    /* 3B9D4 1500E524 0D4022F8 */  jal        func_15008BE0
    /* 3B9D8 1500E528 00000000 */   nop
    /* 3B9DC 1500E52C 0D4022E4 */  jal        func_15008B90
    /* 3B9E0 1500E530 00000000 */   nop
    /* 3B9E4 1500E534 0D403970 */  jal        func_1500E5C0
    /* 3B9E8 1500E538 00000000 */   nop
    /* 3B9EC 1500E53C 3C18800B */  lui        $t8, %hi(D_800B0DF0)
    /* 3B9F0 1500E540 8F180DF0 */  lw         $t8, %lo(D_800B0DF0)($t8)
    /* 3B9F4 1500E544 3C018008 */  lui        $at, %hi(D_80082D90)
    /* 3B9F8 1500E548 9302000A */  lbu        $v0, 0xA($t8)
    /* 3B9FC 1500E54C 10400005 */  beqz       $v0, .L1500E564
    /* 3BA00 1500E550 0002C880 */   sll       $t9, $v0, 2
    /* 3BA04 1500E554 00390821 */  addu       $at, $at, $t9
    /* 3BA08 1500E558 8C392D90 */  lw         $t9, %lo(D_80082D90)($at)
    /* 3BA0C 1500E55C 0320F809 */  jalr       $t9
    /* 3BA10 1500E560 00000000 */   nop
  .L1500E564:
    /* 3BA14 1500E564 0D402AE8 */  jal        func_1500ABA0
    /* 3BA18 1500E568 8FA40018 */   lw        $a0, 0x18($sp)
    /* 3BA1C 1500E56C 0D402FB0 */  jal        func_1500BEC0
    /* 3BA20 1500E570 00000000 */   nop
    /* 3BA24 1500E574 0D402B05 */  jal        func_1500AC14
    /* 3BA28 1500E578 00000000 */   nop
    /* 3BA2C 1500E57C 0D461CAC */  jal        func_151872B0
    /* 3BA30 1500E580 8FA40018 */   lw        $a0, 0x18($sp)
    /* 3BA34 1500E584 0D45E3AC */  jal        func_15178EB0
    /* 3BA38 1500E588 00000000 */   nop
    /* 3BA3C 1500E58C 0D404BF8 */  jal        func_15012FE0
    /* 3BA40 1500E590 00000000 */   nop
    /* 3BA44 1500E594 3C08800D */  lui        $t0, %hi(D_800D2E4C)
    /* 3BA48 1500E598 8D082E4C */  lw         $t0, %lo(D_800D2E4C)($t0)
    /* 3BA4C 1500E59C 91020004 */  lbu        $v0, 0x4($t0)
    /* 3BA50 1500E5A0 30490080 */  andi       $t1, $v0, 0x80
    /* 3BA54 1500E5A4 2D2A0001 */  sltiu      $t2, $t1, 0x1
    /* 3BA58 1500E5A8 0D459171 */  jal        func_151645C4
    /* 3BA5C 1500E5AC 314400FF */   andi      $a0, $t2, 0xFF
    /* 3BA60 1500E5B0 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 3BA64 1500E5B4 27BD0018 */  addiu      $sp, $sp, 0x18
    /* 3BA68 1500E5B8 03E00008 */  jr         $ra
    /* 3BA6C 1500E5BC 00000000 */   nop
endlabel func_1500E470
