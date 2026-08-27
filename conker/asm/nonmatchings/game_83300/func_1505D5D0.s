nonmatching func_1505D5D0, 0x120

glabel func_1505D5D0
    /* 8AA80 1505D5D0 27BDFFD8 */  addiu      $sp, $sp, -0x28
    /* 8AA84 1505D5D4 AFBF0024 */  sw         $ra, 0x24($sp)
    /* 8AA88 1505D5D8 AFA40028 */  sw         $a0, 0x28($sp)
    /* 8AA8C 1505D5DC AFA60030 */  sw         $a2, 0x30($sp)
    /* 8AA90 1505D5E0 AFA70034 */  sw         $a3, 0x34($sp)
    /* 8AA94 1505D5E4 C4AC0040 */  lwc1       $f12, 0x40($a1)
    /* 8AA98 1505D5E8 8CA7014C */  lw         $a3, 0x14C($a1)
    /* 8AA9C 1505D5EC 27AE0058 */  addiu      $t6, $sp, 0x58
    /* 8AAA0 1505D5F0 AFAE0010 */  sw         $t6, 0x10($sp)
    /* 8AAA4 1505D5F4 AFA5002C */  sw         $a1, 0x2C($sp)
    /* 8AAA8 1505D5F8 C7AE0054 */  lwc1       $f14, 0x54($sp)
    /* 8AAAC 1505D5FC 0D4174D3 */  jal        func_1505D34C
    /* 8AAB0 1505D600 8FA60058 */   lw        $a2, 0x58($sp)
    /* 8AAB4 1505D604 8FA5002C */  lw         $a1, 0x2C($sp)
    /* 8AAB8 1505D608 C7A40048 */  lwc1       $f4, 0x48($sp)
    /* 8AABC 1505D60C C7AA0030 */  lwc1       $f10, 0x30($sp)
    /* 8AAC0 1505D610 C4A6014C */  lwc1       $f6, 0x14C($a1)
    /* 8AAC4 1505D614 C7AE004C */  lwc1       $f14, 0x4C($sp)
    /* 8AAC8 1505D618 3C013F00 */  lui        $at, (0x3F000000 >> 16)
    /* 8AACC 1505D61C 46062202 */  mul.s      $f8, $f4, $f6
    /* 8AAD0 1505D620 8FA40028 */  lw         $a0, 0x28($sp)
    /* 8AAD4 1505D624 E7A80048 */  swc1       $f8, 0x48($sp)
    /* 8AAD8 1505D628 C4A40014 */  lwc1       $f4, 0x14($a1)
    /* 8AADC 1505D62C C4A20150 */  lwc1       $f2, 0x150($a1)
    /* 8AAE0 1505D630 46002180 */  add.s      $f6, $f4, $f0
    /* 8AAE4 1505D634 C4A4001C */  lwc1       $f4, 0x1C($a1)
    /* 8AAE8 1505D638 46027382 */  mul.s      $f14, $f14, $f2
    /* 8AAEC 1505D63C 46065401 */  sub.s      $f16, $f10, $f6
    /* 8AAF0 1505D640 C7AA0058 */  lwc1       $f10, 0x58($sp)
    /* 8AAF4 1505D644 460A2180 */  add.s      $f6, $f4, $f10
    /* 8AAF8 1505D648 C7A40038 */  lwc1       $f4, 0x38($sp)
    /* 8AAFC 1505D64C C4AA0018 */  lwc1       $f10, 0x18($a1)
    /* 8AB00 1505D650 46062481 */  sub.s      $f18, $f4, $f6
    /* 8AB04 1505D654 C7A40050 */  lwc1       $f4, 0x50($sp)
    /* 8AB08 1505D658 46022182 */  mul.s      $f6, $f4, $f2
    /* 8AB0C 1505D65C 46065100 */  add.s      $f4, $f10, $f6
    /* 8AB10 1505D660 C7AA0034 */  lwc1       $f10, 0x34($sp)
    /* 8AB14 1505D664 460E4183 */  div.s      $f6, $f8, $f14
    /* 8AB18 1505D668 46045301 */  sub.s      $f12, $f10, $f4
    /* 8AB1C 1505D66C C7AA003C */  lwc1       $f10, 0x3C($sp)
    /* 8AB20 1505D670 46065100 */  add.s      $f4, $f10, $f6
    /* 8AB24 1505D674 44815000 */  mtc1       $at, $f10
    /* 8AB28 1505D678 00000000 */  nop
    /* 8AB2C 1505D67C 460A2182 */  mul.s      $f6, $f4, $f10
    /* 8AB30 1505D680 00000000 */  nop
    /* 8AB34 1505D684 46066302 */  mul.s      $f12, $f12, $f6
    /* 8AB38 1505D688 00000000 */  nop
    /* 8AB3C 1505D68C 46108102 */  mul.s      $f4, $f16, $f16
    /* 8AB40 1505D690 00000000 */  nop
    /* 8AB44 1505D694 460C6282 */  mul.s      $f10, $f12, $f12
    /* 8AB48 1505D698 460A2180 */  add.s      $f6, $f4, $f10
    /* 8AB4C 1505D69C 46129102 */  mul.s      $f4, $f18, $f18
    /* 8AB50 1505D6A0 C7AA0040 */  lwc1       $f10, 0x40($sp)
    /* 8AB54 1505D6A4 46085000 */  add.s      $f0, $f10, $f8
    /* 8AB58 1505D6A8 46043080 */  add.s      $f2, $f6, $f4
    /* 8AB5C 1505D6AC 46000182 */  mul.s      $f6, $f0, $f0
    /* 8AB60 1505D6B0 4606103C */  c.lt.s     $f2, $f6
    /* 8AB64 1505D6B4 00000000 */  nop
    /* 8AB68 1505D6B8 45000009 */  bc1f       .L1505D6E0
    /* 8AB6C 1505D6BC 00000000 */   nop
    /* 8AB70 1505D6C0 8FAF0044 */  lw         $t7, 0x44($sp)
    /* 8AB74 1505D6C4 44068000 */  mfc1       $a2, $f16
    /* 8AB78 1505D6C8 44076000 */  mfc1       $a3, $f12
    /* 8AB7C 1505D6CC E7B20010 */  swc1       $f18, 0x10($sp)
    /* 8AB80 1505D6D0 E7A20014 */  swc1       $f2, 0x14($sp)
    /* 8AB84 1505D6D4 E7A00018 */  swc1       $f0, 0x18($sp)
    /* 8AB88 1505D6D8 0D417502 */  jal        func_1505D408
    /* 8AB8C 1505D6DC AFAF001C */   sw        $t7, 0x1C($sp)
  .L1505D6E0:
    /* 8AB90 1505D6E0 8FBF0024 */  lw         $ra, 0x24($sp)
    /* 8AB94 1505D6E4 27BD0028 */  addiu      $sp, $sp, 0x28
    /* 8AB98 1505D6E8 03E00008 */  jr         $ra
    /* 8AB9C 1505D6EC 00000000 */   nop
endlabel func_1505D5D0
