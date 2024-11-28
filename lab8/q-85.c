#include <stdio.h>

void checkVowel(char ch) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is not a vowel.\n", ch);
    }
}

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    checkVowel(ch);
    return 0;
}
