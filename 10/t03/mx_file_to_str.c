#include "file_to_str.h"

char *mx_file_to_str(const char *filename){
    char file = open(filename , O_RDONLY, 0);
    char *buf = mx_strnew(sizeof(char *));
    char *str = mx_strnew(sizeof(char *));
    size_t type;
    if(str != NULL && buf != NULL && file != 0){
        while ((type = read(file,buf,1)) > 0){
           str = mx_strjoin(str,buf);
        }
        free(buf);
        free(str);
        close(file);
        return str;
    }
    return NULL;
}
