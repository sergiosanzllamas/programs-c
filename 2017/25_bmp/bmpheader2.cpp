#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)
#define BYTE u_int8_t
#define DWORD u_int32_t
#define LONG int32_t
#define WORD u_int16_t

typedef struct{
    WORD bfType;
    DWORD bfSize;
     WORD bfReserved0;
     WORD bfReserved1;
   DWORD bfOffBits;
}BITMAPFILEHEADER;

typedef struct{
     DWORD  biSize;
   LONG   biWidth;
    LONG   biHeight;
     WORD   biPlanes;
     WORD   biBitCount;
    DWORD  biCompression;
    DWORD  biSizeImage;
    LONG   biXPelsPerMeter;
    LONG   biYPelsPerMeter;
     DWORD  biClrUsed;
    DWORD  biClrImportant;
}BITMAPINFOHEADER;

typedef struct{
   BYTE  rgbtBlue;
    BYTE  rgbtGreen;
   BYTE  rgbtRed;
}RGBTRIPLE;



void show_file(BITMAPFILEHEADER file){
    printf("tipo: %u", file.bfType);
    printf("tAMAÑO %u", file.bfSize);
    printf("Bits %u", file.bfOffBits);
}
void show_info(BITMAPINFOHEADER info){
printf("Tamaño: %u\n", info.biSize);
printf("anchura: %u\n", info.biWidth);
printf("altura: %u\n", info.biHeight);
printf("plano: %u\n", info.biPlanes);
printf(" bits: %u\n", info.biBitCount);
printf("compresion: %u\n", info.biCompression);
printf("imagen: %u\n", info.biSizeImage);
printf("pels: %u\n", info.biXPelsPerMeter);
printf("pels: %u\n", info.biXPelsPerMeter);
printf("use: %u\n", info.biClrUsed);
printf("importante: %u\n", info.biClrImportant);
}
void show_color(RGBTRIPLE color){
printf("azul: %u\n", color.rgbtBlue);
printf("rojo: %u\n", color.rgbtRed);
printf("verde: %u \n", color.rgbtGreen);
}
int main(){
    BITMAPFILEHEADER file;
    BITMAPINFOHEADER info;
    RGBTRIPLE color;

    const char *filename = "a.jpg";
    FILE *pbmp = NULL;

    if(!(pbmp = fopen(filename, "r"))){
        fprintf(stderr, "no ha encontrado\n");
        return EXIT_FAILURE;
    }

    fread(&file, sizeof(BITMAPFILEHEADER), 1, pbmp);
    fread(&info, sizeof(BITMAPINFOHEADER), 1, pbmp);
    fread(&color, sizeof(RGBTRIPLE), 1, pbmp);
    fclose(pbmp);
    show_file(file);
    show_info(info);
    show_color(color);
    return EXIT_SUCCESS;
}
