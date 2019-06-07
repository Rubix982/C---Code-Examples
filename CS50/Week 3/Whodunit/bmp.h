// BMP-related data types based on Microsoft's own

#include <stdint.h>

// aliases for C/C++ primitive data types
// https://msdn.microsoft.com/en-us/library/cc230309.aspx
typedef uint8_t  BYTE;  // unsigned char
typedef uint16_t WORD;  // unsigned short
typedef int32_t  LONG;  // int
typedef uint32_t DWORD; // unsigned int

// information about the type, size, and layout of a file
// https://msdn.microsoft.com/en-us/library/dd183374(v=vs.85).aspx
#define PACKED
#pragma (pack(push,1))
typedef struct {
    WORD bfType;
    DWORD bfSize;
    WORD bfReserved1;
    WORD bfReserved2;
    DWORD bfOffBits;
} // __attribute__((__packed__))
#pragma (pack(pop))
#undef PACKED
BITMAPFILEHEADER;

// information about the dimensions and color format
// https://msdn.microsoft.com/en-us/library/dd183376(v=vs.85).aspx
#define PACKED
#pragma (pack(push,1))
typedef struct
{
    DWORD biSize;
    LONG biWidth;
    LONG biHeight;
    WORD biPlanes;
    WORD biBitCount;
    DWORD biCompression;
    DWORD biSizeImage;
    LONG biXPelsPerMeter;
    LONG biYPelsPerMeter;
    DWORD biClrUsed;
    DWORD biClrImportant;
} // __attribute__((__packed__))
#pragma (pack(pop))
#undef PACKED
BITMAPINFOHEADER;

// relative intensities of red, green, and blue
// https://msdn.microsoft.com/en-us/library/dd162939(v=vs.85).aspx
#define PACKED
#pragma (pack(push,1))
typedef struct
{
    BYTE rgbtBlue;
    BYTE rgbtGreen;
    BYTE rgbtRed;
} // __attribute__((__packed__))
#pragma (pack(pop))
#undef PACKED
RGBTRIPLE;
