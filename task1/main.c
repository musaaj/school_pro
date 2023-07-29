/* Program: LogicOpp
 * Copyright: [your name]
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "main.h"

/**
 * main - main entry of the app
 * Return: 0
 */
int main(void)
{
  char *c, **arguments;
  unsigned int size = INT_MAX / 2;

  _help();

  while(1){
    printf(">> ");
    getline(&c, &size, stdin);
    arguments = strsplit(c);

    if (!arguments) continue;

    if (!strcmp(arguments[0], "QUIT"))
    {
      freestrarray(arguments);
      return (0);
    }
    if (!strcmp(arguments[0], "HELP")) _help();
    if (!strcmp(arguments[0], "AND")) _and(arguments[1], arguments[2]); 
    if (!strcmp(arguments[0], "NAND")) _nand(arguments[1], arguments[2]);
    if (!strcmp(arguments[0], "OR")) _or(arguments[1], arguments[2]);
    if (!strcmp(arguments[0], "NOR")) _nor(arguments[1], arguments[2]);
    if (!strcmp(arguments[0], "XOR")) _xor(arguments[1], arguments[2]);
    if (!strcmp(arguments[0], "RSHIFT")) _rshift(arguments[1]);
    if (!strcmp(arguments[0], "LSHIFT")) _lshift(arguments[1]);

    freestrarray(arguments);
  }
  return (0);
}
