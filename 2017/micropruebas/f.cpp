#include <stdio.h>
#include <stdlib.h>
#define N 10
bool cuadro(int fila, int col){
    return col == 0 || col == N - 1 || fila == 0 || fila == N - 1;
}
int main(){
    int fila, col;
for(int c=0; c<N; c++){
    for(int f=0; f<N; f++){
        if(cuadro(fila, col))
            printf("*");
        else
            printf("       ");
    
 printf("\n");   
    }
}
	return EXIT_SUCCESS;
}
