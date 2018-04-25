

// monty eye test

#include <Adafruit_GFX.h> // uses the adafruit GFX lib
#include "Max72xxPanel.h" // https://github.com/markruys/arduino-Max72xxPanel

#define numberOfHorizontalDisplays  2
#define numberOfVerticalDisplays    2
#define pinCS 10 // Attach CS to this pin, DIN to MOSI and CLK to SCK (cf http://arduino.cc/en/Reference/SPI )
Max72xxPanel matrix = Max72xxPanel(10, numberOfHorizontalDisplays, numberOfVerticalDisplays);

#include "frame.h" //we store our animation in the data folder, and specify them in this header

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

  matrix.drawBitmap(0, 0, nums[0], 16, 16, 255);
  matrix.write();
  delay(2000);


}

void loop() {


  for (int step = 0; step < dance_size; step++) {
    matrix.fillScreen(LOW);
    matrix.drawBitmap(0, 0, dance[step], 16, 16, 255);
    matrix.write(); // Send bitmap to display
    delay(80);
  }

}
