#include <stdio.h>

int main() {
    // For loop
    for (int i = 1; i <= 3; i++) {
        printf("For iteration: %d\n", i);
    }

    // While loop
    int w = 1;
    while (w <= 3) {
        printf("While iteration: %d\n", w++);
    }

    // Do-While loop
    int d = 1;
    do {
        printf("Do-While iteration: %d\n", d++);
    } while (d <= 3);

    return 0;
}