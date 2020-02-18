
void mx_printchar(char c);
int mx_strlen(const char *s);
void mx_printstr(const char *s);
char *mx_strchr(const char *s, int c);

int main (int argc, char ** argv){ 
    if(argc == 0){
        return 0;
    }
    char *new_argv = argv[0];
    char *delim = mx_strchr(new_argv, '/');
    while(delim){
        new_argv = delim + 1;
        delim = mx_strchr(new_argv, '/');
    }
    mx_printstr(new_argv);
    mx_printchar('\n');
    return 0;
}

