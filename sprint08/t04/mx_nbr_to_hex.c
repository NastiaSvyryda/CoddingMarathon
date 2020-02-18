#include "get_address.h"

char *mx_nbr_to_hex(unsigned long nbr){
    int q = nbr;
    int i = 0;
    char hex[100];
    char *new_nbr = mx_strnew(sizeof(char *));

    while(q != 0){
        int rem = q % 16;
        if(rem < 10){
            hex[i++] = 48 + rem;
        }
        else{
            hex[i++] = 87 + rem;
        }
        q = q / 16;
    }
    for(int j = i - 1,k=0; j >= 0; j--, k++){
        new_nbr[k] = hex[j];
    }
    return new_nbr;
}

