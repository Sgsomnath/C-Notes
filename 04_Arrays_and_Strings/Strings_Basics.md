# Strings Basics in C

## 1. What is a String in C?
C does not have a native primitive `string` data type. A string is represented as a **one-dimensional array of characters terminated by a null character (`'\0'`)**.

---

## 2. Declaration and Initialization

```c
// Method 1: Explicit null terminator
char str1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

// Method 2: String literal (automatically appends '\0')
char str2[] = "Hello"; 

// Method 3: Pointer to String Literal (Read-Only)
char *str3 = "Hello"; 
```

> **Important:** Always allocate array length as `string_length + 1` to accommodate the null terminator `' \0'`.

---

## 3. String Input / Output

### Reading Strings
```c
char str[50];

// Method A: scanf (Stops reading at whitespace)
scanf("%s", str); // Note: No '&' needed for character arrays

// Method B: fgets (Safe way to read spaces)
fgets(str, sizeof(str), stdin);
```

### Printing Strings
```c
printf("%s\n", str);
puts(str); // Automatically adds a newline
```

---

## 4. Common Pitfalls
- **Buffer Overflow with `gets()`:** Never use `gets()` because it lacks length checks; use `fgets()` instead.
- **Direct Assignment Failure:** `char str[10]; str = "Hello";` is invalid C syntax (array names act as constant pointers). Use `strcpy()` instead.