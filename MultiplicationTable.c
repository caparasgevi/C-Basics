#include<stdio.h>
#include<conio.h>

int main() {
   int x;
   printf("Input the number: \n");
   scanf("%d", &x);
   for (int i = 1; i <= x; i++) {
        for (int j =1; j <=x; j++) {
    printf("%d * %d = %d, ", j, i, j * i);
   }
   printf("\n"); }
return 0;
}

