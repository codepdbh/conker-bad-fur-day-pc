nonmatching func_1001BD34, 0xE8

glabel func_1001BD34
    /* 1BD34 1001BD34 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* 1BD38 1001BD38 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 1BD3C 1001BD3C AFA40020 */  sw         $a0, 0x20($sp)
    /* 1BD40 1001BD40 AFA50024 */  sw         $a1, 0x24($sp)
    /* 1BD44 1001BD44 AFA60028 */  sw         $a2, 0x28($sp)
    /* 1BD48 1001BD48 AFA00018 */  sw         $zero, 0x18($sp)
    /* 1BD4C 1001BD4C 8FAE0020 */  lw         $t6, 0x20($sp)
    /* 1BD50 1001BD50 8DD90028 */  lw         $t9, 0x28($t6)
    /* 1BD54 1001BD54 0320F809 */  jalr       $t9
    /* 1BD58 1001BD58 00000000 */   nop
    /* 1BD5C 1001BD5C AFA2001C */  sw         $v0, 0x1C($sp)
    /* 1BD60 1001BD60 8FAF001C */  lw         $t7, 0x1C($sp)
    /* 1BD64 1001BD64 11E00023 */  beqz       $t7, .L1001BDF4
    /* 1BD68 1001BD68 00000000 */   nop
    /* 1BD6C 1001BD6C 8FB80028 */  lw         $t8, 0x28($sp)
    /* 1BD70 1001BD70 2401FFFF */  addiu      $at, $zero, -0x1
    /* 1BD74 1001BD74 17010008 */  bne        $t8, $at, .L1001BD98
    /* 1BD78 1001BD78 00000000 */   nop
    /* 1BD7C 1001BD7C 8FB9001C */  lw         $t9, 0x1C($sp)
    /* 1BD80 1001BD80 8FA40024 */  lw         $a0, 0x24($sp)
    /* 1BD84 1001BD84 24050001 */  addiu      $a1, $zero, 0x1
    /* 1BD88 1001BD88 0320F809 */  jalr       $t9
    /* 1BD8C 1001BD8C 00000000 */   nop
    /* 1BD90 1001BD90 1000000B */  b          .L1001BDC0
    /* 1BD94 1001BD94 AFA20018 */   sw        $v0, 0x18($sp)
  .L1001BD98:
    /* 1BD98 1001BD98 8FA80024 */  lw         $t0, 0x24($sp)
    /* 1BD9C 1001BD9C 8FAA0028 */  lw         $t2, 0x28($sp)
    /* 1BDA0 1001BDA0 8FB9001C */  lw         $t9, 0x1C($sp)
    /* 1BDA4 1001BDA4 8D090000 */  lw         $t1, 0x0($t0)
    /* 1BDA8 1001BDA8 000A5880 */  sll        $t3, $t2, 2
    /* 1BDAC 1001BDAC 00002825 */  or         $a1, $zero, $zero
    /* 1BDB0 1001BDB0 012B2021 */  addu       $a0, $t1, $t3
    /* 1BDB4 1001BDB4 0320F809 */  jalr       $t9
    /* 1BDB8 1001BDB8 24840010 */   addiu     $a0, $a0, 0x10
    /* 1BDBC 1001BDBC AFA20018 */  sw         $v0, 0x18($sp)
  .L1001BDC0:
    /* 1BDC0 1001BDC0 8FAC0018 */  lw         $t4, 0x18($sp)
    /* 1BDC4 1001BDC4 11800009 */  beqz       $t4, .L1001BDEC
    /* 1BDC8 1001BDC8 00000000 */   nop
    /* 1BDCC 1001BDCC 3C01FF00 */  lui        $at, (0xFF000003 >> 16)
    /* 1BDD0 1001BDD0 34210003 */  ori        $at, $at, (0xFF000003 & 0xFFFF)
    /* 1BDD4 1001BDD4 01816824 */  and        $t5, $t4, $at
    /* 1BDD8 1001BDD8 3C018000 */  lui        $at, (0x80000000 >> 16)
    /* 1BDDC 1001BDDC 11A10003 */  beq        $t5, $at, .L1001BDEC
    /* 1BDE0 1001BDE0 00000000 */   nop
    /* 1BDE4 1001BDE4 10000009 */  b          .L1001BE0C
    /* 1BDE8 1001BDE8 00001025 */   or        $v0, $zero, $zero
  .L1001BDEC:
    /* 1BDEC 1001BDEC 10000003 */  b          .L1001BDFC
    /* 1BDF0 1001BDF0 00000000 */   nop
  .L1001BDF4:
    /* 1BDF4 1001BDF4 10000005 */  b          .L1001BE0C
    /* 1BDF8 1001BDF8 00001025 */   or        $v0, $zero, $zero
  .L1001BDFC:
    /* 1BDFC 1001BDFC 10000003 */  b          .L1001BE0C
    /* 1BE00 1001BE00 8FA20018 */   lw        $v0, 0x18($sp)
    /* 1BE04 1001BE04 10000001 */  b          .L1001BE0C
    /* 1BE08 1001BE08 00000000 */   nop
  .L1001BE0C:
    /* 1BE0C 1001BE0C 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 1BE10 1001BE10 27BD0020 */  addiu      $sp, $sp, 0x20
    /* 1BE14 1001BE14 03E00008 */  jr         $ra
    /* 1BE18 1001BE18 00000000 */   nop
endlabel func_1001BD34
