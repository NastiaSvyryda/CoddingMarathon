#include "minilibmx.h"

int main(int argc, char **argv){
    ssize_t read_source = 0;
    char copy;
    
    if (argc == 3){
        if(open(argv[1], O_RDONLY, 0) == -1){
            for(int i = 0; mx_strchr(argv[0],'/'); i++) {
                argv[0] = mx_strchr(argv[0],'/');
                argv[0]++;
            }
            write(2, argv[0], mx_strlen(argv[0]));
            write(2,": ", 2);
            write(2, argv[1], mx_strlen(argv[1]));
            write(2,": ", 2);
            write(2, strerror (2), mx_strlen(strerror (2)));
            write(2,"\n", 1);   
            exit(1);  
        }
        char source = open(argv[1], O_RDONLY, 0);
        if(open(argv[2], O_RDONLY, 0) < 0){
            char dest = open(argv[2], O_RDWR | O_CREAT, 0666);
            while((read_source = read(source, &copy, 1)) > 0){
                write(dest, &copy, 1);
            }
            close(dest);
            close(source);
            return 0;
        }
        exit(1);
    }        
    write(2, MX_ERROR_USAGE, mx_strlen(MX_ERROR_USAGE));
    write(2, "\n", 1);
    exit(1);
}
