#include <stdio.h>

int main() {
    FILE *file;
    int n, roll;
    char name[50];
    float marks;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    file = fopen("LNMIITSTUDENT.java", "w");
    if (file == NULL) {
        printf("Error creating file\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter roll number, name, and marks: ");
        scanf("%d %s %f", &roll, name, &marks);
        fprintf(file, "%d %s %.2f\n", roll, name, marks);
    }

    fclose(file);
    return 0;
}
