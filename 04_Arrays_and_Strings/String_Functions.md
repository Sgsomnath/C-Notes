# Standard String Functions (`string.h`)

## 1. Overview
The `<string.h>` header library provides built-in functions for performing string operations.

---

## 2. Primary String Functions

### A. `strlen()` - String Length
Returns the length of a string excluding the null terminator (`'\0'`).
```c
char str[] = "Hello";
size_t len = strlen(str); // Returns 5
```

### B. `strcpy()` & `strncpy()` - Copy Strings
Copies source string into destination buffer.
```c
char src[] = "World";
char dest[20];

strcpy(dest, src); // Copies src to dest

// Safer alternative avoiding buffer overflow:
strncpy(dest, src, sizeof(dest) - 1);
```

### C. `strcat()` - Concatenate Strings
Appends the source string onto the end of the destination string.
```c
char str1[20] = "Hello ";
char str2[] = "World";

strcat(str1, str2); // str1 becomes "Hello World"
```

### D. `strcmp()` - Compare Strings
Compares two strings lexicographically (case-sensitive).
- Returns `0` if strings are equal.
- Returns `< 0` if string 1 is smaller than string 2.
- Returns `> 0` if string 1 is greater than string 2.

```c
if (strcmp(str1, str2) == 0) {
    printf("Strings are equal.\n");
}
```

### E. `strstr()` - Search Substring
Finds the first occurrence of a substring in a string. Returns a pointer to the match or `NULL`.
```c
char text[] = "Programming in C";
char *ptr = strstr(text, "C"); // Points to "C" inside text
```

---

## 3. Summary Quick Reference

| Function | Purpose | Header |
| :--- | :--- | :--- |
| `strlen(s)` | Get string length | `<string.h>` |
| `strcpy(d, s)` | Copy `s` into `d` | `<string.h>` |
| `strcat(d, s)` | Append `s` to `d` | `<string.h>` |
| `strcmp(s1, s2)` | Compare `s1` and `s2` | `<string.h>` |
| `strstr(s1, s2)` | Search `s2` within `s1` | `<string.h>` |