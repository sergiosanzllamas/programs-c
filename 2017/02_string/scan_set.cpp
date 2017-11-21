
#include <stdio.h>
#include <stdlib.h>

int main(){


       char nombre[16];
       char hexadecimal[16];
       int num;
       printf("Entero: ");
       scanf("%i", &num);
       scanf("%s", nombre);
       printf("[%i] => %s.\n", num, nombre);

        printf(" Hexadecimal: ");
        scanf(" %[0123456789abcdefABCDEF]", hexadecimal);
        printf("0x%sh\n", hexadecimal);
	return EXIT_SUCCESS;
}
