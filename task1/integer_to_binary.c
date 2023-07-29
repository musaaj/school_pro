#include <string.h>
#include "main.h"

/**
 * integer_to_binary - convert a number to a string of binary number
 * @number: an unsigned integer
 * Return: string cosisting of only 1s and 0s
 */
char *integer_to_binary(int number) {
  static char binary_string[1042];
  int i = 0;

  while (number > 0) {
    binary_string[i++] = (number & 1) + '0'; // number % 2 logic AND is faster
    number >>= 1; // number / 2 right shift is faster
  }

  binary_string[i] = '\0';
  reverse_string(binary_string);
  return binary_string;
}
