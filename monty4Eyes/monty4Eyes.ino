#include "LedControlMS.h"
#include "frame.h"



LedControl lc = LedControl(11, 13, 10, 4);

//Tommy's delay:
int delaytime = 50;
unsigned long currenttime = 0;
int frameTotal; //temp value for number of frames our 3D array

//keypad definitions
/*
  #include <Keypad.h>

  const byte ROWS = 4; //four rows
  const byte COLS = 3; //three columns
  char keys[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
  };
  byte rowPins[ROWS] = {8, 7, 6, 5};
  byte colPins[COLS] = {4, 3, 2};
*/

void setup() {
  Serial.begin(115200);

  for (int iii = 0; iii < 4; iii++) {
    lc.shutdown(iii, false);
    lc.clearDisplay(iii);
    lc.setIntensity(iii, 8);
  }
}


void loop() {


  frameTotal = (sizeof(c) / 32);
  for (int frame = 0; frame < frameTotal; frame++) {
    for (int seg = 0 ; seg < 4; seg++) {
      for (int row = 0; row < 8; row++ )
        lc.setRow(seg, row, c[frame][seg][row]);
    }
    delay(delaytime);
  }
  delay(1000);
  frameTotal = (sizeof(d) / 32);
  for (int frame = 0; frame < frameTotal; frame++) {
    for (int seg = 0 ; seg < 4; seg++) {
      for (int row = 0; row < 8; row++ )
        lc.setRow(seg, row, d[frame][seg][row]);
    }
    delay(delaytime);
  }
  delay(1000);
}
