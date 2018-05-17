#include <stdio.h>
#include <stdlib.h>

int main(){
    fpos_t pos;
    FILE *libro;
    libro = fopen("a.txt", "w");
    printf("en e principio: %li\n", ftell(libro));
    fgetpos(libro, &pos);
    fseek(libro, 100, SEEK_SET);
    printf("a 100 principio: %li\n", ftell(libro));
    fgetpos(libro, &pos);
    printf("a en el principio: %li\n", ftell(libro));
    fclose(libro);



    return EXIT_SUCCESS;
}
