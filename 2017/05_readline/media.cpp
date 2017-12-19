#include<stdio.h>
#include<stdlib.h>




int main() {

    double op1,
            op2,
                op3,
                    op4,
                        op5,
                            op6,
                                op7,
                                    op8;

    printf("dime tu nota de programacion:");
    scanf(" %lf", &op1);
    printf("dime tu nota de bases:");
    scanf(" %lf", &op2);
    printf("dime tu nota de lenguajes de marcas:");
    scanf(" %lf", &op3);
    printf("dime tu nota de Sistemas informaticos:");
    scanf(" %lf", &op4);
    printf("dime tu nota de entornos:");
    scanf(" %lf", &op5);
    printf("dime tu nota de fol:");
    scanf(" %lf", &op6);
    printf("dime tu nota de empresa:");
    scanf(" %lf", &op7);
    printf("dime tu nota de ingles:");
    scanf(" %lf", &op8);
    printf("tu media es %lf + %lf + %lf + %lf + %lf + %lf + %lf + %lf = %lf\n", op1, op2, op3, op4, op5, op6, op7, op8, (op1 + op2 + op3 + op4 + op5 + op6 + op7 + op8)  /8 );






    return EXIT_SUCCESS;

}

