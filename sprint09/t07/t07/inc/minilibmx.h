#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi(const char *str);

int mx_strlen(const char *s);

void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(const char *s);

int mx_strcmp(const char *X, const char *Y);
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);

void mx_printerr(const char *s);
char *mx_strnew(const int size);

