#include <stdio.h>
#include <stdlib.h>

int main(){
    int opcion;

    do{
        printf("dame un numero del 1 al 5: ");
        scanf(" %i", &opcion);
    }while(opcion <1 || opcion >5);
    printf(" %i", opcion);

	return EXIT_SUCCESS;
}
