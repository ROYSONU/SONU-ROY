#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int characters = 0, words = 0, lines = 0;

    file = fopen("textfile.txt", "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        characters++;
        if (ch == ' ' || ch == '\n') words++;
        if (ch == '\n') lines++;
    }

    fclose(file);
    printf("Characters: %d\nWords: %d\nLines: %d\n", characters, words + 1, lines + 1);
    return 0;
}
