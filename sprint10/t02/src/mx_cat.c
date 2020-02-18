#include "minilibmx.h"

int main (int argc, char **argv){
    char file;
    ssize_t read_file = 0;
    if (argc == 1){
        while((read_file = read(0, &file, 1)) > 0){
            mx_printchar(file);
        }
    }
    if (argc > 1){
        for (int j = 1; j < argc; j++){
            if(open(argv[j], O_RDONLY, 0) == -1){
                for(int i = 0; mx_strchr(argv[0],'/'); i++) {
                    argv[0] = mx_strchr(argv[0],'/');
                    argv[0]++;
                }
                write(2, argv[0], mx_strlen(argv[0]));
                write(2,": ", 2);
                write(2, argv[j], mx_strlen(argv[j]));
                write(2,": ", 2);
                write(2, strerror(2), mx_strlen(strerror (2)));
                write(2,"\n", 1);   
                exit(1);  
            }
            char text_file = open(argv[j], O_RDONLY, 0);
            while((read_file = read(text_file, &file, 1)) > 0){
                mx_printchar(file);
            }
            mx_printchar('\n');
            close(text_file);
             
        }
    }
}
