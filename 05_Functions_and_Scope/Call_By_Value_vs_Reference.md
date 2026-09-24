# Call by Value vs Call by Reference in C

## 1. Parameter Passing Mechanisms
When calling a function, arguments can be passed in two fundamental ways:

---

## 2. Call by Value (Default in C)
Passes a **copy** of the actual variable's value to the function.
- Changes made inside the function **do not affect** the original variable.

```c
#include <stdio.h>

void modifyValue(int x) {
    x = 100; // Modifies local copy only
}

int main() {
    int num = 10;
    modifyValue(num);
    printf("Value: %d\n", num); // Output: 10 (Unchanged)
    return 0;
}
```

---

## 3. Call by Reference (Using Pointers)
Passes the **memory address** of the variable to the function using pointers.
- Changes made inside the function **directly modify** the original variable.

```c
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    swap(&x, &y); // Passing memory addresses
    printf("x = %d, y = %d\n", x, y); // Output: x = 10, y = 5
    return 0;
}
```

---

## 4. Comparison Summary

| Feature | Call by Value | Call by Reference |
| :--- | :--- | :--- |
| **Data Passed** | Copy of actual value | Memory address of variable |
| **Original Modification** | No | **Yes** |
| **Memory Overhead** | Higher for large structs | Low (passes only pointer size) |
| **Syntax** | Normal variables (`x`) | Addresses & Pointers (`&x`, `*p`) |