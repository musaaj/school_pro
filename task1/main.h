#ifndef MAIN_H
#define MAIN_H
int binary_to_integer(char *);
char *integer_to_binary(int );
void reverse_string(char *);
void _and(char *, char *);
void _nand(char *, char *);
void _or(char *, char *);
void _nor(char *, char *);
void _xor(char *, char *);
void _rshift(char *);
void _lshift(char *);
char **strsplit(char *);
void freestrarray(char **str);
#endif
