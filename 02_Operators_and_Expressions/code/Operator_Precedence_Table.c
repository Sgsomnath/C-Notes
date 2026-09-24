#include <stdio.h>

int main() {
    int res1 = 10 + 2 * 5;     // Multiplication higher precedence -> 20
    int res2 = (10 + 2) * 5;   // Parenthesis forced execution -> 60
    int res3 = 100 / 5 * 2;    // Left-to-right associativity -> 40

    printf("Res1: %d, Res2: %d, Res3: %d\n", res1, res2, res3);
    return 0;
}