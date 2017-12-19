#include <stdio.h>
#include <stdlib.h>

int main(){

int rojo,
    azul,
    amarillo;

printf("Dame el valor de rojo:");
scanf(" %i", &rojo);
printf("Dame el valor de azul:");
scanf(" %i", &azul);
printf("Dame el valor de amarillo:");
scanf(" %i", &amarillo);

   if (rojo == 0 & azul == 0 & amarillo == 0){
   printf("sale negro \n");}

        else if (rojo == 1 & azul == 1 & amarillo ==  1) {
             printf("sale blanco \n");
        }  
    
      else if (rojo == 1 & azul == 0 & amarillo == 0) {

             printf("sale rojo \n");

      }

     else if ( rojo == 0 & azul == 1 & amarillo == 0 ) {

         printf("sale azul \n");
     }

      else if ( rojo == 0 & azul == 0 & amarillo == 1  ) {
                  printf("sale amarillo \n");


      }

       else if ( rojo == 1 & azul == 0 & amarillo == 1  ) {
            printf("sale naranja \n");
            
       }

        else if ( rojo == 1 & azul == 1 & amarillo == 0  ) {
             printf("sale morado \n");
        }

         else if ( rojo == 0 & azul == 1 & amarillo == 1  ) {
               printf("sale verde \n");

         }

	return EXIT_SUCCESS;
}
