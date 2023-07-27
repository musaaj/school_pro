#include <stdlib.h>
#include <string.h>
#include "main.h"


void _lshift(char *left)
{
  int _left = binary_to_integer(left);
  int num = _left << 1;

  puts("");
  printf("%s LEFT SHIFT %d = ", left, 1);
  if (num) 
  {
    printf("%s\n", integer_to_binary(num));
  }
  else printf("0\n");
}
