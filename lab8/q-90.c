#include <stdio.h>
#include <string.h>

void findLength(char *str, int *withSpaces, int *withoutSpaces) {
    *withSpaces = strlen(str);
    *withoutSpaces = 0;

    while (*str) {
        if (*str != ' ') {
            (*withoutSpaces)++;
        }
        str++;
    }
}

int main() {
    char str[100];
    int withSpaces, withoutSpaces;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    findLength(str, &withSpaces, &withoutSpaces);

    printf("Length including spaces: %d\n", withSpaces - 1);
    printf("Length excluding spaces: %d\n", withoutSpaces);

    return 0;
}
