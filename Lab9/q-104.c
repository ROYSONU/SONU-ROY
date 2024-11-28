#include <stdio.h>

enum Color { RED, GREEN, BLUE };

int main() {
    enum Color color;
    printf("Enter color code (0-RED, 1-GREEN, 2-BLUE): ");
    scanf("%d", (int *)&color);

    switch (color) {
        case RED: printf("Hex Code: #FF0000\n"); break;
        case GREEN: printf("Hex Code: #00FF00\n"); break;
        case BLUE: printf("Hex Code: #0000FF\n"); break;
        default: printf("Invalid color code\n");
    }
    return 0;
}
