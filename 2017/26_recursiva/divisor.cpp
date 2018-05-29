#include <stdio.h>
#include <stdlib.h>
bool tiene_un_divisor(int dividendo, int divisor){

    if( divisor <= 1 || dividendo < divisor)
        return false;
    if(dividendo % divisor == 0)
        return true;

    return tiene_un_divisor(dividendo,divisor-1);



}
int main(){
    int dividendo,divisor;
    printf("introduce dividendo y divisor:");
    scanf(" %i %i", &dividendo, &divisor);

    if(tiene_un_divisor(dividendo,divisor)){
        printf(" tiene\n");

    }else
        printf("no tiene divisor\n");

    return EXIT_SUCCESS;
}
