# Jump Statements in C

## 1. Overview
Jump statements unconditionally transfer control to another location in the program, disrupting normal sequential execution.

---

## 2. Types of Jump Statements

### A. `break` Statement
Terminates the nearest enclosing loop (`for`, `while`, `do-while`) or `switch` statement immediately.
```c
for (int i = 1; i <= 10; i++) {
    if (i == 5) break; // Exits loop when i reaches 5
    printf("%d ", i);
} // Output: 1 2 3 4
```

### B. `continue` Statement
Skips the remaining code inside the current iteration of a loop and jumps to the next iteration.
```c
for (int i = 1; i <= 5; i++) {
    if (i == 3) continue; // Skips printing 3
    printf("%d ", i);
} // Output: 1 2 4 5
```

### C. `goto` Statement
Transfers control to a labeled statement elsewhere in the same function.
- **Syntax:** `goto label_name;`
```c
#include <stdio.h>

int main() {
    int age = 15;

    if (age < 18) goto ineligible;
    printf("Eligible to vote.\n");
    return 0;

ineligible:
    printf("Not eligible to vote.\n");
    return 0;
}
```

### D. `return` Statement
Terminates function execution and optionally returns a value to the caller.
```c
int add(int a, int b) {
    return a + b; // Exits function and returns result
}
```

---

## 3. Best Practices
- **Avoid `goto`:** Using `goto` creates unstructured "spaghetti code," making debugging difficult.
- Use `break` and `continue` judiciously to keep loop logic readable.