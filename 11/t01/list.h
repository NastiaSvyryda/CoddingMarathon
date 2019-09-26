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

void mx_push_front(t_list **list, void *data);
t_list *mx_create_node(void *data);
int mx_strlen(const char *s);
char *mx_strchr(const char *s, int c);
void mx_printchar(char c);
#endif
