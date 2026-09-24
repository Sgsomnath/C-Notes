# Compilation Process in C

## 1. Overview
C is a compiled language. The source code written in a `.c` file goes through four distinct transformation stages before becoming an executable binary file:

`Source Code (.c)` ➔ **Preprocessing** ➔ **Compiling** ➔ **Assembling** ➔ **Linking** ➔ `Executable (.exe/.out)`

---

## 2. The 4 Stages of Compilation

### Stage 1: Preprocessing
- **Input:** `program.c`
- **Output:** `program.i` (Expanded Source Code)
- **Key Operations:**
  1. **Header Inclusion:** Replaces `#include <stdio.h>` with the actual header code.
  2. **Macro Expansion:** Replaces macros (e.g., `#define PI 3.1415`) with their defined values.
  3. **Comment Removal:** Strips out all single-line (`//`) and multi-line (`/* */`) comments.
- **GCC Command:** `gcc -E program.c -o program.i`

### Stage 2: Compiling
- **Input:** `program.i`
- **Output:** `program.s` (Assembly Code)
- **Key Operations:**
  1. Performs syntax, semantic, and type checking on the preprocessed code.
  2. Translates C code into architecture-specific Assembly Language instructions.
- **GCC Command:** `gcc -S program.i -o program.s`

### Stage 3: Assembling
- **Input:** `program.s`
- **Output:** `program.o` or `program.obj` (Machine Code / Object File)
- **Key Operations:**
  1. Converts assembly instructions into binary machine code (`0`s and `1`s).
  2. Output is not yet executable as function references remain unresolved.
- **GCC Command:** `gcc -c program.s -o program.o`

### Stage 4: Linking
- **Input:** `program.o` + Standard Library Code (e.g., implementations of `printf`, `scanf`)
- **Output:** `program.exe` (Windows) / `a.out` (Linux/macOS)
- **Key Operations:**
  1. Combines multiple object files and library implementations into a single executable.
  2. Resolves function calls to their definitions.
- **GCC Command:** `gcc program.o -o program`

---

## 3. Direct One-Step Compilation
```bash
gcc program.c -o program
./program
```