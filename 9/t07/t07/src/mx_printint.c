#include "../inc/minilibmx.h"

static int num_length(int num)
{
    int length = 0;
    while (num != 0) 
    {
        num = num / 10;
        length += 1;
    }
    return length;
}

void mx_printint(int n) {
    int length = num_length(n);
    int ch_num = 0;
    int power = 1;
    int ten = 0;
    if (n == 0){
        mx_printchar('0');
        return;
    }
    if (n < 0) {
        mx_printchar('-');
        n *= -1;
    }
    for (int i = 0; i < length; i++) {
        ten = 1;
        for (int j = length - power; j > 0; j--) { ten *= 10; }
        ch_num = n;
        ch_num /= ten; 
        mx_printchar(ch_num + 48);
        n = n - ten*ch_num;
        power += 1;
    }
}

