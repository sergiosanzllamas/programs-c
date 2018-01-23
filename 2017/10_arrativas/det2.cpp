#include <stdio.h>
#include <stdlib.h>
#define N 3
int main(){ 

    int a[N][N];
 int resultado;
printf("mete numeros\n");
printf("dame el primer numero:");
scanf("%i\n", &a[0][0]);
printf("dame el segundo numero:");
scanf("%i\n", &a[0][1]);
printf("dame el tercero numero:");
scanf("%i\n", &a[0][2]);
printf("dame el cuarto numero:");
scanf("%i\n", &a[1][0]);
printf("dame el quinto numero:");
scanf("%i\n", &a[1][1]);
printf("dame el sexto numero:");
scanf("%i\n", &a[1][2]);
printf("dame el septimo numero:");
scanf("%i\n", &a[2][0]);
printf("dame el octavo numero:");
scanf("%i\n", &a[2][1]);
printf("dame el noveno numero:");
scanf("%i\n", &a[2][2]);
resultado = a[0][0] * a[1][1] *a[2][2] +
                a[1][0] * a[2][1] * a[0][2] +
                a[0][1] * a[1][2] * a[2][0] +
                -(a[0][2] * a[1][1] * a[2][0] +
                a[0][0] * a[1][2] * a[2][1]+
                a[0][1] * a[1][0] * a[2][2]);
    printf(" el resultado de la matriz es = %i\n ", resultado);




        return EXIT_SUCCESS;
}
