# Multidimensional Arrays in C

## 1. What is a 2D Array?
A two-dimensional array is an array of arrays, organized as a grid with rows and columns (matrix structure).

---

## 2. Declaration and Initialization

```c
// Declaration: type name[rows][columns];
int matrix[2][3] = {
    {1, 2, 3}, // Row 0
    {4, 5, 6}  // Row 1
};
```

---

## 3. Memory Layout: Row-Major Order
Although visualized as a 2D grid, RAM is linear. C stores 2D arrays in **Row-Major Order** (row 0 elements are stored sequentially, followed by row 1 elements).

```
Matrix View:
[1, 2, 3]
[4, 5, 6]

Linear RAM View:
| 1 | 2 | 3 | 4 | 5 | 6 |
```

---

## 4. Matrix Traversal Using Nested Loops
```c
#include <stdio.h>

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

    for (int i = 0; i < 2; i++) {       // Row loop
        for (int j = 0; j < 3; j++) {   // Column loop
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
```

---

## 5. Parameter Passing Rule
When passing a 2D array to a function, specifying the column dimension is **mandatory**:
```c
void printMatrix(int arr[][3], int rows) { ... }
```