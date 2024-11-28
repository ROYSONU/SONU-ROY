#include <stdio.h>

void calculateSquareCube(int *num, int *square, int *cube) {
    *square = (*num) * (*num);
    *cube = (*num) * (*num) * (*num);
}

int main() {
    int num, square, cube;

    printf("Enter a number: ");
    scanf("%d", &num);

    calculateSquareCube(&num, &square, &cube);

    printf("Square: %d\n", square);
    printf("Cube: %d\n", cube);

    return 0;
}
