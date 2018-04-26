#include <stdio.h>
#include <stdlib.h>
#define N 100
#define DEBUG(...) printf(__VA_ARGS__);
typedef struct{
    int data[N];
    int cima;
}Pila;

void push(int numero, Pila *cual_pila ){
DEBUG("%5i\n", numero);
cual_pila->data[cual_pila->cima] = numero;
cual_pila-> cima++;
}
int pop(Pila *cual_pila){
    cual_pila->cima--;
    DEBUG("<- %5i\n", cual_pila->data[cual_pila->cima]);
    return cual_pila->data[cual_pila->cima];



}
int main(){
    Pila posicion;
    posicion.cima =0;
    push(1, &posicion);
    push(9, &posicion);
    push(6, &posicion);
    push(3, &posicion);
    pop(&posicion);
    pop(&posicion);



    return EXIT_SUCCESS;
}
