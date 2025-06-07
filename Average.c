#include<stdio.h>
#include<conio.h>

int main() {
int num1, num2, num3, ave;
printf("Enter first number: ");
scanf("%d", &num1);
printf("Enter second number: ");
scanf("%d", &num2);
printf("Enter third number: ");
scanf("%d", &num3);
ave = (num1+num2+num3) / 3;
printf("The average of the three numbers is %d", ave);
return 0;
}
