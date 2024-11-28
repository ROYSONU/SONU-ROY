#include <stdio.h>

struct Item {
    char name[50];
    int quantity;
    float price, amount;
};

int main() {
    struct Item item;
    printf("Enter item name, quantity, and price: ");
    scanf("%s %d %f", item.name, &item.quantity, &item.price);
    item.amount = item.quantity * item.price;
    printf("Amount: %.2f\n", item.amount);
    return 0;
}
