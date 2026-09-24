#ifndef MY_HEADER_H
#define MY_HEADER_H

// 1. Function Declaration (Best Practice for Header Files)
void sampleHeaderFunc(void);

// 2. Static Inline Function (If definition MUST be in header)
static inline int addValues(int a, int b) {
    return a + b;
}

#endif // MY_HEADER_H