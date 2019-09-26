#include "list.h"

void mx_push_index(t_list **list, void *data, int index){
    t_list *current_node = *list;
    int count = 0;
    int count_index = 0;

    while(current_node != NULL){
        current_node = current_node->next;
        count++;
    }
    if (index <= 0){
        mx_push_front(list, data);
    }
    if (index > count - 1){
        mx_push_back(list, data);
    }
    else if (index > 0 && index <= count -1){
        current_node = *list;
        while(index - 1 != count_index) {
            current_node = current_node->next; 
            count_index++;  
        }
        t_list *current_node_t = current_node->next;
        current_node->next = mx_create_node(data);
        current_node->next->next = current_node_t;
    }
}
