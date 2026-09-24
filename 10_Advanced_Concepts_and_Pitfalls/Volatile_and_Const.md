# `volatile` and `const` Type Qualifiers in C

## 1. The `const` Qualifier
Informs the compiler that a variable's value is **read-only** and cannot be modified after initialization.

```c
const int MAX_USERS = 100;
// MAX_USERS = 200; // Compiler Error!
```

### `const` with Pointers
```c
int val = 10;
int other = 20;

// 1. Pointer to constant integer (Value cannot change, pointer can)
const int *ptr1 = &val; 
// *ptr1 = 15; // Error!

// 2. Constant pointer to integer (Pointer address cannot change, value can)
int *const ptr2 = &val;
// ptr2 = &other; // Error!

// 3. Constant pointer to constant integer (Neither can change)
const int *const ptr3 = &val;
```

---

## 2. The `volatile` Qualifier
Prevents the compiler from applying aggressive optimizations on variables whose values can change **outside the program's control** (e.g., hardware registers, multithreaded shared memory, hardware interrupts).

```c
volatile int *hardware_status_reg = (int*) 0x40001000;

// Without volatile, compiler might optimize this loop into an infinite loop:
while (*hardware_status_reg == 0) {
    // Wait for hardware signal
}
```

---

## 3. Combining `const` and `volatile`
A variable can be both `const` and `volatile`:
```c
const volatile int *clock_register;
```
- **`const`:** The program itself cannot modify the register value.
- **`volatile`:** The value can change asynchronously due to hardware events, so the compiler must re-read memory on every access.