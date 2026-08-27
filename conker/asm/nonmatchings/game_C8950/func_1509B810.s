nonmatching func_1509B810, 0xEC

glabel func_1509B810
    /* C8CC0 1509B810 3C08800D */  lui        $t0, %hi(D_800D2F48)
    /* C8CC4 1509B814 3C09FFFF */  lui        $t1, (0xFFFF03FF >> 16)
    /* C8CC8 1509B818 352903FF */  ori        $t1, $t1, (0xFFFF03FF & 0xFFFF)
    /* C8CCC 1509B81C 25082F48 */  addiu      $t0, $t0, %lo(D_800D2F48)
    /* C8CD0 1509B820 95060000 */  lhu        $a2, 0x0($t0)
    /* C8CD4 1509B824 8D030008 */  lw         $v1, 0x8($t0)
    /* C8CD8 1509B828 948E0000 */  lhu        $t6, 0x0($a0)
    /* C8CDC 1509B82C 00601025 */  or         $v0, $v1, $zero
    /* C8CE0 1509B830 14C00009 */  bnez       $a2, .L1509B858
    /* C8CE4 1509B834 01C92824 */   and       $a1, $t6, $t1
    /* C8CE8 1509B838 AD040004 */  sw         $a0, 0x4($t0)
    /* C8CEC 1509B83C AD040008 */  sw         $a0, 0x8($t0)
    /* C8CF0 1509B840 AC800018 */  sw         $zero, 0x18($a0)
    /* C8CF4 1509B844 AC80001C */  sw         $zero, 0x1C($a0)
    /* C8CF8 1509B848 950F0000 */  lhu        $t7, 0x0($t0)
    /* C8CFC 1509B84C 25F80001 */  addiu      $t8, $t7, 0x1
    /* C8D00 1509B850 03E00008 */  jr         $ra
    /* C8D04 1509B854 A5180000 */   sh        $t8, 0x0($t0)
  .L1509B858:
    /* C8D08 1509B858 18C0001E */  blez       $a2, .L1509B8D4
    /* C8D0C 1509B85C 00003825 */   or        $a3, $zero, $zero
  .L1509B860:
    /* C8D10 1509B860 94590000 */  lhu        $t9, 0x0($v0)
    /* C8D14 1509B864 24E70001 */  addiu      $a3, $a3, 0x1
    /* C8D18 1509B868 03295024 */  and        $t2, $t9, $t1
    /* C8D1C 1509B86C 0145082A */  slt        $at, $t2, $a1
    /* C8D20 1509B870 50200016 */  beql       $at, $zero, .L1509B8CC
    /* C8D24 1509B874 00E6082A */   slt       $at, $a3, $a2
    /* C8D28 1509B878 5443000A */  bnel       $v0, $v1, .L1509B8A4
    /* C8D2C 1509B87C AC82001C */   sw        $v0, 0x1C($a0)
    /* C8D30 1509B880 AC82001C */  sw         $v0, 0x1C($a0)
    /* C8D34 1509B884 AC800018 */  sw         $zero, 0x18($a0)
    /* C8D38 1509B888 AC440018 */  sw         $a0, 0x18($v0)
    /* C8D3C 1509B88C 950B0000 */  lhu        $t3, 0x0($t0)
    /* C8D40 1509B890 AD040008 */  sw         $a0, 0x8($t0)
    /* C8D44 1509B894 256C0001 */  addiu      $t4, $t3, 0x1
    /* C8D48 1509B898 03E00008 */  jr         $ra
    /* C8D4C 1509B89C A50C0000 */   sh        $t4, 0x0($t0)
    /* C8D50 1509B8A0 AC82001C */  sw         $v0, 0x1C($a0)
  .L1509B8A4:
    /* C8D54 1509B8A4 8C4D0018 */  lw         $t5, 0x18($v0)
    /* C8D58 1509B8A8 AC8D0018 */  sw         $t5, 0x18($a0)
    /* C8D5C 1509B8AC 8C4E0018 */  lw         $t6, 0x18($v0)
    /* C8D60 1509B8B0 ADC4001C */  sw         $a0, 0x1C($t6)
    /* C8D64 1509B8B4 AC440018 */  sw         $a0, 0x18($v0)
    /* C8D68 1509B8B8 950F0000 */  lhu        $t7, 0x0($t0)
    /* C8D6C 1509B8BC 25F80001 */  addiu      $t8, $t7, 0x1
    /* C8D70 1509B8C0 03E00008 */  jr         $ra
    /* C8D74 1509B8C4 A5180000 */   sh        $t8, 0x0($t0)
    /* C8D78 1509B8C8 00E6082A */  slt        $at, $a3, $a2
  .L1509B8CC:
    /* C8D7C 1509B8CC 1420FFE4 */  bnez       $at, .L1509B860
    /* C8D80 1509B8D0 8C42001C */   lw        $v0, 0x1C($v0)
  .L1509B8D4:
    /* C8D84 1509B8D4 8D020004 */  lw         $v0, 0x4($t0)
    /* C8D88 1509B8D8 AD040004 */  sw         $a0, 0x4($t0)
    /* C8D8C 1509B8DC AC80001C */  sw         $zero, 0x1C($a0)
    /* C8D90 1509B8E0 AC820018 */  sw         $v0, 0x18($a0)
    /* C8D94 1509B8E4 AC44001C */  sw         $a0, 0x1C($v0)
    /* C8D98 1509B8E8 95190000 */  lhu        $t9, 0x0($t0)
    /* C8D9C 1509B8EC 272A0001 */  addiu      $t2, $t9, 0x1
    /* C8DA0 1509B8F0 A50A0000 */  sh         $t2, 0x0($t0)
    /* C8DA4 1509B8F4 03E00008 */  jr         $ra
    /* C8DA8 1509B8F8 00000000 */   nop
endlabel func_1509B810
