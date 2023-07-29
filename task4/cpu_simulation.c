#include "main.h"

void cpu_simulation(unsigned char *PC, unsigned char *memory, unsigned char *run) {
    while (*run) {
        unsigned char instruction = memory[*PC];
        (*PC)++;
        decode_instruction(instruction);
    }
}
