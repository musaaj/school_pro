#include <stdio.h>
#include <string.h>
#include "main.h"

int main(int argc, char* args[])
{
  char *c, **arguments;
  unsigned int size = 1042;
  int tokens = 4;

  puts(">> ");
  getline(&c, &size, stdin);
  arguments = split_string_by_space(c, &tokens);
  if (!strcmp(arguments[0], "AND")) _and(arguments[1], arguments[2]);
  printf("%s\n", c);
  return (0);
}
