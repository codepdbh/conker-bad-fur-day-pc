SECTIONS
{
    HIDDEN(__romPos = 0);
    header_us_ROM_START = __romPos;
    header_us_VRAM = ADDR(.header_us);
    .header_us : AT(header_us_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        header_us_DATA_START = .;
        build/assets/header.us.bin.o(.data);
        header_us_DATA_END = .;
        header_us_DATA_SIZE = ABSOLUTE(header_us_DATA_END - header_us_DATA_START);
    }
    __romPos += SIZEOF(.header_us);
    header_us_ROM_END = __romPos;
    header_us_VRAM_END = .;

    boot_us_ROM_START = __romPos;
    boot_us_VRAM = ADDR(.boot_us);
    .boot_us : AT(boot_us_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        boot_us_DATA_START = .;
        build/assets/boot.us.bin.o(.data);
        boot_us_DATA_END = .;
        boot_us_DATA_SIZE = ABSOLUTE(boot_us_DATA_END - boot_us_DATA_START);
    }
    __romPos += SIZEOF(.boot_us);
    boot_us_ROM_END = __romPos;
    boot_us_VRAM_END = .;

    init_us_ROM_START = __romPos;
    init_us_VRAM = ADDR(.init_us);
    .init_us : AT(init_us_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        init_us_DATA_START = .;
        build/assets/init.us.bin.o(.data);
        init_us_DATA_END = .;
        init_us_DATA_SIZE = ABSOLUTE(init_us_DATA_END - init_us_DATA_START);
    }
    __romPos += SIZEOF(.init_us);
    init_us_ROM_END = __romPos;
    init_us_VRAM_END = .;

    _2D4B0_ROM_START = __romPos;
    _2D4B0_VRAM = ADDR(._2D4B0);
    ._2D4B0 : AT(_2D4B0_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        _2D4B0_DATA_START = .;
        build/assets/2D4B0.bin.o(.data);
        _2D4B0_DATA_END = .;
        _2D4B0_DATA_SIZE = ABSOLUTE(_2D4B0_DATA_END - _2D4B0_DATA_START);
    }
    __romPos += SIZEOF(._2D4B0);
    _2D4B0_ROM_END = __romPos;
    _2D4B0_VRAM_END = .;

    _2DE08_ROM_START = __romPos;
    _2DE08_VRAM = ADDR(._2DE08);
    ._2DE08 : AT(_2DE08_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        _2DE08_DATA_START = .;
        build/assets/2DE08.bin.o(.data);
        _2DE08_DATA_END = .;
        _2DE08_DATA_SIZE = ABSOLUTE(_2DE08_DATA_END - _2DE08_DATA_START);
    }
    __romPos += SIZEOF(._2DE08);
    _2DE08_ROM_END = __romPos;
    _2DE08_VRAM_END = .;

    _2E698_ROM_START = __romPos;
    _2E698_VRAM = ADDR(._2E698);
    ._2E698 : AT(_2E698_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        _2E698_DATA_START = .;
        build/assets/2E698.bin.o(.data);
        _2E698_DATA_END = .;
        _2E698_DATA_SIZE = ABSOLUTE(_2E698_DATA_END - _2E698_DATA_START);
    }
    __romPos += SIZEOF(._2E698);
    _2E698_ROM_END = __romPos;
    _2E698_VRAM_END = .;

    _2F520_ROM_START = __romPos;
    _2F520_VRAM = ADDR(._2F520);
    ._2F520 : AT(_2F520_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        _2F520_DATA_START = .;
        build/assets/2F520.bin.o(.data);
        _2F520_DATA_END = .;
        _2F520_DATA_SIZE = ABSOLUTE(_2F520_DATA_END - _2F520_DATA_START);
    }
    __romPos += SIZEOF(._2F520);
    _2F520_ROM_END = __romPos;
    _2F520_VRAM_END = .;

    _2FDB0_ROM_START = __romPos;
    _2FDB0_VRAM = ADDR(._2FDB0);
    ._2FDB0 : AT(_2FDB0_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        _2FDB0_DATA_START = .;
        build/assets/2FDB0.bin.o(.data);
        _2FDB0_DATA_END = .;
        _2FDB0_DATA_SIZE = ABSOLUTE(_2FDB0_DATA_END - _2FDB0_DATA_START);
    }
    __romPos += SIZEOF(._2FDB0);
    _2FDB0_ROM_END = __romPos;
    _2FDB0_VRAM_END = .;

    _30C38_ROM_START = __romPos;
    _30C38_VRAM = ADDR(._30C38);
    ._30C38 : AT(_30C38_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        _30C38_DATA_START = .;
        build/assets/30C38.bin.o(.data);
        _30C38_DATA_END = .;
        _30C38_DATA_SIZE = ABSOLUTE(_30C38_DATA_END - _30C38_DATA_START);
    }
    __romPos += SIZEOF(._30C38);
    _30C38_ROM_END = __romPos;
    _30C38_VRAM_END = .;

    _314C8_ROM_START = __romPos;
    _314C8_VRAM = ADDR(._314C8);
    ._314C8 : AT(_314C8_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        _314C8_DATA_START = .;
        build/assets/314C8.bin.o(.data);
        _314C8_DATA_END = .;
        _314C8_DATA_SIZE = ABSOLUTE(_314C8_DATA_END - _314C8_DATA_START);
    }
    __romPos += SIZEOF(._314C8);
    _314C8_ROM_END = __romPos;
    _314C8_VRAM_END = .;

    _31FE8_ROM_START = __romPos;
    _31FE8_VRAM = ADDR(._31FE8);
    ._31FE8 : AT(_31FE8_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        _31FE8_DATA_START = .;
        build/assets/31FE8.bin.o(.data);
        _31FE8_DATA_END = .;
        _31FE8_DATA_SIZE = ABSOLUTE(_31FE8_DATA_END - _31FE8_DATA_START);
    }
    __romPos += SIZEOF(._31FE8);
    _31FE8_ROM_END = __romPos;
    _31FE8_VRAM_END = .;

    _3293D_ROM_START = __romPos;
    _3293D_VRAM = ADDR(._3293D);
    ._3293D : AT(_3293D_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        _3293D_DATA_START = .;
        build/assets/3293D.bin.o(.data);
        _3293D_DATA_END = .;
        _3293D_DATA_SIZE = ABSOLUTE(_3293D_DATA_END - _3293D_DATA_START);
    }
    __romPos += SIZEOF(._3293D);
    _3293D_ROM_END = __romPos;
    _3293D_VRAM_END = .;

    _334F8_ROM_START = __romPos;
    _334F8_VRAM = ADDR(._334F8);
    ._334F8 : AT(_334F8_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        _334F8_DATA_START = .;
        build/assets/334F8.bin.o(.data);
        _334F8_DATA_END = .;
        _334F8_DATA_SIZE = ABSOLUTE(_334F8_DATA_END - _334F8_DATA_START);
    }
    __romPos += SIZEOF(._334F8);
    _334F8_ROM_END = __romPos;
    _334F8_VRAM_END = .;

    _33E4D_ROM_START = __romPos;
    _33E4D_VRAM = ADDR(._33E4D);
    ._33E4D : AT(_33E4D_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        _33E4D_DATA_START = .;
        build/assets/33E4D.bin.o(.data);
        _33E4D_DATA_END = .;
        _33E4D_DATA_SIZE = ABSOLUTE(_33E4D_DATA_END - _33E4D_DATA_START);
    }
    __romPos += SIZEOF(._33E4D);
    _33E4D_ROM_END = __romPos;
    _33E4D_VRAM_END = .;

    _34A08_ROM_START = __romPos;
    _34A08_VRAM = ADDR(._34A08);
    ._34A08 : AT(_34A08_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        _34A08_DATA_START = .;
        build/assets/34A08.bin.o(.data);
        _34A08_DATA_END = .;
        _34A08_DATA_SIZE = ABSOLUTE(_34A08_DATA_END - _34A08_DATA_START);
    }
    __romPos += SIZEOF(._34A08);
    _34A08_ROM_END = __romPos;
    _34A08_VRAM_END = .;

    _3535D_ROM_START = __romPos;
    _3535D_VRAM = ADDR(._3535D);
    ._3535D : AT(_3535D_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        _3535D_DATA_START = .;
        build/assets/3535D.bin.o(.data);
        _3535D_DATA_END = .;
        _3535D_DATA_SIZE = ABSOLUTE(_3535D_DATA_END - _3535D_DATA_START);
    }
    __romPos += SIZEOF(._3535D);
    _3535D_ROM_END = __romPos;
    _3535D_VRAM_END = .;

    _35F38_ROM_START = __romPos;
    _35F38_VRAM = ADDR(._35F38);
    ._35F38 : AT(_35F38_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        _35F38_DATA_START = .;
        build/assets/35F38.bin.o(.data);
        _35F38_DATA_END = .;
        _35F38_DATA_SIZE = ABSOLUTE(_35F38_DATA_END - _35F38_DATA_START);
    }
    __romPos += SIZEOF(._35F38);
    _35F38_ROM_END = __romPos;
    _35F38_VRAM_END = .;

    _3688D_ROM_START = __romPos;
    _3688D_VRAM = ADDR(._3688D);
    ._3688D : AT(_3688D_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        _3688D_DATA_START = .;
        build/assets/3688D.bin.o(.data);
        _3688D_DATA_END = .;
        _3688D_DATA_SIZE = ABSOLUTE(_3688D_DATA_END - _3688D_DATA_START);
    }
    __romPos += SIZEOF(._3688D);
    _3688D_ROM_END = __romPos;
    _3688D_VRAM_END = .;

    _37468_ROM_START = __romPos;
    _37468_VRAM = ADDR(._37468);
    ._37468 : AT(_37468_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        _37468_DATA_START = .;
        build/assets/37468.bin.o(.data);
        _37468_DATA_END = .;
        _37468_DATA_SIZE = ABSOLUTE(_37468_DATA_END - _37468_DATA_START);
    }
    __romPos += SIZEOF(._37468);
    _37468_ROM_END = __romPos;
    _37468_VRAM_END = .;

    _37DBA_ROM_START = __romPos;
    _37DBA_VRAM = ADDR(._37DBA);
    ._37DBA : AT(_37DBA_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        _37DBA_DATA_START = .;
        build/assets/37DBA.bin.o(.data);
        _37DBA_DATA_END = .;
        _37DBA_DATA_SIZE = ABSOLUTE(_37DBA_DATA_END - _37DBA_DATA_START);
    }
    __romPos += SIZEOF(._37DBA);
    _37DBA_ROM_END = __romPos;
    _37DBA_VRAM_END = .;

    _38908_ROM_START = __romPos;
    _38908_VRAM = ADDR(._38908);
    ._38908 : AT(_38908_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        _38908_DATA_START = .;
        build/assets/38908.bin.o(.data);
        _38908_DATA_END = .;
        _38908_DATA_SIZE = ABSOLUTE(_38908_DATA_END - _38908_DATA_START);
    }
    __romPos += SIZEOF(._38908);
    _38908_ROM_END = __romPos;
    _38908_VRAM_END = .;

    _3925C_ROM_START = __romPos;
    _3925C_VRAM = ADDR(._3925C);
    ._3925C : AT(_3925C_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        _3925C_DATA_START = .;
        build/assets/3925C.bin.o(.data);
        _3925C_DATA_END = .;
        _3925C_DATA_SIZE = ABSOLUTE(_3925C_DATA_END - _3925C_DATA_START);
    }
    __romPos += SIZEOF(._3925C);
    _3925C_ROM_END = __romPos;
    _3925C_VRAM_END = .;

    _39DA8_ROM_START = __romPos;
    _39DA8_VRAM = ADDR(._39DA8);
    ._39DA8 : AT(_39DA8_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        _39DA8_DATA_START = .;
        build/assets/39DA8.bin.o(.data);
        _39DA8_DATA_END = .;
        _39DA8_DATA_SIZE = ABSOLUTE(_39DA8_DATA_END - _39DA8_DATA_START);
    }
    __romPos += SIZEOF(._39DA8);
    _39DA8_ROM_END = __romPos;
    _39DA8_VRAM_END = .;

    _3A6FC_ROM_START = __romPos;
    _3A6FC_VRAM = ADDR(._3A6FC);
    ._3A6FC : AT(_3A6FC_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        _3A6FC_DATA_START = .;
        build/assets/3A6FC.bin.o(.data);
        _3A6FC_DATA_END = .;
        _3A6FC_DATA_SIZE = ABSOLUTE(_3A6FC_DATA_END - _3A6FC_DATA_START);
    }
    __romPos += SIZEOF(._3A6FC);
    _3A6FC_ROM_END = __romPos;
    _3A6FC_VRAM_END = .;

    _3B248_ROM_START = __romPos;
    _3B248_VRAM = ADDR(._3B248);
    ._3B248 : AT(_3B248_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        _3B248_DATA_START = .;
        build/assets/3B248.bin.o(.data);
        _3B248_DATA_END = .;
        _3B248_DATA_SIZE = ABSOLUTE(_3B248_DATA_END - _3B248_DATA_START);
    }
    __romPos += SIZEOF(._3B248);
    _3B248_ROM_END = __romPos;
    _3B248_VRAM_END = .;

    _3BB9C_ROM_START = __romPos;
    _3BB9C_VRAM = ADDR(._3BB9C);
    ._3BB9C : AT(_3BB9C_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        _3BB9C_DATA_START = .;
        build/assets/3BB9C.bin.o(.data);
        _3BB9C_DATA_END = .;
        _3BB9C_DATA_SIZE = ABSOLUTE(_3BB9C_DATA_END - _3BB9C_DATA_START);
    }
    __romPos += SIZEOF(._3BB9C);
    _3BB9C_ROM_END = __romPos;
    _3BB9C_VRAM_END = .;

    _3C124_ROM_START = __romPos;
    _3C124_VRAM = ADDR(._3C124);
    ._3C124 : AT(_3C124_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        _3C124_DATA_START = .;
        build/assets/3C124.bin.o(.data);
        _3C124_DATA_END = .;
        _3C124_DATA_SIZE = ABSOLUTE(_3C124_DATA_END - _3C124_DATA_START);
    }
    __romPos += SIZEOF(._3C124);
    _3C124_ROM_END = __romPos;
    _3C124_VRAM_END = .;

    game_us_rzip_ROM_START = __romPos;
    game_us_rzip_VRAM = ADDR(.game_us_rzip);
    .game_us_rzip : AT(game_us_rzip_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        game_us_rzip_DATA_START = .;
        build/assets/game.us.rzip.bin.o(.data);
        game_us_rzip_DATA_END = .;
        game_us_rzip_DATA_SIZE = ABSOLUTE(game_us_rzip_DATA_END - game_us_rzip_DATA_START);
    }
    __romPos += SIZEOF(.game_us_rzip);
    game_us_rzip_ROM_END = __romPos;
    game_us_rzip_VRAM_END = .;

    debugger_us_ROM_START = __romPos;
    debugger_us_VRAM = ADDR(.debugger_us);
    .debugger_us : AT(debugger_us_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        debugger_us_DATA_START = .;
        build/assets/debugger.us.bin.o(.data);
        debugger_us_DATA_END = .;
        debugger_us_DATA_SIZE = ABSOLUTE(debugger_us_DATA_END - debugger_us_DATA_START);
    }
    __romPos += SIZEOF(.debugger_us);
    debugger_us_ROM_END = __romPos;
    debugger_us_VRAM_END = .;

    compressed_ROM_START = __romPos;
    compressed_VRAM = ADDR(.compressed);
    .compressed : AT(compressed_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        compressed_DATA_START = .;
        build/assets/compressed.bin.o(.data);
        compressed_DATA_END = .;
        compressed_DATA_SIZE = ABSOLUTE(compressed_DATA_END - compressed_DATA_START);
    }
    __romPos += SIZEOF(.compressed);
    compressed_ROM_END = __romPos;
    compressed_VRAM_END = .;

    compressed_padding_ROM_START = __romPos;
    compressed_padding_VRAM = ADDR(.compressed_padding);
    .compressed_padding : AT(compressed_padding_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        compressed_padding_DATA_START = .;
        build/assets/compressed_padding.bin.o(.data);
        compressed_padding_DATA_END = .;
        compressed_padding_DATA_SIZE = ABSOLUTE(compressed_padding_DATA_END - compressed_padding_DATA_START);
    }
    __romPos += SIZEOF(.compressed_padding);
    compressed_padding_ROM_END = __romPos;
    compressed_padding_VRAM_END = .;

    assets_offsets_table_ROM_START = __romPos;
    assets_offsets_table_VRAM = ADDR(.assets_offsets_table);
    .assets_offsets_table : AT(assets_offsets_table_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        assets_offsets_table_DATA_START = .;
        build/assets/assets_offsets_table.bin.o(.data);
        assets_offsets_table_DATA_END = .;
        assets_offsets_table_DATA_SIZE = ABSOLUTE(assets_offsets_table_DATA_END - assets_offsets_table_DATA_START);
    }
    __romPos += SIZEOF(.assets_offsets_table);
    assets_offsets_table_ROM_END = __romPos;
    assets_offsets_table_VRAM_END = .;

    assets00_ROM_START = __romPos;
    assets00_VRAM = ADDR(.assets00);
    .assets00 : AT(assets00_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        assets00_DATA_START = .;
        build/assets/rzip/assets00/assets00.bin.o(.data);
        assets00_DATA_END = .;
        assets00_DATA_SIZE = ABSOLUTE(assets00_DATA_END - assets00_DATA_START);
    }
    __romPos += SIZEOF(.assets00);
    assets00_ROM_END = __romPos;
    assets00_VRAM_END = .;

    assets01_ROM_START = __romPos;
    assets01_VRAM = ADDR(.assets01);
    .assets01 : AT(assets01_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        assets01_DATA_START = .;
        build/assets/rzip/assets01/assets01.bin.o(.data);
        assets01_DATA_END = .;
        assets01_DATA_SIZE = ABSOLUTE(assets01_DATA_END - assets01_DATA_START);
    }
    __romPos += SIZEOF(.assets01);
    assets01_ROM_END = __romPos;
    assets01_VRAM_END = .;

    assets02_ROM_START = __romPos;
    assets02_VRAM = ADDR(.assets02);
    .assets02 : AT(assets02_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        assets02_DATA_START = .;
        build/assets/rzip/assets02/assets02.bin.o(.data);
        assets02_DATA_END = .;
        assets02_DATA_SIZE = ABSOLUTE(assets02_DATA_END - assets02_DATA_START);
    }
    __romPos += SIZEOF(.assets02);
    assets02_ROM_END = __romPos;
    assets02_VRAM_END = .;

    assets03_ROM_START = __romPos;
    assets03_VRAM = ADDR(.assets03);
    .assets03 : AT(assets03_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        assets03_DATA_START = .;
        build/assets/rzip/assets03/assets03.bin.o(.data);
        assets03_DATA_END = .;
        assets03_DATA_SIZE = ABSOLUTE(assets03_DATA_END - assets03_DATA_START);
    }
    __romPos += SIZEOF(.assets03);
    assets03_ROM_END = __romPos;
    assets03_VRAM_END = .;

    assets04_ROM_START = __romPos;
    assets04_VRAM = ADDR(.assets04);
    .assets04 : AT(assets04_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        assets04_DATA_START = .;
        build/assets/rzip/assets04/assets04.bin.o(.data);
        assets04_DATA_END = .;
        assets04_DATA_SIZE = ABSOLUTE(assets04_DATA_END - assets04_DATA_START);
    }
    __romPos += SIZEOF(.assets04);
    assets04_ROM_END = __romPos;
    assets04_VRAM_END = .;

    assets05_ROM_START = __romPos;
    assets05_VRAM = ADDR(.assets05);
    .assets05 : AT(assets05_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        assets05_DATA_START = .;
        build/assets/rzip/assets05/assets05.bin.o(.data);
        assets05_DATA_END = .;
        assets05_DATA_SIZE = ABSOLUTE(assets05_DATA_END - assets05_DATA_START);
    }
    __romPos += SIZEOF(.assets05);
    assets05_ROM_END = __romPos;
    assets05_VRAM_END = .;

    assets06_ROM_START = __romPos;
    assets06_VRAM = ADDR(.assets06);
    .assets06 : AT(assets06_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        assets06_DATA_START = .;
        build/assets/rzip/assets06/assets06.bin.o(.data);
        assets06_DATA_END = .;
        assets06_DATA_SIZE = ABSOLUTE(assets06_DATA_END - assets06_DATA_START);
    }
    __romPos += SIZEOF(.assets06);
    assets06_ROM_END = __romPos;
    assets06_VRAM_END = .;

    assets07_ROM_START = __romPos;
    assets07_VRAM = ADDR(.assets07);
    .assets07 : AT(assets07_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        assets07_DATA_START = .;
        build/assets/rzip/assets07/assets07.bin.o(.data);
        assets07_DATA_END = .;
        assets07_DATA_SIZE = ABSOLUTE(assets07_DATA_END - assets07_DATA_START);
    }
    __romPos += SIZEOF(.assets07);
    assets07_ROM_END = __romPos;
    assets07_VRAM_END = .;

    assets08_ROM_START = __romPos;
    assets08_VRAM = ADDR(.assets08);
    .assets08 : AT(assets08_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        assets08_DATA_START = .;
        build/assets/rzip/assets08/assets08.bin.o(.data);
        assets08_DATA_END = .;
        assets08_DATA_SIZE = ABSOLUTE(assets08_DATA_END - assets08_DATA_START);
    }
    __romPos += SIZEOF(.assets08);
    assets08_ROM_END = __romPos;
    assets08_VRAM_END = .;

    assets09_ROM_START = __romPos;
    assets09_VRAM = ADDR(.assets09);
    .assets09 : AT(assets09_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        assets09_DATA_START = .;
        build/assets/rzip/assets09/assets09.bin.o(.data);
        assets09_DATA_END = .;
        assets09_DATA_SIZE = ABSOLUTE(assets09_DATA_END - assets09_DATA_START);
    }
    __romPos += SIZEOF(.assets09);
    assets09_ROM_END = __romPos;
    assets09_VRAM_END = .;

    assets0A_ROM_START = __romPos;
    assets0A_VRAM = ADDR(.assets0A);
    .assets0A : AT(assets0A_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        assets0A_DATA_START = .;
        build/assets/rzip/assets0A/assets0A.bin.o(.data);
        assets0A_DATA_END = .;
        assets0A_DATA_SIZE = ABSOLUTE(assets0A_DATA_END - assets0A_DATA_START);
    }
    __romPos += SIZEOF(.assets0A);
    assets0A_ROM_END = __romPos;
    assets0A_VRAM_END = .;

    assets0B_ROM_START = __romPos;
    assets0B_VRAM = ADDR(.assets0B);
    .assets0B : AT(assets0B_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        assets0B_DATA_START = .;
        build/assets/rzip/assets0B/assets0B.bin.o(.data);
        assets0B_DATA_END = .;
        assets0B_DATA_SIZE = ABSOLUTE(assets0B_DATA_END - assets0B_DATA_START);
    }
    __romPos += SIZEOF(.assets0B);
    assets0B_ROM_END = __romPos;
    assets0B_VRAM_END = .;

    assets0C_ROM_START = __romPos;
    assets0C_VRAM = ADDR(.assets0C);
    .assets0C : AT(assets0C_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        assets0C_DATA_START = .;
        build/assets/rzip/assets0C/assets0C.bin.o(.data);
        assets0C_DATA_END = .;
        assets0C_DATA_SIZE = ABSOLUTE(assets0C_DATA_END - assets0C_DATA_START);
    }
    __romPos += SIZEOF(.assets0C);
    assets0C_ROM_END = __romPos;
    assets0C_VRAM_END = .;

    assets0D_ROM_START = __romPos;
    assets0D_VRAM = ADDR(.assets0D);
    .assets0D : AT(assets0D_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        assets0D_DATA_START = .;
        build/assets/rzip/assets0D/assets0D.bin.o(.data);
        assets0D_DATA_END = .;
        assets0D_DATA_SIZE = ABSOLUTE(assets0D_DATA_END - assets0D_DATA_START);
    }
    __romPos += SIZEOF(.assets0D);
    assets0D_ROM_END = __romPos;
    assets0D_VRAM_END = .;

    assets0E_ROM_START = __romPos;
    assets0E_VRAM = ADDR(.assets0E);
    .assets0E : AT(assets0E_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        assets0E_DATA_START = .;
        build/assets/rzip/assets0E/assets0E.bin.o(.data);
        assets0E_DATA_END = .;
        assets0E_DATA_SIZE = ABSOLUTE(assets0E_DATA_END - assets0E_DATA_START);
    }
    __romPos += SIZEOF(.assets0E);
    assets0E_ROM_END = __romPos;
    assets0E_VRAM_END = .;

    assets0F_ROM_START = __romPos;
    assets0F_VRAM = ADDR(.assets0F);
    .assets0F : AT(assets0F_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        assets0F_DATA_START = .;
        build/assets/rzip/assets0F/assets0F.bin.o(.data);
        assets0F_DATA_END = .;
        assets0F_DATA_SIZE = ABSOLUTE(assets0F_DATA_END - assets0F_DATA_START);
    }
    __romPos += SIZEOF(.assets0F);
    assets0F_ROM_END = __romPos;
    assets0F_VRAM_END = .;

    assets10_ROM_START = __romPos;
    assets10_VRAM = ADDR(.assets10);
    .assets10 : AT(assets10_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        assets10_DATA_START = .;
        build/assets/rzip/assets10/assets10.bin.o(.data);
        assets10_DATA_END = .;
        assets10_DATA_SIZE = ABSOLUTE(assets10_DATA_END - assets10_DATA_START);
    }
    __romPos += SIZEOF(.assets10);
    assets10_ROM_END = __romPos;
    assets10_VRAM_END = .;

    assets11_ROM_START = __romPos;
    assets11_VRAM = ADDR(.assets11);
    .assets11 : AT(assets11_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        assets11_DATA_START = .;
        build/assets/rzip/assets11/assets11.bin.o(.data);
        assets11_DATA_END = .;
        assets11_DATA_SIZE = ABSOLUTE(assets11_DATA_END - assets11_DATA_START);
    }
    __romPos += SIZEOF(.assets11);
    assets11_ROM_END = __romPos;
    assets11_VRAM_END = .;

    assets12_ROM_START = __romPos;
    assets12_VRAM = ADDR(.assets12);
    .assets12 : AT(assets12_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        assets12_DATA_START = .;
        build/assets/rzip/assets12/assets12.bin.o(.data);
        assets12_DATA_END = .;
        assets12_DATA_SIZE = ABSOLUTE(assets12_DATA_END - assets12_DATA_START);
    }
    __romPos += SIZEOF(.assets12);
    assets12_ROM_END = __romPos;
    assets12_VRAM_END = .;

    assets13_ROM_START = __romPos;
    assets13_VRAM = ADDR(.assets13);
    .assets13 : AT(assets13_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        assets13_DATA_START = .;
        build/assets/rzip/assets13/assets13.bin.o(.data);
        assets13_DATA_END = .;
        assets13_DATA_SIZE = ABSOLUTE(assets13_DATA_END - assets13_DATA_START);
    }
    __romPos += SIZEOF(.assets13);
    assets13_ROM_END = __romPos;
    assets13_VRAM_END = .;

    assets14_ROM_START = __romPos;
    assets14_VRAM = ADDR(.assets14);
    .assets14 : AT(assets14_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        assets14_DATA_START = .;
        build/assets/rzip/assets14/assets14.bin.o(.data);
        assets14_DATA_END = .;
        assets14_DATA_SIZE = ABSOLUTE(assets14_DATA_END - assets14_DATA_START);
    }
    __romPos += SIZEOF(.assets14);
    assets14_ROM_END = __romPos;
    assets14_VRAM_END = .;

    assets15_ROM_START = __romPos;
    assets15_VRAM = ADDR(.assets15);
    .assets15 : AT(assets15_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        assets15_DATA_START = .;
        build/assets/rzip/assets15/assets15.bin.o(.data);
        assets15_DATA_END = .;
        assets15_DATA_SIZE = ABSOLUTE(assets15_DATA_END - assets15_DATA_START);
    }
    __romPos += SIZEOF(.assets15);
    assets15_ROM_END = __romPos;
    assets15_VRAM_END = .;

    assets16_ROM_START = __romPos;
    assets16_VRAM = ADDR(.assets16);
    .assets16 : AT(assets16_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        assets16_DATA_START = .;
        build/assets/rzip/assets16/assets16.bin.o(.data);
        assets16_DATA_END = .;
        assets16_DATA_SIZE = ABSOLUTE(assets16_DATA_END - assets16_DATA_START);
    }
    __romPos += SIZEOF(.assets16);
    assets16_ROM_END = __romPos;
    assets16_VRAM_END = .;

    assets17_ROM_START = __romPos;
    assets17_VRAM = ADDR(.assets17);
    .assets17 : AT(assets17_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        assets17_DATA_START = .;
        build/assets/rzip/assets17/assets17.bin.o(.data);
        assets17_DATA_END = .;
        assets17_DATA_SIZE = ABSOLUTE(assets17_DATA_END - assets17_DATA_START);
    }
    __romPos += SIZEOF(.assets17);
    assets17_ROM_END = __romPos;
    assets17_VRAM_END = .;

    assets18_ROM_START = __romPos;
    assets18_VRAM = ADDR(.assets18);
    .assets18 : AT(assets18_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        assets18_DATA_START = .;
        build/assets/rzip/assets18/assets18.bin.o(.data);
        assets18_DATA_END = .;
        assets18_DATA_SIZE = ABSOLUTE(assets18_DATA_END - assets18_DATA_START);
    }
    __romPos += SIZEOF(.assets18);
    assets18_ROM_END = __romPos;
    assets18_VRAM_END = .;

    assets19_ROM_START = __romPos;
    assets19_VRAM = ADDR(.assets19);
    .assets19 : AT(assets19_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        assets19_DATA_START = .;
        build/assets/rzip/assets19/assets19.bin.o(.data);
        assets19_DATA_END = .;
        assets19_DATA_SIZE = ABSOLUTE(assets19_DATA_END - assets19_DATA_START);
    }
    __romPos += SIZEOF(.assets19);
    assets19_ROM_END = __romPos;
    assets19_VRAM_END = .;

    assets1A_ROM_START = __romPos;
    assets1A_VRAM = ADDR(.assets1A);
    .assets1A : AT(assets1A_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        assets1A_DATA_START = .;
        build/assets/rzip/assets1A/assets1A.bin.o(.data);
        assets1A_DATA_END = .;
        assets1A_DATA_SIZE = ABSOLUTE(assets1A_DATA_END - assets1A_DATA_START);
    }
    __romPos += SIZEOF(.assets1A);
    assets1A_ROM_END = __romPos;
    assets1A_VRAM_END = .;

    assets1B_ROM_START = __romPos;
    assets1B_VRAM = ADDR(.assets1B);
    .assets1B : AT(assets1B_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        assets1B_DATA_START = .;
        build/assets/rzip/assets1B/assets1B.bin.o(.data);
        assets1B_DATA_END = .;
        assets1B_DATA_SIZE = ABSOLUTE(assets1B_DATA_END - assets1B_DATA_START);
    }
    __romPos += SIZEOF(.assets1B);
    assets1B_ROM_END = __romPos;
    assets1B_VRAM_END = .;

    assets1C_ROM_START = __romPos;
    assets1C_VRAM = ADDR(.assets1C);
    .assets1C : AT(assets1C_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        assets1C_DATA_START = .;
        build/assets/rzip/assets1C/assets1C.bin.o(.data);
        assets1C_DATA_END = .;
        assets1C_DATA_SIZE = ABSOLUTE(assets1C_DATA_END - assets1C_DATA_START);
    }
    __romPos += SIZEOF(.assets1C);
    assets1C_ROM_END = __romPos;
    assets1C_VRAM_END = .;

    _3F8B770_ROM_START = __romPos;
    _3F8B770_VRAM = ADDR(._3F8B770);
    ._3F8B770 : AT(_3F8B770_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        _3F8B770_DATA_START = .;
        build/assets/3F8B770.bin.o(.data);
        _3F8B770_DATA_END = .;
        _3F8B770_DATA_SIZE = ABSOLUTE(_3F8B770_DATA_END - _3F8B770_DATA_START);
    }
    __romPos += SIZEOF(._3F8B770);
    _3F8B770_ROM_END = __romPos;
    _3F8B770_VRAM_END = .;

    trailer_ROM_START = __romPos;
    trailer_VRAM = ADDR(.trailer);
    .trailer : AT(trailer_ROM_START) SUBALIGN(16)
    {
        FILL(0x00000000);
        trailer_DATA_START = .;
        build/assets/trailer.bin.o(.data);
        trailer_DATA_END = .;
        trailer_DATA_SIZE = ABSOLUTE(trailer_DATA_END - trailer_DATA_START);
    }
    __romPos += SIZEOF(.trailer);
    trailer_ROM_END = __romPos;
    trailer_VRAM_END = .;

    /DISCARD/ :
    {
        *(*);
    }
}
