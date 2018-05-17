#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *mi_tubo;
    mi_tubo = fopen("a.txt", "w");
    fprintf(mi_tubo,"hola amigo\n");
    fclose(mi_tubo);
	return EXIT_SUCCESS;
}
