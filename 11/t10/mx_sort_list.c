#include "list.h"

t_list *mx_sort_list(t_list *list, bool (*cmp)(void *a, void *b)){
    t_list *current_node = list;

    while(current_node != NULL){
        while(current_node->next != NULL){
            if (cmp(current_node->data, current_node->next->data) == 1) {
                t_list *current_nodet = current_node;
                current_node = current_node->next;
                current_node->next = current_nodet;
            }
            current_node->next = current_node->next->next;
        }    
        current_node = current_node->next;   
    }
    return list;
}
