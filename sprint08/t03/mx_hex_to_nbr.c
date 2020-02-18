#include "hex_to_nbr.h"

unsigned long mx_hex_to_nbr(const char *hex){
    int pow = 0;
    int j = 0;
    unsigned long value = 0;
    unsigned long rez = 0;
    for(int i = 0; hex[i];i++) pow++;
 
    for(int i = 0; i < pow ; i++) {
        if(mx_islower(hex[i])){
            if(hex[i] == 'a') value = 10;
            if(hex[i] == 'b') value = 11;
            if(hex[i] == 'c') value = 12;
            if(hex[i] == 'd') value = 13;
            if(hex[i] == 'e') value = 14;
            if(hex[i] == 'f') value = 15;
        }            
        else if(mx_isupper(hex[i])){
            if(hex[i] == 'A') value = 10;
            if(hex[i] == 'B') value = 11;
            if(hex[i] == 'C') value = 12;
            if(hex[i] == 'D') value = 13;
            if(hex[i] == 'E') value = 14;
            if(hex[i] == 'F') value = 15;
        }
        else{
            value = hex[i] - 48;
        }
        for(j = 1;j < pow - i;j++){
            if(i == (pow - 1)) value*=1;
            else value*=16;
        }
        rez += value;
    }
    return rez;
}

