
/*******************************************************************************
* image
* filename: unsaved
* name: cockpit7
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



static const uint24_t image_data_cockpit7[2048] = {
    0x0c0c0c, 0x060606, 0x020202, 0xfdfdfd, 0x060606, 0x000000, 0x070707, 0x010101, 0xffffff, 0x000000, 0x040404, 0x040404, 0x010101, 0x000000, 0x818181, 0x7d7d7d, 0x7f7f7f, 0x808080, 0x000000, 0x000000, 0x060606, 0x000000, 0x070707, 0x050505, 0x010101, 0x010101, 0xffffff, 0x040404, 0x000000, 0x010101, 0x000000, 0x030303, 0x020202, 0x030303, 0x000000, 0x030303, 0x050505, 0x030303, 0x010101, 0xffffff, 0x020202, 0x060606, 0x000000, 0x050505, 0x000000, 0x000000, 0x7f7f7f, 0x7f7f7f, 0x7b7b7b, 0x818181, 0x020202, 0x050505, 0xfefefe, 0x060606, 0x060606, 0x020202, 0x030303, 0x000000, 0x060606, 0x000000, 0x030303, 0xfdfdfd, 0x020202, 0x0e0e0e, 
    0xffffff, 0x060606, 0x000000, 0x040404, 0xfefefe, 0x030303, 0x000000, 0x020202, 0x090909, 0xffffff, 0x000000, 0x0d0d0d, 0x000000, 0x040404, 0x3d3d3d, 0x7f7f7f, 0x818181, 0x787878, 0x343434, 0x030303, 0x040404, 0x060606, 0x000000, 0x000000, 0x010101, 0x000000, 0xfefefe, 0x030303, 0x000000, 0x090909, 0x030303, 0x010101, 0x040404, 0x020202, 0x070707, 0xfefefe, 0x000000, 0x040404, 0x0a0a0a, 0xf9f9f9, 0x000000, 0x000000, 0x030303, 0x020202, 0x050505, 0x303030, 0x7f7f7f, 0x7e7e7e, 0x7f7f7f, 0x3c3c3c, 0x000000, 0xffffff, 0x030303, 0x020202, 0x000000, 0x000000, 0x050505, 0x020202, 0xffffff, 0x030303, 0xfafafa, 0x000000, 0x0c0c0c, 0x030303, 
    0x000000, 0xffffff, 0x030303, 0x000000, 0x070707, 0xfefefe, 0x010101, 0x020202, 0x000000, 0x090909, 0xffffff, 0x000000, 0x0e0e0e, 0x050505, 0x000000, 0x797979, 0x828282, 0x838383, 0x797979, 0x2e2e2e, 0x010101, 0x000000, 0x040404, 0x040404, 0x000000, 0x050505, 0x040404, 0x000000, 0x060606, 0x000000, 0x000000, 0x020202, 0x000000, 0x040404, 0x030303, 0xfbfbfb, 0x0c0c0c, 0x010101, 0x020202, 0xfcfcfc, 0x030303, 0x040404, 0x000000, 0x050505, 0x2f2f2f, 0x797979, 0x808080, 0x808080, 0x787878, 0x010101, 0x040404, 0x000000, 0x020202, 0x060606, 0x010101, 0x000000, 0x000000, 0xffffff, 0x000000, 0xffffff, 0x000000, 0x050505, 0x000000, 0x020202, 
    0x050505, 0x010101, 0xffffff, 0x020202, 0x000000, 0x000000, 0xffffff, 0x020202, 0x000000, 0x000000, 0x070707, 0xffffff, 0x000000, 0x020202, 0x080808, 0x414141, 0x7b7b7b, 0x828282, 0x808080, 0x777777, 0x030303, 0x0a0a0a, 0x000000, 0xffffff, 0x000000, 0x030303, 0x000000, 0x080808, 0x212121, 0x040404, 0x050505, 0x010101, 0x323232, 0x050505, 0x030303, 0xffffff, 0x000000, 0x000000, 0x060606, 0x020202, 0x000000, 0x000000, 0x090909, 0x000000, 0x787878, 0x828282, 0x7f7f7f, 0x7e7e7e, 0x3a3a3a, 0x040404, 0x020202, 0x070707, 0x000000, 0x000000, 0x060606, 0x010101, 0xffffff, 0x020202, 0x020202, 0x010101, 0x080808, 0x090909, 0x020202, 0x020202, 
    0x000000, 0x040404, 0x050505, 0x040404, 0x040404, 0x060606, 0x000000, 0xfefefe, 0x0b0b0b, 0x000000, 0x010101, 0x040404, 0xfdfdfd, 0x000000, 0x010101, 0x010101, 0x3f3f3f, 0x7a7a7a, 0x838383, 0x838383, 0x313131, 0x000000, 0x010101, 0x2a2a2a, 0x6b6b6b, 0x838383, 0x818181, 0x7a7a7a, 0x828282, 0x7f7f7f, 0x7a7a7a, 0x818181, 0x808080, 0x747474, 0x848484, 0x838383, 0x858585, 0x848484, 0x787878, 0x747474, 0x292929, 0x020202, 0x000000, 0x313131, 0x828282, 0x828282, 0x7d7d7d, 0x3c3c3c, 0x070707, 0x010101, 0x000000, 0x050505, 0x080808, 0x050505, 0x000000, 0xfdfdfd, 0x050505, 0x050505, 0x000000, 0x040404, 0x000000, 0x000000, 0x0c0c0c, 0x000000, 
    0x050505, 0x010101, 0x020202, 0x000000, 0x000000, 0x010101, 0x070707, 0x010101, 0x000000, 0x0b0b0b, 0x000000, 0x070707, 0x000000, 0xffffff, 0x040404, 0x050505, 0x010101, 0x7a7a7a, 0x7e7e7e, 0x7f7f7f, 0x7d7d7d, 0x848484, 0x858585, 0x7a7a7a, 0x848484, 0x7a7a7a, 0x7f7f7f, 0x878787, 0x858585, 0x7c7c7c, 0x7c7c7c, 0x808080, 0x848484, 0x7a7a7a, 0x7f7f7f, 0x777777, 0x888888, 0x7b7b7b, 0x7c7c7c, 0x7d7d7d, 0x787878, 0x828282, 0x7f7f7f, 0x808080, 0x808080, 0x7d7d7d, 0x797979, 0x020202, 0x010101, 0x040404, 0xffffff, 0x000000, 0x000000, 0x010101, 0xf8f8f8, 0x060606, 0x060606, 0x040404, 0x000000, 0x030303, 0x0a0a0a, 0x0b0b0b, 0x020202, 0x070707, 
    0x020202, 0xffffff, 0x060606, 0x060606, 0x060606, 0x030303, 0x020202, 0x000000, 0x020202, 0x000000, 0x040404, 0x000000, 0x030303, 0x020202, 0x030303, 0x000000, 0x222222, 0x777777, 0x808080, 0x828282, 0x858585, 0x797979, 0x7b7b7b, 0x898989, 0x7f7f7f, 0x797979, 0x818181, 0x7a7a7a, 0x7b7b7b, 0x858585, 0x808080, 0x7c7c7c, 0x7d7d7d, 0x7b7b7b, 0x7d7d7d, 0x808080, 0x7d7d7d, 0x7d7d7d, 0x7f7f7f, 0x828282, 0x838383, 0x7d7d7d, 0x7d7d7d, 0x818181, 0x808080, 0x7f7f7f, 0x787878, 0x212121, 0x010101, 0xffffff, 0x000000, 0x020202, 0x090909, 0xffffff, 0x010101, 0x010101, 0x000000, 0x010101, 0x0a0a0a, 0x060606, 0x000000, 0x030303, 0x000000, 0x020202, 
    0x010101, 0x020202, 0xffffff, 0x020202, 0x020202, 0x050505, 0x000000, 0x030303, 0x000000, 0x050505, 0x020202, 0x010101, 0xffffff, 0x010101, 0x232323, 0x717171, 0x808080, 0x7c7c7c, 0x7f7f7f, 0x7e7e7e, 0x7f7f7f, 0x7e7e7e, 0x848484, 0x7c7c7c, 0x808080, 0x494949, 0x020202, 0x000000, 0x040404, 0x000000, 0x838383, 0x7e7e7e, 0x828282, 0x6d6d6d, 0x060606, 0xffffff, 0x060606, 0x040404, 0x494949, 0x7c7c7c, 0x7c7c7c, 0x7e7e7e, 0x7d7d7d, 0x7f7f7f, 0x7d7d7d, 0x818181, 0x7c7c7c, 0x808080, 0x717171, 0x1f1f1f, 0x030303, 0x020202, 0x010101, 0x000000, 0x070707, 0x010101, 0x020202, 0x060606, 0x010101, 0x000000, 0x030303, 0x020202, 0x000000, 0xffffff, 
    0x000000, 0x030303, 0x040404, 0xffffff, 0x000000, 0x030303, 0x050505, 0x030303, 0x040404, 0x020202, 0x020202, 0x000000, 0x262626, 0x6c6c6c, 0x7c7c7c, 0x808080, 0x838383, 0x7d7d7d, 0x808080, 0x828282, 0x7c7c7c, 0x525252, 0x000000, 0x080808, 0x040404, 0x020202, 0x000000, 0x010101, 0x040404, 0x010101, 0x808080, 0x7d7d7d, 0x7e7e7e, 0x818181, 0x000000, 0x000000, 0x030303, 0x000000, 0x000000, 0xffffff, 0x000000, 0x060606, 0x4b4b4b, 0x777777, 0x898989, 0x7c7c7c, 0x848484, 0x7e7e7e, 0x838383, 0x787878, 0x707070, 0x262626, 0x000000, 0x010101, 0x000000, 0x040404, 0x020202, 0x020202, 0x010101, 0x050505, 0x000000, 0x030303, 0xfdfdfd, 0x020202, 
    0x646464, 0x2e2e2e, 0x000000, 0x000000, 0xffffff, 0x000000, 0x050505, 0x000000, 0x000000, 0x000000, 0x272727, 0x707070, 0x7e7e7e, 0x878787, 0x818181, 0x7d7d7d, 0x777777, 0x828282, 0x474747, 0x010101, 0xffffff, 0x020202, 0x070707, 0x000000, 0x020202, 0x000000, 0x010101, 0x050505, 0x010101, 0x010101, 0x858585, 0x808080, 0x7c7c7c, 0x7e7e7e, 0x030303, 0x010101, 0x000000, 0x050505, 0x060606, 0x000000, 0x070707, 0x000000, 0x020202, 0x040404, 0x000000, 0x4f4f4f, 0x7c7c7c, 0x858585, 0x808080, 0x7f7f7f, 0x818181, 0x7e7e7e, 0x727272, 0x282828, 0x020202, 0x000000, 0x010101, 0x020202, 0x030303, 0x000000, 0x050505, 0xfefefe, 0x2b2b2b, 0x616161, 
    0x7c7c7c, 0x7b7b7b, 0x060606, 0x020202, 0x030303, 0xffffff, 0x000000, 0x070707, 0x020202, 0x292929, 0x747474, 0x7d7d7d, 0x818181, 0x797979, 0x808080, 0x818181, 0x545454, 0x000000, 0x060606, 0x030303, 0x000000, 0xffffff, 0x000000, 0x000000, 0x000000, 0x030303, 0x040404, 0x000000, 0xffffff, 0x000000, 0x7a7a7a, 0x848484, 0x838383, 0x7e7e7e, 0x010101, 0x000000, 0x030303, 0x000000, 0x000000, 0x070707, 0x000000, 0x060606, 0x040404, 0x000000, 0x070707, 0x000000, 0xffffff, 0x474747, 0x7d7d7d, 0x828282, 0x767676, 0x7d7d7d, 0x7f7f7f, 0x787878, 0x282828, 0xffffff, 0x020202, 0x040404, 0x020202, 0x040404, 0xfbfbfb, 0x040404, 0x7a7a7a, 0x818181, 
    0x838383, 0x7a7a7a, 0x343434, 0x010101, 0x000000, 0x070707, 0x020202, 0x000000, 0x222222, 0x7b7b7b, 0x818181, 0x7d7d7d, 0x7f7f7f, 0x838383, 0x4c4c4c, 0x000000, 0xffffff, 0x030303, 0x030303, 0x050505, 0x0a0a0a, 0x000000, 0xffffff, 0x010101, 0x0d0d0d, 0x000000, 0x060606, 0x000000, 0x020202, 0x080808, 0x7c7c7c, 0x7d7d7d, 0x7f7f7f, 0x7f7f7f, 0x000000, 0x030303, 0x000000, 0x020202, 0x030303, 0x010101, 0x010101, 0x030303, 0x070707, 0x060606, 0x030303, 0xfcfcfc, 0x060606, 0x030303, 0x020202, 0x4f4f4f, 0x808080, 0x7d7d7d, 0x7d7d7d, 0x7e7e7e, 0x7c7c7c, 0x212121, 0x040404, 0x000000, 0x010101, 0x050505, 0x040404, 0x333333, 0x7d7d7d, 0x7f7f7f, 
    0x7e7e7e, 0x838383, 0x737373, 0x343434, 0x080808, 0x010101, 0x020202, 0x262626, 0x777777, 0x808080, 0x7d7d7d, 0x808080, 0x7e7e7e, 0x2b2b2b, 0x010101, 0x030303, 0x000000, 0x0c0c0c, 0x020202, 0x040404, 0x010101, 0x050505, 0x060606, 0xfefefe, 0x000000, 0x080808, 0x000000, 0x070707, 0x030303, 0x000000, 0x858585, 0x828282, 0x7c7c7c, 0x7f7f7f, 0x010101, 0x000000, 0x060606, 0x000000, 0x060606, 0x000000, 0x090909, 0x000000, 0x010101, 0x000000, 0xf9f9f9, 0x050505, 0x000000, 0x020202, 0x000000, 0x000000, 0x303030, 0x818181, 0x7e7e7e, 0x7c7c7c, 0x7b7b7b, 0x797979, 0x252525, 0x060606, 0x060606, 0x050505, 0x2d2d2d, 0x797979, 0x828282, 0x7e7e7e, 
    0x7e7e7e, 0x848484, 0x888888, 0x777777, 0x2a2a2a, 0x000000, 0x2b2b2b, 0x757575, 0x7d7d7d, 0x7c7c7c, 0x7e7e7e, 0x828282, 0x7e7e7e, 0x7f7f7f, 0x040404, 0x000000, 0x070707, 0x040404, 0x040404, 0x000000, 0x040404, 0x050505, 0x060606, 0x010101, 0xffffff, 0x000000, 0x030303, 0x020202, 0x000000, 0x000000, 0x838383, 0x7b7b7b, 0x828282, 0x797979, 0x060606, 0x000000, 0x000000, 0x010101, 0x020202, 0x030303, 0x000000, 0x070707, 0x030303, 0x040404, 0x070707, 0x030303, 0x000000, 0x050505, 0x040404, 0x020202, 0x808080, 0x7c7c7c, 0x7e7e7e, 0x7f7f7f, 0x818181, 0x7a7a7a, 0x787878, 0x252525, 0x000000, 0x313131, 0x818181, 0x828282, 0x7d7d7d, 0x808080, 
    0x383838, 0x7e7e7e, 0x7f7f7f, 0x848484, 0x7e7e7e, 0x4c4c4c, 0x6f6f6f, 0x838383, 0x808080, 0x7e7e7e, 0x686868, 0x7d7d7d, 0x7b7b7b, 0x7f7f7f, 0x313131, 0x000000, 0x020202, 0x000000, 0x030303, 0x040404, 0x030303, 0x010101, 0x000000, 0x030303, 0x000000, 0x060606, 0x050505, 0x000000, 0x020202, 0x030303, 0x7b7b7b, 0x828282, 0x7d7d7d, 0x818181, 0x020202, 0x010101, 0x000000, 0x000000, 0x000000, 0x010101, 0x010101, 0x040404, 0x090909, 0x000000, 0x000000, 0x0a0a0a, 0x000000, 0x050505, 0x000000, 0x323232, 0x797979, 0x797979, 0x838383, 0x666666, 0x7e7e7e, 0x828282, 0x7d7d7d, 0x797979, 0x4d4d4d, 0x7d7d7d, 0x7a7a7a, 0x7d7d7d, 0x828282, 0x3c3c3c, 
    0x060606, 0x3a3a3a, 0x808080, 0x808080, 0x7f7f7f, 0x808080, 0x858585, 0x7d7d7d, 0x7e7e7e, 0x505050, 0x000000, 0x828282, 0x7e7e7e, 0x7f7f7f, 0x7a7a7a, 0x323232, 0x020202, 0x070707, 0x000000, 0x020202, 0x020202, 0x000000, 0x010101, 0x030303, 0x020202, 0x000000, 0x040404, 0x020202, 0x010101, 0x030303, 0x808080, 0x7d7d7d, 0x808080, 0x7d7d7d, 0x020202, 0x000000, 0x010101, 0x030303, 0x020202, 0x000000, 0x030303, 0x030303, 0x000000, 0x040404, 0x030303, 0x040404, 0x000000, 0x020202, 0x303030, 0x797979, 0x848484, 0x808080, 0x808080, 0x000000, 0x505050, 0x7e7e7e, 0x7f7f7f, 0x838383, 0x808080, 0x7b7b7b, 0x818181, 0x828282, 0x3f3f3f, 0x000000, 
    0x000000, 0x000000, 0x414141, 0x7d7d7d, 0x808080, 0x848484, 0x7b7b7b, 0x7f7f7f, 0x4d4d4d, 0x000000, 0x050505, 0x3e3e3e, 0x828282, 0x7f7f7f, 0x838383, 0x787878, 0x303030, 0x000000, 0x020202, 0x000000, 0x010101, 0x000000, 0x010101, 0x010101, 0x000000, 0x020202, 0x050505, 0x010101, 0x000000, 0x000000, 0x7d7d7d, 0x7b7b7b, 0x7b7b7b, 0x808080, 0x000000, 0x020202, 0x030303, 0x000000, 0x080808, 0x010101, 0x000000, 0x030303, 0x000000, 0x050505, 0x030303, 0x000000, 0x000000, 0x2f2f2f, 0x7c7c7c, 0x7e7e7e, 0x828282, 0x808080, 0xfefefe, 0x000000, 0x050505, 0x4b4b4b, 0x7f7f7f, 0x7f7f7f, 0x7f7f7f, 0x7e7e7e, 0x808080, 0x404040, 0x010101, 0x030303, 
    0x060606, 0x020202, 0x020202, 0x262626, 0x7f7f7f, 0x797979, 0x838383, 0x494949, 0x000000, 0x040404, 0x030303, 0x000000, 0x363636, 0x797979, 0x7c7c7c, 0x808080, 0x797979, 0x020202, 0x000000, 0x020202, 0x010101, 0x000000, 0x000000, 0x000000, 0x020202, 0x000000, 0x363636, 0x6d6d6d, 0x838383, 0x7a7a7a, 0x7e7e7e, 0x818181, 0x808080, 0x7c7c7c, 0x868686, 0x7a7a7a, 0x6e6e6e, 0x383838, 0x000000, 0x020202, 0x010101, 0x040404, 0x040404, 0x000000, 0x020202, 0x000000, 0xffffff, 0x797979, 0x7e7e7e, 0x848484, 0x7e7e7e, 0x3d3d3d, 0x000000, 0x020202, 0x000000, 0x020202, 0x4b4b4b, 0x7d7d7d, 0x828282, 0x828282, 0x242424, 0x010101, 0x030303, 0x000000, 
    0x000000, 0x060606, 0x202020, 0x7c7c7c, 0x828282, 0x818181, 0x7e7e7e, 0x020202, 0x030303, 0x070707, 0x000000, 0x010101, 0x0c0c0c, 0x414141, 0x858585, 0x7c7c7c, 0x808080, 0x2e2e2e, 0x050505, 0x000000, 0x020202, 0x030303, 0x060606, 0x313131, 0x727272, 0x818181, 0x7b7b7b, 0x7d7d7d, 0x7e7e7e, 0x808080, 0x7f7f7f, 0x7f7f7f, 0x808080, 0x838383, 0x797979, 0x7b7b7b, 0x838383, 0x7b7b7b, 0x858585, 0x707070, 0x333333, 0x060606, 0x050505, 0x040404, 0x010101, 0x040404, 0x252525, 0x848484, 0x7d7d7d, 0x7e7e7e, 0x3f3f3f, 0x000000, 0x090909, 0x020202, 0x010101, 0xffffff, 0xfefefe, 0x828282, 0x7d7d7d, 0x7e7e7e, 0x7e7e7e, 0xffffff, 0xffffff, 0x000000, 
    0x070707, 0x010101, 0x7b7b7b, 0x7f7f7f, 0x797979, 0x808080, 0x4d4d4d, 0x010101, 0x050505, 0x000000, 0x000000, 0x010101, 0x000000, 0x000000, 0x787878, 0x828282, 0x7f7f7f, 0x7d7d7d, 0x2f2f2f, 0x020202, 0x000000, 0x323232, 0x6a6a6a, 0x7d7d7d, 0x7e7e7e, 0x7f7f7f, 0x808080, 0x818181, 0x7f7f7f, 0x7c7c7c, 0x808080, 0x838383, 0x7a7a7a, 0x7d7d7d, 0x868686, 0x828282, 0x848484, 0x7e7e7e, 0x7f7f7f, 0x7e7e7e, 0x7e7e7e, 0x676767, 0x323232, 0x010101, 0x070707, 0x2c2c2c, 0x818181, 0x7e7e7e, 0x808080, 0x7d7d7d, 0x000000, 0x040404, 0x040404, 0x020202, 0x050505, 0x000000, 0x010101, 0x4e4e4e, 0x7f7f7f, 0x7e7e7e, 0x7c7c7c, 0x767676, 0x040404, 0x000000, 
    0x000000, 0x323232, 0x7a7a7a, 0x797979, 0x808080, 0x4d4d4d, 0xfefefe, 0xffffff, 0xf8f8f8, 0xffffff, 0xffffff, 0x020202, 0x050505, 0x020202, 0x3e3e3e, 0x818181, 0x7e7e7e, 0x7d7d7d, 0x808080, 0x797979, 0x757575, 0x7c7c7c, 0x818181, 0x7f7f7f, 0x7d7d7d, 0x7b7b7b, 0x808080, 0x838383, 0x3c3c3c, 0x000000, 0x080808, 0x000000, 0x050505, 0x040404, 0x040404, 0x323232, 0x818181, 0x828282, 0x7c7c7c, 0x828282, 0x818181, 0x838383, 0x7e7e7e, 0x777777, 0x747474, 0x808080, 0x7f7f7f, 0x7e7e7e, 0x828282, 0x424242, 0x040404, 0x020202, 0x000000, 0x000000, 0x070707, 0x080808, 0x060606, 0x040404, 0x474747, 0x7b7b7b, 0x7e7e7e, 0x787878, 0x292929, 0x050505, 
    0x212121, 0x7b7b7b, 0x808080, 0x7f7f7f, 0x565656, 0x000000, 0x010101, 0x000000, 0x080808, 0x000000, 0x050505, 0x000000, 0x060606, 0x000000, 0x030303, 0x3d3d3d, 0x818181, 0x7d7d7d, 0x7c7c7c, 0x7e7e7e, 0x828282, 0x808080, 0x7c7c7c, 0x7e7e7e, 0x828282, 0x3f3f3f, 0x010101, 0x000000, 0x000000, 0x020202, 0x010101, 0x040404, 0x000000, 0x040404, 0x000000, 0x060606, 0x070707, 0x020202, 0x3a3a3a, 0x838383, 0x7f7f7f, 0x7a7a7a, 0x808080, 0x828282, 0x818181, 0x7e7e7e, 0x7e7e7e, 0x818181, 0x434343, 0x000000, 0x000000, 0x060606, 0x050505, 0x020202, 0x000000, 0x000000, 0x000000, 0x000000, 0x010101, 0x585858, 0x7c7c7c, 0x8a8a8a, 0x7c7c7c, 0x212121, 
    0x7a7a7a, 0x7a7a7a, 0x818181, 0x848484, 0x000000, 0x000000, 0x080808, 0x000000, 0x050505, 0x020202, 0x000000, 0x050505, 0x050505, 0x000000, 0x040404, 0x020202, 0x3c3c3c, 0x7f7f7f, 0x838383, 0x7b7b7b, 0x7b7b7b, 0x848484, 0x7f7f7f, 0x3d3d3d, 0x000000, 0x020202, 0x030303, 0x010101, 0xfdfdfd, 0x040404, 0x050505, 0x050505, 0x060606, 0xffffff, 0x030303, 0x030303, 0x000000, 0x000000, 0x0b0b0b, 0x000000, 0x3d3d3d, 0x7f7f7f, 0x888888, 0x7a7a7a, 0x7a7a7a, 0x808080, 0x7f7f7f, 0x3d3d3d, 0x000000, 0x090909, 0x0e0e0e, 0x000000, 0x010101, 0x000000, 0x040404, 0x090909, 0x040404, 0x040404, 0x050505, 0x000000, 0x7d7d7d, 0x808080, 0x7c7c7c, 0x787878, 
    0x808080, 0x7c7c7c, 0x828282, 0x484848, 0x070707, 0x010101, 0x040404, 0x010101, 0x020202, 0x010101, 0x050505, 0xfcfcfc, 0x010101, 0x060606, 0x000000, 0x030303, 0x020202, 0x2d2d2d, 0x7d7d7d, 0x7f7f7f, 0x808080, 0x454545, 0x020202, 0x000000, 0x010101, 0x030303, 0x000000, 0x040404, 0x000000, 0x020202, 0x030303, 0x000000, 0x000000, 0xffffff, 0x000000, 0x010101, 0x010101, 0x050505, 0x000000, 0x030303, 0x000000, 0x010101, 0x434343, 0x818181, 0x828282, 0x7f7f7f, 0x2f2f2f, 0x000000, 0x000000, 0x030303, 0xfdfdfd, 0x000000, 0x060606, 0x020202, 0x050505, 0x000000, 0x000000, 0x070707, 0x010101, 0x000000, 0x4e4e4e, 0x7e7e7e, 0x838383, 0x7e7e7e, 
    0x7e7e7e, 0x7d7d7d, 0x808080, 0x050505, 0x040404, 0x010101, 0x020202, 0x040404, 0x020202, 0x010101, 0x030303, 0x060606, 0x000000, 0x090909, 0x000000, 0x040404, 0x000000, 0x858585, 0x7a7a7a, 0x818181, 0x777777, 0x060606, 0x030303, 0x000000, 0x010101, 0x040404, 0x010101, 0x030303, 0x020202, 0x000000, 0x020202, 0x010101, 0x060606, 0xfafafa, 0x030303, 0x070707, 0x010101, 0x010101, 0x030303, 0x000000, 0x000000, 0x010101, 0x040404, 0x777777, 0x868686, 0x7b7b7b, 0x828282, 0x000000, 0x030303, 0x000000, 0x080808, 0x020202, 0x000000, 0x000000, 0x010101, 0x030303, 0x010101, 0x020202, 0x020202, 0x020202, 0x000000, 0x808080, 0x818181, 0x7d7d7d, 
    0x818181, 0x7e7e7e, 0x818181, 0x010101, 0x020202, 0x080808, 0x010101, 0x000000, 0x040404, 0x070707, 0x000000, 0x000000, 0x060606, 0x000000, 0x030303, 0x010101, 0x313131, 0x7c7c7c, 0x7e7e7e, 0x7e7e7e, 0x424242, 0x030303, 0x000000, 0x030303, 0x040404, 0xfcfcfc, 0x030303, 0x000000, 0x070707, 0x040404, 0x040404, 0x020202, 0x000000, 0xffffff, 0x040404, 0x020202, 0x080808, 0x000000, 0x040404, 0x010101, 0x030303, 0x020202, 0x010101, 0x404040, 0x737373, 0x868686, 0x7c7c7c, 0x2f2f2f, 0x020202, 0x000000, 0x020202, 0x050505, 0x010101, 0x040404, 0x050505, 0xf9f9f9, 0x050505, 0x020202, 0x060606, 0x030303, 0x020202, 0x7b7b7b, 0x838383, 0x7c7c7c, 
    0x828282, 0x7a7a7a, 0x4d4d4d, 0x030303, 0x060606, 0x000000, 0x040404, 0x060606, 0x000000, 0x010101, 0x040404, 0x050505, 0x000000, 0x030303, 0xfafafa, 0x050505, 0x7a7a7a, 0x808080, 0x828282, 0x797979, 0x010101, 0x0a0a0a, 0x000000, 0x040404, 0xfefefe, 0x020202, 0x010101, 0x0c0c0c, 0x000000, 0x030303, 0x030303, 0x010101, 0x040404, 0xfafafa, 0x000000, 0x000000, 0x000000, 0x090909, 0x000000, 0x040404, 0x010101, 0x030303, 0x030303, 0x000000, 0x878787, 0x727272, 0x808080, 0x7e7e7e, 0x050505, 0x020202, 0x060606, 0x020202, 0x040404, 0x000000, 0x020202, 0x090909, 0xfdfdfd, 0x000000, 0x000000, 0x010101, 0x070707, 0x4d4d4d, 0x7e7e7e, 0x7e7e7e, 
    0x7c7c7c, 0x7d7d7d, 0x040404, 0x080808, 0x000000, 0x050505, 0x070707, 0x020202, 0x060606, 0x000000, 0x020202, 0x000000, 0x020202, 0xffffff, 0x000000, 0x010101, 0x7e7e7e, 0x7d7d7d, 0x7c7c7c, 0x3e3e3e, 0x030303, 0x030303, 0x030303, 0x010101, 0xffffff, 0x000000, 0x040404, 0x020202, 0x050505, 0x050505, 0x040404, 0x000000, 0x010101, 0xffffff, 0x000000, 0x020202, 0x060606, 0x030303, 0x030303, 0xfdfdfd, 0x040404, 0x000000, 0x020202, 0x010101, 0x343434, 0x848484, 0x828282, 0x7a7a7a, 0x000000, 0x080808, 0x000000, 0x000000, 0x010101, 0x090909, 0x000000, 0x010101, 0x000000, 0xfefefe, 0x0b0b0b, 0x000000, 0x000000, 0x080808, 0x767676, 0x7f7f7f, 
    0x818181, 0x7f7f7f, 0x030303, 0x000000, 0x080808, 0x060606, 0x000000, 0x020202, 0x020202, 0x040404, 0x010101, 0x000000, 0xffffff, 0x000000, 0x040404, 0x313131, 0x808080, 0x848484, 0x838383, 0x000000, 0x000000, 0x030303, 0x040404, 0xffffff, 0x000000, 0x050505, 0x030303, 0x020202, 0x000000, 0x000000, 0x030303, 0x030303, 0x000000, 0x020202, 0x000000, 0x000000, 0x000000, 0x060606, 0x010101, 0x010101, 0xfafafa, 0x040404, 0x090909, 0x040404, 0x010101, 0x7e7e7e, 0x7b7b7b, 0x858585, 0x363636, 0x000000, 0xffffff, 0x000000, 0x080808, 0x000000, 0x040404, 0x010101, 0x040404, 0x010101, 0xfdfdfd, 0x020202, 0x040404, 0x010101, 0x818181, 0x848484, 
    0x808080, 0x828282, 0x000000, 0x050505, 0x020202, 0x000000, 0x040404, 0xffffff, 0x000000, 0x040404, 0x040404, 0xffffff, 0x000000, 0x000000, 0x090909, 0x757575, 0x818181, 0x767676, 0x787878, 0x050505, 0x000000, 0x000000, 0x070707, 0xfefefe, 0x010101, 0x080808, 0x020202, 0x020202, 0x010101, 0xfcfcfc, 0x050505, 0x000000, 0x040404, 0x000000, 0x040404, 0x020202, 0x030303, 0x040404, 0x000000, 0x060606, 0xfefefe, 0x040404, 0x040404, 0x000000, 0x060606, 0x7e7e7e, 0x777777, 0x7f7f7f, 0x797979, 0x040404, 0x030303, 0xffffff, 0x000000, 0x080808, 0x000000, 0x010101, 0x000000, 0x060606, 0x000000, 0xfefefe, 0x000000, 0x010101, 0x828282, 0x7a7a7a, 
    0x7c7c7c, 0x858585, 0x000000, 0x040404, 0x060606, 0x000000, 0xfefefe, 0x000000, 0x020202, 0x000000, 0x000000, 0x000000, 0x050505, 0x000000, 0x020202, 0x848484, 0x7b7b7b, 0x838383, 0x434343, 0x000000, 0x010101, 0x060606, 0xffffff, 0x080808, 0x000000, 0x030303, 0x040404, 0x010101, 0x020202, 0xffffff, 0x010101, 0x030303, 0x010101, 0x000000, 0x010101, 0x010101, 0x000000, 0x060606, 0x040404, 0x000000, 0x000000, 0xfefefe, 0x020202, 0x0a0a0a, 0x000000, 0x414141, 0x838383, 0x828282, 0x7e7e7e, 0x010101, 0x000000, 0x030303, 0xffffff, 0x010101, 0x080808, 0x050505, 0xffffff, 0x000000, 0x000000, 0x060606, 0xfdfdfd, 0x090909, 0x787878, 0x808080, 
    0x858585, 0x777777, 0x090909, 0x020202, 0x000000, 0xffffff, 0x050505, 0x010101, 0x040404, 0x000000, 0x030303, 0x090909, 0x010101, 0x030303, 0x040404, 0x7d7d7d, 0x838383, 0x7c7c7c, 0x020202, 0x0a0a0a, 0x000000, 0x010101, 0x010101, 0x010101, 0x030303, 0x050505, 0x020202, 0x030303, 0x030303, 0xffffff, 0x020202, 0x010101, 0x020202, 0x050505, 0x000000, 0x000000, 0x030303, 0x040404, 0x000000, 0x030303, 0x070707, 0xffffff, 0x000000, 0x010101, 0x090909, 0x020202, 0x7d7d7d, 0x7d7d7d, 0x7f7f7f, 0x050505, 0x030303, 0x000000, 0x060606, 0xffffff, 0x000000, 0x050505, 0x000000, 0xffffff, 0x0c0c0c, 0x000000, 0x020202, 0x040404, 0x7f7f7f, 0x828282
};
const tImage cockpit7 = { image_data_cockpit7, 64, 32,
    24 };

