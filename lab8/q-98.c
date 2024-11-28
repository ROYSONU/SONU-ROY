#include <stdio.h>
#include <stdlib.h>

void multiplyMatrices(int *a, int *b, int *result, int m, int n, int p) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            *(result + i * p + j) = 0;
            for (int k = 0; k < n; k++) {
                *(result + i * p + j) += *(a + i * n + k) * *(b + k * p + j);
            }
        }
    }
}

int main() {
    int m, n, p;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter columns of second matrix: ");
    scanf("%d", &p);

    // Dynamic memory allocation
    int *a = (int *)malloc(m * n * sizeof(int));
    int *b = (int *)malloc(n * p * sizeof(int));
    int *result = (int *)malloc(m * p * sizeof(int));

    if (a == NULL || b == NULL || result == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter elements of first matrix (%dx%d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", (a + i * n + j));
        }
    }

    printf("Enter elements of second matrix (%dx%d):\n", n, p);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", (b + i * p + j));
        }
    }

    // Multiply the matrices
    multiplyMatrices(a, b, result, m, n, p);

    // Display the resulting matrix
    printf("Product of the matrices:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", *(result + i * p + j));
        }
        printf("\n");
    }

    // Free dynamically allocated memory
    free(a);
    free(b);
    free(result);

    return 0;
}
