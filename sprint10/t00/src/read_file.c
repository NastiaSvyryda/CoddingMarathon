#include "minilibmx.h"
#include <fcntl.h>

int main(int argc, char **argv){
    char file;
    int flag = 0;
    if(argc == 2) {
        if(open(argv[1], O_RDONLY, 0) == -1){
            flag = 1;
        }
        char text_file = open(argv[1], O_RDONLY, 0);
        ssize_t read_file = 0;
        if(flag ==1){
            while((read_file = read(text_file, &file, 1)) > 0){
                mx_printchar(file);
            }
            mx_printchar('\n');
            close(text_file);
            return 0;
        }
        else{ 
        write(2, "error", mx_strlen("error"));
        write(2, "\n", 1);
        return 0;
        }
    }
    write(2, "usage: ./read_file [file_path]", mx_strlen("usage: ./read_file [file_path]"));
    write(2, "\n", 1);
    return 0;
}
