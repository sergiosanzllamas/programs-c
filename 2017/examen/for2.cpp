#include <stdio.h>
#include <stdlib.h>
#define N 3
int main(){

    double a[N]={3,4,6};
    double b[N]={4,7,9};
    double suma = 0;
    double mul;
        for(int y=0; y<N; y++){

mul = a[y] * b[y];
suma *= mul; 

        }
          printf("La suma es %lf", suma);

	return EXIT_SUCCESS;
}
