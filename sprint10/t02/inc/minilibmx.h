#ifndef MINILIB
#define MINILIB
#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h> 

char *mx_strchr(const char *s, int c);
void mx_printchar(char c);
int mx_strlen(const char *s);

#endif
