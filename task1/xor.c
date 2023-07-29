#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _xor - perform logic XOR operation and prints out the result
 * @left: null terminated string consisting of only 1s and 0s
 * @right: null terminated string consisting of 1s and 0s

 */
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
