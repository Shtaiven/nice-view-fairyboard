/*******************************************************************************
 * Size: 10 px
 * Bpp: 1
 * Opts: --bpp 1 --size 10 --no-compress --font zelda-oracles.ttf --range 32-127 --format lvgl -o zelda_oracles.c
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
    0xff, 0xe8, 0xc0,

    /* U+0022 "\"" */
    0xde, 0xd3, 0x20,

    /* U+0023 "#" */
    0x44, 0x8b, 0xfa, 0x24, 0x48, 0xbf, 0xa2, 0x44,

    /* U+0024 "$" */
    0x11, 0xe9, 0x64, 0x78, 0x59, 0x5e, 0x10,

    /* U+0025 "%" */
    0x43, 0x49, 0x20, 0x81, 0x4, 0x92, 0xc2,

    /* U+0026 "&" */
    0x30, 0x91, 0x21, 0xc5, 0x11, 0x61, 0x45, 0x72,

    /* U+0027 "'" */
    0xf6,

    /* U+0028 "(" */
    0x2a, 0x49, 0x24, 0x44,

    /* U+0029 ")" */
    0x88, 0x92, 0x49, 0x50,

    /* U+002A "*" */
    0x25, 0x5d, 0x52, 0x0,

    /* U+002B "+" */
    0x21, 0x3e, 0x42, 0x0,

    /* U+002C "," */
    0xf6,

    /* U+002D "-" */
    0xfc,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x4, 0x21, 0x8, 0x21, 0x8, 0x0,

    /* U+0030 "0" */
    0x7a, 0x18, 0x61, 0x86, 0x18, 0x61, 0x78,

    /* U+0031 "1" */
    0x3c, 0x92, 0x49, 0x20,

    /* U+0032 "2" */
    0x7a, 0x10, 0x42, 0x10, 0x84, 0x20, 0xfc,

    /* U+0033 "3" */
    0x7a, 0x10, 0x41, 0x38, 0x10, 0x61, 0x78,

    /* U+0034 "4" */
    0x39, 0x28, 0xa2, 0x8a, 0x28, 0xbf, 0x8,

    /* U+0035 "5" */
    0xfe, 0x8, 0x20, 0xf8, 0x10, 0x61, 0x78,

    /* U+0036 "6" */
    0x7a, 0x18, 0x20, 0xfa, 0x18, 0x61, 0x78,

    /* U+0037 "7" */
    0xfe, 0x18, 0x42, 0x8, 0x41, 0x4, 0x10,

    /* U+0038 "8" */
    0x7a, 0x18, 0x61, 0x7a, 0x18, 0x61, 0x78,

    /* U+0039 "9" */
    0x7a, 0x18, 0x61, 0x7c, 0x10, 0x61, 0x78,

    /* U+003A ":" */
    0xf0, 0x3c,

    /* U+003B ";" */
    0xf0, 0xf6,

    /* U+003C "<" */
    0x12, 0x48, 0x88, 0x42, 0x10,

    /* U+003D "=" */
    0xf8, 0x1, 0xf0,

    /* U+003E ">" */
    0x84, 0x21, 0x11, 0x24, 0x80,

    /* U+003F "?" */
    0x7b, 0x3c, 0xc3, 0x18, 0xc3, 0x0, 0x30,

    /* U+0040 "@" */
    0x38, 0x8a, 0x4d, 0x5a, 0xb5, 0x6b, 0x28, 0x3c,

    /* U+0041 "A" */
    0x31, 0x24, 0x92, 0x86, 0x1f, 0xe1, 0x84,

    /* U+0042 "B" */
    0xfa, 0x18, 0x61, 0xfa, 0x18, 0x61, 0xf8,

    /* U+0043 "C" */
    0x7a, 0x18, 0x20, 0x82, 0x8, 0x21, 0x78,

    /* U+0044 "D" */
    0xfa, 0x18, 0x61, 0x86, 0x18, 0x61, 0xf8,

    /* U+0045 "E" */
    0xfe, 0x8, 0x20, 0xfa, 0x8, 0x20, 0xfc,

    /* U+0046 "F" */
    0xfe, 0x8, 0x20, 0xfa, 0x8, 0x20, 0x80,

    /* U+0047 "G" */
    0x7a, 0x18, 0x20, 0x9e, 0x18, 0x61, 0x78,

    /* U+0048 "H" */
    0x86, 0x18, 0x61, 0xfe, 0x18, 0x61, 0x84,

    /* U+0049 "I" */
    0xe9, 0x24, 0x92, 0xe0,

    /* U+004A "J" */
    0x4, 0x10, 0x41, 0x4, 0x18, 0x61, 0x78,

    /* U+004B "K" */
    0x86, 0x29, 0x38, 0x92, 0x28, 0x61, 0x84,

    /* U+004C "L" */
    0x84, 0x21, 0x8, 0x42, 0x10, 0xf8,

    /* U+004D "M" */
    0x86, 0x1c, 0xed, 0x86, 0x18, 0x61, 0x84,

    /* U+004E "N" */
    0x87, 0x1a, 0x65, 0x8e, 0x18, 0x61, 0x84,

    /* U+004F "O" */
    0x7a, 0x18, 0x61, 0x86, 0x18, 0x61, 0x78,

    /* U+0050 "P" */
    0xfa, 0x18, 0x61, 0xfa, 0x8, 0x20, 0x80,

    /* U+0051 "Q" */
    0x7a, 0x18, 0x61, 0x86, 0x19, 0x62, 0x74,

    /* U+0052 "R" */
    0xfa, 0x18, 0x61, 0x87, 0xe8, 0xa1, 0x84,

    /* U+0053 "S" */
    0x7a, 0x18, 0x20, 0x78, 0x10, 0x61, 0x78,

    /* U+0054 "T" */
    0xfe, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8, 0x10,

    /* U+0055 "U" */
    0x86, 0x18, 0x61, 0x86, 0x18, 0x61, 0x78,

    /* U+0056 "V" */
    0x83, 0x6, 0xa, 0x24, 0x45, 0xa, 0x14, 0x10,

    /* U+0057 "W" */
    0x86, 0x18, 0x61, 0x86, 0xdc, 0xe1, 0x84,

    /* U+0058 "X" */
    0x86, 0x14, 0x8c, 0x30, 0xc4, 0xa1, 0x84,

    /* U+0059 "Y" */
    0x83, 0x5, 0x12, 0x23, 0x82, 0x4, 0x8, 0x10,

    /* U+005A "Z" */
    0xfc, 0x10, 0x84, 0x10, 0x84, 0x20, 0xfc,

    /* U+005B "[" */
    0xf2, 0x49, 0x24, 0xe0,

    /* U+005D "]" */
    0xe4, 0x92, 0x49, 0xe0,

    /* U+005E "^" */
    0x22, 0xa2,

    /* U+0060 "`" */
    0x6f,

    /* U+0061 "a" */
    0x70, 0x27, 0xa2, 0x89, 0xd0,

    /* U+0062 "b" */
    0x84, 0x21, 0xe8, 0xc6, 0x31, 0xf0,

    /* U+0063 "c" */
    0x74, 0x61, 0x8, 0xb8,

    /* U+0064 "d" */
    0x8, 0x42, 0xf8, 0xc6, 0x31, 0x78,

    /* U+0065 "e" */
    0x74, 0x7f, 0x8, 0xb8,

    /* U+0066 "f" */
    0x19, 0x9, 0xf2, 0x10, 0x84, 0x20,

    /* U+0067 "g" */
    0x74, 0x62, 0xf0, 0xc5, 0xc0,

    /* U+0068 "h" */
    0x84, 0x21, 0xe8, 0xc6, 0x31, 0x88,

    /* U+0069 "i" */
    0xbe,

    /* U+006A "j" */
    0x8, 0x2, 0x10, 0xc6, 0x2e,

    /* U+006B "k" */
    0x84, 0x23, 0x2e, 0x4a, 0x51, 0x88,

    /* U+006C "l" */
    0xff, 0x80,

    /* U+006D "m" */
    0xb9, 0x55, 0x55, 0x55, 0x50,

    /* U+006E "n" */
    0xb2, 0x52, 0x94, 0xa4,

    /* U+006F "o" */
    0x74, 0x63, 0x18, 0xb8,

    /* U+0070 "p" */
    0xf4, 0x63, 0x1f, 0x42, 0x0,

    /* U+0071 "q" */
    0x7c, 0x63, 0x17, 0x84, 0x20,

    /* U+0072 "r" */
    0xbe, 0x21, 0x8, 0x40,

    /* U+0073 "s" */
    0x7c, 0x18, 0x20, 0xf8,

    /* U+0074 "t" */
    0x21, 0x3e, 0x42, 0x10, 0x84,

    /* U+0075 "u" */
    0x8c, 0x63, 0x18, 0xb8,

    /* U+0076 "v" */
    0x8c, 0x62, 0xa5, 0x10,

    /* U+0077 "w" */
    0x8d, 0x6b, 0x55, 0x28,

    /* U+0078 "x" */
    0x85, 0x23, 0xc, 0x4a, 0x10,

    /* U+0079 "y" */
    0x8c, 0x54, 0xa2, 0x22, 0x0,

    /* U+007A "z" */
    0xf8, 0x44, 0x44, 0x7c,

    /* U+007B "{" */
    0x34, 0x44, 0x48, 0x44, 0x44, 0x30,

    /* U+007D "}" */
    0xc2, 0x22, 0x21, 0x22, 0x22, 0xc0,

    /* U+007E "~" */
    0x66, 0x60
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 128, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 128, .box_w = 2, .box_h = 9, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 4, .adv_w = 128, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 7, .adv_w = 128, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 15, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 22, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 29, .adv_w = 128, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 37, .adv_w = 128, .box_w = 2, .box_h = 4, .ofs_x = 3, .ofs_y = 7},
    {.bitmap_index = 38, .adv_w = 128, .box_w = 3, .box_h = 10, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 42, .adv_w = 128, .box_w = 3, .box_h = 10, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 46, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 50, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 54, .adv_w = 128, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 55, .adv_w = 128, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 56, .adv_w = 128, .box_w = 2, .box_h = 2, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 57, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 63, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 70, .adv_w = 128, .box_w = 3, .box_h = 9, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 74, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 81, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 88, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 95, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 102, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 109, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 116, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 123, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 130, .adv_w = 128, .box_w = 2, .box_h = 7, .ofs_x = 3, .ofs_y = 2},
    {.bitmap_index = 132, .adv_w = 128, .box_w = 2, .box_h = 8, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 134, .adv_w = 128, .box_w = 4, .box_h = 9, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 139, .adv_w = 128, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 142, .adv_w = 128, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 147, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 154, .adv_w = 128, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 162, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 169, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 176, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 183, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 190, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 197, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 204, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 211, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 218, .adv_w = 128, .box_w = 3, .box_h = 9, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 222, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 229, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 236, .adv_w = 128, .box_w = 5, .box_h = 9, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 242, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 249, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 256, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 263, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 270, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 277, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 284, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 291, .adv_w = 128, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 299, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 306, .adv_w = 128, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 314, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 321, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 328, .adv_w = 128, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 336, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 343, .adv_w = 128, .box_w = 3, .box_h = 9, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 347, .adv_w = 128, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 351, .adv_w = 128, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 353, .adv_w = 128, .box_w = 2, .box_h = 4, .ofs_x = 5, .ofs_y = 8},
    {.bitmap_index = 354, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 359, .adv_w = 128, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 365, .adv_w = 128, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 369, .adv_w = 128, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 375, .adv_w = 128, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 379, .adv_w = 128, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 385, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 390, .adv_w = 128, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 396, .adv_w = 128, .box_w = 1, .box_h = 7, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 397, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 402, .adv_w = 128, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 408, .adv_w = 128, .box_w = 1, .box_h = 9, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 410, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 415, .adv_w = 128, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 419, .adv_w = 128, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 423, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 428, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 433, .adv_w = 128, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 437, .adv_w = 128, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 441, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 446, .adv_w = 128, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 450, .adv_w = 128, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 454, .adv_w = 128, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 458, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 463, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 468, .adv_w = 128, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 472, .adv_w = 128, .box_w = 4, .box_h = 11, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 478, .adv_w = 128, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 484, .adv_w = 128, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 6}
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
    .line_height = 12,          /*The maximum line height required by the font*/
    .base_line = 0,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 1,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if ZELDA_ORACLES*/

