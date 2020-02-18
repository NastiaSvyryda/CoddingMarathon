#include "file_to_str.h"

char *mx_strdup(const char *str){
    char *copy = mx_strnew(mx_strlen(str)*sizeof(char));
    return mx_strcpy(copy, str);
}

