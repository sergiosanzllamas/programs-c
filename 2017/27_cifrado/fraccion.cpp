#include <stdio.h>
#include <stdlib.h>
int mul =1;

int muli(int numero){
        mul *= numero;
    if(numero ==1){

        return mul;
        if(numero == 0)
            return 1;

    }

    return muli(numero-1);
}
int main(){
    int numero;
    int mul;

    printf("mete el numero:");
    scanf("%i", &numero);


    mul = muli(numero);
    printf("el factoirial es %i\n", mul);




    return EXIT_SUCCESS;
}
