#include "main.h"
#include <stdio.h>

/**
 * decode_instruction - decode 8 bit based opcode
 * @instruction: a string of binary numbers. Must be be 8 bits long
 */
void decode_instruction(unsigned int instruction) {
    unsigned int opcode = instruction >> 5;
    unsigned int addressing_mode = (instruction >> 3) & 1;
    unsigned int operand = instruction & 0x07;

    operand ^= (addressing_mode << 3);
    printf("Op-Code: %s\n", integer_to_binary(opcode));
    printf("Addressing Mode: %s\n", integer_to_binary(addressing_mode));
    printf("Operand: %s\n", integer_to_binary(operand));
}
