#include<stdio.h>
#include<conio.h>

int main() {
int num1, num2;
printf("Enter first number: ");
scanf("%d", &num1);
printf("Enter second number: ");
scanf("%d", &num2);
if(num1>num2){
    printf("First number is greater than second number.");
}
else if (num1<num2){
    printf("The second number is greater than first number.");
}
else {
    printf("Both numbers are equal");
}
return 0;
}
