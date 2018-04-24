#include<stdio.h>
#include<stdlib.h>



#define N 50
typedef struct{
	char nombre[N];
	char puesto[N];
	double salario;
}Empleado;

void rellena(Empleado *nuevo){
	printf("Nombre:");
	scanf("%s", nuevo->nombre);
	printf("Puesto:");
	scanf("%s", nuevo->puesto);
	printf("Salario:");
	scanf("%lf", &nuevo->salario);

} 

void pinta(Empleado empleado){
	printf("\n------------\n"
		"%s / %s [%.2lf$]\n",
			empleado.nombre,
			empleado.puesto,
			empleado.salario);
}

int main(){

	Empleado *primer = NULL;

	rellena(primer);
	pinta(*primer);

	free(primer);
















	return EXIT_SUCCESS;
}
