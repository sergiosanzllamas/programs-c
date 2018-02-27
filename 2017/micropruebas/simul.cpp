#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define N 0X100

int main(){
    char cadena[N];
    char *punt = NULL;
    int longitud;



    printf("dime tu nombre:");
    scanf("%[^\n]", cadena);
    printf("\n");
    longitud = strlen(cadena);
    punt = (char *) malloc((longitud + 1) * sizeof(char));
    strncpy(punt, cadena, longitud +1);
    free(punt);
    return EXIT_SUCCESS;
}
