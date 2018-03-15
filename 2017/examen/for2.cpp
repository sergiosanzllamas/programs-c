#include <stdio.h>
#include <stdlib.h>
#define N 3
int main(){
double a[N] = {1,1,4};
double b[N] = {2,3,5};
double suma = 0;
for(int c=0; c<N; c++){
    suma += a[c] * b[c];
}
printf( "la suma es %lf\n", suma);
	return EXIT_SUCCESS;
}
