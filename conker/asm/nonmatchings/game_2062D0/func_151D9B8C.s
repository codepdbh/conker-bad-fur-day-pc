nonmatching func_151D9B8C, 0x324

glabel func_151D9B8C
    /* 20703C 151D9B8C 27BDFF28 */  addiu      $sp, $sp, -0xD8
    /* 207040 151D9B90 AFBF0044 */  sw         $ra, 0x44($sp)
    /* 207044 151D9B94 AFA400D8 */  sw         $a0, 0xD8($sp)
    /* 207048 151D9B98 AFA500DC */  sw         $a1, 0xDC($sp)
    /* 20704C 151D9B9C AFA600E0 */  sw         $a2, 0xE0($sp)
    /* 207050 151D9BA0 AFA700E4 */  sw         $a3, 0xE4($sp)
    /* 207054 151D9BA4 93B800DB */  lbu        $t8, 0xDB($sp)
    /* 207058 151D9BA8 3C018009 */  lui        $at, %hi(D_8008FD04)
    /* 20705C 151D9BAC 240E0020 */  addiu      $t6, $zero, 0x20
    /* 207060 151D9BB0 0018C880 */  sll        $t9, $t8, 2
    /* 207064 151D9BB4 00390821 */  addu       $at, $at, $t9
    /* 207068 151D9BB8 8C39FD04 */  lw         $t9, %lo(D_8008FD04)($at)
    /* 20706C 151D9BBC 240F0007 */  addiu      $t7, $zero, 0x7
    /* 207070 151D9BC0 A7AE00D2 */  sh         $t6, 0xD2($sp)
    /* 207074 151D9BC4 0320F809 */  jalr       $t9
    /* 207078 151D9BC8 A7AF00D4 */   sh        $t7, 0xD4($sp)
    /* 20707C 151D9BCC 87A400EE */  lh         $a0, 0xEE($sp)
    /* 207080 151D9BD0 2405FFFF */  addiu      $a1, $zero, -0x1
    /* 207084 151D9BD4 A3A200B6 */  sb         $v0, 0xB6($sp)
    /* 207088 151D9BD8 14850003 */  bne        $a0, $a1, .L151D9BE8
    /* 20708C 151D9BDC 93AB00DB */   lbu       $t3, 0xDB($sp)
    /* 207090 151D9BE0 10000002 */  b          .L151D9BEC
    /* 207094 151D9BE4 00001825 */   or        $v1, $zero, $zero
  .L151D9BE8:
    /* 207098 151D9BE8 24030001 */  addiu      $v1, $zero, 0x1
  .L151D9BEC:
    /* 20709C 151D9BEC 3C0C800B */  lui        $t4, %hi(D_800AB330)
    /* 2070A0 151D9BF0 018B6021 */  addu       $t4, $t4, $t3
    /* 2070A4 151D9BF4 918CB330 */  lbu        $t4, %lo(D_800AB330)($t4)
    /* 2070A8 151D9BF8 241800FF */  addiu      $t8, $zero, 0xFF
    /* 2070AC 151D9BFC 241900FF */  addiu      $t9, $zero, 0xFF
    /* 2070B0 151D9C00 51800004 */  beql       $t4, $zero, .L151D9C14
    /* 2070B4 151D9C04 00001025 */   or        $v0, $zero, $zero
    /* 2070B8 151D9C08 10000002 */  b          .L151D9C14
    /* 2070BC 151D9C0C 3C020002 */   lui       $v0, (0x2F700 >> 16)
    /* 2070C0 151D9C10 00001025 */  or         $v0, $zero, $zero
  .L151D9C14:
    /* 2070C4 151D9C14 00436025 */  or         $t4, $v0, $v1
    /* 2070C8 151D9C18 358DF700 */  ori        $t5, $t4, (0x2F700 & 0xFFFF)
    /* 2070CC 151D9C1C 14850004 */  bne        $a0, $a1, .L151D9C30
    /* 2070D0 151D9C20 AFAD00B0 */   sw        $t5, 0xB0($sp)
    /* 2070D4 151D9C24 240E012C */  addiu      $t6, $zero, 0x12C
    /* 2070D8 151D9C28 10000002 */  b          .L151D9C34
    /* 2070DC 151D9C2C A7AE00B4 */   sh        $t6, 0xB4($sp)
  .L151D9C30:
    /* 2070E0 151D9C30 A7A400B4 */  sh         $a0, 0xB4($sp)
  .L151D9C34:
    /* 2070E4 151D9C34 93AB00F3 */  lbu        $t3, 0xF3($sp)
    /* 2070E8 151D9C38 93AF00E3 */  lbu        $t7, 0xE3($sp)
    /* 2070EC 151D9C3C AFA000B8 */  sw         $zero, 0xB8($sp)
    /* 2070F0 151D9C40 AFA000BC */  sw         $zero, 0xBC($sp)
    /* 2070F4 151D9C44 A3B800C1 */  sb         $t8, 0xC1($sp)
    /* 2070F8 151D9C48 A3A000C4 */  sb         $zero, 0xC4($sp)
    /* 2070FC 151D9C4C A3A000C3 */  sb         $zero, 0xC3($sp)
    /* 207100 151D9C50 A3A000C2 */  sb         $zero, 0xC2($sp)
    /* 207104 151D9C54 A3B900C5 */  sb         $t9, 0xC5($sp)
    /* 207108 151D9C58 11600003 */  beqz       $t3, .L151D9C68
    /* 20710C 151D9C5C A3AF00C0 */   sb        $t7, 0xC0($sp)
    /* 207110 151D9C60 10000002 */  b          .L151D9C6C
    /* 207114 151D9C64 24030002 */   addiu     $v1, $zero, 0x2
  .L151D9C68:
    /* 207118 151D9C68 24030003 */  addiu      $v1, $zero, 0x3
  .L151D9C6C:
    /* 20711C 151D9C6C 93AC00F7 */  lbu        $t4, 0xF7($sp)
    /* 207120 151D9C70 24020022 */  addiu      $v0, $zero, 0x22
    /* 207124 151D9C74 240F0007 */  addiu      $t7, $zero, 0x7
    /* 207128 151D9C78 11800003 */  beqz       $t4, .L151D9C88
    /* 20712C 151D9C7C 241800FF */   addiu     $t8, $zero, 0xFF
    /* 207130 151D9C80 10000001 */  b          .L151D9C88
    /* 207134 151D9C84 2402003B */   addiu     $v0, $zero, 0x3B
  .L151D9C88:
    /* 207138 151D9C88 00026C00 */  sll        $t5, $v0, 16
    /* 20713C 151D9C8C 01A37021 */  addu       $t6, $t5, $v1
    /* 207140 151D9C90 AFAE00C8 */  sw         $t6, 0xC8($sp)
    /* 207144 151D9C94 A3A000B7 */  sb         $zero, 0xB7($sp)
    /* 207148 151D9C98 A3A000C6 */  sb         $zero, 0xC6($sp)
    /* 20714C 151D9C9C A3AF00C7 */  sb         $t7, 0xC7($sp)
    /* 207150 151D9CA0 A3B800D0 */  sb         $t8, 0xD0($sp)
    /* 207154 151D9CA4 0D42B688 */  jal        func_150ADA20
    /* 207158 151D9CA8 AFA000CC */   sw        $zero, 0xCC($sp)
    /* 20715C 151D9CAC 0D42B688 */  jal        func_150ADA20
    /* 207160 151D9CB0 AFA2004C */   sw        $v0, 0x4C($sp)
    /* 207164 151D9CB4 0D42B688 */  jal        func_150ADA20
    /* 207168 151D9CB8 AFA20050 */   sw        $v0, 0x50($sp)
    /* 20716C 151D9CBC 93AA00F7 */  lbu        $t2, 0xF7($sp)
    /* 207170 151D9CC0 00404825 */  or         $t1, $v0, $zero
    /* 207174 151D9CC4 8FA800E8 */  lw         $t0, 0xE8($sp)
    /* 207178 151D9CC8 11400003 */  beqz       $t2, .L151D9CD8
    /* 20717C 151D9CCC C7A000DC */   lwc1      $f0, 0xDC($sp)
    /* 207180 151D9CD0 10000002 */  b          .L151D9CDC
    /* 207184 151D9CD4 24030003 */   addiu     $v1, $zero, 0x3
  .L151D9CD8:
    /* 207188 151D9CD8 00001825 */  or         $v1, $zero, $zero
  .L151D9CDC:
    /* 20718C 151D9CDC 11400003 */  beqz       $t2, .L151D9CEC
    /* 207190 151D9CE0 27A400B0 */   addiu     $a0, $sp, 0xB0
    /* 207194 151D9CE4 10000002 */  b          .L151D9CF0
    /* 207198 151D9CE8 240200FF */   addiu     $v0, $zero, 0xFF
  .L151D9CEC:
    /* 20719C 151D9CEC 00001025 */  or         $v0, $zero, $zero
  .L151D9CF0:
    /* 2071A0 151D9CF0 C5040000 */  lwc1       $f4, 0x0($t0)
    /* 2071A4 151D9CF4 8FB9004C */  lw         $t9, 0x4C($sp)
    /* 2071A8 151D9CF8 8FAE0050 */  lw         $t6, 0x50($sp)
    /* 2071AC 151D9CFC E7A40010 */  swc1       $f4, 0x10($sp)
    /* 2071B0 151D9D00 C5060004 */  lwc1       $f6, 0x4($t0)
    /* 2071B4 151D9D04 332B00FF */  andi       $t3, $t9, 0xFF
    /* 2071B8 151D9D08 312C0001 */  andi       $t4, $t1, 0x1
    /* 2071BC 151D9D0C E7A60014 */  swc1       $f6, 0x14($sp)
    /* 2071C0 151D9D10 C5080008 */  lwc1       $f8, 0x8($t0)
    /* 2071C4 151D9D14 AFAB0024 */  sw         $t3, 0x24($sp)
    /* 2071C8 151D9D18 8FAB0100 */  lw         $t3, 0x100($sp)
    /* 2071CC 151D9D1C 93B900FF */  lbu        $t9, 0xFF($sp)
    /* 2071D0 151D9D20 000C6840 */  sll        $t5, $t4, 1
    /* 2071D4 151D9D24 31CF0001 */  andi       $t7, $t6, 0x1
    /* 2071D8 151D9D28 01AFC021 */  addu       $t8, $t5, $t7
    /* 2071DC 151D9D2C AFB80028 */  sw         $t8, 0x28($sp)
    /* 2071E0 151D9D30 AFA00034 */  sw         $zero, 0x34($sp)
    /* 2071E4 151D9D34 AFA20030 */  sw         $v0, 0x30($sp)
    /* 2071E8 151D9D38 AFA3002C */  sw         $v1, 0x2C($sp)
    /* 2071EC 151D9D3C E7A00020 */  swc1       $f0, 0x20($sp)
    /* 2071F0 151D9D40 E7A0001C */  swc1       $f0, 0x1C($sp)
    /* 2071F4 151D9D44 00002825 */  or         $a1, $zero, $zero
    /* 2071F8 151D9D48 00003025 */  or         $a2, $zero, $zero
    /* 2071FC 151D9D4C 8FA700E4 */  lw         $a3, 0xE4($sp)
    /* 207200 151D9D50 E7A80018 */  swc1       $f8, 0x18($sp)
    /* 207204 151D9D54 AFAB003C */  sw         $t3, 0x3C($sp)
    /* 207208 151D9D58 0D44F194 */  jal        func_1513C650
    /* 20720C 151D9D5C AFB90038 */   sw        $t9, 0x38($sp)
    /* 207210 151D9D60 1040004F */  beqz       $v0, .L151D9EA0
    /* 207214 151D9D64 93AC00FB */   lbu       $t4, 0xFB($sp)
    /* 207218 151D9D68 1180004D */  beqz       $t4, .L151D9EA0
    /* 20721C 151D9D6C 8FA400E4 */   lw        $a0, 0xE4($sp)
    /* 207220 151D9D70 27A500A0 */  addiu      $a1, $sp, 0xA0
    /* 207224 151D9D74 27A60094 */  addiu      $a2, $sp, 0x94
    /* 207228 151D9D78 0D4513A0 */  jal        func_15144E80
    /* 20722C 151D9D7C 27A70088 */   addiu     $a3, $sp, 0x88
    /* 207230 151D9D80 10400047 */  beqz       $v0, .L151D9EA0
    /* 207234 151D9D84 27A40088 */   addiu     $a0, $sp, 0x88
    /* 207238 151D9D88 3C0D800B */  lui        $t5, %hi(D_800AB3E8)
    /* 20723C 151D9D8C 25ADB3E8 */  addiu      $t5, $t5, %lo(D_800AB3E8)
    /* 207240 151D9D90 8DA10000 */  lw         $at, 0x0($t5)
    /* 207244 151D9D94 27AE007C */  addiu      $t6, $sp, 0x7C
    /* 207248 151D9D98 8DB80004 */  lw         $t8, 0x4($t5)
    /* 20724C 151D9D9C ADC10000 */  sw         $at, 0x0($t6)
    /* 207250 151D9DA0 8DA10008 */  lw         $at, 0x8($t5)
    /* 207254 151D9DA4 00802825 */  or         $a1, $a0, $zero
    /* 207258 151D9DA8 00003025 */  or         $a2, $zero, $zero
    /* 20725C 151D9DAC 00003825 */  or         $a3, $zero, $zero
    /* 207260 151D9DB0 ADD80004 */  sw         $t8, 0x4($t6)
    /* 207264 151D9DB4 0D45144A */  jal        func_15145128
    /* 207268 151D9DB8 ADC10008 */   sw        $at, 0x8($t6)
    /* 20726C 151D9DBC 27A40088 */  addiu      $a0, $sp, 0x88
    /* 207270 151D9DC0 0D45129D */  jal        func_15144A74
    /* 207274 151D9DC4 27A5007C */   addiu     $a1, $sp, 0x7C
    /* 207278 151D9DC8 3C01BF00 */  lui        $at, (0xBF000000 >> 16)
    /* 20727C 151D9DCC 44815000 */  mtc1       $at, $f10
    /* 207280 151D9DD0 87A200EE */  lh         $v0, 0xEE($sp)
    /* 207284 151D9DD4 2404FFFF */  addiu      $a0, $zero, -0x1
    /* 207288 151D9DD8 460A003C */  c.lt.s     $f0, $f10
    /* 20728C 151D9DDC 3C014090 */  lui        $at, (0x40900000 >> 16)
    /* 207290 151D9DE0 2405FFFF */  addiu      $a1, $zero, -0x1
    /* 207294 151D9DE4 2406004A */  addiu      $a2, $zero, 0x4A
    /* 207298 151D9DE8 4500002D */  bc1f       .L151D9EA0
    /* 20729C 151D9DEC 2407FFFF */   addiu     $a3, $zero, -0x1
    /* 2072A0 151D9DF0 C7B000DC */  lwc1       $f16, 0xDC($sp)
    /* 2072A4 151D9DF4 44819000 */  mtc1       $at, $f18
    /* 2072A8 151D9DF8 8FAB00E8 */  lw         $t3, 0xE8($sp)
    /* 2072AC 151D9DFC A7A00060 */  sh         $zero, 0x60($sp)
    /* 2072B0 151D9E00 46128102 */  mul.s      $f4, $f16, $f18
    /* 2072B4 151D9E04 27B90068 */  addiu      $t9, $sp, 0x68
    /* 2072B8 151D9E08 00401825 */  or         $v1, $v0, $zero
    /* 2072BC 151D9E0C E7A40064 */  swc1       $f4, 0x64($sp)
    /* 2072C0 151D9E10 8D610000 */  lw         $at, 0x0($t3)
    /* 2072C4 151D9E14 AF210000 */  sw         $at, 0x0($t9)
    /* 2072C8 151D9E18 8D6E0004 */  lw         $t6, 0x4($t3)
    /* 2072CC 151D9E1C AF2E0004 */  sw         $t6, 0x4($t9)
    /* 2072D0 151D9E20 8D610008 */  lw         $at, 0x8($t3)
    /* 2072D4 151D9E24 AF210008 */  sw         $at, 0x8($t9)
    /* 2072D8 151D9E28 93AD00E3 */  lbu        $t5, 0xE3($sp)
    /* 2072DC 151D9E2C 93B800F7 */  lbu        $t8, 0xF7($sp)
    /* 2072E0 151D9E30 93AF00DB */  lbu        $t7, 0xDB($sp)
    /* 2072E4 151D9E34 A3AD0074 */  sb         $t5, 0x74($sp)
    /* 2072E8 151D9E38 A3B80075 */  sb         $t8, 0x75($sp)
    /* 2072EC 151D9E3C 14440003 */  bne        $v0, $a0, .L151D9E4C
    /* 2072F0 151D9E40 A3AF0076 */   sb        $t7, 0x76($sp)
    /* 2072F4 151D9E44 10000001 */  b          .L151D9E4C
    /* 2072F8 151D9E48 2403012C */   addiu     $v1, $zero, 0x12C
  .L151D9E4C:
    /* 2072FC 151D9E4C 14440003 */  bne        $v0, $a0, .L151D9E5C
    /* 207300 151D9E50 24190018 */   addiu     $t9, $zero, 0x18
    /* 207304 151D9E54 10000002 */  b          .L151D9E60
    /* 207308 151D9E58 00001025 */   or        $v0, $zero, $zero
  .L151D9E5C:
    /* 20730C 151D9E5C 24020001 */  addiu      $v0, $zero, 0x1
  .L151D9E60:
    /* 207310 151D9E60 93AB00FF */  lbu        $t3, 0xFF($sp)
    /* 207314 151D9E64 8FAE0100 */  lw         $t6, 0x100($sp)
    /* 207318 151D9E68 00032400 */  sll        $a0, $v1, 16
    /* 20731C 151D9E6C 00046403 */  sra        $t4, $a0, 16
    /* 207320 151D9E70 01802025 */  or         $a0, $t4, $zero
    /* 207324 151D9E74 AFA20010 */  sw         $v0, 0x10($sp)
    /* 207328 151D9E78 AFA00014 */  sw         $zero, 0x14($sp)
    /* 20732C 151D9E7C AFB90018 */  sw         $t9, 0x18($sp)
    /* 207330 151D9E80 AFAB001C */  sw         $t3, 0x1C($sp)
    /* 207334 151D9E84 0D45244C */  jal        func_15149130
    /* 207338 151D9E88 AFAE0020 */   sw        $t6, 0x20($sp)
    /* 20733C 151D9E8C 10400004 */  beqz       $v0, .L151D9EA0
    /* 207340 151D9E90 24440028 */   addiu     $a0, $v0, 0x28
    /* 207344 151D9E94 27A50060 */  addiu      $a1, $sp, 0x60
    /* 207348 151D9E98 0C008BB0 */  jal        memcpy
    /* 20734C 151D9E9C 24060018 */   addiu     $a2, $zero, 0x18
  .L151D9EA0:
    /* 207350 151D9EA0 8FBF0044 */  lw         $ra, 0x44($sp)
    /* 207354 151D9EA4 27BD00D8 */  addiu      $sp, $sp, 0xD8
    /* 207358 151D9EA8 03E00008 */  jr         $ra
    /* 20735C 151D9EAC 00000000 */   nop
endlabel func_151D9B8C
