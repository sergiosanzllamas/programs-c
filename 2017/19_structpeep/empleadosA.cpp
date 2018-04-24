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
scanf("%s", nuevo -> nombre);
printf("Puesto:");
scanf("%s", nuevo -> puesto);
printf("Salario:");
scanf("%lf", &nuevo -> salario);
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
primer = (Empleado *) realloc(primer, 2 * sizeof(Empleado));
rellena(primer + 1);

pinta(* primer);
pinta(*(primer + 1));

free(primer);
























return EXIT_SUCCESS;
}
