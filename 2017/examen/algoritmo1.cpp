#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h>
#define N 0x100
int main(){

    int numeropalabras;
    char **cadena = NULL;
    char lista[N];
    int longitud;

    printf("cuantas palabras quieres: ");
    scanf(" %i", &numeropalabras);
    for(int contador=0; contador<numeropalabras; contador++){
        __fpurge(stdin);
        printf("PALABRA: ");
        fgets(lista,N,stdin);



        cadena = (char **) realloc(cadena, (contador + 1) * sizeof(char*));

        longitud = strlen(lista);

        *(cadena + contador) = (char *) malloc(longitud);
        strncpy(*(cadena + contador), lista, longitud);


        *(*(cadena + contador) + longitud - 1) = '\0';
    }

    for(int contador=0; contador<numeropalabras; contador++)
        printf(" %s \n", *(cadena + contador));

    for(int contador=0; contador<numeropalabras; contador++)
        free(*(cadena + contador));


    free(cadena);

    return EXIT_SUCCESS;
}
