#include<stdio.h>
#include<stdlib.h>

#define N 6
typedef struct{
	int id;
	double sueldo;
	int saldo;
	char nombre[N];
}Empleado;


int main(){

	Empleado jefe = {23, -4.6, 34, 56};

	void *p = (void *) &jefe;

	printf(" el jefe esta en %p\n", p);

	for(unsigned i=0; i<N; i++)
		printf("%X\n", *((char *) p +1));
	printf("\n");


















	return EXIT_SUCCESS;
}
