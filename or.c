#include <stdlib.h>
#include <string.h>
#include "main.h"


void _or(char *right, char *left)
{
  int _right = binary_to_integer(right);
  int _left = binary_to_integer(left);

  printf("%s OR %s = %s", right, left, integer_to_binary(_right || _left));
}
