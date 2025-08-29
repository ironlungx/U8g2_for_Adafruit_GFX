#include <Arduino.h>
#include <U8g2lib.h>
#include <GxEPD2_BW.h>
#include <U8g2_for_Adafruit_GFX.h>

#define OLED_CS       47
#define OLED_DC       46
#define OLED_RST      45

#define EPD_CS        2
#define EPD_DC        21
#define EPD_RST       9
#define EPD_BUSY      37

GxEPD2_BW<GxEPD2_310_GDEQ031T10, GxEPD2_310_GDEQ031T10::HEIGHT> display(GxEPD2_310_GDEQ031T10(EPD_CS, EPD_DC, EPD_RST, EPD_BUSY));
U8G2_SSD1326_ER_256X32_F_4W_HW_SPI u8g2(U8G2_R2, OLED_CS, OLED_DC, OLED_RST);
U8G2_FOR_ADAFRUIT_GFX u8g2_for_adafruit_gfx;

volatile bool GxEPD2_310_GDEQ031T10::useFastFullUpdate = true;

void setup() {
  display.init();
  u8g2.begin();
  u8g2_for_adafruit_gfx.begin(display);
}
void loop() {}
