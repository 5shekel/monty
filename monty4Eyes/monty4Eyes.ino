#include "LedControlMS.h"
#include "frame.h"

LedControl lc = LedControl(11, 13, 10, 4);

//Tommy's delay:
int delaytime = 50;
unsigned long currenttime = 0;

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

void animation(byte *arr, int total_frames) {
  for (int n_frame = 0; n_frame < total_frames; n_frame++) {
    for (int seg = 0 ; seg < 4; seg++) {
      for (int row = 0; row < 8; row++) {
        byte getRow = arr[calc_index(row, seg, n_frame)];
        lc.setRow(seg, row, getRow);
      }
    }
    delay(50);
  }
}

size_t calc_index(int row, int seg, int frame) {
  return row + (seg * 8) + (32 * frame);
}

void setup() {
  Serial.begin(115200);
  Serial.println("start..");

  for (int iii = 0; iii < 4; iii++) {
    lc.shutdown(iii, false);
    lc.clearDisplay(iii);
    lc.setIntensity(iii, 6);
  }
}



void loop() {

  animation(c, 7);
  delay(1000);

  animation(d, d_size);
  delay(1000);

  animation(k, k_size);
  delay(1000);
  }
