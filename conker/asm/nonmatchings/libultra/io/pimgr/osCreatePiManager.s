nonmatching osCreatePiManager, 0x174

glabel osCreatePiManager
    /* 30A0 100030A0 27BDFFD0 */  addiu      $sp, $sp, -0x30
    /* 30A4 100030A4 AFB00020 */  sw         $s0, 0x20($sp)
    /* 30A8 100030A8 3C108003 */  lui        $s0, %hi(D_8002AB50)
    /* 30AC 100030AC 2610AB50 */  addiu      $s0, $s0, %lo(D_8002AB50)
    /* 30B0 100030B0 AFBF0024 */  sw         $ra, 0x24($sp)
    /* 30B4 100030B4 AFA40030 */  sw         $a0, 0x30($sp)
    /* 30B8 100030B8 AFA50034 */  sw         $a1, 0x34($sp)
    /* 30BC 100030BC AFA60038 */  sw         $a2, 0x38($sp)
    /* 30C0 100030C0 8E0E0000 */  lw         $t6, 0x0($s0)
    /* 30C4 100030C4 8FA40034 */  lw         $a0, 0x34($sp)
    /* 30C8 100030C8 8FA50038 */  lw         $a1, 0x38($sp)
    /* 30CC 100030CC 55C0004D */  bnel       $t6, $zero, .L10003204
    /* 30D0 100030D0 8FBF0024 */   lw        $ra, 0x24($sp)
    /* 30D4 100030D4 0C008DE4 */  jal        osCreateMesgQueue
    /* 30D8 100030D8 00E03025 */   or        $a2, $a3, $zero
    /* 30DC 100030DC 3C048003 */  lui        $a0, %hi(piEventQueue)
    /* 30E0 100030E0 3C058003 */  lui        $a1, %hi(D_80036B58)
    /* 30E4 100030E4 24A56B58 */  addiu      $a1, $a1, %lo(D_80036B58)
    /* 30E8 100030E8 24846B40 */  addiu      $a0, $a0, %lo(piEventQueue)
    /* 30EC 100030EC 0C008DE4 */  jal        osCreateMesgQueue
    /* 30F0 100030F0 24060001 */   addiu     $a2, $zero, 0x1
    /* 30F4 100030F4 3C0F8003 */  lui        $t7, %hi(__osPiAccessQueueEnabled)
    /* 30F8 100030F8 8DEFBD60 */  lw         $t7, %lo(__osPiAccessQueueEnabled)($t7)
    /* 30FC 100030FC 15E00003 */  bnez       $t7, .L1000310C
    /* 3100 10003100 00000000 */   nop
    /* 3104 10003104 0C008DB4 */  jal        __osPiCreateAccessQueue
    /* 3108 10003108 00000000 */   nop
  .L1000310C:
    /* 310C 1000310C 3C058003 */  lui        $a1, %hi(piEventQueue)
    /* 3110 10003110 3C062222 */  lui        $a2, (0x22222222 >> 16)
    /* 3114 10003114 34C62222 */  ori        $a2, $a2, (0x22222222 & 0xFFFF)
    /* 3118 10003118 24A56B40 */  addiu      $a1, $a1, %lo(piEventQueue)
    /* 311C 1000311C 0C008DF0 */  jal        osSetEventMesg
    /* 3120 10003120 24040008 */   addiu     $a0, $zero, 0x8
    /* 3124 10003124 2418FFFF */  addiu      $t8, $zero, -0x1
    /* 3128 10003128 AFB80028 */  sw         $t8, 0x28($sp)
    /* 312C 1000312C 0C008E0C */  jal        osGetThreadPri
    /* 3130 10003130 00002025 */   or        $a0, $zero, $zero
    /* 3134 10003134 8FB90030 */  lw         $t9, 0x30($sp)
    /* 3138 10003138 00002025 */  or         $a0, $zero, $zero
    /* 313C 1000313C 0059082A */  slt        $at, $v0, $t9
    /* 3140 10003140 10200003 */  beqz       $at, .L10003150
    /* 3144 10003144 03202825 */   or        $a1, $t9, $zero
    /* 3148 10003148 0C008AEC */  jal        osSetThreadPri
    /* 314C 1000314C AFA20028 */   sw        $v0, 0x28($sp)
  .L10003150:
    /* 3150 10003150 0C008B70 */  jal        __osDisableInt
    /* 3154 10003154 00000000 */   nop
    /* 3158 10003158 8FA90034 */  lw         $t1, 0x34($sp)
    /* 315C 1000315C 8FAF0030 */  lw         $t7, 0x30($sp)
    /* 3160 10003160 3C048003 */  lui        $a0, %hi(D_80035910)
    /* 3164 10003164 3C0A8003 */  lui        $t2, %hi(piEventQueue)
    /* 3168 10003168 3C0B8004 */  lui        $t3, %hi(__osPiAccessQueue)
    /* 316C 1000316C 3C0C1002 */  lui        $t4, %hi(osPiRawStartDma)
    /* 3170 10003170 3C0D1002 */  lui        $t5, %hi(osEPiRawStartDma)
    /* 3174 10003174 3C0E8003 */  lui        $t6, %hi(piEventQueue)
    /* 3178 10003178 24845910 */  addiu      $a0, $a0, %lo(D_80035910)
    /* 317C 1000317C 24080001 */  addiu      $t0, $zero, 0x1
    /* 3180 10003180 254A6B40 */  addiu      $t2, $t2, %lo(piEventQueue)
    /* 3184 10003184 256B28F8 */  addiu      $t3, $t3, %lo(__osPiAccessQueue)
    /* 3188 10003188 258C3850 */  addiu      $t4, $t4, %lo(osPiRawStartDma)
    /* 318C 1000318C 25AD3930 */  addiu      $t5, $t5, %lo(osEPiRawStartDma)
    /* 3190 10003190 25CE6B40 */  addiu      $t6, $t6, %lo(piEventQueue)
    /* 3194 10003194 3C061000 */  lui        $a2, %hi(func_10002E50)
    /* 3198 10003198 AFA2002C */  sw         $v0, 0x2C($sp)
    /* 319C 1000319C AE080000 */  sw         $t0, 0x0($s0)
    /* 31A0 100031A0 AE040004 */  sw         $a0, 0x4($s0)
    /* 31A4 100031A4 AE0A000C */  sw         $t2, 0xC($s0)
    /* 31A8 100031A8 AE0B0010 */  sw         $t3, 0x10($s0)
    /* 31AC 100031AC AE0C0014 */  sw         $t4, 0x14($s0)
    /* 31B0 100031B0 AE0D0018 */  sw         $t5, 0x18($s0)
    /* 31B4 100031B4 24C62E50 */  addiu      $a2, $a2, %lo(func_10002E50)
    /* 31B8 100031B8 AFAE0010 */  sw         $t6, 0x10($sp)
    /* 31BC 100031BC 00002825 */  or         $a1, $zero, $zero
    /* 31C0 100031C0 02003825 */  or         $a3, $s0, $zero
    /* 31C4 100031C4 AE090008 */  sw         $t1, 0x8($s0)
    /* 31C8 100031C8 0C000DFC */  jal        osCreateThread
    /* 31CC 100031CC AFAF0014 */   sw        $t7, 0x14($sp)
    /* 31D0 100031D0 3C048003 */  lui        $a0, %hi(D_80035910)
    /* 31D4 100031D4 0C008A98 */  jal        osStartThread
    /* 31D8 100031D8 24845910 */   addiu     $a0, $a0, %lo(D_80035910)
    /* 31DC 100031DC 0C008B78 */  jal        __osRestoreInt
    /* 31E0 100031E0 8FA4002C */   lw        $a0, 0x2C($sp)
    /* 31E4 100031E4 8FB80028 */  lw         $t8, 0x28($sp)
    /* 31E8 100031E8 2401FFFF */  addiu      $at, $zero, -0x1
    /* 31EC 100031EC 00002025 */  or         $a0, $zero, $zero
    /* 31F0 100031F0 53010004 */  beql       $t8, $at, .L10003204
    /* 31F4 100031F4 8FBF0024 */   lw        $ra, 0x24($sp)
    /* 31F8 100031F8 0C008AEC */  jal        osSetThreadPri
    /* 31FC 100031FC 03002825 */   or        $a1, $t8, $zero
    /* 3200 10003200 8FBF0024 */  lw         $ra, 0x24($sp)
  .L10003204:
    /* 3204 10003204 8FB00020 */  lw         $s0, 0x20($sp)
    /* 3208 10003208 27BD0030 */  addiu      $sp, $sp, 0x30
    /* 320C 1000320C 03E00008 */  jr         $ra
    /* 3210 10003210 00000000 */   nop
endlabel osCreatePiManager
    /* 3214 10003214 00000000 */  nop
    /* 3218 10003218 00000000 */  nop
    /* 321C 1000321C 00000000 */  nop
