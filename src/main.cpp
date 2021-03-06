#include <Arduino.h>
#include <LilyGoWatch.h>

// C++ object which will allow access to the functions of the Watch 
TTGOClass *watch;

void setup() {
    // Get Watch object and set up the display 
    watch = TTGOClass::getWatch();
    watch->begin();     
    watch->openBL();
    
    // Use SPI_eTFT library to display text on screen 
    watch->tft->fillScreen(TFT_BLACK);
    watch->tft->setTextFont(2);
    watch->tft->setTextSize(2);
    watch->tft->setTextColor(TFT_WHITE);
    watch->tft->setCursor(0, 20);
    watch->tft->println(F("Hello World!"));
}

void loop() {}