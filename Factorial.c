#include <stdio.h>

int main() {
    int number, factorial = 1;

    // Input number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is negative
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial using a while loop
        while (number > 0) {
            factorial *= number;
            number--;
        }
        printf("Factorial: %d\n", factorial);
    }

    return 0;
}


