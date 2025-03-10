#ifndef ADAFRUIT_DISPLAY_H
#define ADAFRUIT_DISPLAY_H

#include <Adafruit_GFX.h>
#include <Adafruit_SSD1351.h>
#include "Display.h"

class AdafruitDisplay : public Display {
public:
    AdafruitDisplay(uint16_t width, uint16_t height, SPIClass* spi, int8_t cs, int8_t dc, int8_t rst)
        : display(width, height, spi, cs, dc, rst) {}

    void begin() override {
        display.begin();
    }

    void fillScreen(uint16_t color) override {
        display.fillScreen(color);
    }

    void setRotation(uint8_t rotation) override {
        display.setRotation(rotation);
    }

    void setCursor(int16_t x, int16_t y) override {
        display.setCursor(x, y);
    }

    void setTextColor(uint16_t color) override {
        display.setTextColor(color);
    }

    void print(const char* text) override {
        display.print(text);
    }

    void drawLine(int16_t x0, int16_t y0, int16_t x1, int16_t y1, uint16_t color) override {
        display.drawLine(x0, y0, x1, y1, color);
    }

    void print(float value, int precision) override {
        display.print(value, precision);
    }

private:
    Adafruit_SSD1351 display;
};

#endif // ADAFRUIT_DISPLAY_H