#include<stdio.h>
#include<stdlib.h>
#define N 0xff

int main(){

   char nombre[N];

   printf("Dime tu nombre y apellidos: ");
   fgets(nombre, N, stdin);
   printf("hola %s\n", nombre);

   return EXIT_SUCCESS;
}

