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

t_list *mx_create_node(void *data);

void mx_pop_back(t_list **list);
void mx_pop_front(t_list **list);
void mx_pop_index(t_list **list, int index);
#endif
