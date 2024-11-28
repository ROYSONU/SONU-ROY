#include <stdio.h>

int main() {
    FILE *file;
    int roll;
    char name[50];
    float marks;

    file = fopen("LNMIITSTUDENT.dat", "a");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    printf("Enter roll number, name, and marks: ");
    scanf("%d %s %f", &roll, name, &marks);
    fprintf(file, "%d %s %.2f\n", roll, name, marks);

    fclose(file);
    return 0;
}
