#include "LedControlMS.h"
#include "frames.h"
//#include <Keypad.h>

LedControl lc = LedControl(11, 13, 10, 4);

//Yair's delay:
unsigned long delaytime = 250;

//Tommy's delay:
//int delaytime = 250;
//unsigned long currenttime = 0;

//keypad definitions
/*
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
  for (int iii = 0; iii < 4; iii++) {
    lc.shutdown(iii, false);
    lc.setIntensity(iii, 15);
    lc.clearDisplay(iii);
    lc.setIntensity(iii, 8);
  }
}

void loop() {
  //  if(millis() > currenttime + delaytime){
  //        currenttime = millis();

  //here we update the entire a1-a4 frame in one multi
  // dimension array over the 4 display segments
  for (int seg = 0 ; seg < 4; seg++) {
    for (int row = 0; row < 8; row++ )
      lc.setRow(seg, row, a0[seg][row]);
  }
}
