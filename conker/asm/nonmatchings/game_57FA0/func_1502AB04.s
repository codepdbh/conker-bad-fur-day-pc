nonmatching func_1502AB04, 0x184

glabel func_1502AB04
    /* 57FB4 1502AB04 27BDFFD8 */  addiu      $sp, $sp, -0x28
    /* 57FB8 1502AB08 AFB20020 */  sw         $s2, 0x20($sp)
    /* 57FBC 1502AB0C AFB1001C */  sw         $s1, 0x1C($sp)
    /* 57FC0 1502AB10 AFB00018 */  sw         $s0, 0x18($sp)
    /* 57FC4 1502AB14 00A08025 */  or         $s0, $a1, $zero
    /* 57FC8 1502AB18 00C08825 */  or         $s1, $a2, $zero
    /* 57FCC 1502AB1C 00809025 */  or         $s2, $a0, $zero
    /* 57FD0 1502AB20 AFBF0024 */  sw         $ra, 0x24($sp)
    /* 57FD4 1502AB24 1240000A */  beqz       $s2, .L1502AB50
    /* 57FD8 1502AB28 3C05800C */   lui       $a1, %hi(D_800C3D68)
    /* 57FDC 1502AB2C 00123023 */  negu       $a2, $s2
    /* 57FE0 1502AB30 24A53D68 */  addiu      $a1, $a1, %lo(D_800C3D68)
    /* 57FE4 1502AB34 00067900 */  sll        $t7, $a2, 4
    /* 57FE8 1502AB38 00127100 */  sll        $t6, $s2, 4
    /* 57FEC 1502AB3C 00AE2021 */  addu       $a0, $a1, $t6
    /* 57FF0 1502AB40 25E60100 */  addiu      $a2, $t7, 0x100
    /* 57FF4 1502AB44 0C008E84 */  jal        bcopy
    /* 57FF8 1502AB48 AFA70034 */   sw        $a3, 0x34($sp)
    /* 57FFC 1502AB4C 8FA70034 */  lw         $a3, 0x34($sp)
  .L1502AB50:
    /* 58000 1502AB50 24090010 */  addiu      $t1, $zero, 0x10
    /* 58004 1502AB54 01322823 */  subu       $a1, $t1, $s2
    /* 58008 1502AB58 2CA10010 */  sltiu      $at, $a1, 0x10
    /* 5800C 1502AB5C 10200044 */  beqz       $at, .L1502AC70
    /* 58010 1502AB60 00A04025 */   or        $t0, $a1, $zero
    /* 58014 1502AB64 01253023 */  subu       $a2, $t1, $a1
    /* 58018 1502AB68 30D80003 */  andi       $t8, $a2, 0x3
    /* 5801C 1502AB6C 13000013 */  beqz       $t8, .L1502ABBC
    /* 58020 1502AB70 03052021 */   addu      $a0, $t8, $a1
    /* 58024 1502AB74 3C0A800C */  lui        $t2, %hi(D_800C3D68)
    /* 58028 1502AB78 254A3D68 */  addiu      $t2, $t2, %lo(D_800C3D68)
    /* 5802C 1502AB7C 0005C900 */  sll        $t9, $a1, 4
    /* 58030 1502AB80 032A1021 */  addu       $v0, $t9, $t2
    /* 58034 1502AB84 24430008 */  addiu      $v1, $v0, 0x8
  .L1502AB88:
    /* 58038 1502AB88 8E010000 */  lw         $at, 0x0($s0)
    /* 5803C 1502AB8C 25080001 */  addiu      $t0, $t0, 0x1
    /* 58040 1502AB90 26100008 */  addiu      $s0, $s0, 0x8
    /* 58044 1502AB94 AC610000 */  sw         $at, 0x0($v1)
    /* 58048 1502AB98 8E0CFFFC */  lw         $t4, -0x4($s0)
    /* 5804C 1502AB9C 24420010 */  addiu      $v0, $v0, 0x10
    /* 58050 1502ABA0 24630010 */  addiu      $v1, $v1, 0x10
    /* 58054 1502ABA4 AC6CFFF4 */  sw         $t4, -0xC($v1)
    /* 58058 1502ABA8 AC47FFF0 */  sw         $a3, -0x10($v0)
    /* 5805C 1502ABAC 24E70008 */  addiu      $a3, $a3, 0x8
    /* 58060 1502ABB0 1488FFF5 */  bne        $a0, $t0, .L1502AB88
    /* 58064 1502ABB4 AC51FFF4 */   sw        $s1, -0xC($v0)
    /* 58068 1502ABB8 1109002D */  beq        $t0, $t1, .L1502AC70
  .L1502ABBC:
    /* 5806C 1502ABBC 3C0E800C */   lui       $t6, %hi(D_800C3D68)
    /* 58070 1502ABC0 25CE3D68 */  addiu      $t6, $t6, %lo(D_800C3D68)
    /* 58074 1502ABC4 00086900 */  sll        $t5, $t0, 4
    /* 58078 1502ABC8 01AE1021 */  addu       $v0, $t5, $t6
    /* 5807C 1502ABCC 3C08800C */  lui        $t0, %hi(D_800C3EA0)
    /* 58080 1502ABD0 25083EA0 */  addiu      $t0, $t0, %lo(D_800C3EA0)
    /* 58084 1502ABD4 24430008 */  addiu      $v1, $v0, 0x8
    /* 58088 1502ABD8 24450018 */  addiu      $a1, $v0, 0x18
    /* 5808C 1502ABDC 24460028 */  addiu      $a2, $v0, 0x28
    /* 58090 1502ABE0 24440038 */  addiu      $a0, $v0, 0x38
  .L1502ABE4:
    /* 58094 1502ABE4 8E010000 */  lw         $at, 0x0($s0)
    /* 58098 1502ABE8 24840040 */  addiu      $a0, $a0, 0x40
    /* 5809C 1502ABEC 26100020 */  addiu      $s0, $s0, 0x20
    /* 580A0 1502ABF0 AC610000 */  sw         $at, 0x0($v1)
    /* 580A4 1502ABF4 8E18FFE4 */  lw         $t8, -0x1C($s0)
    /* 580A8 1502ABF8 24420040 */  addiu      $v0, $v0, 0x40
    /* 580AC 1502ABFC 24630040 */  addiu      $v1, $v1, 0x40
    /* 580B0 1502AC00 AC78FFC4 */  sw         $t8, -0x3C($v1)
    /* 580B4 1502AC04 AC51FFC4 */  sw         $s1, -0x3C($v0)
    /* 580B8 1502AC08 AC47FFC0 */  sw         $a3, -0x40($v0)
    /* 580BC 1502AC0C 8E01FFE8 */  lw         $at, -0x18($s0)
    /* 580C0 1502AC10 24E70008 */  addiu      $a3, $a3, 0x8
    /* 580C4 1502AC14 24A50040 */  addiu      $a1, $a1, 0x40
    /* 580C8 1502AC18 ACA1FFC0 */  sw         $at, -0x40($a1)
    /* 580CC 1502AC1C 8E0AFFEC */  lw         $t2, -0x14($s0)
    /* 580D0 1502AC20 24C60040 */  addiu      $a2, $a2, 0x40
    /* 580D4 1502AC24 ACAAFFC4 */  sw         $t2, -0x3C($a1)
    /* 580D8 1502AC28 AC47FFD0 */  sw         $a3, -0x30($v0)
    /* 580DC 1502AC2C AC51FFD4 */  sw         $s1, -0x2C($v0)
    /* 580E0 1502AC30 8E01FFF0 */  lw         $at, -0x10($s0)
    /* 580E4 1502AC34 24E70008 */  addiu      $a3, $a3, 0x8
    /* 580E8 1502AC38 ACC1FFC0 */  sw         $at, -0x40($a2)
    /* 580EC 1502AC3C 8E0CFFF4 */  lw         $t4, -0xC($s0)
    /* 580F0 1502AC40 ACCCFFC4 */  sw         $t4, -0x3C($a2)
    /* 580F4 1502AC44 AC47FFE0 */  sw         $a3, -0x20($v0)
    /* 580F8 1502AC48 AC51FFE4 */  sw         $s1, -0x1C($v0)
    /* 580FC 1502AC4C 8E01FFF8 */  lw         $at, -0x8($s0)
    /* 58100 1502AC50 24E70008 */  addiu      $a3, $a3, 0x8
    /* 58104 1502AC54 AC81FFC0 */  sw         $at, -0x40($a0)
    /* 58108 1502AC58 8E0EFFFC */  lw         $t6, -0x4($s0)
    /* 5810C 1502AC5C AC8EFFC4 */  sw         $t6, -0x3C($a0)
    /* 58110 1502AC60 AC47FFF0 */  sw         $a3, -0x10($v0)
    /* 58114 1502AC64 24E70008 */  addiu      $a3, $a3, 0x8
    /* 58118 1502AC68 1488FFDE */  bne        $a0, $t0, .L1502ABE4
    /* 5811C 1502AC6C AC51FFF4 */   sw        $s1, -0xC($v0)
  .L1502AC70:
    /* 58120 1502AC70 8FBF0024 */  lw         $ra, 0x24($sp)
    /* 58124 1502AC74 8FB00018 */  lw         $s0, 0x18($sp)
    /* 58128 1502AC78 8FB1001C */  lw         $s1, 0x1C($sp)
    /* 5812C 1502AC7C 8FB20020 */  lw         $s2, 0x20($sp)
    /* 58130 1502AC80 03E00008 */  jr         $ra
    /* 58134 1502AC84 27BD0028 */   addiu     $sp, $sp, 0x28
endlabel func_1502AB04
