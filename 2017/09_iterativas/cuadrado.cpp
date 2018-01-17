#include <stdio.h>
#include <stdlib.h>

int main(){
	for(int y=0; y<4; y++){

        printf("cuadrado numero %i \n", y);
		for (int i=0; i<7; i++)
			printf("* ");
		printf("\n");
		for (int i=0;i<1;i++)
			for(int d=0; d<5;d++)
				printf("*           *\n");
		for (int u=0; u<7; u++)
			printf("* ");
		printf("\n");

		printf("\n");
	}
	return EXIT_SUCCESS;
}
