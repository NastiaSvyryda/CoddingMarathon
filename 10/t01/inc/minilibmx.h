#ifndef MINILIB
#define MINILIB
#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#define MX_ERROR_USAGE "usage: ./mx_cp [source_file] [target_file]"
int mx_strlen(const char *s);
char *mx_strchr(const char *s, int c);
void mx_printchar(char c);
#endif
