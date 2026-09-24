# Binary File Operations in C

## 1. Overview
Binary files store data in the exact memory layout representation (raw bytes) rather than plain formatted text, making I/O faster and more compact.

---

## 2. File Opening Modes for Binary
Binary modes append `b` to the standard modes:
- `"rb"` - Read binary
- `"wb"` - Write binary
- `"ab"` - Append binary

---

## 3. Core Binary I/O Functions

### A. `fwrite()` - Write Raw Bytes
- **Syntax:** `fwrite(const void *ptr, size_t size, size_t count, FILE *stream);`

```c
#include <stdio.h>

struct Data {
    int id;
    float value;
};

int main() {
    FILE *fp = fopen("data.bin", "wb");
    struct Data d1 = {1, 99.5f};

    fwrite(&d1, sizeof(struct Data), 1, fp);
    fclose(fp);
    return 0;
}
```

### B. `fread()` - Read Raw Bytes
- **Syntax:** `fread(void *ptr, size_t size, size_t count, FILE *stream);`

```c
#include <stdio.h>

struct Data {
    int id;
    float value;
};

int main() {
    FILE *fp = fopen("data.bin", "rb");
    struct Data d1;

    fread(&d1, sizeof(struct Data), 1, fp);
    printf("ID: %d, Value: %.1f\n", d1.id, d1.value);

    fclose(fp);
    return 0;
}
```