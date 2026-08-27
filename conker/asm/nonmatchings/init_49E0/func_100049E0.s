nonmatching func_100049E0, 0x3D0

glabel func_100049E0
    /* 49E0 100049E0 27BDFF98 */  addiu      $sp, $sp, -0x68
    /* 49E4 100049E4 AFB60040 */  sw         $s6, 0x40($sp)
    /* 49E8 100049E8 AFB40038 */  sw         $s4, 0x38($sp)
    /* 49EC 100049EC AFB30034 */  sw         $s3, 0x34($sp)
    /* 49F0 100049F0 AFB1002C */  sw         $s1, 0x2C($sp)
    /* 49F4 100049F4 3C118004 */  lui        $s1, %hi(D_8003B240)
    /* 49F8 100049F8 3C138004 */  lui        $s3, %hi(D_8003A581)
    /* 49FC 100049FC 3C148004 */  lui        $s4, %hi(D_8003A582)
    /* 4A00 10004A00 3C168004 */  lui        $s6, %hi(D_8003A583)
    /* 4A04 10004A04 AFB70044 */  sw         $s7, 0x44($sp)
    /* 4A08 10004A08 AFB5003C */  sw         $s5, 0x3C($sp)
    /* 4A0C 10004A0C 24150001 */  addiu      $s5, $zero, 0x1
    /* 4A10 10004A10 24170001 */  addiu      $s7, $zero, 0x1
    /* 4A14 10004A14 26D6A583 */  addiu      $s6, $s6, %lo(D_8003A583)
    /* 4A18 10004A18 2694A582 */  addiu      $s4, $s4, %lo(D_8003A582)
    /* 4A1C 10004A1C 2673A581 */  addiu      $s3, $s3, %lo(D_8003A581)
    /* 4A20 10004A20 2631B240 */  addiu      $s1, $s1, %lo(D_8003B240)
    /* 4A24 10004A24 AFBF004C */  sw         $ra, 0x4C($sp)
    /* 4A28 10004A28 AFBE0048 */  sw         $fp, 0x48($sp)
    /* 4A2C 10004A2C AFB20030 */  sw         $s2, 0x30($sp)
    /* 4A30 10004A30 AFB00028 */  sw         $s0, 0x28($sp)
    /* 4A34 10004A34 AFA40068 */  sw         $a0, 0x68($sp)
    /* 4A38 10004A38 A2600000 */  sb         $zero, 0x0($s3)
    /* 4A3C 10004A3C A2800000 */  sb         $zero, 0x0($s4)
    /* 4A40 10004A40 3C018004 */  lui        $at, %hi(D_8003A584)
    /* 4A44 10004A44 A035A584 */  sb         $s5, %lo(D_8003A584)($at)
    /* 4A48 10004A48 A2C00000 */  sb         $zero, 0x0($s6)
    /* 4A4C 10004A4C A6370000 */  sh         $s7, 0x0($s1)
    /* 4A50 10004A50 3C018004 */  lui        $at, %hi(D_8003A5C8)
    /* 4A54 10004A54 240E0004 */  addiu      $t6, $zero, 0x4
    /* 4A58 10004A58 3C1E8003 */  lui        $fp, %hi(D_8002AC50)
    /* 4A5C 10004A5C 3C128003 */  lui        $s2, %hi(D_8002AC54)
    /* 4A60 10004A60 AFA00064 */  sw         $zero, 0x64($sp)
    /* 4A64 10004A64 A42EA5C8 */  sh         $t6, %lo(D_8003A5C8)($at)
    /* 4A68 10004A68 2652AC54 */  addiu      $s2, $s2, %lo(D_8002AC54)
    /* 4A6C 10004A6C 27DEAC50 */  addiu      $fp, $fp, %lo(D_8002AC50)
  jlabel .L10004A70
    /* 4A70 10004A70 3C048004 */  lui        $a0, %hi(D_8003B218)
    /* 4A74 10004A74 2484B218 */  addiu      $a0, $a0, %lo(D_8003B218)
    /* 4A78 10004A78 27A50064 */  addiu      $a1, $sp, 0x64
    /* 4A7C 10004A7C 0C008D10 */  jal        osRecvMesg
    /* 4A80 10004A80 02E03025 */   or        $a2, $s7, $zero
    /* 4A84 10004A84 8FAF0064 */  lw         $t7, 0x64($sp)
    /* 4A88 10004A88 2DE10007 */  sltiu      $at, $t7, 0x7
    /* 4A8C 10004A8C 1020FFF8 */  beqz       $at, .L10004A70
    /* 4A90 10004A90 00000000 */   nop
    /* 4A94 10004A94 000F7880 */  sll        $t7, $t7, 2
    /* 4A98 10004A98 3C018003 */  lui        $at, %hi(jtbl_8002C0A0)
    /* 4A9C 10004A9C 002F0821 */  addu       $at, $at, $t7
    /* 4AA0 10004AA0 8C2FC0A0 */  lw         $t7, %lo(jtbl_8002C0A0)($at)
    /* 4AA4 10004AA4 01E00008 */  jr         $t7
    /* 4AA8 10004AA8 00000000 */   nop
  jlabel .L10004AAC
    /* 4AAC 10004AAC 3C108004 */  lui        $s0, %hi(D_8003B234)
    /* 4AB0 10004AB0 8E10B234 */  lw         $s0, %lo(D_8003B234)($s0)
    /* 4AB4 10004AB4 1200000C */  beqz       $s0, .L10004AE8
    /* 4AB8 10004AB8 00000000 */   nop
    /* 4ABC 10004ABC 8E180008 */  lw         $t8, 0x8($s0)
  .L10004AC0:
    /* 4AC0 10004AC0 02202825 */  or         $a1, $s1, $zero
    /* 4AC4 10004AC4 00003025 */  or         $a2, $zero, $zero
    /* 4AC8 10004AC8 33190001 */  andi       $t9, $t8, 0x1
    /* 4ACC 10004ACC 57200004 */  bnel       $t9, $zero, .L10004AE0
    /* 4AD0 10004AD0 8E100000 */   lw        $s0, 0x0($s0)
    /* 4AD4 10004AD4 0C008D60 */  jal        osSendMesg
    /* 4AD8 10004AD8 8E040004 */   lw        $a0, 0x4($s0)
    /* 4ADC 10004ADC 8E100000 */  lw         $s0, 0x0($s0)
  .L10004AE0:
    /* 4AE0 10004AE0 5600FFF7 */  bnel       $s0, $zero, .L10004AC0
    /* 4AE4 10004AE4 8E180008 */   lw        $t8, 0x8($s0)
  .L10004AE8:
    /* 4AE8 10004AE8 3C028004 */  lui        $v0, %hi(D_8003B238)
    /* 4AEC 10004AEC 9042B238 */  lbu        $v0, %lo(D_8003B238)($v0)
    /* 4AF0 10004AF0 240100FF */  addiu      $at, $zero, 0xFF
    /* 4AF4 10004AF4 3C0A8003 */  lui        $t2, %hi(D_8002AC6C)
    /* 4AF8 10004AF8 10410005 */  beq        $v0, $at, .L10004B10
    /* 4AFC 10004AFC 284100FF */   slti      $at, $v0, 0xFF
    /* 4B00 10004B00 10200003 */  beqz       $at, .L10004B10
    /* 4B04 10004B04 24480001 */   addiu     $t0, $v0, 0x1
    /* 4B08 10004B08 3C018004 */  lui        $at, %hi(D_8003B238)
    /* 4B0C 10004B0C A028B238 */  sb         $t0, %lo(D_8003B238)($at)
  .L10004B10:
    /* 4B10 10004B10 3C028004 */  lui        $v0, %hi(D_8003B23A)
    /* 4B14 10004B14 9042B23A */  lbu        $v0, %lo(D_8003B23A)($v0)
    /* 4B18 10004B18 3C018004 */  lui        $at, %hi(D_8003B23A)
    /* 4B1C 10004B1C 10400002 */  beqz       $v0, .L10004B28
    /* 4B20 10004B20 2449FFFF */   addiu     $t1, $v0, -0x1
    /* 4B24 10004B24 A029B23A */  sb         $t1, %lo(D_8003B23A)($at)
  .L10004B28:
    /* 4B28 10004B28 92620000 */  lbu        $v0, 0x0($s3)
    /* 4B2C 10004B2C 54400029 */  bnel       $v0, $zero, .L10004BD4
    /* 4B30 10004B30 926C0000 */   lbu       $t4, 0x0($s3)
    /* 4B34 10004B34 814AAC6C */  lb         $t2, %lo(D_8002AC6C)($t2)
    /* 4B38 10004B38 3C048004 */  lui        $a0, %hi(D_8003B200)
    /* 4B3C 10004B3C 2484B200 */  addiu      $a0, $a0, %lo(D_8003B200)
    /* 4B40 10004B40 15400023 */  bnez       $t2, .L10004BD0
    /* 4B44 10004B44 02402825 */   or        $a1, $s2, $zero
    /* 4B48 10004B48 0C008D10 */  jal        osRecvMesg
    /* 4B4C 10004B4C 00003025 */   or        $a2, $zero, $zero
    /* 4B50 10004B50 1440001F */  bnez       $v0, .L10004BD0
    /* 4B54 10004B54 240C0000 */   addiu     $t4, $zero, 0x0
    /* 4B58 10004B58 928B0000 */  lbu        $t3, 0x0($s4)
    /* 4B5C 10004B5C 3C0D0003 */  lui        $t5, (0x30D40 >> 16)
    /* 4B60 10004B60 35AD0D40 */  ori        $t5, $t5, (0x30D40 & 0xFFFF)
    /* 4B64 10004B64 AFAD005C */  sw         $t5, 0x5C($sp)
    /* 4B68 10004B68 15600005 */  bnez       $t3, .L10004B80
    /* 4B6C 10004B6C AFAC0058 */   sw        $t4, 0x58($sp)
    /* 4B70 10004B70 0C00928C */  jal        osAiGetStatus
    /* 4B74 10004B74 00000000 */   nop
    /* 4B78 10004B78 00027000 */  sll        $t6, $v0, 0
    /* 4B7C 10004B7C 05C00004 */  bltz       $t6, .L10004B90
  .L10004B80:
    /* 4B80 10004B80 24180000 */   addiu     $t8, $zero, 0x0
    /* 4B84 10004B84 24194E20 */  addiu      $t9, $zero, 0x4E20
    /* 4B88 10004B88 AFB9005C */  sw         $t9, 0x5C($sp)
    /* 4B8C 10004B8C AFB80058 */  sw         $t8, 0x58($sp)
  .L10004B90:
    /* 4B90 10004B90 3C0F8004 */  lui        $t7, %hi(D_8003B218)
    /* 4B94 10004B94 25EFB218 */  addiu      $t7, $t7, %lo(D_8003B218)
    /* 4B98 10004B98 3C048004 */  lui        $a0, %hi(D_8003A588)
    /* 4B9C 10004B9C 24080000 */  addiu      $t0, $zero, 0x0
    /* 4BA0 10004BA0 24090000 */  addiu      $t1, $zero, 0x0
    /* 4BA4 10004BA4 240A0003 */  addiu      $t2, $zero, 0x3
    /* 4BA8 10004BA8 AFAA001C */  sw         $t2, 0x1C($sp)
    /* 4BAC 10004BAC AFA90014 */  sw         $t1, 0x14($sp)
    /* 4BB0 10004BB0 AFA80010 */  sw         $t0, 0x10($sp)
    /* 4BB4 10004BB4 2484A588 */  addiu      $a0, $a0, %lo(D_8003A588)
    /* 4BB8 10004BB8 AFAF0018 */  sw         $t7, 0x18($sp)
    /* 4BBC 10004BBC 8FA60058 */  lw         $a2, 0x58($sp)
    /* 4BC0 10004BC0 0C009290 */  jal        osSetTimer
    /* 4BC4 10004BC4 8FA7005C */   lw        $a3, 0x5C($sp)
    /* 4BC8 10004BC8 3C018003 */  lui        $at, %hi(D_8002AC6C)
    /* 4BCC 10004BCC A037AC6C */  sb         $s7, %lo(D_8002AC6C)($at)
  .L10004BD0:
    /* 4BD0 10004BD0 926C0000 */  lbu        $t4, 0x0($s3)
  .L10004BD4:
    /* 4BD4 10004BD4 1580FFA6 */  bnez       $t4, .L10004A70
    /* 4BD8 10004BD8 00000000 */   nop
    /* 4BDC 10004BDC 0C00136C */  jal        func_10004DB0
    /* 4BE0 10004BE0 00000000 */   nop
    /* 4BE4 10004BE4 1000FFA2 */  b          .L10004A70
    /* 4BE8 10004BE8 00000000 */   nop
  jlabel .L10004BEC
    /* 4BEC 10004BEC 928D0000 */  lbu        $t5, 0x0($s4)
    /* 4BF0 10004BF0 24010003 */  addiu      $at, $zero, 0x3
    /* 4BF4 10004BF4 55A1001B */  bnel       $t5, $at, .L10004C64
    /* 4BF8 10004BF8 926E0000 */   lbu       $t6, 0x0($s3)
    /* 4BFC 10004BFC 8FC40000 */  lw         $a0, 0x0($fp)
    /* 4C00 10004C00 0C0092C8 */  jal        osSpTaskYielded
    /* 4C04 10004C04 24840018 */   addiu     $a0, $a0, 0x18
    /* 4C08 10004C08 5455000C */  bnel       $v0, $s5, .L10004C3C
    /* 4C0C 10004C0C 8E440000 */   lw        $a0, 0x0($s2)
    /* 4C10 10004C10 8E440000 */  lw         $a0, 0x0($s2)
    /* 4C14 10004C14 0C000CCC */  jal        osSpTaskLoad
    /* 4C18 10004C18 24840018 */   addiu     $a0, $a0, 0x18
    /* 4C1C 10004C1C 8E440000 */  lw         $a0, 0x0($s2)
    /* 4C20 10004C20 0C000D27 */  jal        osSpTaskStartGo
    /* 4C24 10004C24 24840018 */   addiu     $a0, $a0, 0x18
    /* 4C28 10004C28 240B0004 */  addiu      $t3, $zero, 0x4
    /* 4C2C 10004C2C A2750000 */  sb         $s5, 0x0($s3)
    /* 4C30 10004C30 1000FF8F */  b          .L10004A70
    /* 4C34 10004C34 A28B0000 */   sb        $t3, 0x0($s4)
    /* 4C38 10004C38 8E440000 */  lw         $a0, 0x0($s2)
  .L10004C3C:
    /* 4C3C 10004C3C A2950000 */  sb         $s5, 0x0($s4)
    /* 4C40 10004C40 0C000CCC */  jal        osSpTaskLoad
    /* 4C44 10004C44 24840018 */   addiu     $a0, $a0, 0x18
    /* 4C48 10004C48 8E440000 */  lw         $a0, 0x0($s2)
    /* 4C4C 10004C4C 0C000D27 */  jal        osSpTaskStartGo
    /* 4C50 10004C50 24840018 */   addiu     $a0, $a0, 0x18
    /* 4C54 10004C54 A2750000 */  sb         $s5, 0x0($s3)
    /* 4C58 10004C58 1000FF85 */  b          .L10004A70
    /* 4C5C 10004C5C A2C00000 */   sb        $zero, 0x0($s6)
    /* 4C60 10004C60 926E0000 */  lbu        $t6, 0x0($s3)
  .L10004C64:
    /* 4C64 10004C64 3C198004 */  lui        $t9, %hi(D_8003A584)
    /* 4C68 10004C68 51C00016 */  beql       $t6, $zero, .L10004CC4
    /* 4C6C 10004C6C A2C00000 */   sb        $zero, 0x0($s6)
    /* 4C70 10004C70 8E420000 */  lw         $v0, 0x0($s2)
    /* 4C74 10004C74 02E03025 */  or         $a2, $s7, $zero
    /* 4C78 10004C78 8C440058 */  lw         $a0, 0x58($v0)
    /* 4C7C 10004C7C 0C008D60 */  jal        osSendMesg
    /* 4C80 10004C80 8C45005C */   lw        $a1, 0x5C($v0)
    /* 4C84 10004C84 92980000 */  lbu        $t8, 0x0($s4)
    /* 4C88 10004C88 24010004 */  addiu      $at, $zero, 0x4
    /* 4C8C 10004C8C A2600000 */  sb         $zero, 0x0($s3)
    /* 4C90 10004C90 1701FF77 */  bne        $t8, $at, .L10004A70
    /* 4C94 10004C94 00000000 */   nop
    /* 4C98 10004C98 8FC40000 */  lw         $a0, 0x0($fp)
    /* 4C9C 10004C9C 0C000CCC */  jal        osSpTaskLoad
    /* 4CA0 10004CA0 24840018 */   addiu     $a0, $a0, 0x18
    /* 4CA4 10004CA4 8FC40000 */  lw         $a0, 0x0($fp)
    /* 4CA8 10004CA8 0C000D27 */  jal        osSpTaskStartGo
    /* 4CAC 10004CAC 24840018 */   addiu     $a0, $a0, 0x18
    /* 4CB0 10004CB0 3C018004 */  lui        $at, %hi(D_8003A580)
    /* 4CB4 10004CB4 A037A580 */  sb         $s7, %lo(D_8003A580)($at)
    /* 4CB8 10004CB8 1000FF6D */  b          .L10004A70
    /* 4CBC 10004CBC A2950000 */   sb        $s5, 0x0($s4)
    /* 4CC0 10004CC0 A2C00000 */  sb         $zero, 0x0($s6)
  .L10004CC4:
    /* 4CC4 10004CC4 9339A584 */  lbu        $t9, %lo(D_8003A584)($t9)
    /* 4CC8 10004CC8 16F9FF69 */  bne        $s7, $t9, .L10004A70
    /* 4CCC 10004CCC 00000000 */   nop
    /* 4CD0 10004CD0 0C0013F8 */  jal        func_10004FE0
    /* 4CD4 10004CD4 00000000 */   nop
    /* 4CD8 10004CD8 1000FF65 */  b          .L10004A70
    /* 4CDC 10004CDC 00000000 */   nop
  jlabel .L10004CE0
    /* 4CE0 10004CE0 3C018004 */  lui        $at, %hi(D_8003A584)
    /* 4CE4 10004CE4 A035A584 */  sb         $s5, %lo(D_8003A584)($at)
    /* 4CE8 10004CE8 92C80000 */  lbu        $t0, 0x0($s6)
    /* 4CEC 10004CEC 1500FF60 */  bnez       $t0, .L10004A70
    /* 4CF0 10004CF0 00000000 */   nop
    /* 4CF4 10004CF4 0C0013F8 */  jal        func_10004FE0
    /* 4CF8 10004CF8 00000000 */   nop
    /* 4CFC 10004CFC 1000FF5C */  b          .L10004A70
    /* 4D00 10004D00 00000000 */   nop
  jlabel .L10004D04
    /* 4D04 10004D04 3C018003 */  lui        $at, %hi(D_8002AC6C)
    /* 4D08 10004D08 A020AC6C */  sb         $zero, %lo(D_8002AC6C)($at)
    /* 4D0C 10004D0C 92C90000 */  lbu        $t1, 0x0($s6)
    /* 4D10 10004D10 51200007 */  beql       $t1, $zero, .L10004D30
    /* 4D14 10004D14 8E440000 */   lw        $a0, 0x0($s2)
    /* 4D18 10004D18 0C0092E8 */  jal        osSpTaskYield
    /* 4D1C 10004D1C 00000000 */   nop
    /* 4D20 10004D20 240F0003 */  addiu      $t7, $zero, 0x3
    /* 4D24 10004D24 1000FF52 */  b          .L10004A70
    /* 4D28 10004D28 A28F0000 */   sb        $t7, 0x0($s4)
    /* 4D2C 10004D2C 8E440000 */  lw         $a0, 0x0($s2)
  .L10004D30:
    /* 4D30 10004D30 0C000CCC */  jal        osSpTaskLoad
    /* 4D34 10004D34 24840018 */   addiu     $a0, $a0, 0x18
    /* 4D38 10004D38 8E440000 */  lw         $a0, 0x0($s2)
    /* 4D3C 10004D3C 0C000D27 */  jal        osSpTaskStartGo
    /* 4D40 10004D40 24840018 */   addiu     $a0, $a0, 0x18
    /* 4D44 10004D44 1000FF4A */  b          .L10004A70
    /* 4D48 10004D48 A2750000 */   sb        $s5, 0x0($s3)
  jlabel .L10004D4C
    /* 4D4C 10004D4C 3C0A8003 */  lui        $t2, %hi(D_8002AC5C)
    /* 4D50 10004D50 914AAC5C */  lbu        $t2, %lo(D_8002AC5C)($t2)
    /* 4D54 10004D54 3C04800C */  lui        $a0, %hi(D_800BE900)
    /* 4D58 10004D58 1540FF45 */  bnez       $t2, .L10004A70
    /* 4D5C 10004D5C 00000000 */   nop
    /* 4D60 10004D60 0C0092F0 */  jal        osContStartReadData
    /* 4D64 10004D64 2484E900 */   addiu     $a0, $a0, %lo(D_800BE900)
    /* 4D68 10004D68 1000FF41 */  b          .L10004A70
    /* 4D6C 10004D6C 00000000 */   nop
    /* 4D70 10004D70 00000000 */  nop
    /* 4D74 10004D74 00000000 */  nop
    /* 4D78 10004D78 00000000 */  nop
    /* 4D7C 10004D7C 00000000 */  nop
    /* 4D80 10004D80 8FBF004C */  lw         $ra, 0x4C($sp)
    /* 4D84 10004D84 8FB00028 */  lw         $s0, 0x28($sp)
    /* 4D88 10004D88 8FB1002C */  lw         $s1, 0x2C($sp)
    /* 4D8C 10004D8C 8FB20030 */  lw         $s2, 0x30($sp)
    /* 4D90 10004D90 8FB30034 */  lw         $s3, 0x34($sp)
    /* 4D94 10004D94 8FB40038 */  lw         $s4, 0x38($sp)
    /* 4D98 10004D98 8FB5003C */  lw         $s5, 0x3C($sp)
    /* 4D9C 10004D9C 8FB60040 */  lw         $s6, 0x40($sp)
    /* 4DA0 10004DA0 8FB70044 */  lw         $s7, 0x44($sp)
    /* 4DA4 10004DA4 8FBE0048 */  lw         $fp, 0x48($sp)
    /* 4DA8 10004DA8 03E00008 */  jr         $ra
    /* 4DAC 10004DAC 27BD0068 */   addiu     $sp, $sp, 0x68
endlabel func_100049E0
