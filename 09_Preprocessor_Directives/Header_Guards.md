# Header Guards in C

## 1. What is the Double Inclusion Problem?
When multiple source files include the same header file, or a header file includes another header file transitively, the compiler may encounter duplicate declarations (structures, function prototypes, typedefs), leading to redifinition errors.

---

## 2. Solution 1: `#ifndef` Header Guards (Standard)
Encloses the header file content within conditional compilation checks:

```c
// my_header.h
#ifndef MY_HEADER_H
#define MY_HEADER_H

// Declarations and definitions go here
typedef struct {
    int x;
    int y;
} Point;

void drawPoint(Point p);

#endif // MY_HEADER_H
```

### How it Works:
1. When included for the first time, `MY_HEADER_H` is not defined.
2. The preprocessor defines `MY_HEADER_H` and includes the contents.
3. If included again in the same compilation unit, `MY_HEADER_H` is already defined, so the preprocessor skips the entire block.

---

## 3. Solution 2: `#pragma once` (Modern Alternative)
A non-standard but universally supported compiler directive placed at the top of a header file.

```c
// my_header.h
#pragma once

typedef struct {
    int x;
    int y;
} Point;
```

---

## 4. `#ifndef` vs `#pragma once`

| Feature | `#ifndef` Guards | `#pragma once` |
| :--- | :--- | :--- |
| **Portability** | 100% ANSI/ISO C Standard compliant | Vendor specific (supported by GCC, Clang, MSVC) |
| **Syntax Boilerplate** | Requires explicit macro naming | Single line at top of file |
| **Performance** | Slightly slower preprocessor scans | Faster lookup by compiler file path |