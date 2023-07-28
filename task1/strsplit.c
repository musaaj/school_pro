#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

char **strsplit(char *str)
{
  char **result = malloc(sizeof(char) * INT_MAX / 2);
  int i = 0;
  char *token = strtok(str, " \n");
  result[i] = strdup(token);
  while(token && (token = strtok(NULL, " \n")) && (++i))
      result[i] = strdup(token);

  return result;
}

void freestrarray(char **str)
{
  for (int i = 0; str[i]; i++) free(str[i]);
  free(str);
}
