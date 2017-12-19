#include<stdio.h>
#include<stdlib.h>
#define N 0xFF


int main(){
char nombre[N],
     apellidos[N];

printf("dime tu nombre:");
scanf("%[\n]", nombre);
printf("dime tus apellidos:");
scanf("%[\n]", apellidos);

printf(" hola payaso %s %s", nombre, apellidos);






    return EXIT_SUCCESS;
}
