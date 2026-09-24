#include <stdio.h>

void counterFunction() {
    static int count = 0; // Retains value between function calls
    auto int temp = 0;    // Re-initialized every call
    count++;
    temp++;
    printf("Static count: %d, Auto temp: %d\n", count, temp);
}

int main() {
    counterFunction();
    counterFunction();
    return 0;
}