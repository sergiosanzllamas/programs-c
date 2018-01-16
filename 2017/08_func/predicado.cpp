#include <stdio.h>
#include <stdlib.h>
int es_par (int op1){
    printf("dime un numero: ");
    scanf(" %i", &op1);
    return op1;}
    int main(){



        if (es_par(2) % 2==0)
            printf("Es par. \n");
        else  
            printf("es impar \n");
        return EXIT_SUCCESS;
    }
