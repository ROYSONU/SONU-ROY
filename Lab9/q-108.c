#include <stdio.h>

void copyString(char *src, char *dest) {
    while (*src) *dest++ = *src++;
    *dest = '\0';
}

int compareStrings(char *str1, char *str2) {
    while (*str1 && *str1 == *str2) str1++, str2++;
    return *str1 - *str2;
}

void concatStrings(char *str1, char *str2) {
    while (*str1) str1++;
    while (*str2) *str1++ = *str2++;
    *str1 = '\0';
}

void reverseString(char *str) {
    char *end = str;
    while (*end) end++;
    end--;
    while (str < end) {
        char temp = *str;
        *str++ = *end;
        *end-- = temp;
    }
}

int main() {
    char str1[50], str2[50];
    printf("Enter two strings: ");
    scanf("%s %s", str1, str2);

    char copied[50];
    copyString(str1, copied);
    printf("Copied string: %s\n", copied);

    printf("Comparison result: %d\n", compareStrings(str1, str2));

    concatStrings(str1, str2);
    printf("Concatenated string: %s\n", str1);

    reverseString(str1);
    printf("Reversed string: %s\n", str1);
    return 0;
}
