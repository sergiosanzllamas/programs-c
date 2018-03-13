#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define N 0x200
int main(){

    char **lista = NULL;//PUNTEROS IGUALES A NULL
    char buffer[N];
    int len;
    char *algun_sitio = NULL;
    bool cuando_quiera = true;
    while(cuando_quiera){
        printf("dime tu nombre: ");
        fgets(buffer, N, stdin);
        len = strlen(buffer);
        algun_sitio = (char *) malloc(len * sizeof(char));
        strncpy(algun_sitio, buffer, len - 1);
        algun_sitio[len-1] = '\0';
        cuando_quiera = false;
    }
    return EXIT_SUCCESS;
}
