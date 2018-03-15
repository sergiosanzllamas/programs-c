#include <stdio.h>
#include <stdlib.h>

int main(){

    double *w;

    w = (double *)  malloc(sizeof (double));
    *w = 3.5;
    w = (double *) realloc(w,  2 * sizeof(double));
    *(w + 1) = 7.8;

    printf(" %lf %lf \n", *w, *(w + 1));


free(w);



    return EXIT_SUCCESS;
}
