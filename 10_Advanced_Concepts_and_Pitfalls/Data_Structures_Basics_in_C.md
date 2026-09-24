# Data Structures Basics in C

## 1. Overview
Data structures organize data in memory efficiently to enable fast lookup, insertion, deletion, and manipulation.

---

## 2. Linked List (Dynamic Linear Structure)
A chain of node structures where each node contains a data payload and a pointer to the next node.

```c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Insert a node at the beginning
void push(struct Node **head_ref, int new_data) {
    struct Node *new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
```

---

## 3. Stack (LIFO - Last In First Out)
Can be implemented using arrays or linked lists.
- **`push()`:** Adds element to top.
- **`pop()`:** Removes element from top.

```c
#define MAX 100
int stack[MAX];
int top = -1;

void push(int val) {
    if (top < MAX - 1) {
        stack[++top] = val;
    }
}

int pop() {
    if (top >= 0) {
        return stack[top--];
    }
    return -1; // Underflow
}
```

---

## 4. Queue (FIFO - First In First Out)
Elements are inserted at the **rear** and removed from the **front**.

---

## 5. Overview Comparison

| Data Structure | Access Time | Insertion Time | Deletion Time | Memory Allocation |
| :--- | :--- | :--- | :--- | :--- |
| **Array** | $O(1)$ | $O(n)$ | $O(n)$ | Contiguous (Fixed/Dynamic) |
| **Linked List** | $O(n)$ | $O(1)$ | $O(1)$ | Dynamic Heap Nodes |
| **Stack** | $O(n)$ | $O(1)$ | $O(1)$ | Stack/Heap |
| **Queue** | $O(n)$ | $O(1)$ | $O(1)$ | Stack/Heap | 