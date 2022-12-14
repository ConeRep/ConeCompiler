#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../include/util.h"

// cone compiler

int main(int argc, char** argv) {
    if (argc < 3) {
        printf("[ERROR]: Too few arguments\n");
        return 1;
    }

    if (strcmp(argv[1], "run") == 0) {
        char* source = read_ascii_file(argv[2]);
        printf("%s\n", source);
        free(source);
    }

    return 0;
}