#include <stdio.h>
#include <stdlib.h>
#define N 3
int main(){
    double a[N] = {1, 2, 4};
    double b[N] = {3, 6, 2};
    double suma = 0;
    double mul;
  
    for(int f=0; f<N; f++){
         
        mul = a[f] * b[f];

        suma += mul; 
    }

    printf("la suma es: %lf \n", suma);


    return EXIT_SUCCESS;
}
