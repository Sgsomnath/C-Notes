#include <stdio.h>

struct Data { int x; float y; };

int main() {
    FILE *fp = fopen("data.bin", "wb");
    struct Data d1 = {10, 3.14f};
    fwrite(&d1, sizeof(struct Data), 1, fp);
    fclose(fp);

    struct Data d2;
    fp = fopen("data.bin", "rb");
    fread(&d2, sizeof(struct Data), 1, fp);
    printf("Binary Read: %d, %.2f\n", d2.x, d2.y);
    fclose(fp);
    return 0;
}