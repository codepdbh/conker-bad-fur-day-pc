nonmatching func_1000E17C, 0x178

glabel func_1000E17C
    /* E17C 1000E17C 27BDFFC8 */  addiu      $sp, $sp, -0x38
    /* E180 1000E180 AFBF0034 */  sw         $ra, 0x34($sp)
    /* E184 1000E184 AFB60030 */  sw         $s6, 0x30($sp)
    /* E188 1000E188 AFB5002C */  sw         $s5, 0x2C($sp)
    /* E18C 1000E18C AFB40028 */  sw         $s4, 0x28($sp)
    /* E190 1000E190 AFB30024 */  sw         $s3, 0x24($sp)
    /* E194 1000E194 AFB20020 */  sw         $s2, 0x20($sp)
    /* E198 1000E198 AFB1001C */  sw         $s1, 0x1C($sp)
    /* E19C 1000E19C AFB00018 */  sw         $s0, 0x18($sp)
    /* E1A0 1000E1A0 3C108004 */  lui        $s0, %hi(D_800419A8)
    /* E1A4 1000E1A4 3C148003 */  lui        $s4, %hi(D_8002B074)
    /* E1A8 1000E1A8 3C038004 */  lui        $v1, %hi(D_80041E58)
    /* E1AC 1000E1AC 24631E58 */  addiu      $v1, $v1, %lo(D_80041E58)
    /* E1B0 1000E1B0 2694B074 */  addiu      $s4, $s4, %lo(D_8002B074)
    /* E1B4 1000E1B4 261019A8 */  addiu      $s0, $s0, %lo(D_800419A8)
    /* E1B8 1000E1B8 24160003 */  addiu      $s6, $zero, 0x3
    /* E1BC 1000E1BC 2415FF0F */  addiu      $s5, $zero, -0xF1
    /* E1C0 1000E1C0 24130001 */  addiu      $s3, $zero, 0x1
    /* E1C4 1000E1C4 2411FFFF */  addiu      $s1, $zero, -0x1
    /* E1C8 1000E1C8 8E040004 */  lw         $a0, 0x4($s0)
  .L1000E1CC:
    /* E1CC 1000E1CC 1880000C */  blez       $a0, .L1000E200
    /* E1D0 1000E1D0 00047100 */   sll       $t6, $a0, 4
    /* E1D4 1000E1D4 028E7821 */  addu       $t7, $s4, $t6
    /* E1D8 1000E1D8 8DF80004 */  lw         $t8, 0x4($t7)
    /* E1DC 1000E1DC 03151024 */  and        $v0, $t8, $s5
    /* E1E0 1000E1E0 52620004 */  beql       $s3, $v0, .L1000E1F4
    /* E1E4 1000E1E4 8E190000 */   lw        $t9, 0x0($s0)
    /* E1E8 1000E1E8 56C20006 */  bnel       $s6, $v0, .L1000E204
    /* E1EC 1000E1EC 26100064 */   addiu     $s0, $s0, 0x64
    /* E1F0 1000E1F0 8E190000 */  lw         $t9, 0x0($s0)
  .L1000E1F4:
    /* E1F4 1000E1F4 56390003 */  bnel       $s1, $t9, .L1000E204
    /* E1F8 1000E1F8 26100064 */   addiu     $s0, $s0, 0x64
    /* E1FC 1000E1FC AE110004 */  sw         $s1, 0x4($s0)
  .L1000E200:
    /* E200 1000E200 26100064 */  addiu      $s0, $s0, 0x64
  .L1000E204:
    /* E204 1000E204 0203082B */  sltu       $at, $s0, $v1
    /* E208 1000E208 5420FFF0 */  bnel       $at, $zero, .L1000E1CC
    /* E20C 1000E20C 8E040004 */   lw        $a0, 0x4($s0)
    /* E210 1000E210 3C108004 */  lui        $s0, %hi(D_800419A8)
    /* E214 1000E214 3C038004 */  lui        $v1, %hi(D_80041E58)
    /* E218 1000E218 24631E58 */  addiu      $v1, $v1, %lo(D_80041E58)
    /* E21C 1000E21C 261019A8 */  addiu      $s0, $s0, %lo(D_800419A8)
    /* E220 1000E220 8E080004 */  lw         $t0, 0x4($s0)
  .L1000E224:
    /* E224 1000E224 59000010 */  blezl      $t0, .L1000E268
    /* E228 1000E228 26100064 */   addiu     $s0, $s0, 0x64
    /* E22C 1000E22C 8E020060 */  lw         $v0, 0x60($s0)
    /* E230 1000E230 50400006 */  beql       $v0, $zero, .L1000E24C
    /* E234 1000E234 8E020010 */   lw        $v0, 0x10($s0)
    /* E238 1000E238 8C490004 */  lw         $t1, 0x4($v0)
    /* E23C 1000E23C 56290003 */  bnel       $s1, $t1, .L1000E24C
    /* E240 1000E240 8E020010 */   lw        $v0, 0x10($s0)
    /* E244 1000E244 AE000060 */  sw         $zero, 0x60($s0)
    /* E248 1000E248 8E020010 */  lw         $v0, 0x10($s0)
  .L1000E24C:
    /* E24C 1000E24C 50400006 */  beql       $v0, $zero, .L1000E268
    /* E250 1000E250 26100064 */   addiu     $s0, $s0, 0x64
    /* E254 1000E254 8C4A0004 */  lw         $t2, 0x4($v0)
    /* E258 1000E258 562A0003 */  bnel       $s1, $t2, .L1000E268
    /* E25C 1000E25C 26100064 */   addiu     $s0, $s0, 0x64
    /* E260 1000E260 AE000010 */  sw         $zero, 0x10($s0)
    /* E264 1000E264 26100064 */  addiu      $s0, $s0, 0x64
  .L1000E268:
    /* E268 1000E268 0203082B */  sltu       $at, $s0, $v1
    /* E26C 1000E26C 5420FFED */  bnel       $at, $zero, .L1000E224
    /* E270 1000E270 8E080004 */   lw        $t0, 0x4($s0)
    /* E274 1000E274 3C108004 */  lui        $s0, %hi(D_800419A8)
    /* E278 1000E278 3C128004 */  lui        $s2, %hi(D_80041E58)
    /* E27C 1000E27C 26521E58 */  addiu      $s2, $s2, %lo(D_80041E58)
    /* E280 1000E280 261019A8 */  addiu      $s0, $s0, %lo(D_800419A8)
    /* E284 1000E284 8E040004 */  lw         $a0, 0x4($s0)
  .L1000E288:
    /* E288 1000E288 1880000D */  blez       $a0, .L1000E2C0
    /* E28C 1000E28C 00045900 */   sll       $t3, $a0, 4
    /* E290 1000E290 028B6021 */  addu       $t4, $s4, $t3
    /* E294 1000E294 8D8D0004 */  lw         $t5, 0x4($t4)
    /* E298 1000E298 01B51024 */  and        $v0, $t5, $s5
    /* E29C 1000E29C 52620004 */  beql       $s3, $v0, .L1000E2B0
    /* E2A0 1000E2A0 8E0E0000 */   lw        $t6, 0x0($s0)
    /* E2A4 1000E2A4 56C20007 */  bnel       $s6, $v0, .L1000E2C4
    /* E2A8 1000E2A8 26100064 */   addiu     $s0, $s0, 0x64
    /* E2AC 1000E2AC 8E0E0000 */  lw         $t6, 0x0($s0)
  .L1000E2B0:
    /* E2B0 1000E2B0 522E0004 */  beql       $s1, $t6, .L1000E2C4
    /* E2B4 1000E2B4 26100064 */   addiu     $s0, $s0, 0x64
    /* E2B8 1000E2B8 0C003787 */  jal        func_1000DE1C
    /* E2BC 1000E2BC 24050004 */   addiu     $a1, $zero, 0x4
  .L1000E2C0:
    /* E2C0 1000E2C0 26100064 */  addiu      $s0, $s0, 0x64
  .L1000E2C4:
    /* E2C4 1000E2C4 5612FFF0 */  bnel       $s0, $s2, .L1000E288
    /* E2C8 1000E2C8 8E040004 */   lw        $a0, 0x4($s0)
    /* E2CC 1000E2CC 8FBF0034 */  lw         $ra, 0x34($sp)
    /* E2D0 1000E2D0 8FB00018 */  lw         $s0, 0x18($sp)
    /* E2D4 1000E2D4 8FB1001C */  lw         $s1, 0x1C($sp)
    /* E2D8 1000E2D8 8FB20020 */  lw         $s2, 0x20($sp)
    /* E2DC 1000E2DC 8FB30024 */  lw         $s3, 0x24($sp)
    /* E2E0 1000E2E0 8FB40028 */  lw         $s4, 0x28($sp)
    /* E2E4 1000E2E4 8FB5002C */  lw         $s5, 0x2C($sp)
    /* E2E8 1000E2E8 8FB60030 */  lw         $s6, 0x30($sp)
    /* E2EC 1000E2EC 03E00008 */  jr         $ra
    /* E2F0 1000E2F0 27BD0038 */   addiu     $sp, $sp, 0x38
endlabel func_1000E17C
