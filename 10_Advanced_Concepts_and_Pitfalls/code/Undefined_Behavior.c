#include <stdio.h>

int main() {
    int arr[3] = {1, 2, 3};
    // Undefined Behavior: Out of bounds access
    printf("Out of bound element: %d\n", arr[5]); 
    return 0;
}