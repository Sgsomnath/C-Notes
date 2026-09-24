#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30};
    int *ptr = arr; // Points to first element

    printf("First: %d\n", *ptr);
    ptr++; // Moves by sizeof(int)
    printf("Second: %d\n", *ptr);
    return 0;
}