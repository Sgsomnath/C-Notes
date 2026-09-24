# Pointer Basics in C

## 1. What is a Pointer?
A pointer is a special variable that stores the **memory address** of another variable as its value.

---

## 2. Core Operators
- **Address-of Operator (`&`):** Returns the memory address of a variable.
- **Dereference / Indirection Operator (`*`):** Accesses or modifies the value stored at the memory address held by the pointer.

---

## 3. Syntax and Usage

```c
#include <stdio.h>

int main() {
    int age = 25;
    int *ptr = &age; // 'ptr' stores memory address of 'age'

    printf("Value of age: %d\n", age);      // Output: 25
    printf("Address of age: %p\n", &age);   // Output: Memory address (e.g., 0x7ffd...)
    printf("Value of ptr: %p\n", ptr);      // Output: Same address as &age
    printf("Value via ptr: %d\n", *ptr);    // Output: 25 (Dereferencing)

    // Modifying value via pointer
    *ptr = 30;
    printf("New age: %d\n", age);           // Output: 30
    return 0;
}
```

---

## 4. Special Types of Pointers

### A. NULL Pointer
A pointer pointing to nothing (`0` or `NULL`). Used to avoid dangling references.
```c
int *ptr = NULL;
```

### B. Void Pointer (Generic Pointer)
A pointer type that can hold the address of any data type. Must be typecast before dereferencing.
```c
int num = 10;
void *vptr = &num;
printf("%d\n", *(int*)vptr); // Typecast to int* before dereferencing
```

### C. Wild Pointer
An uninitialized pointer pointing to an arbitrary memory location. Dangerous to dereference!