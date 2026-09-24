# Structures Basics in C

## 1. What is a Structure?
A structure (`struct`) is a user-defined data type in C that allows grouping of elements of **different data types** under a single unit.

---

## 2. Declaration and Syntax

```c
#include <stdio.h>

// Structure Definition
struct Student {
    int id;
    char name[50];
    float gpa;
};

int main() {
    // Declaring a structure variable
    struct Student s1 = {101, "Somnath", 3.85};

    // Accessing members using the dot (.) operator
    printf("ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("GPA: %.2f\n", s1.gpa);

    return 0;
}
```

---

## 3. Structure Pointers & Arrow Operator (`->`)
When accessing structure members through a pointer, the arrow operator (`->`) is used instead of the dot operator (`.`).

```c
struct Student s1 = {102, "Alex", 3.90};
struct Student *ptr = &s1;

// Accessing members via pointer
printf("ID: %d\n", ptr->id); // Equivalent to (*ptr).id
```

---

## 4. Array of Structures
Used to store records for multiple entities of the same structure type.

```c
struct Student class[30]; // Holds 30 Student records
class[0].id = 101;
```

---

## 5. Passing Structures to Functions
Structures can be passed to functions **by value** (makes a copy) or **by reference** (passes address via pointer for efficiency).

```c
void printStudent(const struct Student *s) {
    printf("ID: %d, Name: %s\n", s->id, s->name);
}
```