
/*******************************************************************************
* image
* filename: unsaved
* name: cockpit2
*
* preset name: Color R8G8B8
* data block size: 24 bit(s), uint24_t
* RLE compression enabled: no
* conversion type: Color, not_used not_used
* bits per pixel: 24
*
* preprocess:
*  main scan direction: top_to_bottom
*  line scan direction: forward
*  inverse: no
*******************************************************************************/

/*
 typedef struct {
     const uint24_t *data;
     uint16_t width;
     uint16_t height;
     uint8_t dataSize;
     } tImage;
*/
#include <stdint.h>



static const uint24_t image_data_cockpit2[2048] = {
    0x0a0a0a, 0x070707, 0x000000, 0x000000, 0x020202, 0x010101, 0x030303, 0x000000, 0x000000, 0x010101, 0x010101, 0x020202, 0x000000, 0x030303, 0x7e7e7e, 0x7c7c7c, 0x7f7f7f, 0x7f7f7f, 0x000000, 0x000000, 0x040404, 0x000000, 0x050505, 0x030303, 0x000000, 0x020202, 0x010101, 0x010101, 0x010101, 0x020202, 0x000000, 0x030303, 0x020202, 0x020202, 0x000000, 0x010101, 0x060606, 0x000000, 0x070707, 0x020202, 0x020202, 0x050505, 0x000000, 0x040404, 0x000000, 0x000000, 0x7f7f7f, 0x7f7f7f, 0x7d7d7d, 0x7e7e7e, 0x000000, 0x040404, 0x000000, 0x020202, 0x060606, 0x010101, 0x000000, 0x030303, 0x000000, 0x010101, 0x030303, 0x000000, 0x080808, 0x0a0a0a, 
    0x030303, 0x000000, 0x040404, 0x030303, 0x000000, 0x000000, 0x010101, 0x000000, 0x030303, 0x010101, 0x000000, 0x090909, 0x000000, 0x000000, 0x404040, 0x818181, 0x7f7f7f, 0x808080, 0x2f2f2f, 0x040404, 0x020202, 0x030303, 0x000000, 0x000000, 0x020202, 0x010101, 0xffffff, 0x000000, 0x000000, 0x050505, 0x040404, 0x000000, 0x040404, 0x000000, 0x030303, 0x030303, 0x000000, 0x020202, 0x050505, 0x000000, 0x000000, 0x000000, 0x030303, 0x020202, 0x050505, 0x2f2f2f, 0x7f7f7f, 0x7e7e7e, 0x828282, 0x3a3a3a, 0x030303, 0x000000, 0x010101, 0x000000, 0x000000, 0x010101, 0x040404, 0x010101, 0x020202, 0x010101, 0x010101, 0x020202, 0x000000, 0x040404, 
    0x000000, 0x000000, 0x000000, 0x020202, 0x000000, 0x040404, 0x000000, 0x020202, 0x020202, 0x0a0a0a, 0x000000, 0x000000, 0x0b0b0b, 0x020202, 0x000000, 0x787878, 0x818181, 0x808080, 0x787878, 0x2e2e2e, 0x050505, 0x000000, 0x040404, 0x030303, 0x000000, 0x030303, 0x000000, 0x020202, 0x040404, 0x000000, 0x020202, 0x000000, 0x030303, 0x050505, 0x000000, 0x030303, 0x050505, 0x020202, 0x050505, 0xfcfcfc, 0x030303, 0x030303, 0x000000, 0x040404, 0x2e2e2e, 0x797979, 0x808080, 0x808080, 0x767676, 0x020202, 0x000000, 0x000000, 0x050505, 0x030303, 0x000000, 0x010101, 0x000000, 0x030303, 0x020202, 0xfcfcfc, 0x000000, 0x010101, 0x020202, 0x010101, 
    0x020202, 0x030303, 0x040404, 0x000000, 0x020202, 0x030303, 0x000000, 0x020202, 0x000000, 0x020202, 0x000000, 0x000000, 0x010101, 0x070707, 0x010101, 0x404040, 0x7f7f7f, 0x7f7f7f, 0x828282, 0x777777, 0x000000, 0x090909, 0x000000, 0x000000, 0x010101, 0x030303, 0x000000, 0x030303, 0x202020, 0x030303, 0x000000, 0x060606, 0x2e2e2e, 0x050505, 0x060606, 0x252525, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x080808, 0x000000, 0x777777, 0x828282, 0x7f7f7f, 0x7e7e7e, 0x3f3f3f, 0x020202, 0x000000, 0x060606, 0x000000, 0x010101, 0x020202, 0x000000, 0x020202, 0x000000, 0x010101, 0x000000, 0x050505, 0x080808, 0x000000, 0x000000, 
    0x000000, 0x030303, 0x010101, 0x000000, 0x020202, 0x020202, 0x040404, 0xfdfdfd, 0x060606, 0x000000, 0x070707, 0x050505, 0x000000, 0x000000, 0x000000, 0x000000, 0x3c3c3c, 0x7d7d7d, 0x828282, 0x828282, 0x313131, 0x000000, 0x030303, 0x2b2b2b, 0x6a6a6a, 0x808080, 0x828282, 0x797979, 0x838383, 0x7d7d7d, 0x7b7b7b, 0x808080, 0x808080, 0x7c7c7c, 0x818181, 0x848484, 0x848484, 0x818181, 0x7d7d7d, 0x6e6e6e, 0x2a2a2a, 0x030303, 0x000000, 0x313131, 0x828282, 0x828282, 0x7d7d7d, 0x3c3c3c, 0x020202, 0x020202, 0x000000, 0x000000, 0x050505, 0x020202, 0x000000, 0x030303, 0x040404, 0x030303, 0x010101, 0x000000, 0x020202, 0x000000, 0x070707, 0x020202, 
    0x040404, 0x030303, 0x010101, 0x040404, 0x000000, 0x000000, 0x010101, 0x030303, 0x000000, 0x060606, 0x010101, 0x000000, 0x050505, 0xffffff, 0x000000, 0x010101, 0x020202, 0x797979, 0x7e7e7e, 0x808080, 0x808080, 0x7f7f7f, 0x838383, 0x7a7a7a, 0x868686, 0x7d7d7d, 0x7c7c7c, 0x858585, 0x828282, 0x7d7d7d, 0x848484, 0x7c7c7c, 0x818181, 0x7e7e7e, 0x7c7c7c, 0x7a7a7a, 0x838383, 0x7f7f7f, 0x7d7d7d, 0x808080, 0x787878, 0x838383, 0x808080, 0x808080, 0x808080, 0x7d7d7d, 0x797979, 0x030303, 0x000000, 0x060606, 0x000000, 0x030303, 0x000000, 0x000000, 0x000000, 0x030303, 0x000000, 0x050505, 0x010101, 0x010101, 0x040404, 0x060606, 0x040404, 0x000000, 
    0x000000, 0x000000, 0x090909, 0x000000, 0x050505, 0x0a0a0a, 0x020202, 0x000000, 0x020202, 0x000000, 0x020202, 0x030303, 0x020202, 0x000000, 0x020202, 0x010101, 0x212121, 0x787878, 0x7f7f7f, 0x808080, 0x818181, 0x7e7e7e, 0x7f7f7f, 0x858585, 0x7e7e7e, 0x797979, 0x818181, 0x7c7c7c, 0x7c7c7c, 0x848484, 0x7c7c7c, 0x818181, 0x7e7e7e, 0x777777, 0x848484, 0x7e7e7e, 0x828282, 0x7d7d7d, 0x7f7f7f, 0x7e7e7e, 0x838383, 0x7e7e7e, 0x7d7d7d, 0x818181, 0x808080, 0x7f7f7f, 0x787878, 0x212121, 0x050505, 0x000000, 0x010101, 0x000000, 0x030303, 0xffffff, 0x000000, 0x010101, 0x030303, 0x000000, 0x080808, 0x040404, 0x000000, 0x000000, 0x000000, 0x020202, 
    0x020202, 0x000000, 0x010101, 0x020202, 0x010101, 0x000000, 0x030303, 0x000000, 0x000000, 0x000000, 0x030303, 0x000000, 0x000000, 0x020202, 0x252525, 0x707070, 0x818181, 0x7c7c7c, 0x818181, 0x7d7d7d, 0x808080, 0x7f7f7f, 0x808080, 0x7e7e7e, 0x7e7e7e, 0x4b4b4b, 0x030303, 0x000000, 0x030303, 0x010101, 0x848484, 0x7c7c7c, 0x808080, 0x6f6f6f, 0x040404, 0xffffff, 0x020202, 0x040404, 0x484848, 0x7f7f7f, 0x7d7d7d, 0x7f7f7f, 0x7e7e7e, 0x7f7f7f, 0x7d7d7d, 0x828282, 0x7c7c7c, 0x818181, 0x6c6c6c, 0x272727, 0x040404, 0x040404, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x070707, 0x000000, 0x010101, 0x020202, 0x030303, 0x010101, 0x000000, 
    0x000000, 0x010101, 0x040404, 0x010101, 0x010101, 0x030303, 0x030303, 0x000000, 0x030303, 0x020202, 0x030303, 0x000000, 0x262626, 0x6c6c6c, 0x7c7c7c, 0x818181, 0x808080, 0x7f7f7f, 0x7f7f7f, 0x7e7e7e, 0x838383, 0x4e4e4e, 0x000000, 0x070707, 0x030303, 0x000000, 0x020202, 0x000000, 0x030303, 0x020202, 0x7d7d7d, 0x808080, 0x808080, 0x7f7f7f, 0x010101, 0x000000, 0x000000, 0x000000, 0x000000, 0x010101, 0x040404, 0x000000, 0x4a4a4a, 0x7c7c7c, 0x838383, 0x7d7d7d, 0x838383, 0x7f7f7f, 0x808080, 0x7c7c7c, 0x6d6d6d, 0x262626, 0x000000, 0x010101, 0x010101, 0x030303, 0x020202, 0x000000, 0x010101, 0x060606, 0x000000, 0x010101, 0x050505, 0x010101, 
    0x666666, 0x2d2d2d, 0x000000, 0x010101, 0x010101, 0x000000, 0x030303, 0x000000, 0x000000, 0x000000, 0x282828, 0x717171, 0x7e7e7e, 0x868686, 0x818181, 0x7d7d7d, 0x7d7d7d, 0x828282, 0x4a4a4a, 0x030303, 0x000000, 0x030303, 0x020202, 0x020202, 0x000000, 0x010101, 0x000000, 0x050505, 0x010101, 0x000000, 0x848484, 0x7e7e7e, 0x7f7f7f, 0x7f7f7f, 0x010101, 0x000000, 0x000000, 0x000000, 0x010101, 0x010101, 0x010101, 0x000000, 0x030303, 0x020202, 0x000000, 0x4c4c4c, 0x7f7f7f, 0x818181, 0x7e7e7e, 0x808080, 0x848484, 0x7d7d7d, 0x717171, 0x292929, 0x000000, 0x000000, 0x010101, 0x010101, 0x050505, 0x000000, 0x020202, 0x020202, 0x292929, 0x616161, 
    0x797979, 0x7f7f7f, 0x060606, 0x020202, 0x060606, 0xffffff, 0x010101, 0x030303, 0x010101, 0x292929, 0x747474, 0x7d7d7d, 0x818181, 0x787878, 0x808080, 0x818181, 0x4d4d4d, 0x000000, 0x010101, 0x000000, 0x020202, 0x020202, 0x050505, 0x000000, 0x000000, 0x020202, 0x010101, 0x010101, 0x080808, 0x020202, 0x7a7a7a, 0x848484, 0x7f7f7f, 0x7e7e7e, 0x010101, 0x000000, 0x000000, 0x000000, 0x010101, 0x010101, 0x000000, 0x020202, 0x040404, 0x000000, 0x010101, 0x060606, 0x000000, 0x4e4e4e, 0x828282, 0x7f7f7f, 0x767676, 0x7f7f7f, 0x7d7d7d, 0x767676, 0x2a2a2a, 0x000000, 0x000000, 0x040404, 0x030303, 0x030303, 0xffffff, 0x030303, 0x7c7c7c, 0x7f7f7f, 
    0x838383, 0x7c7c7c, 0x333333, 0x000000, 0x000000, 0x070707, 0x000000, 0x000000, 0x222222, 0x7b7b7b, 0x828282, 0x7d7d7d, 0x7f7f7f, 0x828282, 0x4c4c4c, 0x000000, 0xfefefe, 0x040404, 0x020202, 0x050505, 0x040404, 0x000000, 0x090909, 0x020202, 0x0b0b0b, 0x010101, 0x030303, 0x000000, 0x010101, 0x020202, 0x7d7d7d, 0x808080, 0x7f7f7f, 0x7e7e7e, 0x010101, 0x000000, 0x000000, 0x000000, 0x010101, 0x010101, 0x000000, 0x040404, 0x050505, 0x000000, 0x050505, 0x040404, 0x040404, 0x020202, 0x000000, 0x4c4c4c, 0x848484, 0x7f7f7f, 0x7c7c7c, 0x808080, 0x7a7a7a, 0x222222, 0x050505, 0x010101, 0x010101, 0x000000, 0x030303, 0x2f2f2f, 0x808080, 0x7e7e7e, 
    0x7e7e7e, 0x808080, 0x747474, 0x363636, 0x050505, 0x010101, 0x030303, 0x272727, 0x777777, 0x808080, 0x7d7d7d, 0x808080, 0x7e7e7e, 0x2b2b2b, 0x000000, 0x020202, 0x020202, 0x070707, 0x010101, 0x020202, 0x000000, 0x020202, 0x000000, 0x000000, 0x000000, 0x030303, 0x020202, 0x050505, 0x040404, 0x000000, 0x838383, 0x7f7f7f, 0x7f7f7f, 0x7e7e7e, 0x010101, 0x000000, 0x000000, 0x000000, 0x010101, 0x010101, 0x050505, 0x000000, 0x010101, 0x020202, 0xfdfdfd, 0x000000, 0x020202, 0x000000, 0x020202, 0x010101, 0x2d2d2d, 0x7f7f7f, 0x7f7f7f, 0x7b7b7b, 0x7f7f7f, 0x777777, 0x262626, 0x040404, 0x060606, 0x030303, 0x2d2d2d, 0x7e7e7e, 0x7d7d7d, 0x808080, 
    0x808080, 0x808080, 0x868686, 0x767676, 0x2c2c2c, 0x020202, 0x262626, 0x747474, 0x7e7e7e, 0x7c7c7c, 0x7e7e7e, 0x828282, 0x7e7e7e, 0x7f7f7f, 0x040404, 0x000000, 0x000000, 0x000000, 0x010101, 0x010101, 0x060606, 0x040404, 0x030303, 0x010101, 0xffffff, 0x000000, 0x020202, 0x020202, 0x020202, 0x000000, 0x828282, 0x7f7f7f, 0x7f7f7f, 0x7e7e7e, 0x010101, 0x000000, 0x000000, 0x000000, 0x010101, 0x010101, 0x000000, 0x060606, 0x010101, 0x020202, 0x030303, 0x000000, 0x010101, 0x030303, 0x000000, 0x030303, 0x7e7e7e, 0x7d7d7d, 0x828282, 0x7f7f7f, 0x7d7d7d, 0x7d7d7d, 0x767676, 0x232323, 0x000000, 0x343434, 0x7f7f7f, 0x7f7f7f, 0x818181, 0x7f7f7f, 
    0x383838, 0x7c7c7c, 0x808080, 0x868686, 0x7d7d7d, 0x4b4b4b, 0x727272, 0x838383, 0x808080, 0x7e7e7e, 0x686868, 0x7d7d7d, 0x7c7c7c, 0x7f7f7f, 0x313131, 0x000000, 0x030303, 0x000000, 0x040404, 0x000000, 0x000000, 0x020202, 0x000000, 0x020202, 0x000000, 0x060606, 0x040404, 0x000000, 0x010101, 0x000000, 0x818181, 0x7d7d7d, 0x7f7f7f, 0x7f7f7f, 0x010101, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x070707, 0x000000, 0x060606, 0x000000, 0x000000, 0x050505, 0x020202, 0x020202, 0x000000, 0x303030, 0x7e7e7e, 0x7b7b7b, 0x7d7d7d, 0x696969, 0x7e7e7e, 0x808080, 0x7f7f7f, 0x7a7a7a, 0x4b4b4b, 0x7a7a7a, 0x7d7d7d, 0x7f7f7f, 0x7f7f7f, 0x3d3d3d, 
    0x040404, 0x3c3c3c, 0x828282, 0x7c7c7c, 0x7e7e7e, 0x7e7e7e, 0x838383, 0x7e7e7e, 0x7e7e7e, 0x505050, 0x000000, 0x828282, 0x7f7f7f, 0x7f7f7f, 0x7a7a7a, 0x323232, 0x000000, 0x050505, 0x000000, 0x000000, 0x020202, 0x000000, 0x010101, 0x010101, 0x020202, 0x000000, 0x030303, 0x000000, 0x000000, 0x040404, 0x7b7b7b, 0x7f7f7f, 0x7f7f7f, 0x7f7f7f, 0x010101, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x030303, 0x010101, 0x000000, 0x020202, 0x000000, 0x303030, 0x7a7a7a, 0x818181, 0x808080, 0x808080, 0x000000, 0x505050, 0x7f7f7f, 0x7d7d7d, 0x808080, 0x7f7f7f, 0x7d7d7d, 0x7f7f7f, 0x828282, 0x3e3e3e, 0x010101, 
    0x000000, 0x020202, 0x3e3e3e, 0x7f7f7f, 0x7d7d7d, 0x838383, 0x7d7d7d, 0x808080, 0x4d4d4d, 0x000000, 0x050505, 0x3e3e3e, 0x828282, 0x808080, 0x7f7f7f, 0x7b7b7b, 0x303030, 0x000000, 0x020202, 0x000000, 0x010101, 0x000000, 0x010101, 0x010101, 0x010101, 0x010101, 0x030303, 0x000000, 0x010101, 0x000000, 0x7e7e7e, 0x7d7d7d, 0x7c7c7c, 0x7f7f7f, 0x020202, 0x010101, 0x010101, 0x000000, 0x010101, 0x020202, 0x000000, 0x020202, 0x000000, 0x040404, 0x020202, 0x000000, 0x000000, 0x2f2f2f, 0x7b7b7b, 0x7f7f7f, 0x828282, 0x7d7d7d, 0x3f3f3f, 0x000000, 0x030303, 0x4c4c4c, 0x818181, 0x7d7d7d, 0x828282, 0x7d7d7d, 0x7f7f7f, 0x3e3e3e, 0x020202, 0x000000, 
    0x040404, 0x000000, 0x000000, 0x272727, 0x808080, 0x808080, 0x828282, 0x4a4a4a, 0x020202, 0x050505, 0x000000, 0x000000, 0x3b3b3b, 0x7e7e7e, 0x7e7e7e, 0x7e7e7e, 0x797979, 0x020202, 0x000000, 0x020202, 0x010101, 0x000000, 0x000000, 0x000000, 0x030303, 0x000000, 0x343434, 0x707070, 0x818181, 0x7c7c7c, 0x7e7e7e, 0x818181, 0x828282, 0x7c7c7c, 0x808080, 0x797979, 0x737373, 0x363636, 0x020202, 0x000000, 0x000000, 0x030303, 0x030303, 0x000000, 0x020202, 0x000000, 0xffffff, 0x797979, 0x7e7e7e, 0x828282, 0x7f7f7f, 0x3c3c3c, 0x000000, 0x020202, 0x000000, 0x020202, 0x4b4b4b, 0x828282, 0x808080, 0x808080, 0x272727, 0x000000, 0x000000, 0x040404, 
    0x000000, 0x060606, 0x242424, 0x787878, 0x808080, 0x7e7e7e, 0x7a7a7a, 0x020202, 0x030303, 0x000000, 0x020202, 0x040404, 0x040404, 0x3c3c3c, 0x828282, 0x7f7f7f, 0x808080, 0x2e2e2e, 0x050505, 0x000000, 0x020202, 0x030303, 0x060606, 0x313131, 0x6d6d6d, 0x838383, 0x7e7e7e, 0x7c7c7c, 0x7d7d7d, 0x7e7e7e, 0x818181, 0x7f7f7f, 0x7d7d7d, 0x848484, 0x7b7b7b, 0x818181, 0x7c7c7c, 0x7b7b7b, 0x838383, 0x707070, 0x323232, 0x050505, 0x040404, 0x030303, 0x000000, 0x040404, 0x242424, 0x848484, 0x7f7f7f, 0x7b7b7b, 0x404040, 0x000000, 0x060606, 0x020202, 0x020202, 0xffffff, 0x020202, 0x7a7a7a, 0x7f7f7f, 0x808080, 0x787878, 0x242424, 0x060606, 0x000000, 
    0x000000, 0x000000, 0x777777, 0x7d7d7d, 0x808080, 0x808080, 0x4e4e4e, 0x000000, 0x000000, 0x020202, 0x000000, 0x000000, 0x000000, 0x000000, 0x7c7c7c, 0x7f7f7f, 0x7f7f7f, 0x7d7d7d, 0x2f2f2f, 0x020202, 0x000000, 0x323232, 0x6a6a6a, 0x7d7d7d, 0x818181, 0x7a7a7a, 0x818181, 0x7e7e7e, 0x838383, 0x808080, 0x7d7d7d, 0x838383, 0x7e7e7e, 0x7a7a7a, 0x828282, 0x7f7f7f, 0x858585, 0x7f7f7f, 0x7b7b7b, 0x818181, 0x7e7e7e, 0x676767, 0x313131, 0x000000, 0x060606, 0x2c2c2c, 0x808080, 0x7e7e7e, 0x7f7f7f, 0x7d7d7d, 0x000000, 0x010101, 0x020202, 0x040404, 0x000000, 0x030303, 0x000000, 0x4f4f4f, 0x808080, 0x808080, 0x7d7d7d, 0x767676, 0x000000, 0x010101, 
    0x020202, 0x313131, 0x7c7c7c, 0x808080, 0x7a7a7a, 0x484848, 0x030303, 0x000000, 0x030303, 0x000000, 0xffffff, 0x020202, 0x010101, 0x010101, 0x434343, 0x808080, 0x7e7e7e, 0x7d7d7d, 0x808080, 0x797979, 0x757575, 0x7c7c7c, 0x818181, 0x7f7f7f, 0x7c7c7c, 0x7f7f7f, 0x808080, 0x838383, 0x3a3a3a, 0x000000, 0x040404, 0x000000, 0x000000, 0x080808, 0x050505, 0x323232, 0x7d7d7d, 0x818181, 0x7c7c7c, 0x808080, 0x818181, 0x828282, 0x7d7d7d, 0x767676, 0x747474, 0x808080, 0x7f7f7f, 0x7e7e7e, 0x808080, 0x404040, 0x040404, 0x020202, 0x000000, 0x000000, 0x020202, 0x050505, 0x000000, 0x030303, 0x494949, 0x7b7b7b, 0x7f7f7f, 0x7b7b7b, 0x313131, 0x020202, 
    0x232323, 0x797979, 0x848484, 0x808080, 0x545454, 0x000000, 0x010101, 0x010101, 0x010101, 0x040404, 0x030303, 0x000000, 0x050505, 0x010101, 0x000000, 0x414141, 0x818181, 0x7d7d7d, 0x7c7c7c, 0x7e7e7e, 0x828282, 0x808080, 0x7c7c7c, 0x7e7e7e, 0x808080, 0x3f3f3f, 0x000000, 0x030303, 0x000000, 0x010101, 0x070707, 0x030303, 0x010101, 0x020202, 0x000000, 0x050505, 0x010101, 0x020202, 0x3e3e3e, 0x7d7d7d, 0x7f7f7f, 0x797979, 0x808080, 0x828282, 0x818181, 0x7e7e7e, 0x7e7e7e, 0x828282, 0x424242, 0x000000, 0x000000, 0x040404, 0x020202, 0x000000, 0x040404, 0x000000, 0x010101, 0x010101, 0x000000, 0x555555, 0x808080, 0x848484, 0x797979, 0x232323, 
    0x787878, 0x7d7d7d, 0x7f7f7f, 0x7f7f7f, 0x000000, 0x020202, 0x000000, 0x030303, 0x000000, 0x050505, 0x000000, 0x010101, 0x020202, 0x020202, 0x020202, 0x030303, 0x3c3c3c, 0x7f7f7f, 0x838383, 0x7b7b7b, 0x7b7b7b, 0x848484, 0x7f7f7f, 0x3d3d3d, 0x000000, 0x010101, 0x030303, 0x000000, 0x050505, 0x010101, 0x000000, 0x060606, 0x030303, 0xffffff, 0x000000, 0x070707, 0x000000, 0x000000, 0x0a0a0a, 0x010101, 0x3d3d3d, 0x7f7f7f, 0x888888, 0x797979, 0x7a7a7a, 0x808080, 0x7f7f7f, 0x3d3d3d, 0x000000, 0x080808, 0x060606, 0x000000, 0x040404, 0x000000, 0x030303, 0x080808, 0x030303, 0x000000, 0x020202, 0x000000, 0x7f7f7f, 0x7f7f7f, 0x7d7d7d, 0x787878, 
    0x7e7e7e, 0x808080, 0x7d7d7d, 0x4c4c4c, 0x040404, 0x000000, 0x050505, 0x010101, 0x020202, 0x000000, 0x020202, 0x000000, 0x000000, 0x050505, 0x000000, 0x000000, 0x020202, 0x2d2d2d, 0x7d7d7d, 0x7f7f7f, 0x808080, 0x454545, 0x020202, 0x000000, 0x010101, 0x010101, 0x000000, 0x000000, 0x000000, 0x020202, 0x040404, 0x000000, 0x010101, 0x010101, 0x030303, 0x000000, 0x010101, 0x040404, 0x000000, 0x030303, 0x000000, 0x010101, 0x424242, 0x808080, 0x828282, 0x7f7f7f, 0x2f2f2f, 0x000000, 0x000000, 0x000000, 0x030303, 0x010101, 0x020202, 0x010101, 0x040404, 0x000000, 0x020202, 0x050505, 0x000000, 0x030303, 0x4c4c4c, 0x7e7e7e, 0x808080, 0x7d7d7d, 
    0x7f7f7f, 0x7d7d7d, 0x7f7f7f, 0x060606, 0x000000, 0x010101, 0x000000, 0x040404, 0x050505, 0x000000, 0x030303, 0x030303, 0x000000, 0x040404, 0x020202, 0x040404, 0x000000, 0x818181, 0x7f7f7f, 0x7d7d7d, 0x7a7a7a, 0x060606, 0x020202, 0x010101, 0x010101, 0x000000, 0x020202, 0x020202, 0x000000, 0x020202, 0x000000, 0x000000, 0x020202, 0x000000, 0x010101, 0x030303, 0x020202, 0x000000, 0x020202, 0x000000, 0x010101, 0x000000, 0x070707, 0x797979, 0x7f7f7f, 0x7b7b7b, 0x808080, 0x000000, 0x000000, 0x000000, 0x050505, 0x020202, 0x000000, 0x010101, 0x030303, 0x000000, 0x040404, 0x020202, 0x000000, 0x010101, 0x000000, 0x7c7c7c, 0x808080, 0x7e7e7e, 
    0x7f7f7f, 0x808080, 0x7e7e7e, 0x000000, 0x040404, 0x030303, 0x020202, 0x000000, 0x020202, 0x020202, 0x000000, 0x020202, 0x040404, 0x030303, 0x000000, 0x000000, 0x333333, 0x7e7e7e, 0x7c7c7c, 0x838383, 0x3d3d3d, 0x030303, 0x000000, 0x040404, 0x000000, 0xffffff, 0x000000, 0x000000, 0x070707, 0x000000, 0x060606, 0x020202, 0x050505, 0x000000, 0x050505, 0x000000, 0x040404, 0x040404, 0x000000, 0x050505, 0x020202, 0x000000, 0x000000, 0x3d3d3d, 0x7c7c7c, 0x818181, 0x7c7c7c, 0x303030, 0x030303, 0x000000, 0x000000, 0x030303, 0x000000, 0x030303, 0x010101, 0xfdfdfd, 0x000000, 0x010101, 0x020202, 0x010101, 0x010101, 0x848484, 0x7e7e7e, 0x808080, 
    0x7f7f7f, 0x7c7c7c, 0x4a4a4a, 0x060606, 0x030303, 0x000000, 0x000000, 0x020202, 0x000000, 0x040404, 0x000000, 0x000000, 0x000000, 0x000000, 0x050505, 0x040404, 0x797979, 0x7e7e7e, 0x7f7f7f, 0x797979, 0x010101, 0x010101, 0x040404, 0x020202, 0x000000, 0x000000, 0x010101, 0x080808, 0x000000, 0x070707, 0x000000, 0x000000, 0x000000, 0x020202, 0x020202, 0x030303, 0x000000, 0x000000, 0x010101, 0x000000, 0x020202, 0x000000, 0x060606, 0x000000, 0x7d7d7d, 0x767676, 0x7f7f7f, 0x7e7e7e, 0x020202, 0x000000, 0x060606, 0x000000, 0x000000, 0x020202, 0x000000, 0x060606, 0x050505, 0x000000, 0x010101, 0x030303, 0x040404, 0x464646, 0x818181, 0x7f7f7f, 
    0x828282, 0x797979, 0x030303, 0x030303, 0x000000, 0x060606, 0x050505, 0x030303, 0x030303, 0x000000, 0x000000, 0x000000, 0x010101, 0x020202, 0x000000, 0x000000, 0x7e7e7e, 0x808080, 0x7e7e7e, 0x3d3d3d, 0x000000, 0x040404, 0x000000, 0x000000, 0x020202, 0x000000, 0x040404, 0x000000, 0x000000, 0x030303, 0x030303, 0x000000, 0x000000, 0x010101, 0x000000, 0x000000, 0x020202, 0x010101, 0x040404, 0xfefefe, 0x000000, 0x010101, 0x000000, 0x030303, 0x3a3a3a, 0x848484, 0x808080, 0x7e7e7e, 0x000000, 0x060606, 0x000000, 0x020202, 0x050505, 0x040404, 0x000000, 0x000000, 0x000000, 0x040404, 0x060606, 0x000000, 0x000000, 0x090909, 0x797979, 0x828282, 
    0x7a7a7a, 0x858585, 0x000000, 0x000000, 0x060606, 0x010101, 0x000000, 0x000000, 0x040404, 0x000000, 0x020202, 0x000000, 0x020202, 0x030303, 0x000000, 0x313131, 0x7f7f7f, 0x818181, 0x808080, 0x010101, 0x000000, 0x000000, 0x020202, 0x060606, 0x000000, 0x020202, 0x040404, 0x040404, 0x040404, 0x000000, 0x000000, 0x030303, 0x040404, 0x010101, 0x010101, 0x000000, 0x020202, 0x020202, 0x000000, 0x020202, 0x020202, 0x030303, 0x060606, 0x000000, 0x000000, 0x7b7b7b, 0x818181, 0x808080, 0x333333, 0x000000, 0x030303, 0x000000, 0x030303, 0x000000, 0x000000, 0x000000, 0x030303, 0x000000, 0x020202, 0x010101, 0x030303, 0x020202, 0x828282, 0x7d7d7d, 
    0x818181, 0x7f7f7f, 0x000000, 0x020202, 0x020202, 0x030303, 0x000000, 0xffffff, 0x000000, 0x020202, 0x040404, 0x000000, 0x020202, 0x000000, 0x040404, 0x7b7b7b, 0x818181, 0x7c7c7c, 0x7b7b7b, 0x010101, 0x000000, 0x000000, 0x060606, 0x000000, 0x010101, 0x060606, 0x030303, 0x000000, 0x000000, 0xffffff, 0x000000, 0x040404, 0x000000, 0x030303, 0x030303, 0x000000, 0x000000, 0x080808, 0x020202, 0x000000, 0x000000, 0x030303, 0x000000, 0x020202, 0x070707, 0x7b7b7b, 0x7a7a7a, 0x818181, 0x7a7a7a, 0x020202, 0x010101, 0x000000, 0x000000, 0x030303, 0x000000, 0x040404, 0x000000, 0x030303, 0x000000, 0x060606, 0x000000, 0x000000, 0x818181, 0x7e7e7e, 
    0x7a7a7a, 0x848484, 0x000000, 0x050505, 0x020202, 0x000000, 0x020202, 0x020202, 0x010101, 0x000000, 0x000000, 0x000000, 0x040404, 0x010101, 0x000000, 0x838383, 0x7d7d7d, 0x7f7f7f, 0x3e3e3e, 0x000000, 0x000000, 0x030303, 0x010101, 0x060606, 0x010101, 0x000000, 0x090909, 0x020202, 0x000000, 0x020202, 0x010101, 0x000000, 0x050505, 0x000000, 0x020202, 0x020202, 0x000000, 0x000000, 0x010101, 0x040404, 0x000000, 0x030303, 0x070707, 0x030303, 0x000000, 0x404040, 0x818181, 0x7d7d7d, 0x7e7e7e, 0x000000, 0x020202, 0x030303, 0x000000, 0x000000, 0x0a0a0a, 0x000000, 0xffffff, 0x000000, 0x050505, 0x000000, 0x030303, 0x000000, 0x838383, 0x7d7d7d, 
    0x838383, 0x7a7a7a, 0x070707, 0x010101, 0x030303, 0x030303, 0x000000, 0x020202, 0x040404, 0x000000, 0x010101, 0x060606, 0x000000, 0x030303, 0x040404, 0x7d7d7d, 0x808080, 0x7f7f7f, 0x020202, 0x070707, 0x000000, 0x000000, 0x000000, 0x010101, 0x010101, 0x090909, 0x000000, 0x000000, 0x030303, 0x020202, 0x000000, 0x030303, 0x000000, 0x040404, 0x000000, 0x000000, 0x020202, 0x030303, 0x050505, 0x000000, 0x030303, 0x000000, 0x010101, 0x000000, 0x090909, 0x000000, 0x7c7c7c, 0x7d7d7d, 0x818181, 0x030303, 0x020202, 0x000000, 0x060606, 0x020202, 0x000000, 0x070707, 0x010101, 0x000000, 0x040404, 0x010101, 0x050505, 0x030303, 0x7c7c7c, 0x818181
};
const tImage cockpit2 = { image_data_cockpit2, 64, 32,
    24 };
