#define logo_width 32
#define logo_height 32

//Hackter.io Animation
static const unsigned char logo_1[] U8X8_PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x07, 0x00,
  0x00, 0xF8, 0x3F, 0x00, 0x00, 0xFE, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x03,
  0x80, 0xFF, 0xFF, 0x07, 0xC0, 0xFF, 0xBF, 0x0F, 0xE0, 0xFF, 0x9F, 0x0F,
  0xF0, 0x9F, 0x87, 0x1F, 0xF0, 0x87, 0x87, 0x3F, 0xF8, 0x87, 0x87, 0x3F,
  0xF8, 0x9F, 0x87, 0x3F, 0xFC, 0xFF, 0x87, 0x7F, 0xFC, 0x83, 0xFF, 0x7F,
  0xFC, 0x00, 0x80, 0x7F, 0xFC, 0x07, 0x80, 0x7F, 0xFC, 0x07, 0x00, 0x7C,
  0xFC, 0xFF, 0x07, 0x7F, 0xFC, 0x87, 0xFF, 0x7F, 0xF8, 0x87, 0xE7, 0x3F,
  0xF8, 0x87, 0x87, 0x3F, 0xF0, 0x87, 0x87, 0x3F, 0xF0, 0x87, 0xE7, 0x1F,
  0xE0, 0xE7, 0xFF, 0x0F, 0xC0, 0xF7, 0xFF, 0x0F, 0x80, 0xFF, 0xFF, 0x07,
  0x00, 0xFF, 0xFF, 0x03, 0x00, 0xFE, 0xFF, 0x00, 0x00, 0xF8, 0x3F, 0x00,
  0x00, 0xC0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char logo_2[] U8X8_PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x03, 0x00,
  0x00, 0xE0, 0x1F, 0x00, 0x00, 0xF8, 0x3F, 0x00, 0x00, 0xFC, 0xFF, 0x00,
  0x00, 0xFE, 0xFF, 0x01, 0x00, 0xFF, 0xDF, 0x03, 0x80, 0xFF, 0xCF, 0x03,
  0xC0, 0xBF, 0xC7, 0x07, 0xC0, 0x8F, 0xC7, 0x0F, 0xE0, 0x8F, 0xC7, 0x0F,
  0xE0, 0xBF, 0xC7, 0x0F, 0xF0, 0xFF, 0xC7, 0x1F, 0xF0, 0x87, 0xFF, 0x1F,
  0xF0, 0x03, 0xC0, 0x1F, 0xF0, 0x0F, 0xC0, 0x1F, 0xF0, 0x0F, 0x00, 0x1F,
  0xF0, 0xFF, 0x87, 0x1F, 0xF0, 0x8F, 0xFF, 0x1F, 0xE0, 0x8F, 0xF7, 0x0F,
  0xE0, 0x8F, 0xC7, 0x0F, 0xC0, 0x8F, 0xC7, 0x0F, 0xC0, 0x8F, 0xF7, 0x07,
  0x80, 0xCF, 0xFF, 0x03, 0x00, 0xEF, 0xFF, 0x03, 0x00, 0xFE, 0xFF, 0x01,
  0x00, 0xFE, 0xFF, 0x00, 0x00, 0xFC, 0x3F, 0x00, 0x00, 0xF0, 0x1F, 0x00,
  0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static const unsigned char logo_3[] U8X8_PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x03, 0x00,
  0x00, 0xC0, 0x0F, 0x00, 0x00, 0xF0, 0x1F, 0x00, 0x00, 0xF8, 0x3F, 0x00,
  0x00, 0xFC, 0x7F, 0x00, 0x00, 0xFE, 0xEF, 0x00, 0x00, 0xFE, 0xE7, 0x00,
  0x00, 0xBF, 0xE7, 0x01, 0x00, 0x9F, 0xE7, 0x03, 0x80, 0x9F, 0xE7, 0x03,
  0x80, 0xBF, 0xE7, 0x03, 0xC0, 0xFF, 0xE7, 0x07, 0xC0, 0x8F, 0xFF, 0x07,
  0xC0, 0x07, 0xE0, 0x07, 0xC0, 0x1F, 0xE0, 0x07, 0xC0, 0x1F, 0x80, 0x07,
  0xC0, 0xFF, 0xC7, 0x07, 0xC0, 0x9F, 0xFF, 0x07, 0x80, 0x9F, 0xF7, 0x03,
  0x80, 0x9F, 0xE7, 0x03, 0x00, 0x9F, 0xE7, 0x03, 0x00, 0x9F, 0xF7, 0x01,
  0x00, 0x9E, 0xFF, 0x00, 0x00, 0xDE, 0xFF, 0x00, 0x00, 0xFC, 0x7F, 0x00,
  0x00, 0xFC, 0x3F, 0x00, 0x00, 0xF8, 0x1F, 0x00, 0x00, 0xE0, 0x0F, 0x00,
  0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static const unsigned char logo_4[] U8X8_PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00,
  0x00, 0x80, 0x0F, 0x00, 0x00, 0xC0, 0x1F, 0x00, 0x00, 0xE0, 0x1F, 0x00,
  0x00, 0xF0, 0x3F, 0x00, 0x00, 0xF8, 0x77, 0x00, 0x00, 0xF8, 0x73, 0x00,
  0x00, 0x7C, 0xF3, 0x00, 0x00, 0x3C, 0xF3, 0x01, 0x00, 0x3E, 0xF3, 0x01,
  0x00, 0x7E, 0xF3, 0x01, 0x00, 0xFF, 0xF3, 0x03, 0x00, 0x3F, 0xFF, 0x03,
  0x00, 0x1F, 0xF0, 0x03, 0x00, 0x3F, 0xF0, 0x03, 0x00, 0x3F, 0xE0, 0x03,
  0x00, 0xFF, 0xF3, 0x03, 0x00, 0x3F, 0xFF, 0x03, 0x00, 0x3E, 0xFB, 0x01,
  0x00, 0x3E, 0xF3, 0x01, 0x00, 0x3C, 0xF3, 0x01, 0x00, 0x3C, 0xFB, 0x00,
  0x00, 0x38, 0x7F, 0x00, 0x00, 0xB8, 0x7F, 0x00, 0x00, 0xF0, 0x3F, 0x00,
  0x00, 0xF0, 0x1F, 0x00, 0x00, 0xE0, 0x0F, 0x00, 0x00, 0xC0, 0x07, 0x00,
  0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static const unsigned char logo_5[] U8X8_PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00,
  0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x80, 0x0F, 0x00,
  0x00, 0xC0, 0x0F, 0x00, 0x00, 0xC0, 0x1B, 0x00, 0x00, 0xE0, 0x1B, 0x00,
  0x00, 0x60, 0x3B, 0x00, 0x00, 0x60, 0x3B, 0x00, 0x00, 0x70, 0x3B, 0x00,
  0x00, 0x70, 0x7B, 0x00, 0x00, 0xF8, 0x7B, 0x00, 0x00, 0x78, 0x7F, 0x00,
  0x00, 0x38, 0x78, 0x00, 0x00, 0x78, 0x78, 0x00, 0x00, 0x78, 0x70, 0x00,
  0x00, 0xF8, 0x7B, 0x00, 0x00, 0x70, 0x7F, 0x00, 0x00, 0x70, 0x7B, 0x00,
  0x00, 0x70, 0x7B, 0x00, 0x00, 0x70, 0x3B, 0x00, 0x00, 0x60, 0x3B, 0x00,
  0x00, 0x60, 0x3F, 0x00, 0x00, 0x60, 0x1F, 0x00, 0x00, 0xE0, 0x1F, 0x00,
  0x00, 0xC0, 0x0F, 0x00, 0x00, 0x80, 0x07, 0x00, 0x00, 0x00, 0x07, 0x00,
  0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static const unsigned char logo_6[] U8X8_PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00,
  0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x80, 0x0F, 0x00,
  0x00, 0x80, 0x0F, 0x00, 0x00, 0x80, 0x0F, 0x00, 0x00, 0x80, 0x0F, 0x00,
  0x00, 0x80, 0x0F, 0x00, 0x00, 0x80, 0x0F, 0x00, 0x00, 0x80, 0x0F, 0x00,
  0x00, 0x80, 0x0F, 0x00, 0x00, 0x80, 0x0F, 0x00, 0x00, 0x80, 0x0F, 0x00,
  0x00, 0x80, 0x0F, 0x00, 0x00, 0x80, 0x0F, 0x00, 0x00, 0x80, 0x0F, 0x00,
  0x00, 0x80, 0x0F, 0x00, 0x00, 0x80, 0x0F, 0x00, 0x00, 0x80, 0x0F, 0x00,
  0x00, 0x80, 0x0F, 0x00, 0x00, 0x80, 0x0F, 0x00, 0x00, 0x80, 0x0F, 0x00,
  0x00, 0x80, 0x0F, 0x00, 0x00, 0x80, 0x0F, 0x00, 0x00, 0x80, 0x0F, 0x00,
  0x00, 0x80, 0x0F, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x00,
  0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
};