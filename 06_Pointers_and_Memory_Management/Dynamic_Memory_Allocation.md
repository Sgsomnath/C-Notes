# Dynamic Memory Allocation (DMA) in C

## 1. Static vs Dynamic Allocation

| Feature | Static Allocation | Dynamic Allocation |
| :--- | :--- | :--- |
| **Memory Region** | Stack Segment | **Heap Segment** |
| **Allocation Time** | Compile Time | **Run Time** |
| **Size Resizing** | Fixed capacity | **Resizable during execution** |

---

## 2. Core DMA Functions (`<stdlib.h>`)

### A. `malloc()` - Memory Allocation
Allocates a contiguous block of specified bytes. Memory contains **garbage values**.
```c
int *arr = (int*) malloc(5 * sizeof(int)); // Allocates space for 5 ints
```

### B. `calloc()` - Contiguous Allocation
Allocates memory and initializes **all bits to zero (`0`)**.
```c
int *arr = (int*) calloc(5, sizeof(int)); // Allocates & zeros 5 ints
```

### C. `realloc()` - Re-allocation
Resizes previously allocated dynamic memory without losing existing data.
```c
arr = (int*) realloc(arr, 10 * sizeof(int)); // Expands array size to 10
```

### D. `free()` - Deallocate Memory
Releases allocated heap memory back to the operating system.
```c
free(arr);
arr = NULL; // Prevent dangling pointer
```

---

## 3. Critical DMA Hazards

1. **Memory Leak:** Forgetting to call `free()` on allocated heap memory causes memory usage to grow continuously.
2. **Dangling Pointer:** A pointer still pointing to a memory location that has already been deallocated using `free()`.
3. **Null Check Requirement:** Always check if the pointer returned by DMA functions is `NULL` before using it (occurs if heap memory is exhausted).

```c
int *ptr = (int*) malloc(sizeof(int));
if (ptr == NULL) {
    printf("Memory Allocation Failed!\n");
    return 1;
}
```