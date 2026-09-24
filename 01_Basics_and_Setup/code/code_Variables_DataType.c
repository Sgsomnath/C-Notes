#include <stdio.h>

int main() {
    int age = 25;
    unsigned int positive_num = 45000;
    long long large_num = 9876543210LL;
    float pi = 3.14f;
    double precision_pi = 3.1415926535;
    char grade = 'A';

    printf("Age: %d\n, Unsigned: %u\n, Large: %lld\n", age, positive_num, large_num);
    printf("Float: %.2f, Double: %.10lf\n, Char: %c\n", pi, precision_pi, grade);
    return 0;
}  