# Undefined Behavior (UB) in C

## 1. What is Undefined Behavior?
Undefined Behavior (UB) occurs when code executes operations that are not constrained by the C language specification. The compiler is free to generate any binary output—ranging from crashing, producing wrong results, or appearing to work correctly until environmental factors change.

---

## 2. Common Sources of Undefined Behavior

| Category | Dangerous Pattern | Example Code |
| :--- | :--- | :--- |
| **Out-of-Bounds Access** | Indexing past array bounds | `int arr[5]; arr[10] = 100;` |
| **Uninitialized Variables** | Reading raw garbage memory | `int x; printf("%d", x);` |
| **Null / Dangling Pointer** | Dereferencing invalid memory | `int *ptr = NULL; *ptr = 5;` |
| **Division by Zero** | Dividing integers by zero | `int result = 10 / 0;` |
| **Signed Integer Overflow** | Exceeding limits of signed type | `INT_MAX + 1` |
| **Double Free** | Calling `free()` twice on same address | `free(p); free(p);` |
| **Modifying String Literals**| Writing to read-only memory | `char *s = "Hi"; s[0] = 'H';` |

---

## 3. Undefined Behavior vs Unspecified Behavior

- **Undefined Behavior:** Total absence of rules. Program state is broken and unsafe.
- **Unspecified Behavior:** Standard provides multiple valid choices, compiler picks one (e.g., order of function argument evaluation in `func(a(), b())`).

---

## 4. How to Avoid UB
1. Always initialize variables before reading.
2. Enable strict compiler warning flags (`-Wall -Wextra -Wpedantic`).
3. Use memory sanitizers (e.g., GCC/Clang AddressSanitizer `-fsanitize=address`).