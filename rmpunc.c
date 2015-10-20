#include <stdio.h>
#include "ispunc.h"

int main(int argc, char* argv[]) {
  
  char c;

  c = getchar();

  while (c != EOF) {
    if (!ispunc(c))
      printf("%c", c);

    c = getchar();
  }
  
  return 0;
}
