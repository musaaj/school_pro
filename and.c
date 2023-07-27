#include <stdlib.h>
#include <string.h>
#include "main.h"


void _and(char *right, char *left)
{
  int _right = binary_to_integer(right);
  int _left = binary_to_integer(left);
  int num = _right && _left;

  printf("%s AND %s = %s", right, left, integer_to_binary(num));
}
