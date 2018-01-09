#include <stdio.h>
#include <stdlib.h>
const char *e[]{
    "TRIBUNA",
        "FONDO",
        "LATERAL",
        "PALCO",
        NULL   
};
void menu(unsigned *opcion){
    *opcion;
}
int main(){
    for (int i = 0; i<=3; i++)
        printf("\t%i. %s.\n", i+1, e[i]);
    unsigned opcion;
    menu(&opcion);
    scanf(" %i", &:opcion);

    switch(opcion){

        case 1:
            printf(" TRIBUNA SON 50 EUROS \n");
            break;
        case 2:
            printf(" FONDO son 30 euros \n");
            break;
        case 3:
            printf(" LATERAL SON 35 euros \n");
            break;
        case 4:
            printf("PALCO SON 100 euros \n");
            break;
        default:
            printf(" del 1 al 4 webon \n");
            break;
    }
    printf("\n");

    return EXIT_SUCCESS;
}
