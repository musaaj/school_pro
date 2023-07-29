#ifndef MAIN_H
#define MAIN_H
void decode_instruction(unsigned char instruction);
void cpu_simulation(unsigned char *PC, unsigned char *memory, unsigned char *run);
#endif
