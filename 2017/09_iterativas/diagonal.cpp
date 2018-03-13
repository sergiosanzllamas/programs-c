
#include <stdio.h>
#include <stdlib.h>

int main(){
    for (int i=0; i<7; i++)
        printf("* ");
    printf("\n");
    for (int i=0;i<1;i++)
        for (int e=0;e<1; e++)
            printf("* *         *\n");
        for (int w=0;w<1; w++)
            printf("*   *       *\n");
        for (int b=0;b<1; b++)
            printf("*     *     *\n");
        for (int a=0;a<1; a++)
            printf("*       *   *\n");
        for(int d=0; d<1;d++)
            printf("*         * *\n");
    for (int u=0; u<7; u++)
        printf("* ");
    printf("\n");

    return EXIT_SUCCESS;
}
