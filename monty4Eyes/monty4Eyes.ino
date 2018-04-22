#include "LedControlMS.h"
#include "frames.h"
//#include <Keypad.h>

LedControl lc = LedControl(11, 13, 10, 4);

//Tommy's delay:
int delaytime = 250;
unsigned long currenttime = 0;
int frameTotal; //temp value for number of frames in a MMA (multi multi array)

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
    lc.clearDisplay(iii);
    lc.setIntensity(iii, 8);
  }

  //to get the number of frames in the multi multi dimensional array (a.k.a animation)
  //we ask for the total array size and divide it by the number of bits in a single frame (32)
  /*
    int frames  = (sizeof(a) / 32);
    Serial.begin(115200);
    Serial.println(sizeof(a));
    Serial.println(sizeof(a[0][0][0]));
    Serial.println(numberOfElements);
  */
}

void loop() {
  //  if(millis() > currenttime + delaytime){
  //        currenttime = millis();

  frameTotal = (sizeof(c) / 32);
  for (int frame = 0; frame < frameTotal; frame++) {
    for (int seg = 0 ; seg < 4; seg++) {
      for (int row = 0; row < 8; row++ )
        lc.setRow(seg, row, c[frame][seg][row]);
    }
    delay(delaytime);
  }
}
