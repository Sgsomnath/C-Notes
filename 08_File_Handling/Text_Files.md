# Text File Operations in C

## 1. Overview
File handling allows programs to persist data on physical storage drives using file pointers (`FILE*`).

---

## 2. File Opening Modes (`fopen`)

| Mode | Description | Behavior if File Missing |
| :--- | :--- | :--- |
| `"r"` | Read | Returns `NULL` |
| `"w"` | Write | Creates new file (Overwrites existing content!) |
| `"a"` | Append | Creates new file (Appends to existing content) |
| `"r+"`| Read and Write | Returns `NULL` |
| `"w+"`| Read and Write | Overwrites existing content |
| `"a+"`| Read and Append | Creates new file |

---

## 3. Reading and Writing Text Files

### Writing to a Text File
```c
#include <stdio.h>

int main() {
    FILE *fp = fopen("output.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Hello, World!\n");
    fputs("Writing another line.\n", fp);

    fclose(fp); // Always close open files
    return 0;
}
```

### Reading from a Text File
```c
#include <stdio.h>

int main() {
    FILE *fp = fopen("output.txt", "r");
    char buffer[100];

    if (fp == NULL) return 1;

    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    fclose(fp);
    return 0;
}
```