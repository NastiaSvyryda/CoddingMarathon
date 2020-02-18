#include <stdbool.h>

int mx_toupper(int c);

int mx_tolower(int c);

bool mx_isupper(int c);

bool mx_islower(int c);

void mx_reverse_case(char *s);

void mx_reverse_case(char *s){
    int length = 0;
    while (s[length]){
        if(mx_islower(s[length]) ==  1) {
            char s1 = s[length];
            s[length] =  mx_toupper(s1);
        }
        else if (mx_isupper(s[length]) == 1) {
             char s2 = s[length];
             s[length] =  mx_tolower(s2);
        }
        length++;
    }
}
