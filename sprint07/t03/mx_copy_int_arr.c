#include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size);

int *mx_copy_int_arr(const int *src, int size){
    int *copy = (int *) malloc(size * sizeof(int));

    if(src != NULL){        
        for(int i = 0; i < size; i ++){
            copy[i] = src[i]; 
        } 
        return copy;        
    }
    return NULL;
}
