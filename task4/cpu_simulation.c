#include "main.h"

/**
 * cpu_simulation - simulate 8 bits cpu instructions
 * @PC: pointer to an integer
 * @memory: pointer to array of integer; instructions
 * @run: pointer to an integer; number of instruction cycles executed
 */
void cpu_simulation(unsigned char *PC, unsigned char *memory, unsigned char *run) {
    while (*run) {
        unsigned char instruction = memory[*PC];
        (*PC)++;
        decode_instruction(instruction);
    }
}
