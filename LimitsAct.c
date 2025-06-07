#include <stdio.h>
#include <conio.h>

int main() {
    int num1, num2, num3;

    printf("Enter limit 1: ");
    scanf("%d", &num1);
    printf("Enter limit 2: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("Enter your test number: ");
    scanf("%d", &num3);

    if (num3 == num1 || num3 == num2) {
        printf("The number is one of the limits.");
    } else if (num3 < num1 || num3 > num2) {
        printf("Outside the limits.");
    } else {
        printf("Within the limits.");
    }
    getch();
    return 0;
}

