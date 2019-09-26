#ifndef LIST
#define LIST
#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

typedef struct s_list {
    void *data;
    struct s_list *next;
} t_list;

void mx_pop_back(t_list **list);
int mx_strlen(const char *s);
char *mx_strchr(const char *s, int c);
void mx_printchar(char c);
#endif
