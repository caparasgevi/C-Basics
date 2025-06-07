#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {
    char word[50];
    printf("Enter any word without space: ");
    scanf("%s", word);

        int length = strlen(word);
        for (int x = length - 1; x>=0; x--) {
            printf("%c\n", word[x]);
        }
getch();
return 0;
}


