# Macros and `#define` Directives in C

## 1. What is the C Preprocessor?
The preprocessor is a text-substitution tool that processes source code **before** actual compilation begins. All preprocessor directives start with `#`.

---

## 2. Object-Like Macros
Used to define symbolic constants across the application.

```c
#define PI 3.14159
#define MAX_BUFFER_SIZE 1024
```

---

## 3. Function-Like Macros
Macros that accept arguments and perform inline text substitution.

```c
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int area = SQUARE(5); // Replaced with ((5) * (5))
    return 0;
}
```

---

## 4. Special Operators

### A. Stringizing Operator (`#`)
Converts a macro argument into a string literal.
```c
#define PRINT_VAR(x) printf(#x " = %d\n", x)
// PRINT_VAR(age) becomes printf("age" " = %d\n", age);
```

### B. Token Pasting Operator (`##`)
Concatenates two tokens together during preprocessing.
```c
#define MAKE_VAR(n) int var_##n = n

MAKE_VAR(1); // Expands to: int var_1 = 1;
```

---

## 5. Pitfalls of Macros
- **No Type Checking:** Macros are raw text replacements and lack type safety.
- **Side Effects with Increment/Decrement:**
  `SQUARE(x++)` expands to `((x++) * (x++))`, evaluating `x++` twice and producing unintended results. Always wrap macro parameters in parentheses!