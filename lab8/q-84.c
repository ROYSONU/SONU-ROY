#include <stdio.h>

void readBook(char title[], char author[], float *price) {
    printf("Enter title: ");
    scanf("%s", title);
    printf("Enter author: ");
    scanf("%s", author);
    printf("Enter price: ");
    scanf("%f", price);
}

void displayBook(char title[], char author[], float price) {
    printf("Title: %s\n", title);
    printf("Author: %s\n", author);
    printf("Price: %.2f\n", price);
}

int main() {
    char title[50], author[50];
    float price;
    readBook(title, author, &price);
    displayBook(title, author, price);
    return 0;
}
