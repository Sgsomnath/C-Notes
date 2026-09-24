# Constants and Literals in C

## 1. What is a Constant?
A constant is an immutable entity in C whose value cannot be altered once defined.

---

## 2. Ways to Define Constants

### Method 1: Using `#define` Preprocessor Directives
- Substituted by the preprocessor before compilation begins.
- Does not allocate memory or hold a data type.
```c
#define PI 3.14159
#define MAX_USERS 100
```

### Method 2: Using the `const` Keyword
- Creates a read-only variable bound to normal scoping and typing rules.
- Allocates memory like a standard variable.
```c
const float PI = 3.14159;
const int MAX_USERS = 100;
```

---

## 3. Comparison: `#define` vs `const`

| Feature | `#define` Macro | `const` Keyword |
| :--- | :--- | :--- |
| **Nature** | Preprocessor directive | Variable qualifier |
| **Type Safety** | No type checking | Enforces type safety |
| **Scope** | Global (file-wide replacement) | Obeys block and functional scope |
| **Memory Allocation** | None | Occupies RAM like a variable |

---

## 4. Types of Literals
Literals are explicit, fixed values embedded directly into source code:
1. **Integer Literals:** `42` (Decimal), `0x2A` (Hexadecimal), `052` (Octal)
2. **Floating-Point Literals:** `3.14`, `2.5f`
3. **Character Literals:** `'A'`, `'\n'` (Enclosed in single quotes)
4. **String Literals:** `"Hello World"` (Enclosed in double quotes)
end