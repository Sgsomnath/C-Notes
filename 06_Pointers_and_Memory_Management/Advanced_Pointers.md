# Advanced Pointers in C

## 1. Double Pointers (Pointer to Pointer)
A double pointer stores the memory address of another pointer.

```c
#include <stdio.h>

int main() {
    int val = 500;
    int *ptr = &val;     // Single pointer
    int **pptr = &ptr;   // Double pointer storing address of ptr

    printf("Value: %d\n", val);       // 500
    printf("Via *ptr: %d\n", *ptr);   // 500
    printf("Via **pptr: %d\n", **pptr); // 500
    return 0;
}
```

---

## 2. Array of Pointers
An array whose elements are pointer variables.

```c
int a = 10, b = 20, c = 30;
int *arr[3] = {&a, &b, &c}; // Array of 3 integer pointers

for (int i = 0; i < 3; i++) {
    printf("%d ", *arr[i]); // Output: 10 20 30
}
```

---

## 3. Function Pointers
Pointers that store the execution address of functions instead of variables.

### Syntax & Example
```c
#include <stdio.h>

int multiply(int a, int b) { return a * b; }

int main() {
    // Declaration: return_type (*func_ptr)(param_types);
    int (*func_ptr)(int, int) = &multiply;

    int result = func_ptr(4, 5); // Calling function via pointer
    printf("Product: %d\n", result); // Output: 20
    return 0;
}
```
> **Usage:** Used extensively in callback functions and event-driven architectures.