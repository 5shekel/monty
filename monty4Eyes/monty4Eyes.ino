

// monty eye test

#include <Adafruit_GFX.h> // uses the adafruit GFX lib
#include "Max72xxPanel.h" // https://github.com/markruys/arduino-Max72xxPanel

#define numberOfHorizontalDisplays  2
#define numberOfVerticalDisplays    2
#define pinCS 10 // Attach CS to this pin, DIN to MOSI and CLK to SCK (cf http://arduino.cc/en/Reference/SPI )
Max72xxPanel matrix = Max72xxPanel(10, numberOfHorizontalDisplays, numberOfVerticalDisplays);

#include "frame.h" //we store our animation in the data folder, and specify them in this header

/////////////////
/// capacitive touch
#include <Wire.h>
#include "Adafruit_MPR121.h"

Adafruit_MPR121 cap = Adafruit_MPR121();

// Keeps track of the last pins touched
// so we know when buttons are 'released'
uint16_t lasttouched = 0;
uint16_t currtouched = 0;


unsigned long prevMillis = 0;
int step = 0;
int maxstep = 8;

void setup() {
  Serial.begin(115200);
  Serial.println(F("start..."));
  if (!cap.begin(0x5A)) {
    Serial.println("MPR121 not found, check wiring?");
    while (1);
  }
  Serial.println("MPR121 found!");

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
  matrix.drawBitmap(0, 0, nums[0], 16, 16, 255);
  matrix.write();

  delay(500);
  matrix.fillScreen(LOW);
  matrix.write();

}

int getTouch() {
  currtouched = cap.touched();

  for (uint8_t i = 0; i < 12; i++) {
    // if it *was* touched and now *isnt*, alert!
    if (!(currtouched & _BV(i)) && (lasttouched & _BV(i)) ) {
      Serial.print(i); Serial.println(" released");
      animState = i;
      step=0;
      maxstep= size_array[i];
    }
  }
  // reset our state
  lasttouched = currtouched;
}


void loop() {

  getTouch(); // Get the currently touched pads

  unsigned long currentMillis = millis();

  if ( (currentMillis - prevMillis >= 80) && animState != def) {
    prevMillis = currentMillis;
    
    matrix.fillScreen(LOW);

    if (animState == Snums) {
      matrix.drawBitmap(0, 0, nums[0], 16, 16, 255);
    } else if (animState == Sdance) {
      matrix.drawBitmap(0, 0, dance[step], 16, 16, 255);
    } else if (animState == Ssnail) {
      matrix.drawBitmap(0, 0, snail[step], 16, 16, 255);
    }

    if (step >= maxstep-1) {
      animState = def;
      step = 0;
    }
    step++;
    matrix.write();
  }
}
