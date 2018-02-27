#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define N 0x100
int main(){
    char palabras[N];
    char *pal = NULL;
    int letras;


    printf("Dime tu nombre:");
    scanf("%[^\n]", palabras);
    letras = strlen(palabras);
    pal = (char*) malloc((letras +1) * sizeof(char));
    strncpy(pal, palabras, letras+1);
     printf(" %i", letras);
    free(pal);

printf("\n\a");


    return EXIT_SUCCESS;
}
