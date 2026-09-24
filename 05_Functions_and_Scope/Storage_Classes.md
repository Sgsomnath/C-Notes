# Storage Classes in C

## 1. What is a Storage Class?
A storage class defines the **scope (visibility)**, **lifetime (duration)**, **initial value**, and **storage location** of a variable.

---

## 2. The 4 Storage Classes in C

| Storage Class | Keyword | Default Value | Storage Location | Scope | Lifetime |
| :--- | :--- | :--- | :--- | :--- | :--- |
| **Automatic** | `auto` | Garbage Value | RAM (Stack) | Local to block | Until block ends |
| **Register** | `register` | Garbage Value | CPU Register | Local to block | Until block ends |
| **Static** | `static` | Zero (`0`) | RAM (Data Segment) | Local to block | Entire program runtime |
| **External** | `extern` | Zero (`0`) | RAM (Data Segment) | Global (across files) | Entire program runtime |

---

## 3. Code Examples & Usage

### A. `static` Variables (Retains state between function calls)
```c
void countCalls() {
    static int count = 0; // Initialized only once
    count++;
    printf("Count: %d\n", count);
}

int main() {
    countCalls(); // Output: Count: 1
    countCalls(); // Output: Count: 2
    return 0;
}
```

### B. `register` Variables
Requests the compiler to store the variable in a high-speed CPU register for faster access (e.g., loop counters).
- **Note:** You cannot get the memory address of a register variable (`&var` is invalid).

### C. `extern` Keyword
Used to declare a global variable defined in another source file.