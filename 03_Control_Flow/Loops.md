# Loops in C

## 1. Overview
Loops are used to execute a block of code repeatedly as long as a specified condition remains true.

---

## 2. Types of Loops

### A. Entry-Controlled Loops (Condition checked before execution)

#### 1. `for` Loop
Best used when the exact number of iterations is known in advance.
- **Syntax:** `for (initialization; condition; increment/decrement)`
```c
for (int i = 0; i < 5; i++) {
    printf("Iteration: %d\n", i);
}
```

#### 2. `while` Loop
Best used when iterations depend on a dynamic condition rather than a fixed counter.
```c
int count = 1;
while (count <= 5) {
    printf("Count: %d\n", count);
    count++;
}
```

---

### B. Exit-Controlled Loops (Condition checked after execution)

#### `do-while` Loop
Guarantees at least **one** execution of the loop body, even if the initial condition is false.
```c
int num = 10;
do {
    printf("This runs at least once!\n");
    num++;
} while (num < 5);
```

---

## 3. Comparison of Loops

| Loop Type | Entry/Exit Controlled | Minimum Executions | Typical Use Case |
| :--- | :--- | :--- | :--- |
| `for` | Entry-Controlled | `0` | Definite iterations |
| `while` | Entry-Controlled | `0` | Indefinite iterations |
| `do-while` | Exit-Controlled | **`1`** | Menu-driven programs |

---

## 4. Pitfalls & Infinite Loops
- **Infinite Loop:** Occurs when the termination condition never becomes false (e.g., `while(1)` or forgetting `i++`).
- **Off-by-One Errors:** Using `<` instead of `<=` (or vice versa), causing the loop to run one time too many or too few.
- **Semicolon Trap:** Placing a semicolon immediately after loop headers (`for(...);`) causes an empty loop body.