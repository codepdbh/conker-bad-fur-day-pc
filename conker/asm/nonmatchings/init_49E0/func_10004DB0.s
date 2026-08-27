nonmatching func_10004DB0, 0x150

glabel func_10004DB0
    /* 4DB0 10004DB0 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* 4DB4 10004DB4 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 4DB8 10004DB8 3C028004 */  lui        $v0, %hi(D_8003A582)
    /* 4DBC 10004DBC 9042A582 */  lbu        $v0, %lo(D_8003A582)($v0)
    /* 4DC0 10004DC0 3C048004 */  lui        $a0, %hi(D_8003B1E8)
    /* 4DC4 10004DC4 2484B1E8 */  addiu      $a0, $a0, %lo(D_8003B1E8)
    /* 4DC8 10004DC8 14400034 */  bnez       $v0, .L10004E9C
    /* 4DCC 10004DCC 24010002 */   addiu     $at, $zero, 0x2
    /* 4DD0 10004DD0 3C058003 */  lui        $a1, %hi(D_8002AC50)
    /* 4DD4 10004DD4 24A5AC50 */  addiu      $a1, $a1, %lo(D_8002AC50)
    /* 4DD8 10004DD8 0C008D10 */  jal        osRecvMesg
    /* 4DDC 10004DDC 00003025 */   or        $a2, $zero, $zero
    /* 4DE0 10004DE0 54400044 */  bnel       $v0, $zero, .L10004EF4
    /* 4DE4 10004DE4 8FBF0014 */   lw        $ra, 0x14($sp)
    /* 4DE8 10004DE8 0C009388 */  jal        osViGetCurrentFramebuffer
    /* 4DEC 10004DEC 00000000 */   nop
    /* 4DF0 10004DF0 3C0E8003 */  lui        $t6, %hi(D_8002AC50)
    /* 4DF4 10004DF4 8DCEAC50 */  lw         $t6, %lo(D_8002AC50)($t6)
    /* 4DF8 10004DF8 8DCF0010 */  lw         $t7, 0x10($t6)
    /* 4DFC 10004DFC 504F0024 */  beql       $v0, $t7, .L10004E90
    /* 4E00 10004E00 240B0002 */   addiu     $t3, $zero, 0x2
    /* 4E04 10004E04 0C009398 */  jal        osViGetNextFramebuffer
    /* 4E08 10004E08 00000000 */   nop
    /* 4E0C 10004E0C 3C188003 */  lui        $t8, %hi(D_8002AC50)
    /* 4E10 10004E10 8F18AC50 */  lw         $t8, %lo(D_8002AC50)($t8)
    /* 4E14 10004E14 3C048004 */  lui        $a0, %hi(D_8003B23A)
    /* 4E18 10004E18 8F190010 */  lw         $t9, 0x10($t8)
    /* 4E1C 10004E1C 5059001C */  beql       $v0, $t9, .L10004E90
    /* 4E20 10004E20 240B0002 */   addiu     $t3, $zero, 0x2
    /* 4E24 10004E24 9084B23A */  lbu        $a0, %lo(D_8003B23A)($a0)
    /* 4E28 10004E28 3C058004 */  lui        $a1, %hi(D_8003B239)
    /* 4E2C 10004E2C 24A5B239 */  addiu      $a1, $a1, %lo(D_8003B239)
    /* 4E30 10004E30 10800005 */  beqz       $a0, .L10004E48
    /* 4E34 10004E34 3C088004 */   lui       $t0, %hi(D_8003B238)
    /* 4E38 10004E38 9108B238 */  lbu        $t0, %lo(D_8003B238)($t0)
    /* 4E3C 10004E3C 90A90000 */  lbu        $t1, 0x0($a1)
    /* 4E40 10004E40 0109082A */  slt        $at, $t0, $t1
    /* 4E44 10004E44 14200011 */  bnez       $at, .L10004E8C
  .L10004E48:
    /* 4E48 10004E48 3C028004 */   lui       $v0, %hi(D_8003B238)
    /* 4E4C 10004E4C 9042B238 */  lbu        $v0, %lo(D_8003B238)($v0)
    /* 4E50 10004E50 3C058004 */  lui        $a1, %hi(D_8003B239)
    /* 4E54 10004E54 240100FF */  addiu      $at, $zero, 0xFF
    /* 4E58 10004E58 10410008 */  beq        $v0, $at, .L10004E7C
    /* 4E5C 10004E5C 24A5B239 */   addiu     $a1, $a1, %lo(D_8003B239)
    /* 4E60 10004E60 90AA0000 */  lbu        $t2, 0x0($a1)
    /* 4E64 10004E64 004A082A */  slt        $at, $v0, $t2
    /* 4E68 10004E68 50200004 */  beql       $at, $zero, .L10004E7C
    /* 4E6C 10004E6C A0A20000 */   sb        $v0, 0x0($a1)
    /* 4E70 10004E70 14800002 */  bnez       $a0, .L10004E7C
    /* 4E74 10004E74 00000000 */   nop
    /* 4E78 10004E78 A0A20000 */  sb         $v0, 0x0($a1)
  .L10004E7C:
    /* 4E7C 10004E7C 0C0013C0 */  jal        func_10004F00
    /* 4E80 10004E80 00000000 */   nop
    /* 4E84 10004E84 1000001B */  b          .L10004EF4
    /* 4E88 10004E88 8FBF0014 */   lw        $ra, 0x14($sp)
  .L10004E8C:
    /* 4E8C 10004E8C 240B0002 */  addiu      $t3, $zero, 0x2
  .L10004E90:
    /* 4E90 10004E90 3C018004 */  lui        $at, %hi(D_8003A582)
    /* 4E94 10004E94 10000016 */  b          .L10004EF0
    /* 4E98 10004E98 A02BA582 */   sb        $t3, %lo(D_8003A582)($at)
  .L10004E9C:
    /* 4E9C 10004E9C 1441000F */  bne        $v0, $at, .L10004EDC
    /* 4EA0 10004EA0 3C0C8004 */   lui       $t4, %hi(D_8003B23A)
    /* 4EA4 10004EA4 918CB23A */  lbu        $t4, %lo(D_8003B23A)($t4)
    /* 4EA8 10004EA8 3C058004 */  lui        $a1, %hi(D_8003B239)
    /* 4EAC 10004EAC 24A5B239 */  addiu      $a1, $a1, %lo(D_8003B239)
    /* 4EB0 10004EB0 11800006 */  beqz       $t4, .L10004ECC
    /* 4EB4 10004EB4 3C0D8004 */   lui       $t5, %hi(D_8003B238)
    /* 4EB8 10004EB8 91ADB238 */  lbu        $t5, %lo(D_8003B238)($t5)
    /* 4EBC 10004EBC 90AE0000 */  lbu        $t6, 0x0($a1)
    /* 4EC0 10004EC0 01AE082A */  slt        $at, $t5, $t6
    /* 4EC4 10004EC4 5420000B */  bnel       $at, $zero, .L10004EF4
    /* 4EC8 10004EC8 8FBF0014 */   lw        $ra, 0x14($sp)
  .L10004ECC:
    /* 4ECC 10004ECC 0C0013C0 */  jal        func_10004F00
    /* 4ED0 10004ED0 00000000 */   nop
    /* 4ED4 10004ED4 10000007 */  b          .L10004EF4
    /* 4ED8 10004ED8 8FBF0014 */   lw        $ra, 0x14($sp)
  .L10004EDC:
    /* 4EDC 10004EDC 24010006 */  addiu      $at, $zero, 0x6
    /* 4EE0 10004EE0 54410004 */  bnel       $v0, $at, .L10004EF4
    /* 4EE4 10004EE4 8FBF0014 */   lw        $ra, 0x14($sp)
    /* 4EE8 10004EE8 0C0013F8 */  jal        func_10004FE0
    /* 4EEC 10004EEC 00000000 */   nop
  .L10004EF0:
    /* 4EF0 10004EF0 8FBF0014 */  lw         $ra, 0x14($sp)
  .L10004EF4:
    /* 4EF4 10004EF4 27BD0018 */  addiu      $sp, $sp, 0x18
    /* 4EF8 10004EF8 03E00008 */  jr         $ra
    /* 4EFC 10004EFC 00000000 */   nop
endlabel func_10004DB0
