#include <stdio.h>

int main() {
    // Step 1: START
    // Step 2: DECLARE sum, smallest, largest, num1, num2, num3, num4, num5, ave
    int sum, smallest, largest, num1, num2, num3, num4, num5;
    float ave;

    // Step 3: READ num1, num2, num3, num4, num5
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    // Step 4: sum = num1 + num2 + num3 + num4 + num5
    sum = num1 + num2 + num3 + num4 + num5;

    // Step 5: ave = sum / 5
    ave = (float)sum / 5;

    // Step 6: smallest = MIN(num1, num2, num3, num4, num5)
    // Step 6: smallest = MIN(num1, num2, num3, num4, num5)
if (num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5) {
    smallest = num1;
} else if (num2 < num3 && num2 < num4 && num2 < num5) {
    smallest = num2;
} else if (num3 < num4 && num3 < num5) {
    smallest = num3;
} else if (num4 < num5) {
    smallest = num4;
} else {
    smallest = num5;
}

    // Step 7: largest = MAX(num1, num2, num3, num4, num5)
    if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5) {
    largest = num1;
} else if (num2 > num3 && num2 > num4 && num2 > num5) {
    largest = num2;
} else if (num3 > num4 && num3 > num5) {
    largest = num3;
} else if (num4 > num5) {
    largest = num4;
} else {
    largest = num5;
}
    // Step 8: DISPLAY "Sum:", sum, "Average:", ave, "Smallest:", smallest, "Largest:", largest
    printf("Sum: %d, Average: %.2f, Smallest: %d, Largest: %d\n", sum, ave, smallest, largest);

    // Step 9: STOP
    return 0;
}
