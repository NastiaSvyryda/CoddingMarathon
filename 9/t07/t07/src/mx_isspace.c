#include "../inc/minilibmx.h"

bool mx_isspace(char c)
{
   if (c == '\n' || c == ' ' || c == '\v' || c == '\f' || c == '\r' || c == '\t')
    {
       return true;
    }
   return false;
}

