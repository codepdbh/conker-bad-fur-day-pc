nonmatching func_1509B764, 0xAC

glabel func_1509B764
    /* C8C14 1509B764 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* C8C18 1509B768 3C02800D */  lui        $v0, %hi(D_800D2F48)
    /* C8C1C 1509B76C 24422F48 */  addiu      $v0, $v0, %lo(D_800D2F48)
    /* C8C20 1509B770 AFBF0014 */  sw         $ra, 0x14($sp)
    /* C8C24 1509B774 944E0000 */  lhu        $t6, 0x0($v0)
    /* C8C28 1509B778 24010001 */  addiu      $at, $zero, 0x1
    /* C8C2C 1509B77C 55C10005 */  bnel       $t6, $at, .L1509B794
    /* C8C30 1509B780 8C4F0004 */   lw        $t7, 0x4($v0)
    /* C8C34 1509B784 AC400004 */  sw         $zero, 0x4($v0)
    /* C8C38 1509B788 10000017 */  b          .L1509B7E8
    /* C8C3C 1509B78C AC400008 */   sw        $zero, 0x8($v0)
    /* C8C40 1509B790 8C4F0004 */  lw         $t7, 0x4($v0)
  .L1509B794:
    /* C8C44 1509B794 548F0007 */  bnel       $a0, $t7, .L1509B7B4
    /* C8C48 1509B798 8C880018 */   lw        $t0, 0x18($a0)
    /* C8C4C 1509B79C 8C980018 */  lw         $t8, 0x18($a0)
    /* C8C50 1509B7A0 AC580004 */  sw         $t8, 0x4($v0)
    /* C8C54 1509B7A4 8C990018 */  lw         $t9, 0x18($a0)
    /* C8C58 1509B7A8 10000004 */  b          .L1509B7BC
    /* C8C5C 1509B7AC AF20001C */   sw        $zero, 0x1C($t9)
    /* C8C60 1509B7B0 8C880018 */  lw         $t0, 0x18($a0)
  .L1509B7B4:
    /* C8C64 1509B7B4 8C89001C */  lw         $t1, 0x1C($a0)
    /* C8C68 1509B7B8 AD280018 */  sw         $t0, 0x18($t1)
  .L1509B7BC:
    /* C8C6C 1509B7BC 8C4A0008 */  lw         $t2, 0x8($v0)
    /* C8C70 1509B7C0 548A0007 */  bnel       $a0, $t2, .L1509B7E0
    /* C8C74 1509B7C4 8C8D001C */   lw        $t5, 0x1C($a0)
    /* C8C78 1509B7C8 8C8B001C */  lw         $t3, 0x1C($a0)
    /* C8C7C 1509B7CC AC4B0008 */  sw         $t3, 0x8($v0)
    /* C8C80 1509B7D0 8C8C001C */  lw         $t4, 0x1C($a0)
    /* C8C84 1509B7D4 10000004 */  b          .L1509B7E8
    /* C8C88 1509B7D8 AD800018 */   sw        $zero, 0x18($t4)
    /* C8C8C 1509B7DC 8C8D001C */  lw         $t5, 0x1C($a0)
  .L1509B7E0:
    /* C8C90 1509B7E0 8C8E0018 */  lw         $t6, 0x18($a0)
    /* C8C94 1509B7E4 ADCD001C */  sw         $t5, 0x1C($t6)
  .L1509B7E8:
    /* C8C98 1509B7E8 0C00101D */  jal        func_10004074
    /* C8C9C 1509B7EC 00000000 */   nop
    /* C8CA0 1509B7F0 3C02800D */  lui        $v0, %hi(D_800D2F48)
    /* C8CA4 1509B7F4 24422F48 */  addiu      $v0, $v0, %lo(D_800D2F48)
    /* C8CA8 1509B7F8 944F0000 */  lhu        $t7, 0x0($v0)
    /* C8CAC 1509B7FC 25F8FFFF */  addiu      $t8, $t7, -0x1
    /* C8CB0 1509B800 A4580000 */  sh         $t8, 0x0($v0)
    /* C8CB4 1509B804 8FBF0014 */  lw         $ra, 0x14($sp)
    /* C8CB8 1509B808 03E00008 */  jr         $ra
    /* C8CBC 1509B80C 27BD0018 */   addiu     $sp, $sp, 0x18
endlabel func_1509B764
