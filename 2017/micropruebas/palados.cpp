#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<strings.h>
#define N 0x100 

int main(){
	char cadena[N];
	int longitud;
	char **l = NULL;
	int nombre = 0;
	int b = 0;
	int c = 1;
	while(nombre<1){
		printf("dime tu nombre:");
		scanf(" %[^\n]", cadena);
		longitud = strlen(cadena);

		l =(char **) malloc(c * sizeof(char *));
		*l = (char *) malloc((longitud + 1) * sizeof(char));
		strncpy(*l, cadena, longitud +1);

		l++;
		*l++;
		b++;
		c++;
       nombre++;
		/*printf("dime tu nombre:");
		  scanf(" %[^\n]", cadena);
		  longitud = strlen(cadena);

		  l = (char **)realloc(l, 2*sizeof(char *));
		 *(l+1) = (char *) malloc((longitud + 1) * sizeof(char));
		 strncpy(*(l+1), cadena, longitud +1);*/


		// printf("tu nombre %s \n", *l);
		//printf("tu nombre %s\n", *(l+1));
        }
		for(int a=0; a<5; a++){




		  printf(" tu nombre es %s \n", (*l));
          free(*l);          
          
       
	}



      


	
	/*for(int a = 0; a<5; a++){

	  printf("tu nombre %s \n", *(l+1));
	  free(*l);
	  free(l);




	  }*/
	return EXIT_SUCCESS;
}
