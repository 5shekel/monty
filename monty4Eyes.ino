#include "LedControlMS.h"
/*
Now we need a LedControl to work with.
pin 12 is connected to the DataIn
pin 11 is connected to the CLK
pin 10 is connected to LOAD
We have only a single MAX7219
*/
LedControl lc1=LedControl(13,12,11,4);
/* we always wait a bit between updates of the display */
LedControl lc2=LedControl(10,9,8,4);
LedControl lc3=LedControl(7,6,5,4);
LedControl lc4=LedControl(4,3,2,4);
unsigned long delaytime=250;
void setup() {
/*
The MAX72XX is in power-saving mode on startup,
we have to do a wakeup call
*/
lc1.shutdown(0,false);
lc2.shutdown(0,false);
lc3.shutdown(0,false);
lc4.shutdown(0,false);
/* Set the brightness to a medium values */
lc1.setIntensity(0,15);
lc2.setIntensity(0,15);
lc3.setIntensity(0,15);
lc4.setIntensity(0,15);
/* and clear the display */
lc1.clearDisplay(0);
lc2.clearDisplay(0);
lc3.clearDisplay(0);
lc4.clearDisplay(0);
}

void writeWWWWWWWWOnMatrix1() {
/* here is the data for the characters */
byte a1[8]={
B00000000,
  B00000000,
  B00000011,
  B00001111,
  B00011111,
  B00111111,
  B00111110,
  B00111100 };
byte b1[8]={
B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00011111,
  B00111111,
  B00111110,
  B00111100 };
byte c1[8]={
 B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00111110,
  B00111100 };
byte d1[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000 };
byte e1[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000 };
byte f1[8]={
 B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000 };
byte g1[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000 };
byte h1[8]={
B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000 }; 
byte i1[8]={
B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000 }; 
byte j1[8]={
 B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000}; 
byte k1[8]={
 B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00111110,
  B00111100 }; 
byte l1[8]={
B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00011111,
  B00111111,
  B00111110,
  B00111100 }; 
byte m1[8]={
B00000000,
  B00000000,
  B00000011,
  B00001111,
  B00011111,
  B00111111,
  B00111110,
  B00111100 }; 

// ----------------------------------second

//writeWWWWWWWWOnMatrix1() {
/* here is the data for the characters */
byte a2[8]={
 B00000000,
  B00000000,
  B11000000,
  B11110000,
  B11111000,
  B11111100,
  B01111100,
  B00111100 };
byte b2[8]={
 B00000000,
  B00000000,
  B00000000,
  B00000000,
  B11111000,
  B11111100,
  B01111100,
  B00111100 };
byte c2[8]={
B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B01111100,
  B00111100 };
byte d2[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000 };
byte e2[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000 };
byte f2[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000 };
byte g2[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000 };
byte h2[8]={
B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000 }; 
byte i2[8]={
B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000 }; 
byte j2[8]={
B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000}; 
byte k2[8]={
B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B01111100,
  B00111100 }; 
byte l2[8]={
B00000000,
  B00000000,
  B00000000,
  B00000000,
  B11111000,
  B11111100,
  B01111100,
  B00111100 }; 
byte m2[8]={
B00000000,
  B00000000,
  B11000000,
  B11110000,
  B11111000,
  B11111100,
  B01111100,
  B00111100 }; 


// ----------------------------------third



//writeWWWWWWWWOnMatrix1() {
/* here is the data for the characters */
byte a3[8]={
B00000000,
  B00000000,
  B00000011,
  B00001111,
  B00011111,
  B00111111,
  B00111110,
  B00111100 };
byte b3[8]={
 B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000 };
byte c3[8]={
B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000 };
byte d3[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000 };
byte e3[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00111111,
  B00111111 };
byte f3[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00011111,
  B00111111,
  B00111110,
  B00111100 };
byte g3[8]={
  B00000000,
  B00000000,
  B00000011,
  B00001111,
  B00011111,
  B00111111,
  B00111110,
  B00111100 };
byte h3[8]={
B00101111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001111 }; 
byte i3[8]={
B00101111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001111 }; 
byte j3[8]={
B00101111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001111 }; 
byte k3[8]={
B00101111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001111 }; 
byte l3[8]={
B00101111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001111 }; 
byte m3[8]={
B00101111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001111 }; 



// -------------------------------fourth


//writeWWWWWWWWOnMatrix1() {
/* here is the data for the characters */
byte a4[8]={
B00000000,
  B00000000,
  B00000011,
  B00001111,
  B00011111,
  B00111111,
  B00111110,
  B00111100 };
byte b4[8]={
 B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000 };
byte c4[8]={
B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000 };
byte d4[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000 };
byte e4[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00111111,
  B00111111 };
byte f4[8]={
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00011111,
  B00111111,
  B00111110,
  B00111100 };
byte g4[8]={
  B00000000,
  B00000000,
  B00000011,
  B00001111,
  B00011111,
  B00111111,
  B00111110,
  B00111100 };
byte h4[8]={
B00101111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001111 }; 
byte i4[8]={
B00101111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001111 }; 
byte j4[8]={
B00101111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001111 }; 
byte k4[8]={
B00101111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001111 }; 
byte l4[8]={
B00101111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001111 }; 
byte m4[8]={
B00101111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001111 }; 





/* now display them one by one with a small delay */
lc1.setRow(0,0,a1[0]);
lc2.setRow(0,0,a2[0]);
lc3.setRow(0,0,a3[0]);
lc4.setRow(0,0,a4[0]);

lc1.setRow(0,1,a1[1]);
lc2.setRow(0,1,a2[1]);
lc3.setRow(0,1,a3[1]);
lc4.setRow(0,1,a4[1]);

lc1.setRow(0,2,a1[2]);
lc2.setRow(0,2,a2[2]);
lc3.setRow(0,2,a3[2]);
lc4.setRow(0,2,a4[2]);

lc1.setRow(0,3,a1[3]);
lc2.setRow(0,3,a2[3]);
lc3.setRow(0,3,a3[3]);
lc4.setRow(0,3,a4[3]);

lc1.setRow(0,4,a1[4]);
lc2.setRow(0,4,a2[4]);
lc3.setRow(0,4,a3[4]);
lc4.setRow(0,4,a4[4]);

lc1.setRow(0,5,a1[6]);
lc2.setRow(0,5,a2[6]);
lc3.setRow(0,5,a3[6]);
lc4.setRow(0,5,a4[6]);

lc1.setRow(0,6,a1[7]);
lc2.setRow(0,6,a2[7]);
lc3.setRow(0,6,a3[7]);
lc4.setRow(0,6,a4[7]);

lc1.setRow(0,7,a1[8]);
lc2.setRow(0,7,a2[8]);
lc3.setRow(0,7,a3[8]);
lc4.setRow(0,7,a4[8]);

delay(delaytime);
lc1.setRow(0,0,b1[0]);
lc1.setRow(0,1,b1[1]);
lc1.setRow(0,2,b1[2]);
lc1.setRow(0,3,b1[3]);
lc1.setRow(0,4,b1[4]);
lc1.setRow(0,5,b1[5]);
lc1.setRow(0,6,b1[6]);
lc1.setRow(0,7,b1[7]);
delay(delaytime);
lc1.setRow(0,0,c1[0]);
lc1.setRow(0,1,c1[1]);
lc1.setRow(0,2,c1[2]);
lc1.setRow(0,3,c1[3]);
lc1.setRow(0,4,c1[4]);
lc1.setRow(0,5,c1[5]);
lc1.setRow(0,6,c1[6]);
lc1.setRow(0,7,c1[7]);
delay(delaytime);
lc1.setRow(0,0,d1[0]);
lc1.setRow(0,1,d1[1]);
lc1.setRow(0,2,d1[2]);
lc1.setRow(0,3,d1[3]);
lc1.setRow(0,4,d1[4]);
lc1.setRow(0,5,d1[5]);
lc1.setRow(0,6,d1[6]);
lc1.setRow(0,7,d1[7]);
delay(delaytime);
lc1.setRow(0,0,e1[0]);
lc1.setRow(0,1,e1[1]);
lc1.setRow(0,2,e1[2]);
lc1.setRow(0,3,e1[3]);
lc1.setRow(0,4,e1[4]);
lc1.setRow(0,5,e1[5]);
lc1.setRow(0,6,e1[6]);
lc1.setRow(0,7,e1[7]);
delay(delaytime);
lc1.setRow(0,0,f1[0]);
lc1.setRow(0,1,f1[1]);
lc1.setRow(0,2,f1[2]);
lc1.setRow(0,3,f1[3]);
lc1.setRow(0,4,f1[4]);
lc1.setRow(0,5,f1[5]);
lc1.setRow(0,6,f1[6]);
lc1.setRow(0,7,f1[7]);
delay(delaytime);
lc1.setRow(0,0,g1[0]);
lc1.setRow(0,1,g1[1]);
lc1.setRow(0,2,g1[2]);
lc1.setRow(0,3,g1[3]);
lc1.setRow(0,4,g1[4]);
lc1.setRow(0,5,g1[5]);
lc1.setRow(0,6,g1[6]);
lc1.setRow(0,7,g1[7]);
delay(delaytime);
lc1.setRow(0,0,h1[0]);
lc1.setRow(0,1,h1[1]);
lc1.setRow(0,2,h1[2]);
lc1.setRow(0,3,h1[3]);
lc1.setRow(0,4,h1[4]);
lc1.setRow(0,5,h1[5]);
lc1.setRow(0,6,h1[6]);
lc1.setRow(0,7,h1[7]);
delay(delaytime);
lc1.setRow(0,0,i1[0]);
lc1.setRow(0,1,i1[1]);
lc1.setRow(0,2,i1[2]);
lc1.setRow(0,3,i1[3]);
lc1.setRow(0,4,i1[4]);
lc1.setRow(0,5,i1[5]);
lc1.setRow(0,6,i1[6]);
lc1.setRow(0,7,i1[7]);
delay(delaytime);
lc1.setRow(0,0,j1[0]);
lc1.setRow(0,1,j1[1]);
lc1.setRow(0,2,j1[2]);
lc1.setRow(0,3,j1[3]);
lc1.setRow(0,4,j1[4]);
lc1.setRow(0,5,j1[5]);
lc1.setRow(0,6,j1[6]);
lc1.setRow(0,7,j1[7]);
delay(delaytime);
lc1.setRow(0,0,k1[0]);
lc1.setRow(0,1,k1[1]);
lc1.setRow(0,2,k1[2]);
lc1.setRow(0,3,k1[3]);
lc1.setRow(0,4,k1[4]);
lc1.setRow(0,5,k1[5]);
lc1.setRow(0,6,k1[6]);
lc1.setRow(0,7,k1[7]);
delay(delaytime);
lc1.setRow(0,0,l1[0]);
lc1.setRow(0,1,l1[1]);
lc1.setRow(0,2,l1[2]);
lc1.setRow(0,3,l1[3]);
lc1.setRow(0,4,l1[4]);
lc1.setRow(0,5,l1[5]);
lc1.setRow(0,6,l1[6]);
lc1.setRow(0,7,l1[7]);
delay(delaytime);
lc1.setRow(0,0,m1[0]);
lc1.setRow(0,1,m1[1]);
lc1.setRow(0,2,m1[2]);
lc1.setRow(0,3,m1[3]);
lc1.setRow(0,4,m1[4]);
lc1.setRow(0,5,m1[5]);
lc1.setRow(0,6,m1[6]);
lc1.setRow(0,7,m1[7]);
delay(delaytime);
/*
lc.setRow(0,0,0);
lc.setRow(0,1,0);
lc.setRow(0,2,0);
lc.setRow(0,3,0);
lc.setRow(0,4,0);
lc.setRow(0,5,0);
lc.setRow(0,6,0);
lc.setRow(0,7,0);
delay(delaytime);
*/

/* now display them one by one with a small delay */



//------------------second


lc2.setRow(0,2,a2[2]);
lc2.setRow(0,3,a2[3]);
lc2.setRow(0,4,a2[4]);
lc2.setRow(0,5,a2[6]);
lc2.setRow(0,6,a2[7]);
lc2.setRow(0,7,a2[8]);
delay(delaytime);
lc2.setRow(0,0,b2[0]);
lc2.setRow(0,1,b2[1]);
lc2.setRow(0,2,b2[2]);
lc2.setRow(0,3,b2[3]);
lc2.setRow(0,4,b2[4]);
lc2.setRow(0,5,b2[5]);
lc2.setRow(0,6,b2[6]);
lc2.setRow(0,7,b2[7]);
delay(delaytime);
lc2.setRow(0,0,c2[0]);
lc2.setRow(0,1,c2[1]);
lc2.setRow(0,2,c2[2]);
lc2.setRow(0,3,c2[3]);
lc2.setRow(0,4,c2[4]);
lc2.setRow(0,5,c2[5]);
lc2.setRow(0,6,c2[6]);
lc2.setRow(0,7,c2[7]);
delay(delaytime);
lc2.setRow(0,0,d2[0]);
lc2.setRow(0,1,d2[1]);
lc2.setRow(0,2,d2[2]);
lc2.setRow(0,3,d2[3]);
lc2.setRow(0,4,d2[4]);
lc2.setRow(0,5,d2[5]);
lc2.setRow(0,6,d2[6]);
lc2.setRow(0,7,d2[7]);
delay(delaytime);
lc2.setRow(0,0,e2[0]);
lc2.setRow(0,1,e2[1]);
lc2.setRow(0,2,e2[2]);
lc2.setRow(0,3,e2[3]);
lc2.setRow(0,4,e2[4]);
lc2.setRow(0,5,e2[5]);
lc2.setRow(0,6,e2[6]);
lc2.setRow(0,7,e2[7]);
delay(delaytime);
lc2.setRow(0,0,f2[0]);
lc2.setRow(0,1,f2[1]);
lc2.setRow(0,2,f2[2]);
lc2.setRow(0,3,f2[3]);
lc2.setRow(0,4,f2[4]);
lc2.setRow(0,5,f2[5]);
lc2.setRow(0,6,f2[6]);
lc2.setRow(0,7,f2[7]);
delay(delaytime);
lc2.setRow(0,0,g2[0]);
lc2.setRow(0,1,g2[1]);
lc2.setRow(0,2,g2[2]);
lc2.setRow(0,3,g2[3]);
lc2.setRow(0,4,g2[4]);
lc2.setRow(0,5,g2[5]);
lc2.setRow(0,6,g2[6]);
lc2.setRow(0,7,g2[7]);
delay(delaytime);
lc2.setRow(0,0,h2[0]);
lc2.setRow(0,1,h2[1]);
lc2.setRow(0,2,h2[2]);
lc2.setRow(0,3,h2[3]);
lc2.setRow(0,4,h2[4]);
lc2.setRow(0,5,h2[5]);
lc2.setRow(0,6,h2[6]);
lc2.setRow(0,7,h2[7]);
delay(delaytime);
lc2.setRow(0,0,i2[0]);
lc2.setRow(0,1,i2[1]);
lc2.setRow(0,2,i2[2]);
lc2.setRow(0,3,i2[3]);
lc2.setRow(0,4,i2[4]);
lc2.setRow(0,5,i2[5]);
lc2.setRow(0,6,i2[6]);
lc2.setRow(0,7,i2[7]);
delay(delaytime);
lc2.setRow(0,0,j2[0]);
lc2.setRow(0,1,j2[1]);
lc2.setRow(0,2,j2[2]);
lc2.setRow(0,3,j2[3]);
lc2.setRow(0,4,j2[4]);
lc2.setRow(0,5,j2[5]);
lc2.setRow(0,6,j2[6]);
lc2.setRow(0,7,j2[7]);
delay(delaytime);
lc2.setRow(0,0,k2[0]);
lc2.setRow(0,1,k2[1]);
lc2.setRow(0,2,k2[2]);
lc2.setRow(0,3,k2[3]);
lc2.setRow(0,4,k2[4]);
lc2.setRow(0,5,k2[5]);
lc2.setRow(0,6,k2[6]);
lc2.setRow(0,7,k2[7]);
delay(delaytime);
lc2.setRow(0,0,l2[0]);
lc2.setRow(0,1,l2[1]);
lc2.setRow(0,2,l2[2]);
lc2.setRow(0,3,l2[3]);
lc2.setRow(0,4,l2[4]);
lc2.setRow(0,5,l2[5]);
lc2.setRow(0,6,l2[6]);
lc2.setRow(0,7,l2[7]);
delay(delaytime);
lc2.setRow(0,0,m2[0]);
lc2.setRow(0,1,m2[1]);
lc2.setRow(0,2,m2[2]);
lc2.setRow(0,3,m2[3]);
lc2.setRow(0,4,m2[4]);
lc2.setRow(0,5,m2[5]);
lc2.setRow(0,6,m2[6]);
lc2.setRow(0,7,m2[7]);
delay(delaytime);
/*
lc.setRow(0,0,0);
lc.setRow(0,1,0);
lc.setRow(0,2,0);
lc.setRow(0,3,0);
lc.setRow(0,4,0);
lc.setRow(0,5,0);
lc.setRow(0,6,0);
lc.setRow(0,7,0);
delay(delaytime);
*/
/* now display them one by one with a small delay */


//------------------third

lc3.setRow(0,1,a3[1]);
lc3.setRow(0,2,a3[2]);
lc3.setRow(0,3,a3[3]);
lc3.setRow(0,4,a3[4]);
lc3.setRow(0,5,a3[6]);
lc3.setRow(0,6,a3[7]);
lc3.setRow(0,7,a3[8]);
delay(delaytime);
lc3.setRow(0,0,b3[0]);
lc3.setRow(0,1,b3[1]);
lc3.setRow(0,2,b3[2]);
lc3.setRow(0,3,b3[3]);
lc3.setRow(0,4,b3[4]);
lc3.setRow(0,5,b3[5]);
lc3.setRow(0,6,b3[6]);
lc3.setRow(0,7,b3[7]);
delay(delaytime);
lc3.setRow(0,0,c3[0]);
lc3.setRow(0,1,c3[1]);
lc3.setRow(0,2,c3[2]);
lc3.setRow(0,3,c3[3]);
lc3.setRow(0,4,c3[4]);
lc3.setRow(0,5,c3[5]);
lc3.setRow(0,6,c3[6]);
lc3.setRow(0,7,c3[7]);
delay(delaytime);
lc3.setRow(0,0,d3[0]);
lc3.setRow(0,1,d3[1]);
lc3.setRow(0,2,d3[2]);
lc3.setRow(0,3,d3[3]);
lc3.setRow(0,4,d3[4]);
lc3.setRow(0,5,d3[5]);
lc3.setRow(0,6,d3[6]);
lc3.setRow(0,7,d3[7]);
delay(delaytime);
lc3.setRow(0,0,e3[0]);
lc3.setRow(0,1,e3[1]);
lc3.setRow(0,2,e3[2]);
lc3.setRow(0,3,e3[3]);
lc3.setRow(0,4,e3[4]);
lc3.setRow(0,5,e3[5]);
lc3.setRow(0,6,e3[6]);
lc3.setRow(0,7,e3[7]);
delay(delaytime);
lc3.setRow(0,0,f3[0]);
lc3.setRow(0,1,f3[1]);
lc3.setRow(0,2,f3[2]);
lc3.setRow(0,3,f3[3]);
lc3.setRow(0,4,f3[4]);
lc3.setRow(0,5,f3[5]);
lc3.setRow(0,6,f3[6]);
lc3.setRow(0,7,f3[7]);
delay(delaytime);
lc3.setRow(0,0,g3[0]);
lc3.setRow(0,1,g3[1]);
lc3.setRow(0,2,g3[2]);
lc3.setRow(0,3,g3[3]);
lc3.setRow(0,4,g3[4]);
lc3.setRow(0,5,g3[5]);
lc3.setRow(0,6,g3[6]);
lc3.setRow(0,7,g3[7]);
delay(delaytime);
lc3.setRow(0,0,h3[0]);
lc3.setRow(0,1,h3[1]);
lc3.setRow(0,2,h3[2]);
lc3.setRow(0,3,h3[3]);
lc3.setRow(0,4,h3[4]);
lc3.setRow(0,5,h3[5]);
lc3.setRow(0,6,h3[6]);
lc3.setRow(0,7,h3[7]);
delay(delaytime);
lc3.setRow(0,0,i3[0]);
lc3.setRow(0,1,i3[1]);
lc3.setRow(0,2,i3[2]);
lc3.setRow(0,3,i3[3]);
lc3.setRow(0,4,i3[4]);
lc3.setRow(0,5,i3[5]);
lc3.setRow(0,6,i3[6]);
lc3.setRow(0,7,i3[7]);
delay(delaytime);
lc3.setRow(0,0,j3[0]);
lc3.setRow(0,1,j3[1]);
lc3.setRow(0,2,j3[2]);
lc3.setRow(0,3,j3[3]);
lc3.setRow(0,4,j3[4]);
lc3.setRow(0,5,j3[5]);
lc3.setRow(0,6,j3[6]);
lc3.setRow(0,7,j3[7]);
delay(delaytime);
lc3.setRow(0,0,k3[0]);
lc3.setRow(0,1,k3[1]);
lc3.setRow(0,2,k3[2]);
lc3.setRow(0,3,k3[3]);
lc3.setRow(0,4,k3[4]);
lc3.setRow(0,5,k3[5]);
lc3.setRow(0,6,k3[6]);
lc3.setRow(0,7,k3[7]);
delay(delaytime);
lc3.setRow(0,0,l3[0]);
lc3.setRow(0,1,l3[1]);
lc3.setRow(0,2,l3[2]);
lc3.setRow(0,3,l3[3]);
lc3.setRow(0,4,l3[4]);
lc3.setRow(0,5,l3[5]);
lc3.setRow(0,6,l3[6]);
lc3.setRow(0,7,l3[7]);
delay(delaytime);
lc3.setRow(0,0,m3[0]);
lc3.setRow(0,1,m3[1]);
lc3.setRow(0,2,m3[2]);
lc3.setRow(0,3,m3[3]);
lc3.setRow(0,4,m3[4]);
lc3.setRow(0,5,m3[5]);
lc3.setRow(0,6,m3[6]);
lc3.setRow(0,7,m3[7]);
delay(delaytime);
/*
lc.setRow(0,0,0);
lc.setRow(0,1,0);
lc.setRow(0,2,0);
lc.setRow(0,3,0);
lc.setRow(0,4,0);
lc.setRow(0,5,0);
lc.setRow(0,6,0);
lc.setRow(0,7,0);
delay(delaytime);
*/

//------------------fourth

lc4.setRow(0,1,a4[1]);
lc4.setRow(0,2,a4[2]);
lc4.setRow(0,3,a4[3]);
lc4.setRow(0,4,a4[4]);
lc4.setRow(0,5,a4[6]);
lc4.setRow(0,6,a4[7]);
lc4.setRow(0,7,a4[8]);
delay(delaytime);
lc4.setRow(0,0,b4[0]);
lc4.setRow(0,1,b4[1]);
lc4.setRow(0,2,b4[2]);
lc4.setRow(0,3,b4[3]);
lc4.setRow(0,4,b4[4]);
lc4.setRow(0,5,b4[5]);
lc4.setRow(0,6,b4[6]);
lc4.setRow(0,7,b4[7]);
delay(delaytime);
lc4.setRow(0,0,c4[0]);
lc4.setRow(0,1,c4[1]);
lc4.setRow(0,2,c4[2]);
lc4.setRow(0,3,c4[3]);
lc4.setRow(0,4,c4[4]);
lc4.setRow(0,5,c4[5]);
lc4.setRow(0,6,c4[6]);
lc4.setRow(0,7,c4[7]);
delay(delaytime);
lc4.setRow(0,0,d4[0]);
lc4.setRow(0,1,d4[1]);
lc4.setRow(0,2,d4[2]);
lc4.setRow(0,3,d4[3]);
lc4.setRow(0,4,d4[4]);
lc4.setRow(0,5,d4[5]);
lc4.setRow(0,6,d4[6]);
lc4.setRow(0,7,d4[7]);
delay(delaytime);
lc4.setRow(0,0,e4[0]);
lc4.setRow(0,1,e4[1]);
lc4.setRow(0,2,e4[2]);
lc4.setRow(0,3,e4[3]);
lc4.setRow(0,4,e4[4]);
lc4.setRow(0,5,e4[5]);
lc4.setRow(0,6,e4[6]);
lc4.setRow(0,7,e4[7]);
delay(delaytime);
lc4.setRow(0,0,f4[0]);
lc4.setRow(0,1,f4[1]);
lc4.setRow(0,2,f4[2]);
lc4.setRow(0,3,f4[3]);
lc4.setRow(0,4,f4[4]);
lc4.setRow(0,5,f4[5]);
lc4.setRow(0,6,f4[6]);
lc4.setRow(0,7,f4[7]);
delay(delaytime);
lc4.setRow(0,0,g4[0]);
lc4.setRow(0,1,g4[1]);
lc4.setRow(0,2,g4[2]);
lc4.setRow(0,3,g4[3]);
lc4.setRow(0,4,g4[4]);
lc4.setRow(0,5,g4[5]);
lc4.setRow(0,6,g4[6]);
lc4.setRow(0,7,g4[7]);
delay(delaytime);
lc4.setRow(0,0,h4[0]);
lc4.setRow(0,1,h4[1]);
lc4.setRow(0,2,h4[2]);
lc4.setRow(0,3,h4[3]);
lc4.setRow(0,4,h4[4]);
lc4.setRow(0,5,h4[5]);
lc4.setRow(0,6,h4[6]);
lc4.setRow(0,7,h4[7]);
delay(delaytime);
lc4.setRow(0,0,i4[0]);
lc4.setRow(0,1,i4[1]);
lc4.setRow(0,2,i4[2]);
lc4.setRow(0,3,i4[3]);
lc4.setRow(0,4,i4[4]);
lc4.setRow(0,5,i4[5]);
lc4.setRow(0,6,i4[6]);
lc4.setRow(0,7,i4[7]);
delay(delaytime);
lc4.setRow(0,0,j4[0]);
lc4.setRow(0,1,j4[1]);
lc4.setRow(0,2,j4[2]);
lc4.setRow(0,3,j4[3]);
lc4.setRow(0,4,j4[4]);
lc4.setRow(0,5,j4[5]);
lc4.setRow(0,6,j4[6]);
lc4.setRow(0,7,j4[7]);
delay(delaytime);
lc4.setRow(0,0,k4[0]);
lc4.setRow(0,1,k4[1]);
lc4.setRow(0,2,k4[2]);
lc4.setRow(0,3,k4[3]);
lc4.setRow(0,4,k4[4]);
lc4.setRow(0,5,k4[5]);
lc4.setRow(0,6,k4[6]);
lc4.setRow(0,7,k4[7]);
delay(delaytime);
lc4.setRow(0,0,l4[0]);
lc4.setRow(0,1,l4[1]);
lc4.setRow(0,2,l4[2]);
lc4.setRow(0,3,l4[3]);
lc4.setRow(0,4,l4[4]);
lc4.setRow(0,5,l4[5]);
lc4.setRow(0,6,l4[6]);
lc4.setRow(0,7,l4[7]);
delay(delaytime);
lc4.setRow(0,0,m4[0]);
lc4.setRow(0,1,m4[1]);
lc4.setRow(0,2,m4[2]);
lc4.setRow(0,3,m4[3]);
lc4.setRow(0,4,m4[4]);
lc4.setRow(0,5,m4[5]);
lc4.setRow(0,6,m4[6]);
lc4.setRow(0,7,m4[7]);
delay(delaytime);
/*
lc.setRow(0,0,0);
lc.setRow(0,1,0);
lc.setRow(0,2,0);
lc.setRow(0,3,0);
lc.setRow(0,4,0);
lc.setRow(0,5,0);
lc.setRow(0,6,0);
lc.setRow(0,7,0);
delay(delaytime);
*/

}


void loop() {
lc1.setIntensity(0,8);
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
