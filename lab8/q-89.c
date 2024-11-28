#include <stdio.h>

void copyReverse(int *source, int *destination, int size) {
    for (int i = 0; i < size; i++) {
        *(destination + i) = *(source + size - 1 - i);
    }
}

int main() {
    int source[5] = {1, 2, 3, 4, 5};
    int destination[5];

    copyReverse(source, destination, 5);

    printf("Reversed array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", destination[i]);
    }
    return 0;
}
