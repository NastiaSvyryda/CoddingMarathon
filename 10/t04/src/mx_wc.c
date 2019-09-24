#include "../inc/mx_wc.h"

int main(int argc, char **argv){
    char file;
    char *buf = mx_strnew(sizeof(char *));
    char *str = mx_strnew(sizeof(char *));
    size_t type;

    if (argc == 1){
        while ((type = read(0,buf,1)) > 0){
           str = mx_strjoin(str,buf);
        }
        free(buf);
        
        free(str);
        
        
    
    }
    if (argc > 1){}
  
}

