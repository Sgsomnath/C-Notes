# Recursion in C

## 1. What is Recursion?
Recursion is a programming technique where a function calls itself directly or indirectly to solve a problem by dividing it into smaller sub-problems.

---

## 2. Anatomy of a Recursive Function
A valid recursive function **must** have two components:
1. **Base Case:** The condition that terminates recursion and prevents infinite calls.
2. **Recursive Step:** The logic where the function calls itself with a modified argument moving towards the base case.

---

## 3. Practical Example: Factorial Calculation
$$n! = n \times (n - 1)! \quad \text{with } 0! = 1$$

```c
#include <stdio.h>

int factorial(int n) {
    // 1. Base Case
    if (n <= 1) return 1;

    // 2. Recursive Step
    return n * factorial(n - 1);
}

int main() {
    printf("Factorial of 5: %d\n", factorial(5)); // Output: 120
    return 0;
}
```

---

## 4. How Call Stack Works in Recursion
Each recursive call pushes a new stack frame onto the Call Stack:
```text
factorial(3) ➔ 3 * factorial(2)
                 ➔ 2 * factorial(1)
                          ➔ Returns 1 (Base Case)
```

---

## 5. Pitfalls & Stack Overflow
- **Stack Overflow:** Occurs if the base case is missing or unreachable, filling up stack memory until the program crashes.
- **Overhead:** Recursion carries memory and performance overhead compared to iterative loops (`for`/`while`).