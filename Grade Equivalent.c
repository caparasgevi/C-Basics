#include <stdio.h>

int main() {
    int grd;

    do {
        printf("Enter your grade: ");
        scanf("%d", &grd);

        if (grd >= 97 && grd <= 100) {
            printf("Your equivalent grade is 1.00");
        } else if (grd >= 94 && grd <= 96) {
            printf("Your grade is 1.25");
        } else if (grd >= 91 && grd <= 93) {
            printf("Your grade is 1.50");
        } else if (grd >= 88 && grd <= 90) {
            printf("Your grade is 1.75");
        } else if (grd >= 85 && grd <= 87) {
            printf("Your grade is 2.00");
        } else if (grd >= 82 && grd <= 84) {
            printf("Your grade is 2.25");
        } else if (grd >= 79 && grd <= 81) {
            printf("Your grade is 2.50");
        } else if (grd >= 76 && grd <= 78) {
            printf("Your grade is 2.75");
        } else if (grd >= 75) {
            printf("Your grade is 3.00");
        } else if (grd > 0) {
            printf("Your grade is 5.00");
        } else {
            printf("Invalid input. Please enter another grade.");
        }
        printf("\n");
    } while (grd > 0); // Loop continues only if grd is positive

    return 0;
}


