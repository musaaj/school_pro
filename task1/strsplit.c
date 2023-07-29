#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * strsplit - split a string into array of words
 * @str: a null terminated string
 * Return: array of strings
 */
char **strsplit(char *str)
{
  if (!str) return (NULL);

  char **result = malloc(sizeof(char) * INT_MAX / 2);
  int i = 0;
  char *token = strtok(str, " \n");

  result[i] = strdup(token);
  while(token && (token = strtok(NULL, " \n")) && (++i))
      result[i] = strdup(token);

  return result;
}

/**
 * freestrarray - free memory allocated to an array of strings
 * @str: array of null terminated strings
 */
void freestrarray(char **str)
{
  if (!str) return;
  for (int i = 0; str[i]; i++) free(str[i]);
  free(str);
}
