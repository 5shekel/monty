
// drawn with tps://www.piskelapp.com
// converted using http://javl.github.io/image2cpp/
#define a4_size 26 //we pass this as number of frames

const uint8_t do_smutku[26][64] PROGMEM = { //frames,length
 {
           // '01, 32x16px
           0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x03, 0xc0, 0x0f, 0xf0, 0x0f, 0xf0,
           0x1f, 0xf8, 0x1f, 0xf8, 0x3f, 0xfc, 0x3f, 0xfc, 0x3e, 0x7c, 0x3e, 0x7c, 0x3c, 0x3c, 0x3c, 0x3c,
           0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c,
           0x3c, 0x3c, 0x3c, 0x3c, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          	},{
           // '02, 32x16px
           0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc0, 0x03, 0x80, 0x03, 0xf0, 0x0f, 0xc0,
           0x07, 0xf8, 0x1f, 0xe0, 0x0f, 0xfc, 0x3f, 0xf0, 0x1f, 0x7c, 0x3e, 0xf8, 0x3e, 0x3c, 0x3c, 0x7c,
           0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c,
           0x3c, 0x3c, 0x3c, 0x3c, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	         },{
           // '03, 32x16px
           0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0xf0, 0x0f, 0x00,
           0x01, 0xf8, 0x1f, 0x80, 0x03, 0xfc, 0x3f, 0xc0, 0x07, 0xfc, 0x3f, 0xe0, 0x0f, 0xbc, 0x3d, 0xf0,
           0x1f, 0x3c, 0x3c, 0xf8, 0x3e, 0x3c, 0x3c, 0x7c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c,
           0x3c, 0x38, 0x1c, 0x3c, 0x18, 0x10, 0x08, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         	},{
           // '04, 32x16px
           0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x0c, 0x00,
           0x00, 0x78, 0x1e, 0x00, 0x00, 0xfc, 0x3f, 0x00, 0x01, 0xfc, 0x3f, 0x80, 0x03, 0xfc, 0x3f, 0xc0,
           0x07, 0xfc, 0x3f, 0xe0, 0x0f, 0xbc, 0x3d, 0xf0, 0x3f, 0x38, 0x1c, 0xfc, 0x3e, 0x38, 0x1c, 0x7c,
           0x1c, 0x38, 0x1c, 0x38, 0x08, 0x10, 0x08, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
           	},{
           // '05, 32x16px
           0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
           0x00, 0x18, 0x18, 0x00, 0x00, 0x3c, 0x3c, 0x00, 0x00, 0x7c, 0x3e, 0x00, 0x00, 0xfc, 0x3f, 0x00,
           0x01, 0xfc, 0x3f, 0x80, 0x03, 0xfc, 0x3f, 0xc0, 0x27, 0xf8, 0x1f, 0xe4, 0x3f, 0xb8, 0x1d, 0xfc,
           0x1f, 0x30, 0x0c, 0xf8, 0x0e, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	         },{
           // '06, 32x16px
           0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
           0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x20, 0x00, 0x00, 0x0c, 0x30, 0x00, 0x00, 0x0c, 0x30, 0x00,
           0x00, 0x1c, 0x38, 0x00, 0x00, 0x7c, 0x3e, 0x00, 0x21, 0xf8, 0x1f, 0x84, 0x3f, 0xf8, 0x1f, 0xfc,
           0x1f, 0xf0, 0x0f, 0xf8, 0x0f, 0xe0, 0x07, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
           	},{
           // '07, 32x16px
           0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
           0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x20, 0x00, 0x00, 0x0c, 0x30, 0x00, 0x00, 0x0c, 0x30, 0x00,
           0x00, 0x1c, 0x38, 0x00, 0x00, 0x7c, 0x3e, 0x00, 0x21, 0xf8, 0x1f, 0x84, 0x3f, 0xf8, 0x1f, 0xfc,
           0x1f, 0xf0, 0x0f, 0xf8, 0x0f, 0xe0, 0x07, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	         },{
           // '08, 32x16px
           0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
           0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x20, 0x00, 0x00, 0x0c, 0x30, 0x00, 0x00, 0x0c, 0x30, 0x00,
           0x00, 0x1c, 0x38, 0x00, 0x00, 0x7c, 0x3e, 0x00, 0x21, 0xf8, 0x1f, 0x84, 0x3f, 0xf8, 0x1f, 0xfc,
           0x1f, 0xf0, 0x0f, 0xf8, 0x0f, 0xe0, 0x07, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
           	},{
           // '09, 32x16px
           0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
           0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x10, 0x00, 0x00, 0x08, 0x10, 0x00,
           0x00, 0x1c, 0x38, 0x00, 0x00, 0x7c, 0x3e, 0x00, 0x21, 0xf8, 0x1f, 0x84, 0x3f, 0xf8, 0x1f, 0xfc,
           0x1f, 0xf0, 0x0f, 0xf8, 0x0f, 0xe0, 0x07, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
           	},{
           // '10, 32x16px
           0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
           0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x20, 0x00, 0x00, 0x0c, 0x30, 0x00, 0x00, 0x0c, 0x30, 0x00,
           0x00, 0x1c, 0x38, 0x00, 0x00, 0x7c, 0x3e, 0x00, 0x21, 0xf8, 0x1f, 0x84, 0x3f, 0xf8, 0x1f, 0xfc,
           0x1f, 0xf0, 0x0f, 0xf8, 0x0f, 0xe0, 0x07, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            },{
           // '11, 32x16px
           0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
           0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x20, 0x00, 0x00, 0x0c, 0x30, 0x00, 0x00, 0x0c, 0x30, 0x00,
           0x00, 0x1c, 0x38, 0x00, 0x00, 0x7c, 0x3e, 0x00, 0x21, 0xf8, 0x1f, 0x84, 0x3f, 0xf8, 0x1f, 0xfc,
           0x1f, 0xf0, 0x0f, 0xf8, 0x0f, 0xe0, 0x07, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
           	},{
           // '12, 32x16px
           0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
           0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x20, 0x00, 0x00, 0x0c, 0x30, 0x00, 0x00, 0x0c, 0x30, 0x00,
           0x00, 0x1c, 0x38, 0x00, 0x00, 0x7c, 0x3e, 0x00, 0x21, 0xf8, 0x1f, 0x84, 0x3f, 0xf8, 0x1f, 0xfc,
           0x1f, 0xf0, 0x0f, 0xf8, 0x0f, 0xe0, 0x07, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
           	},{
           // '13, 32x16px
           0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
           0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x20, 0x00, 0x00, 0x0c, 0x30, 0x00, 0x00, 0x0c, 0x30, 0x00,
           0x00, 0x1c, 0x38, 0x00, 0x00, 0x7c, 0x3e, 0x00, 0x21, 0xf8, 0x1f, 0x84, 0x3f, 0xf8, 0x1f, 0xfc,
           0x1f, 0xf0, 0x0f, 0xf8, 0x0f, 0xe0, 0x07, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
           	},{
           // '14, 32x16px
           0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
           0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x10, 0x00, 0x00, 0x08, 0x10, 0x00,
           0x00, 0x1c, 0x38, 0x00, 0x00, 0x7c, 0x3e, 0x00, 0x21, 0xf8, 0x1f, 0x84, 0x3f, 0xf8, 0x1f, 0xfc,
           0x1f, 0xf0, 0x0f, 0xf8, 0x0f, 0xe0, 0x07, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
           	},{
           // '15, 32x16px
           0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
           0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x20, 0x00, 0x00, 0x0c, 0x30, 0x00, 0x00, 0x0c, 0x30, 0x00,
           0x00, 0x1c, 0x38, 0x00, 0x00, 0x7c, 0x3e, 0x00, 0x21, 0xf8, 0x1f, 0x84, 0x3f, 0xf8, 0x1f, 0xfc,
           0x1f, 0xf0, 0x0f, 0xf8, 0x0f, 0xe0, 0x07, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
           	},{
           // '16, 32x16px
           0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
           0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x20, 0x00, 0x00, 0x0c, 0x30, 0x00, 0x00, 0x0c, 0x30, 0x00,
           0x00, 0x1c, 0x38, 0x00, 0x00, 0x7c, 0x3e, 0x00, 0x21, 0xf8, 0x1f, 0x84, 0x3f, 0xf8, 0x1f, 0xfc,
           0x1f, 0xf0, 0x0f, 0xf8, 0x0f, 0xe0, 0x07, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
           	},{
           // '17, 32x16px
           0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
           0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x20, 0x00, 0x00, 0x0c, 0x30, 0x00, 0x00, 0x0c, 0x30, 0x00,
           0x00, 0x1c, 0x38, 0x00, 0x00, 0x7c, 0x3e, 0x00, 0x21, 0xf8, 0x1f, 0x84, 0x3f, 0xf8, 0x1f, 0xfc,
           0x1f, 0xf0, 0x0f, 0xf8, 0x0f, 0xe0, 0x07, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
           	},{
           // '18, 32x16px
           0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
           0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x20, 0x00, 0x00, 0x0c, 0x30, 0x00, 0x00, 0x0c, 0x30, 0x00,
           0x00, 0x1c, 0x38, 0x00, 0x00, 0x7c, 0x3e, 0x00, 0x21, 0xf8, 0x1f, 0x84, 0x3f, 0xf8, 0x1f, 0xfc,
           0x1f, 0xf0, 0x0f, 0xf8, 0x0f, 0xe0, 0x07, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
           },{
           // '19, 32x16px
           0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
           0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x20, 0x00, 0x00, 0x0c, 0x30, 0x00, 0x00, 0x0c, 0x30, 0x00,
           0x00, 0x1c, 0x38, 0x00, 0x00, 0x7c, 0x3e, 0x00, 0x21, 0xf8, 0x1f, 0x84, 0x3f, 0xf8, 0x1f, 0xfc,
           0x1f, 0xf0, 0x0f, 0xf8, 0x0f, 0xe0, 0x07, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
           	},{
           // '20, 32x16px
           0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
           0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x20, 0x00, 0x00, 0x0c, 0x30, 0x00, 0x00, 0x0c, 0x30, 0x00,
           0x00, 0x1c, 0x38, 0x00, 0x00, 0x7c, 0x3e, 0x00, 0x21, 0xf8, 0x1f, 0x84, 0x3f, 0xf8, 0x1f, 0xfc,
           0x1f, 0xf0, 0x0f, 0xf8, 0x0f, 0xe0, 0x07, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
           	},{
           // '21, 32x16px
           0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
           0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x20, 0x00, 0x00, 0x0c, 0x30, 0x00, 0x00, 0x0c, 0x30, 0x00,
           0x00, 0x1c, 0x38, 0x00, 0x00, 0x7c, 0x3e, 0x00, 0x21, 0xf8, 0x1f, 0x84, 0x3f, 0xf8, 0x1f, 0xfc,
           0x1f, 0xf0, 0x0f, 0xf8, 0x0f, 0xe0, 0x07, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
           	},{
                      // '22, 32x16px
                      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                      0x00, 0x18, 0x18, 0x00, 0x00, 0x3c, 0x3c, 0x00, 0x00, 0x7c, 0x3e, 0x00, 0x00, 0xfc, 0x3f, 0x00,
                      0x01, 0xfc, 0x3f, 0x80, 0x03, 0xfc, 0x3f, 0xc0, 0x27, 0xf8, 0x1f, 0xe4, 0x3f, 0xb8, 0x1d, 0xfc,
                      0x1f, 0x30, 0x0c, 0xf8, 0x0e, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                      	},{
                      // '23, 32x16px
                      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x0c, 0x00,
                      0x00, 0x78, 0x1e, 0x00, 0x00, 0xfc, 0x3f, 0x00, 0x01, 0xfc, 0x3f, 0x80, 0x03, 0xfc, 0x3f, 0xc0,
                      0x07, 0xfc, 0x3f, 0xe0, 0x0f, 0xbc, 0x3d, 0xf0, 0x3f, 0x38, 0x1c, 0xfc, 0x3e, 0x38, 0x1c, 0x7c,
                      0x1c, 0x38, 0x1c, 0x38, 0x08, 0x10, 0x08, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                      	},{
                      // '24, 32x16px
                      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0xf0, 0x0f, 0x00,
                      0x01, 0xf8, 0x1f, 0x80, 0x03, 0xfc, 0x3f, 0xc0, 0x07, 0xfc, 0x3f, 0xe0, 0x0f, 0xbc, 0x3d, 0xf0,
                      0x1f, 0x3c, 0x3c, 0xf8, 0x3e, 0x3c, 0x3c, 0x7c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c,
                      0x3c, 0x38, 0x1c, 0x3c, 0x18, 0x10, 0x08, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                      	},{
                      // '25, 32x16px
                      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc0, 0x03, 0x80, 0x03, 0xf0, 0x0f, 0xc0,
                      0x07, 0xf8, 0x1f, 0xe0, 0x0f, 0xfc, 0x3f, 0xf0, 0x1f, 0x7c, 0x3e, 0xf8, 0x3e, 0x3c, 0x3c, 0x7c,
                      0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c,
                      0x3c, 0x3c, 0x3c, 0x3c, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                       },{
                      // '26, 32x16px
                      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x03, 0xc0, 0x0f, 0xf0, 0x0f, 0xf0,
                      0x1f, 0xf8, 0x1f, 0xf8, 0x3f, 0xfc, 0x3f, 0xfc, 0x3e, 0x7c, 0x3e, 0x7c, 0x3c, 0x3c, 0x3c, 0x3c,
                      0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c,
                      0x3c, 0x3c, 0x3c, 0x3c, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

}
};