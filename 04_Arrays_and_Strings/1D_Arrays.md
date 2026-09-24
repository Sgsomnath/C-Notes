# One-Dimensional (1D) Arrays in C

## 1. What is an Array?
An array is a fixed-size, contiguous collection of elements of the **same data type** stored under a single variable name.

---

## 2. Declaration and Initialization

```c
// Method 1: Declaration then assignment
int arr[5];
arr[0] = 10;

// Method 2: Declaration with initialization
int numbers[5] = {10, 20, 30, 40, 50};

// Method 3: Implicit sizing
int values[] = {1, 2, 3}; // Size automatically becomes 3
```

---

## 3. Memory Layout & Zero-Based Indexing
- Array indices range from `0` to `size - 1`.
- Elements are stored in contiguous memory addresses.
- **Formula for Element Address:**  
  $$\text{Address of } arr[i] = \text{Base Address} + (i \times \text{sizeof(dataType)})$$

```
Index:    [0]   [1]   [2]   [3]   [4]
Value:   | 10  | 20  | 30  | 40  | 50  |
Address: 1000  1004  1008  1012  1016   (Assuming 4-byte integers)
```

---

## 4. Traversing an Array
```c
int arr[5] = {1, 2, 3, 4, 5};
int length = sizeof(arr) / sizeof(arr[0]);

for (int i = 0; i < length; i++) {
    printf("%d ", arr[i]);
}
```

---

## 5. Critical Pitfalls
- **Out-of-Bounds Access:** C does not perform automatic array bound checking! Accessing `arr[5]` on an array of size 5 results in **Undefined Behavior** (memory corruption or segmentation fault).
- **Fixed Size:** Array capacity cannot be resized dynamically at runtime once declared.