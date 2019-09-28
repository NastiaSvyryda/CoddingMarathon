#include "matrix.h"

int main(void){
    initscr();
    curs_set(0);
    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    init_pair(2, COLOR_WHITE, COLOR_BLACK);
    
    int ymax = getmaxy(stdscr);
    int xmax = getmaxx(stdscr);
    time_t t;
    srand((unsigned) time(&t));
     while(1) {
    int ran = rand() % xmax;
    int j = 0;
    for (j = 0; j < xmax; j = j + ran){
        srand(time(NULL));
        int r = rand() % ymax ;
        
        
        for(int i = 0; i < ymax + r; i++){
            if (i >= r) mvaddch( i - r, j, 32);
            mvaddch( i + 1, j, rand() % 57 + 48 | COLOR_PAIR(2));
            mvaddch( i, j, rand() % 57 + 48 | COLOR_PAIR(1));
            
            refresh();
            usleep(10000);
        }
        
    }
    }
    
    getch();
    endwin();
   
}








    // while(1) {
    // int ran = rand() % xmax;
    // int j = 0;
    // for (j = 0; j < xmax; j = j + ran){
    //     srand(time(NULL));
    //     int r = rand() % ymax ;
        
        
    //     for(int i = 0; i < ymax + r; i++){
    //         if (i >= r) mvaddch( i - r, j, 32);
    //         mvaddch( i + 1, j, rand() % 57 + 48 | COLOR_PAIR(2));
    //         mvaddch( i, j, rand() % 57 + 48 | COLOR_PAIR(1));
            
    //         refresh();
    //         usleep(1000);
    //     }
        
    // }
    // }
