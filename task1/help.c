#include <stdio.h>

void _help(void)
{
  puts("LogicOpp deals with low level binary manipulations");
  puts("Type HELP to view this help file");
  puts("type QUIT to close the program");
  puts("LogicOpp has seven operations");
  puts("AND:    Logic AND operation");
  puts("NAND:   Negation of logic AND");
  puts("OR:     Logic OR operation");
  puts("NOR:    Negation of logic OR");
  puts("XOR:    logic exlusive OR operation");
  puts("RSHIFT: Logic right shift 1 operation");
  puts("LSHIFT: Logic left shift 1 operation");
  puts("");
  puts("Syntax");
  puts("Type operator followed by operands");
  puts("Example; to get result of 1 AND 0");
  puts(">> AND 1 0");
  puts("1 AND 0 = 0");
  
}
