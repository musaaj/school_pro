#include <stdlib.h>
#include <string.h>
#include "main.h"


void _xor(char *left, char *right)
{
  int _right = binary_to_integer(right);
  int _left = binary_to_integer(left);
  int num = _left ^ _right;

  puts("");
  printf("%s XOR %s = ", left, right);
  if (num) 
  {
    printf("%s\n", integer_to_binary(num));
  }
  else printf("0\n");
}
