
// drawn with tps://www.piskelapp.com
// converted using http://javl.github.io/image2cpp/
#define a2_size 11 //we pass this as number of frames

const uint8_t vesele_mrk[11][64] PROGMEM = { //frames,length
 { // '01, 32x16px
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x03, 0xc0, 0x0f, 0xf0, 0x0f, 0xf0,
         0x1f, 0xf8, 0x1f, 0xf8, 0x3f, 0xfc, 0x3f, 0xfc, 0x3e, 0x7c, 0x3e, 0x7c, 0x3c, 0x3c, 0x3c, 0x3c,
         0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c,
         0x3c, 0x3c, 0x3c, 0x3c, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
       },{
         // '02, 32x16px
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x03, 0xc0, 0x0f, 0xf0, 0x0f, 0xf0,
         0x1f, 0xf8, 0x1f, 0xf8, 0x3f, 0xfc, 0x3f, 0xfc, 0x3e, 0x7c, 0x3e, 0x7c, 0x3c, 0x3c, 0x3c, 0x3c,
         0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x18, 0x3c, 0x3c, 0x18,
         0x00, 0x3c, 0x3c, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          },{
         // '03, 32x16px
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x03, 0xc0, 0x0f, 0xf0, 0x0f, 0xf0,
         0x1f, 0xf8, 0x1f, 0xf8, 0x3f, 0xfc, 0x3f, 0xfc, 0x3e, 0x7c, 0x3e, 0x7c, 0x3c, 0x3c, 0x3c, 0x3c,
         0x3c, 0x3c, 0x3c, 0x3c, 0x18, 0x3c, 0x3c, 0x18, 0x00, 0x3c, 0x3c, 0x00, 0x00, 0x3c, 0x3c, 0x00,
         0x00, 0x3c, 0x3c, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          },{
         // '04, 32x16px
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x03, 0xc0, 0x0f, 0xf0, 0x0f, 0xf0,
         0x1f, 0xf8, 0x1f, 0xf8, 0x3f, 0xfc, 0x3f, 0xfc, 0x3e, 0x7c, 0x3e, 0x7c, 0x18, 0x3c, 0x3c, 0x18,
         0x00, 0x3c, 0x3c, 0x00, 0x00, 0x3c, 0x3c, 0x00, 0x00, 0x3c, 0x3c, 0x00, 0x00, 0x3c, 0x3c, 0x00,
         0x00, 0x3c, 0x3c, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          },{
         // '05, 32x16px
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x03, 0xc0, 0x0f, 0xf0, 0x0f, 0xf0,
         0x1f, 0xf8, 0x1f, 0xf8, 0x1f, 0xfc, 0x3f, 0xf8, 0x18, 0x7c, 0x3e, 0x18, 0x00, 0x3c, 0x3c, 0x00,
         0x00, 0x3c, 0x3c, 0x00, 0x00, 0x3c, 0x3c, 0x00, 0x00, 0x3c, 0x3c, 0x00, 0x00, 0x3c, 0x3c, 0x00,
         0x00, 0x3c, 0x3c, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          },{
         // '06, 32x16px
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x03, 0xc0, 0x0f, 0xf0, 0x0f, 0xf0,
         0x1f, 0xf8, 0x1f, 0xf8, 0x3f, 0xfc, 0x3f, 0xfc, 0x3e, 0x7c, 0x3e, 0x7c, 0x18, 0x3c, 0x3c, 0x18,
         0x00, 0x3c, 0x3c, 0x00, 0x00, 0x3c, 0x3c, 0x00, 0x00, 0x3c, 0x3c, 0x00, 0x00, 0x3c, 0x3c, 0x00,
         0x00, 0x3c, 0x3c, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          },{
         // '07, 32x16px
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x03, 0xc0, 0x0f, 0xf0, 0x0f, 0xf0,
         0x1f, 0xf8, 0x1f, 0xf8, 0x1f, 0xfc, 0x3f, 0xf8, 0x18, 0x7c, 0x3e, 0x18, 0x00, 0x3c, 0x3c, 0x00,
         0x00, 0x3c, 0x3c, 0x00, 0x00, 0x3c, 0x3c, 0x00, 0x00, 0x3c, 0x3c, 0x00, 0x00, 0x3c, 0x3c, 0x00,
         0x00, 0x3c, 0x3c, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          },{
         // '08, 32x16px
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x03, 0xc0, 0x0f, 0xf0, 0x0f, 0xf0,
         0x1f, 0xf8, 0x1f, 0xf8, 0x3f, 0xfc, 0x3f, 0xfc, 0x3e, 0x7c, 0x3e, 0x7c, 0x18, 0x3c, 0x3c, 0x18,
         0x00, 0x3c, 0x3c, 0x00, 0x00, 0x3c, 0x3c, 0x00, 0x00, 0x3c, 0x3c, 0x00, 0x00, 0x3c, 0x3c, 0x00,
         0x00, 0x3c, 0x3c, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          },{
         // '09, 32x16px
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x03, 0xc0, 0x0f, 0xf0, 0x0f, 0xf0,
         0x1f, 0xf8, 0x1f, 0xf8, 0x3f, 0xfc, 0x3f, 0xfc, 0x3e, 0x7c, 0x3e, 0x7c, 0x3c, 0x3c, 0x3c, 0x3c,
         0x3c, 0x3c, 0x3c, 0x3c, 0x18, 0x3c, 0x3c, 0x18, 0x00, 0x3c, 0x3c, 0x00, 0x00, 0x3c, 0x3c, 0x00,
         0x00, 0x3c, 0x3c, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          },{
         // '10, 32x16px
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x03, 0xc0, 0x0f, 0xf0, 0x0f, 0xf0,
         0x1f, 0xf8, 0x1f, 0xf8, 0x3f, 0xfc, 0x3f, 0xfc, 0x3e, 0x7c, 0x3e, 0x7c, 0x3c, 0x3c, 0x3c, 0x3c,
         0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x18, 0x3c, 0x3c, 0x18,
         0x00, 0x3c, 0x3c, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          },{
         // '11, 32x16px
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x03, 0xc0, 0x0f, 0xf0, 0x0f, 0xf0,
         0x1f, 0xf8, 0x1f, 0xf8, 0x3f, 0xfc, 0x3f, 0xfc, 0x3e, 0x7c, 0x3e, 0x7c, 0x3c, 0x3c, 0x3c, 0x3c,
         0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c,
         0x3c, 0x3c, 0x3c, 0x3c, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         }
};
