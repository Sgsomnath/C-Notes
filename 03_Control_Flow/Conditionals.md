# Conditional Statements in C

## 1. Overview
Conditional statements allow a program to make decisions and execute specific blocks of code based on whether a given condition evaluates to True (non-zero) or False (`0`).

---

## 2. Types of Decision Making Statements

### A. `if` Statement
Executes a block of code only if the condition evaluates to true.
```c
if (age >= 18) {
    printf("Eligible to vote.\n");
}
```

### B. `if-else` Statement
Executes one block if true, and another if false.
```c
if (number % 2 == 0) {
    printf("Even Number\n");
} else {
    printf("Odd Number\n");
}
```

### C. `else-if` Ladder
Tests multiple conditions sequentially until one evaluates to true.
```c
if (marks >= 90) {
    printf("Grade: A\n");
} else if (marks >= 75) {
    printf("Grade: B\n");
} else if (marks >= 50) {
    printf("Grade: C\n");
} else {
    printf("Grade: Fail\n");
}
```

### D. Nested `if` Statements
An `if` statement placed inside another `if` statement.
```c
if (age >= 18) {
    if (has_id == 1) {
        printf("Entry Granted.\n");
    }
}
```

---

## 3. Ternary Operator (`?:`)
A shorthand inline conditional expression for `if-else`.

- **Syntax:** `condition ? expression_if_true : expression_if_false;`
```c
int max = (a > b) ? a : b;
```

---

## 4. Common Pitfalls
- **Assignment vs Equality Operator:** Using `=` (assignment) instead of `==` (comparison) inside an `if` condition.  
  *Example:* `if (x = 5)` assigns `5` to `x` and evaluates to true instead of checking equality.
- **Dangling Else:** An `else` clause always binds to the nearest unclosed preceding `if` statement unless overridden by curly braces `{}`.