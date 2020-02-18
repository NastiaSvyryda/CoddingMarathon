#include "../inc/parse_agents.h"

int main(int argc, char **argv){
    if (argc == 1|| (mx_strcmp(argv[1],"-p") == 0 
        || mx_strcmp(argv[1],"-s") 
        || mx_strcmp(argv[1],"-n") == 0)){
        char *error = "usage: ./parse_agents [-p | -s | -n] [file_name]";
        write(2, error, mx_strlen(error));
        write(2, "\n", 2);
        exit(1);
    }
    if(argc == 3){
        char file = open(argv[2] , O_RDONLY, 0);
        char *buf = mx_strnew(sizeof(char *));
        char *str = mx_strnew(sizeof(char *));
        size_t type;
        if(str != NULL && buf != NULL && file > 0){
        while ((type = read(file,buf,1)) > 0){
           str = mx_strjoin(str,buf);
        }
        free(buf);
        free(str);
           
        close(file);    
    }
}