#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *libreta;
    libreta = fopen("57159-0.txt", "r");
    int contador;
    char caracter, letra;
    printf("mete el caracter que quieres: ");
    scanf(" %c", &letra);
    do{ if(fgetc(libreta) == caracter)
        ++contador;
    } while((caracter = fgetc(libreta)) != EOF);


    printf("hay %i %c \n", contador, letra);
    fclose(libreta);
    return EXIT_SUCCESS;
}
