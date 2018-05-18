#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <time.h>
#include<unistd.h>
#define N 3
#define DELTA_T 0.01
#define VMAX 9

typedef struct{
    double x;
    double y;

}Coord2;

typedef struct{
    bool vivo;
    Coord2 pos;
    Coord2 vel;
    Coord2 acc;
}Sprite;

void iniciar(Sprite que[N]){
    for(int i=0; i<N; i++){
        que[i].pos.x = 0;
        que[i].pos.y = 0;
        que[i].vel.x = rand() % VMAX + 1.;
        que[i].vel.y = rand() % VMAX + 1.;
        que[i].acc.x = 0.;
        que[i].acc.y = -9.8;

    }
}
void actualizar(Sprite movil[N]){
    static int vez = 0;
    mvprintw(0, 0, "Iteracion %i", ++vez);
    for(int i=0; i<N; i++){
        movil[i].vel.x += (movil[i].acc.x * DELTA_T);
        movil[i].vel.y += (movil[i].acc.y * DELTA_T);
        movil[i].pos.x += (movil[i].vel.x * DELTA_T);
        movil[i].pos.y += (movil[i].vel.y * DELTA_T);
        attron(COLOR_PAIR(2));
        mvprintw(i+1, 0, "Objeto %i: %.2lf, %.2lf, %.lf", i,
                movil[i].pos.x, movil[i].pos.y);
        attron(COLOR_PAIR(1));


    }
}

void pintar(Sprite dibu[N]){
    for(int i=0; i<N; i++){
        mvprintw(LINES / 2 - dibu[i].pos.y, COLS / 2 + dibu[i].pos.x, "oscar");
    }
    attron(COLOR_PAIR(3));
    mvprintw( LINES / 2 - (dibu[0].pos.y + dibu[1].pos.y + dibu[3].pos.y ) / 3.,
            COLS / 2 + (dibu[0].pos.x + dibu[1].pos.x + dibu[2].pos.x) / 3., "oscar" );
    attron(COLOR_PAIR(1));
    refresh();
}

int main(){
    Sprite obj[N];

    initscr();
    curs_set(0);
    srand(time(NULL));
    iniciar(obj);
    if(!has_colors())
        return EXIT_FAILURE;
    start_color();
    init_pair(1, COLOR_WHITE, COLOR_BLACK);
    init_pair(2, COLOR_GREEN, COLOR_BLACK);
    init_pair(3, COLOR_RED, COLOR_BLACK);


    while(1){
        actualizar(obj);
        pintar(obj);
        usleep(DELTA_T * 1000000);
    }
    curs_set(1);
    endwin();
    return EXIT_SUCCESS;
}
