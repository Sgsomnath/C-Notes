# Switch Case in C

## 1. Overview
The `switch` statement selects one of many code blocks to execute based on the value of an integral expression (`int` or `char`). It serves as a cleaner alternative to multi-level `else-if` ladders.

---

## 2. Basic Syntax and Example

```c
#include <stdio.h>

int main() {
    int day = 3;

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Invalid Day\n");
    }
    return 0;
}
```

---

## 3. Important Rules
1. **Expression Type:** The switch expression **must** evaluate to an integer or character type. `float`, `double`, or `string` are **not allowed**.
2. **Constant Case Labels:** Case expressions must be compile-time constants (e.g., `case 1:` or `case 'A':`). Variables are invalid in case labels.
3. **`break` Statement:** Prevents execution from falling through to subsequent cases.
4. **`default` Case:** Optional block executed when no case matches the switch expression.

---

## 4. Switch Fallthrough
If a `break` statement is omitted, execution continues into following cases regardless of whether their labels match. This behavior can be intentionally leveraged:

```c
switch (vowel) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Vowel detected\n");
        break;
    default:
        printf("Consonant\n");
}
```