#include <stdio.h>

void greet() { printf("Hello from function pointer!\n"); }

int main() {
    int val = 50;
    int *p = &val;
    int **dp = &p; // Double pointer

    printf("Value via Double Pointer: %d\n", **dp);

    void (*funcPtr)() = greet; // Function Pointer
    funcPtr();
    return 0;
}