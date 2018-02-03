#include<stdio.h>
#include<stdlib.h>

#define N 2


int matrizA[N][N]{
	{2,4},
		{3,9}
};                  
int matrizB[N][N]{
	{5,1},
		{4,8}
};
int main(){
	int r[N][N];
	int f=0;
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			f=0;
			for(int k=0; k<N; k++)
				f+=matrizA[i][k]*matrizB[k][j];
			r[i][j] =f;
			printf("%4i", r[i][j]);
		}
		printf("\n");

	}
return EXIT_SUCCESS;
}
