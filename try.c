#include<stdio.h>
#include<conio.h>

int main() {
int grd;
   printf("Enter your grade: ");
   scanf("%d", &grd);

      if (grd<=100 && grd>=97) {
        printf("Your equivalent grade is: 1.00");
      } else if (grd <= 96 && grd >=94) {
      printf("Your equivalent grade is: 1.25");
      } else if (grd <= 93 && grd >=91) {
      printf("Your equivalent grade is: 1.50");
      } else if (grd <= 90 && grd >=88) {
      printf("Your equivalent grade is: 1.75");
      } else if (grd <= 87 && grd >=85) {
      printf("Your equivalent grade is: 2.00");
      } else if (grd <= 84 && grd >=82) {
      printf("Your equivalent grade is: 2.25");
      } else if (grd <= 81 && grd >=79) {
      printf("Your equivalent grade is: 2.50");
      } else if (grd <= 78 && grd >=76) {
      printf("Your equivalent grade is: 2.75");
      } else if (grd == 75) {
      printf("Your equivalent grade is: 3.00");
      } else {
      printf("Invalid input. Please enter your 75-100 grade!");
      }
getch();
return 0;
}
