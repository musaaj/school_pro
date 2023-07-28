#include <string.h>
#include "main.h"


char *integer_to_binary(int number) {
  static char binary_string[1042];
  int i = 0;

  while (number > 0) {
    binary_string[i++] = (number & 1) + '0';
    number >>= 1;
  }

  binary_string[i] = '\0';
  reverse_string(binary_string);
  return binary_string;
}
