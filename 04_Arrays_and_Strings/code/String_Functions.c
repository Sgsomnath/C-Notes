#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    char str2[] = "World";

    printf("Length: %lu\n", strlen(str1));
    strcat(str1, str2); // Concatenate
    printf("Concatenated: %s\n", str1);
    printf("Compare: %d\n", strcmp(str1, "HelloWorld"));
    return 0;
}