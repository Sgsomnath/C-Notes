#include <stdio.h>

void modifyByValue(int x) {
    x = 100;
}

void modifyByReference(int *x) {
    *x = 100;
}

int main() {
    int val = 10;
    modifyByValue(val);
    printf("After Call by Value: %d\n", val); // Remains 10

    modifyByReference(&val);
    printf("After Call by Reference: %d\n", val); // Becomes 100
    return 0;
}