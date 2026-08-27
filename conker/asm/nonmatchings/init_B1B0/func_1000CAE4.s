nonmatching func_1000CAE4, 0xC4

glabel func_1000CAE4
    /* CAE4 1000CAE4 27BDFFD8 */  addiu      $sp, $sp, -0x28
    /* CAE8 1000CAE8 AFB00018 */  sw         $s0, 0x18($sp)
    /* CAEC 1000CAEC 00808025 */  or         $s0, $a0, $zero
    /* CAF0 1000CAF0 AFBF001C */  sw         $ra, 0x1C($sp)
    /* CAF4 1000CAF4 AFA5002C */  sw         $a1, 0x2C($sp)
    /* CAF8 1000CAF8 AFA60030 */  sw         $a2, 0x30($sp)
    /* CAFC 1000CAFC AFA70034 */  sw         $a3, 0x34($sp)
    /* CB00 1000CB00 3C18800C */  lui        $t8, %hi(D_800BE9F0)
    /* CB04 1000CB04 8F18E9F0 */  lw         $t8, %lo(D_800BE9F0)($t8)
    /* CB08 1000CB08 320E0002 */  andi       $t6, $s0, 0x2
    /* CB0C 1000CB0C 320F0001 */  andi       $t7, $s0, 0x1
    /* CB10 1000CB10 24010042 */  addiu      $at, $zero, 0x42
    /* CB14 1000CB14 AFAE0024 */  sw         $t6, 0x24($sp)
    /* CB18 1000CB18 1701000B */  bne        $t8, $at, .L1000CB48
    /* CB1C 1000CB1C 01E08025 */   or        $s0, $t7, $zero
    /* CB20 1000CB20 0C0047E8 */  jal        func_10011FA0
    /* CB24 1000CB24 24040004 */   addiu     $a0, $zero, 0x4
    /* CB28 1000CB28 16000010 */  bnez       $s0, .L1000CB6C
    /* CB2C 1000CB2C 24040058 */   addiu     $a0, $zero, 0x58
    /* CB30 1000CB30 24100001 */  addiu      $s0, $zero, 0x1
    /* CB34 1000CB34 24050001 */  addiu      $a1, $zero, 0x1
    /* CB38 1000CB38 0C0039C1 */  jal        func_1000E704
    /* CB3C 1000CB3C 3406FFFF */   ori       $a2, $zero, 0xFFFF
    /* CB40 1000CB40 1000000B */  b          .L1000CB70
    /* CB44 1000CB44 8FB90024 */   lw        $t9, 0x24($sp)
  .L1000CB48:
    /* CB48 1000CB48 12000008 */  beqz       $s0, .L1000CB6C
    /* CB4C 1000CB4C 24040058 */   addiu     $a0, $zero, 0x58
    /* CB50 1000CB50 00002825 */  or         $a1, $zero, $zero
    /* CB54 1000CB54 0C0039C1 */  jal        func_1000E704
    /* CB58 1000CB58 3406FFFF */   ori       $a2, $zero, 0xFFFF
    /* CB5C 1000CB5C 24040058 */  addiu      $a0, $zero, 0x58
    /* CB60 1000CB60 0C003903 */  jal        func_1000E40C
    /* CB64 1000CB64 24053E80 */   addiu     $a1, $zero, 0x3E80
    /* CB68 1000CB68 00008025 */  or         $s0, $zero, $zero
  .L1000CB6C:
    /* CB6C 1000CB6C 8FB90024 */  lw         $t9, 0x24($sp)
  .L1000CB70:
    /* CB70 1000CB70 93A4002F */  lbu        $a0, 0x2F($sp)
    /* CB74 1000CB74 24051000 */  addiu      $a1, $zero, 0x1000
    /* CB78 1000CB78 17200005 */  bnez       $t9, .L1000CB90
    /* CB7C 1000CB7C 00003025 */   or        $a2, $zero, $zero
    /* CB80 1000CB80 0C0021E4 */  jal        func_10008790
    /* CB84 1000CB84 24070001 */   addiu     $a3, $zero, 0x1
    /* CB88 1000CB88 24080002 */  addiu      $t0, $zero, 0x2
    /* CB8C 1000CB8C AFA80024 */  sw         $t0, 0x24($sp)
  .L1000CB90:
    /* CB90 1000CB90 8FA90024 */  lw         $t1, 0x24($sp)
    /* CB94 1000CB94 8FBF001C */  lw         $ra, 0x1C($sp)
    /* CB98 1000CB98 01301025 */  or         $v0, $t1, $s0
    /* CB9C 1000CB9C 8FB00018 */  lw         $s0, 0x18($sp)
    /* CBA0 1000CBA0 03E00008 */  jr         $ra
    /* CBA4 1000CBA4 27BD0028 */   addiu     $sp, $sp, 0x28
endlabel func_1000CAE4
