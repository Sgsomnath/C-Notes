#include <stdio.h>

#define PI_MACRO 3.14159 // Macro constant (Preprocessed)

int main() {
    const double PI_CONST = 3.14159; // Const variable (Type-safe)

    printf("Macro PI: %.5f\n", PI_MACRO);
    printf("Const PI: %.5f\n", PI_CONST);
    return 0;
}