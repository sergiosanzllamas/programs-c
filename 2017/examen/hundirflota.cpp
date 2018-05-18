#include <stdio.h>
#include <stdlib.h>
#define IMP 1


#define DIE 1
#define VEI 2
#define UNO 3
#define DOS 4

const char *elegir1[] ={
    "IMPORTE",
    NULL
};
const char *elegir2[] = {
    "DIEZ",
    "VEINTE",
    "UNO",
    "DOS",
    NULL
};
const char *elegir3[] = {

};

int main(){
       system("toilet -fpagga  RULETA CASERA");
    unsigned ahora;
    unsigned importe;
    
for(int a=0; a<1;a++)
       printf("%i. %s.\n", a+1, elegir1[a]);
scanf("%i", &ahora);
system("clear");
switch(ahora){
    case IMP:
        printf("que importe quieres:\n");
        for(int a=0; a<4; a++)
               printf("%i. %s.\n", a+1, elegir2[a]);
        printf("que importe vas a meter:");
        scanf("%i", &importe);
        switch(importe){
            case DIE:
                printf("has introducido 0.10 centimos\n");
                break;
            case VEI:
                printf("has introducido 0.20 centimos \n");
                break;
            case UNO:
                printf("has introducido 1 euro\n");
                break;
            case DOS:
                printf("has introducido 2 euros\n");
                break;
default:
                printf("1 o 4\n");
                break;
        }
        break;
}

	return EXIT_SUCCESS;
}
