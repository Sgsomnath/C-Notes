# Bitwise Operators in C

## 1. What are Bitwise Operators?
Bitwise operators perform manipulation directly on binary bits of integer data types (`char`, `short`, `int`, `long`).

---

## 2. Bitwise Operators List

| Operator | Name | Description | Example (`A = 5` [0101], `B = 3` [0011]) |
| :--- | :--- | :--- | :--- |
| `&` | Bitwise AND | Sets bit to `1` if both bits are `1` | `A & B` ➔ `1` (`0001`) |
| `\|` | Bitwise OR | Sets bit to `1` if any bit is `1` | `A \| B` ➔ `7` (`0111`) |
| `^` | Bitwise XOR | Sets bit to `1` if bits are different | `A ^ B` ➔ `6` (`0110`) |
| `~` | Bitwise NOT | Flips all bits (1s Complement) | `~A` ➔ `-6` (2s complement form) |
| `<<` | Left Shift | Shifts bits left, fills right with `0`s | `A << 1` ➔ `10` (`1010`) |
| `>>` | Right Shift | Shifts bits right | `A >> 1` ➔ `2` (`0010`) |

---

## 3. Key Concepts & Formulas
- **Left Shift (`x << n`):** Equivalent to multiplying `x` by $2^n$ (`x * 2^n`).
- **Right Shift (`x >> n`):** Equivalent to integer division of `x` by $2^n$ (`x / 2^n`).

---

## 4. Common Bitwise Tricks
- **Check if a number is Even/Odd:**
  ```c
  if (num & 1) { /* Odd */ } else { /* Even */ }
  ```
- **Swap two numbers without a third variable:**
  ```c
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;
  ```