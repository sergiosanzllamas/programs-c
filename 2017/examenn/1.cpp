#include <stdio.h>
#include <stdlib.h>
#define N 0X100
struct Par{
    double nota;
    int id;
}
typedef struct{
    double matematicas;
    double lengua;
    double historia;
}Nota;

struct Alumno{
    char nombre[N];
    char apellidos[N];
    Nota asignaturas;
    void (*test)();
}
Struct Alumno rellenar(){
    struct Alumno nuevo;
    printf("Nombre:");
    scanf("%s", nuevo.nombre);
    printf("Apellidos:");
    scanf("%s", nuevo.apellidos);
    printf("Nota de matematicas:");
    scanf("%lf", &nuevo.asignaturas.matematicas);
    printf("Nota de matematicas:");
    scanf("%lf", &nuevo.asignaturas.matematicas);
    printf("Nota de matematicas:");
    scanf("%lf", &nuevo.asignaturas.lengua);
    printf("Nota de matematicas:");
    scanf("%lf", &nuevo.asignaturas.historia);
}
void modificar(struct Alumno *alumno){
    *alumno = rellenar();
}
void dump(struct Alumno lista[N]){
    FILE *a = fopen("a.txt","wb");

    fwrite(lista, sizeof(struct Alumno) ,N, a);
    fclose(a);

}
Par minimo _mates(struct alumno lista[N]){
    struct Par minimo = {1000., -1};
    for(int a=0;a<N; a++)
        if(minimo.nota>lista[a].asignaturas.matematicas])
            minimo.nota = lita[a].asignaturas.matematicas;
    minimo.id = i;
}
int fibonacci(int n){
    if(n==0 || n==1)
        return 1;
    return fibonacci(n-1)+ fibonacci(n-2);
}
int main(){
    struct Alumno lista[N];
    lista[0] = rellenar();

    return EXIT_SUCCESS;
}
