#include "ispunc.h"

int ispunc(char c) {

  if (c >= 'A' && c<= 'Z')
    return 0;
  if (c >= 'a' && c <='z')
    return 0;
 
   return 1;
}
