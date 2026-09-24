# Enums and Typedef in C

## 1. Enumerations (`enum`)
An `enum` is a user-defined type consisting of a set of named integer constants, making code more readable and self-documenting.

```c
#include <stdio.h>

enum Day {
    SUNDAY,    // Default = 0
    MONDAY,    // Default = 1
    TUESDAY,   // Default = 2
    WEDNESDAY, // Default = 3
    THURSDAY,  // Default = 4
    FRIDAY,    // Default = 5
    SATURDAY   // Default = 6
};

int main() {
    enum Day today = WEDNESDAY;
    if (today == 3) {
        printf("It's Wednesday!\n");
    }
    return 0;
}
```

### Explicit Enum Assignment
```c
enum Status {
    SUCCESS = 200,
    NOT_FOUND = 404,
    SERVER_ERROR = 500
};
```

---

## 2. Type Aliasing (`typedef`)
`typedef` creates custom aliases for existing data types to improve code clarity and simplify complex definitions.

```c
// Creating custom alias for unsigned long
typedef unsigned long ulong;
ulong distance = 500000;

// Combining typedef with struct definition
typedef struct {
    int x;
    int y;
} Point;

Point p1 = {10, 20}; // No need to write 'struct Point'
```