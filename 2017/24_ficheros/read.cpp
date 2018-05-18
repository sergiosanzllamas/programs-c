#include <stdio.h>
#include <stdlib.h>

int main(){
FILE * pf;
int num;
pf= fopen("b.int", "rb");
fread(&num, sizeof(int), 1, pf);
fclose(pf);

printf("ha leido %i\n", num);
	return EXIT_SUCCESS;
}
