#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_LEFT_IMAGE
#define LV_ATTRIBUTE_IMG_LEFT_IMAGE
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_LEFT_IMAGE uint8_t
    left_image_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#else
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#endif
  // REPLACE THESE BYTES
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x03, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0f, 0xff, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x0f, 0x3c, 0xcf, 0xfc, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x3c, 0x0f, 0x3c, 0xcf, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0xf3,
  0xcc, 0xfc, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x33, 0xf3, 0xcc, 0xfc, 0x0f, 0xf0, 0x00, 0x00,
  0x00, 0x00, 0x3c, 0x0c, 0xf3, 0x32, 0x83, 0x30, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x0c, 0xf3, 0x31,
  0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf3, 0x33, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00,
  0x0f, 0xf3, 0x33, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x03, 0xcc, 0xc3, 0x3c, 0x00, 0x30,
  0x00, 0x00, 0x00, 0x00, 0x03, 0xcc, 0xc3, 0x3c, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0c,
  0x00, 0x0c, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0c, 0x00, 0x0c, 0x00, 0x30, 0x00, 0x00,
  0x00, 0x00, 0x0f, 0x00, 0x80, 0x00, 0xc0, 0xff, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x40, 0x00,
  0xc0, 0xff, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x0a, 0x00, 0x00, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00,
  0xfc, 0x05, 0x00, 0x00, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x0f, 0x00, 0x3c, 0xf3,
  0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x0f, 0x00, 0x3c, 0xf3, 0x00, 0x00, 0x00, 0x00, 0xcc, 0x00,
  0x0f, 0x00, 0x33, 0xf3, 0x00, 0x00, 0x00, 0x00, 0xcc, 0x00, 0x0f, 0x00, 0x33, 0xf3, 0x00, 0x00,
  0x00, 0x00, 0xcf, 0x00, 0x3c, 0xcc, 0x0f, 0xcf, 0x00, 0x00, 0x00, 0x00, 0xcf, 0x00, 0x3c, 0xcc,
  0x0f, 0xcf, 0x00, 0x00, 0x00, 0x00, 0xf3, 0xf3, 0x3c, 0xfc, 0x3f, 0xcc, 0x00, 0x00, 0x00, 0x00,
  0xf3, 0xf3, 0x3c, 0xfc, 0x3f, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xf2, 0xbe, 0xb8, 0xff, 0x3c,
  0x00, 0x00, 0x00, 0x00, 0x3c, 0xf1, 0x7d, 0x74, 0xff, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x30,
  0xf3, 0xc3, 0xfc, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x30, 0xf3, 0xc3, 0xfc, 0xf0, 0x00, 0x00,
  0x00, 0x00, 0x03, 0xcf, 0x3f, 0x03, 0xc3, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xcf, 0x3f, 0x03,
  0xc3, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf3, 0x00, 0x30, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0xf3, 0x00, 0x30, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xca, 0x3c, 0xff, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xc5, 0x3c, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33,
  0xc0, 0x8f, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0xc0, 0x4f, 0x03, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x30, 0x32, 0xa0, 0xe3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x31, 0x50,
  0xd3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x0f, 0x8f, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x3f, 0xf0, 0x0f, 0x4f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xf0, 0x3c, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xf0, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0f, 0x38, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x34, 0xf0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0,
  0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00
  // END
};

const lv_img_dsc_t left_image = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 80,
    .header.h = 69,
    .data_size = 620,
    .data = left_image_map,
};
