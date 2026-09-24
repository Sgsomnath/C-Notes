# Structure Padding and Memory Alignment in C

## 1. What is Structure Padding?
Compilers insert empty bytes (padding) between structure members to align data in memory according to word boundaries (e.g., 4-byte or 8-byte boundaries depending on processor architecture). This optimizes CPU memory fetch operations.

---

## 2. Visualizing Padding

Consider the following structure:
```c
struct Example {
    char a;  // 1 byte
    int b;   // 4 bytes
    char c;  // 1 byte
};
```

Without padding, the total size would be $1 + 4 + 1 = 6$ bytes. However, `sizeof(struct Example)` returns **12 bytes** on 32-bit/64-bit systems due to padding alignment:

```text
Memory Map:
[a] [pad] [pad] [pad]  |  [b] [b] [b] [b]  |  [c] [pad] [pad] [pad]
|<----- 4 bytes ----->|  |<--- 4 bytes ->|  |<----- 4 bytes ----->|
```

---

## 3. Optimization: Reordering Members
By grouping data types of similar size together, you can reduce structure size without disabling padding:

```c
struct Optimized {
    int b;   // 4 bytes
    char a;  // 1 byte
    char c;  // 1 byte
    // 2 bytes padding added at the end
}; // Total size: 8 bytes
```

---

## 4. Disabling Padding (`#pragma pack`)
Padding can be forcefully disabled using compiler directives when serializing data or reading network packets:

```c
#pragma pack(1)
struct PackedStruct {
    char a;  // 1 byte
    int b;   // 4 bytes
    char c;  // 1 byte
}; // Total size: Exactly 6 bytes
#pragma pack()
```