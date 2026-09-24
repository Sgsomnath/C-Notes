#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 2) continue; // Skip iteration
        if (i == 4) break;    // Exit loop
        printf("%d ", i);
    }
    printf("\n");

    goto skip_label;
    printf("This won't print.\n");

skip_label:
    printf("Jumped to label successfully.\n");
    return 0;
}