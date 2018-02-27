#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define N 0x100

 int main(){
      char cadena[N];
      char *tema = NULL;
      int longitud;
      printf("dime tu nombre:");
      scanf("%[^\n]", cadena);
      longitud = strlen(cadena);
      tema = (char*) malloc((longitud+1) * sizeof(char));
      strncpy(tema, cadena, longitud+1);
      printf("%i\n", longitud);
      free(tema);

	return EXIT_SUCCESS;
}
