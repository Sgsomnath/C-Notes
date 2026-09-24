# Conditional Compilation Directives

## 1. Overview
Conditional compilation allows selective inclusion or exclusion of code blocks based on specified conditions during preprocessing.

---

## 2. Core Directives

### A. `#ifdef` and `#ifndef`
Checks whether a macro is defined or not defined.

```c
#define DEBUG_MODE

#ifdef DEBUG_MODE
    printf("Debug: Executing step 1...\n");
#endif
```

### B. `#if`, `#elif`, `#else`, and `#endif`
Evaluates constant integer expressions.

```c
#define TARGET_OS 2 // 1 = Windows, 2 = Linux

#if TARGET_OS == 1
    #define PATH_SEPARATOR '\\'
#elif TARGET_OS == 2
    #define PATH_SEPARATOR '/'
#else
    #error "Unsupported Operating System!"
#endif
```

---

## 3. Diagnostic Directives

### A. `#error`
Aborts compilation immediately and outputs a custom error message.
```c
#ifndef __STDC__
    #error "A standard C compiler is required!"
#endif
```

### B. `#warning`
Emits a non-fatal warning during preprocessing (supported by GCC/Clang).
```c
#warning "Using experimental features in this build."
```