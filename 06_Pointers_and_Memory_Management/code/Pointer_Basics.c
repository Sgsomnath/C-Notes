#include <stdio.h>

int main() {
    int num = 42;
    int *ptr = &num;   // Store address
    int *nullPtr = NULL; // Safe declaration

    printf("Value: %d\n", num);
    printf("Address: %p\n", (void*)&num);
    printf("Dereferenced Pointer Value: %d\n", *ptr);
    return 0;
}