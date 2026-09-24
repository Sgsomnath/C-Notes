#include <stdio.h>

#define SQUARE(x) ((x) * (x)) // Function-like macro

int main() {
    printf("Square of 5: %d\n", SQUARE(5));
    return 0;
}