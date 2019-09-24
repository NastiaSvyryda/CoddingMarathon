#include "file_to_str.h"

char *mx_strjoin(char const *s1, char const *s2){
    if(s1 != NULL && s2 != NULL){
        return mx_strcat(mx_strdup(s1), mx_strdup(s2));
    }
    if(s1 != NULL && s2 == NULL){
        return mx_strdup(s1);
    }
    if(s1 == NULL && s2 != NULL){
        return mx_strdup(s2);
    }
    return NULL;
}

