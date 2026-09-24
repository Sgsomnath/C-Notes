#include <stdio.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;
    data.i = 10;
    printf("data.i: %d\n", data.i);

    data.f = 220.5; // Overwrites shared memory
    printf("data.f: %.1f\n", data.f);
    printf("Total Union Size: %lu\n", sizeof(data));
    return 0;
}