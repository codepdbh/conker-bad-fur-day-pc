nonmatching func_1507AA48, 0x268

glabel func_1507AA48
    /* A7EF8 1507AA48 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* A7EFC 1507AA4C AFBF0014 */  sw         $ra, 0x14($sp)
    /* A7F00 1507AA50 3C05800D */  lui        $a1, %hi(D_800D1890)
    /* A7F04 1507AA54 90A51890 */  lbu        $a1, %lo(D_800D1890)($a1)
    /* A7F08 1507AA58 3C06800D */  lui        $a2, %hi(D_800D1891)
    /* A7F0C 1507AA5C 90C61891 */  lbu        $a2, %lo(D_800D1891)($a2)
    /* A7F10 1507AA60 3C18800D */  lui        $t8, %hi(D_800D1892)
    /* A7F14 1507AA64 93181892 */  lbu        $t8, %lo(D_800D1892)($t8)
    /* A7F18 1507AA68 00057200 */  sll        $t6, $a1, 8
    /* A7F1C 1507AA6C 01C61825 */  or         $v1, $t6, $a2
    /* A7F20 1507AA70 306FFFFF */  andi       $t7, $v1, 0xFFFF
    /* A7F24 1507AA74 2F010009 */  sltiu      $at, $t8, 0x9
    /* A7F28 1507AA78 10200089 */  beqz       $at, .L1507ACA0
    /* A7F2C 1507AA7C 01E01825 */   or        $v1, $t7, $zero
    /* A7F30 1507AA80 0018C080 */  sll        $t8, $t8, 2
    /* A7F34 1507AA84 3C01800A */  lui        $at, %hi(jtbl_8009A1E8)
    /* A7F38 1507AA88 00380821 */  addu       $at, $at, $t8
    /* A7F3C 1507AA8C 8C38A1E8 */  lw         $t8, %lo(jtbl_8009A1E8)($at)
    /* A7F40 1507AA90 03000008 */  jr         $t8
    /* A7F44 1507AA94 00000000 */   nop
  jlabel .L1507AA98
    /* A7F48 1507AA98 3C04800D */  lui        $a0, %hi(D_800D154C)
    /* A7F4C 1507AA9C 2484154C */  addiu      $a0, $a0, %lo(D_800D154C)
    /* A7F50 1507AAA0 8C820000 */  lw         $v0, 0x0($a0)
    /* A7F54 1507AAA4 94590076 */  lhu        $t9, 0x76($v0)
    /* A7F58 1507AAA8 03234021 */  addu       $t0, $t9, $v1
    /* A7F5C 1507AAAC 1000007C */  b          .L1507ACA0
    /* A7F60 1507AAB0 A4480078 */   sh        $t0, 0x78($v0)
  jlabel .L1507AAB4
    /* A7F64 1507AAB4 3C04800D */  lui        $a0, %hi(D_800D154C)
    /* A7F68 1507AAB8 2484154C */  addiu      $a0, $a0, %lo(D_800D154C)
    /* A7F6C 1507AABC 8C820000 */  lw         $v0, 0x0($a0)
    /* A7F70 1507AAC0 94490076 */  lhu        $t1, 0x76($v0)
    /* A7F74 1507AAC4 01235023 */  subu       $t2, $t1, $v1
    /* A7F78 1507AAC8 10000075 */  b          .L1507ACA0
    /* A7F7C 1507AACC A44A0078 */   sh        $t2, 0x78($v0)
  jlabel .L1507AAD0
    /* A7F80 1507AAD0 3C04800D */  lui        $a0, %hi(D_800D154C)
    /* A7F84 1507AAD4 2484154C */  addiu      $a0, $a0, %lo(D_800D154C)
    /* A7F88 1507AAD8 8C8B0000 */  lw         $t3, 0x0($a0)
    /* A7F8C 1507AADC 10000070 */  b          .L1507ACA0
    /* A7F90 1507AAE0 A5630078 */   sh        $v1, 0x78($t3)
  jlabel .L1507AAE4
    /* A7F94 1507AAE4 3C04800D */  lui        $a0, %hi(D_800D154C)
    /* A7F98 1507AAE8 2484154C */  addiu      $a0, $a0, %lo(D_800D154C)
    /* A7F9C 1507AAEC 8C820000 */  lw         $v0, 0x0($a0)
    /* A7FA0 1507AAF0 944C0078 */  lhu        $t4, 0x78($v0)
    /* A7FA4 1507AAF4 A44C0076 */  sh         $t4, 0x76($v0)
    /* A7FA8 1507AAF8 8C820000 */  lw         $v0, 0x0($a0)
    /* A7FAC 1507AAFC 944D0078 */  lhu        $t5, 0x78($v0)
    /* A7FB0 1507AB00 10000067 */  b          .L1507ACA0
    /* A7FB4 1507AB04 A44D007A */   sh        $t5, 0x7A($v0)
  jlabel .L1507AB08
    /* A7FB8 1507AB08 3C0F800D */  lui        $t7, %hi(D_800D154C)
    /* A7FBC 1507AB0C 8DEF154C */  lw         $t7, %lo(D_800D154C)($t7)
    /* A7FC0 1507AB10 3C0E800D */  lui        $t6, %hi(D_800D2104)
    /* A7FC4 1507AB14 8DCE2104 */  lw         $t6, %lo(D_800D2104)($t6)
    /* A7FC8 1507AB18 91F8013F */  lbu        $t8, 0x13F($t7)
    /* A7FCC 1507AB1C 000648C0 */  sll        $t1, $a2, 3
    /* A7FD0 1507AB20 000550C0 */  sll        $t2, $a1, 3
    /* A7FD4 1507AB24 0018C880 */  sll        $t9, $t8, 2
    /* A7FD8 1507AB28 01D94021 */  addu       $t0, $t6, $t9
    /* A7FDC 1507AB2C 8D020000 */  lw         $v0, 0x0($t0)
    /* A7FE0 1507AB30 00491821 */  addu       $v1, $v0, $t1
    /* A7FE4 1507AB34 004A2021 */  addu       $a0, $v0, $t2
    /* A7FE8 1507AB38 848C0008 */  lh         $t4, 0x8($a0)
    /* A7FEC 1507AB3C 8498000C */  lh         $t8, 0xC($a0)
    /* A7FF0 1507AB40 846B0008 */  lh         $t3, 0x8($v1)
    /* A7FF4 1507AB44 846F000C */  lh         $t7, 0xC($v1)
    /* A7FF8 1507AB48 016C6823 */  subu       $t5, $t3, $t4
    /* A7FFC 1507AB4C 01F87023 */  subu       $t6, $t7, $t8
    /* A8000 1507AB50 448E3000 */  mtc1       $t6, $f6
    /* A8004 1507AB54 448D2000 */  mtc1       $t5, $f4
    /* A8008 1507AB58 468033A0 */  cvt.s.w    $f14, $f6
    /* A800C 1507AB5C 0D412128 */  jal        func_150484A0
    /* A8010 1507AB60 46802320 */   cvt.s.w   $f12, $f4
    /* A8014 1507AB64 3C01800A */  lui        $at, %hi(D_8009A20C)
    /* A8018 1507AB68 C428A20C */  lwc1       $f8, %lo(D_8009A20C)($at)
    /* A801C 1507AB6C 24080001 */  addiu      $t0, $zero, 0x1
    /* A8020 1507AB70 3C04800D */  lui        $a0, %hi(D_800D154C)
    /* A8024 1507AB74 46080282 */  mul.s      $f10, $f0, $f8
    /* A8028 1507AB78 2484154C */  addiu      $a0, $a0, %lo(D_800D154C)
    /* A802C 1507AB7C 3C014F00 */  lui        $at, (0x4F000000 >> 16)
    /* A8030 1507AB80 3C0A800D */  lui        $t2, %hi(D_800D1893)
    /* A8034 1507AB84 4459F800 */  cfc1       $t9, $31
    /* A8038 1507AB88 44C8F800 */  ctc1       $t0, $31
    /* A803C 1507AB8C 00000000 */  nop
    /* A8040 1507AB90 46005424 */  cvt.w.s    $f16, $f10
    /* A8044 1507AB94 4448F800 */  cfc1       $t0, $31
    /* A8048 1507AB98 00000000 */  nop
    /* A804C 1507AB9C 31080078 */  andi       $t0, $t0, 0x78
    /* A8050 1507ABA0 51000013 */  beql       $t0, $zero, .L1507ABF0
    /* A8054 1507ABA4 44088000 */   mfc1      $t0, $f16
    /* A8058 1507ABA8 44818000 */  mtc1       $at, $f16
    /* A805C 1507ABAC 24080001 */  addiu      $t0, $zero, 0x1
    /* A8060 1507ABB0 46105401 */  sub.s      $f16, $f10, $f16
    /* A8064 1507ABB4 44C8F800 */  ctc1       $t0, $31
    /* A8068 1507ABB8 00000000 */  nop
    /* A806C 1507ABBC 46008424 */  cvt.w.s    $f16, $f16
    /* A8070 1507ABC0 4448F800 */  cfc1       $t0, $31
    /* A8074 1507ABC4 00000000 */  nop
    /* A8078 1507ABC8 31080078 */  andi       $t0, $t0, 0x78
    /* A807C 1507ABCC 15000005 */  bnez       $t0, .L1507ABE4
    /* A8080 1507ABD0 00000000 */   nop
    /* A8084 1507ABD4 44088000 */  mfc1       $t0, $f16
    /* A8088 1507ABD8 3C018000 */  lui        $at, %hi(D_80004000)
    /* A808C 1507ABDC 10000007 */  b          .L1507ABFC
    /* A8090 1507ABE0 01014025 */   or        $t0, $t0, $at
  .L1507ABE4:
    /* A8094 1507ABE4 10000005 */  b          .L1507ABFC
    /* A8098 1507ABE8 2408FFFF */   addiu     $t0, $zero, -0x1
    /* A809C 1507ABEC 44088000 */  mfc1       $t0, $f16
  .L1507ABF0:
    /* A80A0 1507ABF0 00000000 */  nop
    /* A80A4 1507ABF4 0500FFFB */  bltz       $t0, .L1507ABE4
    /* A80A8 1507ABF8 00000000 */   nop
  .L1507ABFC:
    /* A80AC 1507ABFC 914A1893 */  lbu        $t2, %lo(D_800D1893)($t2)
    /* A80B0 1507AC00 8C8D0000 */  lw         $t5, 0x0($a0)
    /* A80B4 1507AC04 44D9F800 */  ctc1       $t9, $31
    /* A80B8 1507AC08 000A5A00 */  sll        $t3, $t2, 8
    /* A80BC 1507AC0C 010B1021 */  addu       $v0, $t0, $t3
    /* A80C0 1507AC10 244C4000 */  addiu      $t4, $v0, %lo(D_80004000)
    /* A80C4 1507AC14 10000022 */  b          .L1507ACA0
    /* A80C8 1507AC18 A5AC0078 */   sh        $t4, 0x78($t5)
  jlabel .L1507AC1C
    /* A80CC 1507AC1C 0D42B688 */  jal        func_150ADA20
    /* A80D0 1507AC20 00000000 */   nop
    /* A80D4 1507AC24 3C0F800D */  lui        $t7, %hi(D_800D154C)
    /* A80D8 1507AC28 8DEF154C */  lw         $t7, %lo(D_800D154C)($t7)
    /* A80DC 1507AC2C 1000001C */  b          .L1507ACA0
    /* A80E0 1507AC30 A5E20078 */   sh        $v0, 0x78($t7)
  jlabel .L1507AC34
    /* A80E4 1507AC34 3C02800D */  lui        $v0, %hi(D_800D154C)
    /* A80E8 1507AC38 8C42154C */  lw         $v0, %lo(D_800D154C)($v0)
    /* A80EC 1507AC3C 94580076 */  lhu        $t8, 0x76($v0)
    /* A80F0 1507AC40 10000017 */  b          .L1507ACA0
    /* A80F4 1507AC44 A4580078 */   sh        $t8, 0x78($v0)
  jlabel .L1507AC48
    /* A80F8 1507AC48 3C02800D */  lui        $v0, %hi(D_800D154C)
    /* A80FC 1507AC4C 8C42154C */  lw         $v0, %lo(D_800D154C)($v0)
    /* A8100 1507AC50 3C08800D */  lui        $t0, %hi(D_800CC34A)
    /* A8104 1507AC54 904E0222 */  lbu        $t6, 0x222($v0)
    /* A8108 1507AC58 000EC880 */  sll        $t9, $t6, 2
    /* A810C 1507AC5C 032EC823 */  subu       $t9, $t9, $t6
    /* A8110 1507AC60 0019C880 */  sll        $t9, $t9, 2
    /* A8114 1507AC64 032EC821 */  addu       $t9, $t9, $t6
    /* A8118 1507AC68 0019C880 */  sll        $t9, $t9, 2
    /* A811C 1507AC6C 032EC823 */  subu       $t9, $t9, $t6
    /* A8120 1507AC70 0019C880 */  sll        $t9, $t9, 2
    /* A8124 1507AC74 032EC823 */  subu       $t9, $t9, $t6
    /* A8128 1507AC78 0019C880 */  sll        $t9, $t9, 2
    /* A812C 1507AC7C 01194021 */  addu       $t0, $t0, $t9
    /* A8130 1507AC80 9508C34A */  lhu        $t0, %lo(D_800CC34A)($t0)
    /* A8134 1507AC84 01035021 */  addu       $t2, $t0, $v1
    /* A8138 1507AC88 10000005 */  b          .L1507ACA0
    /* A813C 1507AC8C A44A0076 */   sh        $t2, 0x76($v0)
  jlabel .L1507AC90
    /* A8140 1507AC90 3C02800D */  lui        $v0, %hi(D_800D154C)
    /* A8144 1507AC94 8C42154C */  lw         $v0, %lo(D_800D154C)($v0)
    /* A8148 1507AC98 9449007A */  lhu        $t1, 0x7A($v0)
    /* A814C 1507AC9C A4490076 */  sh         $t1, 0x76($v0)
  .L1507ACA0:
    /* A8150 1507ACA0 8FBF0014 */  lw         $ra, 0x14($sp)
    /* A8154 1507ACA4 27BD0018 */  addiu      $sp, $sp, 0x18
    /* A8158 1507ACA8 03E00008 */  jr         $ra
    /* A815C 1507ACAC 00000000 */   nop
endlabel func_1507AA48
