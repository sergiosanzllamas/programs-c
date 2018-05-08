#include <stdio.h>
#include <stdlib.h>
int  suma(int op1, int op2){
    return(op1 + op2);
}
int main(){
int (*resta)(int op1, int op2);   
int a = 3, b = 7;
int *p;
char e;
printf("a o b:");
scanf(" %c", &e);
resta = &suma;

printf(" es %i\n", (*resta)(a,b));

	return EXIT_SUCCESS;
}
