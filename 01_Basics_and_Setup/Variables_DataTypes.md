# Variables and Data Types in C

## 1. What is a Variable?
A variable is a named storage location in memory (RAM) used to hold data that can be modified during program execution.

### Declaration and Initialization
```c
int age;        // Declaration
age = 25;       // Initialization
int count = 10; // Both in one step
```

---

## 2. Rules for Naming Variables (Identifiers)
- Must start with a letter (`A-Z`, `a-z`) or an underscore (`_`).
- Cannot start with a digit (`0-9`) (e.g., `1number` is invalid; `number1` is valid).
- Case-sensitive (`age`, `Age`, and `AGE` are treated as distinct variables).
- Cannot use reserved C keywords (`int`, `return`, `if`, etc.).

---

## 3. Primary Data Types & Memory Sizes

| Data Type | Keyword | Size (64-bit Systems) | Format Specifier | Value Range |
| :--- | :--- | :--- | :--- | :--- |
| Integer | `int` | 4 Bytes | `%d` / `%i` | -2,147,483,648 to 2,147,483,647 |
| Character | `char` | 1 Byte | `%c` | -128 to 127 |
| Floating Point | `float` | 4 Bytes | `%f` | ~6-7 decimal digits precision |
| Double Float | `double` | 8 Bytes | `%lf` | ~15-17 decimal digits precision |

---

## 4. Type Modifiers
Type modifiers alter the storage size or signedness of primary data types:
1. `signed`: Default modifier; stores both positive and negative values.
2. `unsigned`: Stores only positive values, doubling the upper positive limit.
3. `short`: Reduces storage size (e.g., `short int` is 2 bytes).
4. `long`: Increases storage size (e.g., `long int` is 4/8 bytes, `long double` is 12/16 bytes).

---

## 5. Common Pitfalls
- **Garbage Values:** Reading an uninitialized variable leads to unpredictable runtime behavior.
- **Integer Overflow:** Assigning a value exceeding a data type's maximum capacity wraps the value unexpectedly.