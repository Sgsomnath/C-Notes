#include <stdio.h>

int main() {
    int option = 2;

    switch (option) {
        case 1:
            printf("Option 1 Selected\n");
            break;
        case 2:
            printf("Option 2 Selected\n");
            break; // Break prevents fallthrough
        default:
            printf("Invalid Option\n");
    }
    return 0;
}