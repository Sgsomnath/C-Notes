#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "w+");
    fputs("1234567890", fp);

    fseek(fp, 5, SEEK_SET); // Jump to 5th byte
    printf("Current Position: %ld\n", ftell(fp));
    printf("Char: %c\n", fgetc(fp));

    rewind(fp); // Reset pointer to start
    printf("After Rewind Position: %ld\n", ftell(fp));
    fclose(fp);
    return 0;
}