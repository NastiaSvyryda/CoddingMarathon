#include <stdio.h>

void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(const char *s);
int mx_strlen(const char *s);

int main (int argc, char ** argv){
    mx_printstr(*argv);
    mx_printchar('\n');
    mx_printint(argc); 
}
