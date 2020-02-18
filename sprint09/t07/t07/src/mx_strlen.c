#include "../inc/minilibmx.h"

int mx_strlen(const char *s)
{
    int i = 0;
    int count = 0;
    while(s[i] != '\0')
    {
        count += 1;
        i+=1;
    }
    return count;
}
