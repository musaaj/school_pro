#include <stdlib.h>
#include <string.h>

char** split_string_by_space(const char* inputString, int* numTokens) {
    int bufferSize = 16;
    int tokenCount = 0;
    char** tokens = (char**)malloc(bufferSize * sizeof(char*));

    char* mutableInput = strdup(inputString);
    char* token = strtok(mutableInput, " ");

    while (token != NULL) {
        tokens[tokenCount++] = token;

        if (tokenCount >= bufferSize) {
            bufferSize *= 2;
            tokens = (char**)realloc(tokens, bufferSize * sizeof(char*));
        }

        token = strtok(NULL, " ");
    }
    *numTokens = tokenCount;
    return tokens;
}
