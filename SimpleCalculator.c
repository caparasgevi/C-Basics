#include<stdio.h>
#include<conio.h>

int main() {
    int num1, num2;
    float ans;
    char let;

       printf("Enter first number: ");
       scanf("%d", &num1);
       printf("Enter second number:");
       scanf("%d", &num2);

          printf("Choose an operation to perform.\n");
          printf("a. Addition\n");
          printf("b. Subtraction\n");
          printf("c. Multiplication\n");
          printf("d. Division\n");
          printf("Your choice:%c", let);
          scanf(" %c", &let);

             if (let == 'a' || let == 'A') {
                ans = num1 + num2;
                if (ans == (int)ans) {
                    printf("The sum of the two numbers is:%d", (int)ans);
                } else {
                printf("The sum of the two numbers is:%.1f", ans);}
             }
             if (let == 'b' || let == 'B') {
                ans = num1 - num2;
                if (ans == (int)ans) {
                    printf("The difference of the two numbers is:%d", (int)ans);
                } else {
                printf("The difference of the two numbers is:%.1f", ans);}
             }
             if (let == 'c' || let == 'C') {
                ans = num1 * num2;
                if (ans == (int)ans) {
                    printf("The product of the two numbers is:%d", (int)ans);
                } else {
                printf("The product of the two numbers is:%.1f", ans);}
             }
             if (let == 'd' || let == 'D') {
                if (num2 != 0) {
                ans = (float)num1 / num2;
                    if (ans == (int)ans) {
                    printf("The quotient of the two numbers is:%d", (int)ans);
                    } else {
                    printf("The quotient of the two numbers is:%.1f", ans);}
                } else {
                printf("The division of zero is undefined.");}
             }

getch();
return 0;
}
