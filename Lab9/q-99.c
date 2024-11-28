#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int vowels = 0;

    file = fopen("textfile.txt", "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
    }

    fclose(file);
    printf("Number of vowels: %d\n", vowels);
    return 0;
}
