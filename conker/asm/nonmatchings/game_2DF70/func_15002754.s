nonmatching func_15002754, 0xA4

glabel func_15002754
    /* 2FC04 15002754 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* 2FC08 15002758 3C03800B */  lui        $v1, %hi(D_800B0DC0)
    /* 2FC0C 1500275C 24630DC0 */  addiu      $v1, $v1, %lo(D_800B0DC0)
    /* 2FC10 15002760 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 2FC14 15002764 8C6E0000 */  lw         $t6, 0x0($v1)
    /* 2FC18 15002768 2401FFFC */  addiu      $at, $zero, -0x4
    /* 2FC1C 1500276C 3C06800E */  lui        $a2, %hi(D_800DBE38)
    /* 2FC20 15002770 25CF0003 */  addiu      $t7, $t6, 0x3
    /* 2FC24 15002774 01E1C024 */  and        $t8, $t7, $at
    /* 2FC28 15002778 AC780000 */  sw         $t8, 0x0($v1)
    /* 2FC2C 1500277C 8CC6BE38 */  lw         $a2, %lo(D_800DBE38)($a2)
    /* 2FC30 15002780 3C04800E */  lui        $a0, %hi(D_800DBE50)
    /* 2FC34 15002784 8C84BE50 */  lw         $a0, %lo(D_800DBE50)($a0)
    /* 2FC38 15002788 0006C880 */  sll        $t9, $a2, 2
    /* 2FC3C 1500278C 3C01800E */  lui        $at, %hi(D_800DBDD8)
    /* 2FC40 15002790 0326C823 */  subu       $t9, $t9, $a2
    /* 2FC44 15002794 00042880 */  sll        $a1, $a0, 2
    /* 2FC48 15002798 00250821 */  addu       $at, $at, $a1
    /* 2FC4C 1500279C 0019C880 */  sll        $t9, $t9, 2
    /* 2FC50 150027A0 AC38BDD8 */  sw         $t8, %lo(D_800DBDD8)($at)
    /* 2FC54 150027A4 03194021 */  addu       $t0, $t8, $t9
    /* 2FC58 150027A8 3C01800E */  lui        $at, %hi(D_800DBDE8)
    /* 2FC5C 150027AC AC680000 */  sw         $t0, 0x0($v1)
    /* 2FC60 150027B0 00250821 */  addu       $at, $at, $a1
    /* 2FC64 150027B4 000648C0 */  sll        $t1, $a2, 3
    /* 2FC68 150027B8 AC28BDE8 */  sw         $t0, %lo(D_800DBDE8)($at)
    /* 2FC6C 150027BC 01095021 */  addu       $t2, $t0, $t1
    /* 2FC70 150027C0 3C01800E */  lui        $at, %hi(D_800DBDF8)
    /* 2FC74 150027C4 AC6A0000 */  sw         $t2, 0x0($v1)
    /* 2FC78 150027C8 00250821 */  addu       $at, $at, $a1
    /* 2FC7C 150027CC 00065880 */  sll        $t3, $a2, 2
    /* 2FC80 150027D0 AC2ABDF8 */  sw         $t2, %lo(D_800DBDF8)($at)
    /* 2FC84 150027D4 014B6021 */  addu       $t4, $t2, $t3
    /* 2FC88 150027D8 0D443E00 */  jal        func_1510F800
    /* 2FC8C 150027DC AC6C0000 */   sw        $t4, 0x0($v1)
    /* 2FC90 150027E0 3C01800E */  lui        $at, %hi(D_800DBE38)
    /* 2FC94 150027E4 AC20BE38 */  sw         $zero, %lo(D_800DBE38)($at)
    /* 2FC98 150027E8 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 2FC9C 150027EC 27BD0018 */  addiu      $sp, $sp, 0x18
    /* 2FCA0 150027F0 03E00008 */  jr         $ra
    /* 2FCA4 150027F4 00000000 */   nop
endlabel func_15002754
