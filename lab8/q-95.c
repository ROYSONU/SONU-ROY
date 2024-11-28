#include <stdio.h>
#include <string.h>

struct Employee {
    int empNumber;
    char empName[50];
    float basicPay;
};

int main() {
    struct Employee emp[50], *ptr;
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    ptr = emp;

    for (int i = 0; i < n; i++) {
        printf("Enter employee number: ");
        scanf("%d", &(ptr + i)->empNumber);
        printf("Enter employee name: ");
        scanf("%s", (ptr + i)->empName);
        printf("Enter basic pay: ");
        scanf("%f", &(ptr + i)->basicPay);
    }

    printf("\nEmployee Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Emp Number: %d, Name: %s, Basic Pay: %.2f\n",
               (ptr + i)->empNumber, (ptr + i)->empName, (ptr + i)->basicPay);
    }

    return 0;
}
