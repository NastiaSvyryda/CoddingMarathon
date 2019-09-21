#include <unistd.h> 
#include <string.h>

void mx_write_knock_knock(void);

void mx_write_knock_knock(void){
    char *inside = "Follow the white rabbit.\nKnock, knock, Neo.\n";
    write(1, inside, strlen(inside)); 
}


