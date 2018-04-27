#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <unistd.h>
#include<locale.h>
#include <math.h>
#define DELTA_T 0.01

typedef struct{
    double x;
    double y;
}Coord;

typedef struct{
    Coord pos;
    Coord dir;
    Coord vel;
    Coord acc;
}Movil;
typedef struct{
    Movil cuerpo;
    int vida;
    int ammo;
}Player;

void pintar(Player jugador[2]){
    mvprintw(LINES - jugador[0].cuerpo.pos.y,
            jugador[0].cuerpo.pos.x, " ooooo");
    mvprintw(LINES - jugador[1].cuerpo.pos.y,
            jugador[1].cuerpo.pos.x, " ooooo");
}
Coord preguntar_disparo(int turno){
    Coord res;
    double vel, alpha;
    mvprintw(1, 2, "jugador %i", turno % 2 + 1);
    mvprintw(2, 2, "=============");
    mvprintw(3, 2, "                        ");
    mvprintw(4, 2, "                         ");
    mvprintw(3, 2, "velocidad:");
    scanw("%lf", &vel);
    mvprintw(4, 2, "angulo:");
    scanw("%lf", &alpha);

    res.x = vel * cos(alpha / 360. * 2 * M_PI);
    res.y = vel * sin(alpha / 360. * 2 * M_PI);
    return res;
}
void disparar(Movil bala){
    Coord ini;
    do{
        ini = bala.pos;
        bala.vel.x += bala.acc.x * DELTA_T;
        bala.vel.y += bala.acc.y * DELTA_T;
        bala.vel.x += bala.vel.x * DELTA_T;
        bala.vel.y += bala.vel.y * DELTA_T;
        mvprintw(LINES - ini.y, ini.x, " ");
        mvprintw(LINES - bala.pos.y, bala.pos.x, "*");
        refresh();
        usleep(100000 * DELTA_T);
    }while(bala.pos.y > 0);
}

int main(){
    int turno =0;

    Movil bala ={{0., 0.}, {0., 0.}, {0., 0.}, {0., -9.8}};

    Player jugador[] = {
        {{{5., 1.}, {1, 0}, {0., 0.}, {0., 0.} }, 100, 200 },
        {{ {65., 1.}, {-1, 0},{0., 0.}, {0., 0.} }, 100, 200}

    };

    setlocale(LC_ALL, "");
    initscr();
    curs_set(0);

    while(1){
        pintar(jugador);
        refresh();
        bala.pos = jugador[turno % 2].cuerpo.pos;
        bala.vel = preguntar_disparo(turno);
        disparar(bala);
        turno++;

    }

    curs_set(1);
    endwin();


    return EXIT_SUCCESS;
}
