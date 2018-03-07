#include<stdio.h>
#include<stdlib.h>

#include<string.h>
#define N 9



int main(){

	char frase[] = "pedro";
	char *letra = frase;
	char reserva;
	int intentos = 0;

	printf("_ _ _ _ _ \n");
	printf(" %s\n", frase);
	while ( intentos <= 5){
		printf("dime una letra:");
		scanf(" %s", &reserva);
		intentos++;

		if (reserva  == *letra){
			printf("felicidades era pedro \n");
			intentos = 8;
		}
		else{ 
			printf("llevas %i \n", intentos);

			for(int a=0; a<5; a++){
				/* if(reserva[a] == *letra[a]){
				   printf(" %s", &reserva);

				   else{

				   printf("_");
				   }

				   }*/



			}

		}

	}

	return EXIT_SUCCESS;
}
