#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define N 0X100

int main(){
    char cadena[N];
    int longitud;
    char **l;



    printf("dime tu nombre:");
    scanf("%[^\n]", cadena);
    printf("\n");
    longitud = strlen(cadena);
   
    l =(char **) malloc(sizeof(char *));

    *l = (char *) malloc((longitud + 1) * sizeof(char));
    strncpy(*l, cadena, longitud +1);
     
         printf("dime tu nombre:");
           scanf("%[^\n]", cadena);
            printf("\n");
             longitud = strlen(cadena);


    printf(" tu nombre %s tiene %i caracteres\n", *l, longitud);
          printf(" tu nombre %s tiene %i caracteres\n", *(l+1), longitud);
    free(*l);
    free(*(l+1));
    free(l);
    return EXIT_SUCCESS;
}
