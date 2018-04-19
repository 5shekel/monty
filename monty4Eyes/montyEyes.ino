#include "LedControlMS.h"
/*
  Now we need a LedControl to work with.
  pin 12 is connected to the DataIn
  pin 11 is connected to the CLK
  pin 10 is connected to LOAD
  We have only a single MAX7219
*/
LedControl lc1 = LedControl(13, 12, 11, 4);
/* we always wait a bit between updates of the display */
LedControl lc2 = LedControl(10, 9, 8, 4);
LedControl lc3 = LedControl(7, 6, 5, 4);
LedControl lc4 = LedControl(4, 3, 2, 4);
unsigned long delaytime = 250;
void setup() {
  /*
    The MAX72XX is in power-saving mode on startup,
    we have to do a wakeup call
  */
  lc1.shutdown(0, false);
  lc2.shutdown(0, false);
  lc3.shutdown(0, false);
  lc4.shutdown(0, false);
  /* Set the brightness to a medium values */
  lc1.setIntensity(0, 15);
  lc2.setIntensity(0, 15);
  lc3.setIntensity(0, 15);
  lc4.setIntensity(0, 15);
  /* and clear the display */
  lc1.clearDisplay(0);
  lc2.clearDisplay(0);
  lc3.clearDisplay(0);
  lc4.clearDisplay(0);
}




void loop() {
  lc1.setIntensity(0, 8);
  writeWWWWWWWWOnMatrix1();
  delay(200);
  writeWWWWWWWWOnMatrix1();
  delay(200);
  writeWWWWWWWWOnMatrix1();
  delay(200);

  /*
    lc2.setIntensity(0,8);
    writeWWWWWWWWOnMatri2x();
    delay(200);
    writeWWWWWWWWOnMatrix2();
    delay(200);
    writeWWWWWWWWOnMatrix2();
    delay(200);

    lc3.setIntensity(0,8);
    writeWWWWWWWWOnMatrix3();
    delay(200);
    writeWWWWWWWWOnMatrix3();
    delay(200);
    writeWWWWWWWWOnMatrix3();
    delay(200);

    lc4.setIntensity(0,8);
    writeWWWWWWWWOnMatrix4();
    delay(200);
    writeWWWWWWWWOnMatrix4();
    delay(200);
    writeWWWWWWWWOnMatrix4();
    delay(200);
  */

}
