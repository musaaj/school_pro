#include <string.h>
#include "main.h"

/**
 * reverse_string - reverse a string
 * @str: null terminated string
 */
void reverse_string(char* str) {
    if (!str) return; 
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
