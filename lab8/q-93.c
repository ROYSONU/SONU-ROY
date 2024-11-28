#include <stdio.h>

int countWords(char *str) {
    int count = 0;
    while (*str) {
        if (*str == ' ' || *str == '\n' || *str == '\t') {
            count++;
        }
        str++;
    }
    return count + 1;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Number of words: %d\n", countWords(str));
    return 0;
}
