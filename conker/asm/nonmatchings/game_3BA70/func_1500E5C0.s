nonmatching func_1500E5C0, 0x14C

glabel func_1500E5C0
    /* 3BA70 1500E5C0 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* 3BA74 1500E5C4 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 3BA78 1500E5C8 0D40491C */  jal        func_15012470
    /* 3BA7C 1500E5CC 00000000 */   nop
    /* 3BA80 1500E5D0 0D402284 */  jal        func_15008A10
    /* 3BA84 1500E5D4 00000000 */   nop
    /* 3BA88 1500E5D8 0D4049DC */  jal        func_15012770
    /* 3BA8C 1500E5DC 00000000 */   nop
    /* 3BA90 1500E5E0 3C02800E */  lui        $v0, %hi(D_800E0950)
    /* 3BA94 1500E5E4 3C03800E */  lui        $v1, %hi(D_800E0964)
    /* 3BA98 1500E5E8 24630964 */  addiu      $v1, $v1, %lo(D_800E0964)
    /* 3BA9C 1500E5EC 24420950 */  addiu      $v0, $v0, %lo(D_800E0950)
  .L1500E5F0:
    /* 3BAA0 1500E5F0 24420004 */  addiu      $v0, $v0, 0x4
    /* 3BAA4 1500E5F4 A040FFFD */  sb         $zero, -0x3($v0)
    /* 3BAA8 1500E5F8 A040FFFE */  sb         $zero, -0x2($v0)
    /* 3BAAC 1500E5FC A040FFFF */  sb         $zero, -0x1($v0)
    /* 3BAB0 1500E600 1443FFFB */  bne        $v0, $v1, .L1500E5F0
    /* 3BAB4 1500E604 A040FFFC */   sb        $zero, -0x4($v0)
    /* 3BAB8 1500E608 3C01800E */  lui        $at, %hi(D_800D9921)
    /* 3BABC 1500E60C A0209921 */  sb         $zero, %lo(D_800D9921)($at)
    /* 3BAC0 1500E610 3C01800E */  lui        $at, %hi(D_800D9920)
    /* 3BAC4 1500E614 A0209920 */  sb         $zero, %lo(D_800D9920)($at)
    /* 3BAC8 1500E618 3C01800E */  lui        $at, %hi(D_800D9928)
    /* 3BACC 1500E61C A0209928 */  sb         $zero, %lo(D_800D9928)($at)
    /* 3BAD0 1500E620 3C01800E */  lui        $at, %hi(D_800D9938)
    /* 3BAD4 1500E624 A0209938 */  sb         $zero, %lo(D_800D9938)($at)
    /* 3BAD8 1500E628 3C01800E */  lui        $at, %hi(D_800D9929)
    /* 3BADC 1500E62C A0209929 */  sb         $zero, %lo(D_800D9929)($at)
    /* 3BAE0 1500E630 3C01800E */  lui        $at, %hi(D_800D9939)
    /* 3BAE4 1500E634 3C03800E */  lui        $v1, %hi(D_800D992A)
    /* 3BAE8 1500E638 3C02800E */  lui        $v0, %hi(D_800D993A)
    /* 3BAEC 1500E63C 3C04800E */  lui        $a0, %hi(D_800D9946)
    /* 3BAF0 1500E640 24849946 */  addiu      $a0, $a0, %lo(D_800D9946)
    /* 3BAF4 1500E644 2442993A */  addiu      $v0, $v0, %lo(D_800D993A)
    /* 3BAF8 1500E648 2463992A */  addiu      $v1, $v1, %lo(D_800D992A)
    /* 3BAFC 1500E64C A0209939 */  sb         $zero, %lo(D_800D9939)($at)
  .L1500E650:
    /* 3BB00 1500E650 24420004 */  addiu      $v0, $v0, 0x4
    /* 3BB04 1500E654 A0600001 */  sb         $zero, 0x1($v1)
    /* 3BB08 1500E658 A040FFFD */  sb         $zero, -0x3($v0)
    /* 3BB0C 1500E65C A0600002 */  sb         $zero, 0x2($v1)
    /* 3BB10 1500E660 A040FFFE */  sb         $zero, -0x2($v0)
    /* 3BB14 1500E664 A0600003 */  sb         $zero, 0x3($v1)
    /* 3BB18 1500E668 A040FFFF */  sb         $zero, -0x1($v0)
    /* 3BB1C 1500E66C 24630004 */  addiu      $v1, $v1, 0x4
    /* 3BB20 1500E670 A060FFFC */  sb         $zero, -0x4($v1)
    /* 3BB24 1500E674 1444FFF6 */  bne        $v0, $a0, .L1500E650
    /* 3BB28 1500E678 A040FFFC */   sb        $zero, -0x4($v0)
    /* 3BB2C 1500E67C 3C02800E */  lui        $v0, %hi(D_800D98D0)
    /* 3BB30 1500E680 244298D0 */  addiu      $v0, $v0, %lo(D_800D98D0)
    /* 3BB34 1500E684 3C01800E */  lui        $at, %hi(D_800D9890)
    /* 3BB38 1500E688 A0209890 */  sb         $zero, %lo(D_800D9890)($at)
    /* 3BB3C 1500E68C 3C01800E */  lui        $at, %hi(D_800D9894)
    /* 3BB40 1500E690 AC209894 */  sw         $zero, %lo(D_800D9894)($at)
    /* 3BB44 1500E694 AC400000 */  sw         $zero, 0x0($v0)
    /* 3BB48 1500E698 AC400004 */  sw         $zero, 0x4($v0)
    /* 3BB4C 1500E69C AC400008 */  sw         $zero, 0x8($v0)
    /* 3BB50 1500E6A0 AC40000C */  sw         $zero, 0xC($v0)
    /* 3BB54 1500E6A4 3C018009 */  lui        $at, %hi(D_80088870)
    /* 3BB58 1500E6A8 3C04800C */  lui        $a0, %hi(D_800BE500)
    /* 3BB5C 1500E6AC AC208870 */  sw         $zero, %lo(D_80088870)($at)
    /* 3BB60 1500E6B0 2484E500 */  addiu      $a0, $a0, %lo(D_800BE500)
    /* 3BB64 1500E6B4 0C0089BC */  jal        bzero
    /* 3BB68 1500E6B8 24050005 */   addiu     $a1, $zero, 0x5
    /* 3BB6C 1500E6BC 3C03800E */  lui        $v1, %hi(D_800D9950)
    /* 3BB70 1500E6C0 24639950 */  addiu      $v1, $v1, %lo(D_800D9950)
    /* 3BB74 1500E6C4 A0600002 */  sb         $zero, 0x2($v1)
    /* 3BB78 1500E6C8 A0600001 */  sb         $zero, 0x1($v1)
    /* 3BB7C 1500E6CC A0600000 */  sb         $zero, 0x0($v1)
    /* 3BB80 1500E6D0 3C018009 */  lui        $at, %hi(D_80088980)
    /* 3BB84 1500E6D4 3C04800E */  lui        $a0, %hi(D_800D9AA0)
    /* 3BB88 1500E6D8 A0208980 */  sb         $zero, %lo(D_80088980)($at)
    /* 3BB8C 1500E6DC 24849AA0 */  addiu      $a0, $a0, %lo(D_800D9AA0)
    /* 3BB90 1500E6E0 AC800000 */  sw         $zero, 0x0($a0)
    /* 3BB94 1500E6E4 AC800004 */  sw         $zero, 0x4($a0)
    /* 3BB98 1500E6E8 AC800008 */  sw         $zero, 0x8($a0)
    /* 3BB9C 1500E6EC 3C01800C */  lui        $at, %hi(D_800BE4F0)
    /* 3BBA0 1500E6F0 AC20E4F0 */  sw         $zero, %lo(D_800BE4F0)($at)
    /* 3BBA4 1500E6F4 3C018009 */  lui        $at, %hi(D_80088B40)
    /* 3BBA8 1500E6F8 A0208B40 */  sb         $zero, %lo(D_80088B40)($at)
    /* 3BBAC 1500E6FC 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 3BBB0 1500E700 27BD0018 */  addiu      $sp, $sp, 0x18
    /* 3BBB4 1500E704 03E00008 */  jr         $ra
    /* 3BBB8 1500E708 00000000 */   nop
endlabel func_1500E5C0
