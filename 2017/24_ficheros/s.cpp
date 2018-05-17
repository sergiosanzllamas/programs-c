#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *pfsArchivo;
int nContador=0;
char sAux='i';
pfsArchivo= fopen("57159-0.txt", "r");
if (pfsArchivo== NULL)
    printf("No se pudo abrir el archivo %s \n", "57159-0.txt");
    else
{ while (fscanf(pfsArchivo, "%c", &sAux) != EOF);
    { printf("%c", sAux);
   nContador++;
    };
printf ("\nNúmero de palabras = %d \n", nContador);
fclose(pfsArchivo);
}
return 0;
}
