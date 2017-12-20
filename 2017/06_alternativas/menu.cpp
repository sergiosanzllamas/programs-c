#include <stdio.h>
#include <stdlib.h>

int main(){

    unsigned opcion;
    system("toilet --gay -fpagga AREAS");
    printf(
            "elige la figura \n"
            "\n"
            "\t1. Triangulo.\n"
            "\t2. Cuadrado.\n"
            "\t3. Paralelogramo.\n"
            "\t4. Pentagono.\n"
            "\t5. Circulo.\n"
            "\n"
            "\tOpcion: "

          );

    scanf(" %u", &opcion);

    switch(opcion) {

        case 1:
            printf("△");
            break;
        case 2:
            printf("ȶ");
            break;

        case 3:
            printf("△");
            break;

        case 4:
            printf("⬟");
            break;

        case 5:
            printf("○");
            break;


          default:
            printf("Del 1 al 5 \n");
    }
    printf("\n");
    return EXIT_SUCCESS;
}
