#include <string.h>

int binary_to_integer(char *binary_string) {
  int integer_value = 0;
  int power_of_two = 1;

  for (int i = strlen(binary_string) - 1; i >= 0; i--) {
    if (binary_string[i] == '1') {
      integer_value += power_of_two;
    }
    power_of_two *= 2;
  }

  return integer_value;
}
