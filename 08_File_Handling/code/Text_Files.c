#include <stdio.h>

int main() {
    FILE *fp = fopen("example.txt", "w");
    if (fp == NULL) return 1;

    fprintf(fp, "C Programming Reference Notes\n");
    fclose(fp);

    char buffer[50];
    fp = fopen("example.txt", "r");
    fgets(buffer, 50, fp);
    printf("File Content: %s", buffer);
    fclose(fp);
    return 0;
}