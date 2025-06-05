#include<stdio.h>
#include<conio.h>

int main() {
   int x, y, i;
   printf("Enter starting number: ");
   scanf("%d", &x);
   printf("Enter ending number: ");
   scanf("%d", &y);
   i = x;
   do {
    printf("%d ", i);
    i++;
   } while (i <= y);

getch();
return 0;
}
