# Input and Output (I/O) in C

## 1. Standard I/O Header
All standard input and output functions require including the `<stdio.h>` library header.

---

## 2. Format Specifiers Table
Format specifiers inform `printf` and `scanf` about the data type being processed:

- `%d` / `%i` ➔ Signed Decimal Integer
- `%f` ➔ Floating-point number (`float`)
- `%lf` ➔ Double-precision floating-point (`double`)
- `%c` ➔ Single Character (`char`)
- `%s` ➔ String (`char` array)
- `%u` ➔ Unsigned Decimal Integer
- `%p` ➔ Pointer address (Hexadecimal format)
- `%x` / `%X` ➔ Unsigned Hexadecimal Integer

---

## 3. Output Function: `printf()`
Prints formatted text and variable data to the standard output terminal.

```c
int age = 20;
float height = 5.8;
printf("Age: %d, Height: %.1f feet\n", age, height);
```

### Common Escape Sequences
- `\n` : Newline
- `\t` : Horizontal Tab
- `\\` : Literal Backslash
- `\"` : Literal Double Quote

---

## 4. Input Function: `scanf()`
Reads formatted input entered by the user from standard input.

```c
int age;
printf("Enter your age: ");
scanf("%d", &age); // Pass memory address using '&' operator
```

---

## 5. Single-Character I/O Functions
- `getchar()` : Reads a single character from input.
- `putchar(ch)` : Writes a single character to output.

```c
char ch;
ch = getchar();
putchar(ch);
```

---

## 6. Common Pitfalls
- **Missing `&` in `scanf`:** Forgetting the address-of operator (`&`) for primitive variables causes invalid memory access (Segmentation Fault).
- **Input Buffer Residuals:** Trailing newline characters (`\n`) left in the input buffer by `scanf` can cause subsequent `getchar()` or `%c` reads to fail unexpectedly. Solved by placing a space before `%c`: `scanf(" %c", &ch);`.