
/*******************************************************************************
 * Size: 11 px
 * Bpp: 1
 * Opts: --bpp 1 --size 11 --no-compress --font zeldadxt.ttf --range 32-127 --format lvgl -o zelda_dx.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include <lvgl.h>
#endif

#ifndef ZELDA_DX
#define ZELDA_DX 1
#endif

#if ZELDA_DX

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0x6d, 0xa4, 0x30,

    /* U+0022 "\"" */
    0xda, 0x64,

    /* U+0023 "#" */
    0x14, 0x29, 0xf9, 0x4f, 0xca, 0x14, 0x0,

    /* U+0024 "$" */
    0x3c, 0x95, 0x41, 0xc1, 0x54, 0x9e, 0x0,

    /* U+0025 "%" */
    0xcb, 0x41, 0x8, 0x2d, 0x30,

    /* U+0026 "&" */
    0x10, 0x50, 0xa1, 0x86, 0x73, 0x23, 0x39,

    /* U+0027 "'" */
    0xd8,

    /* U+0028 "(" */
    0x34, 0x88, 0x88, 0x43,

    /* U+0029 ")" */
    0xc2, 0x11, 0x11, 0x2c,

    /* U+002A "*" */
    0xab, 0xaa,

    /* U+002B "+" */
    0x21, 0x3e, 0x42, 0x0,

    /* U+002C "," */
    0xd8,

    /* U+002D "-" */
    0xf8,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x11, 0x22, 0x44, 0x88,

    /* U+0030 "0" */
    0x3a, 0x53, 0x29, 0x30,

    /* U+0031 "1" */
    0x25, 0x29, 0x0,

    /* U+0032 "2" */
    0x39, 0x30, 0x84, 0x23, 0xe0,

    /* U+0033 "3" */
    0x39, 0x31, 0x82, 0x89, 0xc0,

    /* U+0034 "4" */
    0x8, 0x42, 0x12, 0xfc, 0x40,

    /* U+0035 "5" */
    0x3c, 0x87, 0x2, 0xb, 0xc0,

    /* U+0036 "6" */
    0x8, 0x8c, 0x9c, 0xb8,

    /* U+0037 "7" */
    0xf8, 0x88, 0x44, 0x20,

    /* U+0038 "8" */
    0x3d, 0x23, 0x12, 0x89, 0xc0,

    /* U+0039 "9" */
    0x74, 0xe4, 0xc4, 0x40,

    /* U+003A ":" */
    0x6c, 0xd, 0x80,

    /* U+003B ";" */
    0x6c, 0xc, 0xa0,

    /* U+003C "<" */
    0x1b, 0x20, 0xc1, 0x80,

    /* U+003D "=" */
    0xf8, 0x3e,

    /* U+003E ">" */
    0xc1, 0x82, 0x6c, 0x0,

    /* U+003F "?" */
    0x7b, 0x30, 0xce, 0x60, 0xc, 0x0,

    /* U+0040 "@" */
    0x3c, 0x85, 0x3c, 0x99, 0x53, 0xa0, 0x3c,

    /* U+0041 "A" */
    0x2, 0xc, 0x28, 0x93, 0xe8, 0x60, 0x80,

    /* U+0042 "B" */
    0x3c, 0x44, 0x8b, 0xe4, 0x50, 0xbe, 0x0,

    /* U+0043 "C" */
    0x1c, 0x45, 0x2, 0x8, 0x10, 0x9e, 0x0,

    /* U+0044 "D" */
    0x3c, 0x44, 0x8a, 0x14, 0x30, 0xbe, 0x0,

    /* U+0045 "E" */
    0x3e, 0x40, 0x83, 0xe4, 0x10, 0x3f, 0x0,

    /* U+0046 "F" */
    0x3e, 0x40, 0x83, 0xe4, 0x10, 0x20, 0x0,

    /* U+0047 "G" */
    0x1c, 0x45, 0x2, 0x8, 0xf0, 0x9e, 0x0,

    /* U+0048 "H" */
    0x22, 0x45, 0x13, 0xe4, 0x51, 0x22, 0x0,

    /* U+0049 "I" */
    0x38, 0x88, 0x44, 0x23, 0x80,

    /* U+004A "J" */
    0x2, 0x4, 0x10, 0x28, 0x91, 0x1c, 0x0,

    /* U+004B "K" */
    0x24, 0xa3, 0x18, 0x62, 0x48, 0x80,

    /* U+004C "L" */
    0x21, 0x10, 0x84, 0x43, 0xe0,

    /* U+004D "M" */
    0x12, 0x6c, 0xea, 0x94, 0x50, 0xa1, 0x0,

    /* U+004E "N" */
    0x22, 0x45, 0xca, 0xa4, 0xd0, 0xa1, 0x0,

    /* U+004F "O" */
    0x3c, 0x85, 0xc, 0x18, 0x50, 0x9e, 0x0,

    /* U+0050 "P" */
    0x3c, 0x45, 0xb, 0xe4, 0x10, 0x20, 0x0,

    /* U+0051 "Q" */
    0x3c, 0x85, 0xc, 0x19, 0xd0, 0x9e, 0x80,

    /* U+0052 "R" */
    0x3c, 0x45, 0xb, 0xe4, 0x91, 0x22, 0x0,

    /* U+0053 "S" */
    0x3c, 0x85, 0x1, 0xc0, 0x50, 0x9e, 0x0,

    /* U+0054 "T" */
    0xfc, 0x82, 0x10, 0x42, 0x8, 0x0,

    /* U+0055 "U" */
    0x22, 0x45, 0x12, 0x28, 0x91, 0x1c, 0x0,

    /* U+0056 "V" */
    0x83, 0xa, 0x24, 0x8a, 0x18, 0x20, 0x0,

    /* U+0057 "W" */
    0x42, 0x85, 0x14, 0xab, 0x5b, 0x22, 0x0,

    /* U+0058 "X" */
    0x22, 0x48, 0x60, 0x83, 0x9, 0x22, 0x0,

    /* U+0059 "Y" */
    0x86, 0x66, 0x10, 0x42, 0x8, 0x0,

    /* U+005A "Z" */
    0x7e, 0x8, 0x20, 0x82, 0x8, 0x3f, 0x0,

    /* U+005B "[" */
    0x1c, 0x42, 0x8, 0x41, 0x8, 0x38,

    /* U+005C "\\" */
    0x88, 0x44, 0x22, 0x11,

    /* U+005D "]" */
    0x1c, 0x10, 0x82, 0x10, 0x42, 0x38,

    /* U+005E "^" */
    0x54,

    /* U+005F "_" */
    0xf8,

    /* U+0060 "`" */
    0x90,

    /* U+0061 "a" */
    0x32, 0x63, 0x26, 0x80,

    /* U+0062 "b" */
    0x21, 0x10, 0xe4, 0xc7, 0xc0,

    /* U+0063 "c" */
    0x34, 0x88, 0x70,

    /* U+0064 "d" */
    0x4, 0x10, 0x9e, 0x92, 0x47, 0x0,

    /* U+0065 "e" */
    0x32, 0x7f, 0x7, 0x0,

    /* U+0066 "f" */
    0xc, 0x4f, 0xc8, 0x21, 0x4, 0x0,

    /* U+0067 "g" */
    0x32, 0x52, 0x79, 0x70,

    /* U+0068 "h" */
    0x22, 0x44, 0x79, 0x90,

    /* U+0069 "i" */
    0x30, 0x4, 0x48, 0x80,

    /* U+006A "j" */
    0xc, 0x0, 0x2, 0x8, 0x49, 0x18,

    /* U+006B "k" */
    0x21, 0x12, 0xa6, 0x4a, 0x20,

    /* U+006C "l" */
    0x25, 0x25, 0x20,

    /* U+006D "m" */
    0x69, 0x55, 0x6a, 0xa8,

    /* U+006E "n" */
    0x53, 0x53, 0x29, 0x0,

    /* U+006F "o" */
    0x32, 0x63, 0x26, 0x0,

    /* U+0070 "p" */
    0x32, 0x52, 0xe8, 0x40,

    /* U+0071 "q" */
    0x32, 0x62, 0xe1, 0x10,

    /* U+0072 "r" */
    0x56, 0x48, 0x80,

    /* U+0073 "s" */
    0x32, 0x49, 0x26, 0x0,

    /* U+0074 "t" */
    0x2f, 0x44, 0x88,

    /* U+0075 "u" */
    0x4a, 0x65, 0x26, 0x80,

    /* U+0076 "v" */
    0x8c, 0xa9, 0x88, 0x0,

    /* U+0077 "w" */
    0x55, 0x5a, 0xaa, 0x50,

    /* U+0078 "x" */
    0x49, 0x88, 0xa9, 0x0,

    /* U+0079 "y" */
    0x44, 0xa3, 0x8, 0x42, 0x0,

    /* U+007A "z" */
    0x78, 0x88, 0x8f, 0x0,

    /* U+007B "{" */
    0x19, 0x11, 0x84, 0x20, 0x83,

    /* U+007C "|" */
    0x55, 0xaa,

    /* U+007D "}" */
    0xc1, 0x4, 0x31, 0x8, 0x98,

    /* U+007E "~" */
    0xdb,

    /* U+007F "" */
    0x6d, 0x26, 0xc, 0x14, 0x45, 0x4, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 122, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 122, .box_w = 3, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 122, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 6, .adv_w = 122, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 13, .adv_w = 122, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 20, .adv_w = 122, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 25, .adv_w = 122, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 32, .adv_w = 122, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 33, .adv_w = 122, .box_w = 4, .box_h = 8, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 37, .adv_w = 122, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 41, .adv_w = 122, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 43, .adv_w = 122, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 47, .adv_w = 122, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 48, .adv_w = 122, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 49, .adv_w = 122, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 50, .adv_w = 122, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 54, .adv_w = 122, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 58, .adv_w = 122, .box_w = 3, .box_h = 6, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 61, .adv_w = 122, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 66, .adv_w = 122, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 71, .adv_w = 122, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 76, .adv_w = 122, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 81, .adv_w = 122, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 85, .adv_w = 122, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 89, .adv_w = 122, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 94, .adv_w = 122, .box_w = 5, .box_h = 6, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 98, .adv_w = 122, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 101, .adv_w = 122, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 104, .adv_w = 122, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 108, .adv_w = 122, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 110, .adv_w = 122, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 114, .adv_w = 122, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 122, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 127, .adv_w = 122, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 134, .adv_w = 122, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 141, .adv_w = 122, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 148, .adv_w = 122, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 155, .adv_w = 122, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 162, .adv_w = 122, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 169, .adv_w = 122, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 176, .adv_w = 122, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 183, .adv_w = 122, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 188, .adv_w = 122, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 195, .adv_w = 122, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 201, .adv_w = 122, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 206, .adv_w = 122, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 213, .adv_w = 122, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 220, .adv_w = 122, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 227, .adv_w = 122, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 234, .adv_w = 122, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 241, .adv_w = 122, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 248, .adv_w = 122, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 255, .adv_w = 122, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 261, .adv_w = 122, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 268, .adv_w = 122, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 275, .adv_w = 122, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 282, .adv_w = 122, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 289, .adv_w = 122, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 295, .adv_w = 122, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 302, .adv_w = 122, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 308, .adv_w = 122, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 312, .adv_w = 122, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 318, .adv_w = 122, .box_w = 3, .box_h = 2, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 319, .adv_w = 122, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 320, .adv_w = 122, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 321, .adv_w = 122, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 325, .adv_w = 122, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 330, .adv_w = 122, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 333, .adv_w = 122, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 339, .adv_w = 122, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 343, .adv_w = 122, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 349, .adv_w = 122, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 353, .adv_w = 122, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 357, .adv_w = 122, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 361, .adv_w = 122, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 367, .adv_w = 122, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 372, .adv_w = 122, .box_w = 3, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 375, .adv_w = 122, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 379, .adv_w = 122, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 383, .adv_w = 122, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 387, .adv_w = 122, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 391, .adv_w = 122, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 395, .adv_w = 122, .box_w = 4, .box_h = 5, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 398, .adv_w = 122, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 402, .adv_w = 122, .box_w = 4, .box_h = 6, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 405, .adv_w = 122, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 409, .adv_w = 122, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 413, .adv_w = 122, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 417, .adv_w = 122, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 421, .adv_w = 122, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 426, .adv_w = 122, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 430, .adv_w = 122, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 435, .adv_w = 122, .box_w = 2, .box_h = 8, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 437, .adv_w = 122, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 442, .adv_w = 122, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 443, .adv_w = 122, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 96, .glyph_id_start = 1,
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
    .cmap_num = 1,
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
const lv_font_t zelda_dx = {
#else
lv_font_t zelda_dx = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 8,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if ZELDA_DX*/

