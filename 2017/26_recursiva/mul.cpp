#include <stdio.h>
#include <stdlib.h>
int sumai = 0;

int suma(int divisores, int divisor){

    if(divisores%divisor ==0){

        sumai+=divisor;
        if(divisor<=1)
            return sumai;
    }
    return suma(divisores,divisor-1);
}
int main(){
    int numero, subtotal, divisor;
    printf("dame el numero:");
    scanf(" %i", &numero);
    divisor = numero-1;
    subtotal = suma(numero,divisor);


    printf("la suma es %i\n", subtotal);
    if(subtotal == numero)
        printf("es\n");
    else
        printf("no\n");
    return EXIT_SUCCESS;
}
