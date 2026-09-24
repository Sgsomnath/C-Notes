# Pointer Arithmetic in C

## 1. Overview
Pointer arithmetic operations differ from standard math. Operations depend on the **byte size of the data type** the pointer points to.

$$\text{New Address} = \text{Current Address} + (n \times \text{sizeof(dataType)})$$

---

## 2. Allowed Pointer Operations

### A. Incrementing (`ptr++`) & Decrementing (`ptr--`)
Advances or moves back the pointer address by `sizeof(dataType)` bytes.

```c
int arr[3] = {10, 20, 30};
int *ptr = arr; // Points to arr[0] at address 1000

ptr++; // Address becomes 1004 (for 4-byte int), points to arr[1]
```

### B. Adding/Subtracting Integers (`ptr + n`, `ptr - n`)
Moves the pointer `n` elements forward or backward.

### C. Subtracting Two Pointers (`ptr2 - ptr1`)
Returns the **number of elements** between two pointers pointing to the same array.

---

## 3. Pointers and Arrays Connection
An array name acts as a **constant pointer** to its first element:
`arr` is equivalent to `&arr[0]`.

```c
int numbers[5] = {10, 20, 30, 40, 50};

// Accessing array elements using pointer arithmetic:
printf("%d\n", *(numbers + 0)); // Same as numbers[0] (10)
printf("%d\n", *(numbers + 2)); // Same as numbers[2] (30)
```

---

## 4. Invalid Pointer Operations
- Adding two pointers (`ptr1 + ptr2`) is **illegal**.
- Multiplying, dividing, or applying bitwise operations to pointers is **illegal**.