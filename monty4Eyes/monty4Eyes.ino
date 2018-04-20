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

void loop() {
  //here we update the entire a1-a4 frame in one multi dimension array over the 4 display segments
  for (int seg = 0 ; seg++; seg < 4) {
    for (int row = 0; row++; row < 8)
      lc.setRow(seg, row, a[row]);
    delay(delaytime);
  }
}
