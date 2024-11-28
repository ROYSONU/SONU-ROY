#include <stdio.h>

void displayTopStudents(char names[][50], int marks[], int size) {
    printf("Students with marks greater than 500:\n");
    for (int i = 0; i < size; i++) {
        if (marks[i] > 500) {
            printf("Name: %s, Marks: %d\n", names[i], marks[i]);
        }
    }
}

int main() {
    char names[10][50];
    int marks[10];
    for (int i = 0; i < 10; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    displayTopStudents(names, marks, 10);
    return 0;
}
