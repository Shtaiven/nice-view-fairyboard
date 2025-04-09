/*******************************************************************************
 * Size: 11 px
 * Bpp: 1
 * Opts: --bpp 1 --size 11 --no-compress --font zelda-oracles.ttf --range 32-127 --format lvgl -o zelda_oracles.c
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
    0xff, 0xa8, 0x30,

    /* U+0022 "\"" */
    0xde, 0xd3, 0x20,

    /* U+0023 "#" */
    0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0x42, 0xff,
    0x42, 0x42,

    /* U+0024 "$" */
    0x10, 0xf2, 0x4c, 0x87, 0x82, 0x4, 0xc9, 0x78,
    0x20,

    /* U+0025 "%" */
    0x41, 0xa2, 0x48, 0x10, 0x10, 0x0, 0x22, 0x49,
    0x82,

    /* U+0026 "&" */
    0x30, 0x48, 0x48, 0x38, 0x50, 0x89, 0x80, 0x82,
    0x89, 0x71,

    /* U+0027 "'" */
    0xf6,

    /* U+0028 "(" */
    0x2a, 0x49, 0x24, 0x88, 0x80,

    /* U+0029 ")" */
    0x88, 0x92, 0x49, 0x2a, 0x0,

    /* U+002A "*" */
    0xab, 0xaa, 0x40,

    /* U+002B "+" */
    0x23, 0xf2, 0x8,

    /* U+002C "," */
    0xf6,

    /* U+002D "-" */
    0xfe,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x2, 0x10, 0x41, 0x2, 0x8, 0x20, 0x0,

    /* U+0030 "0" */
    0x79, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x82,
    0xf0,

    /* U+0031 "1" */
    0x3c, 0x92, 0x49, 0x24,

    /* U+0032 "2" */
    0x79, 0x4, 0x8, 0x41, 0x4, 0x0, 0x20, 0x81,
    0xfc,

    /* U+0033 "3" */
    0x79, 0x4, 0x8, 0x13, 0x80, 0x0, 0x81, 0x82,
    0xf0,

    /* U+0034 "4" */
    0x39, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0xfc, 0x20,

    /* U+0035 "5" */
    0xff, 0x2, 0x4, 0xf, 0x80, 0x0, 0x81, 0x82,
    0xf0,

    /* U+0036 "6" */
    0x79, 0x6, 0x4, 0xf, 0x90, 0x20, 0xc1, 0x82,
    0xf0,

    /* U+0037 "7" */
    0xff, 0x6, 0x8, 0x40, 0x80, 0x4, 0x8, 0x10,
    0x20,

    /* U+0038 "8" */
    0x79, 0x6, 0xc, 0x17, 0x80, 0x20, 0xc1, 0x82,
    0xf0,

    /* U+0039 "9" */
    0x79, 0x6, 0xc, 0x17, 0xe0, 0x40, 0x81, 0x82,
    0xf0,

    /* U+003A ":" */
    0xf0, 0xf,

    /* U+003B ";" */
    0xf0, 0x3d, 0x80,

    /* U+003C "<" */
    0x12, 0x48, 0x88, 0x4, 0x21,

    /* U+003D "=" */
    0xfc, 0x0, 0x3f,

    /* U+003E ">" */
    0x84, 0x21, 0x11, 0x2, 0x48,

    /* U+003F "?" */
    0x79, 0x8f, 0x18, 0x30, 0x83, 0xc, 0x18, 0x0,
    0x60,

    /* U+0040 "@" */
    0x38, 0x42, 0x91, 0xa9, 0xa9, 0xa9, 0xae, 0x0,
    0x50, 0x3e,

    /* U+0041 "A" */
    0x30, 0x91, 0x22, 0x40, 0x0, 0x20, 0xff, 0x83,
    0x4,

    /* U+0042 "B" */
    0xfd, 0x6, 0xc, 0x1f, 0xd0, 0x20, 0xc1, 0x83,
    0xf8,

    /* U+0043 "C" */
    0x79, 0x6, 0x4, 0x8, 0x10, 0x20, 0x40, 0x82,
    0xf0,

    /* U+0044 "D" */
    0xfd, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x83,
    0xf8,

    /* U+0045 "E" */
    0xff, 0x2, 0x4, 0xf, 0x90, 0x20, 0x40, 0x81,
    0xfc,

    /* U+0046 "F" */
    0xff, 0x2, 0x4, 0xf, 0x90, 0x20, 0x40, 0x81,
    0x0,

    /* U+0047 "G" */
    0x79, 0x6, 0x4, 0x9, 0xf0, 0x60, 0xc1, 0x82,
    0xf0,

    /* U+0048 "H" */
    0x83, 0x6, 0xc, 0x1f, 0xf0, 0x60, 0xc1, 0x83,
    0x4,

    /* U+0049 "I" */
    0xe9, 0x24, 0x92, 0x5c,

    /* U+004A "J" */
    0x2, 0x4, 0x8, 0x10, 0x20, 0x40, 0xc1, 0x82,
    0xf0,

    /* U+004B "K" */
    0x83, 0x12, 0x47, 0x9, 0x11, 0x20, 0x41, 0x83,
    0x4,

    /* U+004C "L" */
    0x84, 0x21, 0x8, 0x42, 0x10, 0x87, 0xc0,

    /* U+004D "M" */
    0x83, 0x7, 0x3d, 0x98, 0x30, 0x60, 0xc1, 0x83,
    0x4,

    /* U+004E "N" */
    0x83, 0x86, 0x8c, 0x98, 0xf0, 0x60, 0xc1, 0x83,
    0x4,

    /* U+004F "O" */
    0x79, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x82,
    0xf0,

    /* U+0050 "P" */
    0xfd, 0x6, 0xc, 0x1f, 0xd0, 0x20, 0x40, 0x81,
    0x0,

    /* U+0051 "Q" */
    0x79, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc9, 0x88,
    0xe4,

    /* U+0052 "R" */
    0xf9, 0x6, 0xc, 0x18, 0x3f, 0x22, 0x40, 0x83,
    0x4,

    /* U+0053 "S" */
    0x79, 0x6, 0x4, 0x7, 0x80, 0x0, 0x81, 0x82,
    0xf0,

    /* U+0054 "T" */
    0xff, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
    0x10, 0x10,

    /* U+0055 "U" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x82,
    0xf0,

    /* U+0056 "V" */
    0x81, 0x81, 0x81, 0x42, 0x42, 0x0, 0x28, 0x28,
    0x28, 0x10,

    /* U+0057 "W" */
    0x83, 0x6, 0xc, 0x18, 0x36, 0x60, 0xe7, 0x83,
    0x4,

    /* U+0058 "X" */
    0x83, 0x5, 0x21, 0x83, 0x6, 0x0, 0x24, 0x83,
    0x4,

    /* U+0059 "Y" */
    0x81, 0x81, 0x42, 0x42, 0x38, 0x10, 0x10, 0x10,
    0x10, 0x10,

    /* U+005A "Z" */
    0xfe, 0x4, 0x20, 0x81, 0x4, 0x0, 0x20, 0x81,
    0xfc,

    /* U+005B "[" */
    0xf2, 0x49, 0x24, 0x9c,

    /* U+005D "]" */
    0xe4, 0x92, 0x49, 0x3c,

    /* U+005E "^" */
    0x22, 0xa2,

    /* U+0060 "`" */
    0x2f,

    /* U+0061 "a" */
    0x70, 0x1, 0xe0, 0x48, 0x91, 0x1c, 0x80,

    /* U+0062 "b" */
    0x84, 0x21, 0xe8, 0x46, 0x31, 0x8f, 0x80,

    /* U+0063 "c" */
    0x74, 0x61, 0x8, 0x45, 0xc0,

    /* U+0064 "d" */
    0x8, 0x42, 0xf0, 0xc6, 0x31, 0x8b, 0xc0,

    /* U+0065 "e" */
    0x70, 0x3f, 0x8, 0x45, 0xc0,

    /* U+0066 "f" */
    0x19, 0x9, 0xf2, 0x10, 0x84, 0x21, 0x0,

    /* U+0067 "g" */
    0x74, 0x62, 0x17, 0x86, 0x2e,

    /* U+0068 "h" */
    0x84, 0x21, 0xe8, 0x42, 0x31, 0x8c, 0x40,

    /* U+0069 "i" */
    0x8f,

    /* U+006A "j" */
    0x8, 0x0, 0x0, 0x86, 0x31, 0x70,

    /* U+006B "k" */
    0x84, 0x23, 0x2e, 0x42, 0x52, 0x8c, 0x40,

    /* U+006C "l" */
    0xff, 0xc0,

    /* U+006D "m" */
    0xb8, 0x20, 0x42, 0x95, 0x2a, 0x54, 0x80,

    /* U+006E "n" */
    0xb0, 0x0, 0x94, 0xa5, 0x20,

    /* U+006F "o" */
    0x70, 0x23, 0x18, 0xc5, 0xc0,

    /* U+0070 "p" */
    0xf4, 0x63, 0x18, 0x7a, 0x10,

    /* U+0071 "q" */
    0x7c, 0x63, 0x10, 0xbc, 0x21,

    /* U+0072 "r" */
    0xbe, 0x21, 0x8, 0x42, 0x0,

    /* U+0073 "s" */
    0x7c, 0x18, 0x1, 0x7, 0xc0,

    /* U+0074 "t" */
    0x20, 0x8f, 0xc8, 0x20, 0x82, 0x8, 0x20,

    /* U+0075 "u" */
    0x8c, 0x63, 0x10, 0x1, 0xc0,

    /* U+0076 "v" */
    0x8c, 0x62, 0x5, 0x28, 0x80,

    /* U+0077 "w" */
    0x8d, 0x6b, 0x50, 0x29, 0x40,

    /* U+0078 "x" */
    0x82, 0x90, 0x1, 0x83, 0x9, 0x20, 0x80,

    /* U+0079 "y" */
    0x8c, 0x54, 0xa0, 0x11, 0x10,

    /* U+007A "z" */
    0xf8, 0x44, 0x2, 0x23, 0xe0,

    /* U+007B "{" */
    0x34, 0x44, 0x48, 0x4, 0x44, 0x43,

    /* U+007D "}" */
    0xc2, 0x22, 0x21, 0x2, 0x22, 0x2c,

    /* U+007E "~" */
    0x63, 0x30
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 141, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 141, .box_w = 2, .box_h = 10, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 4, .adv_w = 141, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 7, .adv_w = 141, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 17, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 26, .adv_w = 141, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 35, .adv_w = 141, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 45, .adv_w = 141, .box_w = 2, .box_h = 4, .ofs_x = 3, .ofs_y = 8},
    {.bitmap_index = 46, .adv_w = 141, .box_w = 3, .box_h = 11, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 51, .adv_w = 141, .box_w = 3, .box_h = 11, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 56, .adv_w = 141, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 59, .adv_w = 141, .box_w = 6, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 62, .adv_w = 141, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 63, .adv_w = 141, .box_w = 7, .box_h = 1, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 64, .adv_w = 141, .box_w = 2, .box_h = 2, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 65, .adv_w = 141, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 72, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 81, .adv_w = 141, .box_w = 3, .box_h = 10, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 85, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 94, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 103, .adv_w = 141, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 111, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 120, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 129, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 138, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 147, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 156, .adv_w = 141, .box_w = 2, .box_h = 8, .ofs_x = 3, .ofs_y = 2},
    {.bitmap_index = 158, .adv_w = 141, .box_w = 2, .box_h = 9, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 161, .adv_w = 141, .box_w = 4, .box_h = 10, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 166, .adv_w = 141, .box_w = 6, .box_h = 4, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 169, .adv_w = 141, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 174, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 183, .adv_w = 141, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 193, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 202, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 211, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 220, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 229, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 238, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 247, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 256, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 265, .adv_w = 141, .box_w = 3, .box_h = 10, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 269, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 278, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 287, .adv_w = 141, .box_w = 5, .box_h = 10, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 294, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 303, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 312, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 321, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 330, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 339, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 348, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 357, .adv_w = 141, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 367, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 376, .adv_w = 141, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 386, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 395, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 404, .adv_w = 141, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 414, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 423, .adv_w = 141, .box_w = 3, .box_h = 10, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 427, .adv_w = 141, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 431, .adv_w = 141, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 433, .adv_w = 141, .box_w = 2, .box_h = 4, .ofs_x = 5, .ofs_y = 9},
    {.bitmap_index = 434, .adv_w = 141, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 441, .adv_w = 141, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 448, .adv_w = 141, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 453, .adv_w = 141, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 460, .adv_w = 141, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 465, .adv_w = 141, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 472, .adv_w = 141, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 477, .adv_w = 141, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 484, .adv_w = 141, .box_w = 1, .box_h = 8, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 485, .adv_w = 141, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 491, .adv_w = 141, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 498, .adv_w = 141, .box_w = 1, .box_h = 10, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 500, .adv_w = 141, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 507, .adv_w = 141, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 512, .adv_w = 141, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 517, .adv_w = 141, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 522, .adv_w = 141, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 527, .adv_w = 141, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 532, .adv_w = 141, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 537, .adv_w = 141, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 544, .adv_w = 141, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 549, .adv_w = 141, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 554, .adv_w = 141, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 559, .adv_w = 141, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 566, .adv_w = 141, .box_w = 5, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 571, .adv_w = 141, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 576, .adv_w = 141, .box_w = 4, .box_h = 12, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 582, .adv_w = 141, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 588, .adv_w = 141, .box_w = 7, .box_h = 2, .ofs_x = 1, .ofs_y = 7}
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
    .line_height = 13,          /*The maximum line height required by the font*/
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

