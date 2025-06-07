#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() {
    int side1, side2, side3;
    printf("Enter side 1 length: ");
    scanf("%d", &side1);
    printf("Enter side 2 length: ");
    scanf("%d", &side2);
    printf("Enter side 3 length: ");
    scanf("%d", &side3);

    if (side1 == side2 && side2 == side3) {
        printf("The triangle is classified as Equilateral Triangle.");
    } else if (side1 == side2 || side1 == side3 || side2==side3) {
        printf("The triangle is classified as Isosceles Triangle.");
    } else {
        printf("The triangle is classified as Scalene Triangle.");
    }

getch();
return 0;
}
