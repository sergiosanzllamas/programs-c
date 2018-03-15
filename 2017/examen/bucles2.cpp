#include <stdio.h>
#include <stdlib.h>

int main(){
    int opcion;

    do{
        printf("dame un dato:");
        scanf(" %i", &opcion);
    }while(opcion < 1 || opcion > 5);
          printf(" la opcion es %i \n", opcion);



	return EXIT_SUCCESS;
}
