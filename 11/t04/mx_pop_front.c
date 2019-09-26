#include "list.h"

void mx_pop_front(t_list **list){
    t_list *first_node = *list;
    free(first_node); 
    *list = first_node->next;   
}
