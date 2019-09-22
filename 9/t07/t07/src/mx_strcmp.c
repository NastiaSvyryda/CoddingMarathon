#include "../inc/minilibmx.h"
int mx_strcmp(const char *X, const char *Y)
{
   int i = 0;
   while(X[i] != '\0')
   {
      if (X[i] != Y[i]) {
         break;
      }
      printf("%c\n", X[i]);
      printf("%c\n", Y[i]);
      i++;
   }
   return X[i] - Y[i];
}

