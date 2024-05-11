#include <stdio.h>
#include <stdlib.h>
#include "secret.h"

int main(int argc, char **argv) {
    int first = 5;
    int second = 7;

    printf("Sum: %d\n", sum(first, second));
    printf("Dif: %d\n", dif(first, second));
    printf("Product: %d\n", mul(first, second));

    return 0;
}
