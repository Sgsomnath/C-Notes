# Command Line Arguments in C

## 1. Overview
Command line arguments enable passing input values to a C program directly from the terminal/command line during execution.

---

## 2. Signature of `main()`

```c
int main(int argc, char *argv[]) {
    // Program logic
    return 0;
}
```

### Parameters Breakdown:
- **`argc` (Argument Count):** Integer storing the total number of arguments passed (including program executable name).
- **`argv` (Argument Vector):** Array of null-terminated string pointers representing each argument.
  - `argv[0]` = Name of the executable file.
  - `argv[1]` = First argument passed by user.
  - `argv[argc - 1]` = Last argument passed.
  - `argv[argc]` = Guaranteed to be `NULL`.

---

## 3. Implementation Example

```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("Executable: %s\n", argv[0]);
    printf("Total Arguments: %d\n", argc - 1);

    if (argc < 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }

    // Converting string argument to integer
    int num = atoi(argv[1]);
    printf("Square of %d is %d\n", num, num * num);

    return 0;
}
```

---

## 4. Key Considerations
- Command line arguments are always received as **strings** (`char*`). Use `atoi()`, `atof()`, or `strtol()` from `<stdlib.h>` to convert strings to numeric types.
- Always validate `argc` before accessing `argv[n]` to prevent array out-of-bounds segmentation faults.