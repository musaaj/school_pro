#include <string.h>
#include <stdlib.h>
#include "main.h"

char **strsplit(char *str)
{
  char **result = malloc(sizeof(char) * 1042);
  int i = 0;
  char *token = strtok(str, " \n");
  result[i] = strdup(token);
  while(token && (token = strtok(NULL, " \n")) && (++i))
      result[i] = strdup(token);
  return result;
}
