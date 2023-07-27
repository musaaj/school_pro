#include <stdlib.h>
#include <string.h>
#include "main.h"


void _rshift(char *left)
{
  int _left = binary_to_integer(left);
  int num = _left >> 1;

  puts("");
  printf("%s RIGHT SHIFT %d = ", left, 1);
  if (num) 
  {
    printf("%s\n", integer_to_binary(num));
  }
  else printf("0\n");
}
