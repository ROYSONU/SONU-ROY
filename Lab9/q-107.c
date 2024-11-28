#include <stdio.h>
#include <math.h>

int flip(int num, int n) {
    int factor = pow(10, n);
    int part1 = num / factor;
    int part2 = num % factor;
    int reversed = 0;

    while (part2) {
        reversed = reversed * 10 + part2 % 10;
        part2 /= 10;
    }

    return part1 * factor + reversed;
}

int main() {
    int num, n;
    printf("Enter a number and the number of digits to flip: ");
    scanf("%d %d", &num, &n);
    printf("Result: %d\n", flip(num, n));
    return 0;
}
