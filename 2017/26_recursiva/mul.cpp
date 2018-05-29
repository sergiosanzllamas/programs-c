#include <stdio.h>
#include <stdlib.h>
int suma(int divisores, int divisor){
    int suma = 0;
    
    if(divisores <= 1) 
        return suma;
    if(divisores < divisor)
      suma+=divisores;

    return suma(divisores,divisor-1);
}
int main(){
    int nuemero, subtotal;
    printf("dame el divisor y  dividendo");
    scanf(" %i", &numero);

    subtotal = suma(divisores, numero);

    suma(divisores, divisor-1);

	return EXIT_SUCCESS;
}
