#include <stdio.h>
#include <stdint.h>
#include "main.h"

int main(void)
{
    unsigned int instruction;
    
    while (1)
    {
        scanf("%u", &instruction);
        decode_instruction(instruction);
    }
    return 0;
}
