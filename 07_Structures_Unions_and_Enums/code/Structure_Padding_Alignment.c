#include <stdio.h>

struct Padded {
    char c; // 1 byte + 3 bytes padding
    int i;  // 4 bytes
};

#pragma pack(1) // Force packed structure
struct Packed {
    char c; // 1 byte
    int i;  // 4 bytes
};

int main() {
    printf("Padded Size: %lu bytes\n", sizeof(struct Padded));
    printf("Packed Size: %lu bytes\n", sizeof(struct Packed));
    return 0;
}