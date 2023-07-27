#include <stdlib.h>
#include <string.h>
#include "main.h"


void _nand(char *left, char *right)
{
  int _right = binary_to_integer(right);
  int _left = binary_to_integer(left);
  int num = _left & _right;

  num = !num;
  printf("%s NAND %s = ", left, right);
  if (num) 
  {
    printf("%s\n", integer_to_binary(num));
  }
  else printf("0\n");
}
