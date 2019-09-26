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

void mx_foreach_list(t_list *list, void (*f)(t_list *node));
#endif
