#include "_pixel.h"
#include "config.h"
Pixel pixel = Pixel(number_of_leds, data_pin, NEO_RGB + NEO_KHZ800);

void updatePixels()
{
  moledcule.now = millis();
}
