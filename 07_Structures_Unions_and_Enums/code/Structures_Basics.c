#include <stdio.h>

struct Student {
    int id;
    char name[20];
};

int main() {
    struct Student s1 = {101, "Somnath"};
    struct Student *ptr = &s1;

    printf("Dot Operator: ID=%d, Name=%s\n", s1.id, s1.name);
    printf("Arrow Operator: ID=%d, Name=%s\n", ptr->id, ptr->name);
    return 0;
}