#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)
#define BYTE uint8_t
#define DWORD uint32_t
#define LONG int32_t
#define WORD uint16_t
typedef struct{
    char signature[2];
    unsigned size;
    unsigned short reserved1;
    unsigned short reserved2;
    unsigned data_offset;
}BMPHeader;

typedef struct{
    int bitmapcoreheader[3];
    int OS22XBITMAPHEADER[16];
    int bitmapinfoheader[10];
    int bitmapv2infoheader[13];
    int bitmapv3infoheader[14];
    int bitmapv4header[27];
    int bitmapv5header[31];

}DIBHeader;

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
void show(BMPHeader header){
    printf("Signature:        %c%c\n", header.signature[0], header.signature[1]);
    printf("Tamaño:        %i\n", header.size);
    printf("datos de imagen: %i (%Xh)\n", header.data_offset, header.data_offset);
}

void show(DIBHeader dib){
    printf("Nucleo de mapa:");
    for(int i=0; i<3; i++)
        printf("%i", dib.bitmapcoreheader[i]);
    printf("\n");
    printf("Cabeza del cesar:");
    for(int i=0; i<16; i++)
        printf("%i", dib.OS22XBITMAPHEADER[i]);
    printf("\n");
    printf("info de la cabecera:");
    for(int i=0;i<10;i++)
        printf("%i", dib.bitmapinfoheader[i]);
    printf("\n");
    printf("info 2:");
    for(int i=0; i<13; i++)
        printf("%i", dib.bitmapv2infoheader[i]);
    printf("\n");
    printf("info 3:");
    for(int i=0;i<14;i++)
        printf("%i", dib.bitmapv3infoheader[i]);
    printf("\n");
    printf("mapa 4:");
    for(int i=0; i<27;i++)
        printf("%i", dib.bitmapv4header[i]);
    printf("\n");
    printf("mapa5:");
    for(int i=0;i<31;i++)
        printf("%i", dib.bitmapv5header[i]);
    printf("\n");

}
void show(BITMAPFILEHEADER file){
    printf("tipo:");
    for(int i=0; i<)
}
int main(){
    BMPHeader header;
    DIBHeader dib;
    const char *filename = "a.jpg";
    FILE *pbmp = NULL;

    if(!(pbmp = fopen(filename, "r"))){
        fprintf(stderr, "no ha encontrado\n");
        return EXIT_FAILURE;
    }

    fread(&header, sizeof(BMPHeader), 1, pbmp);
    fread(&dib, sizeof(DIBHeader), 1, pbmp);
    fclose(pbmp);
    show(header);
    show(dib);
    return EXIT_SUCCESS;
}
