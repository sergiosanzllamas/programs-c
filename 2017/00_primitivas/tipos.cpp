#include <stdio.h>       
#include <stdlib.h>

#define ROJO "\x1B[31m"
#define NORM "\x1B[39m"

int main(){
    int entero = 34;
    float realillo = 35.7;
    double real = 35.7;
    long int entero_largo = 93;
    unsigned char byte = 97;

    printf("%c,%c\n", 49,50);                                                                                                                                                                            
  
    printf(ROJO "12\n" NORM);         


  

	return EXIT_SUCCESS;
}
