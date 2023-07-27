#include <stdlib.h>
#include <string.h>
#include "main.h"


char *integer_to_binary(int number) {
  char *binary_string = malloc(32 * sizeof(char));
  int i = 0;

  while (number > 0) {
    binary_string[i++] = (number & 1) + '0';
    number >>= 1;
  }

  binary_string[i] = '\0';
  reverse_string(binary_string);
  return binary_string;
}
