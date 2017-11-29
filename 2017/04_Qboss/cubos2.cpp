#include<stdio.h>
#include<stdlib.h>




int main(){

    double vertice[3] = {8., -6., 4.};




    printf("mete un numero:");

    scanf("%lf", &vertice[0]);
    printf("mete otro:");
    scanf("%lf", &vertice[2]);

    printf("%lf, %lf, %lf => \t", vertice[0], vertice[1], vertice[2]);
    printf("(%.2lf, %.2lf ) \n", vertice[0] / vertice[2],
            -vertice[1] / vertice[2]);

    printf("Eres un genio \n");



    return EXIT_SUCCESS;

}


