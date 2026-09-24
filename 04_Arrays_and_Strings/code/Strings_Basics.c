#include <stdio.h>

int main() {
    char str1[] = "Hello"; // Automatically null-terminated with '\0'
    char str2[] = {'W', 'o', 'r', 'l', 'd', '\0'};

    printf("%s %s\n", str1, str2);
    return 0;
}