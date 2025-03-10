#ifndef DISPLAY_H
#define DISPLAY_H

class Display {
public:
    virtual void begin() = 0;
    virtual void fillScreen(uint16_t color) = 0;
    virtual void setRotation(uint8_t rotation) = 0;
    virtual void setCursor(int16_t x, int16_t y) = 0;
    virtual void setTextColor(uint16_t color) = 0;
    virtual void print(const char* text) = 0;
    virtual void print(float value, int precision) = 0;
    virtual void drawLine(int16_t x0, int16_t y0, int16_t x1, int16_t y1, uint16_t color) = 0;
};

#endif // DISPLAY_H