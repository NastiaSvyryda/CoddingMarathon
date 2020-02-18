#include "header.h"

int main(void) {
    initscr();    
    curs_set(0);
    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    init_pair(2, COLOR_WHITE, COLOR_BLACK);    

    mx_intro();
    int max_y = 0, max_x = 0;    
    getmaxyx(stdscr, max_y, max_x);
    int start[max_x];
    int lenght[max_x];
    int arr[max_x];

    for (int i = 0; i < max_x; i++) {
        start[i] = -1 * (rand() % 80);
        arr[i] = start[i];
        lenght[i] = rand() % 50  - 1;
    }    
    while (1) {
        for (int i = 0; i < max_x; i++) {       
            char random_char = (rand() % 93 + 33);
            if (i % 2 == 0) {
                random_char = ' ';
            }
            mvaddch(arr[i] + 1, i, random_char | COLOR_PAIR(2));      
            mvaddch(arr[i], i, random_char | COLOR_PAIR(1));
            mvaddch(arr[i] - lenght[i], i, ' ' | COLOR_PAIR(1));
            if (arr[i] - lenght[i] > max_y) {
                arr[i] = start[i];
            }
            arr[i]++;
        }        
        usleep(80000);
        refresh();
    }
    getch();
    endwin();
    return 0;
}
