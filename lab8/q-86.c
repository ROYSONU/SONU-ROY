#include <stdio.h>
#include <string.h>

void findStringLength() {
    char str[100];
    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);
    int length = strlen(str) - 1; // Subtracting 1 to ignore the newline character
    printf("Length of string: %d\n", length);
}

int main() {
    findStringLength();
    return 0;
}
