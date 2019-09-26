#include "list.h"

void mx_pop_index(t_list **list, int index){
    t_list *current_node = *list;
    int count = 0;
    int count_index = 0;

    while(current_node != NULL){
        current_node = current_node->next;
        count++;
    }
    if (index <= 0){
        mx_pop_front(list);
    }
    if (index > count - 1){
        mx_pop_back(list);
    }
    else if (index > 0 && index <= count -1){
        current_node = *list;
        while(index - 1 != count_index) {
            current_node = current_node->next; 
            count_index++;  
        }
        current_node->next = current_node->next->next;
        free(current_node->next);
    }
}
