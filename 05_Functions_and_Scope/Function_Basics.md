# Function Basics in C

## 1. What is a Function?
A function is a self-contained block of statements that performs a specific task. Functions promote code reusability, modularity, and easier debugging.

---

## 2. Anatomy of a Function
A complete function implementation consists of three parts:

### A. Function Prototype (Declaration)
Tells the compiler about the function's name, return type, and parameters before its actual usage.
```c
int addNumbers(int a, int b); // Declaration
```

### B. Function Definition
Contains the actual code execution logic.
```c
int addNumbers(int a, int b) { // Parameters
    return a + b;              // Return value
}
```

### C. Function Call
Executes the function from `main()` or another function.
```c
int result = addNumbers(10, 20); // Arguments
```

---

## 3. Categories of Functions

| Category | Example Prototype |
| :--- | :--- |
| **No Arguments, No Return Value** | `void printGreeting(void);` |
| **With Arguments, No Return Value** | `void printSquare(int n);` |
| **With Arguments, With Return Value** | `int calculateCube(int n);` |
| **No Arguments, With Return Value** | `int getRandomNumber(void);` |

---

## 4. Key Rules
- Execution of a C program always begins at the `main()` function.
- A function can return only **one single value** directly using the `return` statement.