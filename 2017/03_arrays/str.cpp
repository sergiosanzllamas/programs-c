#include<stdio.h>
#include<stdlib.h>



#define N 0x100

int main(){

const char *p ="The world is "; /* constante tipo cadena
//Leccion de Punteros.
char const *p //puntero a una constante, forma coherente de decir el char es const.
 char * const p;//punteero constante.
char const * const p;//puntero fijo auna constante.*/
//Puntero: es una variable que contiene cuna direccion de memoria. 



char frase[N] = "a vampire.\n"; // inicializacon
char *d = frase;


d = &frase[2];

frase[2] == 'v'; // notacion de matrices
*d == 'v';       // es igaul a notacion de punteros.
*(d+2) == 'm'; // el dos esta en aritmetica de punteros.
*d +2 == 'x';

printf("d ocupa %lu bytes .\n", sizeof(d));



return EXIT_SUCCESS;

}
