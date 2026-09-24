# Operator Precedence and Associativity in C

## 1. Overview
- **Precedence:** Determines which operator is evaluated first in an expression containing multiple operators.
- **Associativity:** Determines the order of evaluation (Left-to-Right or Right-to-Left) when operators have equal precedence.

---

## 2. Complete Precedence Table (Highest to Lowest)

| Category | Operators | Associativity |
| :--- | :--- | :--- |
| **Postfix / Primary** | `()`, `[]`, `->`, `.`, `++` (postfix), `--` (postfix) | Left-to-Right |
| **Unary** | `+`, `-`, `!`, `~`, `++` (prefix), `--` (prefix), `*` (dereference), `&` (address-of), `sizeof` | **Right-to-Left** |
| **Multiplicative** | `*`, `/`, `%` | Left-to-Right |
| **Additive** | `+`, `-` | Left-to-Right |
| **Shift** | `<<`, `>>` | Left-to-Right |
| **Relational** | `<`, `<=`, `>`, `>=` | Left-to-Right |
| **Equality** | `==`, `!=` | Left-to-Right |
| **Bitwise AND** | `&` | Left-to-Right |
| **Bitwise XOR** | `^` | Left-to-Right |
| **Bitwise OR** | `\|` | Left-to-Right |
| **Logical AND** | `&&` | Left-to-Right |
| **Logical OR** | `\|\|` | Left-to-Right |
| **Conditional** | `?:` | **Right-to-Left** |
| **Assignment** | `=`, `+=`, `-=`, `*=`, `/=`, `%=`, `<<=`, `>>=`, `&=`, `^=`, `\|= ` | **Right-to-Left** |
| **Comma** | `,` | Left-to-Right |

---

## 3. Important Tips
- Use parentheses `()` to explicitly control evaluation order and improve code readability.
- Watch out for assignment (`=`) vs equality (`==`) inside `if` conditions.