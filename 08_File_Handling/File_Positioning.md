# File Positioning Functions in C

## 1. Overview
File positioning functions allow moving the read/write cursor inside an open file randomly rather than sequentially.

---

## 2. Key Positioning Functions

### A. `fseek()`
Moves the file pointer to a specific location.
- **Syntax:** `fseek(FILE *stream, long offset, int whence);`

| `whence` Constant | Starting Reference Point |
| :--- | :--- |
| `SEEK_SET` | Beginning of the file |
| `SEEK_CUR` | Current position of file pointer |
| `SEEK_END` | End of the file |

```c
// Move to 10 bytes from the start
fseek(fp, 10, SEEK_SET);

// Move 5 bytes back from current position
fseek(fp, -5, SEEK_CUR);
```

### B. `ftell()`
Returns the current byte position of the file pointer from the beginning of the file.
```c
long position = ftell(fp);
```

### C. `rewind()`
Resets the file pointer position back to the beginning of the file. Equivalent to `fseek(fp, 0, SEEK_SET);`.
```c
rewind(fp);
```

---

## 3. Determining File Size using `fseek` and `ftell`

```c
FILE *fp = fopen("example.txt", "rb");
fseek(fp, 0, SEEK_END);
long fileSize = ftell(fp);
rewind(fp);

printf("Total File Size: %ld bytes\n", fileSize);
```