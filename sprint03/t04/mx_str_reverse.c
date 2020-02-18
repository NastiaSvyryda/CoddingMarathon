
int mx_strlen(const char *s);

void mx_swap_char(char *s1, char *s2);

void mx_str_reverse(char *s);

void mx_str_reverse(char *s){
    int l = mx_strlen(s);
    char *begin = s;
    char *end = s;

    for(int i = 0; i < l - 1; i++){
    end++;
    }
    for(int i = 0; i < l / 2; i++){
    mx_swap_char(begin, end);
    begin++;
    end--;
    }
}
