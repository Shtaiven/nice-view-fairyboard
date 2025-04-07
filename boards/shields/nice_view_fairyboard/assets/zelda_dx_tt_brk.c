/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --no-compress --font zeldadxt.ttf --range 32-127 --format lvgl -o zelda_dx_tt_brk.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef ZELDA_DX_TT_BRK
#define ZELDA_DX_TT_BRK 1
#endif

#if ZELDA_DX_TT_BRK

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0x33, 0x33, 0x22, 0x20, 0xe,

    /* U+0022 "\"" */
    0xee, 0x44, 0x8c, 0x40,

    /* U+0023 "#" */
    0x4, 0x80, 0x90, 0x12, 0x1f, 0xf0, 0xa0, 0x14,
    0x3f, 0xe1, 0x20, 0x24, 0x4, 0x80,

    /* U+0024 "$" */
    0x1f, 0x0, 0xa2, 0x24, 0xa0, 0x28, 0x7, 0xc0,
    0x92, 0x44, 0x50, 0xf, 0x80,

    /* U+0025 "%" */
    0xe2, 0x74, 0x3a, 0x1, 0x1, 0x0, 0x9c, 0x4e,
    0x47,

    /* U+0026 "&" */
    0x8, 0x5, 0x81, 0x20, 0x48, 0x18, 0x4, 0x7,
    0x1e, 0x38, 0x82, 0x20, 0xe7, 0x84,

    /* U+0027 "'" */
    0xe4, 0xc0,

    /* U+0028 "(" */
    0xe, 0x40, 0x4, 0x8, 0x10, 0x20, 0x40, 0x80,
    0xc0, 0x78,

    /* U+0029 ")" */
    0xe0, 0x84, 0x10, 0x84, 0x21, 0x8, 0xb8,

    /* U+002A "*" */
    0x92, 0xf0, 0x54, 0x90,

    /* U+002B "+" */
    0x10, 0x20, 0x47, 0xf1, 0x2, 0x4, 0x0,

    /* U+002C "," */
    0xe4, 0xc0,

    /* U+002D "-" */
    0xfe,

    /* U+002E "." */
    0xff, 0x80,

    /* U+002F "/" */
    0x8, 0x42, 0x21, 0x18, 0x84, 0x84, 0x20,

    /* U+0030 "0" */
    0x1e, 0x44, 0x89, 0x18, 0x91, 0x22, 0x3c,

    /* U+0031 "1" */
    0x8, 0x48, 0x42, 0x42, 0x10,

    /* U+0032 "2" */
    0xe, 0x23, 0x2, 0x2, 0x4, 0x8, 0x8, 0xfe,

    /* U+0033 "3" */
    0x1e, 0x11, 0xc0, 0x81, 0xc0, 0x24, 0x11, 0x0,
    0x78,

    /* U+0034 "4" */
    0x2, 0x2, 0x0, 0x1, 0x2, 0x27, 0xfc, 0x10,
    0x8,

    /* U+0035 "5" */
    0xf, 0x84, 0x2, 0x7, 0x80, 0x20, 0x10, 0x9,
    0xf8,

    /* U+0036 "6" */
    0x4, 0x20, 0x9f, 0x47, 0x14, 0x1e,

    /* U+0037 "7" */
    0xff, 0x4, 0x8, 0x8, 0x8, 0x20, 0x20, 0x20,

    /* U+0038 "8" */
    0x1f, 0x91, 0x8, 0x3, 0x82, 0x24, 0x11, 0x0,
    0x78,

    /* U+0039 "9" */
    0x3a, 0x38, 0xa2, 0x70, 0x82, 0x20,

    /* U+003A ":" */
    0x77, 0x70, 0xe, 0xee,

    /* U+003B ";" */
    0x39, 0xce, 0x0, 0x3, 0x84, 0x24, 0x0,

    /* U+003C "<" */
    0xe, 0x1, 0xc4, 0x7, 0x2, 0x3, 0x80,

    /* U+003D "=" */
    0xfe, 0x0, 0x7, 0xf0,

    /* U+003E ">" */
    0xe0, 0x40, 0x70, 0x11, 0xc0, 0x38, 0x0,

    /* U+003F "?" */
    0x7e, 0x66, 0xe7, 0x7, 0x7, 0x1e, 0x70, 0x0,
    0x0, 0xe0,

    /* U+0040 "@" */
    0x1f, 0x8, 0x32, 0x4, 0x9f, 0x88, 0xe2, 0x48,
    0x92, 0x3c, 0x80, 0x20, 0x7, 0xe0,

    /* U+0041 "A" */
    0x0, 0x40, 0x10, 0x1c, 0x9, 0x8, 0x42, 0x11,
    0xfc, 0x81, 0x0, 0x60, 0x10,

    /* U+0042 "B" */
    0x1f, 0x4, 0x21, 0x4, 0x41, 0x3f, 0x8, 0x42,
    0x12, 0x4, 0x81, 0x3f, 0x80,

    /* U+0043 "C" */
    0xf, 0x0, 0x21, 0x4, 0x80, 0x20, 0x28, 0x8,
    0x2, 0x4, 0x40, 0xf, 0x80,

    /* U+0044 "D" */
    0x1f, 0x4, 0x31, 0x4, 0x41, 0x20, 0x48, 0x12,
    0x6, 0x4, 0x80, 0x3f, 0x80,

    /* U+0045 "E" */
    0x1f, 0xc4, 0x1, 0x0, 0x40, 0x3f, 0x88, 0x2,
    0x2, 0x0, 0x80, 0x3f, 0xe0,

    /* U+0046 "F" */
    0x1f, 0xc4, 0x1, 0x0, 0x40, 0x3f, 0x88, 0x2,
    0x2, 0x0, 0x80, 0x20, 0x0,

    /* U+0047 "G" */
    0xf, 0x0, 0x21, 0x4, 0x80, 0x20, 0x8, 0x8,
    0x3e, 0x4, 0x81, 0x1f, 0x80,

    /* U+0048 "H" */
    0x10, 0x44, 0x11, 0x4, 0x84, 0x21, 0xf, 0xc2,
    0x12, 0x8, 0x82, 0x20, 0x80,

    /* U+0049 "I" */
    0x1e, 0x10, 0x20, 0x81, 0x2, 0x8, 0x10, 0x21,
    0xe0,

    /* U+004A "J" */
    0x0, 0x40, 0x10, 0x4, 0x4, 0x1, 0x0, 0x48,
    0x22, 0x8, 0x82, 0x1e, 0x0,

    /* U+004B "K" */
    0x11, 0x10, 0x12, 0x1c, 0x70, 0x70, 0x70, 0x88,
    0x84, 0x82,

    /* U+004C "L" */
    0x10, 0x20, 0x41, 0x2, 0x4, 0x8, 0x40, 0x81,
    0xfc,

    /* U+004D "M" */
    0x8, 0xc2, 0x31, 0x9c, 0x79, 0x28, 0x4a, 0x12,
    0x12, 0x4, 0x81, 0x20, 0x40,

    /* U+004E "N" */
    0x10, 0x44, 0x11, 0x4, 0xe1, 0x29, 0xa, 0x42,
    0x72, 0x4, 0x81, 0x20, 0x40,

    /* U+004F "O" */
    0x1f, 0x0, 0x22, 0x4, 0x81, 0x20, 0x60, 0x18,
    0x12, 0x4, 0x81, 0x1f, 0x80,

    /* U+0050 "P" */
    0x1f, 0x84, 0x21, 0x4, 0x81, 0x20, 0x4f, 0xe2,
    0x2, 0x0, 0x80, 0x20, 0x0,

    /* U+0051 "Q" */
    0x1f, 0x0, 0x22, 0x4, 0x81, 0x80, 0x60, 0x18,
    0xf2, 0x4, 0x40, 0x8f, 0x90,

    /* U+0052 "R" */
    0x1f, 0x84, 0x21, 0x4, 0x81, 0x20, 0x4f, 0xe2,
    0x22, 0x8, 0x82, 0x20, 0x80,

    /* U+0053 "S" */
    0x1f, 0x0, 0x22, 0x4, 0x80, 0x20, 0x7, 0xc0,
    0x12, 0x4, 0x40, 0xf, 0x80,

    /* U+0054 "T" */
    0xff, 0x88, 0x4, 0x2, 0x2, 0x1, 0x0, 0x81,
    0x0, 0x80, 0x40, 0x0,

    /* U+0055 "U" */
    0x10, 0x44, 0x11, 0x4, 0x84, 0x21, 0x8, 0x48,
    0x22, 0x8, 0x82, 0x1f, 0x0,

    /* U+0056 "V" */
    0x80, 0x60, 0x8, 0x12, 0x8, 0x80, 0x22, 0x9,
    0x3, 0x80, 0x80, 0x20, 0x0,

    /* U+0057 "W" */
    0x20, 0x48, 0x12, 0x4, 0x84, 0x89, 0x22, 0x49,
    0x93, 0xb8, 0x82, 0x20, 0x80,

    /* U+0058 "X" */
    0x10, 0x44, 0x1, 0x10, 0x38, 0x8, 0x2, 0x1,
    0x80, 0x98, 0x2, 0x20, 0x80,

    /* U+0059 "Y" */
    0x81, 0x80, 0x8e, 0x70, 0x20, 0x20, 0x20, 0x80,
    0x80, 0x80,

    /* U+005A "Z" */
    0x3f, 0xe0, 0x10, 0x2, 0x1, 0x0, 0x0, 0x8,
    0x2, 0x1, 0x0, 0x20, 0x1f, 0xf0,

    /* U+005B "[" */
    0xf, 0x8, 0x8, 0x10, 0x10, 0x30, 0x20, 0x20,
    0x80, 0x80, 0xf0,

    /* U+005C "\\" */
    0x84, 0x20, 0xc2, 0x18, 0x42, 0x8, 0x42,

    /* U+005D "]" */
    0xf, 0x1, 0x1, 0x2, 0x2, 0x6, 0x4, 0x4,
    0x10, 0x10, 0xf0,

    /* U+005E "^" */
    0x20, 0xa2,

    /* U+005F "_" */
    0xfe,

    /* U+0060 "`" */
    0x88, 0x80,

    /* U+0061 "a" */
    0x1c, 0x46, 0xc, 0x18, 0x48, 0x8e, 0x80,

    /* U+0062 "b" */
    0x10, 0x20, 0x41, 0x2, 0x7, 0x88, 0xc1, 0x83,
    0xf8,

    /* U+0063 "c" */
    0xe, 0x0, 0x84, 0x8, 0x10, 0x1f, 0x80,

    /* U+0064 "d" */
    0x1, 0x1, 0x1, 0x2, 0x2, 0x7e, 0x88, 0x88,
    0x88, 0x78,

    /* U+0065 "e" */
    0x1c, 0x44, 0x8f, 0xf8, 0x10, 0x1f, 0x0,

    /* U+0066 "f" */
    0x3, 0x82, 0x1, 0x1f, 0xf0, 0x80, 0x40, 0x20,
    0x40, 0x20, 0x10, 0x0,

    /* U+0067 "g" */
    0x1c, 0x44, 0x89, 0x11, 0xf0, 0xa1, 0x7c,

    /* U+0068 "h" */
    0x10, 0x84, 0x42, 0x10, 0xf1, 0x8c, 0x40,

    /* U+0069 "i" */
    0xe, 0x0, 0x0, 0x2, 0x4, 0x8, 0x40, 0x81,
    0x0,

    /* U+006A "j" */
    0x3, 0x80, 0x0, 0x0, 0x0, 0x20, 0x10, 0x8,
    0x10, 0x8, 0x44, 0x1c, 0x0,

    /* U+006B "k" */
    0x10, 0x20, 0x41, 0x12, 0x5, 0xc, 0x44, 0x85,
    0x4,

    /* U+006C "l" */
    0x8, 0x42, 0x42, 0x10, 0x90, 0x84, 0x0,

    /* U+006D "m" */
    0x32, 0x29, 0x29, 0x29, 0x96, 0x92, 0x92,

    /* U+006E "n" */
    0x28, 0x6c, 0x89, 0x18, 0x91, 0x22, 0x0,

    /* U+006F "o" */
    0x1c, 0x46, 0xc, 0x18, 0x48, 0xe, 0x0,

    /* U+0070 "p" */
    0x1c, 0x44, 0x89, 0x13, 0xd0, 0x20, 0x40,

    /* U+0071 "q" */
    0x18, 0x4c, 0xc, 0x17, 0x81, 0x2, 0x8,

    /* U+0072 "r" */
    0x29, 0xc, 0x48, 0x42, 0x0,

    /* U+0073 "s" */
    0x18, 0x8, 0x88, 0x88, 0x88, 0xc, 0x0,

    /* U+0074 "t" */
    0x10, 0x4f, 0xc8, 0x20, 0x88, 0x20, 0x80,

    /* U+0075 "u" */
    0x22, 0x44, 0x8c, 0x48, 0x91, 0x1f, 0x80,

    /* U+0076 "v" */
    0x83, 0x2, 0x24, 0x8e, 0x10, 0x20, 0x0,

    /* U+0077 "w" */
    0x29, 0x29, 0x29, 0x96, 0x92, 0x92, 0x68,

    /* U+0078 "x" */
    0x22, 0x40, 0x70, 0x82, 0x81, 0x22, 0x0,

    /* U+0079 "y" */
    0x21, 0x12, 0x10, 0x1c, 0x10, 0x0, 0x20, 0x80,

    /* U+007A "z" */
    0x3f, 0x4, 0x4, 0x8, 0x20, 0x20, 0xfc,

    /* U+007B "{" */
    0x7, 0x10, 0x0, 0x40, 0xc0, 0x40, 0x40, 0x40,
    0x40, 0x30, 0xf,

    /* U+007C "|" */
    0x24, 0x93, 0x64, 0x92, 0x0,

    /* U+007D "}" */
    0xe0, 0x41, 0x2, 0xc, 0x20, 0x82, 0x8, 0x4e,
    0x0,

    /* U+007E "~" */
    0xed, 0x6e,

    /* U+007F "" */
    0x33, 0x4, 0x28, 0x86, 0x1, 0x80, 0x60, 0x16,
    0x10, 0x48, 0x10, 0x2, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 178, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 178, .box_w = 4, .box_h = 10, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 6, .adv_w = 178, .box_w = 7, .box_h = 4, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 10, .adv_w = 178, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 24, .adv_w = 178, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 37, .adv_w = 178, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 46, .adv_w = 178, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 60, .adv_w = 178, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 62, .adv_w = 178, .box_w = 7, .box_h = 11, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 72, .adv_w = 178, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 79, .adv_w = 178, .box_w = 7, .box_h = 4, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 83, .adv_w = 178, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 90, .adv_w = 178, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 92, .adv_w = 178, .box_w = 7, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 93, .adv_w = 178, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 95, .adv_w = 178, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 102, .adv_w = 178, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 109, .adv_w = 178, .box_w = 5, .box_h = 8, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 114, .adv_w = 178, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 122, .adv_w = 178, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 131, .adv_w = 178, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 140, .adv_w = 178, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 149, .adv_w = 178, .box_w = 6, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 155, .adv_w = 178, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 163, .adv_w = 178, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 172, .adv_w = 178, .box_w = 6, .box_h = 8, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 178, .adv_w = 178, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 182, .adv_w = 178, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 189, .adv_w = 178, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 196, .adv_w = 178, .box_w = 7, .box_h = 4, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 200, .adv_w = 178, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 207, .adv_w = 178, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 217, .adv_w = 178, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 231, .adv_w = 178, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 244, .adv_w = 178, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 257, .adv_w = 178, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 270, .adv_w = 178, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 283, .adv_w = 178, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 296, .adv_w = 178, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 309, .adv_w = 178, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 322, .adv_w = 178, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 335, .adv_w = 178, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 344, .adv_w = 178, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 357, .adv_w = 178, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 367, .adv_w = 178, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 376, .adv_w = 178, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 389, .adv_w = 178, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 402, .adv_w = 178, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 415, .adv_w = 178, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 428, .adv_w = 178, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 441, .adv_w = 178, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 454, .adv_w = 178, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 467, .adv_w = 178, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 479, .adv_w = 178, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 492, .adv_w = 178, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 505, .adv_w = 178, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 518, .adv_w = 178, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 531, .adv_w = 178, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 541, .adv_w = 178, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 555, .adv_w = 178, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 566, .adv_w = 178, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 573, .adv_w = 178, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 584, .adv_w = 178, .box_w = 5, .box_h = 3, .ofs_x = 3, .ofs_y = 7},
    {.bitmap_index = 586, .adv_w = 178, .box_w = 7, .box_h = 1, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 587, .adv_w = 178, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 589, .adv_w = 178, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 596, .adv_w = 178, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 605, .adv_w = 178, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 612, .adv_w = 178, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 622, .adv_w = 178, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 629, .adv_w = 178, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 641, .adv_w = 178, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 648, .adv_w = 178, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 655, .adv_w = 178, .box_w = 7, .box_h = 10, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 664, .adv_w = 178, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 677, .adv_w = 178, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 686, .adv_w = 178, .box_w = 5, .box_h = 10, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 693, .adv_w = 178, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 700, .adv_w = 178, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 707, .adv_w = 178, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 714, .adv_w = 178, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 721, .adv_w = 178, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 728, .adv_w = 178, .box_w = 5, .box_h = 7, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 733, .adv_w = 178, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 740, .adv_w = 178, .box_w = 6, .box_h = 9, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 747, .adv_w = 178, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 754, .adv_w = 178, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 761, .adv_w = 178, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 768, .adv_w = 178, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 775, .adv_w = 178, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 783, .adv_w = 178, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 790, .adv_w = 178, .box_w = 8, .box_h = 11, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 801, .adv_w = 178, .box_w = 3, .box_h = 11, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 806, .adv_w = 178, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 815, .adv_w = 178, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 817, .adv_w = 178, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0}
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
const lv_font_t zelda_dx_tt_brk = {
#else
lv_font_t zelda_dx_tt_brk = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 11,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if ZELDA_DX_TT_BRK*/

