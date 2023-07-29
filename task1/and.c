#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _and - perform logic AND operation and prints out the result
 * @left: null terminated string consisting of only 1s and 0s
 * @right: null terminated string consisting of 1s and 0s
 */
void _and(char *left, char *right)
{
  if ((!left) || (!right)) return;
  int _right = binary_to_integer(right);
  int _left = binary_to_integer(left);
  int num = _left & _right;

  printf("%s AND %s = ", left, right);
  if (num) 
  {
    printf("%s\n", integer_to_binary(num));
  }
  else printf("0\n");
}
