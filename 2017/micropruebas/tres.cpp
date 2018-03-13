#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#define N 3

int main(){


	char s = ' ';
	double matriz [N][N];
	for(int s=0; s<6; s++){

		printf("\n--------------\n");
		printf("\n| %lf  | %lf | %lf |\n", &matriz[0][0], &matriz[0][1], &matriz[0][2]);
		/*printf("\n--------------\n");
		  printf("\n| %c | %c | %c |\n",s,s,s);
		  printf("\n--------------\n");
		  printf("\n| %c | %c | %c |\n",s,s,s);
		  printf("\n--------------\n");*/




		printf("dame cordenadas");
		scanf(" %lf", &matriz[0][0]);
		printf("dame otra");
		scanf(" %lf", &matriz[0][1]);
		/*matriz[0][0] = '3';
		matriz[0][1] = '2';*/
	}
	system("clear");
	/*for(int f=0; f<3; f++){*/















	return EXIT_SUCCESS;
}
