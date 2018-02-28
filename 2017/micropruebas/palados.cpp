#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define N 0X100

int main(){
    char cadena[N];
    int longitud;
    char **l;



    printf("dime tu nombre:");
    scanf(" %[^\n]", cadena);
    longitud = strlen(cadena);

    l =(char **) malloc(sizeof(char *));
    *l = (char *) malloc((longitud + 1) * sizeof(char));
    strncpy(*l, cadena, longitud +1);

    printf("dime tu nombre:");
    scanf(" %[^\n]", cadena);
    longitud = strlen(cadena);

    l = (char **)realloc(l, 2*sizeof(char *));
    *(l+1) = (char *) malloc((longitud + 1) * sizeof(char));
    strncpy(*(l+1), cadena, longitud +1);


    printf("tu nombre %s \n", *l);
    printf("tu nombre %s\n", *(l+1));
    free(*l);
    free(*(l+1));
    free(l);
    return EXIT_SUCCESS;
}
