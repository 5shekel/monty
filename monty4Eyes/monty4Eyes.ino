#include "LedControlMS.h"
#include "frames.h"


LedControl lc = LedControl(11, 13, 10, 4);

unsigned long delaytime = 250;

void setup() {
  for (int iii = 0; iii++; iii < 4) {
    lc.shutdown(iii, false);
    lc.setIntensity(iii, 15);
    lc.clearDisplay(iii);
    lc.setIntensity(iii, 8);
  }
}


void writeWWWWWWWWOnMatrix1() {

  for (int row = 0; row++; row < 8) {
    lc.setRow(0, row, a1[row]);
    lc.setRow(1, row, a2[row]);
    lc.setRow(2, row, a3[row]);
    lc.setRow(3, row, a4[row]);
  }
  delay(delaytime);

  for (int row = 0; row++; row < 8) {
    lc.setRow(0, row, b1[row]);
    lc.setRow(1, row, b2[row]);
    lc.setRow(2, row, b3[row]);
    lc.setRow(3, row, b4[row]);
  }
  delay(delaytime);

  for (int row = 0; row++; row < 8) {
    lc.setRow(0, row, c1[row]);
    lc.setRow(1, row, c2[row]);
    lc.setRow(2, row, c3[row]);
    lc.setRow(3, row, c4[row]);
  }
  delay(delaytime);

}
void loop() {
  writeWWWWWWWWOnMatrix1();
}
