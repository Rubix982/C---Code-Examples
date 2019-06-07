#include <iostream>
#include <fstream>
#include "bmp.h"

int main(int argc, char * argv[]) {

    FILE * InFile, * OutFile;

    if ( argc != 4 ) {
        std::cout << "Usage: n infile outfile";
        exit(-1);
    }

    if ( ( InFile = fopen(argv[2], "rb") ) == nullptr)
    {
        std::cerr << "Infile not found. Exiting.\n";
        return 2;
    }

    OutFile = fopen( argv[3], "wb" );

    BITMAPFILEHEADER Bf;
    BITMAPINFOHEADER Bi;

    // while ( fread(&Bf, sizeof(BITMAPFILEHEADER), 1, InFile) != 0 || 
    //     fread(&Bi, sizeof(BITMAPINFOHEADER), 1, InFile) != 0 ) {
    //         fwrite(&Bf, sizeof(BITMAPFILEHEADER), 1, OutFile);
    //         fwrite(&Bi, sizeof(BITMAPINFOHEADER), 1, OutFile);
    // }

    fread(&Bi, sizeof(BITMAPINFOHEADER), 1, InFile);
    fread(&Bf, sizeof(BITMAPFILEHEADER), 1, InFile);

    fwrite(&Bf, sizeof(BITMAPFILEHEADER), 1, OutFile);
    fwrite(&Bi, sizeof(BITMAPINFOHEADER), 1, OutFile);

    printf("%d %d %d %d", Bi.biWidth, Bi.biSizeImage, Bi.biSize, Bi.biHeight);

    fclose(InFile);
    fclose(OutFile);
}