#include <stdio.h>

/**
 * decode_instruction - decode 8 bit based opcode
 * @instruction: a string of binary numbers. Must be be 8 bits long
 */
void decode_instruction(unsigned char instruction) {
    unsigned char opcode = instruction >> 5;
    unsigned char addressing_mode = (instruction >> 2) & 0x07;
    unsigned char operand = instruction & 0x03;

    printf("Op-Code = %d%d%d\n", (opcode >> 2) & 0x01, (opcode >> 1) & 0x01, opcode & 0x01);
    printf("Addressing Mode = %d%d%d\n", (addressing_mode >> 2) & 0x01, (addressing_mode >> 1) & 0x01, addressing_mode & 0x01);
    printf("Operand = %d%d\n", (operand >> 1) & 0x01, operand & 0x01);
}
