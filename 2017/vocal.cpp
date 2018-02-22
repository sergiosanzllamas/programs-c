#include<stdio.h>
#include<stdlib.h>




int main(){
	char frase[] = ("mi moto alpina derrapante");
	char *letra = frase;
	char reserva;
	char res;
	printf("dime una vocal:");
	scanf("%c", &reserva);
	while(* letra != '\0'){
		if(*letra == 'a' || *letra == 'e' || *letra == 'i' || *letra == 'o' || *letra == 'u')
			*letra = reserva;





		printf(" %c", *letra);
		letra++;

	}

	printf("\n");
	return EXIT_SUCCESS;
}
