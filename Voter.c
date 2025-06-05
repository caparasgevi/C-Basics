#include<stdio.h>
#include<string.h>

int main() {
    int year, age;
    char month[20];

    printf("Enter the month and year of your birthday.\n");
    printf("Month: ");
    scanf("%s", month);
    printf("Year(YYYY): ");
    scanf("%d", &year);

    age = 2024 - year;
    if (year == 2006) {
    if (strcmp(month, "May") == 0 || strcmp(month, "June") == 0 || strcmp(month, "July") == 0 || strcmp(month, "August") == 0 || strcmp(month, "September") == 0 || strcmp(month, "October") == 0 || strcmp(month, "November") == 0 || strcmp(month, "December") == 0) {
        age--;
    } }
    printf("Your age is: %d\n", age);

    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }


return 0;
}
