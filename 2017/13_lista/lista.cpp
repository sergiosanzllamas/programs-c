#include <stdio.h>
#include <stdlib.h>
#include<strings.h>
#define N 0x200
int main(){

    char **lista = NULL;//PUNTEROS IGUALES A NULL
    char buffer[N];
    int len;
    while(cuando_quiera){
        printf("dime tu nombre: ");
fgets(buffer, N, stdin);
len = strlen(buffer);
algun_stio = (char *) malloc(len * sizeof(char));
strncpy(algun_stio, buffer, len-1);
algun_stio[len-1] = '\0';
   
    }
	return EXIT_SUCCESS;
}
