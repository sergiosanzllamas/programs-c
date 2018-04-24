#include<stdio.h>
#include<stdlib.h>


#define N 50
typedef struct Templeado{
char nombre[N];
char puesto[N];
double salario;
struct Templeado *siguiente;
}Empleado;

void rellena(Empleado *nuevo){
printf("Nombre:");
scanf("%s", nuevo -> nombre);
printf("Puesto:");
scanf("%s", nuevo -> puesto);
printf("Salario:");
scanf("%lf", &nuevo -> salario);


nuevo -> siguiente;
}

void pinta(Empleado empleado){
printf("------------------\n"
		"%s / %s [%.2lf$]\n",
		empleado.nombre,
		empleado.puesto,
		empleado.salario);}

int main(){

Empleado *primer = NULL;

primer = (Empleado *) malloc(sizeof(Empleado));
rellena(primer);
primer -> siguiente  = (Empleado *) realloc(primer, 2 * sizeof(Empleado));
rellena(primer -> siguiente);
primer -> siguiente -> siguiente  = (Empleado *) realloc(primer, 2 * sizeof(Empleado));
rellena(primer -> siguiente -> siguiente);


pinta(* primer);
pinta(* primer -> siguiente);
pinta(* primer -> siguiente -> siguiente);

free(primer -> siguiente -> siguiente);









return EXIT_SUCCESS;
}
