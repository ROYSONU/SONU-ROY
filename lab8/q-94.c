#include <stdio.h>
#include <string.h>

void reverseString(char *source, char *destination) {
    int len = strlen(source) - 1; // Exclude newline character
    for (int i = 0; i < len; i++) {
        *(destination + i) = *(source + len - 1 - i);
    }
    *(destination + len) = '\0';
}

int main() {
    char source[100], destination[100];

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);

    reverseString(source, destination);

    printf("Reversed string: %s\n", destination);
    return 0;
}
