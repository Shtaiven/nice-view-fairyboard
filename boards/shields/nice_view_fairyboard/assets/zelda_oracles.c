/*******************************************************************************
 * Size: 12 px
 * Bpp: 1
 * Opts: --bpp 1 --size 12 --no-compress --font zelda-oracles.ttf --range 32-127 --format lvgl -o zelda_oracles.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include <lvgl.h>
#endif

#ifndef ZELDA_ORACLES
#define ZELDA_ORACLES 1
#endif

#if ZELDA_ORACLES

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xfa, 0x83,

    /* U+0022 "\"" */
    0xcf, 0x34, 0x51, 0x88,

    /* U+0023 "#" */
    0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0x42,
    0xff, 0x42, 0x42, 0x42,

    /* U+0024 "$" */
    0x8, 0x11, 0xf4, 0x58, 0x81, 0x1f, 0x5, 0x8a,
    0x11, 0xf0, 0x40,

    /* U+0025 "%" */
    0x41, 0xa2, 0x44, 0x0, 0x8, 0x8, 0x22, 0x0,
    0x45, 0x82,

    /* U+0026 "&" */
    0x18, 0x0, 0x44, 0x44, 0x3c, 0x8, 0x48, 0x85,
    0x82, 0x80, 0x85, 0x79,

    /* U+0027 "'" */
    0xf5, 0x80,

    /* U+0028 "(" */
    0x28, 0x49, 0x24, 0x90, 0x22,

    /* U+0029 ")" */
    0x88, 0x12, 0x49, 0x24, 0x28,

    /* U+002A "*" */
    0x22, 0x97, 0xa9, 0x20, 0x80,

    /* U+002B "+" */
    0x20, 0x8f, 0xc8, 0x20, 0x80,

    /* U+002C "," */
    0xf5, 0x80,

    /* U+002D "-" */
    0xfe,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x0, 0x1, 0x82, 0x20, 0x80, 0x10, 0x80,

    /* U+0030 "0" */
    0x7c, 0x2, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x83,
    0x6, 0xb, 0xe0,

    /* U+0031 "1" */
    0x27, 0x92, 0x49, 0x24, 0x90,

    /* U+0032 "2" */
    0x78, 0x8, 0x0, 0x18, 0x0, 0x88, 0x42, 0x8,
    0x3f,

    /* U+0033 "3" */
    0x7c, 0x2, 0x8, 0x10, 0x20, 0x4f, 0x1, 0x2,
    0x6, 0xb, 0xe0,

    /* U+0034 "4" */
    0x3c, 0x9, 0x14, 0x28, 0x50, 0xa1, 0x42, 0x85,
    0xb, 0xf8, 0x20,

    /* U+0035 "5" */
    0xff, 0x2, 0x4, 0x8, 0x10, 0x3f, 0x1, 0x2,
    0x6, 0xb, 0xe0,

    /* U+0036 "6" */
    0x7c, 0x2, 0xc, 0x8, 0x10, 0x3f, 0x41, 0x83,
    0x6, 0xb, 0xe0,

    /* U+0037 "7" */
    0xff, 0x6, 0xc, 0x10, 0x40, 0x80, 0x4, 0x8,
    0x10, 0x20, 0x40,

    /* U+0038 "8" */
    0x7c, 0x2, 0xc, 0x18, 0x30, 0x5f, 0x41, 0x83,
    0x6, 0xb, 0xe0,

    /* U+0039 "9" */
    0x7c, 0x2, 0xc, 0x18, 0x30, 0x5f, 0x81, 0x2,
    0x6, 0xb, 0xe0,

    /* U+003A ":" */
    0xf0, 0x3, 0xc0,

    /* U+003B ";" */
    0xf0, 0x3d, 0x60,

    /* U+003C "<" */
    0x8, 0x4, 0x88, 0x42, 0x10, 0x40, 0x4, 0x10,

    /* U+003D "=" */
    0xfc, 0x0, 0x0, 0xfc,

    /* U+003E ">" */
    0x80, 0x10, 0x40, 0x84, 0x21, 0x20, 0x11, 0x0,

    /* U+003F "?" */
    0x7c, 0x8b, 0x1e, 0x30, 0x61, 0x83, 0xc, 0x18,
    0x0, 0x0, 0xc0,

    /* U+0040 "@" */
    0x3c, 0x0, 0x42, 0x89, 0xa5, 0xa5, 0xa5, 0xa5,
    0xa6, 0x0, 0x48, 0x3e,

    /* U+0041 "A" */
    0x18, 0x1, 0x12, 0x24, 0x48, 0xa0, 0xc1, 0xff,
    0x6, 0xc, 0x10,

    /* U+0042 "B" */
    0xfd, 0x2, 0xc, 0x18, 0x30, 0x7f, 0x41, 0x83,
    0x6, 0xf, 0xe0,

    /* U+0043 "C" */
    0x7c, 0x2, 0xc, 0x8, 0x10, 0x20, 0x40, 0x81,
    0x2, 0xb, 0xe0,

    /* U+0044 "D" */
    0xfd, 0x2, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x83,
    0x6, 0xf, 0xe0,

    /* U+0045 "E" */
    0xff, 0x2, 0x4, 0x8, 0x10, 0x3f, 0x40, 0x81,
    0x2, 0x7, 0xf0,

    /* U+0046 "F" */
    0xff, 0x2, 0x4, 0x8, 0x10, 0x3f, 0x40, 0x81,
    0x2, 0x4, 0x0,

    /* U+0047 "G" */
    0x7c, 0x2, 0xc, 0x8, 0x10, 0x27, 0xc1, 0x83,
    0x6, 0xb, 0xe0,

    /* U+0048 "H" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x7f, 0xc1, 0x83,
    0x6, 0xc, 0x10,

    /* U+0049 "I" */
    0xf4, 0x44, 0x44, 0x44, 0x44, 0x4f,

    /* U+004A "J" */
    0x2, 0x4, 0x8, 0x10, 0x20, 0x40, 0x81, 0x83,
    0x4, 0x3, 0xe0,

    /* U+004B "K" */
    0x83, 0x2, 0x14, 0x4f, 0x10, 0x22, 0x42, 0x83,
    0x6, 0xc, 0x10,

    /* U+004C "L" */
    0x82, 0x8, 0x20, 0x82, 0x8, 0x20, 0x82, 0x8,
    0x3f,

    /* U+004D "M" */
    0x83, 0x6, 0xf, 0x39, 0xb0, 0x60, 0xc1, 0x83,
    0x6, 0xc, 0x10,

    /* U+004E "N" */
    0x83, 0x7, 0xd, 0x18, 0xb0, 0x61, 0xc1, 0x83,
    0x6, 0xc, 0x10,

    /* U+004F "O" */
    0x7c, 0x2, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x83,
    0x6, 0xb, 0xe0,

    /* U+0050 "P" */
    0xfd, 0x2, 0xc, 0x18, 0x30, 0x7f, 0x40, 0x81,
    0x2, 0x4, 0x0,

    /* U+0051 "Q" */
    0x7c, 0x2, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x8b,
    0x2, 0x13, 0xd0,

    /* U+0052 "R" */
    0xfd, 0x2, 0xc, 0x18, 0x30, 0x60, 0xfe, 0x85,
    0xa, 0xc, 0x10,

    /* U+0053 "S" */
    0x7c, 0x2, 0xc, 0x8, 0x10, 0x1f, 0x1, 0x2,
    0x6, 0xb, 0xe0,

    /* U+0054 "T" */
    0xff, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8,
    0x8, 0x8, 0x8, 0x8,

    /* U+0055 "U" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x83,
    0x4, 0x3, 0xe0,

    /* U+0056 "V" */
    0x81, 0x81, 0x81, 0x81, 0x42, 0x42, 0x0, 0x24,
    0x24, 0x24, 0x24, 0x8,

    /* U+0057 "W" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xcd, 0xe7,
    0x6, 0xc, 0x10,

    /* U+0058 "X" */
    0x83, 0x4, 0x2, 0x21, 0x83, 0x6, 0xc, 0x44,
    0x2, 0xc, 0x10,

    /* U+0059 "Y" */
    0x81, 0x81, 0x0, 0x42, 0x42, 0x0, 0x3c, 0x8,
    0x8, 0x8, 0x8, 0x8,

    /* U+005A "Z" */
    0xfc, 0x10, 0x6, 0x8, 0x20, 0x8, 0x42, 0x8,
    0x3f,

    /* U+005B "[" */
    0xf2, 0x49, 0x24, 0x92, 0x70,

    /* U+005D "]" */
    0xe4, 0x92, 0x49, 0x24, 0xf0,

    /* U+005E "^" */
    0x20, 0x4, 0xa1,

    /* U+0060 "`" */
    0x6b, 0xc0,

    /* U+0061 "a" */
    0x78, 0x8, 0x13, 0xe8, 0x50, 0x80, 0x3d,

    /* U+0062 "b" */
    0x82, 0x8, 0x20, 0xfa, 0x8, 0x61, 0x86, 0x18,
    0x7e,

    /* U+0063 "c" */
    0x78, 0x8, 0x60, 0x82, 0x8, 0x5e,

    /* U+0064 "d" */
    0x4, 0x10, 0x41, 0x7c, 0x18, 0x61, 0x86, 0x18,
    0x5f,

    /* U+0065 "e" */
    0x78, 0x8, 0x7f, 0x82, 0x8, 0x5e,

    /* U+0066 "f" */
    0xc, 0x2, 0x8, 0xfc, 0x82, 0x8, 0x20, 0x82,
    0x8,

    /* U+0067 "g" */
    0x78, 0x8, 0x61, 0x7c, 0x10, 0x61, 0x78,

    /* U+0068 "h" */
    0x82, 0x8, 0x20, 0xfa, 0x8, 0x61, 0x86, 0x18,
    0x61,

    /* U+0069 "i" */
    0x9f, 0x80,

    /* U+006A "j" */
    0x4, 0x0, 0x1, 0x4, 0x10, 0x61, 0x85, 0xe0,

    /* U+006B "k" */
    0x82, 0x8, 0x21, 0x8a, 0xf, 0x22, 0x8a, 0x8,
    0x61,

    /* U+006C "l" */
    0xff, 0xf0,

    /* U+006D "m" */
    0xbc, 0x11, 0x2a, 0x54, 0xa9, 0x52, 0xa5,

    /* U+006E "n" */
    0x98, 0x4, 0x51, 0x45, 0x14, 0x51,

    /* U+006F "o" */
    0x78, 0x8, 0x61, 0x86, 0x18, 0x5e,

    /* U+0070 "p" */
    0xfa, 0x18, 0x61, 0x87, 0xe8, 0x20, 0x80,

    /* U+0071 "q" */
    0x7e, 0x18, 0x61, 0x85, 0xf0, 0x41, 0x4,

    /* U+0072 "r" */
    0xbe, 0xc, 0x20, 0x82, 0x8, 0x20,

    /* U+0073 "s" */
    0x7c, 0x8, 0x18, 0x8, 0x0, 0x7e,

    /* U+0074 "t" */
    0x20, 0x8f, 0xc8, 0x20, 0x82, 0x8, 0x20, 0x80,

    /* U+0075 "u" */
    0x86, 0x18, 0x61, 0x86, 0x10, 0x1e,

    /* U+0076 "v" */
    0x86, 0x18, 0x61, 0x49, 0x20, 0x8,

    /* U+0077 "w" */
    0x86, 0x9a, 0x69, 0xa4, 0x4, 0x92,

    /* U+0078 "x" */
    0x82, 0x1, 0x10, 0xc1, 0x80, 0x11, 0x41,

    /* U+0079 "y" */
    0x86, 0x10, 0x12, 0x48, 0x40, 0x10, 0x80,

    /* U+007A "z" */
    0xfc, 0x10, 0x42, 0x21, 0x4, 0x3f,

    /* U+007B "{" */
    0x34, 0x44, 0x44, 0x80, 0x44, 0x44, 0x43,

    /* U+007D "}" */
    0xc1, 0x8, 0x42, 0x10, 0x20, 0x21, 0x8, 0x42,
    0x60,

    /* U+007E "~" */
    0x63, 0x18
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 154, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 154, .box_w = 2, .box_h = 12, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 4, .adv_w = 154, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 8, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 20, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 31, .adv_w = 154, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 41, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 53, .adv_w = 154, .box_w = 2, .box_h = 5, .ofs_x = 4, .ofs_y = 9},
    {.bitmap_index = 55, .adv_w = 154, .box_w = 3, .box_h = 13, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 60, .adv_w = 154, .box_w = 3, .box_h = 13, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 65, .adv_w = 154, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 70, .adv_w = 154, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 75, .adv_w = 154, .box_w = 2, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 77, .adv_w = 154, .box_w = 7, .box_h = 1, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 78, .adv_w = 154, .box_w = 2, .box_h = 2, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 79, .adv_w = 154, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 86, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 97, .adv_w = 154, .box_w = 3, .box_h = 12, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 102, .adv_w = 154, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 111, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 122, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 133, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 144, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 155, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 166, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 177, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 188, .adv_w = 154, .box_w = 2, .box_h = 9, .ofs_x = 4, .ofs_y = 3},
    {.bitmap_index = 191, .adv_w = 154, .box_w = 2, .box_h = 10, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 194, .adv_w = 154, .box_w = 5, .box_h = 12, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 202, .adv_w = 154, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 206, .adv_w = 154, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 214, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 225, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 237, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 248, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 259, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 270, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 281, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 292, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 303, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 314, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 325, .adv_w = 154, .box_w = 4, .box_h = 12, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 331, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 342, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 353, .adv_w = 154, .box_w = 6, .box_h = 12, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 362, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 373, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 384, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 395, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 406, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 417, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 428, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 439, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 451, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 462, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 474, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 485, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 496, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 508, .adv_w = 154, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 517, .adv_w = 154, .box_w = 3, .box_h = 12, .ofs_x = 5, .ofs_y = 1},
    {.bitmap_index = 522, .adv_w = 154, .box_w = 3, .box_h = 12, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 527, .adv_w = 154, .box_w = 6, .box_h = 4, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 530, .adv_w = 154, .box_w = 2, .box_h = 5, .ofs_x = 6, .ofs_y = 10},
    {.bitmap_index = 532, .adv_w = 154, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 539, .adv_w = 154, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 548, .adv_w = 154, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 554, .adv_w = 154, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 563, .adv_w = 154, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 569, .adv_w = 154, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 578, .adv_w = 154, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 585, .adv_w = 154, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 594, .adv_w = 154, .box_w = 1, .box_h = 9, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 596, .adv_w = 154, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 604, .adv_w = 154, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 613, .adv_w = 154, .box_w = 1, .box_h = 12, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 615, .adv_w = 154, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 622, .adv_w = 154, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 628, .adv_w = 154, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 634, .adv_w = 154, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 641, .adv_w = 154, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 648, .adv_w = 154, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 654, .adv_w = 154, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 660, .adv_w = 154, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 668, .adv_w = 154, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 674, .adv_w = 154, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 680, .adv_w = 154, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 686, .adv_w = 154, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 693, .adv_w = 154, .box_w = 6, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 700, .adv_w = 154, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 706, .adv_w = 154, .box_w = 4, .box_h = 14, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 713, .adv_w = 154, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 722, .adv_w = 154, .box_w = 7, .box_h = 2, .ofs_x = 1, .ofs_y = 8}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 60, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 93, .range_length = 2, .glyph_id_start = 61,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 96, .range_length = 28, .glyph_id_start = 63,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 125, .range_length = 2, .glyph_id_start = 91,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 4,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t zelda_oracles = {
#else
lv_font_t zelda_oracles = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 15,          /*The maximum line height required by the font*/
    .base_line = 0,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if ZELDA_ORACLES*/

