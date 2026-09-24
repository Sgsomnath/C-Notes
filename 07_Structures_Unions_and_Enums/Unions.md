# Unions in C

## 1. What is a Union?
A `union` is a user-defined data type similar to a structure, but with one critical difference: **all members share the exact same memory location**.

---

## 2. Syntax and Usage

```c
#include <stdio.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;

    data.i = 10;
    printf("data.i: %d\n", data.i); // Output: 10

    data.f = 220.5;
    printf("data.f: %.1f\n", data.f); // Output: 220.5

    // Note: Writing to data.f overwrote the memory used by data.i!
    printf("data.i (corrupted): %d\n", data.i);

    return 0;
}
```

---

## 3. Structure vs Union Comparison

| Feature | Structure (`struct`) | Union (`union`) |
| :--- | :--- | :--- |
| **Memory Allocation** | Allocates separate memory for **each** member. | Allocates memory for only the **largest** member. |
| **Total Memory Size** | Sum of sizes of all members (+ padding). | Equal to the size of its largest member. |
| **Member Access** | All members can be accessed simultaneously. | Only **one member** can hold a valid value at a time. |

---

## 4. Primary Use Cases
- Memory-constrained embedded systems.
- Implementing variant types / polymorphic data holding.
- Hardware register manipulation where fields overlap.