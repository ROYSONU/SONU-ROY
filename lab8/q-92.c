#include <stdio.h>

int findLargest(int *arr, int size) {
    int largest = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > largest) {
            largest = *(arr + i);
        }
    }
    return largest;
}

int main() {
    int arr[] = {10, 20, 30, 5, 40};
    int size = 5;

    int largest = findLargest(arr, size);

    printf("The largest number is: %d\n", largest);
    return 0;
}
