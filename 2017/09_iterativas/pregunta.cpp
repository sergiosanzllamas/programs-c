#include <stdio.h>
#include <stdlib.h>

int main(){
int numero;
do{
    printf("dime un numero del 1 al 3: ");  
     scanf(" %i", &numero);

}
while(numero<1 || numero>3); 

  

	return EXIT_SUCCESS;
}
