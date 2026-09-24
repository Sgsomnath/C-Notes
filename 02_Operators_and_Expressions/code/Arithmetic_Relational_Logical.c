#include <stdio.h>

int main() {
    int a = 10, b = 3;

    // Arithmetic
    printf("Sum: %d, Modulo: %d\n", a + b, a % b);

    // Relational
    printf("Is a > b? %d\n", a > b);

    // Logical
    printf("Logical AND: %d\n", (a > 5) && (b < 5));
    return 0;
}