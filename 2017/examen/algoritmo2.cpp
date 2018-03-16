#include <stdio.h>
#include <stdlib.h>

#define N 100

bool es_primo(int dividendo){
    for(int divisor= 2; divisor<dividendo; divisor++)
        if(dividendo % divisor == 0)
            return false;
    return true;


}

int main(){
    int matriz[N];
    for(int primos=0, numero=2; primos<N; numero++)
        if(es_primo(numero))
            matriz[primos++] = numero;
    for(int primos=0; primos<N; primos++)
        printf(" %i", matriz[primos]);
    printf("\n");




    return EXIT_SUCCESS;
}
