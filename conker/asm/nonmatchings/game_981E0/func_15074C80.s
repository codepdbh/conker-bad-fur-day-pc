nonmatching func_15074C80, 0x16C

glabel func_15074C80
    /* A2130 15074C80 27BDFFC8 */  addiu      $sp, $sp, -0x38
    /* A2134 15074C84 AFB00030 */  sw         $s0, 0x30($sp)
    /* A2138 15074C88 00808025 */  or         $s0, $a0, $zero
    /* A213C 15074C8C AFBF0034 */  sw         $ra, 0x34($sp)
    /* A2140 15074C90 AFA5003C */  sw         $a1, 0x3C($sp)
    /* A2144 15074C94 96020278 */  lhu        $v0, 0x278($s0)
    /* A2148 15074C98 24010011 */  addiu      $at, $zero, 0x11
    /* A214C 15074C9C 02002025 */  or         $a0, $s0, $zero
    /* A2150 15074CA0 54410005 */  bnel       $v0, $at, .L15074CB8
    /* A2154 15074CA4 24030002 */   addiu     $v1, $zero, 0x2
    /* A2158 15074CA8 0D4650BA */  jal        func_151942E8
    /* A215C 15074CAC 8FA5003C */   lw        $a1, 0x3C($sp)
    /* A2160 15074CB0 96020278 */  lhu        $v0, 0x278($s0)
    /* A2164 15074CB4 24030002 */  addiu      $v1, $zero, 0x2
  .L15074CB8:
    /* A2168 15074CB8 10620007 */  beq        $v1, $v0, .L15074CD8
    /* A216C 15074CBC 24010012 */   addiu     $at, $zero, 0x12
    /* A2170 15074CC0 10410005 */  beq        $v0, $at, .L15074CD8
    /* A2174 15074CC4 24010003 */   addiu     $at, $zero, 0x3
    /* A2178 15074CC8 10410003 */  beq        $v0, $at, .L15074CD8
    /* A217C 15074CCC 24010006 */   addiu     $at, $zero, 0x6
    /* A2180 15074CD0 5441001B */  bnel       $v0, $at, .L15074D40
    /* A2184 15074CD4 8FB9003C */   lw        $t9, 0x3C($sp)
  .L15074CD8:
    /* A2188 15074CD8 8FAE003C */  lw         $t6, 0x3C($sp)
    /* A218C 15074CDC 02002025 */  or         $a0, $s0, $zero
    /* A2190 15074CE0 8FA5003C */  lw         $a1, 0x3C($sp)
    /* A2194 15074CE4 91CF01CA */  lbu        $t7, 0x1CA($t6)
    /* A2198 15074CE8 2407000C */  addiu      $a3, $zero, 0xC
    /* A219C 15074CEC 24180001 */  addiu      $t8, $zero, 0x1
    /* A21A0 15074CF0 55E00012 */  bnel       $t7, $zero, .L15074D3C
    /* A21A4 15074CF4 A20001CA */   sb        $zero, 0x1CA($s0)
    /* A21A8 15074CF8 14620003 */  bne        $v1, $v0, .L15074D08
    /* A21AC 15074CFC 24010012 */   addiu     $at, $zero, 0x12
    /* A21B0 15074D00 1000000A */  b          .L15074D2C
    /* A21B4 15074D04 2406002A */   addiu     $a2, $zero, 0x2A
  .L15074D08:
    /* A21B8 15074D08 54410004 */  bnel       $v0, $at, .L15074D1C
    /* A21BC 15074D0C 24010003 */   addiu     $at, $zero, 0x3
    /* A21C0 15074D10 10000006 */  b          .L15074D2C
    /* A21C4 15074D14 2406002F */   addiu     $a2, $zero, 0x2F
    /* A21C8 15074D18 24010003 */  addiu      $at, $zero, 0x3
  .L15074D1C:
    /* A21CC 15074D1C 14410003 */  bne        $v0, $at, .L15074D2C
    /* A21D0 15074D20 24060051 */   addiu     $a2, $zero, 0x51
    /* A21D4 15074D24 10000001 */  b          .L15074D2C
    /* A21D8 15074D28 24060039 */   addiu     $a2, $zero, 0x39
  .L15074D2C:
    /* A21DC 15074D2C AFB80010 */  sw         $t8, 0x10($sp)
    /* A21E0 15074D30 0D40CD72 */  jal        func_150335C8
    /* A21E4 15074D34 AFA00014 */   sw        $zero, 0x14($sp)
    /* A21E8 15074D38 A20001CA */  sb         $zero, 0x1CA($s0)
  .L15074D3C:
    /* A21EC 15074D3C 8FB9003C */  lw         $t9, 0x3C($sp)
  .L15074D40:
    /* A21F0 15074D40 24010019 */  addiu      $at, $zero, 0x19
    /* A21F4 15074D44 8F280000 */  lw         $t0, 0x0($t9)
    /* A21F8 15074D48 55010024 */  bnel       $t0, $at, .L15074DDC
    /* A21FC 15074D4C 8FBF0034 */   lw        $ra, 0x34($sp)
    /* A2200 15074D50 C60C0020 */  lwc1       $f12, 0x20($s0)
    /* A2204 15074D54 0D412128 */  jal        func_150484A0
    /* A2208 15074D58 C60E003C */   lwc1      $f14, 0x3C($s0)
    /* A220C 15074D5C 3C014380 */  lui        $at, (0x43800000 >> 16)
    /* A2210 15074D60 44812000 */  mtc1       $at, $f4
    /* A2214 15074D64 3C01800A */  lui        $at, %hi(D_8009A104)
    /* A2218 15074D68 C426A104 */  lwc1       $f6, %lo(D_8009A104)($at)
    /* A221C 15074D6C C6120014 */  lwc1       $f18, 0x14($s0)
    /* A2220 15074D70 960A0076 */  lhu        $t2, 0x76($s0)
    /* A2224 15074D74 46060202 */  mul.s      $f8, $f0, $f6
    /* A2228 15074D78 4600918D */  trunc.w.s  $f6, $f18
    /* A222C 15074D7C 240C00C0 */  addiu      $t4, $zero, 0xC0
    /* A2230 15074D80 24190010 */  addiu      $t9, $zero, 0x10
    /* A2234 15074D84 24080014 */  addiu      $t0, $zero, 0x14
    /* A2238 15074D88 44063000 */  mfc1       $a2, $f6
    /* A223C 15074D8C 240900FF */  addiu      $t1, $zero, 0xFF
    /* A2240 15074D90 46082281 */  sub.s      $f10, $f4, $f8
    /* A2244 15074D94 C6040018 */  lwc1       $f4, 0x18($s0)
    /* A2248 15074D98 000A5A03 */  sra        $t3, $t2, 8
    /* A224C 15074D9C 018B2823 */  subu       $a1, $t4, $t3
    /* A2250 15074DA0 4600540D */  trunc.w.s  $f16, $f10
    /* A2254 15074DA4 C60A001C */  lwc1       $f10, 0x1C($s0)
    /* A2258 15074DA8 AFA00024 */  sw         $zero, 0x24($sp)
    /* A225C 15074DAC 4600220D */  trunc.w.s  $f8, $f4
    /* A2260 15074DB0 44048000 */  mfc1       $a0, $f16
    /* A2264 15074DB4 AFA90020 */  sw         $t1, 0x20($sp)
    /* A2268 15074DB8 4600540D */  trunc.w.s  $f16, $f10
    /* A226C 15074DBC 44074000 */  mfc1       $a3, $f8
    /* A2270 15074DC0 AFA0001C */  sw         $zero, 0x1C($sp)
    /* A2274 15074DC4 AFA80018 */  sw         $t0, 0x18($sp)
    /* A2278 15074DC8 44188000 */  mfc1       $t8, $f16
    /* A227C 15074DCC AFB90014 */  sw         $t9, 0x14($sp)
    /* A2280 15074DD0 0D459846 */  jal        func_15166118
    /* A2284 15074DD4 AFB80010 */   sw        $t8, 0x10($sp)
    /* A2288 15074DD8 8FBF0034 */  lw         $ra, 0x34($sp)
  .L15074DDC:
    /* A228C 15074DDC 8FB00030 */  lw         $s0, 0x30($sp)
    /* A2290 15074DE0 27BD0038 */  addiu      $sp, $sp, 0x38
    /* A2294 15074DE4 03E00008 */  jr         $ra
    /* A2298 15074DE8 00000000 */   nop
endlabel func_15074C80
