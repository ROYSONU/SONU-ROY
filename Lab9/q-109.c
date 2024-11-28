#include <stdio.h>

int main() {
    int a = 10, *ptr = &a;
    *ptr = 20;
    printf("Modified value: %d\n", a);
    return 0;
}
