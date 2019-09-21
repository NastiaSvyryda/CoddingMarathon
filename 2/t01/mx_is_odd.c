#include <stdbool.h>

bool mx_is_odd(int value);

}
 bool mx_is_odd(int value){
    if(value % 2 == 0){
      return 0;
    }
      else{
       return 1;
      }
}
