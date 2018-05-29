#include <stdio.h>
#include <stdlib.h>


void oracion(char *letra){
    printf("%c", *letra);
    if(*(letra+1) != '\0')
        oracion(letra + 1);
printf(" %c", *letra);
    
        
    }
    
int main(){

    char frase[] = "daba el arroz";
    char *letra = frase;
    oracion(letra);
    printf("\n");







    return EXIT_SUCCESS;
}
