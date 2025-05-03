#include "../include/Caraml.h"
#include "../include/start.h"
#include <stdio.h>

int main(int argc, char** argv) {
    if (arg_parse(argc, argv) == FEW_ARGUMENTS) {
        printf("Too few arguments.");
        return (0);
    } else if (arg_parse(argc, argv) == INVALID_ARGUMENT) {
        printf("Invalid arguments or flags.");
        return (0);
    }

    start(argv);

    return (0);
}
