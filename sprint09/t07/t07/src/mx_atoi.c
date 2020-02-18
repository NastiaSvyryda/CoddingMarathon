#include "../inc/minilibmx.h"

int mx_atoi(const char *str) {
    
    int value = 0;
    int sign = 1;
    bool wasSigh = false;

    if( *str == '+' || *str == '-' ) 
    {
        if( *str == '-' ) 
        { 
           sign = -1;
        }    
           wasSigh = true;
        str++;
    }

    while (mx_isdigit(*str)) {
        value *= 10;
        value += (int)(*str - '0');
        str++;
    }
    return value * sign;

}

// int mx_atoi(const char *str) {
    
//     int value = 0;
//     int sign = 1;
//     if( *str == '+' || *str == '-' ) 
//     {
//        if( *str == '-' ) 
//         { 
//            sign = -1;
//         }       
//        str++;
//     }
//     while (mx_isdigit(*str)) {
//         value *= 10;
//         value += (int)(*str - '0');
//         str++;
//     }
//     return value * sign;
// }

