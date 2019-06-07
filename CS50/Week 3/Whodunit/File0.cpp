#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

#pragma (pack(push,1))
typedef struct BitMap {
    short Signature;
    long Reserved1;
    long Reserved2;
    long DataOffset;
    long Size;
    long Width;
    long Height;
    short Planes;
    short BitsPerPixel;
    long Compression;
    long SizeImage;
    long XPixelsPreMeter;
    long YPixelsPreMeter;
    long ColorsUsed;
    long ColorsImportant;
    long data[16];
} Map;
#pragma (pack(pop))

int main(void) {

    Map source_info;
    
    FILE * fp, * Dfp;

    Dfp = fopen("filename.bin", "wb");

    if ( !(fp = fopen("clue.bmp","rb"))) {
        printf(" cannot open files.");
        exit(-1);
    }

    while ( ( fread(&source_info, sizeof(source_info), 1, fp) ) != 0 )
    {
        printf("%x ", source_info.DataOffset);
        printf("%x ", source_info.Width * source_info.Height );
//        for ( int i = 0; i < 16 ; ++i ) {
 //           printf("%x", source_info.data[i]);
//            fprintf(Dfp, "|%x|\t", source_info.data[i]);
//        }
    
        puts("");
    }

    return 0;
}