#include <stdio.h>
#include <stdlib.h>



void llamada(int *x, int *y){

        printf("dame tu edad: ");
        scanf(" %i", x);
        printf("dime tu año de nacimiento: ");
        scanf(" %i", y);
        printf(" tu edad es %i y año es %i \n", *x, *y );


        }


        int main(){
        int a, b;
        llamada(&a,&b);


        return EXIT_SUCCESS;
        }
