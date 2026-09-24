# Arithmetic, Relational, and Logical Operators in C

## 1. Arithmetic Operators
Used for performing mathematical calculations.

| Operator | Description | Example (`a = 10, b = 3`) | Result |
| :--- | :--- | :--- | :--- |
| `+` | Addition | `a + b` | `13` |
| `-` | Subtraction | `a - b` | `7` |
| `*` | Multiplication | `a * b` | `30` |
| `/` | Division | `a / b` | `3` (Integer division truncates decimal) |
| `%` | Modulo (Remainder) | `a % b` | `1` |

### Increment & Decrement Operators
- **Pre-increment (`++x`):** Increments value first, then uses it.
- **Post-increment (`x++`):** Uses value first, then increments it.

---

## 2. Relational Operators
Used to compare two values. Evaluates to `1` (True) or `0` (False).

| Operator | Description | Example (`a = 10, b = 20`) | Result |
| :--- | :--- | :--- | :--- |
| `==` | Equal to | `a == b` | `0` |
| `!=` | Not equal to | `a != b` | `1` |
| `>` | Greater than | `a > b` | `0` |
| `<` | Less than | `a < b` | `1` |
| `>=` | Greater than or equal to | `a >= b` | `0` |
| `<=` | Less than or equal to | `a <= b` | `1` |

---

## 3. Logical Operators
Used to combine conditional expressions.

| Operator | Description | Condition | Example |
| :--- | :--- | :--- | :--- |
| `&&` | Logical AND | True if **both** operands are non-zero | `(5 > 2) && (10 > 5)` ➔ `1` |
| `\|\|` | Logical OR | True if **at least one** operand is non-zero | `(5 > 2) \|\| (10 < 5)` ➔ `1` |
| `!` | Logical NOT | Reverses the logical state | `!(5 > 2)` ➔ `0` |

### Short-Circuit Evaluation
- In `A && B`, if `A` is `0`, `B` is not evaluated.
- In `A || B`, if `A` is non-zero, `B` is not evaluated.

---

## 4. Assignment & Ternary Operators
- **Shorthand Assignment:** `x += 5;` (Equivalent to `x = x + 5;`).
- **Ternary Operator (`?:`):** `condition ? expression_if_true : expression_if_false;`