// Copies a BMP file

#include <stdio.h>
#include <stdlib.h>

#include "bmp.h"

int main(int argc, char *argv[])
{
    // ensure proper usage
    if (argc != 3)
    {
        printf("Usage: copy infile outfile\n");
        return 1;
    }

    // remember filenames
    char *infile = argv[1];
    char *outfile = argv[2];

    // open input file
    FILE *inptr;
    if ((inptr = fopen(infile, "r")) == NULL)
    {
        printf("Could not open %s.\n", infile);
        return 2;
    }

    // open output file
    FILE *outptr = fopen(outfile, "w");
    if (outptr == NULL)
    {
        fclose(inptr);
        printf("Could not create %s.\n", outfile);
        return 3;
    }

    printf("\n");

    // FILE * test = fopen(in);

    // read infile's BITMAPFILEHEADER
    BITMAPFILEHEADER bf;
    fread(&bf, sizeof(BITMAPFILEHEADER), 1, inptr);

    // read infile's BITMAPINFOHEADER
    BITMAPINFOHEADER bi;
    fread(&bi, sizeof(BITMAPINFOHEADER), 1, inptr);

    // while (fread(&bi, sizeof(BITMAPINFOHEADER), 1, test) && fread(&bf, sizeof(BITMAPFILEHEADER), 1, test)) {
    //     printf("%08x %08x %08x %08x %08x %08x %08x %08x %08x %08x %08x\n", bi.biBitCount, bi.biClrImportant, bi.biClrUsed, bi.biCompression,
    //                                                     bi.biHeight, bi.biPlanes, bi.biSize, bi.biSizeImage, bi.biWidth,
    //                                                     bi.biXPelsPerMeter, bi.biYPelsPerMeter);
    //     printf("%08x %08x %08x %08x %08x\n", bf.bfOffBits, bf.bfReserved1, bf.bfReserved2, bf.bfSize, bf.bfType );
    //     printf("------------------------------------------------------\n");
    // }

    // ensure infile is (likely) a 24-bit uncompressed BMP 4.0
    /*    if (bf.bfType != 0x4d42 || bf.bfOffBits != 54 || bi.biSize != 40 ||
        bi.biBitCount != 24 || bi.biCompression != 0)
    {
        fclose(outptr);
        fclose(inptr);
        printf("Unsupported file format.\n");
        return 4;
    } */

    // write outfile's BITMAPFILEHEADER
    fwrite(&bf, sizeof(BITMAPFILEHEADER), 1, outptr);

    // write outfile's BITMAPINFOHEADER
    fwrite(&bi, sizeof(BITMAPINFOHEADER), 1, outptr);

    // determine padding for scanlines
    int padding = (4 - (bi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;

    // // iterate over infile's scanlines
    // for (int i = 0, biHeight = abs(bi.biHeight); i < biHeight; i++)
    // {
    //     // printf("%d %d %d %d\n", padding, biHeight, bi.biHeight, bi.biWidth);

    //     // iterate over pixels in scanline
    //     for (int j = 0; j < bi.biWidth; j++)
    //     {
    //         printf("%d %d\n", bi.biWidth, j);
    //         // temporary storage
    //         RGBTRIPLE triple;

    //         // read RGB triple from infile
    //         fread(&triple, sizeof(RGBTRIPLE), 1, inptr);

    //         // write RGB triple to outfile
    //         fwrite(&triple, sizeof(RGBTRIPLE), 1, outptr);
    //     }

    //     // skip over padding, if any
    //     fseek(inptr, padding, SEEK_CUR);

    //     // then add it back (to demonstrate how)
    //     for (int k = 0; k < padding; k++)
    //     {
    //         fputc(0x00, outptr);
    //     }
    // }

    // temporary storage
    RGBTRIPLE triple;

    // read RGB triple from infile
    while (fread(&triple, sizeof(RGBTRIPLE), 1, inptr) != 0)
    {
        // write RGB triple to outfile
        fwrite(&triple, sizeof(RGBTRIPLE), 1, outptr);
    }

    printf("%x %x %x\n", triple.rgbtBlue, triple.rgbtGreen, triple.rgbtRed);

    fseek(inptr, padding, SEEK_CUR);

    // then add it back (to demonstrate how)
    for (int k = 0; k < padding; k++)
    {
        fputc(0x00, outptr);
    }

    // close infile
    fclose(inptr);

    // close outfile
    fclose(outptr);

    // success
    return 0;
}