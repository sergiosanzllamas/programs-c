#include<stdio.h>
#include<stdlib.h>

#define X 0
#define Y 1
#define Z 2
#define D 3


int main(){

double vertice[D];
/*Entrada de datos*/
printf("(x, y, z):");
scanf(" ( %lf , %lf , %lf  ) ", &vertice[X], &vertice[Y], &vertice[Z]);


/*salida de datos*/
printf("%lf, %lf, %lf => \t", vertice[X], vertice[Y], vertice[Z]);
printf("(%.2lf,  %.2lf) \n", vertice[X] / vertice[Z],
     -vertice[Y] / vertice[Z] );






    return EXIT_SUCCESS;
}
