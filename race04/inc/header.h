#ifndef HEAD_H
#define HEAD_H

#define MX_ERROR_MAP "map error\n"
#define ERROR_EMPTY_FILE "map does not exist"
#define MX_OTHER_ERROR "error\n"

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);
char *mx_strnew(const int size);
int mx_strlen(const char *s);
void mx_printerr(const char *s);
bool mx_isdigit(int c);

#endif
