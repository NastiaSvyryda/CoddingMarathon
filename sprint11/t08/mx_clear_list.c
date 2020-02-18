#include "list.h"

void mx_clear_list(t_list **list){
    t_list *current_node = *list;

    while(current_node != NULL){
        free(current_node);
        current_node = current_node->next;
    }
    *list = NULL;
}
