#include <SPI.h>
#include <Adafruit_GFX.h>
#include "Max72xxPanel.h"

int pinCS = 10; // Attach CS to this pin, DIN to MOSI and CLK to SCK (cf http://arduino.cc/en/Reference/SPI )
int numberOfHorizontalDisplays = 2;
int numberOfVerticalDisplays = 2;

Max72xxPanel matrix = Max72xxPanel(pinCS, numberOfHorizontalDisplays, numberOfVerticalDisplays);

#include "frame.h"

const uint8_t myBitmapBitmap [] PROGMEM = {
  0x00, 0x00, 0x08, 0x18, 0x18, 0x24, 0x08, 0x08, 0x08, 0x10, 0x08, 0x20, 0x08, 0x3c, 0x00, 0x00,
  0x00, 0x00, 0x3c, 0x24, 0x04, 0x24, 0x3c, 0x3c, 0x04, 0x04, 0x04, 0x04, 0x3c, 0x04, 0x00, 0x00,
};




void setup() {
  matrix.setIntensity(0);

  // Adjust to your own needs
  matrix.setPosition(0, 0, 0); // The first display is at <0, 0>
  matrix.setPosition(1, 1, 0); // The second display is at <1, 0>
  matrix.setPosition(2, 3, 0); // The third display is at <2, 0>
  matrix.setPosition(3, 2, 0); // And the last display is at <3, 0>

  matrix.setRotation(0, 3);
  matrix.setRotation(1, 1);
  matrix.setRotation(2, 1);
  matrix.setRotation(3, 3);

  matrix.fillScreen(LOW);
  
  matrix.drawBitmap(0, 0, snail[0], 16, 16, 255);
  matrix.write();
  delay(2000);
  
  for (int step = 0; step < k_size; step++) {
    matrix.fillScreen(LOW);
    matrix.drawBitmap(0, 0, snail[step], 16, 16, 255);
    matrix.write(); // Send bitmap to display
    delay(40);
  }

}

int wait = 50;
int inc = -2;

void loop() {
  /*
    for ( int x = 0; x < matrix.width() - 1; x++ ) {
      matrix.fillScreen(LOW);
      matrix.drawLine(x, 0, matrix.width() - 1 - x, matrix.height() - 1, HIGH);
      matrix.write(); // Send bitmap to display
      delay(wait);
    }
      wait = wait + inc;
    if ( wait == 0 ) inc = 2;
    if ( wait == 50 ) inc = -2;
  */




}
