#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int*) malloc(3 * sizeof(int)); // Dynamic Allocation

    if (arr == NULL) return 1;

    for (int i = 0; i < 3; i++) arr[i] = (i + 1) * 10;

    arr = (int*) realloc(arr, 5 * sizeof(int)); // Re-allocation
    arr[3] = 40; arr[4] = 50;

    for (int i = 0; i < 5; i++) printf("%d ", arr[i]);
    printf("\n");

    free(arr); // Clean memory leak
    arr = NULL; // Prevent dangling pointer
    return 0;
}