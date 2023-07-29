#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _rshift - perform logic RIGHT SHIFT 1 operation and prints out the result
 * @left: null terminated string consisting of only 1s and 0s
 */
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
