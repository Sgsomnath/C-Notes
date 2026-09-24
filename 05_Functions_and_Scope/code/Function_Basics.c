#include <stdio.h>

// Prototype
int addNumbers(int a, int b);

int main() {
    int sum = addNumbers(5, 10);
    printf("Sum: %d\n", sum);
    return 0;
}

// Definition
int addNumbers(int a, int b) {
    return a + b;
}