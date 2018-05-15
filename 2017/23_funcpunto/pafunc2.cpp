#include <stdio.h>
#include <stdlib.h>

#define MAX 0x100

typedef struct {
	double x;
	double y;
} Coord;

typedef struct {
	Coord pos;
	Coord vel;
	Coord acc;
	void (*haz)(Coord *pos, Coord *vel, Coord *acc);
} Movil;

typedef struct {
	Movil data[MAX];
	int cima;
} Pila;

bool push(Movil dato, Pila *pila){
	if (pila->cima >= MAX){
		return false;
	}
	pila->data[pila->cima++] = dato;
	return true;
}
Movil  pop(Pila *pila) {
	if (pila->cima == 0){
		return Movil();
	}
	return pila->data[--pila->cima];
}

void haz_a (Coord *pos, Coord *vel, Coord *acc) {
	(*pos).x += (*vel).x * (*acc).x;
}

void haz_b (Coord *pos, Coord *vel, Coord *acc) {
	(*pos).y += (*vel).y * (*acc).y;
}

int main(){
	Pila pila;
	pila.cima = 0;

 Movil  movil1 = {{0,0},{2,1},{4,90}, haz_a}, movil2 {{0,0},{3,4},{7.,9},haz_b}, movil3 {{0,0},{3,0.},{9,30.5}, haz_a};

	push(movil1, &pila);
	push(movil2, &pila);
	push(movil3, &pila);

	while(pila.cima != 0) {
		Movil movil = pop(&pila);
		movil.haz(&movil.pos, &movil.vel, &movil.acc);
		printf("x: %06.2f, y: %06.2f\n", movil.pos.x, movil.pos.y);
	}

	return EXIT_SUCCESS;
}
