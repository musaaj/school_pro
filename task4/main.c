#include <stdio.h>
#include "main.h"

int main() {
    unsigned char memory[] = {0b10010101, 0b01001011, 0b11110000};
    unsigned char PC = 0;
    unsigned char run = 1;

    cpu_simulation(&PC, memory, &run);

    return 0;
}
