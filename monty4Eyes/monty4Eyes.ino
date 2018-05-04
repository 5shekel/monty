
// monty eye test
/*
   = wiring ARDUNIO=
   MATRIX / SPI
   CLK = D13
   CS = D10
   DIN = D11
   TOUCH / I2C
   SCL = A5
   SDA = A4
*/
#include <Adafruit_GFX.h> // uses the adafruit GFX lib
#include "Max72xxPanel.h" // https://github.com/markruys/arduino-Max72xxPanel

#define numberOfHorizontalDisplays  4
#define numberOfVerticalDisplays    4
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
int step, maxstep;
int loops, loopCount;

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

  matrix.setPosition(4, 0, 0); // The first display is at <0, 0>
  matrix.setPosition(5, 0, 0); // The second display is at <1, 0>
  matrix.setPosition(6, 0, 0); // The third display is at <2, 0>
  matrix.setPosition(7, 0, 0);


  matrix.setRotation(0, 3);
  matrix.setRotation(1, 1);
  matrix.setRotation(2, 1);
  matrix.setRotation(3, 3);
  matrix.setRotation(4, 2);
  matrix.setRotation(5, 2);
  matrix.setRotation(6, 2);
  matrix.setRotation(7, 2);

  matrix.fillScreen(LOW);
///  matrix.drawBitmap(0, 0, nums[0], 32, 16, 255);
  matrix.write();

  delay(500);
  matrix.fillScreen(LOW);
  matrix.write();

}
int getTouch() {
  currtouched = cap.touched();

  for (uint8_t i = 0; i < 12; i++) {
    // it if *is* touched and *wasnt* touched before, alert!
    if ((currtouched & _BV(i)) && !(lasttouched & _BV(i)) ) {
      animState = i;
      step = 0;
      maxstep = size_array[i];
      loops = loop_array[i]; //how many loops to run the animation
      Serial.print(loops); Serial.println(" :loops");
      Serial.print(i); Serial.println(" touched");
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

if (animState == S8_normal_default_possition) {
  matrix.drawBitmap(0, 0, normal_default_possition[step], 32, 16, 255);
} else if (animState == S0_probuzeni) {
  matrix.drawBitmap(0, 0, probuzeni[step], 32, 16, 255);
} else if (animState == S1_normal) {
  matrix.drawBitmap(0, 0, normal[step], 32, 16, 255);
} else if (animState == S2_vesele_mrk) {
  matrix.drawBitmap(0, 0, vesele_mrk[step], 32, 16, 255);
} else if (animState == S3_do_rozzlobeni) {
  matrix.drawBitmap(0, 0, do_rozzlobeni[step], 32, 16, 255);
} else if (animState == S4_do_smutku) {
  matrix.drawBitmap(0, 0, do_smutku[step], 32, 16, 255);
} else if (animState == S5_do_spanku) {
  matrix.drawBitmap(0, 0, do_spanku[step], 32, 16, 255);
} else if (animState == S6_do_srdicka) {
  matrix.drawBitmap(0, 0, do_srdicka[step], 32, 16, 255);
} else if (animState == S7_do_udiveni) {
  matrix.drawBitmap(0, 0, do_udiveni[step], 32, 16, 255);
} else if (animState == S9_sleeping_default_possition) {
  matrix.drawBitmap(0, 0, sleeping_default_possition[step], 32, 16, 255);
}


    if (step >= maxstep-1) {
      animState = def;
      step = 0;
    }
    step++;
    matrix.write();
  }
}
