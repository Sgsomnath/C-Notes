#include <stdio.h>

int main() {
    int num;
    char ch;

    printf("Enter a character: ");
    ch = getchar(); // Single character input

    printf("Enter an integer: ");
    scanf("%d", &num); // Formatted input

    printf("You entered char: ");
    putchar(ch);
    printf("\nYou entered number: %d\n", num);
    return 0;
}