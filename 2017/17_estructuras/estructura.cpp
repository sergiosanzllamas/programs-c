#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
struct Coordenada{
    double x;
    double y;
};
struct eat{
int x;
int y;
}
void come(struct eat)

int main(){
int entero;
initscr();
clear();
mvprintw(2, 4, "hola");
refresh();
endwin();
struct Coordenada nave = { 3., 5. };
nave.x = 3.7;
	return EXIT_SUCCESS;
}
