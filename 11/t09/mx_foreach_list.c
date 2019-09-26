#include "list.h"

void mx_foreach_list(t_list *list, void (*f)(t_list *node)){
    t_list *arr = list;
    while (arr != NULL){
        f(arr);
        arr = arr->next;
    } 
}
