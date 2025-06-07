#include<stdio.h>

int main() {
    int id;
    char name[30];
    double unit, amt, add, total;

    printf("Welcome to Electric Bill Calculator!\n");
    printf("------------------------------------\n");
    printf("Enter your id: ");
    scanf("%d", &id);
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your unit consumed: ");
    scanf("%lf", &unit);

    if (unit <= 199) {
        amt = 1.20 * unit;
        printf("Amount charges @1.20 usd per unit: %.2lf", amt);
    } else if (unit >= 200 && unit < 400) {
        amt = 1.50 * unit;
        printf("Amount charges @1.50 usd per unit: %.2lf", amt);
    } else if (unit >= 400 && unit < 600) {
        amt = 1.80 * unit;
        printf("Amount charges @1.80 usd per unit: %.2lf\n", amt);
        add = amt * .15;
        printf("Surcharge Amount: %.2lf\n", add);
        total = amt + add;
        printf("Net amount paid by the customer: %.2lf\n", total);
    } else if (unit >= 600) {
        amt = 2.00 * unit;
        printf("Amount charges @2.00 usd per unit: %.2lf\n", amt);
        add = amt * .15;
        printf("Surcharge Amount: %.2lf\n", add);
        total = amt + add;
        printf("Net amount paid by the customer: %.2lf\n", total);
    }


return 0;
}
