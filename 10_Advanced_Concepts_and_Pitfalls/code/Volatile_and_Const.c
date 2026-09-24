#include <stdio.h>

int main() {
    const int read_only = 10;
    // read_only = 20; // Compiler Error

    volatile int hardware_flag = 1; // Prevents compiler optimization
    printf("Const: %d, Volatile: %d\n", read_only, hardware_flag);
    return 0;
}