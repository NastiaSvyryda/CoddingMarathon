#include "list.h"

void mx_pop_back(t_list **list){
    t_list *current_node = *list;

    while(current_node->next->next != NULL){
        current_node = current_node->next;    
    }  
    free(current_node->next);
    current_node->next = NULL;
}
