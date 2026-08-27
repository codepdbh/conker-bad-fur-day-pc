nonmatching func_15073A50, 0xE8

glabel func_15073A50
    /* A0F00 15073A50 27BDFFD8 */  addiu      $sp, $sp, -0x28
    /* A0F04 15073A54 3C08800D */  lui        $t0, %hi(D_800D154C)
    /* A0F08 15073A58 2508154C */  addiu      $t0, $t0, %lo(D_800D154C)
    /* A0F0C 15073A5C AFBF0014 */  sw         $ra, 0x14($sp)
    /* A0F10 15073A60 8D030000 */  lw         $v1, 0x0($t0)
    /* A0F14 15073A64 3C0F800D */  lui        $t7, %hi(D_800CC2D0)
    /* A0F18 15073A68 25EFC2D0 */  addiu      $t7, $t7, %lo(D_800CC2D0)
    /* A0F1C 15073A6C 90620124 */  lbu        $v0, 0x124($v1)
    /* A0F20 15073A70 3C09800D */  lui        $t1, %hi(D_800D1580)
    /* A0F24 15073A74 3C0100FF */  lui        $at, (0xFF00FF >> 16)
    /* A0F28 15073A78 00027080 */  sll        $t6, $v0, 2
    /* A0F2C 15073A7C 01C27023 */  subu       $t6, $t6, $v0
    /* A0F30 15073A80 000E7080 */  sll        $t6, $t6, 2
    /* A0F34 15073A84 01C27021 */  addu       $t6, $t6, $v0
    /* A0F38 15073A88 000E7080 */  sll        $t6, $t6, 2
    /* A0F3C 15073A8C 01C27023 */  subu       $t6, $t6, $v0
    /* A0F40 15073A90 000E7080 */  sll        $t6, $t6, 2
    /* A0F44 15073A94 01C27023 */  subu       $t6, $t6, $v0
    /* A0F48 15073A98 000E7080 */  sll        $t6, $t6, 2
    /* A0F4C 15073A9C 01CF2021 */  addu       $a0, $t6, $t7
    /* A0F50 15073AA0 90980065 */  lbu        $t8, 0x65($a0)
    /* A0F54 15073AA4 25291580 */  addiu      $t1, $t1, %lo(D_800D1580)
    /* A0F58 15073AA8 342100FF */  ori        $at, $at, (0xFF00FF & 0xFFFF)
    /* A0F5C 15073AAC 1300001E */  beqz       $t8, .L15073B28
    /* A0F60 15073AB0 00003025 */   or        $a2, $zero, $zero
    /* A0F64 15073AB4 8D220000 */  lw         $v0, 0x0($t1)
    /* A0F68 15073AB8 A060013C */  sb         $zero, 0x13C($v1)
    /* A0F6C 15073ABC 8D250000 */  lw         $a1, 0x0($t1)
    /* A0F70 15073AC0 A0800125 */  sb         $zero, 0x125($a0)
    /* A0F74 15073AC4 3C07800C */  lui        $a3, %hi(D_800C3E78)
    /* A0F78 15073AC8 00A1C824 */  and        $t9, $a1, $at
    /* A0F7C 15073ACC 03202825 */  or         $a1, $t9, $zero
    /* A0F80 15073AD0 90E73E78 */  lbu        $a3, %lo(D_800C3E78)($a3)
    /* A0F84 15073AD4 AFA40018 */  sw         $a0, 0x18($sp)
    /* A0F88 15073AD8 0D417409 */  jal        func_1505D024
    /* A0F8C 15073ADC AFA20020 */   sw        $v0, 0x20($sp)
    /* A0F90 15073AE0 8FA20020 */  lw         $v0, 0x20($sp)
    /* A0F94 15073AE4 3C01800A */  lui        $at, %hi(D_8009A0D8)
    /* A0F98 15073AE8 8FA40018 */  lw         $a0, 0x18($sp)
    /* A0F9C 15073AEC C424A0D8 */  lwc1       $f4, %lo(D_8009A0D8)($at)
    /* A0FA0 15073AF0 3C08800D */  lui        $t0, %hi(D_800D154C)
    /* A0FA4 15073AF4 00025040 */  sll        $t2, $v0, 1
    /* A0FA8 15073AF8 2508154C */  addiu      $t0, $t0, %lo(D_800D154C)
    /* A0FAC 15073AFC 05410004 */  bgez       $t2, .L15073B10
    /* A0FB0 15073B00 E48401CC */   swc1      $f4, 0x1CC($a0)
    /* A0FB4 15073B04 8D0B0000 */  lw         $t3, 0x0($t0)
    /* A0FB8 15073B08 C5660018 */  lwc1       $f6, 0x18($t3)
    /* A0FBC 15073B0C E48601CC */  swc1       $f6, 0x1CC($a0)
  .L15073B10:
    /* A0FC0 15073B10 8D0D0000 */  lw         $t5, 0x0($t0)
    /* A0FC4 15073B14 240C0014 */  addiu      $t4, $zero, 0x14
    /* A0FC8 15073B18 A08C0125 */  sb         $t4, 0x125($a0)
    /* A0FCC 15073B1C 95AE007A */  lhu        $t6, 0x7A($t5)
    /* A0FD0 15073B20 01C27821 */  addu       $t7, $t6, $v0
    /* A0FD4 15073B24 A48F0076 */  sh         $t7, 0x76($a0)
  .L15073B28:
    /* A0FD8 15073B28 8FBF0014 */  lw         $ra, 0x14($sp)
    /* A0FDC 15073B2C 27BD0028 */  addiu      $sp, $sp, 0x28
    /* A0FE0 15073B30 03E00008 */  jr         $ra
    /* A0FE4 15073B34 00000000 */   nop
endlabel func_15073A50
