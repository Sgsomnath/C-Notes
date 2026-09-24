#include <stdio.h>

typedef unsigned long ulong; // Type Alias

enum Status { PENDING, APPROVED, REJECTED };

int main() {
    ulong count = 500;
    enum Status currentStatus = APPROVED;

    printf("Count: %lu\n", count);
    printf("Enum Status Value: %d\n", currentStatus); // Output: 1
    return 0;
}