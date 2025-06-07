#include<stdio.h>

int main(){
    int num1, num2;
    printf("Enter starting number: ");
    scanf("%d", &num1);
    printf("Enter ending number: ");
    scanf("%d", &num2);

    for (int i = num2; i <= num1; i-=2) {
        if (i == 0) {
            printf("%d  ", i);
        }
        }

return 0;
}
