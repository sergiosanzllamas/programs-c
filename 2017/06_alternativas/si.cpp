#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;

    printf("numero: ");
    scanf(" %i", &numero);

if (numero % 2 == 0){
     printf("el numero %i es par\n", numero);
     printf("eres un genio \n");
}
else{

    printf(" el numero %i es impar \n", numero);
    printf("eres un webon \n");
}


	return EXIT_SUCCESS;
}
