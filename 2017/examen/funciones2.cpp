#include <stdio.h>
#include <stdlib.h>
void llamada(int *x, int *y){
    printf("tu numero favorito; ");
    scanf(" %i", x);
    printf("dame tu fecha:");
    scanf(" %i", y);
}
int main(){
int a, b;
llamada(&a,&b);

	return EXIT_SUCCESS;
}
