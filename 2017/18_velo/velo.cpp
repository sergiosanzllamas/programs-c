#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>





#define DELTA_T 0.01
struct Coord{
double x;
double y;
};
void actualizar(Coord *pos, Coord *vel, Coord acc){
vel ->x += acc.x * DELTA_T;
vel ->y += acc.y * DELTA_T;
vel ->x += vel ->x * DELTA_T;
vel ->y += vel->y * DELTA_T;

}
void pintar(Coord pos, Coord vel){
printf("%.2lfm(%.2lfm/s)\t%.2lfm(%.2lfm{s)\n", pos.x, vel.x, pos.y, vel.y);
}
int main(){
struct Coord pos = {0., 0.},
	     vel = {4., 50.},
	     acc = {0., -9.82};
while(1){
	actualizar(&pos,&vel,acc);
	pintar(pos, vel);
	usleep(10000);
}


















return EXIT_SUCCESS;
}
