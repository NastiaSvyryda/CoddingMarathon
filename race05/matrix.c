#include "matrix.h"

void matrix(int i){
    initscr();
    curs_set(0);
    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    init_pair(2, COLOR_WHITE, COLOR_BLACK);
    while(i){
    int ran = rand() % getmaxx(stdscr);
    int j = 0;
    for (j = 0; j < getmaxx(stdscr); j = j + ran){
        int r = rand() % getmaxy(stdscr);
        
        for(int i = 0; i < getmaxy(stdscr) + r; i++){
            if (i >= r) mvaddch( i - r, j, 32);
            mvaddch( i, j, rand() % 57 + 48 | COLOR_PAIR(2));
            mvaddch( i - 1, j, rand() % 57 + 48 | COLOR_PAIR(1));
            refresh();
            usleep(10000);
        } 
        
    }
    }

    getch();
    endwin();
}
