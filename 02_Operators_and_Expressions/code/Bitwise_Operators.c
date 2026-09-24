#include <stdio.h>

int main() {
    unsigned char a = 5;  // 00000101
    unsigned char b = 9;  // 00001001

    printf("AND: %d\n", a & b);   // 00000001
    printf("OR: %d\n", a | b);    // 00001101
    printf("XOR: %d\n", a ^ b);   // 00001100
    printf("NOT a: %d\n", ~a);   
    printf("Left Shift a: %d\n", a << 1); // Multiply by 2
    printf("Right Shift b: %d\n", b >> 1); // Divide by 2
    return 0;
}