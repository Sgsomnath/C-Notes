#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    printf("Array Elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("Index %d: Value = %d, Address = %p\n", i, arr[i], (void*)&arr[i]);
    }
    return 0;
}