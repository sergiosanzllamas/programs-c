#include<stdio.h>
#include<stdlib.h>

#define SUM 0
#define RES 1
#define MUL 2
#define DIV 3


int main(){
    unsigned operacion;
    int op1;
    int op2;
    int suma;


    printf(
            "Elige operacion. \n"
            "\n"
            "\t0. SUMA \n"
            "\t1. RESTA \n"
            "\t2. MULTIPLICACION \n"
            "\t3. DIVISION. \n"
            "\tOperacion :"
            "\n"
          );
    scanf(" %i", &suma);

    if (suma == 0) 
    {
        printf("operando1:");
        scanf(" %i", &op1);
        printf("operando2:");
        scanf(" %i", &op2);

        printf(" %i + %i =%i\n", op1, op2, op1 + op2);

    }

    else if (suma == 1)
    {
        printf("operando1:");
        scanf(" %i", &op1);
        printf("operando2:");
        scanf(" %i", &op2);


        printf(" %i - %i =%i\n", op1, op2, op1 - op2);
    }

    else if(suma == 2)
    {
        printf("entonces multiplicar \n");
        printf("operando1:");
        scanf(" %i", &op1);
        printf("operando2:");
        scanf(" %i", &op2);


        printf(" %i * %i =%i\n", op1, op2, op1 * op2);

    }
    else
    {
        printf("entonces dividr \n");
        printf("operando1:");
        scanf(" %i", &op1);
        printf("operando2:");
        scanf(" %i", &op2);


        printf(" %i / %i =%i\n", op1, op2, op1 / op2);


    }


    return EXIT_SUCCESS;
}






