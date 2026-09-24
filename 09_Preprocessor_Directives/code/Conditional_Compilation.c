#include <stdio.h>

#define DEBUG_MODE 1

int main() {
#if DEBUG_MODE
    printf("Debug Mode Active\n");
#else
    printf("Release Mode\n");
#endif
    return 0;
}