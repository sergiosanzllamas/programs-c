#include <stdio.h>
#include <stdlib.h>
#define MAX 0X100
typedef struct{
	double x;
	double y;
}Coord;
typedef struct{
	Coord pos;
	Coord vel;
	Coord acc;
	void(*haz)(Coord *pos, Coord *vel, Coord *acc);
}Movil;
typedef struct{
	Movil data[MAX];
	int cima;
}Pila;

bool push(int dato, Pila *pila){
	if(pila->cima >= MAX){
		return false;
	}
	pila->data[pila->cima++] = dato;
	return true;
}

Movil pop(Pila *pila){
	if(pila->cima == 0){
		return Movil();
	}
	return pila->data[--pila->cima];
}
void cesar(Coord *pos, Coord *vel, Coord *acc){
	(*pos).x += (*vel).x * (*acc).x; 

}
void oscar(Coord *pos, Coord *vel, Coord *acc){
	(*pos).y += (*vel).y * (*acc).y;

}
int main(){
	pila.cima = 0;
	Pila pila;
	Movil movil1 = {{2. , 8.}, {5., 6.}, {2., 5.}, cesar}, movil2 = {{3., 5.}, {3., 4.}, {1., 4.}, cesar}, movil3 = {{3., 6.}, {4., 1.}, {3., 5.}, oscar};
	push(movil1, &pila);
	push(movil2, &pila);
	push(movil3, &pila);

	while(pila.cima != 0){
		Movil movil = pop(&pila);
		movil.haz(&movil.pos, movil.vel, movil.acc);
		printf("x: %0.6.2lf, y:%0.6.2lf", movil.pos.x, movil.pos.y);

	}
	return EXIT_SUCCESS;
}
