#include <stdio.h>
#include <stdlib.h>
int es_par(int prueba) {
    return !(prueba % 2);
}

int main(){
if (es_par(2))
	return EXIT_SUCCESS;
}
