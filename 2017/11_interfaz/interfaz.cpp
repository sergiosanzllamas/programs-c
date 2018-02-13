#include <stdio.h>
#include <stdlib.h>


// lee la matriz
// lee cada fila
//    lee cada col
//    si estoy en la fila 1 voy contando el total de columnas
//    sino
//    rellenar com 0cuando hay menos o descartar los que hay de mas
//    pasar a la fila siguiente cuando haya 1 y terminar si hay dos
int main(){
    int filas = 0, columnas =0;// los totales de la matriz.
    int columna = 0;// el numero de columnas de esta fila
    int miradita;//miro si viene un \n
    bool fin = false;//entonces dos \n.
    double nuevo_num;
    double *matriz = NULL;

    printf("Tu matriz:\n\n"
    "ejemplo: [1 2 4], [3 6 8] ,[2 5 8]"
    "\n\tMatriz: ");

    
    do{
         scanf(" %*1[[]");
        /*pedir un numero y alojarlo en la matriz dinamica*/
        scanf(" %lf", &nuevo_num);
        if(filas == 0)
            columnas++;
        columna++;
        if(columna <= columnas){//las columnas extras las descartamos
            matriz = (double *) realloc(matriz,
                    (filas * columna+ columnas) * sizeof(double));
            *(matriz + filas * columna + columnas-1) = nuevo_num;
        }
      
        scanf(" %*1[]]");
        /*deistinguimos si cambiamos de linea o se ha terminado * la matriz*/

        miradita = getc(stdin);
        if (miradita == '\n'){
            miradita = getc(stdin);
            filas++;
            if(miradita == '\n')
                fin = true;
            else{
                columna = 0;
                for (int c=columna+1; c<columnas; c++){
                    matriz = (double *) realloc(matriz,
                            (filas * columnas +c) * sizeof(double));
                    *(matriz + filas * columnas+ c-1) = 0.;
                }


            }


        }
        ungetc(miradita, stdin);
    }while(!fin);
    /* ver la matriz*/
    for(int f=0; f<filas; f++){
        for(int c=0; c<columnas; c++)
            printf("%7.2lf", *( matriz + c + f * columnas));
        printf("\n");
    }
    return EXIT_SUCCESS;
}
