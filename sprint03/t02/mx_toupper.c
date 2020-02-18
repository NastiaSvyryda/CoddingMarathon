#include <stdbool.h>

int mx_toupper(int c);

int mx_toupper(int c){
    if(c >= 65 && c <= 90){
      return c;
    }
    else if(c >= 97 && c <= 122){
      return c - 32;
    }
    return 0;
}

