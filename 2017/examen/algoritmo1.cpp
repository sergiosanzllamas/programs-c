#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

    char *cadena = NULL;
    char palabra;

    printf(" dame una palabra: ");
    scanf(" %s", cadena);
    *cadena = palabra;

    cadena = (char *) malloc(sizeof(char));

  
    

    printf(" %s", &palabra);
    free(cadena);

	return EXIT_SUCCESS;
}
