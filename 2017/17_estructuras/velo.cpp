#include <stdio.h>
#include <stdlib.h>
struct Coordenada{
    double x;
    double y;
};
void actualizar(struct Coordenada *pos, struct Coordenada *vel, struct  Coordenada acc){


}
int main(){
struct Coordenada pos = { 0. , 0.},
                  vel = {4., 50.},
                  acc = {0., -9.80};
while(1){
    actualizar(pos,vel,acc);
    pinta(vel,acc);
}
	return EXIT_SUCCESS;
}
